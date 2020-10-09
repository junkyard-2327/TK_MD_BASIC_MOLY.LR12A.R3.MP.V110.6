/*****************************************************************************
 *
 * Filename:
 * ---------
 *  l4c2smu_vzw_struct.h
 *
 * Project:
 * --------
 *  UMOLYA
 *
 * Description:
 * ------------
 *  This file defines the data structure used between L4C and SMU reardign to 
 *  VZW feature
 *
 * Author:
 * -------
 * -------
 *
 ****************************************************************************/
#ifndef _L4C2SMU_VZW_STRUCT_H
#define _L4C2SMU_VZW_STRUCT_H

#include "kal_public_defs.h"
#include "l4c_common_enum.h"
#include "kal_general_types.h"
#include "custom_sml.h"
#include "sml_public_def.h"

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
} l4csmu_vzw_rsu_initiate_req_struct;

typedef struct {
    kal_uint8 msg_type;
    kal_uint8 imei[15];
    kal_uint8 major_ver;
    kal_uint8 minor_ver;
    kal_uint8 session_id[8];
    kal_uint8 max_major_ver;
    kal_uint8 max_minor_ver;
} sml_vzw_rsu_req_msg_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_bool result;
    sml_vzw_rsu_req_msg_struct request_msg; // 1 + 15 + 1 + 1 + 8 + 1 + 1
    kal_uint8 hmac[32];
} l4csmu_vzw_rsu_initiate_cnf_struct;

typedef struct {
    kal_uint8 major_ver;
    kal_uint8 minor_ver;
    kal_uint8 protection_algo;
    kal_uint8 nw_lock_op;
    kal_uint8 imei[15];
    kal_uint8 timestamp[8];
    kal_uint8 nw_num;
    kal_uint8 nw_list[SML_VZW_RSU_NW_LIST_LEN];
    kal_uint8 ns_num;
    kal_uint8 ns_list[SML_VZW_RSU_NS_LIST_LEN];
    kal_uint8 sp_num;
#ifdef __VZW_RSU_LOCK_CODE_EXTEND_SUPPORT__
    kal_uint8 sp_list[SML_VZW_RSU_SP_LIST_EXTND_LEN];
#else
    kal_uint8 sp_list[SML_VZW_RSU_SP_LIST_LEN];
#endif
    kal_uint8 ehplmn_num;
#ifdef __VZW_RSU_LOCK_CODE_EXTEND_SUPPORT__
    kal_uint8 ehplmn_list[SML_VZW_RSU_EHPLMN_LIST_EXTND_LEN];
#else
    kal_uint8 ehplmn_list[SML_VZW_RSU_EHPLMN_LIST_LEN];
#endif
    kal_uint8 signature[256]; //Used for RSA based integrity checking
} sml_vzw_rsu_rsp_msg_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_uint16 data_len;
    kal_uint8 data[MAX_VZW_RSU_RSP_SIZE];
} l4csmu_vzw_rsu_response_req_struct;

typedef struct {
    kal_uint8 msg_type;
    kal_uint8 imei[15];
    kal_uint8 major_ver;
    kal_uint8 minor_ver;
    kal_uint8 nw_lock_op;
    kal_uint8 error_code;
    kal_uint8 timestamp[8];
} sml_vzw_rsu_status_msg_struct;

typedef struct {
    sml_vzw_rsu_status_msg_struct status_msg;
    kal_uint8 hmac[32];
} smu_vzw_rsu_status_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_bool result;
    smu_vzw_rsu_status_ind_struct status_ind;
} l4csmu_vzw_rsu_response_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    smu_vzw_rsu_delay_timer_op_enum mode;
} l4csmu_vzw_rsu_delay_timer_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    sml_vzw_rsu_unlock_timer_resp_enum resp;
    kal_uint16 unlock_timer;
} l4csmu_vzw_rsu_delay_timer_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
} l4csmu_vzw_rsu_data_reset_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4c_source_id_enum src_id;
    kal_bool result;
} l4csmu_vzw_rsu_data_reset_cnf_struct;


#endif /* _L4C2SMU_VZW_STRUCT_H */
