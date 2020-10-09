/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 */
/* MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */
#ifndef TYPE_H_INCLUDED
#define TYPE_H_INCLUDED

#include <string>

using namespace std;

#if defined(ANDROID_SIM_COUNT_2)
#define SIM_COUNT 2
#elif defined(ANDROID_SIM_COUNT_3)
#define SIM_COUNT 3
#elif defined(ANDROID_SIM_COUNT_4)
#define SIM_COUNT 4
#else
#define SIM_COUNT 1
#endif

#define CCCI_BUF_HEADER_SIZE  (sizeof(ccci_header_t))
#define CCCI_MAX_DATA_SIZE    (2016) //(2048-32)

#define MAX_ADDR_BUF_NUM      (10)
#define IPV4_ADDR_LEN         (0X04)
#define IPV6_ADDR_LEN         (0X10)

#define SSL_MAX_MASTER_KEY_LENGTH      48
#define SSL_MAX_SSL_SESSION_ID_LENGTH  32
#define SSL3_RANDOM_SIZE               32

typedef enum {
    SS_CCCI_MSG_TYPE_BEGIN,

    SS_CCCI_MSG_TYPE_SS_ATCMD_CNF,            /*ssds_ccci_atcmd_rsp_struct*/
    SS_CCCI_MSG_TYPE_GBA_ATCMD_CNF,           /*ssds_ccci_atcmd_rsp_struct*/
    SS_CCCI_MSG_TYPE_SIM_AKA_AUTH_REQ,        /*ssds_ccci_sim_aka_auth_req_struct*/
    SS_CCCI_MSG_TYPE_SIM_GBA_AUTH_REQ,        /*ssds_ccci_sim_gba_auth_req_struct*/
    SS_CCCI_MSG_TYPE_SIM_INFO_QUERY_REQ,      /*ssds_ccci_sim_info_query_req_struct*/
    SS_CCCI_MSG_TYPE_SIM_TYPE_REQ,            /*ssds_ccci_sim_type_req_struct*/
    SS_CCCI_MSG_TYPE_SIM_GBABP_WRITE_REQ,     /*ssds_ccci_sim_gbabp_write_req_struct*/
    SS_CCCI_MSG_TYPE_SS_ATCMD_REQ,            /*ssds_ccci_atcmd_req_struct*/
    SS_CCCI_MSG_TYPE_GBA_ATCMD_REQ,           /*ssds_ccci_atcmd_req_struct*/
    SS_CCCI_MSG_TYPE_XUI_INFO_REQ,            /*ssds_ccci_xui_info_ind_struct*/
    SS_CCCI_MSG_TYPE_IMS_REGISTER_STATE_REQ,  /*ssds_ccci_ims_state_ind_struct*/
    SS_CCCI_MSG_TYPE_SIM_STATE_REQ,           /*ssds_ccci_sim_state_ind_struct*/
    SS_CCCI_MSG_TYPE_SIM_AKA_AUTH_CNF,        /*ssds_ccci_sim_aka_auth_rsp_struct*/
    SS_CCCI_MSG_TYPE_SIM_GBA_AUTH_CNF,        /*ssds_ccci_sim_gba_auth_rsp_struct*/
    SS_CCCI_MSG_TYPE_SIM_INFO_QUERY_CNF,      /*ssds_ccci_sim_info_query_rsp_struct*/
    SS_CCCI_MSG_TYPE_SIM_TYPE_CNF,            /*ssds_ccci_sim_type_rsp_struct*/
    SS_CCCI_MSG_TYPE_SIM_GBABP_WRITE_CNF,     /*ssds_ccci_sim_gbabp_write_rsp_struct*/
    SS_CCCI_MSG_TYPE_SS_INIT_REQ,             /*ssds_ccci_ss_init_req_struct*/
    SS_CCCI_MSG_TYPE_EXCAPUAS_ATCMD_IND,      /*ssds_ccci_excapuas_atcmd_ind_struct */
    SS_CCCI_MSG_TYPE_SS_TLS_DECRYPT_REQ,      /*ssds_ccci_ss_tls_descrypt_req_struct*/
    SS_CCCI_MSG_TYPE_PDN_STATE_IND,           /*ssds_ccci_ss_pdn_state_struct*/

    SS_CCCI_MSG_TYPE_END

}ss_ccci_msg_t;

typedef enum
{
    SIM_QUERY_INFO_BEGIN = -1,

    SIM_QUERY_INFO_IMSI = 0,              /*ssds_xcap_sim_imsi_rsp_struct*/
    SIM_QUERY_INFO_IMEI,                  /*ssds_xcap_sim_imei_rsp_struct*/
    SIM_QUERY_USIM_INFO_MNC_LEN,          /*ssds_xcap_sim_mnclen_rsp_struct*/
    SIM_QUERY_USIM_INFO_SERVICE_TABLE,    /*ssds_xcap_sim_srv_table_rsp_struct*/
    SIM_QUERY_USIM_INFO_GBABP,            /*ssds_xcap_sim_ef256_rsp_struct*/
    SIM_QUERY_ISIM_INFO_IMPI,             /*ssds_xcap_sim_impi_rsp_struct*/
    SIM_QUERY_ISIM_INFO_IMPU,             /*ssds_xcap_sim_impu_rsp_struct*/
    SIM_QUERY_ISIM_INFO_SERVICE_TABLE,    /*ssds_xcap_sim_srv_table_rsp_struct*/
    SIM_QUERY_ISIM_INFO_GBABP,            /*ssds_xcap_sim_ef256_rsp_struct*/
    SIM_QUERY_ISIM_INFO_DOMAIN,           /*ssds_xcap_sim_domain_rsp_struct*/

    /*SimMaanger local use query type, please put modem query type before this line */
    SIM_QUERY_INFO_MCC,
    SIM_QUERY_INFO_MNC,

    SIM_QUERY_INFO_END,
} sim_query_e;

typedef enum {
    SIM_STATUS_NOT_READY = 0,
    SIM_STATUS_READY,
    SIM_STATUS_REFRESH
} sim_status_e;

typedef enum {
    SIM_TYPE_USIM = 0,
    SIM_TYPE_ISIM,
    SIM_TYPE_SIM,
    SIM_TYPE_UNKNOWN
} sim_type_e;

typedef enum {
    RSP_OK = 0,
    RSP_FAIL
} rsp_result_e;

typedef enum {
    CB_SOURCE_SIMMANAGER = 0,
    CB_SOURCE_MAX,
}callback_source_e;

typedef enum {
    RSP_TYPE_SIMSTATUS,
    RSP_TYPE_SIMTYPE,
    RSP_TYPE_SIMINFO,
    RSP_TYPE_SETGBA,
    RSP_TYPE_CALCULATEGBA,
    RSP_TYPE_CALCULATENAFEXTKEY,
    RSP_TYPE_CALCULATEAKA,
}callback_rsp_type;

/** CCCI buffer structure */
typedef struct
{
    uint32_t         magic;       // 0x35786419
    uint32_t         mod_id;      // use to send response or send request for the SS  command
    uint32_t         ccci_msg;    // map to ss_ccc_msg_type;
    uint32_t         msg_len;     //data length
} ccci_header_t;

typedef struct
{
    uint32_t     net_id;
    uint32_t     dnsv4_num;
    char         dnsv4_addr[MAX_ADDR_BUF_NUM][IPV4_ADDR_LEN];
    uint32_t     dnsv6_num;
    char         dnsv6_addr[MAX_ADDR_BUF_NUM][IPV6_ADDR_LEN];
}network_info_t;

/** XCAP/GBA command structure */
typedef struct
{
    uint32_t         atcmd_type;
    network_info_t   networkInfo;
    uint32_t         data_len;
    char             *at_cmd;
}cmd_req_t;


typedef struct {
    uint32_t        query_type;         /*should defined as kal_uint32*/
    uint32_t        sim_type;           /*0 : usim, 1 : isim */
    uint32_t        ch_id;              /*isim only */
} sim_info_query_body_t;

typedef struct {
    ccci_header_t            header;
    sim_info_query_body_t    data;
} sim_info_query_request_t;

typedef struct {
    uint32_t      sim_type;   // 0 : usim, 1 : isim
    uint32_t      ch_id;      // isim only
    uint32_t      efgbabp_len;
    char          efgbabp_data[256];
} sim_set_gba_request_body_t;

typedef struct {
    ccci_header_t            header;
    sim_set_gba_request_body_t data;
} sim_set_gba_request_t;

typedef struct
{
    uint32_t  sim_type;   // 0 : usim, 1 : isim
    uint32_t  ch_id;      // isim only
    uint32_t  gba_type;   // 0xDD or 0xDE
    uint32_t  param1_len;
    uint32_t  param2_len;
    char      param1[64];
    char      param2[64];
}sim_gba_auth_request_body_t;

typedef struct
{
    ccci_header_t                 header;
    sim_gba_auth_request_body_t   data;
}sim_gba_auth_request_t;

typedef struct
{
    uint32_t  sim_type;// 0 : usim, 1 : isim
    uint32_t  ch_id;// isim only
    uint32_t  rand_len;
    uint32_t  auth_len;
    char      rand[32];
    char      auth[32];
}sim_aka_auth_request_body_t;

typedef struct
{
    ccci_header_t                 header;
    sim_aka_auth_request_body_t   data;
}sim_aka_auth_request_t;

/*sim type information*/
typedef struct{
    uint32_t         result;     /*0: OK;  OTHERS: Fail */
    uint32_t         sim_type;   /*0 : usim, 1 : isim */
    uint32_t         ch_id;      /*isim only*/
    uint32_t         is_test_sim;/*0: not test sim, 1: test sim */
}sim_type_rsp_t;

typedef struct
{
    uint32_t        query_type;  /*should defined as kal_uint32*/
    uint32_t        result;             /*0: OK;  OTHERS: Fail */
    char            *rsp_info;          /*
                                         * Valid under rsp_id=1; Variable by different query type.
                                         * check ssds_ccci_sim_query_enum
                                         */
}sim_info_query_rsp_t;

typedef struct
{
    char        imsi[16];
    uint32_t    imsi_len;
    uint32_t    mnc_len;
}sim_imsi_rsp_t;

typedef struct
{
    char        imei[16];
    uint32_t    imei_len;
}sim_imei_rsp_t;

typedef struct
{
    char        impi[256];
    uint32_t    impi_len;
}sim_impi_rsp_t;

typedef struct
{
    uint32_t      impu_num;
    uint32_t      impu_len[5];
    char          impu[5][256];
}sim_impu_rsp_t;

typedef struct
{
    uint16_t    domain_len;
	char        domain[256];
}sim_domain_rsp_t;

typedef struct
{
    uint32_t    service_table_len;
    char        service_table[256];
}sim_service_table_rsp_t;

typedef struct
{
    uint32_t    EFgbabp_len;
    char        EFgbabp[256];
}sim_Efgbabp_rsp_t;

typedef struct
{
    uint32_t      sim_type;   // 0 : usim, 1 : isim
    uint8_t       result;     /*0: OK;  OTHERS: Fail */
} sim_write_Efgbabp_rsp_t;

typedef struct
{
    uint32_t       result; /*0: OK*/
    uint32_t       sw1;    //Only available when result is Success
    uint32_t       sw2;    //Only available when result is Success
    uint32_t       sim_type;
    uint32_t       response_len;
    char           response[256];
}sim_gba_auth_rsp_t;

typedef struct
{
    uint32_t       result; /*0: OK*/
    uint32_t       sim_type;
    uint32_t       response_len;
    char           response[256];
}sim_aka_auth_rsp_t;

typedef struct {
    uint32_t             rsp_id;
    uint32_t             data_len;
    /* data buffer will dynamic allocate in the code */
}ss_atcmd_rsp_body_t;

typedef struct
{
    ccci_header_t         header;
    ss_atcmd_rsp_body_t   data;
}ss_atcmd_rsp_t;


typedef struct {
    callback_rsp_type    rsp_type;
    uint32_t             mod_id;
    uint32_t             data_len;
    char                 *data;
} rsp_message_t;

typedef struct
{
    uint32_t  version;
}ss_init_request_body_t;

typedef struct
{
    ccci_header_t             header;
    ss_init_request_body_t    data;
}ss_init_request_t;

typedef struct
{
    ccci_header_t             header;
    char                      *data;
}excapuas_atcmd_ind_struct;

typedef struct
{
    string            cmd;
    network_info_t    networkInfo;
    uint32_t          modId;
} queue_cmd_t;

typedef struct
{
    uint32_t                    master_key_length;
    unsigned char               master_key[SSL_MAX_MASTER_KEY_LENGTH];
    uint32_t                    session_id_length;
    unsigned char               session_id[SSL_MAX_SSL_SESSION_ID_LENGTH];
    uint32_t                    client_random_length;
    unsigned char               client_random[SSL3_RANDOM_SIZE];
}tls_decrypt_request_body_struct;

typedef struct
{
    ccci_header_t                       header;
	tls_decrypt_request_body_struct     data;
}tls_decrypt_request_struct;

typedef struct
{
    ccci_header_t                       header;
	uint32_t                            pdn_state;
}pdn_state_struct;

#endif /* TYPE_H_INCLUDED */
