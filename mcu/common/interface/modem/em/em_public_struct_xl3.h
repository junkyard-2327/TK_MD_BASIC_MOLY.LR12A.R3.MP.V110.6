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
 *   em_public_struct_xl3.h
 *
 * Project:
 * --------
 *   Gen93
 *
 * Description:
 * ------------
 *   Engineer mode public structures for C2K XL3 module.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
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


#ifndef _EM_PUBLIC_STRUCT_XL3_H
#define _EM_PUBLIC_STRUCT_XL3_H

#include "em_struct.h"
#include "em_msgid.h"


#define EM_1XRTT_ASET_MAX_NUM 6


/* Definition of CP state */
typedef enum
{
    EM_CP_DISABLED          = 0,   /* CP Disabled                              */
    EM_CP_SYS_DETERMINATION = 1,   /* System Determination (6.6.1.1)           */
    EM_CP_PILOT_ACQUISITION = 2,   /* Pilot Channel Acquisition (6.6.1.2)      */
    EM_CP_SYNC_ACQUISITION  = 3,   /* Sync Channel Acquisition (6.6.1.3)       */
    EM_CP_TIMING_CHANGE     = 4,   /* Timing Change (6.6.1.4)                  */
    EM_CP_IDLE              = 5,   /* Idle (6.6.2)                             */
    EM_CP_UPDATE_OHD_INFO   = 6,   /* Update Overhead Information (6.6.3.2)    */
    EM_CP_PAGE_RESPONSE     = 7,   /* Page Response (6.6.3.3)                  */
    EM_CP_ORD_MSG_RESP      = 8,   /* Order/Message Response (6.6.3.4)         */
    EM_CP_ORIGINATION       = 9,   /* Origination Attempt (6.6.3.5)            */
    EM_CP_REGISTRATION      = 10,  /* Registration Attempt (6.6.3.6)           */
    EM_CP_MSG_TRANSMISSION  = 11,  /* Message Transmission (6.6.3.7)           */
    EM_CP_TC_INIT           = 12,  /* Traffic Channel Initialization (6.6.4.2) */
    EM_CP_TC_WAIT_ORDER     = 13,  /* TC Waiting for Order (6.6.4.3.1)         */
    EM_CP_TC_WAIT_ANSWER    = 14,  /* TC Waiting for MS Answer (6.6.4.3.2)     */
    EM_CP_TC_CONVERSATION   = 15,  /* TC Conversation (6.6.4.4)                */
    EM_CP_TC_RELEASE        = 16,  /* TC Release (6.6.4.5)                     */
    EM_CP_NST               = 17,  /* Non-Signaling Test Mode                  */
    EM_CP_FROZEN            = 18,  /* Temp put here                            */
    EM_CP_TC_FROZEN         = 19,  /* TC Frozen                                */
    EM_CP_NUM_STATES        = 20,  /* Num of state                             */
} em_cp_state_enum;

/* Definition of Idle Substate */
typedef enum
{
    EM_IDLE_START               = 0,
    EM_IDLE_WAIT_FOR_FCSCH      = 1,
    EM_IDLE_MONITOR             = 2,
    EM_IDLE_HANDOFF             = 3,
    EM_IDLE_CH_CHANGE           = 4,
    EM_IDLE_AEHO                = 5,
    EM_IDLE_WAIT_FOR_ACC        = 6,
    EM_IDLE_POWER_DOWN          = 7,
    EM_IDLE_SLOTTED_HO_WAKEUP   = 8,
    EM_IDLE_QPCH_HO_WAKEUP      = 9,
    EM_IDLE_FROZEN              = 10,
    EM_IDLE_SUB_STATE_NUM       = 11,
} em_1x_idle_sub_state_enum;

typedef struct
{
    em_cp_state_enum cp_state;
    em_cp_state_enum prev_cp_state;
    em_1x_idle_sub_state_enum idle_state;
} em_1x_cp_states_struct;

typedef struct
{
    kal_uint16 band;
    kal_uint16 channel;
    kal_uint16 ref_pn;
    kal_uint16 aset_pn[EM_1XRTT_ASET_MAX_NUM];
    kal_uint16 sid;
    kal_uint16 nid;
    kal_uint16 reg_zone;
    kal_uint16 mcc_s;
    kal_uint8 mnc_s;
    kal_uint8 pzid;
    kal_uint8 prev;
    kal_uint8 roam;
} em_1x_serving_cell_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    em_1x_cp_states_struct cp_states;
    em_1x_serving_cell_info_struct serving_cell_info;
} em_xl3_cp_status_ind_struct;


/* Definition of 1x wake mode in slotted mode */
typedef enum
{
    EM_1X_PCH   = 0,
    EM_1X_QPCH1 = 1,
    EM_1X_QPCH2 = 2,
    EM_1X_CCI   = 3,
    EM_1X_FCCCH = 4,
    EM_1X_BC    = 5,
} em_1x_wake_mode_enum;

typedef em_1x_wake_mode_enum em_1x_sleep_cmd_enum;

typedef struct
{
    kal_bool slotted_mode;
    kal_bool sleep_mode;
    em_1x_wake_mode_enum wake_mode;
    em_1x_sleep_cmd_enum sleep_cmd;
    kal_uint8 sci;
    kal_uint16 pgslot;
    kal_bool qpch_enable;
    kal_bool scm_slotted_mode;
    kal_uint16 slotted_veto;
    kal_bool ovhd_current;
    kal_uint8 cfg_msg_seq;
    kal_uint8 spm_msg_seq;
    kal_uint8 espm_msg_seq;
    kal_uint8 nlm_msg_seq;
    kal_uint8 enlm_msg_seq;
    kal_uint8 gnlm_msg_seq;
    kal_uint8 cclm_msg_seq;
    kal_uint8 gsrdm_msg_seq;
    kal_uint8 ati_msg_seq;
    kal_uint8 egsrdm_msg_seq;
    kal_uint8 ecclm_msg_seq;
    kal_uint8 acc_msg_seq;
} em_1x_slotted_mode_info_struct;

/* Definition of 1x idle slotted mode events */
typedef enum
{
    EM_1X_SM_ENABLE             = 0,
    EM_1X_SM_DISABLE            = 1,
    EM_1X_SM_WAKE_PCH           = 2,
    EM_1X_SM_WAKE_PI1           = 3,
    EM_1X_SM_WAKE_PI2           = 4,
    EM_1X_SM_WAKE_CCI           = 5,
    EM_1X_SM_WAKE_BC            = 6,
    EM_1X_SM_SLEEP_PCH          = 7,
    EM_1X_SM_SLEEP_PI1          = 8,
    EM_1X_SM_SLEEP_PI2          = 9,
    EM_1X_SM_SLEEP_CCI          = 10,
    EM_1X_SM_SLEEP_BC           = 11,
    EM_1X_SM_RESYNC_DENIED_PCH  = 12,
    EM_1X_SM_RESYNC_DENIED_PI1  = 13,
    EM_1X_SM_RESYNC_DENIED_PI2  = 14,
    EM_1X_SM_RESYNC_DENIED_CCI  = 15,
    EM_1X_SM_RESYNC_DENIED_BC   = 16,
    EM_1X_SM_EARLY_WAKEUP       = 17,
    EM_1X_SM_EVENT_MAX          = 18,
} em_1x_slotted_event_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    em_1x_slotted_event_enum slotted_event;
    em_1x_slotted_mode_info_struct slotted_mode_info;
} em_xl3_slotted_mode_info_ind_struct;

/* Definition of 1x call events */
typedef enum
{
    EM_CALL_EVENT_INVALID      = 0,
    EM_CALL_EVENT_CDV          = 1,
    EM_CALL_EVENT_CHV          = 2,
    EM_CALL_EVENT_CONN         = 3,
    EM_CALL_EVENT_RING         = 4,
    EM_CALL_EVENT_ATA          = 5,
    EM_CALL_EVENT_CEND         = 6,
    EM_CALL_EVENT_REG_SUCC     = 7,
    EM_CALL_EVENT_PAGING       = 8,
    EM_CALL_EVENT_ACC_ATTEMPT  = 9,
    EM_CALL_EVENT_NW_ACK       = 10,
    EM_CALL_EVENT_CH_ASSN      = 11,
    EM_CALL_EVENT_MAX          = 12,
} em_call_events_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    em_call_events_enum call_events;
} em_1xrtt_call_events_ind_struct;

/* Definition of c2k rsvas state */
typedef enum
{
    EM_RSVAS_NORMAL_STATE       = 0,
    EM_RSVAS_CONNECT_STATE      = 1,
    EM_RSVAS_VIRTUAL_STATE      = 2,
    EM_RSVAS_SUSPEND_STATE      = 3,
    EM_RSVAS_NUM_STATE          = 4,
} em_rsvas_state_enum;

/* Definition of c2k rsvas temp state */
typedef enum
{
    EM_RSVAS_TEMP_STATE_NONE             = 0,
    EM_RSVAS_WAIT_OCCUPY_IND             = 1,
    EM_RSVAS_WAIT_SUSPEND_REQ            = 2,
    EM_RSVAS_WAIT_SUSPEND_CNF            = 3,
    EM_RSVAS_WAIT_RESUME_IND             = 4,
    EM_RSVAS_WAIT_VIRTUAL_SUSPEND_CNF    = 5,
    EM_RSVAS_WAIT_ABORT_CNF              = 6,
    EM_RSVAS_NUM_TEMP_STATE              = 7,
} em_rsvas_temp_state_enum;

/* Definition of c2k rsvas event */
typedef enum
{
    EM_RSVAS_OCCUPY_EVENT                     = 0,
    EM_RSVAS_OCCUPY_IND_EVENT                 = 1,
    EM_RSVAS_RELEASE_EVENT                    = 2,
    EM_RSVAS_RESUME_EVENT                     = 3,
    EM_RSVAS_VIRTUAL_RESUME_EVENT             = 4,
    EM_RSVAS_ABORT_EVENT                      = 5,
    EM_RSVAS_SUSPEND_EVENT                    = 6,
    EM_RSVAS_SUSPEND_CNF_EVENT                = 7,
    EM_RSVAS_VIRTUAL_SUSPEND_EVENT            = 8,
    EM_RSVAS_VIRTUAL_SUSPEND_CNF_EVENT        = 9,
    EM_RSVAS_VIRTUAL_SUSPEND_COMPLTE_EVENT    = 10,
    EM_RSVAS_ABORT_CNF_EVENT                  = 11,
    EM_RSVAS_NUM_EVENT                        = 12,
} em_rsvas_event_enum;

#define FRAME_COUNT_500MS (25)

typedef struct
{
    kal_uint32 sys_frc_cnt;
    kal_bool ftc_frame_quality;
}em_1x_ftc_crc_struct;

typedef struct
{
    kal_uint8 ftc_crc_total_count;
    kal_uint8 ftc_crc_error_count;
    em_1x_ftc_crc_struct ftc_crc_detail[FRAME_COUNT_500MS];
} em_1x_crc_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    em_rsvas_state_enum state;
    em_rsvas_state_enum prevState;
    em_rsvas_temp_state_enum tempState;
    em_rsvas_event_enum event;
    em_1x_crc_info_struct crc_info;
} em_c2k_rsvas_info_ind_struct;

typedef enum
{
    EM_CP_ABE_INVALID                           = 0,
    EM_CP_ABE_INIT_FAIL_NO_SERVICE              = 1,    /* CP_NO_SERVICE_TIME expired (60s) */
    EM_CP_ABE_INIT_FAIL_PILOT_ACQ_RF_GRANTED    = 2,    /* L1D can't report RF_GRANTED in 15s */
    EM_CP_ABE_INIT_FAIL_PILOT_ACQ_T20           = 3,    /* L1D can't report pilot acq result in 15s */
    EM_CP_ABE_INIT_FAIL_SYNC_ACQ                = 4,    /* L1D report sync acq failure */
    EM_CP_ABE_INIT_FAIL_SYNC_ACQ_T21            = 5,    /* Layer 2 can't build valid sync message in 1s */
    EM_CP_ABE_INIT_FAIL_TIME_CHANGE             = 6,    /* L1D can't report SYNC_TO_SYS_TIME in 2s */
    EM_CP_ABE_INIT_FAIL_LOST_SYSTEM_REJECTED    = 7,    /* CSS reports current system is not most preferred */
    EM_CP_ABE_IDLE_FAIL_LOST_T30                = 8,    /* Layer 2 can't build any valid PCH message in 3s */
    EM_CP_ABE_IDLE_FAIL_LOST_T40                = 9,    /* PSW can't receive overhead complete in 4s */
    EM_CP_ABE_IDLE_WARN_SEARCH_RESULT_DELAY     = 10,   /* L1D can't report measurement report in 800ms in Entry HO */
    EM_CP_ABE_IDLE_FAIL_WAKEUP_FAILURE          = 11,   /* L1D can't wakeup in expected time */
    EM_CP_ABE_IDLE_LOST_NO_ESPM                 = 12,   /* PSW can't receive ESPM in 4s when MCC/MNC needed for validate */
    EM_CP_ABE_IDLE_FAIL_LOST_SYSTEM_REJECTED    = 13,   /* CSS reports current system is not most preferred */
    EM_CP_ABE_IDLE_LOST_PILOT_FAIL              = 14,   /* PSW triggers pilot lost in poor signal when EVDO in connected */
    EM_CP_ABE_ACC_FAIL_LOST_T40_T72             = 15,   /* Layer 2 can't build any valid PCH message in 3s */
    EM_CP_ABE_ACC_FAIL_LOST_T41                 = 16,   /* PSW can't receive overhead complete in 4s */
    EM_CP_ABE_ACC_FAIL_T42                      = 17,   /* PSW can't receive ECAM in 12s after received Ack Order */
    EM_CP_ABE_ACC_FAIL_MAX_PROBE                = 18,   /* Max probe and access failure */
    EM_CP_ABE_ACC_FAIL_PSIST_FAIL               = 19,   /* Layer 2 calculates PSIST failure */
    EM_CP_ABE_ACC_FAIL_PROBE_FAIL               = 20,   /* Layer 2 finds message size to send is error */
    EM_CP_ABE_ACC_FAIL_SEND_ACC_MSG_FAIL        = 21,   /* Layer 2 sends reverse message failure*/
    EM_CP_ABE_ACC_FAIL_E911_ACC_FAIL            = 22,   /* Emergency call access failure in 16s */
    EM_CP_ABE_ACC_FAIL_OOSA                     = 23,   /* Current service is aborted by MD1 Rsvas suspend / Gmss Deactivate */
    EM_CP_ABE_ACC_FAIL_EXIT_PS                  = 24,   /* Current service is aborted by LTE MPSR / IMS */
    EM_CP_ABE_ACC_FAIL_USER_CANCEL              = 25,   /* Current service is aborted by user */
    EM_CP_ABE_ACC_WARN_PROBE_HO_FAIL            = 26,   /* Access handoff failure, but it doesn't cause access failure */
    EM_CP_ABE_TC_FAIL_LOST_FADE_TIMER           = 27,   /* PSW can't receive 2 consecutive good frames in 5s */
    EM_CP_ABE_TC_FAIL_LOST_HHO_TIMER            = 28,   /* Hard handoff failure */
    EM_CP_ABE_TC_FAIL_LOST_ACK_FAIL             = 29,   /* Layer 2 sends one reverse message reach 13 times consecutive failure in assure mode */
    EM_CP_ABE_TC_FAIL_LOST_T50                  = 30,   /* PSW can't receive 2 consecutive good frames in 1s in TC_INIT */
    EM_CP_ABE_TC_FAIL_LOST_T51                  = 31,   /* PSW can't receive Ack Order in 2s in TC_INIT */
    EM_CP_ABE_TC_FAIL_LOST_T52                  = 32,   /* For terminal call, PSW can't reveive AWIM in 5s in TC_WAIT_FOR_ORDER */
    EM_CP_ABE_TC_FAIL_LOST_T53                  = 33,   /* For terminal call, PSW can't reveive user answer in 65s in TC_WAIT_FOR_ORDER */
    EM_CP_ABE_TC_WARN_LOST_T55                  = 34,   /* MS originates Release Order, but can't receive Release Order from network in 2s */
    EM_CP_ABE_TC_WARN_OOSA                      = 35,   /* Current service is aborted by MD1 Rsvas suspend / Gmss Deactivate */
    EM_CP_ABE_TC_WARN_EXIT_PS                   = 36,   /* Current service is aborted by LTE MPSR / IMS */
    EM_CP_ABE_TC_FAIL_E911_ACC_FAIL             = 37,   /* Emergency call access failure in 16s */
    EM_CP_ABE_EVENT_NUM_MAX                     = 38,
} em_cp_abnormal_event_enum;

typedef struct
{
    em_cp_abnormal_event_enum   event;
    em_cp_state_enum            state;
    kal_uint16                  band;
    kal_uint16                  channel;
    kal_uint16                  pn;
    kal_uint8                   last_meas_ecio;

} em_xl3_abnormal_event_info_struct;

typedef enum
{
    EM_1X_HO_EVENT_INVALID  = 0,
    EM_1X_IHO_INTRA         = 1,
    EM_1X_IHO_INTER         = 2,
    EM_1X_HASH_CH           = 3,
    EM_1X_HASH_PAGE         = 4,
    EM_1X_AEHO_INTRA        = 5,
    EM_1X_AEHO_INTER        = 6,
    EM_1X_AHO               = 7,
    EM_1X_SHO               = 8,
    EM_1X_HHO_INTRA         = 9,
    EM_1X_HHO_INTER         = 10,
    EM_1X_HO_RESERVE        = 11,
} em_1x_ho_event_enum;

typedef struct
{
    kal_uint16  src_band;
    kal_uint16  src_channel;
    kal_uint16  src_pn;
    kal_uint8   src_ecio;  /* uint: -0.5dB */
    kal_uint16  dest_band;
    kal_uint16  dest_channel;
    kal_uint16  dest_pn;
    kal_uint8   dest_ecio;  /* uint: -0.5dB */
} em_1x_ho_common_info_struct;

typedef struct
{
    kal_uint16  src_band;
    kal_uint16  src_channel;
    kal_uint16  src_aset_pn[EM_1XRTT_ASET_MAX_NUM];
    kal_uint16  dest_band;
    kal_uint16  dest_channel;
    kal_uint16  dest_aset_pn[EM_1XRTT_ASET_MAX_NUM];
} em_1x_ho_traffic_info_struct;

typedef struct
{
    em_1x_ho_event_enum event;
    em_cp_state_enum cp_state;
    union
    {
        em_1x_ho_common_info_struct common_info;
        em_1x_ho_traffic_info_struct traffic_info;
    } choice;  /* parameters are valid when ho_event is not invalie */
} em_1x_ho_event_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                        em_info;
    em_xl3_abnormal_event_info_struct   abnormal_event_info;
    em_1x_ho_event_info_struct          ho_event_info;
} em_xl3_cp_events_ind_struct;


/* Definition of 1xrtt paging info */
typedef enum
{
    EM_1X_PCH_WAKEUP        = 0,
    EM_1X_QPCH_OFF          = 1,
    EM_1X_NON_SLOTTED_MODE  = 2,
    EM_1X_PCH_RESYNC_DENIED = 3,
} em_1x_pch_rcv_mode_enum;

typedef struct
{
    kal_uint16  src_pn;
    kal_int8    src_ecio;
    kal_uint16  dest_pn;
    kal_int8    dest_ecio;
} em_qpch_ho_info_struct;

/* Definition of EM QPCH Indicator */
typedef enum
{
    EM_1X_PI_OFF        = 0,
    EM_1X_PI_ON         = 1,
    EM_1X_PI_UNDEF      = 2,
    EM_1X_PI_ERASURE    = 3,
    EM_1X_PI_INVALID    = 4,
} em_1x_pi_status_enum;

typedef struct
{
    em_1x_pi_status_enum   pi_status;
    em_qpch_ho_info_struct ho_info;
} em_qpch_info_struct;

typedef struct
{
    kal_uint8   rcv_frame_num;
    kal_uint8   valid_pch_msg_num;
    kal_uint8   bad_crc_num;
    kal_uint8   middle_sci_num;
    kal_uint8   invalid_frame_num;
} em_pch_msg_stat_struct;

typedef struct
{
    kal_uint32              paging_time;
    em_cp_state_enum        cp_state;
    em_1x_pch_rcv_mode_enum pch_rcv_mode;
    kal_bool                paging_matched;
    kal_bool                paging_ignored;
    kal_uint16              paging_so;
    em_qpch_info_struct     qpch_info;
    kal_uint16              channel;
    kal_uint16              aset_pn;
    kal_uint8               aset_last_ecio;
    em_pch_msg_stat_struct  pch_msg_stat;
} em_1x_paging_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                em_info;
    em_1x_paging_info_struct    paging_info;
} em_xl3_paging_info_ind_struct;


/* Definition of 1xrtt set info */
typedef struct
{
    kal_uint8  act_win_size;
    kal_uint8  nghbr_win_size;
    kal_uint8  remain_win_size;
} em_1x_srch_param_struct;

typedef struct
{
    kal_uint16  pn;
    kal_bool    last_measured;
    kal_int8    last_meas_otd;
    kal_uint8   last_meas_ecio;
    kal_bool    drop_timer_enabled; /* indicates if the timer is active     */
    kal_uint16  drop_timer;         /* drop timer length, in uint 100ms */
    kal_uint8   t_drop_count;       /* T_DROP hysteresis counter */
    kal_bool    notify_drop_timer;  /* PSMM sent when HO drop timer expires */
    kal_bool    keep;               /* keep indicator for PSMM message      */
    kal_uint8   hspd_t_comp_count;
} em_1x_aset_info_struct;

typedef struct
{
    kal_uint16  pn;
    kal_bool    last_measured;
    kal_int8    last_meas_otd;
    kal_uint8   last_meas_ecio;
    kal_bool    drop_timer_enabled; /* indicates if the timer is active     */
    kal_uint16  drop_timer;         /* drop timer length, in uint 100ms */
    kal_uint8   t_drop_count;       /* T_DROP hysteresis counter */
    kal_bool    notify_dynamic_tadd;/* PSMM sent when satisfy Dynamic TAdd */
    kal_bool    notify_tcomp_0;     /* PSMM sent for TComp (Aset 0) */
    kal_bool    notify_tcomp_1;     /* PSMM sent for TComp (Aset 1) */
    kal_bool    notify_tcomp_2;     /* PSMM sent for TComp (Aset 2) */
    kal_bool    notify_tcomp_3;     /* PSMM sent for TComp (Aset 3) */
    kal_bool    notify_tcomp_4;     /* PSMM sent for TComp (Aset 4) */
    kal_bool    notify_tcomp_5;     /* PSMM sent for TComp (Aset 5) */
    kal_uint8   srch_win;          /* Nghbr pilot CH search window size   */
} em_1x_cset_info_struct;

typedef struct
{
    kal_uint16  band;
    kal_uint16  channel;
    kal_uint16  pn;
    kal_bool    last_measured;
    kal_int8    last_meas_otd;
    kal_uint8   last_meas_ecio;
    kal_uint8   nghbr_config;
    kal_uint8   delayed_iho_count;
    kal_bool    aeho_allowed;
    kal_bool    aho_allowed;
    kal_uint8   srch_win;
    kal_uint8   age;
    kal_bool    remove;  /* used for marking removal during neighbor list update */
    kal_uint8   t_add_count;
} em_1x_nset_info_struct;

typedef struct
{
    kal_uint16  pn;
    kal_bool    last_measured;
    kal_int8    last_meas_otd;
    kal_uint8   last_meas_ecio;
    kal_bool    is_detected_ever;
    kal_uint8   t_drop_count;        /* T_DROP hysteresis counter           */
    kal_uint8   delayed_iho_count;
    kal_bool    aeho_allowed;
    kal_bool    aho_allowed;
} em_1x_rset_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum            em_info;
    em_1x_srch_param_struct srch_param;
    kal_uint8               aset_num;
    em_1x_aset_info_struct  aset_info[EM_SYS_MAX_ACTIVE_LIST_PILOTS];
    kal_uint8               cset_num;
    em_1x_cset_info_struct  cset_info[EM_SYS_MAX_CANDIDATE_LIST_PILOTS];
    kal_uint8               nset_num;
    em_1x_nset_info_struct  nset_info[EM_SYS_MAX_NEIGHBOR_LIST_PILOTS];
    kal_uint8               rset_num;
    em_1x_rset_info_struct  rset_info[EM_SYS_MAX_NEIGHBOR_LIST_PILOTS];
} em_xl3_set_info_ind_struct;

typedef enum
{
    EM_CP_UNKNOWN                           =  0,
    EM_CP_PREV_POWERUP                      =  1,
    EM_CP_PREV_ACQUISITION_FAILURE          =  2,
    EM_CP_PREV_NEW_SYSTEM                   =  3,
    EM_CP_PREV_CDMA_AVAILABLE               =  4,
    EM_CP_PREV_RESELECTION                  =  5,
    EM_CP_PREV_PROTOCOL_MISMATCH            =  6,
    EM_CP_PREV_SYSTEM_LOST                  =  7,
    EM_CP_PREV_UNLOCK                       =  8,
    EM_CP_PREV_ACCESS_DENIED                =  9,
    EM_CP_PREV_NDSS_OFF                     =  10,
    EM_CP_PREV_RELEASE                      =  11,
    EM_CP_PREV_ERROR                        =  12,
    EM_CP_PREV_REDIRECTION                  =  13,
    EM_CP_PREV_REGISTRATION_REJECT          =  14,
    EM_CP_PREV_WRONG_SYSTEM                 =  15,
    EM_CP_PREV_WRONG_NETWORK                =  16,
    EM_CP_PREV_RESCAN                       =  17,
    EM_CP_PREV_LOCK                         =  18,
    EM_CP_PREV_SYSTEM_LOST_ACCESS           =  19,
    EM_CP_PREV_E911_CALL                    =  20,
    EM_CP_PREV_OTASP_CALL                   =  21,
    EM_CP_PREV_PERIODIC_RESCAN_OBSOLETE     =  22,
    EM_CP_PREV_ADDITIONAL_CDMA              =  23,
    EM_CP_PREV_SYSTEM_RESELECTION           =  24,
    EM_CP_PREV_FORCE_BAND_MODE              =  25,
    EM_CP_PREV_EXIT_E911_MODE               =  26,
    EM_CP_PREV_SYSTEM_FOUND_NOT_BEST        =  27,
    EM_CP_PREV_REDIRECTION_END_TIMER_EXPIRED =  28,
    EM_CP_PREV_FORCE_ANALOG_MODE            =  29,
    EM_CP_PREV_MORE_PREF_SCAN_TIMER_EXPIRED =  30,
    EM_CP_PREV_ACCESS_FAILED_SILENT_RETRY   =  31,
    EM_CP_PREV_ESPM_NOT_RECEIVED            =  32,
    EM_CP_PREV_TIMING_CHANGE_FAILURE        =  33,
    EM_CP_PREV_SYNCHRONIZATION_FAILURE      =  34,
    EM_CP_PREV_REG_THROTTLING               =  35,
    EM_CP_PREV_ACCESS_MAX_PROBES            =  36,

    EM_CP_PREV_PAGING_MONITOR_TIMEOUT       =  40,
    EM_CP_PREV_MODEM_FAILURE                =  41,
    EM_CP_PREV_IRAT_RESET_1XCDMA            =  42,
    EM_CP_PREV_MANUAL_AVOID_RESELECT        =  43,

    EM_CP_PREV_1X_DO_COLLOCATED_BROKEN      =  50,
    EM_CP_PREV_REINIT                       =  51,
    EM_CP_PREV_E911_TRAFF_CONV_FAIL         =  52,
    EM_CP_GLOBALMODE_DO_ACQUISITION_FAILURE =  60,
    EM_CP_PREV_1X_RESUME_FROM_SUSPENDED     =  61,
    EM_CP_PREV_1X_DATA_ACCESS_RELEASE       =  62,
    EM_CP_PREV_MAX_NUM,
} em_1xrtt_search_indication_enum;


typedef struct
{
    kal_bool                         search_success;
    em_cp_state_enum                 cp_state;
    em_1xrtt_search_indication_enum  search_ind;
    kal_uint16                       band;
    kal_uint16                       channel;
    kal_uint32                       time_start_search;
    kal_uint32                       time_enter_oosa;
    kal_uint32                       time_exit_oosa;
    kal_uint32                       time_SD;
    kal_uint32                       time_RF_grant;
    kal_uint32                       time_PA;
    kal_uint32                       time_SA;
    kal_uint32                       time_TC;
    kal_int16                        RSSI;
    kal_int16                        EcIo;
    kal_int16                        SyncEbNt;
    kal_int32                        total_foe;
} em_xl3_system_search_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                     em_info;
    em_xl3_system_search_info_struct system_search_info;
} em_xl3_system_search_info_ind_struct;


typedef enum
{
    EM_1X_CALL_SUCCESS                      = 0,    /* call success. */
    EM_1X_CALL_FAIL_NO_SERVICE              = 1,    /* can't camp on for a long time. */
    EM_1X_CALL_FAIL_BLOCKED_BY_IRAT         = 2,    /* blocked by other RATs. */
    EM_1X_CALL_FAIL_POWERDOWN               = 3,    /* interrupted by power down or enter flight mode. */
    EM_1X_CALL_FAIL_T42_EXPIRED             = 4,    /* T42 expired - can not receive ECAM in 12s. */
    EM_1X_CALL_FAIL_MAX_PROBE               = 5,    /* max probe in access phase. */
    EM_1X_CALL_FAIL_SYSTEM_LOST             = 6,    /* system lost caused by poor signal. */
    EM_1X_CALL_FAIL_PSIST_FAIL              = 7,    /* persistence calculation failed. */
    EM_1X_CALL_FAIL_PROBE_FAIL              = 8,    /* signaling message size problem. */
    EM_1X_CALL_FAIL_SEND_ACC_MSG_FAIL       = 9,    /* access attempt could not be sent. */
    EM_1X_CALL_FAIL_E911_ACC_FAIL           = 10,   /* emergency call access failure. */
    EM_1X_CALL_FAIL_NW_RELEASE              = 11,   /* access failure caused by network release order. */
    EM_1X_CALL_FAIL_REORDER                 = 12,   /* access failure caused by network reorder order. */
    EM_1X_CALL_FAIL_NW_LOCK                 = 13,   /* access failure caused by network lock order. */
    EM_1X_CALL_FAIL_NW_INTERCEPT            = 14,   /* access failure caused by network intercept order. */
    EM_1X_CALL_FAIL_INVALID_CAM             = 15,   /* received invalid channel assignment message. */
    EM_1X_CALL_FAIL_RETRY_ORDER             = 16,   /* access failure caused by network retry order. */
    EM_1X_CALL_FAIL_FNM_RELEASE             = 17,   /* released by FNM. */
    EM_1X_CALL_FAIL_UIM_PLUGOUT             = 18,   /* uim card is plugout. */
    EM_1X_CALL_FAIL_FADE_TIMER              = 19,   /* fade timer expired - can't received 2 consecutive good frames. */
    EM_1X_CALL_FAIL_ACK_FAIL                = 20,   /* ack fail. */
    EM_1X_CALL_FAIL_NORMAL_CALL_IN_E911     = 21,   /* unexpected normal call in emergency call mode. */
    EM_1X_CALL_FAIL_VOICE_NOT_ALLOWED       = 22,   /* voice call is not allowed set by phone. */
    EM_1X_CALL_FAIL_DATA_PREFERRED          = 23,   /* call rejected as data connection exist when data preferred set. */
    EM_1X_CALL_FAIL_REASON_MAX_NUM,
} em_1xrtt_call_fail_reason_enum;

typedef enum
{
    EM_C2K_CALL_MO      = 0,    /* mo voice call. */
    EM_C2K_CALL_MT      = 1,    /* mt voice call. */
    EM_C2K_CALL_DROP    = 2,    /* voice call drop. */
    EM_C2K_CALL_TYPE_MAX_NUM,
} em_c2k_call_type_enum;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                   em_info;
    em_c2k_call_type_enum          type;
    em_1xrtt_call_fail_reason_enum reason;
    kal_uint16                     mcc;
    kal_uint8                      mnc;
    kal_uint16                     sid;
    kal_uint16                     nid;
    kal_uint16                     pn_offset;
    kal_uint16                     band;
    kal_uint16                     channel;
    kal_uint16                     ecio;   /* unit of -0.5dB */
    kal_int8                       rssi;
} em_xl3_call_fail_reason_ind_struct;


#endif /* ~_EM_PUBLIC_STRUCT_XL3_H */

