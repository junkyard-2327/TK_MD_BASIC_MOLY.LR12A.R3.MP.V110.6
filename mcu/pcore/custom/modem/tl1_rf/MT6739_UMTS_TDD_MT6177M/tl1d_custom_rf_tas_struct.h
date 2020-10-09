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
 *   lte_custom_rf_tas.h
 *
 * Project:
 * --------
 *   MT6179
 *
 * Description:
 * ------------
 *   MT6179 TDSCDMA FDD/TDD TAS
 *
 * Author:
 * -------
 *
 *
 *******************************************************************************/

#ifndef  _TDSCDMA_CUSTOM_RF_TAS_STRUCT_H_
#define  _TDSCDMA_CUSTOM_RF_TAS_STRUCT_H_

#ifdef __TAS_SUPPORT__

#include "kal_general_types.h"
#include "mml1_custom_drdi.h"
#include "mml1_custom_mipi.h"
#include "mml1_drdi.h"


/* ------------------------------------------------------------------------- */
//TAS definition
#define TDSCDMA_TAS_MAX_STATE_NUM                 4  //3GTD ONLY 4 status in TAS2.0
#define TDSCDMA_TAS_MAX_CAT_BPIROUTE_NUM          4

#define TDSCDMA_TAS_MAX_FE_ROUTE_BAND_NUM         2

#define TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE    4
#ifdef TAS_CAT_A_B_MIPI_TIMING_EXPANSION
#define TDSCDMA_TAS_MIPI_TABLE_MAX_DATA_ROUTE     16
#else
#define TDSCDMA_TAS_MIPI_TABLE_MAX_DATA_ROUTE     8
#endif



#define TDSCDMA_TAS_VERSION_1P                    1
#define TDSCDMA_TAS_VERSION_2P                    2

#define  TDD_TAS_MIPI_DEVICE           (0x7)         //FIX not change
#define  TDD_TAS_DEVICE_NULL           (0xFFFF)      //DO NOT CHANGE
#define TDSCDMA_TAS_MIPI_TRX_ON         0x0001
#define TDSCDMA_TAS_MIPI_TRX_OFF        0x0002
#define TDSCDMA_TAS_MIPI_SWITCH_ONLY    0x0003
#define TDSCDMA_TAS_MIPI_EVENT_NULL     0x0000

//only support write now.
#define TDSCDMA_TAS_REG_W               (1)
#define TDSCDMA_TAS_REG_R               (0)

/*-----------------------------------------------------------------------------*/
/*   MIPI Port                                                                 */
/*-----------------------------------------------------------------------------*/
#define  TDSCDMA_MIPI_PORT0              (0<<12)
#define  TDSCDMA_MIPI_PORT1              (1<<12)
#define  TDSCDMA_MIPI_PORT2              (2<<12)
#define  TDSCDMA_MIPI_PORT3              (3<<12)


 typedef enum
 {
    TDSCDMA_TAS_DPDT_NA  = 0,
    TDSCDMA_TAS_DPDT1    = 1,
    TDSCDMA_TAS_DPDT2    = 2,
    TDSCDMA_MAX_TAS_DPDT_NUM,
 }TDSCDMA_CUSTOM_TAS_DPDT_E;

 typedef enum
 {
    TDSCDMA_TAS_MIPI_TABLE_ROUTE0,
    TDSCDMA_TAS_MIPI_TABLE_ROUTE1,
    TDSCDMA_TAS_MIPI_TABLE_ROUTE2,
    TDSCDMA_TAS_MIPI_TABLE_ROUTE3,
    TDSCDMA_TAS_MIPI_TABLE_NULL,
 }TDSCDMA_CUSTOM_TAS_MIPI_TBL_IDX_E;

 typedef enum _TDSCDMA_Band_E
 {
     TDSCDMA_Band34 = 0x22,
     TDSCDMA_Band39 = 0x27,
     TDSCDMA_Band40 = 0x28,
     TDSCDMA_BandNULL = 0xff,
 }TDSCDMA_Band;




 typedef enum
 {
    TDSCDMA_TAS_DISABLE,
    TDSCDMA_TAS_ENABLE,
 }TDSCDMA_CUSTOM_TAS_SWITCH_E;

 typedef enum
 {
    TDSCDMA_TAS_ROUT0,
    TDSCDMA_TAS_ROUT1,
    TDSCDMA_TAS_ROUT2,
    TDSCDMA_TAS_ROUT3,
    TDSCDMA_TAS_ROUT_NULL
 }TDSCDMA_CUSTOM_TAS_ROUT_E;


 typedef enum
 {
    TDSCDMA_TAS_STATE0,
    TDSCDMA_TAS_STATE1,
    TDSCDMA_TAS_STATE2,
    TDSCDMA_TAS_STATE3,
    TDSCDMA_TAS_STATE4,           //careful 3GTD only support 4 state
    TDSCDMA_TAS_STATE5,
    TDSCDMA_TAS_STATE6,
    TDSCDMA_TAS_STATE7,
    TDSCDMA_TAS_STATE_NULL
 }TDSCDMA_CUSTOM_TAS_STATE_E;

 typedef struct
{
   TDSCDMA_CUSTOM_TAS_SWITCH_E    is_tas_real_sim_en;
   TDSCDMA_CUSTOM_TAS_SWITCH_E    is_tas_test_sim_en;
}TDSCDMA_CUSTOM_TAS_SIM_EN_T;

  typedef struct
 {
    TDSCDMA_CUSTOM_TAS_SWITCH_E    tas_enable;
    TDSCDMA_CUSTOM_TAS_STATE_E     tas_init_setting;
 }TDSCDMA_CUSTOM_TAS_FEATURE_OPTION_T;


 typedef struct
 {
    kal_uint32   cat_a_route_num;
    kal_uint32   cat_b_route_num;
    kal_uint32   cat_c_route_num;
 }TDSCDMA_CUSTOM_TAS_FE_ROUTE_MAP_T;


 typedef struct
 {
    kal_uint32                           valid_ant_number;
    kal_uint32                           valid_dpdt_number;
   // kal_uint32                                               is_imd_configure;
    //TDSCDMA_CUSTOM_TAS_ALGORITHM_CC_INFO_T   tas_alg_cc_info;
 }TDSCDMA_CUSTOM_TAS_ALGORITHM_INFO_T;


 typedef struct
 {
    kal_int32              tds_tas_dch_config_param_htp_ration_threshold;
    kal_int32              tds_tas_dch_config_param_rscp_threshold1;
    kal_int32              tds_tas_dch_config_param_rscp_threshold2;
    kal_int32              tds_tas_dch_config_param_sinr_threshold1;
    kal_int32              tds_tas_dch_config_param_sinr_threshold2;
    kal_int32              tds_tas_dch_config_param_sinr_good;
    kal_int32              tds_tas_dch_config_param_delta_fallback;		
    kal_int32              tds_tas_dch_config_param_delta_htp;
    kal_int32              tds_tas_dch_config_param_reserve8;
    kal_int32              tds_tas_dch_config_param_reserve9;	
    kal_int32              tds_tas_dch_config_param_reserve10;
    kal_int32              tds_tas_dch_config_param_reserve11;
 }TDSCDMA_CUSTOM_TAS_DCH_ALGO_INFO_T;
 typedef struct
 {
    kal_int32              tds_tas_idle_config_param_rscp_low_threshold;
    kal_int32              tds_tas_idle_config_param_sinr_low_threshold;
    kal_int32              tds_tas_idle_config_param_timer_threshold;
    kal_int32              tds_tas_idle_config_param_rscp_threshold;
    kal_int32              tds_tas_idle_config_param_sinr_threshold;
    kal_int32              tds_tas_idle_config_param_sinr_good;
    kal_int32              tds_tas_idle_config_param_delta_fallback;		
    kal_int32              tds_tas_idle_config_param_reserve7;
    kal_int32              tds_tas_idle_config_param_reserve8;
    kal_int32              tds_tas_idle_config_param_reserve9;	
    kal_int32              tds_tas_idle_config_param_reserve10;
    kal_int32              tds_tas_idle_config_param_reserve11;
 }TDSCDMA_CUSTOM_TAS_IDLE_ALGO_INFO_T;
#if defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)|| defined(__TX_POWER_OFFSET_SUPPORT__)
 typedef struct
 {
    kal_int32              tds_tas_sar_config_param_delta_htp;
    kal_int32              tds_tas_sar_config_param_rscp_threshold;
    kal_int32              tds_tas_sar_config_param_reserve2;
    kal_int32              tds_tas_sar_config_param_reserve3;
    kal_int32              tds_tas_sar_config_param_reserve4;
    kal_int32              tds_tas_sar_config_param_reserve5;
    kal_int32              tds_tas_sar_config_param_reserve6;				
    kal_int32              tds_tas_sar_config_param_reserve7;
    kal_int32              tds_tas_sar_config_param_reserve8;
    kal_int32              tds_tas_sar_config_param_reserve9;	
    kal_int32              tds_tas_sar_config_param_reserve10;
    kal_int32              tds_tas_sar_config_param_reserve11;
 }TDSCDMA_CUSTOM_TAS_SAR_ALGO_INFO_T;
#endif
 typedef struct
 {
    TDSCDMA_Band                          usage;
    kal_uint32                            tas_state_num;
    TDSCDMA_CUSTOM_TAS_FEATURE_OPTION_T   real_sim_feature;
    TDSCDMA_CUSTOM_TAS_FEATURE_OPTION_T   test_sim_feature;
    TDSCDMA_CUSTOM_TAS_FE_ROUTE_MAP_T     tas_band_fe_setting[TDSCDMA_TAS_MAX_STATE_NUM];
    TDSCDMA_CUSTOM_TAS_ALGORITHM_INFO_T   tas_algo_params;
 }TDSCDMA_CUSTOM_SPLIT_TAS_SETTING_T;


 typedef struct
 {
    kal_uint32                        bpi_mask;
    kal_uint32                        bpi_value;
    TDSCDMA_CUSTOM_TAS_MIPI_TBL_IDX_E tas_mipi_table_index;
 }TDSCDMA_CUSTOM_TAS_FE_SETTING_T;



typedef struct
{
   kal_uint16 mipi_data_st;                         // mipi data start index
   kal_uint16 mipi_data_sp;                         // mipi data stop index
} TDSCDMA_TAS_MIPI_DATA_STSP;


typedef struct
{
   kal_uint16 mipi_elm_type;     //mipi element type
   TDSCDMA_TAS_MIPI_DATA_STSP mipi_data_stsp;
   kal_uint16 mipi_evt_type;     //event type
   kal_uint32 mipi_evt_offset;   //event offset
}TDSCDMA_TAS_MIPI_EVENT_TABLE_T ;

typedef struct
{
   kal_uint16 mipi_elm_type;                        // mipi element type
   kal_uint16 mipi_port_sel;                        // 0:for Port0, 1:for Port1
   kal_uint16 mipi_data_seq;                        // data write sequence format
   kal_uint16 mipi_usid;                            // mipi usid
   kal_uint16 mipi_addr;                            // mipi addr
   kal_uint16 mipi_data;                            // mipi data
}TDSCDMA_TAS_MIPI_DATA_TABLE_T;




#define TDSCDMA_BPI_TAS_SETTING(rt,s)                   TDSCDMA_##rt##_DATABASE_##s
#define TDSCDMA_MIPI_TAS_EVENT(rt,s)                   TDSCDMA_##rt##_MIPI_EVENT_##s
#define TDSCDMA_MIPI_TAS_DATA(rt,s)                    TDSCDMA_##rt##_MIPI_DATA_##s
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
#else
#define TDSCDMA_SB_FE_TAS_SETTING(bs,b,s)                                                                                                     \
{                                                                                                                                             \
   b/*usage*/,                                           \
   b##_##TAS_STATE_NUM##_##s,                           \
   {                                                      \
        b##_##TAS_REAL_SIM_BY_ROUTE_TAS_ENABLE##_##s,     \
        b##_##TAS_REAL_SIM_BY_ROUTE_INIT_SETTING##_##s,   \
    },                                                    \
    {                                                     \
        b##_##TAS_TEST_SIM_BY_ROUTE_TAS_ENABLE##_##s,     \
        b##_##TAS_TEST_SIM_BY_ROUTE_INIT_SETTING##_##s,   \
    },                                                    \
    { /* by band*/                                          \
      { /*tas route state 0*/ b##_##TAS_STATE0_CAT_A_ROUTE##_##s, b##_##TAS_STATE0_CAT_B_ROUTE##_##s, b##_##TAS_STATE0_CAT_B_ROUTE##_##s },   \
      { /*tas route state 1*/ b##_##TAS_STATE1_CAT_A_ROUTE##_##s, b##_##TAS_STATE1_CAT_B_ROUTE##_##s, b##_##TAS_STATE1_CAT_B_ROUTE##_##s },   \
      { /*tas route state 2*/ b##_##TAS_STATE2_CAT_A_ROUTE##_##s, b##_##TAS_STATE2_CAT_B_ROUTE##_##s, b##_##TAS_STATE2_CAT_B_ROUTE##_##s },   \
      { /*tas route state 3*/ b##_##TAS_STATE3_CAT_A_ROUTE##_##s, b##_##TAS_STATE3_CAT_B_ROUTE##_##s, b##_##TAS_STATE3_CAT_B_ROUTE##_##s },   \
   },                                                     \
   {                                                      \
      /*ANT NUM*/  b##_##TAS_ANT_NUMBER##_##s,            \
      /*DPDT NUM*/ b##_##TAS_DPDT_NUMBER##_##s,           \
    },                                                    \
}

#endif
#define TDSCDMA_SB_TAS_CONFIGURE(band_ind,s)               TDSCDMA_SB_FE_TAS_SETTING(band_ind##_##s,band_ind,s)


typedef struct
{
   kal_uint32                                tas_ver;
   TDSCDMA_CUSTOM_TAS_FEATURE_OPTION_T       force_mode_tas_feature;
   TDSCDMA_CUSTOM_TAS_STATE_E                tas_ics_init_setting;
   TDSCDMA_CUSTOM_TAS_SIM_EN_T               tas_sim;
   TDSCDMA_CUSTOM_SPLIT_TAS_SETTING_T        tdscdma_tas_fe_route_db[TDSCDMA_TAS_MAX_FE_ROUTE_BAND_NUM];
   TDSCDMA_CUSTOM_TAS_DCH_ALGO_INFO_T        tds_tas_dch_algo_param;
   TDSCDMA_CUSTOM_TAS_IDLE_ALGO_INFO_T       tds_tas_idle_algo_param;
#if defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)|| defined(__TX_POWER_OFFSET_SUPPORT__)
   TDSCDMA_CUSTOM_TAS_SAR_ALGO_INFO_T        tds_tas_sar_algo_param;
#endif
}TDSCDMA_CUSTOM_TAS_FE_ROUTE_DATABASE_T;

typedef struct
{
    TDSCDMA_CUSTOM_TAS_FE_ROUTE_DATABASE_T tdbandsetting;

    TDSCDMA_CUSTOM_TAS_FE_SETTING_T        Td_CatA_BpiSetting[TDSCDMA_TAS_MAX_CAT_BPIROUTE_NUM];
    TDSCDMA_TAS_MIPI_EVENT_TABLE_T         Td_CatA_MIPI_Rout0_EventSetting[TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE];
    TDSCDMA_TAS_MIPI_EVENT_TABLE_T         Td_CatA_MIPI_Rout1_EventSetting[TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE];
    TDSCDMA_TAS_MIPI_EVENT_TABLE_T         Td_CatA_MIPI_Rout2_EventSetting[TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE];
    TDSCDMA_TAS_MIPI_EVENT_TABLE_T         Td_CatA_MIPI_Rout3_EventSetting[TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE];

    TDSCDMA_TAS_MIPI_DATA_TABLE_T          Td_CatA_MIPI_Rout0_dataSetting[TDSCDMA_TAS_MIPI_TABLE_MAX_DATA_ROUTE];
    TDSCDMA_TAS_MIPI_DATA_TABLE_T          Td_CatA_MIPI_Rout1_dataSetting[TDSCDMA_TAS_MIPI_TABLE_MAX_DATA_ROUTE];
    TDSCDMA_TAS_MIPI_DATA_TABLE_T          Td_CatA_MIPI_Rout2_dataSetting[TDSCDMA_TAS_MIPI_TABLE_MAX_DATA_ROUTE];
    TDSCDMA_TAS_MIPI_DATA_TABLE_T          Td_CatA_MIPI_Rout3_dataSetting[TDSCDMA_TAS_MIPI_TABLE_MAX_DATA_ROUTE];

    TDSCDMA_CUSTOM_TAS_FE_SETTING_T        Td_CatB_BpiSetting[TDSCDMA_TAS_MAX_CAT_BPIROUTE_NUM];
    TDSCDMA_TAS_MIPI_EVENT_TABLE_T         Td_CatB_MIPI_Rout0_EventSetting[TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE];
    TDSCDMA_TAS_MIPI_EVENT_TABLE_T         Td_CatB_MIPI_Rout1_EventSetting[TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE];
    TDSCDMA_TAS_MIPI_EVENT_TABLE_T         Td_CatB_MIPI_Rout2_EventSetting[TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE];
    TDSCDMA_TAS_MIPI_EVENT_TABLE_T         Td_CatB_MIPI_Rout3_EventSetting[TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE];

    TDSCDMA_TAS_MIPI_DATA_TABLE_T          Td_CatB_MIPI_Rout0_dataSetting[TDSCDMA_TAS_MIPI_TABLE_MAX_DATA_ROUTE];
    TDSCDMA_TAS_MIPI_DATA_TABLE_T          Td_CatB_MIPI_Rout1_dataSetting[TDSCDMA_TAS_MIPI_TABLE_MAX_DATA_ROUTE];
    TDSCDMA_TAS_MIPI_DATA_TABLE_T          Td_CatB_MIPI_Rout2_dataSetting[TDSCDMA_TAS_MIPI_TABLE_MAX_DATA_ROUTE];
    TDSCDMA_TAS_MIPI_DATA_TABLE_T          Td_CatB_MIPI_Rout3_dataSetting[TDSCDMA_TAS_MIPI_TABLE_MAX_DATA_ROUTE];

}T_TD_CUSTOMIZATION_TAS_STRUCT;

typedef struct
{
    const TDSCDMA_CUSTOM_TAS_FE_ROUTE_DATABASE_T* TD_tas_commonsetting_P;
    const TDSCDMA_CUSTOM_TAS_FE_SETTING_T*   TDSCDMA_TAS_CATA_BPI_TABLE;
    const TDSCDMA_TAS_MIPI_EVENT_TABLE_T *   Td_CatA_MIPI_EventSetting[TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE];
    const TDSCDMA_TAS_MIPI_DATA_TABLE_T  *   Td_CatA_MIPI_dataSetting[TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE];

    const TDSCDMA_CUSTOM_TAS_FE_SETTING_T*   TDSCDMA_TAS_CATB_BPI_TABLE;
    const TDSCDMA_TAS_MIPI_EVENT_TABLE_T *   Td_CatB_MIPI_EventSetting[TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE];
    const TDSCDMA_TAS_MIPI_DATA_TABLE_T  *   Td_CatB_MIPI_dataSetting[TDSCDMA_TAS_MIPI_TABLE_MAX_EVENT_ROUTE];

}T_TD_CUSTOMIZATION_TAS_STRUCT_P;

extern const T_TD_CUSTOMIZATION_TAS_STRUCT_P* tl1CustomTASData_drdi_point[];
extern const T_TD_CUSTOMIZATION_TAS_STRUCT_P tl1CustomTASData_SetDefault;

#if IS_MML1_DRDI_ENABLE
   #if TL1_CUSTOM_TOTAL_SET_NUMS > 0
   extern const T_TD_CUSTOMIZATION_TAS_STRUCT_P tl1CustomTASData_Set0;
   #endif
   #if TL1_CUSTOM_TOTAL_SET_NUMS > 1
   extern const T_TD_CUSTOMIZATION_TAS_STRUCT_P tl1CustomTASData_Set1;
   #endif
   #if TL1_CUSTOM_TOTAL_SET_NUMS > 2
   extern const T_TD_CUSTOMIZATION_TAS_STRUCT_P tl1CustomTASData_Set2;
   #endif
   #if TL1_CUSTOM_TOTAL_SET_NUMS > 3
   extern const T_TD_CUSTOMIZATION_TAS_STRUCT_P tl1CustomTASData_Set3;
   #endif
   #if TL1_CUSTOM_TOTAL_SET_NUMS > 4
   extern const T_TD_CUSTOMIZATION_TAS_STRUCT_P tl1CustomTASData_Set4;
   #endif
   #if TL1_CUSTOM_TOTAL_SET_NUMS > 5
   extern const T_TD_CUSTOMIZATION_TAS_STRUCT_P tl1CustomTASData_Set5;
   #endif
   #if TL1_CUSTOM_TOTAL_SET_NUMS > 6
   extern const T_TD_CUSTOMIZATION_TAS_STRUCT_P tl1CustomTASData_Set6;
   #endif
   #if TL1_CUSTOM_TOTAL_SET_NUMS > 7
   extern const T_TD_CUSTOMIZATION_TAS_STRUCT_P tl1CustomTASData_Set7;
   #endif
   #if TL1_CUSTOM_TOTAL_SET_NUMS > 8
   extern const T_TD_CUSTOMIZATION_TAS_STRUCT_P tl1CustomTASData_Set8;
   #endif
#endif


#endif /* _TDSCDMA_CUSTOM_RF_TAS_SetDefault_H_ */
#endif
