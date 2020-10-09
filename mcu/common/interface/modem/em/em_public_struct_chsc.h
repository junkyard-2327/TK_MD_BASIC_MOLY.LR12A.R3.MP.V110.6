/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2017
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
 *   em_public_struct_chsc.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Engineer mode public structures for C2K CHSC module
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
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
 *
********************************************************************************/


#ifndef _EM_PUBLIC_STRUCT_CHSC_H
#define _EM_PUBLIC_STRUCT_CHSC_H

#include "em_struct.h"
#include "em_msgid.h"
#include "c2k_defs.h"

#define MAX_RTBA_CHANNEL_BLOCK_INFO    (32)

#define C2K_EM_MAX_GAP_NUM             (12)


/** C2K System Mode Definition.*/
typedef enum
{
    EM_SYS_MODE_1xRTT = 0,
    EM_SYS_MODE_EVDO,
    EM_SYS_MODE_MAX
}em_mode_type_enum;

/** RTBA channel type definition.*/
typedef enum
{
    EM_RTBA_XL1_ICS_PILOT_CHAN = 0,                                                /** ICS Pilot Acq Channel. */
    EM_RTBA_XL1_SINGLE_INTER_MEAS_CHAN,                                            /** Slotted Inter-Meas Channel after QPCH. */
    EM_RTBA_XL1_SLT_CCI_CHAN,                                                      /** Slotted CCI Channel. */
    EM_RTBA_XL1_SLT_QPCH1_CHAN,                                                    /** Slotted QPCH1 Channle. */
    EM_RTBA_XL1_SLT_QPCH2_CHAN,                                                    /** Slotted QPCH2 Channle. */
    EM_RTBA_XL1_ICS_RSSI_SCAN_CHAN,                                                /** ICS RSSI Scan Channel**/
    EM_RTBA_EVL1_ICS_PILOT_CHAN,                                                   /** ICS Pilot Acq Channel. */
    EM_RTBA_EVL1_STDBY_LTE_IDLE_MEAS_CHAN,                                         /** Standby Meas Channel in LTE Idle Gap. */
    EM_RTBA_EVL1_STDBY_LTE_CONN_MEAS_CHAN,                                         /** Standby Meas Channel in LTE Connect Gap. */
    EM_RTBA_EVL1_STDBY_CGI_MEAS_CHAN,                                              /** Standby CGI Meas Channel. */
    EM_RTBA_XL1_SLT_PCH_CHAN,                                                      /** 1xRTT's Slotted PCH Channle. */
    EM_RTBA_EVL1_SLT_PCH_CHAN,                                                     /** EVDO's Slotted PCH Channle. */
    EM_RTBA_XL1_ICS_SYNC_CHAN,                                                     /** 1xRTT ICS Sync Acq Channel. */
    EM_RTBA_XL1_ICS_SYNC_OPTIMIZE_CHAN,                                            /** 1xRTT ICS Sync Acq Channel with optimization schedule manner. */
    EM_RTBA_EVL1_ICS_SYNC_CHAN,                                                    /** EVDO ICS Sync Acq Channel. */
    EM_RTBA_EVL1_STDBY_LTE_IDLE_SYNC_CHAN,                                         /** Standby Sync Channel in LTE Idle Gap. */
    EM_RTBA_EVL1_STDBY_LTE_CONN_SYNC_CHAN,                                         /** Standby Sync Channel in LTE Connect Auto Gap. */
    EM_RTBA_EVL1_STDBY_CGI_SYNC_CHAN,                                              /** Standby CGI Sync Channel. */
    EM_RTBA_XL1_NSLT_PCH_OVHD_CHAN,                                                /** Non-Slotted PCh Channel. */
    EM_RTBA_XL1_NSLT_PCH_EARLY_WAKUP_CHAN,                                         /** Non-Slotted PCh ChannelRegistered in early wakeup. */
    EM_RTBA_XL1_SLT_PCH_LOST_DET_CHAN,                                             /** Slotted PCH Lost Detect Channle. */
    EM_RTBA_XL1_CONN_PS_RX_CHAN,                                                   /** Connect PS Rx. */
    EM_RTBA_EVL1_NSLT_CC_OVHD_CHAN,                                                /** Non-Slotted CC Channel. */
    EM_RTBA_EVL1_CONN_RX_CHAN,                                                     /** Connect PS Rx. */
    EM_RTBA_EVL1_STDBY_CGI_CHAN,                                                   /** Standby CGI Channel. */
    EM_RTBA_PRIMARY_CHAN_END
}em_rtba_channel_type_enum;

/** RTBA channel status definition.*/
typedef enum
{
    EM_INACTIVE_STATUS,
    EM_REGISTER_PEND_STATUS,
    EM_PREEMPTED_STATUS,
    EM_GRANT_PEND_STATUS,
    EM_ACTIVE_STATUS
}em_rtba_channel_staus_enum;

/** RTBA channel block information.*/
typedef struct
{
    em_rtba_channel_type_enum   channel;
    kal_uint32                  start_time;
    kal_uint32                  reserve_length;
    em_rtba_channel_staus_enum  status;
}em_c2k_rtba_channel_block_info_ind_struct;

/** RTBA Channel Status and Block Information.*/
typedef struct
{
    em_mode_type_enum                               mode;
    kal_bool                                        srlte_mode;
    em_c2k_rtba_channel_block_info_ind_struct       channel_info[MAX_RTBA_CHANNEL_BLOCK_INFO];
    kal_uint8                                       block_index;
}em_c2k_rtba_channel_status_info_msg_struct;
    
typedef struct
{
    SysAirInterfaceT                               mode;
}em_c2k_rtba_channel_status_info_struct;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    em_c2k_rtba_channel_status_info_msg_struct          ChannelStatusInfo;
}em_c2k_rtba_channel_status_info_ind_struct;


/* LL1A internal state */
typedef enum
{
    EM_LL1A_FLIGHT,
    EM_LL1A_STANDBY,
    EM_LL1A_ACTIVE,
    EM_LL1A_RAT_MODE_INIT,
    EM_LL1A_SUSPEND
} em_ll1a_rat_status_enum;

/* RMC RAT status */
typedef enum
{
    EM_RAT_FLIGHT,
    EM_RAT_STANDBY,
    EM_RAT_ACTIVE,
    EM_RAT_NULL
} em_rmc_rat_status_enum;

/* RMC MODE status */
typedef enum
{
    EM_RMC_MODE_BEGIN,
    EM_RMC_NULL_MODE,
    EM_RMC_IDLE_MODE,
    EM_RMC_CONNECT_MODE
} em_rmc_mode_status_enum;

/* L1D DATA CALL MODE status */
typedef enum
{
    EM_L1D_NON_DATA_CONNECT_MDOE,
    EM_L1D_DATA_CONNECT_MDOE
} em_l1d_mode_status_enum;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum               em_info;

    em_ll1a_rat_status_enum    ll1a_rat_state;
    em_rmc_rat_status_enum     rmc_rat_status;
    em_rmc_mode_status_enum    rmc_mode_status;
    em_l1d_mode_status_enum    l1d_mode_status;
    kal_uint8                  gap_offered_status;
    kal_uint8                  auto_gap_avail_status;
    kal_uint8                  gap_ignore_flag;
    kal_uint16                 drx_cycle;
} em_c2k_ll1a_state_mode_info_ind_struct;

/* L1D DATA CALL MODE status */
typedef struct
{
    kal_uint32  gap_start_time;
    kal_uint32  gap_end_time;
} em_gap_info_type_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                 em_info;

    kal_uint8                    gap_num;
    em_gap_info_type_ind_struct  gap_info[C2K_EM_MAX_GAP_NUM];

} em_c2k_ll1a_standby_gap_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                 em_info;

    kal_uint8                    gap_num;
    em_gap_info_type_ind_struct  gap_info;
} em_c2k_ll1a_active_gap_info_ind_struct;

/*do spage information */
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                 		em_info;

    kal_uint32                          TriggerEvent;
    kal_uint32                          HscSpageHistory;
    kal_uint8       					PrevSpageState;
    kal_uint8                           CurrSpageState;
	kal_uint16                          Prev2CurrTrigger;
} em_c2k_do_spage_state_info_ind_struct;

/*HSC MPA information */
typedef struct
{
    kal_uint8       					Antenna;
    kal_uint8                           Owner;
}em_c2k_hsc_mpa_status_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                 		em_info;

    em_c2k_hsc_mpa_status_info_struct  	mpa_info;
} em_c2k_hsc_mpa_status_info_ind_struct;

#endif /* ~_EM_PUBLIC_STRUCT_CHSC_H */

