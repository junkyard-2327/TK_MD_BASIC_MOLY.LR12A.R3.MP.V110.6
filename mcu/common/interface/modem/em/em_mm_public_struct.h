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
 *   em_mm_public_struct.h
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
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
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
#include "mm_mmi_enums.h"
#include "l3_inc_enums.h"

#ifndef _EM_MM_PUBLIC_STRUCT_H
#define _EM_MM_PUBLIC_STRUCT_H

#include "em_public_struct.h"
#include "l3_inc_enums.h"
#include "l3_inc_local.h"


/* MM Enum */

typedef enum {
    ACCESS_CLASS_NOT_BARRED      = 0,
    ACCESS_CLASS_EMERGENCY_ONLY  = 1,
    ACCESS_CLASS_ALL_BARRED      = 2,
    ACCESS_CLASS_NOT_AVAILABLE   = 3
} access_class_level_enum;


typedef enum {
    PPAC_FOR_NONE_DOMAIN = 0,
    PPAC_FOR_CS_DOMAIN = 1,
    PPAC_FOR_PS_DOMAIN = 2,
    PPAC_FOR_CS_PS_DOMAIN = 3,
    PPAC_NOT_AVAILABLE = 4
} ppac_domain_enum;


typedef enum
{
    EM_MM_AS_FAIL,
    EM_GMM_AS_FAIL
}em_as_fail_type_enum;


typedef enum
{
    EM_MM_LR_NONE = 0,
    EM_MM_LR_ONGOING,
    EM_MM_LR_SUCCESS,
    EM_MM_LR_SUCCESS_PS_ONLY,
    EM_MM_LR_FAILURE,
    EM_MM_LR_END
}em_mm_lr_status_enum;

typedef enum
{
    EM_MM_NONE = 0,
    EM_MM_REJECTED_BY_NW, //getting rejected by NW
    EM_MM_TIMER_TIME_OUT, //Guard timer timeout
    EM_MM_LOW_LAYER_FAILURE,//low layer failure
    EM_MM_ABORT,//procedure is abort
    EM_MM_AUTH_FAILURE,
    EM_MM_AUTH_REJECTED_BY_NW,
    EM_MM_END
}em_lr_failure_cause_enum;

typedef enum
{
    EM_CSFB_NONE    = 0,
    EM_CSFB_START   = 1,
    EM_CSFB_SUCCESS = 2,
    EM_CSFB_FAIL    = 3
} em_csfb_status_enum;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_bool is_mt_csfb_lu_needed;
    kal_bool is_t3240_exp;
}em_mm_mt_csfb_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    em_csfb_status_enum csfb_status;
}em_mm_csfb_status_ind_struct;

typedef enum
{
    EM_REG_TYPE_LU,
    EM_REG_TYPE_ATTACH,
    EM_REG_TYPE_RAU
}em_reg_type_enum;

typedef enum
{
    EM_MM_AUTH_REJ,
    EM_GMM_AUTH_REJ
}em_auth_rej_type_enum;

typedef enum
{
    EM_MM_GMM_PROC_NONE = 0,
    EM_MM_CM_SERVICE_REJECT,
    EM_MM_GMM_SERVICE_REJECT,
    EM_MM_NW_TO_MS_DETACH_REQUEST
}em_mm_gmm_proc_enum;

/* GMM Service reject info */
typedef struct
{
    mm_cause_enum gmm_service_rej_cause;	
}em_gmm_service_rej_info_struct;

/* CM Service reject info */
typedef struct
{
    mm_cause_enum cm_service_rej_cause;	
}em_cm_service_rej_info_struct;

/* NW to MS GMM detach request */
typedef struct
{
	nw_to_ms_detach_type_enum nw_to_ms_detach_type;
	mm_cause_enum nw_to_ms_detach_cause;	
}em_nw_to_ms_detach_request_info_struct;

typedef union
{
	em_gmm_service_rej_info_struct gmm_service_reject;
    em_cm_service_rej_info_struct cm_service_reject;
	em_nw_to_ms_detach_request_info_struct nw_to_ms_detach_request;
}em_mm_gmm_proc_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rat_enum current_rat;
	em_mm_gmm_proc_enum mm_gmm_proc;
    em_mm_gmm_proc_info_struct mm_gmm_proc_info;
}em_mm_gmm_proc_rej_info_ind_struct;

typedef enum 
{ 
    EM_MM_MTCSFB_NONE    = 0, 
    EM_MM_MTCSFB_START   = 1, 
    EM_MM_MTCSFB_SUCCESS = 2, 
    EM_MM_MTCSFB_FAIL    = 3, 
    EM_MM_MTCSFB_FAIL_PAGING_GUARD_TIMER_EXPIRED = 4, 
    EM_MM_MTCSFB_FAIL_T3240_TIMEOUT = 5, 
    EM_MM_MTCSFB_FAIL_AUTH_FAIL = 6, 
    EM_MM_MTCSFB_FAIL_CONN_EST_FAIL = 7, 
    EM_MM_MTCSFB_FAIL_LAU_REJECT = 8, 
    EM_MM_MTCSFB_FAIL_RRC_REL_IND_RECEIVED = 9, 
    EM_MM_MTCSFB_LAU_ACCEPT = 10, 
    EM_MM_MTCSFB_FAIL_PLMN_LOSS_IND_RECEIVED = 11, 
    EM_MM_MTCSFB_FAIL_SIM_ERROR_IND_RECEIVED = 12, 
    EM_MM_MTCSFB_PAGING_RESPONSE_SENT = 13,   
    EM_MM_MTCSFB_PAGING_BLOCKED_BY_ACCESS_BARRED = 14 
} em_mt_csfb_status_enum; 
 
typedef enum 
{ 
    EM_MM_MT_CS_NONE, 
	EM_MM_MT_CS_SUCCESS, 
    EM_MM_RR_REL_IND_RECEIVED , 
    EM_MM_MT_CS_FAIL_LU_ABNORMAL, 
    EM_MM_T3240_TIMEOUT, 
    EM_MM_PAGING_RESPONSE_SENT, 
    EM_MM_PAGING_BLOCKED_BY_ACCESS_BARRED, 
    EM_MM_AUTH_REJECT, 
    EM_MM_AUTH_FAIL, 
    EM_MM_PLMN_LOSS_IND_RECEIVED, 
    EM_MM_SIM_ERROR_IND_RECEIVED, 
    EM_MM_CONN_EST_FAIL    
} em_mm_mt_cs_status; 
 
typedef enum 
{ 
    EM_MM_MOCSFB_NONE    = 0, 
    EM_MM_MOCSFB_START   = 1, 
    EM_MM_MOCSFB_SUCCESS = 2, 
    EM_MM_MOCSFB_FAIL    = 3, 
    EM_MM_MOCSFB_CM_SERV_REJECT = 4,
    EM_MM_MOCSFB_FAIL_T3240_TIMEOUT = 5, 
    EM_MM_MOCSFB_FAIL_AUTH_FAIL = 6, 
    EM_MM_MOCSFB_FAIL_CONN_EST_FAIL = 7, 
    EM_MM_MOCSFB_FAIL_LAU_REJECT = 8, 
    EM_MM_MOCSFB_FAIL_RRC_REL_IND_RECEIVED = 9, 
    EM_MM_MOCSFB_LAU_ACCEPT = 10, 
    EM_MM_MOCSFB_FAIL_PLMN_LOSS_IND_RECEIVED = 11, 
    EM_MM_MOCSFB_FAIL_SIM_ERROR_IND_RECEIVED = 12, 
    EM_MM_MOCSFB_ACCESS_CLASS_BARRED = 13,
    EM_MM_MOCSFB_FAIL_T3230_TIMEOUT = 14,
} em_mo_csfb_status_enum;

typedef enum
{ 
    EM_MM_MO_CS_NONE, 
    EM_MM_MO_CS_SUCCESS,
    EM_MM_MO_RR_REL_IND_RECEIVED , 
    EM_MM_MO_CS_FAIL_LU_ABNORMAL, 
    EM_MM_MO_T3240_TIMEOUT, 
    EM_MM_MO_AUTH_REJECT, 
    EM_MM_MO_AUTH_FAIL, 
    EM_MM_MO_PLMN_LOSS_IND_RECEIVED, 
    EM_MM_MO_SIM_ERROR_IND_RECEIVED, 
    EM_MM_MO_CONN_EST_FAIL,
    EM_MM_MO_CM_SERV_REJECT,
    EM_MM_MO_ACCESS_CLASS_BARRED,
    EM_MM_MO_T3230_TIMEOUT,
} em_mm_mo_cs_status; 
 
 typedef enum 
 { 
     EM_MM_MT_CS_CALL    = 0, 
     EM_MM_MT_CSFB_CALL  = 1, 
     EM_MM_MO_CS_CALL    = 2, 
     EM_MM_MO_CSFB_CALL  = 3, 
     EM_MM_CALL_NONE  = 4 
 } mm_cs_call_type_enum; 
 
 typedef enum {
	 EM_MM_STATE_BEGIN = 0, 	/* MM state begin value */
  /* On Power-on, MM starts with NULL State */
	 EM_MM_NULL_STATE = EM_MM_STATE_BEGIN,
	 EM_MM_LOCATION_UPDATING_INITIATED,
	 EM_MM_WAIT_FOR_OUTGOING_MM_CONN,
	 EM_MM_CONN_ACTIVE,
	 EM_MM_IMSI_DETACH_INITIATED,
	 EM_MM_PROCESS_CM_SERVICE_PROMPT,
	 EM_MM_WAIT_FOR_NETWORK_COMMAND,
	 EM_MM_LOCATION_UPDATE_REJECTED,
	 EM_MM_WAIT_FOR_RR_CONN_LU,
	 EM_MM_WAIT_FOR_RR_CONN_MM_CONN,
	 EM_MM_WAIT_FOR_RR_CONN_IMSI_DETACH,
	 EM_MM_WAIT_FOR_RR_CONN_PAGING, //11
	 EM_MM_WAIT_FOR_REESTABLISH,
  /* Main State MM IDLE and its Sub states are combined as follows */
	 EM_MM_IDLE_NORMAL_SERVICE,
	 EM_MM_IDLE_ATTEMPTING_TO_UPDATE,
	 EM_MM_IDLE_LIMITED_SERVICE,
	 EM_MM_IDLE_NO_IMSI,
	 EM_MM_IDLE_NO_CELL_AVAILABLE,
	 EM_MM_IDLE_LOCATION_UPDATE_NEEDED,
	 EM_MM_IDLE_PLMN_SEARCH,
	 EM_MM_IDLE_PLMN_SEARCH_NORMAL_SERVICE, //20
	 EM_MM_WAIT_FOR_ADDITIONAL_OUTGOING_MM_CONN,
	 EM_MM_LOCATION_UPDATING_PENDING, /* for combined procedure  */
	 EM_MM_IMSI_DETACH_PENDING, 			 /* for combined procedure */
	 EM_MM_RR_CONN_REL_NOT_ALLOWED, //24 /*for AGPS*/
	 EM_MM_IDLE_ECALL_INACTIVE, //25, for __ECALL_SUPPORT__
	 EM_MM_IDLE_RECVING_GRP_CALL_NS, /* not used now */
	 EM_MM_IDLE_RECVING_GRP_CALL_LS, /* not used now */
	 EM_MM_CONN_ACTIVE_GRP_XMIT_MODE, /* not used now */
	 EM_MM_WAIT_FOR_RR_CONN_GRP_XMIT_MODE, /* not used now */
	 EM_MM_TOT_STATE		  /* Total number of MM states */
 }em_mm_state_enum;
 
 
 typedef enum
 {
	 EM_GMM_STATE_BEGIN = 0,	 /* GMM state begin value */
	 /* On Power-on, GMM starts with NULL State */
	 EM_GMM_NULL_STATE = EM_GMM_STATE_BEGIN,
 
	 /* Main State Deregistered and its Sub states are combined as
	  * follows */
	 EM_GMM_DEREG_NORMAL_SERVICE_STATE,
	 EM_GMM_DEREG_SUSPEND_STATE,
	 EM_GMM_DEREG_LTD_SERVICE_STATE,
	 EM_GMM_DEREG_ATTACH_NEEDED_STATE,
	 EM_GMM_DEREG_ATTEMPT_TO_ATTACH_STATE,
	 EM_GMM_DEREG_NO_IMSI_STATE,
	 EM_GMM_DEREG_NO_CELL_STATE,
	 EM_GMM_DEREG_PLMN_SEARCH_STATE,
 
	 /* Once Attach-Req Message is sent, GMM moves to REG_INIT_STATE */
	 EM_GMM_REG_INIT_STATE,
 
	 /* Main State Registered and its Sub states are combined as
	  * follows */
	 EM_GMM_REG_NORMAL_SERVICE_STATE,
	 EM_GMM_REG_SUSPEND_STATE,
	 EM_GMM_REG_UPDATE_NEEDED_STATE,
	 EM_GMM_REG_ATTEMPT_TO_UPDATE_STATE,
	 EM_GMM_REG_ATTEMPT_TO_UPDATE_MM_STATE,
	 EM_GMM_REG_NO_CELL_STATE,
	 EM_GMM_REG_LTD_SERVICE_STATE,
 
	 /* Whenever Detach is Started, GMM moves to DEREG_INIT State */
	 EM_GMM_DEREG_INIT_STATE,
 
	 /* When RAU Starts, GMM moves to RAU_INIT State */
	 EM_GMM_RAU_INIT_STATE, /* Temp fix */
	 EM_GMM_REG_IMSI_DETACH_INIT_STATE,
	 EM_GMM_SERVICE_REQ_INIT_STATE,
	 EM_GMM_REG_PLMN_SEARCH_STATE, /* Not defined in Standards, used for
								   manual PLM selection */
	 EM_GMM_TOT_STATE		   /* Total number of GMM states */
 }em_gmm_state_enum;
 
 
 
 typedef enum
 {
	 EM_MM_IMSI_TYPE = 1,
	 EM_MM_IMEI_TYPE = 2,
	 EM_MM_IMEISV_TYPE = 3,
	 EM_MM_TMSI_TYPE = 4,
	 EM_MM_PTMSI_TYPE = 4,
	 EM_MM_NONE_TYPE = 5,
	 EM_MM_MASK_TYPE = 0x7
 }em_mm_identity_type_enum;
 
 typedef enum
 {
	 EM_MM_REG_PROC_STATUS_NA = 0,
	 EM_MM_REG_PROC_STATUS_ACCEPT = 1,
	 EM_MM_REG_PROC_STATUS_REJ = 2
 }em_mm_reg_proc_status_enum;
 
 typedef enum
 {
	 EM_MM_SERV_CAP_NA = 0,
	 EM_MM_SERV_CAP_CS_ONLY = 1,
	 EM_MM_SERV_CAP_PS_ONLY = 2,
	 EM_MM_SERV_CAP_CS_PS = 3
 }em_mm_cell_serv_cap_enum;
 
 typedef enum
 {
	  EM_GMM_GPRS_DETACHED = 0,
	  EM_GMM_GPRS_ATTACHED = 1
 }em_gmm_gprs_attach_status_enum; /* mtk00938: AT&T CDR-PER-191 GPRS Attach Status */
 
 typedef enum
 {
	 EM_GMM_REG_PROC_STATUS_NA = 0,
	 EM_GMM_REG_PROC_STATUS_ACCEPT = 1,
	 EM_GMM_REG_PROC_STATUS_REJ = 2
 }em_gmm_reg_proc_status_enum;
 
 
 typedef enum
 {
	 EM_PS_PROC_STATUS_NA = 0x00,
	 EM_SRV_STATUS_SIG_NA = 0x40,
	 EM_SRV_STATUS_DATA_NA,
	 EM_SRV_STATUS_PAGING_NA,
	 EM_SRV_STATUS_SECMMODE_ACCEPTED,
	 EM_SRV_STATUS_ACCEPTED,
	 EM_SRV_STATUS_REJ,
	 EM_SRV_STATUS_TIMEOUT,
	 EM_SRV_STATUS_NA,
	 EM_UE_GPRS_DETACH = 0x80,
	 EM_UE_GPRS_DETACH_PWRDOWN,
	 EM_UE_DETACH_ACC,
	 EM_NW_DETACH = 0xC0,
	 EM_NW_DETACH_REATTACH_REQ,
	 EM_NW_DETACH_REATTACH_NOT_REQ,
	 EM_NW_DETACH_IMSI_DETACH
 }em_gmm_serv_rej_detach_status_enum;

typedef  mm_cs_call_type_enum em_mm_mt_call_type_enum; 
typedef  mm_cs_call_type_enum em_mm_mo_call_type_enum; 

 
typedef struct 
{ 
    LOCAL_PARA_HDR 
    em_info_enum em_info; 
    em_mt_csfb_status_enum mt_csfb_status; 
    em_mm_mt_call_type_enum mm_mt_call_type; 
	kal_uint8 mm_state; 
	kal_uint8 mm_cause; 
	em_mm_mt_cs_status mm_mt_cs_status; 
	kal_uint8 reserved_for_padding;  
	kal_uint8 reserved_for_padding1; 
	kal_uint8 reserved_for_padding2; 
}em_mm_mtcs_mtcsfb_status_ind_struct;  


typedef struct 
{ 
    LOCAL_PARA_HDR 
    em_info_enum em_info; 
    em_mo_csfb_status_enum mo_csfb_status; 
    em_mm_mo_call_type_enum mm_mo_call_type; 
    kal_uint8 mm_state; 
    kal_uint8 mm_cause; 
    em_mm_mo_cs_status mm_mo_cs_status; 
    kal_uint8 reserved_for_padding;  
    kal_uint8 reserved_for_padding1; 
    kal_uint8 reserved_for_padding2; 
}em_mm_mocs_mocsfb_status_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint8   t3212_val;  //T3212 timer value
    att_flag_enum   att_flag;   //ATT flag
    mm_cause_enum   mm_cause;   //MM Reject cause, if any
    em_mm_state_enum   mm_state;   //MM State
    kal_uint8   mcc[3]; //MCC
    kal_uint8   mnc[3]; //MNC
    kal_uint8   loc[2]; //registered LAC
    kal_uint8   rac;     //registered RAC
    kal_uint8   tmsi[4];    //TMSI, if valid
    kal_bool is_t3212_running;
    kal_uint16  t3212_timer_value;
    kal_uint16  t3212_passed_time;
    kal_uint8 common_access_class; //for Access Class ?V Common, value defined in access_class_level_enum
    kal_uint8 cs_access_class; //for Access Class ?V CS Domain, value defined in access_class_level_enum
    kal_uint8 ps_access_class; //for Access Class ?V PS Domain, value defined in access_class_level_enum
    ppac_domain_enum paging_for_ppac; //for PPAC - Paging, value defined in ppac_domain_enum
    ppac_domain_enum lr_for_ppac; //for PPAC - Registration, value defined in ppac_domain_enum
    access_class_level_enum lr_access_class; //for PPAC - Registration access class, value defined in access_class_level_enum
    em_mm_identity_type_enum lu_req_mobile_identity; //mobile identity used in last location update request
//#if defined(__WISDOM_EM__) || defined(__ADVANCED_EM__)
    kal_uint8 imsi[9];
    gsm_update_status_enum gsm_update_status;
    rat_enum current_rat;
//#endif
    kal_bool cell_support_cs;
    kal_uint8 mm_lu_reject_cause;
    kal_uint8 lu_reject_mccmnc[3];
    em_mm_reg_proc_status_enum mm_lu_status;
    em_mm_cell_serv_cap_enum cell_service_capab;
    kal_uint32 lu_rej_count;
    kal_uint32 num_of_lu_in_current_plmn;
} em_mm_info_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint16  ready_timer; //Ready timer value in SECONDS.
    kal_uint16  rau_timer;   //Periodical Routing Area Updating timer value in minute
    gmm_ms_state_enum	ms_state;    //MS_NULL_STATE = 0,
                             //    MS_READY_STATE,
                             //    MS_STANDBY_STATE,
                             //    MS_FORCED_TO_STANDBY_STATE
    kal_bool is_rau_timer_running;
    kal_uint16  rau_timer_passed_time; //in minute   
    em_mm_identity_type_enum attach_req_mobile_identity; //mobile identity used in last gprs attach request
    kal_uint8 ptmsi[4]; /* P-TMSI */
    mm_cause_enum attach_rej_cause; /* Attach Reject Cause, mm_cause_enum */
    mm_cause_enum rau_rej_cause; /* RAU Reject Cause, mm_cause_enum */
    gprs_update_status_enum gprs_update_status; /* gprs_update_status_enum */
    kal_uint8 cipher_algo; /* Cipher algorithm */
    gmm_attach_type_enum attach_type;/* GPRS Attach Type */
    em_gmm_state_enum gmm_state; /* GMM state, gmm_state_enum */
    em_gmm_gprs_attach_status_enum gprs_attach_status; /* GPRS_DETACHED = 0, GPRS_ATTACHED = 1 */
    kal_bool     tlli_valid;
    kal_uint32   tlli;
    kal_bool cell_support_ps;
    em_gmm_reg_proc_status_enum gmm_attach_status;
    kal_uint8 attach_rej_mccmnc[3];
    em_gmm_reg_proc_status_enum gmm_rau_status;
    kal_uint8 rau_reject_mccmnc[3];
    em_gmm_serv_rej_detach_status_enum serv_rej_detach_status;
    mm_cause_enum serv_rej_detach_cause;
    kal_uint8 serv_rej_detach_mccmnc[3];
    network_mode_enum network_op_mode;
    kal_uint32 attach_rej_count;
    kal_uint32 rau_rej_count;
    kal_uint32 ps_no_service_count;
}em_gmm_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rat_enum    current_rat;

    /* LU reject info */
    mm_update_type_enum lu_type;
    mm_cause_enum   lu_rej_cause;

    /* GPRS attach reject info */
    gmm_attach_type_enum attach_type;
    mm_cause_enum attach_rej_cause;

    /* RAU reject info */
    gmm_update_type_enum rau_type;
    mm_cause_enum rau_rej_cause;
}em_reg_rej_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rat_enum current_rat;
    em_auth_rej_type_enum auth_rej_type;
}em_auth_rej_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rat_enum current_rat;
    em_as_fail_type_enum as_fail_type;
}em_as_fail_info_ind_struct;


 
#endif /* _EM_MM_PUBLIC_STRUCT_H */ 

