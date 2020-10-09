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
 *   em_esm_public_struct.h
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


#ifndef _EM_ESM_PUBLIC_STRUCT_H
#define _EM_ESM_PUBLIC_STRUCT_H

#include "em_public_struct.h"

/********************* begin of ESM definition ****************************/

typedef enum
{
    EM_ESM_SYSTEM_STATE_ATTACH_NONE,
    EM_ESM_SYSTEM_STATE_ATTACH_INIT,
    EM_ESM_SYSTEM_STATE_ATTACH_ING,
    EM_ESM_SYSTEM_STATE_ATTACH_NORMAL,
    EM_ESM_SYSTEM_STATE_ATTACH_NORMAL_TO_EMC,
    EM_ESM_SYSTEM_STATE_ATTACH_EMERGENCY,
    EM_ESM_SYSTEM_STATE_RAT_CHANGE,
    EM_ESM_SYSTEM_STATE_RAT_2G3G,
    EM_ESM_SYSTEM_MMDC_PS_SWITCH,
    EM_ESM_SYSTEM_RAT_C2K
} l4c_em_esm_system_state_enum;

typedef enum
{
    EM_ESM_RAT_STATE_INACTIVE,
    EM_ESM_RAT_STATE_4G,
    EM_ESM_RAT_STATE_4G23_PENDING,
    EM_ESM_RAT_STATE_4G23_CONTEXT_MAP,
    EM_ESM_RAT_STATE_23G,
    EM_ESM_RAT_STATE_23G4_PENDING,
    EM_ESM_RAT_STATE_23G4_CONTEXT_MAP,
#ifdef __SGLTE__
    EM_ESM_RAT_STATE_MMDC4G2_PENDING,
    EM_ESM_RAT_STATE_MMDC4G2_CONTEXT_MAP,
    EM_ESM_RAT_STATE_MMDC2G4_PENDING,
    EM_ESM_RAT_STATE_MMDC2G4_CONTEXT_MAP,
#endif
    EM_ESM_RAT_STATE_4GC2K_PENDING,
    EM_ESM_RAT_STATE_C2K4G_PENDING,
    EM_ESM_RAT_STATE_C2K4G_ATTACHING,
    EM_ESM_RAT_STATE_C2K
} l4c_em_esm_rat_state_enum;

typedef enum
{
    EM_ESM_CAUSE_NONE                          = 0x00,                     /* Cause not assigned                                   */
    EM_ESM_OPERATOR_DETERMINED_BARRING         = 8   + EM_ESM_CAUSE_NONE,  /* Operator determined barring                          */
    EM_ESM_INSUFFICIENT_RESOURCES              = 26  + EM_ESM_CAUSE_NONE,  /* Insufficient resources                               */
    EM_ESM_UNKNOWN_OR_MISSING_APN              = 27  + EM_ESM_CAUSE_NONE,  /* Unknown or missing APN                               */
    EM_ESM_UNKNOWN_PDN_TYPE                    = 28  + EM_ESM_CAUSE_NONE,  /* Unknown PDN type                                     */
    EM_ESM_USER_AUTH_FAILED                    = 29  + EM_ESM_CAUSE_NONE,  /* User authentication failed                           */
    EM_ESM_REQUEST_REJECTED_BY_SGW_OR_PDNGW    = 30  + EM_ESM_CAUSE_NONE,  /* Request rejected by Serving GW or PDN GW             */
    EM_ESM_REQUEST_REJECTED_UNSPECIFIED        = 31  + EM_ESM_CAUSE_NONE,  /* Request rejected unspecified                         */
    EM_ESM_SERVICE_OPT_NOT_SUPPORTED           = 32  + EM_ESM_CAUSE_NONE,  /* Service option not supported                         */
    EM_ESM_REQ_SERVICE_NOT_SUBSCRIBED          = 33  + EM_ESM_CAUSE_NONE,  /* Requested service option not subscribed              */
    EM_ESM_SERVICE_TEMP_OUT_OF_ORDER           = 34  + EM_ESM_CAUSE_NONE,  /* Service option temporarily out of order              */
    EM_ESM_PTI_ALREADY_USED                    = 35  + EM_ESM_CAUSE_NONE,  /* PTI already in use                                   */
    EM_ESM_REGULAR_DEACTIVATION                = 36  + EM_ESM_CAUSE_NONE,  /* Regular deactivation                                 */
    EM_ESM_EPS_QOS_NOT_ACCEPTED                = 37  + EM_ESM_CAUSE_NONE,  /* EPS QoS not accepted                                 */
    EM_ESM_NETWORK_FAILURE                     = 38  + EM_ESM_CAUSE_NONE,  /* Network failure                                      */
    EM_ESM_REACTIVATION_REQUESTED              = 39  + EM_ESM_CAUSE_NONE,  /* Re-activation requitred                              */
    EM_ESM_SEMANTIC_ERROR_IN_TFT               = 41  + EM_ESM_CAUSE_NONE,  /* Semantic error in the TFT operation                  */
    EM_ESM_SYNTACTIC_ERROR_IN_TFT              = 42  + EM_ESM_CAUSE_NONE,  /* Syntactical error in the TFT operation               */
    EM_ESM_INVALID_EPS_BEARER_IDENTITY         = 43  + EM_ESM_CAUSE_NONE,  /* Invalid EPS bearer identity                          */
    EM_ESM_SEMANTIC_ERROR_IN_PACKET_FILTERS    = 44  + EM_ESM_CAUSE_NONE,  /* Semantic errors in packet filter(s)                  */
    EM_ESM_SYNTACTIC_ERROR_IN_PACKET_FILTERS   = 45  + EM_ESM_CAUSE_NONE,  /* Syntactical errors in packet filter(s)               */
    EM_ESM_EPSB_CTXT_WITHOUT_TFT_ACTIVATED     = 46  + EM_ESM_CAUSE_NONE,  /* EPS bearer context without TFT already activated     */
    EM_ESM_PTI_MISMATCH                        = 47  + EM_ESM_CAUSE_NONE,  /* PTI mismatch                                         */
    EM_ESM_LAST_PDN_DISC_NOT_ALLOWED           = 49  + EM_ESM_CAUSE_NONE,  /* Last PDN disconnection not allowed                   */
    EM_ESM_PDN_TYPE_IPV4_ONLY_ALLOWED          = 50  + EM_ESM_CAUSE_NONE,  /* PDN type IPv4 only allowed                           */
    EM_ESM_PDN_TYPE_IPV6_ONLY_ALLOWED          = 51  + EM_ESM_CAUSE_NONE,  /* PDN type IPv6 only allowed                           */
    EM_ESM_SINGLE_ADDRESS_ONLY_ALLOWED         = 52  + EM_ESM_CAUSE_NONE,  /* Single address bearers only allowed                  */
    EM_ESM_ESM_INFORMATION_NOT_RECEIVED        = 53  + EM_ESM_CAUSE_NONE,  /* ESM information not received                         */
    EM_ESM_PDN_CONNENCTION_NOT_EXIST           = 54  + EM_ESM_CAUSE_NONE,  /* PDN connection does not exist                        */
    EM_ESM_MULTIPLE_PDN_APN_NOT_ALLOWED        = 55  + EM_ESM_CAUSE_NONE,  /* Multiple PDN connections for a given APN not allowed */
    EM_ESM_COLLISION_WITH_NW_INIT_REQUEST      = 56  + EM_ESM_CAUSE_NONE,  /* Collision with network initiated request             */
    EM_ESM_UNSUPPORTED_QCI_VALUE               = 59  + EM_ESM_CAUSE_NONE,  /* Unsupported QCI value                                */
    EM_ESM_MAXIMUM_NUM_OF_EPS_BEARERS_REACHED  = 65  + EM_ESM_CAUSE_NONE,  /* Maximum number of EPS bearers reached                */
    EM_ESM_REQUESTED_APN_NOT_SUPPORTED_IN_CURRENT_RAT_AND_PLMN_COMBINATION = 66  + EM_ESM_CAUSE_NONE,  /* Requested APN not supported in current RAT and PLMN combination */
    EM_ESM_INVALID_PTI_VALUE                   = 81  + EM_ESM_CAUSE_NONE,  /* Invalid PTI value                                    */
    EM_ESM_SEMANTIC_INCORRECT_MSG              = 95  + EM_ESM_CAUSE_NONE,  /* Semantically incorrect message                       */
    EM_ESM_INVALID_MANDATORY_IE                = 96  + EM_ESM_CAUSE_NONE,  /* Invalid mandatory information                        */
    EM_ESM_MSG_TYPE_NON_EXISTENT               = 97  + EM_ESM_CAUSE_NONE,  /* Message type non-existent or not implemented         */
    EM_ESM_MSG_TYPE_NOT_COMPATIBLE_STATE       = 98  + EM_ESM_CAUSE_NONE,  /* Message type not compatible with protocol state      */
    EM_ESM_IE_NON_EXISTENT_NOT_IMPLEMENTED     = 99  + EM_ESM_CAUSE_NONE,  /* Information element non-existent or not implemented  */
    EM_ESM_CONDITIONAL_IE_ERROR                = 100 + EM_ESM_CAUSE_NONE,  /* Conditional IE error                                 */
    EM_ESM_MSG_NOT_COMPATIBLE_STATE            = 101 + EM_ESM_CAUSE_NONE,  /* Message not compatible with the protocol state       */
    EM_ESM_PROTOCOL_ERROR_UNSPECIFIED          = 111 + EM_ESM_CAUSE_NONE,  /* Protocol error unspecified                           */
    EM_ESM_APN_RESTRICT_VALUE_INCOMPATIBLE     = 112 + EM_ESM_CAUSE_NONE,  /* APN restriction value incompatible with active EPS bearer context */
} l4c_em_esm_cause_enum;

typedef enum
{
    EM_ESM_STATE_DISCONNECTED   = 0,
    EM_ESM_STATE_CONNECTING     = 1,
    EM_ESM_STATE_CONNECTED      = 2,
} l4c_em_esm_state_enum;

// For CMCC NW KPI event report
typedef struct
{
	kal_uint8							ebi;
	kal_bool						    em_esm_activate_default_eps_bearer_context_request_received;
	kal_bool						    em_esm_activate_default_eps_bearer_context_accept_sent;
	kal_bool							em_esm_activate_default_eps_bearer_context_reject_sent;
	l4c_em_esm_cause_enum				reject_cause;
} l4c_em_esm_activate_eps_bearer_context_report_struct;

typedef struct
{
    l4c_em_esm_system_state_enum    em_esm_sys_state;
    l4c_em_esm_rat_state_enum       em_esm_rat_state;

    kal_uint8                       em_esm_active_pt_num;
    kal_uint8                       em_esm_active_epsb_num;
    kal_uint8                       em_esm_active_drb_num;

    l4c_em_esm_cause_enum           em_esm_cause;
    l4c_em_esm_state_enum           em_esm_state;

	// For CMCC NW KPI event report
	l4c_em_esm_activate_eps_bearer_context_report_struct em_esm_activate_eps_bearer_context_report;
} l4c_em_esm_status_struct;

typedef enum
{
    EM_ESM_PT_REQ_REASON_NULL,
    EM_ESM_PT_REQ_REASON_REGISTER,
    EM_ESM_PT_REQ_REASON_ADD_PDN_CONN,
    EM_ESM_PT_REQ_REASON_ALLOC_BEARER_RSC,
    EM_ESM_PT_REQ_REASON_MOD_BEARER_RSC,
    EM_ESM_PT_REQ_REASON_DEACT_DED_BEARER,
    EM_ESM_PT_REQ_REASON_RMV_PDN_CONN
} l4c_em_esm_pt_req_reason_enum;

typedef enum
{
    EM_ESM_PT_STATE_TERM,
    EM_ESM_PT_STATE_INACTIVE,
    EM_ESM_PT_STATE_WAIT_MM_RES,
    EM_ESM_PT_STATE_PENDING,
    EM_ESM_PT_STATE_WAIT_RESEND,
    EM_ESM_PT_STATE_COMPLETE,
    EM_ESM_PT_STATE_RESERVED,
    EM_ESM_PT_STATE_WAIT_TERM
} l4c_em_esm_pt_state_enum;

typedef struct
{
    kal_bool                        is_active;
    kal_uint8                       pti;

    l4c_em_esm_pt_req_reason_enum   pt_req_reason;
    l4c_em_esm_pt_state_enum        pt_state;

    kal_uint8                       cid;
    kal_uint8                       ebi;
} l4c_em_esm_pt_struct;

typedef enum
{
    EM_ESM_EPSBC_TYPE_INVALID,
    EM_ESM_EPSBC_TYPE_DEFAULT_EPSB,
    EM_ESM_EPSBC_TYPE_DEDICATED_EPSB
} l4c_em_esm_epsbc_bearer_type_enum;

#define EM_MAX_APN_LEN  100

typedef struct
{
    kal_uint8   length;
    kal_uint8   data[EM_MAX_APN_LEN];
} em_apn_struct;

typedef struct
{
    kal_bool                            is_active;
    kal_uint8                           ebi;
    l4c_em_esm_epsbc_bearer_type_enum   bearer_type;
    kal_bool                            is_emergency_bearer;
    nas_priority_config_enum            nas_priority_config;   // __MTC_SUPPORT__
    eab_override_config_enum            eab_override_config;   // __MTC_SUPPORT__

    kal_uint8                           linked_ebi;
    kal_uint8                           qci;

    ip_addr_struct                      ip_addr;
    em_apn_struct                       apn;

    kal_uint8                           pkt_flow_id;
    kal_uint32                          qos_mbr_ul;             /* kbps */
    kal_uint32                          qos_mbr_dl;             /* kbps */
    kal_uint32                          qos_gbr_ul;             /* kbps */
    kal_uint32                          qos_gbr_dl;             /* kbps */
} l4c_em_esm_epsbc_struct;

#define EM_L4C_ESM_MAX_PT_NUM           10
#define EM_L4C_ESM_MAX_EPSB_NUM         11

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                        em_info;

    l4c_em_esm_status_struct            esm_status;
    l4c_em_esm_pt_struct                esm_pt[EM_L4C_ESM_MAX_PT_NUM];
    l4c_em_esm_epsbc_struct             esm_epsbc[EM_L4C_ESM_MAX_EPSB_NUM];
} em_esm_l4c_esm_info_ind_struct;

/********************* end of ESM definition ****************************/


#endif /* _EM_ESM_PUBLIC_STRUCT_H */

