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
 *   l1d_rf_dat_typedef.h
 *
 * Project:
 * --------
 *   MT6176
 *
 * Description:
 * ------------
 *   MT6176 2G L1D DAT
 *
 * Author:
 * -------
 *
 *
 *******************************************************************************/

#ifndef  _L1D_RF_DAT_TYPEDEF_H_
#define  _L1D_RF_DAT_TYPEDEF_H_
/* ------------------------------------------------------------------------- */
#include "l1_public_defs.h"

#define L1D_DAT_MAX_STATE_NUM            8  
#define L1D_DAT_FE_CAT_MAX_NUM           2
#define L1D_DAT_MAX_CAT_A_CONFIG_NUM     8  
#define L1D_DAT_MAX_CAT_B_CONFIG_NUM     32 
#define L1D_DAT_MAX_MIPI_EVNET_NUM       8
#define L1D_DAT_MAX_MIPI_DATA_NUM        20

typedef enum
{  L1D_DAT_FE_CAT_A_CONFIG0,
   L1D_DAT_FE_CAT_A_CONFIG1,
   L1D_DAT_FE_CAT_A_CONFIG2,
   L1D_DAT_FE_CAT_A_CONFIG3,
   L1D_DAT_FE_CAT_A_CONFIG4,
   L1D_DAT_FE_CAT_A_CONFIG5,
   L1D_DAT_FE_CAT_A_CONFIG6,
   L1D_DAT_FE_CAT_A_CONFIG7,
   L1D_DAT_FE_CAT_A_NULL,
}L1D_CUSTOM_DAT_FE_CAT_A_CONFIG_IDX_E; 

typedef enum
{  L1D_DAT_FE_CAT_B_CONFIG0,
   L1D_DAT_FE_CAT_B_CONFIG1,
   L1D_DAT_FE_CAT_B_CONFIG2,
   L1D_DAT_FE_CAT_B_CONFIG3,
   L1D_DAT_FE_CAT_B_CONFIG4,
   L1D_DAT_FE_CAT_B_CONFIG5,
   L1D_DAT_FE_CAT_B_CONFIG6,
   L1D_DAT_FE_CAT_B_CONFIG7,
   L1D_DAT_FE_CAT_B_CONFIG8,
   L1D_DAT_FE_CAT_B_CONFIG9,
   L1D_DAT_FE_CAT_B_CONFIG10,  
   L1D_DAT_FE_CAT_B_CONFIG11,
   L1D_DAT_FE_CAT_B_CONFIG12,
   L1D_DAT_FE_CAT_B_CONFIG13,
   L1D_DAT_FE_CAT_B_CONFIG14,
   L1D_DAT_FE_CAT_B_CONFIG15,
   L1D_DAT_FE_CAT_B_CONFIG16,
   L1D_DAT_FE_CAT_B_CONFIG17,
   L1D_DAT_FE_CAT_B_CONFIG18,
   L1D_DAT_FE_CAT_B_CONFIG19,
   L1D_DAT_FE_CAT_B_CONFIG20,   
   L1D_DAT_FE_CAT_B_CONFIG21,
   L1D_DAT_FE_CAT_B_CONFIG22,
   L1D_DAT_FE_CAT_B_CONFIG23,
   L1D_DAT_FE_CAT_B_CONFIG24,
   L1D_DAT_FE_CAT_B_CONFIG25,
   L1D_DAT_FE_CAT_B_CONFIG26,
   L1D_DAT_FE_CAT_B_CONFIG27,
   L1D_DAT_FE_CAT_B_CONFIG28,
   L1D_DAT_FE_CAT_B_CONFIG29,
   L1D_DAT_FE_CAT_B_CONFIG30,
   L1D_DAT_FE_CAT_B_CONFIG31,
   L1D_DAT_FE_CAT_B_NULL,
}L1D_CUSTOM_DAT_FE_CAT_B_CONFIG_IDX_E; 


typedef enum
{
   L1D_DAT_MIPI_TABLE_CONFIG0,
   L1D_DAT_MIPI_TABLE_CONFIG1,
   L1D_DAT_MIPI_TABLE_CONFIG2,
   L1D_DAT_MIPI_TABLE_CONFIG3,
   L1D_DAT_MIPI_TABLE_CONFIG4,
   L1D_DAT_MIPI_TABLE_CONFIG5,
   L1D_DAT_MIPI_TABLE_CONFIG6,
   L1D_DAT_MIPI_TABLE_CONFIG7,
   L1D_DAT_MIPI_TABLE_CONFIG8,
   L1D_DAT_MIPI_TABLE_CONFIG9,
   L1D_DAT_MIPI_TABLE_CONFIG10,
   L1D_DAT_MIPI_TABLE_CONFIG11,
   L1D_DAT_MIPI_TABLE_CONFIG12,
   L1D_DAT_MIPI_TABLE_CONFIG13,
   L1D_DAT_MIPI_TABLE_CONFIG14,
   L1D_DAT_MIPI_TABLE_CONFIG15,   
   L1D_DAT_MIPI_TABLE_CONFIG16,
   L1D_DAT_MIPI_TABLE_CONFIG17,
   L1D_DAT_MIPI_TABLE_CONFIG18,
   L1D_DAT_MIPI_TABLE_CONFIG19,
   L1D_DAT_MIPI_TABLE_CONFIG20,   
   L1D_DAT_MIPI_TABLE_CONFIG21,
   L1D_DAT_MIPI_TABLE_CONFIG22,
   L1D_DAT_MIPI_TABLE_CONFIG23,
   L1D_DAT_MIPI_TABLE_CONFIG24,
   L1D_DAT_MIPI_TABLE_CONFIG25,   
   L1D_DAT_MIPI_TABLE_CONFIG26,
   L1D_DAT_MIPI_TABLE_CONFIG27,
   L1D_DAT_MIPI_TABLE_CONFIG28,
   L1D_DAT_MIPI_TABLE_CONFIG29,
   L1D_DAT_MIPI_TABLE_CONFIG30,
   L1D_DAT_MIPI_TABLE_CONFIG31,  
   L1D_DAT_MIPI_TABLE_NULL,
}L1D_CUSTOM_DAT_MIPI_TBL_IDX_E;


/*** Customer need to review and fill in correct setting ***/

#define  L1D_MIPI_DAT_ON_SetDefault   100 /*QB time*/

/*--------------------------------------------------------------------*/
/* User Notification
   DAT single band indicator defintion:
   We provide the max 35 single band indicator for DAT setting
   Customer only need to fill in the specified bands which you want to enable DAT functionality.
   There is no need to copy all band indocator from BAND_INDICATORX_SetDefault at lte_custom_rf.h
   
   If you don't want to enable DAT for LTE_Band1, you can delete it and fill it as LTE_BandNone.
*/



#define L1D_MIPI_DAT_EVENT(rt,s)                   L1D_##rt##_MIPI_EVENT_##s
#define L1D_MIPI_DAT_DATA(rt,s)                    L1D_##rt##_MIPI_DATA_##s

typedef struct
{
   L1D_CUSTOM_DAT_FE_CAT_A_CONFIG_IDX_E   cat_a_route_num;
   L1D_CUSTOM_DAT_FE_CAT_B_CONFIG_IDX_E   cat_b_route_num;
}L1D_CUSTOM_DAT_FE_ROUTE_MAP_T;

typedef struct
{
   kal_uint32                       bpi_mask;
   kal_uint32                       bpi_value;
   L1D_CUSTOM_DAT_MIPI_TBL_IDX_E    dat_mipi_table_index;
}L1D_CUSTOM_DAT_FE_CAT_A_SETTING_T;

typedef struct
{
   kal_uint32                       bpi_mask;
   kal_uint32                       bpi_value;
   L1D_CUSTOM_DAT_MIPI_TBL_IDX_E    dat_mipi_table_index;
}L1D_CUSTOM_DAT_FE_CAT_B_SETTING_T;

typedef struct
{
   L1D_CUSTOM_DAT_FE_CAT_A_SETTING_T   dat_cat_a_fe_route[L1D_DAT_MAX_CAT_A_CONFIG_NUM];
}L1D_CUSTOM_DAT_FE_CAT_A_T;

typedef struct
{
   L1D_CUSTOM_DAT_FE_CAT_B_SETTING_T   dat_cat_b_fe_route[L1D_DAT_MAX_CAT_B_CONFIG_NUM];
}L1D_CUSTOM_DAT_FE_CAT_B_T;


typedef struct
{
   L1D_CUSTOM_DAT_FE_ROUTE_MAP_T          l1d_dat_route_map[L1D_DAT_MAX_STATE_NUM];
}L1D_CUSTOM_SB_DAT_FE_DATABASE_T;   

#endif /* _L1D_RF_DAT_TYPEDEF_H_ */
