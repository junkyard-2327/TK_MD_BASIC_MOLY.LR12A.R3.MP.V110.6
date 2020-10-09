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
 *   tl1d_custom_rf_dat.h
 *
 * Project:
 * --------
 *   MT6176
 *
 * Description:
 * ------------
 *   MT6176 3GTDD TL1D DAT
 *
 * Author:
 * -------
 *
 *
 *******************************************************************************/

#ifndef  _TL1D_CUSTOM_RF_DAT_Set2_H_
#define  _TL1D_CUSTOM_RF_DAT_Set2_H_
/* ------------------------------------------------------------------------- */

#include "tl1d_custom_rf_dat_struct.h"

/* User Notification
    if you want to use DAT feature, please set TL1D_DAT_ENABLE_SetDefault or TL1D_DAT_ENABLE_Set0 or TL1D_DAT_ENABLE_Set1 as 1*/

#define TL1D_DAT_ENABLE_Set2                                 0

/* User Notification
    For each band TL1D_BANDX_DAT_STATEX_CAT_A(B)_CONFIG_Set0: 
    Allowable CONFIG IDX range for A is TL1D_DAT_FE_CAT_A_CONFIG0 - TL1D_DAT_FE_CAT_A_CONFIG3
    Allowable CONFIG IDX range for B is TL1D_DAT_FE_CAT_B_CONFIG0 - TL1D_DAT_FE_CAT_B_CONFIG7
   
    For those state which is not used for DAT, leave the keywords TL1D_DAT_FE_CAT_A_NULL/TL1D_DAT_FE_CAT_B_NULL
*/

#define TL1D_BAND34_DAT_STATE0_CAT_A_CONFIG_Set2             TL1D_DAT_FE_CAT_A_NULL
#define TL1D_BAND34_DAT_STATE0_CAT_B_CONFIG_Set2             TL1D_DAT_FE_CAT_B_NULL

#define TL1D_BAND34_DAT_STATE1_CAT_A_CONFIG_Set2             TL1D_DAT_FE_CAT_A_NULL
#define TL1D_BAND34_DAT_STATE1_CAT_B_CONFIG_Set2             TL1D_DAT_FE_CAT_B_NULL

#define TL1D_BAND34_DAT_STATE2_CAT_A_CONFIG_Set2             TL1D_DAT_FE_CAT_A_NULL
#define TL1D_BAND34_DAT_STATE2_CAT_B_CONFIG_Set2             TL1D_DAT_FE_CAT_B_NULL

#define TL1D_BAND34_DAT_STATE3_CAT_A_CONFIG_Set2             TL1D_DAT_FE_CAT_A_NULL
#define TL1D_BAND34_DAT_STATE3_CAT_B_CONFIG_Set2             TL1D_DAT_FE_CAT_B_NULL

#define TL1D_BAND34_DAT_STATE4_CAT_A_CONFIG_Set2             TL1D_DAT_FE_CAT_A_NULL
#define TL1D_BAND34_DAT_STATE4_CAT_B_CONFIG_Set2             TL1D_DAT_FE_CAT_B_NULL

#define TL1D_BAND34_DAT_STATE5_CAT_A_CONFIG_Set2             TL1D_DAT_FE_CAT_A_NULL
#define TL1D_BAND34_DAT_STATE5_CAT_B_CONFIG_Set2             TL1D_DAT_FE_CAT_B_NULL

#define TL1D_BAND34_DAT_STATE6_CAT_A_CONFIG_Set2             TL1D_DAT_FE_CAT_A_NULL
#define TL1D_BAND34_DAT_STATE6_CAT_B_CONFIG_Set2             TL1D_DAT_FE_CAT_B_NULL

#define TL1D_BAND34_DAT_STATE7_CAT_A_CONFIG_Set2             TL1D_DAT_FE_CAT_A_NULL
#define TL1D_BAND34_DAT_STATE7_CAT_B_CONFIG_Set2             TL1D_DAT_FE_CAT_B_NULL

#define TL1D_BAND39_DAT_STATE0_CAT_A_CONFIG_Set2             TL1D_DAT_FE_CAT_A_NULL
#define TL1D_BAND39_DAT_STATE0_CAT_B_CONFIG_Set2             TL1D_DAT_FE_CAT_B_NULL

#define TL1D_BAND39_DAT_STATE1_CAT_A_CONFIG_Set2             TL1D_DAT_FE_CAT_A_NULL
#define TL1D_BAND39_DAT_STATE1_CAT_B_CONFIG_Set2             TL1D_DAT_FE_CAT_B_NULL

#define TL1D_BAND39_DAT_STATE2_CAT_A_CONFIG_Set2             TL1D_DAT_FE_CAT_A_NULL
#define TL1D_BAND39_DAT_STATE2_CAT_B_CONFIG_Set2             TL1D_DAT_FE_CAT_B_NULL

#define TL1D_BAND39_DAT_STATE3_CAT_A_CONFIG_Set2             TL1D_DAT_FE_CAT_A_NULL
#define TL1D_BAND39_DAT_STATE3_CAT_B_CONFIG_Set2             TL1D_DAT_FE_CAT_B_NULL

#define TL1D_BAND39_DAT_STATE4_CAT_A_CONFIG_Set2             TL1D_DAT_FE_CAT_A_NULL
#define TL1D_BAND39_DAT_STATE4_CAT_B_CONFIG_Set2             TL1D_DAT_FE_CAT_B_NULL

#define TL1D_BAND39_DAT_STATE5_CAT_A_CONFIG_Set2             TL1D_DAT_FE_CAT_A_NULL
#define TL1D_BAND39_DAT_STATE5_CAT_B_CONFIG_Set2             TL1D_DAT_FE_CAT_B_NULL

#define TL1D_BAND39_DAT_STATE6_CAT_A_CONFIG_Set2             TL1D_DAT_FE_CAT_A_NULL
#define TL1D_BAND39_DAT_STATE6_CAT_B_CONFIG_Set2             TL1D_DAT_FE_CAT_B_NULL

#define TL1D_BAND39_DAT_STATE7_CAT_A_CONFIG_Set2             TL1D_DAT_FE_CAT_A_NULL
#define TL1D_BAND39_DAT_STATE7_CAT_B_CONFIG_Set2             TL1D_DAT_FE_CAT_B_NULL

extern const T_TD_CUSTOMIZATION_DAT_STRUCT_P tl1CustomDATData_Set2;

#endif /* _TL1D_CUSTOM_RF_DAT_Set2_H_ */
