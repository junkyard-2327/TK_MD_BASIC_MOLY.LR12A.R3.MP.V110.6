#ifndef  _ATP_IWLAN_STRUCT_H
#define  _ATP_IWLAN_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "ims_interface_md.h"
#include "ims_common_def.h"

#define ATP_IWLAN_L4_CMD_IND_LOCAL_PARA_HDR \
    LOCAL_PARA_HDR \
    kal_uint32          src_id;

#define ATP_IWLAN_L4_RSP_IND_LOCAL_PARA_HDR \
    LOCAL_PARA_HDR \
    kal_uint32          src_id; \
    kal_bool            is_success; \
    kal_uint16          err_cause;

// Move from ./pcore/modem/iwlan/interface/iwlan_defs.h
#define IWLAN_STRSZL 128
#define IWLAN_STRSZM 64
#define IWLAN_STRSZS 32

/*******************************************************************************
* IWLAN V.S. ATP from AP                                                       *
* atp_iwlan_cmd_table                                                          *
*******************************************************************************/
//MSG_ID_ATP_IWLAN_IMSCFG_REQ
typedef struct {
    LOCAL_PARA_HDR
    kal_bool            volte_enable;
    kal_bool            vilte_enable;
    kal_bool            vowifi_enable;
    kal_bool            viwifi_enable; 
    kal_bool            ims_sms_enable; 
    kal_bool            eims_enable;    
} atp_iwlan_imscfg_req_struct;

//MSG_ID_ATP_IWLAN_ESRVSTATE_REQ
typedef struct {
    LOCAL_PARA_HDR
    kal_uint32          voice_regstate;
    kal_uint32          data_regstate;
    kal_uint32          voice_roamtype;
    kal_uint32          data_roamtype; 
    kal_uint32          ril_voice_regstate; 
    kal_uint32          ril_data_regstate;     
} atp_iwlan_esrvstate_req_struct;

//MSG_ID_ATP_IWLAN_ECNCFG_REQ
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8      mobile_data;
    kal_uint8      data_roaming;
    kal_uint8      data_domestic_roaming;
    kal_uint8      data_international_roaming;
} atp_iwlan_ecncfg_req_struct;

//MSG_ID_ATP_IWLAN_EWIFIEN_REQ
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8          ifname[32];
    kal_bool           en;
    kal_uint8          reason;
} atp_iwlan_ewifien_req_struct;

//MSG_ID_ATP_IWLAN_EWFCPREF_REQ
typedef struct {
    LOCAL_PARA_HDR
    kal_bool           en;
    kal_uint8          mode;
    kal_uint8          sim_id;
} atp_iwlan_ewfcpref_req_struct;

//MSG_ID_ATP_IWLAN_EWIFIASC_REQ
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8          ifname[32];    
    kal_uint8          assoc;
    kal_uint8          ssid[32];
    kal_uint8          mac[64];
} atp_iwlan_ewifiasc_req_struct;

//MSG_ID_ATP_IWLAN_ELOCAEN_REQ
typedef struct {
    LOCAL_PARA_HDR
    kal_bool en;
} atp_iwlan_elocaen_req_struct;

//MSG_ID_ATP_IWLAN_EWIFISIGLVL_REQ
typedef struct {
    LOCAL_PARA_HDR
    kal_int32         rssi;
} atp_iwlan_ewifisiglvl_req_struct;

//MSG_ID_ATP_IWLAN_EIWLCFGSET_REQ
typedef struct {
    LOCAL_PARA_HDR
    kal_char cfg_name[64];
    kal_char cfg_value[256];
} atp_iwlan_eiwlcfgset_req_struct;
//MSG_ID_ATP_IWLAN_EIWLCFGGET_REQ
typedef struct {
    LOCAL_PARA_HDR
    kal_char cfg_name[64];
} atp_iwlan_eiwlcfgget_req_struct;

//MSG_ID_ATP_IWLAN_EPVSSET_REQ
typedef struct {
    LOCAL_PARA_HDR
    kal_char cfg_name[64];
    kal_char cfg_value[256];
} atp_iwlan_epvsset_req_struct;
//MSG_ID_ATP_IWLAN_EPVSGET_REQ
typedef struct {
    LOCAL_PARA_HDR
    kal_char cfg_name[64];
} atp_iwlan_epvsget_req_struct;


//MSG_ID_ATP_IWLAN_EIMSGEO_REQ
typedef struct {
    LOCAL_PARA_HDR
    kal_int8    account_id; // (0~7: ims stack, 100: iwlan)
    kal_int8    broadcast_flag;
    kal_int32   latitude[2];
    kal_int32   longitude[2];
    kal_int32   accuracy;
    kal_char    method[16];
    kal_char    city[32];
    kal_char    state[32];
    kal_char    zip[8];
    kal_char    country_code[8];
} atp_iwlan_eimsgeo_req_struct;

//MSG_ID_ATP_IWLAN_EIMSRCSCONN_REQ
typedef struct {
    LOCAL_PARA_HDR
    kal_int32    status;
}atp_iwlan_eimsrcsconn_req_struct;

// MSG_ID_ATP_IWLAN_EIWLPLEN_REQ
typedef struct {
    LOCAL_PARA_HDR
    kal_bool en;
} atp_iwlan_eiwlplen_req_struct;

//MSG_ID_ATP_IWLAN_EIWLPING_REQ
typedef struct {
    LOCAL_PARA_HDR
    kal_int32          rat_type;
    kal_int32          ave_latency;
    kal_int32          loss_rate;
} atp_iwlan_eiwlping_req_struct;

//MSG_ID_ATP_IWLAN_EFUN_REQ
typedef struct {
    LOCAL_PARA_HDR
    kal_int8    state;
} atp_iwlan_efun_req_struct;

// MSG_ID_ATP_IWLAN_SIP_CALL_PROGRESS_REQ
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8   call_id;
    kal_uint8   dir;
    kal_uint8   msg_type;
    kal_uint8   method;
    kal_uint16  response_code;
    imcf_uint8  reason_text[IMC_MAX_REASON_TEXT_LENGTH];
} atp_iwlan_sip_call_progress_req_struct; 

typedef enum{
	DRP_OP_FLUSH = 0, //no use now
	DRP_OP_DUMP = 1,
	DRP_OP_CNT,
}drp_op_enum;


//MSG_ID_ATP_IWLAN_DUMP_RUNTIME_PARA_REQ
typedef struct {
    LOCAL_PARA_HDR
    drp_op_enum   op; //    0: flush NVRAM    1: dump to NVRAM
} atp_iwlan_dump_runtime_para_req_struct;


/*******************************************************************************
* IWLAN V.S. ATP to AP                                                         *
* atp_iwlan_urc_to_ap_table                                                    *
*******************************************************************************/
#define IWLAN_WIFI_RSSI_CFG_NUM 16
//MSG_ID_ATP_IWLAN_WIFIMON_CFG_IND
typedef struct {
    LOCAL_PARA_HDR
    kal_bool         en;
    kal_uint8        cnt;
    kal_int32        sig_thr[IWLAN_WIFI_RSSI_CFG_NUM];
} atp_iwlan_wifimon_cfg_ind_struct;

//MSG_ID_ATP_IWLAN_EWOPDNERR_IND
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8        cnt;
    kal_int32        cause;
    kal_int32        sub_cause;
} atp_iwlan_ewopdnerr_ind_struct;

//MSG_ID_ATP_IWLAN_EWIFIPDNACT_IND
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8        cnt;
} atp_iwlan_ewifipdnact_ind_struct;

//MSG_ID_ATP_IWLAN_EIWLCFGSET_IND
typedef struct {
    LOCAL_PARA_HDR
    kal_char cfg_name[64];
    kal_int32 status;
} atp_iwlan_eiwlcfgset_ind_struct;

//MSG_ID_ATP_IWLAN_EIWLCFGGET_IND
typedef struct {
    LOCAL_PARA_HDR
    kal_char cfg_name[64];
    kal_char cfg_value[256];
	kal_int32 status;
} atp_iwlan_eiwlcfgget_ind_struct;

//MSG_ID_ATP_IWLAN_EPVSSET_IND
typedef struct {
    LOCAL_PARA_HDR
    kal_char cfg_name[64];
    kal_int32 status;
} atp_iwlan_epvsset_ind_struct;

//MSG_ID_ATP_IWLAN_EPVSGET_IND
typedef struct {
    LOCAL_PARA_HDR
    kal_char cfg_name[64];
    kal_char cfg_value[256];
	kal_int32 status;
} atp_iwlan_epvsget_ind_struct;


//MSG_ID_ATP_IWLAN_EIMSGEO_IND
typedef atp_iwlan_eimsgeo_req_struct atp_iwlan_eimsgeo_ind_struct;

//MSG_ID_ATP_IWLAN_EWFCRVOUT_IND
typedef struct {
    LOCAL_PARA_HDR
    kal_char    ifname[8];
    kal_bool    rvout_en;
} atp_iwlan_ewfcrvout_ind_struct;



//MSG_ID_ATP_IWLAN_EIWLPING_IND
typedef struct {
    LOCAL_PARA_HDR
    kal_int32          rat_type;
} atp_iwlan_eiwlping_ind_struct;

// MSG_ID_ATP_IWLAN_EIWLPL_IND
typedef struct {
    LOCAL_PARA_HDR
    kal_char   cmd[8];
    kal_char   type[16];
    kal_uint8  priority_for_setup;
    kal_uint8  priority_for_cellular;
    kal_uint8  priority_for_wifi;
    kal_char   description[32];
} atp_iwlan_eiwlpl_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                        irat_status;
    kal_bool                         irat_result;
} atp_iwlan_eirat_status_req_struct;

/*******************************************************************************
* IWLAN V.S. ATP from MD                                                       *
* atp_urc_table                                                                *
*******************************************************************************/

//MSG_ID_ATP_IWLAN_L4_ECEVDP_URCRPT_REQ
typedef struct {
    ATP_IWLAN_L4_RSP_IND_LOCAL_PARA_HDR
    kal_uint8  vodm_pref;
} atp_iwlan_l4_ecevdp_urcrpt_req_struct;

//MSG_ID_ATP_IWLAN_L4_CELLTECH_URCRPT_REQ
typedef struct {
    ATP_IWLAN_L4_RSP_IND_LOCAL_PARA_HDR
    kal_uint8  ps_reg_status;
    kal_uint32 ps_reg_tech;
} atp_iwlan_l4_celltech_urcrpt_req_struct;

//MSG_ID_ATP_IWLAN_L4_VOPS_URCRPT_REQ
typedef struct {
    ATP_IWLAN_L4_RSP_IND_LOCAL_PARA_HDR
    kal_bool en;
} atp_iwlan_l4_vops_urcrpt_req_struct;

//MSG_ID_ATP_IWLAN_L4_CELLSIG_URCRPT_REQ
typedef struct {
    ATP_IWLAN_L4_RSP_IND_LOCAL_PARA_HDR
    kal_int32   sig1;
    kal_int32   sig2;
    kal_int32   rssi_qdbm;
    kal_int32   rscp_qdbm;
    kal_int32   ecn0_qdbm;
    kal_int32   rsrq_qdbm;
    kal_int32   rsrp_qdbm;
    kal_uint32   act;
    kal_int32   rs_snr_qdb;
    kal_int32   band;
} atp_iwlan_l4_cellsig_urcrpt_req_struct;

//MSG_ID_ATP_IWLAN_L4_SRVSPEC_ACC_URCRPT_REQ
typedef struct 
{  
    ATP_IWLAN_L4_RSP_IND_LOCAL_PARA_HDR
    kal_uint8 bfvoice;
    kal_uint8 bfvideo;
    kal_uint8 btvoice;
    kal_uint8 btvideo;
} atp_iwlan_l4_srvspec_acc_urcrpt_req_struct;

//MSG_ID_ATP_IWLAN_L4_PLWTH_URCRPT_REQ
typedef struct {
    ATP_IWLAN_L4_RSP_IND_LOCAL_PARA_HDR
    kal_uint8  ind;
    kal_int32  sig_value_qdbm;
    kal_uint32  sig_type;
} atp_iwlan_l4_plwth_urcrpt_req_struct;


/*******************************************************************************
* IWLAN V.S. ATP to MD                                                         *
* atp_iwlan_request_table                                                      *
*******************************************************************************/
//MSG_ID_ATP_IWLAN_L4_IMSCFG_IND
typedef atp_iwlan_imscfg_req_struct atp_iwlan_l4_imscfg_ind_struct;

//MSG_ID_ATP_IWLAN_L4_IMSCFG_RSP
typedef struct {
    ATP_IWLAN_L4_RSP_IND_LOCAL_PARA_HDR
} atp_iwlan_l4_imscfg_rsp_struct;

//MSG_ID_ATP_IWLAN_L4_PLWTHCFG_IND
typedef struct {
    LOCAL_PARA_HDR
    kal_bool            en;
    kal_int32           thr_h;
    kal_uint32          dur_h;
    kal_int32           thr_l; 
    kal_uint32          dur_l;
    kal_uint32          sig_type;
} atp_iwlan_l4_plwthcfg_ind_struct;


//MSG_ID_ATP_IWLAN_L4_PLWTHCFG_RSP
typedef struct {
    ATP_IWLAN_L4_RSP_IND_LOCAL_PARA_HDR
} atp_iwlan_l4_plwthcfg_rsp_struct;

//MSG_ID_ATP_IWLAN_L4_CELLTECH_QUERY_IND
//<TBD>
//MSG_ID_ATP_IWLAN_L4_CELLTECH_QUERY_RSP
typedef struct {
    ATP_IWLAN_L4_RSP_IND_LOCAL_PARA_HDR
    kal_uint8   stat;
    kal_uint8   eact;
} atp_iwlan_l4_celltech_query_rsp_struct;

//MSG_ID_ATP_IWLAN_L4_CELLSIG_QUERY_IND
//<TBD>
//MSG_ID_ATP_IWLAN_L4_CELLSIG_QUERY_RSP
typedef atp_iwlan_l4_cellsig_urcrpt_req_struct atp_iwlan_l4_cellsig_query_rsp_struct;


#endif /* _ATP_IWLAN_STRUCT_H */
