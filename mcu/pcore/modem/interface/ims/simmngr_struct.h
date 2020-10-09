#ifndef  _SIMMNGR_STRUCT_H
#define  _SIMMNGR_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "atcmd_struct.h"
#include "ims_common_def.h"

#include "simmngr_def_enums.h"

typedef struct simmngr_sim_type_check_req_struct {
    SIMMNGR_LOCAL_PARA_HDR
} simmngr_sim_type_check_req_struct;

typedef struct simmngr_sim_insert_check_req_struct {
    SIMMNGR_LOCAL_PARA_HDR
} simmngr_sim_insert_check_req_struct;

typedef struct simmngr_sim_state_check_req_struct {
    SIMMNGR_LOCAL_PARA_HDR
} simmngr_sim_state_check_req_struct;

typedef struct simmngr_query_sim_info_req_struct {
    SIMMNGR_LOCAL_PARA_HDR
    kal_uint16					request;//simmngr_sim_info_query_enum 
    kal_uint8                   sim_type;// 0 : usim, 1 : isim
    kal_uint8                   ch_id;// isim only
} simmngr_query_sim_info_req_struct;

typedef struct simmngr_write_sim_ef_req_struct {
    SIMMNGR_LOCAL_PARA_HDR
    kal_uint16					request;
    kal_uint8                   sim_type;// 0 : usim, 1 : isim
    kal_uint8                   ch_id;// isim only
	//Data in peer buff struct
} simmngr_write_sim_ef_req_struct;

typedef struct simmngr_sim_aka_req_struct {
    SIMMNGR_LOCAL_PARA_HDR
    kal_uint8 sim_type;// 0 : usim, 1 : isim
    kal_uint8 ch_id;// isim only
    kal_uint8 rand_len;
    kal_uint8 autn_len;
    kal_uint8 rand[32];
    kal_uint8 autn[32];
} simmngr_sim_aka_req_struct;

typedef struct simmngr_sim_aka_cnf_struct {
    SIMMNGR_LOCAL_PARA_HDR
    kal_uint8   result;
    kal_uint8   sim_type;
    kal_uint16  response_len;
    kal_uint8   response[256];
} simmngr_sim_aka_cnf_struct;

typedef struct simmngr_sim_gba_auth_req_struct {
    SIMMNGR_LOCAL_PARA_HDR
    kal_uint8 sim_type;// 0 : usim, 1 : isim
    kal_uint8 ch_id;// isim only
    kal_uint8 param1_len;
    kal_uint8 param2_len;
    kal_uint8 param1[64];
    kal_uint8 param2[64];
	kal_uint8 gba_type;
} simmngr_sim_gba_auth_req_struct;

typedef struct simmngr_sim_gba_auth_cnf_struct {
    SIMMNGR_LOCAL_PARA_HDR
	kal_uint8	result;
    kal_uint8   sw1;//Only available when result is Success
	kal_uint8	sw2;//Only available when result is Success
    kal_uint8   sim_type;
    kal_uint16  response_len;
    kal_uint8   response[256];
} simmngr_sim_gba_auth_cnf_struct;

typedef struct simmngr_sim_insert_check_cnf_struct {
    SIMMNGR_LOCAL_PARA_HDR
    kal_uint8  insert_state;// simmngr_sim_insert_state_enum
} simmngr_sim_insert_check_cnf_struct;

typedef struct simmngr_query_sim_info_cnf_struct {
    SIMMNGR_LOCAL_PARA_HDR
    kal_uint16					request;//simmngr_sim_info_query_enum
    kal_uint8                   result;
} simmngr_query_sim_info_cnf_struct;

typedef struct simmngr_write_sim_ef_cnf_struct {
    SIMMNGR_LOCAL_PARA_HDR
    kal_uint16					request;
    kal_uint8                   result;
} simmngr_write_sim_ef_cnf_struct;

typedef struct simmngr_sim_type_check_cnf_struct {
    SIMMNGR_LOCAL_PARA_HDR
    kal_uint8   result;
    kal_uint8   sim_type;// 0 : usim, 1 : isim
    kal_uint8   ch_id;// isim only
} simmngr_sim_type_check_cnf_struct;

typedef struct simmngr_imsi_result_t {
    kal_uint8   imsi[16];
    kal_uint8   imsi_len;
    kal_uint8   mnc_len;
} simmngr_imsi_result_t;

typedef struct simmngr_imei_result_t {
    kal_uint8   imei[16];
    kal_uint8   imei_len;
} simmngr_imei_result_t;

typedef struct simmngr_mnc_len_result_t {
    kal_uint8 mnc_len;
} simmngr_mnc_len_result_t;

typedef struct simmngr_psismsc_result_t {
    kal_uint8   psismsc[256];
    kal_uint16  psismsc_len;
} simmngr_psismsc_result_t;

typedef struct simmngr_impu_result_t {
    kal_uint8   impu_num;
    kal_uint8   impu_len[20];
    kal_uint8   impu[20][256];
} simmngr_impu_result_t;

typedef struct simmngr_smsp_result_t {
    kal_uint8   smsp[64];
    kal_uint8   smsp_len;
} simmngr_smsp_result_t;

typedef struct simmngr_impi_result_t {
    kal_uint8   impi[256];
    kal_uint16  impi_len;
} simmngr_impi_result_t;

typedef struct simmngr_domain_result_t {
    kal_uint8   domain[256];
    kal_uint16  domain_len;
} simmngr_domain_result_t;

typedef struct simmngr_service_table_result_t {
    kal_uint8   service_table[256];
    kal_uint16  service_table_len;
} simmngr_service_table_result_t;

typedef struct simmngr_msisdn_result_t {
    kal_uint8   msisdn_str_len;
    kal_uint8   msisdn_str[24];// only 20bytes(string), 4bytes reserved
} simmngr_msisdn_result_t;

typedef struct simmngr_pcscf_result_t {
    kal_uint8   pcscf_len[20];// V4 + V6
    kal_uint8   pcscf[20][128];// V4 + V6
    kal_uint8   pcscf_num;
} simmngr_pcscf_result_t;

typedef struct simmngr_trans_ef256_result_t {
    kal_uint8   ef256_data[256];
    kal_uint16  ef256_result_len;
} simmngr_trans_ef256_result_t; //Many EF data are maximum 256 len, so use the same structure

typedef struct simmngr_gid1_result_t {
    kal_uint8   gid1_len;
    kal_uint8   gid1[30];//currently we use 30 as max length
} simmngr_gid1_result_t;

typedef struct simmngr_gid2_result_t {
    kal_uint8   gid2_len;
    kal_uint8   gid2[30];//currently we use 30 as max length
} simmngr_gid2_result_t;

typedef struct simmngr_sim_state_check_cnf_struct {
    SIMMNGR_LOCAL_PARA_HDR
    kal_uint16	state;//simmngr_sim_state_check_cnf_enum
    kal_uint8   result;
} simmngr_sim_state_check_cnf_struct;

typedef struct simmngr_sim_data_ind_struct {
    LOCAL_PARA_HDR
    kal_uint32  data;
} simmngr_sim_state_ind_struct,simmngr_sim_data_ind_struct;

typedef struct simmngr_sim_app_ready_ind_struct {
    LOCAL_PARA_HDR
    kal_uint32  ch_id;
    kal_uint8 trans_id;     /* Used by DSBP_RECONFIG's users. Use 1~255 in order for each SIM task. */
} simmngr_usim_detected_ind_struct,simmngr_isim_ch_ind_struct;

/* ATP */
//From SIMMNGR to ATP
typedef struct {
    SIMMNGR_LOCAL_PARA_HDR
    kal_uint8                       value;
} atp_simmngr_cmee_set_req_struct;

typedef struct {
    SIMMNGR_LOCAL_PARA_HDR
} atp_simmngr_cpin_query_req_struct;

typedef struct {
    SIMMNGR_LOCAL_PARA_HDR
} atp_simmngr_esims_query_req_struct;

typedef struct {
    SIMMNGR_LOCAL_PARA_HDR
} atp_simmngr_imei_query_req_struct;

typedef struct {
    SIMMNGR_LOCAL_PARA_HDR
    //0:ISIM 1:USIM 2:CSIM 3:SIM 4:RUIM
    kal_uint8                       application_id;
} atp_simmngr_esimapp_query_req_struct;

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
#endif

//Response to SIMMNGR
typedef struct {
    SIMMNGR_LOCAL_PARA_HDR
    ims_result_code_enum            result;
    ims_err_id_enum                 err_id;
} atp_simmngr_cmee_set_cnf_struct,atp_simmngr_common_at_cnf_struct;

typedef struct {
    SIMMNGR_LOCAL_PARA_HDR
    ims_result_code_enum            result;
    ims_err_id_enum                 err_id;
    kal_uint8                       code[40]; //Raw data for CPIN, i.e. +CPIN:<code>
} atp_simmngr_cpin_query_cnf_struct;

typedef struct {
    SIMMNGR_LOCAL_PARA_HDR
    kal_uint8                       success; //Query Result
    kal_uint8                       inserted_status;
} atp_simmngr_esims_query_cnf_struct;

typedef struct {
    SIMMNGR_LOCAL_PARA_HDR
    kal_uint8                       success; //Query Result
    kal_uint8                       imei_len;
    kal_uint8                       imei[20];
} atp_simmngr_imei_query_cnf_struct;

typedef struct {
    SIMMNGR_LOCAL_PARA_HDR
    ims_result_code_enum            result;
    ims_err_id_enum                 err_id;
    kal_uint8                       application_id; //For ISIM
    kal_uint8                       ch_id; //For ISIM
} atp_simmngr_esimapp_query_cnf_struct;

#endif
