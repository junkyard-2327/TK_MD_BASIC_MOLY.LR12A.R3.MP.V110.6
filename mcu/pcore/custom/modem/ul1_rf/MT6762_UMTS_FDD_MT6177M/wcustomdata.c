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
 *	wcustomdata.c
 *
 * Project:
 * --------
 *  Dual Mode 3G project
 *
 * Description:
 * ------------
 *  Dynamic RF parameters data input file
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/

#ifdef __MTK_TARGET__

/*******************************************************************************
** Includes
*******************************************************************************/
#include "wcustomdata.h"
#include "ul1cal.h"
#include "ul1d_rf_common.h"
#include "ul1d_rf_public.h"

#if (IS_3G_DRDI_SUPPORT)

#if !(UL1CUSTOM_DRDI_ENABLE)
#include "ul1d_custom_rf.h"
#include "ul1d_custom_rf_tas.h"
#include "ul1d_custom_rf_dat.h"
#include "ul1d_custom_rf_dpd.h"
#endif

#if UL1CUSTOM_DRDI_ENABLE
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 0
      /*Include build for Set0 custom folder*/
#include "DRDI/Set0/ul1d_custom_rf.h"
#include "DRDI/Set0/ul1d_custom_rf_ca.h"
#include "DRDI/Set0/ul1d_custom_mipi.h"
#include "DRDI/Set0/u12193.c"
#include "DRDI/Set0/ul1d_custom_mipi.c"
#include "DRDI/Set0/ul1d_custom_rf.c"
#include "DRDI/Set0/ul1d_custom_mipi_ca.c"
#include "DRDI/Set0/ul1d_custom_rf_tas.h"
#include "DRDI/Set0/ul1d_custom_rf_tas.c"
#include "DRDI/Set0/ul1d_custom_rf_dat.h"
#include "DRDI/Set0/ul1d_custom_rf_dat.c"
#include "DRDI/Set0/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set0/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set0/ul1d_custom_rf_dpd.h"
#include "DRDI/Set0/ul1d_custom_rf_dpd.c"
#include "DRDI/Set0/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 1
   /*Include build for Set1 custom folder*/
#include "DRDI/Set1/ul1d_custom_rf.h"
#include "DRDI/Set1/ul1d_custom_rf_ca.h"
#include "DRDI/Set1/ul1d_custom_mipi.h"
#include "DRDI/Set1/u12193.c"
#include "DRDI/Set1/ul1d_custom_mipi.c"
#include "DRDI/Set1/ul1d_custom_rf.c"
#include "DRDI/Set1/ul1d_custom_mipi_ca.c"
#include "DRDI/Set1/ul1d_custom_rf_tas.h"
#include "DRDI/Set1/ul1d_custom_rf_tas.c"
#include "DRDI/Set1/ul1d_custom_rf_dat.h"
#include "DRDI/Set1/ul1d_custom_rf_dat.c"
#include "DRDI/Set1/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set1/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set1/ul1d_custom_rf_dpd.h"
#include "DRDI/Set1/ul1d_custom_rf_dpd.c"
#include "DRDI/Set1/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 2
   /*Include build for Set2 custom folder*/
#include "DRDI/Set2/ul1d_custom_rf.h"
#include "DRDI/Set2/ul1d_custom_rf_ca.h"
#include "DRDI/Set2/ul1d_custom_mipi.h"
#include "DRDI/Set2/u12193.c"
#include "DRDI/Set2/ul1d_custom_mipi.c"
#include "DRDI/Set2/ul1d_custom_rf.c"
#include "DRDI/Set2/ul1d_custom_mipi_ca.c"
#include "DRDI/Set2/ul1d_custom_rf_tas.h"
#include "DRDI/Set2/ul1d_custom_rf_tas.c"
#include "DRDI/Set2/ul1d_custom_rf_dat.h"
#include "DRDI/Set2/ul1d_custom_rf_dat.c"
#include "DRDI/Set2/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set2/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set2/ul1d_custom_rf_dpd.h"
#include "DRDI/Set2/ul1d_custom_rf_dpd.c"
#include "DRDI/Set2/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 3
   /*Include build for Set3 custom folder*/
#include "DRDI/Set3/ul1d_custom_rf.h"
#include "DRDI/Set3/ul1d_custom_rf_ca.h"
#include "DRDI/Set3/ul1d_custom_mipi.h"
#include "DRDI/Set3/u12193.c"
#include "DRDI/Set3/ul1d_custom_mipi.c"
#include "DRDI/Set3/ul1d_custom_rf.c"
#include "DRDI/Set3/ul1d_custom_mipi_ca.c"
#include "DRDI/Set3/ul1d_custom_rf_tas.h"
#include "DRDI/Set3/ul1d_custom_rf_tas.c"
#include "DRDI/Set3/ul1d_custom_rf_dat.h"
#include "DRDI/Set3/ul1d_custom_rf_dat.c"
#include "DRDI/Set3/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set3/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set3/ul1d_custom_rf_dpd.h"
#include "DRDI/Set3/ul1d_custom_rf_dpd.c"
#include "DRDI/Set3/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 4
   /*Include build for Set4 custom folder*/
#include "DRDI/Set4/ul1d_custom_rf.h"
#include "DRDI/Set4/ul1d_custom_rf_ca.h"
#include "DRDI/Set4/ul1d_custom_mipi.h"
#include "DRDI/Set4/u12193.c"
#include "DRDI/Set4/ul1d_custom_mipi.c"
#include "DRDI/Set4/ul1d_custom_rf.c"
#include "DRDI/Set4/ul1d_custom_mipi_ca.c"
#include "DRDI/Set4/ul1d_custom_rf_tas.h"
#include "DRDI/Set4/ul1d_custom_rf_tas.c"
#include "DRDI/Set4/ul1d_custom_rf_dat.h"
#include "DRDI/Set4/ul1d_custom_rf_dat.c"
#include "DRDI/Set4/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set4/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set4/ul1d_custom_rf_dpd.h"
#include "DRDI/Set4/ul1d_custom_rf_dpd.c"
#include "DRDI/Set4/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 5
   /*Include build for Set5 custom folder*/
#include "DRDI/Set5/ul1d_custom_rf.h"
#include "DRDI/Set5/ul1d_custom_rf_ca.h"
#include "DRDI/Set5/ul1d_custom_mipi.h"
#include "DRDI/Set5/u12193.c"
#include "DRDI/Set5/ul1d_custom_mipi.c"
#include "DRDI/Set5/ul1d_custom_rf.c"
#include "DRDI/Set5/ul1d_custom_mipi_ca.c"
#include "DRDI/Set5/ul1d_custom_rf_tas.h"
#include "DRDI/Set5/ul1d_custom_rf_tas.c"
#include "DRDI/Set5/ul1d_custom_rf_dat.h"
#include "DRDI/Set5/ul1d_custom_rf_dat.c"
#include "DRDI/Set5/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set5/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set5/ul1d_custom_rf_dpd.h"
#include "DRDI/Set5/ul1d_custom_rf_dpd.c"
#include "DRDI/Set5/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 6
   /*Include build for Set6 custom folder*/
#include "DRDI/Set6/ul1d_custom_rf.h"
#include "DRDI/Set6/ul1d_custom_rf_ca.h"
#include "DRDI/Set6/ul1d_custom_mipi.h"
#include "DRDI/Set6/u12193.c"
#include "DRDI/Set6/ul1d_custom_mipi.c"
#include "DRDI/Set6/ul1d_custom_rf.c"
#include "DRDI/Set6/ul1d_custom_mipi_ca.c"
#include "DRDI/Set6/ul1d_custom_rf_tas.h"
#include "DRDI/Set6/ul1d_custom_rf_tas.c"
#include "DRDI/Set6/ul1d_custom_rf_dat.h"
#include "DRDI/Set6/ul1d_custom_rf_dat.c"
#include "DRDI/Set6/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set6/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set6/ul1d_custom_rf_dpd.h"
#include "DRDI/Set6/ul1d_custom_rf_dpd.c"
#include "DRDI/Set6/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 7
   /*Include build for Set7 custom folder*/
#include "DRDI/Set7/ul1d_custom_rf.h"
#include "DRDI/Set7/ul1d_custom_rf_ca.h"
#include "DRDI/Set7/ul1d_custom_mipi.h"
#include "DRDI/Set7/u12193.c"
#include "DRDI/Set7/ul1d_custom_mipi.c"
#include "DRDI/Set7/ul1d_custom_rf.c"
#include "DRDI/Set7/ul1d_custom_mipi_ca.c"
#include "DRDI/Set7/ul1d_custom_rf_tas.h"
#include "DRDI/Set7/ul1d_custom_rf_tas.c"
#include "DRDI/Set7/ul1d_custom_rf_dat.h"
#include "DRDI/Set7/ul1d_custom_rf_dat.c"
#include "DRDI/Set7/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set7/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set7/ul1d_custom_rf_dpd.h"
#include "DRDI/Set7/ul1d_custom_rf_dpd.c"
#include "DRDI/Set7/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 8
   /*Include build for Set8 custom folder*/
#include "DRDI/Set8/ul1d_custom_rf.h"
#include "DRDI/Set8/ul1d_custom_rf_ca.h"
#include "DRDI/Set8/ul1d_custom_mipi.h"
#include "DRDI/Set8/u12193.c"
#include "DRDI/Set8/ul1d_custom_mipi.c"
#include "DRDI/Set8/ul1d_custom_rf.c"
#include "DRDI/Set8/ul1d_custom_mipi_ca.c"
#include "DRDI/Set8/ul1d_custom_rf_tas.h"
#include "DRDI/Set8/ul1d_custom_rf_tas.c"
#include "DRDI/Set8/ul1d_custom_rf_dat.h"
#include "DRDI/Set8/ul1d_custom_rf_dat.c"
#include "DRDI/Set8/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set8/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set8/ul1d_custom_rf_dpd.h"
#include "DRDI/Set8/ul1d_custom_rf_dpd.c"
#include "DRDI/Set8/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 9
   /*Include build for Set9 custom folder*/
#include "DRDI/Set9/ul1d_custom_rf.h"
#include "DRDI/Set9/ul1d_custom_rf_ca.h"
#include "DRDI/Set9/ul1d_custom_mipi.h"
#include "DRDI/Set9/u12193.c"
#include "DRDI/Set9/ul1d_custom_mipi.c"
#include "DRDI/Set9/ul1d_custom_rf.c"
#include "DRDI/Set9/ul1d_custom_mipi_ca.c"
#include "DRDI/Set9/ul1d_custom_rf_tas.h"
#include "DRDI/Set9/ul1d_custom_rf_tas.c"
#include "DRDI/Set9/ul1d_custom_rf_dat.h"
#include "DRDI/Set9/ul1d_custom_rf_dat.c"
#include "DRDI/Set9/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set9/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set9/ul1d_custom_rf_dpd.h"
#include "DRDI/Set9/ul1d_custom_rf_dpd.c"
#include "DRDI/Set9/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 10
   /*Include build for Set10 custom folder*/
#include "DRDI/Set10/ul1d_custom_rf.h"
#include "DRDI/Set10/ul1d_custom_rf_ca.h"
#include "DRDI/Set10/ul1d_custom_mipi.h"
#include "DRDI/Set10/u12193.c"
#include "DRDI/Set10/ul1d_custom_mipi.c"
#include "DRDI/Set10/ul1d_custom_rf.c"
#include "DRDI/Set10/ul1d_custom_mipi_ca.c"
#include "DRDI/Set10/ul1d_custom_rf_tas.h"
#include "DRDI/Set10/ul1d_custom_rf_tas.c"
#include "DRDI/Set10/ul1d_custom_rf_dat.h"
#include "DRDI/Set10/ul1d_custom_rf_dat.c"
#include "DRDI/Set10/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set10/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set10/ul1d_custom_rf_dpd.h"
#include "DRDI/Set10/ul1d_custom_rf_dpd.c"
#include "DRDI/Set10/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 11
   /*Include build for Set11 custom folder*/
#include "DRDI/Set11/ul1d_custom_rf.h"
#include "DRDI/Set11/ul1d_custom_rf_ca.h"
#include "DRDI/Set11/ul1d_custom_mipi.h"
#include "DRDI/Set11/u12193.c"
#include "DRDI/Set11/ul1d_custom_mipi.c"
#include "DRDI/Set11/ul1d_custom_rf.c"
#include "DRDI/Set11/ul1d_custom_mipi_ca.c"
#include "DRDI/Set11/ul1d_custom_rf_tas.h"
#include "DRDI/Set11/ul1d_custom_rf_tas.c"
#include "DRDI/Set11/ul1d_custom_rf_dat.h"
#include "DRDI/Set11/ul1d_custom_rf_dat.c"
#include "DRDI/Set11/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set11/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set11/ul1d_custom_rf_dpd.h"
#include "DRDI/Set11/ul1d_custom_rf_dpd.c"
#include "DRDI/Set11/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 12
   /*Include build for Set12 custom folder*/
#include "DRDI/Set12/ul1d_custom_rf.h"
#include "DRDI/Set12/ul1d_custom_rf_ca.h"
#include "DRDI/Set12/ul1d_custom_mipi.h"
#include "DRDI/Set12/u12193.c"
#include "DRDI/Set12/ul1d_custom_mipi.c"
#include "DRDI/Set12/ul1d_custom_rf.c"
#include "DRDI/Set12/ul1d_custom_mipi_ca.c"
#include "DRDI/Set12/ul1d_custom_rf_tas.h"
#include "DRDI/Set12/ul1d_custom_rf_tas.c"
#include "DRDI/Set12/ul1d_custom_rf_dat.h"
#include "DRDI/Set12/ul1d_custom_rf_dat.c"
#include "DRDI/Set12/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set12/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set12/ul1d_custom_rf_dpd.h"
#include "DRDI/Set12/ul1d_custom_rf_dpd.c"
#include "DRDI/Set12/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 13
   /*Include build for Set13 custom folder*/
#include "DRDI/Set13/ul1d_custom_rf.h"
#include "DRDI/Set13/ul1d_custom_rf_ca.h"
#include "DRDI/Set13/ul1d_custom_mipi.h"
#include "DRDI/Set13/u12193.c"
#include "DRDI/Set13/ul1d_custom_mipi.c"
#include "DRDI/Set13/ul1d_custom_rf.c"
#include "DRDI/Set13/ul1d_custom_mipi_ca.c"
#include "DRDI/Set13/ul1d_custom_rf_tas.h"
#include "DRDI/Set13/ul1d_custom_rf_tas.c"
#include "DRDI/Set13/ul1d_custom_rf_dat.h"
#include "DRDI/Set13/ul1d_custom_rf_dat.c"
#include "DRDI/Set13/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set13/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set13/ul1d_custom_rf_dpd.h"
#include "DRDI/Set13/ul1d_custom_rf_dpd.c"
#include "DRDI/Set13/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 14
   /*Include build for Set14 custom folder*/
#include "DRDI/Set14/ul1d_custom_rf.h"
#include "DRDI/Set14/ul1d_custom_rf_ca.h"
#include "DRDI/Set14/ul1d_custom_mipi.h"
#include "DRDI/Set14/u12193.c"
#include "DRDI/Set14/ul1d_custom_mipi.c"
#include "DRDI/Set14/ul1d_custom_rf.c"
#include "DRDI/Set14/ul1d_custom_mipi_ca.c"
#include "DRDI/Set14/ul1d_custom_rf_tas.h"
#include "DRDI/Set14/ul1d_custom_rf_tas.c"
#include "DRDI/Set14/ul1d_custom_rf_dat.h"
#include "DRDI/Set14/ul1d_custom_rf_dat.c"
#include "DRDI/Set14/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set14/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set14/ul1d_custom_rf_dpd.h"
#include "DRDI/Set14/ul1d_custom_rf_dpd.c"
#include "DRDI/Set14/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 15
   /*Include build for Set15 custom folder*/
#include "DRDI/Set15/ul1d_custom_rf.h"
#include "DRDI/Set15/ul1d_custom_rf_ca.h"
#include "DRDI/Set15/ul1d_custom_mipi.h"
#include "DRDI/Set15/u12193.c"
#include "DRDI/Set15/ul1d_custom_mipi.c"
#include "DRDI/Set15/ul1d_custom_rf.c"
#include "DRDI/Set15/ul1d_custom_mipi_ca.c"
#include "DRDI/Set15/ul1d_custom_rf_tas.h"
#include "DRDI/Set15/ul1d_custom_rf_tas.c"
#include "DRDI/Set15/ul1d_custom_rf_dat.h"
#include "DRDI/Set15/ul1d_custom_rf_dat.c"
#include "DRDI/Set15/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set15/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set15/ul1d_custom_rf_dpd.h"
#include "DRDI/Set15/ul1d_custom_rf_dpd.c"
#include "DRDI/Set15/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 16
   /*Include build for Set16 custom folder*/
#include "DRDI/Set16/ul1d_custom_rf.h"
#include "DRDI/Set16/ul1d_custom_rf_ca.h"
#include "DRDI/Set16/ul1d_custom_mipi.h"
#include "DRDI/Set16/u12193.c"
#include "DRDI/Set16/ul1d_custom_mipi.c"
#include "DRDI/Set16/ul1d_custom_rf.c"
#include "DRDI/Set16/ul1d_custom_mipi_ca.c"
#include "DRDI/Set16/ul1d_custom_rf_tas.h"
#include "DRDI/Set16/ul1d_custom_rf_tas.c"
#include "DRDI/Set16/ul1d_custom_rf_dat.h"
#include "DRDI/Set16/ul1d_custom_rf_dat.c"
#include "DRDI/Set16/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set16/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set16/ul1d_custom_rf_dpd.h"
#include "DRDI/Set16/ul1d_custom_rf_dpd.c"
#include "DRDI/Set16/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 17
   /*Include build for Set17 custom folder*/
#include "DRDI/Set17/ul1d_custom_rf.h"
#include "DRDI/Set17/ul1d_custom_rf_ca.h"
#include "DRDI/Set17/ul1d_custom_mipi.h"
#include "DRDI/Set17/u12193.c"
#include "DRDI/Set17/ul1d_custom_mipi.c"
#include "DRDI/Set17/ul1d_custom_rf.c"
#include "DRDI/Set17/ul1d_custom_mipi_ca.c"
#include "DRDI/Set17/ul1d_custom_rf_tas.h"
#include "DRDI/Set17/ul1d_custom_rf_tas.c"
#include "DRDI/Set17/ul1d_custom_rf_dat.h"
#include "DRDI/Set17/ul1d_custom_rf_dat.c"
#include "DRDI/Set17/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set17/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set17/ul1d_custom_rf_dpd.h"
#include "DRDI/Set17/ul1d_custom_rf_dpd.c"
#include "DRDI/Set17/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 18
   /*Include build for Set18 custom folder*/
#include "DRDI/Set18/ul1d_custom_rf.h"
#include "DRDI/Set18/ul1d_custom_rf_ca.h"
#include "DRDI/Set18/ul1d_custom_mipi.h"
#include "DRDI/Set18/u12193.c"
#include "DRDI/Set18/ul1d_custom_mipi.c"
#include "DRDI/Set18/ul1d_custom_rf.c"
#include "DRDI/Set18/ul1d_custom_mipi_ca.c"
#include "DRDI/Set18/ul1d_custom_rf_tas.h"
#include "DRDI/Set18/ul1d_custom_rf_tas.c"
#include "DRDI/Set18/ul1d_custom_rf_dat.h"
#include "DRDI/Set18/ul1d_custom_rf_dat.c"
#include "DRDI/Set18/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set18/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set18/ul1d_custom_rf_dpd.h"
#include "DRDI/Set18/ul1d_custom_rf_dpd.c"
#include "DRDI/Set18/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 19
   /*Include build for Set19 custom folder*/
#include "DRDI/Set19/ul1d_custom_rf.h"
#include "DRDI/Set19/ul1d_custom_rf_ca.h"
#include "DRDI/Set19/ul1d_custom_mipi.h"
#include "DRDI/Set19/u12193.c"
#include "DRDI/Set19/ul1d_custom_mipi.c"
#include "DRDI/Set19/ul1d_custom_rf.c"
#include "DRDI/Set19/ul1d_custom_mipi_ca.c"
#include "DRDI/Set19/ul1d_custom_rf_tas.h"
#include "DRDI/Set19/ul1d_custom_rf_tas.c"
#include "DRDI/Set19/ul1d_custom_rf_dat.h"
#include "DRDI/Set19/ul1d_custom_rf_dat.c"
#include "DRDI/Set19/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set19/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set19/ul1d_custom_rf_dpd.h"
#include "DRDI/Set19/ul1d_custom_rf_dpd.c"
#include "DRDI/Set19/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 20
   /*Include build for Set20 custom folder*/
#include "DRDI/Set20/ul1d_custom_rf.h"
#include "DRDI/Set20/ul1d_custom_rf_ca.h"
#include "DRDI/Set20/ul1d_custom_mipi.h"
#include "DRDI/Set20/u12193.c"
#include "DRDI/Set20/ul1d_custom_mipi.c"
#include "DRDI/Set20/ul1d_custom_rf.c"
#include "DRDI/Set20/ul1d_custom_mipi_ca.c"
#include "DRDI/Set20/ul1d_custom_rf_tas.h"
#include "DRDI/Set20/ul1d_custom_rf_tas.c"
#include "DRDI/Set20/ul1d_custom_rf_dat.h"
#include "DRDI/Set20/ul1d_custom_rf_dat.c"
#include "DRDI/Set20/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set20/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set20/ul1d_custom_rf_dpd.h"
#include "DRDI/Set20/ul1d_custom_rf_dpd.c"
#include "DRDI/Set20/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 21
   /*Include build for Set21 custom folder*/
#include "DRDI/Set21/ul1d_custom_rf.h"
#include "DRDI/Set21/ul1d_custom_rf_ca.h"
#include "DRDI/Set21/ul1d_custom_mipi.h"
#include "DRDI/Set21/u12193.c"
#include "DRDI/Set21/ul1d_custom_mipi.c"
#include "DRDI/Set21/ul1d_custom_rf.c"
#include "DRDI/Set21/ul1d_custom_mipi_ca.c"
#include "DRDI/Set21/ul1d_custom_rf_tas.h"
#include "DRDI/Set21/ul1d_custom_rf_tas.c"
#include "DRDI/Set21/ul1d_custom_rf_dat.h"
#include "DRDI/Set21/ul1d_custom_rf_dat.c"
#include "DRDI/Set21/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set21/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set21/ul1d_custom_rf_dpd.h"
#include "DRDI/Set21/ul1d_custom_rf_dpd.c"
#include "DRDI/Set21/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 22
   /*Include build for Set22 custom folder*/
#include "DRDI/Set22/ul1d_custom_rf.h"
#include "DRDI/Set22/ul1d_custom_rf_ca.h"
#include "DRDI/Set22/ul1d_custom_mipi.h"
#include "DRDI/Set22/u12193.c"
#include "DRDI/Set22/ul1d_custom_mipi.c"
#include "DRDI/Set22/ul1d_custom_rf.c"
#include "DRDI/Set22/ul1d_custom_mipi_ca.c"
#include "DRDI/Set22/ul1d_custom_rf_tas.h"
#include "DRDI/Set22/ul1d_custom_rf_tas.c"
#include "DRDI/Set22/ul1d_custom_rf_dat.h"
#include "DRDI/Set22/ul1d_custom_rf_dat.c"
#include "DRDI/Set22/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set22/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set22/ul1d_custom_rf_dpd.h"
#include "DRDI/Set22/ul1d_custom_rf_dpd.c"
#include "DRDI/Set22/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 23
   /*Include build for Set23 custom folder*/
#include "DRDI/Set23/ul1d_custom_rf.h"
#include "DRDI/Set23/ul1d_custom_rf_ca.h"
#include "DRDI/Set23/ul1d_custom_mipi.h"
#include "DRDI/Set23/u12193.c"
#include "DRDI/Set23/ul1d_custom_mipi.c"
#include "DRDI/Set23/ul1d_custom_rf.c"
#include "DRDI/Set23/ul1d_custom_mipi_ca.c"
#include "DRDI/Set23/ul1d_custom_rf_tas.h"
#include "DRDI/Set23/ul1d_custom_rf_tas.c"
#include "DRDI/Set23/ul1d_custom_rf_dat.h"
#include "DRDI/Set23/ul1d_custom_rf_dat.c"
#include "DRDI/Set23/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set23/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set23/ul1d_custom_rf_dpd.h"
#include "DRDI/Set23/ul1d_custom_rf_dpd.c"
#include "DRDI/Set23/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 24
   /*Include build for Set24 custom folder*/
#include "DRDI/Set24/ul1d_custom_rf.h"
#include "DRDI/Set24/ul1d_custom_rf_ca.h"
#include "DRDI/Set24/ul1d_custom_mipi.h"
#include "DRDI/Set24/u12193.c"
#include "DRDI/Set24/ul1d_custom_mipi.c"
#include "DRDI/Set24/ul1d_custom_rf.c"
#include "DRDI/Set24/ul1d_custom_mipi_ca.c"
#include "DRDI/Set24/ul1d_custom_rf_tas.h"
#include "DRDI/Set24/ul1d_custom_rf_tas.c"
#include "DRDI/Set24/ul1d_custom_rf_dat.h"
#include "DRDI/Set24/ul1d_custom_rf_dat.c"
#include "DRDI/Set24/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set24/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set24/ul1d_custom_rf_dpd.h"
#include "DRDI/Set24/ul1d_custom_rf_dpd.c"
#include "DRDI/Set24/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 25
   /*Include build for Set25 custom folder*/
#include "DRDI/Set25/ul1d_custom_rf.h"
#include "DRDI/Set25/ul1d_custom_rf_ca.h"
#include "DRDI/Set25/ul1d_custom_mipi.h"
#include "DRDI/Set25/u12193.c"
#include "DRDI/Set25/ul1d_custom_mipi.c"
#include "DRDI/Set25/ul1d_custom_rf.c"
#include "DRDI/Set25/ul1d_custom_mipi_ca.c"
#include "DRDI/Set25/ul1d_custom_rf_tas.h"
#include "DRDI/Set25/ul1d_custom_rf_tas.c"
#include "DRDI/Set25/ul1d_custom_rf_dat.h"
#include "DRDI/Set25/ul1d_custom_rf_dat.c"
#include "DRDI/Set25/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set25/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set25/ul1d_custom_rf_dpd.h"
#include "DRDI/Set25/ul1d_custom_rf_dpd.c"
#include "DRDI/Set25/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 26
   /*Include build for Set26 custom folder*/
#include "DRDI/Set26/ul1d_custom_rf.h"
#include "DRDI/Set26/ul1d_custom_rf_ca.h"
#include "DRDI/Set26/ul1d_custom_mipi.h"
#include "DRDI/Set26/u12193.c"
#include "DRDI/Set26/ul1d_custom_mipi.c"
#include "DRDI/Set26/ul1d_custom_rf.c"
#include "DRDI/Set26/ul1d_custom_mipi_ca.c"
#include "DRDI/Set26/ul1d_custom_rf_tas.h"
#include "DRDI/Set26/ul1d_custom_rf_tas.c"
#include "DRDI/Set26/ul1d_custom_rf_dat.h"
#include "DRDI/Set26/ul1d_custom_rf_dat.c"
#include "DRDI/Set26/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set26/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set26/ul1d_custom_rf_dpd.h"
#include "DRDI/Set26/ul1d_custom_rf_dpd.c"
#include "DRDI/Set26/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 27
   /*Include build for Set27 custom folder*/
#include "DRDI/Set27/ul1d_custom_rf.h"
#include "DRDI/Set27/ul1d_custom_rf_ca.h"
#include "DRDI/Set27/ul1d_custom_mipi.h"
#include "DRDI/Set27/u12193.c"
#include "DRDI/Set27/ul1d_custom_mipi.c"
#include "DRDI/Set27/ul1d_custom_rf.c"
#include "DRDI/Set27/ul1d_custom_mipi_ca.c"
#include "DRDI/Set27/ul1d_custom_rf_tas.h"
#include "DRDI/Set27/ul1d_custom_rf_tas.c"
#include "DRDI/Set27/ul1d_custom_rf_dat.h"
#include "DRDI/Set27/ul1d_custom_rf_dat.c"
#include "DRDI/Set27/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set27/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set27/ul1d_custom_rf_dpd.h"
#include "DRDI/Set27/ul1d_custom_rf_dpd.c"
#include "DRDI/Set27/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 28
   /*Include build for Set28 custom folder*/
#include "DRDI/Set28/ul1d_custom_rf.h"
#include "DRDI/Set28/ul1d_custom_rf_ca.h"
#include "DRDI/Set28/ul1d_custom_mipi.h"
#include "DRDI/Set28/u12193.c"
#include "DRDI/Set28/ul1d_custom_mipi.c"
#include "DRDI/Set28/ul1d_custom_rf.c"
#include "DRDI/Set28/ul1d_custom_mipi_ca.c"
#include "DRDI/Set28/ul1d_custom_rf_tas.h"
#include "DRDI/Set28/ul1d_custom_rf_tas.c"
#include "DRDI/Set28/ul1d_custom_rf_dat.h"
#include "DRDI/Set28/ul1d_custom_rf_dat.c"
#include "DRDI/Set28/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set28/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set28/ul1d_custom_rf_dpd.h"
#include "DRDI/Set28/ul1d_custom_rf_dpd.c"
#include "DRDI/Set28/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 29
   /*Include build for Set29 custom folder*/
#include "DRDI/Set29/ul1d_custom_rf.h"
#include "DRDI/Set29/ul1d_custom_rf_ca.h"
#include "DRDI/Set29/ul1d_custom_mipi.h"
#include "DRDI/Set29/u12193.c"
#include "DRDI/Set29/ul1d_custom_mipi.c"
#include "DRDI/Set29/ul1d_custom_rf.c"
#include "DRDI/Set29/ul1d_custom_mipi_ca.c"
#include "DRDI/Set29/ul1d_custom_rf_tas.h"
#include "DRDI/Set29/ul1d_custom_rf_tas.c"
#include "DRDI/Set29/ul1d_custom_rf_dat.h"
#include "DRDI/Set29/ul1d_custom_rf_dat.c"
#include "DRDI/Set29/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set29/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set29/ul1d_custom_rf_dpd.h"
#include "DRDI/Set29/ul1d_custom_rf_dpd.c"
#include "DRDI/Set29/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 30
   /*Include build for Set30 custom folder*/
#include "DRDI/Set30/ul1d_custom_rf.h"
#include "DRDI/Set30/ul1d_custom_rf_ca.h"
#include "DRDI/Set30/ul1d_custom_mipi.h"
#include "DRDI/Set30/u12193.c"
#include "DRDI/Set30/ul1d_custom_mipi.c"
#include "DRDI/Set30/ul1d_custom_rf.c"
#include "DRDI/Set30/ul1d_custom_mipi_ca.c"
#include "DRDI/Set30/ul1d_custom_rf_tas.h"
#include "DRDI/Set30/ul1d_custom_rf_tas.c"
#include "DRDI/Set30/ul1d_custom_rf_dat.h"
#include "DRDI/Set30/ul1d_custom_rf_dat.c"
#include "DRDI/Set30/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set30/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set30/ul1d_custom_rf_dpd.h"
#include "DRDI/Set30/ul1d_custom_rf_dpd.c"
#include "DRDI/Set30/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 31
   /*Include build for Set31 custom folder*/
#include "DRDI/Set31/ul1d_custom_rf.h"
#include "DRDI/Set31/ul1d_custom_rf_ca.h"
#include "DRDI/Set31/ul1d_custom_mipi.h"
#include "DRDI/Set31/u12193.c"
#include "DRDI/Set31/ul1d_custom_mipi.c"
#include "DRDI/Set31/ul1d_custom_rf.c"
#include "DRDI/Set31/ul1d_custom_mipi_ca.c"
#include "DRDI/Set31/ul1d_custom_rf_tas.h"
#include "DRDI/Set31/ul1d_custom_rf_tas.c"
#include "DRDI/Set31/ul1d_custom_rf_dat.h"
#include "DRDI/Set31/ul1d_custom_rf_dat.c"
#include "DRDI/Set31/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set31/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set31/ul1d_custom_rf_dpd.h"
#include "DRDI/Set31/ul1d_custom_rf_dpd.c"
#include "DRDI/Set31/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 32
   /*Include build for Set32 custom folder*/
#include "DRDI/Set32/ul1d_custom_rf.h"
#include "DRDI/Set32/ul1d_custom_rf_ca.h"
#include "DRDI/Set32/ul1d_custom_mipi.h"
#include "DRDI/Set32/u12193.c"
#include "DRDI/Set32/ul1d_custom_mipi.c"
#include "DRDI/Set32/ul1d_custom_rf.c"
#include "DRDI/Set32/ul1d_custom_mipi_ca.c"
#include "DRDI/Set32/ul1d_custom_rf_tas.h"
#include "DRDI/Set32/ul1d_custom_rf_tas.c"
#include "DRDI/Set32/ul1d_custom_rf_dat.h"
#include "DRDI/Set32/ul1d_custom_rf_dat.c"
#include "DRDI/Set32/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set32/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set32/ul1d_custom_rf_dpd.h"
#include "DRDI/Set32/ul1d_custom_rf_dpd.c"
#include "DRDI/Set32/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 33
   /*Include build for Set33 custom folder*/
#include "DRDI/Set33/ul1d_custom_rf.h"
#include "DRDI/Set33/ul1d_custom_rf_ca.h"
#include "DRDI/Set33/ul1d_custom_mipi.h"
#include "DRDI/Set33/u12193.c"
#include "DRDI/Set33/ul1d_custom_mipi.c"
#include "DRDI/Set33/ul1d_custom_rf.c"
#include "DRDI/Set33/ul1d_custom_mipi_ca.c"
#include "DRDI/Set33/ul1d_custom_rf_tas.h"
#include "DRDI/Set33/ul1d_custom_rf_tas.c"
#include "DRDI/Set33/ul1d_custom_rf_dat.h"
#include "DRDI/Set33/ul1d_custom_rf_dat.c"
#include "DRDI/Set33/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set33/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set33/ul1d_custom_rf_dpd.h"
#include "DRDI/Set33/ul1d_custom_rf_dpd.c"
#include "DRDI/Set33/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 34
   /*Include build for Set34 custom folder*/
#include "DRDI/Set34/ul1d_custom_rf.h"
#include "DRDI/Set34/ul1d_custom_rf_ca.h"
#include "DRDI/Set34/ul1d_custom_mipi.h"
#include "DRDI/Set34/u12193.c"
#include "DRDI/Set34/ul1d_custom_mipi.c"
#include "DRDI/Set34/ul1d_custom_rf.c"
#include "DRDI/Set34/ul1d_custom_mipi_ca.c"
#include "DRDI/Set34/ul1d_custom_rf_tas.h"
#include "DRDI/Set34/ul1d_custom_rf_tas.c"
#include "DRDI/Set34/ul1d_custom_rf_dat.h"
#include "DRDI/Set34/ul1d_custom_rf_dat.c"
#include "DRDI/Set34/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set34/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set34/ul1d_custom_rf_dpd.h"
#include "DRDI/Set34/ul1d_custom_rf_dpd.c"
#include "DRDI/Set34/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 35
   /*Include build for Set35 custom folder*/
#include "DRDI/Set35/ul1d_custom_rf.h"
#include "DRDI/Set35/ul1d_custom_rf_ca.h"
#include "DRDI/Set35/ul1d_custom_mipi.h"
#include "DRDI/Set35/u12193.c"
#include "DRDI/Set35/ul1d_custom_mipi.c"
#include "DRDI/Set35/ul1d_custom_rf.c"
#include "DRDI/Set35/ul1d_custom_mipi_ca.c"
#include "DRDI/Set35/ul1d_custom_rf_tas.h"
#include "DRDI/Set35/ul1d_custom_rf_tas.c"
#include "DRDI/Set35/ul1d_custom_rf_dat.h"
#include "DRDI/Set35/ul1d_custom_rf_dat.c"
#include "DRDI/Set35/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set35/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set35/ul1d_custom_rf_dpd.h"
#include "DRDI/Set35/ul1d_custom_rf_dpd.c"
#include "DRDI/Set35/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 36
   /*Include build for Set36 custom folder*/
#include "DRDI/Set36/ul1d_custom_rf.h"
#include "DRDI/Set36/ul1d_custom_rf_ca.h"
#include "DRDI/Set36/ul1d_custom_mipi.h"
#include "DRDI/Set36/u12193.c"
#include "DRDI/Set36/ul1d_custom_mipi.c"
#include "DRDI/Set36/ul1d_custom_rf.c"
#include "DRDI/Set36/ul1d_custom_mipi_ca.c"
#include "DRDI/Set36/ul1d_custom_rf_tas.h"
#include "DRDI/Set36/ul1d_custom_rf_tas.c"
#include "DRDI/Set36/ul1d_custom_rf_dat.h"
#include "DRDI/Set36/ul1d_custom_rf_dat.c"
#include "DRDI/Set36/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set36/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set36/ul1d_custom_rf_dpd.h"
#include "DRDI/Set36/ul1d_custom_rf_dpd.c"
#include "DRDI/Set36/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 37
   /*Include build for Set37 custom folder*/
#include "DRDI/Set37/ul1d_custom_rf.h"
#include "DRDI/Set37/ul1d_custom_rf_ca.h"
#include "DRDI/Set37/ul1d_custom_mipi.h"
#include "DRDI/Set37/u12193.c"
#include "DRDI/Set37/ul1d_custom_mipi.c"
#include "DRDI/Set37/ul1d_custom_rf.c"
#include "DRDI/Set37/ul1d_custom_mipi_ca.c"
#include "DRDI/Set37/ul1d_custom_rf_tas.h"
#include "DRDI/Set37/ul1d_custom_rf_tas.c"
#include "DRDI/Set37/ul1d_custom_rf_dat.h"
#include "DRDI/Set37/ul1d_custom_rf_dat.c"
#include "DRDI/Set37/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set37/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set37/ul1d_custom_rf_dpd.h"
#include "DRDI/Set37/ul1d_custom_rf_dpd.c"
#include "DRDI/Set37/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 38
   /*Include build for Set38 custom folder*/
#include "DRDI/Set38/ul1d_custom_rf.h"
#include "DRDI/Set38/ul1d_custom_rf_ca.h"
#include "DRDI/Set38/ul1d_custom_mipi.h"
#include "DRDI/Set38/u12193.c"
#include "DRDI/Set38/ul1d_custom_mipi.c"
#include "DRDI/Set38/ul1d_custom_rf.c"
#include "DRDI/Set38/ul1d_custom_mipi_ca.c"
#include "DRDI/Set38/ul1d_custom_rf_tas.h"
#include "DRDI/Set38/ul1d_custom_rf_tas.c"
#include "DRDI/Set38/ul1d_custom_rf_dat.h"
#include "DRDI/Set38/ul1d_custom_rf_dat.c"
#include "DRDI/Set38/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set38/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set38/ul1d_custom_rf_dpd.h"
#include "DRDI/Set38/ul1d_custom_rf_dpd.c"
#include "DRDI/Set38/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 39
   /*Include build for Set39 custom folder*/
#include "DRDI/Set39/ul1d_custom_rf.h"
#include "DRDI/Set39/ul1d_custom_rf_ca.h"
#include "DRDI/Set39/ul1d_custom_mipi.h"
#include "DRDI/Set39/u12193.c"
#include "DRDI/Set39/ul1d_custom_mipi.c"
#include "DRDI/Set39/ul1d_custom_rf.c"
#include "DRDI/Set39/ul1d_custom_mipi_ca.c"
#include "DRDI/Set39/ul1d_custom_rf_tas.h"
#include "DRDI/Set39/ul1d_custom_rf_tas.c"
#include "DRDI/Set39/ul1d_custom_rf_dat.h"
#include "DRDI/Set39/ul1d_custom_rf_dat.c"
#include "DRDI/Set39/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set39/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set39/ul1d_custom_rf_dpd.h"
#include "DRDI/Set39/ul1d_custom_rf_dpd.c"
#include "DRDI/Set39/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 40
   /*Include build for Set40 custom folder*/
#include "DRDI/Set40/ul1d_custom_rf.h"
#include "DRDI/Set40/ul1d_custom_rf_ca.h"
#include "DRDI/Set40/ul1d_custom_mipi.h"
#include "DRDI/Set40/u12193.c"
#include "DRDI/Set40/ul1d_custom_mipi.c"
#include "DRDI/Set40/ul1d_custom_rf.c"
#include "DRDI/Set40/ul1d_custom_mipi_ca.c"
#include "DRDI/Set40/ul1d_custom_rf_tas.h"
#include "DRDI/Set40/ul1d_custom_rf_tas.c"
#include "DRDI/Set40/ul1d_custom_rf_dat.h"
#include "DRDI/Set40/ul1d_custom_rf_dat.c"
#include "DRDI/Set40/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set40/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set40/ul1d_custom_rf_dpd.h"
#include "DRDI/Set40/ul1d_custom_rf_dpd.c"
#include "DRDI/Set40/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 41
   /*Include build for Set41 custom folder*/
#include "DRDI/Set41/ul1d_custom_rf.h"
#include "DRDI/Set41/ul1d_custom_rf_ca.h"
#include "DRDI/Set41/ul1d_custom_mipi.h"
#include "DRDI/Set41/u12193.c"
#include "DRDI/Set41/ul1d_custom_mipi.c"
#include "DRDI/Set41/ul1d_custom_rf.c"
#include "DRDI/Set41/ul1d_custom_mipi_ca.c"
#include "DRDI/Set41/ul1d_custom_rf_tas.h"
#include "DRDI/Set41/ul1d_custom_rf_tas.c"
#include "DRDI/Set41/ul1d_custom_rf_dat.h"
#include "DRDI/Set41/ul1d_custom_rf_dat.c"
#include "DRDI/Set41/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set41/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set41/ul1d_custom_rf_dpd.h"
#include "DRDI/Set41/ul1d_custom_rf_dpd.c"
#include "DRDI/Set41/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 42
   /*Include build for Set42 custom folder*/
#include "DRDI/Set42/ul1d_custom_rf.h"
#include "DRDI/Set42/ul1d_custom_rf_ca.h"
#include "DRDI/Set42/ul1d_custom_mipi.h"
#include "DRDI/Set42/u12193.c"
#include "DRDI/Set42/ul1d_custom_mipi.c"
#include "DRDI/Set42/ul1d_custom_rf.c"
#include "DRDI/Set42/ul1d_custom_mipi_ca.c"
#include "DRDI/Set42/ul1d_custom_rf_tas.h"
#include "DRDI/Set42/ul1d_custom_rf_tas.c"
#include "DRDI/Set42/ul1d_custom_rf_dat.h"
#include "DRDI/Set42/ul1d_custom_rf_dat.c"
#include "DRDI/Set42/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set42/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set42/ul1d_custom_rf_dpd.h"
#include "DRDI/Set42/ul1d_custom_rf_dpd.c"
#include "DRDI/Set42/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 43
   /*Include build for Set43 custom folder*/
#include "DRDI/Set43/ul1d_custom_rf.h"
#include "DRDI/Set43/ul1d_custom_rf_ca.h"
#include "DRDI/Set43/ul1d_custom_mipi.h"
#include "DRDI/Set43/u12193.c"
#include "DRDI/Set43/ul1d_custom_mipi.c"
#include "DRDI/Set43/ul1d_custom_rf.c"
#include "DRDI/Set43/ul1d_custom_mipi_ca.c"
#include "DRDI/Set43/ul1d_custom_rf_tas.h"
#include "DRDI/Set43/ul1d_custom_rf_tas.c"
#include "DRDI/Set43/ul1d_custom_rf_dat.h"
#include "DRDI/Set43/ul1d_custom_rf_dat.c"
#include "DRDI/Set43/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set43/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set43/ul1d_custom_rf_dpd.h"
#include "DRDI/Set43/ul1d_custom_rf_dpd.c"
#include "DRDI/Set43/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 44
   /*Include build for Set44 custom folder*/
#include "DRDI/Set44/ul1d_custom_rf.h"
#include "DRDI/Set44/ul1d_custom_rf_ca.h"
#include "DRDI/Set44/ul1d_custom_mipi.h"
#include "DRDI/Set44/u12193.c"
#include "DRDI/Set44/ul1d_custom_mipi.c"
#include "DRDI/Set44/ul1d_custom_rf.c"
#include "DRDI/Set44/ul1d_custom_mipi_ca.c"
#include "DRDI/Set44/ul1d_custom_rf_tas.h"
#include "DRDI/Set44/ul1d_custom_rf_tas.c"
#include "DRDI/Set44/ul1d_custom_rf_dat.h"
#include "DRDI/Set44/ul1d_custom_rf_dat.c"
#include "DRDI/Set44/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set44/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set44/ul1d_custom_rf_dpd.h"
#include "DRDI/Set44/ul1d_custom_rf_dpd.c"
#include "DRDI/Set44/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 45
   /*Include build for Set45 custom folder*/
#include "DRDI/Set45/ul1d_custom_rf.h"
#include "DRDI/Set45/ul1d_custom_rf_ca.h"
#include "DRDI/Set45/ul1d_custom_mipi.h"
#include "DRDI/Set45/u12193.c"
#include "DRDI/Set45/ul1d_custom_mipi.c"
#include "DRDI/Set45/ul1d_custom_rf.c"
#include "DRDI/Set45/ul1d_custom_mipi_ca.c"
#include "DRDI/Set45/ul1d_custom_rf_tas.h"
#include "DRDI/Set45/ul1d_custom_rf_tas.c"
#include "DRDI/Set45/ul1d_custom_rf_dat.h"
#include "DRDI/Set45/ul1d_custom_rf_dat.c"
#include "DRDI/Set45/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set45/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set45/ul1d_custom_rf_dpd.h"
#include "DRDI/Set45/ul1d_custom_rf_dpd.c"
#include "DRDI/Set45/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 46
   /*Include build for Set46 custom folder*/
#include "DRDI/Set46/ul1d_custom_rf.h"
#include "DRDI/Set46/ul1d_custom_rf_ca.h"
#include "DRDI/Set46/ul1d_custom_mipi.h"
#include "DRDI/Set46/u12193.c"
#include "DRDI/Set46/ul1d_custom_mipi.c"
#include "DRDI/Set46/ul1d_custom_rf.c"
#include "DRDI/Set46/ul1d_custom_mipi_ca.c"
#include "DRDI/Set46/ul1d_custom_rf_tas.h"
#include "DRDI/Set46/ul1d_custom_rf_tas.c"
#include "DRDI/Set46/ul1d_custom_rf_dat.h"
#include "DRDI/Set46/ul1d_custom_rf_dat.c"
#include "DRDI/Set46/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set46/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set46/ul1d_custom_rf_dpd.h"
#include "DRDI/Set46/ul1d_custom_rf_dpd.c"
#include "DRDI/Set46/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 47
   /*Include build for Set47 custom folder*/
#include "DRDI/Set47/ul1d_custom_rf.h"
#include "DRDI/Set47/ul1d_custom_rf_ca.h"
#include "DRDI/Set47/ul1d_custom_mipi.h"
#include "DRDI/Set47/u12193.c"
#include "DRDI/Set47/ul1d_custom_mipi.c"
#include "DRDI/Set47/ul1d_custom_rf.c"
#include "DRDI/Set47/ul1d_custom_mipi_ca.c"
#include "DRDI/Set47/ul1d_custom_rf_tas.h"
#include "DRDI/Set47/ul1d_custom_rf_tas.c"
#include "DRDI/Set47/ul1d_custom_rf_dat.h"
#include "DRDI/Set47/ul1d_custom_rf_dat.c"
#include "DRDI/Set47/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set47/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set47/ul1d_custom_rf_dpd.h"
#include "DRDI/Set47/ul1d_custom_rf_dpd.c"
#include "DRDI/Set47/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 48
   /*Include build for Set48 custom folder*/
#include "DRDI/Set48/ul1d_custom_rf.h"
#include "DRDI/Set48/ul1d_custom_rf_ca.h"
#include "DRDI/Set48/ul1d_custom_mipi.h"
#include "DRDI/Set48/u12193.c"
#include "DRDI/Set48/ul1d_custom_mipi.c"
#include "DRDI/Set48/ul1d_custom_rf.c"
#include "DRDI/Set48/ul1d_custom_mipi_ca.c"
#include "DRDI/Set48/ul1d_custom_rf_tas.h"
#include "DRDI/Set48/ul1d_custom_rf_tas.c"
#include "DRDI/Set48/ul1d_custom_rf_dat.h"
#include "DRDI/Set48/ul1d_custom_rf_dat.c"
#include "DRDI/Set48/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set48/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set48/ul1d_custom_rf_dpd.h"
#include "DRDI/Set48/ul1d_custom_rf_dpd.c"
#include "DRDI/Set48/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 49
   /*Include build for Set49 custom folder*/
#include "DRDI/Set49/ul1d_custom_rf.h"
#include "DRDI/Set49/ul1d_custom_rf_ca.h"
#include "DRDI/Set49/ul1d_custom_mipi.h"
#include "DRDI/Set49/u12193.c"
#include "DRDI/Set49/ul1d_custom_mipi.c"
#include "DRDI/Set49/ul1d_custom_rf.c"
#include "DRDI/Set49/ul1d_custom_mipi_ca.c"
#include "DRDI/Set49/ul1d_custom_rf_tas.h"
#include "DRDI/Set49/ul1d_custom_rf_tas.c"
#include "DRDI/Set49/ul1d_custom_rf_dat.h"
#include "DRDI/Set49/ul1d_custom_rf_dat.c"
#include "DRDI/Set49/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set49/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set49/ul1d_custom_rf_dpd.h"
#include "DRDI/Set49/ul1d_custom_rf_dpd.c"
#include "DRDI/Set49/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 50
   /*Include build for Set50 custom folder*/
#include "DRDI/Set50/ul1d_custom_rf.h"
#include "DRDI/Set50/ul1d_custom_rf_ca.h"
#include "DRDI/Set50/ul1d_custom_mipi.h"
#include "DRDI/Set50/u12193.c"
#include "DRDI/Set50/ul1d_custom_mipi.c"
#include "DRDI/Set50/ul1d_custom_rf.c"
#include "DRDI/Set50/ul1d_custom_mipi_ca.c"
#include "DRDI/Set50/ul1d_custom_rf_tas.h"
#include "DRDI/Set50/ul1d_custom_rf_tas.c"
#include "DRDI/Set50/ul1d_custom_rf_dat.h"
#include "DRDI/Set50/ul1d_custom_rf_dat.c"
#include "DRDI/Set50/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set50/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set50/ul1d_custom_rf_dpd.h"
#include "DRDI/Set50/ul1d_custom_rf_dpd.c"
#include "DRDI/Set50/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 51
   /*Include build for Set51 custom folder*/
#include "DRDI/Set51/ul1d_custom_rf.h"
#include "DRDI/Set51/ul1d_custom_rf_ca.h"
#include "DRDI/Set51/ul1d_custom_mipi.h"
#include "DRDI/Set51/u12193.c"
#include "DRDI/Set51/ul1d_custom_mipi.c"
#include "DRDI/Set51/ul1d_custom_rf.c"
#include "DRDI/Set51/ul1d_custom_mipi_ca.c"
#include "DRDI/Set51/ul1d_custom_rf_tas.h"
#include "DRDI/Set51/ul1d_custom_rf_tas.c"
#include "DRDI/Set51/ul1d_custom_rf_dat.h"
#include "DRDI/Set51/ul1d_custom_rf_dat.c"
#include "DRDI/Set51/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set51/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set51/ul1d_custom_rf_dpd.h"
#include "DRDI/Set51/ul1d_custom_rf_dpd.c"
#include "DRDI/Set51/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 52
   /*Include build for Set52 custom folder*/
#include "DRDI/Set52/ul1d_custom_rf.h"
#include "DRDI/Set52/ul1d_custom_rf_ca.h"
#include "DRDI/Set52/ul1d_custom_mipi.h"
#include "DRDI/Set52/u12193.c"
#include "DRDI/Set52/ul1d_custom_mipi.c"
#include "DRDI/Set52/ul1d_custom_rf.c"
#include "DRDI/Set52/ul1d_custom_mipi_ca.c"
#include "DRDI/Set52/ul1d_custom_rf_tas.h"
#include "DRDI/Set52/ul1d_custom_rf_tas.c"
#include "DRDI/Set52/ul1d_custom_rf_dat.h"
#include "DRDI/Set52/ul1d_custom_rf_dat.c"
#include "DRDI/Set52/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set52/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set52/ul1d_custom_rf_dpd.h"
#include "DRDI/Set52/ul1d_custom_rf_dpd.c"
#include "DRDI/Set52/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 53
   /*Include build for Set53 custom folder*/
#include "DRDI/Set53/ul1d_custom_rf.h"
#include "DRDI/Set53/ul1d_custom_rf_ca.h"
#include "DRDI/Set53/ul1d_custom_mipi.h"
#include "DRDI/Set53/u12193.c"
#include "DRDI/Set53/ul1d_custom_mipi.c"
#include "DRDI/Set53/ul1d_custom_rf.c"
#include "DRDI/Set53/ul1d_custom_mipi_ca.c"
#include "DRDI/Set53/ul1d_custom_rf_tas.h"
#include "DRDI/Set53/ul1d_custom_rf_tas.c"
#include "DRDI/Set53/ul1d_custom_rf_dat.h"
#include "DRDI/Set53/ul1d_custom_rf_dat.c"
#include "DRDI/Set53/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set53/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set53/ul1d_custom_rf_dpd.h"
#include "DRDI/Set53/ul1d_custom_rf_dpd.c"
#include "DRDI/Set53/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 54
   /*Include build for Set54 custom folder*/
#include "DRDI/Set54/ul1d_custom_rf.h"
#include "DRDI/Set54/ul1d_custom_rf_ca.h"
#include "DRDI/Set54/ul1d_custom_mipi.h"
#include "DRDI/Set54/u12193.c"
#include "DRDI/Set54/ul1d_custom_mipi.c"
#include "DRDI/Set54/ul1d_custom_rf.c"
#include "DRDI/Set54/ul1d_custom_mipi_ca.c"
#include "DRDI/Set54/ul1d_custom_rf_tas.h"
#include "DRDI/Set54/ul1d_custom_rf_tas.c"
#include "DRDI/Set54/ul1d_custom_rf_dat.h"
#include "DRDI/Set54/ul1d_custom_rf_dat.c"
#include "DRDI/Set54/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set54/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set54/ul1d_custom_rf_dpd.h"
#include "DRDI/Set54/ul1d_custom_rf_dpd.c"
#include "DRDI/Set54/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 55
   /*Include build for Set55 custom folder*/
#include "DRDI/Set55/ul1d_custom_rf.h"
#include "DRDI/Set55/ul1d_custom_rf_ca.h"
#include "DRDI/Set55/ul1d_custom_mipi.h"
#include "DRDI/Set55/u12193.c"
#include "DRDI/Set55/ul1d_custom_mipi.c"
#include "DRDI/Set55/ul1d_custom_rf.c"
#include "DRDI/Set55/ul1d_custom_mipi_ca.c"
#include "DRDI/Set55/ul1d_custom_rf_tas.h"
#include "DRDI/Set55/ul1d_custom_rf_tas.c"
#include "DRDI/Set55/ul1d_custom_rf_dat.h"
#include "DRDI/Set55/ul1d_custom_rf_dat.c"
#include "DRDI/Set55/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set55/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set55/ul1d_custom_rf_dpd.h"
#include "DRDI/Set55/ul1d_custom_rf_dpd.c"
#include "DRDI/Set55/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 56
   /*Include build for Set56 custom folder*/
#include "DRDI/Set56/ul1d_custom_rf.h"
#include "DRDI/Set56/ul1d_custom_rf_ca.h"
#include "DRDI/Set56/ul1d_custom_mipi.h"
#include "DRDI/Set56/u12193.c"
#include "DRDI/Set56/ul1d_custom_mipi.c"
#include "DRDI/Set56/ul1d_custom_rf.c"
#include "DRDI/Set56/ul1d_custom_mipi_ca.c"
#include "DRDI/Set56/ul1d_custom_rf_tas.h"
#include "DRDI/Set56/ul1d_custom_rf_tas.c"
#include "DRDI/Set56/ul1d_custom_rf_dat.h"
#include "DRDI/Set56/ul1d_custom_rf_dat.c"
#include "DRDI/Set56/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set56/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set56/ul1d_custom_rf_dpd.h"
#include "DRDI/Set56/ul1d_custom_rf_dpd.c"
#include "DRDI/Set56/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 57
   /*Include build for Set57 custom folder*/
#include "DRDI/Set57/ul1d_custom_rf.h"
#include "DRDI/Set57/ul1d_custom_rf_ca.h"
#include "DRDI/Set57/ul1d_custom_mipi.h"
#include "DRDI/Set57/u12193.c"
#include "DRDI/Set57/ul1d_custom_mipi.c"
#include "DRDI/Set57/ul1d_custom_rf.c"
#include "DRDI/Set57/ul1d_custom_mipi_ca.c"
#include "DRDI/Set57/ul1d_custom_rf_tas.h"
#include "DRDI/Set57/ul1d_custom_rf_tas.c"
#include "DRDI/Set57/ul1d_custom_rf_dat.h"
#include "DRDI/Set57/ul1d_custom_rf_dat.c"
#include "DRDI/Set57/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set57/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set57/ul1d_custom_rf_dpd.h"
#include "DRDI/Set57/ul1d_custom_rf_dpd.c"
#include "DRDI/Set57/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 58
   /*Include build for Set58 custom folder*/
#include "DRDI/Set58/ul1d_custom_rf.h"
#include "DRDI/Set58/ul1d_custom_rf_ca.h"
#include "DRDI/Set58/ul1d_custom_mipi.h"
#include "DRDI/Set58/u12193.c"
#include "DRDI/Set58/ul1d_custom_mipi.c"
#include "DRDI/Set58/ul1d_custom_rf.c"
#include "DRDI/Set58/ul1d_custom_mipi_ca.c"
#include "DRDI/Set58/ul1d_custom_rf_tas.h"
#include "DRDI/Set58/ul1d_custom_rf_tas.c"
#include "DRDI/Set58/ul1d_custom_rf_dat.h"
#include "DRDI/Set58/ul1d_custom_rf_dat.c"
#include "DRDI/Set58/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set58/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set58/ul1d_custom_rf_dpd.h"
#include "DRDI/Set58/ul1d_custom_rf_dpd.c"
#include "DRDI/Set58/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 59
   /*Include build for Set59 custom folder*/
#include "DRDI/Set59/ul1d_custom_rf.h"
#include "DRDI/Set59/ul1d_custom_rf_ca.h"
#include "DRDI/Set59/ul1d_custom_mipi.h"
#include "DRDI/Set59/u12193.c"
#include "DRDI/Set59/ul1d_custom_mipi.c"
#include "DRDI/Set59/ul1d_custom_rf.c"
#include "DRDI/Set59/ul1d_custom_mipi_ca.c"
#include "DRDI/Set59/ul1d_custom_rf_tas.h"
#include "DRDI/Set59/ul1d_custom_rf_tas.c"
#include "DRDI/Set59/ul1d_custom_rf_dat.h"
#include "DRDI/Set59/ul1d_custom_rf_dat.c"
#include "DRDI/Set59/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set59/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set59/ul1d_custom_rf_dpd.h"
#include "DRDI/Set59/ul1d_custom_rf_dpd.c"
#include "DRDI/Set59/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 60
   /*Include build for Set60 custom folder*/
#include "DRDI/Set60/ul1d_custom_rf.h"
#include "DRDI/Set60/ul1d_custom_rf_ca.h"
#include "DRDI/Set60/ul1d_custom_mipi.h"
#include "DRDI/Set60/u12193.c"
#include "DRDI/Set60/ul1d_custom_mipi.c"
#include "DRDI/Set60/ul1d_custom_rf.c"
#include "DRDI/Set60/ul1d_custom_mipi_ca.c"
#include "DRDI/Set60/ul1d_custom_rf_tas.h"
#include "DRDI/Set60/ul1d_custom_rf_tas.c"
#include "DRDI/Set60/ul1d_custom_rf_dat.h"
#include "DRDI/Set60/ul1d_custom_rf_dat.c"
#include "DRDI/Set60/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set60/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set60/ul1d_custom_rf_dpd.h"
#include "DRDI/Set60/ul1d_custom_rf_dpd.c"
#include "DRDI/Set60/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 61
   /*Include build for Set61 custom folder*/
#include "DRDI/Set61/ul1d_custom_rf.h"
#include "DRDI/Set61/ul1d_custom_rf_ca.h"
#include "DRDI/Set61/ul1d_custom_mipi.h"
#include "DRDI/Set61/u12193.c"
#include "DRDI/Set61/ul1d_custom_mipi.c"
#include "DRDI/Set61/ul1d_custom_rf.c"
#include "DRDI/Set61/ul1d_custom_mipi_ca.c"
#include "DRDI/Set61/ul1d_custom_rf_tas.h"
#include "DRDI/Set61/ul1d_custom_rf_tas.c"
#include "DRDI/Set61/ul1d_custom_rf_dat.h"
#include "DRDI/Set61/ul1d_custom_rf_dat.c"
#include "DRDI/Set61/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set61/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set61/ul1d_custom_rf_dpd.h"
#include "DRDI/Set61/ul1d_custom_rf_dpd.c"
#include "DRDI/Set61/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 62
   /*Include build for Set62 custom folder*/
#include "DRDI/Set62/ul1d_custom_rf.h"
#include "DRDI/Set62/ul1d_custom_rf_ca.h"
#include "DRDI/Set62/ul1d_custom_mipi.h"
#include "DRDI/Set62/u12193.c"
#include "DRDI/Set62/ul1d_custom_mipi.c"
#include "DRDI/Set62/ul1d_custom_rf.c"
#include "DRDI/Set62/ul1d_custom_mipi_ca.c"
#include "DRDI/Set62/ul1d_custom_rf_tas.h"
#include "DRDI/Set62/ul1d_custom_rf_tas.c"
#include "DRDI/Set62/ul1d_custom_rf_dat.h"
#include "DRDI/Set62/ul1d_custom_rf_dat.c"
#include "DRDI/Set62/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set62/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set62/ul1d_custom_rf_dpd.h"
#include "DRDI/Set62/ul1d_custom_rf_dpd.c"
#include "DRDI/Set62/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 63
   /*Include build for Set63 custom folder*/
#include "DRDI/Set63/ul1d_custom_rf.h"
#include "DRDI/Set63/ul1d_custom_rf_ca.h"
#include "DRDI/Set63/ul1d_custom_mipi.h"
#include "DRDI/Set63/u12193.c"
#include "DRDI/Set63/ul1d_custom_mipi.c"
#include "DRDI/Set63/ul1d_custom_rf.c"
#include "DRDI/Set63/ul1d_custom_mipi_ca.c"
#include "DRDI/Set63/ul1d_custom_rf_tas.h"
#include "DRDI/Set63/ul1d_custom_rf_tas.c"
#include "DRDI/Set63/ul1d_custom_rf_dat.h"
#include "DRDI/Set63/ul1d_custom_rf_dat.c"
#include "DRDI/Set63/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set63/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set63/ul1d_custom_rf_dpd.h"
#include "DRDI/Set63/ul1d_custom_rf_dpd.c"
#include "DRDI/Set63/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 64
   /*Include build for Set64 custom folder*/
#include "DRDI/Set64/ul1d_custom_rf.h"
#include "DRDI/Set64/ul1d_custom_rf_ca.h"
#include "DRDI/Set64/ul1d_custom_mipi.h"
#include "DRDI/Set64/u12193.c"
#include "DRDI/Set64/ul1d_custom_mipi.c"
#include "DRDI/Set64/ul1d_custom_rf.c"
#include "DRDI/Set64/ul1d_custom_mipi_ca.c"
#include "DRDI/Set64/ul1d_custom_rf_tas.h"
#include "DRDI/Set64/ul1d_custom_rf_tas.c"
#include "DRDI/Set64/ul1d_custom_rf_dat.h"
#include "DRDI/Set64/ul1d_custom_rf_dat.c"
#include "DRDI/Set64/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set64/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set64/ul1d_custom_rf_dpd.h"
#include "DRDI/Set64/ul1d_custom_rf_dpd.c"
#include "DRDI/Set64/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 65
   /*Include build for Set65 custom folder*/
#include "DRDI/Set65/ul1d_custom_rf.h"
#include "DRDI/Set65/ul1d_custom_rf_ca.h"
#include "DRDI/Set65/ul1d_custom_mipi.h"
#include "DRDI/Set65/u12193.c"
#include "DRDI/Set65/ul1d_custom_mipi.c"
#include "DRDI/Set65/ul1d_custom_rf.c"
#include "DRDI/Set65/ul1d_custom_mipi_ca.c"
#include "DRDI/Set65/ul1d_custom_rf_tas.h"
#include "DRDI/Set65/ul1d_custom_rf_tas.c"
#include "DRDI/Set65/ul1d_custom_rf_dat.h"
#include "DRDI/Set65/ul1d_custom_rf_dat.c"
#include "DRDI/Set65/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set65/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set65/ul1d_custom_rf_dpd.h"
#include "DRDI/Set65/ul1d_custom_rf_dpd.c"
#include "DRDI/Set65/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 66
   /*Include build for Set66 custom folder*/
#include "DRDI/Set66/ul1d_custom_rf.h"
#include "DRDI/Set66/ul1d_custom_rf_ca.h"
#include "DRDI/Set66/ul1d_custom_mipi.h"
#include "DRDI/Set66/u12193.c"
#include "DRDI/Set66/ul1d_custom_mipi.c"
#include "DRDI/Set66/ul1d_custom_rf.c"
#include "DRDI/Set66/ul1d_custom_mipi_ca.c"
#include "DRDI/Set66/ul1d_custom_rf_tas.h"
#include "DRDI/Set66/ul1d_custom_rf_tas.c"
#include "DRDI/Set66/ul1d_custom_rf_dat.h"
#include "DRDI/Set66/ul1d_custom_rf_dat.c"
#include "DRDI/Set66/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set66/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set66/ul1d_custom_rf_dpd.h"
#include "DRDI/Set66/ul1d_custom_rf_dpd.c"
#include "DRDI/Set66/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 67
   /*Include build for Set67 custom folder*/
#include "DRDI/Set67/ul1d_custom_rf.h"
#include "DRDI/Set67/ul1d_custom_rf_ca.h"
#include "DRDI/Set67/ul1d_custom_mipi.h"
#include "DRDI/Set67/u12193.c"
#include "DRDI/Set67/ul1d_custom_mipi.c"
#include "DRDI/Set67/ul1d_custom_rf.c"
#include "DRDI/Set67/ul1d_custom_mipi_ca.c"
#include "DRDI/Set67/ul1d_custom_rf_tas.h"
#include "DRDI/Set67/ul1d_custom_rf_tas.c"
#include "DRDI/Set67/ul1d_custom_rf_dat.h"
#include "DRDI/Set67/ul1d_custom_rf_dat.c"
#include "DRDI/Set67/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set67/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set67/ul1d_custom_rf_dpd.h"
#include "DRDI/Set67/ul1d_custom_rf_dpd.c"
#include "DRDI/Set67/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 68
   /*Include build for Set68 custom folder*/
#include "DRDI/Set68/ul1d_custom_rf.h"
#include "DRDI/Set68/ul1d_custom_rf_ca.h"
#include "DRDI/Set68/ul1d_custom_mipi.h"
#include "DRDI/Set68/u12193.c"
#include "DRDI/Set68/ul1d_custom_mipi.c"
#include "DRDI/Set68/ul1d_custom_rf.c"
#include "DRDI/Set68/ul1d_custom_mipi_ca.c"
#include "DRDI/Set68/ul1d_custom_rf_tas.h"
#include "DRDI/Set68/ul1d_custom_rf_tas.c"
#include "DRDI/Set68/ul1d_custom_rf_dat.h"
#include "DRDI/Set68/ul1d_custom_rf_dat.c"
#include "DRDI/Set68/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set68/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set68/ul1d_custom_rf_dpd.h"
#include "DRDI/Set68/ul1d_custom_rf_dpd.c"
#include "DRDI/Set68/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 69
   /*Include build for Set69 custom folder*/
#include "DRDI/Set69/ul1d_custom_rf.h"
#include "DRDI/Set69/ul1d_custom_rf_ca.h"
#include "DRDI/Set69/ul1d_custom_mipi.h"
#include "DRDI/Set69/u12193.c"
#include "DRDI/Set69/ul1d_custom_mipi.c"
#include "DRDI/Set69/ul1d_custom_rf.c"
#include "DRDI/Set69/ul1d_custom_mipi_ca.c"
#include "DRDI/Set69/ul1d_custom_rf_tas.h"
#include "DRDI/Set69/ul1d_custom_rf_tas.c"
#include "DRDI/Set69/ul1d_custom_rf_dat.h"
#include "DRDI/Set69/ul1d_custom_rf_dat.c"
#include "DRDI/Set69/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set69/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set69/ul1d_custom_rf_dpd.h"
#include "DRDI/Set69/ul1d_custom_rf_dpd.c"
#include "DRDI/Set69/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 70
   /*Include build for Set70 custom folder*/
#include "DRDI/Set70/ul1d_custom_rf.h"
#include "DRDI/Set70/ul1d_custom_rf_ca.h"
#include "DRDI/Set70/ul1d_custom_mipi.h"
#include "DRDI/Set70/u12193.c"
#include "DRDI/Set70/ul1d_custom_mipi.c"
#include "DRDI/Set70/ul1d_custom_rf.c"
#include "DRDI/Set70/ul1d_custom_mipi_ca.c"
#include "DRDI/Set70/ul1d_custom_rf_tas.h"
#include "DRDI/Set70/ul1d_custom_rf_tas.c"
#include "DRDI/Set70/ul1d_custom_rf_dat.h"
#include "DRDI/Set70/ul1d_custom_rf_dat.c"
#include "DRDI/Set70/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set70/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set70/ul1d_custom_rf_dpd.h"
#include "DRDI/Set70/ul1d_custom_rf_dpd.c"
#include "DRDI/Set70/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 71
   /*Include build for Set71 custom folder*/
#include "DRDI/Set71/ul1d_custom_rf.h"
#include "DRDI/Set71/ul1d_custom_rf_ca.h"
#include "DRDI/Set71/ul1d_custom_mipi.h"
#include "DRDI/Set71/u12193.c"
#include "DRDI/Set71/ul1d_custom_mipi.c"
#include "DRDI/Set71/ul1d_custom_rf.c"
#include "DRDI/Set71/ul1d_custom_mipi_ca.c"
#include "DRDI/Set71/ul1d_custom_rf_tas.h"
#include "DRDI/Set71/ul1d_custom_rf_tas.c"
#include "DRDI/Set71/ul1d_custom_rf_dat.h"
#include "DRDI/Set71/ul1d_custom_rf_dat.c"
#include "DRDI/Set71/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set71/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set71/ul1d_custom_rf_dpd.h"
#include "DRDI/Set71/ul1d_custom_rf_dpd.c"
#include "DRDI/Set71/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 72
   /*Include build for Set72 custom folder*/
#include "DRDI/Set72/ul1d_custom_rf.h"
#include "DRDI/Set72/ul1d_custom_rf_ca.h"
#include "DRDI/Set72/ul1d_custom_mipi.h"
#include "DRDI/Set72/u12193.c"
#include "DRDI/Set72/ul1d_custom_mipi.c"
#include "DRDI/Set72/ul1d_custom_rf.c"
#include "DRDI/Set72/ul1d_custom_mipi_ca.c"
#include "DRDI/Set72/ul1d_custom_rf_tas.h"
#include "DRDI/Set72/ul1d_custom_rf_tas.c"
#include "DRDI/Set72/ul1d_custom_rf_dat.h"
#include "DRDI/Set72/ul1d_custom_rf_dat.c"
#include "DRDI/Set72/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set72/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set72/ul1d_custom_rf_dpd.h"
#include "DRDI/Set72/ul1d_custom_rf_dpd.c"
#include "DRDI/Set72/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 73
   /*Include build for Set73 custom folder*/
#include "DRDI/Set73/ul1d_custom_rf.h"
#include "DRDI/Set73/ul1d_custom_rf_ca.h"
#include "DRDI/Set73/ul1d_custom_mipi.h"
#include "DRDI/Set73/u12193.c"
#include "DRDI/Set73/ul1d_custom_mipi.c"
#include "DRDI/Set73/ul1d_custom_rf.c"
#include "DRDI/Set73/ul1d_custom_mipi_ca.c"
#include "DRDI/Set73/ul1d_custom_rf_tas.h"
#include "DRDI/Set73/ul1d_custom_rf_tas.c"
#include "DRDI/Set73/ul1d_custom_rf_dat.h"
#include "DRDI/Set73/ul1d_custom_rf_dat.c"
#include "DRDI/Set73/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set73/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set73/ul1d_custom_rf_dpd.h"
#include "DRDI/Set73/ul1d_custom_rf_dpd.c"
#include "DRDI/Set73/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 74
   /*Include build for Set74 custom folder*/
#include "DRDI/Set74/ul1d_custom_rf.h"
#include "DRDI/Set74/ul1d_custom_rf_ca.h"
#include "DRDI/Set74/ul1d_custom_mipi.h"
#include "DRDI/Set74/u12193.c"
#include "DRDI/Set74/ul1d_custom_mipi.c"
#include "DRDI/Set74/ul1d_custom_rf.c"
#include "DRDI/Set74/ul1d_custom_mipi_ca.c"
#include "DRDI/Set74/ul1d_custom_rf_tas.h"
#include "DRDI/Set74/ul1d_custom_rf_tas.c"
#include "DRDI/Set74/ul1d_custom_rf_dat.h"
#include "DRDI/Set74/ul1d_custom_rf_dat.c"
#include "DRDI/Set74/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set74/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set74/ul1d_custom_rf_dpd.h"
#include "DRDI/Set74/ul1d_custom_rf_dpd.c"
#include "DRDI/Set74/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 75
   /*Include build for Set75 custom folder*/
#include "DRDI/Set75/ul1d_custom_rf.h"
#include "DRDI/Set75/ul1d_custom_rf_ca.h"
#include "DRDI/Set75/ul1d_custom_mipi.h"
#include "DRDI/Set75/u12193.c"
#include "DRDI/Set75/ul1d_custom_mipi.c"
#include "DRDI/Set75/ul1d_custom_rf.c"
#include "DRDI/Set75/ul1d_custom_mipi_ca.c"
#include "DRDI/Set75/ul1d_custom_rf_tas.h"
#include "DRDI/Set75/ul1d_custom_rf_tas.c"
#include "DRDI/Set75/ul1d_custom_rf_dat.h"
#include "DRDI/Set75/ul1d_custom_rf_dat.c"
#include "DRDI/Set75/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set75/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set75/ul1d_custom_rf_dpd.h"
#include "DRDI/Set75/ul1d_custom_rf_dpd.c"
#include "DRDI/Set75/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 76
   /*Include build for Set76 custom folder*/
#include "DRDI/Set76/ul1d_custom_rf.h"
#include "DRDI/Set76/ul1d_custom_rf_ca.h"
#include "DRDI/Set76/ul1d_custom_mipi.h"
#include "DRDI/Set76/u12193.c"
#include "DRDI/Set76/ul1d_custom_mipi.c"
#include "DRDI/Set76/ul1d_custom_rf.c"
#include "DRDI/Set76/ul1d_custom_mipi_ca.c"
#include "DRDI/Set76/ul1d_custom_rf_tas.h"
#include "DRDI/Set76/ul1d_custom_rf_tas.c"
#include "DRDI/Set76/ul1d_custom_rf_dat.h"
#include "DRDI/Set76/ul1d_custom_rf_dat.c"
#include "DRDI/Set76/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set76/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set76/ul1d_custom_rf_dpd.h"
#include "DRDI/Set76/ul1d_custom_rf_dpd.c"
#include "DRDI/Set76/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 77
   /*Include build for Set77 custom folder*/
#include "DRDI/Set77/ul1d_custom_rf.h"
#include "DRDI/Set77/ul1d_custom_rf_ca.h"
#include "DRDI/Set77/ul1d_custom_mipi.h"
#include "DRDI/Set77/u12193.c"
#include "DRDI/Set77/ul1d_custom_mipi.c"
#include "DRDI/Set77/ul1d_custom_rf.c"
#include "DRDI/Set77/ul1d_custom_mipi_ca.c"
#include "DRDI/Set77/ul1d_custom_rf_tas.h"
#include "DRDI/Set77/ul1d_custom_rf_tas.c"
#include "DRDI/Set77/ul1d_custom_rf_dat.h"
#include "DRDI/Set77/ul1d_custom_rf_dat.c"
#include "DRDI/Set77/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set77/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set77/ul1d_custom_rf_dpd.h"
#include "DRDI/Set77/ul1d_custom_rf_dpd.c"
#include "DRDI/Set77/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 78
   /*Include build for Set78 custom folder*/
#include "DRDI/Set78/ul1d_custom_rf.h"
#include "DRDI/Set78/ul1d_custom_rf_ca.h"
#include "DRDI/Set78/ul1d_custom_mipi.h"
#include "DRDI/Set78/u12193.c"
#include "DRDI/Set78/ul1d_custom_mipi.c"
#include "DRDI/Set78/ul1d_custom_rf.c"
#include "DRDI/Set78/ul1d_custom_mipi_ca.c"
#include "DRDI/Set78/ul1d_custom_rf_tas.h"
#include "DRDI/Set78/ul1d_custom_rf_tas.c"
#include "DRDI/Set78/ul1d_custom_rf_dat.h"
#include "DRDI/Set78/ul1d_custom_rf_dat.c"
#include "DRDI/Set78/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set78/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set78/ul1d_custom_rf_dpd.h"
#include "DRDI/Set78/ul1d_custom_rf_dpd.c"
#include "DRDI/Set78/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 79
   /*Include build for Set79 custom folder*/
#include "DRDI/Set79/ul1d_custom_rf.h"
#include "DRDI/Set79/ul1d_custom_rf_ca.h"
#include "DRDI/Set79/ul1d_custom_mipi.h"
#include "DRDI/Set79/u12193.c"
#include "DRDI/Set79/ul1d_custom_mipi.c"
#include "DRDI/Set79/ul1d_custom_rf.c"
#include "DRDI/Set79/ul1d_custom_mipi_ca.c"
#include "DRDI/Set79/ul1d_custom_rf_tas.h"
#include "DRDI/Set79/ul1d_custom_rf_tas.c"
#include "DRDI/Set79/ul1d_custom_rf_dat.h"
#include "DRDI/Set79/ul1d_custom_rf_dat.c"
#include "DRDI/Set79/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set79/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set79/ul1d_custom_rf_dpd.h"
#include "DRDI/Set79/ul1d_custom_rf_dpd.c"
#include "DRDI/Set79/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 80
   /*Include build for Set80 custom folder*/
#include "DRDI/Set80/ul1d_custom_rf.h"
#include "DRDI/Set80/ul1d_custom_rf_ca.h"
#include "DRDI/Set80/ul1d_custom_mipi.h"
#include "DRDI/Set80/u12193.c"
#include "DRDI/Set80/ul1d_custom_mipi.c"
#include "DRDI/Set80/ul1d_custom_rf.c"
#include "DRDI/Set80/ul1d_custom_mipi_ca.c"
#include "DRDI/Set80/ul1d_custom_rf_tas.h"
#include "DRDI/Set80/ul1d_custom_rf_tas.c"
#include "DRDI/Set80/ul1d_custom_rf_dat.h"
#include "DRDI/Set80/ul1d_custom_rf_dat.c"
#include "DRDI/Set80/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set80/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set80/ul1d_custom_rf_dpd.h"
#include "DRDI/Set80/ul1d_custom_rf_dpd.c"
#include "DRDI/Set80/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 81
   /*Include build for Set81 custom folder*/
#include "DRDI/Set81/ul1d_custom_rf.h"
#include "DRDI/Set81/ul1d_custom_rf_ca.h"
#include "DRDI/Set81/ul1d_custom_mipi.h"
#include "DRDI/Set81/u12193.c"
#include "DRDI/Set81/ul1d_custom_mipi.c"
#include "DRDI/Set81/ul1d_custom_rf.c"
#include "DRDI/Set81/ul1d_custom_mipi_ca.c"
#include "DRDI/Set81/ul1d_custom_rf_tas.h"
#include "DRDI/Set81/ul1d_custom_rf_tas.c"
#include "DRDI/Set81/ul1d_custom_rf_dat.h"
#include "DRDI/Set81/ul1d_custom_rf_dat.c"
#include "DRDI/Set81/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set81/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set81/ul1d_custom_rf_dpd.h"
#include "DRDI/Set81/ul1d_custom_rf_dpd.c"
#include "DRDI/Set81/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 82
   /*Include build for Set82 custom folder*/
#include "DRDI/Set82/ul1d_custom_rf.h"
#include "DRDI/Set82/ul1d_custom_rf_ca.h"
#include "DRDI/Set82/ul1d_custom_mipi.h"
#include "DRDI/Set82/u12193.c"
#include "DRDI/Set82/ul1d_custom_mipi.c"
#include "DRDI/Set82/ul1d_custom_rf.c"
#include "DRDI/Set82/ul1d_custom_mipi_ca.c"
#include "DRDI/Set82/ul1d_custom_rf_tas.h"
#include "DRDI/Set82/ul1d_custom_rf_tas.c"
#include "DRDI/Set82/ul1d_custom_rf_dat.h"
#include "DRDI/Set82/ul1d_custom_rf_dat.c"
#include "DRDI/Set82/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set82/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set82/ul1d_custom_rf_dpd.h"
#include "DRDI/Set82/ul1d_custom_rf_dpd.c"
#include "DRDI/Set82/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 83
   /*Include build for Set83 custom folder*/
#include "DRDI/Set83/ul1d_custom_rf.h"
#include "DRDI/Set83/ul1d_custom_rf_ca.h"
#include "DRDI/Set83/ul1d_custom_mipi.h"
#include "DRDI/Set83/u12193.c"
#include "DRDI/Set83/ul1d_custom_mipi.c"
#include "DRDI/Set83/ul1d_custom_rf.c"
#include "DRDI/Set83/ul1d_custom_mipi_ca.c"
#include "DRDI/Set83/ul1d_custom_rf_tas.h"
#include "DRDI/Set83/ul1d_custom_rf_tas.c"
#include "DRDI/Set83/ul1d_custom_rf_dat.h"
#include "DRDI/Set83/ul1d_custom_rf_dat.c"
#include "DRDI/Set83/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set83/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set83/ul1d_custom_rf_dpd.h"
#include "DRDI/Set83/ul1d_custom_rf_dpd.c"
#include "DRDI/Set83/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 84
   /*Include build for Set84 custom folder*/
#include "DRDI/Set84/ul1d_custom_rf.h"
#include "DRDI/Set84/ul1d_custom_rf_ca.h"
#include "DRDI/Set84/ul1d_custom_mipi.h"
#include "DRDI/Set84/u12193.c"
#include "DRDI/Set84/ul1d_custom_mipi.c"
#include "DRDI/Set84/ul1d_custom_rf.c"
#include "DRDI/Set84/ul1d_custom_mipi_ca.c"
#include "DRDI/Set84/ul1d_custom_rf_tas.h"
#include "DRDI/Set84/ul1d_custom_rf_tas.c"
#include "DRDI/Set84/ul1d_custom_rf_dat.h"
#include "DRDI/Set84/ul1d_custom_rf_dat.c"
#include "DRDI/Set84/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set84/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set84/ul1d_custom_rf_dpd.h"
#include "DRDI/Set84/ul1d_custom_rf_dpd.c"
#include "DRDI/Set84/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 85
   /*Include build for Set85 custom folder*/
#include "DRDI/Set85/ul1d_custom_rf.h"
#include "DRDI/Set85/ul1d_custom_rf_ca.h"
#include "DRDI/Set85/ul1d_custom_mipi.h"
#include "DRDI/Set85/u12193.c"
#include "DRDI/Set85/ul1d_custom_mipi.c"
#include "DRDI/Set85/ul1d_custom_rf.c"
#include "DRDI/Set85/ul1d_custom_mipi_ca.c"
#include "DRDI/Set85/ul1d_custom_rf_tas.h"
#include "DRDI/Set85/ul1d_custom_rf_tas.c"
#include "DRDI/Set85/ul1d_custom_rf_dat.h"
#include "DRDI/Set85/ul1d_custom_rf_dat.c"
#include "DRDI/Set85/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set85/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set85/ul1d_custom_rf_dpd.h"
#include "DRDI/Set85/ul1d_custom_rf_dpd.c"
#include "DRDI/Set85/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 86
   /*Include build for Set86 custom folder*/
#include "DRDI/Set86/ul1d_custom_rf.h"
#include "DRDI/Set86/ul1d_custom_rf_ca.h"
#include "DRDI/Set86/ul1d_custom_mipi.h"
#include "DRDI/Set86/u12193.c"
#include "DRDI/Set86/ul1d_custom_mipi.c"
#include "DRDI/Set86/ul1d_custom_rf.c"
#include "DRDI/Set86/ul1d_custom_mipi_ca.c"
#include "DRDI/Set86/ul1d_custom_rf_tas.h"
#include "DRDI/Set86/ul1d_custom_rf_tas.c"
#include "DRDI/Set86/ul1d_custom_rf_dat.h"
#include "DRDI/Set86/ul1d_custom_rf_dat.c"
#include "DRDI/Set86/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set86/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set86/ul1d_custom_rf_dpd.h"
#include "DRDI/Set86/ul1d_custom_rf_dpd.c"
#include "DRDI/Set86/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 87
   /*Include build for Set87 custom folder*/
#include "DRDI/Set87/ul1d_custom_rf.h"
#include "DRDI/Set87/ul1d_custom_rf_ca.h"
#include "DRDI/Set87/ul1d_custom_mipi.h"
#include "DRDI/Set87/u12193.c"
#include "DRDI/Set87/ul1d_custom_mipi.c"
#include "DRDI/Set87/ul1d_custom_rf.c"
#include "DRDI/Set87/ul1d_custom_mipi_ca.c"
#include "DRDI/Set87/ul1d_custom_rf_tas.h"
#include "DRDI/Set87/ul1d_custom_rf_tas.c"
#include "DRDI/Set87/ul1d_custom_rf_dat.h"
#include "DRDI/Set87/ul1d_custom_rf_dat.c"
#include "DRDI/Set87/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set87/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set87/ul1d_custom_rf_dpd.h"
#include "DRDI/Set87/ul1d_custom_rf_dpd.c"
#include "DRDI/Set87/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 88
   /*Include build for Set88 custom folder*/
#include "DRDI/Set88/ul1d_custom_rf.h"
#include "DRDI/Set88/ul1d_custom_rf_ca.h"
#include "DRDI/Set88/ul1d_custom_mipi.h"
#include "DRDI/Set88/u12193.c"
#include "DRDI/Set88/ul1d_custom_mipi.c"
#include "DRDI/Set88/ul1d_custom_rf.c"
#include "DRDI/Set88/ul1d_custom_mipi_ca.c"
#include "DRDI/Set88/ul1d_custom_rf_tas.h"
#include "DRDI/Set88/ul1d_custom_rf_tas.c"
#include "DRDI/Set88/ul1d_custom_rf_dat.h"
#include "DRDI/Set88/ul1d_custom_rf_dat.c"
#include "DRDI/Set88/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set88/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set88/ul1d_custom_rf_dpd.h"
#include "DRDI/Set88/ul1d_custom_rf_dpd.c"
#include "DRDI/Set88/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 89
   /*Include build for Set89 custom folder*/
#include "DRDI/Set89/ul1d_custom_rf.h"
#include "DRDI/Set89/ul1d_custom_rf_ca.h"
#include "DRDI/Set89/ul1d_custom_mipi.h"
#include "DRDI/Set89/u12193.c"
#include "DRDI/Set89/ul1d_custom_mipi.c"
#include "DRDI/Set89/ul1d_custom_rf.c"
#include "DRDI/Set89/ul1d_custom_mipi_ca.c"
#include "DRDI/Set89/ul1d_custom_rf_tas.h"
#include "DRDI/Set89/ul1d_custom_rf_tas.c"
#include "DRDI/Set89/ul1d_custom_rf_dat.h"
#include "DRDI/Set89/ul1d_custom_rf_dat.c"
#include "DRDI/Set89/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set89/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set89/ul1d_custom_rf_dpd.h"
#include "DRDI/Set89/ul1d_custom_rf_dpd.c"
#include "DRDI/Set89/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 90
   /*Include build for Set90 custom folder*/
#include "DRDI/Set90/ul1d_custom_rf.h"
#include "DRDI/Set90/ul1d_custom_rf_ca.h"
#include "DRDI/Set90/ul1d_custom_mipi.h"
#include "DRDI/Set90/u12193.c"
#include "DRDI/Set90/ul1d_custom_mipi.c"
#include "DRDI/Set90/ul1d_custom_rf.c"
#include "DRDI/Set90/ul1d_custom_mipi_ca.c"
#include "DRDI/Set90/ul1d_custom_rf_tas.h"
#include "DRDI/Set90/ul1d_custom_rf_tas.c"
#include "DRDI/Set90/ul1d_custom_rf_dat.h"
#include "DRDI/Set90/ul1d_custom_rf_dat.c"
#include "DRDI/Set90/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set90/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set90/ul1d_custom_rf_dpd.h"
#include "DRDI/Set90/ul1d_custom_rf_dpd.c"
#include "DRDI/Set90/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 91
   /*Include build for Set91 custom folder*/
#include "DRDI/Set91/ul1d_custom_rf.h"
#include "DRDI/Set91/ul1d_custom_rf_ca.h"
#include "DRDI/Set91/ul1d_custom_mipi.h"
#include "DRDI/Set91/u12193.c"
#include "DRDI/Set91/ul1d_custom_mipi.c"
#include "DRDI/Set91/ul1d_custom_rf.c"
#include "DRDI/Set91/ul1d_custom_mipi_ca.c"
#include "DRDI/Set91/ul1d_custom_rf_tas.h"
#include "DRDI/Set91/ul1d_custom_rf_tas.c"
#include "DRDI/Set91/ul1d_custom_rf_dat.h"
#include "DRDI/Set91/ul1d_custom_rf_dat.c"
#include "DRDI/Set91/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set91/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set91/ul1d_custom_rf_dpd.h"
#include "DRDI/Set91/ul1d_custom_rf_dpd.c"
#include "DRDI/Set91/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 92
   /*Include build for Set92 custom folder*/
#include "DRDI/Set92/ul1d_custom_rf.h"
#include "DRDI/Set92/ul1d_custom_rf_ca.h"
#include "DRDI/Set92/ul1d_custom_mipi.h"
#include "DRDI/Set92/u12193.c"
#include "DRDI/Set92/ul1d_custom_mipi.c"
#include "DRDI/Set92/ul1d_custom_rf.c"
#include "DRDI/Set92/ul1d_custom_mipi_ca.c"
#include "DRDI/Set92/ul1d_custom_rf_tas.h"
#include "DRDI/Set92/ul1d_custom_rf_tas.c"
#include "DRDI/Set92/ul1d_custom_rf_dat.h"
#include "DRDI/Set92/ul1d_custom_rf_dat.c"
#include "DRDI/Set92/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set92/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set92/ul1d_custom_rf_dpd.h"
#include "DRDI/Set92/ul1d_custom_rf_dpd.c"
#include "DRDI/Set92/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 93
   /*Include build for Set93 custom folder*/
#include "DRDI/Set93/ul1d_custom_rf.h"
#include "DRDI/Set93/ul1d_custom_rf_ca.h"
#include "DRDI/Set93/ul1d_custom_mipi.h"
#include "DRDI/Set93/u12193.c"
#include "DRDI/Set93/ul1d_custom_mipi.c"
#include "DRDI/Set93/ul1d_custom_rf.c"
#include "DRDI/Set93/ul1d_custom_mipi_ca.c"
#include "DRDI/Set93/ul1d_custom_rf_tas.h"
#include "DRDI/Set93/ul1d_custom_rf_tas.c"
#include "DRDI/Set93/ul1d_custom_rf_dat.h"
#include "DRDI/Set93/ul1d_custom_rf_dat.c"
#include "DRDI/Set93/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set93/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set93/ul1d_custom_rf_dpd.h"
#include "DRDI/Set93/ul1d_custom_rf_dpd.c"
#include "DRDI/Set93/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 94
   /*Include build for Set94 custom folder*/
#include "DRDI/Set94/ul1d_custom_rf.h"
#include "DRDI/Set94/ul1d_custom_rf_ca.h"
#include "DRDI/Set94/ul1d_custom_mipi.h"
#include "DRDI/Set94/u12193.c"
#include "DRDI/Set94/ul1d_custom_mipi.c"
#include "DRDI/Set94/ul1d_custom_rf.c"
#include "DRDI/Set94/ul1d_custom_mipi_ca.c"
#include "DRDI/Set94/ul1d_custom_rf_tas.h"
#include "DRDI/Set94/ul1d_custom_rf_tas.c"
#include "DRDI/Set94/ul1d_custom_rf_dat.h"
#include "DRDI/Set94/ul1d_custom_rf_dat.c"
#include "DRDI/Set94/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set94/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set94/ul1d_custom_rf_dpd.h"
#include "DRDI/Set94/ul1d_custom_rf_dpd.c"
#include "DRDI/Set94/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 95
   /*Include build for Set95 custom folder*/
#include "DRDI/Set95/ul1d_custom_rf.h"
#include "DRDI/Set95/ul1d_custom_rf_ca.h"
#include "DRDI/Set95/ul1d_custom_mipi.h"
#include "DRDI/Set95/u12193.c"
#include "DRDI/Set95/ul1d_custom_mipi.c"
#include "DRDI/Set95/ul1d_custom_rf.c"
#include "DRDI/Set95/ul1d_custom_mipi_ca.c"
#include "DRDI/Set95/ul1d_custom_rf_tas.h"
#include "DRDI/Set95/ul1d_custom_rf_tas.c"
#include "DRDI/Set95/ul1d_custom_rf_dat.h"
#include "DRDI/Set95/ul1d_custom_rf_dat.c"
#include "DRDI/Set95/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set95/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set95/ul1d_custom_rf_dpd.h"
#include "DRDI/Set95/ul1d_custom_rf_dpd.c"
#include "DRDI/Set95/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 96
   /*Include build for Set96 custom folder*/
#include "DRDI/Set96/ul1d_custom_rf.h"
#include "DRDI/Set96/ul1d_custom_rf_ca.h"
#include "DRDI/Set96/ul1d_custom_mipi.h"
#include "DRDI/Set96/u12193.c"
#include "DRDI/Set96/ul1d_custom_mipi.c"
#include "DRDI/Set96/ul1d_custom_rf.c"
#include "DRDI/Set96/ul1d_custom_mipi_ca.c"
#include "DRDI/Set96/ul1d_custom_rf_tas.h"
#include "DRDI/Set96/ul1d_custom_rf_tas.c"
#include "DRDI/Set96/ul1d_custom_rf_dat.h"
#include "DRDI/Set96/ul1d_custom_rf_dat.c"
#include "DRDI/Set96/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set96/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set96/ul1d_custom_rf_dpd.h"
#include "DRDI/Set96/ul1d_custom_rf_dpd.c"
#include "DRDI/Set96/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 97
   /*Include build for Set97 custom folder*/
#include "DRDI/Set97/ul1d_custom_rf.h"
#include "DRDI/Set97/ul1d_custom_rf_ca.h"
#include "DRDI/Set97/ul1d_custom_mipi.h"
#include "DRDI/Set97/u12193.c"
#include "DRDI/Set97/ul1d_custom_mipi.c"
#include "DRDI/Set97/ul1d_custom_rf.c"
#include "DRDI/Set97/ul1d_custom_mipi_ca.c"
#include "DRDI/Set97/ul1d_custom_rf_tas.h"
#include "DRDI/Set97/ul1d_custom_rf_tas.c"
#include "DRDI/Set97/ul1d_custom_rf_dat.h"
#include "DRDI/Set97/ul1d_custom_rf_dat.c"
#include "DRDI/Set97/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set97/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set97/ul1d_custom_rf_dpd.h"
#include "DRDI/Set97/ul1d_custom_rf_dpd.c"
#include "DRDI/Set97/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 98
   /*Include build for Set98 custom folder*/
#include "DRDI/Set98/ul1d_custom_rf.h"
#include "DRDI/Set98/ul1d_custom_rf_ca.h"
#include "DRDI/Set98/ul1d_custom_mipi.h"
#include "DRDI/Set98/u12193.c"
#include "DRDI/Set98/ul1d_custom_mipi.c"
#include "DRDI/Set98/ul1d_custom_rf.c"
#include "DRDI/Set98/ul1d_custom_mipi_ca.c"
#include "DRDI/Set98/ul1d_custom_rf_tas.h"
#include "DRDI/Set98/ul1d_custom_rf_tas.c"
#include "DRDI/Set98/ul1d_custom_rf_dat.h"
#include "DRDI/Set98/ul1d_custom_rf_dat.c"
#include "DRDI/Set98/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set98/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set98/ul1d_custom_rf_dpd.h"
#include "DRDI/Set98/ul1d_custom_rf_dpd.c"
#include "DRDI/Set98/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 99
   /*Include build for Set99 custom folder*/
#include "DRDI/Set99/ul1d_custom_rf.h"
#include "DRDI/Set99/ul1d_custom_rf_ca.h"
#include "DRDI/Set99/ul1d_custom_mipi.h"
#include "DRDI/Set99/u12193.c"
#include "DRDI/Set99/ul1d_custom_mipi.c"
#include "DRDI/Set99/ul1d_custom_rf.c"
#include "DRDI/Set99/ul1d_custom_mipi_ca.c"
#include "DRDI/Set99/ul1d_custom_rf_tas.h"
#include "DRDI/Set99/ul1d_custom_rf_tas.c"
#include "DRDI/Set99/ul1d_custom_rf_dat.h"
#include "DRDI/Set99/ul1d_custom_rf_dat.c"
#include "DRDI/Set99/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set99/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set99/ul1d_custom_rf_dpd.h"
#include "DRDI/Set99/ul1d_custom_rf_dpd.c"
#include "DRDI/Set99/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 100
   /*Include build for Set100 custom folder*/
#include "DRDI/Set100/ul1d_custom_rf.h"
#include "DRDI/Set100/ul1d_custom_rf_ca.h"
#include "DRDI/Set100/ul1d_custom_mipi.h"
#include "DRDI/Set100/u12193.c"
#include "DRDI/Set100/ul1d_custom_mipi.c"
#include "DRDI/Set100/ul1d_custom_rf.c"
#include "DRDI/Set100/ul1d_custom_mipi_ca.c"
#include "DRDI/Set100/ul1d_custom_rf_tas.h"
#include "DRDI/Set100/ul1d_custom_rf_tas.c"
#include "DRDI/Set100/ul1d_custom_rf_dat.h"
#include "DRDI/Set100/ul1d_custom_rf_dat.c"
#include "DRDI/Set100/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set100/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set100/ul1d_custom_rf_dpd.h"
#include "DRDI/Set100/ul1d_custom_rf_dpd.c"
#include "DRDI/Set100/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 101
   /*Include build for Set101 custom folder*/
#include "DRDI/Set101/ul1d_custom_rf.h"
#include "DRDI/Set101/ul1d_custom_rf_ca.h"
#include "DRDI/Set101/ul1d_custom_mipi.h"
#include "DRDI/Set101/u12193.c"
#include "DRDI/Set101/ul1d_custom_mipi.c"
#include "DRDI/Set101/ul1d_custom_rf.c"
#include "DRDI/Set101/ul1d_custom_mipi_ca.c"
#include "DRDI/Set101/ul1d_custom_rf_tas.h"
#include "DRDI/Set101/ul1d_custom_rf_tas.c"
#include "DRDI/Set101/ul1d_custom_rf_dat.h"
#include "DRDI/Set101/ul1d_custom_rf_dat.c"
#include "DRDI/Set101/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set101/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set101/ul1d_custom_rf_dpd.h"
#include "DRDI/Set101/ul1d_custom_rf_dpd.c"
#include "DRDI/Set101/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 102
   /*Include build for Set102 custom folder*/
#include "DRDI/Set102/ul1d_custom_rf.h"
#include "DRDI/Set102/ul1d_custom_rf_ca.h"
#include "DRDI/Set102/ul1d_custom_mipi.h"
#include "DRDI/Set102/u12193.c"
#include "DRDI/Set102/ul1d_custom_mipi.c"
#include "DRDI/Set102/ul1d_custom_rf.c"
#include "DRDI/Set102/ul1d_custom_mipi_ca.c"
#include "DRDI/Set102/ul1d_custom_rf_tas.h"
#include "DRDI/Set102/ul1d_custom_rf_tas.c"
#include "DRDI/Set102/ul1d_custom_rf_dat.h"
#include "DRDI/Set102/ul1d_custom_rf_dat.c"
#include "DRDI/Set102/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set102/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set102/ul1d_custom_rf_dpd.h"
#include "DRDI/Set102/ul1d_custom_rf_dpd.c"
#include "DRDI/Set102/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 103
   /*Include build for Set103 custom folder*/
#include "DRDI/Set103/ul1d_custom_rf.h"
#include "DRDI/Set103/ul1d_custom_rf_ca.h"
#include "DRDI/Set103/ul1d_custom_mipi.h"
#include "DRDI/Set103/u12193.c"
#include "DRDI/Set103/ul1d_custom_mipi.c"
#include "DRDI/Set103/ul1d_custom_rf.c"
#include "DRDI/Set103/ul1d_custom_mipi_ca.c"
#include "DRDI/Set103/ul1d_custom_rf_tas.h"
#include "DRDI/Set103/ul1d_custom_rf_tas.c"
#include "DRDI/Set103/ul1d_custom_rf_dat.h"
#include "DRDI/Set103/ul1d_custom_rf_dat.c"
#include "DRDI/Set103/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set103/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set103/ul1d_custom_rf_dpd.h"
#include "DRDI/Set103/ul1d_custom_rf_dpd.c"
#include "DRDI/Set103/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 104
   /*Include build for Set104 custom folder*/
#include "DRDI/Set104/ul1d_custom_rf.h"
#include "DRDI/Set104/ul1d_custom_rf_ca.h"
#include "DRDI/Set104/ul1d_custom_mipi.h"
#include "DRDI/Set104/u12193.c"
#include "DRDI/Set104/ul1d_custom_mipi.c"
#include "DRDI/Set104/ul1d_custom_rf.c"
#include "DRDI/Set104/ul1d_custom_mipi_ca.c"
#include "DRDI/Set104/ul1d_custom_rf_tas.h"
#include "DRDI/Set104/ul1d_custom_rf_tas.c"
#include "DRDI/Set104/ul1d_custom_rf_dat.h"
#include "DRDI/Set104/ul1d_custom_rf_dat.c"
#include "DRDI/Set104/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set104/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set104/ul1d_custom_rf_dpd.h"
#include "DRDI/Set104/ul1d_custom_rf_dpd.c"
#include "DRDI/Set104/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 105
   /*Include build for Set105 custom folder*/
#include "DRDI/Set105/ul1d_custom_rf.h"
#include "DRDI/Set105/ul1d_custom_rf_ca.h"
#include "DRDI/Set105/ul1d_custom_mipi.h"
#include "DRDI/Set105/u12193.c"
#include "DRDI/Set105/ul1d_custom_mipi.c"
#include "DRDI/Set105/ul1d_custom_rf.c"
#include "DRDI/Set105/ul1d_custom_mipi_ca.c"
#include "DRDI/Set105/ul1d_custom_rf_tas.h"
#include "DRDI/Set105/ul1d_custom_rf_tas.c"
#include "DRDI/Set105/ul1d_custom_rf_dat.h"
#include "DRDI/Set105/ul1d_custom_rf_dat.c"
#include "DRDI/Set105/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set105/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set105/ul1d_custom_rf_dpd.h"
#include "DRDI/Set105/ul1d_custom_rf_dpd.c"
#include "DRDI/Set105/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 106
   /*Include build for Set106 custom folder*/
#include "DRDI/Set106/ul1d_custom_rf.h"
#include "DRDI/Set106/ul1d_custom_rf_ca.h"
#include "DRDI/Set106/ul1d_custom_mipi.h"
#include "DRDI/Set106/u12193.c"
#include "DRDI/Set106/ul1d_custom_mipi.c"
#include "DRDI/Set106/ul1d_custom_rf.c"
#include "DRDI/Set106/ul1d_custom_mipi_ca.c"
#include "DRDI/Set106/ul1d_custom_rf_tas.h"
#include "DRDI/Set106/ul1d_custom_rf_tas.c"
#include "DRDI/Set106/ul1d_custom_rf_dat.h"
#include "DRDI/Set106/ul1d_custom_rf_dat.c"
#include "DRDI/Set106/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set106/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set106/ul1d_custom_rf_dpd.h"
#include "DRDI/Set106/ul1d_custom_rf_dpd.c"
#include "DRDI/Set106/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 107
   /*Include build for Set107 custom folder*/
#include "DRDI/Set107/ul1d_custom_rf.h"
#include "DRDI/Set107/ul1d_custom_rf_ca.h"
#include "DRDI/Set107/ul1d_custom_mipi.h"
#include "DRDI/Set107/u12193.c"
#include "DRDI/Set107/ul1d_custom_mipi.c"
#include "DRDI/Set107/ul1d_custom_rf.c"
#include "DRDI/Set107/ul1d_custom_mipi_ca.c"
#include "DRDI/Set107/ul1d_custom_rf_tas.h"
#include "DRDI/Set107/ul1d_custom_rf_tas.c"
#include "DRDI/Set107/ul1d_custom_rf_dat.h"
#include "DRDI/Set107/ul1d_custom_rf_dat.c"
#include "DRDI/Set107/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set107/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set107/ul1d_custom_rf_dpd.h"
#include "DRDI/Set107/ul1d_custom_rf_dpd.c"
#include "DRDI/Set107/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 108
   /*Include build for Set108 custom folder*/
#include "DRDI/Set108/ul1d_custom_rf.h"
#include "DRDI/Set108/ul1d_custom_rf_ca.h"
#include "DRDI/Set108/ul1d_custom_mipi.h"
#include "DRDI/Set108/u12193.c"
#include "DRDI/Set108/ul1d_custom_mipi.c"
#include "DRDI/Set108/ul1d_custom_rf.c"
#include "DRDI/Set108/ul1d_custom_mipi_ca.c"
#include "DRDI/Set108/ul1d_custom_rf_tas.h"
#include "DRDI/Set108/ul1d_custom_rf_tas.c"
#include "DRDI/Set108/ul1d_custom_rf_dat.h"
#include "DRDI/Set108/ul1d_custom_rf_dat.c"
#include "DRDI/Set108/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set108/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set108/ul1d_custom_rf_dpd.h"
#include "DRDI/Set108/ul1d_custom_rf_dpd.c"
#include "DRDI/Set108/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 109
   /*Include build for Set109 custom folder*/
#include "DRDI/Set109/ul1d_custom_rf.h"
#include "DRDI/Set109/ul1d_custom_rf_ca.h"
#include "DRDI/Set109/ul1d_custom_mipi.h"
#include "DRDI/Set109/u12193.c"
#include "DRDI/Set109/ul1d_custom_mipi.c"
#include "DRDI/Set109/ul1d_custom_rf.c"
#include "DRDI/Set109/ul1d_custom_mipi_ca.c"
#include "DRDI/Set109/ul1d_custom_rf_tas.h"
#include "DRDI/Set109/ul1d_custom_rf_tas.c"
#include "DRDI/Set109/ul1d_custom_rf_dat.h"
#include "DRDI/Set109/ul1d_custom_rf_dat.c"
#include "DRDI/Set109/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set109/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set109/ul1d_custom_rf_dpd.h"
#include "DRDI/Set109/ul1d_custom_rf_dpd.c"
#include "DRDI/Set109/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 110
   /*Include build for Set110 custom folder*/
#include "DRDI/Set110/ul1d_custom_rf.h"
#include "DRDI/Set110/ul1d_custom_rf_ca.h"
#include "DRDI/Set110/ul1d_custom_mipi.h"
#include "DRDI/Set110/u12193.c"
#include "DRDI/Set110/ul1d_custom_mipi.c"
#include "DRDI/Set110/ul1d_custom_rf.c"
#include "DRDI/Set110/ul1d_custom_mipi_ca.c"
#include "DRDI/Set110/ul1d_custom_rf_tas.h"
#include "DRDI/Set110/ul1d_custom_rf_tas.c"
#include "DRDI/Set110/ul1d_custom_rf_dat.h"
#include "DRDI/Set110/ul1d_custom_rf_dat.c"
#include "DRDI/Set110/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set110/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set110/ul1d_custom_rf_dpd.h"
#include "DRDI/Set110/ul1d_custom_rf_dpd.c"
#include "DRDI/Set110/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 111
   /*Include build for Set111 custom folder*/
#include "DRDI/Set111/ul1d_custom_rf.h"
#include "DRDI/Set111/ul1d_custom_rf_ca.h"
#include "DRDI/Set111/ul1d_custom_mipi.h"
#include "DRDI/Set111/u12193.c"
#include "DRDI/Set111/ul1d_custom_mipi.c"
#include "DRDI/Set111/ul1d_custom_rf.c"
#include "DRDI/Set111/ul1d_custom_mipi_ca.c"
#include "DRDI/Set111/ul1d_custom_rf_tas.h"
#include "DRDI/Set111/ul1d_custom_rf_tas.c"
#include "DRDI/Set111/ul1d_custom_rf_dat.h"
#include "DRDI/Set111/ul1d_custom_rf_dat.c"
#include "DRDI/Set111/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set111/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set111/ul1d_custom_rf_dpd.h"
#include "DRDI/Set111/ul1d_custom_rf_dpd.c"
#include "DRDI/Set111/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 112
   /*Include build for Set112 custom folder*/
#include "DRDI/Set112/ul1d_custom_rf.h"
#include "DRDI/Set112/ul1d_custom_rf_ca.h"
#include "DRDI/Set112/ul1d_custom_mipi.h"
#include "DRDI/Set112/u12193.c"
#include "DRDI/Set112/ul1d_custom_mipi.c"
#include "DRDI/Set112/ul1d_custom_rf.c"
#include "DRDI/Set112/ul1d_custom_mipi_ca.c"
#include "DRDI/Set112/ul1d_custom_rf_tas.h"
#include "DRDI/Set112/ul1d_custom_rf_tas.c"
#include "DRDI/Set112/ul1d_custom_rf_dat.h"
#include "DRDI/Set112/ul1d_custom_rf_dat.c"
#include "DRDI/Set112/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set112/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set112/ul1d_custom_rf_dpd.h"
#include "DRDI/Set112/ul1d_custom_rf_dpd.c"
#include "DRDI/Set112/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 113
   /*Include build for Set113 custom folder*/
#include "DRDI/Set113/ul1d_custom_rf.h"
#include "DRDI/Set113/ul1d_custom_rf_ca.h"
#include "DRDI/Set113/ul1d_custom_mipi.h"
#include "DRDI/Set113/u12193.c"
#include "DRDI/Set113/ul1d_custom_mipi.c"
#include "DRDI/Set113/ul1d_custom_rf.c"
#include "DRDI/Set113/ul1d_custom_mipi_ca.c"
#include "DRDI/Set113/ul1d_custom_rf_tas.h"
#include "DRDI/Set113/ul1d_custom_rf_tas.c"
#include "DRDI/Set113/ul1d_custom_rf_dat.h"
#include "DRDI/Set113/ul1d_custom_rf_dat.c"
#include "DRDI/Set113/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set113/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set113/ul1d_custom_rf_dpd.h"
#include "DRDI/Set113/ul1d_custom_rf_dpd.c"
#include "DRDI/Set113/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 114
   /*Include build for Set114 custom folder*/
#include "DRDI/Set114/ul1d_custom_rf.h"
#include "DRDI/Set114/ul1d_custom_rf_ca.h"
#include "DRDI/Set114/ul1d_custom_mipi.h"
#include "DRDI/Set114/u12193.c"
#include "DRDI/Set114/ul1d_custom_mipi.c"
#include "DRDI/Set114/ul1d_custom_rf.c"
#include "DRDI/Set114/ul1d_custom_mipi_ca.c"
#include "DRDI/Set114/ul1d_custom_rf_tas.h"
#include "DRDI/Set114/ul1d_custom_rf_tas.c"
#include "DRDI/Set114/ul1d_custom_rf_dat.h"
#include "DRDI/Set114/ul1d_custom_rf_dat.c"
#include "DRDI/Set114/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set114/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set114/ul1d_custom_rf_dpd.h"
#include "DRDI/Set114/ul1d_custom_rf_dpd.c"
#include "DRDI/Set114/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 115
   /*Include build for Set115 custom folder*/
#include "DRDI/Set115/ul1d_custom_rf.h"
#include "DRDI/Set115/ul1d_custom_rf_ca.h"
#include "DRDI/Set115/ul1d_custom_mipi.h"
#include "DRDI/Set115/u12193.c"
#include "DRDI/Set115/ul1d_custom_mipi.c"
#include "DRDI/Set115/ul1d_custom_rf.c"
#include "DRDI/Set115/ul1d_custom_mipi_ca.c"
#include "DRDI/Set115/ul1d_custom_rf_tas.h"
#include "DRDI/Set115/ul1d_custom_rf_tas.c"
#include "DRDI/Set115/ul1d_custom_rf_dat.h"
#include "DRDI/Set115/ul1d_custom_rf_dat.c"
#include "DRDI/Set115/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set115/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set115/ul1d_custom_rf_dpd.h"
#include "DRDI/Set115/ul1d_custom_rf_dpd.c"
#include "DRDI/Set115/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 116
   /*Include build for Set116 custom folder*/
#include "DRDI/Set116/ul1d_custom_rf.h"
#include "DRDI/Set116/ul1d_custom_rf_ca.h"
#include "DRDI/Set116/ul1d_custom_mipi.h"
#include "DRDI/Set116/u12193.c"
#include "DRDI/Set116/ul1d_custom_mipi.c"
#include "DRDI/Set116/ul1d_custom_rf.c"
#include "DRDI/Set116/ul1d_custom_mipi_ca.c"
#include "DRDI/Set116/ul1d_custom_rf_tas.h"
#include "DRDI/Set116/ul1d_custom_rf_tas.c"
#include "DRDI/Set116/ul1d_custom_rf_dat.h"
#include "DRDI/Set116/ul1d_custom_rf_dat.c"
#include "DRDI/Set116/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set116/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set116/ul1d_custom_rf_dpd.h"
#include "DRDI/Set116/ul1d_custom_rf_dpd.c"
#include "DRDI/Set116/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 117
   /*Include build for Set117 custom folder*/
#include "DRDI/Set117/ul1d_custom_rf.h"
#include "DRDI/Set117/ul1d_custom_rf_ca.h"
#include "DRDI/Set117/ul1d_custom_mipi.h"
#include "DRDI/Set117/u12193.c"
#include "DRDI/Set117/ul1d_custom_mipi.c"
#include "DRDI/Set117/ul1d_custom_rf.c"
#include "DRDI/Set117/ul1d_custom_mipi_ca.c"
#include "DRDI/Set117/ul1d_custom_rf_tas.h"
#include "DRDI/Set117/ul1d_custom_rf_tas.c"
#include "DRDI/Set117/ul1d_custom_rf_dat.h"
#include "DRDI/Set117/ul1d_custom_rf_dat.c"
#include "DRDI/Set117/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set117/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set117/ul1d_custom_rf_dpd.h"
#include "DRDI/Set117/ul1d_custom_rf_dpd.c"
#include "DRDI/Set117/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 118
   /*Include build for Set118 custom folder*/
#include "DRDI/Set118/ul1d_custom_rf.h"
#include "DRDI/Set118/ul1d_custom_rf_ca.h"
#include "DRDI/Set118/ul1d_custom_mipi.h"
#include "DRDI/Set118/u12193.c"
#include "DRDI/Set118/ul1d_custom_mipi.c"
#include "DRDI/Set118/ul1d_custom_rf.c"
#include "DRDI/Set118/ul1d_custom_mipi_ca.c"
#include "DRDI/Set118/ul1d_custom_rf_tas.h"
#include "DRDI/Set118/ul1d_custom_rf_tas.c"
#include "DRDI/Set118/ul1d_custom_rf_dat.h"
#include "DRDI/Set118/ul1d_custom_rf_dat.c"
#include "DRDI/Set118/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set118/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set118/ul1d_custom_rf_dpd.h"
#include "DRDI/Set118/ul1d_custom_rf_dpd.c"
#include "DRDI/Set118/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 119
   /*Include build for Set119 custom folder*/
#include "DRDI/Set119/ul1d_custom_rf.h"
#include "DRDI/Set119/ul1d_custom_rf_ca.h"
#include "DRDI/Set119/ul1d_custom_mipi.h"
#include "DRDI/Set119/u12193.c"
#include "DRDI/Set119/ul1d_custom_mipi.c"
#include "DRDI/Set119/ul1d_custom_rf.c"
#include "DRDI/Set119/ul1d_custom_mipi_ca.c"
#include "DRDI/Set119/ul1d_custom_rf_tas.h"
#include "DRDI/Set119/ul1d_custom_rf_tas.c"
#include "DRDI/Set119/ul1d_custom_rf_dat.h"
#include "DRDI/Set119/ul1d_custom_rf_dat.c"
#include "DRDI/Set119/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set119/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set119/ul1d_custom_rf_dpd.h"
#include "DRDI/Set119/ul1d_custom_rf_dpd.c"
#include "DRDI/Set119/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 120
   /*Include build for Set120 custom folder*/
#include "DRDI/Set120/ul1d_custom_rf.h"
#include "DRDI/Set120/ul1d_custom_rf_ca.h"
#include "DRDI/Set120/ul1d_custom_mipi.h"
#include "DRDI/Set120/u12193.c"
#include "DRDI/Set120/ul1d_custom_mipi.c"
#include "DRDI/Set120/ul1d_custom_rf.c"
#include "DRDI/Set120/ul1d_custom_mipi_ca.c"
#include "DRDI/Set120/ul1d_custom_rf_tas.h"
#include "DRDI/Set120/ul1d_custom_rf_tas.c"
#include "DRDI/Set120/ul1d_custom_rf_dat.h"
#include "DRDI/Set120/ul1d_custom_rf_dat.c"
#include "DRDI/Set120/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set120/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set120/ul1d_custom_rf_dpd.h"
#include "DRDI/Set120/ul1d_custom_rf_dpd.c"
#include "DRDI/Set120/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 121
   /*Include build for Set121 custom folder*/
#include "DRDI/Set121/ul1d_custom_rf.h"
#include "DRDI/Set121/ul1d_custom_rf_ca.h"
#include "DRDI/Set121/ul1d_custom_mipi.h"
#include "DRDI/Set121/u12193.c"
#include "DRDI/Set121/ul1d_custom_mipi.c"
#include "DRDI/Set121/ul1d_custom_rf.c"
#include "DRDI/Set121/ul1d_custom_mipi_ca.c"
#include "DRDI/Set121/ul1d_custom_rf_tas.h"
#include "DRDI/Set121/ul1d_custom_rf_tas.c"
#include "DRDI/Set121/ul1d_custom_rf_dat.h"
#include "DRDI/Set121/ul1d_custom_rf_dat.c"
#include "DRDI/Set121/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set121/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set121/ul1d_custom_rf_dpd.h"
#include "DRDI/Set121/ul1d_custom_rf_dpd.c"
#include "DRDI/Set121/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 122
   /*Include build for Set122 custom folder*/
#include "DRDI/Set122/ul1d_custom_rf.h"
#include "DRDI/Set122/ul1d_custom_rf_ca.h"
#include "DRDI/Set122/ul1d_custom_mipi.h"
#include "DRDI/Set122/u12193.c"
#include "DRDI/Set122/ul1d_custom_mipi.c"
#include "DRDI/Set122/ul1d_custom_rf.c"
#include "DRDI/Set122/ul1d_custom_mipi_ca.c"
#include "DRDI/Set122/ul1d_custom_rf_tas.h"
#include "DRDI/Set122/ul1d_custom_rf_tas.c"
#include "DRDI/Set122/ul1d_custom_rf_dat.h"
#include "DRDI/Set122/ul1d_custom_rf_dat.c"
#include "DRDI/Set122/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set122/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set122/ul1d_custom_rf_dpd.h"
#include "DRDI/Set122/ul1d_custom_rf_dpd.c"
#include "DRDI/Set122/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 123
   /*Include build for Set123 custom folder*/
#include "DRDI/Set123/ul1d_custom_rf.h"
#include "DRDI/Set123/ul1d_custom_rf_ca.h"
#include "DRDI/Set123/ul1d_custom_mipi.h"
#include "DRDI/Set123/u12193.c"
#include "DRDI/Set123/ul1d_custom_mipi.c"
#include "DRDI/Set123/ul1d_custom_rf.c"
#include "DRDI/Set123/ul1d_custom_mipi_ca.c"
#include "DRDI/Set123/ul1d_custom_rf_tas.h"
#include "DRDI/Set123/ul1d_custom_rf_tas.c"
#include "DRDI/Set123/ul1d_custom_rf_dat.h"
#include "DRDI/Set123/ul1d_custom_rf_dat.c"
#include "DRDI/Set123/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set123/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set123/ul1d_custom_rf_dpd.h"
#include "DRDI/Set123/ul1d_custom_rf_dpd.c"
#include "DRDI/Set123/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 124
   /*Include build for Set124 custom folder*/
#include "DRDI/Set124/ul1d_custom_rf.h"
#include "DRDI/Set124/ul1d_custom_rf_ca.h"
#include "DRDI/Set124/ul1d_custom_mipi.h"
#include "DRDI/Set124/u12193.c"
#include "DRDI/Set124/ul1d_custom_mipi.c"
#include "DRDI/Set124/ul1d_custom_rf.c"
#include "DRDI/Set124/ul1d_custom_mipi_ca.c"
#include "DRDI/Set124/ul1d_custom_rf_tas.h"
#include "DRDI/Set124/ul1d_custom_rf_tas.c"
#include "DRDI/Set124/ul1d_custom_rf_dat.h"
#include "DRDI/Set124/ul1d_custom_rf_dat.c"
#include "DRDI/Set124/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set124/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set124/ul1d_custom_rf_dpd.h"
#include "DRDI/Set124/ul1d_custom_rf_dpd.c"
#include "DRDI/Set124/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 125
   /*Include build for Set125 custom folder*/
#include "DRDI/Set125/ul1d_custom_rf.h"
#include "DRDI/Set125/ul1d_custom_rf_ca.h"
#include "DRDI/Set125/ul1d_custom_mipi.h"
#include "DRDI/Set125/u12193.c"
#include "DRDI/Set125/ul1d_custom_mipi.c"
#include "DRDI/Set125/ul1d_custom_rf.c"
#include "DRDI/Set125/ul1d_custom_mipi_ca.c"
#include "DRDI/Set125/ul1d_custom_rf_tas.h"
#include "DRDI/Set125/ul1d_custom_rf_tas.c"
#include "DRDI/Set125/ul1d_custom_rf_dat.h"
#include "DRDI/Set125/ul1d_custom_rf_dat.c"
#include "DRDI/Set125/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set125/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set125/ul1d_custom_rf_dpd.h"
#include "DRDI/Set125/ul1d_custom_rf_dpd.c"
#include "DRDI/Set125/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 126
   /*Include build for Set126 custom folder*/
#include "DRDI/Set126/ul1d_custom_rf.h"
#include "DRDI/Set126/ul1d_custom_rf_ca.h"
#include "DRDI/Set126/ul1d_custom_mipi.h"
#include "DRDI/Set126/u12193.c"
#include "DRDI/Set126/ul1d_custom_mipi.c"
#include "DRDI/Set126/ul1d_custom_rf.c"
#include "DRDI/Set126/ul1d_custom_mipi_ca.c"
#include "DRDI/Set126/ul1d_custom_rf_tas.h"
#include "DRDI/Set126/ul1d_custom_rf_tas.c"
#include "DRDI/Set126/ul1d_custom_rf_dat.h"
#include "DRDI/Set126/ul1d_custom_rf_dat.c"
#include "DRDI/Set126/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set126/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set126/ul1d_custom_rf_dpd.h"
#include "DRDI/Set126/ul1d_custom_rf_dpd.c"
#include "DRDI/Set126/ul1d_custom_bb.c"
   #endif

   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 127
   /*Include build for Set127 custom folder*/
#include "DRDI/Set127/ul1d_custom_rf.h"
#include "DRDI/Set127/ul1d_custom_rf_ca.h"
#include "DRDI/Set127/ul1d_custom_mipi.h"
#include "DRDI/Set127/u12193.c"
#include "DRDI/Set127/ul1d_custom_mipi.c"
#include "DRDI/Set127/ul1d_custom_rf.c"
#include "DRDI/Set127/ul1d_custom_mipi_ca.c"
#include "DRDI/Set127/ul1d_custom_rf_tas.h"
#include "DRDI/Set127/ul1d_custom_rf_tas.c"
#include "DRDI/Set127/ul1d_custom_rf_dat.h"
#include "DRDI/Set127/ul1d_custom_rf_dat.c"
#include "DRDI/Set127/ul1d_custom_mipi_dpd.h"
#include "DRDI/Set127/ul1d_custom_mipi_dpd.c"
#include "DRDI/Set127/ul1d_custom_rf_dpd.h"
#include "DRDI/Set127/ul1d_custom_rf_dpd.c"
#include "DRDI/Set127/ul1d_custom_bb.c"
   #endif
   
#endif   

/***************************************************************************
 * Global Data
 ***************************************************************************/
/* Look up table from action id to action function
 * See the enum #Ul1CustomActionId for members of
 * the table */
const Ul1CustomFunction ul1CustomActionTable[UL1CUSTOM_MAX_PROC_ACTIONS] =
{
   NULL,

#if UL1CUSTOM_GPIO_ENABLE
   UL1CUSTOM_DynamicInitByGPIO,
#else
   NULL, /* Null action */
#endif

#if UL1CUSTOM_ADC_ENABLE
   UL1CUSTOM_DynamicInitByADC,
#else
   NULL, /* Null action */
#endif

#if UL1CUSTOM_NVRAM_BARCODE_ENABLE
   UL1CUSTOM_DynamicInitByNvramBarcode
#else
   NULL /* Null action */
#endif
};

/***************************************************************************
 * Data array of pointers pointed to data array for custom data
 ***************************************************************************/
//********************************************
// UMTS Band Indicator Custom data definition
//********************************************
/* Pointer array for customer to input 3G band support parameters
 * with pointers for each of the configuration set to be detected */
UMTSBand *ul1d_rf_bandind_array_ptr[UL1CUSTOM_TOTAL_SET_NUMS];

//**************************************
// UMTS BPI data Custom data definition
//**************************************
/* Pointer array for customer to input 3G BPI data parameters
 * with pointers for each of the configuration set to be detected */
Ul1CustomDynamicInitUmtsBpiData *ul1d_rf_bpidata_array_ptr[UL1CUSTOM_TOTAL_SET_NUMS];

//***************************************************
// UMTS LNA port/Tx path data Custom data definition
//***************************************************
/* Pointer array for customer to input 3G LNA port and TX path parameters by band
 * with pointers for each of the configuration set to be detected */
Ul1CustomDynamicInitLnaPortTxPath *ul1d_rf_lna_txpath_array_ptr[UL1CUSTOM_TOTAL_SET_NUMS];

//*************************************************
// UMTS Tx calibration data Custom data definition
//*************************************************
// Tx Ramp data
/* Pointer array for customer to input 3G TX Ramp calibration data
 * with pointers for each of the configuration set to be detected */
Ul1CustomDynamicInitUmtsTxRampData *ul1d_rf_txramp_array_ptr[UL1CUSTOM_TOTAL_SET_NUMS];

// Tx PA oct-level data
/* Pointer array for customer to input 3G TX oct-level calibration data
 * with pointers for each of the configuration set to be detected */
Ul1CustomDynamicInitUmtsTxPaOctLvlData *ul1d_rf_txoctlvl_array_ptr[UL1CUSTOM_TOTAL_SET_NUMS];

//*************************************************
// UMTS Rx calibration data Custom data definition
//*************************************************
/* Pointer array for customer to input 3G RX path loss calibration data
 * with pointers for each of the configuration set to be detected */
Ul1CustomDynamicInitUmtsRxPathLossData *ul1d_rf_rxpathloss_array_ptr[UL1CUSTOM_TOTAL_SET_NUMS];

//*********************************************
// UMTS Temperature DAC Custom data definition
//*********************************************
/* Pointer array for customer to input 3G Temp. DAC calibration data
 * with pointers for each of the configuration set to be detected */
Ul1CustomDynamicInitUmtsTempDac *ul1d_rf_utempdac_array_ptr[UL1CUSTOM_TOTAL_SET_NUMS];

//******************************************************
// UMTS Tx PRACH TM Compensation Custom data definition
//******************************************************
/* Pointer array for customer to input 3G Tx PRACH TM Compensation calibration data
 * with pointers for each of the configuration set to be detected */
Ul1CustomDynamicInitUmtsTxPrachTmCompData *ul1d_rf_txprachtmcomp_array_ptr[UL1CUSTOM_TOTAL_SET_NUMS];

//******************************************************
// UMTS AFC DAC Custom data definition
//******************************************************
/* Pointer array for customer to input 3G AFC DAC calibration data
 * with pointers for each of the configuration set to be detected */
Ul1CustomDynamicInitUmtsAfcDac *ul1d_rf_afcdac_array_ptr[UL1CUSTOM_TOTAL_SET_NUMS];

//******************************************************
// UMTS AFC CAP Custom data definition
//******************************************************
/* Pointer array for customer to input 3G AFC CAP calibration data
 * with pointers for each of the configuration set to be detected */
Ul1CustomDynamicInitUmtsAfcCap *ul1d_rf_afccap_array_ptr[UL1CUSTOM_TOTAL_SET_NUMS];


/***************************************************************************
 * Data definition for custom to input data
 ***************************************************************************/
//********************************************
// UMTS Band Indicator Custom data definition
//********************************************
const UMTSBand ul1CustomBand[UL1CUSTOM_TOTAL_REAL_SET_NUMS][UL1CUSTOM_MAX_RF_SUPPORT_BAND_NUM] =
{
#if !(UL1CUSTOM_DRDI_ENABLE)
   /* The default Band Setting*/
   {
      RX_BAND_INDICATOR_0_SetDefault,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_SetDefault,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_SetDefault,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_SetDefault,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_SetDefault      // Sub-index 4 in a Set      
   }
#else
   /* Set 0 */
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 0      
   {
      RX_BAND_INDICATOR_0_Set0,     // Sub-index 0 in a Set                                                         
      RX_BAND_INDICATOR_1_Set0,     // Sub-index 1 in a Set                                                         
      RX_BAND_INDICATOR_2_Set0,     // Sub-index 2 in a Set                                                         
      RX_BAND_INDICATOR_3_Set0,     // Sub-index 3 in a Set                                                         
      RX_BAND_INDICATOR_4_Set0      // Sub-index 4 in a Set                                                          
   }
   #endif
   /* Set 1 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 1
   ,{
      RX_BAND_INDICATOR_0_Set1,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set1,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set1,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set1,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set1      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 2 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 2
   ,{
      RX_BAND_INDICATOR_0_Set2,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set2,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set2,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set2,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set2      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 3 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 3
   ,{
      RX_BAND_INDICATOR_0_Set3,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set3,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set3,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set3,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set3      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 4 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 4
   ,{
      RX_BAND_INDICATOR_0_Set4,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set4,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set4,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set4,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set4      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 5 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 5
   ,{
      RX_BAND_INDICATOR_0_Set5,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set5,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set5,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set5,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set5      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 6 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 6
   ,{
      RX_BAND_INDICATOR_0_Set6,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set6,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set6,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set6,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set6      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 7 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 7
   ,{
      RX_BAND_INDICATOR_0_Set7,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set7,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set7,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set7,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set7      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 8 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 8
   ,{
      RX_BAND_INDICATOR_0_Set8,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set8,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set8,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set8,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set8      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 9 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 9
   ,{
      RX_BAND_INDICATOR_0_Set9,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set9,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set9,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set9,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set9      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 10 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 10
   ,{
      RX_BAND_INDICATOR_0_Set10,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set10,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set10,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set10,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set10      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 11 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 11
   ,{
      RX_BAND_INDICATOR_0_Set11,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set11,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set11,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set11,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set11      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 12 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 12
   ,{
      RX_BAND_INDICATOR_0_Set12,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set12,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set12,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set12,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set12      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 13 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 13
   ,{
      RX_BAND_INDICATOR_0_Set13,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set13,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set13,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set13,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set13      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 14 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 14
   ,{
      RX_BAND_INDICATOR_0_Set14,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set14,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set14,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set14,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set14      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 15 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 15
   ,{
      RX_BAND_INDICATOR_0_Set15,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set15,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set15,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set15,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set15      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 16 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 16
   ,{
      RX_BAND_INDICATOR_0_Set16,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set16,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set16,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set16,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set16      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 17 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 17
   ,{
      RX_BAND_INDICATOR_0_Set17,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set17,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set17,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set17,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set17      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 18 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 18
   ,{
      RX_BAND_INDICATOR_0_Set18,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set18,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set18,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set18,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set18      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 19 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 19
   ,{
      RX_BAND_INDICATOR_0_Set19,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set19,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set19,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set19,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set19      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 20 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 20
   ,{
      RX_BAND_INDICATOR_0_Set20,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set20,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set20,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set20,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set20      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 21 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 21
   ,{
      RX_BAND_INDICATOR_0_Set21,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set21,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set21,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set21,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set21      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 22 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 22
   ,{
      RX_BAND_INDICATOR_0_Set22,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set22,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set22,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set22,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set22      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 23 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 23
   ,{
      RX_BAND_INDICATOR_0_Set23,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set23,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set23,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set23,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set23      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 24 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 24
   ,{
      RX_BAND_INDICATOR_0_Set24,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set24,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set24,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set24,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set24      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 25 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 25
   ,{
      RX_BAND_INDICATOR_0_Set25,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set25,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set25,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set25,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set25      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 26 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 26
   ,{
      RX_BAND_INDICATOR_0_Set26,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set26,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set26,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set26,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set26      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 27 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 27
   ,{
      RX_BAND_INDICATOR_0_Set27,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set27,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set27,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set27,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set27      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 28 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 28
   ,{
      RX_BAND_INDICATOR_0_Set28,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set28,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set28,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set28,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set28      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 29 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 29
   ,{
      RX_BAND_INDICATOR_0_Set29,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set29,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set29,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set29,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set29      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 30 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 30
   ,{
      RX_BAND_INDICATOR_0_Set30,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set30,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set30,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set30,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set30      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 31 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 31
   ,{
      RX_BAND_INDICATOR_0_Set31,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set31,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set31,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set31,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set31      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 32 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 32
   ,{
      RX_BAND_INDICATOR_0_Set32,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set32,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set32,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set32,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set32      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 33 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 33
   ,{
      RX_BAND_INDICATOR_0_Set33,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set33,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set33,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set33,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set33      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 34 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 34
   ,{
      RX_BAND_INDICATOR_0_Set34,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set34,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set34,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set34,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set34      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 35 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 35
   ,{
      RX_BAND_INDICATOR_0_Set35,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set35,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set35,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set35,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set35      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 36 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 36
   ,{
      RX_BAND_INDICATOR_0_Set36,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set36,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set36,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set36,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set36      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 37 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 37
   ,{
      RX_BAND_INDICATOR_0_Set37,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set37,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set37,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set37,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set37      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 38 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 38
   ,{
      RX_BAND_INDICATOR_0_Set38,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set38,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set38,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set38,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set38      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 39 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 39
   ,{
      RX_BAND_INDICATOR_0_Set39,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set39,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set39,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set39,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set39      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 40 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 40
   ,{
      RX_BAND_INDICATOR_0_Set40,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set40,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set40,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set40,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set40      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 41 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 41
   ,{
      RX_BAND_INDICATOR_0_Set41,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set41,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set41,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set41,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set41      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 42 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 42
   ,{
      RX_BAND_INDICATOR_0_Set42,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set42,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set42,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set42,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set42      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 43 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 43
   ,{
      RX_BAND_INDICATOR_0_Set43,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set43,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set43,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set43,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set43      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 44 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 44
   ,{
      RX_BAND_INDICATOR_0_Set44,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set44,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set44,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set44,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set44      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 45 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 45
   ,{
      RX_BAND_INDICATOR_0_Set45,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set45,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set45,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set45,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set45      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 46 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 46
   ,{
      RX_BAND_INDICATOR_0_Set46,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set46,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set46,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set46,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set46      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 47 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 47
   ,{
      RX_BAND_INDICATOR_0_Set47,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set47,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set47,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set47,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set47      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 48 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 48
   ,{
      RX_BAND_INDICATOR_0_Set48,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set48,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set48,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set48,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set48      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 49 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 49
   ,{
      RX_BAND_INDICATOR_0_Set49,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set49,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set49,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set49,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set49      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 50 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 50
   ,{
      RX_BAND_INDICATOR_0_Set50,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set50,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set50,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set50,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set50      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 51 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 51
   ,{
      RX_BAND_INDICATOR_0_Set51,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set51,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set51,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set51,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set51      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 52 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 52
   ,{
      RX_BAND_INDICATOR_0_Set52,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set52,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set52,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set52,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set52      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 53 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 53
   ,{
      RX_BAND_INDICATOR_0_Set53,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set53,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set53,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set53,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set53      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 54 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 54
   ,{
      RX_BAND_INDICATOR_0_Set54,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set54,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set54,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set54,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set54      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 55 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 55
   ,{
      RX_BAND_INDICATOR_0_Set55,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set55,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set55,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set55,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set55      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 56 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 56
   ,{
      RX_BAND_INDICATOR_0_Set56,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set56,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set56,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set56,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set56      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 57 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 57
   ,{
      RX_BAND_INDICATOR_0_Set57,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set57,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set57,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set57,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set57      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 58 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 58
   ,{
      RX_BAND_INDICATOR_0_Set58,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set58,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set58,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set58,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set58      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 59 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 59
   ,{
      RX_BAND_INDICATOR_0_Set59,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set59,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set59,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set59,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set59      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 60 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 60
   ,{
      RX_BAND_INDICATOR_0_Set60,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set60,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set60,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set60,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set60      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 61 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 61
   ,{
      RX_BAND_INDICATOR_0_Set61,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set61,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set61,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set61,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set61      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 62 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 62
   ,{
      RX_BAND_INDICATOR_0_Set62,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set62,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set62,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set62,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set62      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 63 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 63
   ,{
      RX_BAND_INDICATOR_0_Set63,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set63,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set63,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set63,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set63      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 64 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 64
   ,{
      RX_BAND_INDICATOR_0_Set64,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set64,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set64,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set64,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set64      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 65 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 65
   ,{
      RX_BAND_INDICATOR_0_Set65,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set65,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set65,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set65,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set65      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 66 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 66
   ,{
      RX_BAND_INDICATOR_0_Set66,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set66,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set66,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set66,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set66      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 67 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 67
   ,{
      RX_BAND_INDICATOR_0_Set67,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set67,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set67,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set67,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set67      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 68 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 68
   ,{
      RX_BAND_INDICATOR_0_Set68,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set68,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set68,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set68,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set68      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 69 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 69
   ,{
      RX_BAND_INDICATOR_0_Set69,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set69,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set69,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set69,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set69      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 70 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 70
   ,{
      RX_BAND_INDICATOR_0_Set70,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set70,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set70,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set70,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set70      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 71 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 71
   ,{
      RX_BAND_INDICATOR_0_Set71,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set71,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set71,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set71,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set71      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 72 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 72
   ,{
      RX_BAND_INDICATOR_0_Set72,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set72,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set72,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set72,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set72      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 73 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 73
   ,{
      RX_BAND_INDICATOR_0_Set73,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set73,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set73,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set73,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set73      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 74 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 74
   ,{
      RX_BAND_INDICATOR_0_Set74,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set74,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set74,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set74,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set74      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 75 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 75
   ,{
      RX_BAND_INDICATOR_0_Set75,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set75,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set75,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set75,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set75      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 76 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 76
   ,{
      RX_BAND_INDICATOR_0_Set76,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set76,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set76,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set76,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set76      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 77 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 77
   ,{
      RX_BAND_INDICATOR_0_Set77,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set77,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set77,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set77,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set77      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 78 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 78
   ,{
      RX_BAND_INDICATOR_0_Set78,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set78,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set78,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set78,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set78      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 79 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 79
   ,{
      RX_BAND_INDICATOR_0_Set79,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set79,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set79,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set79,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set79      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 80 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 80
   ,{
      RX_BAND_INDICATOR_0_Set80,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set80,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set80,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set80,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set80      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 81 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 81
   ,{
      RX_BAND_INDICATOR_0_Set81,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set81,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set81,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set81,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set81      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 82 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 82
   ,{
      RX_BAND_INDICATOR_0_Set82,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set82,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set82,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set82,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set82      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 83 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 83
   ,{
      RX_BAND_INDICATOR_0_Set83,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set83,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set83,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set83,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set83      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 84 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 84
   ,{
      RX_BAND_INDICATOR_0_Set84,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set84,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set84,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set84,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set84      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 85 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 85
   ,{
      RX_BAND_INDICATOR_0_Set85,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set85,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set85,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set85,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set85      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 86 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 86
   ,{
      RX_BAND_INDICATOR_0_Set86,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set86,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set86,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set86,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set86      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 87 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 87
   ,{
      RX_BAND_INDICATOR_0_Set87,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set87,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set87,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set87,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set87      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 88 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 88
   ,{
      RX_BAND_INDICATOR_0_Set88,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set88,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set88,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set88,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set88      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 89 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 89
   ,{
      RX_BAND_INDICATOR_0_Set89,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set89,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set89,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set89,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set89      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 90 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 90
   ,{
      RX_BAND_INDICATOR_0_Set90,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set90,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set90,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set90,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set90      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 91 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 91
   ,{
      RX_BAND_INDICATOR_0_Set91,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set91,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set91,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set91,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set91      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 92 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 92
   ,{
      RX_BAND_INDICATOR_0_Set92,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set92,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set92,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set92,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set92      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 93 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 93
   ,{
      RX_BAND_INDICATOR_0_Set93,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set93,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set93,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set93,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set93      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 94 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 94
   ,{
      RX_BAND_INDICATOR_0_Set94,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set94,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set94,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set94,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set94      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 95 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 95
   ,{
      RX_BAND_INDICATOR_0_Set95,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set95,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set95,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set95,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set95      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 96 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 96
   ,{
      RX_BAND_INDICATOR_0_Set96,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set96,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set96,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set96,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set96      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 97 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 97
   ,{
      RX_BAND_INDICATOR_0_Set97,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set97,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set97,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set97,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set97      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 98 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 98
   ,{
      RX_BAND_INDICATOR_0_Set98,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set98,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set98,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set98,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set98      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 99 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 99
   ,{
      RX_BAND_INDICATOR_0_Set99,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set99,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set99,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set99,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set99      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 100 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 100
   ,{
      RX_BAND_INDICATOR_0_Set100,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set100,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set100,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set100,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set100      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 101 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 101
   ,{
      RX_BAND_INDICATOR_0_Set101,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set101,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set101,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set101,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set101      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 102 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 102
   ,{
      RX_BAND_INDICATOR_0_Set102,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set102,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set102,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set102,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set102      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 103 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 103
   ,{
      RX_BAND_INDICATOR_0_Set103,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set103,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set103,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set103,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set103      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 104 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 104
   ,{
      RX_BAND_INDICATOR_0_Set104,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set104,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set104,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set104,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set104      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 105 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 105
   ,{
      RX_BAND_INDICATOR_0_Set105,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set105,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set105,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set105,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set105      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 106 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 106
   ,{
      RX_BAND_INDICATOR_0_Set106,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set106,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set106,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set106,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set106      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 107 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 107
   ,{
      RX_BAND_INDICATOR_0_Set107,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set107,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set107,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set107,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set107      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 108 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 108
   ,{
      RX_BAND_INDICATOR_0_Set108,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set108,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set108,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set108,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set108      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 109 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 109
   ,{
      RX_BAND_INDICATOR_0_Set109,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set109,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set109,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set109,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set109      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 110 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 110
   ,{
      RX_BAND_INDICATOR_0_Set110,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set110,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set110,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set110,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set110      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 111 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 111
   ,{
      RX_BAND_INDICATOR_0_Set111,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set111,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set111,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set111,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set111      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 112 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 112
   ,{
      RX_BAND_INDICATOR_0_Set112,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set112,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set112,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set112,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set112      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 112 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 113
   ,{
      RX_BAND_INDICATOR_0_Set113,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set113,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set113,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set113,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set113      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 114 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 114
   ,{
      RX_BAND_INDICATOR_0_Set114,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set114,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set114,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set114,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set114      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 115 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 115
   ,{
      RX_BAND_INDICATOR_0_Set115,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set115,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set115,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set115,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set115      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 116 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 116
   ,{
      RX_BAND_INDICATOR_0_Set116,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set116,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set116,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set116,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set116      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 117 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 117
   ,{
      RX_BAND_INDICATOR_0_Set117,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set117,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set117,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set117,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set117      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 118 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 118
   ,{
      RX_BAND_INDICATOR_0_Set118,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set118,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set118,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set118,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set118      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 119 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 119
   ,{
      RX_BAND_INDICATOR_0_Set119,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set119,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set119,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set119,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set119      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 120 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 120
   ,{
      RX_BAND_INDICATOR_0_Set120,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set120,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set120,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set120,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set120      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 121 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 121
   ,{
      RX_BAND_INDICATOR_0_Set121,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set121,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set121,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set121,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set121      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 122 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 122
   ,{
      RX_BAND_INDICATOR_0_Set122,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set122,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set122,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set122,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set122      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 123 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 123
   ,{
      RX_BAND_INDICATOR_0_Set123,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set123,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set123,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set123,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set123      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 124 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 124
   ,{
      RX_BAND_INDICATOR_0_Set124,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set124,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set124,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set124,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set124      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 125 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 125
   ,{
      RX_BAND_INDICATOR_0_Set125,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set125,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set125,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set125,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set125      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 126 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 126
   ,{
      RX_BAND_INDICATOR_0_Set126,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set126,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set126,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set126,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set126      // Sub-index 4 in a Set 
   }   
   #endif
   /* Set 127 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 127
   ,{
      RX_BAND_INDICATOR_0_Set127,     // Sub-index 0 in a Set
      RX_BAND_INDICATOR_1_Set127,     // Sub-index 1 in a Set
      RX_BAND_INDICATOR_2_Set127,     // Sub-index 2 in a Set
      RX_BAND_INDICATOR_3_Set127,     // Sub-index 3 in a Set
      RX_BAND_INDICATOR_4_Set127      // Sub-index 4 in a Set 
   }   
   #endif
#endif
   /* End of Second Set */
};

const Ul1CustomDynamicInitUmtsDpdfactoryData ul1CustomUmtsDpdFactoryData[UL1CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if !(UL1CUSTOM_DRDI_ENABLE)
   UMTS_DPD_CUSTOM_DATA(SetDefault)
#else   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 0      
   UMTS_DPD_CUSTOM_DATA(Set0)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 1
   , UMTS_DPD_CUSTOM_DATA(Set1)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 2
   , UMTS_DPD_CUSTOM_DATA(Set2)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 3
   , UMTS_DPD_CUSTOM_DATA(Set3)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 4
   , UMTS_DPD_CUSTOM_DATA(Set4)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 5
   , UMTS_DPD_CUSTOM_DATA(Set5)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 6
   , UMTS_DPD_CUSTOM_DATA(Set6)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 7
   , UMTS_DPD_CUSTOM_DATA(Set7)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 8
   , UMTS_DPD_CUSTOM_DATA(Set8)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 9
   , UMTS_DPD_CUSTOM_DATA(Set9)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 10
   , UMTS_DPD_CUSTOM_DATA(Set10)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 11
   , UMTS_DPD_CUSTOM_DATA(Set11)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 12
   , UMTS_DPD_CUSTOM_DATA(Set12)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 13
   , UMTS_DPD_CUSTOM_DATA(Set13)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 14
   , UMTS_DPD_CUSTOM_DATA(Set14)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 15
   , UMTS_DPD_CUSTOM_DATA(Set15)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 16
   , UMTS_DPD_CUSTOM_DATA(Set16)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 17
   , UMTS_DPD_CUSTOM_DATA(Set17)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 18
   , UMTS_DPD_CUSTOM_DATA(Set18)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 19
   , UMTS_DPD_CUSTOM_DATA(Set19)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 20
   , UMTS_DPD_CUSTOM_DATA(Set20)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 21
   , UMTS_DPD_CUSTOM_DATA(Set21)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 22
   , UMTS_DPD_CUSTOM_DATA(Set22)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 23
   , UMTS_DPD_CUSTOM_DATA(Set23)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 24
   , UMTS_DPD_CUSTOM_DATA(Set24)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 25
   , UMTS_DPD_CUSTOM_DATA(Set25)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 26
   , UMTS_DPD_CUSTOM_DATA(Set26)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 27
   , UMTS_DPD_CUSTOM_DATA(Set27)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 28
   , UMTS_DPD_CUSTOM_DATA(Set28)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 29
   , UMTS_DPD_CUSTOM_DATA(Set29)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 30
   , UMTS_DPD_CUSTOM_DATA(Set30)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 31
   , UMTS_DPD_CUSTOM_DATA(Set31)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 32
   , UMTS_DPD_CUSTOM_DATA(Set32)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 33
   , UMTS_DPD_CUSTOM_DATA(Set33)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 34
   , UMTS_DPD_CUSTOM_DATA(Set34)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 35
   , UMTS_DPD_CUSTOM_DATA(Set35)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 36
   , UMTS_DPD_CUSTOM_DATA(Set36)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 37
   , UMTS_DPD_CUSTOM_DATA(Set37)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 38
   , UMTS_DPD_CUSTOM_DATA(Set38)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 39
   , UMTS_DPD_CUSTOM_DATA(Set39)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 40
   , UMTS_DPD_CUSTOM_DATA(Set40)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 41
   , UMTS_DPD_CUSTOM_DATA(Set41)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 42
   , UMTS_DPD_CUSTOM_DATA(Set42)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 43
   , UMTS_DPD_CUSTOM_DATA(Set43)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 44
   , UMTS_DPD_CUSTOM_DATA(Set44)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 45
   , UMTS_DPD_CUSTOM_DATA(Set45)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 46
   , UMTS_DPD_CUSTOM_DATA(Set46)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 47
   , UMTS_DPD_CUSTOM_DATA(Set47)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 48
   , UMTS_DPD_CUSTOM_DATA(Set48)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 49
   , UMTS_DPD_CUSTOM_DATA(Set49)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 50
   , UMTS_DPD_CUSTOM_DATA(Set50)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 51
   , UMTS_DPD_CUSTOM_DATA(Set51)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 52
   , UMTS_DPD_CUSTOM_DATA(Set52)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 53
   , UMTS_DPD_CUSTOM_DATA(Set53)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 54
   , UMTS_DPD_CUSTOM_DATA(Set54)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 55
   , UMTS_DPD_CUSTOM_DATA(Set55)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 56
   , UMTS_DPD_CUSTOM_DATA(Set56)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 57
   , UMTS_DPD_CUSTOM_DATA(Set57)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 58
   , UMTS_DPD_CUSTOM_DATA(Set58)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 59
   , UMTS_DPD_CUSTOM_DATA(Set59)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 60
   , UMTS_DPD_CUSTOM_DATA(Set60)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 61
   , UMTS_DPD_CUSTOM_DATA(Set61)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 62
   , UMTS_DPD_CUSTOM_DATA(Set62)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 63
   , UMTS_DPD_CUSTOM_DATA(Set63)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 64
   , UMTS_DPD_CUSTOM_DATA(Set64)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 65
   , UMTS_DPD_CUSTOM_DATA(Set65)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 66
   , UMTS_DPD_CUSTOM_DATA(Set66)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 67
   , UMTS_DPD_CUSTOM_DATA(Set67)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 68
   , UMTS_DPD_CUSTOM_DATA(Set68)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 69
   , UMTS_DPD_CUSTOM_DATA(Set69)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 70
   , UMTS_DPD_CUSTOM_DATA(Set70)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 71
   , UMTS_DPD_CUSTOM_DATA(Set71)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 72
   , UMTS_DPD_CUSTOM_DATA(Set72)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 73
   , UMTS_DPD_CUSTOM_DATA(Set73)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 74
   , UMTS_DPD_CUSTOM_DATA(Set74)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 75
   , UMTS_DPD_CUSTOM_DATA(Set75)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 76
   , UMTS_DPD_CUSTOM_DATA(Set76)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 77
   , UMTS_DPD_CUSTOM_DATA(Set77)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 78
   , UMTS_DPD_CUSTOM_DATA(Set78)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 79
   , UMTS_DPD_CUSTOM_DATA(Set79)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 80
   , UMTS_DPD_CUSTOM_DATA(Set80)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 81
   , UMTS_DPD_CUSTOM_DATA(Set81)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 82
   , UMTS_DPD_CUSTOM_DATA(Set82)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 83
   , UMTS_DPD_CUSTOM_DATA(Set83)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 84
   , UMTS_DPD_CUSTOM_DATA(Set84)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 85
   , UMTS_DPD_CUSTOM_DATA(Set85)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 86
   , UMTS_DPD_CUSTOM_DATA(Set86)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 87
   , UMTS_DPD_CUSTOM_DATA(Set87)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 88
   , UMTS_DPD_CUSTOM_DATA(Set88)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 89
   , UMTS_DPD_CUSTOM_DATA(Set89)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 90
   , UMTS_DPD_CUSTOM_DATA(Set90)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 91
   , UMTS_DPD_CUSTOM_DATA(Set91)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 92
   , UMTS_DPD_CUSTOM_DATA(Set92)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 93
   , UMTS_DPD_CUSTOM_DATA(Set93)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 94
   , UMTS_DPD_CUSTOM_DATA(Set94)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 95
   , UMTS_DPD_CUSTOM_DATA(Set95)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 96
   , UMTS_DPD_CUSTOM_DATA(Set96)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 97
   , UMTS_DPD_CUSTOM_DATA(Set97)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 98
   , UMTS_DPD_CUSTOM_DATA(Set98)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 99
   , UMTS_DPD_CUSTOM_DATA(Set99)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 100
   , UMTS_DPD_CUSTOM_DATA(Set100)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 101
   , UMTS_DPD_CUSTOM_DATA(Set101)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 102
   , UMTS_DPD_CUSTOM_DATA(Set102)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 103
   , UMTS_DPD_CUSTOM_DATA(Set103)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 104
   , UMTS_DPD_CUSTOM_DATA(Set104)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 105
   , UMTS_DPD_CUSTOM_DATA(Set105)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 106
   , UMTS_DPD_CUSTOM_DATA(Set106)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 107
   , UMTS_DPD_CUSTOM_DATA(Set107)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 108
   , UMTS_DPD_CUSTOM_DATA(Set108)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 109
   , UMTS_DPD_CUSTOM_DATA(Set109)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 110
   , UMTS_DPD_CUSTOM_DATA(Set110)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 111
   , UMTS_DPD_CUSTOM_DATA(Set111)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 112
   , UMTS_DPD_CUSTOM_DATA(Set112)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 113
   , UMTS_DPD_CUSTOM_DATA(Set113)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 114
   , UMTS_DPD_CUSTOM_DATA(Set114)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 115
   , UMTS_DPD_CUSTOM_DATA(Set115)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 116
   , UMTS_DPD_CUSTOM_DATA(Set116)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 117
   , UMTS_DPD_CUSTOM_DATA(Set117)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 118
   , UMTS_DPD_CUSTOM_DATA(Set118)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 119
   , UMTS_DPD_CUSTOM_DATA(Set119)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 120
   , UMTS_DPD_CUSTOM_DATA(Set120)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 121
   , UMTS_DPD_CUSTOM_DATA(Set121)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 122
   , UMTS_DPD_CUSTOM_DATA(Set122)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 123
   , UMTS_DPD_CUSTOM_DATA(Set123)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 124
   , UMTS_DPD_CUSTOM_DATA(Set124)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 125
   , UMTS_DPD_CUSTOM_DATA(Set125)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 126
   , UMTS_DPD_CUSTOM_DATA(Set126)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 127
   , UMTS_DPD_CUSTOM_DATA(Set127)
   #endif
#endif
};

const Ul1CustomDynamicInitUmtsCalData ul1CustomUmtsCalData[UL1CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if !(UL1CUSTOM_DRDI_ENABLE)
   UMTS_CAL_CUSTOM_DATA(SetDefault)
#else   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 0      
   UMTS_CAL_CUSTOM_DATA(Set0)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 1
   , UMTS_CAL_CUSTOM_DATA(Set1)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 2
   , UMTS_CAL_CUSTOM_DATA(Set2)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 3
   , UMTS_CAL_CUSTOM_DATA(Set3)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 4
   , UMTS_CAL_CUSTOM_DATA(Set4)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 5
   , UMTS_CAL_CUSTOM_DATA(Set5)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 6
   , UMTS_CAL_CUSTOM_DATA(Set6)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 7
   , UMTS_CAL_CUSTOM_DATA(Set7)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 8
   , UMTS_CAL_CUSTOM_DATA(Set8)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 9
   , UMTS_CAL_CUSTOM_DATA(Set9)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 10
   , UMTS_CAL_CUSTOM_DATA(Set10)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 11
   , UMTS_CAL_CUSTOM_DATA(Set11)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 12
   , UMTS_CAL_CUSTOM_DATA(Set12)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 13
   , UMTS_CAL_CUSTOM_DATA(Set13)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 14
   , UMTS_CAL_CUSTOM_DATA(Set14)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 15
   , UMTS_CAL_CUSTOM_DATA(Set15)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 16
   , UMTS_CAL_CUSTOM_DATA(Set16)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 17
   , UMTS_CAL_CUSTOM_DATA(Set17)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 18
   , UMTS_CAL_CUSTOM_DATA(Set18)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 19
   , UMTS_CAL_CUSTOM_DATA(Set19)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 20
   , UMTS_CAL_CUSTOM_DATA(Set20)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 21
   , UMTS_CAL_CUSTOM_DATA(Set21)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 22
   , UMTS_CAL_CUSTOM_DATA(Set22)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 23
   , UMTS_CAL_CUSTOM_DATA(Set23)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 24
   , UMTS_CAL_CUSTOM_DATA(Set24)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 25
   , UMTS_CAL_CUSTOM_DATA(Set25)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 26
   , UMTS_CAL_CUSTOM_DATA(Set26)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 27
   , UMTS_CAL_CUSTOM_DATA(Set27)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 28
   , UMTS_CAL_CUSTOM_DATA(Set28)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 29
   , UMTS_CAL_CUSTOM_DATA(Set29)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 30
   , UMTS_CAL_CUSTOM_DATA(Set30)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 31
   , UMTS_CAL_CUSTOM_DATA(Set31)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 32
   , UMTS_CAL_CUSTOM_DATA(Set32)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 33
   , UMTS_CAL_CUSTOM_DATA(Set33)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 34
   , UMTS_CAL_CUSTOM_DATA(Set34)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 35
   , UMTS_CAL_CUSTOM_DATA(Set35)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 36
   , UMTS_CAL_CUSTOM_DATA(Set36)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 37
   , UMTS_CAL_CUSTOM_DATA(Set37)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 38
   , UMTS_CAL_CUSTOM_DATA(Set38)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 39
   , UMTS_CAL_CUSTOM_DATA(Set39)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 40
   , UMTS_CAL_CUSTOM_DATA(Set40)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 41
   , UMTS_CAL_CUSTOM_DATA(Set41)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 42
   , UMTS_CAL_CUSTOM_DATA(Set42)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 43
   , UMTS_CAL_CUSTOM_DATA(Set43)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 44
   , UMTS_CAL_CUSTOM_DATA(Set44)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 45
   , UMTS_CAL_CUSTOM_DATA(Set45)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 46
   , UMTS_CAL_CUSTOM_DATA(Set46)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 47
   , UMTS_CAL_CUSTOM_DATA(Set47)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 48
   , UMTS_CAL_CUSTOM_DATA(Set48)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 49
   , UMTS_CAL_CUSTOM_DATA(Set49)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 50
   , UMTS_CAL_CUSTOM_DATA(Set50)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 51
   , UMTS_CAL_CUSTOM_DATA(Set51)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 52
   , UMTS_CAL_CUSTOM_DATA(Set52)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 53
   , UMTS_CAL_CUSTOM_DATA(Set53)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 54
   , UMTS_CAL_CUSTOM_DATA(Set54)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 55
   , UMTS_CAL_CUSTOM_DATA(Set55)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 56
   , UMTS_CAL_CUSTOM_DATA(Set56)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 57
   , UMTS_CAL_CUSTOM_DATA(Set57)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 58
   , UMTS_CAL_CUSTOM_DATA(Set58)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 59
   , UMTS_CAL_CUSTOM_DATA(Set59)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 60
   , UMTS_CAL_CUSTOM_DATA(Set60)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 61
   , UMTS_CAL_CUSTOM_DATA(Set61)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 62
   , UMTS_CAL_CUSTOM_DATA(Set62)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 63
   , UMTS_CAL_CUSTOM_DATA(Set63)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 64
   , UMTS_CAL_CUSTOM_DATA(Set64)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 65
   , UMTS_CAL_CUSTOM_DATA(Set65)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 66
   , UMTS_CAL_CUSTOM_DATA(Set66)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 67
   , UMTS_CAL_CUSTOM_DATA(Set67)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 68
   , UMTS_CAL_CUSTOM_DATA(Set68)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 69
   , UMTS_CAL_CUSTOM_DATA(Set69)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 70
   , UMTS_CAL_CUSTOM_DATA(Set70)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 71
   , UMTS_CAL_CUSTOM_DATA(Set71)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 72
   , UMTS_CAL_CUSTOM_DATA(Set72)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 73
   , UMTS_CAL_CUSTOM_DATA(Set73)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 74
   , UMTS_CAL_CUSTOM_DATA(Set74)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 75
   , UMTS_CAL_CUSTOM_DATA(Set75)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 76
   , UMTS_CAL_CUSTOM_DATA(Set76)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 77
   , UMTS_CAL_CUSTOM_DATA(Set77)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 78
   , UMTS_CAL_CUSTOM_DATA(Set78)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 79
   , UMTS_CAL_CUSTOM_DATA(Set79)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 80
   , UMTS_CAL_CUSTOM_DATA(Set80)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 81
   , UMTS_CAL_CUSTOM_DATA(Set81)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 82
   , UMTS_CAL_CUSTOM_DATA(Set82)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 83
   , UMTS_CAL_CUSTOM_DATA(Set83)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 84
   , UMTS_CAL_CUSTOM_DATA(Set84)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 85
   , UMTS_CAL_CUSTOM_DATA(Set85)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 86
   , UMTS_CAL_CUSTOM_DATA(Set86)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 87
   , UMTS_CAL_CUSTOM_DATA(Set87)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 88
   , UMTS_CAL_CUSTOM_DATA(Set88)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 89
   , UMTS_CAL_CUSTOM_DATA(Set89)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 90
   , UMTS_CAL_CUSTOM_DATA(Set90)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 91
   , UMTS_CAL_CUSTOM_DATA(Set91)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 92
   , UMTS_CAL_CUSTOM_DATA(Set92)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 93
   , UMTS_CAL_CUSTOM_DATA(Set93)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 94
   , UMTS_CAL_CUSTOM_DATA(Set94)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 95
   , UMTS_CAL_CUSTOM_DATA(Set95)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 96
   , UMTS_CAL_CUSTOM_DATA(Set96)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 97
   , UMTS_CAL_CUSTOM_DATA(Set97)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 98
   , UMTS_CAL_CUSTOM_DATA(Set98)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 99
   , UMTS_CAL_CUSTOM_DATA(Set99)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 100
   , UMTS_CAL_CUSTOM_DATA(Set100)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 101
   , UMTS_CAL_CUSTOM_DATA(Set101)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 102
   , UMTS_CAL_CUSTOM_DATA(Set102)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 103
   , UMTS_CAL_CUSTOM_DATA(Set103)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 104
   , UMTS_CAL_CUSTOM_DATA(Set104)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 105
   , UMTS_CAL_CUSTOM_DATA(Set105)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 106
   , UMTS_CAL_CUSTOM_DATA(Set106)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 107
   , UMTS_CAL_CUSTOM_DATA(Set107)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 108
   , UMTS_CAL_CUSTOM_DATA(Set108)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 109
   , UMTS_CAL_CUSTOM_DATA(Set109)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 110
   , UMTS_CAL_CUSTOM_DATA(Set110)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 111
   , UMTS_CAL_CUSTOM_DATA(Set111)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 112
   , UMTS_CAL_CUSTOM_DATA(Set112)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 113
   , UMTS_CAL_CUSTOM_DATA(Set113)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 114
   , UMTS_CAL_CUSTOM_DATA(Set114)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 115
   , UMTS_CAL_CUSTOM_DATA(Set115)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 116
   , UMTS_CAL_CUSTOM_DATA(Set116)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 117
   , UMTS_CAL_CUSTOM_DATA(Set117)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 118
   , UMTS_CAL_CUSTOM_DATA(Set118)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 119
   , UMTS_CAL_CUSTOM_DATA(Set119)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 120
   , UMTS_CAL_CUSTOM_DATA(Set120)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 121
   , UMTS_CAL_CUSTOM_DATA(Set121)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 122
   , UMTS_CAL_CUSTOM_DATA(Set122)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 123
   , UMTS_CAL_CUSTOM_DATA(Set123)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 124
   , UMTS_CAL_CUSTOM_DATA(Set124)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 125
   , UMTS_CAL_CUSTOM_DATA(Set125)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 126
   , UMTS_CAL_CUSTOM_DATA(Set126)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 127
   , UMTS_CAL_CUSTOM_DATA(Set127)
   #endif
#endif
};


//*************************************************
// UMTS Front end data Custom data definition
//*************************************************
const Ul1CustomDynamicInitUmtsFeSettingData ul1CustomUmtsFeSettingData[UL1CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if !(UL1CUSTOM_DRDI_ENABLE)
   {UMTS_FE_ROUTE_TBL_SetDefault}
#else   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 0      
    {UMTS_FE_ROUTE_TBL_Set0}
   #endif  
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 1
   , {UMTS_FE_ROUTE_TBL_Set1}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 2
   , {UMTS_FE_ROUTE_TBL_Set2}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 3
   , {UMTS_FE_ROUTE_TBL_Set3}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 4
   , {UMTS_FE_ROUTE_TBL_Set4}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 5
   , {UMTS_FE_ROUTE_TBL_Set5}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 6
   , {UMTS_FE_ROUTE_TBL_Set6}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 7
   , {UMTS_FE_ROUTE_TBL_Set7}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 8
   , {UMTS_FE_ROUTE_TBL_Set8}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 9
   , {UMTS_FE_ROUTE_TBL_Set9}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 10
   , {UMTS_FE_ROUTE_TBL_Set10}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 11
   , {UMTS_FE_ROUTE_TBL_Set11}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 12
   , {UMTS_FE_ROUTE_TBL_Set12}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 13
   , {UMTS_FE_ROUTE_TBL_Set13}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 14
   , {UMTS_FE_ROUTE_TBL_Set14}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 15
   , {UMTS_FE_ROUTE_TBL_Set15}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 16
   , {UMTS_FE_ROUTE_TBL_Set16}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 17
   , {UMTS_FE_ROUTE_TBL_Set17}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 18
   , {UMTS_FE_ROUTE_TBL_Set18}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 19
   , {UMTS_FE_ROUTE_TBL_Set19}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 20
   , {UMTS_FE_ROUTE_TBL_Set20}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 21
   , {UMTS_FE_ROUTE_TBL_Set21}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 22
   , {UMTS_FE_ROUTE_TBL_Set22}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 23
   , {UMTS_FE_ROUTE_TBL_Set23}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 24
   , {UMTS_FE_ROUTE_TBL_Set24}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 25
   , {UMTS_FE_ROUTE_TBL_Set25}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 26
   , {UMTS_FE_ROUTE_TBL_Set26}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 27
   , {UMTS_FE_ROUTE_TBL_Set27}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 28
   , {UMTS_FE_ROUTE_TBL_Set28}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 29
   , {UMTS_FE_ROUTE_TBL_Set29}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 30
   , {UMTS_FE_ROUTE_TBL_Set30}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 31
   , {UMTS_FE_ROUTE_TBL_Set31}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 32
   , {UMTS_FE_ROUTE_TBL_Set32}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 33
   , {UMTS_FE_ROUTE_TBL_Set33}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 34
   , {UMTS_FE_ROUTE_TBL_Set34}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 35
   , {UMTS_FE_ROUTE_TBL_Set35}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 36
   , {UMTS_FE_ROUTE_TBL_Set36}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 37
   , {UMTS_FE_ROUTE_TBL_Set37}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 38
   , {UMTS_FE_ROUTE_TBL_Set38}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 39
   , {UMTS_FE_ROUTE_TBL_Set39}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 40
   , {UMTS_FE_ROUTE_TBL_Set40}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 41
   , {UMTS_FE_ROUTE_TBL_Set41}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 42
   , {UMTS_FE_ROUTE_TBL_Set42}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 43
   , {UMTS_FE_ROUTE_TBL_Set43}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 44
   , {UMTS_FE_ROUTE_TBL_Set44}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 45
   , {UMTS_FE_ROUTE_TBL_Set45}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 46
   , {UMTS_FE_ROUTE_TBL_Set46}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 47
   , {UMTS_FE_ROUTE_TBL_Set47}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 48
   , {UMTS_FE_ROUTE_TBL_Set48}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 49
   , {UMTS_FE_ROUTE_TBL_Set49}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 50
   , {UMTS_FE_ROUTE_TBL_Set50}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 51
   , {UMTS_FE_ROUTE_TBL_Set51}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 52
   , {UMTS_FE_ROUTE_TBL_Set52}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 53
   , {UMTS_FE_ROUTE_TBL_Set53}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 54
   , {UMTS_FE_ROUTE_TBL_Set54}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 55
   , {UMTS_FE_ROUTE_TBL_Set55}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 56
   , {UMTS_FE_ROUTE_TBL_Set56}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 57
   , {UMTS_FE_ROUTE_TBL_Set57}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 58
   , {UMTS_FE_ROUTE_TBL_Set58}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 59
   , {UMTS_FE_ROUTE_TBL_Set59}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 60
   , {UMTS_FE_ROUTE_TBL_Set60}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 61
   , {UMTS_FE_ROUTE_TBL_Set61}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 62
   , {UMTS_FE_ROUTE_TBL_Set62}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 63
   , {UMTS_FE_ROUTE_TBL_Set63}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 64
   , {UMTS_FE_ROUTE_TBL_Set64}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 65
   , {UMTS_FE_ROUTE_TBL_Set65}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 66
   , {UMTS_FE_ROUTE_TBL_Set66}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 67
   , {UMTS_FE_ROUTE_TBL_Set67}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 68
   , {UMTS_FE_ROUTE_TBL_Set68}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 69
   , {UMTS_FE_ROUTE_TBL_Set69}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 70
   , {UMTS_FE_ROUTE_TBL_Set70}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 71
   , {UMTS_FE_ROUTE_TBL_Set71}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 72
   , {UMTS_FE_ROUTE_TBL_Set72}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 73
   , {UMTS_FE_ROUTE_TBL_Set73}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 74
   , {UMTS_FE_ROUTE_TBL_Set74}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 75
   , {UMTS_FE_ROUTE_TBL_Set75}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 76
   , {UMTS_FE_ROUTE_TBL_Set76}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 77
   , {UMTS_FE_ROUTE_TBL_Set77}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 78
   , {UMTS_FE_ROUTE_TBL_Set78}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 79
   , {UMTS_FE_ROUTE_TBL_Set79}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 80
   , {UMTS_FE_ROUTE_TBL_Set80}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 81
   , {UMTS_FE_ROUTE_TBL_Set81}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 82
   , {UMTS_FE_ROUTE_TBL_Set82}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 83
   , {UMTS_FE_ROUTE_TBL_Set83}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 84
   , {UMTS_FE_ROUTE_TBL_Set84}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 85
   , {UMTS_FE_ROUTE_TBL_Set85}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 86
   , {UMTS_FE_ROUTE_TBL_Set86}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 87
   , {UMTS_FE_ROUTE_TBL_Set87}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 88
   , {UMTS_FE_ROUTE_TBL_Set88}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 89
   , {UMTS_FE_ROUTE_TBL_Set89}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 90
   , {UMTS_FE_ROUTE_TBL_Set90}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 91
   , {UMTS_FE_ROUTE_TBL_Set91}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 92
   , {UMTS_FE_ROUTE_TBL_Set92}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 93
   , {UMTS_FE_ROUTE_TBL_Set93}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 94
   , {UMTS_FE_ROUTE_TBL_Set94}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 95
   , {UMTS_FE_ROUTE_TBL_Set95}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 96
   , {UMTS_FE_ROUTE_TBL_Set96}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 97
   , {UMTS_FE_ROUTE_TBL_Set97}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 98
   , {UMTS_FE_ROUTE_TBL_Set98}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 99
   , {UMTS_FE_ROUTE_TBL_Set99}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 100
   , {UMTS_FE_ROUTE_TBL_Set100}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 101
   , {UMTS_FE_ROUTE_TBL_Set101}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 102
   , {UMTS_FE_ROUTE_TBL_Set102}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 103
   , {UMTS_FE_ROUTE_TBL_Set103}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 104
   , {UMTS_FE_ROUTE_TBL_Set104}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 105
   , {UMTS_FE_ROUTE_TBL_Set105}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 106
   , {UMTS_FE_ROUTE_TBL_Set106}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 107
   , {UMTS_FE_ROUTE_TBL_Set107}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 108
   , {UMTS_FE_ROUTE_TBL_Set108}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 109
   , {UMTS_FE_ROUTE_TBL_Set109}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 110
   , {UMTS_FE_ROUTE_TBL_Set110}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 111
   , {UMTS_FE_ROUTE_TBL_Set111}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 112
   , {UMTS_FE_ROUTE_TBL_Set112}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 113
   , {UMTS_FE_ROUTE_TBL_Set113}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 114
   , {UMTS_FE_ROUTE_TBL_Set114}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 115
   , {UMTS_FE_ROUTE_TBL_Set115}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 116
   , {UMTS_FE_ROUTE_TBL_Set116}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 117
   , {UMTS_FE_ROUTE_TBL_Set117}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 118
   , {UMTS_FE_ROUTE_TBL_Set118}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 119
   , {UMTS_FE_ROUTE_TBL_Set119}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 120
   , {UMTS_FE_ROUTE_TBL_Set120}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 121
   , {UMTS_FE_ROUTE_TBL_Set121}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 122
   , {UMTS_FE_ROUTE_TBL_Set122}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 123
   , {UMTS_FE_ROUTE_TBL_Set123}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 124
   , {UMTS_FE_ROUTE_TBL_Set124}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 125
   , {UMTS_FE_ROUTE_TBL_Set125}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 126
   , {UMTS_FE_ROUTE_TBL_Set126}
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 127
   , {UMTS_FE_ROUTE_TBL_Set127}
   #endif   
#endif   
};

#if (IS_3G_MIPI_SUPPORT)
//*************************************************
// UMTS MIPI data Custom data definition
//*************************************************
const Ul1CustomDynamicInitMipiData ul1CustomMipiData[UL1CUSTOM_TOTAL_REAL_SET_NUMS] = 
{
#if !(UL1CUSTOM_DRDI_ENABLE)
    UMTS_MIPI_CUSTOM_DATA(SetDefault)      //default
#else   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 0      
     UMTS_MIPI_CUSTOM_DATA(Set0)
   #endif   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 1
   , UMTS_MIPI_CUSTOM_DATA(Set1)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 2
   , UMTS_MIPI_CUSTOM_DATA(Set2)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 3
   , UMTS_MIPI_CUSTOM_DATA(Set3)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 4
   , UMTS_MIPI_CUSTOM_DATA(Set4)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 5
   , UMTS_MIPI_CUSTOM_DATA(Set5)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 6
   , UMTS_MIPI_CUSTOM_DATA(Set6)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 7
   , UMTS_MIPI_CUSTOM_DATA(Set7)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 8
   , UMTS_MIPI_CUSTOM_DATA(Set8)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 9
   , UMTS_MIPI_CUSTOM_DATA(Set9)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 10
   , UMTS_MIPI_CUSTOM_DATA(Set10)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 11
   , UMTS_MIPI_CUSTOM_DATA(Set11)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 12
   , UMTS_MIPI_CUSTOM_DATA(Set12)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 13
   , UMTS_MIPI_CUSTOM_DATA(Set13)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 14
   , UMTS_MIPI_CUSTOM_DATA(Set14)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 15
   , UMTS_MIPI_CUSTOM_DATA(Set15)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 16
   , UMTS_MIPI_CUSTOM_DATA(Set16)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 17
   , UMTS_MIPI_CUSTOM_DATA(Set17)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 18
   , UMTS_MIPI_CUSTOM_DATA(Set18)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 19
   , UMTS_MIPI_CUSTOM_DATA(Set19)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 20
   , UMTS_MIPI_CUSTOM_DATA(Set20)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 21
   , UMTS_MIPI_CUSTOM_DATA(Set21)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 22
   , UMTS_MIPI_CUSTOM_DATA(Set22)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 23
   , UMTS_MIPI_CUSTOM_DATA(Set23)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 24
   , UMTS_MIPI_CUSTOM_DATA(Set24)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 25
   , UMTS_MIPI_CUSTOM_DATA(Set25)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 26
   , UMTS_MIPI_CUSTOM_DATA(Set26)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 27
   , UMTS_MIPI_CUSTOM_DATA(Set27)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 28
   , UMTS_MIPI_CUSTOM_DATA(Set28)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 29
   , UMTS_MIPI_CUSTOM_DATA(Set29)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 30
   , UMTS_MIPI_CUSTOM_DATA(Set30)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 31
   , UMTS_MIPI_CUSTOM_DATA(Set31)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 32
   , UMTS_MIPI_CUSTOM_DATA(Set32)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 33
   , UMTS_MIPI_CUSTOM_DATA(Set33)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 34
   , UMTS_MIPI_CUSTOM_DATA(Set34)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 35
   , UMTS_MIPI_CUSTOM_DATA(Set35)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 36
   , UMTS_MIPI_CUSTOM_DATA(Set36)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 37
   , UMTS_MIPI_CUSTOM_DATA(Set37)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 38
   , UMTS_MIPI_CUSTOM_DATA(Set38)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 39
   , UMTS_MIPI_CUSTOM_DATA(Set39)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 40
   , UMTS_MIPI_CUSTOM_DATA(Set40)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 41
   , UMTS_MIPI_CUSTOM_DATA(Set41)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 42
   , UMTS_MIPI_CUSTOM_DATA(Set42)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 43
   , UMTS_MIPI_CUSTOM_DATA(Set43)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 44
   , UMTS_MIPI_CUSTOM_DATA(Set44)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 45
   , UMTS_MIPI_CUSTOM_DATA(Set45)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 46
   , UMTS_MIPI_CUSTOM_DATA(Set46)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 47
   , UMTS_MIPI_CUSTOM_DATA(Set47)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 48
   , UMTS_MIPI_CUSTOM_DATA(Set48)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 49
   , UMTS_MIPI_CUSTOM_DATA(Set49)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 50
   , UMTS_MIPI_CUSTOM_DATA(Set50)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 51
   , UMTS_MIPI_CUSTOM_DATA(Set51)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 52
   , UMTS_MIPI_CUSTOM_DATA(Set52)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 53
   , UMTS_MIPI_CUSTOM_DATA(Set53)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 54
   , UMTS_MIPI_CUSTOM_DATA(Set54)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 55
   , UMTS_MIPI_CUSTOM_DATA(Set55)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 56
   , UMTS_MIPI_CUSTOM_DATA(Set56)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 57
   , UMTS_MIPI_CUSTOM_DATA(Set57)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 58
   , UMTS_MIPI_CUSTOM_DATA(Set58)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 59
   , UMTS_MIPI_CUSTOM_DATA(Set59)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 60
   , UMTS_MIPI_CUSTOM_DATA(Set60)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 61
   , UMTS_MIPI_CUSTOM_DATA(Set61)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 62
   , UMTS_MIPI_CUSTOM_DATA(Set62)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 63
   , UMTS_MIPI_CUSTOM_DATA(Set63)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 64
   , UMTS_MIPI_CUSTOM_DATA(Set64)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 65
   , UMTS_MIPI_CUSTOM_DATA(Set65)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 66
   , UMTS_MIPI_CUSTOM_DATA(Set66)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 67
   , UMTS_MIPI_CUSTOM_DATA(Set67)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 68
   , UMTS_MIPI_CUSTOM_DATA(Set68)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 69
   , UMTS_MIPI_CUSTOM_DATA(Set69)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 70
   , UMTS_MIPI_CUSTOM_DATA(Set70)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 71
   , UMTS_MIPI_CUSTOM_DATA(Set71)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 72
   , UMTS_MIPI_CUSTOM_DATA(Set72)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 73
   , UMTS_MIPI_CUSTOM_DATA(Set73)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 74
   , UMTS_MIPI_CUSTOM_DATA(Set74)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 75
   , UMTS_MIPI_CUSTOM_DATA(Set75)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 76
   , UMTS_MIPI_CUSTOM_DATA(Set76)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 77
   , UMTS_MIPI_CUSTOM_DATA(Set77)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 78
   , UMTS_MIPI_CUSTOM_DATA(Set78)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 79
   , UMTS_MIPI_CUSTOM_DATA(Set79)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 80
   , UMTS_MIPI_CUSTOM_DATA(Set80)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 81
   , UMTS_MIPI_CUSTOM_DATA(Set81)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 82
   , UMTS_MIPI_CUSTOM_DATA(Set82)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 83
   , UMTS_MIPI_CUSTOM_DATA(Set83)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 84
   , UMTS_MIPI_CUSTOM_DATA(Set84)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 85
   , UMTS_MIPI_CUSTOM_DATA(Set85)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 86
   , UMTS_MIPI_CUSTOM_DATA(Set86)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 87
   , UMTS_MIPI_CUSTOM_DATA(Set87)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 88
   , UMTS_MIPI_CUSTOM_DATA(Set88)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 89
   , UMTS_MIPI_CUSTOM_DATA(Set89)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 90
   , UMTS_MIPI_CUSTOM_DATA(Set90)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 91
   , UMTS_MIPI_CUSTOM_DATA(Set91)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 92
   , UMTS_MIPI_CUSTOM_DATA(Set92)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 93
   , UMTS_MIPI_CUSTOM_DATA(Set93)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 94
   , UMTS_MIPI_CUSTOM_DATA(Set94)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 95
   , UMTS_MIPI_CUSTOM_DATA(Set95)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 96
   , UMTS_MIPI_CUSTOM_DATA(Set96)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 97
   , UMTS_MIPI_CUSTOM_DATA(Set97)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 98
   , UMTS_MIPI_CUSTOM_DATA(Set98)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 99
   , UMTS_MIPI_CUSTOM_DATA(Set99)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 100
   , UMTS_MIPI_CUSTOM_DATA(Set100)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 101
   , UMTS_MIPI_CUSTOM_DATA(Set101)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 102
   , UMTS_MIPI_CUSTOM_DATA(Set102)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 103
   , UMTS_MIPI_CUSTOM_DATA(Set103)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 104
   , UMTS_MIPI_CUSTOM_DATA(Set104)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 105
   , UMTS_MIPI_CUSTOM_DATA(Set105)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 106
   , UMTS_MIPI_CUSTOM_DATA(Set106)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 107
   , UMTS_MIPI_CUSTOM_DATA(Set107)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 108
   , UMTS_MIPI_CUSTOM_DATA(Set108)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 109
   , UMTS_MIPI_CUSTOM_DATA(Set109)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 110
   , UMTS_MIPI_CUSTOM_DATA(Set110)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 111
   , UMTS_MIPI_CUSTOM_DATA(Set111)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 112
   , UMTS_MIPI_CUSTOM_DATA(Set112)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 113
   , UMTS_MIPI_CUSTOM_DATA(Set113)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 114
   , UMTS_MIPI_CUSTOM_DATA(Set114)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 115
   , UMTS_MIPI_CUSTOM_DATA(Set115)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 116
   , UMTS_MIPI_CUSTOM_DATA(Set116)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 117
   , UMTS_MIPI_CUSTOM_DATA(Set117)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 118
   , UMTS_MIPI_CUSTOM_DATA(Set118)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 119
   , UMTS_MIPI_CUSTOM_DATA(Set119)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 120
   , UMTS_MIPI_CUSTOM_DATA(Set120)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 121
   , UMTS_MIPI_CUSTOM_DATA(Set121)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 122
   , UMTS_MIPI_CUSTOM_DATA(Set122)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 123
   , UMTS_MIPI_CUSTOM_DATA(Set123)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 124
   , UMTS_MIPI_CUSTOM_DATA(Set124)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 125
   , UMTS_MIPI_CUSTOM_DATA(Set125)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 126
   , UMTS_MIPI_CUSTOM_DATA(Set126)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 127
   , UMTS_MIPI_CUSTOM_DATA(Set127)
   #endif   
#endif
};

#endif

#if (IS_3G_TAS_UL1_CUSTOM_SUPPORT)
const Ul1CustomDynamicTasRoute ul1CustomTasRoute[UL1CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if !(UL1CUSTOM_DRDI_ENABLE)
         UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(SetDefault)
#else
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 0      
         UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set0)
   #endif   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 1
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set1)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 2
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set2)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 3
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set3)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 4
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set4)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 5
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set5)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 6
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set6)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 7
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set7)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 8
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set8)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 9
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set9)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 10
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set10)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 11
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set11)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 12
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set12)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 13
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set13)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 14
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set14)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 15
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set15)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 16
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set16)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 17
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set17)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 18
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set18)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 19
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set19)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 20
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set20)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 21
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set21)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 22
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set22)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 23
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set23)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 24
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set24)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 25
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set25)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 26
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set26)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 27
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set27)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 28
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set28)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 29
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set29)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 30
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set30)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 31
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set31)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 32
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set32)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 33
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set33)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 34
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set34)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 35
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set35)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 36
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set36)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 37
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set37)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 38
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set38)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 39
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set39)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 40
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set40)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 41
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set41)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 42
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set42)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 43
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set43)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 44
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set44)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 45
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set45)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 46
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set46)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 47
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set47)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 48
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set48)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 49
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set49)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 50
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set50)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 51
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set51)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 52
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set52)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 53
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set53)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 54
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set54)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 55
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set55)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 56
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set56)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 57
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set57)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 58
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set58)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 59
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set59)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 60
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set60)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 61
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set61)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 62
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set62)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 63
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set63)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 64
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set64)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 65
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set65)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 66
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set66)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 67
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set67)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 68
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set68)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 69
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set69)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 70
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set70)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 71
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set71)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 72
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set72)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 73
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set73)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 74
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set74)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 75
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set75)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 76
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set76)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 77
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set77)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 78
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set78)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 79
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set79)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 80
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set80)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 81
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set81)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 82
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set82)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 83
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set83)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 84
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set84)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 85
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set85)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 86
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set86)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 87
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set87)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 88
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set88)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 89
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set89)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 90
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set90)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 91
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set91)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 92
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set92)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 93
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set93)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 94
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set94)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 95
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set95)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 96
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set96)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 97
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set97)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 98
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set98)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 99
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set99)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 100
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set100)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 101
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set101)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 102
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set102)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 103
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set103)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 104
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set104)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 105
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set105)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 106
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set106)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 107
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set107)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 108
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set108)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 109
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set109)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 110
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set110)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 111
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set111)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 112
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set112)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 113
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set113)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 114
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set114)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 115
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set115)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 116
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set116)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 117
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set117)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 118
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set118)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 119
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set119)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 120
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set120)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 121
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set121)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 122
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set122)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 123
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set123)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 124
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set124)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 125
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set125)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 126
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set126)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 127
         , UMTS_TAS_CUSTOM_FE_ROUTE_DATABASE(Set127)
   #endif
#endif
};

const Ul1CustomDynamicTasDb ul1CustomTasDb[UL1CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if !(UL1CUSTOM_DRDI_ENABLE)
         UMTS_TAS_CUSTOM_FE_DATABASE(SetDefault)
#else
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 0      
         UMTS_TAS_CUSTOM_FE_DATABASE(Set0)
   #endif   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 1
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set1)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 2
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set2)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 3
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set3)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 4
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set4)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 5
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set5)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 6
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set6)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 7
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set7)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 8
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set8)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 9
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set9)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 10
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set10)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 11
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set11)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 12
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set12)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 13
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set13)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 14
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set14)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 15
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set15)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 16
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set16)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 17
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set17)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 18
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set18)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 19
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set19)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 20
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set20)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 21
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set21)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 22
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set22)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 23
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set23)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 24
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set24)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 25
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set25)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 26
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set26)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 27
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set27)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 28
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set28)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 29
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set29)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 30
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set30)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 31
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set31)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 32
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set32)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 33
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set33)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 34
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set34)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 35
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set35)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 36
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set36)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 37
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set37)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 38
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set38)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 39
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set39)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 40
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set40)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 41
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set41)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 42
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set42)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 43
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set43)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 44
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set44)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 45
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set45)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 46
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set46)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 47
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set47)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 48
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set48)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 49
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set49)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 50
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set50)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 51
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set51)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 52
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set52)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 53
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set53)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 54
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set54)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 55
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set55)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 56
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set56)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 57
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set57)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 58
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set58)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 59
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set59)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 60
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set60)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 61
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set61)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 62
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set62)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 63
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set63)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 64
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set64)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 65
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set65)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 66
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set66)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 67
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set67)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 68
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set68)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 69
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set69)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 70
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set70)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 71
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set71)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 72
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set72)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 73
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set73)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 74
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set74)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 75
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set75)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 76
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set76)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 77
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set77)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 78
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set78)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 79
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set79)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 80
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set80)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 81
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set81)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 82
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set82)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 83
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set83)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 84
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set84)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 85
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set85)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 86
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set86)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 87
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set87)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 88
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set88)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 89
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set89)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 90
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set90)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 91
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set91)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 92
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set92)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 93
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set93)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 94
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set94)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 95
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set95)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 96
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set96)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 97
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set97)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 98
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set98)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 99
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set99)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 100
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set100)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 101
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set101)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 102
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set102)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 103
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set103)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 104
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set104)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 105
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set105)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 106
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set106)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 107
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set107)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 108
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set108)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 109
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set109)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 110
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set110)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 111
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set111)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 112
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set112)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 113
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set113)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 114
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set114)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 115
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set115)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 116
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set116)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 117
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set117)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 118
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set118)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 119
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set119)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 120
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set120)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 121
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set121)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 122
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set122)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 123
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set123)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 124
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set124)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 125
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set125)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 126
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set126)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 127
         , UMTS_TAS_CUSTOM_FE_DATABASE(Set127)
   #endif   
#endif

};

const Ul1CustomDynamicTasFeatureByRat ul1CustomTasByRat[UL1CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if !(UL1CUSTOM_DRDI_ENABLE)
         UMTS_TAS_CUSTOM_FEATURE_BY_RAT(SetDefault)      //default
#else
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 0      
         UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set0)
   #endif   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 1
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set1)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 2
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set2)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 3
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set3)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 4
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set4)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 5
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set5)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 6
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set6)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 7
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set7)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 8
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set8)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 9
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set9)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 10
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set10)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 11
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set11)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 12
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set12)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 13
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set13)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 14
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set14)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 15
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set15)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 16
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set16)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 17
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set17)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 18
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set18)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 19
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set19)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 20
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set20)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 21
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set21)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 22
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set22)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 23
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set23)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 24
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set24)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 25
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set25)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 26
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set26)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 27
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set27)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 28
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set28)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 29
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set29)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 30
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set30)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 31
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set31)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 32
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set32)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 33
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set33)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 34
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set34)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 35
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set35)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 36
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set36)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 37
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set37)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 38
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set38)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 39
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set39)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 40
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set40)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 41
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set41)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 42
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set42)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 43
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set43)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 44
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set44)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 45
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set45)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 46
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set46)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 47
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set47)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 48
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set48)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 49
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set49)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 50
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set50)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 51
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set51)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 52
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set52)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 53
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set53)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 54
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set54)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 55
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set55)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 56
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set56)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 57
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set57)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 58
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set58)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 59
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set59)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 60
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set60)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 61
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set61)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 62
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set62)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 63
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set63)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 64
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set64)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 65
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set65)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 66
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set66)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 67
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set67)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 68
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set68)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 69
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set69)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 70
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set70)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 71
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set71)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 72
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set72)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 73
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set73)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 74
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set74)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 75
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set75)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 76
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set76)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 77
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set77)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 78
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set78)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 79
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set79)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 80
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set80)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 81
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set81)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 82
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set82)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 83
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set83)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 84
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set84)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 85
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set85)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 86
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set86)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 87
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set87)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 88
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set88)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 89
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set89)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 90
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set90)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 91
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set91)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 92
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set92)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 93
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set93)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 94
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set94)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 95
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set95)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 96
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set96)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 97
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set97)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 98
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set98)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 99
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set99)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 100
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set100)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 101
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set101)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 102
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set102)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 103
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set103)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 104
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set104)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 105
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set105)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 106
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set106)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 107
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set107)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 108
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set108)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 109
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set109)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 110
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set110)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 111
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set111)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 112
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set112)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 113
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set113)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 114
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set114)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 115
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set115)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 116
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set116)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 117
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set117)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 118
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set118)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 119
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set119)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 120
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set120)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 121
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set121)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 122
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set122)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 123
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set123)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 124
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set124)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 125
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set125)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 126
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set126)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 127
         , UMTS_TAS_CUSTOM_FEATURE_BY_RAT(Set127)
   #endif   
#endif

};

#if (IS_3G_MIPI_SUPPORT)
const Ul1CustomDynamicTasMipiData ul1CustomTasMipiData[UL1CUSTOM_TOTAL_REAL_SET_NUMS] = 
{
#if !(UL1CUSTOM_DRDI_ENABLE)
    UMTS_TAS_CUSTOM_MIPI_DATA(SetDefault)      //default
#else   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 0      
     UMTS_TAS_CUSTOM_MIPI_DATA(Set0)
   #endif   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 1
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set1)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 2
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set2)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 3
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set3)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 4
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set4)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 5
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set5)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 6
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set6)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 7
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set7)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 8
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set8)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 9
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set9)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 10
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set10)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 11
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set11)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 12
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set12)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 13
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set13)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 14
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set14)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 15
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set15)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 16
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set16)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 17
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set17)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 18
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set18)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 19
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set19)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 20
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set20)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 21
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set21)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 22
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set22)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 23
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set23)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 24
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set24)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 25
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set25)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 26
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set26)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 27
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set27)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 28
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set28)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 29
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set29)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 30
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set30)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 31
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set31)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 32
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set32)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 33
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set33)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 34
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set34)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 35
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set35)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 36
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set36)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 37
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set37)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 38
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set38)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 39
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set39)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 40
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set40)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 41
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set41)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 42
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set42)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 43
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set43)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 44
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set44)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 45
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set45)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 46
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set46)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 47
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set47)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 48
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set48)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 49
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set49)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 50
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set50)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 51
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set51)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 52
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set52)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 53
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set53)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 54
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set54)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 55
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set55)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 56
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set56)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 57
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set57)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 58
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set58)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 59
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set59)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 60
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set60)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 61
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set61)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 62
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set62)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 63
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set63)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 64
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set64)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 65
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set65)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 66
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set66)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 67
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set67)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 68
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set68)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 69
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set69)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 70
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set70)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 71
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set71)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 72
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set72)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 73
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set73)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 74
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set74)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 75
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set75)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 76
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set76)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 77
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set77)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 78
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set78)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 79
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set79)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 80
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set80)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 81
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set81)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 82
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set82)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 83
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set83)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 84
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set84)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 85
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set85)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 86
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set86)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 87
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set87)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 88
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set88)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 89
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set89)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 90
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set90)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 91
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set91)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 92
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set92)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 93
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set93)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 94
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set94)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 95
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set95)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 96
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set96)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 97
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set97)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 98
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set98)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 99
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set99)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 100
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set100)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 101
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set101)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 102
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set102)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 103
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set103)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 104
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set104)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 105
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set105)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 106
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set106)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 107
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set107)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 108
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set108)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 109
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set109)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 110
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set110)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 111
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set111)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 112
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set112)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 113
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set113)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 114
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set114)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 115
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set115)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 116
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set116)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 117
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set117)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 118
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set118)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 119
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set119)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 120
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set120)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 121
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set121)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 122
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set122)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 123
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set123)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 124
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set124)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 125
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set125)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 126
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set126)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 127
   , UMTS_TAS_CUSTOM_MIPI_DATA(Set127)
   #endif   
#endif
};

#endif //(IS_3G_MIPI_SUPPORT)

#if (IS_3G_TAS_TST_SUPPORT)
const Ul1CustomDynamicTasTstRoute ul1CustomTasTstRoute[UL1CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if !(UL1CUSTOM_DRDI_ENABLE)
         UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(SetDefault)
#else
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 0      
         UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set0)
   #endif   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 1
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set1)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 2
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set2)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 3
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set3)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 4
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set4)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 5
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set5)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 6
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set6)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 7
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set7)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 8
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set8)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 9
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set9)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 10
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set10)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 11
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set11)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 12
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set12)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 13
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set13)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 14
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set14)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 15
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set15)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 16
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set16)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 17
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set17)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 18
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set18)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 19
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set19)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 20
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set20)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 21
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set21)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 22
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set22)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 23
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set23)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 24
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set24)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 25
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set25)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 26
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set26)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 27
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set27)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 28
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set28)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 29
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set29)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 30
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set30)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 31
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set31)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 32
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set32)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 33
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set33)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 34
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set34)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 35
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set35)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 36
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set36)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 37
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set37)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 38
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set38)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 39
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set39)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 40
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set40)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 41
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set41)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 42
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set42)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 43
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set43)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 44
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set44)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 45
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set45)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 46
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set46)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 47
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set47)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 48
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set48)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 49
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set49)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 50
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set50)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 51
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set51)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 52
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set52)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 53
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set53)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 54
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set54)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 55
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set55)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 56
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set56)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 57
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set57)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 58
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set58)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 59
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set59)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 60
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set60)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 61
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set61)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 62
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set62)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 63
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set63)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 64
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set64)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 65
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set65)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 66
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set66)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 67
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set67)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 68
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set68)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 69
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set69)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 70
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set70)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 71
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set71)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 72
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set72)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 73
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set73)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 74
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set74)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 75
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set75)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 76
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set76)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 77
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set77)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 78
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set78)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 79
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set79)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 80
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set80)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 81
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set81)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 82
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set82)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 83
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set83)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 84
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set84)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 85
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set85)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 86
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set86)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 87
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set87)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 88
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set88)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 89
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set89)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 90
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set90)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 91
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set91)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 92
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set92)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 93
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set93)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 94
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set94)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 95
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set95)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 96
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set96)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 97
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set97)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 98
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set98)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 99
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set99)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 100
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set100)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 101
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set101)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 102
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set102)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 103
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set103)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 104
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set104)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 105
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set105)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 106
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set106)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 107
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set107)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 108
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set108)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 109
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set109)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 110
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set110)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 111
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set111)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 112
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set112)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 113
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set113)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 114
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set114)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 115
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set115)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 116
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set116)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 117
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set117)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 118
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set118)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 119
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set119)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 120
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set120)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 121
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set121)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 122
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set122)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 123
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set123)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 124
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set124)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 125
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set125)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 126
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set126)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 127
         , UMTS_TAS_TST_CUSTOM_FE_ROUTE_DATABASE(Set127)
   #endif
#endif
};
#endif

#if IS_3G_TAS_INHERIT_4G_ANT
const Ul1CustomDynamicTasInheritLteAnt ul1CustomTasInheritLteAnt[UL1CUSTOM_TOTAL_REAL_SET_NUMS] = 
{
#if !(UL1CUSTOM_DRDI_ENABLE)
    UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(SetDefault)      //default
#else   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 0      
     UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set0)
   #endif   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 1
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set1)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 2
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set2)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 3
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set3)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 4
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set4)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 5
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set5)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 6
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set6)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 7
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set7)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 8
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set8)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 9
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set9)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 10
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set10)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 11
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set11)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 12
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set12)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 13
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set13)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 14
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set14)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 15
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set15)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 16
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set16)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 17
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set17)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 18
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set18)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 19
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set19)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 20
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set20)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 21
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set21)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 22
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set22)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 23
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set23)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 24
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set24)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 25
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set25)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 26
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set26)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 27
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set27)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 28
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set28)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 29
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set29)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 30
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set30)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 31
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set31)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 32
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set32)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 33
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set33)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 34
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set34)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 35
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set35)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 36
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set36)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 37
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set37)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 38
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set38)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 39
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set39)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 40
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set40)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 41
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set41)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 42
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set42)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 43
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set43)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 44
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set44)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 45
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set45)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 46
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set46)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 47
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set47)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 48
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set48)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 49
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set49)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 50
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set50)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 51
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set51)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 52
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set52)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 53
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set53)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 54
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set54)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 55
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set55)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 56
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set56)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 57
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set57)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 58
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set58)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 59
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set59)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 60
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set60)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 61
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set61)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 62
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set62)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 63
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set63)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 64
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set64)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 65
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set65)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 66
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set66)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 67
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set67)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 68
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set68)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 69
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set69)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 70
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set70)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 71
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set71)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 72
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set72)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 73
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set73)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 74
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set74)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 75
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set75)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 76
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set76)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 77
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set77)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 78
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set78)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 79
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set79)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 80
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set80)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 81
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set81)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 82
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set82)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 83
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set83)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 84
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set84)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 85
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set85)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 86
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set86)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 87
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set87)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 88
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set88)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 89
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set89)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 90
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set90)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 91
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set91)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 92
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set92)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 93
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set93)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 94
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set94)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 95
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set95)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 96
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set96)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 97
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set97)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 98
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set98)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 99
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set99)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 100
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set100)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 101
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set101)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 102
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set102)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 103
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set103)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 104
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set104)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 105
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set105)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 106
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set106)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 107
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set107)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 108
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set108)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 109
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set109)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 110
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set110)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 111
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set111)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 112
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set112)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 113
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set113)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 114
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set114)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 115
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set115)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 116
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set116)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 117
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set117)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 118
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set118)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 119
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set119)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 120
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set120)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 121
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set121)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 122
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set122)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 123
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set123)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 124
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set124)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 125
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set125)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 126
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set126)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 127
   , UMTS_TAS_CUSTOM_INHERIT_LTE_ANT(Set127)
   #endif   
#endif
};
#endif
#endif //IS_3G_TAS_UL1_CUSTOM_SUPPORT

#if (IS_3G_DAT_UL1_CUSTOM_SUPPORT)
const Ul1CustomDynamicDatRoute ul1CustomDatRoute[UL1CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if !(UL1CUSTOM_DRDI_ENABLE)
         UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(SetDefault)
#else
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 0      
         UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set0)
   #endif   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 1
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set1)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 2
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set2)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 3
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set3)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 4
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set4)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 5
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set5)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 6
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set6)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 7
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set7)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 8
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set8)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 9
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set9)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 10
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set10)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 11
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set11)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 12
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set12)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 13
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set13)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 14
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set14)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 15
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set15)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 16
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set16)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 17
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set17)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 18
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set18)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 19
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set19)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 20
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set20)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 21
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set21)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 22
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set22)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 23
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set23)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 24
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set24)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 25
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set25)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 26
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set26)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 27
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set27)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 28
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set28)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 29
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set29)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 30
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set30)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 31
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set31)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 32
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set32)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 33
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set33)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 34
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set34)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 35
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set35)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 36
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set36)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 37
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set37)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 38
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set38)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 39
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set39)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 40
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set40)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 41
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set41)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 42
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set42)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 43
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set43)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 44
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set44)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 45
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set45)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 46
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set46)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 47
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set47)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 48
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set48)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 49
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set49)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 50
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set50)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 51
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set51)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 52
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set52)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 53
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set53)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 54
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set54)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 55
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set55)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 56
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set56)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 57
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set57)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 58
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set58)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 59
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set59)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 60
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set60)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 61
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set61)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 62
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set62)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 63
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set63)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 64
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set64)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 65
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set65)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 66
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set66)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 67
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set67)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 68
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set68)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 69
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set69)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 70
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set70)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 71
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set71)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 72
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set72)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 73
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set73)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 74
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set74)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 75
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set75)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 76
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set76)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 77
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set77)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 78
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set78)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 79
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set79)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 80
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set80)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 81
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set81)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 82
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set82)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 83
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set83)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 84
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set84)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 85
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set85)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 86
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set86)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 87
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set87)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 88
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set88)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 89
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set89)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 90
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set90)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 91
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set91)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 92
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set92)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 93
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set93)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 94
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set94)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 95
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set95)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 96
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set96)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 97
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set97)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 98
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set98)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 99
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set99)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 100
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set100)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 101
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set101)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 102
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set102)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 103
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set103)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 104
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set104)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 105
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set105)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 106
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set106)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 107
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set107)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 108
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set108)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 109
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set109)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 110
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set110)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 111
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set111)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 112
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set112)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 113
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set113)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 114
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set114)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 115
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set115)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 116
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set116)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 117
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set117)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 118
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set118)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 119
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set119)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 120
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set120)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 121
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set121)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 122
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set122)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 123
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set123)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 124
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set124)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 125
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set125)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 126
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set126)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 127
         , UMTS_DAT_CUSTOM_FE_ROUTE_DATABASE(Set127)
   #endif
#endif
};

const Ul1CustomDynamicDatDb ul1CustomDatDb[UL1CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if !(UL1CUSTOM_DRDI_ENABLE)
         UMTS_DAT_CUSTOM_FE_DATABASE(SetDefault)
#else
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 0      
         UMTS_DAT_CUSTOM_FE_DATABASE(Set0)
   #endif   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 1
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set1)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 2
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set2)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 3
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set3)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 4
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set4)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 5
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set5)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 6
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set6)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 7
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set7)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 8
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set8)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 9
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set9)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 10
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set10)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 11
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set11)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 12
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set12)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 13
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set13)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 14
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set14)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 15
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set15)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 16
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set16)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 17
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set17)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 18
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set18)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 19
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set19)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 20
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set20)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 21
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set21)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 22
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set22)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 23
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set23)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 24
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set24)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 25
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set25)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 26
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set26)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 27
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set27)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 28
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set28)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 29
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set29)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 30
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set30)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 31
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set31)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 32
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set32)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 33
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set33)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 34
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set34)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 35
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set35)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 36
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set36)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 37
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set37)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 38
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set38)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 39
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set39)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 40
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set40)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 41
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set41)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 42
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set42)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 43
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set43)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 44
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set44)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 45
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set45)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 46
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set46)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 47
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set47)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 48
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set48)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 49
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set49)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 50
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set50)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 51
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set51)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 52
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set52)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 53
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set53)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 54
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set54)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 55
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set55)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 56
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set56)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 57
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set57)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 58
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set58)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 59
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set59)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 60
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set60)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 61
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set61)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 62
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set62)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 63
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set63)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 64
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set64)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 65
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set65)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 66
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set66)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 67
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set67)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 68
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set68)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 69
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set69)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 70
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set70)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 71
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set71)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 72
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set72)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 73
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set73)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 74
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set74)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 75
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set75)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 76
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set76)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 77
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set77)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 78
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set78)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 79
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set79)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 80
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set80)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 81
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set81)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 82
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set82)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 83
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set83)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 84
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set84)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 85
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set85)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 86
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set86)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 87
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set87)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 88
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set88)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 89
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set89)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 90
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set90)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 91
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set91)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 92
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set92)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 93
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set93)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 94
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set94)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 95
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set95)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 96
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set96)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 97
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set97)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 98
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set98)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 99
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set99)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 100
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set100)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 101
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set101)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 102
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set102)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 103
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set103)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 104
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set104)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 105
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set105)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 106
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set106)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 107
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set107)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 108
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set108)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 109
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set109)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 110
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set110)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 111
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set111)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 112
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set112)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 113
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set113)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 114
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set114)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 115
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set115)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 116
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set116)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 117
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set117)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 118
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set118)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 119
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set119)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 120
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set120)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 121
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set121)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 122
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set122)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 123
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set123)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 124
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set124)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 125
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set125)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 126
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set126)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 127
         , UMTS_DAT_CUSTOM_FE_DATABASE(Set127)
   #endif   
#endif

};

const Ul1CustomDynamicDatFeatureByRat ul1CustomDatByRat[UL1CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if !(UL1CUSTOM_DRDI_ENABLE)
         UMTS_DAT_CUSTOM_FEATURE_BY_RAT(SetDefault)      //default
#else
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 0      
         UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set0)
   #endif   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 1
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set1)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 2
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set2)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 3
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set3)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 4
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set4)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 5
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set5)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 6
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set6)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 7
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set7)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 8
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set8)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 9
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set9)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 10
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set10)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 11
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set11)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 12
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set12)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 13
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set13)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 14
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set14)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 15
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set15)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 16
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set16)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 17
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set17)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 18
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set18)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 19
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set19)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 20
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set20)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 21
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set21)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 22
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set22)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 23
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set23)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 24
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set24)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 25
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set25)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 26
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set26)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 27
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set27)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 28
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set28)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 29
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set29)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 30
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set30)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 31
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set31)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 32
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set32)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 33
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set33)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 34
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set34)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 35
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set35)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 36
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set36)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 37
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set37)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 38
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set38)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 39
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set39)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 40
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set40)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 41
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set41)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 42
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set42)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 43
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set43)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 44
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set44)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 45
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set45)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 46
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set46)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 47
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set47)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 48
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set48)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 49
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set49)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 50
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set50)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 51
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set51)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 52
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set52)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 53
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set53)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 54
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set54)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 55
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set55)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 56
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set56)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 57
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set57)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 58
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set58)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 59
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set59)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 60
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set60)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 61
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set61)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 62
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set62)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 63
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set63)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 64
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set64)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 65
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set65)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 66
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set66)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 67
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set67)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 68
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set68)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 69
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set69)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 70
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set70)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 71
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set71)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 72
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set72)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 73
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set73)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 74
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set74)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 75
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set75)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 76
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set76)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 77
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set77)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 78
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set78)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 79
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set79)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 80
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set80)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 81
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set81)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 82
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set82)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 83
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set83)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 84
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set84)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 85
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set85)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 86
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set86)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 87
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set87)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 88
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set88)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 89
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set89)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 90
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set90)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 91
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set91)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 92
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set92)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 93
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set93)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 94
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set94)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 95
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set95)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 96
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set96)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 97
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set97)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 98
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set98)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 99
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set99)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 100
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set100)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 101
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set101)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 102
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set102)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 103
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set103)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 104
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set104)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 105
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set105)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 106
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set106)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 107
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set107)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 108
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set108)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 109
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set109)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 110
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set110)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 111
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set111)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 112
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set112)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 113
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set113)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 114
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set114)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 115
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set115)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 116
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set116)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 117
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set117)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 118
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set118)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 119
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set119)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 120
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set120)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 121
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set121)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 122
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set122)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 123
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set123)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 124
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set124)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 125
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set125)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 126
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set126)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 127
         , UMTS_DAT_CUSTOM_FEATURE_BY_RAT(Set127)
   #endif   
#endif

};

#if (IS_3G_MIPI_SUPPORT)
const Ul1CustomDynamicDatMipiData ul1CustomDatMipiData[UL1CUSTOM_TOTAL_REAL_SET_NUMS] = 
{
#if !(UL1CUSTOM_DRDI_ENABLE)
    UMTS_DAT_CUSTOM_MIPI_DATA(SetDefault)      //default
#else   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 0      
     UMTS_DAT_CUSTOM_MIPI_DATA(Set0)
   #endif   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 1
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set1)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 2
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set2)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 3
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set3)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 4
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set4)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 5
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set5)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 6
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set6)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 7
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set7)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 8
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set8)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 9
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set9)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 10
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set10)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 11
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set11)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 12
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set12)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 13
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set13)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 14
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set14)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 15
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set15)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 16
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set16)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 17
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set17)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 18
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set18)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 19
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set19)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 20
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set20)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 21
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set21)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 22
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set22)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 23
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set23)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 24
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set24)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 25
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set25)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 26
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set26)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 27
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set27)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 28
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set28)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 29
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set29)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 30
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set30)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 31
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set31)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 32
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set32)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 33
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set33)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 34
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set34)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 35
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set35)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 36
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set36)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 37
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set37)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 38
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set38)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 39
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set39)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 40
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set40)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 41
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set41)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 42
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set42)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 43
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set43)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 44
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set44)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 45
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set45)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 46
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set46)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 47
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set47)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 48
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set48)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 49
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set49)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 50
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set50)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 51
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set51)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 52
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set52)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 53
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set53)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 54
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set54)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 55
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set55)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 56
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set56)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 57
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set57)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 58
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set58)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 59
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set59)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 60
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set60)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 61
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set61)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 62
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set62)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 63
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set63)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 64
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set64)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 65
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set65)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 66
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set66)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 67
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set67)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 68
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set68)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 69
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set69)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 70
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set70)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 71
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set71)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 72
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set72)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 73
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set73)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 74
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set74)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 75
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set75)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 76
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set76)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 77
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set77)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 78
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set78)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 79
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set79)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 80
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set80)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 81
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set81)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 82
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set82)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 83
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set83)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 84
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set84)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 85
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set85)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 86
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set86)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 87
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set87)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 88
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set88)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 89
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set89)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 90
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set90)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 91
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set91)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 92
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set92)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 93
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set93)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 94
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set94)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 95
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set95)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 96
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set96)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 97
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set97)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 98
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set98)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 99
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set99)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 100
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set100)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 101
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set101)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 102
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set102)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 103
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set103)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 104
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set104)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 105
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set105)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 106
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set106)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 107
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set107)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 108
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set108)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 109
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set109)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 110
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set110)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 111
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set111)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 112
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set112)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 113
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set113)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 114
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set114)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 115
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set115)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 116
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set116)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 117
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set117)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 118
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set118)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 119
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set119)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 120
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set120)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 121
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set121)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 122
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set122)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 123
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set123)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 124
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set124)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 125
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set125)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 126
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set126)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 127
   , UMTS_DAT_CUSTOM_MIPI_DATA(Set127)
   #endif   
#endif
};

#endif //(IS_3G_MIPI_SUPPORT)

#endif //IS_3G_DAT_UL1_CUSTOM_SUPPORT

const Ul1CustomDynamicRfParameter ul1CustomUmtsRfParameter[UL1CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if !(UL1CUSTOM_DRDI_ENABLE)
   UMTS_RF_PARAMETER(SetDefault)      //default
#else
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 0      
   UMTS_RF_PARAMETER(Set0)
   #endif   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 1
   , UMTS_RF_PARAMETER(Set1)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 2
   , UMTS_RF_PARAMETER(Set2)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 3
   , UMTS_RF_PARAMETER(Set3)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 4
   , UMTS_RF_PARAMETER(Set4)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 5
   , UMTS_RF_PARAMETER(Set5)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 6
   , UMTS_RF_PARAMETER(Set6)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 7
   , UMTS_RF_PARAMETER(Set7)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 8
   , UMTS_RF_PARAMETER(Set8)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 9
   , UMTS_RF_PARAMETER(Set9)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 10
   , UMTS_RF_PARAMETER(Set10)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 11
   , UMTS_RF_PARAMETER(Set11)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 12
   , UMTS_RF_PARAMETER(Set12)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 13
   , UMTS_RF_PARAMETER(Set13)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 14
   , UMTS_RF_PARAMETER(Set14)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 15
   , UMTS_RF_PARAMETER(Set15)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 16
   , UMTS_RF_PARAMETER(Set16)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 17
   , UMTS_RF_PARAMETER(Set17)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 18
   , UMTS_RF_PARAMETER(Set18)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 19
   , UMTS_RF_PARAMETER(Set19)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 20
   , UMTS_RF_PARAMETER(Set20)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 21
   , UMTS_RF_PARAMETER(Set21)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 22
   , UMTS_RF_PARAMETER(Set22)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 23
   , UMTS_RF_PARAMETER(Set23)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 24
   , UMTS_RF_PARAMETER(Set24)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 25
   , UMTS_RF_PARAMETER(Set25)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 26
   , UMTS_RF_PARAMETER(Set26)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 27
   , UMTS_RF_PARAMETER(Set27)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 28
   , UMTS_RF_PARAMETER(Set28)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 29
   , UMTS_RF_PARAMETER(Set29)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 30
   , UMTS_RF_PARAMETER(Set30)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 31
   , UMTS_RF_PARAMETER(Set31)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 32
   , UMTS_RF_PARAMETER(Set32)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 33
   , UMTS_RF_PARAMETER(Set33)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 34
   , UMTS_RF_PARAMETER(Set34)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 35
   , UMTS_RF_PARAMETER(Set35)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 36
   , UMTS_RF_PARAMETER(Set36)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 37
   , UMTS_RF_PARAMETER(Set37)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 38
   , UMTS_RF_PARAMETER(Set38)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 39
   , UMTS_RF_PARAMETER(Set39)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 40
   , UMTS_RF_PARAMETER(Set40)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 41
   , UMTS_RF_PARAMETER(Set41)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 42
   , UMTS_RF_PARAMETER(Set42)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 43
   , UMTS_RF_PARAMETER(Set43)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 44
   , UMTS_RF_PARAMETER(Set44)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 45
   , UMTS_RF_PARAMETER(Set45)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 46
   , UMTS_RF_PARAMETER(Set46)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 47
   , UMTS_RF_PARAMETER(Set47)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 48
   , UMTS_RF_PARAMETER(Set48)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 49
   , UMTS_RF_PARAMETER(Set49)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 50
   , UMTS_RF_PARAMETER(Set50)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 51
   , UMTS_RF_PARAMETER(Set51)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 52
   , UMTS_RF_PARAMETER(Set52)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 53
   , UMTS_RF_PARAMETER(Set53)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 54
   , UMTS_RF_PARAMETER(Set54)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 55
   , UMTS_RF_PARAMETER(Set55)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 56
   , UMTS_RF_PARAMETER(Set56)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 57
   , UMTS_RF_PARAMETER(Set57)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 58
   , UMTS_RF_PARAMETER(Set58)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 59
   , UMTS_RF_PARAMETER(Set59)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 60
   , UMTS_RF_PARAMETER(Set60)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 61
   , UMTS_RF_PARAMETER(Set61)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 62
   , UMTS_RF_PARAMETER(Set62)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 63
   , UMTS_RF_PARAMETER(Set63)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 64
   , UMTS_RF_PARAMETER(Set64)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 65
   , UMTS_RF_PARAMETER(Set65)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 66
   , UMTS_RF_PARAMETER(Set66)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 67
   , UMTS_RF_PARAMETER(Set67)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 68
   , UMTS_RF_PARAMETER(Set68)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 69
   , UMTS_RF_PARAMETER(Set69)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 70
   , UMTS_RF_PARAMETER(Set70)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 71
   , UMTS_RF_PARAMETER(Set71)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 72
   , UMTS_RF_PARAMETER(Set72)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 73
   , UMTS_RF_PARAMETER(Set73)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 74
   , UMTS_RF_PARAMETER(Set74)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 75
   , UMTS_RF_PARAMETER(Set75)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 76
   , UMTS_RF_PARAMETER(Set76)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 77
   , UMTS_RF_PARAMETER(Set77)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 78
   , UMTS_RF_PARAMETER(Set78)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 79
   , UMTS_RF_PARAMETER(Set79)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 80
   , UMTS_RF_PARAMETER(Set80)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 81
   , UMTS_RF_PARAMETER(Set81)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 82
   , UMTS_RF_PARAMETER(Set82)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 83
   , UMTS_RF_PARAMETER(Set83)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 84
   , UMTS_RF_PARAMETER(Set84)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 85
   , UMTS_RF_PARAMETER(Set85)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 86
   , UMTS_RF_PARAMETER(Set86)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 87
   , UMTS_RF_PARAMETER(Set87)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 88
   , UMTS_RF_PARAMETER(Set88)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 89
   , UMTS_RF_PARAMETER(Set89)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 90
   , UMTS_RF_PARAMETER(Set90)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 91
   , UMTS_RF_PARAMETER(Set91)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 92
   , UMTS_RF_PARAMETER(Set92)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 93
   , UMTS_RF_PARAMETER(Set93)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 94
   , UMTS_RF_PARAMETER(Set94)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 95
   , UMTS_RF_PARAMETER(Set95)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 96
   , UMTS_RF_PARAMETER(Set96)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 97
   , UMTS_RF_PARAMETER(Set97)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 98
   , UMTS_RF_PARAMETER(Set98)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 99
   , UMTS_RF_PARAMETER(Set99)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 100
   , UMTS_RF_PARAMETER(Set100)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 101
   , UMTS_RF_PARAMETER(Set101)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 102
   , UMTS_RF_PARAMETER(Set102)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 103
   , UMTS_RF_PARAMETER(Set103)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 104
   , UMTS_RF_PARAMETER(Set104)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 105
   , UMTS_RF_PARAMETER(Set105)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 106
   , UMTS_RF_PARAMETER(Set106)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 107
   , UMTS_RF_PARAMETER(Set107)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 108
   , UMTS_RF_PARAMETER(Set108)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 109
   , UMTS_RF_PARAMETER(Set109)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 110
   , UMTS_RF_PARAMETER(Set110)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 111
   , UMTS_RF_PARAMETER(Set111)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 112
   , UMTS_RF_PARAMETER(Set112)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 113
   , UMTS_RF_PARAMETER(Set113)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 114
   , UMTS_RF_PARAMETER(Set114)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 115
   , UMTS_RF_PARAMETER(Set115)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 116
   , UMTS_RF_PARAMETER(Set116)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 117
   , UMTS_RF_PARAMETER(Set117)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 118
   , UMTS_RF_PARAMETER(Set118)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 119
   , UMTS_RF_PARAMETER(Set119)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 120
   , UMTS_RF_PARAMETER(Set120)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 121
   , UMTS_RF_PARAMETER(Set121)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 122
   , UMTS_RF_PARAMETER(Set122)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 123
   , UMTS_RF_PARAMETER(Set123)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 124
   , UMTS_RF_PARAMETER(Set124)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 125
   , UMTS_RF_PARAMETER(Set125)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 126
   , UMTS_RF_PARAMETER(Set126)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 127
   , UMTS_RF_PARAMETER(Set127)
   #endif   
#endif
};

const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T* const ul1PwrOnCalData[UL1CUSTOM_TOTAL_REAL_SET_NUMS][UL1CUSTOM_MAX_RF_SUPPORT_BAND_NUM] =
{
#if !(UL1CUSTOM_DRDI_ENABLE)
   /* The default Band Setting*/
   {
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_SetDefault),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_SetDefault),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_SetDefault),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_SetDefault),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_SetDefault) 
   }
#else
   /* Set 0 */
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 0      
   {
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set0),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set0),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set0),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set0),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set0)
   }
   #endif
   /* Set 1 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 1
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set1),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set1),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set1),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set1),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set1)
   }   
   #endif
   /* Set 2 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 2
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set2),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set2),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set2),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set2),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set2)
   }   
   #endif
   /* Set 3 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 3
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set3),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set3),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set3),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set3),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set3)
   }   
   #endif
   /* Set 4 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 4
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set4),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set4),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set4),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set4),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set4)
   }   
   #endif
   /* Set 5 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 5
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set5),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set5),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set5),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set5),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set5)
   }   
   #endif
   /* Set 6 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 6
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set6),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set6),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set6),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set6),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set6)
   }   
   #endif
   /* Set 7 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 7
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set7),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set7),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set7),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set7),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set7)
   }   
   #endif
   /* Set 8 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 8
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set8),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set8),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set8),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set8),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set8)
   }   
   #endif
   /* Set 9 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 9
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set9),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set9),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set9),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set9),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set9)
   }   
   #endif
   /* Set 10 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 10
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set10),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set10),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set10),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set10),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set10) 
   }   
   #endif
   /* Set 11 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 11
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set11),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set11),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set11),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set11),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set11)
   }   
   #endif
   /* Set 12 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 12
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set12),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set12),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set12),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set12),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set12)
   }   
   #endif
   /* Set 13 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 13
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set13),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set13),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set13),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set13),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set13)
   }   
   #endif
   /* Set 14 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 14
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set14),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set14),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set14),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set14),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set14)
   }   
   #endif
   /* Set 15 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 15
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set15),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set15),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set15),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set15),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set15)
   }   
   #endif
   /* Set 16 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 16
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set16),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set16),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set16),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set16),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set16)
   }   
   #endif
   /* Set 17 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 17
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set17),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set17),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set17),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set17),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set17)
   }   
   #endif
   /* Set 18 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 18
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set18),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set18),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set18),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set18),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set18)
   }   
   #endif
   /* Set 19 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 19
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set19),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set19),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set19),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set19),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set19)
   }   
   #endif
   /* Set 20 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 20
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set20),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set20),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set20),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set20),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set20)
   }   
   #endif
   /* Set 21 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 21
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set21),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set21),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set21),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set21),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set21) 
   }   
   #endif
   /* Set 22 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 22
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set22),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set22),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set22),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set22),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set22) 
   }   
   #endif
   /* Set 23 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 23
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set23),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set23),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set23),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set23),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set23) 
   }   
   #endif
   /* Set 24 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 24
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set24),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set24),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set24),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set24),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set24) 
   }   
   #endif
   /* Set 25 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 25
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set25),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set25),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set25),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set25),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set25) 
   }   
   #endif
   /* Set 26 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 26
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set26),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set26),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set26),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set26),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set26) 
   }   
   #endif
   /* Set 27 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 27
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set27),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set27),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set27),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set27),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set27) 
   }   
   #endif
   /* Set 28 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 28
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set28),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set28),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set28),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set28),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set28) 
   }   
   #endif
   /* Set 29 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 29
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set29),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set29),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set29),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set29),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set29) 
   }   
   #endif
   /* Set 30 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 30
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set30),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set30),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set30),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set30),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set30) 
   }   
   #endif
   /* Set 31 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 31
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set31),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set31),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set31),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set31),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set31)
   }   
   #endif
   /* Set 32 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 32
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set32),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set32),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set32),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set32),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set32)
   }   
   #endif
   /* Set 33 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 33
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set33),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set33),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set33),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set33),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set33)
   }   
   #endif
   /* Set 34 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 34
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set34),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set34),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set34),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set34),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set34)
   }   
   #endif
   /* Set 35 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 35
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set35),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set35),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set35),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set35),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set35)
   }   
   #endif
   /* Set 36 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 36
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set36),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set36),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set36),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set36),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set36)
   }   
   #endif
   /* Set 37 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 37
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set37),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set37),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set37),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set37),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set37)
   }   
   #endif
   /* Set 38 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 38
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set38),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set38),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set38),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set38),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set38)
   }   
   #endif
   /* Set 39 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 39
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set39),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set39),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set39),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set39),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set39)
   }   
   #endif
   /* Set 40 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 40
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set40),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set40),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set40),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set40),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set40)
   }   
   #endif
   /* Set 41 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 41
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set41),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set41),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set41),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set41),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set41)
   }   
   #endif
   /* Set 42 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 42
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set42),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set42),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set42),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set42),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set42)
   }   
   #endif
   /* Set 43 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 43
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set43),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set43),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set43),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set43),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set43)
   }   
   #endif
   /* Set 44 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 44
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set44),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set44),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set44),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set44),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set44)
   }   
   #endif
   /* Set 45 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 45
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set45),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set45),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set45),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set45),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set45)
   }   
   #endif
   /* Set 46 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 46
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set46),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set46),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set46),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set46),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set46)
   }   
   #endif
   /* Set 47 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 47
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set47),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set47),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set47),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set47),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set47)
   }   
   #endif
   /* Set 48 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 48
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set48),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set48),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set48),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set48),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set48)
   }   
   #endif
   /* Set 49 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 49
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set49),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set49),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set49),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set49),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set49)
   }   
   #endif
   /* Set 50 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 50
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set50),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set50),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set50),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set50),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set50)
   }   
   #endif
   /* Set 51 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 51
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set51),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set51),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set51),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set51),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set51)
   }   
   #endif
   /* Set 52 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 52
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set52),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set52),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set52),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set52),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set52)
   }   
   #endif
   /* Set 53 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 53
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set53),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set53),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set53),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set53),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set53)
   }   
   #endif
   /* Set 54 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 54
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set54),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set54),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set54),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set54),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set54)
   }   
   #endif
   /* Set 55 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 55
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set55),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set55),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set55),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set55),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set55)
   }   
   #endif
   /* Set 56 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 56
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set56),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set56),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set56),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set56),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set56)
   }   
   #endif
   /* Set 57 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 57
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set57),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set57),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set57),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set57),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set57)
   }   
   #endif
   /* Set 58 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 58
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set58),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set58),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set58),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set58),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set58)
   }   
   #endif
   /* Set 59 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 59
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set59),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set59),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set59),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set59),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set59)
   }   
   #endif
   /* Set 60 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 60
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set60),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set60),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set60),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set60),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set60)
   }   
   #endif
   /* Set 61 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 61
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set61),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set61),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set61),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set61),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set61)
   }   
   #endif
   /* Set 62 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 62
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set62),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set62),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set62),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set62),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set62)
   }   
   #endif
   /* Set 63 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 63
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set63),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set63),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set63),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set63),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set63)
   }   
   #endif
   /* Set 64 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 64
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set64),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set64),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set64),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set64),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set64)
   }   
   #endif
   /* Set 65 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 65
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set65),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set65),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set65),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set65),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set65)
   }   
   #endif
   /* Set 66 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 66
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set66),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set66),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set66),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set66),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set66)
   }   
   #endif
   /* Set 67 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 67
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set67),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set67),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set67),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set67),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set67)
   }   
   #endif
   /* Set 68 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 68
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set68),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set68),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set68),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set68),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set68)
   }   
   #endif
   /* Set 69 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 69
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set69),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set69),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set69),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set69),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set69)
   }   
   #endif
   /* Set 70 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 70
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set70),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set70),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set70),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set70),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set70)
   }   
   #endif
   /* Set 71 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 71
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set71),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set71),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set71),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set71),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set71)
   }   
   #endif
   /* Set 72 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 72
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set72),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set72),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set72),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set72),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set72)
   }   
   #endif
   /* Set 73 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 73
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set73),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set73),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set73),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set73),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set73)
   }   
   #endif
   /* Set 74 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 74
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set74),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set74),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set74),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set74),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set74)
   }   
   #endif
   /* Set 75 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 75
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set75),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set75),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set75),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set75),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set75)
   }   
   #endif
   /* Set 76 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 76
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set76),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set76),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set76),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set76),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set76)
   }   
   #endif
   /* Set 77 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 77
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set77),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set77),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set77),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set77),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set77)
   }   
   #endif
   /* Set 78 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 78
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set78),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set78),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set78),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set78),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set78)
   }   
   #endif
   /* Set 79 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 79
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set79),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set79),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set79),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set79),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set79)
   }   
   #endif
   /* Set 80 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 80
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set80),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set80),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set80),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set80),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set80)
   }   
   #endif
   /* Set 81 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 81
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set81),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set81),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set81),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set81),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set81)
   }   
   #endif
   /* Set 82 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 82
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set82),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set82),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set82),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set82),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set82)
   }   
   #endif
   /* Set 83 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 83
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set83),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set83),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set83),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set83),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set83)
   }   
   #endif
   /* Set 84 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 84
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set84),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set84),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set84),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set84),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set84)
   }   
   #endif
   /* Set 85 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 85
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set85),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set85),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set85),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set85),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set85)
   }   
   #endif
   /* Set 86 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 86
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set86),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set86),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set86),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set86),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set86)
   }   
   #endif
   /* Set 87 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 87
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set87),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set87),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set87),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set87),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set87)
   }   
   #endif
   /* Set 88 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 88
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set88),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set88),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set88),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set88),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set88)
   }   
   #endif
   /* Set 89 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 89
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set89),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set89),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set89),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set89),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set89)
   }   
   #endif
   /* Set 90 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 90
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set90),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set90),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set90),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set90),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set90)
   }   
   #endif
   /* Set 91 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 91
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set91),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set91),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set91),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set91),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set91)
   }   
   #endif
   /* Set 92 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 92
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set92),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set92),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set92),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set92),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set92)
   }   
   #endif
   /* Set 93 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 93
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set93),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set93),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set93),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set93),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set93)
   }   
   #endif
   /* Set 94 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 94
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set94),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set94),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set94),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set94),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set94)
   }   
   #endif
   /* Set 95 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 95
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set95),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set95),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set95),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set95),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set95)
   }   
   #endif
   /* Set 96 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 96
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set96),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set96),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set96),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set96),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set96)
   }   
   #endif
   /* Set 97 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 97
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set97),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set97),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set97),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set97),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set97)
   }   
   #endif
   /* Set 98 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 98
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set98),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set98),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set98),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set98),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set98)
   }   
   #endif
   /* Set 99 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 99
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set99),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set99),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set99),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set99),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set99)
   }   
   #endif
   /* Set 100 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 100
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set100),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set100),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set100),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set100),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set100)
   }   
   #endif
   /* Set 101 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 101
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set101),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set101),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set101),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set101),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set101) 
   }   
   #endif
   /* Set 102 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 102
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set102),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set102),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set102),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set102),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set102)
   }   
   #endif
   /* Set 103 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 103
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set103),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set103),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set103),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set103),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set103)
   }   
   #endif
   /* Set 104 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 104
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set104),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set104),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set104),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set104),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set104)
   }   
   #endif
   /* Set 105 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 105
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set105),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set105),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set105),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set105),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set105)
   }   
   #endif
   /* Set 106 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 106
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set106),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set106),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set106),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set106),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set106)
   }   
   #endif
   /* Set 107 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 107
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set107),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set107),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set107),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set107),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set107)
   }   
   #endif
   /* Set 108 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 108
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set108),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set108),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set108),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set108),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set108)
   }   
   #endif
   /* Set 109 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 109
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set109),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set109),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set109),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set109),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set109)
   }   
   #endif
   /* Set 110 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 110
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set110),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set110),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set110),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set110),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set110)
   }   
   #endif
   /* Set 111 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 111
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set111),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set111),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set111),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set111),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set111)
   }   
   #endif
   /* Set 112 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 112
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set112),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set112),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set112),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set112),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set112)
   }   
   #endif
   /* Set 112 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 113
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set113),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set113),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set113),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set113),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set113)
   }   
   #endif
   /* Set 114 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 114
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set114),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set114),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set114),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set114),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set114)
   }   
   #endif
   /* Set 115 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 115
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set115),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set115),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set115),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set115),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set115)
   }   
   #endif
   /* Set 116 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 116
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set116),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set116),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set116),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set116),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set116)
   }   
   #endif
   /* Set 117 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 117
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set117),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set117),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set117),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set117),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set117)
   }   
   #endif
   /* Set 118 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 118
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set118),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set118),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set118),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set118),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set118)
   }   
   #endif
   /* Set 119 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 119
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set119),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set119),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set119),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set119),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set119)
   }   
   #endif
   /* Set 120 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 120
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set120),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set120),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set120),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set120),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set120)
   }   
   #endif
   /* Set 121 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 121
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set121),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set121),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set121),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set121),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set121)
   }   
   #endif
   /* Set 122 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 122
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set122),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set122),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set122),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set122),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set122)
   }   
   #endif
   /* Set 123 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 123
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set123),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set123),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set123),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set123),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set123)
   }   
   #endif
   /* Set 124 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 124
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set124),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set124),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set124),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set124),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set124)
   }   
   #endif
   /* Set 125 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 125
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set125),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set125),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set125),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set125),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set125)
   }   
   #endif
   /* Set 126 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 126
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set126),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set126),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set126),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set126),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set126)
   }   
   #endif
   /* Set 127 */ 
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 127
   ,{
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0_Set127),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1_Set127),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2_Set127),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3_Set127),
      &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4_Set127)
   }   
   #endif
#endif
   /* End of Second Set */
};

#if (IS_3G_TX_POWER_OFFSET_SUPPORT || IS_3G_SAR_TX_POWER_BACKOFF_SUPPORT)
const Ul1CustomDynamicTpoData ul1CustomTpoData[UL1CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if !(UL1CUSTOM_DRDI_ENABLE)
   UMTS_TPO_CUSTOM_DATA(SetDefault)
#else   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 0      
   UMTS_TPO_CUSTOM_DATA(Set0)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 1
   , UMTS_TPO_CUSTOM_DATA(Set1)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 2
   , UMTS_TPO_CUSTOM_DATA(Set2)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 3
   , UMTS_TPO_CUSTOM_DATA(Set3)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 4
   , UMTS_TPO_CUSTOM_DATA(Set4)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 5
   , UMTS_TPO_CUSTOM_DATA(Set5)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 6
   , UMTS_TPO_CUSTOM_DATA(Set6)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 7
   , UMTS_TPO_CUSTOM_DATA(Set7)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 8
   , UMTS_TPO_CUSTOM_DATA(Set8)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 9
   , UMTS_TPO_CUSTOM_DATA(Set9)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 10
   , UMTS_TPO_CUSTOM_DATA(Set10)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 11
   , UMTS_TPO_CUSTOM_DATA(Set11)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 12
   , UMTS_TPO_CUSTOM_DATA(Set12)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 13
   , UMTS_TPO_CUSTOM_DATA(Set13)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 14
   , UMTS_TPO_CUSTOM_DATA(Set14)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 15
   , UMTS_TPO_CUSTOM_DATA(Set15)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 16
   , UMTS_TPO_CUSTOM_DATA(Set16)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 17
   , UMTS_TPO_CUSTOM_DATA(Set17)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 18
   , UMTS_TPO_CUSTOM_DATA(Set18)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 19
   , UMTS_TPO_CUSTOM_DATA(Set19)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 20
   , UMTS_TPO_CUSTOM_DATA(Set20)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 21
   , UMTS_TPO_CUSTOM_DATA(Set21)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 22
   , UMTS_TPO_CUSTOM_DATA(Set22)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 23
   , UMTS_TPO_CUSTOM_DATA(Set23)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 24
   , UMTS_TPO_CUSTOM_DATA(Set24)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 25
   , UMTS_TPO_CUSTOM_DATA(Set25)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 26
   , UMTS_TPO_CUSTOM_DATA(Set26)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 27
   , UMTS_TPO_CUSTOM_DATA(Set27)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 28
   , UMTS_TPO_CUSTOM_DATA(Set28)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 29
   , UMTS_TPO_CUSTOM_DATA(Set29)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 30
   , UMTS_TPO_CUSTOM_DATA(Set30)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 31
   , UMTS_TPO_CUSTOM_DATA(Set31)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 32
   , UMTS_TPO_CUSTOM_DATA(Set32)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 33
   , UMTS_TPO_CUSTOM_DATA(Set33)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 34
   , UMTS_TPO_CUSTOM_DATA(Set34)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 35
   , UMTS_TPO_CUSTOM_DATA(Set35)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 36
   , UMTS_TPO_CUSTOM_DATA(Set36)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 37
   , UMTS_TPO_CUSTOM_DATA(Set37)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 38
   , UMTS_TPO_CUSTOM_DATA(Set38)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 39
   , UMTS_TPO_CUSTOM_DATA(Set39)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 40
   , UMTS_TPO_CUSTOM_DATA(Set40)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 41
   , UMTS_TPO_CUSTOM_DATA(Set41)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 42
   , UMTS_TPO_CUSTOM_DATA(Set42)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 43
   , UMTS_TPO_CUSTOM_DATA(Set43)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 44
   , UMTS_TPO_CUSTOM_DATA(Set44)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 45
   , UMTS_TPO_CUSTOM_DATA(Set45)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 46
   , UMTS_TPO_CUSTOM_DATA(Set46)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 47
   , UMTS_TPO_CUSTOM_DATA(Set47)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 48
   , UMTS_TPO_CUSTOM_DATA(Set48)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 49
   , UMTS_TPO_CUSTOM_DATA(Set49)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 50
   , UMTS_TPO_CUSTOM_DATA(Set50)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 51
   , UMTS_TPO_CUSTOM_DATA(Set51)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 52
   , UMTS_TPO_CUSTOM_DATA(Set52)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 53
   , UMTS_TPO_CUSTOM_DATA(Set53)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 54
   , UMTS_TPO_CUSTOM_DATA(Set54)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 55
   , UMTS_TPO_CUSTOM_DATA(Set55)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 56
   , UMTS_TPO_CUSTOM_DATA(Set56)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 57
   , UMTS_TPO_CUSTOM_DATA(Set57)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 58
   , UMTS_TPO_CUSTOM_DATA(Set58)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 59
   , UMTS_TPO_CUSTOM_DATA(Set59)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 60
   , UMTS_TPO_CUSTOM_DATA(Set60)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 61
   , UMTS_TPO_CUSTOM_DATA(Set61)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 62
   , UMTS_TPO_CUSTOM_DATA(Set62)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 63
   , UMTS_TPO_CUSTOM_DATA(Set63)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 64
   , UMTS_TPO_CUSTOM_DATA(Set64)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 65
   , UMTS_TPO_CUSTOM_DATA(Set65)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 66
   , UMTS_TPO_CUSTOM_DATA(Set66)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 67
   , UMTS_TPO_CUSTOM_DATA(Set67)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 68
   , UMTS_TPO_CUSTOM_DATA(Set68)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 69
   , UMTS_TPO_CUSTOM_DATA(Set69)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 70
   , UMTS_TPO_CUSTOM_DATA(Set70)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 71
   , UMTS_TPO_CUSTOM_DATA(Set71)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 72
   , UMTS_TPO_CUSTOM_DATA(Set72)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 73
   , UMTS_TPO_CUSTOM_DATA(Set73)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 74
   , UMTS_TPO_CUSTOM_DATA(Set74)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 75
   , UMTS_TPO_CUSTOM_DATA(Set75)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 76
   , UMTS_TPO_CUSTOM_DATA(Set76)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 77
   , UMTS_TPO_CUSTOM_DATA(Set77)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 78
   , UMTS_TPO_CUSTOM_DATA(Set78)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 79
   , UMTS_TPO_CUSTOM_DATA(Set79)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 80
   , UMTS_TPO_CUSTOM_DATA(Set80)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 81
   , UMTS_TPO_CUSTOM_DATA(Set81)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 82
   , UMTS_TPO_CUSTOM_DATA(Set82)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 83
   , UMTS_TPO_CUSTOM_DATA(Set83)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 84
   , UMTS_TPO_CUSTOM_DATA(Set84)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 85
   , UMTS_TPO_CUSTOM_DATA(Set85)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 86
   , UMTS_TPO_CUSTOM_DATA(Set86)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 87
   , UMTS_TPO_CUSTOM_DATA(Set87)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 88
   , UMTS_TPO_CUSTOM_DATA(Set88)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 89
   , UMTS_TPO_CUSTOM_DATA(Set89)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 90
   , UMTS_TPO_CUSTOM_DATA(Set90)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 91
   , UMTS_TPO_CUSTOM_DATA(Set91)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 92
   , UMTS_TPO_CUSTOM_DATA(Set92)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 93
   , UMTS_TPO_CUSTOM_DATA(Set93)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 94
   , UMTS_TPO_CUSTOM_DATA(Set94)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 95
   , UMTS_TPO_CUSTOM_DATA(Set95)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 96
   , UMTS_TPO_CUSTOM_DATA(Set96)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 97
   , UMTS_TPO_CUSTOM_DATA(Set97)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 98
   , UMTS_TPO_CUSTOM_DATA(Set98)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 99
   , UMTS_TPO_CUSTOM_DATA(Set99)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 100
   , UMTS_TPO_CUSTOM_DATA(Set100)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 101
   , UMTS_TPO_CUSTOM_DATA(Set101)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 102
   , UMTS_TPO_CUSTOM_DATA(Set102)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 103
   , UMTS_TPO_CUSTOM_DATA(Set103)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 104
   , UMTS_TPO_CUSTOM_DATA(Set104)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 105
   , UMTS_TPO_CUSTOM_DATA(Set105)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 106
   , UMTS_TPO_CUSTOM_DATA(Set106)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 107
   , UMTS_TPO_CUSTOM_DATA(Set107)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 108
   , UMTS_TPO_CUSTOM_DATA(Set108)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 109
   , UMTS_TPO_CUSTOM_DATA(Set109)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 110
   , UMTS_TPO_CUSTOM_DATA(Set110)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 111
   , UMTS_TPO_CUSTOM_DATA(Set111)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 112
   , UMTS_TPO_CUSTOM_DATA(Set112)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 113
   , UMTS_TPO_CUSTOM_DATA(Set113)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 114
   , UMTS_TPO_CUSTOM_DATA(Set114)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 115
   , UMTS_TPO_CUSTOM_DATA(Set115)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 116
   , UMTS_TPO_CUSTOM_DATA(Set116)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 117
   , UMTS_TPO_CUSTOM_DATA(Set117)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 118
   , UMTS_TPO_CUSTOM_DATA(Set118)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 119
   , UMTS_TPO_CUSTOM_DATA(Set119)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 120
   , UMTS_TPO_CUSTOM_DATA(Set120)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 121
   , UMTS_TPO_CUSTOM_DATA(Set121)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 122
   , UMTS_TPO_CUSTOM_DATA(Set122)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 123
   , UMTS_TPO_CUSTOM_DATA(Set123)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 124
   , UMTS_TPO_CUSTOM_DATA(Set124)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 125
   , UMTS_TPO_CUSTOM_DATA(Set125)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 126
   , UMTS_TPO_CUSTOM_DATA(Set126)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 127
   , UMTS_TPO_CUSTOM_DATA(Set127)
   #endif
#endif
};
#endif

#if (IS_3G_RX_POWER_OFFSET_SUPPORT)
const Ul1CustomDynamicRpoData ul1CustomRpoData[UL1CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if !(UL1CUSTOM_DRDI_ENABLE)
   UMTS_RPO_CUSTOM_DATA(SetDefault)
#else   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 0      
   UMTS_RPO_CUSTOM_DATA(Set0)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 1
   , UMTS_RPO_CUSTOM_DATA(Set1)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 2
   , UMTS_RPO_CUSTOM_DATA(Set2)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 3
   , UMTS_RPO_CUSTOM_DATA(Set3)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 4
   , UMTS_RPO_CUSTOM_DATA(Set4)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 5
   , UMTS_RPO_CUSTOM_DATA(Set5)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 6
   , UMTS_RPO_CUSTOM_DATA(Set6)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 7
   , UMTS_RPO_CUSTOM_DATA(Set7)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 8
   , UMTS_RPO_CUSTOM_DATA(Set8)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 9
   , UMTS_RPO_CUSTOM_DATA(Set9)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 10
   , UMTS_RPO_CUSTOM_DATA(Set10)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 11
   , UMTS_RPO_CUSTOM_DATA(Set11)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 12
   , UMTS_RPO_CUSTOM_DATA(Set12)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 13
   , UMTS_RPO_CUSTOM_DATA(Set13)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 14
   , UMTS_RPO_CUSTOM_DATA(Set14)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 15
   , UMTS_RPO_CUSTOM_DATA(Set15)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 16
   , UMTS_RPO_CUSTOM_DATA(Set16)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 17
   , UMTS_RPO_CUSTOM_DATA(Set17)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 18
   , UMTS_RPO_CUSTOM_DATA(Set18)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 19
   , UMTS_RPO_CUSTOM_DATA(Set19)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 20
   , UMTS_RPO_CUSTOM_DATA(Set20)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 21
   , UMTS_RPO_CUSTOM_DATA(Set21)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 22
   , UMTS_RPO_CUSTOM_DATA(Set22)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 23
   , UMTS_RPO_CUSTOM_DATA(Set23)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 24
   , UMTS_RPO_CUSTOM_DATA(Set24)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 25
   , UMTS_RPO_CUSTOM_DATA(Set25)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 26
   , UMTS_RPO_CUSTOM_DATA(Set26)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 27
   , UMTS_RPO_CUSTOM_DATA(Set27)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 28
   , UMTS_RPO_CUSTOM_DATA(Set28)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 29
   , UMTS_RPO_CUSTOM_DATA(Set29)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 30
   , UMTS_RPO_CUSTOM_DATA(Set30)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 31
   , UMTS_RPO_CUSTOM_DATA(Set31)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 32
   , UMTS_RPO_CUSTOM_DATA(Set32)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 33
   , UMTS_RPO_CUSTOM_DATA(Set33)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 34
   , UMTS_RPO_CUSTOM_DATA(Set34)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 35
   , UMTS_RPO_CUSTOM_DATA(Set35)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 36
   , UMTS_RPO_CUSTOM_DATA(Set36)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 37
   , UMTS_RPO_CUSTOM_DATA(Set37)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 38
   , UMTS_RPO_CUSTOM_DATA(Set38)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 39
   , UMTS_RPO_CUSTOM_DATA(Set39)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 40
   , UMTS_RPO_CUSTOM_DATA(Set40)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 41
   , UMTS_RPO_CUSTOM_DATA(Set41)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 42
   , UMTS_RPO_CUSTOM_DATA(Set42)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 43
   , UMTS_RPO_CUSTOM_DATA(Set43)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 44
   , UMTS_RPO_CUSTOM_DATA(Set44)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 45
   , UMTS_RPO_CUSTOM_DATA(Set45)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 46
   , UMTS_RPO_CUSTOM_DATA(Set46)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 47
   , UMTS_RPO_CUSTOM_DATA(Set47)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 48
   , UMTS_RPO_CUSTOM_DATA(Set48)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 49
   , UMTS_RPO_CUSTOM_DATA(Set49)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 50
   , UMTS_RPO_CUSTOM_DATA(Set50)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 51
   , UMTS_RPO_CUSTOM_DATA(Set51)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 52
   , UMTS_RPO_CUSTOM_DATA(Set52)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 53
   , UMTS_RPO_CUSTOM_DATA(Set53)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 54
   , UMTS_RPO_CUSTOM_DATA(Set54)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 55
   , UMTS_RPO_CUSTOM_DATA(Set55)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 56
   , UMTS_RPO_CUSTOM_DATA(Set56)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 57
   , UMTS_RPO_CUSTOM_DATA(Set57)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 58
   , UMTS_RPO_CUSTOM_DATA(Set58)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 59
   , UMTS_RPO_CUSTOM_DATA(Set59)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 60
   , UMTS_RPO_CUSTOM_DATA(Set60)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 61
   , UMTS_RPO_CUSTOM_DATA(Set61)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 62
   , UMTS_RPO_CUSTOM_DATA(Set62)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 63
   , UMTS_RPO_CUSTOM_DATA(Set63)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 64
   , UMTS_RPO_CUSTOM_DATA(Set64)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 65
   , UMTS_RPO_CUSTOM_DATA(Set65)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 66
   , UMTS_RPO_CUSTOM_DATA(Set66)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 67
   , UMTS_RPO_CUSTOM_DATA(Set67)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 68
   , UMTS_RPO_CUSTOM_DATA(Set68)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 69
   , UMTS_RPO_CUSTOM_DATA(Set69)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 70
   , UMTS_RPO_CUSTOM_DATA(Set70)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 71
   , UMTS_RPO_CUSTOM_DATA(Set71)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 72
   , UMTS_RPO_CUSTOM_DATA(Set72)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 73
   , UMTS_RPO_CUSTOM_DATA(Set73)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 74
   , UMTS_RPO_CUSTOM_DATA(Set74)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 75
   , UMTS_RPO_CUSTOM_DATA(Set75)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 76
   , UMTS_RPO_CUSTOM_DATA(Set76)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 77
   , UMTS_RPO_CUSTOM_DATA(Set77)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 78
   , UMTS_RPO_CUSTOM_DATA(sET)(Set78)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 79
   , UMTS_RPO_CUSTOM_DATA(sET)(Set79)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 80
   , UMTS_RPO_CUSTOM_DATA(sET)(Set80)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 81
   , UMTS_RPO_CUSTOM_DATA(Set81)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 82
   , UMTS_RPO_CUSTOM_DATA(Set82)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 83
   , UMTS_RPO_CUSTOM_DATA(Set83)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 84
   , UMTS_RPO_CUSTOM_DATA(Set84)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 85
   , UMTS_RPO_CUSTOM_DATA(Set85)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 86
   , UMTS_RPO_CUSTOM_DATA(Set86)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 87
   , UMTS_RPO_CUSTOM_DATA(Set87)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 88
   , UMTS_RPO_CUSTOM_DATA(Set88)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 89
   , UMTS_RPO_CUSTOM_DATA(Set89)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 90
   , UMTS_RPO_CUSTOM_DATA(Set90)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 91
   , UMTS_RPO_CUSTOM_DATA(Set91)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 92
   , UMTS_RPO_CUSTOM_DATA(Set92)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 93
   , UMTS_RPO_CUSTOM_DATA(Set93)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 94
   , UMTS_RPO_CUSTOM_DATA(Set94)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 95
   , UMTS_RPO_CUSTOM_DATA(Set95)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 96
   , UMTS_RPO_CUSTOM_DATA(Set96)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 97
   , UMTS_RPO_CUSTOM_DATA(Set97)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 98
   , UMTS_RPO_CUSTOM_DATA(Set98)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 99
   , UMTS_RPO_CUSTOM_DATA(Set99)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 100
   , UMTS_RPO_CUSTOM_DATA(Set100)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 101
   , UMTS_RPO_CUSTOM_DATA(Set101)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 102
   , UMTS_RPO_CUSTOM_DATA(Set102)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 103
   , UMTS_RPO_CUSTOM_DATA(Set103)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 104
   , UMTS_RPO_CUSTOM_DATA(Set104)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 105
   , UMTS_RPO_CUSTOM_DATA(Set105)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 106
   , UMTS_RPO_CUSTOM_DATA(Set106)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 107
   , UMTS_RPO_CUSTOM_DATA(Set107)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 108
   , UMTS_RPO_CUSTOM_DATA(Set108)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 109
   , UMTS_RPO_CUSTOM_DATA(Set109)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 110
   , UMTS_RPO_CUSTOM_DATA(Set110)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 111
   , UMTS_RPO_CUSTOM_DATA(Set111)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 112
   , UMTS_RPO_CUSTOM_DATA(Set112)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 113
   , UMTS_RPO_CUSTOM_DATA(Set113)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 114
   , UMTS_RPO_CUSTOM_DATA(Set114)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 115
   , UMTS_RPO_CUSTOM_DATA(Set115)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 116
   , UMTS_RPO_CUSTOM_DATA(Set116)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 117
   , UMTS_RPO_CUSTOM_DATA(Set117)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 118
   , UMTS_RPO_CUSTOM_DATA(Set118)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 119
   , UMTS_RPO_CUSTOM_DATA(Set119)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 120
   , UMTS_RPO_CUSTOM_DATA(Set120)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 121
   , UMTS_RPO_CUSTOM_DATA(Set121)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 122
   , UMTS_RPO_CUSTOM_DATA(Set122)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 123
   , UMTS_RPO_CUSTOM_DATA(Set123)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 124
   , UMTS_RPO_CUSTOM_DATA(Set124)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 125
   , UMTS_RPO_CUSTOM_DATA(Set125)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 126
   , UMTS_RPO_CUSTOM_DATA(Set126)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 127
   , UMTS_RPO_CUSTOM_DATA(Set127)
   #endif
#endif
};
#endif
#if (IS_3G_VPA_SEL_BY_BAND_SUPPORT)
const Ul1CustomDynamicVpaSrcSelData ul1CustomVpaSrcSelData[UL1CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if !(UL1CUSTOM_DRDI_ENABLE)
   UMTS_VPA_SRC_SEL_CUSTOM_DATA(SetDefault)
#else   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 0      
   UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set0)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 1
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set1)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 2
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set2)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 3
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set3)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 4
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set4)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 5
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set5)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 6
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set6)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 7
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set7)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 8
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set8)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 9
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set9)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 10
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set10)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 11
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set11)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 12
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set12)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 13
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set13)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 14
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set14)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 15
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set15)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 16
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set16)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 17
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set17)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 18
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set18)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 19
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set19)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 20
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set20)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 21
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set21)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 22
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set22)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 23
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set23)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 24
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set24)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 25
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set25)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 26
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set26)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 27
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set27)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 28
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set28)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 29
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set29)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 30
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set30)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 31
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set31)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 32
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set32)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 33
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set33)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 34
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set34)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 35
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set35)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 36
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set36)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 37
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set37)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 38
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set38)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 39
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set39)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 40
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set40)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 41
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set41)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 42
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set42)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 43
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set43)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 44
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set44)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 45
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set45)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 46
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set46)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 47
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set47)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 48
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set48)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 49
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set49)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 50
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set50)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 51
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set51)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 52
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set52)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 53
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set53)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 54
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set54)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 55
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set55)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 56
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set56)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 57
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set57)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 58
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set58)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 59
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set59)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 60
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set60)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 61
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set61)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 62
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set62)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 63
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set63)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 64
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set64)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 65
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set65)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 66
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set66)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 67
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set67)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 68
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set68)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 69
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set69)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 70
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set70)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 71
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set71)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 72
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set72)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 73
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set73)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 74
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set74)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 75
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set75)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 76
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set76)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 77
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set77)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 78
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set78)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 79
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set79)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 80
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set80)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 81
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set81)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 82
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set82)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 83
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set83)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 84
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set84)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 85
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set85)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 86
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set86)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 87
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set87)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 88
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set88)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 89
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set89)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 90
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set90)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 91
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set91)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 92
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set92)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 93
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set93)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 94
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set94)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 95
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set95)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 96
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set96)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 97
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set97)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 98
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set98)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 99
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set99)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 100
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set100)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 101
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set101)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 102
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set102)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 103
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set103)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 104
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set104)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 105
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set105)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 106
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set106)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 107
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set107)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 108
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set108)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 109
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set109)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 110
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set110)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 111
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set111)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 112
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set112)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 113
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set113)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 114
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set114)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 115
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set115)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 116
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set116)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 117
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set117)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 118
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set118)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 119
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set119)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 120
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set120)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 121
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set121)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 122
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set122)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 123
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set123)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 124
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set124)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 125
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set125)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 126
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set126)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 127
   , UMTS_VPA_SRC_SEL_CUSTOM_DATA(Set127)
   #endif
#endif
};
#endif

#if IS_3G_ELNA_SUPPORT
const Ul1CustomDynamicElnaData ul1CustomElnaData[UL1CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if !(UL1CUSTOM_DRDI_ENABLE)
   UMTS_ELNA_CUSTOM_DATA(SetDefault)
#else   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 0      
   UMTS_ELNA_CUSTOM_DATA(Set0)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 1
   , UMTS_ELNA_CUSTOM_DATA(Set1)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 2
   , UMTS_ELNA_CUSTOM_DATA(Set2)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 3
   , UMTS_ELNA_CUSTOM_DATA(Set3)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 4
   , UMTS_ELNA_CUSTOM_DATA(Set4)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 5
   , UMTS_ELNA_CUSTOM_DATA(Set5)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 6
   , UMTS_ELNA_CUSTOM_DATA(Set6)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 7
   , UMTS_ELNA_CUSTOM_DATA(Set7)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 8
   , UMTS_ELNA_CUSTOM_DATA(Set8)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 9
   , UMTS_ELNA_CUSTOM_DATA(Set9)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 10
   , UMTS_ELNA_CUSTOM_DATA(Set10)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 11
   , UMTS_ELNA_CUSTOM_DATA(Set11)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 12
   , UMTS_ELNA_CUSTOM_DATA(Set12)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 13
   , UMTS_ELNA_CUSTOM_DATA(Set13)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 14
   , UMTS_ELNA_CUSTOM_DATA(Set14)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 15
   , UMTS_ELNA_CUSTOM_DATA(Set15)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 16
   , UMTS_ELNA_CUSTOM_DATA(Set16)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 17
   , UMTS_ELNA_CUSTOM_DATA(Set17)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 18
   , UMTS_ELNA_CUSTOM_DATA(Set18)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 19
   , UMTS_ELNA_CUSTOM_DATA(Set19)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 20
   , UMTS_ELNA_CUSTOM_DATA(Set20)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 21
   , UMTS_ELNA_CUSTOM_DATA(Set21)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 22
   , UMTS_ELNA_CUSTOM_DATA(Set22)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 23
   , UMTS_ELNA_CUSTOM_DATA(Set23)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 24
   , UMTS_ELNA_CUSTOM_DATA(Set24)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 25
   , UMTS_ELNA_CUSTOM_DATA(Set25)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 26
   , UMTS_ELNA_CUSTOM_DATA(Set26)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 27
   , UMTS_ELNA_CUSTOM_DATA(Set27)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 28
   , UMTS_ELNA_CUSTOM_DATA(Set28)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 29
   , UMTS_ELNA_CUSTOM_DATA(Set29)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 30
   , UMTS_ELNA_CUSTOM_DATA(Set30)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 31
   , UMTS_ELNA_CUSTOM_DATA(Set31)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 32
   , UMTS_ELNA_CUSTOM_DATA(Set32)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 33
   , UMTS_ELNA_CUSTOM_DATA(Set33)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 34
   , UMTS_ELNA_CUSTOM_DATA(Set34)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 35
   , UMTS_ELNA_CUSTOM_DATA(Set35)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 36
   , UMTS_ELNA_CUSTOM_DATA(Set36)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 37
   , UMTS_ELNA_CUSTOM_DATA(Set37)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 38
   , UMTS_ELNA_CUSTOM_DATA(Set38)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 39
   , UMTS_ELNA_CUSTOM_DATA(Set39)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 40
   , UMTS_ELNA_CUSTOM_DATA(Set40)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 41
   , UMTS_ELNA_CUSTOM_DATA(Set41)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 42
   , UMTS_ELNA_CUSTOM_DATA(Set42)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 43
   , UMTS_ELNA_CUSTOM_DATA(Set43)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 44
   , UMTS_ELNA_CUSTOM_DATA(Set44)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 45
   , UMTS_ELNA_CUSTOM_DATA(Set45)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 46
   , UMTS_ELNA_CUSTOM_DATA(Set46)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 47
   , UMTS_ELNA_CUSTOM_DATA(Set47)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 48
   , UMTS_ELNA_CUSTOM_DATA(Set48)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 49
   , UMTS_ELNA_CUSTOM_DATA(Set49)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 50
   , UMTS_ELNA_CUSTOM_DATA(Set50)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 51
   , UMTS_ELNA_CUSTOM_DATA(Set51)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 52
   , UMTS_ELNA_CUSTOM_DATA(Set52)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 53
   , UMTS_ELNA_CUSTOM_DATA(Set53)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 54
   , UMTS_ELNA_CUSTOM_DATA(Set54)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 55
   , UMTS_ELNA_CUSTOM_DATA(Set55)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 56
   , UMTS_ELNA_CUSTOM_DATA(Set56)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 57
   , UMTS_ELNA_CUSTOM_DATA(Set57)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 58
   , UMTS_ELNA_CUSTOM_DATA(Set58)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 59
   , UMTS_ELNA_CUSTOM_DATA(Set59)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 60
   , UMTS_ELNA_CUSTOM_DATA(Set60)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 61
   , UMTS_ELNA_CUSTOM_DATA(Set61)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 62
   , UMTS_ELNA_CUSTOM_DATA(Set62)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 63
   , UMTS_ELNA_CUSTOM_DATA(Set63)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 64
   , UMTS_ELNA_CUSTOM_DATA(Set64)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 65
   , UMTS_ELNA_CUSTOM_DATA(Set65)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 66
   , UMTS_ELNA_CUSTOM_DATA(Set66)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 67
   , UMTS_ELNA_CUSTOM_DATA(Set67)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 68
   , UMTS_ELNA_CUSTOM_DATA(Set68)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 69
   , UMTS_ELNA_CUSTOM_DATA(Set69)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 70
   , UMTS_ELNA_CUSTOM_DATA(Set70)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 71
   , UMTS_ELNA_CUSTOM_DATA(Set71)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 72
   , UMTS_ELNA_CUSTOM_DATA(Set72)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 73
   , UMTS_ELNA_CUSTOM_DATA(Set73)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 74
   , UMTS_ELNA_CUSTOM_DATA(Set74)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 75
   , UMTS_ELNA_CUSTOM_DATA(Set75)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 76
   , UMTS_ELNA_CUSTOM_DATA(Set76)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 77
   , UMTS_ELNA_CUSTOM_DATA(Set77)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 78
   , UMTS_ELNA_CUSTOM_DATA(Set78)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 79
   , UMTS_ELNA_CUSTOM_DATA(Set79)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 80
   , UMTS_ELNA_CUSTOM_DATA(Set80)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 81
   , UMTS_ELNA_CUSTOM_DATA(Set81)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 82
   , UMTS_ELNA_CUSTOM_DATA(Set82)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 83
   , UMTS_ELNA_CUSTOM_DATA(Set83)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 84
   , UMTS_ELNA_CUSTOM_DATA(Set84)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 85
   , UMTS_ELNA_CUSTOM_DATA(Set85)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 86
   , UMTS_ELNA_CUSTOM_DATA(Set86)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 87
   , UMTS_ELNA_CUSTOM_DATA(Set87)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 88
   , UMTS_ELNA_CUSTOM_DATA(Set88)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 89
   , UMTS_ELNA_CUSTOM_DATA(Set89)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 90
   , UMTS_ELNA_CUSTOM_DATA(Set90)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 91
   , UMTS_ELNA_CUSTOM_DATA(Set91)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 92
   , UMTS_ELNA_CUSTOM_DATA(Set92)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 93
   , UMTS_ELNA_CUSTOM_DATA(Set93)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 94
   , UMTS_ELNA_CUSTOM_DATA(Set94)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 95
   , UMTS_ELNA_CUSTOM_DATA(Set95)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 96
   , UMTS_ELNA_CUSTOM_DATA(Set96)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 97
   , UMTS_ELNA_CUSTOM_DATA(Set97)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 98
   , UMTS_ELNA_CUSTOM_DATA(Set98)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 99
   , UMTS_ELNA_CUSTOM_DATA(Set99)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 100
   , UMTS_ELNA_CUSTOM_DATA(Set100)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 101
   , UMTS_ELNA_CUSTOM_DATA(Set101)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 102
   , UMTS_ELNA_CUSTOM_DATA(Set102)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 103
   , UMTS_ELNA_CUSTOM_DATA(Set103)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 104
   , UMTS_ELNA_CUSTOM_DATA(Set104)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 105
   , UMTS_ELNA_CUSTOM_DATA(Set105)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 106
   , UMTS_ELNA_CUSTOM_DATA(Set106)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 107
   , UMTS_ELNA_CUSTOM_DATA(Set107)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 108
   , UMTS_ELNA_CUSTOM_DATA(Set108)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 109
   , UMTS_ELNA_CUSTOM_DATA(Set109)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 110
   , UMTS_ELNA_CUSTOM_DATA(Set110)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 111
   , UMTS_ELNA_CUSTOM_DATA(Set111)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 112
   , UMTS_ELNA_CUSTOM_DATA(Set112)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 113
   , UMTS_ELNA_CUSTOM_DATA(Set113)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 114
   , UMTS_ELNA_CUSTOM_DATA(Set114)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 115
   , UMTS_ELNA_CUSTOM_DATA(Set115)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 116
   , UMTS_ELNA_CUSTOM_DATA(Set116)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 117
   , UMTS_ELNA_CUSTOM_DATA(Set117)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 118
   , UMTS_ELNA_CUSTOM_DATA(Set118)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 119
   , UMTS_ELNA_CUSTOM_DATA(Set119)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 120
   , UMTS_ELNA_CUSTOM_DATA(Set120)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 121
   , UMTS_ELNA_CUSTOM_DATA(Set121)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 122
   , UMTS_ELNA_CUSTOM_DATA(Set122)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 123
   , UMTS_ELNA_CUSTOM_DATA(Set123)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 124
   , UMTS_ELNA_CUSTOM_DATA(Set124)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 125
   , UMTS_ELNA_CUSTOM_DATA(Set125)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 126
   , UMTS_ELNA_CUSTOM_DATA(Set126)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 127
   , UMTS_ELNA_CUSTOM_DATA(Set127)
   #endif
#endif
};
#endif



#if IS_3G_ELNA_IDX_SUPPORT
const Ul1CustomDynamicElnaIdxData ul1CustomElnaIdxData[UL1CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if !(UL1CUSTOM_DRDI_ENABLE)
   UMTS_ELNA_IDX_CUSTOM_DATA(SetDefault)
#else   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 0
   UMTS_ELNA_IDX_CUSTOM_DATA(Set0)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 1
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set1)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 2
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set2)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 3
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set3)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 4
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set4)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 5
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set5)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 6
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set6)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 7
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set7)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 8
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set8)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 9
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set9)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 10
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set10)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 11
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set11)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 12
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set12)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 13
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set13)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 14
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set14)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 15
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set15)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 16
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set16)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 17
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set17)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 18
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set18)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 19
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set19)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 20
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set20)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 21
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set21)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 22
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set22)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 23
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set23)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 24
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set24)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 25
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set25)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 26
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set26)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 27
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set27)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 28
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set28)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 29
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set29)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 30
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set30)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 31
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set31)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 32
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set32)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 33
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set33)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 34
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set34)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 35
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set35)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 36
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set36)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 37
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set37)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 38
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set38)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 39
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set39)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 40
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set40)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 41
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set41)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 42
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set42)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 43
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set43)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 44
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set44)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 45
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set45)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 46
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set46)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 47
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set47)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 48
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set48)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 49
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set49)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 50
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set50)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 51
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set51)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 52
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set52)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 53
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set53)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 54
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set54)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 55
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set55)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 56
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set56)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 57
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set57)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 58
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set58)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 59
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set59)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 60
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set60)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 61
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set61)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 62
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set62)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 63
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set63)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 64
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set64)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 65
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set65)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 66
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set66)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 67
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set67)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 68
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set68)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 69
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set69)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 70
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set70)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 71
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set71)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 72
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set72)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 73
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set73)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 74
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set74)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 75
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set75)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 76
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set76)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 77
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set77)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 78
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set78)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 79
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set79)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 80
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set80)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 81
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set81)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 82
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set82)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 83
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set83)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 84
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set84)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 85
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set85)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 86
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set86)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 87
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set87)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 88
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set88)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 89
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set89)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 90
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set90)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 91
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set91)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 92
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set92)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 93
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set93)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 94
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set94)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 95
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set95)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 96
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set96)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 97
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set97)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 98
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set98)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 99
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set99)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 100
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set100)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 101
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set101)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 102
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set102)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 103
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set103)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 104
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set104)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 105
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set105)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 106
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set106)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 107
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set107)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 108
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set108)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 109
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set109)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 110
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set110)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 111
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set111)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 112
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set112)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 113
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set113)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 114
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set114)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 115
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set115)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 116
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set116)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 117
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set117)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 118
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set118)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 119
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set119)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 120
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set120)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 121
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set121)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 122
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set122)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 123
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set123)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 124
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set124)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 125
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set125)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 126
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set126)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 127
   , UMTS_ELNA_IDX_CUSTOM_DATA(Set127)
   #endif
#endif/*UL1CUSTOM_DRDI_ENABLE*/
};
#endif/*IS_3G_ELNA_IDX_SUPPORT*/

#if (IS_3G_RFEQ_COEF_SUBBAND_SUPPORT)
const Ul1CustomDynamicRfeqCoefData ul1CustomRfeqCoefData[UL1CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if !(UL1CUSTOM_DRDI_ENABLE)
   UMTS_RFEQ_COEF_CUSTOM_DATA(SetDefault)
#else   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 0      
   UMTS_RFEQ_COEF_CUSTOM_DATA(Set0)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 1
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set1)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 2
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set2)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 3
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set3)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 4
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set4)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 5
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set5)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 6
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set6)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 7
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set7)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 8
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set8)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 9
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set9)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 10
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set10)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 11
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set11)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 12
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set12)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 13
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set13)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 14
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set14)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 15
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set15)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 16
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set16)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 17
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set17)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 18
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set18)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 19
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set19)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 20
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set20)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 21
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set21)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 22
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set22)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 23
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set23)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 24
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set24)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 25
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set25)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 26
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set26)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 27
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set27)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 28
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set28)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 29
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set29)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 30
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set30)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 31
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set31)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 32
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set32)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 33
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set33)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 34
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set34)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 35
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set35)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 36
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set36)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 37
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set37)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 38
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set38)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 39
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set39)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 40
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set40)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 41
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set41)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 42
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set42)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 43
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set43)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 44
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set44)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 45
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set45)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 46
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set46)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 47
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set47)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 48
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set48)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 49
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set49)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 50
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set50)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 51
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set51)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 52
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set52)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 53
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set53)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 54
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set54)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 55
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set55)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 56
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set56)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 57
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set57)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 58
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set58)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 59
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set59)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 60
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set60)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 61
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set61)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 62
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set62)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 63
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set63)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 64
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set64)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 65
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set65)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 66
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set66)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 67
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set67)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 68
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set68)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 69
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set69)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 70
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set70)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 71
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set71)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 72
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set72)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 73
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set73)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 74
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set74)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 75
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set75)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 76
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set76)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 77
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set77)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 78
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set78)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 79
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set79)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 80
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set80)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 81
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set81)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 82
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set82)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 83
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set83)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 84
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set84)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 85
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set85)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 86
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set86)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 87
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set87)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 88
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set88)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 89
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set89)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 90
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set90)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 91
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set91)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 92
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set92)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 93
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set93)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 94
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set94)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 95
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set95)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 96
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set96)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 97
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set97)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 98
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set98)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 99
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set99)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 100
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set100)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 101
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set101)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 102
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set102)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 103
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set103)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 104
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set104)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 105
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set105)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 106
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set106)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 107
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set107)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 108
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set108)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 109
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set109)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 110
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set110)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 111
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set111)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 112
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set112)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 113
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set113)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 114
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set114)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 115
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set115)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 116
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set116)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 117
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set117)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 118
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set118)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 119
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set119)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 120
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set120)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 121
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set121)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 122
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set122)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 123
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set123)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 124
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set124)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 125
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set125)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 126
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set126)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 127
   , UMTS_RFEQ_COEF_CUSTOM_DATA(Set127)
   #endif
#endif
};
#endif /*IS_3G_RFEQ_COEF_SUBBAND_SUPPORT*/

#if (IS_3G_RFEQ_REAL_COEF_TEST)
const Ul1CustomDynamicRealRfeqCoefData ul1CustomRealRfeqCoefData[UL1CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if !(UL1CUSTOM_DRDI_ENABLE)
   UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(SetDefault)
#else   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 0      
   UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set0)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 1
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set1)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 2
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set2)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 3
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set3)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 4
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set4)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 5
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set5)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 6
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set6)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 7
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set7)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 8
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set8)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 9
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set9)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 10
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set10)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 11
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set11)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 12
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set12)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 13
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set13)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 14
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set14)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 15
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set15)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 16
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set16)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 17
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set17)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 18
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set18)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 19
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set19)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 20
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set20)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 21
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set21)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 22
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set22)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 23
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set23)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 24
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set24)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 25
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set25)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 26
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set26)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 27
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set27)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 28
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set28)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 29
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set29)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 30
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set30)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 31
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set31)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 32
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set32)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 33
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set33)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 34
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set34)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 35
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set35)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 36
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set36)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 37
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set37)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 38
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set38)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 39
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set39)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 40
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set40)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 41
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set41)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 42
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set42)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 43
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set43)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 44
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set44)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 45
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set45)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 46
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set46)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 47
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set47)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 48
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set48)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 49
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set49)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 50
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set50)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 51
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set51)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 52
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set52)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 53
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set53)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 54
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set54)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 55
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set55)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 56
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set56)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 57
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set57)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 58
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set58)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 59
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set59)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 60
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set60)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 61
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set61)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 62
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set62)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 63
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set63)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 64
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set64)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 65
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set65)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 66
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set66)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 67
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set67)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 68
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set68)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 69
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set69)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 70
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set70)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 71
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set71)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 72
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set72)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 73
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set73)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 74
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set74)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 75
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set75)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 76
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set76)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 77
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set77)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 78
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set78)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 79
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set79)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 80
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set80)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 81
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set81)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 82
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set82)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 83
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set83)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 84
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set84)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 85
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set85)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 86
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set86)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 87
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set87)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 88
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set88)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 89
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set89)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 90
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set90)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 91
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set91)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 92
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set92)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 93
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set93)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 94
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set94)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 95
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set95)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 96
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set96)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 97
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set97)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 98
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set98)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 99
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set99)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 100
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set100)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 101
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set101)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 102
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set102)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 103
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set103)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 104
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set104)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 105
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set105)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 106
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set106)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 107
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set107)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 108
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set108)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 109
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set109)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 110
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set110)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 111
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set111)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 112
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set112)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 113
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set113)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 114
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set114)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 115
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set115)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 116
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set116)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 117
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set117)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 118
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set118)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 119
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set119)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 120
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set120)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 121
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set121)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 122
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set122)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 123
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set123)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 124
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set124)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 125
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set125)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 126
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set126)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 127
   , UMTS_RFEQ_REAL_COEF_CUSTOM_DATA(Set127)
   #endif
#endif
};
#endif /*IS_3G_RFEQ_REAL_COEF_TEST*/

#if IS_3G_FDD_INTERFERENCE_CHECK_SUPPORT
const Ul1CustomDynamicInterferenceFrequencyTable ul1CustomWcdmaInterferenceFrequencyTable[UL1CUSTOM_TOTAL_REAL_SET_NUMS] =
{
#if !(UL1CUSTOM_DRDI_ENABLE)
   UMTS_INTERFERENCE_FREQUENCY_TABLE(SetDefault)
#else   
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 0
   UMTS_INTERFERENCE_FREQUENCY_TABLE(Set0)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 1
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set1)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 2
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set2)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 3
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set3)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 4
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set4)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 5
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set5)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 6
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set6)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 7
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set7)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 8
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set8)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 9
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set9)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 10
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set10)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 11
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set11)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 12
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set12)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 13
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set13)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 14
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set14)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 15
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set15)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 16
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set16)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 17
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set17)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 18
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set18)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 19
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set19)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 20
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set20)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 21
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set21)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 22
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set22)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 23
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set23)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 24
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set24)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 25
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set25)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 26
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set26)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 27
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set27)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 28
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set28)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 29
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set29)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 30
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set30)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 31
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set31)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 32
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set32)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 33
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set33)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 34
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set34)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 35
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set35)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 36
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set36)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 37
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set37)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 38
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set38)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 39
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set39)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 40
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set40)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 41
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set41)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 42
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set42)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 43
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set43)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 44
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set44)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 45
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set45)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 46
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set46)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 47
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set47)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 48
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set48)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 49
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set49)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 50
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set50)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 51
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set51)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 52
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set52)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 53
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set53)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 54
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set54)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 55
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set55)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 56
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set56)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 57
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set57)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 58
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set58)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 59
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set59)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 60
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set60)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 61
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set61)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 62
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set62)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 63
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set63)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 64
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set64)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 65
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set65)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 66
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set66)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 67
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set67)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 68
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set68)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 69
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set69)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 70
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set70)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 71
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set71)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 72
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set72)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 73
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set73)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 74
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set74)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 75
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set75)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 76
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set76)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 77
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set77)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 78
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set78)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 79
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set79)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 80
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set80)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 81
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set81)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 82
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set82)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 83
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set83)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 84
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set84)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 85
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set85)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 86
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set86)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 87
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set87)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 88
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set88)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 89
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set89)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 90
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set90)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 91
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set91)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 92
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set92)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 93
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set93)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 94
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set94)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 95
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set95)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 96
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set96)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 97
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set97)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 98
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set98)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 99
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set99)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 100
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set100)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 101
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set101)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 102
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set102)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 103
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set103)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 104
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set104)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 105
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set105)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 106
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set106)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 107
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set107)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 108
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set108)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 109
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set109)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 110
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set110)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 111
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set111)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 112
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set112)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 113
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set113)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 114
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set114)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 115
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set115)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 116
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set116)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 117
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set117)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 118
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set118)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 119
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set119)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 120
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set120)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 121
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set121)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 122
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set122)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 123
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set123)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 124
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set124)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 125
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set125)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 126
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set126)
   #endif
   #if UL1CUSTOM_TOTAL_REAL_SET_NUMS > 127
   , UMTS_INTERFERENCE_FREQUENCY_TABLE(Set127)
   #endif
#endif /*UL1CUSTOM_DRDI_ENABLE*/
};
#endif /*IS_3G_FDD_INTERFERENCE_CHECK_SUPPORT*/

#endif /*IS_3G_DRDI_SUPPORT*/

#endif /* #ifdef __MTK_TARGET__ */

