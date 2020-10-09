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
* Copyright (c) 2006-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
#ifndef VALSMSAPI_H
#define VALSMSAPI_H

#ifdef __cplusplus
extern "C" {
#endif

/*===========================================================================

                 V A L   S M S   A P I   H E A D E R    F I L E

  This file contains the exported interfaces for the  SMS
  module of the VIA Abstraction Layer.


===========================================================================*/

#include "sysdefs.h"
#include "valapi.h"
#include "valsmsdefine.h"
#include "c2k_nvram_def.h"
#include "c2k_sms_struct.h"
#include "kal_public_defs.h"


#define VAL_SMS_MAX_REGISTERED_IDS           10      /*!< Max registered app */
#define VAL_SMS_TELESRVID_COUNT              20      /*!< Max registered teleservice id */
#define VAL_SMS_MAX_SMS_PDU_LEN             253      /*!< Max sms pdu length */
#define VAL_SMS_CLASS_SUCESS        0
#define VAL_SMS_CAUSECODE_SUCESS   32768
#define VAL_SMS_MOSEQ_ID_MAX   0xFE
#define VAL_MAX_SAVED_SMS_ID_PAIR 20
#define VAL_SMS_MO_TYPE_3GPP2    01
#define VAL_SMS_TRANS_LEN  10
#define CNMATIMEOUT 2000  /* according 3gpp2 spec, SMS ack should be returned in 2 seconds. */

/*Timer duration of CNMA for UIM related MT SMS, sometimes SIM takes more than 2s to handle the data.*/
#define CNMA_TIMEOUT_FOR_UIM_SMS 5000


#ifdef MTK_CBP_ENCRYPT_VOICE
#define MODE_MANUAL  0
#define MODE_AUTO    1
#define NUMBER_MAX_LEN  11

typedef enum
{
  VAL_SMS_MODE_ERROR,
  VAL_SMS_DECRYPT_ERROR,
  VAL_SMS_SIGNATURE_VERFY_ERROR,
  VAL_SMS_SEND_FAIL,
  VAL_SMS_OTHER_ERROR,
} ValSmsReportErrClassT;

#endif

/*! Sms in PDU format*/
typedef  struct
{
  kal_uint8 SmsState;  
#ifdef MTK_CBP_ENCRYPT_VOICE
  kal_bool CryptSmsPres;
#endif
  kal_uint8 SmsLength;
  kal_uint8 SmsData[VAL_SMS_MAX_SMS_PDU_LEN];
} ValSmsPduRecordT;

typedef struct
{
  kal_uint16 SeqNum;
  ValSmsPduRecordT PduRecord;
}ValSmsRecordT;

/*! Val sms sending info */
typedef  struct
{
  kal_bool   Acked;         /*!< Acked flag */
  kal_uint16 MoSeqNum;      /*!< Sending equence number */
#ifdef SYS_OPTION_NO_UI  
  kal_uint16 StoredRecId;
#endif  
}   ValSmsSendInfoT;

/*! Val sms Updating status */
typedef enum
{
  VAL_SMS_UPDATE_NONE,   /*!< Free for update */
  VAL_SMS_UPDATE_BUSY    /*!< Busy for update */
}ValSmsUpdateStatusIdT;

/*! Val sms update info */
typedef  struct
{
  kal_uint16 UpdateRecId;                   /*!< Update recored id */        
  ValSmsUpdateStatusIdT UpdateStatus;   /*!< Update status */
}   ValSmsUpdateInfoT;

#ifdef SYS_OPTION_NO_UI
typedef enum
{
  VAL_SMS_EVENT_INCOMING_MESSAGE       = 0x00000001,
  VAL_SMS_EVENT_SEND_STATUS_MESSAGE,
  VAL_SMS_EVENT_MEM_STATUS_MESSAGE,
  VAL_SMS_EVENT_SMS_WRITE_ERR_MESSAGE,     /*incoming msg write error event*/
  VAL_SMS_EVENT_SMS_SRV_READY_MESSAGE,     /*the vsms service is ready*/
  VAL_SMS_EVENT_SMS_RECEIVED_BUT_MEM_FULL, /*received a msg, but memory full, so the msg lost*/
  VAL_SMS_MAX_EVENTS
} ValSmsEventIdT;
#else
typedef kal_uint32 ValSmsEventIdT;
#endif
/*! SMS callback function structure */
typedef void (*ValSmsEventFunc) ( RegIdT RegId, ValSmsEventIdT Event, void *MsgP );

/*! SMS Event register table structure */
typedef struct
{
  kal_bool            IsUse;            /*!< if this entry is in use */
  kal_uint8           NumTeleSrvId;     /*!< Teleservice Id count */
  kal_uint16          TeleSrvId[VAL_SMS_TELESRVID_COUNT]; /*!< Teleservice id */
  ValSmsEventFunc CallBack;         /*!< Function to call back */
} ValSmsRegTableT;

/*! VAL SMS general result type   */
typedef enum
{
  VAL_SMS_SUCCESS,
  VAL_SMS_ERR_SMS_NOT_READY,
  VAL_SMS_ERR_MSG_FORMAT,
  VAL_SMS_ERR_INVALID_PARAMETER,
  VAL_SMS_ERR_BUSY_SENDING, /* while a register application send a sms message while the previous was not acknowleged*/
  VAL_SMS_ERR_DESTINATION_BUSY,
  VAL_SMS_ERR_NO_MEMORY,
  VAL_SMS_FDN_APPROVE_REQ_SENT,
  VAL_SMS_FDN_APPROVE_FAILED = 14,
  VAL_SMS_ERR_OTHER_FAILED
} ValSmsResultT;

/*! Sms terminal status */
typedef enum
{
  VAL_SMS_NO_TERMINAL_PROBLEMS,
  VAL_SMS_DESTINATION_RESOURSE_SHORTAGE,
  VAL_SMS_DESTINATION_OUT_OF_SERVICE,
  VAL_SMS_MAX_TERM_STATUS
} ValSmsTermStatusT;

#define IS_VALID_SMS_TERM_STATUS(a)  ((VAL_SMS_NO_TERMINAL_PROBLEMS <= (a)) && ((a) < VAL_SMS_MAX_TERM_STATUS))

/*! Val sms cause code define */
typedef enum
{
  VAL_SMS_CC_ADDRESS_VACANT                   = 0,
  VAL_SMS_CC_ADDRESS_TRANSLATION_FAILURE      = 1,
  VAL_SMS_CC_NETWORK_RESOURCE_SHORTAGE        = 2,
  VAL_SMS_CC_NETWORK_FAILURE                  = 3,
  VAL_SMS_CC_INVALID_TELESERVICE_ID           = 4,
  VAL_SMS_CC_OTHER_NETWORK_PROBLEM            = 5,
  VAL_SMS_CC_OTHER_NETWORK_PROBLEM_MORE_FIRST = 6,
  VAL_SMS_CC_OTHER_NETWORK_PROBLEM_MORE_LAST  = 31,
  VAL_SMS_CC_NO_PAGE_RESPONSE_S               = 32,
  VAL_SMS_CC_DESTINATION_BUSY                 = 33,
  VAL_SMS_CC_NO_ACKNOWLEDGEMENT               = 34,
  VAL_SMS_CC_DESTINATION_RESOURCE_SHORTAGE    = 35,
  VAL_SMS_CC_SMS_DELIVERY_POSTPONED           = 36,
  VAL_SMS_CC_DESTINATION_OUT_OF_SERVICE       = 37,
  VAL_SMS_CC_DESTINATION_NO_LONGER_AT_THIS_ADDRESS = 38,
  VAL_SMS_CC_OTHER_TERMINAL_PROBLEM                = 39,
  VAL_SMS_CC_OTHER_TERMINAL_PROBLEM_FIRST          = 40,
  VAL_SMS_CC_OTHER_TERMINAL_PROBLEM_LAST           = 47,
  VAL_SMS_CC_SMS_DELIVER_POSTPONED_MORE_FIRST      = 48,
  VAL_SMS_CC_SMS_DELIVER_POSTPONED_MORE_LAST       = 63,
  VAL_SMS_CC_RADIO_INTERFACE_RESOURCE_SHORTAGE     = 64,
  VAL_SMS_CC_RADIO_INTERFACE_INCOMPATIBILITY       = 65,
  VAL_SMS_CC_OTHER_RADIO_INTERFACE_PROBLEM         = 66,
  VAL_SMS_CC_OTHER_RADIO_IF_PROBLEM_MORE_FIRST     = 67,
  VAL_SMS_CC_OTHER_RADIO_IF_PROBLEM_MORE_LAST      = 95,
  VAL_SMS_CC_ENCODING_PROBLEM                      = 96,
  VAL_SMS_CC_SMS_ORIGINATION_DENIED                = 97,
  VAL_SMS_CC_SMS_TERMINATION_DENIED                = 98,
  VAL_SMS_CC_SUPPLEMENTARY_SERVICE_NOT_SUPPORTED   = 99,
  VAL_SMS_CC_SMS_NOT_SUPPORTED                     = 100,
  VAL_SMS_CC_RESERVED                              = 101,
  VAL_SMS_CC_MISSING_EXPECTED_PARAMETER            = 102,
  VAL_SMS_CC_MISSING_MANDATORY_PARAMETER           = 103,
  VAL_SMS_CC_UNRECOGNIZED_PARAMETER_VALUE          = 104,
  VAL_SMS_CC_UNEXPECTED_PARAMETER_VALUE            = 105,
  VAL_SMS_CC_USER_DATA_SIZE_ERROR                  = 106,
  VAL_SMS_CC_OTHER_GENERAL_PROBLEMS                = 107,
  VAL_SMS_CC_OTHER_GENERAL_PROBLEMS_MORE_FIRST     = 108,
  VAL_SMS_CC_OTHER_GENERAL_PROBLEMS_MORE_LAST      = 255,
  VAL_SMS_CC_MESSAGE_DELIVERED_SUCCESSFULLY        = 32768,
  VAL_SMS_CC_WAITING_FOR_TL_ACK                    = 32769,
  VAL_SMS_CC_OUT_OF_RESOURCES                      = 32770,
  VAL_SMS_CC_ACCESS_TOO_LARGE                      = 32771,
  VAL_SMS_CC_DRC_TOO_LARGE                         = 32772,
  VAL_SMS_CC_NETWORK_NOT_READY                     = 32773,
  VAL_SMS_CC_PHONE_NOT_READY                       = 32774,
  VAL_SMS_CC_NOT_ALLOWED_IN_AMPS                   = 32775,
  VAL_SMS_CC_NOT_SUPPORTED                         = 32776,
  VAL_SMS_CC_INVALID_TRANSACTION                   = 32777,
  VAL_SMS_CC_MESSAGE_NOT_SENT                      = 32778,
  VAL_SMS_CC_MESSAGE_BEGIN_SENT                    = 32779,
  VAL_SMS_MAX_CC
} ValSmsCCT;

/*! Macro for validating ValSmsCauseCodeT */
#define IS_VALID_SMS_CAUSE_CODE(a)                              \
     (((VAL_SMS_CC_ADDRESS_VACANT == (a)) || ((VAL_SMS_CC_ADDRESS_VACANT <(a)) &&                    \
                                         ((a) <= VAL_SMS_CC_OTHER_NETWORK_PROBLEM))) || \
      ((VAL_SMS_CC_NO_PAGE_RESPONSE_S <= (a)) &&                \
                                       ((a) <= VAL_SMS_CC_OTHER_TERMINAL_PROBLEM))  || \
      ((VAL_SMS_CC_RADIO_INTERFACE_RESOURCE_SHORTAGE <= (a)) && \
                                             ((a) <= VAL_SMS_CC_SMS_NOT_SUPPORTED)) || \
      ((VAL_SMS_CC_MISSING_EXPECTED_PARAMETER <= (a)) && ((a) < VAL_SMS_MAX_CC)))


/*! Send status */
/*val sms event message type for ui*/
typedef  struct
{
  ValSmsRecIdT recid;
}   ValSmsIncomingMsgT;

typedef  struct
{
  kal_uint8 SeqNum;       /* The PSW-MMI SeqNum id used in msg assembly  */
  ValSmsErrClassT  ErrClass;
  ValSmsCauseCodeT CauseCode;
}   ValSmsSendStatusMsgT;

/* val message type for sms uint */
typedef  struct
{
  ValDeviceT device;
  kal_bool       MemStatusFull;      /*KAL_TRUE for memory full, KAL_FALSE for memory enough */
}   ValSmsMemStatMsgT;

typedef  struct
{
  kal_bool       SmsMemFull;   /*KAL_TRUE for no memory, KAL_FALSE for memory enough */
  ValDeviceT device;
}   ValSmsMemStatusMsgT;

typedef  struct
{
  ValDeviceT device;
}   ValSmsWriteErrMsgT;

/*----------------------------------
message storage type define
------------------------------------*/

typedef enum
{
 /*VAL SMS Msg type               teleservice value in IS-637:*/

  MSG_IS91_PAGE_MSG,
  MSG_IS91_VOICE_MAIL,        /* analog mode teleservice */
  MSG_IS91_SHORT_MESSAG,
  MSG_VOICE_MAIL_MWI,

  MSG_TELE_SRV_IS91,    /* IS91_TS_ID_IS91           = 4096, */
  MSG_TELE_SRV_PAGE,    /* VAL_SMS_TS_ID_PAGE        = 4097, */
  MSG_TELE_SRV_MESSAGE, /* VAL_SMS_TS_ID_MESSAGE     = 4098, */
  MSG_TELE_SRV_VMN,     /* VAL_SMS_TS_ID_VOICE_MAIL  = 4099, */
  MSG_TELE_SRV_WAP,     /* VAL_SMS_TS_ID_WAP,    */
  MSG_TELE_SRV_WEMT,    /* VAL_SMS_TS_ID_WEMT,   */
  MSG_TELE_SRV_SCPT,    /* VAL_SMS_TS_ID_SCPT,   */
  MSG_TELE_SRV_CATPT,   /* VAL_SMS_TS_ID_CATPT   */
  MSG_BROAD_CAST_SRV,   /* broadcast SMS service, not a teleservice, here for the purpose of  management for all SMS service */
#if defined(LGT_EXTENSIONS)
  MSG_TELE_SRV_UNKNOWN,   /* VAL_SMS_LGT_UNKNOWN   */
#endif
  MSG_TELE_SRV_UNICOM,
  MSG_AUTO_REG_SRV,
  MSG_AUTO_DM_PUSH,
  MSG_TELE_SRV_GPS,
  MSG_TELE_SRV_DANDCN,
  MAX_REG_MSG
} ValSmsTeleSrvType;

typedef  struct
{
  kal_bool isUse;
#ifdef SYS_OPTION_NO_UI  
  ValSmsTeleSrvIdT TeleSrvId;
#else
  kal_uint16 TeleSrvId;
#endif  
  kal_uint8            RegIdCount;
  kal_bool             NeedSave;
  kal_uint8            NeedSaveCount;
}   RegEvtInfoT;


/*the memory status*/
typedef  struct
{
  kal_uint16 nFlashMaxSmsRec;
  kal_uint16 nFlashFreeSmsRec;
  kal_uint16 nUimMaxSmsRec;
  kal_uint16 nUimFreeSmsRec;
}   ValSmsStorParamsT;


typedef struct
{
  kal_int16 refNum;
  kal_uint8  maxNum;
  kal_uint8  seqNum;
  kal_uint8  numSegments;
  kal_uint16 recid;
}ValEmsHeaderT;

typedef enum
{
  Unused      =0,
  RxUnReadBox,
  RxReadBox,
  TxSentBox,
  DraftBox,
  RxUnRead,
  DuplicateUnRead, 
  RxRead, 
  DuplicateRead, 
  TxSent, 
  TxNotSent, 
  SentDelivered, 
  SentIncompleteDelivery, 
  SentDeliveryFailed, 
  SentNoServicePending, 
  DraftRead, 
  DraftSent, 
  DraftNotSent, 
  NUM_ETS_SMS_BOX
} ValSmsEtsMsgTypeT;


typedef enum
{
  SMS_ETS_EVT_ADDED,
  SMS_ETS_EVT_DELETED,
  SMS_ETS_EVT_MODIFIED,
  SMS_ETS_EVT_RECEIVED,
  SMS_ETS_EVT_SENT
} ValSmsEtsEventT;

typedef enum
{
  /*=== General errors ===*/
  
  UI_General_SUCCESS,
  UI_General_Index_Out_Of_Range,
  UI_General_Not_Implemented,
  UI_General_Storage_Full,
  UI_General_Empty_Index,
  
  /*=== SMS errors ===*/
  
  /*Network Problems*/
  UI_SMS_ADDRESS_VACANT,
  UI_SMS_ADDRESS_TRANSLATION, 
  UI_SMS_NETWORK_RESOURCE_SHORTAGE,
  UI_SMS_NETWORK_FAILURE,  
  UI_SMS_INVALID_TELESERVICE_ID,
  UI_SMS_OTHER_NETWORK_PROBLEM,
  UI_SMS_OTHER_NETWORK_PROBLEM_MORE_FIRST,
  UI_SMS_OTHER_NETWORK_PROBLEM_MORE_LAST,
  
  /*General Problems*/
  UI_SMS_NO_PAGE_RESPONSE,  
  UI_SMS_DESTINATION_BUSY,  
  UI_SMS_NO_ACKNOWLEDGEMENT,  
  UI_SMS_DESTINATION_RESOURCE_SHORTAGE,  
  UI_SMS_DELIVERY_POSTPONED,  
  UI_SMS_DESTINATION_OUT_OF_SERVICE,
  UI_SMS_DESTINATION_NO_LONGER_AT_THIS_ADDRESS,
  UI_SMS_OTHER_TERMINAL_PROBLEM,
  UI_SMS_OTHER_TERMINAL_PROBLEM_MORE_FIRST,
  UI_SMS_OTHER_TERMINAL_PROBLEM_MORE_LAST,
  UI_SMS_DELIVER_POSTPONED_MORE_FIRST,
  UI_SMS_DELIVER_POSTPONED_MORE_LAST,
  UI_SMS_RADIO_INTERFACE_RESOURCE_SHORTAGE,
  UI_SMS_RADIO_INTERFACE_INCOMPATIBILITY,
  UI_SMS_OTHER_RADIO_INTERFACE_PROBLEM,
  UI_SMS_OTHER_RADIO_INTERFACE_PROBLEM_MORE_FIRST,
  UI_SMS_OTHER_RADIO_INTERFACE_PROBLEM_MORE_LAST,
  UI_SMS_ENCODING_PROBLEM,
  UI_SMS_SUPPLEMENTARY_SERVICE_NOT_SUPPORTED,
  UI_SMS_RESERVED,
  UI_SMS_MISSING_EXPECTED_PARAMETER,
  UI_SMS_MISSING_MANDATORY_PARAMETER,
  UI_SMS_UNRECOGNIZED_PARAMATER_VALUE,
  UI_SMS_UNEXPECTED_PARAMATER_VALUE,
  UI_SMS_OTHER_GENERAL_PROBLEMS,
  UI_SMS_OTHER_GENERAL_PROBLEMS_MORE_FIRST,
  UI_SMS_OTHER_GENERAL_PROBLEMS_MORE_LAST,
  
  /*SERVICE NOT AVAILABLE*/
  UI_SMS_ORIGINATION_DENIED,
  
  /*INVALID DESTINATION*/
  UI_SMS_TERMINATION_DENIED,
  
  /*SERVICE NOT SUPPORTED*/
  UI_SMS_NOT_SUPPORTED,
  
  /*MESSAGE TOO LONG FOR NETWORK*/
  UI_SMS_USER_DATA_SIZE_ERROR,
  
  /*Other Messages*/
  UI_SMS_WAITING_FOR_TL_ACK,
  UI_SMS_OUT_OF_RESOURCES,
  UI_SMS_ACCESS_TOO_LARGE,
  UI_SMS_DRC_TOO_LARGE,
  UI_SMS_NETWORK_NOT_READY,
  UI_SMS_PHONE_NOT_READY,
  UI_SMS_NOT_ALLOWED_IN_AMPS,
  UI_SMS_INVALID_TRANSACTION,
  UI_SMS_MESSAGE_NOT_SENT,
  UI_SMS_MESSAGE_BEGIN_SENT,
  UI_SMS_MAX_NUMBER_OF_DESTINATIONS_IS_10,
  UI_SMS_MESSAGE_DELIVERY_FAILED
} ValSmsEtsStatT;

/* VAL_SMS_GET_COUNT_MSG */
typedef  struct
{
  kal_uint8 Storage;
}   ValSmsEtsGetCountMsgT;

typedef  struct
{
  kal_uint32 MsgCount[NUM_ETS_SMS_BOX];
}   ValSmsEtsGetCountRspMsgT;

/* VAL_SMS_GET_FIRST_MSG */
typedef  struct
{
  kal_uint8 Type;
  kal_uint8 Storage;
}   ValSmsEtsGetFirstMsgT;

typedef  struct
{
  kal_uint8 Status;
  kal_uint8 Type;
  kal_uint8 Storage;
  kal_uint16 Index;
  kal_uint8 EmsFlag;
  kal_uint8 EmsSegment;
  kal_uint8 EmsLast;
  kal_uint8 PhbType;
  kal_uint8 PhbByteCount;
  kal_uint8 Pb_Pdu_data[1];
}   ValSmsEtsGetMsgRspMsgT;

/* VAL_SMS_GET_NEXT_MSG */

/* VAL_SMS_WRITE_MSG */
typedef  struct
{
  kal_uint8 Type;
  kal_uint8 Storage;
  kal_uint16 Index;    /* for EMS only? */
  kal_uint8 EmsFlag;
  kal_uint8 EmsSegment;
  kal_uint8 EmsLast;
  kal_uint8 pdu_len;
  kal_uint8 Pdu[VAL_SMS_MAX_SMS_PDU_LEN];
}   ValSmsEtsWriteMsgT;

typedef  struct
{
  kal_uint8  Status;
  kal_uint8  Storage;
  kal_uint16 Index;
  kal_uint8  EmsSegment;
  kal_uint16 RefNum;
}   ValSmsEtsWriteRspMsgT;

/* VAL_SMS_DEL_ALL_MSG */
typedef  struct
{
  kal_uint8 Type;
  kal_uint8 Storage;
}   ValSmsEtsDelAllMsgT;

typedef  struct
{
  kal_uint8 Status;
  kal_uint8 Type;
  kal_uint8 Storage;
}   ValSmsEtsDelAllRspMsgT;

/* VAL_SMS_DEL_MSG */
typedef  struct
{
  kal_uint16 Index;
  kal_uint8  Storage;
}   ValSmsEtsDelMsgT;

typedef  struct
{
  kal_uint8 Status;
  kal_uint16 Index;
  kal_uint8 Storage;
}   ValSmsEtsDelRspMsgT;

/* VAL_SMS_SEND_MSG */
typedef  struct
{
  kal_uint8 Storage;
  kal_uint16 Index;    /* for EMS only? */
  kal_uint8 EmsFlag;
  kal_uint8 EmsSegment;
  kal_uint8 EmsLast;
  kal_uint8 Save;
  kal_uint8 Confirmation;
  kal_uint8 pdu_len;
  kal_uint8 Pdu[VAL_SMS_MAX_SMS_PDU_LEN];
}   ValSmsEtsSendMsgT;

typedef  struct
{   
  kal_uint8  Status;
  kal_uint8  Storage;
  kal_uint16 Index;
  kal_uint8  EmsSegment;
  kal_uint16 RefNum;
  kal_uint8  ErrorClass;
}   ValSmsEtsSendRspMsgT;

/* VAL_SMS_SEND_INDEX_MSG */
typedef  struct
{
  kal_uint8  Storage;
  kal_uint16 Index;
  kal_uint8 Save;
  kal_uint8 Confirmation;
}   ValSmsEtsSendIndexMsgT;

typedef  struct
{
  kal_uint8  Status;
  kal_uint8  Storage;
  kal_uint16 Index;
}   ValSmsEtsSendIndexRspMsgT;

/* VAL_SMS_SET_STATUS_MSG */
typedef  struct
{
  kal_uint8  Storage;
  kal_uint16 Index;
  kal_bool   Read;
}   ValSmsEtsSetStatusMsgT;

typedef  struct
{
  kal_uint8  Status;
  kal_uint8  Storage;
  kal_uint16 Index;
}   ValSmsEtsSetStatusRspMsgT;

/* VAL_SMS_SPY_MSG */
typedef  struct
{
  kal_uint8  Event;
  kal_uint8  Storage;
  kal_uint16 Index;
}   ValSmsEtsSpyMsgT;

#ifdef MTK_CBP_ENCRYPT_VOICE
typedef struct
{
   kal_uint8 len;
   kal_uint8 CallNum[NUMBER_MAX_LEN];
} ValSmsMocKeyReqMsgT;
typedef struct
{
   kal_uint8 OpType;
   kal_uint8 Result;
} ValSmsRemoteCtrlInsRspMsgT;

typedef ValSmsRemoteCtrlInsRspMsgT ValEncrySmsRemoteCtrlInsRspMsgT;

typedef struct
{
   kal_uint8 len;
   kal_uint8 CallNum[NUMBER_MAX_LEN];
} ValMtEncryptNotificationIndMsgT;

typedef struct
{
   kal_uint8 keyReqtype;/*1 MO,0 MT*/
   kal_uint8 mode; /*0: MANUAL,1: auto*/
   kal_uint8 calledNum[NUMBER_MAX_LEN];/*number ,max =11*/
   kal_uint8 calledBytes;                                            
} ValSmsEncryKeyReqMsgT;

typedef struct
{
   kal_uint8 mode;/*1 MO,0 MT*/                                       
} ValSmsModuleClearContextMsgT;

#endif


typedef  struct { 
   kal_uint8  sms_format;    /* reply sequence used in bearer reply opt */
   kal_uint8  sms_status;
   kal_uint16 msg_id;
   kal_uint8 seq_id; /* SMS sequence Number */
   kal_bool  is_used;
   kal_uint8 pduLen;
   kal_uint8 *pduPt;
}  ValSmsTransAseT;

typedef  struct { 
   kal_uint16 msg_id;
   kal_uint16 seq_id;
   kal_bool is_used;
}  ValSmsIdPairT;
#if (defined MTK_DEV_CCCI_FS) || (defined MTK_PLT_ON_PC_UT)
void valsmsDbmResponse(ilm_struct* current_ilm);
#endif

typedef PACKED_PREFIX struct {
    
   kal_uint8         send_over_ims_cs;  
   kal_uint16        length;   
   kal_uint8         pdu[VAL_SMS_MAX_SMS_PDU_LEN];
   kal_bool          is_no_error; //KAL_TRUE: no error, KAL_FALSE: has error
} PACKED_POSTFIX ValC2kSmsRspT;

typedef PACKED_PREFIX struct {
   kal_uint16	     length;
   kal_uint8         pdu[VAL_SMS_MAX_SMS_PDU_LEN];
} PACKED_POSTFIX SdmValC2kSmsSendReqT ;

/* MSG_ID_IMCSMS_VAL_C2K_SMS_SEND_REQ */
typedef PACKED_PREFIX struct {
	kal_uint16  length;
	kal_uint8   data[VAL_SMS_MAX_SMS_PDU_LEN];
} PACKED_POSTFIX ImcValC2kSmsSendReqT; 

typedef struct {
   kal_uint16	     length;
   kal_uint8         pdu[MAX_C2K_SMS_PDU_LEN];
   c2k_sms_rat_enum  send_over_ims_cs;
} SdmCvalC2kSmsSendReqT;

typedef struct{	
	kal_uint16  length;
	kal_uint8   data[MAX_C2K_SMS_PDU_LEN];
} ImcsmsCvalC2kSmsSendReqT;

typedef struct{	
	kal_uint16  length;
	kal_uint8   data[MAX_C2K_SMS_PDU_LEN];
} ImcsmsCvalC2kSmsRecvReqT;

typedef  struct
{
  kal_uint16    msg_id;
  kal_uint16    pdulen;
  kal_uint8     pdumsg[VAL_SMS_MAX_SMS_PDU_LEN];
}   ValSmsSdmSendReqPendingInfoT;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 src_id; /* Required for L4C*/
    l4_addr_bcd_struct tel_number; /* The telephone number to be approved*/
    kal_uint8 is_retrieve; /* Whether retrieving the hit entry of the given number is required*/
    l4c_phb_approval_type_enum approval_type; /* l4c_phb_approval_type_enum */
} l4cphb_approve_req_struct;

typedef struct {
    kal_uint8 src_id; /* The `src_id' of the corresponding reqest is forwarded back in this field.*/
    phb_errno_enum result; /* phb_errno_enum; Operation result*/
    kal_uint16 cause;
    phb_type_enum type; /* phb_type_enum; Type of phone number entries*/
    kal_uint8 esc;
} l4cphbapprovecnftT;

typedef struct {   
   c2k_sms_rat_enum  send_over_ims_cs;  
   kal_uint16        length;   
   kal_uint8         pdu[MAX_C2K_SMS_PDU_LEN];
   kal_bool          is_no_error; //KAL_TRUE: no error, KAL_FALSE: has error
} SdmCvalC2kSmsRspT;


/*****************************************************************************

  FUNCTION NAME: ValSmsGetStorParams

  DESCRIPTION:

      To get current storage memory statue parameters.

  PARAMETERS:

   pSmsStorParams: the buffer where to write the ValSmsStorParamsT info back

  RETURNED VALUES:
    success is true.failed is false

*****************************************************************************/
kal_bool ValSmsGetStorParams( ValSmsStorParamsT* pSmsStorParams );

/*! Macro for valid sms service option */
#define IS_VALID_SMS_SO(a)   (((a) == 0) || ((a) == VAL_SERVICE_OPTION_6) || ((a) == VAL_SERVICE_OPTION_14))

void ValSmsInitUimSms( void );
void ValSmsInit( void );
kal_bool ValSmsProcessMsg( kal_uint32 MsgId, void *MsgBufP, kal_uint32 MsgLen );
void ValSmsSendCbsCfgToPsw(ValSmsCbsInfoT* CbsInfo);

RegIdT ValSmsRegister( ValSmsEventFunc CallBack );
//don't modify following Function, brew has referred to it
ValSmsResultT ValSmsUnregister( RegIdT RegId );
ValSmsResultT ValSmsStartRegSrv( RegIdT RegId, kal_uint16  TeleSrvId);
ValSmsResultT ValSmsStopRegSrv( RegIdT RegId, kal_uint16 TeleId );

//don't modify following Function, brew has referred to it
kal_bool ValSmsGetSmsStatus( void );
void ValSmsSetSmsStatus(kal_bool Flg);

void ValSmsSetSendOnTraffic( kal_bool sendOnTraffic );
ValSmsResultT ValSmsSetPrefSvcOpt( ValServiceOptionT SmsSo );
ValSmsResultT ValSmsSetBroadcastParams( kal_uint32 SvcMask, kal_uint32 LangMask, kal_uint8  Priority );
ValSmsResultT ValSmsUpdateTxtMessage(ValSmsTxtRecordT *pSmsTxtMsg,kal_uint16 recId);
ValSmsResultT ValSmsUpdatePduMessage(ValSmsPduRecordT *pSmsRecord,kal_uint16 recId);
ValSmsResultT ValSmsReadTxtMessage(ValSmsTxtRecordT *pSmsMessage,kal_uint16 recId);
ValSmsResultT ValSmsReadPduMessage(ValSmsPduRecordT *pSmsRecord,kal_uint16 recId);

#ifdef  SYS_OPTION_NO_UI
ValSmsResultT ValSmsSendPduMessage( RegIdT RegId, ValSmsRecIdT*  recidP, kal_uint8* MsgBufP, kal_uint8 nbytes, kal_uint16* MsgId, kal_bool ToBeSave );
ValSmsResultT ValSmsSendTxtMessage( RegIdT   RegId, ValSmsRecIdT* recid,  ValSmsTxtRecordT*   SmsTxtMsgP, kal_uint16* MsgId, kal_bool ToBeSave);
#else
ValSmsResultT ValSmsSendPduMessage(RegIdT RegId, kal_uint8 *MsgBufP, kal_uint8 MsgLength);
ValSmsResultT ValSmsSendTxtMessage(RegIdT RegId, ValSmsTxtRecordT *TxtRecord);
#endif
kal_bool ValSmsProcessMsg( kal_uint32 MsgId, void*  MsgBuf, kal_uint32 MsgLen );
void ValSmsSendAck(ValSmsResultT Result, kal_uint32 SeqNumber);

ValSmsTeleSrvIdT ValSmsGetTeleSrvFromPdu(kal_uint8 *DataP, kal_uint8 Length);

kal_bool CheckSmsPdu(kal_uint8 *ValSmsPduP, kal_uint8 Length);
ValDeviceT ValSmsGetStorage( void );
void ValSmsSetMultiSMSMode(kal_bool IsMultiSMS);

int  ValSmsSendMessage( ValSmsTxtRecordT *MessageP );



#ifdef MTK_DEV_C2K_IRAT
void valProcSdmC2kSmsSendReqMsg(kal_uint16 length,kal_uint8* pdu);
void valProcSdmC2kSmsOverImsSendReqMsg(kal_uint16 length,kal_uint8 *pdu);
void valProcImcsmsC2kSmsSendReqMsg(kal_uint16 length,kal_uint8 *pdu);
void valProcSdmC2kSmsSendIndMsg(kal_uint8 format,kal_uint16 length,kal_uint8* pdu);
void valProcSdmC2kSmsSendRspMsg(kal_uint8 send_over_ims_cs,kal_uint16 length,kal_uint8 *pdu);
void valProcSdmC2kSmsRspMsg(SdmCvalC2kSmsRspT* pValSmsRsp);
void valProcUiccPPdownLoadRspMsg(kal_uint8 *pdu,kal_uint8 length,kal_uint8 seq_id);
void valPreProcPPdownloadMsg(kal_uint8 *pdu,kal_uint8 length,kal_uint8 seq_id);
void valProcUtkSmsMsg(kal_uint8 *pdu,kal_uint8 length);
void valProcImcsmsC2kSmsRecvReqMsg(kal_uint16 length,kal_uint8 *data);
void SendSmsAckForIms(kal_uint8 *ackPdu, kal_uint8 pduLen);

#endif

void CNMASendSMSMsg(kal_uint8 length, kal_uint8 *pduBuf,kal_uint16 seqNum);
kal_bool ValSmsIsAddrE911(kal_uint8 *data, kal_uint16 length);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif  /* VALSMSAPI_H */



