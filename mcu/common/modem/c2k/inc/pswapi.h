/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS (""MEDIATEK SOFTWARE"")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN ""AS-IS"" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
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
/*************************************************************
*
* This Software is the property of VIA Telecom, Inc. and may only be used pursuant to a license from VIA Telecom, Inc.
*
* Any unauthorized use inconsistent with the terms of such license is strictly prohibited.
*
* Copyright (c) 1998-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
#ifndef _PSWAPI_H_
#define _PSWAPI_H_
/*****************************************************************************
*
* FILE NAME   : pswapi.h
*
* DESCRIPTION : Protocol stack interface
*
*     This include file provides system wide global type declarations and
*     constants
*
* HISTORY     :
*     See Log at end of file
*
*****************************************************************************/

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/

#include "pswnam.h"
#include "pswcustom.h"
#include "pswsmstune.h"
#include "lmdapi.h"
#include "syscommon.h"
#include "c2k_defs.h"
#include "cssapi.h"
#ifdef MTK_DEV_C2K_IRAT
#include "iratapi.h"
#endif
#include "module_msg_range.h"

#ifdef MTK_PLT_ON_PC_UT
#include "sbp_public_utility.h"
#endif
#include "psw_msgid.h"
#include "hlpapi.h"
#include "pswairmsg.h"
#include "dspmapi.h"
/*----------------------------------------------------------------------------
 Global Defines and Macros
----------------------------------------------------------------------------*/

#define SYS_CP_MAX_AFLT_LIST_PILOTS_MEAS         16 /* max number of pilot pn's in neighbor list measured to PSW */

#define PSW_MAILBOX_CMD      EXE_MAILBOX_1_ID
#define PSW_MAILBOX2_CMD     EXE_MAILBOX_2_ID

#define PSW_SYNC_DATA_SIZE   4

#define PSW_MAX_SMS_SIZE     256
#define PRM_MAX_SIZE         256

#define PSW_NUM_MUX1_COUNTER_INDEX 14
#define PSW_NUM_MUX2_COUNTER_INDEX 26

/* Data service page acceptance bit map. */
#define PSW_ASYNC_DATA_PAGE_ACCEPT   1
#define PSW_FAX_PAGE_ACCEPT          2
#define PSW_ASYNCDATA_AND_FAX_PAGE_ACCEPT	3

/* Updated NAM Data Mask Bits Defined (whatChangedInNam) */
#define SLOT_CYCLE_INDEX_UPDATED     0x0001
#define SCM_UPDATED                  0x0002
#define MOB_TERM_HOME_UPDATED        0x0004
#define MOB_TERM_FOR_SID_UPDATED     0x0008
#define MOB_TERM_FOR_NID_UPDATED     0x0010
#define AKEY_UPDATED                 0x0040
#define SYSTEMSELECT_UPDATED         0x0080

#define PSW_AKEY_UINT64

/* IMSI Character String - Input sizes */
#define MAX_IMSI_S1_DIGITS 7
#define MAX_IMSI_S2_DIGITS 3
#define MAX_IMSI_S_DIGITS 10
#define MAX_MNC_DIGITS 2
#define MAX_MCC_DIGITS 3
#define FIELD_TEST_DATA

#define PSW_GPS7560_DATA_SIZE_MAX   760

/*MS-Based*/
#define NMEA_SV 16
#define MAX_SVINVIEW 16

  /* A21 Subscription Info record */
#define PSW_A21_MS_SUBS_INFO_ELEMENT_ID                0x0B
#define PSW_A21_MS_SUBS_INFO_ELEMENT_ID_WIDTH             8
#define PSW_A21_MS_SUBS_INFO_ELEMENT_LEN_WIDTH            8
#define PSW_A21_MS_SUBS_INFO_BC_REC_ID                 0x00
#define PSW_A21_MS_SUBS_INFO_BC_REC_ID_WIDTH              8
#define PSW_A21_MS_SUBS_INFO_BC_REC_LEN_WIDTH             8
#define PSW_A21_MS_SUBS_INFO_BC_ALL_INCLUDE_WIDTH         1
#define PSW_A21_MS_SUBS_INFO_BC_CURRENT_SUBCLASS_WIDTH    7
#define PSW_A21_MS_SUBS_INFO_BC_BANDCLASS_WIDTH           8
#define PSW_A21_MS_SUBS_INFO_BC_RESERVED1_WIDTH           3
#define PSW_A21_MS_SUBS_INFO_BC_SUBCLASS_LEN_WIDTH        4
#define PSW_A21_MS_SUBS_INFO_BC_SUBCLASS_WIDTH            8
#define PSW_A21_MS_SUBS_INFO_HEADER_LEN          ((PSW_A21_MS_SUBS_INFO_ELEMENT_ID_WIDTH \
                                                  + PSW_A21_MS_SUBS_INFO_ELEMENT_LEN_WIDTH \
                                                  + PSW_A21_MS_SUBS_INFO_BC_REC_ID_WIDTH \
                                                  + PSW_A21_MS_SUBS_INFO_BC_REC_LEN_WIDTH \
                                                  + PSW_A21_MS_SUBS_INFO_BC_ALL_INCLUDE_WIDTH \
                                                  + PSW_A21_MS_SUBS_INFO_BC_CURRENT_SUBCLASS_WIDTH) / 8)

#define PSW_A21_MS_SUBS_INFO_BANDCLASS_LEN      ((PSW_A21_MS_SUBS_INFO_BC_BANDCLASS_WIDTH \
                                                  + PSW_A21_MS_SUBS_INFO_BC_ALL_INCLUDE_WIDTH \
                                                  + PSW_A21_MS_SUBS_INFO_BC_RESERVED1_WIDTH \
                                                  + PSW_A21_MS_SUBS_INFO_BC_SUBCLASS_LEN_WIDTH \
                                                  + PSW_A21_MS_SUBS_INFO_BC_SUBCLASS_WIDTH * 4) / 8)

#define PSW_MAX_A21_MS_SUBS_INFO_LEN    (PSW_A21_MS_SUBS_INFO_HEADER_LEN + PSW_A21_MS_SUBS_INFO_BANDCLASS_LEN * NAM_BANDS_SUPPORTED)
#define MAX_SMS_ACK_PDU_LEN								255
#define PSW_SMS_CBS_CHA_MAX                             4

#define CP_MAX_NUM_FOR_SCH      2
#define CP_MAX_NUM_REV_SCH      2
#define CP_MAX_ROUNDS_FWD       7
#define CP_MAX_ROUNDS_REV       7
/****************************************************************************
 * Other Global declarations.
 ***************************************************************************/
extern kal_bool VoicePrivacy;

/*----------------------------------------------------------------------------
 Global Typedefs
----------------------------------------------------------------------------*/
typedef enum
{
    PE_ENG_ERR_BAD_PREF_BAND      =1,   /* pref band mismatch with op_mode */
    PE_ENG_ERR_BAD_PREF_MODE,           /* pref mode mismatch with op_mode */
    PE_ENG_ERR_BAD_CUSTOM_OPMODE,       /* bad opmode setting in custom.h  */
    PE_ENG_ERR_INCOMPATIBLE_BAND_MODE,  /* incompatible band/mode combo    */
    PE_ENG_ERR_TUNE_RADIO,              /* Can't tune Radio                */
    PE_ENG_ERR_POWER_AMP,               /* Can't control Power Amplifier   */
    PE_ENG_ERR_OOSA_BAD_VALUE,          /* Bad param value for OOSA select */
    PE_ENG_ERR_IHO_BAD_VALUE,           /* Bad parm for Idle HandOff       */

      /* Call Processing Request types */
    PE_RQ_ENABLE             =10,  /* (+ NAM Parameter Data)           */
    PE_RQ_DISABLE,                 /* (no data)                        */
    PE_RQ_ORIGINATE,               /* (+ digits + service option)      */
    PE_RQ_ANSWER,                  /* (no data)                        */
    PE_RQ_FLASH,                   /* (+ digits)                       */
    PE_RQ_TERMINATE,               /* (no data)                        */
    PE_RQ_POWERDOWN,               /* (no data)                        */
    PE_RQ_BURST_DTMF,              /* (+ digits)                       */
    PE_RQ_CONT_DTMF_ON,            /* (+ digit)                        */
    PE_RQ_CONT_DTMF_OFF,           /* (no data)                        */
    PE_RQ_VP_ON,                   /* (no data)                        */
    PE_RQ_VP_OFF,                  /* (no data)                        */
    PE_RQ_DATA_BURST,              /* (+ data burst data)              */
    PE_RQ_DATA_BURST_UNACK,        /* (+ data burst data)              */
    PE_RQ_DATA_BURST_REJ,          /* (no data)                        */
    PE_RQ_WIDE_ANALOG,             /* (no data)                        */

    PE_RQ_AUTO_ANSWER        =27,  /* (no data)                        */
    PE_RQ_PAGE_RESPONSE,           /* (no data)                        */
    PE_RQ_TERM_SVC_INACT,          /* (no data)                        */
    PE_RQ_AFLT_SEARCH,             /* (+ aflt info)                    */
    PE_RQ_LBS_1X_ACQ,
    PE_RQ_NST_POWERUP,
    PE_RQ_NST_EXIT,
    PE_RQ_FULL_SYSTIME_GET,

      /* Status indication for different WBIOS Reports */
    PE_ENG_IND_ANTENNA_REQ_GRANTED    =57,
    PE_ENG_IND_ANTENNA_REQ_DENIED,
    PE_ENG_IND_ANTENNA_RELEASED,
    PE_ENG_IND_PILOT_ACQUIRE,
    PE_ENG_IND_NO_PILOT,
    PE_ENG_IND_SYNC_ACQUIRE_FAIL,
    PE_ENG_IND_SYNC_TO_SYS_TIME,
    PE_ENG_IND_SYNC_TO_SYS_TIME_FAIL,
    PE_ENG_IND_PAGE_MONITOR,
    PE_ENG_IND_PAGE_MONITOR_FAIL,
    PE_ENG_IND_SEND_ACCESS_MSG_FAIL,
    PE_ENG_IND_SEND_TC_MSG,
    PE_ENG_IND_SEND_TC_MSG_FAIL,
    PE_ENG_IND_TC_CONFIG,
    PE_ENG_IND_LONG_CODE_CHANGED,
    PE_ENG_IND_RADIO_TUNED,
    PE_ENG_IND_RADIO_NOT_TUNED,
    PE_ENG_IND_PILOT_LOST,
    PE_ENG_IND_PUF_PROBE_SENT,
    PE_ENG_IND_PUF_PROBE_SENT_MAX_PWR,
    PE_ENG_IND_PUF_PROBE_NOT_SENT,
    PE_ENG_IND_WAKEUP,
    PE_ENG_IND_PILOT_SET,
    PE_ENG_IND_IHO_COMPLETE,
    PE_ENG_IND_OOSA_WAKEUP,
    PE_ENG_IND_TC_TO_AVC_HO_START,
    PE_ENG_IND_BCCH_MONITOR,
    PE_ENG_IND_BCCH_MONITOR_FAIL,
    PE_ENG_IND_FCCCH_MONITOR,
    PE_ENG_IND_FCCCH_MONITOR_FAIL,
    PE_ENG_IND_HO_FAIL,
    PE_ENG_IND_FORCE_BAND_MODE,
    PE_ENG_SYS_RESCAN_TIME,
    PE_ENG_IND_DISABLE_E911MODE ,
    PE_ENG_IND_RSCH_STARTED,

    PE_ENG_IND_SYNC_CSS_FAIL          =92,
    PE_ENG_IND_SYNC_CSS_PASS,
    PE_ENG_IND_FSCH_STARTED,
    PE_ENG_IND_FSCH_TERMINATED,
    PE_ENG_SYS_REDIRECTION_END_TIME ,
    PE_ENG_IND_FORCE_ANALOG_MODE,
    PE_ENG_IND_IDLE_HANDOFF_ACQUIRE,     /* and from CPB6.0  Hans Christiansen 080404 */

    /* Engine event notification request types for use in CALLBACK */
    PE_ENG_NULL_EVENT        =100,  /* event complete indicator        */
    PE_ENG_IND_TIMEOUT,             /* CP timer expiry indicator       */
    PE_ENG_SYNC_MESSAGE,            /* SYNC message received ind.      */
    PE_ENG_PAGE_MESSAGE,            /* PCH message received ind.       */
    PE_ENG_FTC_MESSAGE,             /* FTC message received ind.       */
    PE_ENG_FCSCH_LOST,              /* forword common control Ch lost ind. */
    PE_ENG_IDLE_HANDOFF,            /* Idle handoff request ind.       */
    PE_ENG_REGISTRATION_REQ,        /* Registration access request     */
    PE_ENG_ACCESS_FAIL,             /* Access attempt failed           */
    PE_ENG_FTC_N5M_FRAMES,          /* Rcvd N5m consecutive good frames */
    PE_ENG_ACCESS_PSIST_FAIL,       /* PSIST calculation = 0           */
    PE_ENG_FTC_LOST,                /* FTC fade timer timed out        */
    PE_ENG_IND_ACK_RECEIVED,        /* Ack rcvd for a transmitted msg  */
    PE_ENG_STRONGEST_PILOT_REPORT,  /* Strongest pilot report          */
    PE_ENG_ACCESS_HO_CANDIDATE,     /* Access Entry HO candidate found */
    PE_ENG_ACCESS_HO_NO_CANDIDATE,  /* no Access Entry HO candidate    */
    PE_ENG_ACCESS_HO_LIST,          /* access ho list pilot report     */
    PE_ENG_ACCESS_PROBE_HO_FAIL,    /* access probe ho fail ind.       */
    PE_ENG_ACCESS_HO_DENIED,        /* access ho attempt not allowed   */
    PE_ENG_READ_ACCESS_OVERHEAD,    /* selected overhead read after ho */
    PE_ENG_ACCESS_PROBE_FAIL,       /* access probe too big            */
    PE_ENG_IND_TC_ACK_FAILURE,      /* TC transmission ACK failure     */
    PE_ENG_IND_ACCESS_PILOT_MSMT,   /* pilot msmt report in access     */
    PE_ENG_START_SYS_RESELECT,      /* Start Sys Reselect Procedures   */

    PE_ENG_ACCESS_MODE_SEARCH_FAIL =125, /* access mode determination fail */
    PE_ENG_BCCH_MESSAGE,                /* FCCCH message received ind.     */
    PE_ENG_FCCCH_MESSAGE,               /* BCCH message received ind.      */
    PE_ENG_ACCESS_HANDOFF,              /* Access handoff request ind.     */

    PE_ENG_IND_QPCH_PI_STATUS     =129, /* PI Status                       */
    PE_ENG_IND_SOFT_HO_COMPLETE,
    PE_ENG_IND_HARD_HO_COMPLETE,
    PE_ENG_IND_E911_ACCESS_FAIL   =133,    /* E911 Access Fail                */
    PE_ENG_IND_AFLT_RESULT_RCVD,    /* AFLT Srch Rslt Rcvd from L1d    */
    PE_ENG_IND_OOSA_REQ,
    PE_ENG_IND_MODEM_FAILURE,
    PE_ENG_IND_MODEM_READY,
    PE_ENG_IND_IRAT_RESET_1XCDMA,

    PE_ENG_IND_CSS_OTASP_ACQ_REQ     =150,
    PE_ENG_IND_CSS_SELECT_RSP,
    PE_ENG_IND_CSS_VALIDATE_RSP,
    PE_ENG_IND_CSS_SYS_ACQ_REQ,

    PE_ENG_IND_FREEZE                =154,
    PE_ENG_IND_THAW,
    PE_ENG_IND_RESYNC,
    PE_ENG_IND_RESYNC_DENIED,

#ifdef MTK_DEV_C2K_IRAT
    PE_ENG_IND_RSVAS_VIRTUAL_SUSPEND =160,/* inform to stop inter-freq meas if any*/
    PE_ENG_IND_RSVAS_RESUME,              /* inform to start inter-freq meas if any */
    PE_ENG_IND_RSVAS_OCCUPY_IND,          /* inform to start access procedure */
    PE_ENG_IND_EXIT_PS_REQ,               /* inform to exit 1x PS during C2L MPSR procedure */
#endif


    PE_ENG_AMPS_START_SCAN        =200, /* Start AMPS channel scanner      */
    PE_ENG_AMPS_SCAN_COMPLETE     =201, /* Channel scan complete           */
    PE_ENG_AMPS_OMT               =203, /* OMT received                    */
    PE_ENG_AMPS_FILLER            =204, /* Control Filler received         */
    PE_ENG_AMPS_MSCM              =205, /* MSCM received                   */
    PE_ENG_AMPS_SMS_CNF           =206, /* MSCM received                   */
    PE_ENG_AMPS_AWI_SMS_CNF       =207, /* MSCM received                   */
    PE_ENG_NO_IDLE_HANDOFF        =210, /* No Idle handoff request ind     */
    PE_ENG_IND_EPRL_ESPM_TIMEOUT  =213,
    PE_ENG_IND_MANUAL_AVOID_SYS   =214,
    PE_ENG_IND_L1D_DEACTIVE_CNF   =215,
    PE_ENG_UIM_AUTHR              =230, /*UIM AUTH Result*/
    PE_ENG_UIM_RANDBS             =240,
    PE_ENG_UIM_SSD_CONFIRM        =241,
#ifdef MTK_CBP_SYNC_OPTIMIZE
    PE_ENG_IND_SIB8_TIMING_CNF    =250,
    PE_ENG_IND_NO_SIB8_TIMING     =251
#endif /* MTK_CBP_SYNC_OPTIMIZE */
} PeRunEngineEvent;

extern const RetrievableAndSettableParametersT parameterIDTable[];

/* Protocol Revision definitions */
#define P_REV_1    1     /* 95    (BC0), JSTD008(BC1)      */
#define P_REV_2    2     /* 95A   (BC0, BC1)               */
#define P_REV_3    3     /* TSB74 (BC0, BC1), T53 V1 (BC3) */
#define P_REV_4    4     /* 95B   (BC0, BC1), T53 V2 (BC3) */
#define P_REV_5    5     /* 95B   (BC0, BC1), T53 V2 (BC3) */
#define P_REV_6    6     /* 2000 REL 0 (no BCCH nor FCCCH support) */
#define P_REV_7    7     /* 2000 REL A (with BCCH and FCCCH support) */
#define P_REV_8    8     /* 2000 REL B */
#define P_REV_9    9     /* 2000 REL C */
#define P_REV_10   10    /* IS-2000-C with encryption      */

/* Call Processing State Machine States */
typedef enum
{
  CP_DISABLED,            /* CP Disabled                              */
  CP_SYS_DETERMINATION,   /* System Determination (6.6.1.1)           */
  CP_PILOT_ACQUISITION,   /* Pilot Channel Acquisition (6.6.1.2)      */
  CP_SYNC_ACQUISITION,    /* Sync Channel Acquisition (6.6.1.3)       */
  CP_TIMING_CHANGE,       /* Timing Change (6.6.1.4)                  */
  CP_IDLE,                /* Idle (6.6.2)                             */
  CP_UPDATE_OHD_INFO,     /* Update Overhead Information (6.6.3.2)    */
  CP_PAGE_RESPONSE,       /* Page Response (6.6.3.3)                  */
  CP_ORD_MSG_RESP,        /* Order/Message Response (6.6.3.4)         */
  CP_ORIGINATION,         /* Origination Attempt (6.6.3.5)            */
  CP_REGISTRATION,        /* Registration Attempt (6.6.3.6)           */
  CP_MSG_TRANSMISSION,    /* Message Transmission (6.6.3.7)           */
  CP_TC_INIT,             /* Traffic Channel Initialization (6.6.4.2) */
  CP_TC_WAIT_ORDER,       /* TC Waiting for Order (6.6.4.3.1)         */
  CP_TC_WAIT_ANSWER,      /* TC Waiting for MS Answer (6.6.4.3.2)     */
  CP_TC_CONVERSATION,     /* TC Conversation (6.6.4.4)                */
  CP_TC_RELEASE,          /* TC Release (6.6.4.5)                     */
  CP_NST,                 /* Non-Signaling Test Mode                  */
  CP_FROZEN,              /*Temp put here*/
  CP_TC_FROZEN,           /* TC Frozen                             */

  CP_NUM_STATES
} CPState;

typedef enum
{
   /* Call Processing Event types reported in wbiosReportCPEvent */
   EV_DISCONNECT           = 1,   /* CP leaves Conversation ST      */
   EV_PAGE_RECEIVED        = 2,   /* Page received on Control Ch    */
   EV_STOPALERT            = 3,   /* CP leaves Waiting For Answer ST*/
   EV_ABBR_ALERT           = 4,   /* Abbreviated alert              */
   EV_NOSVC                = 5,   /* No Service                     */
   EV_CDMA_INSVC           = 6,   /* In Service (Ready)             */
   EV_CPENABLED            = 7,   /* Call Processing Enabled        */
   EV_CPDISABLED           = 8,   /* Call Processing Disabled       */
   EV_PDOWNACK             = 9,   /* Power-Down Acknowledge         */
   EV_CONNANALOG           = 10,  /* CP enters Conv. ST on voice ch */
   EV_CONNDIGITAL          = 11,  /* CP enters Conv. ST on TC ch    */
   EV_TC_ASSIGNED          = 12,  /* Traffic Channel assigned       */
   EV_ORIG_FAIL            = 13,  /* Orig. failed - Access failed   */
   EV_NDSS_ORIG_CANCEL     = 14,  /* Orig. attempt cancelled        */
   EV_INTERCEPT            = 15,  /* Orig. failed - Intercept       */
   EV_REORDER              = 16,  /* Orig. failed - Reorder         */
   EV_CC_RELEASE           = 17,  /* Control Channel - Release      */
   EV_CC_RELEASE_SO_REJ    = 18, /* CC Release - Scv Option reject */
   EV_DIALING_COMPLETE     = 19,  /* Dialing digits all sent        */
   EV_DIALING_CONTINUE     = 20,  /* Dialed digits continue on TC   */
   EV_MAINTENANCE          = 21,  /* Maintenance order received     */
   EV_VP_ON                = 22,  /* Voice privacy is enabled       */
   EV_VP_OFF               = 23,  /* Voice privacy is disabled      */
   EV_PSIST_FAIL           = 24,  /* PSIST calculation failed       */
   EV_TC_RELEASE_MS        = 25,  /* TC released normally by MS     */
   EV_TC_RELEASE_PDOWN     = 26,  /* TC released by MS Power Down   */
   EV_TC_RELEASE_DISABLE   = 27,  /* TC released by MS Disable      */
   EV_TC_RELEASE_BS        = 28,  /* TC released normally by BS     */
   EV_TC_RELEASE_SO_REJECT = 29,  /* TC released by BS Serv Opt Rej */
   EV_TC_RELEASE_TIMEOUT   = 30,  /* TC released - Timeout          */
   EV_TC_RELEASE_ACK_FAIL  = 31,  /* TC released - Ack failure      */
   EV_TC_RELEASE_FADE      = 32,  /* TC released - Fade             */
   EV_TC_RELEASE_LOCK      = 33,  /* TC released - due to bs lock   */
   EV_PAGE_FAIL            = 34,  /* Page Response Fail             */
   EV_RETRY_TIMER_ACTIVE   = 35,  /* Retry Delay Timer is active    */
   EV_RETRY_TIMER_INACTIVE = 36,  /* Retry Delay Timer is inactive  */
   EV_AMPS_INSVC           = 37,  /* In AMPS Service (Ready)        */
   EV_PACKET_ACTIVE        = 38,  /* In Active Packet State         */
   EV_PACKET_RELEASED      = 39,  /* In Inactive Packet State       */
   EV_PACKET_DORMANT       = 40,  /* In Dormant Packet State        */
   EV_ORIG_REJECTED        = 41,  /* Origination Rejected           */
   EV_ORIG_ACCT  = 42,

   EV_ORIG_USER_CANCEL     = 60,
   EV_ORIG_ACCESS_FAIL     = 61,
   EV_ORIG_NO_SVC_FAIL     = 62,
   EV_ORIG_RETRY_ORDER     = 63,
   EV_SR_ENABLED           = 64,
   EV_SR_DISABLED          = 65,
   EV_ORIG_REQ_RECEIVED    = 66,
   EV_ORIG_REJECTED_SO_NOT_SUPPORTED = 67, /*VAL has requested an SO not supported by the device*/
   EV_ORIG_BLOCKED_BY_IRAT = 68, /* CDMA not selected by RATC as pri CS service */
   EV_SMS_CANCEL_BY_PWRDOWN = 69, /* SMS cancel by CP Power Down */
    /* BEGIN AMPS ONLY */
   EV_FLASHFAIL            = 80,  /* Flash request failed           */
   EV_ANALOG_PAGE_RECEIVED = 81,  /* Page received on Control Ch    */
   EV_AMPS_IDLE            = 82,  /* AMPS service is acquired.      */
    /* END AMPS ONLY */

   EV_ABBR_INTERCEPT       = 83,
   EV_ABBR_REORDER         = 84,
   EV_CONN_COMPLETE        = 85,
   EV_ENTER_OOSA           = 86,
   EV_FNM_RELEASE          = 87,  /* Feature Notification Msg RELEASE=1, ORDM ONLY */
   EV_DBM_MSID_UPDATED     = 88,
   EV_BUSY_ORIG_FAIL       = 89,
   EV_LOCKED_ORIG_FAIL     = 90,
   EV_ORIG_FAIL_SO_REDIRECT = 91,
   EV_TC_RELEASE_MT_CALL   = 92,
   EV_REG_SUCCESS          = 93, /*MS register with network successfully*/
#ifdef MTK_DEV_C2K_IRAT
   EV_RSVAS_SUSPEND_COMPLETE = 94
#endif

} CallProcessingEventT;

typedef enum
{
   CP_ACCESS_REASON_PAGE_RSP = 1,
   CP_ACCESS_REASON_REGISTRATION,
   CP_ACCESS_REASON_ORIGINATION,
   CP_ACCESS_REASON_MSG_RESPONSE,
   CP_ACCESS_REASON_DATABURST
} AccessReasonT;

typedef enum
{
   PSW_PILOT_ACQUIRE,
   PSW_NO_PILOT,
   PSW_SYNC_ACQUIRE_FAIL,
   PSW_SYNC_TO_SYS_TIME,
   PSW_SYNC_TO_SYS_TIME_FAIL,
   PSW_PAGE_MONITOR,
   PSW_PAGE_MONITOR_FAIL,
   PSW_BCCH_MONITOR,              /* BSR 3/12/04 */
   PSW_BCCH_MONITOR_FAIL,         /* BSR 3/12/04 */
   PSW_FCCCH_MONITOR,             /* BSR 3/16/04 */
   PSW_FCCCH_MONITOR_FAIL,        /* BSR 3/16/04 */
   PSW_SEND_ACCESS_MSG_FAIL,
   PSW_SEND_TC_MSG,
   PSW_SEND_TC_MSG_FAIL,
   PSW_TC_CONFIG,
   PSW_LONG_CODE_CHANGED,
   PSW_RADIO_TUNED,
   PSW_RADIO_NOT_TUNED,
   PSW_PILOT_LOST,
   PSW_PUF_PROBE_SENT,
   PSW_PUF_PROBE_SENT_MAX_PWR,
   PSW_PUF_PROBE_NOT_SENT,
   PSW_IND_WAKEUP,
   PSW_IND_PILOT_SET,
   PSW_SOFT_HO_COMPLETE,
   PSW_OOSA_WAKEUP,
   PSW_AMPS_HO_COMPLETE,
   PSW_RSCH_STARTED,
   PSW_FSCH_STARTED,
   PSW_FSCH_TERMINATED,
   PSW_RSR_UPDATED,
   PSW_HARD_HO_COMPLETE,
   PSW_IND_FREEZE,
   PSW_IND_THAW,
   PSW_IND_RESYNC,
   PSW_IND_RESYNC_DENIED,
   PSW_ANTENNA_REQ_GRANTED,
   PSW_ANTENNA_REQ_DENIED,
   PSW_ANTENNA_RELEASED,
   PSW_MODEM_FAILURE,
   PSW_MODEM_READY,
   PSW_CLK_CAL_START,
   PSW_CLK_CAL_DONE,
   PSW_NUM_CMD_STATUS
} PswCmdStatusT;

typedef enum
{
   PSW_FRAME_CATAGORY_RS1_9600_FULL_PRI = 1,
   PSW_FRAME_CATAGORY_RS1_9600_DIM_BURST_HALF_PRI_SIG = 2,
   PSW_FRAME_CATAGORY_RS1_9600_DIM_BURST_QUARTER_PRI_SIG = 3,
   PSW_FRAME_CATAGORY_RS1_9600_DIM_BURST_EIGHTH_PRI_SIG = 4,
   PSW_FRAME_CATAGORY_RS1_9600_BLANK_BURST_SIG = 5,
   PSW_FRAME_CATAGORY_RS1_4800_FULL_PRI = 6,
   PSW_FRAME_CATAGORY_RS1_2400_FULL_PRI = 7,
   PSW_FRAME_CATAGORY_RS1_1200_FULL_PRI = 8,
   PSW_FRAME_CATAGORY_RS1_9600_FULL_PRI_BIT_ERRORS = 9,
   PSW_FRAME_CATAGORY_RS1_INSUFFICIENT_FRAME_QUALITY = 10,
   PSW_FRAME_CATAGORY_RS1_9600_DIM_BURST_HALF_PRI_SEC = 11,
   PSW_FRAME_CATAGORY_RS1_9600_DIM_BURST_QUARTER_PRI_SEC = 12,
   PSW_FRAME_CATAGORY_RS1_9600_DIM_BURST_EIGHTH_PRI_SEC = 13,
   PSW_FRAME_CATAGORY_RS1_9600_BLANK_BURST_SEC = 14,
   PSW_FRAME_CATAGORY_RS1_9600_DCCH_NULL_FRAME = 15,
   PSW_FRAME_CATAGORY_RS2_14400_FULL_PRI = 1,
   PSW_FRAME_CATAGORY_RS2_14400_DIM_BURST_HALF_PRI_SIG = 2,
   PSW_FRAME_CATAGORY_RS2_14400_DIM_BURST_QUARTER_PRI_SIG = 3,
   PSW_FRAME_CATAGORY_RS2_14400_DIM_BURST_EIGHTH_PRI_SIG = 4,
   PSW_FRAME_CATAGORY_RS2_14400_BLANK_BURST_SIG = 5,
   PSW_FRAME_CATAGORY_RS2_14400_DIM_BURST_HALF_PRI_SEC = 6,
   PSW_FRAME_CATAGORY_RS2_14400_DIM_BURST_QUARTER_PRI_SEC = 7,
   PSW_FRAME_CATAGORY_RS2_14400_DIM_BURST_EIGHTH_PRI_SEC = 8,
   PSW_FRAME_CATAGORY_RS2_14400_BLANK_BURST_SEC = 9,
   PSW_FRAME_CATAGORY_RS2_14400_DIM_BURST_EIGHTH_PRI_SEC_SIG = 10,
   PSW_FRAME_CATAGORY_RS2_7200_FULL_PRI = 11,
   PSW_FRAME_CATAGORY_RS2_7200_DIM_BURST_QUARTER_PRI_SIG = 12,
   PSW_FRAME_CATAGORY_RS2_7200_DIM_BURST_EIGHTH_PRI_SIG = 13,
   PSW_FRAME_CATAGORY_RS2_7200_BLANK_BURST_SIG = 14,
   PSW_FRAME_CATAGORY_RS2_7200_DIM_BURST_QUARTER_PRI_SEC = 15,
   PSW_FRAME_CATAGORY_RS2_7200_DIM_BURST_EIGHTH_PRI_SEC = 16,
   PSW_FRAME_CATAGORY_RS2_7200_BLANK_BURST_SEC = 17,
   PSW_FRAME_CATAGORY_RS2_7200_DIM_BURST_EIGHTH_PRI_SEC_SIG = 18,
   PSW_FRAME_CATAGORY_RS2_3600_FULL_PRI = 19,
   PSW_FRAME_CATAGORY_RS2_3600_DIM_BURST_EIGHTH_PRI_SIG = 20,
   PSW_FRAME_CATAGORY_RS2_3600_BLANK_BURST_SIG = 21,
   PSW_FRAME_CATAGORY_RS2_3600_DIM_BURST_EIGHTH_PRI_SEC = 22,
   PSW_FRAME_CATAGORY_RS2_3600_BLANK_BURST_SEC = 23,
   PSW_FRAME_CATAGORY_RS2_1800_FULL_PRI = 24,
   PSW_FRAME_CATAGORY_RS2_1800_BLANK_BURST_SEC = 25,
   PSW_FRAME_CATAGORY_RS2_INSUFFICIENT_FRAME_QUALITY = 26,
   PSW_FRAME_CATAGORY_RS2_14400_DCCH_NULL_FRAME = 27,

   PSW_FRAME_CATAGORY_RS_LAST = PSW_FRAME_CATAGORY_RS2_14400_DCCH_NULL_FRAME

} PswFrameCatagoryT;


/* Define redirection record types - Table 7.7.2.3.2.16-1 */
typedef enum
{
  CP_SRD_REDIRECTION_NDSS_OFF,
  CP_SRD_REDIRECTION_ANALOG,
  CP_SRD_REDIRECTION_CDMA,
  CP_SRD_REDIRECTION_TACS,
  CP_SRD_REDIRECTION_JTACS
} ServRedirRecord;

typedef enum
{
   CP_IDLE_START,
   CP_IDLE_WAIT_FOR_FCSCH,
   CP_IDLE_MONITOR,
   CP_IDLE_HANDOFF,
   CP_IDLE_CHANNEL_CHANGE,
   CP_IDLE_ACCESS_ENTRY_HO,
   CP_IDLE_WAKEUP_FOR_ACCESS,
   CP_IDLE_POWERDOWN,
   CP_IDLE_SLOTTED_HO_WAKEUP,
   CP_IDLE_QPCH_HO_WAKEUP,
   CP_IDLE_FROZEN,
   CP_IDLE_MAX
} CpIdleSubStateT;

typedef enum
{
   PSW_BAD_FRAME = 0,
   PSW_GOOD_FRAME
} PswFrameQuality;

typedef struct
{
   kal_bool     Stale;
   kal_uint16   PnPhase;
   kal_uint16   Strength;
} PswPilotMeasurementT;

typedef struct
{
   kal_uint16   PilotPN;
   kal_bool     Stale;
   kal_uint16   PnPhase;
   kal_uint16   Strength;
} PswRemainPilotMeasurementT;

/*------------------------------------------------------------------------
  Define funtion prototypes
-------------------------------------------------------------------------*/

extern PswIs95NamT* PswNamGet (void);
extern void PswDbmInit( void );


typedef enum
{
   PSW_AYNC_DATA = 1,   /* bit 0 */
   PSW_FAX = 2,         /* bit 1 */
   PSW_UPB_ASYNC = 64   /* bit 6 */
} PswDsEnableBitMapT;

typedef struct
{
   kal_bool CssSyncValOk;
} PswCssValSyncRspMsgT;

/***********************/
/* Message Definitions */
/***********************/
typedef struct
{
   kal_uint8    numAlt;
   kal_uint16   phase[SYS_CP_MAX_CANDIDATE_LIST_PILOTS];
   kal_uint16   strength[SYS_CP_MAX_CANDIDATE_LIST_PILOTS];
} AlternatePilotsInfoT;

typedef struct
{
   kal_bool     pilotFound;     /* Pilot found */
   kal_uint16   pilotStrength;  /* Pilot Ec/Io (linear Q6) */
   kal_int16    rxPower;        /* RSSI (dBm)  */
#if defined(MTK_CBP_SYNC_OPTIMIZE)
   kal_bool     retried;        /*For mini pilot acq, this channel retries normal ICS or not*/
#endif
   AlternatePilotsInfoT altPilots;
} PswInitialAcqReportMsgT;
typedef enum
{
   PI_OFF     = 0,
   PI_ON      = 1,
   PI_UNDEF   = 2,
   PI_ERASURE = 3
} QpchPiStat;

typedef enum
{
   PSW_PCH   = 0,
   PSW_QPCH1 = 1,
   PSW_QPCH2 = 2,
   PSW_CCI   = 3,
   PSW_FCCCH = 4,
   PSW_BC    = 5
} WakeModeT;

typedef struct
{
   WakeModeT WakeMode;            /* Status of a command previously sent by PS */
   kal_int16    QpchInd;              /* OFF = 0, ON = 1, Erasure = -1             */
   kal_int16    QpchMetric;           /* X1 if first indicator, X2 if second indicator, Q0 */
   kal_int16    PilotEnergy;          /* Usable path combined Pilot Energy, Q0 */
   kal_uint16   EcIo;                 /* Mini-Acq Pilot Ec/Io */
   kal_uint16   NumPath;              /* Number of usable path */
   kal_uint16   QpchPilotPn;          /* Pilot PN Offset */
   kal_uint32   SysTime;              /* Current CDMA time 20ms */
} PswWakeStatusT;

typedef struct
{
   PswCmdStatusT  CmdStatus;               /* Status of a command previously sent by PS */
   PswWakeStatusT WakeStatus;              /* Status of a command previously sent by PS */
} PswCmdStatusMsgT;

typedef struct
{
   kal_uint16   PnPhase;
   kal_uint16   Strength;
} PswCandFreqMeasT;

typedef struct
{
   kal_int16 cfTotalRxPwr;   /* Total Rx Power on CF */
   kal_uint8 NumPilots;      /* Number of pilot measurements */
   PswCandFreqMeasT CfPilotList[SYS_CP_MAX_NEIGHBOR_LIST_PILOTS];
} PswCandFreqMeasurementsMsgT;

typedef struct
{
   kal_uint8 TotalOffTimeFwd;                  /* Total time spent off of forward channel */
   kal_uint8 MaxOffTimeFwd;                    /* Max time spent off of forward channel   */
   kal_uint8 TotalOffTimeRev;                  /* Total time spent off of reverse channel */
   kal_uint8 MaxOffTimeRev;                    /* Max time spent off of reverse channel   */
} PswCandFreqTimesMsgT;

typedef struct
{
   kal_uint16   PilotPN;                       /* Pilot PN to handoff to */
} PswIdleHandoffMsgT;

typedef struct
{
   SysSystemTimeT SysTime;                 /* System time the frame was received at */
   kal_uint16         EbNt;
   kal_uint16         DataSize;                /* Data size in bits*/
#ifdef MTK_PLT_ON_PC_UT
   kal_uint8          Data[PCH_FRAME_LEN];                 /* Starting address of frame data */
#endif
   kal_uint32         *DataAddress;             /* Starting address of frame data */
} PswForwardPageChanFrameMsgT;

typedef struct
{
    SysSystemTimeT      SysTime;            /* System time the frame was received at */
    kal_uint8               MuxPduType;
    kal_uint8               Category;
    PswFrameQuality     Quality;
    kal_uint16              SigBits;
    kal_uint8               Data[MAX_FCH_FRAME_BYTE_LEN];            /* Starting address of frame data */
}PswDschFrameMsgT;

typedef struct
{
    kal_uint8       SchId;
    kal_uint16      SchBadFrames;
    kal_uint16      SchTotFrames;
} PswPrmSchT;

typedef struct
{
    kal_bool        FchMeasIncl;      /* FCH measurement included */
    kal_uint8       FchBadFrames;     /* BAD_FRAMESs in IS2000A.5 2.6.4.1.1*/
    kal_uint16      FchTotFrames;     /* TOT_FRAMESs in IS2000A.5 2.6.4.1.1*/
    kal_bool        DcchMeasIncl;     /* DCCH measurement included */
    kal_uint8       DcchBadFrames;    /* BAD_FRAMESs in IS2000A.5 2.6.4.1.1*/
    kal_uint16      DcchTotFrames;    /* TOT_FRAMESs in IS2000A.5 2.6.4.1.1*/
    kal_uint8       NumForSch;        /* Number of FSCH to report */
    PswPrmSchT  SchPmr[ SYS_MAX_FSCH ];
}PswPmrMsgT;

/*AKK 01-26-01 Added the following for phase2 Outer Loop Report Message */
typedef struct
{
    kal_uint8 SchId;
    kal_uint8 FpcSchCurrSetPt;
}PswFpcSchReportT;

typedef struct
{
   kal_bool          FchIncl;
   kal_uint8         FpcFchCurrSetPt;
   kal_bool          DcchIncl;
   kal_uint8         FpcDcchCurrSetPt;
   kal_uint8         NumSup;
   PswFpcSchReportT FpcSch[2];
}PswOuterLoopReportReqMsgT;
/*END--AKK 01-26-01 Added the following for phase2 Outer Loop Report Message */

typedef struct
{
   SysSystemTimeT SysTime;                 /* System time the frame was received at */
   kal_uint16         DataSize;                /* Data size in bits     */
   kal_uint8          Data[1];                 /* Starting address of frame data        */
}PswFCCCHFrameMsgT;

typedef struct
{
   SysSystemTimeT SysTime;                 /* System time the frame was received at */
   kal_uint16         DataSize;                /* Data size in bits   */
   kal_uint8          Data[1];                 /* Starting address of frame data        */
}PswBCCHFrameMsgT;

typedef struct
{
   SysSystemTimeT FrameNum;                /* Frame number this signaling data */
                                           /* was received. Note: There is no system */
                                           /* time while on the sync channel so a */
                                           /* counter is used for the frame time */
#ifdef MTK_PLT_ON_PC_UT
   kal_uint8    Data[PSW_SYNC_DATA_SIZE*9];  /* This is a fixed 24 bit size */
#endif
  kal_uint16     EbNt;
  kal_uint16     DataLength;
  kal_uint8     *DataAddress;
}PswForwardSyncChanFrameMsgT;

typedef struct
{
   SysSystemTimeT SysTime;         /* System time the frame was received at */
   kal_uint16         DataSize;        /* Data size in bits */
   kal_uint8          Data[1];         /* Starting address of frame data */
}PswForwardBCCHFrameMsgT;

typedef struct
{
   SysSystemTimeT SysTime;         /* System time the frame was received at */
   kal_uint16         DataSize;        /* Data size in bits */
   kal_uint8          Data[1];         /* Starting address of frame data */
}PswForwardFCCCHFrameMsgT;

typedef struct
{
   SysSystemTimeT       SysTime;        /* System time the frame was received at */
   SysMultiplexOptionT  MultiplexOpt;   /* multiplex option being used */
                                        /* (i.e. rate set) */
   kal_uint16               Strength;       /* Power of the pilot in Q16 linear units */
   PswFrameCatagoryT    Catagory;       /* Frame category - size of data derived from this */
   kal_uint8                Data[1];        /* Starting address of frame data */
}PswForwardTrafficChanFrameMsgT;

typedef struct
{
   kal_bool     enable;                       /* KAL_TRUE power up, KAL_FALSE power down */
} PswFlyModeMsgT;

typedef struct
{
   kal_bool     PowerUp;                       /* KAL_TRUE power up, KAL_FALSE power down */
} PswPowerMsgT;

typedef struct
{
   kal_bool     EnablePrl;   /* KAL_FALSE if PRL is not to be used in system selection */
} PswEnablePrlMsgT;

typedef struct
{
   kal_uint8 NumActive;                        /* Number of active set pilot measurements */
   kal_uint8 NumCandidate;                     /* Number of candidate set pilot measurements */
   kal_uint8 NumNeighbor;                      /* Number of neighbor set pilot measurements */
   kal_uint8 NumRemaining;                      /* Number of neighbor set pilot measurements */
   PswPilotMeasurementT Active [SYS_CP_MAX_ACTIVE_LIST_PILOTS];
   PswPilotMeasurementT Candidate [SYS_CP_MAX_CANDIDATE_LIST_PILOTS];
   PswPilotMeasurementT Neighbor [SYS_CP_MAX_NEIGHBOR_LIST_PILOTS];
   PswPilotMeasurementT Remaining [SYS_CP_MAX_REMAINING_LIST_PILOTS];
} DebugPilotInfo;

typedef struct
{
   kal_int16  PilotSeq;
   kal_uint16 ReferencePN;
   kal_uint8 NumActive;                        /* Number of active set pilot measurements */
   kal_uint8 NumCandidate;                     /* Number of candidate set pilot measurements */
   kal_uint8 NumNeighbor;                      /* Number of neighbor set pilot measurements */
   PswPilotMeasurementT Active [SYS_CP_MAX_ACTIVE_LIST_PILOTS];
   PswPilotMeasurementT Candidate [SYS_CP_MAX_CANDIDATE_LIST_PILOTS];
   PswPilotMeasurementT Neighbor [SYS_CP_MAX_NEIGHBOR_LIST_PILOTS];
} PswScanMeasurementsMsgT;

typedef enum
{
    IGNORE_N5M_FRAMES_IN_TC_INIT = 0,
    IGNORE_BS_ACK_IN_TC_INIT = 1,
    IGNORE_HHO_SUCCESS = 2,
    MAX_NUM_PSW_TEST_MODE_TIMER_TYPE
} PswTestModeTimerTypeT;

 typedef enum
  {
    TM_CRC = 0,                                 /* Enable/Disable CRC Checking                 */
    TM_REMAIN_IN_SYNC_STATE = 1,                /* Force MS to stay on Sync Channel            */
    TM_ENABLE_IDLE_HANDOFF  = 2,                /* Enable Idle Handoff */
    TM_ENABLE_MSG_INJECTION = 3,                /* Message Injection Test Mode */
    TM_ENABLE_SLOTTED_MODE  = 4,                /* Enable Slotted Mode */
    TM_ENABLE_REGISTRATION  = 5,                /* enable/disable registration */
    TM_ENABLE_PAGE_RESPONSE = 6,                /* enable/disable page response */

    TM_ENABLE_QPCH_MODE          = 17,
    TM_DISABLE_ACCESS_AUTH_PARMS = 18,   /* Don't include auth parameters in access msgs */
    TM_DISPLAY_LOC_DATA          = 19,    /* dump Location Services Data */
    TM_ENABLE_REMAINING_SET_SEARCH= 20,    /* Controls the remaining set search */
    TM_IGNORE_OTA_AKEY_PREV      = 21,    /* Ignore A_KEY_PREV in MS Key Req Msg */

    TM_QPCH_SET_PI1              = 22,    /* Set Paging Indicator 1 override */
    TM_QPCH_SET_PI2              = 23,    /* Set Paging Indicator 2 override */
    TM_CONTINUOUS_BCCH           = 24,    /* Continuously receive the BCCH channel */
    TM_START_BCCH                = 25,    /* Used to start or stop the BCCH channel */
    TM_SLOTTED_DELAY             = 26,     /* Used to delay before going to sleep in slotted paging */

    TM_REMAIN_IN_PILOT_STATE            = 30,    /* Force MS to stay on Pilot Acquisition state */
    TM_REMAIN_IN_IDLE_SLOTTED_OFF_STATE = 31,    /* Force MS to stay on Idle state, slotted off */
    TM_REMAIN_IN_IDLE_SLOTTED_ON_STATE  = 32,    /* Force MS to stay on Idle state, slotted on  */
    TM_REMAIN_IN_TRAFFIC_STATE          = 33,    /* Disable fade timer  */
    TM_SECURE_DATA_SPY_DUMP             = 34,    /* Trigger Dump of Secure Data Spy */
    TM_ENABLE_IHO_INTER_TEST            = 35,    /* For inter IHO script test*/
    TM_ENABLE_HO_CF_TEST                = 36,    /* For traffic inter freq handoff test*/
    TM_ENABLE_TIMER_OUT_TEST            = 37,    /* For timer out test*/
    MAX_NUM_PSW_TEST_MODE
  }PswTestModeT, TestModeMsgT;


typedef struct
{
   kal_uint8  NumAlt;
   kal_uint16 Phase[SYS_CP_MAX_CANDIDATE_LIST_PILOTS];
   kal_uint16 Strength[SYS_CP_MAX_CANDIDATE_LIST_PILOTS];
}PswL1dAlternatePilotsMsgT;

/* PSW_LOCATION_SVC_CFG_MSG */
typedef struct {
   kal_bool Mode; /* location privacy enabled */
} PswLocationSvcCfgMsgT;

typedef struct {
   kal_uint8 event;
   kal_uint8 *MsgDataP;
} PswLocStateChangedMsgT;

typedef enum
{
   PSW_REQUEST_MODE_CDMA_ONLY = 1,
   PSW_REQUEST_MODE_WIDE,
   PSW_REQUEST_MODE_CDMA_WIDE,
   PSW_REQUEST_MODE_NARROW_ONLY,
   PSW_REQUEST_MODE_CDMA_NARROW_ONLY,
   PSW_REQUEST_MODE_NARROW_WIDE,
   PSW_REQUEST_MODE_NARROW_WIDE_CDMA
} PswRequestModeT;

typedef enum
{
   PSW_NT_UNKNOWN        = 0,
   PSW_NT_INTERNATIONAL,
   PSW_NT_NATIONAL,
   PSW_NT_NETWORK_SPECIFIC,
   PSW_NT_SUBSCRIBER,
   PSW_NT_RESERVED,
   PSW_NT_ABBREVIATED    = 6
} PswNumberTypeT;

typedef enum
{
   PSW_NP_UNKNOWN = 0,
   PSW_NP_ISDN_TELEPHONY,
   PSW_NP_RESERVED2,
   PSW_NP_DATA,
   PSW_NP_TELEX,
   PSW_NP_RESERVED5,
   PSW_NP_RESERVED6,
   PSW_NP_RESERVED7,
   PSW_NP_RESERVED8,
   PSW_NP_PRIVATE = 9
} PswNumberPlanT;

typedef enum  /* This section needs to be defined in an order as it appears in SCCGEN.H */
{
   PSW_UNKNOWN_SERVICE_TYPE=0,
   PSW_VOICE_SERVICE_TYPE,
   PSW_ANALOG_VOICE_SERVICE_TYPE,
   PSW_ASYNC_FAX_DATA_SERVICE_TYPE,
   PSW_ASYNC_DATA_SERVICE_TYPE,
   PSW_FAX_DATA_SERVICE_TYPE,
   PSW_UP_ASYNC_DATA_SERVICE_TYPE,
   PSW_PACKET_DATA_SERVICE_TYPE,
   PSW_QNC_PACKET_DATA_SERVICE_TYPE,
   PSW_UP_PACKET_DATA_SERVICE_TYPE,
   PSW_LPBK_SERVICE_TYPE,
   PSW_SMS_SERVICE_TYPE,
   PSW_OTASP_SERVICE_TYPE,
   PSW_TCP_BROWSER_DATA_SERVICE_TYPE,
   PSW_LOC_SERVICE_TYPE
} PswServiceT;

typedef enum
{
  PSW_PI_ALLOWED,
  PSW_PI_RESTRICTED,
  PSW_PI_NUMBER_NA,
  PSW_PI_RSVD
} PswPresentationIndicatorT;

typedef enum
{
  PSW_SI_USER_PROVIDED_NOT_SCREENED,
  PSW_SI_USER_PROVIDED_VERIFIED_PASSED,
  PSW_SI_USER_PROVIDED_VERIFIED_FAILED,
  PSW_SI_NETWORK_PROVIDED
} PswScreeningIndicatorT;

typedef struct
{
   PswNumberTypeT Type;
   PswNumberPlanT Plan;
   PswPresentationIndicatorT Pi;
   PswScreeningIndicatorT    Si;
   kal_int8 Number[CP_MAX_CALLING_PARTY_NUMBER_SIZE + 1];  /* Inc NULL terminator */
} PswCallingPartyNumberT;

/* move these two for CBP3_MERGE */
typedef enum
{
  PSW_SUBADDRESS_TYPE_NSAP,
  PSW_SUBADDRESS_TYPE_USER_SPECIFIED = 2
} PswSubaddressTypeT;

/* registration type enum */
typedef enum
{
  TIMER_BASED_REGISTRATION = 0,
  POWER_UP_REGISTRATION = 1,
  ZONED_BASED_REGISTRATION = 2,
  POWER_DOWN_REGISTRATION = 3 ,
  PARAMETER_CHANGE_REGISTRATION = 4,
  ORDERD_REGISTRATION = 5,
  DISTANCE_BASED_REGISTRATION = 6
} reg_type_enum;

typedef struct
{
  kal_bool                Extension;
  PswSubaddressTypeT  Type;
  kal_bool                Indicator;
  kal_int8            Address[CP_MAX_SUBADDRESS_SIZE + 1];/*Inc NULL terminator*/
} PswSubaddressT;

typedef struct
{
  kal_bool num_incl;
  kal_bool digitMode;
  PswNumberTypeT    type;
  PswNumberPlanT    plan;
  kal_uint8   NumChar;
  kal_uint8 ms_orig_pos_loc_ind;
  kal_uint8 number[CP_MAX_CALLING_PARTY_NUMBER_SIZE + 1];
}PswGlobalEmergencyCall;

typedef struct
{
  kal_bool num_info_incl;
  PswNumberTypeT    type;
  PswNumberPlanT    plan;
  kal_uint8 numFields;
  kal_uint8 number[CP_MAX_KEYPAD_FACILITY_SIZE+1];
}PswExtKeypadFacility;

typedef struct
{
  kal_bool  Mode;
} PswSetPrivacyModeMsgT;

typedef enum
{
   CALL_MODE_UNKNOWN,
   NORMAL_VOICE,
   EMERGENCY_E911,
   WPS,
   WPS_E911,
   OTASP,
   CALL_MODE_END
} PswCallModeT;

typedef struct
{
   PswRequestModeT   RequestMode;         /* requested call type          */
   PswCallModeT      CallMode;            /* call type (e.g. emergency, OTASP, WPS ...) */
   PswServiceOptionT ServiceOption;       /* requested service option     */
   kal_bool              Encoded;
   kal_bool              DigitMode;           /* digit encoding indicator     */
   PswNumberTypeT    NumberType;          /* type of number               */
   PswNumberPlanT    NumberPlan;          /* numbering plan               */
   kal_uint8             NumDigits;           /* number of digits to be dialled */
   kal_uint8             OtaspMode;           /* target band or system for OTASP Orig */
   kal_uint8             Digits[CP_MAX_CALLING_PARTY_NUMBER_SIZE +1];/* ascii digits, null terminated string */
   PswCallingPartyNumberT CPNInfo;         /* Calling Party Number Info   */
   PswServiceT       ServiceType;          /* service types.              */
   kal_bool              MultipleCallingPartyNum; /* MS has > 1 calling party num */
   kal_bool              SendCallingPartySubaddr; /* subaddress included?     */
   PswSubaddressT    CallingPartySubaddr;
   kal_bool              SendCalledPartySubaddr;  /* subaddress included?     */
   PswSubaddressT    CalledPartySubaddr;
   kal_uint16            pktDataIncTimer;           /* in seconds*/
   NspeAppT          pktDataAppType;
} PswCallInitiateMsgT;

typedef struct
{
   kal_uint32 TimerId;                         /* Expired timer Id */
} PswTimerExpiredMsgT;

/* MSG_ID_PSW_VAL_SET_DDTM_MSG */
typedef struct
{
   kal_bool enabled; /* TRUE: DDTM enabled, FALSE: DDTM disabled */
} PswValSetDDTMMsgT;

typedef struct
{
   kal_uint32 Mux1Stats[PSW_NUM_MUX1_COUNTER_INDEX];
   kal_uint32 Mux2Stats[PSW_NUM_MUX2_COUNTER_INDEX];
}PswRevStatParmsMsgT;

typedef struct
{
   kal_bool  Encoded;
   kal_uint8 Digit;
} PswSendContDTMFMsgT;

typedef struct
{
   kal_bool  Encoded;
   kal_uint8 NumDigits;
   kal_uint8 DtmfOnLength;
   kal_uint8 DtmfOffLength;
   kal_uint8 Digits[ CP_MAX_BURST_DTMF_DIGITS + 1 ]; /* Incl NULL terminator */
} PswSendBurstDTMFMsgT;

typedef struct
{
   PswNumberTypeT Type;
   PswNumberPlanT Plan;
   kal_int8           Number[CP_MAX_CALLED_PARTY_NUMBER_SIZE + 1];/*Inc NULL terminator*/
}  PswCalledPartyNumberT;


typedef struct
{
   kal_bool   SendFeatureIndicator;
   kal_uint8  Feature;
   kal_bool   SendKeypadFacility;
   kal_int8   KeypadFacility[CP_MAX_DISPLAY_SIZE  +  1];  /* Incl NULL terminator */
   kal_bool   SendCalledPartyNumber;
   PswCalledPartyNumberT CalledPartyNumber;
   kal_bool   SendCallingPartyNumber;
   PswCallingPartyNumberT CallingPartyNumber;
   kal_bool   SendConnectedNumber;
   PswCallingPartyNumberT ConnectedNumber;   /* Same format as CallingPartyNumber */
   kal_bool   Send;
   kal_bool   SendCalledPartySubaddress;
   PswSubaddressT CalledPartySubaddress;
   kal_bool   SendCallingPartySubaddress;
   PswSubaddressT CallingPartySubaddress;
   kal_bool   SendConnectedSubaddress;
   PswSubaddressT ConnectedSubaddress;
   kal_bool sendGlobalEmergencyCall;
   PswGlobalEmergencyCall  EmergencyNum;
   kal_bool   sendExtKeypadFacility;
   PswExtKeypadFacility ExtKeypadFac;
#ifdef MTK_CBP
   kal_bool   isEccWith3WC;  /* to indicate that this is a ECC throurh 3WC or not */
#endif
} PswHookflashMsgT;

typedef struct
{
   kal_uint8 NumFrames;  /* Number of frames spent off the serving frequency */
} PswEndCFMeasureMsgT;

typedef struct
{
   kal_uint16   EnableBits;
} PswDsEnableMsgT;

typedef enum
{
   PSW_MDR_DISABLED = 0,
   PSW_MDR_IF_AVAIL,
   PSW_MDR_ONLY
} PswPktSvcPrefT;

typedef struct
{
   kal_uint8           pageAcceptMap;
   kal_uint16          ayncDataSOPref;
   kal_uint16          faxSOPref;
   kal_bool            dormantBySCC;
   kal_uint16          ldrSOPrefer;
   kal_uint16          mdrSOPrefer;
   PswPktSvcPrefT  pktSvcPref;
   kal_uint8           forRc;
   kal_uint8           revRc;
} PswDataPrefReqMsgT;

typedef enum
{
   PSW_PREFER_MUX1 = 1,
   PSW_PREFER_MUX2
} PswMuxPrefMapT;

typedef struct
{
   kal_uint16           voiceSO;
   PswMuxPrefMapT   MuxOptPref;
   kal_bool             ToNegotiate;
   kal_uint8            forRc;
   kal_uint8            revRc;
} PswVsPrefReqMsgT;

typedef struct
{
   kal_uint8            pageAccptMap;
   kal_uint16           lpbkSO;
   kal_uint16           markovSO;
   kal_uint16           supplSO;
   kal_bool             ToNegotiate;
   kal_uint8            forRc;
   kal_uint8            revRc;
} PswLsPrefReqMsgT;

typedef struct
{
  kal_uint16 ServiceOption;
  kal_bool   ToNegotiate;
  kal_uint8  forRc;
  kal_uint8  revRc;
} PswSetServiceConfigMsgT;

/* SNR SR */
typedef struct
{
   kal_bool  enable;
   kal_uint8 numAttempts;         /* See MAX_SILENT_RETRIES */
   kal_uint8 timeBetweenAttempts; /* See SILENT_RETRY_TIMEOUT */
   kal_uint8 timeBeforeAbort;     /* See SILENT_RETRY_RESET_TIMEOUT */
} PswSetSilentRetryMsgT;

typedef struct
{
   kal_uint32 CustomFeature;
   /*each bit is defined for every cumtomfeafure */
} PswCustomFeatureMsgT;

typedef struct
{
  ExeRspMsgT  RspInfo;         /* Response routing information */
} PswGetSilentRetryStatusMsgT;

/* Get Active NAM response message */
typedef struct
{
  kal_bool enable;
} PswGetSilentRetryStatusResponseMsgT;

typedef struct
{
   kal_bool     E911Mode;  /* KAL_TRUE=EN, KAL_FALSE=DIS */
} PswE911ModeMsgT;

typedef struct
{
  kal_uint8 PRev;
} PswSetPRevMsgT;

typedef struct
{
   NamNumber   namNumber;
} PswGetPrlMsgT;

typedef enum
{
   PSW_PAM_DISABLE,
   PSW_PAM_FAX_NEXT_CALL,
   PSW_PAM_FAX_TILL_PWDN,
   PSW_PAM_DATA_NEXT_CALL,
   PSW_PAM_DATA_TILL_PWDN
} DsPreArangT;

typedef struct
{
   DsPreArangT paType;
} PswVsDsPreArangMsgT;

typedef struct
{
   kal_uint8  HATtmrValue;
   kal_uint8  HTtmrValue;
} PswSetPkzidHysterTmrMsgT;

typedef struct
{
   kal_uint8  reason;
} PswPsCallRelMsgT;

typedef struct
{
   kal_uint8  ConRef;
   kal_uint16 SrvOpt;
   kal_uint8  Length;
   kal_uint8  CtrlRec[MAX_MSG_LEN];
} PswServiceOptionControlRespMsgT;

typedef struct
{
   kal_uint16  RemainDuration;       /* Remaining RSCH duration as assigned by BS */
} PswRschRelIndMsgT;

/* RLP Message Definitions */
typedef struct
{
   kal_uint8        SrId;
   kal_uint16       DataSize;
} PswDataBufferStatusMsgT;

typedef struct
{
   kal_uint8        SoPref;
   kal_uint8        forRc;
   kal_uint8        revRc;
} PswSmsPrefReqMsgT;

typedef struct
{
  kal_uint8  DataByte[PSW_MAX_SMS_SIZE];   /* contents of SMS.     */
  kal_uint16 len;        /* the length of data in DataByte[ ]      */
  kal_bool   confirm;    /* confirm-required indocator             */
  kal_uint8  Digits[CP_MAX_CALLING_PARTY_NUMBER_SIZE +1]; /* ascii
                                 digits, null terminated string*/
  kal_bool   IsE911;    /* IsE911         */
} PswSmsTxReqMsgT;
typedef struct
{
  kal_uint8  len;   /* contents of SMS.     */
  kal_uint8  addr[PSW_MAX_SMS_SIZE/4]; /* addr*/
} PswSmsBroadcastExpectedMsgT;
typedef struct
{
  kal_uint8  len;   /* contents of SMS.     */
  kal_uint8  data[PSW_MAX_SMS_SIZE/2]; /* data*/
} PswSmsMtDataBurstMsgT;


typedef struct
{
   kal_bool         Success;
} PswOtaspRcvdMsgT;

typedef struct
{
   kal_uint16       Length;
   kal_uint8*       Data;
} PswOtaspTxReqMsgT;

typedef struct
{
   kal_uint16       SoPref;
   kal_uint8        forRc;
   kal_uint8        revRc;
} PswOtaspSoPrefMsgT;

typedef struct
{
   kal_uint8        mode;
} PswOtaSetPowerUpModeMsgT;

typedef struct
{
   kal_uint16       NewSo;
} PswVsSwitchSoMsgT;

typedef struct
{
   NamNumber   namNumber;
} PswGetNamMsgT;

typedef struct
{
   NamNumber namNumber;
   kal_bool      ScmIncl;
   kal_uint8     Scm[NAM_BANDS_SUPPORTED];
   kal_bool      SlotCycleIncl;
   kal_uint8     SlotCycleIndex;
   kal_bool      LckRsnIncl;
   kal_uint8     LckRsn;
   kal_bool      MaintRsnIncl;
   kal_uint8     MaintRsn;
   kal_bool      prefServiceIncl;
   kal_uint8     prefBand;
   kal_uint8     prefMode;
   kal_uint8     prefBlockBand1;
   kal_uint8     prefServBand0;
   kal_bool      ImsiMIncl;
   kal_bool      ImsiMValid;
   IMSIType  IMSI_M;

   kal_bool      SidNidIdexIncl;
   kal_uint8     SidNidIdex;
   kal_bool      SidIncl;
   kal_uint16    Sid;
   kal_bool      NidIncl;
   kal_uint16    Nid;
   kal_bool      AccolcIncl;
   kal_uint8     Accolc;
   kal_bool      TermInfoIncl;
   kal_uint8     MobTermHome;
   kal_uint8     MobTermSid;
   kal_uint8     MobTermNid;
   kal_bool      SpcIncl;
   kal_uint32    Spc;
   kal_bool      MdnIncl;
   kal_uint8     MdnNumDigits;
   kal_uint8     Mdn[16];
   kal_bool      AllowOtapaIncl;
   kal_bool      AllowOtapa;
   kal_bool      AnalogParmIncl;
   kal_uint16    HomeSid;
   kal_uint16    Sids;
   kal_uint16    LocaIds;
   kal_bool      Puregs;
   kal_bool      systemSelectIncl;
   kal_uint8     SystemSelect;

   kal_bool      ImsiTIncl;
   kal_bool      ImsiTValid;
   IMSIType  IMSI_T;

   kal_bool      CpcaCscaIncl;
   kal_uint16    CPCA, CSCA;      /* CDMA Primary (and Secondary) Channel A   */

   kal_bool      CpcbCscbIncl;
   kal_uint16    CPCB, CSCB;      /* CDMA Primary (and Secondary) Channel B   */

} PswNamChangedMsgT;

typedef struct
{
  kal_uint8 msResult[64];
  kal_uint8 NumBytes;
} PswModExpMSResultMsgT;

typedef struct
{
      kal_uint8 otaK[8];
} PswModExpBSResultMsgT;

typedef struct
{
   kal_bool SSPRListFillOK;
} PswFillSSPRRspMsgT;

typedef struct
{
   kal_uint8 *IS683Msg;
   kal_uint16 Length;
} PswIOTAIS683MsgT;

typedef struct
{
   kal_uint8 *IOTAPrl;
   kal_uint16 Length;
} PswIOTAPRLMsgT;

/* from MMI - SMS related */
#ifdef SYS_OPTION_SMS_ENGINE

typedef struct
{
   PswServiceOptionT SrvOpt;
} PswSmsPrefSrvOptMsgT;

typedef struct
{
   kal_bool  DigitMode;
   kal_bool  NumberMode;
   kal_uint8 NumberType;
   kal_uint8 NumberPlan;
   kal_uint8 NumFields;
   kal_uint8 Char[ SMS_MAX_ADDRESS_CHARS ];
} PswSmsMCAddrT;

typedef struct
{
   kal_uint8 Type;
   kal_bool  Odd;
   kal_uint8 NumFields;
   kal_uint8 Char[ SMS_MAX_SUBADDRESS_CHARS ];
} PswSmsMCSubaddrT;

typedef struct
{
   kal_uint16 Category;
   kal_uint8  Language;
   kal_uint8  CategoryResult;
} PswCategoryT;

typedef struct
{
   kal_uint8 NumCategories;
   PswCategoryT Cat[ SMS_MAX_NUM_SERVICE_CATEGORIES ];
} PswSrvCatProgResultT;

typedef struct
{
   kal_uint8 DispMode;
   kal_uint8 reserved;
} PswDispModeT;

typedef struct
{
   kal_uint16 TeleSrvId;                       /* Teleservice ID                  */
   PswSmsMCAddrT DefaultDestAddr;          /* Message center address of all   */
                                           /* submitted messages              */
   kal_bool DefaultSubaddrPres;                /* Indicator if subaddress present */
   PswSmsMCSubaddrT DefaultSubaddr;        /* Message center subaddress       */
} PswSmsConnectMsgT;

typedef struct
{
   kal_uint16 TeleSrvId;                       /* Teleservice ID                  */
} PswSmsDisconnectMsgT;

/*
** PSW_GET_STAT_CNT_MSG,
*/
typedef struct
{
   StatCounterT   StatCounter;         /* Statistics counter */
   kal_uint8          NumElement;          /* Number of elements in StatCounter   */
   kal_uint32         *MuxStat;
   #ifdef MTK_PLT_ON_PC_UT
   kal_uint32         StatCnt[255];
   #endif
} PswStatCntMsgT;

#define PSW_SMS_MAX_USER_DATA_CHARS 256

typedef struct
{
   kal_uint8 Year;
   kal_uint8 Month;
   kal_uint8 Day;
   kal_uint8 Hours;
   kal_uint8 Minutes;
   kal_uint8 Seconds;
} PswSmsAbsTimeT;

typedef enum
{
   PSW_CAT_UNKNOWN,
   PSW_CAT_EMERGENCIES,
   PSW_CAT_ADMINISTRATIVE,
   PSW_CAT_MAINTENANCE,
   PSW_CAT_GEN_NEWS_LOCAL,
   PSW_CAT_GEN_NEWS_REGIONAL,
   PSW_CAT_GEN_NEWS_NATIONAL,
   PSW_CAT_GEN_NEWS_INTERNATIONAL,
   PSW_CAT_FINANCE_NEWS_LOCAL,
   PSW_CAT_FINANCE_NEWS_REGIONAL,
   PSW_CAT_FINANCE_NEWS_NATIONAL,
   PSW_CAT_FINANCE_NEWS_INTERNATIONAL,
   PSW_CAT_SPORTS_NEWS_LOCAL,
   PSW_CAT_SPORTS_NEWS_REGIONAL,
   PSW_CAT_SPORTS_NEWS_NATIONAL,
   PSW_CAT_SPORTS_NEWS_INTERNATIONAL,
   PSW_CAT_ENTERTAINMENT_NEWS_LOCAL,
   PSW_CAT_ENTERTAINMENT_NEWS_REGIONAL,
   PSW_CAT_ENTERTAINMENT_NEWS_NATIONAL,
   PSW_CAT_ENTERTAINMENT_NEWS_INTERNATIONAL,
   PSW_CAT_LOCAL_WEATHER,
   PSW_CAT_TRAFFIC,
   PSW_CAT_FLIGHT_SCHEDULE,
   PSW_CAT_RESTAURANTS,
   PSW_CAT_LODGINGS,
   PSW_CAT_RETAIL_DIRECTORY,
   PSW_CAT_ADVERTISEMENT,
   PSW_CAT_STOCK_QUOTES,
   PSW_CAT_EMPLOYMENT_OPPORTUNITIES,
   PSW_CAT_MEDICAL_HEALTH,
   PSW_CAT_TECH_NEWS,
   PSW_CAT_MULTI_CATEGORY
} PSW_SMS_SERVICE_CAT;

typedef enum
{
   PSW_NORMAL,
   PSW_INTERACTIVE,
   PSW_URGENT,
   PSW_EMERGENCY
} PSW_SMS_PRIORITY;

typedef enum
{
   PSW_SMS_NOT_RESTRICTED,
   PSW_SMS_RESTRICTED,
   PSW_SMS_CONFIDENTIAL,
   PSW_SMS_SECRET
} PSW_SMS_PRIVACY;

typedef enum
{
   PSW_SMS_MOBILE_DEFAULT,
   PSW_SMS_LOW_PRIORITY,
   PSW_SMS_MEDIUM_PRIORITY,
   PSW_SMS_HIGH_PRIORITY
} PSW_SMS_ALERT;

typedef enum
{
   PSW_SMS_UNKNOWN,
   PSW_SMS_ENGLISH,
   PSW_SMS_FRENCH,
   PSW_SMS_SPANISH,
   PSW_SMS_JAPANESE,
   PSW_SMS_KOREAN,
   PSW_SMS_CHINESE,
   PSW_SMS_HEBREW
} PSW_SMS_LANG;

typedef struct
{
  kal_uint8 ErrorClass;
  kal_uint8 MsgStatusCode;
} PSW_MSG_STATUS;

typedef enum
{
   PSW_SMS_DELIVERY_ACK = 4,
   PSW_SMS_USER_ACK,
   PSW_SMS_READ_ACK
} PSW_MSG_TYPE;

typedef struct
{
   kal_uint16 TeleSrvId;                       /* Teleservice ID                  */
   kal_uint16 SeqNum;                          /* Unique number to coordinate the */
                                           /* parameter and user data messages*/
   kal_bool SendOnTraffic;                     /* Force SMS on Traffic or let CP  */
                                           /* decide                          */

   kal_bool SrvCatPres;                        /* If service catagory is present  */
   PSW_SMS_SERVICE_CAT SrvCat;             /* Service Catagory                */
   kal_uint16 MsgId;                           /* Message ID of submitted message */
   kal_bool HeaderInd;                         /* Header Indicator                */
   kal_bool BearerReplyOptPres;
   kal_uint8 ReplySeq;
   kal_uint8 NumUserDataMsgs;                  /* Number of User data messages    */
   kal_bool AbsValPres;                        /* Absolute validity period present*/
   PswSmsAbsTimeT AbsVal;                  /* Absolute validity period        */
   kal_bool RelValPres;                        /* Relative validity period present*/
   kal_uint8 RelVal;                           /* Relative validity period        */
   kal_bool AbsDelPres;                        /* Absolute deferred delivery time */
                                           /* present                         */
   PswSmsAbsTimeT AbsDel;                  /* Absolute deferred delivery time */
   kal_bool RelDelPres;                        /* Relative deferred delivery time */
                                           /* present                         */
   kal_uint8 RelDel;                           /* Relative deferred delivery time */
   kal_bool PriPres;                           /* Priority indicator present      */
   PSW_SMS_PRIORITY Pri;                   /* Priority indicator              */
   kal_bool PrvPres;                           /* Privacy indicator present       */
   PSW_SMS_PRIVACY Prv;                    /* Privacy indicator               */
   kal_bool ReplyOptPres;                      /* If reply option is present      */
   kal_bool UserAck;                           /* User acknowledgement requested  */
   kal_bool DeliverAck;                        /* delivery acknowledgement        */
                                           /* requested from message center   */
   kal_bool ReadAck;                           /* read acknowledgement            */
   kal_bool AlertPres;                         /* Alert on message delivery present*/
   PSW_SMS_ALERT Alert;                    /* Alert on message delivery       */
   kal_bool LangPres;                          /* Language indicator present      */
   PSW_SMS_LANG Lang;                      /* Language indicator              */
   kal_bool CallbackNumPres;                   /* Callback number present         */
   PswSmsMCAddrT CallbackNum;              /* Callback number                 */
   kal_bool OverrideAddrPres;                  /* Override Address Present        */
   PswSmsMCAddrT OverrideAddr;             /* Override Address                */
   kal_bool OverrideSubaddrPres;               /* Override Subaddress Present     */
   PswSmsMCSubaddrT OverrideSubaddr;       /* Override Subaddress             */
   kal_bool MsgDepIndexPres;                   /* Message Deposit Index present   */
   kal_uint16 MsgDepIndex;                     /* Message Deposit Index           */
   kal_bool SrvCatProgResultPres;              /* Service Category Program Results*/
   PswSrvCatProgResultT SrvCatProgResult;  /* Service Category Program Results*/
   kal_bool DispModePres;                      /* Service Category Program Results*/
   PswDispModeT DispMode;                  /* Service Category Program Results*/
} PswSmsSubmitParmsMsgT;

typedef struct
{
   kal_uint16 SeqNum;
   kal_uint8  MsgType;
   kal_uint8  NumMsgs;
   kal_uint8  MsgEncoding;
   kal_uint8  NumFields;
   kal_uint8  Char[ SMS_MAX_USERDATA_LENGTH ]; /* User Data field of message      */
} PswSmsUserDataMsgT;

typedef struct
{
   kal_uint16 TeleSrvId;                       /* Teleservice ID                  */
   kal_uint16 MsgId;                           /* Message ID of submitted message */
   kal_bool   HeaderInd;                       /* Header Indicator                */
   kal_bool OverrideAddrPres;                  /* Override address present        */
   PswSmsMCAddrT OverrideAddr;             /* Override address                */
   kal_bool SubaddrPres;                       /* Subaddress Present              */
   PswSmsMCSubaddrT Subaddr;               /* Subaddress                      */
   kal_bool SendSmsCancelDb;                   /* Send SMS Cancel Databurst if needed */
   kal_uint16 SeqNum;
} PswSmsCancelMsgT;

typedef struct
{
   kal_uint16 TeleSrvId;                       /* Teleservice ID                  */
   kal_uint16 SeqNum;                          /* Unique number to cordinate the  */
                                           /* parameters and user data messages*/
   PswSmsMCAddrT Addr;                     /* Message ceneter address         */
   kal_bool SubaddrPres;                       /* Subaddress Present              */
   PswSmsMCSubaddrT Subaddr;               /* Subaddress                      */
   kal_uint16 MsgId;                           /* Message ID of submitted message */
   PSW_MSG_TYPE MsgType;                   /* User/Delivery/Read ack type     */
   kal_bool HeaderInd;                         /* Header Indicator                */
   kal_uint8 NumUserDataMsgs;                  /* Number of User data messages    */
   kal_bool RespCodePres;                      /* User response code present      */
   kal_uint8 RespCode;                         /* User response code              */
   kal_bool TimeStampPres;                     /* Time Stamp present              */
   PswSmsAbsTimeT TimeStamp;               /* Message Center Time Stamp       */
   kal_bool MsgDepIndexPres;                   /* Message Deposit Index present   */
   kal_uint16 MsgDepIndex;                     /* Message Deposit Index           */
   kal_bool MsgStatusPres;                     /* Message Status present          */
   PSW_MSG_STATUS MsgStatus;               /* Message Status                  */
} PswSmsAckMsgT;

typedef struct
{
   kal_uint32 SvcMask;  /* Refer to scc_msc.c / mscGetSvcBitMap() for mapping */
   kal_uint32 LangMask; /* Refer to scc_msc.c / mscGetLangBitMap() for mapping */
   PSW_SMS_PRIORITY Priority;
} PswSmsBCastParmsMsgT;

#if defined(LGT_EXTENSIONS)
typedef struct
{
   kal_uint32 Param1;
   kal_uint32 Param2;
   PSW_SMS_PRIORITY Priority;
} PswSmsUnknownParmsMsgT;
#endif

typedef enum
{
   PSW_NO_TERMINAL_PROBLEMS,
   PSW_DESTINATION_RESOURSE_SHORTAGE,
   PSW_DESTINATION_OUT_OF_SERVICE
}PswTermStatusT;

typedef struct
{
   PswTermStatusT Status;
} PswSmsTerminalStatusMsgT;

typedef struct
{
   kal_uint8 NumTempRetries;   /* Max # of retries if BS returns errorCode = Temporary */
   kal_uint8 NumPermRetries;   /* Max # of retries if BS returns errorCode = Permanent */
   kal_uint8 NumTimeoutRetries;/* Max # of retries if no BS SMS Ack received and timeout
                              occurs */
} PswSmsRetxAmountMsgT;

typedef struct
{
   kal_uint8 ErrorClass;
   kal_uint8 CasueCode;
} PswSmsCauseCodeMsgT;

typedef struct
{
   kal_uint16 SeqNum;
   kal_uint8 ErrorClass;
   kal_uint8 CauseCode;
   kal_bool SendTlAck;
} PswSmsReplyTlAckMsgT;

 typedef struct
 {
 	kal_bool MultiSMSMode;
 }PswSMSModeMsgT;
 /*
	 This primitive is sent from md3-val to md3-psw to reply an tlack when receives SMS MT message.
 */
 typedef struct
 {
	 kal_uint8 len;
	 kal_uint8 Pdu[MAX_SMS_ACK_PDU_LEN];
     kal_uint16 seqNum;
 }PswSMSTlackReqMsgT;

typedef struct {
   kal_bool    CbsState;                           /* KAL_FALSE, CBS off; KAL_TRUE, CBS on */
   kal_uint32  LanMask;                            /* lanuage bitmap */
   kal_uint32  ChaMask[PSW_SMS_CBS_CHA_MAX];       /* channels bitmap */
   kal_uint32  CmasMask;                           /* cmas bitmap */
}PswSmsCbsInfoT;

#endif

/*-------------------------------------------------------------------**
  PSW_POS_AFLT_MEASUREMENTS_MSG
  PswPosAfltMeasurementMsgT
  L1D reports various position AFLT pilot set list information needed
  by BS. This list is not necessarily a complete list of position AFLT
  pilot set list but only those measurements that are completed as of
  the time the message is generated.
 *-------------------------------------------------------------------**/

typedef struct
{
   kal_uint16  PilotPN;
   kal_bool    Stale;
   /* PILOT_PN_PHASE sent in PROVIDE PILOT PHASE MEASUREMENTS */
   kal_int32   PnPhase;
   /* PILOT_STRENGTH sent in PROVIDE PILOT PHASE MEASUREMENTS */
   kal_uint16  Strength;
   /* RMS_ERR_PHASE sent in PROVIDE PILOT PHASE MEASUREMENTS */
} AFLTPilotMeasurementT;

typedef struct
{
   kal_uint8 SeqNum;
   /* TIME_REF_MS sent in PROVIDE PILOT PHASE MEASUREMENTS */
   kal_uint16 TimeRefMs;
   kal_bool OffsetIncl;
   kal_int16 MobOffset;
   /* REF_PN sent in PROVIDE PILOT PHASE MEASUREMENTS */
   kal_uint16 RefPN;
   /* REF_PILOT_STRENGTH sent in PROVIDE PILOT PHASE MEASUREMENTS */
   kal_uint16 RefPilotStrength;
   /* NUM_PILOTS_P sent in PROVIDE PILOT PHASE MEASUREMENTS */
   /* actual number of pilot measurements in AFLTPilotMeasurement */
   kal_uint8  NumPilots;
   AFLTPilotMeasurementT PosAFLT[SYS_CP_MAX_AFLT_LIST_PILOTS_MEAS];
} PswPosAfltMeasurementMsgT;

/*-------------------------------------------------------------------**
  PSW_POS_AFLT_ACK_ABORT_MSG
  PswPosAfltAckAbortMsgT
  L1D, after receiving L1D_POS_AFLT_ABORT_MSG, acknowledges its
  position search measurements aborted for given sequence number.
 *-------------------------------------------------------------------**/

typedef struct
{
  kal_uint16 SeqNum;
} PswPosAfltAckAbortMsgT;

/*-------------------------------------------------------------------**
  PSW_POS_AFLT_ABORT_REQ_MSG
  PswPosAfltAbortReqMsgT
  L1D, requests for position search measurements aborted for given
  sequence number.
 *-------------------------------------------------------------------**/

typedef struct
{
  kal_uint16 SeqNum;
} PswPosAfltAbortReqMsgT;

/* mclee location services request element messages */
typedef struct
{
   kal_uint8 SessID;
   kal_uint8 RejReqType; /* BS Request Element type */
   kal_bool RejReason;
} PswPosRejectMsgT;

typedef struct
{
   kal_uint8 RecLen;
   kal_uint8 ProvPseudorangeRec[PRM_MAX_SIZE];
} PswPseudorangeMsmtRspMsgT;

typedef struct
{
   kal_uint8       SoPref;
   kal_uint8       forRc;
   kal_uint8       revRc;
} PswLocPrefReqMsgT;

typedef struct
{
   kal_bool  Enable;
   kal_uint8 N1;
} PswGPSEnableReportsMsgT;

typedef struct
{
   kal_uint16 Size;
   kal_uint8    Sap;
   kal_uint8  DataP[200];
} PswIs801TcpbFwdDataRespInfoMsgT;

typedef struct
{
   kal_uint8 SessionId;
} PswIs801TcpBRevDataRespMsgT;


typedef enum
{
   PSW_GPS_ASSISTANCE_DATA_ALMANAC,
   PSW_GPS_ASSISTANCE_DATA_EPHEMERIS,
   PSW_GPS_ASSISTANCE_DATA_LAST_LOCATION,
   PSW_GPS_ASSISTANCE_DATA_BASE_STATION_ALMANAC,
   PSW_GPS_ASSISTANCE_DATA_ALMANAC_CORRECTION,
   PSW_GPS_ASSISTANCE_DATA_SV_HEALTH_INFO,
   PSW_GPS_ASSISTANCE_DATA_NAVIGATION_MSG_BITS,
   PSW_GPS_ASSISTANCE_DATA_ALL_GPS_DATA
}IS801GpsResetAssistanceDataT;

typedef struct
{
  IS801GpsResetAssistanceDataT AssisData;
}PswGpsResetAssistMsgT;

typedef struct
{
   kal_uint16 DataLen;
   kal_uint8  Data[PSW_GPS7560_DATA_SIZE_MAX];
} PswGpsNmeaStreamMsgT;

typedef struct
{
  SysSystemTimeT  SendTime;
} PswL1dAccessPreambleCompleteMsgT;

typedef struct
{
  SysSystemTimeT  SendTime;
} PswL1dAccessCompleteMsgT;

typedef struct
{
  SysSystemTimeT  finishTime;
} PswL1dAccessProbeCompleteMsgT;

/****************/
/* ETS Messages */
/****************/

typedef struct
{
   PswTestModeT Mode;                      /* Test mode */
   kal_uint16       Enabled;                   /* Mode Qualifier, typically equivalent to ON/OFF */
   kal_uint16       Value;                     /* Mode value*/
} PswEngineTestModeMsgT;


typedef struct
{
   kal_bool TimersUsed;                        /* Timers turned (on = KAL_TRUE) or (off = KAL_FALSE) */
} PswTestModeTimersUsedMsgT;

typedef struct
{
    kal_uint32            MaxCapSize;          /* System time to start sending message */
    kal_uint16            power_correction;    /* Tx power level less mean input power */
    kal_bool              use_curr_mip;        /* Use current mean input power or not  */
    kal_uint8             data_len;            /* Length of data to be sent            */
    kal_uint8             data[30];            /* l3 message data, length, data, crc   */
    kal_bool              repeat_data;         /* Message data is repeated flag        */
    kal_uint8             lc_mask[6];          /* Access channel long code mask        */
    kal_uint8             pam_size;            /* Preamble size in frames              */
    kal_uint16            RN;                  /* Random chip delay : 0 - 511          */
} PswAccessSigMsgT;

#ifdef MTK_PLT_ON_PC_UT
/* For PSW UT   */
typedef struct
{
    kal_uint8 lengthInBits;
    kal_uint8 reverseSigData[CPBUF_SIZE_REV];
}PswUnitTestReverseSigMsgT;
#ifdef MTK_DEV_C2K_IRAT
typedef struct
{
    kal_bool paramPsServStatusPresent;
    kal_bool paramIratModePresent;
    kal_bool psRegistered;
    srlteRatTypeT c2kRatType;
	rat_enum ratMode;
}PswSetIratParamMsgT;
#endif
typedef struct
{
    kal_bool success;
    kal_bool resend;
}PswSendSmsConfirmMsgT;

typedef struct
{
    sbp_id_enum sbpId;
}PswSetSbpIdMsgT;

#endif

/* Status request message - Request current PS status */
typedef struct
{
   ExeRspMsgT  RspInfo;                    /* Response routing information */
} PswStatusRequestMsgT;

/* Status request, response */
typedef struct
{
   kal_uint32   Esn;
   kal_uint8    RFMode;
   kal_uint8    MIN_Digits;
   kal_uint8    Min[15];
   kal_uint8    CPState;
   kal_uint8    CDMAGoodFrames;
   kal_uint16   AMPSGoodFrames;
   kal_uint16   AMPSBadFrames;
   kal_uint8    CPEntranceReason;
   kal_uint16   Channel;
   kal_uint16   PilotPN;
   kal_uint16   CurSID;
   kal_uint16   CurNID;
   kal_uint16   LocAreaID;
   kal_int16    RSSI;
   kal_uint8    PowerLevel;
   kal_bool     Slotted_Mode_Flag;
} PswStatusResponseMsgT;

/* Debug Pilot Strength request message */
typedef struct
{
   ExeRspMsgT  RspInfo;                    /* Response routing information */
   kal_bool enable;
} PswDebugPilotStrengthMsgT;

typedef struct
{
  DebugPilotInfo *PilotReport;
} PswDebugPilotStrengthRspMsgT;

/* Debug Screen request message - Request debug screen info */
typedef struct
{
   ExeRspMsgT  RspInfo;                    /* Response routing information */
} PswDebugScrnRequestMsgT;

/* Debug Screen Response */
typedef struct
{
   kal_uint16          sid;
   kal_uint16          nid;
   kal_uint16          badframes;
   kal_uint16          totframes;
   kal_uint16          ActPilotPN   [SYS_CP_MAX_ACTIVE_LIST_PILOTS];
   kal_uint16          ActPilotEcIo [SYS_CP_MAX_ACTIVE_LIST_PILOTS];
   kal_uint16          CandPilotPN  [SYS_CP_MAX_CANDIDATE_LIST_PILOTS];
   kal_uint16          CandPilotEcIo[SYS_CP_MAX_CANDIDATE_LIST_PILOTS];
   kal_uint16          NghbrPilotPN [SYS_CP_MAX_NEIGHBOR_LIST_PILOTS];
   kal_uint16          NghbrPilotEcIo [SYS_CP_MAX_NEIGHBOR_LIST_PILOTS];
   kal_int16           txPower;
   kal_int16           rxPower;
   kal_uint8           current_slot_cycle_index;
   kal_bool            slotted_enabled;
   kal_bool            qpch_enabled;
   kal_uint8           forfchRc;
   kal_uint8           revfchRc;
   kal_uint16          serviceOption;
   PswServiceT     serviceType;
} PswDebugScrnResponseT;

/* Phone State request message */
typedef struct
{
   ExeRspMsgT  RspInfo;                    /* Response routing information */
} PswPhoneStateRequestMsgT;

/* Phone State request, response */
typedef struct
{
  kal_uint8       State;
  kal_uint32      total_msg;        /* Number of paging ch messages received  */
  kal_uint32      error_msg;        /* Number of paging ch messages with bad crc  */
  kal_uint16      acc_1;             /* number of layer 3 requests messages generated */
  kal_uint16      acc_2;             /* number of layer 3 response messages generated */
  kal_uint16      acc_8;             /* number of unsuccessful access attempts        */
  kal_uint16      dpchLoss_count;         /* Count of paging ch declared    */
  kal_uint16      dtchLoss_count;         /* Count of dedicated traffic CH Loss*/
  kal_uint32      idleHO_count;           /* Count of idle handoff*/
  kal_uint16      hardHO_count;           /* Count of hard handoff*/
  kal_uint16      interFreqIdleHO_count; /* Count of inter_Freq idle handoff*/
  kal_uint16      MO_count;             /* Count of successful MS ORIGINATED      */
  kal_uint16      MT_count;             /* Count of successful MS TERMINATED      */
  kal_uint16      powerDownReg_count;  /* Count of power down registration      */
  kal_uint16      timeBasedReg_count;  /* Count of time based registration       */
  kal_uint16      parameterReg_count;  /* Count of parameter change registration   */
  kal_uint16      powerUpReg_count;    /* Count of power up registration    */
  kal_uint16      orderedReg_count;    /* Count of ordered registration     */
  kal_uint16      zoneBasedReg_count;  /* Count of zone based registration */
  kal_uint16      distanceBasedReg_count; /* Count of distance based registration */
  kal_uint16      silentryRetryTimeout_count; /* Count of silentry retry timeout */
  kal_uint16      T40_count;  /* Count of T40m timeout */
  kal_uint16      T41_count;  /* Count of T41m timeout */
  kal_uint16      T50_count;  /* Count of T50m timeout */
  kal_uint16      T51_count;  /* Count of T51m timeout */
  kal_uint16      T52_count;  /* Count of T52m timeout */
  kal_uint16      T55_count;  /* Count of T55m timeout */
} PswPhoneStateResponseMsgT;

/* Set Retreivable Statistics Parameter Request Type */
typedef struct
{
    kal_uint16  ParameterID;
    kal_uint32 Value;
} PswSetRetrievableParameterMsgT;

/* Get Retreivable Statistics Parameter Request Type */
typedef struct
{
   StatCounterT   StatCounter;         /* Statistics counter */
} PswGetRetrievableParameterMsgT;

/* Get Retreivable Statistics Parameter Response Message Type */
typedef struct
{
    StatCounterT  StatCounter;         /* Statistics counter */
    kal_uint32        Value[MAX_STAT_ELEMENT];
} GetRetrievableParameterRspMsgT;

typedef struct
{
   ExeRspMsgT  RspInfo;                    /* Response routing information */
} PswGetFullSysTimeMsgT;

typedef struct
{
   ExeRspMsgT  RspInfo;                    /* Response routing information */
} PswGetPRevInUseRequestMsgT;

typedef struct
{
   kal_uint8  P_Rev_In_Use;
} PswGetPRevInUseResponseMsgT;

/* aak_akey */
#ifdef PSW_AKEY_UINT64
typedef struct
{
  ExeRspMsgT  RspInfo;                    /* Response routing information */
  kal_uint64      akey;
  kal_uint32      checksum;
} PswEnterAKeyMsgT;
#else
typedef struct
{
  ExeRspMsgT  RspInfo;                    /* Response routing information */
  kal_uint32      akey_low;
  kal_uint32      akey_high;
  kal_uint32      checksum;
} PswEnterAKeyMsgT;
#endif

typedef struct
{
   kal_uint8 NoiseFloor;
   kal_uint8 ThrMin;
   kal_uint8 MinAct;
   kal_uint8 ThrSlope;
} PswSetAccessHOParmsMsgT;

typedef struct
{
   kal_uint8 ThrMinImmed;
   kal_uint8 MinActImmed;
   kal_uint8 ThrSlopeImmed;
   kal_uint8 ThrMinDelayed;
   kal_uint8 MinActDelayed;
   kal_uint8 ThrSlopeDelayed;
   kal_uint8 DelayCount;
   kal_uint8 MinNghbrThr;
} PswSetIdleHOParmsMsgT;

typedef struct
{
   kal_bool PiStatus;
} PswQpchPiStatusMsgT;

typedef struct
{
   kal_uint8   nomPwrExt;
   kal_int8    nomPwr;
   kal_uint8   numPreamble;
   kal_uint8   bandClass;
   kal_uint16  cdmaFreq;
   kal_uint16  pilotPN;
   kal_uint8   codeChanFCH;
} PswInjectHandoffMsgT;

/*****************************************************************************
 * Defines
 ****************************************************************************/
typedef enum
{
  PSW_UI_ENCRYP_DISABLED,
  PSW_UI_ORYX_ENABLED
} PSW_UI_ENCRYPT_MODE_TYPE;

typedef enum
{
   PSW_BASIC_ENCRYPT_SUPP,
   PSW_BASIC_AND_ENHANCED_SUPP
} PSW_ENCRYPT_MODE_TYPE;

/* define set of frame sizes */
typedef enum
{
   PSW_DCCH_FS_20MS = 1,          /* 20 ms frame size only         */
   PSW_DCCH_FS_5MS = 2,           /* 5 ms frame size only          */
   PSW_DCCH_FS_5MS_AND_20MS = 3   /* both 5 and 20 ms frame size   */
} PSW_DCCH_FRAME_SIZE_TYPE;

typedef enum
{
   PSW_FCH_FS_20MS = 0,
   PSW_FCH_FS_5MS_AND_20MS = 1
} PSW_FCH_FRAME_SIZE_TYPE;

/* define set of RC settings */
typedef enum
{
   PSW_FOR_RC_1 = 0x100,
   PSW_FOR_RC_2 = 0x80,
   PSW_FOR_RC_3 = 0x40,
   PSW_FOR_RC_4 = 0x20,
   PSW_FOR_RC_5 = 0x10,
   PSW_FOR_RC_6 = 0x8,
   PSW_FOR_RC_7 = 0x4,
   PSW_FOR_RC_8 = 0x2,
   PSW_FOR_RC_9 = 0x1
} PSW_FOR_RC_TYPE;

typedef enum
{
   PSW_REV_RC_1 = 0x20,
   PSW_REV_RC_2 = 0x10,
   PSW_REV_RC_3 = 0x8,
   PSW_REV_RC_4 = 0x4,
   PSW_REV_RC_5 = 0x2,
   PSW_REV_RC_6 = 0x1
} PSW_REV_RC_TYPE;

/* define set of RC Preference settings */
typedef enum
{
   PSW_RC_PREF_1 = 1,
   PSW_RC_PREF_2 = 2,
   PSW_RC_PREF_3 = 3,
   PSW_RC_PREF_4 = 4,
   PSW_RC_PREF_5 = 5,
   PSW_RC_PREF_6 = 6,
   PSW_RC_PREF_7 = 7,
   PSW_RC_PREF_8 = 8,
   PSW_RC_PREF_9 = 9
} PSW_RC_PREF_TYPE;

/* define set of Geo-location support */
typedef enum
{
   PSW_GL_NO_SUPPORT = 0,
   PSW_GL_AFLT = 1,
   PSW_GL_AFLT_AND_GPS = 2,
   PSW_GL_GPS = 3
} PSW_GEO_LOC_TYPE;

typedef enum
{
   PSW_GATING_RATE_SET_00  =  0x00,     /* Gating rates 1                */
   PSW_GATING_RATE_SET_01  =  0x01,     /* Gating rates 1 and 1/2        */
   PSW_GATING_RATE_SET_10  =  0x02,     /* Gating rates 1, 1/2 and 1/4   */
   PSW_GATING_RATE_SET_11  =  0x03      /* reserved                      */
} PSW_GATING_RATE_SET_TYPE;


/* FOR SCH Multiplex options --------------------------------------- */
typedef enum
{
   PSW_FOR_SCH_0x03_MUX_OPTION  = 0x0001,   /* For SCH 0x03 Mux options,  bit,   */
   PSW_FOR_SCH_0x809_MUX_OPTION = 0x0002,   /* For SCH 0x809 Mux options, bit,   */
   PSW_FOR_SCH_0x811_MUX_OPTION = 0x0004,   /* For SCH 0x811 Mux options, bit,   */
   PSW_FOR_SCH_0x821_MUX_OPTION = 0x0008,   /* For SCH 0x821 Mux options, bit,   */
   PSW_FOR_SCH_0x905_MUX_OPTION = 0x0010,   /* For SCH 0x905 Mux options, bit,   */
   PSW_FOR_SCH_0x909_MUX_OPTION = 0x0020,   /* For SCH 0x909 Mux options, bit,   */
   PSW_FOR_SCH_0x911_MUX_OPTION = 0x0040,   /* For SCH 0x911 Mux options, bit,   */
   PSW_FOR_SCH_0x921_MUX_OPTION = 0x0080,   /* For SCH 0x921 Mux options, bit,   */

   PSW_FOR_SCH_0x04_MUX_OPTION  = 0x0100,   /* For SCH 0x04 Mux options,  bit,   */
   PSW_FOR_SCH_0x80a_MUX_OPTION = 0x0200,   /* For SCH 0x80a Mux options, bit,   */
   PSW_FOR_SCH_0x812_MUX_OPTION = 0x0400,   /* For SCH 0x812 Mux options, bit,   */
   PSW_FOR_SCH_0x822_MUX_OPTION = 0x0800,   /* For SCH 0x822 Mux options, bit,   */
   PSW_FOR_SCH_0x906_MUX_OPTION = 0x1000,   /* For SCH 0x906 Mux options, bit,   */
   PSW_FOR_SCH_0x90a_MUX_OPTION = 0x2000,   /* For SCH 0x90a Mux options, bit,   */
   PSW_FOR_SCH_0x912_MUX_OPTION = 0x4000,   /* For SCH 0x912 Mux options, bit,   */
   PSW_FOR_SCH_0x922_MUX_OPTION = 0x8000    /* For SCH 0x922 Mux options, bit,   */
} PSW_FOR_SCH_MUX_OPTION;


/* REV SCH Multiplex options --------------------------------------- */
typedef enum
{
   PSW_REV_SCH_0x03_MUX_OPTION  = 0x0001,   /* Rev SCH 0x03 Mux options,  bit,   */
   PSW_REV_SCH_0x809_MUX_OPTION = 0x0002,   /* Rev SCH 0x809 Mux options, bit,   */
   PSW_REV_SCH_0x811_MUX_OPTION = 0x0004,   /* Rev SCH 0x811 Mux options, bit,   */
   PSW_REV_SCH_0x821_MUX_OPTION = 0x0008,   /* Rev SCH 0x821 Mux options, bit,   */
   PSW_REV_SCH_0x905_MUX_OPTION = 0x0010,   /* Rev SCH 0x905 Mux options, bit,   */
   PSW_REV_SCH_0x909_MUX_OPTION = 0x0020,   /* Rev SCH 0x909 Mux options, bit,   */
   PSW_REV_SCH_0x911_MUX_OPTION = 0x0040,   /* Rev SCH 0x911 Mux options, bit,   */
   PSW_REV_SCH_0x921_MUX_OPTION = 0x0080,   /* Rev SCH 0x921 Mux options, bit,   */

   PSW_REV_SCH_0x04_MUX_OPTION  = 0x0100,   /* Rev SCH 0x04 Mux options,  bit,   */
   PSW_REV_SCH_0x80a_MUX_OPTION = 0x0200,   /* Rev SCH 0x80a Mux options, bit,   */
   PSW_REV_SCH_0x812_MUX_OPTION = 0x0400,   /* Rev SCH 0x812 Mux options, bit,   */
   PSW_REV_SCH_0x822_MUX_OPTION = 0x0800,   /* Rev SCH 0x822 Mux options, bit,   */
   PSW_REV_SCH_0x906_MUX_OPTION = 0x1000,   /* Rev SCH 0x906 Mux options, bit,   */
   PSW_REV_SCH_0x90a_MUX_OPTION = 0x2000,   /* Rev SCH 0x90a Mux options, bit,   */
   PSW_REV_SCH_0x912_MUX_OPTION = 0x4000,   /* Rev SCH 0x912 Mux options, bit,   */
   PSW_REV_SCH_0x922_MUX_OPTION = 0x8000    /* Rev SCH 0x922 Mux options, bit,   */
} PSW_REV_SCH_MUX_OPTION;

/* FCH & DCCH Multiplex options -------------------------------------- */
typedef enum
{
   PSW_MUX_OPTION_0x1   = 0x1,
   PSW_MUX_OPTION_0x2   = 0x2,
   PSW_MUX_OPTION_0x704 = 0x4
} PSW_MUX_OPTIONS_TYPES;

/* define set of bitmap indicator */
typedef enum
{
   PSW_SO_0_BITS = 0,
   PSW_SO_4_BITS = 1,
   PSW_SO_8_BITS = 2
} PSW_SERV_OPT_BITMAP_IND;

typedef enum
{
   PSW_CH_IND_RESERVED = 0x00,
   PSW_CH_IND_FCH      = 0x01,
   PSW_CH_IND_DCCH     = 0x02,
   PSW_CH_IND_FCH_AND_DCCH = 0x03
} PSW_CH_IND_TYPE;

typedef struct
{
   PSW_FCH_FRAME_SIZE_TYPE  FchFrameSize;           /* FCH_FRAME_SIZE, FCH frame Size capability indicator   */
   kal_uint8                    ForFchLen;              /* FOR_FCH_LEN, Fwd Fundemental Channel Config Info. Len */
   kal_uint16                   ForFchRcMap;            /* FOR_FCH_RC_MAP Forward Fundemental Radio Config. Info.*/
   kal_uint8                    RevFchLen;              /* REV_FCH_LEN, Rev Fundemental Channel Config Info. Len */
   PSW_REV_RC_TYPE          RevFchRcMap;            /* REV_FCH_RC_MAP Reverse Fundemental Radio Config. Info.*/
} PSW_FCH_TYPE_SPECIFIC_FIELDS_TYPE;

typedef struct
{
   PSW_DCCH_FRAME_SIZE_TYPE DcchFrameSize;   /* DCCH_FRAME_SIZE, DCCH frame Size capability indicator */
   kal_uint8                    ForDcchLen;      /* FOR_DCCH_LEN, Fwd Dedicated Ctrl Ch. Config Info. Len */
   kal_uint16                   ForDcchRcMap;    /* FOR_DCCH_RC_MAP Fwd Dedicated Ch. Radio Config. Info. */
   kal_uint8                    RevDcchLen;      /* REV_DCCH_LEN, Rev Dedicated Ctrl Ch. Config Info. Len */
   PSW_REV_RC_TYPE          RevDcchRcMap;    /* REV_DCCH_RC_MAP Rev Dedicated Ch. Radio Config. Info. */
} PSW_DCCH_TYPE_SPECIFIC_FIELDS_TYPE;

typedef struct
{
   kal_uint8             ForSchLen;              /* FOR_SCH_LEN, Fwd Supplemental length in 3 bit uints   */
   kal_uint16            ForSchRcMap;            /* FOR_SCH_RC_MAP, Fwd Supplemental Channel Radio Config Information. */
   kal_uint8             ForSchNum;              /* FOR_SCH_NUM, Number of Forward Supplemental Cannel    */
   kal_bool              ForTurboSupportedSch1;  /* FOR_TURBO_SUPPORTED, 1 Ch Fwd Turbo Coding Supported  */
   kal_bool              ForTurboSupportedSch2;  /* FOR_TURBO_SUPPORTED, 2 Ch Fwd Turbo Coding Supported  */
   kal_uint8             ForMaxTurboBlockSize;   /* FOR_MAX_TURBO_BLOCK_SIZE, Fwd Max Turbo Block Size    */
   kal_bool              ForConvSupportedSch1;   /* FOR_CONV_SUPPORTED, 1 Ch Fwd convolutional Coding Supported */
   kal_bool              ForConvSupportedSch2;   /* FOR_CONV_SUPPORTED, 2 Ch Fwd convolutional Coding Supported */
   kal_uint8             ForMaxConvBlockSize;    /* FOR_MAX_CONV_BLOCK_SIZE, Fwd Max Conv. Code Block Size*/
} PSW_FOR_SCH_TYPE_SPECIFIC_FIELDS_TYPE;

typedef struct
{
   kal_uint8             RevSchLen;              /* REV_SCH_LEN, Rev Supplemental length in 3 bit uints   */
   kal_uint8             RevSchRcMap;            /* REV_SCH_RC_MAP Rev Dedicated Ch. Radio Config. Info.  */
   kal_uint8             RevSchNum;              /* REV_SCH_NUM, Number of Reverse Supplemental Cannel    */
   kal_bool              RevTurboSupportedSch1;  /* REV_TURBO_SUPPORTED, 1 Ch Rev Turbo Coding Supported  */
   kal_bool              RevTurboSupportedSch2;  /* REV_TURBO_SUPPORTED, 2 Ch Rev Turbo Coding Supported  */
   kal_uint8             RevMaxTurboBlockSize;   /* REV_MAX_TURBO_BLOCK_SIZE, Rev Max Turbo Block Size    */
   kal_bool              RevConvSupportedSch1;   /* REV_CONV_SUPPORTED, 1 Ch Rev convolutional Coding Supported */
   kal_bool              RevConvSupportedSch2;   /* REV_CONV_SUPPORTED, 2 Ch Rev convolutional Coding Supported */
   kal_uint8             RevMaxConvBlockSize;    /* REV_MAX_CONV_BLOCK_SIZE, Rev Max Conv. Code Block Size*/
} PSW_REV_SCH_TYPE_SPECIFIC_FIELDS_TYPE;

typedef struct
{
   kal_uint8             MaxMsNakRoundsFwd;      /* MAX_MS_NAK_ROUNDS_FWD Maximum number of RLP_NAK rounds
                                                supported by the MS on the forward traffic channel    */
   kal_uint8             MaxMsNakRoundsRev;      /* MAX_MS_NAK_ROUNDS_REV Maximum number of RLP_NAK rounds
                                                supported by the MS on the reverse traffic channel    */
} PSW_RLP_CAP_BLOB_LEN_TYPE;

/* Status request, response */
typedef struct
{
  kal_uint8 MsCapData[1];
} PswMsCapDbWriteMsgT;

typedef enum
{
  PSW_HSPD_CONTROL_HOLD_STATE = 0,
  PSW_HSPD_ACTIVE_STATE = 1
} PswHspdActiveControlHoldT;

typedef struct
{
  PswHspdActiveControlHoldT HspdNewState;
} PswHspdActiveControlHoldMsgT;

typedef enum
{
  PSW_SCH_9_6_KBPS   = 0,
  PSW_SCH_19_2_KBPS  = 1,
  PSW_SCH_38_4_KBPS  = 2,
  PSW_SCH_76_8_KBPS  = 3,
  PSW_SCH_153_6_KBPS = 4,
  PSW_SCH_307_2_KBPS = 5,
  PSW_SCH_614_4_KBPS = 6
} PswSchPrefRateT;

typedef struct
{
  kal_uint8             SrId;
  PswSchPrefRateT   PrefRate;
  kal_uint16            Duration;
} PswRevSchRequestMsgT;

typedef struct
{
   kal_uint8  StartupActiveNam;
   kal_uint8  PswFeatureFlags;
   kal_uint8  PhyFeatureFlags;
   kal_uint8  PswMiscEnableFlags;
   kal_uint8  pendingReg;
   kal_uint16 PrefHomeMOSO;
   kal_uint16 PrefHomeMTSO;
   kal_uint16 PrefRoamMOSO;
   kal_bool   IS683NamLock;
   kal_uint8  DfsEcIoThresh;
   kal_uint16 qpchPilotEcIoThreshLow;
   kal_uint16 qpchPilotEcIoThreshHigh;
   kal_uint8  reserved_0;
   kal_uint16 checksum;
} PackedPswMiscT;

/*#ifdef VERIZON_GPS_DEBUG */
#define MAX_DEBUG_INFO 64
#define MAX_NUM_SATELLITES 9

typedef struct
{
  ExeRspMsgT  RspInfo;         /* Response routing information */
} PswGpsDebugInfoCmdMsgT;

typedef struct
{
  kal_bool   Valid;
  kal_uint32 num_pilots_in_aflt_msg;
  kal_uint32 SystemTime;
  kal_uint32 LAT;
  kal_uint32 LONG;
  kal_uint32 FixType;
  kal_uint8  SatelliteNumber[MAX_NUM_SATELLITES];
} PswGpsDebugInfoRspMsgT;

/*#endif */

typedef enum
{
   ID_NOT_SET = 0,
   ESN = 1,
   MEID = 2,
   UIMID = 3,
   SF_EUIMID
} MobileIDType;

typedef enum
{
   PSW_SET_MBID_ELT = 0,
   PSW_SET_MBID_AT = 1,
   PSW_SET_MBID_META = 2,
   PSW_SET_MBID_INVALID
} PswSetMobileIdType;

typedef enum
{
    PSW_SET_FAILURE = 0,
    PSW_SET_SUCCESS = 1,
} PswSetMobileIdStatus;

/* Set ESN message */
typedef struct
{
   MobileIDType Id;
   kal_uint64       value;
} PswSetMobileIDMsgT;

/* Get ESN message */
typedef struct
{
   ExeRspMsgT  RspInfo;         /* Response routing information */
} PswGetMobileIDMsgT;

/* Verify SPC message */
typedef struct
{
   kal_uint32       SPC;
   kal_bool         reset;
} PswVerifySPCMsgT;

/* Get ESN response message */
typedef struct
{
   MobileIDType Id;
   kal_uint64       value;
} PswGetMobileIDRspMsgT;

/* Get Active NAM message */
typedef struct
{
   ExeRspMsgT  RspInfo;         /* Response routing information */
} PswGetActiveNamMsgT;

/* Get Active NAM response message */
typedef struct
{
  kal_uint8       CurrentActiveNam;
} PswGetActiveNamResponseMsgT;

/* Select Active NAM message */
typedef struct
{
  kal_uint8       SelectActiveNam;
} PswSelectActiveNamMsgT;

typedef enum
{
  DUAL_NAM_NOT_SUPPORTED = 0,
  NAM1_SELECTED          = 1,
  NAM2_SELECTED          = 2,
  PS_ACTIVE_NAM1_LOCKED  = 3,
  PS_ACTIVE_NAM2_LOCKED  = 4
} ActiveNamResultT;

/* Select Active NAM response message */
typedef struct
{
  kal_uint8       ActiveNamResult;
} PswSelectActiveNamResponseMsgT;

typedef struct
{
  kal_uint8  PWR_CNTL_STEP;
  kal_bool   USE_TIME;
  kal_uint8  ACTION_TIME;
  kal_bool   FPC_INCL;
  kal_uint8  FPC_MODE;
  kal_bool   FPC_PRI_CHAN;
  kal_bool   FPC_OLPC_FCH_INCL;
  kal_uint8  FPC_FCH_FER;
  kal_uint8  FPC_FCH_MIN_SETPT;
  kal_uint8  FPC_FCH_MAX_SETPT;
  kal_bool   FPC_OLPC_DCCH_INCL;
  kal_uint8  FPC_DCCH_FER;
  kal_uint8  FPC_DCCH_MIN_SETPT;
  kal_uint8  FPC_DCCH_MAX_SETPT;
  kal_bool   FPC_SEC_CHAN;
  kal_uint8  NUM_SUP;
  kal_bool   SCH_ID;
  kal_uint8  FPC_SCH_FER;
  kal_uint8  FPC_SCH_MIN_SETPT;
  kal_uint8  FPC_SCH_MAX_SETPT;
  kal_bool   FPC_THRESH_INCL;
  kal_uint8  FPC_SETPT_THRESH;
  kal_bool   FPC_THRESH_SCH_INCL;
  kal_uint8  FPC_SETPT_THRESH_SCH;
  kal_bool   RPC_INCL;
  kal_uint8  RPC_NUM_REC;
  kal_uint8  RPC_ADJ_REC_TYPE_0;
  kal_uint8  RPC_ADJ_REC_LEN_0;
  kal_bool   PCM_FCH_INCL;
  kal_uint8  FCH_CHAN_ADJ_GAIN;
  kal_bool   PCM_DCCH_INCL;
  kal_uint8  DCCH_CHAN_ADJ_GAIN;
  kal_bool   SCH0_INCL;
  kal_uint8  SCH0_CHAN_ADJ_GAIN;
  kal_bool   SCH1_INCL;
  kal_uint8  SCH1_CHAN_ADJ_GAIN;
  kal_uint8  RPC_ADJ_REC_TYPE_1;
  kal_uint8  RPC_ADJ_REC_LEN_1;
  kal_bool   RL_ATT_ADJ_GAIN_TYPE_1;
  kal_bool   RC3_RC5_20MS_INCL_1;
  kal_uint8  RL_ATT_ADJ_GAIN_1500;
  kal_uint8  RL_ATT_ADJ_GAIN_2700;
  kal_uint8  RL_ATT_ADJ_GAIN_4800;
  kal_uint8  RL_ATT_ADJ_GAIN_9600;
  kal_bool   RC4_RC6_20MS_INCL_1;
  kal_uint8  RL_ATT_ADJ_GAIN_1800;
  kal_uint8  RL_ATT_ADJ_GAIN_3600;
  kal_uint8  RL_ATT_ADJ_GAIN_7200;
  kal_uint8  RL_ATT_ADJ_GAIN_14400;
  kal_bool   MS5_INCL;
  kal_uint8  NORM_ATT_GAIN_9600_5MS;
  kal_uint8  RPC_ADJ_REC_TYPE_2;
  kal_uint8  RPC_ADJ_REC_LEN_2;
  kal_bool   CODE_TYPE;
  kal_bool   RL_ATT_ADJ_GAIN_TYPE_2;
  kal_bool   RC3_RC5_20MS_INCL_2;
  kal_uint8  RL_ATT_ADJ_GAIN_19200;
  kal_uint8  RL_ATT_ADJ_GAIN_38400;
  kal_uint8  RL_ATT_ADJ_GAIN_76800;
  kal_uint8  RL_ATT_ADJ_GAIN_153600;
  kal_uint8  RL_ATT_ADJ_GAIN_307200;
  kal_uint8  RL_ATT_ADJ_GAIN_614400;
  kal_bool   RC4_RC6_20MS_INCL_2;
  kal_uint8  RL_ATT_ADJ_GAIN_28800;
  kal_uint8  RL_ATT_ADJ_GAIN_576600;
  kal_uint8  RL_ATT_ADJ_GAIN_115200;
  kal_uint8  RL_ATT_ADJ_GAIN_230400;
  kal_uint8  RL_ATT_ADJ_GAIN_460800;
  kal_uint8  RL_ATT_ADJ_GAIN_1036800;
} PswTestPowerControlMsgT;

typedef struct
{
  ExeRspMsgT  RspInfo;
} PswReadRawIMSIMsgT;

typedef struct
{
  kal_uint8   ValidIMSImap;      /* bit0: IMSI_M, bit1:IMSI_T */
  kal_uint8   M_MCC[3];          /* MCC raw digits */
  kal_uint8   M_IMSI_11_12[2];   /* M_IMSI_11_12 raw digits */
  kal_uint8   M_IMSI_S[10];      /* M_IMSI_S raw digits */
  kal_uint8   M_IMSI_Class;
  kal_uint8   M_AddrNum;
  kal_uint8   T_MCC[3];          /* MCC raw digits */
  kal_uint8   T_IMSI_11_12[2];   /* M_IMSI_11_12 raw digits */
  kal_uint8   T_IMSI_S[10];      /* M_IMSI_S raw digits */
  kal_uint8   T_IMSI_Class;
  kal_uint8   T_AddrNum;
  kal_uint8   Mdn[NAM_MAX_MDN_DIGITS];  /* MDN max 16 digits */
  kal_uint8   MDN_NUM_DIGITS;           /* MDN number digits */
  kal_uint8   ACCOLCp;           /* access overload class */
} PswReadRawIMSIRspT;

/* PSW_OOSA_WAKEUP_IND_MSG */
typedef struct
{
  OosaWakeupTypeT OosaWakeupType;
} PswOosaWakupIndMsgT;

typedef struct
{
  kal_bool result;    /* Verify result, True:pass, False: not pass */
} PswL1dSltTxVerifyIndMsgT;

#ifdef MTK_CBP_ENCRYPT_VOICE
typedef struct
{
   kal_bool isMoc ;
} PswKeyReqMsgT;

typedef struct
{
   kal_uint16 SeqNum;
} PswCancelCipherSmsSendReqT;

#endif

typedef struct
{
   kal_bool  result;   /* SLT verify RF result, KAL_TRUE:success, KAL_FALSE:fail */
} SltVerifyResultMsgT;

typedef struct
{
  CHANNEL_DESC  Sys;
  kal_bool      LastChannelInSRSL;
} PswCssSelectRspMsgT;

typedef enum
{
   CP_SYS_REJECTED,
   CP_SYS_ACCEPTED,
   CP_SYS_MCC_MNC_NEEDED
} PswCssValidationRsltT;

typedef enum
{
   CP_REG_NOT_ROAMING,
   CP_REG_NID_ROAMING,
   CP_REG_SID_ROAMING,
   CP_REG_UNKNOWN_ROAMING
} PswRegRoamStatus;

typedef struct
{
  PswCssValidationRsltT ValidationRslt;
  PswRegRoamStatus         RegRoamStatus;
} PswCssValidateRspMsgT;

typedef struct
{
   ExeRspMsgT     RspInfo;
} PswGetNamPrefereceMsgT;

typedef enum
{
   FORCESLEEP,
   ACQUISITION,
#ifdef MTK_DEV_C2K_IRAT
   ExitPs       /* Release 1x PS during C2L MPSR */
#endif
} CssForceInitReasonT;

typedef struct
{
   CssForceInitReasonT  reason;
} PswCssSysAcqReqMsgT;

typedef struct
{
   kal_uint16  duration;    /*in the unit of 100ms*/
} PswCssOosaSleepReqMsgT;

typedef struct
{
   kal_bool bActive;
} PswRlpActivityStatusReportMsgT;

/* PSW_CSS_SET_EMERGENCY_CALLBACK_MODE_MSG */
typedef struct
{
  kal_bool  isInCallBackMode;
} PswCssSetEmergencyCallbackModeMsgT;

typedef enum {
   PSW_SLOTTED_TST_MODE_VETO_FLAG  = 0x0001,  /* Test mode veto */
   PSW_SLOTTED_PE_SMS_VETO_FLAG    = 0x0002,  /* PE SMS: disabling slotted for paging SMS activity */
   PSW_SLOTTED_PE_SR_VETO_FLAG     = 0x0004,  /* PE Silent retry: disable slotted betwen retries */
   PSW_SLOTTED_PE_LOC_VETO_FLAG    = 0x0008,  /* PE LOC: Loc srv activity (AFLT, ...) */
   PSW_SLOTTED_LEC_VETO_FLAG       = 0x0010,  /* LEC: GPS activity (time sync, ...) */
   PSW_SLOTTED_L1D_VETO_FLAG       = 0x0020,  /* L1D: bad 32k slotted veto */
   PSW_SLOTTED_SPARE_VETO_FLAG10   = 0x0040,  /* Spare   */
   PSW_SLOTTED_SPARE_VETO_FLAG9    = 0x0080,  /* Spare   */
   PSW_SLOTTED_SPARE_VETO_FLAG8    = 0x0100,  /* Spare   */
   PSW_SLOTTED_SPARE_VETO_FLAG7    = 0x0200,  /* Spare   */
   PSW_SLOTTED_SPARE_VETO_FLAG6    = 0x0400,  /* Spare   */
   PSW_SLOTTED_SPARE_VETO_FLAG5    = 0x0800,  /* Spare   */
   PSW_SLOTTED_SPARE_VETO_FLAG4    = 0x1000,  /* Spare   */
   PSW_SLOTTED_SPARE_VETO_FLAG3    = 0x2000,  /* Spare   */
   PSW_SLOTTED_SPARE_VETO_FLAG2    = 0x4000,  /* Spare   */
   PSW_SLOTTED_SPARE_VETO_FLAG1    = 0x8000,  /* Spare   */
} PswSlottedVetoFlagT;

typedef struct
{
   PswSlottedVetoFlagT  flag;
   kal_bool                 vetoSlotted;
} PswSlottedVetoMsgT;

typedef struct
{
   ExeRspMsgT  RspInfo;         /* Response routing information */
   kal_uint8       SIP_PASSWORD[HLP_MAX_PSWD_LEN];
} PswSetSIPpasswordMsgT;

typedef struct
{
   ExeRspMsgT  RspInfo;         /* Response routing information */
} PswGetSIPpasswordMsgT;

typedef struct
{
   kal_bool        Valid;
   kal_uint8       Pswd[HLP_MAX_PSWD_LEN];
} PswGetSIPpasswordRspMsgT;


typedef struct
{
   ExeRspMsgT  RspInfo;         /* Response routing information */
} PswGetMIPkeysMsgT;

typedef struct
{
   kal_bool        Valid;
   kal_uint8       MN_AAA_PASSWORD[HLP_MN_PASSWD_MAX_SIZE]; /* MIP AAA Shared Secret*/
   kal_uint8       MN_HA_PASSWORD[HLP_MN_PASSWD_MAX_SIZE]; /* MIP HA Shared Secret  */
} PswGetMIPkeysRspMsgT;

typedef struct
{
   kal_uint32      SPC;
} PswSetSPCMsgT;

/* MSG_ID_PSW_VAL_SET_SO_SUPPORT_MSG */
typedef struct
{
   kal_uint16 ServiceOption;
   kal_bool   Supported;
} PswSetSoSupportMsgT;

/* Must match ETS ps_msg.txt enum
   IP Password Update Response.
 */
typedef enum
{
   SUCCESS_0,
   PS_NOT_POWERED_UP,
   DATA_SERVICES_NOT_SUPPORTED,
   MOBILE_IP_NOT_SUPPORTED,
   PREVIOUS_WRITE_NOT_FINISHED,
   DATA_OUT_OF_RANGE,
   CHECKSUM_MISMATCH,
   SECURITY_CODE_OR_SPC_MISMATCH
   ,UICC_UPDATE_PROHIBITED
} PswSetSecureDataRspCode;

typedef struct
{
   kal_bool        Result;
   PswSetSecureDataRspCode ResponseCode;
} PswSetSecureDataRspMsgT;

typedef struct
{
   ExeRspMsgT RspInfo;
} PswGetSpcMsgT;

typedef struct
{
   ExeRspMsgT RspInfo;
} PswGetSSDMsgT;

typedef struct
{
   kal_bool        Valid;
   kal_uint32     SPC;
} PswGetSpcRspMsgT;

typedef struct
{
   kal_bool        Valid;
   kal_uint8       SSD_A[8];
   kal_uint8       SSD_B[8];
} PswGetSSDRspMsgT;

typedef struct
{
   ExeRspMsgT RspInfo;
} PswGetCpBcToCdmaBcMsgT;

typedef struct
{
   kal_uint8 namIndex;
   kal_uint8 bandClass;
   kal_uint32 subBandMask;
   kal_uint8 calibTable;
} BandInfoT;

typedef struct
{
   kal_uint8 numBandsSupported;
   BandInfoT bandInfo[NAM_BANDS_SUPPORTED];
} PswGetCpBcToCdmaBcRspMsgT;

/* Set Lost Scan Ping Frequency message */
typedef struct
{
   kal_uint8 Geo_Scan_Ping_Frequency;
   kal_uint8 Non_Geo_Scan_Ping_Frequency;
} PswSetLostScanPingFrequencyMsgT;


typedef enum
{
 PSW_SET_MDN_SUCCESS,
 PSW_SET_MDN_FAIL_INVALID_CHARS,
 PSW_SET_MDN_FAIL_INVALID_NUM_DIGITS,
 PSW_SET_MDN_END_RESULT
}PswSetMdnResponse;

typedef enum
{
 PSW_SET_IMSI_SUCCESS,
 PSW_SET_IMSI_FAIL_INVALID_CHARS = 7,
 PSW_SET_IMSI_FAIL_INVALID_NUM_DIGITS = 13,
 PSW_SET_IMSI_FAIL_INVALID_MCC_CHARS = 14,
 PSW_SET_IMSI_FAIL_INVALID_IMSI_11_12_CHARS = 15,
 PSW_SET_IMSI_END_RESULT
}PswWriteRawImsiResponse;

typedef struct
{
   ExeRspMsgT   RspInfo;
   char    Mdn_Digits[NAM_MAX_MDN_DIGITS]; /* A NULL Terminated String */
} PswWriteRawMDNMsg;

typedef struct
{
  PswSetMdnResponse result;
} PswSetRawMDNRspMsg;

typedef struct
{
   kal_bool Mode;
} PswUiccFactoryModeMsgT;

typedef enum
{
  PSW_PARM_SET_ESN_MEID,                                 /* 0 */
  PSW_PARM_GET_ESN_MEID,                                 /* 1 */
  PSW_PARM_SET_SPC,                                      /* 2 */
  PSW_PARM_GET_SPC,                                      /* 3 */
  PSW_PARM_SET_AKEY,                                     /* 4 */
  PSW_PARM_GET_AKEY,                                     /* 5 */
  PSW_PARM_SET_MSID,                                     /* 6 */
  PSW_PARM_GET_MSID,                                     /* 7 */
  PSW_PARM_SET_PREV,                                     /* 8 */
  PSW_PARM_GET_PREV,                                     /* 9 */
  PSW_PARM_SET_POSITIVE_SID_NID_LIST,                    /* 10 */
  PSW_PARM_GET_POSITIVE_SID_NID_LIST,                    /* 11 */
  PSW_PARM_SET_NEGATIVE_SID_NID_LIST,                    /* 12 */
  PSW_PARM_GET_NEGATIVE_SID_NID_LIST,                    /* 13 */
  PSW_PARM_SET_PRI_SEC_CH,                               /* 14 */
  PSW_PARM_GET_PRI_SEC_CH,                               /* 15 */
  PSW_PARM_SET_SYSTEM_SELECT,                            /* 16 */
  PSW_PARM_GET_SYSTEM_SELECT,                            /* 17 */
  PSW_PARM_SET_SLOT_CYCLE_INDEX,                         /* 18 */
  PSW_PARM_GET_SLOT_CYCLE_INDEX,                         /* 19 */
  PSW_PARM_SET_MDN,                                      /* 20 */
  PSW_PARM_GET_MDN,                                      /* 21 */
  PSW_PARM_SET_PRL_ENABLE,                               /* 22 */
  PSW_PARM_GET_PRL_ENABLE,                               /* 23 */
  PSW_PARM_SET_HOME_SYS_REGISTRATION,                    /* 24 */
  PSW_PARM_GET_HOME_SYS_REGISTRATION,                    /* 25 */
  PSW_PARM_SET_FOREIGN_SID_REGISTRATION,                 /* 26 */
  PSW_PARM_GET_FOREIGN_SID_REGISTRATION,                 /* 27 */
  PSW_PARM_SET_FOREIGN_NID_REGISTRATION,                 /* 28 */
  PSW_PARM_GET_FOREIGN_NID_REGISTRATION,                 /* 29 */
  PSW_PARM_SET_ACCESS_OVERLOAD_CLASS,                    /* 30 */
  PSW_PARM_GET_ACCESS_OVERLOAD_CLASS,                    /* 31 */
  PSW_PARM_SET_CDMA_PREF_BAND,                           /* 32 */
  PSW_PARM_GET_CDMA_PREF_BAND,                           /* 33 */
  PSW_PARM_SET_CDMA_PREF_AorB,                           /* 34 */
  PSW_PARM_GET_CDMA_PREF_AorB,                           /* 35 */
  PSW_PARM_SET_SCM,                                      /* 36 */
  PSW_PARM_GET_SCM,                                      /* 37 */
  PSW_PARM_SET_PRL_INFO,                                 /* 38 */
  PSW_PARM_GET_PRL_INFO,                                 /* 39 */
  PSW_PARM_SET_OTAPA_ENABLE,                             /* 40 */
  PSW_PARM_GET_OTAPA_ENABLE,                             /* 41 */
  PSW_PARM_SET_OTA_POWERUP_MODE,                         /* 42 */
  PSW_PARM_GET_OTA_POWERUP_MODE,                         /* 43 */
  PSW_PARM_SET_IMSI_S1,                                  /* 44 */
  PSW_PARM_GET_IMSI_S1,                                  /* 45 */
  PSW_PARM_SET_IMSI_S2,                                  /* 46 */
  PSW_PARM_GET_IMSI_S2,                                  /* 47 */
  PSW_PARM_SET_SPC_CHANGE_ENABLE,                        /* 48 */
  PSW_PARM_GET_SPC_CHANGE_ENABLE,                        /* 49 */
  PSW_PARM_SET_SPASM_ENABLE,                             /* 50 */
  PSW_PARM_GET_SPASM_ENABLE,                             /* 51 */
  PSW_PARM_SET_SID_NID_LIST_SP,                          /* 52 */
  PSW_PARM_GET_SID_NID_LIST_SP,                          /* 53 */
  PSW_PARM_SET_DISTANCE_BASED_PARMS,                     /* 54 */
  PSW_PARM_GET_DISTANCE_BASED_PARMS,                     /* 55 */
  PSW_PARM_SET_ENCODED_MSID,                             /* 56 */
  PSW_PARM_GET_ENCODED_MSID,                             /* 57 */
  PSW_PARM_SET_ENABLE_OTA,                               /* 58 */
  PSW_PARM_GET_ENABLE_OTA,                               /* 59 */
  PSW_PARM_SET_PREF_HOME_MO_SO,                          /* 60 */
  PSW_PARM_GET_PREF_HOME_MO_SO,                          /* 61 */
  PSW_PARM_SET_PREF_ROAM_MO_SO,                          /* 62 */
  PSW_PARM_GET_PREF_ROAM_MO_SO,                          /* 63 */
  PSW_PARM_SET_PREF_HOME_MT_SO,                          /* 64 */
  PSW_PARM_GET_PREF_HOME_MT_SO,                          /* 65 */
  PSW_PARM_SET_UNUSED_1,                               /* 66 AVAILABLE for use */
  PSW_PARM_GET_UNUSED_1,                               /* 67 AVAILABLE for use */
  PSW_PARM_SET_A21_MS_SUBSCRIPTION_INFO,                 /* 68 */
  PSW_PARM_GET_A21_MS_SUBSCRIPTION_INFO,                 /* 69 */
  PSW_PARM_GET_SLOTTED_MODE_ALLOWED_OBSOLETE,            /* 70 */
  PSW_PARM_SET_VOICE_SERVICE_ALLOWED,                    /* 71 */
  PSW_PARM_GET_VOICE_SERVICE_ALLOWED,                    /* 72 */
  PSW_PARM_SET_ROAM_SETTING_DOMESTIC_VOICE,              /* 73 */
  PSW_PARM_GET_ROAM_SETTING_DOMESTIC_VOICE,              /* 74 */
  PSW_PARM_SET_ROAM_SETTING_DOMESTIC_DATA,               /* 75 */
  PSW_PARM_GET_ROAM_SETTING_DOMESTIC_DATA,               /* 76 */
  PSW_PARM_SET_ROAM_SETTING_INTERNATIONAL_VOICE,         /* 77 */
  PSW_PARM_GET_ROAM_SETTING_INTERNATIONAL_VOICE,         /* 78 */
  PSW_PARM_SET_ROAM_SETTING_INTERNATIONAL_DATA,          /* 79 */
  PSW_PARM_GET_ROAM_SETTING_INTERNATIONAL_DATA,          /* 80 */
  PSW_PARM_SET_DDTM_MODE_ENABLED,                        /* 81 */
  PSW_PARM_GET_DDTM_MODE_ENABLED,                        /* 82 */
  PSW_PARM_SET_SO_SUPPORT,                               /* 83 */
  PSW_PARM_GET_SO_SUPPORT,                               /* 84 */
  PSW_PARM_SET_SLOTTED_MODE_ALLOWED = 85, /* for ETS compatibility with platform not having 71 to 84 in ETS definitions */
  PSW_PARM_GET_SLOTTED_MODE_ALLOWED,
  PSW_PARM_SET_SIM_QPCH_ENABLED,
  PSW_PARM_GET_SIM_QPCH_ENABLED,
  PSW_PARM_SET_DIV_SUPPORT,
  PSW_PARM_GET_DIV_SUPPORT,
  PSW_PARM_SET_QPCH_ENABLE_DYNAMIC_CTRL,
  PSW_PARM_GET_QPCH_ENABLE_DYNAMIC_CTRL,
  PSW_PARM_SET_QPCH_CCI_ENABLED,
  PSW_PARM_GET_QPCH_CCI_ENABLED,
  PSW_PARM_SET_1XADV_ENABLED,
  PSW_PARM_GET_1XADV_ENABLED,
  PSW_PARM_SET_SO73_CONTROL,
  PSW_PARM_GET_SO73_CONTROL,
  PSW_PARM_SET_DFS_ECIO_THRESH,
  PSW_PARM_GET_DFS_ECIO_THRESH,
  PSW_PARM_SET_IC_MODE,
  PSW_PARM_GET_IC_MODE,
  PSW_PARM_VALAT_SET_PRL_ENABLE,
  PSW_PARM_VALAT_GET_PRL_ENABLE,
#ifdef MTK_CBP
  PSW_PARM_SET_ROAM_SETTING_BITMAP,          /* bitmap of all roaming setting */
  PSW_PARM_GET_ROAM_SETTING_BITMAP,          /* bitmap of all roaming setting */
#endif

/* IMPORTANT:
   when adding new parameters to the list, add BOTH SET and GET,
   even if one of them is not used/implemented */
  PSW_PARM_OPERATION_ID_END_LIST
} PswParmOperationId;

typedef enum
{
 PSW_PARM_OPERATION_SUCCESS,
 PSW_PARM_OPERATION_FAIL_READ_NOT_ALLOWED,
 PSW_PARM_OPERATION_FAIL_WRITE_NOT_ALLOWED,
 PSW_PARM_OPERATION_NOT_ALLOWED_IN_PS_STATE,
 PSW_PARM_OPERATION_FAIL_INVALID_PTR,
 PSW_PARM_OPERATION_FAIL_INVALID_LENGTH,
 PSW_PARM_OPERATION_FAIL_INVALID_AKEY_CHECKSUM,
 PSW_PARM_OPERATION_FAIL_SET_MSID_INVALID_CHARS,
 PSW_PARM_OPERATION_FAIL_INVALID_CHANNEL,
 PSW_PARM_OPERATION_GENERAL_FAILURE,
 PSW_PARM_OPERATION_FAIL_SET_MDN_INVALID_CHARS,
 PSW_PARM_OPERATION_FAIL_SET_MDN_INVALID_NUM_DIGITS,
 PSW_PARM_OPERATION_NO_CHANGE_IN_VALUE,
 PSW_PARM_OPERATION_FAIL_VALUE_OUT_OF_RANGE,
 PSW_PARM_OPERATION_FAIL_SET_MSID_INVALID_NUM_DIGITS,
 PSW_PARM_OPERATION_FAIL_SET_MSID_INVALID_MCC_CHARS,
 PSW_PARM_OPERATION_FAIL_SET_MSID_INVALID_IMSI_11_12_CHARS,
 PSW_PARM_OPERATION_FAIL_PRL_INVALID,
 PSW_PARM_OPERATION_FAIL_IMSI_DIGITS_OUT_OF_RANGE,
 PSW_PARM_OPERATION_FAIL_OP_TYPE_NOT_SUPPORTED,
 PSW_PARM_OPERATION_FAIL_DEFAULT_NOT_DEFINED,
 PSW_PARM_OPERATION_FAIL_DEFAULT_NOT_SUPPORTED_FOR_PARM,
 PSW_PARM_OPERATION_FAIL_SERVICE_OPTION_NOT_SUPPORTED,
 PSW_PARM_OPERATION_FAIL_UICC_WRITE_ERROR,
 PSW_PARM_OPERATION_FAIL_UICC_PARM_NOT_UPDATEABLE,
 PSW_PARM_OPERATION_RESULT_END_LIST
}PswParmAccessResultCode;

typedef enum
{
  UPDATE_MSID_IMSI_M,
  UPDATE_MSID_IMSI_T,
  UPDATE_MSID_LIST_END
} PswMsidFieldToUpdate;

typedef enum
{
  PSW_PARM_ESN,
  PSW_PARM_MEID,
  PSW_PARM_SPC,
  PSW_PARM_POS_SID_NID_LIST,
  PSW_PARM_NEG_SID_NID_LIST,
  PSW_PARM_SYSTEM_SELECT,
  PSW_PARM_PRI_SEC_CH,
  PSW_PARM_AKEY,
  PSW_PARM_MSID,
  PSW_PARM_ID_END
} PswParmID;

typedef enum
{
  PSW_PARM_MIN_VALUE,
  PSW_PARM_MAX_VALUE,
  PSW_PARM_DEFAULT_VALUE,
  PSW_PARM_CUSTOM_VALUE,
  PSW_PARM_OP_TYPE_LIST_END
} PswParmOperationType;

typedef struct
{
  kal_uint64 meid;
  kal_uint32 esn;
  kal_uint64 akey;
  MobileIDType type;
} PswEsnMeid_APIStruct;

typedef struct
{
  kal_uint64 Akey;
  kal_uint32 checkSum;
} PswAkey_APIStruct;

typedef struct
{
  kal_uint8 PRev;
} PswPRev_APIStruct;

typedef struct
{
  kal_uint8 SCM[NAM_BANDS_SUPPORTED];
} PswSCM_APIStruct;

typedef struct
{
  kal_uint16 SID[MAX_POSITIVE_SIDS];
  kal_uint16 NID[MAX_POSITIVE_SIDS];
  kal_uint32 max_count_in_List;
} PswSIDNIDList_APIStruct;

typedef struct
{
  kal_uint32 SPC;
} PswSPC_APIStruct;

typedef struct
{
  SystemSelectType systemSelect;
} PswSysSelect_APIStruct;

typedef struct
{
  kal_bool setA;
  kal_uint16 CPC_A;
  kal_uint16 CSC_A;
  kal_bool setB;
  kal_uint16 CPC_B;
  kal_uint16 CSC_B;
} PswPriSecCh_APIStruct;

typedef struct
{
   PswMsidFieldToUpdate UpdateField;
   char    Imsi_Digits[MAX_IMSI_S_DIGITS]; /* A NULL Terminated String */
   kal_uint8   UpdateIMSI_11_12;
   char    IMSI_11_12[MAX_MNC_DIGITS];     /* A NULL Terminated String */
   kal_uint8   UpdateMCC;
   char    MCC[MAX_MCC_DIGITS];            /* A NULL Terminated String */
   kal_uint8   overwrite_mdn_with_imsi_s;
} PswSetRawMSID_APIStruct;

typedef struct
{
   PswMsidFieldToUpdate UpdateField;
   char    Imsi_Digits[MAX_IMSI_S1_DIGITS]; /* A NULL Terminated String */
} PswSetIMSIS1_APIStruct;

typedef struct
{
   PswMsidFieldToUpdate UpdateField;
   char    Imsi_Digits[MAX_IMSI_S2_DIGITS]; /* A NULL Terminated String */
} PswSetIMSIS2_APIStruct;

typedef struct
{
   PswMsidFieldToUpdate Field;
} PswGetIMSIS12_APIStruct;

typedef struct
{
   PswMsidFieldToUpdate Field;
   kal_uint8    Imsi_Digits[MAX_IMSI_S1_DIGITS]; /* A NULL Terminated String */
} PswGetIMSIS1Rsp_APIStruct;

typedef struct
{
   PswMsidFieldToUpdate Field;
   kal_uint8    Imsi_Digits[MAX_IMSI_S2_DIGITS]; /* A NULL Terminated String */
} PswGetIMSIS2Rsp_APIStruct;

typedef struct
{
  kal_uint8 PrefMode;
} PswPrefMode_APIStruct;

typedef struct
{
   ExeRspMsgT   RspInfo;
   PswSetRawMSID_APIStruct RawImsi;
} PswWriteRawIMSIMsgT;

typedef struct
{
  PswWriteRawImsiResponse result;
} PswSetRawIMSIRspMsg;

typedef struct
{
   kal_uint8   ValidIMSImap;      /* bit0: IMSI_M, bit1:IMSI_T */
   kal_uint8   M_MCC[3];          /* MCC raw digits */
   kal_uint8   M_IMSI_11_12[2];   /* M_IMSI_11_12 raw digits */
   kal_uint8   M_IMSI_S[10];      /* M_IMSI_S raw digits */
   kal_uint8   M_IMSI_Class;
   kal_uint8   M_AddrNum;
   kal_uint8   T_MCC[3];          /* MCC raw digits */
   kal_uint8   T_IMSI_11_12[2];   /* M_IMSI_11_12 raw digits */
   kal_uint8   T_IMSI_S[10];      /* M_IMSI_S raw digits */
   kal_uint8   T_IMSI_Class;
   kal_uint8   T_AddrNum;
   kal_uint8   Mdn[NAM_MAX_MDN_DIGITS];  /* MDN max 16 digits */
   kal_uint8   MDN_NUM_DIGITS;           /* MDN number digits */
   kal_uint8   ACCOLCp;           /* access overload class */
} PswGetRawMSID_APIStruct;

typedef struct
{
   PswMsidFieldToUpdate Field;
} PswGetEncodedMSIDMsg_APIStruct;

typedef struct
{
    PswMsidFieldToUpdate Field;  /*IMSI_M or IMSI_T*/
    kal_uint16 mcc;                  /* Mobile Country Code                */
    kal_uint8  imsi_11_12;           /* 7 bit  IMSI_11_12                  */
    kal_uint16 imsi_s2;              /* 10 bit IMSI_S2 value               */
    kal_uint32 imsi_s1;              /* 24 bit IMSI_S1 value               */
    kal_uint8  imsiClass;            /* CP_IMSI_CLASS_0/1 indication       */
    kal_uint8  addrNum;              /* number of digits in NMSI - 4       */
} PswGetEncodedMSIDRsp_APIStruct;

typedef struct
{
    PswMsidFieldToUpdate Field;  /*IMSI_M or IMSI_T*/
    kal_bool   updateMcc;
	kal_uint16 mcc;                  /* Mobile Country Code                */
    kal_bool   updateImsi_11_12;
    kal_uint8  imsi_11_12;           /* 7 bit  IMSI_11_12                  */
    kal_bool   updateImsi_s2;
    kal_uint16 imsi_s2;              /* 10 bit IMSI_S2 value               */
    kal_bool   updateImsi_s1;
    kal_uint32 imsi_s1;              /* 24 bit IMSI_S1 value               */
    kal_bool   updateImsiClass;
    kal_uint8  imsiClass;            /* CP_IMSI_CLASS_0/1 indication       */
    kal_bool   updateAddrNum;
    kal_uint8  addrNum;              /* number of digits in NMSI - 4       */
} PswSetEncodedMSID_APIStruct;


typedef struct
{
  kal_uint8 Slot_Cycle_Index;
} PswSlotCycleIndex_APIStruct;

typedef struct
{
  char Mdn_Digits[NAM_MAX_MDN_DIGITS]; /* A NULL Terminated String - Max length
                                          of 16 */
} PswRawMdn_APIStruct;

typedef struct
{
  kal_bool Prl_Enable;
} PswPrlEnable_APIStruct;

typedef struct
{
  kal_bool Home_System_Registration;
} PswHomeSysReg_APIStruct;

typedef struct
{
  kal_bool Foreign_Sid_Registration;
} PswForeignSidReg_APIStruct;

typedef struct
{
  kal_bool Foreign_Nid_Registration;
} PswForeignNidReg_APIStruct;

typedef struct
{
  kal_uint8 Accolc;
} PswAccolc_APIStruct;

typedef enum
{
  ENG_PREF_SYS_A,
  ENG_PREF_SYS_B,
  ENG_PREF_SYS_A_ONLY,
  ENG_PREF_SYS_B_ONLY,
  CDMA_PREF_AorB_END
} PswCdmaPrefAorB;

typedef struct
{
  PswCdmaPrefAorB CDMAAorB;
} PswPrefCDMA_AorB_APIStruct;

typedef enum
{
  ENG_PREF_BAND_0,
  ENG_PREF_BAND_1,
  ENG_PREF_BAND_0_ONLY,
  ENG_PREF_BAND_1_ONLY,
  ENG_PREF_BAND_2_ONLY,
  ENG_PREF_BAND_3_ONLY,
  ENG_PREF_BAND_4_ONLY,
  ENG_PREF_BAND_5_ONLY,
  ENG_PREF_BAND_6_ONLY,
  ENG_PREF_BAND_7_ONLY,
  ENG_PREF_BAND_8_ONLY,
  ENG_PREF_BAND_9_ONLY,
  ENG_PREF_BAND_10_ONLY,
  ENG_PREF_BAND_11_ONLY,
  ENG_PREF_BAND_12_ONLY,
  ENG_PREF_BAND_13_ONLY,
  ENG_PREF_BAND_14_ONLY,
  ENG_PREF_BAND_15_ONLY,
  ENG_PREF_BAND_16_ONLY,
  ENG_NO_PREF_BAND=255,
  CDMA_PREF_BAND_END
} PswCdmaPrefBand;

typedef struct
{
  PswCdmaPrefBand prefBand;
} PswPrefCDMA_Band_APIStruct;

typedef struct
{
  kal_bool   pref_only;
  kal_uint16 prlId;
  kal_uint8  prl_prev;
  kal_uint8  defaultRoamInd;
} PswPrlInfo_APIStruct;

typedef struct
{
  kal_bool OTAPAEnable;
} PswOTAPAEnable_APIStruct;

typedef struct
{
  kal_bool SPCChangeEnable;
} PswSPCChangeEnable_APIStruct;

typedef struct
{
  kal_bool SPASMEnable;
} PswSPASMEnable_APIStruct;

typedef struct
{
  kal_bool EnableOTA;
}PswEnableOTA_APIStruct;

typedef struct
{
  kal_uint8 Mode; /* See enum OtaCompletePowerupModeType */
} PswOTAPowerupMode_APIStruct;

typedef struct
{
  kal_int32 BASE_LAT_REGsp;
  kal_int32 BASE_LONG_REGsp;
  kal_uint16 REG_DIST_REGsp;
} PswDistanceBasedParms_APIStruct;

typedef struct
{
  kal_bool ValidSidNidEntry;
  kal_uint16    sid;          /* system id                   */
  kal_uint16    nid;          /* network id                  */
  kal_uint16    ageTimer;     /* age limit in seconds        */
  kal_bool      timerEnabled;
  kal_uint8     block;        /* PCS block or serving system */
  SysCdmaBandT bandClass;
} PswSidNidListsp_APIStruct;


typedef struct
{
  kal_uint8 Len;
  kal_uint8 A21MsSubscriptionInfo[PSW_MAX_A21_MS_SUBS_INFO_LEN];
} PswA21MsSubscriptionInfo_APIStruct;

typedef struct
{
  kal_bool RoamingSetting;
} PswRoamingSetting_APIStruct;

typedef struct
{
  /*
    *   ROAM_SETTING_DOMESTIC_VOICE 0x01  Sprint Allow voice roaming on domestic system
    *   ROAM_SETTING_DOMESTIC_DATA  0x02  Sprint Allow data roaming on domestic system
    *   ROAM_SETTING_INT_VOICE      0x04  Sprint Allow voice romaing on international system
    *   ROAM_SETTING_INT_DATA       0x08  Sprint Allow data roaming on international system
    *   ROAM_SETTING_LTE_DATA       0x10  Sprint Allow LTE data roaming, not used in C2K saved only for AP get */
  kal_uint8 RoamingSettingBitMap;
} PswRoamingSettingBitMap_APIStruct;

typedef struct
{
  kal_uint16 ServiceOption;
  kal_bool   Supported;
} PswSOSupport_APIStruct;

typedef struct
{
  kal_uint16 ServiceOption;
} PswGetSOSupport_APIStruct;

typedef enum
{
   DIV_OFF,
   DIV_ON_DYNAMIC,
   DIV_UNDEFINED,
   DIV_ON_STATIC
}PswPhyDiversityModeT; /* must map into DSPM API IC Mode */

typedef struct
{
  PswPhyDiversityModeT   EnabledDiv;
} PswDivSupport_APIStruct;

typedef struct
{
  kal_bool SO73Enabled;
  kal_bool SO73WBEnabled;
} PswSO73Control_APIStruct;

typedef struct
{
  kal_bool   Cdma1xAdvEnabled;
} Psw1xAdvEnabled_APIStruct;

typedef struct
{
  kal_uint8 Strength;
} PswDfsEcIoThresh_APIStruct;

typedef enum
{
   IC_NORMAL,
   IC_DBG_SRCH_DLY,
   IC_DBG_IC_DLY,
   IC_DBG_BYPASS,
   IC_OFF = 0xF
}PswPhyICModeT; /* must map into DSPM API IC Mode */

typedef struct
{
  PswPhyICModeT  ICMode;
} PswPhyICMode_APIStruct;
typedef enum
{
   MS_MODE_UNKNOWN,
   MSA,
   MSB,
   MSS,
   /*ControlPlane=4 is changed to ControlPlne=8, for klocwork warning,corresponding to ValGpsFixModeT*/
   ControlPlane=8,
   SUPL_MSA,
   SUPL_MSB,
}GPS_FIX_MODE;

typedef struct
{
    kal_uint32  InstanceID;
    GPS_FIX_MODE FixMode;
    kal_uint32  NumFixes;
    kal_uint32  TimeBFixes;
    kal_uint32  HorizontalAccuracy;
    kal_uint32  VerticalAccuracy;
    kal_uint32  PseudorangeAccuracy;
    kal_bool    OnCTNtwk;
#ifdef MTK_DEV_GPSONE_ON_LTE
    kal_int32   RatMode;
#endif
    kal_uint32  Performance;
    kal_uint8   GpsMode;
    kal_uint8   flag_gps;    //0--AP, 1--3rd,  2--others
} PswIs801SessionStartMsgT;

typedef struct
{
   kal_uint32 InstanceID;
   kal_uint8     flag_gps;    //0--AP, 1--3rd,  2--others
}PswIs801SessCancelReqMsgT;

typedef struct
{
   kal_uint32 Index;
}PswIs801TimerExpMsgT;

typedef struct
{
   kal_bool Success;
}PswIs801TcpConnStatusMsgT;

typedef struct
{
   kal_uint32 EphSysTime;
   kal_uint32 AlmSysTime;
   kal_uint32 EphTimeInterval;
   kal_uint32 AlmTimeInterval;
}PswIs801EphAlmSystimeMsgT;

typedef struct
{
   kal_uint32 InstanceID;
}PswIs801MssDoneMsgT;

typedef struct
{
   kal_uint8 enable;
}PswIs801NmeaOutputSettingMsgT;

typedef struct
{
   kal_uint8 Conn;
   kal_uint32 InstID;
}PswIs801MpcConnStatusMsgT;

typedef struct
{
   kal_uint8 CustomerId;
}PswIs801CustomerSettingMsgT;

typedef struct
{
   kal_uint16 refPn;
   kal_uint32 refTime;
   kal_uint16 timeOffset;
}PswLecSessionEndRspMsgT;

typedef struct
{
   kal_uint16 PrefHomeMOServiceOption;
}PswPrefHomeMOSO_APIStruct;

typedef struct
{
   kal_uint16 PrefRoamMOServiceOption;
}PswPrefRoamMOSO_APIStruct;

typedef struct
{
   kal_uint16 PrefHomeMTServiceOption;
}PswPrefHomeMTSO_APIStruct;


typedef struct
{
   kal_bool isVoiceServiceAllowed;
} PswVoiceMode_APIStruct;

typedef struct
{
   kal_bool isDdtmEnabled;
} PswDdtmEnable_APIStruct;

typedef struct
{
   kal_bool Enabled;
} PswFeatureEnabled_APIStruct;

typedef struct
{
   kal_bool   Enabled;
   kal_uint16 ThreshLow;
   kal_uint16 ThreshHigh;
} PswQpchEnableDynamicCtrl_APIStruct;

#ifdef FIELD_TEST_DATA

typedef struct
{
  kal_uint16  SchMux;
  kal_uint8   SchRc;
  kal_uint8   SchStatus;
  kal_uint16  SchDuration;
  kal_uint8   SchRate;
} PswSchCcT;

typedef struct
{
  kal_uint8       cpState;          /*CP state*/
  kal_uint16      channel;          /* Current channel number */
  kal_uint16      bandClass;        /* Current band class  */
  kal_uint16      pilotPNOffset;    /* Pilot PN offset  */
  kal_uint8       pageChannel;      /* Current page channel Walsh code*/
  kal_uint8       pageChanRate;     /*page channel rate, 0 is full rate(9600), 1 is half rate(4800)*/
  kal_uint8       block;             /* Current CDMA block */
  kal_uint16      sid;                /* System ID */
  kal_uint16      nid;                /* Network ID */
  kal_uint8       SysDetIndication; /* Reason for entering System Determination */
  kal_uint8       roam;              /* Roam status */
  kal_uint16      baseId;            /* Base station ID */
  kal_uint16      regZone;           /* registration zone  */
  kal_uint32      baseLat;           /* latitude from base last registered on    */
  kal_uint32      baseLong;          /* longitude from base last registered on   */
  kal_uint8       P_REV;             /* Protocol Revision Level (from Sync Channel Message)*/
  kal_uint8       MIN_P_REV;         /* Minimum protocol revision required by MS (from Sync Channel Message)*/
  kal_uint8       networkPrefSCI;   /* max slot cycle index value */
  kal_bool        slotMode;          /* slotted Mode (Enabled Or Disable) */
  kal_bool        qpchMode;          /* qpch Mode (Enabled Or Disable) */
  kal_uint16      mcc;               /* Mobile Country Code (from extended system parameter message)*/
  kal_uint8       imsi_11_12;        /* Mobile Network Code (from extended system parameter message)*/
  kal_uint8       SSPR_P_REV_INUSE;  /* Current PRL Protocol Revision */

  kal_uint8       currentPacketZoneID; /* Current packet zone ID */
  kal_uint16      serviceOption;    /* Current Service Option */
  PswSchCcT   forSch0Cc;        /* Channel configuration of forward supplement channel */
  PswSchCcT   revSch0Cc;        /* channel configuration of reverse supplement channel */

  kal_int16       rxPower;          /* Rx power */
  kal_int16       txPower;          /* Tx power */
  kal_uint16      pilotPN[SYS_CP_MAX_ACTIVE_LIST_PILOTS];   /* Pilot PN of the list in active set */
  kal_uint16      pilotEcIo[SYS_CP_MAX_ACTIVE_LIST_PILOTS]; /* Pilot Ec/Io of the list in active set */
  kal_uint16      pilotPhase[SYS_CP_MAX_ACTIVE_LIST_PILOTS]; /* Pilot phase of the list in active set*/
  kal_uint8       numInActiveSet;  /* Number of records in active set */
  kal_uint16      candPilotPN[SYS_CP_MAX_CANDIDATE_LIST_PILOTS];   /* Pilot PN of the list in candidate set */
  kal_uint16      candPilotEcIo[SYS_CP_MAX_CANDIDATE_LIST_PILOTS]; /* Pilot Ec/Io of the list in candidate set */
  kal_uint16      candPilotPhase[SYS_CP_MAX_CANDIDATE_LIST_PILOTS]; /* Pilot phase of the list in candidate set*/
  kal_uint8       numInCandSet;  /* Number of records in candidate set */
  kal_uint16      nghbrPilotPN[SYS_CP_MAX_NEIGHBOR_LIST_PILOTS];   /* Pilot PN of the list in neighbor set */
  kal_uint16      nghbrPilotEcIo[SYS_CP_MAX_NEIGHBOR_LIST_PILOTS]; /* Pilot Ec/Io of the list in neighbor set */
  kal_uint16      nghbrPilotPhase[SYS_CP_MAX_NEIGHBOR_LIST_PILOTS]; /* Pilot phase of the list in neighbor set*/
  kal_uint8       numInNghbrSet;  /* Number of records in neighbor set */
  kal_uint16      FER;                      /* Frame Error Rate per thousand */
  kal_uint16      TxAdj;              /* Adjust gain of the Tx power */

  kal_uint32      total_msg;        /* Number of paging ch messages received  */
  kal_uint32      error_msg;        /* Number of paging ch messages with bad crc  */
  kal_uint16      acc_1;             /* number of layer 3 requests messages generated */
  kal_uint16      acc_2;             /* number of layer 3 response messages generated */
  kal_uint16      acc_8;             /* number of unsuccessful access attempts        */

  kal_uint16      dpchLoss_count;         /* Count of paging ch declared    */
  kal_uint16      dtchLoss_count;         /* Count of dedicated traffic CH Loss*/
  kal_uint32      idleHO_count;           /* Count of idle handoff*/
  kal_uint16      hardHO_count;           /* Count of hard handoff*/
  kal_uint16      interFreqIdleHO_count; /* Count of inter_Freq idle handoff*/
  kal_uint16      MO_count;             /* Count of successful MS ORIGINATED      */
  kal_uint16      MT_count;             /* Count of successful MS TERMINATED      */
  kal_uint16      powerDownReg_count;  /* Count of power down registration      */
  kal_uint16      timeBasedReg_count;  /* Count of time based registration       */
  kal_uint16      parameterReg_count;  /* Count of parameter change registration   */
  kal_uint16      powerUpReg_count;    /* Count of power up registration    */
  kal_uint16      orderedReg_count;    /* Count of ordered registration     */
  kal_uint16      zoneBasedReg_count;  /* Count of zone based registration */
  kal_uint16      distanceBasedReg_count; /* Count of distance based registration */
  kal_uint16      silentryRetryTimeout_count; /* Count of silentry retry timeout */
  kal_uint16      T40_count;  /* Count of T40m timeout */
  kal_uint16      T41_count;  /* Count of T41m timeout */
  kal_uint16      T50_count;  /* Count of T50m timeout */
  kal_uint16      T51_count;  /* Count of T51m timeout */
  kal_uint16      T52_count;  /* Count of T52m timeout */
  kal_uint16      T55_count;  /* Count of T55m timeout */

  kal_uint16      T_ADD;
  kal_uint16      T_DROP;
  kal_uint16      T_COMP;
  kal_uint16      T_tDROP;
 }PswFTDParaT;
#endif

#ifdef MTK_DEV_ENGINEER_MODE
/* This structure is defined for Engineer mode developement, all items in it is 1xEV-DO related and needs to be reported to AP.*/
typedef struct
{
  kal_uint8       bandClass;  /* 1xEV-DO current band class. */
  kal_uint16      channel;  /* 1xEV-DO current channel number. */
  kal_uint16      pilotPN;  /* 1xEV-DO  pilot PN. */
  kal_uint8       phySubtype;  /* 1xEV-DO phy subtype. */
  double      rssi_dbm;  /* 1xEV-DO RSSI_dbm.  */
  kal_uint8       sectorID[16];  /* 1xEV-DO Sector ID. */
  kal_uint8       subnetMask;  /* 1xEV-DO subnetmask. */
  kal_uint8       colorCode;  /* 1xEV-DO color Code. */
  kal_uint8       uati[16];  /* 1xEV-DO UATI 024. */
  kal_uint8       pilotInc;  /* 1xEV-DO pilotInc. */
  kal_uint8       activeSetSchWin;  /* 1xEV-DO activeSet Search Window. */
  kal_uint8       neighborSetSchWin;  /* 1xEV-DO neighborSet Search Window. */
  kal_uint8       remainSetSchWin;  /* 1xEV-DO remainSet Search Window. */
  kal_uint8       sameFreq_T_ADD;  /* 1xEV-DO T_ADD with same channel. */
  kal_uint8       sameFreq_T_DROP;  /* 1xEV-DO T_DROP with same channel. */
  kal_uint8       sameFreq_T_tDROP;  /* 1xEV-DO T_tDROP with same channel. */
  kal_uint8       diffFreq_T_ADD;  /* 1xEV-DO T_ADD with different channel. */
  kal_uint8       diffFreq_T_DROP;  /* 1xEV-DO T_DROP with different channel. */
  kal_uint8       diffFreq_T_tDROP;  /* 1xEV-DO T_tDROP with different channel. */

  kal_uint8       numInActiveSet;  /* 1xEV-DO active set number. */
  kal_uint16      activePilotPN[SYS_CP_MAX_ACTIVE_LIST_PILOTS];  /* 1xEV-DO activePilotPN. */
  kal_int16       activePilotEcIo[SYS_CP_MAX_ACTIVE_LIST_PILOTS];  /* 1xEV-DO activePilotEcIo. */
  kal_uint8       activeDrcCover[SYS_CP_MAX_ACTIVE_LIST_PILOTS];  /* 1xEV-DO activeDrcCover. */

  kal_uint8       numInCandSet;  /* 1xEV-DO candidate set number. */
  kal_uint8       candBand[SYS_CP_MAX_CANDIDATE_LIST_PILOTS];  /* 1xEV-DO band of candidate set.  */
  kal_uint16      candChannel[SYS_CP_MAX_CANDIDATE_LIST_PILOTS];  /* 1xEV-DO channel of candidate set. */
  kal_uint16      candPilotPN[SYS_CP_MAX_CANDIDATE_LIST_PILOTS];  /* 1xEV-DO pilotPN of candidate set. */
  kal_int16       candPilotEcIo[SYS_CP_MAX_CANDIDATE_LIST_PILOTS];  /* 1xEV-DO pilotEcIo of candidate set. */

  kal_uint8       numInNghbrSet;  /* 1xEV-DO neighbor set numer.  */
  kal_uint8       nghbrBand[SYS_MAX_NEIGHBOR_LIST_PILOTS];  /* 1xEV-DO band of neighbor set. */
  kal_uint16      nghbrChannel[SYS_MAX_NEIGHBOR_LIST_PILOTS];  /* 1xEV-DO channel of neighbor set. */
  kal_uint16      nghbrPilotPN[SYS_MAX_NEIGHBOR_LIST_PILOTS];  /* 1xEV-DO pilotPN of neighbor set. */
  kal_int16       nghbrPilotEcIo[SYS_MAX_NEIGHBOR_LIST_PILOTS];  /* 1xEV-DO pilotEcIo of neighbor set. */

  kal_int32       c_i;  /* 1xEV-DO C/I.  */
  kal_uint8       drcAverageValue;  /* 1xEV-DO drcAverageValue. */
  kal_uint32      ftcCrcErrorCount;  /* 1xEV-DO ftcCrcErrorCount. */
  kal_uint32      ftcTotalCount;  /* 1xEV-DO ftcTotalCount. */
  kal_uint8       syncCrcErrorRatio;  /* 1xEV-DO syncCrcErrorRatio. */

  kal_uint16      averageTbsize;  /* 1xEV-DO averageTbsize. */
  kal_uint32      rtcRetransmitCount;  /* 1xEV-DO rtcRetransmitCount. */
  kal_uint32      rtcTransmitTotalCount;  /* 1xEV-DO rtcTransmitTotalCount. */
  kal_int16       txPower;  /* 1xEV-DO txPower.*/
  kal_int16       pilotPower;  /* 1xEV-DO pilotPower. */
  kal_uint8       rab_1_ratio;  /* 1xEV-DO rab_1_ratio. */

  kal_uint8       sessionState;  /* 1xEV-DO Session state. */
  kal_uint8       atState;  /* 1xEV-DO AT state. */
  kal_uint8       almpState;  /* 1xEV-DO ALMP state. */
  kal_uint8       inspState;  /* 1xEV-DO INSP state. */
  kal_uint8       idpState;  /* 1xEV-DO IDP state. */
  kal_uint8       ompState;  /* 1xEV-DO OMP state. */
  kal_uint8       cspState;  /* 1xEV-DO CSP state. */
  kal_uint8       rupState;  /* 1xEV-DO RUP state. */
}PswFTDDoParaT;
#endif

MobileIDType ValGetMobileIdType(void);
/**********MS-Based*********************/
typedef struct _GPS_POSITION_ERROR {
kal_uint32	dwHorizontalErrorAlong;
kal_uint32 dwHorizontalErrorAngle;
kal_uint32 dwHorizontalErrorPerp;
kal_uint32 dwVerticalError;
kal_uint32 dwHorizontalConfidence;
} GPS_POSITION_ERROR,*PGPS_POSITION_ERROR;

typedef enum
{
	GPS_FIX_INVALID,
	GPS_FIX_NORMAL,
GPS_FIX_DIEF
} GPS_FIX_QUALITY;



typedef enum
{
   GPS_FIX_NONE,
   GPS_FIX_ESTIMATED,
   GPS_FIX_2D,
   GPS_FIX_DIFF_2D,
   GPS_FIX_3D,
   GPS_FIX_DIFF_3D

}  GPS_FIX_TYPE;


typedef enum
{
	GPS_FIX_3D_AUTO,
	GPS_FIX_2D_MANU
}GPS_FIX_SELECTION;


typedef  struct GPS_Nav_Data_Struct   /*GN GPS Navigation solution data*/
{
   kal_uint32 Local_TTag;             /* Local receiver time-tag since start-up [msec]*/
   kal_uint32 OS_Time_ms;             /* Local Operating System Time [msec]*/
   kal_uint16 Year;                   /* UTC Year A.D.                     [eg 2006]*/
   kal_uint16 Month;                  /* UTC Month into the year           [range 1..12]*/
   kal_uint16 Day;                    /* UTC Days into the month           [range 1..31]*/
   kal_uint16 Hours;                  /* UTC Hours into the day            [range 0..23]*/
   kal_uint16 Minutes;                /* UTC Minutes into the hour         [range 0..59]*/
   kal_uint16 Seconds;                /* UTC Seconds into the hour         [range 0..59]*/
   kal_uint16 Milliseconds;           /* UTC Milliseconds into the second  [range 0..999]*/
   signed short Gps_WeekNo;             /* GPS Week Number*/
#if !(defined(MTK_PLT_ON_PC) && defined(MTK_PLT_ON_PC_UT))
   double Gps_TOW;                /* Corrected GPS Time of Week [seconds]*/
   double UTC_Correction;         /* Current (GPS-UTC) time difference [seconds]*/
   double X;                      /* WGS84 ECEF X Cartesian coordinate [m]*/
   double Y;                      /* WGS84 ECEF Y Cartesian coordinate [m]*/
   double Z;                      /* WGS84 ECEF Z Cartesian coordinate [m]*/
   double Latitude;               /* WGS84 Latitude  [degrees, positive North]*/
   double Longitude;              /* WGS84 Longitude [degrees, positive East]*/
#else
    float Gps_TOW;                /* Corrected GPS Time of Week [seconds]*/
    float UTC_Correction;         /* Current (GPS-UTC) time difference [seconds]*/
    float X;                      /* WGS84 ECEF X Cartesian coordinate [m]*/
    float Y;                      /* WGS84 ECEF Y Cartesian coordinate [m]*/
    float Z;                      /* WGS84 ECEF Z Cartesian coordinate [m]*/
    float Latitude;               /* WGS84 Latitude  [degrees, positive North]*/
    float Longitude;              /* WGS84 Longitude [degrees, positive East]*/
#endif
   float Altitude_Ell;           /* Altitude above WGS84 Ellipsoid [m]*/
   float Altitude_MSL;           /* Altitude above Mean Sea Level [m]*/
   float SpeedOverGround;        /* 2-dimensional Speed Over Ground [m/s]*/
   float CourseOverGround;       /* 2-dimensional Course Over Ground [degrees]*/
   float VerticalVelocity;       /* Vertical velocity [m/s]*/
   float N_AccEst;               /* Northing 1-sigma (67%) Accuracy estimate [m]*/
   float E_AccEst;               /* Easting  1-sigma (67%) Accuracy estimate [m]*/
   float V_AccEst;               /* Vertical 1-sigma (67%) Accuracy estimate [m]*/
   float H_AccMaj;               /* Horizontal error ellipse semi-major axis [m]*/
   float H_AccMin;               /* Horizontal error ellipse semi-minor axis [m]*/
   float H_AccMajBrg;            /* Bearing of the semi-major axis [degrees]*/
   float HVel_AccEst;            /* Horizontal Velocity 1-sigma (67%) Accuracy estimate [m/s]*/
   float VVel_AccEst;            /* Vertical Velocity 1-sigma (67%) Accuracy estimate [m/s]*/
   float PR_ResRMS;              /* Standard dev of the PR a posteriori residuals [m]*/
   float H_DOP;                  /* Horizontal Dilution of Precision*/
   float V_DOP;                  /* Vertical Dilution of Precision*/
   float P_DOP;                  /* 3-D Position Dilution of Precision*/

   GPS_FIX_TYPE        FixType; /* Position fix type*/
  kal_bool Valid_2D_Fix;           /* Is the published 2D position fix "valid"*/
                              /*    relative to the required Horizontal*/
                              /*    accuracy masks ?*/
   kal_bool Valid_3D_Fix;           /* Is the published 3D position fix "valid"*/
                              /*    relative to both the required Horizontal*/
                              /*    and Vertical accuracy masks ?*/
   unsigned char  FixMode;                /* Solution Fixing Mode*/
                              /*    1 = Forced 2-D at MSL,*/
                              /*    2 = 3-D, with automatic fall back to 2-D*/

   unsigned char  SatsInView;             /* Satellites in View count*/
   unsigned char  SatsUsed;               /* Satellites in Used for Navigation count*/

   unsigned char  SatsInViewSVid[NMEA_SV];/* Satellites in View SV id number [PRN]*/
   unsigned char  SatsInViewSNR[NMEA_SV]; /* Satellites in Signal To Noise Ratio [dBHz]*/
   unsigned char  SatsInViewJNR[NMEA_SV]; // Satellites in View Jammer to Noise Ratio [dBHz]
   kal_uint16 SatsInViewAzim[NMEA_SV];/* Satellites in View Azimuth [degrees]*/
   signed char  SatsInViewElev[NMEA_SV];/* Satellites in View Elevation [degrees]*/
                              /*    if = -99 then Azimuth & Elevation angles*/
                              /*         are currently unknown*/
   kal_bool SatsInViewUsed[NMEA_SV];/* Satellites in View Used for Navigation ?*/

} s_GPS_Nav_Data;          /* GN GPS Navigation solution data*/



typedef  struct
{
	kal_bool MSBFix;
	s_GPS_Nav_Data GPS_NAV_Data;
}PswLocRspDataT;




typedef enum
{
GPSENG_FIX_NOT_VALID,
GPSENG_FIX_ESTIMATED,
GPSENG_FIX_2D,
GPSENG_FIX_3D,
GPSENG_FIX_DGPS_2D,
GPSENG_FIX_DGPS_3D
} PswGpsEngFixTypeT;

typedef struct
{
kal_bool	Used;
kal_uint8	Id;
kal_uint8	Cn0;
kal_int8	Elev;
kal_uint16	Azimuth;
} PswGpsEngSvInViewT;

typedef struct {
PswGpsEngFixTypeT     FixType;
kal_uint32	OsTime;
kal_uint32	LocalTimeTag;
kal_uint16	UtcYear;
	kal_uint16	UtcMonth;
kal_uint16	UtcDay;
kal_uint16	UtcHour;
	kal_uint16	UtcMin;
kal_uint16	UtcSec;
kal_uint16	UtcMilliSec;		/* UTC Millisec into Sec */
kal_uint16	WeekNo;
kal_uint32	Tow;			/* milliseconds */
	kal_uint8	UtcDifference;		/* (GPS-UTC) seconds */
	double	Lat;
	double Long;
	double	AltitudeMSL;		/* Mean Sea level */
	double AltitudeElli;		/* ? */
	double	X;
	double Y;
double	Z;
	float	SpeedGround;
	float	CourseGround;
	float	VerticalVelocity;	/* Vertical velocity */
float	LocUncAng;		/* Location uncertainty angle */
	float	LocUncA;		/* ? */
float	LocUncP;
float	LocUncV;
float	VelHUnc;		/* Horizontal Velocity RMS 1-sigma (67%) Accuracy estimate */
float	VelVUnc;		/* Vertical Velocity RMS 1-sigma (67%) Accuracy estimate */
float	Pdop;
float	Hdop;
float	Vdop;
kal_uint8	SvInViewNum;
kal_uint8	SvUsed;
PswGpsEngSvInViewT  SvInView[MAX_SVINVIEW];
} PswGpsEngWholeNavDataMsgT;





/*MS-Based*/

typedef struct
{
kal_bool GpsSysReady;

}LecGpsSysReadyT;

typedef struct
{
	kal_bool  Ref_Time_Req;
	kal_bool  Ref_Pos_Req;
	kal_bool  Ion_Req;
	kal_bool  UTC_Req;
	kal_bool  SV_Health_Req;
	kal_bool  Bad_SV_List_Req;
	kal_bool  Alm_Req;
	kal_bool  Eph_Req;

}PswAssistReqT;

typedef struct
{
   ExeRspMsgT  rspInfo;
   kal_uint32 InstanceID;
   kal_uint8 mode;
}PswValRestartMsgT;

typedef enum
{
    PSW_LOC_HOT_START  = 1,
    PSW_LOC_WARM_START,
    PSW_LOC_COLD_START
}PswLocStartMode;

typedef struct
{
    PswLocStartMode startMode;
}PswLocStartModeSetMsgT;

typedef struct
{
    ExeRspMsgT  oldRspInfo;
}PswValLocFixModeGetMsgT;

typedef struct
{
    GPS_FIX_MODE FixMode;
    ExeRspMsgT  oldRspInfo;
}PswValLocFixModeGetRspMsgT;

typedef struct
{
  kal_uint16 PrefHomeMOServiceOption;
  kal_uint16 PrefHomeMTServiceOption;
  kal_uint16 PrefRoamMOServiceOption;
} PswValPrefVoiceServiceOptionMsgT;

typedef struct
{
  kal_bool SlottedModeAllowed;
} PswSlottedModeAllowed_APIStruct;

typedef struct
{
  kal_uint8 Mode; /* 0=Stop/Disable, 0xFF=report on thresholds/state transition only */
              /* other values = frequency of reporting when below low thresh in  */
              /* units of about 200 ms (i.e set to 5 for 1 sec reporting)        */
} PswSetTransmitInfoMsgT;

typedef enum
{
  TRANS_INFO_IDLE, /* Stopped transmitting */
  TRANS_INFO_ACCESS, /* Transmitting on access channel */
  TRANS_INFO_TRAFFIC /* Transmitting on traffic channel */
} TransInfoState;

typedef struct
{
  TransInfoState State; /* Fer is not valid in TRANS_INFO_ACCESS state */
  SysCdmaBandT Band; /* Current CDMA band class */
  kal_uint16 Channel; /* Current CDMA channel number */
  kal_int16 Rssi; /* Receive signal level dBm */
  kal_uint8 PilotEcIo; /* Pilot energy to total receive power 1/8 unit dB */
  kal_int16 TxPwr; /* Transmit Power dBm */
  kal_uint16 TotalFrames;
  kal_uint16 BadFrames;
} PswGetTransmitInfoRspMsgT;

typedef struct
{
   ExeRspMsgT RspInfo;
   SysCdmaBandT band;
   kal_uint16 channel;
   kal_uint8  codeChan;
   /* CDMA Radio configuration,1 is RC1, 2 is RC2 Etc*/
   kal_uint8  radioConfig;
   kal_uint16 numFrames;
   kal_bool   enableAFC;
} PswNstPowerupMsgT;

typedef struct
{
   SysCdmaBandT   band;
   kal_uint16     channel;
   kal_uint16     numFrames;
   kal_bool       enableAFC;
} PswNstTchFerCfgMsgT;


#define MAX_NST_ACK_CHAR  3
typedef struct
{
   char ackResponse[MAX_NST_ACK_CHAR];
} PswNstPowerupAckRspMsgT;

typedef struct
{
   kal_uint16 badFrames;
   kal_uint16 totalFrames;
} PswNstPowerupRspMsgT;

typedef struct
{
   kal_uint16 badFrames;
   kal_uint16 totalFrames;
} PswNstTchFerCfgCnfMsgT;


typedef struct
{
   SysCdmaBandT   band;
   kal_uint16     channel;
   kal_uint8      fwdRc;
   kal_int16      txPwr;    /**Unit is Q6*/
} PswNstTransmitTchMsgT;


typedef struct
{
   SysCdmaBandT   band;
   kal_uint16     channel;
   kal_bool       txPwrQ6;
} PswNstTxPwrMeasCfgMsgT;


typedef struct
{
   char ackResponse[MAX_NST_ACK_CHAR];
} PswNstTransmitTchAckMsgT;

typedef struct
{
   ExeRspMsgT RspInfo;
} PswNstExitMsgT;

#define MAX_NUM_LISTS         50
#define MAX_NUM_RSSI_LEVEL    20
#define MAX_NUM_TX_PWR_LEVEL  20

typedef struct
{
   kal_uint8   count;  /* Total of list */
   kal_uint8   offset[MAX_NUM_LISTS];   /* Num of frame offset */
   kal_uint16  band[MAX_NUM_LISTS];
   kal_uint16  channel[MAX_NUM_LISTS];
   kal_uint8   codeChan[MAX_NUM_LISTS];
   /* CDMA Radio configuration,1 is RC1, 2 is RC2 Etc*/
   kal_uint8   radioConfig[MAX_NUM_LISTS];
   kal_uint16  numFrames[MAX_NUM_LISTS];
   kal_uint8   txPwrCount[MAX_NUM_LISTS];
   kal_int16   txPwr[MAX_NUM_LISTS][MAX_NUM_TX_PWR_LEVEL];
   kal_uint8   rxPwrCount[MAX_NUM_LISTS];
} PswNstListSetMsgT;


typedef struct
{
   kal_uint8   count;  /* Total of list */
   kal_uint8   index[MAX_NUM_LISTS];
   kal_uint16  band[MAX_NUM_LISTS];
   kal_uint16  channel[MAX_NUM_LISTS];
   kal_uint8   badFrames[MAX_NUM_LISTS];
   kal_uint8   totalFrames[MAX_NUM_LISTS];
   kal_int16   mainRxPwrQ5[MAX_NUM_LISTS][MAX_NUM_RSSI_LEVEL];
   kal_int16   divRxPwrQ5[MAX_NUM_LISTS][MAX_NUM_RSSI_LEVEL];
} PswNstListSetRespMsgT;


typedef struct
{
   ExeRspMsgT RspInfo;
   SysCdmaBandT band;
   kal_uint16 channel;
} PswNstRxPwrReqMsgT;


typedef struct
{
   kal_bool          isSuccess;
   kal_uint16        PnOffset;
   kal_int16         Strength;
   kal_int16         MainRxPwrQ5;
   kal_int16         DivRxPwrQ5;
} PswNstRxPwrRespMsgT;


typedef struct
{
   kal_uint8         Count;
   kal_uint8         Index;
   kal_uint8         TotalLevel;
   kal_int16         MainRxPwrQ5[MAX_NUM_LISTS];
   kal_int16         DivRxPwrQ5[MAX_NUM_LISTS];
} PswNstListRxpwrRptMsgT;

typedef struct
{
   ExeRspMsgT     RspInfo;
   kal_uint8      txPwrCount;     /**txPwrCount should less than MAX_NUM_TX_PWR_LEVEL*/
   kal_int16      txPwrLevel[MAX_NUM_TX_PWR_LEVEL]; /**unit of txPwrLevel is Q6 dBm*/
} PswNstTxPwrLevelSetMsgT;

typedef struct
{
   kal_bool          isSuccess;
} PswNstTxPwrLevelSetRespMsgT;


/* 1XCSFB, 3GPP2 C.S0097, Section 3 */
typedef struct
{
  kal_bool    SIDIncluded;
  kal_uint16  SID;
  kal_bool    NIDIncluded;
  kal_uint16  NID;
  kal_bool    MULT_SIDSIncluded;
  kal_bool    MULT_SIDS;
  kal_bool    MULT_NIDSIncluded;
  kal_bool    MULT_NIDS;
  kal_bool    REG_ZONEIncluded;
  kal_uint16  REG_ZONE;
  kal_bool    TOTAL_ZONESIncluded;
  kal_uint8   TOTAL_ZONES;
  kal_bool    ZONE_TIMERIncluded;
  kal_uint8   ZONE_TIMER;
  kal_bool    PACKET_ZONE_IDIncluded;
  kal_uint8   PACKET_ZONE_ID;
  kal_bool    PZIDHystParametersIncluded;
  kal_bool    PZ_HYST_ENABLED;
  kal_bool    PZ_HYST_INFO_INCL;
  kal_bool    PZ_HYST_LIST_LEN;
  kal_uint8   PZ_HYST_ACT_TIMER;
  kal_uint8   PZ_HYST_TIMER_MUL;
  kal_uint8   PZ_HYST_TIMER_EXP;
  kal_bool    P_REVIncluded;
  kal_uint8   P_REV;
  kal_bool    MIN_P_REVIncluded;
  kal_uint8   MIN_P_REV;
  kal_bool    NEG_SLOT_CYCLE_INDEX_SUPIncluded;
  kal_bool    NEG_SLOT_CYCLE_INDEX_SUP;
  kal_bool    ENCRYPT_MODEIncluded;
  kal_uint8   ENCRYPT_MODE;
  kal_bool    ENC_SUPPORTEDIncluded;
  kal_bool    ENC_SUPPORTED;
  kal_bool    SIG_ENCRYPT_SUPIncluded;
  kal_uint8   SIG_ENCRYPT_SUP;
  kal_bool    MSG_INTEGRITY_SUPIncluded;
  kal_bool    MSG_INTEGRITY_SUP;
  kal_bool    SIG_INTEGRITY_SUP_INCLIncluded;
  kal_bool    SIG_INTEGRITY_SUP_INCL;
  kal_bool    SIG_INTEGRITY_SUPIncluded;
  kal_uint8   SIG_INTEGRITY_SUP;
  kal_bool    AUTHIncluded;
  kal_uint8   AUTH;
  kal_bool    MAX_NUM_ALT_SOIncluded;
  kal_uint8   MAX_NUM_ALT_SO;
  kal_bool    USE_SYNC_IDIncluded;
  kal_bool    USE_SYNC_ID;
  kal_bool    MS_INIT_POS_LOC_SUP_INDIncluded;
  kal_bool    MS_INIT_POS_LOC_SUP_IND;
  kal_bool    MOB_QOSIncluded;
  kal_bool    MOB_QOS;
  kal_bool    BAND_CLASS_INFO_REQIncluded;
  kal_bool    BAND_CLASS_INFO_REQ;
  kal_bool    BAND_CLASSIncluded;
  kal_uint8   BAND_CLASS;
  kal_bool    BYPASS_REG_INDIncluded;
  kal_uint8   BYPASS_REG_IND;
  kal_bool    ALT_BAND_CLASSIncluded;
  kal_uint8   ALT_BAND_CLASS;
  kal_bool    MAX_ADD_SERV_INSTANCEIncluded;
  kal_uint8   MAX_ADD_SERV_INSTANCE;
  kal_bool    HOME_REGIncluded;
  kal_bool    HOME_REG;
  kal_bool    FOR_SID_REGIncluded;
  kal_bool    FOR_SID_REG;
  kal_bool    FOR_NID_REGIncluded;
  kal_bool    FOR_NID_REG;
  kal_bool    POWER_UP_REGIncluded;
  kal_bool    POWER_UP_REG;
  kal_bool    POWER_DOWN_REGIncluded;
  kal_bool    POWER_DOWN_REG;
  kal_bool    PARAMETER_REGIncluded;
  kal_bool    PARAMETER_REG;
  kal_bool    REG_PRDIncluded;
  kal_uint8   REG_PRD;
  kal_bool    REG_DISTIncluded;
  kal_uint16  REG_DIST;
  kal_bool    PREF_MSID_TYPEIncluded;
  kal_uint8   PREF_MSID_TYPE;
  kal_bool    EXT_PREF_MSID_TYPEIncluded;
  kal_uint8   EXT_PREF_MSID_TYPE;
  kal_bool    MEID_REQDIncluded;
  kal_bool    MEID_REQD;
  kal_bool    MCCIncluded;
  kal_uint16  MCC;
  kal_bool    IMSI_11_12Included;
  kal_uint8   IMSI_11_12;
  kal_bool    IMSI_T_SUPPORTEDIncluded;
  kal_bool    IMSI_T_SUPPORTED;
  kal_bool    RECONNECT_MSG_INDIncluded;
  kal_bool    RECONNECT_MSG_IND;
  kal_bool    RER_MODE_SUPPORTEDIncluded;
  kal_bool    RER_MODE_SUPPORTED;
  kal_bool    TKZ_MODE_SUPPORTEDIncluded;
  kal_bool    TKZ_MODE_SUPPORTED;
  kal_bool    TKZ_IDIncluded;
  kal_bool    TKZ_ID;
  kal_bool    PILOT_REPORTIncluded;
  kal_bool    PILOT_REPORT;
  kal_bool    SDB_SUPPORTEDIncluded;
  kal_bool    SDB_SUPPORTED;
  kal_bool    AUTO_FCSO_ALLOWEDIncluded;
  kal_bool    AUTO_FCSO_ALLOWED;
  kal_bool    SDB_IN_RCNM_INDIncluded;
  kal_bool    SDB_IN_RCNM_IND;
  kal_bool    FPC_FCH_Included;
  kal_uint8   FPC_FCH_INIT_SETPT_RC3;
  kal_uint8   FPC_FCH_INIT_SETPT_RC4;
  kal_uint8   FPC_FCH_INIT_SETPT_RC5;
  kal_uint8   FPC_FCH_INIT_SETPT_RC11;
  kal_uint8   FPC_FCH_INIT_SETPT_RC12;
  kal_bool    T_ADD_Included;
  kal_uint8   T_ADD;
  kal_bool    PILOT_INC_Included;
  kal_uint8   PILOT_INC;
  kal_bool    RAND_Included;
  kal_uint32  RAND;
  kal_bool    LP_SEC_Included;
  kal_uint8   LP_SEC;
  kal_bool    LTM_OFF_Included;
  kal_uint8   LTM_OFF;
  kal_bool    DAYLT_Included;
  kal_bool    DAYLT;
  kal_bool    GCSNAL2AckTimer_Included;
  kal_uint8   GCSNAL2AckTimer;
  kal_bool    GCSNASequenceContextTimer_Included;
  kal_uint8   GCSNASequenceContextTimer;
} PswCDMA2000Parm;

typedef struct
{
  kal_uint16  sid;
  kal_uint16  nid;
  kal_bool    multipleSID;
  kal_bool    multipleNID;
  kal_bool    homeReg;
  kal_bool    foreignSIDReg;
  kal_bool    foreignNIDReg;
  kal_bool    parameterReg;
  kal_bool    powerUpReg;
  kal_uint8   registrationPeriod;
  kal_uint16  registrationZone;
  kal_uint8   totalZone;
  kal_uint8   zoneTimer;
  kal_bool    powerDownReg;
} PswIratCSFBRegParm1xRTT;

typedef struct
{
  kal_uint8   ac_Barring0to9;
  kal_uint8   ac_Barring10;
  kal_uint8   ac_Barring11;
  kal_uint8   ac_Barring12;
  kal_uint8   ac_Barring13;
  kal_uint8   ac_Barring14;
  kal_uint8   ac_Barring15;
  kal_uint8   ac_BarringMsg;
  kal_uint8   ac_BarringReg;
  kal_uint8   ac_BarringEmg;
} PswAC_BarringConfig1xRTT;

typedef struct
{
  kal_bool    sysTimeInfoIncl;
  kal_uint8   systemTimeInfo[SYS_SYSTIME_SIZE];
  kal_bool    srchWinSizeIncl;
  kal_uint16  searchWindowSize;
  kal_bool    csfb_RegParam1XRTTIncl;
  PswIratCSFBRegParm1xRTT csfb_RegParm1XRTT;
  kal_bool    longCodeStateIncl;
  kal_uint8   longCodeState1XRTT[6];
  kal_bool    cellReselParm1XRTTIncl;
  kal_bool    csfb_SupportForDualRxUEIncl;
  kal_bool    csfb_SupportForDualRxUE;
  kal_bool    ac_BarringConfig1XRTTIncl;
  PswAC_BarringConfig1xRTT ac_BarringConfig1XRTT;
  kal_uint8   ListSize;
#ifdef MTK_DEV_C2K_IRAT
  IratSIB8MeasCellListT cellReselParm1XRTT[1];
#endif /* MTK_DEV_C2K_IRAT */
} PswSIB8Parm1xRTT;

typedef struct
{
   kal_bool   inclRand;
   kal_uint32 rand;
   kal_bool   inclMobParms;
   PswCDMA2000Parm *mobP;
} PswCsfbCDMA2000ParmMsgT;

typedef struct
{
   PswSIB8Parm1xRTT *sib8P;
} PswCsfbSib8ParmMsgT;

typedef struct
{
   kal_uint16 len;
   kal_uint8  *data;
} PswCsfbGcsnaDLMsgT;

typedef struct
{
   PswSIB8Parm1xRTT *sib8P;
} PswCsfbMeasReqMsgT;

typedef struct
{
   kal_bool   redir;
#ifdef MTK_DEV_C2K_IRAT
   IratReSelectionCellListT *redirL;
#endif /* MTK_DEV_C2K_IRAT */
} PswCsfbRedirectMsgT;

typedef struct
{
   kal_bool   inclRand;
   kal_uint32 rand;
   kal_bool   inclMobParms;
   PswCDMA2000Parm *mobP;
} PswCsfbHoEutraPrepMsgT;

typedef struct
{
   kal_bool   inclTime;
   kal_uint8  systemTimeInfo[SYS_SYSTIME_SIZE];
   kal_uint16 len;
   kal_uint8  *data;
} PswCsfbMobFromEutraMsgT;

typedef enum
{
   RF_UNDEFINED,
   ONE_RX_ONE_TX,
   TWO_RX_ONE_TX,
   TWO_RX_TWO_TX
} UEAntennaCfgType;

typedef struct
{
   UEAntennaCfgType UEAntCfg;
} PswAntennaCfgMsgT;

typedef struct
{
   ExeRspMsgT RspInfo;
} PswCsfbGetStatusMsgT;

typedef struct
{
   kal_uint8 csfbState;
   kal_uint8 antenna;
} PswCsfbGetStatusRspMsgT;

#ifdef CHINATELECOM_SMS_REG_CP
/*SMS auto reg info*/
typedef struct
{
   MobileIDType Id;
   kal_uint64      value;
   IMSIType    Imsi;
} PswSetAutoRegInfoMsgT;
#endif

#ifdef MTK_DEV_C2K_IRAT
typedef struct
{
  kal_uint8 Action;   /* 0-stop; 1-start; 2-update threshold only */
  kal_int8 Threshold; /* -2x10xlogPS, PS is the pilot strength */
} PswIratRATSigMonReqT;
#endif
/* MTK_DEV_C2K_IRAT */

#ifdef MTK_DEV_C2K_IRAT

typedef enum {
  RSVAS_ID_INVALID, /* Invalid C2K RSVAS Id */
  RSVAS_ID_1XRTT,   /* C2K RSVAS Id is 1xRTT */
  RSVAS_ID_EVDO,    /* C2K RSVAS Id is EVDO */
} C2kRsvasIdT;

/* RSVAS State Machine States */
typedef enum
{
  RSVAS_NORMAL_STATE,           /* RSVAS  normal mode */
  RSVAS_CONNECT_STATE,          /* RSVAS  connect mode  */
  RSVAS_VIRTUAL_STATE,          /* RSVAS  virtual suspend mode */
  RSVAS_SUSPEND_STATE,          /* RSVAS  suspend mode */

  RSVAS_NUM_STATES
} RsvasStateT;

typedef struct
{
  kal_bool rsvasServiceOccupyResult;
} PswRsvasServiceOccupyResultT;

typedef struct
{
  C2kRsvasIdT id;
  rsvas_service_type_enum servType;
} PswRsvasServiceOccupyRequestT;

typedef struct
{
  C2kRsvasIdT id;
  rsvas_service_type_enum servType;
} PswRsvasServiceReleaseT;


typedef struct
{
  cs_reg_cause_enum  cause;
  kal_bool           is_for_silent_redial;
} PswIrat1xRegReqMsgT;

typedef PACKED_PREFIX struct
{
  kal_int16    TasState;
  kal_int16    TasVer;
  kal_bool     TasEnable;
  kal_bool     EnableForceTas;
  kal_int16    RxPowerDbmL;
  kal_int16    RxPowerDbmU;
  kal_int16    RxPowerDbmLp;

} PACKED_POSTFIX PswFTDTASParaT;

#endif

/******************PswCustomLockDefination***************************************/

#define PSW_FEATURE_TATA       0x80000000
#define PSW_FEATURE_RELIANCE   0x40000000
#define PSW_FEATURE_UNICOM     0x20000000
#define PSW_FEATURE_UIMSUPPORT 0x00000001
#define PSW_FEATURE_CUSTOM_PRILOCK   0x00000002


  typedef enum {
    PSW_CUSTOM_LOCK_FEATURE_OFF =0,
    PSW_CUSTOM_LOCK_FEATURE_IMSI =0x01,
    PSW_CUSTOM_LOCK_FEATURE_SIDNID =0x02,
    PSW_CUSTOM_LOCK_FEATURE_SYSTEM_VALIDATE = 0x04,
    PSW_CUSTOM_LOCK_FEATURE_SUBNET =0x08,
    PSW_CUSTOM_LOCK_FEATURE_EVDO_SYSTEM_VALIDATE = 0x10
  }PSW_CUSTOM_LOCK_FEATURE;


 typedef struct
{
   kal_uint16 min_highest3;
   kal_uint16 min_middle3;
   kal_uint8   min_middle1;
   kal_uint16 min_lowest3;
   /*each bit is defined for every cumtomfeafure */
} PswMinDigitalValue;

 typedef struct
 {
  kal_uint32 PswCustomLockSet;

  kal_bool (*PswCustomImsiLock)(kal_uint16 PhoneMcc,kal_uint8 PhoneMnc,PswMinDigitalValue  PhoneMin);
  kal_bool (*PswCustomSidNidLock)(kal_uint16 PhoneSid,kal_uint16 PhoneNid,kal_bool PrlPrefonly);
  kal_bool (*PswCustomSubnetLock)(kal_uint8 *Subnet,kal_uint8 mask);
  kal_bool (*PswCustomSysValidate)(kal_uint16 SysSid,kal_uint16 SysNid)   ;
  kal_bool (*PswCustomDOSysValidate)(kal_uint8 *Subnet, kal_uint8 mask)   ;

 }PswCustomLockCallBackT;

  typedef enum
 {
     VAL_PSW_CKECK_Custom_Locking_Feature_OK = 0x00,
     VAL_PSW_CKECK_Custom_IMSI_ERROR,
     VAL_PSW_CKECK_Custom_DefaultMIN_OK,
     VAL_PSW_CKECK_Custom_SIDNID_ERROR,
     VAL_PSW_CKECK_Custom_Locking_Feature_NUM
 }PswCheckForCustomLockStateT;


typedef struct
{
    kal_uint8 nCheckRst;
}PswCheckLockingFeatureRptT;

typedef struct
{
    kal_bool valid;
}PswSetImsiMValidT;

typedef enum
{
    QPCH_RATE_4800BPS = 0,
    /*AKK 09-11-01 Slotted Mode: Corrected 9600PBS to 9600BPS*/
    QPCH_RATE_9600BPS = 1

}  QpchRate;

typedef struct
{
    kal_int16  RSSI;
    kal_int16  PchEbNt;
    kal_int16  SyncEbNt;
    kal_int16  EcIo;
    kal_int32  total_foe;
}L1dmeasvalue;

typedef PACKED_PREFIX struct
{
   QpchRate   QpchRate;
   kal_uint16     QpchPilotPn;
   kal_int16      QpchPilotPwr;
   kal_int16      QpchPi1;
   kal_int16      QpchPi1Status;
   kal_uint16     QpchPi1Pos;
   kal_int16      QpchPi1BitIEnergy;
   kal_int16      QpchPi1BitQEnergy;
   kal_int16      QpchPi1PilotIEnergy;
   kal_int16      QpchPi1PilotQEnergy;
   kal_int16      QpchPi2;
   kal_int16      QpchPi2Status;
   kal_uint16     QpchPi2Pos;
   kal_int16      QpchPi2BitIEnergy;
   kal_int16      QpchPi2BitQEnergy;
   kal_int16      QpchPi2PilotIEnergy;
   kal_int16      QpchPi2PilotQEnergy;
   kal_int16      QpchSysQpchThi;
   kal_int16      QpchSysQpchThb;
} PACKED_POSTFIX  QpchSpyData;

typedef enum
{
   OUT_STAND_REQ_RCVD,
   BS_CAPABILITIES,
   BS_REJECT_RECEIVED,
   BS_RESPONSE_NOT_SUPPORTED,
   INVALID_PPM_SESSION_ID,
   INVALID_LOCSERV_SESSION_ID,
   OUTGOING_MSG_BUFFER_GET_FAIL,
   SESS_TAG_MISMATCH,
   BS_LOCATION_RSP_RCVD,
   BS_RESPONSE_ELEMENT_RCVD,
   BS_REQUEST_ELEMENT_RCVD,
   MS_LOCATION_ORIG_START,
   LOCSERV_SESS_HEADER_DUMP,
   LOCSERV_SESS_REQ_DUMP,
   LOCSERV_SESS_RSP_DUMP,
   LOCSERV_SESS_AFLT_DUMP,
   LOCSERV_SESS_AGPS_DUMP,
   INVALID_AFLT_STATE,
   INVALID_AGPS_STATE,
   UNEXPECTED_AFLT_EVENT,
   UNEXPECTED_AGPS_EVENT,
   MS_REQUEST_TO_BS,
   MS_RESPONSE_TO_BS,
   COLLISION,
   PDDM_RECEIVED,
   PDDM_SENT,
   RMS_PHASE_ERROR_DUMP
} LocSrvTraceIds;

typedef enum
{
   BS_REJECT = 0,
   PROV_LOC_RSP,
   PROV_BS_CAP,
   PROV_BS_ALMANAC,
   PROV_GPS_ACQ_ASSIST,
   PROV_GPS_SENSITIV_ASSIST,
   PROV_GPS_LOC_ASSIST_S_COORD,
   PROV_GPS_LOC_ASSIST_C_COORD,
   PROV_GPS_ALMANAC,
   PROV_GPS_EPHEMERIS,
   PROV_GPS_NAV_MSG_BITS,
   PROV_GPS_ALMANAC_CORR,
   PROV_GPS_SAT_HEALTH_INFO,
   MAX_PROV_GPS_INFO
} BS_RspTypes;

typedef enum
{
   REQ_RESERVED = 0,
   REQ_MS_LOC_RSP,
   REQ_MS_INFO,
   REQ_AUTO_MEAS_WEIGHT_FAC,
   REQ_PSEUDO_MEAS,
   REQ_PILOT_PHASE_MEAS,
   REQ_TIME_OFFSET_MEAS,
   REQ_CANCELLATION
} BS_ReqTypes;

typedef enum
{
   RESERVED0 = 0,
   REQ_LOC_RSP,
   REQ_BS_CAP,
   REQ_BS_ALMANAC,
   REQ_GPS_ACQ_ASSIST,
   REQ_GPS_SENSITIV_ASSIST,
   REQ_GPS_LOC_ASSIST,
   RESERVED1,
   REQ_GPS_ALMANAC,
   REQ_GPS_EPHEMERIS,
   REQ_GPS_NAV_MSG_BITS,
   REQ_GPS_ALMANAC_CORR,
   REQ_GPS_SAT_HEALTH_INFO
} MS_ReqTypes;

typedef enum
{
   REJECT = 0,
   PROV_MS_LOC_RSP,
   PROV_MS_INFO,
#ifdef MTK_CBP
   PROV_SYS_INFO = PROV_MS_INFO,
#endif
   PROV_AUTO_MEAS_WEIGHT_FACTOR,
   PROV_PSEUDO_MEAS,
   PROV_PILOT_PHASE_MEAS,
   PROV_TIME_OFFSET_MEAS,
   PROV_CANCELLATION_ACK
} MS_RspTypes;


typedef struct
{
	LocSrvTraceIds traceId;
	MS_RspTypes    rspType;
}PswIs801FlowMsRspMsg;

typedef struct
{
	LocSrvTraceIds traceId;
	MS_ReqTypes    reqType;
}PswIs801FlowMsReqMsg;

typedef struct
{
	LocSrvTraceIds traceId;
	BS_ReqTypes    reqType;
}PswIs801FlowBsReqMsg;

typedef struct
{
	LocSrvTraceIds traceId;
	BS_RspTypes    rspType;
}PswIs801FlowBsRspMsg;

typedef enum
{
  CP_NP_UNKNOWN,
  CP_NP_ISDN_TELEPHONY,
  CP_NP_DATA = 3,
  CP_NP_TELEX,
  CP_NP_PRIVATE = 9
} NumberPlan;


typedef enum
{
  CP_NT_UNKNOWN,
  CP_NT_INTERNATIONAL,
  CP_NT_NATIONAL,
  CP_NT_NETWORK_SPECIFIC,
  CP_NT_SUBSCRIBER,
  CP_NT_RSVD,
  CP_NT_ABBREVIATED
} NumberType;


typedef enum
{
  CP_PI_ALLOWED,
  CP_PI_RESTRICTED,
  CP_PI_NUMBER_NA,
  CP_PI_RSVD
} PresentationIndicator;

typedef enum
{
  CP_SI_USER_PROVIDED_NOT_SCREENED,
  CP_SI_USER_PROVIDED_VERIFIED_PASSED,
  CP_SI_USER_PROVIDED_VERIFIED_FAILED,
  CP_SI_NETWORK_PROVIDED
} ScreeningIndicator;

typedef struct
{
  NumberType type;
  NumberPlan plan;
  kal_int8       number[CP_MAX_CALLED_PARTY_NUMBER_SIZE + 1];/*Inc NULL terminator*/
} CalledPartyNumber;

typedef struct
{
  NumberType type;
  NumberPlan plan;
  PresentationIndicator pi;
  ScreeningIndicator    si;
  kal_int8 number[CP_MAX_CALLING_PARTY_NUMBER_SIZE + 1];  /* Inc NULL terminator */
} CallingPartyNumber;

typedef enum
{
  CP_SUBADDRESS_TYPE_NSAP,
  CP_SUBADDRESS_TYPE_USER_SPECIFIED = 2
} SubaddressType;

typedef enum
{
  CP_ODDEVEN_INDICATOR_EVEN,
  CP_ODDEVEN_INDICATOR_ODD
} OddEvenIndicator;

typedef struct
{
  kal_bool          extension;
  SubaddressType type;
  OddEvenIndicator indicator;
  kal_uint8         address[CP_MAX_SUBADDRESS_SIZE + 1];/*Inc NULL terminator*/
} Subaddress;

typedef enum
{
  NO_TRAFFIC,
  PRIMARY_TRAFFIC,
  SECONDARY_TRAFFIC
} TrafficType;

/* IS-707-A-2.10 RLP BLOB for HSPD */
typedef struct
{
  kal_uint8            rlpBlobType;
  kal_uint8            rlpVersion;
  kal_uint8            rtt;
  kal_bool             initVar;
  kal_uint32           bsExtSeqM;
  kal_uint32           msExtSeqM;
  kal_uint8            maxMsNakRoundsFwd;
  kal_uint8            maxMsNakRoundsRev;
  kal_uint8            nakRoundsFwd;
  kal_uint8            nakRoundsRev;
  kal_uint8            nakPerRoundFwd[ CP_MAX_ROUNDS_FWD ];
  kal_uint8            nakPerRoundRev[ CP_MAX_ROUNDS_REV ];
  kal_uint8            ddw;
  kal_uint8            rexmit_timer;
} RlpBlobPsw;

/* define set of SCH coding options */
typedef enum
{
    SCH_CONV_CODING  = 0,
    SCH_TURBO_CODING = 1

} SchCodingTypes;

/* define set of RC settings */
typedef enum
{
    RC_INVALID = 0,
    RC_1 = 1,
    RC_2 = 2,
    RC_3 = 3,
    RC_4 = 4,
    RC_5 = 5,
    RC_6 = 6,
    RC_7 = 7,
    RC_8 = 8,
    RC_9 = 9,
    RC_10 = 10,		/* PDCH RC */
	RC_11 = 11,
	RC_12 = 12,
    RC_MAX
} RcTypes;

/* Service configuration structures */
typedef struct
{
  kal_uint8            schRecLen;
  RcTypes          schRc;
  SchCodingTypes   coding;
  kal_bool             frame40Used;
  kal_bool             frame80Used;
  kal_uint8			   maxRate;
} ChConfigSch;

/* Service option connection record structure */
typedef struct
{
  kal_uint8              conRef;          /* service option connection reference */
  SysServiceOptionT  serviceOption;
  TrafficType        forTraffic;      /* forward traffic type                */
  TrafficType        revTraffic;      /* reverse traffic type                */
#ifdef IS2000_REV_0
  kal_uint8              uiEncryptMode;
  kal_uint8              srId;            /* Set of number of bits per frame of the RFCh*/
  kal_bool               rlpInfoIncl;
  kal_uint8              rlpBlobLen;      /* Set of number of bits per frame of the RFCh*/
  RlpBlobPsw             rlpBlob;
  kal_bool               qosParmsIncl;
#endif
} ConnectionRecord;

typedef struct
{
  kal_uint8            forSchId;
  MultiplexOption  forSchMux;
  ChConfigSch      forSchChConf;
} ForSchCc;

typedef struct
{
  kal_uint8            revSchId;
  MultiplexOption  revSchMux;
  ChConfigSch      revSchChConf;
} RevSchCc;

typedef struct
{
  MultiplexOption  forMuxOption;          /* forward multiplex option       */
  MultiplexOption  revMuxOption;          /* reverse multiplex option       */
  /*AKK 11-16-00 Added per LMD_SERVICE_CONFIGURATION_MSG */
  kal_uint8            forNumBits;      /* Set of number of bits per frame of the FFCh*/
  kal_uint8            revNumBits;      /* Set of number of bits per frame of the RFCh*/
  kal_uint8            numConRec;             /* # of serv opt connection rec   */
  ConnectionRecord conRec[CP_MAX_SERV_OPT_CONN_REC]; /* serv opt conn recs  */
  /* AKK 08-15-00 IS2000A, Added new service configuration fields*/ 
  /*AKK 12-30-02 per CR#570 Replaced IS2000A with IS2000_REV_0*/
#ifdef IS2000_REV_0
  /*AKK 11-17-00 Per L1D_SERVICE_CONFIGURATION_MSG */
  kal_bool             fchCcIncl;
  kal_uint8            fchFrameSize;
  kal_uint8            forFchRc;
  kal_uint8            revFchRc;
  kal_bool             dcchCcIncl;
  kal_uint8            dcchFrameSize;
  kal_uint8            forDcchRc;
  kal_uint8            revDcchRc;
  /*AKK 04-07-01 Per IS2K Rev0 fix*/

  kal_bool             forSchCcIncl;
  kal_uint8            numForSch;
  ForSchCc         forSchCc[ CP_MAX_NUM_FOR_SCH ];

  kal_bool             revSchCcIncl;
  kal_uint8            numRevSch;
  RevSchCc         revSchCc[ CP_MAX_NUM_REV_SCH ];
  kal_uint8            fchDcchMuxOptionInd;
  kal_uint16             forDcchMuxOption;
  kal_uint16             revDcchMuxOption;
  kal_bool             forPdchCcIncl;
  kal_uint16             forPdchMuxOption;
  kal_uint8            forPdchRc;
#endif
  /*END--AKK 11-17-00 Per L1D_SERVICE_CONFIGURATION_MSG */
  /*END--AKK 08-15-00 IS2000A, Added new service configuration fields*/ 

  kal_bool             nnScrIncl;
} ServiceConfiguration;
typedef enum
{
  CP_PITCH_MEDIUM,
  CP_PITCH_HIGH,
  CP_PITCH_LOW,
  CP_PITCH_RSVD
} AlertPitch;

typedef enum
{
  CP_ST_TONE_SIGNAL,
  CP_ST_ISDN_ALERTING,
  CP_ST_IS54B_ALERTING,
  CP_ST_RSVD
} SignalType;

typedef struct
{
  SignalType type;
  AlertPitch pitch;
  kal_uint8      signal;
} Signal;


typedef struct
{
  kal_uint16        pulse_frequency;
  kal_uint8         pulse_on_time;
  kal_uint8         pulse_off_time;
  kal_uint8         pulse_count;
} MeterPulses;

typedef struct
{
  kal_uint8         amplitude;
  kal_uint16        freq_1;
  kal_uint16        freq_2;
  kal_uint8         on_time;
  kal_uint8         off_time;
  kal_uint8         repeat;
  kal_uint8         delay;
} CadenceGroup;

typedef struct
{
  kal_uint8         cadence_count;
  kal_uint8         num_groups;              /* 4 bits in length */
  CadenceGroup  cGroup[CP_MAX_CADENCE_GROUPS_REC];
} ParametricAlerting;

typedef enum
{
  CP_DISPLAY_TAG_BLANK = 0x80,
  CP_DISPLAY_TAG_SKIP,
  CP_DISPLAY_TAG_CONTINUATION,
  CP_DISPLAY_TAG_CALLED_ADDRESS,
  CP_DISPLAY_TAG_CAUSE,
  CP_DISPLAY_TAG_PROGRESS_INDICATOR,
  CP_DISPLAY_TAG_NOTIFICATION_INDICATOR,
  CP_DISPLAY_TAG_PROMPT,
  CP_DISPLAY_TAG_ACCUMULATED_DIGITS,
  CP_DISPLAY_TAG_STATUS,
  CP_DISPLAY_TAG_INBAND,
  CP_DISPLAY_TAG_CALLING_ADDRESS,
  CP_DISPLAY_TAG_REASON,
  CP_DISPLAY_TAG_CALLING_PARTY_NAME,
  CP_DISPLAY_TAG_CALLED_PARTY_NAME,
  CP_DISPLAY_TAG_ORIGINAL_CALLED_NAME,
  CP_DISPLAY_TAG_REDIRECTING_NAME,
  CP_DISPLAY_TAG_CONNECTED_NAME,
  CP_DISPLAY_TAG_ORIGINATING_RESTRICTIONS,
  CP_DISPLAY_TAG_DATE_TIME_OF_DAY,
  CP_DISPLAY_TAG_CALL_APPEARANCE_ID,
  CP_DISPLAY_TAG_FEATURE_ADDRESS,
  CP_DISPLAY_TAG_REDIRECTION_NAME,
  CP_DISPLAY_TAG_REDIRECTION_NUMBER,
  CP_DISPLAY_TAG_REDIRECTING_NUMBER,
  CP_DISPLAY_TAG_ORIGINAL_CALLED_NUMBER,
  CP_DISPLAY_TAG_CONNECTED_NUMBER,
  CP_DISPLAY_TAG_TEXT = 0x9E
} DisplayTag;

typedef struct
{
  DisplayTag    display_tag;
  kal_uint8         display_len;
                                         /* include NULL terminator */
  kal_uint8         chari[CP_MAX_EXTENDED_DISPLAY_SIZE + 1];
} ExtendedDisplayRec;

typedef struct
{
  kal_uint8         ext_display_ind;
  kal_uint8         display_type;
  kal_uint8         num_disp_rec;
  ExtendedDisplayRec extDisp[CP_MAX_EXTENDED_DISPLAY_REC];
} ExtendedDisplay;

typedef struct
{
  kal_uint8         polarity_included;
  kal_uint8         toggle_mode;
  kal_uint8         reverse_polarity;
  kal_uint8         power_denial_time;
} LineControl;


typedef struct
{
  kal_uint8         extension_bit_1;
  NumberType    type;
  NumberPlan    plan;
  kal_uint8         extension_bit_2;
  PresentationIndicator pi;
  ScreeningIndicator    si;
  kal_uint8         extension_bit_3;
  kal_uint8         redirection_reason;
  kal_uint8         number[CP_MAX_REDIRECTING_NUMBER_SIZE + 1];
                /* including NULL terminator */
} RedirectingNumber;

typedef struct
{
  kal_uint8 upLink;
  kal_uint8 downLink;
} AudioControl;

typedef struct
{
  kal_bool   rcvdDisplay;
  kal_int8   display[CP_MAX_DISPLAY_SIZE  +  1];  /* Incl NULL terminator */
  kal_bool   rcvdCalledPartyNumber;
  CalledPartyNumber calledPartyNumber;
  kal_bool   rcvdCallingPartyNumber;
  CallingPartyNumber callingPartyNumber;
  kal_bool   rcvdConnectedNumber;
  CallingPartyNumber connectedNumber;   /* Same format as CallingPartyNumber */
  kal_bool   rcvdSignal;
  Signal signal;
  kal_bool   rcvdMessageWaiting;
  kal_uint8  msgCount;
  kal_bool   rcvdCLIRCause;
  kal_uint8  clirCause;
  kal_bool   rcvdRelease;
  kal_bool   rcvdAudioControl;
  AudioControl audioControl;
  kal_bool   rcvdMeterPulse;
  MeterPulses meterPulse;
  kal_bool   rcvdParametricAlerting;
  ParametricAlerting parametricAlert;
  kal_bool   rcvdLineControl;
  LineControl lineControl;
  kal_bool   rcvdExtendedDisplay;
  ExtendedDisplay extendedDisplay;
  kal_bool   rcvdCalledPartySubaddress;
  Subaddress calledPartySubaddress;
  kal_bool   rcvdCallingPartySubaddress;
  Subaddress callingPartySubaddress;
  kal_bool   rcvdConnectedSubaddress;
  Subaddress connectedSubaddress;
  kal_bool   rcvdRedirectingNumber;
  RedirectingNumber redirectingNumber;
  kal_bool   rcvdRedirectingSubaddress;
  Subaddress redirectingSubaddress;
  kal_bool   rcvdCallWaitingIndicator;
  kal_uint8  callWaitingIndicator;
} FORInfoData;
typedef enum
{
  SC_REJECT = 0,
  SC_ACCEPT,
  SC_ALTERNATIVE,
  SC_UNKNOWN
} SCResponse;

typedef enum
{
	SCC_DATA_BURST_IND,
	SCC_CONN_IND,
	SCC_NEG_CONN_IND,	
	SCC_DISCONN_IND,
	SCC_RELEASE_IND,
	SCC_SERV_CONF_VALIDATE,	
	SCC_PAGE_IND,
	SCC_SERV_OPTIION_VALIDATE,
	SCC_ALERT_IND,
	SCC_SOCM_IND,
	SCC_SOCO_IND,
	SCC_SERV_CONF_INIT,
	SCC_PZ_ZONE_IND,	
	SCC_IDLE_IND,
    SCC_SID_NID_IND,    
    SCC_HAND_OFF_IND,
    SCC_NW_P_REV_IND,    
	SCC_ZONE_IND,
	SCC_TC_ASSIGN_IND,
	SCC_SET_SSDB_IND,
	/* add code here */
}Scc_IndMsgType;

typedef enum
{
	SCC_VS_ORIG_REQ,
    SCC_PS_ORIG_REQ, 
    SCC_LS_ORIG_REQ,
	SCC_SMS_ORIG_REQ,
	SCC_SMS_REL_REQ,
	SCC_VS_ANSWER_REQ,	
	SCC_VS_RELESE_REQ,
	SCC_LS_RELESE_REQ,
	SCC_VS_SWITCH_REQ,
	SCC_TIMER_EXPIRY,
	SCC_PZ_HYSTER_ACT_SET,
	/* add code here */
}Scc_ReqMsgType;

typedef struct
{
	kal_uint8 msgNumber; 
	kal_uint8 burstType;
	kal_uint8 numMsgs; 
	kal_uint8 numFields; 
	kal_uint8 data[255];
}SccDataBurstIndMsg;

typedef struct
{
	kal_bool   encoded;             /* digits encoded indication    */
    kal_bool   digitMode;           /* digit encoding indicator     */
    kal_uint8  numberType;          /* type of number               */
    kal_uint8  numberPlan;          /* numbering plan               */
    kal_uint8  digits[CP_MAX_CALLING_PARTY_NUMBER_SIZE +1]; /* ascii digits, null terminated string */
    kal_uint8  numDigits;           /* number of digits to be dialled       */    
    PswCallingPartyNumberT CPNInfo; /* Calling Party Number Info   */
    PswCallModeT callMode;      	/* voice call mode indicator     */
    kal_bool   multCPN;             /* whether MS has >1 calling party num values */
    kal_bool   inclCallingSub;      /* whether calling party subaddr info included */   
    Subaddress callingSub;
    kal_bool inclCalledSub;         /* whether called party subaddr info included */    
    Subaddress calledSub;
}SccVsOrigReqMsg;

typedef struct
{
    SysPacketDataSvcTypeT type;
    kal_uint8             digits[CP_MAX_CALLING_PARTY_NUMBER_SIZE +1]; /* ascii digits, null terminated string */
}SccPsOrigReqMsg;

typedef struct
{
    SysLoopbackSvcTypeT   prefType;
    kal_uint8             digits[CP_MAX_CALLING_PARTY_NUMBER_SIZE +1]; /* ascii digits, null terminated string */
}SccLsOrigReqMsg;

typedef struct
{
    kal_uint16 SO;
}SCCSwitchReqMsg;


typedef struct
{
    kal_uint16 timerID;
}SCCTimerExpiry;

typedef struct
{
    kal_bool bActivated;
}PZHysterActIndSet;

typedef struct
{
    kal_uint8  response;         
    kal_uint8  reason;         
}SccServiceConfigRsp;

typedef struct
{
    kal_uint8  reason;         
}SccDisconnectInd;

typedef struct
{
    kal_uint8  reason;         
}SccReleaseInd;

typedef struct
{
    kal_bool               valOnly;
    ServiceConfiguration   sc;        
}SccServiceConfigValidate;

typedef struct
{
    SysServiceOptionT   so;
}SccServiceOptiValidate;

typedef struct
{
    FORInfoData   alertDate; 
}SccAlertInd;

typedef struct
{
    kal_uint8     conRef;
    kal_uint16 serviceOption;        
    kal_uint8 length;
    kal_uint8 ctlRec[MAX_SERV_OPT_CNTL_RECORD_LEN];
    kal_uint32 actionTime;
}SccSocmInd;

typedef struct
{
    kal_uint8 ordq;
    kal_uint32 actionTime;
}SccSocoInd;

typedef struct
{
    kal_uint8 zone;
}PacketZoneInd;

typedef struct
{
    kal_uint16 sid;
    kal_uint16 nid;
}SidNidInd;

typedef struct
{
     kal_uint8 type;
     kal_bool  cfgChanged;
     kal_bool  setChanged; 
     kal_bool  freqChanged;
}HandOffInd;

typedef struct
{
    kal_uint8 ssdB[8];
}SsdbInd;

typedef struct
{
	Scc_IndMsgType type;
	union
	{
		SccDataBurstIndMsg  DbIndMsg;
        SccServiceConfigRsp ServeConfRsp;
        SccDisconnectInd    DisconnctInd;
        SccReleaseInd       ReleaseInd;
        SccServiceConfigValidate ServConfValidate;        
        SccServiceOptiValidate   ServOptiValidate;
        SccAlertInd         AlertInd;        
        SccSocmInd          SocmInd;        
        SccSocoInd          SocoInd;
        PacketZoneInd       PZondInd;
        SidNidInd           SidNidInd;
        HandOffInd          HandoffInd;
        SsdbInd             SetSsdbInd;
		/* add code here */
	} indMsg;
}PswSccIndMsg;

typedef struct
{
	Scc_ReqMsgType type;
	union
	{
		SccVsOrigReqMsg VsOrigMsg;
        SccPsOrigReqMsg PsOrigMsg;
        SccLsOrigReqMsg LsOrigMsg;
        SCCSwitchReqMsg SwitchMsg;
        SCCTimerExpiry  TimerExpMsg;        
        PZHysterActIndSet  HysterActSetMsg;
		/* add code here */
	} reqMsg;
}PswSccReqMsg;

typedef enum
{
   LOCK_ORDER,
   UNLOCK_ORDER,
   MAX_NUM
} PswTstInjectEnum;


void PswCustomLockProcedure(void);
kal_bool cssCheckSidNidLock(void);
void PswCustomFeatureMsg(kal_uint32 * MsgP);
kal_bool PswIsCustomFeatureSet(kal_uint32 CustomFeatureMacro);
void PswTransformPswMiscDataType(kal_uint8* srcData ,kal_uint8* desData);
void PswTransformNamDataType(kal_uint8* srcData ,kal_uint8* desData);
kal_uint16 PswTransformPswMiscDataPackedType(kal_uint8* srcData ,kal_uint8* desData);
kal_uint16 PswTransformNamDataPackedType(kal_uint8* srcData ,kal_uint8* desData);
kal_uint16 PswGetNamNumBytes();
kal_uint16 PswGetPswMiscBytes();
void PswCustomFeatureReg(PswCustomLockCallBackT* CustomReg);
kal_uint8 PswGetDefaultRoamSetting();
PswParmAccessResultCode PswRoamSettingBitMapHandler(kal_uint8 RoamSettingBitMap);
kal_bool PswCustomFeatureCheck(kal_uint32  FeatureItem);
void PswSetImsimValidStatusMsg( PswSetImsiMValidT* MsgP );
CPState getCPState(void);
kal_bool cpGetE911mode(void);
kal_bool cpOtaspModeToBandChannel(kal_uint8 code, SysBandChannelT *bandCh, kal_uint8 *block);

#ifdef MTK_DEV_C2K_IRAT
kal_uint32 PswIratMd1MsgHandler(kal_uint32 MsgId, void* MsgBufferP, kal_uint32 MsgSize);
rsvas_sim_enum rsvasGetCurrentSimId(void);
#endif

/*********************PswCustomLockDefination************************************/

/*****************************************************************************
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
*
*
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
*****************************************************************************/

/*****************************************************************************
* End of File
*****************************************************************************/
#endif /* #ifndef _PSWAPI_H_ */
/**Log information: \main\CBP80\cbp80_gdeng_scbp10099\1 2012-07-27 08:59:51 GMT gdeng
** SCBP#10099 **/
/**Log information: \main\CBP80\cbp80_gdeng_scbp10099\2 2012-07-30 08:20:37 GMT gdeng
** SCBP#10099**/
/**Log information: \main\CBP80\cbp80_gdeng_scbp10325\1 2012-09-20 06:13:14 GMT gdeng
** SCBP#10325**/
/**Log information: \main\CBP80\cbp80_gdeng_scbp10325\2 2012-09-20 06:23:16 GMT gdeng
** SCBP#10325**/
/**Log information: \main\SMART\1 2013-04-25 09:46:39 GMT yxma
** HREF#22182, add custom lock feature to smartfren
|**/
/**Log information: \main\Trophy\Trophy_zjiang_href22256\1 2013-08-21 07:39:32 GMT zjiang
** HREF#22256.1.crts21316:模块短信自注册编译版本里存在的自注册短信多余上报修改;2.+CPIN命令优化.**/
/**Log information: \main\Trophy\2 2013-08-21 07:42:24 GMT cshen
** href#22256**/
/**Log information: \main\Trophy\Trophy_xding_href22331\1 2013-12-10 07:18:03 GMT xding
** HREF#22331, 合并MMC相关功能到Trophy baseline上**/
/**Log information: \main\Trophy\3 2013-12-10 08:33:39 GMT jzwang
** href#22331:Merge MMC latest implementation from Qilian branch.**/

