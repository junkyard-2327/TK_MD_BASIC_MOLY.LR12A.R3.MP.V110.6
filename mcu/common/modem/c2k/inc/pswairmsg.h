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

#ifndef _PSWAIRMSG_H_

#define _PSWAIRMSG_H_ 1

/*****************************************************************************
 * Includes
 ****************************************************************************/
#include "psw_nvram.h"

typedef enum
{
  /* define the page message types */
   CP_SPY_QPCH_PI_MESSAGE             =0, /* MSG id only used to display QPCH PI parameters in Overhead Signaling Spy window */
   CP_SYSTEM_PARS_MESSAGE             =1,
   CP_ACCESS_PARS_MESSAGE             =2,
   CP_NEIGHBOR_LIST_MESSAGE           =3,
   CP_CDMA_CHANNEL_LIST               =4,

  /* The following two messages are obsolete in 95B */
   CP_SLOTTED_PAGE                    =5,
   CP_PAGE_MESSAGE                    =6,

   CP_ORDER_MESSAGE                   =7,
   CP_CHANNEL_ASSIGN_MESSAGE          =8,
   CP_DATA_BURST_MESSAGE              =9,
   CP_AUTH_CHALL_MESSAGE              =10,
   CP_SSD_UPDATE_MESSAGE              =11,
   CP_FEATURE_NOTIFICATION_MESSAGE    =12,
   CP_EXT_SYSTEM_PARS_MESSAGE         =13,
   CP_EXT_NEIGHBOR_LIST_MESSAGE       =14,
   CP_STATUS_REQUEST_MESSAGE          =15,
   CP_SERVICE_REDIRECT_MESSAGE        =16,
   CP_GENERAL_PAGE_MESSAGE            =17,
   CP_GLOBAL_SERVICE_REDIRECT_MESSAGE =18,
   CP_TMSI_ASSIGNMENT_MESSAGE         =19,
   CP_PACA_MESSAGE                    =20,
   CP_EXT_CHANNEL_ASSIGN_MESSAGE      =21,
   CP_GEN_NEIGHBOR_LIST_MESSAGE       =22,

  /* new message types for IS-2000 Rev.0 */
   CP_USER_ZONE_ID_MESSAGE            =23,
   CP_PRI_NGHBR_LST_MESSAGE           =24,

   CP_EXT_GLOB_SERV_REDIR_MESSAGE     =26,
   CP_EXT_CDMA_CHAN_LST_MESSAGE       =27,
   CP_USER_ZONE_REJECT_MESSAGE        =28,

/* #ifdef IS2000_REV_A */
  /* new message types for IS-2000 Rev.A */
   CP_ANSI_41_SYS_PARS_MESSAGE        =29,
   CP_MC_RR_PARS_MESSAGE              =30,
   CP_ANSI_41_RAND_MESSAGE            =31,
   CP_ENH_ACCESS_PARS_MESSAGE         =32,
   CP_UNIV_NGHBR_LST_MESSAGE          =33,
   CP_SECURITY_MODE_COMMAND_MESSAGE   =34,
   CP_UNIV_PAGE_MESSAGE_1             =35,
   CP_UNIV_PAGE_MESSAGE_2             =36,
   CP_UNIV_PAGE_MESSAGE_3             =37,
   CP_UNIV_PAGE_MESSAGE_4             =38,
   CP_AUTH_REQ_MESSAGE                =39,
   CP_MEID_EXT_CHANNEL_ASSIGN_MESSAGE =46,

#ifdef MTK_DEV_C2K_IRAT
   CP_ALTERNATIVE_TECH_INFO_MESSAGE  =47,
#endif /* MTK_DEV_C2K_IRAT */

/* #else
  #define CP_MAX_VALID_PAGE_MESSAGE          28
#endif    */
   CP_CSCH_GENERAL_EXTENSION_MESSAGE  =63 /* supported (only Radio Config Parms record used for now) */

} PchMessageTypeE;

typedef enum
{
  /* Access Channel Message types */
   CP_ACH_REGISTRATION          =1,
   CP_ACH_ORDER                 =2,
   CP_ACH_DATA_BURST            =3,
   CP_ACH_ORIGINATION           =4,
   CP_ACH_PAGE_RESPONSE         =5,
   CP_ACH_AUTH_CHALL            =6,
   CP_ACH_STATUS_RESPONSE       =7,
   CP_ACH_TMSI_ASSIGNMENT_COMP  =8,
   CP_ACH_PACA_CANCEL           =9,
   CP_ACH_EXT_STATUS_RESPONSE   =10,
   CP_ACH_RECONNECT             =15,
   CP_ACH_LAST_MESSAGE          =16
}AchMessageTypeE;

typedef enum
{
  CP_FTC_NO_MESSAGE,
  CP_FTC_ORDER_MESSAGE,
  CP_FTC_AUTHENTICATION_CHALLENGE_MESSAGE,
  CP_FTC_ALERT_WITH_INFO_MESSAGE,
  CP_FTC_DATA_BURST_MESSAGE,
  CP_FTC_HANDOFF_DIRECTION_MESSAGE,
  CP_FTC_ANALOG_HANDOFF_DIRECTION_MESSAGE,
  CP_FTC_IN_TRAFFIC_SYSTEM_PARAMETERS_MESSAGE,
  CP_FTC_NEIGHBOR_LIST_UPDATE_MESSAGE,
  CP_FTC_SEND_BURST_DTMF_MESSAGE,
  CP_FTC_POWER_CONTROL_PARAMETERS_MESSAGE,
  CP_FTC_RETRIEVE_PARAMETERS_MESSAGE,
  CP_FTC_SET_PARAMETERS_MESSAGE,
  CP_FTC_SSD_UPDATE_MESSAGE,
  CP_FTC_FLASH_WITH_INFORMATION_MESSAGE,
  CP_FTC_MOBILE_STATION_REGISTERED_MESSAGE,
  CP_FTC_STATUS_REQUEST_MESSAGE,
  CP_FTC_EXTENDED_HANDOFF_DIRECTION_MESSAGE,
  CP_FTC_SERVICE_REQUEST_MESSAGE,
  CP_FTC_SERVICE_RESPONSE_MESSAGE,
  CP_FTC_SERVICE_CONNECT_MESSAGE,
  CP_FTC_SERVICE_OPTION_CONTROL_MESSAGE,
  CP_FTC_TMSI_ASSIGNMENT_MESSAGE,
  CP_FTC_SERVICE_REDIRECTION_MESSAGE,
  CP_FTC_SUPPLEMENTAL_CHANNEL_ASSIGNMENT_MESSAGE,
  CP_FTC_POWER_CONTROL_MESSAGE,
  CP_FTC_EXTENDED_NEIGHBOR_LIST_UPDATE_MESSAGE,
  CP_FTC_CANDIDATE_FREQUENCY_SEARCH_REQUEST_MESSAGE,
  CP_FTC_CANDIDATE_FREQUENCY_SEARCH_CONTROL_MESSAGE,
  CP_FTC_POWER_UP_FUNCTION_MESSAGE,
  CP_FTC_POWER_UP_FUNCTION_COMPLETION_MESSAGE,
  CP_FTC_GENERAL_HANDOFF_DIRECTION_MESSAGE = 31,
  CP_FTC_RESOURCE_ALLOCATION_MESSAGE = 32,
  CP_FTC_EXTENDED_RELEASE_MESSAGE = 33,
  CP_FTC_UNIVERSAL_HANDOFF_DIRECTION_MESSAGE = 34,
  CP_FTC_EXTENDED_SUPPLEMENTAL_CHANNEL_ASSIGNMENT_MESSAGE = 35,
  CP_FTC_MOBILE_ASSISTED_BURST_OPERATION_PARAMETERS_MESSAGE = 36,
  CP_FTC_USER_ZONE_REJECT_MESSAGE = 37,
  CP_FTC_USER_ZONE_UPDATE_MESSAGE = 38,
  CP_FTC_EXTENDED_ALERT_WITH_INFORMATION_MESSAGE = 40,
  CP_FTC_EXTENDED_FLASH_WITH_INFORMATION_MESSAGE =42,
  CP_FTC_RATE_CHANGE_MESSAGE = 51,
  CP_FTC_MEID_UNIVERSAL_HANDOFF_DIRECTION_MESSAGE = 53,
  CP_FTC_RADIO_CONFIG_PARAM_MESSAGE = 54,
  CP_FTC_MAX_MESSAGES,
  CP_FTC_GENERAL_EXTENSION_MESSAGE = 255 /* special case */
} FTCMessageType;

typedef enum
{
  CP_RTC_ORDER_MESSAGE = 1,
  CP_RTC_AUTHENTICATION_CHALLENGE_RESPONSE_MESSAGE,
  CP_RTC_FLASH_WITH_INFORMATION_MESSAGE,
  CP_RTC_DATA_BURST_MESSAGE,
  CP_RTC_PILOT_STRENGTH_MEASUREMENT_MESSAGE,
  CP_RTC_POWER_MEASUREMENT_REPORT_MESSAGE,
  CP_RTC_SEND_BURST_DTMF_MESSAGE,
  CP_RTC_STATUS_MESSAGE,
  CP_RTC_ORIGINATION_CONTINUATION_MESSAGE,
  CP_RTC_HANDOFF_COMPLETION_MESSAGE,
  CP_RTC_PARAMETERS_RESPONSE_MESSAGE,
  CP_RTC_SERVICE_REQUEST_MESSAGE,
  CP_RTC_SERVICE_RESPONSE_MESSAGE,
  CP_RTC_SERVICE_CONNECT_COMPLETION_MESSAGE,
  CP_RTC_SERVICE_OPTION_CONTROL_MESSAGE,
  CP_RTC_STATUS_RESPONSE_MESSAGE,
  CP_RTC_TMSI_ASSIGNMENT_COMPLETION_MESSAGE,
  CP_RTC_SUPPLEMENTAL_CHANNEL_REQUEST_MESSAGE,
  CP_RTC_CANDIDATE_FREQUENCY_SEARCH_RESPONSE_MESSAGE,
  CP_RTC_CANDIDATE_FREQUENCY_SEARCH_REPORT_MESSAGE,
  CP_RTC_PERIODIC_PILOT_STRENGTH_MEASUREMENT_MESSAGE,
  CP_RTC_OUTER_LOOP_REPORT_MESSAGE,
  CP_RTC_RESOURCE_REQUEST_MESSAGE = 23,
  CP_RTC_EXTENDED_RELEASE_RESPONSE_MESSAGE = 24,
  CP_RTC_EXTENDED_PILOT_STRENGTH_MEASUREMENT_MESSAGE=28,
  CP_RTC_EXTENDED_HANDOFF_COMPLETION_MESSAGE = 29,
  CP_RTC_RESOURCE_RELEASE_REQUEST_MESSAGE = 30,
  CP_RTC_MAX_MESSAGES
} RTCMessageType;


/*****************************************************************************
 * Defines
 ****************************************************************************/
#define CP_SYSTIME_SIZE         5     /* # bytes to hold 36 bits  */
#define ENG_SUPERFRAME_COUNT    4     /* 4 frames to a superframe */
typedef kal_uint32 WbiosSystime;           /* holds system time - 32 bits */

/****************************************************************************
 * Sync Channel message structures
 ****************************************************************************/

/* define set of allowable page channel data rates */
typedef enum
{
  PRAT_9600=0,
  PRAT_4800
} PageChRate;

/* define set of allowable BCCH data rates */
typedef enum
{
  SR1_BRAT_4800 = 0,
  SR1_BRAT_9600 =1,
  SR1_BRAT_19200 =2,
  SR1_BRAT_REVERSED =3
} BcchRate;

/* define set of allowable SR1 TD Modes */
typedef enum
{
  SR1_OTD = 0,
  SR1_STS =1,
  SR1_TD_NOT_USED
} Sr1TdModes;

/* define set of allowable SR1 TD Power Level */
typedef enum
{
  SR1_9DB = 0,
  SR1_6DB = 1,
  SR1_3DB = 2,
  SR1_SAME_DB =3,
  SR1_TD_POWER_NOT_USED
} Sr1TdPowerLevel;

/* Position of the Primary SR3 Pilot */
typedef enum
{
  SR3_LOWEST_FREQ = 0,
  SR3_CENTER_FREQ = 1,
  SR3_HIGHEST_FREQ = 2,
  SR3_RESERVED = 3
} Sr3PilotPosition;

/* Pilot Transmission Power */
typedef enum
{
  SR3_0_DB = 0,
  SR3_1_DB = 1,
  SR3_2_DB = 2,
  SR3_3_DB = 3,
  SR3_4_DB = 4,
  SR3_5_DB = 5,
  SR3_6_DB = 6,
  SR3_7_DB = 7
} Sr3PilotPower;

/* Sync message contents */
typedef struct
{
  kal_uint8              length;                     /* Message Length                           */
  kal_uint8              msgType;                    /* Message Type                             */
  kal_uint8              pRev;                       /* Protocol Revision Level                  */
  kal_uint8              minPRev;                    /* Minimum protocol revision required by MS */
  kal_uint16              sid;                        /* System ID                                */
  kal_uint16              nid;                        /* Network ID                               */
  kal_uint16              pilotPN;                    /* Pilot PN sequence offset index           */
  kal_uint8              lcState[6];                 /* Long code state - 42 bits                */
  kal_uint8              sysTime[CP_SYSTIME_SIZE];   /* System time - 36 bits            */
  kal_uint8              lpSec;                      /* Number of leap seconds                   */
  kal_uint8              ltmOff;                     /* Offset of local time from system time    */
  kal_bool              daylt;                      /* Daylight savings time indicator          */
  PageChRate        prat;                       /* Paging channel data rate                 */
  kal_uint16              cdmaFreq;                   /* Paging channel                           */
  kal_uint16              extCdmaFreq;                /* For RC2 or greater or supports QPCH      */
  kal_bool              sr1BcchSupported;           /* Contains BCCH information */
  kal_bool              sr1NonTdFreqIncl;
  kal_uint16              sr1CdmaFreqNonTd;
  BcchRate          sr1BratNonTd;
  kal_uint8              sr1CratNonTd;
  kal_uint8              sr1BcchCodeChanNonTd;
  kal_bool              sr1TdIncl;
  kal_uint16              sr1CdmaFreqTd;
  BcchRate          sr1BratTd;
  kal_uint8              sr1CratTd;
  kal_uint8              sr1BcchCodeChanTd;
  Sr1TdModes        sr1TdMode;
  Sr1TdPowerLevel   sr1TdPowerLevel;
  /* SR3 Parameters */
  kal_bool              sr3Incl;
  kal_bool              sr3CenterFreqIncl;
  kal_uint16              sr3CenterFreq;
  BcchRate          sr3Brat;
  kal_uint8              sr3BcchCodeChan;
  Sr3PilotPosition  sr3PrimaryPilot;
  Sr3PilotPower     sr3PilotPower1;
  Sr3PilotPower     sr3PilotPower2;
/* BCY 11/14/00 */
  kal_bool              dsIncl;
  kal_uint32             dsBlob;
} SyncMessage;

/* Sync message structure for engine */
typedef struct
{
  kal_uint16          startFrame;   /* first frame message was received in */
  kal_uint16          endFrame;     /* last frame of message               */
  SyncMessage   msg;           /* message contents                    */
} SyncChannelMessage;



/* Traffic channel message transmission control */
typedef enum
{
  TX_OFF = 0,
  TX_ON_IMMEDIATE,
  TX_ON_CF_RULES
} TXControl;


#define TX_CONTINUOUS  0
typedef enum
{
  RTC_PREAMBLE = 0,
  RTC_SIGNALING_ONLY,
  RTC_TRAFFIC
} RTCTraffic;


typedef enum
{
  CF_PERIODIC_SEARCH_OFF,
  CF_PERIODIC_SEARCH_ENABLED,
  CF_PERIODIC_SEARCH_DISABLED
} CFPeriodicSearchCtl;


typedef enum
{
  L2_INACTIVE,
  L2_IDLE,
  L2_FILL_MESSAGE,
  L2_HOLD
} L2_STATE;


typedef enum
{
  L2_FTC_STOP_ST,
  L2_FTC_INITIALIZATION_ST,
  L2_FTC_IDLE_ST,
  L2_FTC_HARD_HANDOFF_ST,
  L2_FTC_CANDIDATE_FREQUENCY_ST,
  L2_FTC_HARD_HANDOFF_W_RETURN_ON_FAILURE_ST,
  L2_FTC_HARD_HANDOFF_INIT_ST,
  L2_FTC_HARD_HANDOFF_W_RTN_ON_FAIL_INIT_ST,
  L2_FTC_NST_TRFFIC_ST,
  L2_FTC_MAX_STATES
} L2FTCState;


typedef enum
{
  L2_FTC_START_EV,
  L2_FTC_STOP_EV,
  L2_FTC_FRAME_EV,
  L2_FTC_HARD_HANDOFF_EV,
  L2_FTC_CANDIDATE_FREQUENCY_START_EV,
  L2_FTC_CANDIDATE_FREQUENCY_END_EV,
  /* SNR HHO 11/2/00 */
  L2_FTC_HARD_HANDOFF_W_RETURN_ON_FAILURE_EV,
  L2_FTC_HARD_HANDOFF_TIMER_EXPIRED_EV,
  L2_FTC_MAX_EVENTS
} L2FTCEvent;

#define CP_MAX_MUX1_CATEGORY 14
#define CP_MAX_MUX2_CATEGORY 26
#define CP_MAX_MUX1_DCCH_CATEGORY 15
#define CP_MAX_MUX2_DCCH_CATEGORY 27
#define CP_MAX_SCH0_CATEGORY 7
#define CP_MAX_BCCH_CATEGORY 5
#define CP_MAX_FCCCH_CATEGORY 4

#define F_PCH                 0
#define F_BCCH                1
#define F_FCCCH               2

#if defined (MTK_CBP)
/* define the MIN half frames number to calculate the vaild half frames percent */
#define MIN_HALF_FRAMES       200
#endif
#define PCH_FRAME_LENGTH      24   /* units: Bytes */

/* Multiplex Option 1 Category definitions */
typedef enum
{                   /*bps  Rate D&B B&B Primary Signalling Secondary */
  MUX1_CAT1  = 1,   /*9600  1           Primary                      */
  MUX1_CAT2  = 2,   /*9600  1/2 D&B     Primary Signalling           */
  MUX1_CAT3  = 3,   /*9600  1/4 D&B     Primary Signalling           */
  MUX1_CAT4  = 4,   /*9600  1/8 D&B     Primary Signalling           */
  MUX1_CAT5  = 5,   /*9600  1       B&B         Signalling           */
  MUX1_CAT6  = 6,   /*4800  1/2         Primary                      */
  MUX1_CAT7  = 7,   /*2400  1/4         Primary                      */
  MUX1_CAT8  = 8,   /*1200  1/8         Primary                      */
  MUX1_CAT9  = 9,   /*9600  1   with bit errors                      */
  MUX1_CAT10 = 10,  /*      Frame with insufficient frame quality    */
  MUX1_CAT11 = 11,  /*9600  1/2 D&B     Primary            Secondary */
  MUX1_CAT12 = 12,  /*9600  1/4 D&B     Primary            Secondary */
  MUX1_CAT13 = 13,  /*9600  1/8 D&B     Primary            Secondary */
  MUX1_CAT14 = 14,  /*9600  1       B&B                    Secondary */
  MUX1_CAT15 = 15   /*9600  1  DCCH NULL Frame                       */
} Mux1Cat;

/* Multiplex Option 2 Category definitions */
typedef enum
{                   /*bps  Rate D&B B&B Primary Signalling Secondary */
  MUX2_CAT1  = 1,   /*14400 1           Primary                      */
  MUX2_CAT2  = 2,   /*14400 1/2 D&B     Primary Signalling           */
  MUX2_CAT3  = 3,   /*14400 1/4 D&B     Primary Signalling           */
  MUX2_CAT4  = 4,   /*14400 1/8 D&B     Primary Signalling           */
  MUX2_CAT5  = 5,   /*14400 1       B&B         Signalling           */
  MUX2_CAT6  = 6,   /*14400 1/2 D&B     Primary            Secondary */
  MUX2_CAT7  = 7,   /*14400 1/4 D&B     Primary            Secondary */
  MUX2_CAT8  = 8,   /*14400 1/8 D&B     Primary            Secondary */
  MUX2_CAT9  = 9,   /*14400 1       B&B                    Secondary */
  MUX2_CAT10 = 10,  /*14400 1/8 D&B     Primary Signalling Secondary */
  MUX2_CAT11 = 11,  /*7200  1           Primary                      */
  MUX2_CAT12 = 12,  /*7200  1/4 D&B     Primary Signalling           */
  MUX2_CAT13 = 13,  /*7200  1/8 D&B     Primary Signalling           */
  MUX2_CAT14 = 14,  /*7200  1       B&B         Signalling           */
  MUX2_CAT15 = 15,  /*7200  1/4 D&B     Primary            Secondary */
  MUX2_CAT16 = 16,  /*7200  1/8 D&B     Primary            Secondary */
  MUX2_CAT17 = 17,  /*7200  1       B&B                    Secondary */
  MUX2_CAT18 = 18,  /*7200  1/8 D&B     Primary Signalling Secondary */
  MUX2_CAT19 = 19,  /*3600  1           Primary                      */
  MUX2_CAT20 = 20,  /*3600  1/8 D&B     Primary Signalling           */
  MUX2_CAT21 = 21,  /*3600  1       B&B         Signalling           */
  MUX2_CAT22 = 22,  /*3600  1/8 D&B     Primary            Secondary */
  MUX2_CAT23 = 23,  /*3600  1       B&B                    Secondary */
  MUX2_CAT24 = 24,  /*1800  1           Primary                      */
  MUX2_CAT25 = 25,  /*1800  1       B&B                    Secondary */
  MUX2_CAT26 = 26,  /*      Frame with insufficient frame quality    */
  MUX2_CAT27 = 27   /*1800  1       DCCH NULL Frame                  */
} Mux2Cat;

#ifdef MTK_PLT_ON_PC_UT
#define MAX_TMSI_ZONE_LEN    16
#endif

/*****************************************************************************
 * Data Structures
 ****************************************************************************/

/* Sync Channel Frame Indication data */
typedef struct
{
  kal_uint16    frameNum;      /* count of received sync frames modulo 2048 */
  kal_uint8    *data;         /* pointer to 32 bits of frame data */
} SyncFrame;

/* Page Channel Frame Indication data */
typedef struct
{
  WbiosSystime  sysTime;     /* system time frame received in */
  kal_uint16     size;             /* size of data in bits */
  kal_uint8     *data;            /* pointer to frame data, including SCI bits */
} PageFrame;

/* FCCCH Frame Indication data */
typedef struct
{
  WbiosSystime  sysTime;     /* system time frame received in */
  kal_uint16     size;             /* size of data in bits */
  kal_uint8     *data;            /* pointer to frame data, including SI bits */
} FCCCHFrame;

/* BCCH Frame Indication data */
typedef struct
{
  WbiosSystime  sysTime;     /* system time frame received in */
  kal_uint16     size;             /* size of data in bits */
  kal_uint8     *data;            /* pointer to frame data, including SCI bits */
} BCCHFrame;

/* Page Channel Message structure provides the packed buffer and relevant */
/* system information. */
typedef struct
{
  WbiosSystime somTime;                 /* time the start of msg received  */
  WbiosSystime sysTime;                 /* system time from last frame     */
  kal_bool ackReceived;                     /* set KAL_TRUE if a VALID ACK for an  */
                                        /* outstanding ack was received in */
                                        /* this message, else set to KAL_FALSE */

  kal_uint16 length;                          /* length of message               */
  kal_uint8 type;                            /* message type                    */
  kal_uint8 *msgBuffer;                      /* pointer to packed message buffer*/
  kal_uint16 sduOffset;                     /* offset to first bit in L3 SDU   */
  kal_uint8  PD_value;                      /* Protocol Discriminator*/
  kal_uint8  ChanType;                      /* Channel Type: PCH, BCCH, FCCCH*/
#if defined(MTK_CBP)
  kal_bool  duplicateMsg;                   /* Indicate it is a duplicate message or not,
                                         * KAL_TRUE: ignore the messge body
                                         */
#endif
  kal_uint16  geRecordsInc;    /* if GEM, this will be updated with bitmap of records included */
} PChMessage;


/* BCY 08/28/00: !!! Need to change all PCHMessage to FcschMessage */
typedef PChMessage FcschMessage;

#ifdef MTK_PLT_ON_PC_UT
/* LAC field of Page Channel Message, used for UT */
typedef struct
{
  kal_uint8  msgType;                /* 8 bits */
  kal_uint8  msgLen;                 /* 8 bits */
  kal_uint8  ackSeq;                 /* 3 bits */
  kal_uint8  msgSeq;                 /* 3 bits */
  kal_bool  ackReq;
  kal_bool  validAck;
  kal_uint8  addrType;               /* 3 bits */
  kal_uint8  addrLen;                /* 4 bits */
  kal_uint32  imsi_s1;              /* 24 bits IMSI_S1 value               */
  kal_uint16  imsi_s2;              /* 10 bits IMSI_S2 value               */
  kal_uint32  esn;                  /* 32 bits ESN value                   */
  kal_uint8  imsiClass;              /* 1 bits imsi class value             */
  kal_uint8  imsiClassType;          /* 2 bits if class0, 1 bit if class1   */
  kal_uint16  mcc;                  /* 10 bits for MCC value               */
  kal_uint8  imsi_11_12;             /* 7 bits */
  kal_uint8  imsiAddrNum;            /* 3 bits */
  kal_uint32  tmsiCode;             /* 16 or 24 or 32 bits according to addrLen */
  kal_uint8   bcastAddr[CP_BCAST_ADDRESS_MAX_SIZE]; /* length of array is addrLen */
  /* following is only for paging record if any */
  kal_bool  validPagingRec;
  kal_uint8  addrClass;              /* 2 bits */
  kal_uint8  addrSubclass;           /* 2 bits */
  kal_uint8  tmsiZoneLen;            /* 4 bits */
  kal_uint8  tmsiZone[MAX_TMSI_ZONE_LEN];
  kal_uint8  burstType;             /* 6 bits */
  kal_uint8  burstAddrLen;          /* 4 bits */
  /* following is for CAM/ECAM/MEID ECAM */
  kal_uint8  assignMode;            /* 3 bits */
} PCHMessageLACField;
#endif

typedef enum
{
  MUX_OPTION_INVALID = 0,
  MUX_OPTION1  = 1,
  MUX_OPTION2,
  MUX_OPTION3,
  MUX_OPTION4,
  MUX_OPTION5,
  MUX_OPTION6,
  MUX_OPTION7,
  MUX_OPTION8,
  MUX_OPTION9,
  MUX_OPTION10,
  MUX_OPTION11,
  MUX_OPTION12,
  MUX_OPTION13,
  MUX_OPTION14,
  MUX_OPTION15,
  MUX_OPTION16,
  MUX_OPTION704 = 0x704,
  MUX_OPTION809 = 0x809,
  MUX_OPTION80A = 0x80A,
  MUX_OPTION811 = 0x811,
  MUX_OPTION812 = 0x812,
  MUX_OPTION821 = 0x821,
  MUX_OPTION822 = 0x822,
  MUX_OPTION905 = 0x905,
  MUX_OPTION906 = 0x906,
  MUX_OPTION909 = 0x909,
  MUX_OPTION90A = 0x90A,
  MUX_OPTION911 = 0x911,
  MUX_OPTION912 = 0x912,
  MUX_OPTION921 = 0x921,
  MUX_OPTION922 = 0x922,
  MUX_OPTIONF00 = 0xF00,	/* PDCH Mux Option */
  MUX_OPTIONF20 = 0xF20

} MultiplexOption;

/* Traffic Channel Frame Indication data */
typedef struct
{
  WbiosSystime     sysTime;    /*  system time frame received in              */
  MultiplexOption  muxOption;  /*  multiplex option used in deriving frame    */
  kal_uint8            category;   /*  frame category # - depends on mux_option   */
  kal_uint8            quality;    /*  good or bad frame based on category & mux  */
  kal_uint16           sigBits;
  kal_uint8*           data;       /*  ptr to traffic data (cat. determines len)  */
} TCFrame;

typedef struct
{
  /* SNR ACK 1/30/01 */
  kal_uint8         ackReq;
  WbiosSystime  sysTime;
  kal_uint8         length;
  kal_uint8         sduEncryptMode;
  kal_uint8         encSeq;
  kal_uint8         extMsgLength;
  kal_uint8         type;
  kal_uint8         encryption;
  kal_uint16        pduStartIndex;  /* Start of L3 PDU */
  kal_uint16        geRecordsInc;    /* if GEM, this will be updated with bitmap of records included */
  kal_uint8*        buffer;         /* pointer to packed message buffer */
} FTCMessage;

#ifdef MTK_PLT_ON_PC_UT
typedef struct
{
  kal_uint8 msgLen;       /* 8 bits */
  kal_uint8 msgType;      /* 8 bits */
  kal_uint8 ackSeq;       /* 3 bits */
  kal_uint8 msgSeq;       /* 3 bits */
  kal_uint8 ackReq;       /* 1 bit */
  kal_uint8 encryption;   /* 2 bits */
} FTCMessageLACField;
#endif


typedef struct
{
  kal_bool  resetFpc;
  kal_uint8 pwrRepThresh;
  kal_uint8 pwrRepFrames;
  kal_bool   pwrThreshEnable;
  kal_bool   pwrPeriodEnable;
  kal_uint8 pwrRepDelay;
} PCNPMData;

#endif  /* _PSWAIRMSG_H_ */

