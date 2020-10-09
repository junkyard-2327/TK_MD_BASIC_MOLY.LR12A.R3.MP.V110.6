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
 *  tl1d_custom_rf_dat_struct.h
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

#ifndef  _TL1D_CUSTOM_RF_DAT_H_
#define  _TL1D_CUSTOM_RF_DAT_H_

#include "kal_general_types.h"

/*TITAN DAT*/
#define TL1D_DAT_MAX_STATE_NUM            8
#define TL1D_DAT_FE_CAT_MAX_NUM           2
#define TL1D_DAT_MAX_CAT_A_CONFIG_NUM     4
#define TL1D_DAT_MAX_CAT_B_CONFIG_NUM     8
#define TL1D_DAT_MAX_MIPI_EVNET_NUM       4
#define TL1D_DAT_MAX_MIPI_DATA_NUM        8

#define TL1D_DAT_MIPI                     (0x6)         //FIX not change
#define TL1D_DAT_NULL                     (0xFFFF)     //DO NOT CHANGE

/*-----------------------------------------------------------------------------*/
/*   MIPI Port                                                                 */
/*-----------------------------------------------------------------------------*/
#define TL1D_MIPI_PORT0                   (0 <<12)  /*PORT_NUM<<12*/
#define TL1D_MIPI_PORT1                   (1 <<12)  /*PORT_NUM<<12*/
#define TL1D_MIPI_PORT2                   (2 <<12)  /*PORT_NUM<<12*/
#define TL1D_MIPI_PORT3                   (3 <<12)  /*PORT_NUM<<12*/
#define TL1D_MIPI_PORT4                   (4 <<12)  /*PORT_NUM<<12*/
#define TL1D_MIPI_PORT5                   (5 <<12)  /*PORT_NUM<<12*/
#define TL1D_MIPI_PORT6                   (6 <<12)  /*PORT_NUM<<12*/
#define TL1D_MIPI_PORT7                   (7 <<12)  /*PORT_NUM<<12*/

/*** Customer need to review and fill in correct setting ***/
#define TL1D_MIPI_USID_ANT0              (0 <<12)  /*PORT_NUM<<12*/

#define TL1D_DAT_REG_W                   (1)  //don't change

typedef enum
{
    TL1D_DAT_MIPI_TRX_ON      = 0x0001,
    TL1D_DAT_MIPI_TRX_OFF     = 0x0002,
    TL1D_DAT_MIPI_SWITCH_ONLY = 0x0003,
    TL1D_DAT_MIPI_EVENT_NULL  = 0x0000,
}TL1D_EVENT_TYPE;

typedef enum
{
    TL1D_DAT_FE_CAT_A_CONFIG0,
    TL1D_DAT_FE_CAT_A_CONFIG1,
    TL1D_DAT_FE_CAT_A_CONFIG2,
    TL1D_DAT_FE_CAT_A_CONFIG3,
    TL1D_DAT_FE_CAT_A_NULL,
}TL1D_CUSTOM_DAT_FE_CAT_A_CONFIG_IDX_E;

typedef enum
{   TL1D_DAT_FE_CAT_B_CONFIG0,
    TL1D_DAT_FE_CAT_B_CONFIG1,
    TL1D_DAT_FE_CAT_B_CONFIG2,
    TL1D_DAT_FE_CAT_B_CONFIG3,
    TL1D_DAT_FE_CAT_B_CONFIG4,
    TL1D_DAT_FE_CAT_B_CONFIG5,
    TL1D_DAT_FE_CAT_B_CONFIG6,
    TL1D_DAT_FE_CAT_B_CONFIG7,
    TL1D_DAT_FE_CAT_B_NULL,
}TL1D_CUSTOM_DAT_FE_CAT_B_CONFIG_IDX_E;

typedef enum
{
    TL1D_DAT_MIPI_TABLE_CONFIG0,
    TL1D_DAT_MIPI_TABLE_CONFIG1,
    TL1D_DAT_MIPI_TABLE_CONFIG2,
    TL1D_DAT_MIPI_TABLE_CONFIG3,
    TL1D_DAT_MIPI_TABLE_CONFIG4,
    TL1D_DAT_MIPI_TABLE_CONFIG5,
    TL1D_DAT_MIPI_TABLE_CONFIG6,
    TL1D_DAT_MIPI_TABLE_CONFIG7,
    TL1D_DAT_MIPI_TABLE_NULL,
}TL1D_CUSTOM_DAT_MIPI_TBL_IDX_E;

typedef struct
{
    kal_uint32                            bpi_mask;
    kal_uint32                            bpi_value;
    TL1D_CUSTOM_DAT_FE_CAT_A_CONFIG_IDX_E dat_mipi_config_index;
}TL1D_CUSTOM_DAT_FE_CAT_A_SETTING_T;

typedef struct
{
    kal_uint32                            bpi_mask;
    kal_uint32                            bpi_value;
    TL1D_CUSTOM_DAT_FE_CAT_B_CONFIG_IDX_E dat_mipi_config_index;
}TL1D_CUSTOM_DAT_FE_CAT_B_SETTING_T;

typedef struct
{
    TL1D_CUSTOM_DAT_FE_CAT_A_SETTING_T dat_cat_a_fe_route[TL1D_DAT_MAX_CAT_A_CONFIG_NUM];
}TL1D_CUSTOM_DAT_FE_CAT_A_T;

typedef struct
{
    TL1D_CUSTOM_DAT_FE_CAT_B_SETTING_T dat_cat_b_fe_route[TL1D_DAT_MAX_CAT_B_CONFIG_NUM];
}TL1D_CUSTOM_DAT_FE_CAT_B_T;

typedef struct
{
    kal_uint16 mipi_data_st;                         // mipi data start index
    kal_uint16 mipi_data_sp;                         // mipi data stop index
}TL1D_DAT_MIPI_DATA_STSP;

typedef struct
{
    kal_uint16  mipi_elm_type;     //mipi element type
    TL1D_DAT_MIPI_DATA_STSP  mipi_data_stsp;
    kal_uint16  mipi_evt_type;     //event type
    kal_uint32  mipi_evt_offset;   //event offset
}TL1D_DAT_MIPI_EVENT_TABLE_T ;

typedef struct
{
    kal_uint16 mipi_elm_type;                        // mipi element type
    kal_uint16 mipi_port_sel;                        // 0:for Port0, 1:for Port1
    kal_uint16 mipi_data_seq;                        // data write sequence format
    kal_uint16 mipi_usid;                            // mipi usid
    kal_uint16 mipi_addr;                            // mipi addr
    kal_uint16 mipi_data;                            // mipi data
}TL1D_DAT_MIPI_DATA_TABLE_T;

#define TL1D_BPI_DAT_SETTING(rt,s)                     TDS_##rt##_CONFIG_DATABASE_##s
#define TL1D_MIPI_DAT_EVENT(rt,s)                      TL1D_##rt##_MIPI_EVENT_##s
#define TL1D_MIPI_DAT_DATA(rt,s)                       TL1D_##rt##_MIPI_DATA_##s

typedef struct
{   kal_uint32 datFlag;
    kal_uint16 dat_config_band [2][TL1D_DAT_MAX_STATE_NUM][2];  //B34: 0; B39: 1
}T_TD_CUSTOMIZATION_DAT_CONFIG;

typedef struct
{
    T_TD_CUSTOMIZATION_DAT_CONFIG  TL1D_DAT_CONFIG;

    TL1D_CUSTOM_DAT_FE_CAT_A_T    TL1D_DAT_CATA_BPI_TABLE;
    TL1D_DAT_MIPI_EVENT_TABLE_T   TL1D_DAT_CAT_A_CONFIG0_MIPIEVENT[TL1D_DAT_MAX_MIPI_EVNET_NUM];
    TL1D_DAT_MIPI_EVENT_TABLE_T   TL1D_DAT_CAT_A_CONFIG1_MIPIEVENT[TL1D_DAT_MAX_MIPI_EVNET_NUM];
    TL1D_DAT_MIPI_EVENT_TABLE_T   TL1D_DAT_CAT_A_CONFIG2_MIPIEVENT[TL1D_DAT_MAX_MIPI_EVNET_NUM];
    TL1D_DAT_MIPI_EVENT_TABLE_T   TL1D_DAT_CAT_A_CONFIG3_MIPIEVENT[TL1D_DAT_MAX_MIPI_EVNET_NUM];
    TL1D_DAT_MIPI_DATA_TABLE_T    TL1D_DAT_CAT_A_CONFIG0_MIPIDATA[TL1D_DAT_MAX_MIPI_DATA_NUM];
    TL1D_DAT_MIPI_DATA_TABLE_T    TL1D_DAT_CAT_A_CONFIG1_MIPIDATA[TL1D_DAT_MAX_MIPI_DATA_NUM];
    TL1D_DAT_MIPI_DATA_TABLE_T    TL1D_DAT_CAT_A_CONFIG2_MIPIDATA[TL1D_DAT_MAX_MIPI_DATA_NUM];
    TL1D_DAT_MIPI_DATA_TABLE_T    TL1D_DAT_CAT_A_CONFIG3_MIPIDATA[TL1D_DAT_MAX_MIPI_DATA_NUM];

    TL1D_CUSTOM_DAT_FE_CAT_B_T    TL1D_DAT_CATB_BPI_TABLE;
    TL1D_DAT_MIPI_EVENT_TABLE_T   TL1D_DAT_CAT_B_CONFIG0_MIPIEVENT[TL1D_DAT_MAX_MIPI_EVNET_NUM];
    TL1D_DAT_MIPI_EVENT_TABLE_T   TL1D_DAT_CAT_B_CONFIG1_MIPIEVENT[TL1D_DAT_MAX_MIPI_EVNET_NUM];
    TL1D_DAT_MIPI_EVENT_TABLE_T   TL1D_DAT_CAT_B_CONFIG2_MIPIEVENT[TL1D_DAT_MAX_MIPI_EVNET_NUM];
    TL1D_DAT_MIPI_EVENT_TABLE_T   TL1D_DAT_CAT_B_CONFIG3_MIPIEVENT[TL1D_DAT_MAX_MIPI_EVNET_NUM];
    TL1D_DAT_MIPI_EVENT_TABLE_T   TL1D_DAT_CAT_B_CONFIG4_MIPIEVENT[TL1D_DAT_MAX_MIPI_EVNET_NUM];
    TL1D_DAT_MIPI_EVENT_TABLE_T   TL1D_DAT_CAT_B_CONFIG5_MIPIEVENT[TL1D_DAT_MAX_MIPI_EVNET_NUM];
    TL1D_DAT_MIPI_EVENT_TABLE_T   TL1D_DAT_CAT_B_CONFIG6_MIPIEVENT[TL1D_DAT_MAX_MIPI_EVNET_NUM];
    TL1D_DAT_MIPI_EVENT_TABLE_T   TL1D_DAT_CAT_B_CONFIG7_MIPIEVENT[TL1D_DAT_MAX_MIPI_EVNET_NUM];
    TL1D_DAT_MIPI_DATA_TABLE_T    TL1D_DAT_CAT_B_CONFIG0_MIPIDATA[TL1D_DAT_MAX_MIPI_DATA_NUM];
    TL1D_DAT_MIPI_DATA_TABLE_T    TL1D_DAT_CAT_B_CONFIG1_MIPIDATA[TL1D_DAT_MAX_MIPI_DATA_NUM];
    TL1D_DAT_MIPI_DATA_TABLE_T    TL1D_DAT_CAT_B_CONFIG2_MIPIDATA[TL1D_DAT_MAX_MIPI_DATA_NUM];
    TL1D_DAT_MIPI_DATA_TABLE_T    TL1D_DAT_CAT_B_CONFIG3_MIPIDATA[TL1D_DAT_MAX_MIPI_DATA_NUM];
    TL1D_DAT_MIPI_DATA_TABLE_T    TL1D_DAT_CAT_B_CONFIG4_MIPIDATA[TL1D_DAT_MAX_MIPI_DATA_NUM];
    TL1D_DAT_MIPI_DATA_TABLE_T    TL1D_DAT_CAT_B_CONFIG5_MIPIDATA[TL1D_DAT_MAX_MIPI_DATA_NUM];
    TL1D_DAT_MIPI_DATA_TABLE_T    TL1D_DAT_CAT_B_CONFIG6_MIPIDATA[TL1D_DAT_MAX_MIPI_DATA_NUM];
    TL1D_DAT_MIPI_DATA_TABLE_T    TL1D_DAT_CAT_B_CONFIG7_MIPIDATA[TL1D_DAT_MAX_MIPI_DATA_NUM];
}T_TD_CUSTOMIZATION_DAT_STRUCT;

typedef struct
{
    const T_TD_CUSTOMIZATION_DAT_CONFIG* TL1D_DAT_CONFIG;

    const TL1D_CUSTOM_DAT_FE_CAT_A_T*    TL1D_DAT_CATA_BPI_TABLE;
    const TL1D_DAT_MIPI_EVENT_TABLE_T*   TL1D_DAT_CAT_A_MIPI_EventSet[TL1D_DAT_MAX_CAT_A_CONFIG_NUM];
    const TL1D_DAT_MIPI_DATA_TABLE_T*    TL1D_DAT_CAT_A_MIPI_DataSet[TL1D_DAT_MAX_CAT_A_CONFIG_NUM];

    const TL1D_CUSTOM_DAT_FE_CAT_B_T*    TL1D_DAT_CATB_BPI_TABLE;
    const TL1D_DAT_MIPI_EVENT_TABLE_T*   TL1D_DAT_CAT_B_MIPI_EventSet[TL1D_DAT_MAX_CAT_B_CONFIG_NUM];
    const TL1D_DAT_MIPI_DATA_TABLE_T*    TL1D_DAT_CAT_B_MIPI_DataSet[TL1D_DAT_MAX_CAT_B_CONFIG_NUM];
}T_TD_CUSTOMIZATION_DAT_STRUCT_P;

extern const T_TD_CUSTOMIZATION_DAT_STRUCT_P  tl1CustomDATData_SetDefault;

#if IS_MML1_DRDI_ENABLE
   #if TL1_CUSTOM_TOTAL_SET_NUMS > 0
   extern const T_TD_CUSTOMIZATION_DAT_STRUCT_P tl1CustomDATData_Set0;
   #endif
   #if TL1_CUSTOM_TOTAL_SET_NUMS > 1
   extern const T_TD_CUSTOMIZATION_DAT_STRUCT_P tl1CustomDATData_Set1;
   #endif
   #if TL1_CUSTOM_TOTAL_SET_NUMS > 2
   extern const T_TD_CUSTOMIZATION_DAT_STRUCT_P tl1CustomDATData_Set2;
   #endif
   #if TL1_CUSTOM_TOTAL_SET_NUMS > 3
   extern const T_TD_CUSTOMIZATION_DAT_STRUCT_P tl1CustomDATData_Set3;
   #endif
   #if TL1_CUSTOM_TOTAL_SET_NUMS > 4
   extern const T_TD_CUSTOMIZATION_DAT_STRUCT_P tl1CustomDATData_Set4;
   #endif
   #if TL1_CUSTOM_TOTAL_SET_NUMS > 5
   extern const T_TD_CUSTOMIZATION_DAT_STRUCT_P tl1CustomDATData_Set5;
   #endif
   #if TL1_CUSTOM_TOTAL_SET_NUMS > 6
   extern const T_TD_CUSTOMIZATION_DAT_STRUCT_P tl1CustomDATData_Set6;
   #endif
   #if TL1_CUSTOM_TOTAL_SET_NUMS > 7
   extern const T_TD_CUSTOMIZATION_DAT_STRUCT_P tl1CustomDATData_Set7;
   #endif
   #if TL1_CUSTOM_TOTAL_SET_NUMS > 8
   extern const T_TD_CUSTOMIZATION_DAT_STRUCT_P tl1CustomDATData_Set8;
   #endif
#endif


#endif /*_TL1D_CUSTOM_RF_DAT_H_*/
