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
* Copyright (c) 2005-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
#ifndef VALUIMAPI_H
#define VALUIMAPI_H
/*****************************************************************************
 
  FILE NAME:  valuimapi.h

  DESCRIPTION:

   This file contains all constants and typedefs needed by
   valuimapi.c. It provides the main UIM functions to VAL layer.


*****************************************************************************/
#include "uimapi.h"
#include "valapi.h"
#include "valphbapi.h"
#include "valsmsapi.h"
#ifdef MTK_DEV_C2K_IRAT
#include "valutkapi.h"
#endif

#ifdef  __cplusplus
extern "C" {
#endif

#define VAL_CHV_MAX_INPUT_NUM           3
#define VAL_CHV_UNBLOCK_MAX_INPUT_NUM  10
#define VAL_UIM_MAX_REG_IDS             2
#define VAL_UIM_MAX_MDN_COUNT          10 
#ifdef MTK_CBP
/* according to 3.4.34 of TIA/EIA-95-B of C.S0023 */
#define VAL_MAX_DIGITS_IN_EF_MDN       15

#define VAL_UIM_MAX_FULLPATH_LENGTH     8
#define VAL_UIM_MAX_RECORD_NUM          20

#define VAL_UIM_ICCID_LEN   21
#endif
#define VAL_UIM_MAX_SMSVP_COUNT 4

/* CHV Status read from UIM card */
typedef  struct
{
  CardStatusT          CardStatus;
  ChvStatusT           ChvStatus;
#ifdef MTK_DEV_C2K_IRAT
  kal_bool                 UsimAppExisted;
#endif
  kal_uint8                ChvSum;       /* Sum of CHV attempt */
  kal_uint8                PukSum;       /* Sum of UNBLOCK CHV attempt */
  kal_uint8                Chv1LeftCount;
  kal_uint8                Chv2LeftCount;
  kal_uint8                Puk1LeftCount;
  kal_uint8                Puk2LeftCount;
#ifdef __CARRIER_RESTRICTION__
  kal_uint8                SlotId;
#endif
}   ValChvStatusT;

typedef struct
{
  kal_bool  AppInfoValid;
  kal_uint8 Channel_Id;
  kal_uint8 Protocol_Id;
  kal_uint8 AID_Len;
  kal_uint8 AID[UICC_AID_MAX_LEN];
  kal_uint8 APP_Label_Len;
  kal_uint8 APP_Label[UICC_APP_LABEL_LEN];
  kal_bool	PIN1_Enabled;
  kal_bool	PIN2_Enabled;
  kal_uint8 PIN1_Count;
  kal_uint8 PIN2_Count;
  kal_uint8 PUK1_Count;
  kal_uint8 PUK2_Count;
  kal_uint8  ChvStatus;
#ifdef __CARRIER_RESTRICTION__
  kal_uint8  SlotId;
#endif
  kal_uint16 CardStatus;
}ValCardAppInfoT;

#ifdef MTK_DEV_C2K_IRAT
extern kal_uint8 ValUimInfoReadStatus;

#define VAL_UIM_SP_NAME_READ_MASK   0x01
#define VAL_UIM_MDN_READ_MASK       0x02
#define VAL_UIM_ICCID_READ_MASK     0x04
#define VAL_UIM_NAM_DATA_READ_MASK  0x08
#define VAL_UIM_INFO_ALL_READ_MASK  0x0F

#define UIM_UTK_MENU_SIZE 256

typedef enum
{
    VAL_UTK_SMS_FILE_COMPLETED = 0x1,
    VAL_UTK_HLP_FILE_COMPLETD = 0x2,  
    VAL_UTK_ALL_FILE_COMPLETED_MASK = 0x3
}ValUimUtkFileMaskTypeT;

typedef enum
{
    VAL_CAT_TYPE_STK,
    VAL_CAT_TYPE_UTK,
    VAL_CAT_TYPE_NUM
} ValCatTypeE;

typedef enum
{
   VAL_UTK_HANDLE_BY_TE,   /* CMD and TR handled by AP/MMI */
   VAL_UTK_HANDLE_BY_SIM, /* CMD and TR handled by modem. But some cmd might need TE involve ex: STKCALL,STKSS,.. */
   VAL_UTK_HANDLE_NULL   
}ValUtkCmdCfgE;

typedef enum
{
    UTK_NO_TIMER_STATUS = 0,
    UTK_TIMER_RUNNING,
    UTK_TIMER_NOT_RUNNING,
    UTK_TIMER_STOPPED,
    UTK_TIMER_TIMED_OUT
} UtkTimerStatusT;

typedef struct
{
  kal_uint8   timer_id;                 /* Timer ID */  
  eventid     event_id;   /* Event Id returned by EventSchedular when an event is set */
  kal_uint32          UtkTimerValue;
  UtkTimerStatusT UtkTimerStatus;
  kal_uint32          StartTime;
}UtkTimerManagerT;


enum
{
    UTK_FILE_ADN = 0x6F3A,
    UTK_FILE_FDN = 0x6F3B,  
    UTK_FILE_SMS = 0x6F3C, 
    UTK_FILE_SPN = 0x6F41,
    UTK_FILE_MDN = 0x6F44,
    UTK_FILE_CST = 0x6F32,
    UTK_FILE_EST = 0x6F75,
    UTK_FILE_ICCID = 0x2FE2,
    UTK_FILE_HRPDCAP = 0x6F56,
    UTK_FILE_HRPDUPP = 0x6F57,
    UTK_FILE_ME3GPD = 0x6F48,
    UTK_FILE_3GPDOPM = 0x6F49,
    UTK_FILE_SIPCAP = 0x6F4A,
    UTK_FILE_MIPCAP = 0x6F4B,
    UTK_FILE_SIPUPP = 0x6F4C,
    UTK_FILE_MIPUPP = 0x6F4D,
    UTK_FILE_SIPSP = 0x6F4E,
    UTK_FILE_MIPSP = 0x6F4F,
    UTK_FILE_SIPPAPSS = 0x6F50,
    UTK_FILE_MIPFLAGS = 0x6F78,
    UTK_FILE_C_MIPFLAGS = 0x6F84,
    UTK_FILE_SIPUPPEXT = 0x6F7D,
    UTK_FILE_MIPUPPEXT = 0x6F80,
    UTK_FILE_TCPCONFIG = 0x6F79,
    UTK_FILE_C_TCPCONFIG = 0x6F88,
    UTK_FILE_DGC = 0x6F7A,
    UTK_FILE_C_DGC = 0x6F89,
    UTK_FILE_IPV6CAP = 0x6F77,
    UTK_FILE_C_IPV6CAP = 0x6F87
    /* add other files here */
};

#define VAL_UIM_FILE_LIST_MAX 50

typedef struct
{
  kal_uint8   FileCount;
  kal_uint16  FileId[VAL_UIM_FILE_LIST_MAX];
}ValUimFileListT;

#endif

/* Define CHV type */
typedef enum
{
  VAL_CHV1 = 1,
  VAL_CHV2
} ValChvIdT;

/* Define CHV operation response result */
typedef enum
{
  VAL_CHV_OP_SUCCESS = 0,	
  VAL_CHV_NOT_INITIALIZE, /* no CHV initialized */
  VAL_CHV_OP_FAILURE_AND_PERMIT_ATTEMPT, /*  unsuccessful CHV/UNBLOCK CHV verification, at least one attempt left */
  VAL_CHV_OP_CONTRADICTION_WITH_CHV_STATUS, /* in contradiction with CHV status */
  VAL_CHV_OP_CONTRADICTION_WITH_INVALIDATION_STATE, /* in contradiction with invalidation status */
  VAL_CHV_OP_FAILURE_AND_NO_ATTEMPT, /*unsuccessful CHV/UNBLOCK CHV verification, no attempt left;CHV/UNBLOCK CHV blocked*/
  VAL_CHV_OP_FAILURE_RECOVERY,    /*fast recovery during CHV process*/
  VAL_CHV_OP_FAILURE /*failure caused by other causes */
} ValChvOpResultT;

#ifdef CHV_DEBUG
/* test message */
typedef  struct
{
  kal_uint8 ChvId; /* Specify the CHV */
  kal_uint8 ChvLen;
  kal_uint8 ChvVal[8]; /* CHV value */	
}   ValChvTstReqVerifyMsgT;
/* change CHV  msg */
typedef  struct 
{
  kal_uint8 ChvId;       /* Specify the CHV */
  kal_uint8 OldChvLen;
  kal_uint8 OldChvVal[8];/* Old CHV value */
  kal_uint8 NewChvLen;
  kal_uint8 NewChvVal[8];/* New CHV value */
}   ValChvTstReqChangeMsgT;

/* Disable CHV Msg */
typedef  struct 
{
  kal_uint8 ChvLen;
  kal_uint8 Chv1Val[8];	/* CHV1 value */
}   ValChvTstReqDisableMsgT;

/* Enable CHV Msg */
typedef  struct 
{
  kal_uint8 ChvLen;
  kal_uint8 Chv1Val[8]; /* CHV1 value */
}   ValChvTstReqEnableMsgT;

/* Unblock CHV Msg */
typedef  struct 
{
  kal_uint8 ChvId;        /* Specify the CHV */
  kal_uint8 UblkChvLen;
  kal_uint8 UblkChvVal[8];/* Unblock CHV value */
  kal_uint8 NewChvLen;
  kal_uint8 NewChvVal[8]; /* New CHV value */
}   ValChvTstReqUnblockMsgT;

#endif /* CHV_DEBUG */

/*********UIM Short Message Service Parameters structure***********/
typedef struct
{
    kal_uint8 RecLen;
    kal_uint8 RecData[127];
}ValUimSmsParamRecT;

/******************** UIM MDN structures***************************/
/* Val MDN buffer structure(MDN is BCD type) */
typedef struct
{
  kal_uint8 MdnLen;
  kal_uint8 Mdn[8];
} ValUimMdnT;

/* Val MDN structure(MDN is kal_char type) */
typedef struct
{
  kal_uint8 MdnLen;
  kal_uint8 Mdn[NAM_MAX_MDN_DIGITS];
} ValUimMdnRecT;

/****** Val Uim notify register event *****/
typedef enum
{
  VAL_UIM_EVENT_NOTIFY_REGISTER 
} ValUimEventIdT;
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
/* ETS Test Messages */
typedef  struct
{
  kal_uint8 nIndex;
}   ValUimGenericMsgT;

typedef  struct
{
  kal_uint8 nIndex;
  kal_uint8 Name[MAXALPHALENGTH];
  kal_uint8 PhNum[21];
}   ValUimUpdatePhbRecMsgT;

typedef  struct
{
  kal_uint8 nIndex;
  kal_uint8 nStatus;
  kal_uint8 MsgData[255];
  kal_uint8 MsgLen;
}   ValUimUpdateSmsRecMsgT;

typedef  struct
{
  ExeRspMsgT RspInfo;
}   ValChvMsgT;

typedef  struct
{
  kal_bool status;
}   ValChvStatusMsgT;

typedef  struct
{
  ExeRspMsgT RspInfo;
  kal_uint8      ChvId;
  kal_uint8      ChvLen;
  kal_uint8      Chv[8];
}   ValChvVerifyMsgT;

typedef  struct
{
  ExeRspMsgT RspInfo;
  kal_uint8      ChvId;
  kal_uint8      OldChvLen;
  kal_uint8      OldChv[8];
  kal_uint8      NewChvLen;
  kal_uint8      NewChv[8];
}   ValChvChangeMsgT;

typedef  struct
{
  ExeRspMsgT RspInfo;
  kal_uint8      Chv1Len;
  kal_uint8      Chv1[8];
}   ValChvEnableDisableMsgT;

typedef  struct
{
  ExeRspMsgT RspInfo;
  kal_uint8      ChvId;
  kal_uint8      UnblockChvLen;
  kal_uint8      UnblockChv[8];
  kal_uint8      NewChvLen;
  kal_uint8      NewChv[8];
}   ValChvUnblockMsgT;

typedef  struct
{
  ExeRspMsgT RspInfo;
}   ValUimGetMaxMdnRecsMsgT;

typedef  struct
{
  kal_uint8 numRecs;
}   ValUimNumRecsMsgT;

typedef  struct
{
  kal_uint8           Encoding;
  kal_uint8           Language;
  kal_uint16          StringLen;
  kal_char            String[32];
}   SPNameT;

typedef struct
{
  SPNameT SPName;
  kal_bool    IsValidData;
} ValSPNameT;


/*get gsm imsi data*/
#define VAL_UIM_GSM_IMSI_LEN 9

typedef struct
{
  ExeRspMsgT RspMsg;
  kal_bool ImsiValid;
  kal_uint8 ImsiData[VAL_UIM_GSM_IMSI_LEN];
}ValUimGsmImsiRspMsgT;

typedef enum
{
  TYPE_RAND = 0,
  TYPE_RANDU =1
}ValRandTypeT;

typedef enum
{
   VAL_UIM_NT_UNKNOWN        = 0,
   VAL_UIM_NT_INTERNATIONAL,
   VAL_UIM_NT_NATIONAL,
   VAL_UIM_NT_NETWORK_SPECIFIC,
   VAL_UIM_NT_SUBSCRIBER,
   VAL_UIM_NT_RESERVED,
   VAL_UIM_NT_ABBREVIATED    = 6
} ValUimNumberTypeT;

typedef enum
{
   VAL_UIM_NP_UNKNOWN = 0,
   VAL_UIM_NP_ISDN_TELEPHONY,
   VAL_UIM_NP_RESERVED2,
   VAL_UIM_NP_DATA,
   VAL_UIM_NP_TELEX,
   VAL_UIM_NP_RESERVED5,
   VAL_UIM_NP_RESERVED6,
   VAL_UIM_NP_RESERVED7,
   VAL_UIM_NP_RESERVED8,
   VAL_UIM_NP_PRIVATE = 9
} ValUimNumberPlanT;

typedef enum
{
  VAL_UIM_READ_BINARY = 0xB0,
  VAL_UIM_READ_RECORD = 0xB2,
  VAL_UIM_UPDATE_BINARY = 0xD6,
  VAL_UIM_UPDATE_RECORD = 0xDC,
  VAL_UIM_STORE_ESN = 0xDE,
  VAL_UIM_STATUS = 0xF2,
  VAL_UIM_ENVELOPE = 0xC2,
  VAL_UIM_TERM_PROFILE = 0x10,
  VAL_UIM_TERM_RESPONSE = 0x14,
  VAL_UIM_SELECT_FILE = 0xA4,
  VAL_UIM_GET_RESPONSE = 0xC0
  /* Reserved */
}ValUimCmdT;

#ifdef MTK_DEV_C2K_IRAT
typedef enum
{
  VAL_UIM_BT_CONNECT = 0,
  VAL_UIM_BT_DISCONNECT,
  VAL_UIM_BT_POWER_ON,
  VAL_UIM_BT_POWER_OFF,
  VAL_UIM_BT_RESET,
  VAL_UIM_BT_APDU,
  VAL_UIM_BT_INVALID_CMD
}ValBTCmdT;
#endif

typedef  struct 
{
    kal_bool            Ack; /* KAL_TRUE: Operation is successful, KAL_FALSE: File doesn't exist or operation is error */
    kal_uint8           SDNRecCount;		
}   ValUimSDNParamsT;

typedef   struct 
{
    kal_bool            Ack; /* KAL_TRUE: Operation is successful, KAL_FALSE: File doesn't exist or operation is error */
    kal_bool            IsFree;  
    kal_uint8           RecordIndex;
    kal_uint8           AlphaIdentifier[VAL_PHB_MAX_ALPHA_LENGTH];
    kal_uint8           PhoneNumber[VAL_PHB_MAX_PHONE_LENGTH];
    kal_uint8           TON;
    kal_uint8           NPI;
}   ValUimSDNRecT;

typedef  struct
{
	kal_uint8 DisCond;   /*display condiction*/
	kal_uint8 Encoding;   /* character encoding*/
	kal_uint8 LangInd;    /*language indication */
	kal_uint8 Name[32];
}  ValUimProviderName;

#define VAL_UIM_MAX_ADDRESS_NUM 20
/* Address (8.1) */
typedef struct
{
  ValUimNumberPlanT Npi;
  ValUimNumberTypeT Ton;
  kal_uint8             Len;
  kal_uint8             Number[VAL_UIM_MAX_ADDRESS_NUM];
} ValUimAddressT;

typedef enum
{
  VAL_UIM_SETUP_CALL_ONIDLE,  /* set up call, but only if not currently busy on another call */
  VAL_UIM_SETUP_CALL_ONIDLE_REDIALABLE, /*set up call, but only if not currently busy on another call, with redial*/
  VAL_UIM_SETUP_CALL_HOLDABLE, /*set up call, putting all other calls (if any) on hold */
  VAL_UIM_SETUP_CALL_HOLDABLE_REDIALABLE, /*set up call, putting all other calls (if any) on hold, with redial*/
  VAL_UIM_SETUP_CALL_DISCONNECTABLE, /*set up call, disconnecting all other calls (if any)*/
  VAL_UIM_SETUP_CALL_DISCONNECTABLE_REDIALABLE /*set up call, disconnecting all other calls (if any), with redial*/ 
} ValUimCallTypeT;

typedef struct
{
   ValUimCallTypeT CallType;
   ValUimAddressT  Address;
   kal_uint32          Duration;  /* ms */
}ValUimSetUpCallT;

typedef struct
{
  kal_uint8         UtkSmsLen; 
  kal_uint8         *UtkSmsBufferP;
  kal_uint8         UtkSmsTR;
  ValUimAddressT    UtkSmsAddress;  
  kal_bool          additionInfo_existed;
  kal_uint8         additionalInfo;  
  kal_bool          utkIconDisplayed;
  kal_uint8         utkSmsMode;
}utkSmsInfoT;

typedef struct
{
  ValUimSetUpCallT          utkCallCmd;
  kal_uint8                 utkCallTR;
  kal_bool                  additionInfo_existed;
  kal_uint8                 additionalInfo;
  kal_bool                  utkIconDisplayed;
  kal_uint8                 rspAtChan;
}utkCallInfoT;

typedef struct
{
    kal_uint8 timer_data[8];            /* Time Out Value */
    eventid event_id;   /* Event Id returned by
                           EventSchedular when an
                           event is set */
    kal_uint32 ref_ticks;               /* the ticks while the timer is set */
    kal_uint8 timer_id;                 /* Timer ID */
    /* [MOLY_00149149] mtk12081 : modify due to SIM module ID is bigger than 255 for L+W projects */
    kal_uint16 current_module;
    sim_timer_status_enum timer_status; /* Timer Status */
} sim_timer_info_struct;


typedef struct
{
  ValCatTypeE   CatType;
  kal_uint8         StoredUtkMenu[UIM_UTK_MENU_SIZE];
  kal_uint16        UtkMenuLen;
  
  kal_uint8         CmdNum;
  kal_uint8         CmdType;
  kal_uint8         CmdQualifier;  
  UtkTimerManagerT     UtkTimerManager[UTK_TIMER_MANAGER_NUM];
  kal_bool          RecvTerminalRspFromAp;
  utkSmsInfoT   utkSmsInfo;  
  utkCallInfoT  utkCallInfo;
}ValUimUtkInfoT;

typedef enum
{

   UIM_FILE_TYPE_INVALID = 0x00,
   UIM_FILE_TYPE_MF,
   UIM_FILE_TYPE_DF, 
   UIM_FILE_TYPE_EF, 
   UIM_FILE_TYPE_EF_TRANSPARENT, 
   UIM_FILE_TYPE_EF_CYCLIC,
   UIM_FILE_TYPE_EF_LINEARFIXED,
} UimFileTypeT;

typedef struct
{
    kal_uint16    sw;
    kal_uint8	  file_fcp_len;
	kal_uint8*    file_fcp;
}ValCacheFcpInfoT;

typedef struct
{
    kal_bool   binary_valid;
    kal_uint16 sw;
    kal_uint16 cached_binary_len; 
    kal_uint8* cached_binary_content; 
}ValCacheBinaryInfoT;

typedef struct
{
    kal_bool   record_valid;
    kal_uint8  record_index;
	kal_uint8  record_len;
	kal_uint16 sw;
	kal_uint8* record_data;
}ValCacheRecordInfoT;

typedef struct
{
    kal_uint8  file_record_num;
    ValCacheRecordInfoT cached_record_content[VAL_UIM_MAX_RECORD_NUM];   /*first two bytes for SW*/
}ValCacheRecordInfoListT;


typedef struct
{
    kal_bool      is_used;
    UimFileTypeT  file_type;
	kal_uint8	  file_path_len;
	kal_uint8	  file_path[VAL_UIM_MAX_FULLPATH_LENGTH];
	kal_bool      file_fcp_valid;
	ValCacheFcpInfoT fcp_info;
	union
	{
	  ValCacheBinaryInfoT     binary_info;
	  ValCacheRecordInfoListT record_info;
	} file_content_info;
}ValCacheUimFileT;


typedef struct
{
    kal_uint16 PduLen;
    kal_uint8* PduData;
}ValExtendedPduT;


/*****************************************************************************

  FUNCTION NAME: ValUimInit

  DESCRIPTION:

    Create ValUimEvtLock. 

  PARAMETERS:

    None.

  RETURNED VALUES:

    None

*****************************************************************************/
void ValUimInit( void );

#if 0
/* under construction !*/
#endif

/********************************************************************************
 
  FUNCTION NAME: ValUimGetMaxMdnRecNum 

  DESCRIPTION:

    It's invoked to Get the number of EF MDN record in UIM card.
    
  PARAMETERS:

    None.
    
  RETURNED VALUES:

    Num: the number of MDN record.

*********************************************************************************/
kal_uint8 ValUimGetMaxMdnRecNum( void );

/********************************************************************************
 
  FUNCTION NAME: ValUimGetMdnRec 

  DESCRIPTION:

    It's invoked to Get MDN record.
    
  PARAMETERS:

    Index:      Record index, start from 1.
    MdnRecP:    Returned Mdn pointer.
    
  RETURNED VALUES:

    KAL_TRUE: this operation is successful. 
    KAL_FALSE: failure.

*********************************************************************************/
kal_bool ValUimGetMdnRec( kal_uint8          Index,
                      ValUimMdnRecT* MdnRecP );

/********************************************************************************
 
  FUNCTION NAME: ValUimUpdateMdnRec 

  DESCRIPTION:

    This routine sends Update Record(6F44) message to the UIM task.
  PARAMETERS:
  
    Index: Record index, start from 1.
    Len: MDN length
    MdnP: Point to MDN buffer.
   
  RETURNED VALUES:

    KAL_TRUE: this operation is successful. 
    KAL_FALSE: failure.

*********************************************************************************/
kal_bool ValUimUpdateMdnRec( kal_uint8  Index,
                         kal_uint8  Len,
                         kal_uint8* MdnP );

/*********************************************************************************
 
  FUNCTION NAME: ValUimDelMdnRec 

  DESCRIPTION:

    This routine sends Update Record(6F44) message to the UIM task.
    
  PARAMETERS:
  
    Index: Record index, start from 1.
   
  RETURNED VALUES:

    KAL_TRUE: this operation is successful. 
    KAL_FALSE: failure.

**********************************************************************************/
kal_bool ValUimDelMdnRec( kal_uint8 Index );

/*****************************************************************************

  FUNCTION NAME: ValUimMdnDeliverMsg

  DESCRIPTION:

    Deliver UIM MDN response messages.  It is used by valtask.

  PARAMETERS:

    MsgId: received message id   
    MsgP: message
    MsgSize: message size	

  RETURNED VALUES:

    None

*****************************************************************************/
void ValUimMdnDeliverMsg( kal_uint32 MsgId,
                          void*  MsgP,
                          kal_uint32 MsgSize );

/*****************************************************************************
 
  FUNCTION NAME: ValChvGetStatus 

  DESCRIPTION:

    This routine sends UIM Get Status message to the UIM task, and saves callback 
    function's pointer in order to process CHV state when the response from the
    UIM is received.
    
  PARAMETERS:

    ChvCallbackP: Pointer to callback function

  RETURNED VALUES:

    KAL_TRUE: Get Status Msg has been sent.
    KAL_FALSE: error. callback=NULL or other task is doing this operation. 

*****************************************************************************/
kal_bool ValChvGetStatus( void(*ChvCallbackP)(ValChvStatusT) );

#ifdef MTK_DEV_C2K_IRAT
/*****************************************************************************
 
  FUNCTION NAME: ValLocalChvVerify 

  DESCRIPTION:

    This routine sends  verify CHV  message to the UIM task
    
  PARAMETERS:
  
    ChvId: CHV1 or CHV2

  RETURNED VALUES:

            none
            
*****************************************************************************/
void ValLocalChvVerify( ValChvIdT ChvId);
#endif
/*****************************************************************************
 
  FUNCTION NAME: ValChvVerify 

  DESCRIPTION:

    This routine sends App verify CHV  message to the UIM task, and saves callback 
    function's pointer in order to process the result when the response from the 
    UIM is received.
    
  PARAMETERS:
  
    ChvId: CHV1 or CHV2
    ChvLen: Length of CHV value
    ChvP: Pointer to CHV value 
    ChvCallbackP: Pointer to callback function

  RETURNED VALUES:

    KAL_TRUE: Uim App Verify Msg has been sent.
    KAL_FALSE: error. callback=NULL or other task is doing this operation. 

*****************************************************************************/
kal_bool ValChvVerify( ValChvIdT ChvId,
                   kal_uint8     ChvLen,
                   kal_uint8*    ChvP,
                   void      (*ChvCallbackP)(ValChvOpResultT) );

/*****************************************************************************
 
  FUNCTION NAME: ValChvChange 

  DESCRIPTION:

    This routine sends App change CHV  message to the UIM task, and saves callback
    function's pointer in order to process the result when the response from the 
    UIM is received.
    
  PARAMETERS:
  
    ChvId: CHV1 or CHV2
    OldChvLen: Length of old CHV value
    OldChvP: Pointer to old CHV value 
    NewChvLen: Length of new CHV value
    NewChvP: Pointer to new CHV value
    ChvCallbackP: Pointer to callback function

  RETURNED VALUES:

    KAL_TRUE: Uim App change Chv Msg has been sent.
    KAL_FALSE: error. callback=NULL or other task is doing this operation. 

*****************************************************************************/
kal_bool ValChvChange( ValChvIdT ChvId,
                   kal_uint8     OldChvLen,
                   kal_uint8*    OldChvP,
                   kal_uint8     NewChvLen,
                   kal_uint8*    NewChvP,
                   void      (*ChvCallbackP)(ValChvOpResultT) );

/*****************************************************************************
 
  FUNCTION NAME: ValChvDisable 

  DESCRIPTION:

    This routine sends App disable CHV  message to the UIM task, and saves callback 
    function's pointer in order to process the result when the response from 
    the UIM is received.
    
  PARAMETERS:
  
    Chv1Len: Length of CHV1 value
    Chv1P: Pointer to CHV1 value 
    ChvCallbackP: Pointer to callback function

  RETURNED VALUES:

    KAL_TRUE: Uim App Disable Chv Msg has been sent.
    KAL_FALSE: error. callback=NULL or other task is doing this operation. 

*****************************************************************************/
kal_bool ValChvDisable( kal_uint8  Chv1Len,
                    kal_uint8* Chv1P,
                    void   (*ChvCallbackP)(ValChvOpResultT) );

/*****************************************************************************
 
  FUNCTION NAME: ValChvEnable 

  DESCRIPTION:

    This routine sends App enable CHV message to the UIM task, and saves callback 
    function's pointer in order to process the result when the response from
    the UIM is received.
    
  PARAMETERS:
  
    Chv1Len: Length of CHV1 value
    Chv1P: Pointer to CHV1 value 
    ChvCallbackP: Pointer to callback function

  RETURNED VALUES:

    KAL_TRUE: Uim App Enable Chv Msg has been sent.
    KAL_FALSE: error. callback=NULL or other task is doing this operation. 

*****************************************************************************/
kal_bool ValChvEnable( kal_uint8  Chv1Len,
                   kal_uint8* Chv1P,
                   void   (*ChvCallbackP)(ValChvOpResultT) );

/*****************************************************************************
 
  FUNCTION NAME: ValUimEnableChvBySimIndex 

  DESCRIPTION:
  Send Enable CHV to UIM.

*****************************************************************************/
kal_bool ValUimEnableChvBySimIndex(kal_uint8 chan,
                               kal_uint8 simIndex,
                               kal_uint8  Chv1Len,
                               kal_uint8* Chv1P);


/*****************************************************************************
 
  FUNCTION NAME: ValUimDisableChvBySimIndex 

  DESCRIPTION:
  Send Disable CHV to UIM.

*****************************************************************************/
kal_bool ValUimDisableChvBySimIndex(kal_uint8 chan,
                                kal_uint8 simIndex,
                                kal_uint8  Chv1Len,
                                kal_uint8* Chv1P);





/*****************************************************************************
 
  FUNCTION NAME: ValUimUnblockChvBySimIndex 

  DESCRIPTION:
  Send Unblock CHV to UIM.
    
  PARAMETERS:
  
    ChvId: CHV1 or CHV2
    UnblockChvLen: Length of UNBLOCK CHV value
    UnblockChvP: Pointer to UNBLOCK CHV value 
    NewChvLen: Length of new CHV value
    NewChvP: Pointer to new CHV value
    ChvCallbackP: Pointer to callback function

  RETURNED VALUES:

    KAL_TRUE: Uim App Unbolck chv Msg has been sent.
    KAL_FALSE: error. callback=NULL or other task is doing this operation. 

*****************************************************************************/
kal_bool ValUimUnblockChvBySimIndex(kal_uint8 chan,
                                kal_uint8 simIndex,
                                ValChvIdT ChvId,
                                kal_uint8     UnblockChvLen,
                                kal_uint8*    UnblockChvP,
                                kal_uint8     NewChvLen,
                                kal_uint8*    NewChvP);



/*****************************************************************************
 
  FUNCTION NAME: ChvUnblock 

  DESCRIPTION:

    This routine sends App unblock CHV  message to the UIM task, and saves callback
    function's pointer in order to process the result when the response from
    the UIM is received.
    
  PARAMETERS:
  
    ChvId: CHV1 or CHV2
    UnblockChvLen: Length of UNBLOCK CHV value
    UnblockChvP: Pointer to UNBLOCK CHV value 
    NewChvLen: Length of new CHV value
    NewChvP: Pointer to new CHV value
    ChvCallbackP: Pointer to callback function

  RETURNED VALUES:

    KAL_TRUE: Uim App Unblock Chv Msg has been sent.
    KAL_FALSE: error. callback=NULL or other task is doing this operation. 

*****************************************************************************/
kal_bool ValChvUnblock( ValChvIdT ChvId,
                    kal_uint8     UnblockChvLen,
                    kal_uint8*    UnblockChvP, 
                    kal_uint8     NewChvLen,
                    kal_uint8*    NewChvP,
                    void      (*ChvCallbackP)(ValChvOpResultT) );

/********************************************************************************
  FUNCTION NAME: ValUimSPNameInit 
  DESCRIPTION:
    This routine initiates the procedure of reading 
    service provider name parameters of the UIM. 
  PARAMETERS:
    UimCallbackP: Pointer to callback function
  RETURNED VALUES:
    KAL_TRUE: Uim read sp name Msg has been sent.
    KAL_FALSE: error. callback=NULL or other task is doing this operation. 
*********************************************************************************/
kal_bool ValUimSPNameInit(void (*UimCallbackP)(void *));
/*****************************************************************************

  FUNCTION NAME: ValChvDeliverMsg

  DESCRIPTION:

    Deliver CHV response message.  It is used by valtask.

  PARAMETERS:

    MsgId: received message id   
    MsgP: message
    MsgSize: message size	

  RETURNED VALUES:

    None

*****************************************************************************/
void ValChvDeliverMsg( kal_uint32 MsgId,
                       void*  MsgP,
                       kal_uint32 MsgSize );

void ValUimDeliverMsg( kal_uint32 MsgId,
                       void*  MsgP,
                       kal_uint32 MsgSize );

#ifdef __CARRIER_RESTRICTION__
void ValUmlDeliverMsg( kal_uint32 MsgId,
                       void*  MsgP );
#endif

/*****************************************************************************

  FUNCTION NAME: ValUimNotifyInit

  DESCRIPTION:

    Create ValUimNotifyEventLock.

  PARAMETERS:

    None.

  RETURNED VALUES:

    None

*****************************************************************************/
void ValUimNotifyInit( void );

/*****************************************************************************

  FUNCTION NAME: ValUimRegister

  DESCRIPTION:

    Other task invokes this function to register UIM  message functions
    in Val task.

  PARAMETERS:
    EventFunc: Callback function
	
  RETURNED VALUES:

    TRegister ID
    -1: failed.

*****************************************************************************/
RegIdT ValUimRegister( ValEventFunc EventFunc );

/*****************************************************************************

  FUNCTION NAME: ValUimUnregister

  DESCRIPTION:

    Other task invokes this function to unregister UIM Notify Register message functions

  PARAMETERS:
    RegId: Register ID
	
  RETURNED VALUES:

    None.
    
*****************************************************************************/
void ValUimUnregister( RegIdT RegId );

/* Val Uim Phb */

void ValUimGetPhbRecParams( void );
void ValUimGetPhbRecord( kal_uint8 nIndex );
void ValUimUpdatePhbRecord( kal_uint8  nIndex,
                            kal_uint8* pName,
#ifdef MTK_CBP
                            kal_uint8 name_len,
#endif                                                               
                            kal_uint8* pPhNum,
                            ValUimNumberTypeT TON,
                            ValUimNumberPlanT NPI,
                            kal_bool isAtHcpbw);
void ValUimErasePhbRecord( kal_uint8 nIndex , kal_bool isAtCpbw);

/* Val Uim Sms */
void ValUimGetSmsRecParams( void );
void ValUimGetSmsRecord( kal_uint8 nIndex );
void ValUimUpdateSmsRecord( kal_uint8  nIndex,
                            kal_uint8  nStatus,
                            kal_uint8* pMsgData,
                            kal_uint8  MsgLen );
void ValUimEraseSmsRecord( kal_uint8 nIndex );
kal_bool ValGetPrefLang(kal_uint8 *pLang, kal_uint8 *pEncoding);
//don't modify following Function, brew has referred to it
kal_bool ValGetUIMId(kal_uint32 *pId);

void ValUimDataRequest( void );
void ValUimIdEuimidRequest( void );
void GetUimSPName(void * MsgP);
void InitAfterPV();
void ChvCGetStatusCB(ValChvStatusT  resultStatus);
void ValGetNewChvStatusCB(ValChvStatusT  resultStatus);





/********************************************************************************
 
  FUNCTION NAME: ValUimSmsVPInit 

  DESCRIPTION:

    This routine initiates the procedure of reading Sms parameters of the UIM. 
    
  PARAMETERS:
  
    None.
    
  RETURNED VALUES:

    None.

*********************************************************************************/
void ValUimSmsVPInit(void);


/********************************************************************************
 
  FUNCTION NAME: ValUimGetSmsVPRecNumProcess 

  DESCRIPTION:

    This routine processes VAL_UIM_GET_SMSVP_REC_NUM_MSG response message. 
    
  PARAMETERS:
  
    RspMsgP:  VAL_UIM_GET_SMSVP_REC_NUM_MSG response message structure pointer.
    
  RETURNED VALUES:

    None.
    
*********************************************************************************/
void ValUimGetSmsVPRecNumProcess(UimRspMsgT* RspMsgP);

/********************************************************************************
 
  FUNCTION NAME: ValUimGetMaxSmsVPRecNum 

  DESCRIPTION:

    It's invoked to Get the number of SMS PARAMETER record in UIM card.
    
  PARAMETERS:

    None.
    
  RETURNED VALUES:

    Num: the number of SMS PARAMETER record.

*********************************************************************************/
kal_uint8 ValUimGetMaxSmsVPRecNum(void);



/********************************************************************************
 
  FUNCTION NAME: ValUimReadSmsVPProcess 

  DESCRIPTION:

    This routine processes VAL_UIM_READ_SMSVP_REC_MSG response message. 
    
  PARAMETERS:
  
    RspMsgP:  VAL_UIM_READ_SMSVP_REC_MSG response message structure pointer.
    
  RETURNED VALUES:

    None.
    
*********************************************************************************/
void ValUimReadSmsVPProcess(UimRspMsgT* RspMsgP);


/********************************************************************************
 
  FUNCTION NAME: ValUimUpdateSMSVPProcess 

  DESCRIPTION:

    This routine processes VAL_UIM_UPDATE_SMSVP_REC_MSG response message. 
    
  PARAMETERS:
  
    RspMsgP:  VAL_UIM_UPDATE_SMSVP_REC_MSG response message structure pointer.
    
  RETURNED VALUES:

    None.
    
*********************************************************************************/
void ValUimUpdateSMSVPProcess(UimRspMsgT* RspMsgP);


/********************************************************************************
 
  FUNCTION NAME: ValUimReadSmsVPRec 

  DESCRIPTION:

    This routine sends Read Record(6F3D) message to the UIM task.
    
  PARAMETERS:
  
    index: Record index, start from 1.

  Result:
    this Read Record operation is successfully deliveried to UIM driver. 

*********************************************************************************/
void ValUimReadSmsVPRec(kal_uint8 index);


/********************************************************************************
 
  FUNCTION NAME: ValUimUpdateSmsVPRec 

  DESCRIPTION:

    This routine sends Update Record(6F3D) message to the UIM task.
    
  PARAMETERS:
  
    index: Record index, start from 1.
    vp: Validity period inputed by client
   
  RETURNED VALUES:

    KAL_TRUE: this operation is successful to delivery to UIM driver. 
    KAL_FALSE: index is invalide parameter.

*********************************************************************************/
kal_bool ValUimUpdateSmsVPRec(kal_uint8 index,kal_uint8 vp);

//don't modify following Function, brew has referred to it
/********************************************************************************
 
  FUNCTION NAME: ValUimGetMdnRec 

  DESCRIPTION:

    It's invoked to SMS Validity Period .
    
  PARAMETERS:

    index:      Record index, start from 1.
    ptvp:       point to the address that store the Validity Period.
    
  RETURNED VALUES:

    KAL_TRUE: this operation is successful. 
    KAL_FALSE: failure.

*********************************************************************************/
kal_bool ValUimGetSmsVPRec(kal_uint8 index, kal_uint8* ptvp);

#if 0
/* under construction !*/
/* under construction !*/
#endif

/********************************************************************************
 
  FUNCTION NAME: ValUimRawCmd 

  DESCRIPTION:

    It's invoked to send UIM raw command to UIM card.
    
  PARAMETERS:

    len:      Raw command APDU length.
    CmdApdu:  pointer to command APDU.
    RspInfo:  Response message info.
    
  RETURNED VALUES:

    KAL_TRUE: this operation is successful. 
    KAL_FALSE: failure.

*********************************************************************************/
kal_bool ValUimRawCmd(kal_uint16 Len, kal_uint8 *CmdApdu,  ExeRspMsgT* RspInfoP);


/********************************************************************************
 
  FUNCTION NAME: ValUimRunCave 

  DESCRIPTION:

    It's invoked to send RUN CAVE command to UIM card.
    
  PARAMETERS:

    rand:      rand value.
    type:       RAND or RANDU.
    digitLen:   digits length.
    digit:      digits, should be digit[6]
    saveRegister: save registers or not.
    esn:        UimId(if UIM_ID is used for auth.),  otherwise, If ME is 
                assigned with MEID,Pseudo-ESN value shall be used. if it's ESN ME 
                and esn is used for auth, esn should be used.
    RspInfo:    response info.
  RETURNED VALUES:
    None.

*********************************************************************************/
void ValUimRunCave(kal_uint32 rand, ValRandTypeT type, kal_uint8 digitLen, kal_uint8 *digit, 
              kal_bool saveRegister, kal_uint32 esn, ExeRspMsgT rspInfo);

/********************************************************************************
 
  FUNCTION NAME: ValUimGenKeyVPM 

  DESCRIPTION:

    It's invoked to send Generate Key/VPM command to UIM card.
    
  PARAMETERS:

    cmeaKey:    the pointer to cemakey[8] array
    vpm:       the pointer to VPM[65] array.
  RETURNED VALUES:
    None.

    Notes: When Generate Key/VPM command is finished, cmeaKey and vpm will be written
           by UIM task.

*********************************************************************************/
void ValUimGenKeyVPM(kal_uint8 *cmeaKey, kal_uint8 *vpm);

/********************************************************************************
 
  FUNCTION NAME: ValUimUpdateSSD 

  DESCRIPTION:

    It's invoked to tell UIM do Update SSD operation.
    
  PARAMETERS:

    randssd:      randssd.
    esn:        UimId(if UIM_ID is used for auth.),  otherwise, If ME is 
                assigned with MEID,Pseudo-ESN value shall be used. if it's ESN ME 
                and esn is used for auth, esn should be used.
    rspInfo:    response info.
  RETURNED VALUES:
    None.

*********************************************************************************/
void ValUimUpdateSSD(kal_uint8 *randssd, kal_uint32 esn, ExeRspMsgT rspInfo);

/********************************************************************************
 
  FUNCTION NAME: ValUimConfirmSSD 

  DESCRIPTION:

    It's invoked to send CONFIRM SSD command to UIM card.
    
  PARAMETERS:

    authBS:      AuthBS.
    esn:        UimId(if UIM_ID is used for auth.),  otherwise, If ME is 
                assigned with MEID,Pseudo-ESN value shall be used. if it's ESN ME 
                and esn is used for auth, esn should be used.
    rspInfo:    response info.
  RETURNED VALUES:
    None.

*********************************************************************************/
void ValUimConfirmSSD(kal_uint32 authBS, ExeRspMsgT rspInfo);

/********************************************************************************
 
  FUNCTION NAME: ValUimMD5Auth 

  DESCRIPTION:

    It's invoked to request UIM MD5 auth.
    
  PARAMETERS:

    chapId:      chapId.
    challengeLen:     challenge length, uim supports challenge length up to 16.
    challenge:   challenge array.
    rspInfo:    response info.
  RETURNED VALUES:
    None.

*********************************************************************************/
void ValUimMD5Auth(kal_uint8 chapId, kal_uint8 challengeLen, kal_uint8 *challenge, ExeRspMsgT rspInfo);

/*****************************************************************************

  FUNCTION NAME: ValUimGetSDNRecParams

  DESCRIPTION:
   To send a message to UIM to read SDN parameters. User can get SDN parameters
   in callback function. 

   PARAMETERS:

   SDNCallbackP: Pointer to callback function
    
  RETURNED VALUES:

   KAL_TRUE: message to UIM has been sent.
   KAL_FALSE: error. callback=NULL or other task is doing this operation. 

*****************************************************************************/
kal_bool ValUimGetSDNRecParams(void (*SDNCallbackP)(ValUimSDNParamsT*));

/*****************************************************************************

  FUNCTION NAME: ValUimGetSDNRecord

  DESCRIPTION:
   To send a message to UIM to read SDN record. User can get SDN record
   in callback function. 

  PARAMETERS:
    <nIndex> the phone record index
    SDNCallbackP: Pointer to callback function
    
  RETURNED VALUES:

   KAL_TRUE: message to UIM has been sent.
   KAL_FALSE: error. callback=NULL or other task is doing this operation. 

*****************************************************************************/
kal_bool ValUimGetSDNRecord(kal_uint8 nIndex, void (*SDNCallbackP)(ValUimSDNRecT*));
ValUimProviderName* ValGetProviderName(void);
void ValUimReadyInit(UimNotifyMsgT * MsgP);
void ValUimStoreEsn(kal_uint64 Esn, kal_uint8 Len, kal_bool MEAndUIMMEIDSupported);
void ValUimGetEsn(void(*GetEsnCallbackP)(kal_uint64));
kal_bool ValGetMEIDUIMSupported(void);
kal_bool ValGetSFUIMIDSupported(void);
kal_uint8 ValUimGetCst(UimECstIndexT index);

/* Used for andriod system */
/*****************************************************************************

  FUNCTION NAME: ValUimGetUtkCmdFlag

  DESCRIPTION:

    Get UTK CMD flag.

  PARAMETERS:

    None.

  RETURNED VALUES:

    kal_bool:  KAL_TRUE: USE AT+UTKPD to init UTK.

*****************************************************************************/
kal_bool ValUimGetUtkCmdFlag( void );
/*****************************************************************************

  FUNCTION NAME: ValUimProfileDownload

  DESCRIPTION:

    Call this function to send TERMINAL PROFILE Command to UIM task.

  PARAMETERS:

    None.

  RETURNED VALUES:

    None.

*****************************************************************************/
void ValUimProfileDownload( void );
/*****************************************************************************

  FUNCTION NAME: ValUimTerminalRespnse

  DESCRIPTION:

    Call this function to send TERMINAL RESPONSE Command to UIM task.

  PARAMETERS:

    len.   data buffer length
    data:  data buffer

  RETURNED VALUES:

    None.

*****************************************************************************/
void ValUimTerminalRespnse(kal_uint8 len, kal_uint8 *data);

/*****************************************************************************

  FUNCTION NAME: ValUimEnvelope

  DESCRIPTION:

    Call this function to send ENVELOPE Command to UIM task.

  PARAMETERS:

    len.   data buffer length
    data:  data buffer

  RETURNED VALUES:

    None.

*****************************************************************************/
  void ValUimEnvelope(kal_uint8 len, kal_uint8 *data,kal_bool is_ap_envelope);

/*****************************************************************************

  FUNCTION NAME: ValUimConfirmCall

  DESCRIPTION:

    Call this function to confirm if Set Up Call command needs to be executed.

  PARAMETERS:

    Accept:

  RETURNED VALUES:

    None.

*****************************************************************************/
void ValUimConfirmCall( kal_bool Accept);

/*****************************************************************************

  FUNCTION NAME: ValProProactCmdRsp

  DESCRIPTION:

    Call this to give respnose for proactive cmd.

  PARAMETERS:

    Result.   General result
    AddInfo:  if result is 0x20, 0x21, need fill in this field.

  RETURNED VALUES:

    None.

*****************************************************************************/
void ValProProactCmdRsp( ValUimCmdGenRstT Result,  ValUimCmdAddInfoT AddInfo);

/*****************************************************************************

  FUNCTION NAME: ValUimSmsDownload

  DESCRIPTION:

    To execute UTK SMS PP Download.

  PARAMETERS:

   ApduP : Apdu buffer
    BufferP  : Apdu length 
    TxtMessage: Sms text message buffer

  RETURNED VALUES:

    None.

*****************************************************************************/
void ValUimSmsDownload( kal_uint8*  ApduP,  kal_uint8 Len, ValSmsTxtRecordT* TxtMessage);

#ifdef MTK_CBP
kal_bool ValUimDelMdnRecBySimIndex(kal_uint8 Index, kal_uint8 simIndex);
kal_bool ValUimUpdateMdnRecBySimIndex(kal_uint8 Index, kal_uint8 Len, kal_uint8* MdnP, kal_uint8 simIndex);
kal_bool ValUimGetMdnReq(kal_uint8 simIndex);
kal_bool ValUimGetSidNidReq(kal_uint8 simIndex);
kal_bool ValUimGetImsiReq(kal_uint8 simIndex, ExeRspMsgT* RspInfo);
kal_bool ValUimGetChvStatusBySimIndex(kal_uint8 chan, kal_uint8 simIndex);
kal_bool ValUimVerifyChvByIndex(kal_uint8 chan,
                            kal_uint8 simIndex,
                            kal_uint8 chvId, 
                            kal_uint8 chvLen, 
                            kal_uint8 chv1Val[8]);
kal_bool ValUimChangeChvByIndex(kal_uint8 chan,
                            kal_uint8 simIndex, 
                            ValChvIdT ChvId, 
                            kal_uint8 OldChvLen, 
                            kal_uint8* OldChvP, 
                            kal_uint8 NewChvLen, 
                            kal_uint8* NewChvP);

kal_bool ValUimGetFullPath(kal_uint8* fullPath, kal_uint8* asciistr, kal_uint16 fileId, kal_uint16* pathLen);
kal_bool ValUimCrsmCrlaCmd(ValUimCmdT Cmd, kal_uint16 FileId, kal_uint8 P1, kal_uint8 P2, kal_uint8 P3, 
                         kal_uint8 *DataP, ExeRspMsgT* RspInfo, kal_uint8 sessionId, kal_bool isFullPath, kal_uint8* fullPath, kal_uint16 pathLen, kal_uint8 simIndex, kal_uint8 chanId);
kal_bool ValUimRawCmdBySimIndex(kal_uint16 Len, kal_uint8 *CmdApdu,  ExeRspMsgT* RspInfoP, kal_uint8 simIndex, kal_uint8 chanId);
#ifdef __SIM_EXTENDED_APDU__
kal_bool ValUimExtendedRawCmdBySimIndex(ExeRspMsgT* RspInfoP, kal_uint8 simIndex, kal_uint8 chanId);
#endif
kal_bool ValAtUimGetIccid(kal_uint8 simIndex);
kal_bool ValAtUimGetAppInfo(kal_uint8 simIndex, kal_uint8 appId);
kal_bool ValUimGetUimIdReq(kal_uint8 simIndex);
kal_bool ValAtUimGetCstInfo(kal_uint8 simIndex, kal_uint8 cardType, UimECstIndexT cstIndex);
#endif

#ifdef MTK_DEV_C2K_IRAT
void ValProTimerManagerCmdRsp( ValUimCmdGenRstT Result,  ValUimCmdAddInfoT AddInfo,kal_uint8 DataLen, kal_uint8 *Adddata);
void valUimProvideLocationInfoProcess(void);
void ValUimUtkTimerExpiryMsgPro(void *MsgData);
void ValUimUtkRefreshRspMsg(UimUtkRefreshRspMsgT *MsgData);
/*****************************************************************************
 
  FUNCTION NAME: ValUimFileChangeCompleted

  DESCRIPTION:

    internal help function: send MSG_ID_C2K_UIM_SAT_FILE_CHANGE_RES to UIM task.

  PARAMETERS: ChangeSuccess
 
  RETURNED VALUES: None.
  
*****************************************************************************/
extern void ValUimFileChangeCompleted(ValUimUtkFileMaskTypeT FileMask);
/*****************************************************************************
 
  FUNCTION NAME: ValUimUtkRefreshRequest

  DESCRIPTION:

    internal help function: .

  PARAMETERS: 
 
  RETURNED VALUES: None.
  
*****************************************************************************/

extern void ValUimUtkRefreshRequest(void);
/*****************************************************************************
 
  FUNCTION NAME: ValUimUtkRefreshProcess

  DESCRIPTION:

    internal help function: handle UTK Refresh command

  PARAMETERS: ChangeSuccess
 
  RETURNED VALUES: None.
  
*****************************************************************************/
extern kal_bool ValUimUtkRefreshProcess(kal_uint8 *BufDataP,kal_uint8 Len, kal_uint8 *ApIndicator);
extern kal_bool IsPowerCycleTrigByRefresh(void);
extern void SetPowerCycleTrigByRefreshFlag(kal_bool flag);

#ifdef FEATURE_UTK
/*****************************************************************************
 
  FUNCTION NAME: ValUimEhrpdAuthFailure

  DESCRIPTION:

  PARAMETERS: 
 
  RETURNED VALUES: None.
  
*****************************************************************************/
extern void ValUimEhrpdAuthFailure(void);
#endif
#endif
#ifdef MTK_CBP
extern void ValUimSetFdnStatus(kal_bool ActiveStatus,kal_uint8 ChvLen,kal_uint8 *ChvData);
extern void ValUimUpdateFdnRecord( kal_uint8  nIndex,
                            kal_uint8* pName,
                            kal_uint8 name_len,
                            kal_uint8* pPhNum, 
                            ValUimNumberTypeT TON,
                            ValUimNumberPlanT NPI,
                            kal_bool isAtCpbw);
extern void ValUimEraseFdnRecord( kal_uint8 nIndex,kal_bool isAtCpbw);
extern void ValUimGetFdnRecord(kal_uint8 nIndex);
#endif

#ifdef __CARRIER_RESTRICTION__
void ValUimNotifyRegisterProcess( void* RspMsgP );
#endif

#ifdef  __cplusplus
}
#endif
#endif

/*****************************************************************************
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
*****************************************************************************/

/**Log information: \main\CBP7FeaturePhone\CBP7FeaturePhone_nicholaszhao_href17384\1 2011-07-08 06:09:12 GMT nicholaszhao
** HREF#17384**/
/**Log information: \main\CBP7FeaturePhone\4 2011-07-12 09:42:17 GMT marszhang
** HREF#17384**/
/**Log information: \main\2 2012-04-06 05:34:48 GMT pzhang
** modify contact uim interface**/

