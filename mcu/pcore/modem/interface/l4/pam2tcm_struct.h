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

/*****************************************************************************
 *
 * Filename:
 * ---------
 * PAM2TCM_STRUCT.H
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * 
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *
 * removed!
 * removed!
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _PAM2TCM_STRUCT_H
#define _PAM2TCM_STRUCT_H

/* struct */
#include "kal_public_defs.h"

/* enum */
#include "l3_inc_enums.h"


#define MAX_VZW_APNNI_LEN           MAX_APN_LEN
#define MAX_NUM_OF_VZW_APN_TABLE    20

#define MAX_VZW_APN_PDP_TYPE_LEN    10
#define MAX_VZW_APN_BEARER_LEN      10
#define MAX_VZW_APN_IS_ENABLED_LEN  15

typedef struct usm_bearer_info_struct {
    bcm_enum    bcm_info;
    etft_enum   etft_info;
} usm_bearer_info_struct ;

typedef struct {
    LOCAL_PARA_HDR 
} tcm_pam_start_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8               nsapi;
    usm_bearer_info_struct  bearer_info;
} tcm_usm_context_update_ind_struct;

typedef struct 
{
	kal_uint8       wapn;
	kal_uint8       apn_class;
	kal_uint32      apnni_len;
	kal_uint8       apnni[MAX_VZW_APNNI_LEN];
	pdp_addr_type_enum 	pdp_type;	
	rat_enum        rat;
	kal_bool        is_enable;
	kal_uint32      apn_timer_value_in_minute;
} vzw_apn_table_struct;

typedef struct
{
  kal_uint8          wapn;
  kal_uint32         max_conn_count;
  kal_uint32         max_conn_timer_value_in_sec; //seconds
  kal_uint32         wait_time_value_in_sec;      //seconds
  kal_uint32         throttle_time_value_in_sec;
} vzw_params_struct;

typedef struct 
{
	LOCAL_PARA_HDR
    kal_bool        clear_all_vzw_apn_table;
	vzw_apn_table_struct apn_info;
} tcm_pam_set_vzw_apn_table_req_struct;

typedef struct
{
	LOCAL_PARA_HDR
	kal_uint8      result;
	ps_cause_enum  error_cause; 
} tcm_pam_set_vzw_apn_table_cnf_struct;

typedef struct 
{
	LOCAL_PARA_HDR
} tcm_pam_get_vzw_apn_table_req_struct;

typedef struct 
{
	LOCAL_PARA_HDR
	kal_uint8             num_of_apn_info;
	vzw_apn_table_struct  apn_info[MAX_NUM_OF_VZW_APN_TABLE];
} tcm_pam_get_vzw_apn_table_cnf_struct;

typedef struct 
{
	LOCAL_PARA_HDR
	vzw_params_struct  params;
} tcm_pam_set_vzw_params_req_struct;

typedef struct
{
	LOCAL_PARA_HDR
	kal_uint8      result;
	ps_cause_enum  error_cause; 
} tcm_pam_set_vzw_params_cnf_struct;

typedef struct 
{
	LOCAL_PARA_HDR
} tcm_pam_get_vzw_params_req_struct;

typedef struct 
{
	LOCAL_PARA_HDR
	kal_uint8          num_of_params;
	vzw_params_struct  params[MAX_NUM_OF_VZW_APN_TABLE];
} tcm_pam_get_vzw_params_cnf_struct;

#define PAM_BLOCKING_TIMER_LENGTH_NOT_BLOCKING     0
#define PAM_BLOCKING_TIMER_LENGTH_BLOCKING_FOREVER 0xFFFFFFFF

typedef struct
{
	LOCAL_PARA_HDR
	kal_uint8  apnni_len;
	kal_uint8  apnni[MAX_VZW_APNNI_LEN];

} tcm_pam_get_apn_blocking_timer_length_req_struct;

typedef struct
{
	LOCAL_PARA_HDR
	kal_uint8  apnni_len;
	kal_uint8  apnni[MAX_VZW_APNNI_LEN];
	// 0: not blocking, 0xFFFFFFFF: blocking forever
	kal_uint32 timer_value_in_second; //seconds
} tcm_pam_get_apn_blocking_timer_length_cnf_struct;

typedef struct
{
	LOCAL_PARA_HDR
	kal_uint8  apnni_len;
	kal_uint8  apnni[MAX_VZW_APNNI_LEN];
} tcm_pam_cancel_apn_blocking_timer_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    pam_event_notify_enum event;
} tcm_pam_event_notify_req_struct;


#endif /* _PAM2TCM_STRUCT_H */
