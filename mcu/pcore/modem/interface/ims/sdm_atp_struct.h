/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2013
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
 * Filename:
 * ------------
 *   sdm_atp_struct.h
 *
 * Project:
 * ------------
 *   MOLY
 *
 * Description:
 * ------------
 *   This file defines the interface messages between SDM and IMS Proxy.
 *
 * Author:
 * -----------
 * -------
 *
 *===========================================================
 * $Log$
 *
 * 02 20 2019 hsuanchang.chen
 * [MOLY00376426] [US_DEV][VzW][Gen93][Gen95] SMS to 911 and SCBM feature - SDM part
 * 	
 * 	. T911 (SDM part) interface
 *
 * 02 01 2019 hsuanchang.chen
 * [MOLY00380816] [Gen93][patch back] LR12A.R3.TC01.SP to LR12A/LR12A.R3.MP
 * 	
 * 	. TC01 sync to R3
 *
 * 01 30 2019 hsuanchang.chen
 * [MOLY00364197] [US_DEV][TMO][2019Q1][Gen93][GID-MTRREQ-460491] add +EPSI to report PSI information for verstat extract
 * 01 18 2019 hsuanchang.chen
 * [MOLY00379992] [US VAL][A503DL TF][911 call] Modem Crashed when Emergency call back mode send mo sms
 * 	
 * 	.
 *
 * 01 18 2019 hsuanchang.chen
 * [MOLY00379992] [US VAL][A503DL TF][911 call] Modem Crashed when Emergency call back mode send mo sms
 * 	
 * 	. AT+ECBM for SDM
 *
 * 06 27 2018 hsuanchang.chen
 * [MOLY00335837] [¶³UT] Fix ¶³UT issue
 * 	
 * 	. Fix Cloud UT issue
 *
 * 06 27 2018 hsuanchang.chen
 * [MOLY00335837] [¶³UT] Fix ¶³UT issue
 * . Fix Cloud UT issue
 *
 * 08 07 2017 hsuanchang.chen
 * [MOLY00220138] [SDM] LR12 to UMOLYA sync
 * 	
 * 	. sync [MOLY00261843] [CDMA-less][LR11.MP5] main feature CR (SDM)
 *
 * 04 05 2017 hsuanchang.chen
 * [MOLY00237411] [6293][PreIT] UTK/STK SMS Flow Merge
 * 	
 * 	. interface
 *
 * 04 05 2017 hsuanchang.chen
 * [MOLY00232032] [SDM] [MT SMS AT Merge] merge +CMT/+EIMSCMT and +CDS/+EIMSCDS
 * 	
 * 	. ATP and interface
 *
 * 04 05 2017 hsuanchang.chen
 * [MOLY00229182] [MT6293] EIMSCFG for SDM (SDM replace WFC enable to vowifi enable)
 * .
 *
 * 03 24 2017 hsuanchang.chen
 * [MOLY00228407] [SDM] Internal Re-arch
 * 	
 * 	add +ECFGSET/+ECFGGET for SDM Profile
 *
 * 03 20 2017 hsuanchang.chen
 * [MOLY00228407] [SDM] Internal Re-arch
 * 	
 * 	. remove tab and un-used code
 *
 * 01 06 2017 hsuanchang.chen
 * [MOLY00220510] [93 PREIT_DEV][UMOLYA] Rename IMSP interface/context/API to ATP and reorg folder layout
 *     
 *     . SDM interface part
 *
 * 12 15 2016 hsuanchang.chen
 * [SDM] rename IMSP to ATP
 *
 * 10 25 2016 zhichao.zhao
 * [MOLY00204308] [Áªµ÷][Jade][CT][VoLTE]SDM will not select CS domain for SMS when CS is unregistered in LTE
 *     
 *     .
 *
 * 05 23 2016 ian-yw.chen
 * [MOLY00180481] [SDM][ATT req.] Report start and end of MO SMS over IMS to AP (SDM/IMSP part)
 * .
 *
 * 03 24 2016 chinte.chen
 * [MOLY00167924] [L4][R12] Handling of SCM at VDM/SDM/L4 part
 * .
 *
 * 03 15 2016 ian-yw.chen
 * [MOLY00169015] [COPY CR][VzW][MT6735][Pre-LC][AT command][2.51]  case fail at AT+CMSS=1, shows error
 * SDM part
 *
 * 03 02 2016 ian-yw.chen
 * [MOLY00163894] [SMS][TC01] 3GPP2 SMS over IMS
 * [MT/PP download/STK] interface
 *
 * 03 02 2016 ian-yw.chen
 * [MOLY00163894] [SMS][TC01] 3GPP2 SMS over IMS
 *  [MO] interfaces
 *
 * 03 01 2016 ian-yw.chen
 * [MOLY00147454] VZW 3GPP2 SMS over IMS
 *  SDM and interfaces
 *
 * 09 18 2015 mika.leinonen
 * [MOLY00141364] [WWFT][MT6755][Jade][EU][Telefonica][VoLTE][Germany][FT] SMS must be sent over SGs in Telefonica Germany networks
 *     Integration change for UMOLY TRUNK.
 *     Dynamic framework implemented to configure MO SMS domain preferences in 4G per operator country variant.
 *     Review SDM: http://mtksap20:8080/go?page=ReviewDisplay&reviewid=213739
 *     Review IMSP: http://mtksap20:8080/go?page=ReviewDisplay&reviewid=213748
 *
 * 08 26 2015 ben.chiu
 * [MOLY00138217] [ViLTE] M0 migration ViLTE feature Interface
 * ViLTE interface patch back
 *
 * 07 30 2015 chinte.chen
 * [MOLY00132834] [COPY_CR][TMO][EM] Enable/Disable SMS over SGs through EM for TMO requirement 58071
 * .
 *
 * 07 09 2015 nick.wang
 * [MOLY00127009] WFC Patch back to UMOLY- interface part
 * .moly wfc interface patch
 *
 * 07 09 2015 nick.wang
 * [MOLY00127009] WFC Patch back to UMOLY- interface part
 *     .jade interface sync
 *
 * 05 08 2015 chinte.chen
 * [MOLY00110919] [SAT] Support STK SMS over IP
 * .
 *
 * 12 01 2014 chinte.chen
 * [MOLY00086104] [SDM][Revise] remove redundant src_id from IMSP/SDM/IMCSMS
 * .
 *
 * 11 22 2013 chinte.chen
 * [MOLY00047460] [MT6582LTE][IMS][VoLTE][Basic IT][IT3-045] Memory status reporting re-enable of SMSoIP
 * .
 *
 * 09 30 2013 chinte.chen
 * [MOLY00038966] [6290E1][VoLTE][IT][BringUp] Unable to complete RAT mode config
 * .
 *
 * 09 23 2013 jeff.wu
 * [MOLY00038672] [6290E1][VoLTE][IT][BringUp] SDM assert when receiving SMS over IP config ind
 * Rename sdm_atp_sms_over_ip_config_ind_struct to match msg id.
 *
 * 09 16 2013 chinte.chen
 * [MOLY00038029] [6290E1][VoLTE][IT][SMS] fixed SMS related build error
 * .
 *****************************************************************************/

#ifndef SDM_ATP_STRUCT_H
#define SDM_ATP_STRUCT_H

#include "ps_public_struct.h"
#include "sdm_imcsms_enums.h"
#include "ims_common_def.h"
#include "sdm_atp_enums.h"
#include "sim_public_enum.h"
#include "c2k_sms_enums.h"
#include "ps_public_enum.h"


#define _C2K_MT_SMS_AT_MERGE_  1
#define MAX_C2K_SMS_PDU_LENGTH 255

/*************************************
*
*    IMS domain
*
*************************************/

/* MSG_ID_SDM_ATP_CMD_SEND_SMS_IND */
typedef struct{
    LOCAL_PARA_HDR
} sdm_atp_cmd_send_sms_ind_struct;


/* MSG_ID_SDM_ATP_CMD_SEND_SMS_IND */
typedef struct{
    LOCAL_PARA_HDR
} sdm_atp_cmd_send_command_ind_struct;


/* MSG_ID_SDM_ATP_CMD_SEND_SMS_RSP */
typedef struct{
    LOCAL_PARA_HDR
    kal_bool    is_mr_present;
    kal_uint8   mr_value;
    kal_bool    is_err_cause_present;
    kal_uint16  err_cause_value;
} sdm_atp_cmd_send_sms_rsp_struct;


/* MSG_ID_SDM_ATP_URC_RCV_SMS_REQ */
typedef struct{
    LOCAL_PARA_HDR
    sms_addr_struct   sc_addr;
} sdm_atp_urc_rcv_sms_req_struct;

/* MSG_ID_SDM_ATP_CMD_SEND_DELIVER_REPORT_IND */
/* MSG_ID_SDM_ATP_CMD_SEND_CS_DELIVER_REPORT */
typedef struct{
    LOCAL_PARA_HDR
    kal_uint8   n_value;
    kal_uint8   length;     
    kal_bool    is_cdscnma;
} sdm_atp_cmd_send_deliver_report_ind_struct, sdm_atp_cmd_send_cs_deliver_report_struct;

typedef struct{
    LOCAL_PARA_HDR
    wfc_profile_enum wfc_profile;
} sdm_atp_cmd_wfc_profile_ind_struct, sdm_atp_cmd_set_wfc_profile_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool            volte_enable;
    kal_bool            vilte_enable;
    kal_bool            vowifi_enable;
    kal_bool            viwifi_enable; 
    kal_bool            ims_sms_enable; 
    kal_bool            eims_enable;    
} sdm_atp_cmd_eimscfg_ind_struct;

/* MSG_ID_SDM_ATP_CMD_SEND_MEM_AVL_NOTIF_IND */
typedef struct{
    LOCAL_PARA_HDR
    kal_uint8   smma;       /* 0:abort the smma, 1:send smma */
} sdm_atp_cmd_send_mem_avl_notif_ind_struct;


/* MSG_ID_SDM_ATP_CMD_SEND_SMMA_UPDATE_REQ */
typedef struct{
    LOCAL_PARA_HDR
    kal_bool    update_mem;  /* TRUE if SDM rcv +EMEMS=1,1 */
    kal_bool    update_file; /* TRUE if SDM rcv MEM_AVL_NOTIF_CNF */
} sdm_atp_cmd_send_smma_update_req_struct;


/* MSG_ID_SDM_ATP_IMS_REG_STATUS_IND */
typedef struct{
    LOCAL_PARA_HDR
    ims_reg_state_enum         ims_reg_state;
    ims_reg_type_enum          ims_reg_type;
    ims_access_rat_enum        rat;
    ims_reg_service_enum       ims_reg_service;
    ims_ecmp_enum              ecmp;
    ims_reg_sip_uri_type_enum  sip_uri_type;
} sdm_atp_ims_reg_status_ind_struct;


/* MSG_ID_SDM_ATP_SMS_OVER_IP_CONFIG_IND */
typedef struct{
    LOCAL_PARA_HDR
    kal_uint8   sms_over_ip_nw_ind;
} sdm_atp_sms_over_ip_config_ind_struct;

/* MSG_ID_SDM_ATP_NAS_PS_REG_STATUS_IND */
typedef struct {
    LOCAL_PARA_HDR
    sdm_nas_ps_reg_status_enum nas_ps_reg_status;
} sdm_atp_nas_ps_reg_status_ind_struct;

/* MSG_ID_SDM_ATP_NAS_CS_REG_STATUS_IND */
typedef struct {
    LOCAL_PARA_HDR
    sdm_nas_cs_reg_status_enum nas_cs_reg_status;
} sdm_atp_nas_cs_reg_status_ind_struct;

/* MSG_ID_SDM_ATP_IMSI_GET_REQ */
typedef struct{
    LOCAL_PARA_HDR
} sdm_atp_imsi_get_req_struct;

/* MSG_ID_SDM_ATP_IMSI_GET_CNF */
typedef struct{
    LOCAL_PARA_HDR
    sdm_at_cmd_result_enum result;
} sdm_atp_imsi_get_cnf_struct;

/* MSG_ID_SDM_ATP_CMD_STK_SMS_IND */
typedef struct{
    LOCAL_PARA_HDR
} sdm_atp_cmd_stk_sms_ind_struct;

/* MSG_ID_SDM_ATP_STK_SMS_QUERY_REQ */
typedef struct{
    LOCAL_PARA_HDR
} sdm_atp_stk_sms_query_req_struct;

/* MSG_ID_SDM_ATP_STK_SMS_QUERY_CNF */
typedef struct{
    LOCAL_PARA_HDR
    kal_uint8 pdu_len;
    kal_uint8 sms_pdu[MAX_SMS_PDU_LEN];
    sdm_system_type_enum system_type;
} sdm_atp_stk_sms_query_cnf_struct;

/* MSG_ID_SDM_ATP_STK_SMS_TR_REQ */
typedef struct{
    LOCAL_PARA_HDR
    sat_terminal_res_enum tr;
    kal_bool addition_info_present;
    kal_uint8 addition_info;
} sdm_atp_stk_sms_tr_req_struct;

/* MSG_ID_SDM_ATP_IMS_SMS_SMART_CONGESTION_REQ*/
typedef struct
{
    LOCAL_PARA_HDR
    sdm_ims_session_indication_enum indication;   // CSCM=<SMSoIP=2>,<start-end indication>, Start:1, End:2

} sdm_atp_ims_sms_smart_congestion_req_struct;


/* MSG_ID_SDM_ATP_CMD_SEND_SMS_DELIVER_IND*/
typedef struct
{
    LOCAL_PARA_HDR
    sdm_sms_domain_enum sms_domain;   
} sdm_atp_cmd_send_sms_deliver_ind_struct;

/* MSG_ID_SDM_ATP_CMD_SEND_C2K_SMS_DELIVER_IND*/
typedef struct
{
    LOCAL_PARA_HDR 
    kal_uint8 pdu_len;
    kal_uint8 pdu[MAX_C2K_SMS_PDU_LENGTH];    
} sdm_atp_cmd_send_c2k_sms_deliver_ind_struct;

/* MSG_ID_SDM_ATP_SMS_DELIVER_URC_IND */
typedef struct
{
  LOCAL_PARA_HDR  
} sdm_atp_sms_deliver_urc_ind_struct;

/* MSG_ID_SDM_ATP_C2K_SMS_DELIVER_URC_IND */
typedef struct
{
  LOCAL_PARA_HDR  
} sdm_atp_c2k_sms_deliver_urc_ind_struct;

/* MSG_ID_SDM_ATP_CMD_SEND_STATUS_REPORT_IND*/
typedef struct
{
    LOCAL_PARA_HDR
    sdm_sms_domain_enum sms_domain;   
} sdm_atp_cmd_send_status_report_ind_struct;

/* MSG_ID_SDM_ATP_STATUS_REPORT_URC_IND */
typedef struct
{
  LOCAL_PARA_HDR  
} sdm_atp_status_report_urc_ind_struct;

/*
   MSG_ID_SDM_ATP_IMS_NORMAL_SMS_SMART_CONGESTION_START_REQ,
   MSG_ID_SDM_ATP_IMS_STK_SMS_SMART_CONGESTION_START_REQ,
   MSG_ID_SDM_ATP_IMS_CMSS_SMS_SMART_CONGESTION_START_REQ,
   MSG_ID_SDM_ATP_IMS_C2K_SMS_SMART_CONGESTION_START_REQ,
   MSG_ID_SDM_ATP_IMS_UTK_SMS_SMART_CONGESTION_START_REQ,
*/

typedef struct
{
    LOCAL_PARA_HDR
} sdm_atp_ims_sms_smart_congestion_start_req_struct;

typedef sdm_atp_ims_sms_smart_congestion_start_req_struct sdm_atp_ims_normal_sms_smart_congestion_start_req_struct;
typedef sdm_atp_ims_sms_smart_congestion_start_req_struct sdm_atp_ims_stk_sms_smart_congestion_start_req_struct;
typedef sdm_atp_ims_sms_smart_congestion_start_req_struct sdm_atp_ims_cmss_sms_smart_congestion_start_req_struct;
typedef sdm_atp_ims_sms_smart_congestion_start_req_struct sdm_atp_ims_c2k_sms_smart_congestion_start_req_struct;
typedef sdm_atp_ims_sms_smart_congestion_start_req_struct sdm_atp_ims_utk_sms_smart_congestion_start_req_struct;


/* MSG_ID_SDM_ATP_IMS_SMS_SMART_CONGESTION_STOP_REQ */
typedef struct
{
    LOCAL_PARA_HDR
} sdm_atp_ims_sms_smart_congestion_stop_req_struct;

/*
   MSG_ID_SDM_ATP_IMS_NORMAL_SMS_SMART_CONGESTION_START_CNF,
   MSG_ID_SDM_ATP_IMS_STK_SMS_SMART_CONGESTION_START_CNF,
   MSG_ID_SDM_ATP_IMS_CMSS_SMS_SMART_CONGESTION_START_CNF,
   MSG_ID_SDM_ATP_IMS_C2K_SMS_SMART_CONGESTION_START_CNF,
   MSG_ID_SDM_ATP_IMS_UTK_SMS_SMART_CONGESTION_START_CNF,
*/

typedef struct{
    LOCAL_PARA_HDR
    sdm_at_cmd_result_enum result;
} sdm_atp_ims_sms_smart_congestion_start_cnf_struct;

typedef sdm_atp_ims_sms_smart_congestion_start_cnf_struct sdm_atp_ims_normal_sms_smart_congestion_start_cnf_struct;
typedef sdm_atp_ims_sms_smart_congestion_start_cnf_struct sdm_atp_ims_stk_sms_smart_congestion_start_cnf_struct;
typedef sdm_atp_ims_sms_smart_congestion_start_cnf_struct sdm_atp_ims_cmss_sms_smart_congestion_start_cnf_struct;
typedef sdm_atp_ims_sms_smart_congestion_start_cnf_struct sdm_atp_ims_c2k_sms_smart_congestion_start_cnf_struct;
typedef sdm_atp_ims_sms_smart_congestion_start_cnf_struct sdm_atp_ims_utk_sms_smart_congestion_start_cnf_struct;


/* MSG_ID_SDM_ATP_IMS_SMS_SMART_CONGESTION_STOP_CNF */
typedef struct{
    LOCAL_PARA_HDR
    sdm_at_cmd_result_enum result;
} sdm_atp_ims_sms_smart_congestion_stop_cnf_struct;

/* MSG_ID_SDM_ATP_IMS_SMS_SMART_CONGESTION_URC_IND */
typedef struct
{
    LOCAL_PARA_HDR
    sdm_ims_session_indication_enum indication;   // <start-end indication> Start:1, End:2

} sdm_atp_ims_sms_smart_congestion_urc_ind_struct;
/*******************/
/* C2K SMS over IMS */
/*******************/

/* MSG_ID_SDM_ATP_CMD_SEND_C2K_SMS_IND */
typedef struct{
    LOCAL_PARA_HDR
    kal_bool                 is_da_valid;
    kal_bool                 is_international;
    kal_uint8                da[MAX_C2K_SMS_DA];    
} sdm_atp_cmd_send_c2k_sms_ind_struct;

/* MSG_ID_SDM_ATP_CMD_SEND_C2K_SMS_RSP */
typedef struct{
    LOCAL_PARA_HDR
    kal_uint8            error_class;
    kal_uint16           cause_code;
    kal_uint16           msg_id;  
} sdm_atp_cmd_send_c2k_sms_rsp_struct;


/* MSG_ID_SDM_ATP_URC_RCV_C2K_SMS_REQ */
typedef struct{
    LOCAL_PARA_HDR
} sdm_atp_urc_rcv_c2k_sms_req_struct;


/* MSG_ID_SDM_ATP_SEND_C2K_MSG_URC_IND */
typedef struct{
    LOCAL_PARA_HDR
    kal_uint16 length;
    kal_uint8  pdu[MAX_SMS_PDU_LEN];
} sdm_atp_send_c2k_msg_urc_ind_struct;


/* MSG_ID_SDM_ATP_CMD_SEND_C2K_ACKNOWLEDGE_IND */
typedef struct{
    LOCAL_PARA_HDR
} sdm_atp_cmd_send_c2k_acknowledge_ind_struct;


/*************************************
*
*    CS domain
*
*************************************/

/* MSG_ID_SDM_ATP_CS_SMS_SUBMIT */
typedef struct{
    LOCAL_PARA_HDR
} sdm_atp_cs_sms_submit_struct;


/* MSG_ID_SDM_ATP_CS_SMS_SUBMIT_REPORT_ACK */
typedef struct{
    LOCAL_PARA_HDR
} sdm_atp_cs_sms_submit_report_ack_struct;


/* MSG_ID_SDM_ATP_CS_SMS_SUBMIT_REPORT_NACK */
typedef struct{
    LOCAL_PARA_HDR
} sdm_atp_cs_sms_submit_report_nack_struct;


/* MSG_ID_SDM_ATP_CS_SMS_COMMAND */
typedef struct{
    LOCAL_PARA_HDR
} sdm_atp_cs_sms_command_struct;

/* MSG_ID_SDM_ATP_CS_SMS_SMMA */
typedef struct{
    LOCAL_PARA_HDR
    kal_uint8   smma;   /*0:abort the smma, 1: send smma*/
} sdm_atp_cs_sms_smma_struct;

/* MSG_ID_SDM_ATP_SMS_OVER_SGS_CONFIG_IND */
typedef struct
{
    LOCAL_PARA_HDR 
    kal_bool enable;
} sdm_atp_sms_over_sgs_config_ind_struct;

/* MSG_ID_SDM_ATP_CS_STK_SMS_REQ */
typedef struct{
    LOCAL_PARA_HDR
} sdm_atp_cs_stk_sms_req_struct;

/* MSG_ID_SDM_ATP_CS_STK_SMS_CNF */
typedef struct{
    LOCAL_PARA_HDR
    kal_uint8 result;
    sat_terminal_res_enum tr;
    kal_bool addition_info_present;
    kal_uint8 addition_info;
} sdm_atp_cs_stk_sms_cnf_struct;

/*************************************
*
*    CMSS: Message Send from Storage
*
*************************************/

/* MSG_ID_SDM_ATP_CMD_SEND_CMSS_IND */
typedef struct{
    LOCAL_PARA_HDR
    kal_uint8           index;
    l4c_number_struct    da;
} sdm_atp_cmd_send_cmss_ind_struct;

/* MSG_ID_SDM_ATP_CMD_SEND_CMSS_RSP */
typedef struct{
    LOCAL_PARA_HDR
    kal_bool    is_mr_present;
    kal_uint8   mr_value;
    kal_bool    is_err_cause_present;
    kal_uint16  err_cause_value;
} sdm_atp_cmd_send_cmss_rsp_struct;

/* MSG_ID_SDM_ATP_CMSS_IMS_REQ */
typedef struct{
    LOCAL_PARA_HDR
    kal_bool            is_retry;
    kal_uint8           domain;     //Domain = 0 for IMS; Domain = 1 for CS
    kal_uint8           mr;
    kal_uint8           index;
    l4c_number_struct   da;
} sdm_atp_cmss_ims_req_struct;

typedef  sdm_atp_cmss_ims_req_struct sdm_atp_cmss_cs_req_struct;

/* MSG_ID_SDM_ATP_CMSS_IMS_CNF */
typedef struct{
    LOCAL_PARA_HDR
    kal_uint8           result;     
                    //<result> 0: if unable to get the PDU correctly from the storage
                    //         1: if operation is successful
                    //         2: if sending the SMS over CS domain fails, but PDU is successfully retrieved. 
                    //               (Only Possible if the domain is CS)
    sms_addr_struct     sca;
    kal_uint8           mr;
} sdm_atp_cmss_ims_cnf_struct;

typedef sdm_atp_cmss_ims_cnf_struct sdm_atp_cmss_cs_cnf_struct;

/* MSG_ID_SDM_ATP_UPDATE_MSG_BOX_REQ */
typedef struct{
    LOCAL_PARA_HDR
    kal_bool            result;
    kal_uint8           mr;
} sdm_atp_update_msg_box_req_struct;

/* MSG_ID_SDM_ATP_UPDATE_MSG_BOX_CNF */
typedef struct{
    LOCAL_PARA_HDR
    kal_bool           result;
} sdm_atp_update_msg_box_cnf_struct;

/*************************************
*
*    miscellaneous
*
*************************************/

/*
 * @brief 
 * @note MSG_ID_ATP_SDM_ECFG_SET_REQ
 *       AT> AT+ECFGSET=<cfg_name>,<cfg_value>
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8    name[64];      
    kal_uint8    value[128];    
} sdm_atp_ecfg_set_req_struct;

/*
 * @brief 
 * @note MSG_ID_ATP_SDM_ECFG_SET_CNF
 *       AT< OK or +CME ERROR:<err>
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_bool            result; // KAL_TRUE-success; KAL_FALSE-fail
    ims_err_id_enum     cause;  
                                
} sdm_atp_ecfg_set_cnf_struct;


/*
 * @brief 
 * @note MSG_ID_ATP_SDM_ECFG_GET_REQ
 *       AT> AT+ECFGSET=<cfg_name>
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8    name[64];      
} sdm_atp_ecfg_get_req_struct;


/*
 * @brief 
 * @note MSG_ID_ATP_SDM_ECFG_GET_CNF
 *       AT< +ECFGGET:<cfg_name>,<cfg_value>
 *       AT< OK or +CME ERROR:<err>
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_bool            result;     // KAL_TRUE-success; KAL_FALSE-fail
    ims_err_id_enum     cause;      
                                    
    kal_uint8           name[64];   
    kal_uint8           value[128]; 
} sdm_atp_ecfg_get_cnf_struct;

/* 
* @brief 
* @note MSG_ID_SDM_ATP_REPORT_PSI_URC_IND
*       +EPSI: <psi>    
*/
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8           psi[128];
} sdm_atp_report_psi_urc_ind_struct;


/*
 * @brief 
 * @note MSG_ID_SDM_ATP_SEND_ECBM_OPERATION_REQ
 *       AT< +ECBM:<mode>,<rat>
 *       AT< OK or +CME ERROR:<err>
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 mode;     
    rat_enum  rat;
    kal_uint8 cause;
} sdm_atp_send_ecbm_operation_req_struct;

/* MSG_ID_SDM_ATP_CMD_EXIT_SCBM_IND */
typedef struct{
    LOCAL_PARA_HDR
    exit_scbm_reason_enum            reason;
} sdm_atp_cmd_exit_scbm_ind_struct;

/* MSG_ID_SDM_ATP_SEND_SCBM_URC_IND */
typedef struct{
    LOCAL_PARA_HDR
    md_scbm_status_enum              md_scbm_status;
} sdm_atp_send_scbm_urc_ind_struct;

/******************************************************************************
 * AT+EAPPROVE:<dial_string>
 * +EAPPROVE:<is_allowed>,<is_emergency>
 *****************************************************************************/
typedef struct 
{  
    LOCAL_PARA_HDR 
    kal_uint8                       dial_num[MAX_CC_ATD_NUM_LEN];
} sdm_atp_fdn_ecc_check_req_struct;

typedef struct 
{  
    LOCAL_PARA_HDR
    kal_bool                        is_allowed;
    kal_bool                        is_emergency;
    kal_uint16                      emergency_service_category;
} sdm_atp_fdn_ecc_check_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool            is_ut_mode_valid;
    kal_bool            ut_mode;
    kal_bool            is_force_sms_category_valid;
    kal_uint8           force_sms_category; //0: normal, 1: emergency
} sdm_ut_config_struct;

//MSG_ID_SDM_EXTERNAL_EXIT_SCBM_IND
typedef struct
{
    LOCAL_PARA_HDR
    exit_scbm_reason_enum reason;
}sdm_external_exit_scbm_ind_struct;

#endif // SDM_ATP_STRUCT_H

