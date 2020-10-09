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
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSKAL_TRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

#ifndef _PSW_NVRAM_H_

#define _PSW_NVRAM_H_ 1

/*****************************************************************************
 * Includes
 ****************************************************************************/
#include "kal_general_types.h"
#include "c2k_defs.h"

/*****************************/
/* PswNam  definitions start */
/*****************************/
  #define NAM_BANDS_SUPPORTED   5
                                    /* skip, T53, Korean PCS            */

                                      
  #define CP_MAX_TMSI_ZONE_LEN  8
  #define NAM_MEID_SIZE         7    /* size of MEID */
#ifndef MTK_PLT_ON_PC
  #define REMAINING_NAM_SIZE    3
#else
  #define REMAINING_NAM_SIZE    2
#endif

  #define OTA_ALLOW_OTAPA       0x02   /* User flag to reject network OTAPA attemps */
  #define OTA_ENABLE_OTA        0x04   /* User flag to enable OTA functionality in MS */
  #define OTA_ENABLE_SPASM      0x08   /* User flag to enable SPASM function in MS */
  #define OTA_ENABLE_SPC_CHANGE 0x10   /* User flag to enable SPC Change in MS */

  #define AUTH_AKEY_VALID       0x01   /* Akey Valid. OK for Authentication */
  #define AUTH_ENABLE_VP        0x02   /* Voice Privacy Enabled */
  #define MOB_TERM_HOME_ENABLED 0x01   /* receive mobile terminated calls in home system */
  #define MOB_TERM_SID_ENABLED  0x02   /* receive mobile terminated calls in foreign SID system */
  #define MOB_TERM_NID_ENABLED  0x04   /* receive mobile terminated calls in foreign NID system */

  #define ROAM_SETTING_DOMESTIC_VOICE 0x01 /* Sprint Allow voice roaming on domestic system */
  #define ROAM_SETTING_DOMESTIC_DATA  0x02 /* Sprint Allow data roaming on domestic system */
  #define ROAM_SETTING_INT_VOICE      0x04 /* Sprint Allow voice romaing on international system */
  #define ROAM_SETTING_INT_DATA       0x08 /* Sprint Allow data roaming on international system */
#ifdef MTK_CBP
  #define ROAM_SETTING_LTE_DATA       0x10 /* Sprint Allow LTE data roaming, not used in C2K saved only for AP get */
  #define ROAM_SETTING_USED_BIT_NUM   5    /* Now only the 5 least significant bits used */
#endif

  #define NAM_MAX_MDN_DIGITS    16     /* max MDN digit number in NAM template */

  #define SPC_MAX_VALUE         999999
  #define SPC_MAX_RETRY         15

/* Number of positive and negative sids in the NAM. */
#define MAX_POSITIVE_SIDS   20
#define MAX_NEGATIVE_SIDS   10

/* Broadcast Address parameters */
#define CP_BCAST_ADDRESS_MAX_SIZE   15

/*- - - - - - - */
/* NAM Defaults */
/*- - - - - - - */
#define PSW_DEFAULT_ESN              0xFF04FFFF

#define PSW_DEFAULT_PRL_ENABLE       KAL_TRUE
/* Station Class Mark */
#define PSW_DEFAULT_SCM_BC0          0x28
#define PSW_DEFAULT_SCM_BC1          0xA8
#define PSW_DEFAULT_SCM_BC2          0x28
#define PSW_DEFAULT_SCM_BC3          0x28
#define PSW_DEFAULT_SCM_BC4          0xA8
#define PSW_DEFAULT_SCM_BC5          0x28
#define PSW_DEFAULT_SCM_BC6          0x28
#define PSW_DEFAULT_SCM_BC7          0x28
#define PSW_DEFAULT_SCM_BC8          0x28
#define PSW_DEFAULT_SCM_BC9          0x28
#define PSW_DEFAULT_SCM_BC10         0x28
#define PSW_DEFAULT_SCM_BC11         0x28
#define PSW_DEFAULT_SCM_BC12         0x28
#define PSW_DEFAULT_SCM_BC13         0x28
#define PSW_DEFAULT_SCM_BC14         0x28
#define PSW_DEFAULT_SCM_BC15         0x28
#define PSW_DEFAULT_SCM_BC16         0x28
#define PSW_DEFAULT_SCM_BC17         0x28
#define PSW_DEFAULT_SCM_BC18         0x28
#define PSW_DEFAULT_SCM_BC19         0x28
#define PSW_DEFAULT_SCM_BC20         0x28

#ifdef KDDI_EXTENSIONS
#define PSW_DEFAULT_PREV             9
#else
#define PSW_DEFAULT_PREV             6
#endif

#define PSW_DEFAULT_SLOT_CYCLE_IDX   2
#define PSW_DEFAULT_MOB_FIRM_REV     0
#define PSW_DEFAULT_MOB_MODEL        0

#define PSW_DEFAULT_SSPR_PREV            PRL_EXT /* CBP7 should be PRL_EXT...*/

#define PSW_DEFAULT_AKEY_0               0
#define PSW_DEFAULT_AKEY_1               1

typedef enum
{
  IMSI_M_VALID = 1,
  IMSI_T_VALID,
  IMSI_VALID_END
} PswImsiValid;

#define PSW_DEFAULT_VALID_IMSI_MAP       (IMSI_M_VALID | IMSI_T_VALID)

#define PSW_DEFAULT_IMSI_M_MCC           359   /*Encoded form of 460*/
#define PSW_DEFAULT_IMSI_11_12           92    /*Encoded form of 03*/

#define PSW_DEFAULT_NUM_MDN_DIGITS       10

#define PSW_DEFAULT_ASSIGN_TMSI_ZONE_LEN 0
#define PSW_DEFAULT_ASSIGN_TMSI_ZONE_0   0
#define PSW_DEFAULT_ASSIGN_TMSI_ZONE_1   0
#define PSW_DEFAULT_ASSIGN_TMSI_ZONE_2   0
#define PSW_DEFAULT_ASSIGN_TMSI_ZONE_3   0
#define PSW_DEFAULT_ASSIGN_TMSI_ZONE_4   0
#define PSW_DEFAULT_ASSIGN_TMSI_ZONE_5   0
#define PSW_DEFAULT_ASSIGN_TMSI_ZONE_6   0
#define PSW_DEFAULT_ASSIGN_TMSI_ZONE_7   0
#define PSW_DEFAULT_TMSI_CODE            0xFFFFFFFFL
#define PSW_DEFAULT_TMSI_EXP_TIME        0

/* Up to 20 SIDs; if SID unused, set to 0 */
#define PSW_DEFAULT_MAX_SID_NID          MAX_POSITIVE_SIDS
#if defined(KDDI_EXTENSIONS)
#define PSW_DEFAULT_STORED_POS_SID_NID   0
#else
#define PSW_DEFAULT_STORED_POS_SID_NID   1
#endif

typedef enum
{
  HOME_ONLY,
  AUTOMATIC,
  AUTOMATIC_A,
  AUTOMATIC_B
} SystemSelectType;

typedef enum
{
  CPC_IDLE_ST,
  CPC_CONNECTING_ST,
  CPC_CONNECTED_ST,
  CPC_DISCONNECT_ST,
  CPC_NUM_STATES
} CpcStates;

typedef enum
{
  CPC_ORIG_EV,
  CPC_SOCO_EV,
  CPC_SOCM_EV,
  CPC_PAGE_EV,
  CPC_REL_IND_EV,
  CPC_ORIG_FAIL_EV,
  CPC_REJECT_EV,
  CPC_REL_REQ_EV,
  CPC_ALERT_EV,
  CPC_ANSWER_EV,
  CPC_NEG_CONN_EV,
  CPC_SWITCH_EV,
  CPC_DISCONNECT_EV,
  CPC_CP_CONN_EV,
  CPC_CP_CONN_ANALOG_EV,
  CPC_NUM_EVENTS,
} CpcEvents;

typedef enum {
    DBC_IDLE_ST,
    DBC_SYS_BUSY_ST,
    DBC_CONNECTED_ST,
    DBC_NUM_STATES
} DbcStates;

typedef enum {
    DBC_SEND_MSG_EV,
    DBC_DATA_BURST_RSP_EV,
    DBC_PAGE_IND_EV,
    DBC_CONNECT_IND_EV,
    DBC_ALERT_IND_EV,
    DBC_RELEASE_REQ_EV,
    DBC_DISCONNECT_IND_EV,
    DBC_PROCESS_Q_EV,
    DBC_CONN_FAIL_EV,
    DBC_ACCESS_EV,
    DBC_IDLE_EV,
    DBC_NUM_EVENTS
} DbcEvents;

typedef enum
{
  VSC_IDLE_ST,
  VSC_ALERT_ST,
  VSC_ANSWER_ST,
  VSC_WFR_CONNECT_ST,
  VSC_CONNECTED_ST,
  VSC_NUM_STATES
}VscStates;

typedef enum
{
  VSC_VS_SwitchReq,
  VSC_VS_OrigReq,
  VSC_CPC_PageInd,
  VSC_CPC_ConnectInd,
  VSC_CPC_AlertInd,
  VSC_VS_ConnectReq,
  VSC_VS_ReleaseReq,
  VSC_CPC_DisconnectInd,
  VSC_CPC_ConnectFailInd,
  VSC_NUM_EVENTS
}VscEvents;

typedef enum
{
  PSC_NULL_ST,
  PSC_INIT_ST,
  PSC_CONNECTED_ST,
  PSC_NO_DMC_CONNECTED_ST,
  PSC_DORMANT_ST,
  PSC_RECONNECT_ST,
  PSC_NUM_STATES
}PscState;

typedef enum
{
  PSC_CPC_AlertInd,
  PSC_CPC_ConnectFailInd,
  PSC_CPC_ConnectInd,
  PSC_CPC_DisconnectInd,
  PSC_CPC_PageInd,
#ifndef MTK_CBP_REL_OPTIMIZE
  PSC_CPC_ReleaseInd,
#endif
  PSC_CP_HandoffInd,
  PSC_CP_IdleInd,
  PSC_CP_NetworkPRevInd,
  PSC_CP_PacketZoneIdInd,
  PSC_CP_SidNidChangeInd,
  PSC_CP_TcAssignedInd,
  PSC_CP_ZoneInd,

  PSC_PS_ConnectReq,
  PSC_PS_DormantReq,
  PSC_PS_OrigReq,
  PSC_PS_PrefInd,
  PSC_PS_ReleaseReq,

  PSC_TC_ExpiredInd,
  PSC_dmcInd,

  PSC_CPC_TcEstablishedInd,  
  PSC_PS_SuspendReq,
  PSC_NUM_EVENTS
}PscEvents;

/*
 *    Loopback Services Controller States
 */
typedef enum {
   LSC_IDLE_ST,
   LSC_ORIG_ST,
   LSC_WFR_CONNECT_ST,
   LSC_CONNECTED_ST,
   LSC_DISCONNECT_ST,
   LSC_NUM_STATES
} LscStates;

/*
 *    Loopback Services Controller Events
 */
typedef enum {
   LSC_ORIG_EV,
   LSC_PAGE_EV,
   LSC_CONN_IND_EV,
   LSC_ALERT_EV,
   LSC_RELEASE_EV,
   LSC_DISCONNECT_EV,
   LSC_CONN_FAIL_EV,
   LSC_NUM_EVENTS
} LscEvents;

#if defined(VERIZON_EXTENSIONS)
#define PSW_DEFAULT_SID_0                2004
#define PSW_DEFAULT_SYSTEM_SELECT        AUTOMATIC_B
#else
#define PSW_DEFAULT_SID_0                7
#define PSW_DEFAULT_SYSTEM_SELECT        AUTOMATIC
#endif
#define PSW_DEFAULT_SID_1                0
#define PSW_DEFAULT_SID_2                0
#define PSW_DEFAULT_SID_3                0
#define PSW_DEFAULT_SID_4                0
#define PSW_DEFAULT_SID_5                0
#define PSW_DEFAULT_SID_6                0
#define PSW_DEFAULT_SID_7                0
#define PSW_DEFAULT_SID_8                0
#define PSW_DEFAULT_SID_9                0
#define PSW_DEFAULT_SID_10               0
#define PSW_DEFAULT_SID_11               0
#define PSW_DEFAULT_SID_12               0
#define PSW_DEFAULT_SID_13               0
#define PSW_DEFAULT_SID_14               0
#define PSW_DEFAULT_SID_15               0
#define PSW_DEFAULT_SID_16               0
#define PSW_DEFAULT_SID_17               0
#define PSW_DEFAULT_SID_18               0
#define PSW_DEFAULT_SID_19               0

#define PSW_DEFAULT_MOB_TERM_HOME                MOB_TERM_HOME_ENABLED
#define PSW_DEFAULT_MOB_TERM_FOREIGN_SID         MOB_TERM_SID_ENABLED
#define PSW_DEFAULT_MOB_TERM_FOREIGN_NID         MOB_TERM_NID_ENABLED

#define PSW_DEFAULT_MOB_TERM_MAP         (PSW_DEFAULT_MOB_TERM_HOME | PSW_DEFAULT_MOB_TERM_FOREIGN_SID | PSW_DEFAULT_MOB_TERM_FOREIGN_NID)



#define PSW_DEFAULT_SPC                  0x00000000
#define PSW_DEFAULT_OTA_CAPABILITY_MAP   (OTA_ALLOW_OTAPA | OTA_ENABLE_OTA | OTA_ENABLE_SPASM | OTA_ENABLE_SPC_CHANGE)

#define PSW_DEFAULT_HOME_SID             231
#define PSW_DEFAULT_EX                   0
#define PSW_DEFAULT_FIRSTCHP             333
#define PSW_DEFAULT_DTX                  KAL_FALSE
#define PSW_DEFAULT_FCCA                 333
#define PSW_DEFAULT_LCCA                 313
#define PSW_DEFAULT_FCCB                 334
#define PSW_DEFAULT_LCCB                 354

#define PSW_DEFAULT_NXTREG               0
#define PSW_DEFAULT_SID                  0
#define PSW_DEFAULT_LOCAID               0
#define PSW_DEFAULT_PUREG                KAL_TRUE

#define PSW_DEFAULT_CPCA                 283
#define PSW_DEFAULT_CSCA                 691
#define PSW_DEFAULT_CPCB                 384
#define PSW_DEFAULT_CSCB                 777
#define PSW_DEFAULT_AUTH_CAPABILITY_MAP  0
#define PSW_DEFAULT_UIM_ID               0


#define PSW_DEFAULT_ROAM_SETTING         0x0F
#define PSW_DEFAULT_ROAM_SETTING_SPRINT  0x0F /* change from 0x0D to 0x0F on request from LG/sprint */


/*- - - - - - End of NAM Defaults - - - - - - - - - - - - - - - - - */

/*- - - - - - - - - - */
/* MS CAP DB Defaults */
/*- - - - - - - - - - */
#define PSW_DEFAULT_SR1_SUPPORTED           KAL_TRUE
#define PSW_DEFAULT_SR3_SUPPORTED           KAL_FALSE

#define PSW_DEFAULT_RC_CLASS_1_SUPPORTED    KAL_TRUE
#define PSW_DEFAULT_RC_CLASS_2_SUPPORTED    KAL_TRUE
#define PSW_DEFAULT_RC_CLASS_3_SUPPORTED    KAL_TRUE

#define PSW_DEFAULT_UI_ENCRYPT_SUPPORTED    UI_Encrypt_Disabled

#define PSW_DEFAULT_ENHANCED_RC             KAL_TRUE

/* no mobile assist */
#define PSW_DEFAULT_REV_FCH_GATING_REQ      KAL_TRUE
#define PSW_DEFAULT_STS_SUPPORTED           KAL_FALSE
#define PSW_DEFAULT_THREE_XC_CH_SUPPORTED   KAL_FALSE
#define PSW_DEFAULT_WLL_SUPPORTED           KAL_FALSE

/* no bitmap included */
#define PSW_DEFAULT_SO_BITMAP_IND           SO_0_BITS
#define PSW_DEFAULT_TIERED_SERVICES         KAL_FALSE

#define PSW_DEFAULT_QPCH_SUPPORTED          KAL_TRUE
#define PSW_DEFAULT_SLOTTED_TIMER_SUPPORTED KAL_TRUE
#define PSW_DEFAULT_CHS_SUPPORTED           KAL_FALSE
#define PSW_DEFAULT_GATING_RATE_SET         GATING_RATE_SET_00
#define PSW_DEFAULT_EXT_CAP_INCLUDED        KAL_FALSE
#define PSW_DEFAULT_MABO_SUPPORTED          KAL_FALSE
#define PSW_DEFAULT_SDB_SUPPORTED           KAL_FALSE
#define PSW_DEFAULT_RLP_CAP_BLOP_LEN        0
#define PSW_DEFAULT_RLP_CAP_BLOP_MAX_NAK_ROUNDS_FWD   5
#define PSW_DEFAULT_RLP_CAP_BLOP_MAX_NAK_ROUNDS_REV   5
#define PSW_DEFAULT_OTD_SUPPORTED           KAL_FALSE
#define PSW_DEFAULT_FCH_SUPPORTED           KAL_TRUE
#define PSW_DEFAULT_FCH_FRAME_SIZE          FCH_FS_20MS

/* (1)1x advance feature is required by operator
 * (2)FOR_RC_11/REV_RC_8 is only used for 1x advance
 */
#define PSW_DEFAULT_FWD_FCH_LEN             4
#define PSW_DEFAULT_FWD_FCH_RC_MAP          (FOR_RC_1 | FOR_RC_2 | FOR_RC_3 | FOR_RC_4 | FOR_RC_5 | FOR_RC_11)
#define PSW_DEFAULT_REV_FCH_LEN             3
#define PSW_DEFAULT_REV_FCH_RC_MAP          (REV_RC_1 | REV_RC_2 | REV_RC_3 | REV_RC_4 |REV_RC_8)

#define PSW_DEFAULT_DCCH_SUPPORTED          KAL_FALSE
#define PSW_DEFAULT_DCCH_FRAME_SIZE         DCCH_FS_20MS
#define PSW_DEFAULT_FWD_DCCH_LEN            3
#define PSW_DEFAULT_FWD_DCCH_RC_MAP         0
#define PSW_DEFAULT_REV_DCCH_LEN            2
#define PSW_DEFAULT_REV_DCCH_RC_MAP         REV_RC_INVALID

#define PSW_DEFAULT_FWD_SCH_SUPPORTED       KAL_TRUE
#define PSW_DEFAULT_REV_SCH_SUPPORTED       KAL_TRUE

/* 1x advance feature is not required by SCH */
#define PSW_DEFAULT_FWD_SCH_LEN               3
#define PSW_DEFAULT_FWD_SCH_RC_MAP            (FOR_RC_3 | FOR_RC_4 | FOR_RC_5)
#define PSW_DEFAULT_FWD_SCH_NUM               1

#define PSW_DEFAULT_FWD_TURBO_SUPPORTED_SCH1  KAL_TRUE
#define PSW_DEFAULT_FWD_TURBO_SUPPORTED_SCH2  KAL_FALSE
#define PSW_DEFAULT_FWD_MAX_TURBO_BLOCK_SIZE  4
#define PSW_DEFAULT_FWD_CONV_SUPPORTED_SCH1   KAL_TRUE
#define PSW_DEFAULT_FWD_CONV_SUPPORTED_SCH2   KAL_FALSE
#define PSW_DEFAULT_FWD_MAX_CONV_BLOCK_SIZE   4

/* 1x advance feature is not required by SCH */
#define PSW_DEFAULT_REV_SCH_LEN               2
#define PSW_DEFAULT_REV_SCH_RC_MAP            (REV_RC_3 | REV_RC_4 )
#define PSW_DEFAULT_REV_SCH_NUM               1

#define PSW_DEFAULT_REV_TURBO_SUPPORTED_SCH1  KAL_TRUE
#define PSW_DEFAULT_REV_TURBO_SUPPORTED_SCH2  KAL_FALSE
#define PSW_DEFAULT_REV_MAX_TURBO_BLOCK_SIZE  4
#define PSW_DEFAULT_REV_CONV_SUPPORTED_SCH1   KAL_TRUE
#define PSW_DEFAULT_REV_CONV_SUPPORTED_SCH2   KAL_FALSE
#define PSW_DEFAULT_REV_MAX_CONV_BLOCK_SIZE   4

#define PSW_DEFAULT_NON_OCTET_ALIGNED_DATA    KAL_FALSE
#define PSW_DEFAULT_OCTET_ALIGNED_DATA        KAL_FALSE
#define PSW_DEFAULT_REV_SCH_DURATION_UNIT     4       /* 100 ms */
#define PSW_DEFAULT_REV_SCH_DURATION          0x01FF /* infinite */

/* Information record for Extended Multiplex Option */
#define PSW_DEFAULT_FWD_FCH_MO_SUPPORT        (MUX_OPTION_0x1 | MUX_OPTION_0x2)
#define PSW_DEFAULT_REV_FCH_MO_SUPPORT        (MUX_OPTION_0x1 | MUX_OPTION_0x2)
#define PSW_DEFAULT_FWD_DCCH_MO_SUPPORT       0
#define PSW_DEFAULT_REV_DCCH_MO_SUPPORT       0
#define PSW_DEFAULT_FWD_SCH_HIGHEST_RS1_MO    FOR_SCH_0x921_MUX_OPTION
#define PSW_DEFAULT_FWD_SCH_HIGHEST_RS2_MO    FOR_SCH_0x912_MUX_OPTION
#define PSW_DEFAULT_REV_SCH_HIGHEST_RS1_MO    FOR_SCH_0x921_MUX_OPTION
#define PSW_DEFAULT_REV_SCH_HIGHEST_RS2_MO    FOR_SCH_0x912_MUX_OPTION

/* Information record for Geo-location codes */
#define PSW_DEFAULT_GEO_LOC_INCL              KAL_TRUE

#if defined(SYS_OPTION_GPS_VASCO)
 #define PSW_DEFAULT_GEO_LOC_TYPE              GL_AFLT_AND_GPS
 #define PSW_DEFAULT_LOC_GPS_ACQ_CAP           3
#elif ((defined SYS_OPTION_GPS_EXTERNAL) || (SYS_OPTION_GPS_HW ==SYS_GPS_LOCAL_INTERNAL))
 #define PSW_DEFAULT_GEO_LOC_TYPE              GL_AFLT_AND_GPS
 #define PSW_DEFAULT_LOC_GPS_ACQ_CAP           1
#else
 #define PSW_DEFAULT_GEO_LOC_TYPE              GL_AFLT
 #define PSW_DEFAULT_LOC_GPS_ACQ_CAP           0
#endif

/* Encryption Mode Supported */
#define PSW_DEFAULT_ENCRYPT_MODE_SUPPORTED    (Basic_Encrypt_Supported)

/* Operating Modes, (OP_MODEp) settings */
#define  OP_MODE0 0x80            /* IS-95B CDMA Band Class 1 and */
                                  /* CDMA Band CLASS 4            */
#define  OP_MODE1 0x40            /* IS-95B CDMA Band Class 0     */
#define  OP_MODE2 0x20            /* IS-95B analog mode           */
#define  OP_MODE3 0x10            /* IS-91 wide analog mode       */
#define  OP_MODE4 0x08            /* IS-91 narrow analog mode     */

/* Mobile Station Operation Mode */
#define PSW_DEFAULT_OP_MODE                   ( OP_MODE0 | OP_MODE1 )

#define PSW_DEFAULT_LOC_PILOT_PH_CAP          4  /* Sixteenth Chip Meas Cap */
#define PSW_DEFAULT_LOC_CALC_CAP              0
#define PSW_DEFAULT_LOC_TCP_CAP               KAL_TRUE
#define PSW_DEFAULT_LOC_MS_ORIG_CAP           KAL_TRUE

/* DCCH Only Ping Timeout 15 second */
#define PSW_DEFAULT_DCCH_ONLY_PING_PERIOD     15000   /* MS resolution */
#define PSW_DEFAULT_DATA_READY_TO_SEND        KAL_TRUE    /* DRS */
#define PSW_DEFAULT_CHANNEL_INDICATOR         CH_IND_FCH
#define PSW_DEFAULT_WLL_INCL                  KAL_FALSE   /* Not wireless local loop */

/* PDCH params */
#ifdef KDDI_EXTENSIONS
#define PSW_DEFAULT_PDCH_CHM_SUPPORTED        KAL_FALSE
#define PSW_DEFAULT_FWD_PDCH_SUPPORTED        KAL_FALSE
#define PSW_DEFAULT_PDCH_ACK_DELAY            KAL_FALSE
#else
#define PSW_DEFAULT_PDCH_CHM_SUPPORTED        KAL_TRUE
#define PSW_DEFAULT_FWD_PDCH_SUPPORTED        KAL_TRUE
#define PSW_DEFAULT_PDCH_ACK_DELAY            KAL_TRUE
#endif
#define PSW_DEFAULT_EXTENDED_CHAN_INDICATOR   3
#define PSW_DEFAULT_PDCH_NUM_ARQ_CHAN         0
#define PSW_DEFAULT_FWD_PDCH_RC_MAP           0x7
#define PSW_DEFAULT_CH_CONFIG_SUP_MAP         ( FPDCH_EXTCHIND_1 | FPDCH_EXTCHIND_2 |  \
                                                FPDCH_EXTCHIND_3 | FPDCH_EXTCHIND_4 |  \
                                                FPDCH_EXTCHIND_5 | FPDCH_EXTCHIND_6 )

#define PSW_DEFAULT_SDB_DESIRED_ONLY          KAL_FALSE
#define PSW_DEFAULT_INFO_REC_CAPABILITY_MAP   (CP_ACCESS_ENTRY_HO_ENABLED | \
                                               CP_ACCESS_PROBE_HO_ENABLED | CP_MAHHO_ENABLED)
/*- - - - - - End of MS CAP DB Defaults - - - - - - - - - - - - - - */


/* Zone based registration list */
typedef struct
{
    kal_uint16    regZone;      /* registration zone           */
    kal_uint16    sid;          /* system id                   */
    kal_uint16    nid;          /* network id                  */
    kal_uint16    ageTimer;     /* age limit in seconds        */
    kal_bool      timerEnabled;
    kal_uint8     block;        /* PCS block or serving system */
    SysCdmaBandT bandClass;
} ZoneList;


/* System/Network registration list */
typedef struct
{
    kal_uint16    sid;          /* system id                   */
    kal_uint16    nid;          /* network id                  */
    kal_uint16    ageTimer;     /* age limit in seconds        */
    kal_bool      timerEnabled;
    kal_uint8     block;        /* PCS block or serving system */
    SysCdmaBandT bandClass; 
} SidNidList;


/*****************************************************************************
 * IMSI structure 
 ****************************************************************************/

  /* An IMSI is <= 15 digits in length. It is composed of:           */
  /*     mcc (3 digits) + nmsi (up to 12 digits)                     */

  /* An NMSI is <= 12 digits in length. Is is composed of:           */
  /*     imsi_11_12 (2 digits) + imsi_s (10 digits)  */
  /* In turn, imsi_s is composed of 2 parts:                         */
  /*    imsi_s1 (upper 3 digits) + imsi_s2 (lower 7 digits)          */

  /* If the imsi is Class 0 then imsiClass must be set to            */
  /*  CP_IMSI_CLASS_0 and addrNum is set to 8                        */
  /* If the imsi is Class 1 then imsiClass must be set to            */
  /*  CP_IMSI_CLASS_1 and addrNum is set to # of digits in NMSI - 4  */

typedef struct
{
    kal_uint16 mcc;                  /* Mobile Country Code                */
    kal_uint8  imsi_11_12;           /* 7 bit  IMSI_11_12                  */
    kal_uint16 imsi_s2;              /* 10 bit IMSI_S2 value               */
    kal_uint32 imsi_s1;              /* 24 bit IMSI_S1 value               */
    kal_uint8  imsiClass;            /* CP_IMSI_CLASS_0/1 indication       */
    kal_uint8  addrNum;              /* number of digits in NMSI - 4       */
} IMSIType;


/*****************************************************************************
 * IS-95 NAM structure
 ****************************************************************************/
typedef enum
{
    NAM_1 = 1,
    NAM_2
} NamNumber;

typedef struct
{
    /* Permanent Mobile Station Indicators                                */
    kal_uint32    ESN;            /* Place Holder for ESN, Read only         */
    kal_uint8     SCMp[NAM_BANDS_SUPPORTED];
                                /* Station Class Mark for each band       */
    kal_uint8     SLOT_CYCLE_INDEXp; /* slot cycle index                     */
    kal_uint16    MOB_FIRM_REVp;  /* mobile firmware revision                */
    kal_uint8     MOB_MODELp;     /* Manufacturers  model number             */
    kal_uint8     MOB_P_REVp[NAM_BANDS_SUPPORTED];
                                /* Protocol revision number for each band */

    /* Semi-Permanent Mobile Station Indicators                           */
    kal_bool      ValidZoneEntry; /* indicates a valid ZONE_LIST entry        */
    ZoneList  ZONE_LISTsp;    /* zone based registration list             */
    kal_bool      ValidSidNidEntry; /* indicates a valid SID_NID_LISTsp entry */
    SidNidList SID_NID_LISTsp;  /* System/Network registration list       */
    kal_int32     BASE_LAT_REGsp; /* latitude from base last registered on    */
    kal_int32     BASE_LONG_REGsp;/* longitude from base last registered on   */
    kal_uint16    REG_DIST_REGsp; /* registration distance from last base     */
    kal_uint8     LCKRSN_Psp;     /* lock code reason                         */
    kal_uint8     MAINTRSNsp;     /* maintenance reason                       */
    kal_bool      DIGITAL_REGsp;  /* previous registration on digtal system   */

    /* NAM indicators                                                     */
    kal_uint8     PREF_BANDp;     /* No longer used                           */
    kal_uint8     RESERVED0;      /* Previous location for preferred mode     */
    kal_uint8     PREF_BLOCK_BAND1p;/* No longer used                         */
    kal_uint8     PREF_SERV_BAND0p; /* No longer used                         */

    kal_uint8     SPCc;             /* left retry count */
    kal_uint32    RESERVED1[2];    /* Previous Location for A_Key            */
    kal_uint8     RESERVED2[7];    /* Place Holder for previous SSDA          */
    kal_uint8     RESERVED3[8];    /* Place Holder for previous SSDB          */
    kal_uint8     COUNTsp;         /* Call History Parameter                  */
    kal_uint8     ValidIMSImap;    /* Refer to Bit Map text at top of file    */ 
    IMSIType  IMSI_Mp;         /* IMSI_M - min                            */
    IMSIType  IMSI_Tp;         /* IMSI_T                                  */
    kal_uint8     ASSIGNING_TMSI_ZONE_LENsp;
    kal_uint8     ASSIGNING_TMSI_ZONEsp[ CP_MAX_TMSI_ZONE_LEN ];
    /*   assigning tmsi zone                    */
    kal_uint32    TMSI_CODEsp;     /* tmsi code                               */
    kal_uint32    TMSI_EXP_TIMEsp; /* tmsi expiration timer                   */
    kal_uint16    SIDp[MAX_POSITIVE_SIDS]; /* home system ids stored in NAM   */
    kal_uint16    NIDp[MAX_POSITIVE_SIDS]; /* home network ids stored in NAM  */
    kal_uint16    NEG_SIDp[MAX_NEGATIVE_SIDS]; /* negative system ids stored in NAM */
    kal_uint16    NEG_NIDp[MAX_NEGATIVE_SIDS]; /* negative network ids stored in NAM */
    kal_uint8     MAX_SID_NID;     /* Max sid/nid pairs that can be stored in NAM*/
    kal_uint8     STORED_POS_SID_NID;  /* No of Pos sid/nid pairs stored in NAM */
    kal_uint8     STORED_NEG_SID_NID;  /* No of Neg sid/nid pairs stored in NAM */
    kal_uint8     ACCOLCp;         /* access overload class                    */
    kal_uint8     MobTermMap;      /* receive mobile terminated calls          */
    kal_uint8     BCAST_ADDR_LENp; /* broadcast address length (0-not config.) */
    kal_uint8     BCAST_ADDRp[ CP_BCAST_ADDRESS_MAX_SIZE];
                               /* broadcast address data                   */
    kal_uint32    SPCp;             /* Place holder for previous SPCp           */
    kal_uint8     OTA_Capability_Map; /* See Bit Map explanation at top of file*/
    kal_uint8     MDN_NUM_DIGITS;
    kal_uint8     Mdn[NAM_MAX_MDN_DIGITS];  /* MDN - Mobile directory number   */

    /* Analog support */
    kal_uint16    HOME_SIDp;       /* home sid for analog system support       */
    kal_uint8     EXp;             /* extended address support for analog      */
    kal_uint16    FIRSTCHPp;       /* first paging channel                     */
    kal_uint8     DTXp;            /* Analog DTX Option                        */
    kal_uint16    FCCA, LCCA;      /* Analog Custom Control Channel Set A      */
    kal_uint16    FCCB, LCCB;      /* Custom Control Channel Set B             */
    kal_uint32    NXTREGsp;
    kal_uint16    SIDsp;
    kal_uint16    LOCAIDsp;
    kal_bool      PUREGsp;

    kal_uint16    CPCA, CSCA;      /* CDMA Primary (and Secondary) Channel A   */
    kal_uint16    CPCB, CSCB;      /* CDMA Primary (and Secondary) Channel B   */
    kal_uint8     RESERVED5[125];  /* Previous Mobile IP parameters            */
    kal_uint8     Auth_Capability_Map; /* See Bit Map Explination at top of file */
    kal_uint8     RESERVED6[89];   /* Previous IS801 Data Call parameters      */
    kal_uint8     SmsTlMaxRetry;
    kal_uint32    UIM_ID;
    kal_uint8     RoamingSetting;  /* Only for Sprint                          */
    kal_uint8     SystemSelect;
    /* Following array reserved for future use. If new Nam parameter 
     * needed then decrement from array below. Total Nam size is always 
     * 560 bytes. */
    kal_uint8     FUTURE_EXPAND_FIELDs[REMAINING_NAM_SIZE];

    /* Checksum support */
    kal_uint16   Checksum;            /* checksum for checksum support         */
} PswIs95NamT;

/*****************************/
/* PswNam  definitions end   */
/*****************************/


/********************************/
/* SecureData definitions start */
/********************************/

/* The goal is to use a EXE_SIZE_MSG_BUFF_3 when writing secure data
 * to Dbm.  Hence, 
 * sizeof(SecureDataStructT) + sizeof(DbmWriteMsgT) = EXE_SIZE_MSG_BUFF_3.
 * sizeof(DbmWriteMsgT) = 14 bytes.  EXE_SIZE_MSG_BUFF_3 = 448
 * SecureDataStructT must be 434 bytes.
 * MobileId_Spread_Structure = 33 bytes.
 * Revision + Akey(1&2) + SSD(1&2) + SPC + SIP + AAA + HA + checksum = 112 bytes.
 * SECURE_DATA_RESERVED_SIZE = 434 - 33 - 112 -> 289 bytes.
 */
#define SECURE_DATA_RESERVED_SIZE     289

typedef struct 
{
    kal_uint32  *SECURITY_LAYER_1;
    kal_uint16   MOBILE_ID_2;
    kal_uint32  *SECURITY_LAYER_2;
    kal_uint16   MOBILE_ID_4;
    kal_uint32  *SECURITY_LAYER_3;
    kal_uint32  *SECURITY_LAYER_4;
    kal_uint16   MOBILE_ID_1;
    kal_uint32  *SECURITY_LAYER_5;
    kal_uint16   MOBILE_ID_3;
    kal_uint32  *SECURITY_LAYER_6;
    kal_uint8   mobileIdType;
} MobileId_Spread_Structure;

typedef struct
{
    kal_uint16    Revision;        /* Secure Data Revision ID                  */
    kal_uint32    AKEY_NAM1[2];    /* Binary Authentication Key for CAVE       */
    kal_uint8     SSDA_NAM1[8];    /* Shared Secret Data 'A'                   */
    kal_uint8     SSDB_NAM1[8];    /* Shared Secret Data 'B'                   */
    kal_uint32    AKEY_NAM2[2];    /* Binary Authentication Key for CAVE       */
    kal_uint8     SSDA_NAM2[8];    /* Shared Secret Data 'A'                   */
    kal_uint8     SSDB_NAM2[8];    /* Shared Secret Data 'B'                   */
    kal_uint32    SPCp;            /* Service Programming Code                 */
    kal_uint8     FutureExpansion[SECURE_DATA_RESERVED_SIZE];
    kal_uint16    checkSum;
} SecureDataStructT;

/********************************/
/* SecureData definitions end   */
/********************************/


/*****************************/
/* MsCapDb definitions start */
/*****************************/

/* define set of frame sizes */
typedef enum
{
   DCCH_FS_20MS = 1,          /* 20 ms frame size only         */
   DCCH_FS_5MS = 2,           /* 5 ms frame size only          */
   DCCH_FS_5MS_AND_20MS = 3   /* both 5 and 20 ms frame size   */
} DcchFrameSizeType;

typedef enum
{
   FCH_FS_20MS = 0,
   FCH_FS_5MS_AND_20MS = 1
} FchFrameSizeType;

/* define set of RC settings */

typedef enum
{
   FOR_RC_1 = 0x100,
   FOR_RC_2 = 0x80,
   FOR_RC_3 = 0x40,
   FOR_RC_4 = 0x20,
   FOR_RC_5 = 0x10,
   FOR_RC_6 = 0x8,
   FOR_RC_7 = 0x4,
   FOR_RC_8 = 0x2,
   FOR_RC_9 = 0x1,
   FOR_RC_10 = 0x200,
   FOR_RC_11 = 0x400,
   FOR_RC_12 = 0x800,
   FOR_RC_INVALID = 0
} ForRcType;

typedef enum
{
   REV_RC_1 = 0x20,
   REV_RC_2 = 0x10,
   REV_RC_3 = 0x8,
   REV_RC_4 = 0x4,
   REV_RC_5 = 0x2,
   REV_RC_6 = 0x1,
   REV_RC_7 = 0x40,                 /*CBP8 --- Added for backword compatibility with CBP7*/
   REV_RC_8 = 0x80,                 /*CBP8 --- Added for backword compatibility with CBP7*/
   REV_RC_INVALID = 0
} RevRcType;


/* define set of RC Preference settings */
typedef enum
{
   RC_PREF_1 = 1,
   RC_PREF_2 = 2,
   RC_PREF_3 = 3,
   RC_PREF_4 = 4,
   RC_PREF_5 = 5,
   RC_PREF_6 = 6,
   RC_PREF_7 = 7,
   RC_PREF_8 = 8,
   RC_PREF_9 = 9,
   RC_PREF_10 = 10,
   RC_PREF_11 = 11,
   RC_PREF_12 = 12
} RcPrefType;



/* PDCH Channel Config Types (ExtChInd) Support Map */
typedef enum
{
   FPDCH_EXTCHIND_INVALID = 0,
   FPDCH_EXTCHIND_1 = 0x20,
   FPDCH_EXTCHIND_2 = 0x10,
   FPDCH_EXTCHIND_3 = 0x8,
   FPDCH_EXTCHIND_4 = 0x4,
   FPDCH_EXTCHIND_5 = 0x2, 
   FPDCH_EXTCHIND_6 = 0x1
} PDCHChCfgType;



/* define set of Geo-location support */
typedef enum
{
   GL_NO_SUPPORT = 0,
   GL_AFLT = 1,
   GL_AFLT_AND_GPS = 2,
   GL_GPS = 3
} GeoLocType;
             
typedef enum  
{      
   GATING_RATE_SET_00  =  0x00,     /* Gating rates 1                */
   GATING_RATE_SET_01  =  0x01,     /* Gating rates 1 and 1/2        */ 
   GATING_RATE_SET_10  =  0x02,     /* Gating rates 1, 1/2 and 1/4   */
   GATING_RATE_SET_11  =  0x03      /* reserved                      */
} GatingRateSetType;


/* FOR SCH Multiplex options --------------------------------------- */
typedef enum  
{      
   FOR_SCH_0x03_MUX_OPTION  = 0x0001,   /* For SCH 0x03 Mux options,  bit,   */
   FOR_SCH_0x809_MUX_OPTION = 0x0002,   /* For SCH 0x809 Mux options, bit,   */
   FOR_SCH_0x811_MUX_OPTION = 0x0004,   /* For SCH 0x811 Mux options, bit,   */
   FOR_SCH_0x821_MUX_OPTION = 0x0008,   /* For SCH 0x821 Mux options, bit,   */
   FOR_SCH_0x905_MUX_OPTION = 0x0010,   /* For SCH 0x905 Mux options, bit,   */
   FOR_SCH_0x909_MUX_OPTION = 0x0020,   /* For SCH 0x909 Mux options, bit,   */
   FOR_SCH_0x911_MUX_OPTION = 0x0040,   /* For SCH 0x911 Mux options, bit,   */
   FOR_SCH_0x921_MUX_OPTION = 0x0080,   /* For SCH 0x921 Mux options, bit,   */

   FOR_SCH_0x04_MUX_OPTION  = 0x0100,   /* For SCH 0x04 Mux options,  bit,   */
   FOR_SCH_0x80a_MUX_OPTION = 0x0200,   /* For SCH 0x80a Mux options, bit,   */
   FOR_SCH_0x812_MUX_OPTION = 0x0400,   /* For SCH 0x812 Mux options, bit,   */
   FOR_SCH_0x822_MUX_OPTION = 0x0800,   /* For SCH 0x822 Mux options, bit,   */
   FOR_SCH_0x906_MUX_OPTION = 0x1000,   /* For SCH 0x906 Mux options, bit,   */
   FOR_SCH_0x90a_MUX_OPTION = 0x2000,   /* For SCH 0x90a Mux options, bit,   */
   FOR_SCH_0x912_MUX_OPTION = 0x4000,   /* For SCH 0x912 Mux options, bit,   */
   FOR_SCH_0x922_MUX_OPTION = 0x8000    /* For SCH 0x922 Mux options, bit,   */
} ForSchMuxOptions;


/* REV SCH Multiplex options --------------------------------------- */
typedef enum  
{      
   REV_SCH_0x03_MUX_OPTION  = 0x0001,   /* Rev SCH 0x03 Mux options,  bit,   */
   REV_SCH_0x809_MUX_OPTION = 0x0002,   /* Rev SCH 0x809 Mux options, bit,   */
   REV_SCH_0x811_MUX_OPTION = 0x0004,   /* Rev SCH 0x811 Mux options, bit,   */
   REV_SCH_0x821_MUX_OPTION = 0x0008,   /* Rev SCH 0x821 Mux options, bit,   */
   REV_SCH_0x905_MUX_OPTION = 0x0010,   /* Rev SCH 0x905 Mux options, bit,   */
   REV_SCH_0x909_MUX_OPTION = 0x0020,   /* Rev SCH 0x909 Mux options, bit,   */
   REV_SCH_0x911_MUX_OPTION = 0x0040,   /* Rev SCH 0x911 Mux options, bit,   */
   REV_SCH_0x921_MUX_OPTION = 0x0080,   /* Rev SCH 0x921 Mux options, bit,   */

   REV_SCH_0x04_MUX_OPTION  = 0x0100,   /* Rev SCH 0x04 Mux options,  bit,   */
   REV_SCH_0x80a_MUX_OPTION = 0x0200,   /* Rev SCH 0x80a Mux options, bit,   */
   REV_SCH_0x812_MUX_OPTION = 0x0400,   /* Rev SCH 0x812 Mux options, bit,   */
   REV_SCH_0x822_MUX_OPTION = 0x0800,   /* Rev SCH 0x822 Mux options, bit,   */
   REV_SCH_0x906_MUX_OPTION = 0x1000,   /* Rev SCH 0x906 Mux options, bit,   */
   REV_SCH_0x90a_MUX_OPTION = 0x2000,   /* Rev SCH 0x90a Mux options, bit,   */
   REV_SCH_0x912_MUX_OPTION = 0x4000,   /* Rev SCH 0x912 Mux options, bit,   */
   REV_SCH_0x922_MUX_OPTION = 0x8000    /* Rev SCH 0x922 Mux options, bit,   */
} RevSchMuxOptions;

typedef enum
{
   CP_ACCESS_ENTRY_HO_ENABLED  = 0x01,
   CP_ACCESS_PROBE_HO_ENABLED  = 0x02,
   CP_ANALOG_SEARCH_ENABLED    = 0x04,
   CP_HOPPING_BEACON_ENABLED   = 0x08, 
   CP_MAHHO_ENABLED            = 0x10,
   CP_PUF_ENABLED              = 0x20,
   CP_ANALOG_553A_ENABLED      = 0x40
} InfoRecCapability;

/* Multiplex options -------------------------------------- */
typedef enum  
{      
   MUX_OPTION_0x1      = 0x1,
   MUX_OPTION_0x2      = 0x2,
   MUX_OPTION_0x704    = 0x4,
   MUX_OPTION_0xF00    = 0xF00
} MuxOptionsTypes;

typedef enum
{
   FOR_FCH,
   REV_FCH,
   FOR_DCCH,
   REV_DCCH
} TrafficChannelTypes;

/* define set of bitmap indicator */
typedef enum
{
   SO_0_BITS = 0,
   SO_4_BITS = 1,
   SO_8_BITS = 2,
   SO_16_BITS = 3
} ServOptBitmapInd;

typedef enum
{
   UI_Encrypt_Disabled = 0,
   UI_Encrypt_ORYX_Enabled = 1
} UIEncryptSuppType;

typedef enum
{
   Basic_Encrypt_Supported = 0,
   Basic_And_Enhanced_Supported = 1
} EncryptModeSuppType;

typedef enum
{
   CH_IND_RESERVED = 0x00,
   CH_IND_FCH      = 0x01,
   CH_IND_DCCH     = 0x02,
   CH_IND_FCH_AND_DCCH = 0x03
} ChIndType;

typedef struct
{
   FchFrameSizeType  fchFrameSize;           /* FCH_FRAME_SIZE, FCH frame Size capability indicator   */
   kal_uint8             forFchLen;              /* FOR_FCH_LEN, Fwd Fundemental Channel Config Info. Len */
/* HAC-061400 ForRcType */
   kal_uint16            forFchRcMap;            /* FOR_FCH_RC_MAP Forward Fundemental Radio Config. Info.*/
   kal_uint8             revFchLen;              /* REV_FCH_LEN, Rev Fundemental Channel Config Info. Len */
   RevRcType         revFchRcMap;            /* REV_FCH_RC_MAP Reverse Fundemental Radio Config. Info.*/
} FchTypeSpecificFieldsType;


typedef struct
{
   DcchFrameSizeType dcchFrameSize;          /* DCCH_FRAME_SIZE, DCCH frame Size capability indicator */
   kal_uint8             forDcchLen;             /* FOR_DCCH_LEN, Fwd Dedicated Ctrl Ch. Config Info. Len */
/* HAC-061400    ForRcType */
   kal_uint16            forDcchRcMap;           /* FOR_DCCH_RC_MAP Fwd Dedicated Ch. Radio Config. Info. */
   kal_uint8             revDcchLen;             /* REV_DCCH_LEN, Rev Dedicated Ctrl Ch. Config Info. Len */
   RevRcType         revDcchRcMap;           /* REV_DCCH_RC_MAP Rev Dedicated Ch. Radio Config. Info. */
} DcchTypeSpecificFieldsType;


typedef struct
{
   kal_uint8             forSchLen;              /* FOR_SCH_LEN, Fwd Supplemental length in 3 bit uints   */
   kal_uint16            forSchRcMap;            /* FOR_SCH_RC_MAP, Fwd Supplemental Channel Radio Config  
                                                Information.                                          */
   kal_uint8             forSchNum;              /* FOR_SCH_NUM, Number of Forward Supplemental Cannel    */               
   kal_bool              forTurboSupportedSch1;  /* FOR_TURBO_SUPPORTED, 1 Ch Fwd Turbo Coding Supported  */
   kal_bool              forTurboSupportedSch2;  /* FOR_TURBO_SUPPORTED, 2 Ch Fwd Turbo Coding Supported  */
   kal_uint8             forMaxTurboBlockSize;   /* FOR_MAX_TURBO_BLOCK_SIZE, Fwd Max Turbo Block Size    */
   kal_bool              forConvSupportedSch1;   /* FOR_CONV_SUPPORTED, 1 Ch Fwd convolutional Coding Supported */
   kal_bool              forConvSupportedSch2;   /* FOR_CONV_SUPPORTED, 2 Ch Fwd convolutional Coding Supported */
   kal_uint8             forMaxConvBlockSize;    /* FOR_MAX_CONV_BLOCK_SIZE, Fwd Max Conv. Code Block Size*/
} ForSchTypeSpecificFieldsType;


typedef struct
{
   kal_uint8             revSchLen;              /* REV_SCH_LEN, Rev Supplemental length in 3 bit uints   */
   kal_uint8             revSchRcMap;            /* REV_SCH_RC_MAP Rev Dedicated Ch. Radio Config. Info.  */
   kal_uint8             revSchNum;              /* REV_SCH_NUM, Number of Reverse Supplemental Cannel    */               
   kal_bool              revTurboSupportedSch1;  /* REV_TURBO_SUPPORTED, 1 Ch Rev Turbo Coding Supported  */
   kal_bool              revTurboSupportedSch2;  /* REV_TURBO_SUPPORTED, 2 Ch Rev Turbo Coding Supported  */
   kal_uint8             revMaxTurboBlockSize;   /* REV_MAX_TURBO_BLOCK_SIZE, Rev Max Turbo Block Size    */
   kal_bool              revConvSupportedSch1;   /* REV_CONV_SUPPORTED, 1 Ch Rev convolutional Coding Supported */
   kal_bool              revConvSupportedSch2;   /* REV_CONV_SUPPORTED, 2 Ch Rev convolutional Coding Supported */
   kal_uint8             revMaxConvBlockSize;    /* REV_MAX_CONV_BLOCK_SIZE, Rev Max Conv. Code Block Size*/
} RevSchTypeSpecificFieldsType;

typedef struct
{
   kal_uint8             maxMsNakRoundsFwd;      /* MAX_MS_NAK_ROUNDS_FWD Maximum number of RLP_NAK rounds
                                                supported by the MS on the forward traffic channel    */             
   kal_uint8             maxMsNakRoundsRev;      /* MAX_MS_NAK_ROUNDS_REV Maximum number of RLP_NAK rounds
                                                supported by the MS on the reverse traffic channel    */  
} RlpCapBlopLenType;


/* define structure for MS capability database */
typedef struct
{
   kal_bool              sr1Supported;
   kal_bool              sr3Supported;
   kal_bool              rcClass1Supported;
   kal_bool              rcClass2Supported;
   kal_bool              rcClass3Supported;
   UIEncryptSuppType UIEncryptionSupported;
   kal_bool              enhancedRc;
   kal_uint16            Reserved1;
   kal_bool              revFchGatingReq;
   kal_bool              stsSupported;
   kal_bool              threeXCchSupported;
   kal_bool              wllSupported;
   ServOptBitmapInd  soBitmapInd;
   kal_uint8              Reserved;
   kal_bool              tieredServices;
   /*------- Information record for Capability Informtion --------------------------------------------*/
   kal_bool              qpchSupported;          /* QPCH, Quick Paging Channel Supported                  */
   kal_bool              slottedTimerSupported;  /* SLOTTED_TIMER, Slotted Timer Supported                */
   kal_bool              chsSupported;           /* CHS_SUPPORTED, Control Hold Mode indicator            */
   GatingRateSetType gatingRateSet;          /* GATING_RATE_SET, set of supported Reverse Pilot 
                                                gating rates.                                         */
   kal_bool              extCapIncluded;         /* EXT_CAP_INCLUDED, Extended Capabilities Included 
                                                Indicator                                             */
   kal_bool              maboSupported;          /* MABO, Mobile Assisted Burst Operation Capability 
                                                indicator                                             */
   kal_bool              sdbSupported;           /* SDB, Short Data Burst supported Indicator             */
   kal_uint8             rlpCapBlopLen;          /* Field NOT USED. Delete during next MS Cap Cleanup     */
   RlpCapBlopLenType rlpCapBlop;             /* RLP_CAP_BLOP, RLP capability information block of bits*/

   /*------- Information record for Channel Configuration Capability Information ---------------------*/
   kal_bool              otdSupported;           /* OTD_SUPPORTED, OTD Supported Indicator                */

   kal_bool              fchSupported;           /* FCH_SUPPORTED, Fundemental Ch. Supported Indicator    */

   /* FCH Type-specific fields, FCH Capability Infornmation */
   FchTypeSpecificFieldsType fchTypeSpecificFields; 

   kal_bool              dcchSupported;          /* DCCH_SUPPORTED, Dedicated Ctrl Ch supported Indicator */

   /* DCCH Type-specific fields, DCCH Capability Information*/
   DcchTypeSpecificFieldsType dcchTypeSpecificFields; 

   kal_bool              forSchSupported;        /* FOR_SCH_SUPPORTED, Fwd Supplemental Ch. Supported     */ 

   /* FOR_SCH, Type-specific fields, Forward Supplemental
      Channel Configuration Capability Information          */
   ForSchTypeSpecificFieldsType forSchTypeSpecificFields;

   kal_bool              revSchSupported;        /* REV_SCH_SUPPORTED, Reverse Supplemental Ch. Supported */ 

   /* REV_SCH Type-specific fields, Reverse Supplemental
      Channel Configuration Capability Information          */
   RevSchTypeSpecificFieldsType revSchTypeSpecificFields;

   /* Field to hardcode rev sch duration unit (9 bit), if   */
   /* set to 0x0000 rc will do the calculations itself      */
   kal_uint8             revSchDurationUnit;
   kal_uint16            revSchDuration; 
  
    /* NONOCTET_ALIGNED_DATA Non-octet Aligned Data Block 
       supported indicator.                                  */
   kal_bool              nonOctetAlignedData;

   kal_bool              octetAlignedData;       /* OCTET_ALIGNED_DATA, Octet Aligned Data Block supported 
                                                                                   indicator          */
   /*------- Information record for Extended Multiplex Option ----------------------------------------*/

   kal_uint8             forFchMoSupport;        /* For FCH Mux option supported */

   kal_uint8             revFchMoSupport;        /* Rev FCH Mux option supported */

   kal_uint8             forDcchMoSupport;       /* MO_FOR_DCCH, Forward Dedicated Control Channel 
                                                Multiplex Options                                     */
   kal_uint8             revDcchMoSupport;       /* MO_REV_DCCH, Reverse Dedicated Control Channel 
                                                Multiplex Options                                     */
   ForSchMuxOptions  forSchHighestRs1Mo;     /* The highest Rate Set 1 Forward Supplemental 
                                                Channel Multiplex option supported                    */
   ForSchMuxOptions  forSchHighestRs2Mo;     /* The highest Rate Set 2 Forward Supplemental 
                                                Channel Multiplex option supported                    */
   RevSchMuxOptions  revSchHighestRs1Mo;     /* The highest Rate Set 1 Reverse Supplemental 
                                                Channel Multiplex option supported                    */
   RevSchMuxOptions  revSchHighestRs2Mo;     /* The highest Rate Set 2 Reverse Supplemental 
                                                Channel Multiplex option supported                    */
   /*------- Information record for Geo-location codes -----------------------------------------------*/

   GeoLocType        geoLocType;             /* GEO_LOC, Geo-location Codes                           */
   kal_uint8             Reserved2;              /* Previous bandSubclassInfo_5 location        */
   kal_uint8             Reserved3;              /* Previous bandSubclassInfo_2_10 location     */

   EncryptModeSuppType encryptModeSupported; /* ENCRYPTION_SUPPORTED (Basic/Basic&Enhanced) */

   kal_uint8             opMode;                 /* Mobile Stations Operation Mode */

   /* IS801 Location Services Capabilities */
   kal_uint8             locPilotPhCap;          /* Mapping in IS801-1 Table 3.2.4.2-2 */
   kal_uint16            locGPSAcqCap;           /* Mapping in IS801-1 Table 3.2.4.2-3 */
   kal_uint16            locLocCalcCap;          /* Mapping in IS801-1 Table 3.2.4.2-4 */
   kal_bool              locTCPCap;              /* Location Services TCP capability */
   kal_bool              locMSOrigCap;           /* Location Services MS Originated capability */

   /* DCCH Only Ping Time Out */
   kal_uint16            dcchOnlyPingPeriod;

   kal_bool              dataReadyToSend;        /* DRS */
   ChIndType         channelIndicator;       /* CH_IND */
   kal_bool              pdchChmSupported;
   kal_uint8             extendedChannelIndicator; /* EXT_CH_IND */
   kal_bool              wllIncl;          /* WLL_INCL */
   kal_uint8             wllDeviceType;    /* WLL_DEVICE_TYPE */
   kal_bool              forPdchSupported; /* FOR_PDCH_SUPPORTED */
   kal_bool              ackDelay;         /* PDCH: ACK_DELAY */
   kal_uint8             numArqChan;       /* PDCH: NUM_ARQ_CHAN */
   kal_uint8             forPdchRcMap;     /* PDCH: FOR_PDCH_RC_MAP */
   kal_uint8             chConfigSupMap;   /* PDCH: CH_CONFIG_SUP_MAP */
   kal_bool              sdbDesiredOnly;   /* Short data burst desired only */

   kal_uint8             InfoRecCapabilityMap;
   kal_bool              geoLocIncl;
   kal_uint16            checksum;

} MsCapDb;

/*****************************/
/* MsCapDb definitions end   */
/*****************************/


/*****************************/
/* DbmData definitions start */
/*****************************/

/* TEMPORARY UNTIL DBM CHANGES MADE FOR MAX_MRU_RECORDS=10 */
#define MAX_MRU_RECORDS     10


/*------------------------------------------------------------------------
* Nam Data Structures
*  The name of the structure is misleading. It should support everything
*  IS95, T53 and AMPS.
*
*  This structure should exactly match the structure "IS95Nam" in the
*   protocol engine header file "namdata.h"
*------------------------------------------------------------------------*/

typedef struct
{
   SysCdmaBandT  CdmaBand[MAX_MRU_RECORDS];
   kal_uint16        FreqChan[MAX_MRU_RECORDS];
} PswDbmDataT;

/*****************************/
/* DbmData definitions end */
/*****************************/    


/*****************************/
/* PswMisc definitions start */
/*****************************/

/* PSW MISC parameters reported by DBM */
typedef enum
{
  PSW_SIM_QPCH_FEATURE         = 0,
  PSW_DYNAMIC_QPCH_FEATURE,
  PSW_QPCH_CCI_FEATURE,
  PSW_RESERVED_5_FEATURE,
  PSW_RESERVED_4_FEATURE,
  PSW_RESERVED_3_FEATURE,
  PSW_RESERVED_2_FEATURE,
  PSW_RESERVED_1_FEATURE
} PswFeatureBitNumT;


typedef enum
{
  PHY_1X_DIVERSITY_ENABLED = 0,
  PHY_RESERVED_3_FEATURE   = 1,
  PHY_RESERVED_2_FEATURE   = 2,
  PHY_RESERVED_1_FEATURE   = 3,
  PHY_1X_IC_CONTROL        = 4, /* IC Control occupies 4 bits */
} PhyFeatureBitNumT;


typedef enum
{
  PSW_SO73_ENABLED          = 0,
  PSW_SO73_WBENABLED,
  PSW_VOICE_SERVICE_ENABLED,
  PSW_DDTM_ENABLED,
  PSW_PRL_ENABLED,
  PSW_RESERVED_3_ENABLED,
  PSW_RESERVED_2_ENABLED,
  PSW_RESERVED_1_ENABLED
} PswEnableFlagsBitNumT;

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
} PswMiscT;

#ifdef MTK_CBP_ENCRYPT_VOICE
#define KMC_PUBLIC_KEY_LEN 48/* KMC public key length by byte = 48 */

typedef struct
{
   kal_uint8     KMCKeyVersion;/* KMC key version */
   kal_uint8     KMCPublicKey[KMC_PUBLIC_KEY_LEN];/* KMC public key */
   kal_uint8     reserved_0;
   kal_uint16    checksum;
} PswDbmCryptDataT;
#endif

typedef struct
{
   kal_uint8    mobileIdType;
   kal_uint64   value;
} PswMobileIDT;

/*****************************/
/* PswMisc definitions end   */
/*****************************/


#endif  /* _PSW_NVRAM_H_ */

