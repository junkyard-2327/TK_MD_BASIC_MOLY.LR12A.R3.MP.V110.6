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
 *   em_public_struct_evl3.h
 *
 * Project:
 * --------
 *   Gen93
 *
 * Description:
 * ------------
 *   Engineer mode public structures for C2K EVDO module.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *                       HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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


#ifndef _EM_PUBLIC_STRUCT_EVL3_H
#define _EM_PUBLIC_STRUCT_EVL3_H

#include "em_struct.h"
#include "em_msgid.h"


/* Definition of DO idle slotted mode events */
typedef enum
{
    EM_DO_SM_SLEEP_CAPSULE          = 0,
    EM_DO_SM_OVHD_STATUS_CHANGE     = 1,
    EM_DO_SM_SESSION_STATUS_CHANGE  = 2,
    EM_DO_SM_BYPASS_SESSION_STATUS  = 3,
    EM_DO_SM_DFS_START              = 4,
    EM_DO_SM_DFS_END                = 5,
    EM_DO_SM_DSAR_START             = 6,
    EM_DO_SM_DSAR_END               = 7,
    EM_DO_SM_INVALID_EVENT          = 8
} em_evdo_slotted_event_enum;

/* Definition of EVDO access procedure events */
typedef enum
{
    EM_DO_ACC_DSAR_START       = 0,
    EM_DO_ACC_DSAR_END         = 1,
    EM_DO_ACC_PROBE_TX_START   = 2,
    EM_DO_ACC_PROBE_TX_END     = 3,
    EM_DO_ACC_ACK_WAIT         = 4,
    EM_DO_ACC_EARLY_WAKEUP_CMD = 5,
    EM_DO_ACC_EARLY_WAKEUP_IND = 6,
    EM_DO_ACC_TX_AVAIL_IND     = 7,
    EM_DO_ACC_RSVAS_OCCUPY_REQ = 8,
    EM_DO_ACC_RSVAS_OCCUPY_CNF = 9,
    EM_DO_ACC_RSVAS_OCCUPY_IND = 10,
    EM_DO_ACC_ACK_RCVD         = 11,
    EM_DO_ACC_TCA_RCVD         = 12,
    EM_DO_ACC_TCC_SEND         = 13,
    EM_DO_ACC_DRC_AND_PILOT_TX = 14,
    EM_DO_ACC_RTC_ACK_RCVD     = 15,
    EM_DO_ACC_ACM_ACTIVE       = 16,
    EM_DO_ACC_ACM_DEACTIVE     = 17,
    EM_DO_ACC_INVALID_EVENT    = 18
}em_evdo_access_event_enum;

typedef enum
{
    EM_DO_RSVAS_OCCUPY_STATUS_NULL,
    EM_DO_RSVAS_OCCUPY_STATUS_WAIT_CNF,
    EM_DO_RSVAS_OCCUPY_STATUS_WAIT_CNF_FOR_FAST_CONN,
    EM_DO_RSVAS_OCCUPY_STATUS_WAIT_IND,
    EM_DO_RSVAS_OCCUPY_STATUS_WAIT_IND_FOR_FAST_CONN,
    EM_DO_RSVAS_OCCUPY_STATUS_COMPLETE
} EmDoRsvasOccupyStatusT;

typedef enum
{
    EM_C2K_EVDO_AT_POWEROFF_STATE,
    EM_C2K_EVDO_AT_INACTIVE_STATE,
    EM_C2K_EVDO_AT_PILOACQ_STATE,
    EM_C2K_EVDO_AT_SYNC_STATE,
    EM_C2K_EVDO_AT_IDLE_STATE,
    EM_C2K_EVDO_AT_ACCESS_STATE,
    EM_C2K_EVDO_AT_CONNECTED_STATE,
}em_evdo_at_state_enum;

typedef enum
{
    EM_C2K_EVDO_ALMP_INIT_STATE,
    EM_C2K_EVDO_ALMP_IDLE_STATE,
    EM_C2K_EVDO_ALMP_CONN_SETUP_STATE,
    EM_C2K_EVDO_ALMP_CONNECTED_STATE,
}em_evdo_almp_state_enum;

typedef enum
{
    EM_C2K_EVDO_INSP_INACTIVE_STATE,
    EM_C2K_EVDO_INSP_NETWORK_DET_STATE,
    EM_C2K_EVDO_INSP_SYNC_STATE,
    EM_C2K_EVDO_INSP_TIMING_CHANGE_STATE,
    EM_C2K_EVDO_INSP_WFR_1XASSIST_STATE,
}em_evdo_insp_state_enum;

typedef enum
{
    EM_C2K_EVDO_IDP_INACTIVE_STATE,
    EM_C2K_EVDO_IDP_MONITOR_STATE,
    EM_C2K_EVDO_IDP_SLEEP_STATE,
    EM_C2K_EVDO_IDP_CONN_SETUP_STATE,
    EM_C2K_EVDO_IDP_FREEZE_PENDING_STATE,
    EM_C2K_EVDO_IDP_FREEZE_STATE,
    EM_C2K_EVDO_IDP_CONN_FROZEN_STATE,
}em_evdo_idp_state_enum;

typedef enum
{
    EM_C2K_EVDO_CSP_INACTIVE_STATE,
    EM_C2K_EVDO_CSP_CLOSING_STATE,
    EM_C2K_EVDO_CSP_OPENE_STATE,
}em_evdo_csp_state_enum;

typedef enum
{
    EM_C2K_EVDO_RUP_INACTIVE_STATE,
    EM_C2K_EVDO_RUP_IDLE_STATE,
    EM_C2K_EVDO_RUP_CONNECTED_STATE,
    EM_C2K_EVDO_RUP_IRAT_MEASUREMENT_STATE,
}em_evdo_rup_state_enum;

typedef enum
{
    EM_C2K_EVDO_OMP_INACTIVE_STATE,
    EM_C2K_EVDO_OMP_ACTIVE_STATE,
}em_evdo_omp_state_enum;

typedef enum
{
    EM_C2K_EVDO_SESSION_CLOSE_STATE,
    EM_C2K_EVDO_SESSION_AMPSETUP_STATE,
    EM_C2K_EVDO_SESSION_ATINIT_STATE,
    EM_C2K_EVDO_SESSION_ANINIT_STATE,
    EM_C2K_EVDO_SESSION_OPEN_STATE,
    EM_C2K_EVDO_SESSION_CLOSEING_STATE,
}em_evdo_session_state_enum;

typedef enum
{
    EM_C2K_EVDO_SMP_INACTIVE_STATE,
    EM_C2K_EVDO_SMP_SETUP_STATE,
    EM_C2K_EVDO_SMP_OPEN_STATE,
    EM_C2K_EVDO_SMP_CLOSING_STATE,
}em_evdo_smp_state_enum;

typedef enum
{
    EM_C2K_EVDO_SCP_INACTIVE_STATE,
    EM_C2K_EVDO_SCP_OPEN_STATE,
    EM_C2K_EVDO_SCP_AT_INIT_STATE,
    EM_C2K_EVDO_SCP_AN_INIT_STATE,
}em_evdo_scp_state_enum;

typedef enum
{
    EM_C2K_EVDO_AMP_INACTIVE_STATE,
    EM_C2K_EVDO_AMP_SETUP_STATE,
    EM_C2K_EVDO_AMP_OPEN_STATE,
}em_evdo_amp_state_enum;

typedef enum
{
	EM_C2K_EVDO_ABNORMAL_EVENT_INVALID	         = 0,
    EM_C2K_EVDO_PILOT_ACQ_TIMEOUT                = 1,
    EM_C2K_EVDO_PILOT_SYNC_TIMEOUT               = 2,
    EM_C2K_EVDO_PILOT_TIMING_TIMEOUT             = 3,
    EM_C2K_EVDO_CONNECTION_FAIL                  = 4,
    EM_C2K_EVDO_IDP_ACCESS_FAIL                  = 5,
    EM_C2K_EVDO_RUP_NETWORK_LOST                 = 6,
    EM_C2K_EVDO_HSC_NETWORK_LOST                 = 7,
    EM_C2K_EVDO_RUP_ASSGN_REJ_WHEN_CONNECT_STATE = 8,
    EM_C2K_EVDO_DSAR_QUEUE_FULL                  = 9,
    EM_C2K_EVDO_RTM_SUPERVSN_FAIL                = 10,
    EM_C2K_EVDO_FTM_SUPERVSN_FAIL                = 11,
    EM_C2K_EVDO_CCM_SUPERVSN_FAIL                = 12,
    EM_C2K_EVDO_ACM_SUPERVSN_FAIL                = 13,
    EM_C2K_EVDO_OMP_SUPERVSN_FAIL                = 14,
    EM_C2K_EVDO_ABNORMAL_EVENT_NUM_MAX           = 15,
}em_evdo_abnormal_event_enum;

typedef enum
{
    EM_C2K_EVDO_PROEVENT_INVALID	             = 0,
    EM_C2K_EVDO_POWER_UP                         = 1,
    EM_C2K_EVDO_POWER_DOWN						 = 2,
    EM_C2K_EVDO_CSS_ACQ_ABORT_REQ                = 3,
    EM_C2K_EVDO_CSS_VALIDATED					 = 4,
    EM_C2K_EVDO_SMP_CSS_ACTIVATE_MSG             = 5,
    EM_C2K_EVDO_EHRPD_DISABLE_ETS_CMD            = 6,
    EM_C2K_EVDO_EHRPD_ENABLE_ETS_CMD             = 7,
    EM_C2K_EVDO_SESSION_OPEN                     = 8,
    EM_C2K_EVDO_SESSION_CLOSE                    = 9,
    EM_C2K_EVDO_PROCEDURE_EVENT_NUM_MAX          = 10,
}em_evdo_procedure_event_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                 em_info;
	
    kal_uint16                   band;
    kal_uint16                   channel;
    kal_uint32					 pn;
    em_evdo_abnormal_event_enum  abEvent;
    em_evdo_procedure_event_enum proEvent;
} em_evl3_cp_events_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    em_evdo_at_state_enum AtState;
    em_evdo_almp_state_enum AlmpState;
    em_evdo_insp_state_enum InspState;
    em_evdo_idp_state_enum IdpState;
    em_evdo_csp_state_enum CspState;
    em_evdo_rup_state_enum RupState;
    em_evdo_omp_state_enum OmpState;
    em_evdo_session_state_enum SessionState;
    em_evdo_smp_state_enum SmpState;
    em_evdo_scp_state_enum ScpState;
    em_evdo_amp_state_enum AmpState;
}em_evl3_state_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint8  BandClass;
    kal_uint16 Channel;
    kal_uint16 RefPilotPN;
}em_evl3_serving_cell_info_ind_struct;

typedef struct
{
    kal_bool   bSleepCapsuleDoneRcvd;
    kal_bool   bSectorParmsUpdated;
    kal_bool   bSlottedModeEnabled;
    kal_bool   bSessionIsActive;
    kal_bool   bByPassSessionStatusForSleep;
    kal_bool   bConnectionReqInProgress;
    kal_bool   bProhibitEnterSleepForPageRcvd;
    kal_bool   bWakeupInd;
    kal_bool   bImdWakeup;
    kal_bool   bDfsprocessing;
    kal_bool   bPsDataOnC2K;
    kal_bool   bServiceConfigStarted;
    kal_bool   bSubnetChangedOrCommittingIndication;
    kal_uint8  nAcmacTxStartedCount;

    kal_bool   R_value_pccc;
    kal_uint8  R_value;

    kal_uint32 do_next_wakeup_time;
    kal_uint32 do_wakeup_time_distance;
} em_do_slotted_mode_info_struct;

typedef struct
{
    kal_bool   bDsarAccessInProgress;
    kal_bool   bConnectionReqPending;
    kal_bool   bConnectionReqInProgress;
    kal_bool   rtbProtectState;
    kal_bool   bLLAOccupySuccess;
    kal_uint8  LLAResourceStatus;
    kal_uint8  probeTotalNum;
    kal_uint8  probeSerialNum;
    kal_uint8  sequenceTotalNum;
    kal_uint8  sequenceSerialNum;
    kal_uint8  msgPrtocolId;
    kal_uint16 msgMessageId;
    kal_uint16 msgTransId;
    EmDoRsvasOccupyStatusT rsvasState;
} em_evdo_access_procedure_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    em_do_slotted_mode_info_struct slotted_mode_info;
    em_evdo_slotted_event_enum     slotted_event;
} em_evl3_slotted_mode_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    em_evdo_access_procedure_info_struct access_procedure_info;
    em_evdo_access_event_enum            access_event;
} em_evl3_access_procedure_info_ind_struct;

typedef struct
{  
    kal_uint16  band;
    kal_uint16  channel;
	kal_bool    isPilotFound;
	kal_bool    isSyncRev;
	kal_bool    isSyncOK;
	kal_uint32  pilotPN;
} em_evdo_system_search_info_struct;

typedef struct
{  
    LOCAL_PARA_HDR
    em_info_enum em_info;

	em_evdo_system_search_info_struct system_search_info;
} em_evl3_system_search_info_ind_struct;


#endif /* ~_EM_PUBLIC_STRUCT_EVL3_H */

