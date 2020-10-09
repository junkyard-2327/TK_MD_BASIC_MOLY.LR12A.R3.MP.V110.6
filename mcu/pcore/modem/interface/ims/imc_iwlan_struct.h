#ifndef _IMC_IWLAN_STRUCT_H
#define _IMC_IWLAN_STRUCT_H

#include "ps_public_enum.h"
#include "sim_public_enum.h"
#include "ims_common_def.h"
#include "ims_interface_md.h"
#include "codec_def.h"

typedef enum {
    IMC_IWLAN_MEDIA_UNSPEC = 0,
    IMC_IWLAN_MEDIA_NEW,
    IMC_IWLAN_MEDIA_UPDATE,
    IMC_IWLAN_MEDIA_DEL
} imc_iwlan_media_state_enum;

typedef enum {
    IMC_IWLAN_IMS_CALL_STATUS_UNSPEC = 0,
    IMC_IWLAN_IMS_CALL_STATUS_BEGIN,
    IMC_IWLAN_IMS_CALL_STATUS_CONNECTED,
    IMC_IWLAN_IMS_CALL_STATUS_END,
} imc_iwlan_ims_call_status_enum;

typedef enum
{
    IMS_STATE_IDLE = 0,
    IMS_STATE_ONCELL,
    IMS_STATE_ONWIFI,
    IMS_STATE_CNT,
    IMS_STATE_ONALL = 0xCC,
}ims_state_enum;

typedef enum
{
    IMC_IWLAN_HO_UNSPEC = 0,
    IMC_IWLAN_HO_W2L,
    IMC_IWLAN_HO_L2W,
    IMC_IWLAN_HO_CNT,
}imc_iwlan_ho_action_enum;

typedef enum
{
    IMC_IWLAN_HO_NONE = 0,
    IMC_IWLAN_HO_TRIG,
    IMC_IWLAN_HO_NO_DEST,
    IMC_IWLAN_HO_END,
}imc_iwlan_ho_result_enum;

typedef struct {  
    LOCAL_PARA_HDR
    kal_bool is_ims_lte_enable;
    kal_bool is_ims_wifi_enable;
    kal_bool is_ims_volte_enable;
	kal_bool is_ims_vowifi_enable;
    kal_bool is_ims_vilte_enable;
	kal_bool is_ims_viwifi_enable;
    kal_bool is_ims_sms_capa_enable;
    kal_bool is_eims_enable; 
} imc_iwlan_ims_cfg_ind_struct;

/*
 * @brief IMS diable by IWLAN
 * @note MSG_ID_IMC_IWLAN_IMS_DEREG_IND/RSP
 *       AT+EIMSDEREG=4
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint32 dereg_cause; 
} imc_iwlan_ims_dereg_ind_struct,
  imc_iwlan_ims_dereg_rsp_struct;

typedef struct {
    LOCAL_PARA_HDR
    imc_acct_type_enum              acct_type; //defined in ims_interface_md.h
    kal_uint32                      call_id;
    ims_call_mode_enum              call_mode; //defined in ims_interface_md.h
    imc_iwlan_ims_call_status_enum  call_status;
} imc_iwlan_ims_call_status_req_struct;

typedef struct
{
    LOCAL_PARA_HDR    
    kal_bool    rat_avail[IMS_STATE_CNT];
}imc_iwlan_ims_availrat_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8                  call_id;
    voip_codec_enum            audio_codec;
    imc_iwlan_media_state_enum media_state;
} imc_iwlan_call_media_info_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool allow_3gpp_roaming;
} imc_iwlan_ims_roaming_status_req_struct;

typedef enum {
    IMC_IWLAN_RAN_PRIO_NONE = 0,
    IMC_IWLAN_RAN_PRIO_LOW,
    IMC_IWLAN_RAN_PRIO_OP_CNT,
} imc_iwlan_ran_prio_e;

typedef struct {
    LOCAL_PARA_HDR
    ims_state_enum          ran;
    imc_iwlan_ran_prio_e    prio;
    kal_int32               cause; // reserved
} imc_iwlan_reg_ran_prio_update_req_struct;

typedef struct {
    LOCAL_PARA_HDR
} imc_iwlan_wifi_service_fail_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    imc_iwlan_ho_action_enum    ho_action;
} imc_iwlan_ims_ecc_ho_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    imc_iwlan_ho_result_enum    result;
} imc_iwlan_ims_ecc_ho_rsp_struct;

#endif /* _IMC_IWLAN_STRUCT_H */
