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
 *   l1d_rf_tas_typedef.h
 *
 * Project:
 * --------
 *   MT6179
 *
 * Description:
 * ------------
 *   MT6179 2G L1D TAS
 *
 * Author:
 * -------
 *
 *
 *******************************************************************************/

#ifndef  _L1D_RF_TAS_TYPEDEF_H_
#define  _L1D_RF_TAS_TYPEDEF_H_
/* ------------------------------------------------------------------------- */
#include "l1_public_defs.h"
   #if IS_2G_TAS_INHERIT_4G_ANT
      #ifdef L1_SIM
      #else
#include "el1d_rf_public.h"
#include "el1d_rf_def.h"
      #endif
   #endif

   #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
#define L1D_TAS_MAX_STATE_NUM            4
   #else
#define L1D_TAS_MAX_STATE_NUM            3
   #endif
#define L1D_TAS_FE_CAT_MAX_NUM           3
#define L1D_TAS_MAX_CAT_A_CONFIG_NUM      8
#define L1D_TAS_MAX_CAT_B_CONFIG_NUM      8
#define L1D_TAS_MAX_CAT_C_CONFIG_NUM      1
#define L1D_TAS_MAX_FE_CONFIG_NUM         12
#define L1D_TAS_MAX_MIPI_EVNET_NUM       8
#define L1D_TAS_MAX_MIPI_DATA_NUM        20
   #ifdef L1_SIM
typedef enum{dummy=0xffff} LTE_Band;
#define L1D_TAS_INHERIT_LTE_BAND_END     0
#define L1D_TAS_INHERIT_LTE_BAND_MAX_NUM 255
#define L1D_TAS_INHERIT_LTE_BAND_BITMAP_NUM ((255+1)/32)/* (255+1)/32 = 8 words */
#define L1D_TAS_INHERIT_LTE_BAND_MAX_UL_CC_NUM 2
   #else
#define L1D_TAS_INHERIT_LTE_BAND_END     LTE_BandNone
#define L1D_TAS_INHERIT_LTE_BAND_MAX_NUM LTE_Band_Supported_Max
#define L1D_TAS_INHERIT_LTE_BAND_BITMAP_NUM ((L1D_TAS_INHERIT_LTE_BAND_MAX_NUM+1)/32)/* (255+1)/32 = 8 words */
#define L1D_TAS_INHERIT_LTE_BAND_MAX_UL_CC_NUM LTE_CA_MAX_UL_CC_NUM
      #endif
#define L1D_TAS_INHERIT_LTE_ANT(b,s)     L1D_TAS_INHERIT_LTE_ANT_##b##_##s

typedef enum
{	L1D_TAS_FE_CONFIG0,
   L1D_TAS_FE_CONFIG1,
   L1D_TAS_FE_CONFIG2,
   L1D_TAS_FE_CONFIG3,
   L1D_TAS_FE_CONFIG4,
   L1D_TAS_FE_CONFIG5,
   L1D_TAS_FE_CONFIG6,
   L1D_TAS_FE_CONFIG7,
   L1D_TAS_FE_NULL,
}L1D_CUSTOM_TAS_FE_CONGIF_IDX_E;


typedef enum
{
   L1D_TAS_MIPI_TABLE_CONFIG0,
   L1D_TAS_MIPI_TABLE_CONFIG1,
   L1D_TAS_MIPI_TABLE_CONFIG2,
   L1D_TAS_MIPI_TABLE_CONFIG3,
   L1D_TAS_MIPI_TABLE_CONFIG4,
   L1D_TAS_MIPI_TABLE_CONFIG5,
   L1D_TAS_MIPI_TABLE_CONFIG6,
   L1D_TAS_MIPI_TABLE_CONFIG7,
   L1D_TAS_MIPI_TABLE_NULL,
}L1D_CUSTOM_TAS_MIPI_TBL_IDX_E;



/*** Customer need to review and fill in correct setting ***/

#define  L1D_MIPI_TAS_ON_SetDefault   100 /*QB time*/

/*--------------------------------------------------------------------*/
/* User Notification
   TAS single band indicator defintion:
   We provide the max 35 single band indicator for TAS setting
   Customer only need to fill in the specified bands which you want to enable TAS functionality.
   There is no need to copy all band indocator from BAND_INDICATORX_SetDefault at lte_custom_rf.h
   
   If you don't want to enable TAS for LTE_Band1, you can delete it and fill it as LTE_BandNone.
*/



#define L1D_MIPI_TAS_EVENT(rt,s)                   L1D_##rt##_MIPI_EVENT_##s
#define L1D_MIPI_TAS_DATA(rt,s)                    L1D_##rt##_MIPI_DATA_##s


typedef struct
{
   kal_uint32   tas_enable;
   kal_uint32   tas_init_setting;
}L1D_CUSTOM_TAS_FEATURE_OPTION_T;

typedef struct
{
   L1D_CUSTOM_TAS_FEATURE_OPTION_T   force_mode_tas_feature;
   L1D_CUSTOM_TAS_FEATURE_OPTION_T   real_sim_tas_feature;
   L1D_CUSTOM_TAS_FEATURE_OPTION_T   test_sim_tas_feature;
}L1D_CUSTOM_TAS_FEATURE_ENABLE_T;

typedef struct
{
   L1D_CUSTOM_TAS_FE_CONGIF_IDX_E   cat_a_config_num;
   L1D_CUSTOM_TAS_FE_CONGIF_IDX_E   cat_b_config_num;
   L1D_CUSTOM_TAS_FE_CONGIF_IDX_E   cat_c_config_num;
}L1D_CUSTOM_TAS_FE_CONGIF_MAP_T;

typedef struct
{
   FrequencyBand                     usage;
   kal_uint32                        tas_state_num;
   L1D_CUSTOM_TAS_FEATURE_ENABLE_T   tas_feature_enable;
   L1D_CUSTOM_TAS_FE_CONGIF_MAP_T     tas_fe_setting[L1D_TAS_MAX_STATE_NUM];

}L1D_CUSTOM_SPLIT_TAS_SETTING_T;   

typedef struct
{
   kal_uint32                     bpi_mask;
   kal_uint32                     bpi_value;
   L1D_CUSTOM_TAS_FE_CONGIF_IDX_E tas_mipi_table_index;
}L1D_CUSTOM_TAS_FE_SETTING_T;

typedef struct
{
   L1D_CUSTOM_TAS_FE_SETTING_T   tas_cat_a_fe_config[L1D_TAS_MAX_CAT_A_CONFIG_NUM];
}L1D_CUSTOM_TAS_FE_CAT_A_T;

typedef struct
{
   L1D_CUSTOM_TAS_FE_SETTING_T   tas_cat_b_fe_config[L1D_TAS_MAX_CAT_B_CONFIG_NUM];
}L1D_CUSTOM_TAS_FE_CAT_B_T;

typedef struct
{
   L1D_CUSTOM_TAS_FE_SETTING_T   tas_cat_c_fe_config[L1D_TAS_MAX_CAT_C_CONFIG_NUM];
}L1D_CUSTOM_TAS_FE_CAT_C_T;

typedef struct
{
   L1D_CUSTOM_TAS_STATE_E                 l1d_tas_state_num;
   L1D_CUSTOM_TAS_SWITCH_E                l1d_tas_real_sim_tas_enable;
   L1D_CUSTOM_TAS_STATE_E                 l1d_tas_real_sim_init_setting;
   L1D_CUSTOM_TAS_SWITCH_E                l1d_tas_test_sim_tas_enable;
   L1D_CUSTOM_TAS_STATE_E                 l1d_tas_test_sim_init_setting;

}L1D_CUSTOM_SB_TAS_DATABASE_T;   
typedef struct
{
   L1D_CUSTOM_TAS_FE_CONGIF_MAP_T          l1d_tas_config_map[L1D_TAS_MAX_STATE_NUM];
}L1D_CUSTOM_SB_TAS_FE_DATABASE_T;   

typedef struct
{
   L1D_CUSTOM_TAS_VER_E             l1d_tas_ver;
   L1D_CUSTOM_TAS_SWITCH_E          l1d_tas_force_enable;
   L1D_CUSTOM_TAS_STATE_E           l1d_tas_force_init_ant_state;
   L1D_CUSTOM_TAS_STATE_E           l1d_tas_ics_init_ant_state;
   L1D_CUSTOM_TAS_STATE_E           l1d_tas_enable_on_real_sim;
   L1D_CUSTOM_TAS_STATE_E           l1d_tas_enable_on_test_sim;
   L1D_CUSTOM_SB_TAS_DATABASE_T     l1d_tas_sb_db[FrequencyBandCount];
}L1D_CUSTOM_TAS_DATABASE_T;

typedef struct
{
   L1D_CUSTOM_SB_TAS_FE_DATABASE_T     l1d_tas_sb_fe_db[FrequencyBandCount];
}L1D_CUSTOM_TAS_FE_DATABASE_T;


#define L1D_CUSTOM_TAS_DATABASE_COMMON_SETTING(s)  \
         L1D_TAS_VERSION_##s,                      \
         L1D_TAS_FORCE_ENABLE_##s,                 \
         L1D_TAS_FORCE_INIT_SETTING_##s,           \
         L1D_TAS_ICS_INIT_ANT_STATE_##s,           \
         L1D_TAS_ENABLE_ON_REAL_SIM_##s,           \
         L1D_TAS_ENABLE_ON_TEST_SIM_##s

#define L1D_SB_TAS_CONFIGURE(band_ind,s)               L1D_CUSTOM_SB_TAS_DATABASE(band_ind##_##s,band_ind,s)

#define L1D_CUSTOM_SB_TAS_DATABASE(bs,b,s) \
   {\
      b##_##TAS_STATE_NUM##_##s,\
      b##_##TAS_REAL_SIM_TAS_ENABLE##_##s,\
      b##_##TAS_REAL_SIM_INIT_SETTING##_##s,\
      b##_##TAS_TEST_SIM_TAS_ENABLE##_##s,\
      b##_##TAS_TEST_SIM_INIT_SETTING##_##s,\
      b##_##TAS_ANT_NUMBER##_##s,\
      b##_##TAS_DPDT_NUMBER##_##s,\
   }
#define L1D_SB_TAS_FE_CONFIGURE(band_ind,s)               L1D_CUSTOM_SB_TAS_FE_DATABASE(band_ind##_##s,band_ind,s)   
#define L1D_CUSTOM_SB_TAS_FE_DATABASE(bs,b,s) \
   {\
   }
#endif /* _L1D_RF_TAS_TYPEDEF_H_ */
