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
* Copyright (c) 2006-2012 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/

/*===========================================================================

                 V A L   S M S   DEFINE   H E A D E R    F I L E

  This file contains the definitions for the  SMS
  module of the VIA Abstraction Layer.

===========================================================================*/
#ifndef VALSMSDEFINE_H
#define VALSMSDEFINE_H

#include "valapi.h"
#include "valsmscust.h"

//don't modify following macro, brew has referred to it
/* field mask definitions */
#define SERVICE_CAT_PRESENT            0x00000001
#define ADDRESS_PRESENT                0x00000002
#define SMS_SUBADDRESS_PRESENT         0x00000004
#define USER_DATA_PRESENT              0x00000008
#define USER_RESP_CODE_PRESENT         0x00000010
#define MC_TIME_STAMP_PRESENT          0x00000020
#define ABS_VAL_PERIOD_PRESENT         0x00000040
#define REL_VAL_PERIOD_PRESENT         0x00000080
#define ABS_DEF_DEL_TIME_PRESENT       0x00000100
#define REL_DEF_DEL_TIME_PRESENT       0X00000200
#define PRIORITY_IND_PRESENT           0x00000400
#define PRIVACY_IND_PRESENT            0x00000800
#define REPLY_OPTION_PRESENT           0x00001000
#define NUM_MESSAGES_PRESENT           0x00002000
#define ALERT_MSG_DEL_PRESENT          0x00004000
#define LANGUAGE_IND_PRESENT           0x00008000
#define CALLBACK_NUM_PRESENT           0x00010000
#define MSG_DISP_MODE_PRESENT          0x00020000
#define MULT_ENCODE_USER_DATA_PRESENT  0x00040000
#define MESSAGE_DEPOSIT_INDEX_PRESENT  0x00080000
#define MESSAGE_STATUS_PRESENT         0x00400000
#define SER_CAT_PROGRAM_RESULT_PRESENT 0x00800000
#define SER_CAT_PROGRAM_DATA_PRESENT   0x01000000
#define BEARER_REPLY_OPTION_PRESENT    0x02000000
#ifdef KDDI_EXTENSIONS
#define IP_ADDRESS_PRESENT                      0x04000000
#define NOTIFY_FLAG_PRESENT                    0x08000000
#define UIM_ID_PRESENT                              0x10000000
#endif

typedef kal_uint16 ValSmsRecIdT;

//don't modify following Enum, brew has referred to it
/*! txt message type define 
*/
typedef enum
{
  EMPTY      = 0,   /* the block has not occupied by a sms message */
  READ       = 0x01,
  TO_BE_READ = 0x03,
  SENT       = 0x05,
  TO_BE_SENT = 0x07,
  DUPLICATE_READ=0x0F,
  DUPLICATE_TO_BE_READ=0x11, 
  DRAFT = 0x15,

  ARCHIVE_READ = 0x21,
  ARCHIVE_TO_BE_READ = 0x23,
  ARCHIVE_SENT = 0x25,
  ARCHIVE_TO_BE_SENT = 0x27,
  
  NOT_COMPLETE = 0x33,

  TO_BE_DELETED = 0x40,
  
  VAL_SMS_MAX_STATE
} ValSmsStatT;

//don't modify following Enum, brew has referred to it
/*sms message type*/
typedef enum
{
  VAL_SMS_SMS_MSG_TYPE_POINT_TO_POINT = 0,
  VAL_SMS_SMS_MSG_TYPE_BROADCAST,
#if defined(LGT_EXTENSIONS)
  VAL_SMS_SMS_MSG_TYPE_UNKNOWN,
#endif  
  VAL_SMS_SMS_MSG_TYPE_ACKNOWLEDGE,
  VAL_SMS_MAX_SMS_MSG_TYPE
} ValSmsTransMsgTypeT;

/* Macro to validate ValSmsMsgTypeT */
#define IS_VALID_VSMS_MSG_TYPE(a)  ((VAL_SMS_SMS_MSG_TYPE_POINT_TO_POINT == (a)) ||     \
                                     ((VAL_SMS_SMS_MSG_TYPE_POINT_TO_POINT < (a))    && \
                                    ((a) < VAL_SMS_MAX_SMS_MSG_TYPE)))

//don't modify following Enum, brew has referred to it
typedef enum
{
  VAL_SMS_MSG_TYPE_RESERVED               = 0,
  VAL_SMS_MSG_TYPE_TERMINATION_DELIVER,
  VAL_SMS_MSG_TYPE_ORIGINATION_SUBMIT,
  VAL_SMS_MSG_TYPE_ORIGINATION_CANCELLATION,
  VAL_SMS_MSG_TYPE_TERMINATION_DELIVERY_ACK,
  VAL_SMS_MSG_TYPE_USER_ACK,
  VAL_SMS_MSG_TYPE_READ_ACK,
  VAL_SMS_MAX_MSG_TYPE
} ValSmsTeleMsgT;

/* Macro for validating vsms msg type */
#define IS_VALID_SMS_MSG(a)  \
         ((VAL_SMS_MSG_TYPE_RESERVED == (a)) || ((VAL_SMS_MSG_TYPE_RESERVED < (a)) && ((a) < VAL_SMS_MAX_MSG_TYPE)))

//don't modify following Enum, brew has referred to it
/*! Val sms teleservice id define */
typedef enum
{
  /*----------------------------------------------------------------
     The following are not defined as a teleservice in IS-637,
     but they are used to indicate the teleservice type in Analog mode.
  -----------------------------------------------------------------*/
  VAL_SMS_TS_ID_IS91_PAGE        = 0,
  VAL_SMS_TS_ID_IS91_VOICE_MAIL      = 1,
  VAL_SMS_TS_ID_IS91_SHORT_MESSAGE  = 2,

  /*----------------------------------------------------------------
     Voice mail notification through Message Waiting Indication in
     CDMA mode or Analog mode
  -----------------------------------------------------------------*/
  VAL_SMS_TS_ID_VOICE_MAIL_MWI      = 3,

  /*----------------------------------------------------------------
   IS-637 Teleservices
  -----------------------------------------------------------------*/
  VAL_SMS_TS_ID_IS91        = 4096,
  VAL_SMS_TS_ID_PAGE        = 4097,
  VAL_SMS_TS_ID_MESSAGE     = 4098,
  VAL_SMS_TS_ID_VOICE_MAIL  = 4099,
  VAL_SMS_TS_ID_WAP,
  VAL_SMS_TS_ID_WEMT ,        /*add for EMS*/
  VAL_SMS_TS_ID_SCPT,         /*add for SCPT*/
  VAL_SMS_TS_ID_CATPT,       /*add for UIM card application*/
  VAL_SMS_BROAD_CAST_SRV,     /*add for the broadcast service*/
  VAL_SMS_TS_ID_IMSSRV      = 4242,
#if defined(LGT_EXTENSIONS)
  VAL_SMS_LGT_UNKNOWN = 32521,  /* FEATURE_UNKNOWN_TID_SUPPORT */
#endif
  VAL_SMS_MPC_ID  =     65001,
  VAL_SMS_TS_ID_PUSH= 65002,	/*sms push for China Telecom*/
  VAL_SMS_REGISTER_SRV		=65005,	/*add for register message service*/
  VAL_SMS_TS_ID_DM_PUSH = 65009,

  VAL_SMS_MAX_TS_ID
} ValSmsTeleSrvIdT;

/*! Macro for validating vsms teleservice id type */
#define IS_VALID_SMS_TELESERVICE_ID(a)  \
         ((VAL_SMS_TS_ID_IS91_PAGE == (a)) || ((VAL_SMS_TS_ID_IS91_PAGE < (a)) && ((a) < VAL_SMS_MAX_TS_ID)))


typedef enum
{
  VAL_SMS_SVR_CAT_UNKNOWN = 0,
  VAL_SMS_SVR_CAT_EMERGENCIES,
  VAL_SMS_SVR_CAT_ADMINISTRATIVE,
  VAL_SMS_SVR_CAT_MAINTENANCE,
  VAL_SMS_SVR_CAT_GEN_NEWS_LOCAL,
  VAL_SMS_SVR_CAT_GEN_NEWS_REGIONAL,
  VAL_SMS_SVR_CAT_GEN_NEWS_NATIONAL,
  VAL_SMS_SVR_CAT_GEN_NEWS_INTERNATIONAL,
  VAL_SMS_SVR_CAT_FINANCE_NEWS_LOCAL,
  VAL_SMS_SVR_CAT_FINANCE_NEWS_REGIONAL,
  VAL_SMS_SVR_CAT_FINANCE_NEWS_NATIONAL,
  VAL_SMS_SVR_CAT_FINANCE_NEWS_INTERNATIONAL,
  VAL_SMS_SVR_CAT_SPORTS_NEWS_LOCAL,
  VAL_SMS_SVR_CAT_SPORTS_NEWS_REGIONAL,
  VAL_SMS_SVR_CAT_SPORTS_NEWS_NATIONAL,
  VAL_SMS_SVR_CAT_SPORTS_NEWS_INTERNATIONAL,
  VAL_SMS_SVR_CAT_ENTERTAINMENT_NEWS_LOCAL,
  VAL_SMS_SVR_CAT_ENTERTAINMENT_NEWS_REGIONAL,
  VAL_SMS_SVR_CAT_ENTERTAINMENT_NEWS_NATIONAL,
  VAL_SMS_SVR_CAT_ENTERTAINMENT_NEWS_INTERNATIONAL,
  VAL_SMS_SVR_CAT_LOCAL_WEATHER,
  VAL_SMS_SVR_CAT_TRAFFIC,
  VAL_SMS_SVR_CAT_FLIGHT_SCHEDULE,
  VAL_SMS_SVR_CAT_RESTAURANTS,
  VAL_SMS_SVR_CAT_LODGINGS,
  VAL_SMS_SVR_CAT_RETAIL_DIRECTORY,
  VAL_SMS_SVR_CAT_ADVERTISEMENT,
  VAL_SMS_SVR_CAT_STOCK_QUOTES,
  VAL_SMS_SVR_CAT_EMPLOYMENT_OPPORTUNITIES,
  VAL_SMS_SVR_CAT_MEDICAL_HEALTH,
  VAL_SMS_SVR_CAT_TECH_NEWS,
  VAL_SMS_SVR_CAT_MULTI_CATEGORY,
  VAL_SMS_SVR_CAT_CMAS_PRESIDENT_ALERT = 0X1000,  /* 3GPP2 C.R1001-G SPEC */
  VAL_SMS_SVR_CAT_CMAS_EXTREME_THREAT_TO_LIFE,
  VAL_SMS_SVR_CAT_CMAS_SEVERE_THREAT_TO_LIFE,
  VAL_SMS_SVR_CAT_CMAS_CHILD_ABDUCTION_EMERGNY,
  VAL_SMS_SVR_CAT_CMAS_TEST_MESSAGE,
  VAL_SMS_SVR_CAT_CMAS_RESERVED_MAX =0X10FF,
  VAL_SMS_MAX_SVR_CAT
} ValSmsSrvCatT;

/* Macro for validating ValSmsSrvCatT */
#define IS_VALID_SMS_SERVICE_CAT(a)  \
         ((VAL_SMS_SVR_CAT_UNKNOWN == (a)) || ((VAL_SMS_SVR_CAT_UNKNOWN <(a)) && ((a) < VAL_SMS_MAX_SVR_CAT)))
//don't modify following Enum, brew has referred to it
typedef enum
{
  VAL_SMS_NUMBER_PLAN_UNKNOWN = 0,
  VAL_SMS_NUMBER_PLAN_TELEPHONY,
  VAL_SMS_NUMBER_PLAN_DATA = 3,
  VAL_SMS_NUMBER_PLAN_TELEX,
  VAL_SMS_NUMBER_PLAN_PRIVATE = 9,
  VAL_SMS_MAX_NUMBER_PLAN
} ValSmsNumPlanT;

/* Macro for validating ValSmsNumPlanT */
#define IS_VALID_SMS_NUMBER_PLAN(a)  \
         ((VAL_SMS_NUMBER_PLAN_UNKNOWN == (a)) || ((VAL_SMS_NUMBER_PLAN_UNKNOWN <(a)) && ((a) < VAL_SMS_MAX_NUMBER_PLAN)))

//don't modify following Enum, brew has referred to it
typedef enum
{
  VAL_SMS_DIGIT_MODE_4_BIT   = 0,
  VAL_SMS_DIGIT_MODE_8_BIT,
  VAL_SMS_MAX_DIGIT_MODE
} ValSmsDigitModeT;

/* Macro for validating VAL_SMS digit mode type */
#define IS_VALID_SMS_DIGIT_MODE(a)  \
          ((VAL_SMS_DIGIT_MODE_4_BIT ==(a))|| ((VAL_SMS_DIGIT_MODE_4_BIT <(a)) && ((a) < VAL_SMS_MAX_DIGIT_MODE)))

typedef enum
{
  VAL_SMS_NUMBER_MODE_ANSI_T1_607 = 0,
  VAL_SMS_NUMBER_MODE_DATA_NETWORK,
  VAL_SMS_MAX_NUMBER_MODE
} ValSmsNumModeT;

/* Macro for validating vsms number mode type */
#define IS_VALID_SMS_NUMBER_MODE(a)  \
        ( (VAL_SMS_NUMBER_MODE_ANSI_T1_607 == (a)) || ((VAL_SMS_NUMBER_MODE_ANSI_T1_607 <(a)) && ((a) < VAL_SMS_MAX_NUMBER_MODE)))

//don't modify following Enum, brew has referred to it
typedef enum
{
  VAL_SMS_NUMBER_TYPE_UNKNOWN = 0,
  VAL_SMS_NUMBER_TYPE_INTERNATIONAL,
  VAL_SMS_NUMBER_TYPE_NATIONAL,
  VAL_SMS_NUMBER_TYPE_NETWORK_SPECIFIC,
  VAL_SMS_NUMBER_TYPE_SUBSCRIBER,
  VAL_SMS_NUMBER_TYPE_RESERVED,
  VAL_SMS_NUMBER_TYPE_ABBREVIATED,
  VAL_SMS_MAX_NUMBER_TYPE
} ValSmsNumberT;

/* Macro for validating ValSmsNumberT */
#define IS_VALID_SMS_NUMBER_TYPE(a)  \
         ((VAL_SMS_NUMBER_TYPE_UNKNOWN == (a)) || ((VAL_SMS_NUMBER_TYPE_UNKNOWN <(a)) && ((a) < VAL_SMS_MAX_NUMBER_TYPE)))

typedef enum
{
  VAL_SMS_DATA_NUM_TYPE_UNKNOWN = 0,
  VAL_SMS_DATA_NUM_TYPE_RFC_791,       /* Internet Protocol */
  VAL_SMS_DATA_NUM_TYPE_RFC_822,       /* Internet Email Address */
  VAL_SMS_MAX_DATA_NUM_TYPE
} ValSmsDataNumberT;

/* Macro for validating ValSmsDataNumberT */
#define IS_VALID_SMS_DATA_NUMBER_TYPE(a)  \
         ((VAL_SMS_DATA_NUM_TYPE_UNKNOWN == (a)) ||((VAL_SMS_DATA_NUM_TYPE_UNKNOWN <(a)) && ((a) < VAL_SMS_MAX_DATA_NUM_TYPE)))

//don't modify following Struct, brew has referred to it
typedef   struct
{
  ValSmsDigitModeT     DigitMode;
  ValSmsNumModeT       NumberMode;
  union
  {
    ValSmsNumberT      NumType;
    ValSmsDataNumberT  DataNumType;
  } NumberType;
  ValSmsNumPlanT       NumberPlan;
  kal_uint8                NumFields;
  kal_uint8                Address[VAL_SMS_MAX_ADDRESS_LEN];
} ValSmsAddressT;

typedef enum
{
  VAL_SMS_SUBADDR_TYPE_NSAP    = 0,
  VAL_SMS_SUBADDR_TYPE_USER,
  VAL_SMS_MAX_SUBADDR_TYPE
} ValSmsSubAddrT;

/* Macro for validating ValSmsSubAddrT */
#define IS_VALID_SMS_SUBADDR_TYPE(a)  \
         ((VAL_SMS_SUBADDR_TYPE_NSAP ==(a)) || ((VAL_SMS_SUBADDR_TYPE_NSAP < (a)) && ((a) < VAL_SMS_MAX_SUBADDR_TYPE)))


typedef   struct
{
  ValSmsSubAddrT     SubaddrType;
  kal_uint8              Odd;
  kal_uint8              NumFields;
  kal_uint8              Address[VAL_SMS_MAX_SUBADDR_LEN];
}   ValSmsSubaddressT;

 typedef  struct
 {
    kal_uint8 replySeq;        
 }   ValSmsBearerRlyOptionT;
 
//don't modify following Enum, brew has referred to it
typedef enum
{
  VAL_SMS_MSG_ENCODE_OCTET              = 0,
  VAL_SMS_MSG_ENCODE_IS91_EXT_PROT_MSG,
  VAL_SMS_MSG_ENCODE_7BIT_ASCII,
  VAL_SMS_MSG_ENCODE_IA5,
  VAL_SMS_MSG_ENCODE_UNICODE,
  VAL_SMS_MSG_ENCODE_SHIFT_JIS,
  VAL_SMS_MSG_ENCODE_KS_C_5601,
  VAL_SMS_MSG_ENCODE_LATIN_HEBREW,
  VAL_SMS_MSG_ENCODE_LATIN,
  VAL_SMS_MSG_ENCODE_GSM_7BIT,
#ifdef MTK_CBP
  VAL_SMS_MSG_ENCODE_GSM_DCS,        /* KWID867 */
#endif
  VAL_SMS_MAX_MSG_ENCODE
} ValSmsMsgEncodeT;

/* Macro for validating vsms message encode type */
#define IS_VALID_SMS_MSG_ENCODE(a)  \
         ((VAL_SMS_MSG_ENCODE_OCTET == (a)) || ((VAL_SMS_MSG_ENCODE_OCTET <(a)) && ((a) < VAL_SMS_MAX_MSG_ENCODE)))

//don't modify following Struct, brew has referred to it
typedef struct
{
  ValSmsMsgEncodeT   MessageEncoding;
  kal_uint8              MessageType;
  kal_uint8              NumFields;
  kal_uint8              Data[VAL_SMS_MAX_USER_DATA_LEN];
} ValSmsUserDataT;

//don't modify following Enum, brew has referred to it 
typedef enum
{
  VAL_SMS_PRIORITY_NORMAL      = 0,
  VAL_SMS_PRIORITY_INTERACTIVE,
  VAL_SMS_PRIORITY_URGENT,
  VAL_SMS_PRIORITY_EMERGENCY,
  VAL_SMS_MAX_PRIORITY
} ValSmsPriorityT;

/* Macro for validating vsms priority type */
#define IS_VALID_SMS_PRIORITY(a)  \
         ((VAL_SMS_PRIORITY_NORMAL == (a)) ||((VAL_SMS_PRIORITY_NORMAL <(a)) && ((a) < VAL_SMS_MAX_PRIORITY)))

//don't modify following Enum, brew has referred to it
typedef enum
{
  VAL_SMS_PRIVACY_NOT_RESTRICTED = 0,
  VAL_SMS_PRIVACY_RESTRICTED,
  VAL_SMS_PRIVACY_CONFIDENTIAL,
  VAL_SMS_PRIVACY_SECRET,
  VAL_SMS_MAX_PRIVACY
} ValSmsPrivacyT;

/* Macro for validating vsms privacy type */
#define IS_VALID_SMS_PRIVACY(a)  \
         ((VAL_SMS_PRIVACY_NOT_RESTRICTED == (a)) ||((VAL_SMS_PRIVACY_NOT_RESTRICTED <(a)) && ((a) < VAL_SMS_MAX_ERRCLASS)))

typedef   struct
{
  kal_bool  UserAckReq;  /*true for user ack is required*/
  kal_bool  DakReq;      /*true for delivery ack is required*/
  kal_bool  ReadAckReq;  /*true for read ack is required*/
}   ValSmsRplOptionT;

typedef enum
{
  VAL_SMS_ALERT_MOBILE_DEFAULT = 0,
  VAL_SMS_ALERT_LOW_PRIORITY,
  VAL_SMS_ALERT_MEDIUM_PRIORITY,
  VAL_SMS_ALERT_HIGH_PRIORITY,
  VAL_SMS_MAX_ALERT
} ValSmsAlertT;

/* Macro for validating vsms alert type */
#define IS_VALID_SMS_ALERT(a)                   \
         ((VAL_SMS_ALERT_MOBILE_DEFAULT == (a)) ||  \
          ((VAL_SMS_ALERT_MOBILE_DEFAULT < (a)) && ((a) < VAL_SMS_MAX_ALERT)))

//don't modify following Enum, brew has referred to it
typedef enum
{
  VAL_SMS_LANGUAGE_UNKNOWN = 0,
  VAL_SMS_LANGUAGE_ENGLISH,
  VAL_SMS_LANGUAGE_FRENCH,
  VAL_SMS_LANGUAGE_SPANISH,
  VAL_SMS_LANGUAGE_JAPANESE,
  VAL_SMS_LANGUAGE_KOREAN,
  VAL_SMS_LANGUAGE_CHINESE,
  VAL_SMS_LANGUAGE_HEBREW,
#if defined(LGT_EXTENSIONS)
  VAL_SMS_LANGUAGE_KOREAN_LGT=64,
#endif  
  VAL_SMS_MAX_LANGUAGE
} ValSmsLanguageT;

/* Macro for validating vsms language type */
#define IS_VALID_SMS_LANGUAGE(a)              \
         ((VAL_SMS_LANGUAGE_UNKNOWN == (a)) ||    \
          ((VAL_SMS_LANGUAGE_UNKNOWN <(a)) && ((a) < VAL_SMS_MAX_LANGUAGE)))

//don't modify following Struct, brew has referred to it
typedef struct
{
  ValSmsDigitModeT  DigitMode;
  ValSmsNumberT     NumberType;
  ValSmsNumPlanT    NumberPlan;
  kal_uint8             NumFields;
  kal_uint8             Digits[VAL_SMS_CALLBACK_NUMBER_MAX_DIGITS];
} ValSmsCbNumberT;

//don't modify following Enum, brew has referred to it
typedef enum
{
  VAL_SMS_DISP_MODE_IMMEDIATE = 0,
  VAL_SMS_DISP_MODE_DEFAULT,
  VAL_SMS_DISP_MODE_USER_INVOKE,
  VAL_SMS_DISP_MODE_RESERVED,
  VAL_SMS_MAX_DISP_MODE
} ValSmsDisplayModeT;

/* Macro for validating vsms mssage display mode type */
#define IS_VALID_SMS_MSG_DISP_MODE(a)           \
         ((VAL_SMS_DISP_MODE_IMMEDIATE == (a)) ||  \
          ((VAL_SMS_DISP_MODE_IMMEDIATE <(a)) && ((a) < VAL_SMS_MAX_DISP_MODE)))

//don't modify following Enum, brew has referred to it
typedef struct
{
  ValSmsDisplayModeT SmsDispMode;
  kal_uint8              Reserved;
} ValSmsDispModeT;

/*! Error class */
typedef enum
{
  VAL_SMS_ERRCLASS_NO_ERROR,
  VAL_SMS_ERRCLASS_TEMPORARY = 2,
  VAL_SMS_ERRCLASS_PERMANENT = 3,
  VAL_SMS_MAX_ERRCLASS
} ValSmsErrClassT;

/*! Macro to validate  ValSmsErrClassT */
#define IS_VAL_SMS_NO_ERR_CLASS(a)  (VAL_SMS_ERRCLASS_NO_ERROR == (a))
#define IS_VAL_SMS_ERR_CLASS(a)  ((VAL_SMS_ERRCLASS_TEMPORARY <= (a)) && ((a) < VAL_SMS_MAX_ERRCLASS))
#define IS_VALID_SMS_ERR_CLASS(a)   (IS_VAL_SMS_NO_ERR_CLASS(a) || IS_VAL_SMS_ERR_CLASS(a))

typedef enum
{
  VAL_SMS_MSGSTATUS_ACCEPTED,
  VAL_SMS_MSGSTATUS_DEPOSITED_TO_INTERNET,
  VAL_SMS_MSGSTATUS_DELIVERED,
  VAL_SMS_MSGSTATUS_CANCELLED,
  VAL_SMS_MSGSTATUS_NETWORK_CONGESTION,
  VAL_SMS_MSGSTATUS_NETWORK_ERROR,
  VAL_SMS_MSGSTATUS_CANCEL_FAILED,
  VAL_SMS_MSGSTATUS_BLOCKED_DESTINATION,
  VAL_SMS_MSGSTATUS_TEXT_TOO_LONG,
  VAL_SMS_MSGSTATUS_DUPLICATE_MESSAGE,
  VAL_SMS_MSGSTATUS_INVALID_DESTINATION,
  VAL_SMS_MSGSTATUS_EXPIRED,
  VAL_SMS_MAX_MSGSTATUS
} ValSmsMsgStatusCodeT;

//don't modify following Struct, brew has referred to it
typedef   struct
{
  ValSmsErrClassT      ErrorClass;
  ValSmsMsgStatusCodeT MsgStatusCode;
}   ValSmsMsgStatusT;

typedef enum
{
  VAL_SMS_CATRESULT_SUCCESS,
  VAL_SMS_CATRESULT_MEMORY_EXCEEDED,
  VAL_SMS_CATRESULT_LIMIT_EXCEEDED,
  VAL_SMS_CATRESULT_ALREADY_PROGRAMMED,
  VAL_SMS_CATRESULT_NOT_PREVIOUSLY_PROGRAMMED,
  VAL_SMS_CATRESULT_INVALID_MAX_MESSAGES,
  VAL_SMS_CATRESULT_INVALID_ALERT_OPTION,
  VAL_SMS_CATRESULT_INVALID_CATEGORY_NAME,
  VAL_SMS_CATRESULT_UNSPECIFIED_FAILURE,
  VAL_SMS_MAX_CATRESULT
} ValSmsCategoryResultCodeT;

typedef   struct
{
  ValSmsSrvCatT              Category;
  ValSmsCategoryResultCodeT  CategoryResult;
  ValSmsLanguageT            Language;
}   ValSmsCategoryResultT;

typedef   struct
{
  kal_uint8                 NumCategories;
  ValSmsCategoryResultT Cat[VAL_SMS_MAX_CATEGORIES];
}   ValSmsSrvCatProgRsltT;

typedef enum
{
  VAL_SMS_OP_DELETE,
  VAL_SMS_OP_ADD,
  VAL_SMS_OP_CLEAR_ALL,
  VAL_SMS_MAX_OP
} ValSmsOperationCodeT;

typedef enum
{
  VAL_NO_ALERT                 = 0,
  VAL_MOBILE_DEFAULT_ALERT,
  VAL_VIBRATE_ALERT_ONCE,
  VAL_VIBRATE_ALERT_REPEAT,
  VAL_VISUAL_ALERT_ONCE,
  VAL_VISUAL_ALERT_REPEAT,
  VAL_LOW_PRIORITY_ALERT_ONCE,
  VAL_LOW_PRIORITY_ALERT_REPEAT,
  VAL_MED_PRIORITY_ALERT_ONCE,
  VAL_MED_PRIORITY_ALERT_REPEAT,
  VAL_HIGH_PRIORITY_ALERT_ONCE,
  VAL_HIGH_PRIORITY_ALERT_REPEAT,
  VAL_SMS_MAX_CAT_ALERT
} ValSmsCatAlertT;

typedef   struct
{
  ValSmsOperationCodeT  OperationCode;
  ValSmsSrvCatT         SrvCat;
  ValSmsLanguageT       Lang;
  /*the maximum number of messages that may be stored in the mobile station for this Service Category*/
  kal_uint8                 MaxMsg;
  ValSmsCatAlertT       Alert;
  kal_uint8                 NumChar;
  kal_uint8                 Chari[VAL_SMS_MAX_CHAR_IN_CATEGORY];
}   ValSmsCatDataT;

typedef   struct
{
  ValSmsMsgEncodeT MsgEncoding;
  kal_uint8            NumCat;
  ValSmsCatDataT   Cat[VAL_SMS_MAX_CATEGORIES];
}   ValSmsSrvCatProgDataT;

#ifdef KDDI_EXTENSIONS
typedef  struct
{
  kal_uint32 IpAddress;
  kal_uint8   CtlFlag;
}  ValSmsIpAddressT;
#endif
//don't modify following Struct, brew has referred to it
typedef struct
{
  /* required fields */
  kal_uint32                FieldMask;      /* the field mask */
  ValSmsRecIdT          SmsMsgRecId;    /* the phisical position of sms record in the storage device, UI NEEDN't fill it */
  ValSmsStatT           SMSState;       /* sms message status, UI may not fill it when sending, But if UI want to write or update a message, it must fill it.*/
  kal_uint8                 NumUserData;    /* number of user data */
  ValSmsTransMsgTypeT   TransMsgType;   /* transport layer message type, UI may not fill it */
  kal_uint16                MsgId;          /* message id, required, UI NEEDN'T fill it */
  kal_bool                  HeaderInd;      /* message head indication, required. UI MUST give it a correct value. True for the user data field includes a User Data Header, else set false */
  ValSmsTeleMsgT        TeleMsgType;    /* teleservice layer message type, required. UI MUST give it a correct value */
  ValSmsTeleSrvIdT      TeleSrvId;      /* teleservice id, required, UI MUST give it a correct value */
  /* following is the optional fields */
  ValSmsSrvCatT         SrvCat;         /* for broadcasting message, required, else, optional */
  ValSmsAddressT        Address;        /* required for submit and delivery message */
  ValSmsSubaddressT     Subaddress;     /* optional */
  ValSmsBearerRlyOptionT   BearerReplyOption;
  ValSmsUserDataT       UserData[VAL_SMS_MAX_NUM_DATA_MSGS]; /* user data or multi encoding user data   */
  kal_uint8                 UserRspCode;
  ValSmsAbsTimeT        TimeStamp;
  ValSmsAbsTimeT        ValTimeAbs;
  kal_uint8                 RelValPeriod;
  ValSmsAbsTimeT        AbsDelTime;
  kal_uint8                 RelDelPeriod;
  ValSmsPriorityT       Priority;
  ValSmsPrivacyT        Privacy;
  ValSmsRplOptionT      RplOp;
  kal_uint8                 NumMsgs;        /* only for VMN message */
  ValSmsAlertT          Alert;
  ValSmsLanguageT       Lang;
  ValSmsCbNumberT       CallBackNum;
  ValSmsDispModeT       DispMode;
  kal_uint16                MsgDepIndex;  
  kal_uint16                SeqNum;               /*only for receive message */
  ValSmsMsgStatusT      MsgStatus;            /*used only for SMS delivery Acknowledgement message */
  ValSmsSrvCatProgRsltT SrvCatProgResult;     /* only for submitting message */
  ValSmsSrvCatProgDataT SrvCatData;           /*only for delivery message */ 
#ifdef MTK_CBP_ENCRYPT_VOICE
  kal_bool				  CryptSmsPres;
  ValCryptSmsInfoT	  CryptSmsInfo; 	   /*sms crypt sms*/
#endif
#ifdef KDDI_EXTENSIONS
  ValSmsIpAddressT    MsgIpAddr;
  kal_uint8                        NotifyFlag;
  kal_uint32                      UimId;
#endif
  kal_bool                IsImsPPdownLoad;
  kal_uint8               seq_id;
} ValSmsTxtRecordT;

#ifdef MTK_CBP_ENCRYPT_VOICE
typedef enum
{
    VAL_SMS_MSG_TYPE_CALL_KEY_REQ= 0,
    VAL_SMS_MSG_TYPE_CALL_KEY_RSP,
    VAL_SMS_MSG_TYPE_CALLED_ENCRYPT_IND,
    VAL_SMS_MSG_TYPE_CALLED_KEY_REQ,
    VAL_SMS_MSG_TYPE_CALLED_KEY_RSP,
    VAL_SMS_MSG_TYPE_ERROR_IND,
    VAL_SMS_MSG_TYPE_KMC_PUBLIC_KEY_UPDATE	,
    VAL_SMS_MSG_TYPE_KMC_PUBLIC_KEY_UPDATE_RSP,
    VAL_SMS_MSG_TYPE_KMC_PUBLIC_KEY_UPDATE_CNF,
    VAL_SMS_MSG_TYPE_REMOTE_CONTROL_INS	,
    VAL_SMS_MSG_TYPE_REMOTE_CONTROL_INS_RSP,
    VAL_SMS_MSG_TYPE_INITIAL,
}ValSpeSmsMsgTypeT;

typedef  struct
{
  kal_uint8          mode;
  kal_uint8          calledNum[11];
  kal_uint8          calledBytes;
} ValCryptSmsCallKeyInfoT;

typedef  struct
{
   kal_uint8       rspType;
   kal_uint8       result;
} ValCryptRcInsRspInfoT;
#endif


#endif
/**Log information: D:\ClearCase\pchen_vtui2\HZREF\cp\inc\valsmsdefine.h@@\main\vtui2_plus\2 2008-05-07 07:13:18 GMT pchen
** HZTP#0000**/
/**Log information: \main\vtui2_5x\sms_contact_refactory\2 2008-08-05 08:38:03 GMT dwang
** HREF#0000
|Merge vtui2_plus**/
/**Log information: \main\vtui2_5x\sms_contact_refactory\3 2008-08-12 06:39:10 GMT pchen
** HREF#1445**/
/**Log information: \main\vtui2_5x\sms_contact_refactory\4 2008-10-23 05:56:27 GMT pchen
** HREF#1445**/
/**Log information: \main\vtui2_5x\sms_contact_refactory\5 2008-12-01 13:19:35 GMT ltian
** HREF#1445**/
/**Log information: \main\vtui2_5x\sms_contact_refactory\6 2009-03-06 08:03:57 GMT pchen
** HREF#1445**/
/**Log information: \main\vtui2_5x\sms_contact_refactory\7 2009-03-10 09:05:38 GMT pchen
** HREF#1445**/
/**Log information: \main\vtui2_5x\sms_contact_refactory_1\1 2009-03-20 01:29:03 GMT yfan
** HREF#1580**/
/**Log information: \main\helios_dev\touchflow\1 2009-06-05 06:27:24 GMT yfan
** HREF#1580**/
/**Log information: \main\helios_dev\touchflow\2 2009-06-05 06:27:45 GMT yfan
** HREF#1580**/
/**Log information: \main\helios_dev\touchflow\touchflow_pchen_href8751\1 2009-11-16 08:13:58 GMT pchen
** HREF#8751 **/
/**Log information: \main\helios_dev\touchflow\3 2009-11-16 09:16:34 GMT dwang
** HREF#8751**/
/**Log information: \main\VTUI3\2 2010-01-11 12:32:21 GMT qwu
** HREF#10125**/
/**Log information: \main\CBP7FeaturePhone\CBP7FeaturePhone_nicholaszhao_href17384\1 2011-07-04 08:34:21 GMT nicholaszhao
** HREF#17384**/
/**Log information: \main\CBP7FeaturePhone\3 2011-07-12 09:42:01 GMT marszhang
** HREF#17384**/

