/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/
/*****************************************************************************
* 
* FILE NAME   :l4c_cval_struct.h 
*
* DESCRIPTION :
*
*
* HISTORY     :
*     See Log at end of file
*
*****************************************************************************/
/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#ifndef _L4C_CVAL_STRUCT_H
#define _L4C_CVAL_STRUCT_H

#include "kal_public_api.h"
#include "kal_public_defs.h"
#include "l4c_common_enum_public.h" // for NUM_TX_POWER_LEVELS
#ifdef __ATERFTX_ERROR_HANDLE_ENHANCE__

#include "ps_public_enum.h"
#endif

/*****************************************************************************
* STRUCT
*   l4c_c2k_efun_state_ind_struct
*
* DESCRIPTIONS
*   This message is sent efun_state to MD3.
*
* PARAMETERS
*   LOCAL_PARA_HDR
*   efun_state - current efun_state
*****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 efun_state;
}l4c_c2k_efun_state_ind_struct;

/*****************************************************************************
* STRUCT
*   l4c_val_mdstatus_flow_version_ind_struct
*
* DESCRIPTIONS
*   This message is sent emdstatus flow version to MD3.
*
* PARAMETERS
*   LOCAL_PARA_HDR
*   flow_version - new emdstatus flow version
*****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 flow_version;
}l4c_val_mdstatus_flow_version_ind_struct;

typedef enum
{
    MD_IS_TK = 0,
    MD_IS_BSP = 1
} tk_bsp_ind_enum;

typedef enum
{
    C2K_1X_LOOP_BACK_CALL_STOP,
    C2K_1X_LOOP_BACK_CALL_START
} c2k_1x_loop_back_call_mode_enum;

/*****************************************************************************
* STRUCT
*   l4c_val_mdstatus_tk_bsp_ind_struct
*
* DESCRIPTIONS
*   This message is sent now MD is TK or BSP info to MD3.
*
* PARAMETERS
*   LOCAL_PARA_HDR
*   tk_bsp - tk_bsp_ind_enum, TK or BSP
*****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    tk_bsp_ind_enum   tk_bsp;
}l4c_val_mdstatus_tk_bsp_ind_struct;

/*****************************************************************************
* STRUCT
*   l4c_c2k_ims_reg_status_update_ind_struct
*
* DESCRIPTIONS
*   This message is to update the IMS registration state to MD3
*
* PARAMETERS
*   LOCAL_PARA_HDR
*   is_ims_registred: KAL_TRUE(Registered), KAL_FALSE(Not registered)
*****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool is_ims_registred;
}l4c_c2k_ims_reg_status_update_ind_struct;

/*****************************************************************************
* STRUCT
*   l4c_c2k_roaming_setting_sync_req_struct
*
* DESCRIPTIONS
*   This message is to update the roaming setting to MD1
*
* PARAMETERS
*   LOCAL_PARA_HDR
*   RoamingSettingBitMap
*****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    /** Roaming setting bitmap */
	/* 0x01 Allow Voice Domestic Roaming*/
	/* 0x02 Allow Data Domestic Roaming*/
	/* 0x04 Allow Voice International Roaming*/
	/* 0x08 Allow Date International Roaming*/
	/* 0x10 Allow LTE Data Roaming*/
    kal_uint8 RoamingSettingBitMap;
}l4c_c2k_roaming_setting_sync_req_struct;

/*****************************************************************************
* STRUCT
*   l4c_c2k_1x_loop_back_call_req_struct
*
* DESCRIPTIONS
*   This message is to request 1x loop back call operation
*
* PARAMETERS
*   LOCAL_PARA_HDR
*   operation_mode: 1(dial), 0(end)
*****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                           src_id;
    c2k_1x_loop_back_call_mode_enum     operation_mode;
}l4c_c2k_1x_loop_back_call_req_struct;

/*****************************************************************************
* STRUCT
*   l4c_c2k_1x_loop_back_call_cnf_struct
*
* DESCRIPTIONS
*   This message is to send 1x loop back call operaton result to MD1 from MD3
*
* PARAMETERS
*   LOCAL_PARA_HDR
*   result
*****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8   src_id;
    kal_bool    result;
}l4c_c2k_1x_loop_back_call_cnf_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 rat;  /*0 for 1x,1 for do, 2 for both*/
    kal_bool  monitoring_req;    
}l4c_c2k_get_ant_info_req_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 rat;/*0 for 1x,1 for do, 2 for both*/
    kal_uint8 antenna_index;   
}l4c_c2k_get_ant_info_cnf_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 rat;/*0 for 1x,1 for do, 2 for both*/
    kal_uint8 antenna_index; 
}l4c_c2k_get_ant_info_ind_struct;

/*****************************************************************************
* STRUCT
*   l4c_c2k_txrx_active_time_req_struct
*
* DESCRIPTIONS
*   This message is to send C2K Tx Rx active time request to MD3 from MD1
*
* PARAMETERS
*   LOCAL_PARA_HDR
*   result
*****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8	  src_id;		
}l4c_c2k_txrx_active_time_req_struct;

/*****************************************************************************
* STRUCT
*   l4c_c2k_txrx_active_time_cnf_struct
*
* DESCRIPTIONS
*   This message is to send C2K Tx Rx active time result to MD1 from MD3
*
* PARAMETERS
*   LOCAL_PARA_HDR
*   result
*****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8	  src_id;		
    kal_uint32    tx_mode_time_ms[NUM_TX_POWER_LEVELS];
    kal_uint32    rx_mode_time_ms;
}l4c_c2k_txrx_active_time_cnf_struct;


#ifdef __EM_MAX_TX_POWER_SUPPORT__

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    kal_uint8 rat;                 /*0 for 1x, 1 for DO, 2 for both*/
    kal_uint8 band;             
    kal_int16 max_tx_power_offset;
}l4c_c2k_cl1_set_max_tx_power_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    kal_int8 result;
}l4c_c2k_cl1_set_max_tx_power_cnf_struct;

#endif


typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 signal_type; /* (6 - 1X_RSSI, 7 - 1X_ECIO, 8 - EVDO_RSSI, 9 - EVDO_ECIO) */
    kal_uint8 mode; /* 0 - Disable, 1 - Enabled */
    kal_int32 upper_threshold;
    kal_int32 lower_threshold;
    kal_uint8 timer;
} l4c_val_set_pwl_thrhd_req_struct;


typedef struct {
    LOCAL_PARA_HDR
    kal_bool result;
} l4c_val_set_pwl_thrhd_cnf_struct;


typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 signal_type;
    kal_uint8 signal_status; /* 0 - bad signal, 1 -  good signal, 2 - fair signal (signal level between upper threshold & lower threshold), 3 - Invalid signal */
    kal_int32 signal_value;
}  val_l4c_pwr_level_ind_struct;

/*****************************************************************************
* STRUCT
*   l4c_val_c2k_rf_test_req_struct
*
* DESCRIPTIONS
*   This message is to send C2K RF test request to MD3 from MD1
*
* PARAMETERS
*   LOCAL_PARA_HDR
*   result
*****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8   src_id;
    kal_uint8   mode;
    kal_uint8   band;
    kal_uint8   txPower;
    kal_uint16  channel;
    kal_uint8   reductionLevel_Ant0;
    kal_uint8   reductionLevel_Ant1;
}l4c_val_c2k_rf_test_req_struct;

/*****************************************************************************
* STRUCT
*   l4c_val_c2k_rf_test_cnf_struct
*
* DESCRIPTIONS
*   This message is to send C2K RF test cnf to MD1 from MD3
*
* PARAMETERS
*   LOCAL_PARA_HDR
*   result
*****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8   src_id;
    kal_bool    result;
#ifdef __ATERFTX_ERROR_HANDLE_ENHANCE__
    ps_cause_enum cause;
#endif
    kal_uint8   mode;
    kal_int16   main_rssi;
    kal_int16   div_rssi;
}l4c_val_c2k_rf_test_cnf_struct;

/*****************************************************************************
* STRUCT
*   l4c_val_cs_service_ind_struct
*
* DESCRIPTIONS
*   This message is sent to inform MD1 if the C2K CS service available to use or not
*
* PARAMETERS
*   LOCAL_PARA_HDR
*   tk_bsp - tk_bsp_ind_enum, TK or BSP
*****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool    is_cs_service_available;
}l4c_val_cs_service_ind_struct;

/*****************************************************************************
* STRUCT
*   l4c_val_ecbm_mode_ind_struct
*
* DESCRIPTIONS
*   This message is sent to inform MD1 C2K ECBM on/off
*
* PARAMETERS
*****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool    is_c2k_ecbm_on;
}l4c_val_ecbm_mode_ind_struct;

/*****************************************************************************
* STRUCT
*   l4c_c2k_cell_info_ind_struct
*
* DESCRIPTIONS
*   This message is sent to inform MD1 C2K Cell Info
*
* PARAMETERS
*****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8    num_of_cell;
    kal_uint16   nid;
    kal_uint16   sid;
    kal_uint16   bs_id;
    kal_int32    bs_long;
    kal_int32    bs_lat;
    kal_int16    rssi_1xRTT;
    kal_int16    ecio_1xRTT;
    kal_uint8    rssi_EVDO;
    kal_int16    ecio_EVDO;
    kal_uint16   sinr_EVDO;
}l4c_c2k_cell_info_ind_struct;

/*****************************************************************************
* STRUCT
*   l4c_val_sml_status_ind_struct
*
* DESCRIPTIONS
*   This message is sent to inform is card locked by SIM ME Lock mechanism
*
* PARAMETERS
*****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool    is_simme_locked;
}l4c_val_sml_status_ind_struct;

#ifdef __CARRIER_RESTRICTION__
/* General lock structure*/
typedef struct
{
    kal_uint8   num;
}smu_cval_carrier_match_category_meta_struct;

typedef struct
{
    smu_cval_carrier_match_category_meta_struct   cat[5];
    kal_uint8   code_cat_n[5*3];
    kal_uint8   code_cat_spn[5*23];
    kal_uint8   code_cat_imsi_prefix[5*4];
    kal_uint8   code_cat_gid1[5*4];
    kal_uint8   code_cat_gid2[5*4];
}smu_cval_carrier_restriction_list_struct;

/*****************************************************************************
* STRUCT
*   smu_cval_carrier_restriction_sync_ind_struct
*
* DESCRIPTIONS
*   This message is sent to inform CVAL the carrier data
*
* PARAMETERS
*****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8   slot_id;
    smu_cval_carrier_restriction_list_struct   black_list;
    smu_cval_carrier_restriction_list_struct   white_list;
    kal_uint8   allow_all;  /* 0 - if white list is empty, 1 - if white list is not empty */
    kal_uint8   carrier_rest_state; /* 0 - Enabled 1 - Disabled */
    kal_uint8   multi_sim_policy;
    kal_uint8   allowed_carriers_prioritized;
}smu_cval_carrier_restriction_sync_ind_struct;

/*****************************************************************************
* STRUCT
*   smu_cval_carrier_restriction_status_ind_struct
*
* DESCRIPTIONS
*   This message is sent to inform CVAL the carrier status, SMU->CVAL
*
* PARAMETERS
*****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8   slot_id;
    kal_uint8   carrier_rest_status;  /* 0 - READY 1 - CARD RESTRICTED 2 -CARD REBOOT */
}smu_cval_carrier_restriction_status_ind_struct;

/*****************************************************************************
* STRUCT
*   cval_smu_carrier_restriction_status_ind_struct
*
* DESCRIPTIONS
*   This message is sent to inform SMU the carrier status, CVAL->SMU
*
* PARAMETERS
*****************************************************************************/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8   slot_id;
    kal_uint8   carrier_rest_status;  /* 0 - READY 1 - CARD RESTRICTED 2 -CARD REBOOT */
}cval_smu_carrier_restriction_status_ind_struct;
#endif
#endif


