/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
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

 /*******************************************************************************
 * Filename:
 * ---------
 *   em_l4_common_public_struct.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Engineer mode public structures.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *              HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/


#ifndef _EM_L4_COMMON_PUBLIC_STRUCT_H
#define _EM_L4_COMMON_PUBLIC_STRUCT_H

#include "l4c_common_enum_public.h"

#ifdef __RF_SCAN_FOR_DESENSE_TEST__
#include "global_type.h"
#endif

typedef enum {
    SET_RX_PATH  = 0,
    READ_RX_PATH = 1
} rx_path_cmd_type;

//***** Common for UAS and UL2  ******//
typedef struct {
    kal_uint8 TrCHId;
    kal_uint32 TotalCRC;
    kal_uint32 BadCRC;
} trch_bler_struct;



//***** Common for L4 and UL1  ******//
typedef enum
{
   TX_ANTENNA_STATE_0,
   TX_ANTENNA_STATE_1,
   TX_ANTENNA_STATE_2,
   TX_ANTENNA_STATE_3,
   TX_ANTENNA_STATE_4,
   TX_ANTENNA_STATE_5,
   TX_ANTENNA_STATE_6,
   TX_ANTENNA_STATE_7,
   TX_ANTENNA_STATE_NUM,
   TX_ANTENNA_INVALID = 0xFF

} force_tx_ant_state_enum;

typedef enum _force_tx_ant_cmd_type_e
{
   SET_FORCE_TX_ANT  = 0,               /* mode = 0,1 */
   READ_FORCE_TX_ANT = 1,               /* mode = 2 */
   DISABLE_FORCE_TX_ANT_BY_BAND = 2,    /* mode = 3 */
   ENABLE_FORCE_TX_ANT_BY_BAND = 3,     /* mode = 4 */
   READ_FORCE_TX_ANT_BY_BAND = 4,       /* mode = 5 */

   INVALID_FORCE_TX_ANT = 0xFF
} force_tx_ant_cmd_type_e;

typedef struct _l4cul1_force_tx_ant_req_struct
{
   LOCAL_PARA_HDR
   force_tx_ant_cmd_type_e cmd_type;
   kal_bool enable_force_tx_ant;

   /* only valid when cmd_type = SET_FORCE_TX_ANT, ENABLE_FORCE_TX_ANT_BY_BAND */
   force_tx_ant_state_enum force_tx_ant_state; 

   /* valid: 0 - 255, L1 needs to cast this integer to internal band enum */
   kal_uint8 band;

   /* TRUE: write nvram, FALSE: not write nvram, only valid when cmd_type=SET_FORCE_TX_ANT */
   kal_bool nvram_write;
} l4cl1_force_tx_ant_req_struct,
  l4cul1_force_tx_ant_req_struct,
  l4ctl1_force_tx_ant_req_struct,
  l4cel1_force_tx_ant_req_struct,
  l4c_c2k_cl1_force_tx_ant_req_struct;

typedef struct _l4cul1_force_tx_ant_cnf_struct
{
   LOCAL_PARA_HDR
   force_tx_ant_cmd_type_e cmd_type;
   kal_bool result;
   kal_bool enable_force_tx_ant;
   force_tx_ant_state_enum force_tx_ant_state;

} l4cl1_force_tx_ant_cnf_struct,
  l4cul1_force_tx_ant_cnf_struct,
  l4ctl1_force_tx_ant_cnf_struct,
  l4cel1_force_tx_ant_cnf_struct,
  l4c_c2k_cl1_force_tx_ant_cnf_struct;

typedef struct _l4cmmrf_ap_rfidx_update_req_struct
{
   LOCAL_PARA_HDR
   kal_uint8 src_id;
   kal_uint16 feature_idx;      /* feature index:  valid from 0 */
   kal_int16 scen_idx;          /* scenario index: valid from 0, -1 means disable feature_idx */
} l4cmmrf_ap_rfidx_update_req_struct,
  l4cul1_ap_rfidx_update_req_struct,
  l4cel1_ap_rfidx_update_req_struct,
  l4c_c2k_cl1_ap_rfidx_update_req_struct;

typedef struct _l4cmmrf_ap_rfidx_update_cnf_struct
{
   LOCAL_PARA_HDR
   kal_uint8 src_id;
   kal_bool success;   /* KAL_TRUE: SUCCESS, KAL_FALSE: FAIL */
} l4cmmrf_ap_rfidx_update_cnf_struct,
  l4cul1_ap_rfidx_update_cnf_struct,
  l4cel1_ap_rfidx_update_cnf_struct,
  l4c_c2k_cl1_ap_rfidx_update_cnf_struct;

typedef struct _l4cl1_txrx_active_time_req_struct
{
   LOCAL_PARA_HDR
   kal_uint8 src_id;

} l4cl1_txrx_active_time_req_struct,
  l4cul1_txrx_active_time_req_struct,
  l4ctl1_txrx_active_time_req_struct,
  l4cel1_txrx_active_time_req_struct;

typedef struct _l4cl1_txrx_active_time_cnf_struct
{
   LOCAL_PARA_HDR
   kal_uint8     src_id;        // just piggyback the src_id sent by l4cel1_txrx_active_time_req_struct from L4C.
   kal_uint32    tx_mode_time_ms[NUM_TX_POWER_LEVELS];
   kal_uint32    rx_mode_time_ms;
   kal_uint32    txrx_mode_union_time_ms;

} l4cl1_txrx_active_time_cnf_struct,
  l4cul1_txrx_active_time_cnf_struct,
  l4ctl1_txrx_active_time_cnf_struct,
  l4cel1_txrx_active_time_cnf_struct;

typedef struct _l4cul1_apinfo_update_req_struct
{
   LOCAL_PARA_HDR
   kal_uint8 receiver_status;       /* 0: other output devices
                                     * 1: earpiece */
   kal_uint8 screen_rotation;       /* 0: portrait (0 ?45 degrees, 180 ?45 degrees)
                                     * 1: landscape (90 ?45 degrees, 270 ?45 degrees) */
   kal_uint8 psensor_info;          /* 0: far
                                     * 1 => near */
   kal_uint8 voice_call_status;     /*  0 => IDLE
                                     * 1 => RINGING, OFFHOOK */
} l4cl1_apinfo_update_req_struct,
  l4cul1_apinfo_update_req_struct,
  l4ctl1_apinfo_update_req_struct,
  l4cel1_apinfo_update_req_struct;

typedef enum {
    UL1_RX_MAIN_ONLY = 0,
    UL1_RX_RXD_ONLY  = 1,
    UL1_RX_BOTH      = 2,
    UL1_RX_OFF       = 3   // Resume default
} ul1_rx_path_set_enum;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    ul1_rx_path_set_enum rx_path;
    kal_bool nvram_write;  // This flag is used to indicate whether need to save the setting in NVRAM or not
    rx_path_cmd_type cmd_type;
}l4cul1_set_rx_path_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    kal_bool  result;
    rx_path_cmd_type cmd_type;
    ul1_rx_path_set_enum  rx_path;
}l4cul1_set_rx_path_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
	kal_uint8     src_id;
	kal_uint16    max_tx_power_offset; /* Valid Range 0 to 1023*/
    kal_uint8     band; /* Valid only for GSM. For other RATs set to 0 and should be ignored*/
} l4cl1_set_max_tx_power_req_struct,
  l4cel1_set_max_tx_power_req_struct,
  l4cul1_set_max_tx_power_req_struct,
  l4ctl1_set_max_tx_power_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
	kal_uint8     src_id;
	kal_bool      result;
} l4cl1_set_max_tx_power_cnf_struct,
  l4cel1_set_max_tx_power_cnf_struct,
  l4cul1_set_max_tx_power_cnf_struct,
  l4ctl1_set_max_tx_power_cnf_struct;

typedef enum
{
    L1_SET_PCL_VALUE      = 0,
    L1_SET_MAX_PCL_VALUE  = 1,
    L1_READ_PCL_VALUE     = 2,
    L1_INVALID_PCL_VALUE  // Max supported
} l1_force_pcl_cmd_type_enum;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                  src_id;
	l1_force_pcl_cmd_type_enum cmd_type;
	kal_int8                   pcl_value; /* Valid Range -1 to 31*/
	kal_uint8                  gsm_band; /* Valid Range 1 to 4*/
} l4cl1_gsm_em_tx_pwr_ctrl_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                  src_id;
	kal_bool                   result;
	l1_force_pcl_cmd_type_enum cmd_type;
	kal_int8                   pcl_value; /* Valid Range -1 to 31*/
	kal_uint8                  gsm_band; /* Valid Range 1 to 4*/
	kal_uint8                  mod_type;  /* 0-1 */
	kal_int16                  apc_dac;   /* Valid Range -1 to 1023*/
} l4cl1_gsm_em_tx_pwr_ctrl_cnf_struct;



typedef enum {
    L1_RX_MAIN_ONLY = 0,
    L1_RX_RXD_ONLY  = 1,
    L1_RX_BOTH      = 2,
    L1_RX_OFF       = 3   // Resume default
} l1_rx_path_set_enum;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    l1_rx_path_set_enum rx_path;
    kal_bool nvram_write;  // This flag is used to indicate whether need to save the setting in NVRAM or not
    rx_path_cmd_type cmd_type;
}l4cl1_set_rx_path_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    kal_bool  result;
    rx_path_cmd_type cmd_type;
    l1_rx_path_set_enum  rx_path;
}l4cl1_set_rx_path_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                  sim_index; //Valid Input : 0-1
    kal_bool                   monitoring_req;
} l4cgl1_get_ant_info_req_struct,
  l4cul1_get_ant_info_req_struct,
  l4ctl1_get_ant_info_req_struct,
  l4cel1_get_ant_info_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                  sim_index; //Valid Input : 0-1
    kal_uint8                  antenna_index; //Valid Values: 0,1,2,255
} l4cgl1_get_ant_info_cnf_struct,
  l4cul1_get_ant_info_cnf_struct,
  l4ctl1_get_ant_info_cnf_struct,
  l4cgl1_get_ant_info_ind_struct,
  l4cul1_get_ant_info_ind_struct,
  l4ctl1_get_ant_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                  sim_index; //Valid Input : 0-1
    kal_uint8                  antenna_index[3]; //Valid Values: 0,1,2,255
} l4cel1_get_ant_info_cnf_struct,
  l4cel1_get_ant_info_ind_struct;


#ifdef __RF_SCAN_FOR_DESENSE_TEST__
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    kal_uint8                  band;
    kal_uint16                 arfcn;
    kal_bool                   tx_on_flag;
    kal_int8                   tx_power;
    kal_uint8                  repeat_times;
} l4cl1_em_rf_scan_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                  src_id;
    kal_bool                   result;
} l4cl1_em_rf_scan_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                  src_id;
    kal_uint8                  band;
    kal_uint16                 dl_uarfcn;
    kal_bool                   tx_on_flag;
    kal_int8                   tx_power;
    kal_uint8                  repeat_times;
} l4cul1_em_rf_scan_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                  src_id;
    kal_bool                   result;
} l4cul1_em_rf_scan_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                  src_id;
    kal_uint8                  band;
    kal_uint16                 arfcn;
    kal_bool                   tx_on_flag;
    kal_int8                   tx_power;
    kal_uint8                  repeat_times;
} l4ctl1_em_rf_scan_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                  src_id;
    kal_bool                   result;
} l4ctl1_em_rf_scan_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                  src_id;
    kal_uint16                 band;
    EARFCN                     dl_earfcn;
    kal_uint8                  dl_bw;
    kal_bool                   tx_on_flag;
    kal_uint8                  ul_bw;
    kal_uint8                  vrb_start;
    kal_uint8                  vrb_len;
    kal_int16                  tx_power;
    kal_uint8                  repeat_times;
    kal_bool                   tas_en;    
    kal_uint8                  ant_state;    
} l4cel1_em_rf_scan_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                  src_id;
    kal_bool                   result;
    kal_uint16                 error_cause;
} l4cel1_em_rf_scan_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                  src_id;
    kal_uint8                  rat_type; /*rat_type obtained from AT+ERFSCAN: 4:1xRTT, 5: EVDO */
    kal_uint8                  band;
    kal_uint16                 arfcn;
    kal_bool                   tx_on_flag;
    kal_int8                   tx_power;
    kal_uint8                  repeat_times;
} l4c_c2k_cl1_em_rf_scan_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                  src_id;
    kal_bool                   result;
} l4c_c2k_cl1_em_rf_scan_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_int32                  main_rssi;
    kal_int32                  div_rssi;
} l4c_val_c2k_rf_scan_ind_struct;
#endif /*__RF_SCAN_FOR_DESENSE_TEST__*/

#ifdef __SAR_SENSOR_TX_DETECTION_SUPPORT__
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                  event; /* 0 - TX Power Low indication, 1 - TX PowerHigh indication*/
} l4c_mmrf_tx_power_status_ind_struct;
#endif

#endif /* _EM_L4_COMMON_PUBLIC_STRUCT_H */

