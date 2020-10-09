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
#ifndef VALUTKAPI_H
#define VALUTKAPI_H
/*****************************************************************************
* 
* FILE NAME   : valutkapi.h
*
* DESCRIPTION :
*		
*    This file contains all constants and typedefs needed to interface with the 
*    VAL SMS unit and the UI task.
*
* HISTORY:
*
*    See Log at end of file
*
*****************************************************************************/

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#ifdef FEATURE_UTK
#include "sysdefs.h"
#include "valapi.h"

#ifdef  __cplusplus
extern "C" {
#endif
/*----------------------------------------------------------------------------
 Local Defines and Macros
----------------------------------------------------------------------------*/
#define UTK_ITEM_MAX_COUNT 20
#define UTK_SMS_ADDRESS_LEN 30
#define UTK_SMS_SUBADDRESS_LEN 30


/*----------------------------------------------------------------------------
 Local Typedefs
----------------------------------------------------------------------------*/

/* UTK genernal result type */
typedef enum
{
  VAL_UTK_RST_CMD_OK            = 0x00, /*Command performed successfully*/
  VAL_UTK_RST_CMD_PART_OK,              /*Command performed with partial comprehension*/
  VAL_UTK_RST_CMD_MISS_OK,              /*Command performed, with missing information*/
  VAL_UTK_RST_EF_REFRESH,               /*REFRESH performed with additional EFs read*/
  VAL_UTK_RST_CMD_OK_NO_ICON,           /*Command performed successfully,
                                           but requested icon could not be displayed*/
  VAL_UTK_RST_CMD_OK_LTD_SERV   = 0x06, /*Command performed successfully, limited service*/
  VAL_UTK_RST_CMD_OK_NOTIFY,            /*Command performed with notification*/
  VAL_UTK_RST_REF_NO_NAA,               /*REFRESH performed but indicated NAA was not active*/
 
  VAL_UTK_RST_USER_TERMINATE    = 0x10, /*Proactive UICC session terminated by the user*/
  VAL_UTK_RST_USER_BACK_MOVE,           /*Backward move in the proactive UICC session
                                           requested by the user*/
  VAL_UTK_RST_USER_NO_RSP,              /*No response from user*/
  VAL_UTK_RST_USER_REQ_HELP,            /*Help information required by the user*/
 
  VAL_UTK_RST_ME_UNABLE         = 0x20, /*terminal currently unable to process command*/
  VAL_UTK_RST_NET_UNABLE,               /*Network currently unable to process command*/
  VAL_UTK_RST_USER_NOT_ACCEPT,          /*User did not accept the proactive command*/
  VAL_UTK_RST_USER_CLEAR_CALL,          /*User cleared down call before connection or network release*/
  VAL_UTK_RST_ACTION_CONT,              /*Action in contradiction with the current timer state*/
  VAL_UTK_RST_NAA_CC_TEMP_PROBLEM,      /* Interaction with call control by NAA, temporary problem; */
  VAL_UTK_RST_BROW_ERR,                 /* Launch browser generic error code */

  VAL_UTK_RST_CMD_BYD_CAP       = 0x30, /*Command beyond terminal's capabilities*/
  VAL_UTK_RST_CMD_TYPE_NOT_UND,         /*Command type not understood by terminal*/
  VAL_UTK_RST_CMD_DATA_NOT_UND,         /*Command data not understood by terminal*/
  VAL_UTK_RST_CMD_NUM_UNK,              /*Command number not known by terminal*/
 	 
  VAL_UTK_RST_REQ_VAL_MISS      = 0x36, /*Error, required values are missing*/

  VAL_UTK_RST_NULTICARD_CMD_ERR = 0x38, /* MultipleCard commands error */
  VAL_UTK_RST_NAA_CC_PERM_PROBLEM,      /* Interaction with call control by NAA by NAA, permanent problem */
  VAL_UTK_RST_BEARER_PROTOCOL_ERR,      /* Bearer Independent Protocol error */
  VAL_UTK_RST_ACCESS_TECH_UNABLE        /* Bearer Independent Protocol error */
} ValUtkGenResultT;

/* Addition information on result when UtkGenResult = VAL_UTK_RST_ME_UNABLE */
typedef enum
{
  VAL_UTK_ADD_INF_NO_CAUSE = 0x00, /*No specific cause can be given*/
  VAL_UTK_ADD_INF_SCR_BUSY,              /*Screen is busy*/
  VAL_UTK_ADD_INF_BUSY_CALL,             /*terminal currently busy on call*/
  /*0x03 reserved for GSM/3G;*/
  VAL_UTK_ADD_INF_NO_SERVICE     = 0x04, /*No service*/
  VAL_UTK_ADD_INF_ACC_CLASS_BAR,         /*Access control class bar*/
  VAL_UTK_ADD_INF_RADIO_RES_NOT_GRANT,   /*Radio resource not granted*/
  VAL_UTK_ADD_INF_NOT_SPEECH_CALL,       /*Not in speech call*/
  /*0x08 reserved for GSM/3G;*/
  VAL_UTK_ADD_INF_BUSY_SEND_DTMF = 0x09, /*ME currently busy on SEND DTMF command*/
  VAL_UTK_ADD_INF_NO_NAA                 /*No NAA active*/
} ValUtkAddInfoT;

/* UTK result type */
typedef  struct 
{
  ValUtkGenResultT GenResult;/* General result */
  kal_bool             AddInfoPre; /* AddInfo present */
  ValUtkAddInfoT   AddInfo; /* Additional information on result */
}   ValUtkResultT;

/*command detail (8.6) */
typedef  struct 
{
  kal_uint8 CmdNum;       /* Command number */   
  kal_uint8 CmdType;      /* Command type */
  kal_uint8 CmdQualifier; /* Command qualifier */
}   ValUtkCmdDetailT;

typedef enum
{
  VAL_UTK_CODE_GSM_7BIT_PACKED         = 0, /* SMS default 7-bit coded alphabet, packed into 8-bit octets,;*/
  VAL_UTK_CODE_GSM_7BIT_CODED_UNPACKED = 4, /* SMS default 7-bit coded alphabet with bit 8 set to 0.;*/
  VAL_UTK_CODE_UNICODE_80              = 8, /* 16 bit unicode, formatting character is 0x80*/
  VAL_UTK_CODE_UNICODE_81,                  /* 16 bit unicode, formatting character is 0x81*/
  VAL_UTK_CODE_UNICODE_82                   /* 16 bit unicode, formatting character is 0x82*/
} ValUtkCodeSchemeT;

/* text string(8.15), Alpha identifier (8.2) */
typedef  struct 
{
  ValUtkCodeSchemeT CodeScheme; /*Data coding scheme */
  kal_uint8             Len;        /* length of Text, A null text string shall be coded with Len = 0 */
  kal_uint8*            TextP;
}   ValUtkTextT;

typedef enum
{
    VAL_UTK_TECH_GSM,
    VAL_UTK_TECH_TE533, /*TIA/EIA-533*/
    VAL_UTK_TECH_TE136, /*TIA/EIA-136*/
    VAL_UTK_TECH_UTRAN, 
    VAL_UTK_TECH_TETRA, 
    VAL_UTK_TECH_TE95 = 5, /*TIA/EIA-95*/ 
    VAL_UTK_TECH_IS2000 = 6,
    VAL_UTK_TECH_IS2000_HRPD = 7, /*TIA/EIA/IS-856*/
    VAL_UTK_EUTRAN = 8, 
#ifdef MTK_DEV_C2K_IRAT
    VAL_UTK_EHRPD,
#endif
    VAL_UTK_TECH_NOUSE    
}ValUtkTechT;

/*CMD_QUALIFIER for UTK Provide Location information */
typedef enum
{
  VAL_UTK_LOC_INFO_CMD_QUAL_LOC,
  VAL_UTK_LOC_INFO_CMD_QUAL_DATE_TIME = 3,
  VAL_UTK_LOC_INFO_CMD_QUAL_LAN = 4,
  VAL_UTK_LOC_INFO_CMD_QUAL_ACC_TECH = 6,
  VAL_UTK_LOC_INFO_CMD_QUAL_ESN       = 7,
  VAL_UTK_LOC_INFO_CMD_QUAL_MEID      = 0xB
}ValUtkLocInfoCmdQualT;

typedef  union 
{
    /*Location info, 17Bytes include tag and len */
     struct 
    {
      kal_uint16 MCC; /**/
      kal_uint8 IMSI_11_12; /*  */
      kal_uint16 SID;
      kal_uint16 NID;
      kal_uint16 BASE_ID;
      kal_int32 BASE_LAT;
      kal_int32 BASE_LONG;
    }  UtkLocation; /*CMD_QUALIFIER = 0,  see ValUtkLocInfoCmdQualT */
     /*Date-time and time zone, Year='01'---2001*/
     struct
    {
      kal_uint8 Year;
      kal_uint8 Month;
      kal_uint8 Day;
      kal_uint8 Hour;
      kal_uint8 Minute;
      kal_uint8 Second;
      kal_int8 TimeZone;
    }  DateTime;
    /*Language,4 bytes include tag and len */
    /*Each language code is a pair of alpha-numeric characters, defined in ISO 639 [12].
   Each alpha-numeric character shall be coded on one byte using the SMS default 7-bit
   coded alphabet as defined in TS 123 038 [3] with bit 8 set to 0.*/
    kal_uint8 Language[2];  /*English :"en", Chinese:"zh" */
    /*Access Technology,3 byets include tag and len */
    ValUtkTechT Technology; /*Access technology */
    kal_uint32 ESN;
    kal_uint8  MEID[7];
}  ValUtkLocalInfoT;
/*for CALL control envelop command*/
typedef  union 
{
  kal_uint8 Len;
  kal_uint8 AccessInfo[15];
}  ValUtkLocalInfoT1; 
/* Item (8.9) */
typedef  struct
{
  kal_uint8             ItemId; /* Identifier of item */
  ValUtkCodeSchemeT CodeScheme;
  kal_uint8             Len;
  kal_uint8*            ItemTextP; /* Item */
}   ValUtkItemT;

/* Items Next Action Indicator (8.24) */
typedef  struct
{
  kal_uint8  Len;
  kal_uint8* NaiListP; /* Items Next Action Indicator list */
}   ValUtkNaiT;

/* Icon Identifier(8.31)
(at present, icon is not supported, its parameters are not full ) */
typedef enum
{
  UTK_ICON_SELF_EXPLANATORY = 0, /*if displayed, it replaces the item text*/
  UTK_ICON_NOT_SELF_EXPLANATORY /*if displayed, it shall be displayed together with the item text.*/
} ValUtkIconQualiferT;

typedef  struct
{
  ValUtkIconQualiferT IconQualifier; /* Icon qualifier */
  kal_uint8               IconId; /* Icon identifier */
}   ValUtkIconT;

/* Item Icon List (8.32) */
typedef  struct
{
  ValUtkIconQualiferT IconQualifier;
  kal_uint8               Len;
  kal_uint8*              IconListIdP;
}   ValUtkItemIconListT;

/* Numbering plan identification (NPI) */
typedef enum
{
  UTK_NPI_UNKNOWN = 0,
  UTK_NPI_ISDN_OR_TELEP_NUM_PLAN =1, /* ISDN/telephony numbering plan (ITU-T Recommendations E.164 [22] and E.163 [21]) */
  UTK_NPI_DATA_NUM_PLAN = 3, /*ISDN/telephony numbering plan (ITU-T Recommendations E.164 [22] and E.163 [21])*/
  UTK_NPI_TELEX_NUM_PLAN = 4,/*Telex numbering plan (ITU-T Recommendation F.69 [24]);*/
  UTK_NPI_PRIVATE_NUM_PLAN = 9,/*Private numbering plan;*/
  UTK_NPI_RESERVE_EXTENSION = 15 /*Reserved for extension;*/
    /* All other values are reserved. */
} ValUtkNpiT;

/* Type of number (TON) */
typedef enum
{
  UTK_TON_UNKNOWN = 0,
  UTK_TON_INTERNATIONAL_NUM = 1, /* International Number;*/
  UTK_TON_NATIONAL_NUM = 2, /* national Number; */
  UTK_TON_NETWORK_NUM = 3 /* Network Specific Number; */
  /* All other values are reserved. */
} ValUtkTonT;

/* Address (8.1) */
typedef  struct
{
  ValUtkNpiT Npi;
  ValUtkTonT Ton;
  kal_uint8      Len;
  kal_uint8*     DialNumberP;
}   ValUtkAddressT;

/*UTK Set Up Menu Command(6.6.7) */
typedef  struct 
{
  ValUtkCmdDetailT    CmdDetail;
  ValUtkTextT         Alpha;
  kal_uint8               ItemNum;  /* =0, indicates delete existed menu */
  ValUtkItemT         Item[UTK_ITEM_MAX_COUNT];
  kal_bool                NaiPre; /* if Items Next Action Indicator is present, KAL_TRUE: present*/
  ValUtkNaiT          Nai;
  kal_bool                IconPre;
  ValUtkIconT         Icon;
  kal_bool                ItemIconListPre;
  ValUtkItemIconListT ItemIconList;
}   ValUtkSetUpMenuCmdT;

/*utk select item Command(6.6.8) */
typedef   struct 
{
    ValUtkCmdDetailT    CmdDetail;
    kal_bool                AlphaPre;
    ValUtkTextT         Alpha;
    kal_uint8               ItemNum;
    ValUtkItemT         Item[UTK_ITEM_MAX_COUNT];
    kal_bool                NaiPre;
    ValUtkNaiT          Nai;
    kal_bool                DefItemIdPre;	
    kal_uint8               DefItemId; /*default selected item */
    kal_bool                IconPre;
    ValUtkIconT         Icon;
    kal_bool                ItemIconListPre;
    ValUtkItemIconListT ItemIconList;
}   ValUtkSelectItemCmdT;

/* Capability configuration parameters(8.4) */
typedef  struct
{
  kal_uint8  Len;
  kal_uint8* CapCfgParamP;
}   ValUtkCapCfgParamT;

/* Subaddress */
typedef  struct
{
  kal_uint8  Len;
  kal_uint8* SubaddressP;
}   ValUtkSubaddressT;

typedef enum
{
  UTK_TIME_UNIT_MINUTES = 0, /* minute; */
  UTK_TIME_UNIT_SECONDS = 1, /* second; */ 
  UTK_TIME_UNIT_TENTH_OF_SECONDS = 2 /* tenths of seconds*/
} ValUtkTimeUnitT;

/* Druation (8.8) */
typedef  struct
{
  ValUtkTimeUnitT TimeUnit;
  kal_uint8           TimeInterval;
}   ValUtkDurationT;

/*Event list*/
typedef  struct 
{
  kal_uint8 len;
  kal_uint8* EventList;
}   ValUtkEventListT;


/* UTK Set Up call Command */
typedef   struct 
{
  ValUtkCmdDetailT   CmdDetail;
  kal_bool               ConfirmAlphaPre;
  ValUtkTextT        ConfirmAlpha;/*Alpha identifier (user confirmation phase)*/
  ValUtkAddressT     Address;
  kal_bool               CapCfgParamPre;
  ValUtkCapCfgParamT CapCfgParam;/*Capability configuration parameters*/
  kal_bool               SubaddressPre;
  ValUtkSubaddressT  Subaddress;
  kal_bool               DurationPre;
  ValUtkDurationT    Duration;
  kal_bool               ConfirmIconPre;
  ValUtkIconT        ConfirmIcon;/*Icon identifier (user confirmation phase)*/
  kal_bool               SetupAlphaPre;
  ValUtkTextT        SetupAlpha;/* Alpha identifier (call set up phase) */
  kal_bool               SetupIconPre;
  ValUtkIconT        SetupIcon;/*Icon identifier (call set up phase)*/
}   ValUtkSetUpCallCmdT;

/*UTK display text Command */
typedef   struct 
{
  ValUtkCmdDetailT CmdDetail;
  ValUtkTextT      TextString;
  kal_bool             IconPre;
  ValUtkIconT      Icon;
  kal_bool             ImmediateRsp; /* Immediate response KAL_TRUE*/ 
  kal_bool             DurationPre;
  ValUtkDurationT  Duration;
}   ValUtkDisplayTextCmdT;

/* Response length (8.11)*/
typedef  struct
{
  kal_uint8 RspLenMin;/* Minimum length of response */
  kal_uint8 RspLenMax;/* Maximum length of response */
}   ValUtkRspLenT;/*The range of length is between '00' and 'FF'. A minimum length coding
of '00' indicates that there is no minimum length requirement; a maximum length coding 
of 'FF' indicates that there is no maximum length requirement. If a fixed length is
required the minimum and maximum values are identical.*/

/*UTK get input Command(6.6.3) */
typedef   struct 
{
  ValUtkCmdDetailT CmdDetail;
  ValUtkTextT      TextString; /*text for the Terminal to display in conjunction with asking the user to respond.*/
  ValUtkRspLenT    RspLen; /* Response length */
  kal_bool             DefaultTextPre; /* if default text is present */
  ValUtkTextT      DefaultText; /*corresponds to a default text string offered by the UIM.*/
  kal_bool             IconPre;
  ValUtkIconT      Icon;
}   ValUtkGetInputCmdT;

typedef enum
{
  /* Standard supervisory tones: */
  UTK_TONE_DIAL = 0x01, /* Dial tone */
  UTK_TONE_CALLED_BUSY, /*Called subscriber busy*/
  UTK_TONE_CONGESTION,  /*Congestion*/
  UTK_TONE_RADIO_PATH_ACK, /*Radio path acknowledge;*/
  UTK_TONE_RADIO_PATH_UNAVAIL_OR_CALL_DROP, /*Radio path not available/Call dropped*/
  UTK_TONE_ERROR_OR_SPEC_INFO, /*Error/Special information*/
  UTK_TONE_CALL_WAITING, /*Call waiting tone*/
  UTK_TONE_RINGING, /*Ringing tone*/
  /*Terminal proprietary tones*/
  UTK_TONE_BEEP = 0x10, /*General beep*/
  UTK_TONE_POSITIVE_ACK, /*Positive acknowledgement tone*/
  UTK_TONE_NEG_ACK_OR_ERROR, /*Negative acknowledgement or error tone*/
  UTK_TONE_USER_SELECTED_RINGING, /*Ringing tone as selected by the user for incoming speech call;*/
  UTK_TONE_USER_SELECTED_ALERT /*Alert tone as selected by the user for incoming SMS*/
  /* All other values are reserved. */
} ValUtkToneT;

/*utk play tone Command(6.6.5) */
typedef   struct 
{
  ValUtkCmdDetailT CmdDetail;
  kal_bool             AlphaPre;
  ValUtkTextT      Alpha;
  kal_bool             TonePre; /*if Tone is present. If no tone is specified, then the Terminal shall default to "general beep"*/
  ValUtkToneT      Tone;
  kal_bool             DurationPre;
  ValUtkDurationT  Duration;
  kal_bool             IconPre;
  ValUtkIconT      Icon;
}   ValUtkPlayToneCmdT;


/*utk send sms Command (6.6.9) */
typedef  struct
{
  ValUtkCmdDetailT CmdDetail;
  kal_bool             AlphaPre;
  ValUtkTextT      Alpha;
  kal_bool             AddressPre;
  ValUtkAddressT   Address;
  kal_uint8            SmsLen;   /* Length of SMS TPDU */
  kal_uint8*           SmsTpduP; /* SMS TPDU Buffer */
}   ValUtkSendSmsCmdT;
typedef   struct 
{
    ValUtkCmdDetailT CmdDetail;
  kal_uint8              DtmfLen;
  kal_uint8*             DtmfStrP;
  kal_bool               AlphaPre;
  ValUtkTextT        Alpha;/* Alpha identifier (call set up phase) */
  kal_bool               IconPre;
  ValUtkIconT        Icon;/*Icon identifier (call set up phase)*/
}   ValUtkSendDtmfCmdT;

typedef   struct 
{
  ValUtkCmdDetailT CmdDetail;
}  ValUtkProvideLocalInformationCmdT;


typedef enum
{
    VAL_UTK_FILE_SMS,  /*UIM SMS is updated*/
    VAL_UTK_FILE_PHB,   /*UIM Phone book is updated*/
     VAL_UTK_FILE_UNKNOWN,
    VAL_UTK_FILE_MAX
}ValUtkFileT;

typedef  struct
{
    kal_uint8    FileCount;
    ValUtkFileT File[VAL_UTK_FILE_MAX];
}  ValUtkFileListT;



/*utk refresh command (6.6.13) */
typedef  struct
{
    ValUtkCmdDetailT CmdDetail;
    kal_bool    FilelistPre;
    ValUtkFileListT FileList;
    kal_bool    AidPre;
    kal_uint8   Aid[16];
}  ValUtkRefreshCmdT;

/*UTK SetUp EVENT List Command */
typedef   struct 
{
  ValUtkCmdDetailT CmdDetail;
  ValUtkEventListT   EventList; 
}   ValUtkSetUpEventListCmdT;


/*UTK get inkey Command(6.6.2) */
typedef   struct 
{
    ValUtkCmdDetailT CmdDetail;
    ValUtkTextT      TextString; /*text for the Terminal to display in conjunction with asking the user to respond.*/
    kal_bool             IconPre;
    ValUtkIconT      Icon;
}   ValUtkGetInkeyCmdT;

typedef enum
{
  UTK_NOT_SUPPORT, /*UIM card can't support UTK */
  UTK_MSG_MISSING_PARAM,  /* Message received from UIM card misses necessary parameter*/
  UTK_MSG_MISMATCH_LENGTH,/*Length of message received from UIM card is mismatch */
  UTK_MSG_PARAM_ERR,/*Parameter received from UIM card is error */	
  UTK_UIM_CARD_BUSY,/* UIM card UIM tollkit is busy */
  UTK_MSG_SW_ERR,   /* Status word of message received from UIM card is unexpected */
  UTK_SESSION_NORMAL_END /* UTK session is end normally*/
} ValUtkSessionEndCmdT;


/*sms parameters used by sms unit via utk sms download*/
/* message identifier */
typedef  struct
{
  kal_uint8  MsgType;
  kal_uint16 MsgId;
  kal_bool   HeaderInd;
}   ValUtkSmsMsgIdT;

/* address */
typedef  struct
{
  kal_bool  DigitMode;
  kal_bool  NumMode;
  kal_uint8 NumType;
  kal_uint8 NumPlan;
  kal_uint8 NumFields;
  kal_uint8 Address[UTK_SMS_ADDRESS_LEN];
}   ValUtkSmsAddressT;

/* Subaddress */
typedef  struct
{
  kal_uint8 Type;
  kal_bool  Odd;
  kal_uint8 NumFields;
  kal_uint8 Subaddress[UTK_SMS_SUBADDRESS_LEN];
}   ValUtkSmsSubaddressT;
/*sms parameters end */


/* utk events */
typedef enum
{
  UTK_EVENT_DISPLAY_TEXT,
  UTK_EVENT_GET_INPUT,
  UTK_EVENT_PLAY_TONE,
  UTK_EVENT_SETUP_MENU,
  UTK_EVENT_SELECT_ITEM,
  UTK_EVENT_SEND_SMS,
  UTK_EVENT_SETUP_CALL,
  UTK_EVENT_PROVIDE_LOCAL_INFORMATION,
  UTK_EVENT_REFRESH,
  UTK_EVENT_GET_INKEY,
  UTK_EVENT_END,
  
  UTK_EVENT_SETUP_EVENT_LIST,
  UTK_EVENT_SEND_DTMF,
  UTK_EVENT_CALL_CONTROL_RSP,  

  UTK_MAX_EVENT
} ValUtkEventIdT;

typedef union 
{
  ValUtkDisplayTextCmdT DispTextCmd; 
  ValUtkSetUpMenuCmdT   SetUpMenuCmd;
  ValUtkSetUpCallCmdT   SetUpCallCmd;
  ValUtkGetInputCmdT    GetInputCmd;
  ValUtkSendSmsCmdT     SendSmsCmd;
  ValUtkPlayToneCmdT    PlayToneCmd;
  ValUtkSelectItemCmdT  SelectItemCmd;
  ValUtkSessionEndCmdT  SessionEndCmd;	
  ValUtkProvideLocalInformationCmdT ProvideLocInfoCmd;
  ValUtkRefreshCmdT     RefreshCmd;
  ValUtkSetUpEventListCmdT SetUpEventCmd;
  ValUtkGetInkeyCmdT    GetInkeyCmd;
} ValUtkEventDataT;

/* Callback to support UI needs to handle UTK events */
typedef void (*UtkEventFunc) 
(
  RegIdT            RegId,
  ValUtkEventIdT    EventId, /* UTK Event which invokes the callback */
  ValUtkEventDataT* EventDataP /* Transmitted data pointer */
);

typedef  struct
{
  kal_bool  SoftKeyForSelItem; /* Soft keys support for SELECT ITEM */
  kal_bool  SoftKeyForSetUpMenu; /* Soft Keys support for SET UP MENU */
  kal_uint8 SoftKeyMaxNum; /* Maximum number of soft keys available,'FF' is reserved */
}   ValUtkSoftKeyT;

typedef  struct
{
  kal_uint8 CharNum;/* 5 bits,Number of characters supported down the terminal display*/
  kal_bool  SizingParam; /*Screen Sizing Parameters supported*/
}   ValUtkDispHeightT;

typedef  struct
{
  kal_uint8 CharNum;/* 7 bits,Number of characters supported across the terminal display*/
  kal_bool  VarSizeFont;/*Variable size fonts Supported*/
}   ValUtkDispWidthT;

typedef  struct
{
  ValUtkDispHeightT DispHightParam;
  ValUtkDispWidthT  DispWidthParam;
  kal_bool              Resized;    /*Display can be resized*/
  kal_bool              TextWrap;   /*Text Wrapping supported*/
  kal_bool              TextScroll; /*Text Scrolling supported*/
  kal_bool              ExtText;    /*Extended text supported */
  kal_uint8             WidthReduction; /* 3 bits, Width reduction when in a menu, this value
                                       is the number of characters available across the
                                       display due to a DISPLAY TEXT proactive 
                                       command without scrolling (using the default character
                                       set specified in TS 123 038 [3]) minus the number of
                                       characters available across the display due 
                                       to a SELECT ITEM proactive command without scrolling */
}   ValUtkDispParamT;

#if 1
/* UTK Set Up call Command */
typedef   struct 
{
  kal_uint8              Result;
  kal_uint8              Len;
  kal_bool               AddressPre;
  ValUtkAddressT     Address;
  kal_bool               CapCfgParamPre1;
  ValUtkCapCfgParamT CapCfgParam1;/*Capability configuration parameters*/
  kal_bool               SubaddressPre;
  ValUtkSubaddressT  Subaddress;
  kal_bool               AlphaPre;
  ValUtkTextT        Alpha;/* Alpha identifier (call set up phase) */
}   ValUtkCallControlIndT;
#endif

typedef enum
{
  UTK_SETUPEVT_MT_CALL = 0,              /* 00  MT call; */
UTK_SETUPEVT_CALL_CONNECTED,       /* 01  Call connected; */
UTK_SETUPEVT_CALL_DISCONNECTED,    /* 02  Call disconnected;*/
UTK_SETUPEVT_LOCATION_STATUS,      /* 03  Location status; */
UTK_SETUPEVT_USER_ACTIVITY,        /* 04  User activity;*/
UTK_SETUPEVT_IDLE_SCN_AVAILABLE,   /* 05  Idle screen available;*/
UTK_SETUPEVT_CARD_READER_STATUS,   /* 06  Card reader status;*/
UTK_SETUPEVT_LANGUAGE_SELECTION,   /* 07  Language selection;*/
UTK_SETUPEVT_BROWSER_TERMINATION,  /* 08  Browser termination; */
UTK_SETUPEVT_DATA_AVAILABLE,       /* 09  Data available;*/
UTK_SETUPEVT_CHANNEL_STATUS,       /* 0A  Channel status;*/
UTK_SETUPEVT_SACC_TECH_CHANGE,     /* 0B  Access Technology Change (single access technology);*/
UTK_SETUPEVT_DISP_PARAM_CHANGE,    /* 0C  Display parameters changed;*/
UTK_SETUPEVT_LOCAL_CONNECTION,     /* 0D  Local connection;*/
UTK_SETUPEVT_NTWK_SERACH_MODE,     /* 0E  Network Search Mode Change;*/
UTK_SETUPEVT_BROWSING_STATUS,      /* 0F  Browsing status; */
UTK_SETUPEVT_FRAMES_INFO_CHANGE,   /* 10  Frames Information Change;*/
UTK_SETUPEVT_RSV_IWLAN,            /* 11  reserved for 3GPP (I-WLAN Access Status);*/
UTK_SETUPEVT_RSV_NTWK_REJ,         /* 12  reserved for 3GPP (Network Rejection)*/
UTK_SETUPEVT_HCI_CONNECTIVITY,     /* 13  HCI connectivity event.*/
UTK_SETUPEVT_MACC_TECH_CHANGE,     /* 14  Access Technology Change (multiple access technologies).*/
UTK_SETUPEVT_CSG_CELL_SELECTION,   /* 15  reserved for 3GPP (CSG cell selection). */
UTK_SETUPEVT_CONTACTLESS_STATE_REQ,/* 16  Contactless state request. */
NUM_UTK_SETUP_EVENT
}ValUtkSetupEvtT;

/*Transaction identifier*/
typedef   struct 
{
  kal_uint8 Len;  
  kal_uint8 List[VAL_MAX_CON_REC]; 
}   ValUtkTransIdT;

/* MT Call Event */
typedef   struct 
{
  kal_bool               AddressPre;
  ValUtkAddressT     Address;  
  kal_bool               SubaddressPre;
  ValUtkSubaddressT  Subaddress;
  ValUtkTransIdT     TransId;
}   ValUtkMTCallEvtT;

/* Call Connected Event */
typedef   struct 
{
  kal_uint8              DeviceType; /*0 termial initiate, 1 network initiate*/
  ValUtkTransIdT     TransId;
}   ValUtkCallConnT;

/* Call Disconnected Event */
typedef   struct 
{
  kal_uint8              DeviceType;/*0 termial initiate, 1 network initiate*/
  ValUtkTransIdT     TransId;
  kal_bool               CausePre;
  kal_uint8              CauseLen;
  kal_uint8*             CauseP;
}   ValUtkCallDiscT;

/* Location Status Event */
typedef   struct 
{
    kal_uint8 LocStatus;
    kal_uint8 AccessInfo[15];
}   ValUtkLocStatusT;

/* Access Technology Change Event */
typedef   struct 
{
    ValUtkTechT Technology; 
}   ValUtkAccTechChangeEvtT;

/* Access Technology Change Event */
typedef   struct 
{
    kal_uint16 ChannelStatus;
    kal_uint8 ChannelDataLen;
}   ValUtkDataAvailableEvt;

typedef union 
{
  ValUtkMTCallEvtT        MtCallEvt; 
  ValUtkCallConnT         CallConnEvt;
  ValUtkCallDiscT         CallDiscEvt;
  ValUtkLocStatusT        LocStatus;
  ValUtkAccTechChangeEvtT AccTechChangeEvt;
  ValUtkDataAvailableEvt  DataAvailableEvt;
} ValUtkSetupEventDataT;
#ifdef MTK_DEV_C2K_IRAT

typedef  struct{
kal_uint8 ValImsRegStatus;
kal_uint8 IsImsTimerExpired;
}ValImsRegInfoT;
#endif

/*****************************************************************************

  FUNCTION NAME: ValUtkRegister

  DESCRIPTION:

    Other task invokes this function to register event functions in UTK unit.

  PARAMETERS:
    EventFunc: Callback function
	
  RETURNED VALUES:

    TRegister ID
    -1: failed.

*****************************************************************************/
extern RegIdT ValUtkRegister(UtkEventFunc EventFunc);

/*****************************************************************************

  FUNCTION NAME: ValUtkUnregister

  DESCRIPTION:

    Other task invokes this function to unregister event functions in UTK unit.

  PARAMETERS:
    RegId: Assigned Register ID
	
  RETURNED VALUES:

    None

*****************************************************************************/
extern void ValUtkUnregister(RegIdT RegId);


/*****************************************************************************

  FUNCTION NAME: ValUtkProfileInit

  DESCRIPTION:

  	UTK initialization.  UIM card revision is obtained to determine whether or not UIM card 
  	supports UTK functionality. After sending read message to UIM, UTK init  returns. Other
  	operations (e.g. read image file and sending Terminal Profile command )	will be done 
  	after receiving response from UIM.
 
  PARAMETERS:

  	DispParamP: Display parameter pointer
  	SoftKeyP:   Soft key parameter poniter
 	  used to construct UTK Profile 

  RETURNED VALUES:

	None.
	
*****************************************************************************/
extern void ValUtkProfileInit(ValUtkDispParamT* DispParamP, ValUtkSoftKeyT* SoftKeyP);



/*****************************************************************************

  FUNCTION NAME: ValUtkSmsDownload

  DESCRIPTION:

    handles SMS-PP data download Command received from the network.  

  PARAMETERS:

    ApduP: utk sms transport layer buffer
    Len: length of sms transport layer buffer
    OrigAddressP: original address buffer (utk uses it when sending ack)
    OrigSubaddressP: original subaddress buffer   NULL: absent  (utk uses it when sending ack)
    BearerReplyOption: REPLY_SEQ of Bearer replay option parameter (utk uses it when sending ack)
    MsgIdP: Message Identifier buffer (utk uses it when sending ack)
    TeleSrvId: TeleSrvId (utk uses it when sending ack)
 	
  RETURNED VALUES:

    None

*****************************************************************************/
void ValUtkSmsDownload( kal_uint8*                ApduP,
                        kal_uint8                 Len,
                        ValUtkSmsAddressT*    OrigAddressP, 
                        ValUtkSmsSubaddressT* OrigSubaddressP,
                        kal_uint16                MsgId, 
                        kal_uint16                TeleSrvId,
                         kal_bool                 IsImsPPdownLoad,
                        kal_uint8                 seq_id);

/*****************************************************************************

  FUNCTION NAME: ValUtkSelectMenu

  DESCRIPTION:

    handles Selection Menu Command received from UI.  

  PARAMETERS:

    ItemId : item identifier
    help: if help is needed, KAL_TRUE: needed
 	
  RETURNED VALUES:

    None

*****************************************************************************/
extern void ValUtkSelectMenu(kal_uint8 ItemId, kal_bool Help);

/*****************************************************************************

  FUNCTION NAME: ValUtkCommCmdResult

  DESCRIPTION:

    If UIM sends command to UI, UI just has result value, no other return value, uses this function.

  PARAMETERS:
  
    CmdDetailP: Command detail, if it is NULL, the UTK filled it with the last command detail
    ResultP: Result
	
  RETURNED VALUES:

    None

*****************************************************************************/
extern void ValUtkCommCmdResult(ValUtkCmdDetailT *CmdDetailP, ValUtkResultT *ResultP);

/*****************************************************************************

  FUNCTION NAME: ValUtkGetInkeyDone

  DESCRIPTION:

    If UIM sends get inkey command to UI, UI uses this function to return text string to UIM.

  PARAMETERS:
  
    CmdDetailP: Command detail, if it is NULL, the UTK filled it with the last command detail
    TextStrP: input text by the user
	
  RETURNED VALUES:

    None

*****************************************************************************/
void ValUtkGetInkeyDone( ValUtkCmdDetailT* CmdDetailP,
                         ValUtkTextT*      TextStrP );

/*****************************************************************************
  FUNCTION NAME: ValUtkGetInputDone

  DESCRIPTION:

    If UIM sends get input command to UI, UI uses this function to return text string to UIM.

  PARAMETERS:
  
    CmdDetailP: Command detail, if it is NULL, the UTK filled it with the last command detail
    TextStrP: input text by the user
	
  RETURNED VALUES:

    None

*****************************************************************************/
extern void ValUtkGetInputDone(ValUtkCmdDetailT *CmdDetailP, ValUtkTextT *TextStrP);

/*****************************************************************************

  FUNCTION NAME: ValUtkSelectItemDone

  DESCRIPTION:

    if UIM sends select item command to UI, UI uses this function to return item to UIM.

  PARAMETERS:
  
    CmdDetailP: Command detail, if it is NULL, the UTK filled it with the last command detail
    ItemId: Identifier of item chosen
    Help:  if user requests the help information for this item
	
  RETURNED VALUES:

    None

*****************************************************************************/
extern void ValUtkSelectItemDone(ValUtkCmdDetailT *CmdDetailP, kal_uint8 ItemId, kal_bool Help);
/*****************************************************************************

  FUNCTION NAME: ValUtkProvideLocalInformationDone

  DESCRIPTION:

    If UIM sends Provide Local Information command to UI, UI uses this function to return local info to UIM.

  PARAMETERS:
  
    CmdDetailP: Command detail, if it is NULL, the UTK filled it with the last command detail
    TextStrP: input text by the user
	
  RETURNED VALUES:

    None

*****************************************************************************/
extern void ValUtkProvideLocalInformationDone(ValUtkCmdDetailT *CmdDetailP,ValUtkResultT *ResultP, ValUtkLocalInfoT *InfoP);

#if defined(FEATURE_CALL_CONTROL) || defined(MTK_DEV_C2K_IRAT)
/*****************************************************************************

  FUNCTION NAME: ValUtkCallControl

  DESCRIPTION:

    handles Call Control Command received from UI.  

  PARAMETERS:

    AddressP : point to DiallingNumber 
    CapCfgParaP1:    point to Capability configure parameters 1
 	SubAddressP: pointer to subaddress
 	LocalInfoP: pinter to location infor.
 	CapCfgParaP2: point to Capability configure parameters 1
    BcRepeatInd: BC repeater indicator 	
  RETURNED VALUES:

    None

*****************************************************************************/
extern void ValUtkCallControl(ValUtkAddressT *AddressP, ValUtkCapCfgParamT *CapCfgParaP1,ValUtkSubaddressT *SubAddressP, kal_uint8 *LocalInfoP);
#endif
	
/*****************************************************************************

  FUNCTION NAME: ValUtkProSetupEvtList

  DESCRIPTION:

    Handles Proactive Command SET UP EVENT LIST.  

  PARAMETERS:

    MsgP: response message from UIM  

  RETURNED VALUES:

    None

*****************************************************************************/
extern ValUtkGenResultT ValUtkProSetupEvtList(ValUtkSetUpEventListCmdT * SetUpEventCmd);

/*****************************************************************************

  FUNCTION NAME: ValUtkCheckEvtList

  DESCRIPTION:

    Check if a specific event is enabled or not .  

  PARAMETERS:

    ValUtkSetupEvtT Evt

  RETURNED VALUES:

    KAL_TRUE/KAL_FALSE

*****************************************************************************/
extern kal_bool ValUtkCheckEvtList(ValUtkSetupEvtT Evt);

/*****************************************************************************

  FUNCTION NAME: ValUtkEventDownload

  DESCRIPTION:

    UTK sends ENVELOPE(EVENT DOWNLOAD)  command to UIM.

  PARAMETERS:
    ValUtkSetupEvtT Evt, 
    ValUtkSetupEventDataT * data	

  RETURNED VALUES:
    None
*****************************************************************************/
extern void ValUtkEventDownload(ValUtkSetupEvtT Evt, ValUtkSetupEventDataT * data);
/*get the current event status*/
extern kal_bool UtkGetEvt(ValUtkSetupEvtT Evt);
/*****************************************************************************

  FUNCTION NAME: ValUtkInit

  DESCRIPTION:

    Create UtkEventsLock. this function is invoked by valtask

  PARAMETERS:

    None.

  RETURNED VALUES:

    None

*****************************************************************************/
extern void ValUtkInit(void);

/*****************************************************************************

  FUNCTION NAME: ValAtUtkProfileInit

  DESCRIPTION:

  	UTK initialization for AT application.  UIM card revision is obtained to determine whether or not UIM card 
  	supports UTK functionality. After sending read message to UIM, UTK init  returns. Other
  	operations (e.g. read image file and sending Terminal Profile command )	will be done 
  	after receiving response from UIM.
 
  PARAMETERS:

  	profile:

  RETURNED VALUES:

	None.
	
*****************************************************************************/
void ValAtUtkProfileInit( kal_uint8* profile );

/*****************************************************************************

  FUNCTION NAME: UtkDeliverMail

  DESCRIPTION:

    Delivers UTK response message.  It is used by valtask.

  PARAMETERS:

    MsgId: received message id   
    MsgP: message
    MsgSize: message size	

  RETURNED VALUES:

    None

*****************************************************************************/
extern void ValUtkDeliverMsg(kal_uint32 MsgId, void * MsgP, kal_uint32 MsgSize);
extern UtkEventFunc CallbackFunc;
extern RegIdT RegId;

/*****************************************************************************

  FUNCTION NAME: ValUtkUimAppInitTerm

  DESCRIPTION:

    CCAT cases, for proactive command reresh. uim initialization or terminate
     
  PARAMETERS:

   none
  RETURNED VALUES:

    None

*****************************************************************************/
extern void ValUtkUimAppInitTerm(kal_uint8 OperMode, kal_uint8* Aid);

#ifdef MTK_DEV_C2K_IRAT
/*****************************************************************************
   
   FUNCTION NAME: ValUimSetUpEventList
 
   DESCRIPTION:
 
     Translates uim proactive Set up Event List command.  
  
   PARAMETERS:
   
     BufDataP: proactive command(Set Up Event List) buffer
     Len:  Length of buffer  
 
   RETURNED VALUES:
 
    None
 
 *****************************************************************************/
extern kal_int8 ValUimSetUpEventList(kal_uint8 *BufDataP,kal_uint8 Len);
/*****************************************************************************
   
   FUNCTION NAME: ValUimMoreTimeProcess
 
   DESCRIPTION:
 
     Translates uim proactive Set up Event List command.  
  
   PARAMETERS:
   
     BufDataP: proactive command(Set Up Event List) buffer
     Len:  Length of buffer  
 
   RETURNED VALUES:
 
    None
 
 *****************************************************************************/
void ValUimMoreTimeProcess(kal_uint8 *BufDataP,kal_uint8 Len);
extern kal_uint8 UtkParseCmdDetail(kal_uint8* DataP, ValUtkCmdDetailT* CmdDetailP);
extern kal_uint8 UtkParseDeviceId(kal_uint8* DataP, kal_uint8* OrigDeviceP, kal_uint8* DestDeviceP);
extern kal_uint8 UtkParseTimerId(kal_uint8* DataP, kal_uint8* TimerIdP);
extern kal_uint8 UtkParseTimerValue(kal_uint8* DataP, kal_uint32* TimerValue);
extern kal_uint32 ValUimStopUtkTimer(kal_uint8 TimerId);
extern void ValUimStartUtkTimer(kal_uint8 TimerId,kal_uint32 TimerValue);
extern kal_uint32 ValUimGetRemainTimer(kal_uint8 TimerId);
extern kal_uint32 ValGetSystemTimeInSec(void);
extern void ValUimTimerManagerProcess(kal_uint8 *BufDataP,kal_uint8 Len);

#endif
#ifdef  __cplusplus
}
#endif
#endif /* FEATURE_UTK*/
#endif /* VALUTKAPI_H */
/*****************************************************************************
* $Log: valutkapi.h $
* Revision 1.1  2005/11/07 14:59:41  wavis
* Initial revision
* Revision 1.1  2005/10/13 14:11:33  dorloff
* Initial revision
* Initial revision
*****************************************************************************/




