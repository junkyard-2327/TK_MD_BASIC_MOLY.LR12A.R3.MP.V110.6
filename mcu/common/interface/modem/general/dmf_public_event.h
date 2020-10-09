/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 * dmf_public_event.h
 *
 * Project:
 * --------
 * UMOLYA
 *
 * Description:
 * ------------
 * DM Framework public event interface
 *
 * Author:
 * -------
 * -------
 *
 *
 * ==========================================================================
 * $Log$
 *
 * 12 27 2019 kunkun.shao
 * [MOLY00468326] Modem端大数据收集:DMF Network KPI part.
 *
 *
 *
 ****************************************************************************/


#ifndef _DMF_PUBLIC_EVENT_H_
#define _DMF_PUBLIC_EVENT_H_

#include "sim_exported_enum.h"


typedef enum
{
    DMF_EVENT_NULL,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_ERRC_SRVCC_FAIL
 *
 * DESCRIPTION
 *  This event is broadcasted when SRVCC Fail occurs
 *
 * Data Type
 *  dmf_errc_srvcc_fail_type_enum
 *
 * Data Size
 *  sizeof(dmf_errc_srvcc_fail_type_enum)
 *
 * Data Description
 *  ERRC SRVCC fail cause
 *
 *****************************************************************************/
    DMF_EVENT_ERRC_SRVCC_FAIL,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_ERRC_TIMER_EXPIRED
 *
 * DESCRIPTION
 *  This event is broadcasted when ERRC timer exipred
 *
 * Data Type
 *  em_errc_timer_enum
 *
 * Data Size
 *  sizeof(em_errc_timer_enum)
 *
 * Data Description
 *  ERRC Timer type
 *
 *****************************************************************************/
    DMF_EVENT_ERRC_TIMER_EXPIRED, 

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_ERRC_REEST
 *
 * DESCRIPTION
 *  This event is broadcasted when ERRC reestablishment occurs
 *
 * Data Type
 *  em_errc_reest_info_cause_enum
 *
 * Data Size
 *  sizeof(em_errc_reest_info_cause_enum)
 *
 * Data Description
 *  ERRC reestablishment cause
 *
 *****************************************************************************/
    DMF_EVENT_ERRC_REEST,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_ERRC_STATE_TRANSITION
 *
 * DESCRIPTION
 *  This event is broadcasted when ERRC state transition occurs
 *
 * Data Type
 *  pointer to dmf_event_errc_state_struct
 *
 * Data Size
 *  sizeof(dmf_event_errc_state_struct)
 *
 * Data Description
 *  ERRC state and cause
 *
 *****************************************************************************/
    DMF_EVENT_ERRC_STATE_TRANSITION,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_MM_LU_REJECT_OCCURS
 *
 * DESCRIPTION
 *  This event is broadcasted when MM LU is rejected
 *
 * Data Type
 *  kal_uint8
 *
 * Data Size
 *  sizeof(kal_uint8)
 *
 * Data Description
 *  LU reject cause which is defined in the spec. 24.008
 *
 *****************************************************************************/
    DMF_EVENT_MM_LU_REJECT_OCCURS,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_MM_LU_FAILURE_OCCURS
 *
 * DESCRIPTION
 *  This event is broadcasted when MM LU is failed
 *
 * Data Type
 *  em_lr_failure_cause_enum
 *
 * Data Size
 *  sizeof(em_lr_failure_cause_enum)
 *
 * Data Description
 *  LU Failure cause
 *
 *****************************************************************************/
    DMF_EVENT_MM_LU_FAILURE_OCCURS,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_EMM_ATTACU_TAU_REJECT_OCCURS
 *
 * DESCRIPTION
 *  This event is broadcasted when EMM ATTACH/TAU reject occurs
 *
 * Data Type
 *  point to dmf_event_emm_reject_info_struct
 *
 * Data Size
 *  sizeof(dmf_event_emm_reject_info_struct)
 *
 * Data Description
 *  ATTACH/TAU type, EMM cause
 *
 *****************************************************************************/
    DMF_EVENT_EMM_ATTACU_TAU_REJECT_OCCURS,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_EMM_AUTH_REJECT_OCCURS
 *
 * DESCRIPTION
 *  This event is broadcasted when EMM authentication is rejected
 *
 * Data Type
 *  void
 *
 * Data Size
 *  0
 *
 * Data Description
 *  N/A
 *
 *****************************************************************************/
    DMF_EVENT_EMM_AUTH_REJECT_OCCURS,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_ESM_TIMER_EXPIRY
 *
 * DESCRIPTION
 *  This event is broadcasted when ESM Timer is exipred
 *
 * Data Type
 *  pointer to dmf_event_esm_timer_expiry_struct
 *
 * Data Size
 *  sizeof(dmf_event_esm_timer_expiry_struct)
 *
 * Data Description
 *  Expired Timer  and application type
 *
 *****************************************************************************/
    DMF_EVENT_ESM_TIMER_EXPIRY,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_ESM_OTA_EVENT
 *
 * DESCRIPTION
 *  This event is broadcasted when ESM OTA message is sent/received
 *
 * Data Type
 *  pointer to dmf_event_esm_ota_struct
 *
 * Data Size
 *  sizeof(dmf_event_esm_ota_struct)
 *
 * Data Description
 *  OTA event and application type
 *
 *****************************************************************************/
    DMF_EVENT_ESM_OTA_EVENT,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_SM_OTA_PDP
 *
 * DESCRIPTION
 *  This event is broadcasted when SM PDP CONTEXT REQUEST related OTA message is sent/received.
 *
 * Data Type
 *  pointer to dmf_event_sm_pdp_request_struct
 *
 * Data Size
 *  sizeof(dmf_event_sm_pdp_request_struct)
 *
 * Data Description
 *  NSAPI/PDP OTA event/IMS or NON-IMS PDP
 *
 *****************************************************************************/
    DMF_EVENT_SM_OTA_PDP,


/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_EMM_OTA_ATTACH
 *
 * DESCRIPTION
 *  This event is broadcasted when EMM ATTACH related OTA message is sent/received.
 *
 * Data Type
 *  dmf_emm_attach_event_enum
 *
 * Data Size
 *  sizeof(dmf_emm_attach_event_enum)
 *
 * Data Description
 *  ATTACH request/accept/reject/t3340 expiry
 *
 *****************************************************************************/
    DMF_EVENT_EMM_OTA_ATTACH,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_C2K_CALL_FAIL
 *
 * DESCRIPTION
 *  This event is broadcasted when detecting C2K Call fail occurs
 *
 * Data Type
 *  pointer to dmf_event_c2k_call_fail_reason_struct
 *
 * Data Size
 *  sizeof(dmf_event_c2k_call_fail_reason_struct)
 *
 * Data Description
 *  Provide c2k call fail reason(em_1xrtt_call_fail_reason_enum) 
 *  and c2k call fail type(em_c2k_call_type_enum)
 *
 *****************************************************************************/
    DMF_EVENT_C2K_CALL_FAIL,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_MM_CSFB_STATUS
 *
 * DESCRIPTION
 *  This event is broadcasted when MM CSFB STATUS is reported
 *
 * Data Type
 *  em_csfb_status_enum
 *
 * Data Size
 *  sizeof(em_csfb_status_enum)
 *
 * Data Description
 *  CSFB Status
 *
 *****************************************************************************/
    DMF_EVENT_MM_CSFB_STATUS,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_MM_CSFB_CALL_STATUS
 *
 * DESCRIPTION
 *  This event is broadcasted when MM CSFB CALL STATUS is reported by MM for MO/MT Call
 *
 * Data Type
 *  pointer to dmf_event_mm_csfb_call_status_struct
 *
 * Data Size
 *  sizeof(dmf_event_mm_csfb_call_status_struct)
 *
 * Data Description
 *  Provide mm_state/mm_casue /csfb_status
 *
 *****************************************************************************/
    DMF_EVENT_MM_CSFB_CALL_STATUS,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_MM_CS_CALL_STATUS
 *
 * DESCRIPTION
 *  This event is broadcasted when MM CS CALL STATUS is reported by MM for MO/MT Call
 *
 * Data Type
 *  pointer to dmf_event_mm_cs_call_status_struct
 *
 * Data Size
 *  sizeof(dmf_event_mm_cs_call_status_struct)
 *
 * Data Description
 *  Provide mm_state/mm_casue /cs_status
 *
 *****************************************************************************/
    DMF_EVENT_MM_CS_CALL_STATUS,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_EMM_CSFB_CALL_STATUS
 *
 * DESCRIPTION
 *  This event is broadcasted when EMM CSFB STATUS is changed
 *
 * Data Type
 *  pointer to dmf_event_emm_csfb_call_status_struct
 *
 * Data Size
 *  sizeof(dmf_event_emm_csfb_call_status_struct)
 *
 * Data Description
 *  Provide MO/MT Call and CSFB status
 *
 *****************************************************************************/
    DMF_EVENT_EMM_CSFB_CALL_STATUS,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_VDM_CALL_STATUS
 *
 * DESCRIPTION
 *  This event is broadcasted when VDM CALL_STATUS is changed
 *
 * Data Type
 *  pointer to dmf_event_vdm_call_status_struct
 *
 * Data Size
 *  sizeof(dmf_event_vdm_call_status_struct)
 *
 * Data Description
 *  Provide Dir/RAT and following VDM call domain selection state
 *     EM_VDM_CALL_STATE_DISCONNECTED,
 *     EM_VDM_CALL_STATE_CONNECTED,
 *     EM_VDM_CALL_STATE_MO_EST_ADS_EXE,
 *     EM_VDM_CALL_STATE_MO_EST_DOMAIN_ATMP,
 *     EM_VDM_CALL_STATE_MT_EST_APPROVE,
 *     EM_VDM_CALL_STATE_MT_EST_DOMAIN_ATMP
 *****************************************************************************/
    DMF_EVENT_VDM_CALL_STATUS,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_2G_RACH_FAIL
 *
 * DESCRIPTION
 *  This event is broadcasted when Rach fail occurs in 2G
 *
 * Data Type
 *  void
 *
 * Data Size
 *  0
 *
 * Data Description
 *  N/A
 *
 *****************************************************************************/
    DMF_EVENT_2G_RACH_FAIL,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_2G_N200_EXP
 *
 * DESCRIPTION
 *  This event is broadcasted when N200 expires occurs in 2G
 *
 * Data Type
 *  void
 *
 * Data Size
 *  0
 *
 * Data Description
 *  N/A
 *
 *****************************************************************************/
    DMF_EVENT_2G_N200_EXP,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_2G_HO_FAIL
 *
 * DESCRIPTION
 *  This event is broadcasted when Handover fails in 2G
 *
 * Data Type
 *  void
 *
 * Data Size
 *  0
 *
 * Data Description
 *  N/A
 *
 *****************************************************************************/
    DMF_EVENT_2G_HO_FAIL,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_2G_CONTROL_MSG
 *
 * DESCRIPTION
 *  This event is broadcasted when Channel Release Control message received in 2G
 *
 * Data Type
 *  kal_uint8
 *
 * Data Size
 *  sizeof(kal_uint8)
 *
 * Data Description
 *  provide the RR cause received in Channel Release
 *
 *****************************************************************************/
    DMF_EVENT_2G_CONTROL_MSG,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_2G_RLF_CALL_TYPE_IND
 *
 * DESCRIPTION
 *  This event is broadcasted when MO/MT RLF happen in 2G
 *
 * Data Type
 *  em_mt_call_type_enum
 *
 * Data Size
 *  sizeof(em_mt_call_type_enum)
 *
 * Data Description
 *  provide GSM call type MO/MT
 *
 *****************************************************************************/
    DMF_EVENT_2G_RLF_CALL_TYPE_IND,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_CC_CALL_INFO
 *
 * DESCRIPTION
 *  This event is broadcasted when there is change in call state in 2G/3G
 *
 * Data Type
 *  pointer to dmf_event_cc_call_info_struct
 *
 * Data Size
 *  sizeof(dmf_event_cc_call_info_struct)
 *
 * Data Description
 *  Provide Call ID/Dir/State/Disconnect Cause
 *
 *****************************************************************************/
    DMF_EVENT_CC_CALL_INFO,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_3G_RACH_FAIL
 *
 * DESCRIPTION
 *  This event is broadcasted when Rach fail occurs in 3G
 *
 * Data Type
 *  void
 *
 * Data Size
 *  0
 *
 * Data Description
 *  N/A
 *
 *****************************************************************************/
    DMF_EVENT_3G_RACH_FAIL,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_3G3_HO_FAIL
 *
 * DESCRIPTION
 *  This event is broadcasted when Intra (3G to 3G) Handover Fail
 *
 * Data Type
 *  void
 *
 * Data Size
 *  0
 *
 * Data Description
 *  N/A
 *
 *****************************************************************************/
    DMF_EVENT_3G3_HO_FAIL,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_3G2_HO_FAIL
 *
 * DESCRIPTION
 *  This event is broadcasted when Inter (3G to 2G) Handover Fail
 *
 * Data Type
 *  void
 *
 * Data Size
 *  0
 *
 * Data Description
 *  N/A
 *
 *****************************************************************************/
    DMF_EVENT_3G2_HO_FAIL,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_3G_MT_RLF_IND
 *
 * DESCRIPTION
 *  This event is broadcasted when RLF occurs during MT Call in 3G
 *
 * Data Type
 *  void
 *
 * Data Size
 *  0
 *
 * Data Description
 *  N/A
 *
 *****************************************************************************/
    DMF_EVENT_3G_MT_RLF_IND,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_3G_MO_RLF_IND
 *
 * DESCRIPTION
 *  This event is broadcasted when RLF occurs during MO Call in 3G
 *
 * Data Type
 *  void
 *
 * Data Size
 *  0
 *
 * Data Description
 *  N/A
 *
 *****************************************************************************/
    DMF_EVENT_3G_MO_RLF_IND,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_IMS_SIP_INFO
 *
 * DESCRIPTION
 *  This event is boradcasted when UE send/receive a SIP
 *
 * Data Type
 *  To be provided
 *
 * Data Size
 *  To be provided
 *
 * Data Description
 *  To be provided
 *
 *****************************************************************************/
    DMF_EVENT_IMS_SIP_INFO,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_IMS_CALL_DROP_INFO
 *
 * DESCRIPTION
 *  This event is boradcasted when IMS Call drop occurs
 *
 * Data Type
 *  To be provided
 *
 * Data Size
 *  To be provided
 *
 * Data Description
 *  To be provided
 *
 *****************************************************************************/
    DMF_EVENT_IMS_CALL_DROP_INFO,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_IMS_REG_ABNORMAL_INFO
 *
 * DESCRIPTION
 *  This event is boradcasted when IMS abnormal registration occurs
 *
 * Data Type
 *  To be provided
 *
 * Data Size
 *  To be provided
 *
 * Data Description
 *  To be provided
 *
 *****************************************************************************/
    DMF_EVENT_IMS_REG_ABNORMAL_INFO,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_IMS_HO_INFO
 *
 * DESCRIPTION
 *  This event is boradcasted when IMS handover between WIFI and LTE occurs
 *
 * Data Type
 *  To be provided
 *
 * Data Size
 *  To be provided
 *
 * Data Description
 *  To be provided
 *
 *****************************************************************************/
    DMF_EVENT_IMS_HO_INFO,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_IMS_PDN_ERROR
 *
 * DESCRIPTION
 *  This event is broadcasted when IMS PDN fail with failed cause
 *
 * Data Type
 *  pointer to dmf_event_ims_pdn_fail_cause_struct
 *
 * Data Size
 *  sizeof(dmf_event_ims_pdn_fail_cause_struct)
 *
 * Data Description
 *  Cause of pdn failure
 *
 *****************************************************************************/
    DMF_EVENT_IMS_PDN_ERROR,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_IMS_PDN_FAIL_APN
 *
 * DESCRIPTION
 *  This event is broadcasted when IMS PDN fail with failed APN
 *
 * Data Type
 *  pointer to dmf_event_ims_pdn_fail_apn_struct
 *
 * Data Size
 *  sizeof(dmf_event_ims_pdn_fail_apn_struct)
 *
 * Data Description
 *  Apn name for PDN creation
 *
 *****************************************************************************/
    DMF_EVENT_IMS_PDN_FAIL_APN,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_VOLTE_PDCP_INFO
 *
 * DESCRIPTION
 *  This event is broadcasted when VoLTE PDCP INFO is changed. 
 *
 * Data Type
 *  dmf_event_volte_pdcp_info_struct
 *
 * Data Size
 *  sizeof(dmf_event_volte_pdcp_info_struct)
 *
 * Data Description
 *  - UL/DL packet drop
 *  - PDCP discard timer value
 *****************************************************************************/
    DMF_EVENT_VOLTE_PDCP_INFO,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_PAGING_INFO
 *
 * DESCRIPTION
 *  This event is broadcasted when PAGING INFO is changed. 
 *  Please notice that when receiving paging, 
 *  we will always report DMF_PAGING_REASON_UNSPECIFIED first.
 *  If we know the exactly reason, we will report correct reason again.
 *
 * Data Type
 *  dmf_event_paging_info_struct
 *
 * Data Size
 *  sizeof(dmf_event_paging_info_struct)
 *
 * Data Description
 *  - paging reason
 *  - is data SIM
 *****************************************************************************/
    DMF_EVENT_PAGING_INFO,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_MCF_INFO
 *
 * DESCRIPTION
 *  This event is broadcasted when EM  MSG_ID_EM_MCF_OTA_FILE_INFO_IND is received. 
 *
 * Data Type
 *  dmf_event_mcf_info_struct
 *
 * Data Size
 *  sizeof(dmf_event_mcf_info_struct)
 *
 * Data Description
 *  - Trigger type
 *  - Configure type
 *  - Result
 *  - start time (unit: tick)
 *  - end time (unit: tick)
 *  - path type
 *  - file name
 *****************************************************************************/
    DMF_EVENT_MCF_INFO,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_SBP_DSBP_INFO
 *
 * DESCRIPTION
 *  This event is broadcasted when EM DSBP_INFO_IND is received. 
 *
 * Data Type
 *  dmf_event_sbp_dsbp_info_struct
 *
 * Data Size
 *  sizeof(dmf_event_sbp_dsbp_info_struct)
 *
 * Data Description
 *  - Trigger type
 *  - Mode
 *  - Result
 *  - SBP ID
 *  - SIM SBP ID
 *  - start time (unit: tick)
 *  - end time (unit: tick)
 *****************************************************************************/
    DMF_EVENT_SBP_DSBP_INFO,

/*****************************************************************************
 * EVENT NAME
 *  DMF_EVENT_CMCC_EPS_ATTACH_INFO
 *
 * DESCRIPTION
 *  This event is broadcasted when EMM ATTACH related event occurs for ATTACH
 *
 * Data Type
 *  dmf_event_cmcc_eps_attach_struct
 *
 * Data Size
 *  sizeof(dmf_event_cmcc_eps_attach_struct)
 *
 * Data Description
 *  attach_event - refer to the enum dmf_cmcc_eps_attach_event_enum
 *  attach_reject_cause - attch reject cause
 *
 *****************************************************************************/
    DMF_EVENT_CMCC_EPS_ATTACH_INFO,
    DMF_EVENT_CMCC_ESM_ACT_DEFAULT_BEARER_INFO,
    DMF_EVENT_CMCC_ERRC_SUCC_RATE_KPI_INFO,
    DMF_EVENT_CMCC_ERRC_MFROM_INFO,
    DMF_EVENT_CMCC_ERRC_SRVCC_FAIL_INFO,
    DMF_EVENT_CMCC_IMS_REG_INFO,
    DMF_EVENT_CMCC_VOLTE_CALL_DROP_INFO,
    DMF_EVENT_CMCC_MO_VOLTE_CALL_INFO,
    DMF_EVENT_CMCC_MT_VOLTE_CALL_INFO,
    DMF_EVENT_MAX
} dmf_event_id_enum;

typedef struct
{
    dmf_event_id_enum event_id;
    protocol_id_enum ps_id;
    void *data;
    kal_uint32 size;
} dmf_event_struct;

#endif // _DMF_PUBLIC_EVENT_H_
