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

#ifndef PSWVALAPI_H
#define PSWVALAPI_H

#include "pswcustom.h"
#include "sysdefs.h"
#include "sysapi.h"
#include "pswapi.h"
#include "pswsmstune.h"
#include "hlpapi.h"
//#include "valfsiapi.h"



 /*-----------------------------------------------------------------
 * HLWHandler
 *----------------------------------------------------------------*/

/* VAL_TCPB_CONN_STATUS_MSG */
typedef enum
{
  VAL_TCPB_CONNECT_SUCCESS,         /* connection success       */
  VAL_TCPB_CONNECT_FAIL_TCP,        /* connection fails on TCP  */
  VAL_TCPB_CONNECT_FAIL_PPP,        /* connection fails on PPP  */
  VAL_TCPB_CONNECT_FAIL_RLP,        /* connection fails on RLP  */
  VAL_TCPB_CONNECT_FAIL_UART,       /* not use                  */
  VAL_TCPB_DISCONNECT_NORMAL,       /* disconnect from BS       */
  VAL_TCPB_DISCONNECT_MS,           /* disconnect from MS       */
  VAL_TCPB_DISCONNECT_FADE,         /* disconnect due to fading */
  VAL_TCPB_CONNECT_FAIL_TRAFFIC,    /* connection fails on traffic */
  VAL_TCPB_CONNECT_FAIL_NOSVC,      /* connection fails on no src  */
  VAL_TCPB_CONNECT_DORMANT,         /* connection dormant       */
  VAL_TCPB_CONNECT_RECONNECT,       /* reconnect after dormant  */
  VAL_TCPB_NUM_CONNECT_STATUS
} TcpbStatusT;

typedef enum
{
  VAL_IE_CLOSEPENDINGWAIT  =  6,        /* TCP close by peers, wait for user */
  VAL_IE_CLOSEPENDING      =  5,        /* TCP graceful close in progress  */
  VAL_IE_RECVMOREDATA      =  4,        /* more UDP or raw IP data         */
  VAL_IE_NODATA            =  3,        /* no data available for receive   */
  VAL_IE_CONNECTPENDING    =  2,        /* TCP connect attempt in progress */
  VAL_IE_LISTENPENDING     =  1,        /* listening for remote connect    */
  VAL_IE_SUCCESS           =  0,        /* request successful              */
  VAL_IE_INVALIDRQST       = -1,        /* invalid or unknown request      */
  VAL_IE_INVALIDSAP        = -2,        /* invalid service access point    */
  VAL_IE_INVALIDPORT       = -4,        /* invalid listen or connect port  */
  VAL_IE_INVALIDADDR       = -5,        /* invalid connect host address    */
  VAL_IE_NOMOREMBUFS       = -6,        /* no mbufs available              */
  VAL_IE_NOMORETCBS        = -7,        /* no tcbs available               */
  VAL_IE_NOLOCALADDR       = -8,        /* local host address not set      */
  VAL_IE_INVALIDSIZE       = -9,        /* invalid send or receive size    */
  VAL_IE_INVALIDDATA       = -10,       /* invalid request field           */
  VAL_IE_INVALIDOPT        = -11,       /* option incorrectly specified    */
  VAL_IE_INVALIDFLAGS      = -12,       /* invalid send/sento flags        */
  VAL_IE_INVALIDSTATE      = -13,       /* invalid TCP state               */
  VAL_TCP_TIME_OUT         = -14,       /* TCP connecting time out         */
  VAL_TCP_RESET            = -15,       /* TCP reset by remote             */
  VAL_TCP_ABORT            = -16,       /* TCP reset by local              */
  VAL_TCP_DISCNT_NORMAL    = -17        /* TCP Disconnect normal           */
} ValSocketStatusT;

typedef PACKED_PREFIX struct
{
  TcpbStatusT  Status;
} PACKED_POSTFIX  ValTcpbConnStatusMsgT;

/* VAL_TCPB_DATA_RECV_MSG */
typedef PACKED_PREFIX struct
{
  kal_uint8   Sap;
#if defined(MTK_PLT_ON_PC) && defined(MTK_PLT_ON_PC_UT)
  kal_uint8   Data[255];
#endif
  kal_uint8*  DataP;
  kal_uint16  Size;
} PACKED_POSTFIX  ValTcpbDataRecvMsgT;

/* VAL_TCPB_DATA_SEND_RSP_MSG */
typedef PACKED_PREFIX struct
{
  kal_uint8            Sap;
  ValSocketStatusT status;
} PACKED_POSTFIX  ValTcpbDataSendRspMsgT;

/* VAL_UPB_CONN_STATUS_MSG */
typedef PACKED_PREFIX struct
{
  kal_uint8  Status;
} PACKED_POSTFIX  ValUpbConnStatusMsgT;

/* VAL_TCPB_SEND_DATA_MSG */
typedef PACKED_PREFIX struct
{
  kal_uint8 Sap;          /* Socket ID */
  kal_uint8 SetId;        /* Canned Data set ID. Data contents reside in:
                         SetId   Data resides in
                           0    : DataP pointer below. Reserved for LBS only.
                                  If DataP needed for other features use
                                  new SetId.
                           1    : HTTP_GetRequest1
                           2    : HTTP_GetRequest2
                          else  : HTTP_NULL
                       */
  kal_uint16 Size;        /* Size of contents in DataP pointer */
  kal_uint8* DataP;       /* Pointer to data */
} PACKED_POSTFIX  ValTcpbSendDataMsgT;

/* VAL_UDPB_SEND_DATA_MSG */
typedef PACKED_PREFIX struct
{
  kal_uint8 Sap;          /* Socket ID */
  kal_uint32   IpAddress;    /* 32-bit IP address. */
  kal_uint16   Port;         /* UDP port number.   */
} PACKED_POSTFIX  ValUdpbSendDataMsgT;

/* VAL_UPB_SENT_DATA_RSP_MSG */
typedef PACKED_PREFIX struct
{
  kal_uint8            Sap;
  ValSocketStatusT status;
} PACKED_POSTFIX  ValUdpbSentDataRspMsgT;

typedef PACKED_PREFIX struct
{
  kal_uint32   IpAddress;    /* 32-bit IP address. */
  kal_uint16   PortNumber;   /* UDP port number.   */
} PACKED_POSTFIX  ValAppAddrT;

/* VAL_UPB_RECV_DATA_MSG */
typedef PACKED_PREFIX struct
{
  kal_uint8*       Data;  /* Point to data buffer.        */
  kal_uint16       Size;  /* Size of datagram received.   */
  ValAppAddrT  FromAddress;
  kal_uint8        Sap;
} PACKED_POSTFIX  ValUpbRecvDataMsgT;

/*-----------------------------------------------------------------
 * AIWHandler
 *----------------------------------------------------------------*/

/* VAL_NWK_RPT_DATA_SVC_STATUS_WORD_MSG */
typedef PACKED_PREFIX struct
{
  kal_uint8 statusStr[15]; /* ??? buffer overflow in aiweng:mmiAiResult() */
} PACKED_POSTFIX  ValNwkRptDataSvcStatusWordMsgT;

//don't modify following Enum, brew has referred to it
typedef enum
{
  VAL_PSW_DATA_ASYNC,
  VAL_PSW_DATA_FAX,
  VAL_PSW_DATA_QNC,
  VAL_PSW_DATA_PKT_MODEM,
  VAL_PSW_DATA_PKT_BROWSER
} ValPswDataTypeT;

//don't modify following Enum, brew has referred to it
typedef enum
{
  VAL_PSW_DATA_CALL_ORIG,
  VAL_PSW_DATA_CALL_INCOMING,
  VAL_PSW_DATA_CALL_ALERTING,
  VAL_PSW_DATA_CALL_CONNECTED,
  VAL_PSW_DATA_CALL_DORMANCY,
  VAL_PSW_DATA_CALL_RELEASED,
  VAL_PSW_DATA_CALL_WFR_RELEASE /*Wait for application to release the browser call because of the OOSA timer expired */
} ValPswDataCallEvtT;

//don't modify following Struct, brew has referred to it
typedef PACKED_PREFIX struct
{
  ValPswDataTypeT DataType;
  ValPswDataCallEvtT Event;
} PACKED_POSTFIX  ValPswRptDataCallEvtMsgT;

/*-----------------------------------------------------------------
 * OTASPHandler
 *----------------------------------------------------------------*/

 /* VAL_IOTA_683_RSP_MSG */
 typedef PACKED_PREFIX struct
 {
    kal_uint8 *IS683Rsp;
    kal_uint16 Length;
 } PACKED_POSTFIX  ValIOTARspMsgT;

 /* VAL_IOTA_PRL_RSP_MSG */
 typedef PACKED_PREFIX struct
 {
    kal_uint8 *PRLRsp;
    kal_uint16 Length;
 } PACKED_POSTFIX  ValIOTAPRLRspMsgT;

 /* VAL_OTASP_IND_MSG */
 typedef enum
 {
    VAL_OTA_PRLDownload,
    VAL_OTASP_Connect,
    VAL_OTA_Disconnect,
    VAL_OTAPA_SessionStart,
    VAL_OTAPA_SessionStop,
    VAL_OTAPA_VerifyOK,
    VAL_OTA_SPASMUnlock,
    VAL_OTA_AkeyEx,
    VAL_OTA_SPLUnlock,
    VAL_OTA_SSDUpd,
    VAL_OTA_NAMDownload,
    VAL_OTA_MDNDownload,
    VAL_OTA_IMSIDownload,
    VAL_OTA_PRLDownloading,
    VAL_OTA_DataMaskCommitToNVRAM,
    VAL_OTA_DataToNVRAM,
    VAL_OTA_CommitOK,
    VAL_OTA_ExcessSPCFailure,
    VAL_OTA_AnalogCDMADownload,
    VAL_OTA_PRLDownloadOK,
    VAL_OTA_PRLDownloadFail,
    VAL_OTA_ProgrammingFail,
    VAL_OTA_Premature_Terminate,
    VAL_OTA_VendorLock_Reset,
    VAL_OTA_Null
} ValOtaStatusIndT;

 typedef PACKED_PREFIX struct
 {
    ValOtaStatusIndT  status;
 } PACKED_POSTFIX  ValOtaspIndMsgT;

 /* VAL_OTASP_TX_RSP_MSG */
 typedef PACKED_PREFIX struct
 {
    kal_bool  Success;
 } PACKED_POSTFIX  ValOtaspTxRspMsgT;

typedef struct
{
    kal_uint16 wSysID;             /* System Identification */
    kal_uint16 wNetID;             /* Network Identification */
    kal_uint16 wBaseID;            /* Base Station Identification */
    kal_uint16 wBaseClass;         /* Base Station Class */
    kal_uint16 wBestPN;            /* Best Pilot */
    kal_uint16 wPacketZoneID;      /* Packet Data Service Zone Identifier */
    kal_uint16 wMobileCountryCode; /* Mobile country code */
} ValLbsSectorInfo;

typedef struct
{
    ValLbsSectorInfo SectorInfo;
} ValLocGetSectorInfoRspMsgT;

/* MSG_ID_VAL_LOC_ERROR_MSG */
typedef enum
{
    TCP_NOT_SUPP,
    MS_ORIG_NOT_SUPP,
    NUM_MULTIPLE_SESS_EXCEEDED,
    MS_ORIG_SESS_ALREADY_ACTIVE,
    NETWORK_CANCEL_RCVD,
    DSP_ERROR,
    PDE_ERROR
} ValLocErrorTypes;

typedef struct
{
    ValLocErrorTypes Error;
} ValLocErrorMsgT;

/* MSG_ID_VAL_LOC_PILOT_PHASE_MEAS_MSG */
/* Refer to PswPosAfltMeasurementMsgT in pswapi.h */

/* MSG_ID_VAL_LOC_PSEUDO_RANGE_MSG */

#define MAX_NUM_PSEUDO_RANGE_PARAM   16

typedef struct
{
   kal_uint8 SvPrnNum;
   kal_uint8 SvCno;
   kal_uint16 SvCodePhWh;
   kal_uint16 SvCodePhFr;
} PseudoRangeParamT;

typedef struct
{
   kal_uint8 NumPsRanges;
   PseudoRangeParamT psRanges[MAX_NUM_PSEUDO_RANGE_PARAM];
} ValLocPseudoRangeMeasMsgT;

 /*-----------------------------------------------------------------
 * PSWHandler
 *----------------------------------------------------------------*/

 /* common ds to 3 VAL_NWK_RPT_xxx messages */

#ifdef MTK_CBP
#define VAL_MAX_DISPLAY_SIZE 64
#else
#define VAL_MAX_DISPLAY_SIZE 62
#endif

typedef enum
{
   VAL_NP_UNKNOWN         = 0,
   VAL_NP_ISDN_TELEPHONY,
   VAL_NP_DATA            = 3,
   VAL_NP_TELEX,
   VAL_NP_PRIVATE         = 9,
   VAL_NUMBER_PLAN_INVALID
} ValNumberPlanT;

typedef enum
{
   VAL_NT_UNKNOWN = 0,
   VAL_NT_INTERNATIONAL,
   VAL_NT_NATIONAL,
   VAL_NT_NETWORK_SPECIFIC,
   VAL_NT_SUBSCRIBER,
   VAL_NT_RSVD,
   VAL_NT_ABBREVIATED,
   VAL_NUMBER_TYPE_INVALID
} ValNumberTypeT;

#define VAL_MAX_CALLED_PARTY_NUMBER_SIZE 32
typedef PACKED_PREFIX struct
{
   ValNumberTypeT Type;
   ValNumberPlanT Plan;
   kal_uint8       Number[VAL_MAX_CALLED_PARTY_NUMBER_SIZE+1];
} PACKED_POSTFIX  ValCalledPartyNumberT;

typedef enum
{
   VAL_PI_ALLOWED = 0,
   VAL_PI_RESTRICTED,
   VAL_PI_NUMBER_NA,
   VAL_PI_RSVD,
   VAL_PRESENTATION_INDICATOR_INVALID
} ValPresentationIndicatorT;

typedef enum
{
   VAL_SI_USER_PROVIDED_NOT_SCREENED = 0,
   VAL_SI_USER_PROVIDED_VERIFIED_PASSED,
   VAL_SI_USER_PROVIDED_VERIFIED_FAILED,
   VAL_SI_NETWORK_PROVIDED,
   VAL_SCREENING_INDICATOR_INVALID
} ValScreeningIndicatorT;

#define VAL_MAX_CALLING_PARTY_NUMBER_SIZE 32
typedef PACKED_PREFIX struct
{
   ValNumberTypeT Type;
   ValNumberPlanT Plan;
   ValPresentationIndicatorT Pi;
   ValScreeningIndicatorT Si;
   kal_uint8 Number[VAL_MAX_CALLING_PARTY_NUMBER_SIZE+1];
} PACKED_POSTFIX  ValCallingPartyNumberT;

typedef enum
{
   VAL_ST_TONE_SIGNAL = 0,
   VAL_ST_ISDN_ALERTING,
   VAL_ST_IS54B_ALERTING,
   VAL_ST_RCVD,
   VAL_SIGNAL_TYPE_INVALID
} ValSignalTypeT;

typedef enum
{
   VAL_PITCH_MEDIUM = 0,
   VAL_PITCH_HIGH,
   VAL_PITCH_LOW,
   VAL_PITCH_RSVD,
   VAL_ALERT_PITCH_INVALID
} ValAlertPitchT;

typedef PACKED_PREFIX struct
{
   ValSignalTypeT Type;
   ValAlertPitchT Pitch;
   kal_uint8 Signal;
} PACKED_POSTFIX  ValSignalT;

typedef enum
{
   VAL_SUBADDRESSTYPE_NSAP = 0,
   VAL_SUBADDRESSTYPE_USER = 2,
   VAL_SUBADDRESSTYPE_RESERVED
} ValSubaddressTypeT;

typedef enum
{
   VAL_INDICATOR_EVEN = 0,
   VAL_INDICATOR_ODD
} ValOddEvenIndicatorT;

#define VAL_MAX_SUBADDRESS_NUMBER_SIZE VAL_MAX_CALLED_PARTY_NUMBER_SIZE /* ??? */
 typedef PACKED_PREFIX struct
 {
    kal_uint8                ExtensionBit;
    ValSubaddressTypeT   SubaddressType;
    ValOddEvenIndicatorT OddEvenIndicator;
    kal_uint8                Number[VAL_MAX_SUBADDRESS_NUMBER_SIZE + 1];
 } PACKED_POSTFIX  ValSubaddressT;

 typedef PACKED_PREFIX struct
 {
    kal_uint8 UpLink;
    kal_uint8 DownLink;
 } PACKED_POSTFIX  ValAudioControlT;

 typedef PACKED_PREFIX struct
 {
    kal_bool                    RcvdDisplay;
    kal_uint8                   Display[VAL_MAX_DISPLAY_SIZE + 1];

    kal_bool                    RcvdCalledPartyNumber;
    ValCalledPartyNumberT   CalledPartyNumber;

    kal_bool                    RcvdCallingPartyNumber;
    ValCallingPartyNumberT  CallingPartyNumber;

    kal_bool                    RcvdConnectedNumber;
    ValCallingPartyNumberT  ConnectedNumber;   /* Same format as CallingPartyNumber */

    kal_bool              RcvdSignal;
    ValSignalT        Signal;

    kal_bool              RcvdMessageWaiting;
    kal_uint8             MsgCount;

    kal_bool              RcvdClirCause; /* ??? */
    kal_uint8             ClirCause;

    kal_bool              RcvdRelease;

    kal_bool              RcvdAudioControl;
    ValAudioControlT  AudioControl;

    kal_bool              RcvdCalledPartySubaddress;       /* added since related to Numbers */
    ValSubaddressT    CalledPartySubaddress;

    kal_bool              RcvdCallingPartySubaddress;
    ValSubaddressT    CallingPartySubaddress;

    kal_bool              RcvdConnectedSubaddress;
    ValSubaddressT    ConnectedSubaddress;

    kal_bool              RcvdCallWaitingIndicator;
    kal_uint8             CallWaitingIndicator;
    kal_bool              MoreData;

    PswServiceOptionT SO;
    } PACKED_POSTFIX  ValNwkRptBasicInfoT;

 /* VAL_ACCESS_MAX_CAPSULE_SIZE_MSG */
 typedef PACKED_PREFIX struct
 {
    kal_uint8 Size;
 } PACKED_POSTFIX  ValAccessMaxCapsuleSizeMsgT;

 /* VAL_BS_CO_ORD_MSG */
 typedef PACKED_PREFIX struct
 {
    kal_uint16   baseId;
    kal_int32    baseLat;
    kal_int32    baseLong;
 } PACKED_POSTFIX  ValBSCoOrdMsgT;

 /* VAL_NAM_MSG */
 typedef PACKED_PREFIX struct
 {
    NamNumber     namNumber;
    PswIs95NamT   namFields;
 } PACKED_POSTFIX  ValNamMsgT;

#ifdef KDDI_EXTENSIONS
 /* VAL_PSW_ANTENNA_BARS_RPT_MSG */
 typedef PACKED_PREFIX struct
 {
    kal_uint8    antennabars;
 } PACKED_POSTFIX  ValPswAntennaBarsRptMsgT;
#endif

 /* VAL_NWK_RPT_ALERT_MORE_INFO_REC_MSG */
 /* VAL_NWK_RPT_FLASH_MORE_INFO_REC_MSG */
 /* VAL_NWK_RPT_FEAT_NOTIF_MORE_INFO_REC_MSG */
 typedef enum
 {
    VAL_REDIRECTION_UNKNOWN = 0,
    VAL_REDIRECTION_BUSY,
    VAL_REDIRECTION_NO_REPLY,
    VAL_REDIRECTION_DTE_OUT_OF_ORDER = 0x9,
    VAL_REDIRECTION_FORWARDING_BY_DTE,
    VAL_REDIRECTION_UNCONDITIONAL_OR_SYSTEMATIC = 0xF
 } ValRedirectionReasonT;

#define VAL_MAX_REDIRECTING_NUMBER_SIZE 32
 typedef PACKED_PREFIX struct
 {
    kal_uint8 ExtensionBit1;
    ValNumberTypeT Type;
    ValNumberPlanT Plan;

    kal_uint8 ExtensionBit2;
    ValPresentationIndicatorT  Pi;
    ValScreeningIndicatorT     Si;

    kal_uint8 ExtensionBit3;
    ValRedirectionReasonT   RedirectionReason;
    kal_uint8 Number[VAL_MAX_REDIRECTING_NUMBER_SIZE+1];
 } PACKED_POSTFIX  ValRedirectingNumberT;

 typedef PACKED_PREFIX struct
 {
    kal_uint16   PulseFrequency;
    kal_uint8 PulseOnTime;
    kal_uint8 PulseOffTime;
    kal_uint8 PulseCount;
 } PACKED_POSTFIX  ValMeterPulsesT;

 typedef PACKED_PREFIX struct
 {
    kal_uint8 Amplitude;
    kal_uint16   Freq1;
    kal_uint16   Freq2;
    kal_uint8 OnTime;
    kal_uint8 OffTime;
    kal_uint8 Repeat;
    kal_uint8 Delay;
 } PACKED_POSTFIX  ValCadenceGroup;

#define VAL_MAX_CADENCE_GROUPS_REC 6
 typedef PACKED_PREFIX struct
 {
    kal_uint8       CadenceCount;
    kal_uint8       NumGroups;
    ValCadenceGroup   CadenceGroup[VAL_MAX_CADENCE_GROUPS_REC];
 } PACKED_POSTFIX  ValParametricAlertingT;

 typedef PACKED_PREFIX struct
 {
    kal_uint8 PolarityIncluded;
    kal_uint8 ToggleMode;
    kal_uint8 ReversePolarity;
    kal_uint8 PowerDenialTime;
 } PACKED_POSTFIX  ValLineControlT;

 typedef enum
 {
    VAL_DISPLAYTAG_BLANK = 0x80,
    VAL_DISPLAYTAG_SKIP,
    VAL_DISPLAYTAG_CONTINUATION,
    VAL_DISPLAYTAG_CALLED_ADDRESS,
    VAL_DISPLAYTAG_CAUSE,
    VAL_DISPLAYTAG_PROGRESS_INDICATOR,
    VAL_DISPLAYTAG_NOTIFICATION_INDICATOR,
    VAL_DISPLAYTAG_PROMPT,
    VAL_DISPLAYTAG_ACCUMULATED_DIGITS,
    VAL_DISPLAYTAG_STATUS,
    VAL_DISPLAYTAG_INBAND,
    VAL_DISPLAYTAG_CALLING_ADDRESS,
    VAL_DISPLAYTAG_REASON,
    VAL_DISPLAYTAG_CALLING_PARTY_NAME,
    VAL_DISPLAYTAG_CALLED_PARTY_NAME,
    VAL_DISPLAYTAG_ORIGINAL_CALLED_NAME,
    VAL_DISPLAYTAG_REDIRECTING_NAME,
    VAL_DISPLAYTAG_CONNECTED_NAME,
    VAL_DISPLAYTAG_ORIGINATING_RESTRICTIONS,
    VAL_DISPLAYTAG_DATE_TIME_OF_DAY,
    VAL_DISPLAYTAG_CALL_APPEARANCE_ID,
    VAL_DISPLAYTAG_FEATURE_ADDRESS,
    VAL_DISPLAYTAG_REDIRECTION_NAME,
    VAL_DISPLAYTAG_REDIRECTION_NUMBER,
    VAL_DISPLAYTAG_REDIRECTING_NUMBER,
    VAL_DISPLAYTAG_ORIGINAL_CALLED_NUMBER,
    VAL_DISPLAYTAG_CONNECTED_NUMBER,
    VAL_DISPLAYTAG_TEXT = 0x9E
 } ValDisplayTagT;

 typedef PACKED_PREFIX struct
 {
    ValDisplayTagT DisplayTag;
    kal_uint8       DisplayLen;
    kal_uint8       Chari[VAL_MAX_DISPLAY_SIZE + 1];
 } PACKED_POSTFIX  ValExtendedDisplayRec;

#define VAL_NUM_EXTENDED_DISPLAY_REC CP_MAX_EXTENDED_DISPLAY_REC

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
 #else
 typedef PACKED_PREFIX struct
 {
    kal_uint8                   ExtDisplayInd;
    kal_uint8                   DisplayType;
    kal_uint8                   NumDispRec;
    ValExtendedDisplayRec   ExtendedDisplayRec[VAL_NUM_EXTENDED_DISPLAY_REC];
 } PACKED_POSTFIX  ValExtendedDisplayT;
 #endif
 typedef PACKED_PREFIX struct
 {
    kal_bool  RcvdRedirectingNumber;
    ValRedirectingNumberT   RedirectingNumber;
    kal_bool  RcvdRedirectingSubaddress;
    ValSubaddressT       RedirectingSubaddress;
    kal_bool  RcvdMeterPulses;
    ValMeterPulsesT         MeterPulses;
    kal_bool  RcvdParametricAlerting;
    ValParametricAlertingT  ParametricAlerting;
    kal_bool  RcvdLineControl;
    ValLineControlT         LineControl;
    kal_bool  RcvdExtendedDisplay;
    ValExtendedDisplayT     ExtendedDisplay;
    PswServiceOptionT SO;
 } PACKED_POSTFIX  ValNwkRptAddInfoT;

 typedef PACKED_PREFIX struct
 {
  kal_bool isBasicInfoValid; /* to indicate BasicInfo valid or not */
  ValNwkRptBasicInfoT NwkRptBasicInfo;
 
  kal_bool isAddInfoValid;   /* to indicate AddInfo valid or not */
  ValNwkRptAddInfoT   NwkRptAddInfo;
 } PACKED_POSTFIX  ValNwkRptInfoMsgT;
 
 /* VAL_NWK_RPT_ALERT_MSG */
 typedef ValNwkRptInfoMsgT ValNwkRptAlertMsgT;
 
 /* VAL_NWK_RPT_FEATURE_NOTIFICATION_MSG */
 typedef ValNwkRptInfoMsgT ValNwkRptFeatureNotificationMsgT;
 
 /* VAL_NWK_RPT_FLASH_MSG */
 typedef ValNwkRptInfoMsgT ValNwkRptFlashMsgT;
  

 /* VAL_NWK_RPT_BURST_DTMF_MSG */
 typedef PACKED_PREFIX struct
 {
    kal_uint8 DtmfOnLength;
    kal_uint8 DtmfOffLength;
    kal_uint8 NumOfDigits;
    kal_uint8 Digits[1];
 } PACKED_POSTFIX  ValNwkRptBurstDtmfMsgT;

 /* VAL_NWK_RPT_CP_EVENT_MSG */
 typedef enum
 {
    VAL_EV_DISCONNECT = 1,
    VAL_EV_PAGE_RECEIVED,
    VAL_EV_STOPALERT,
    VAL_EV_ABBR_ALERT,
    VAL_EV_NOSVC,
    VAL_EV_CDMA_INSVC,
    VAL_EV_CPENABLED,
    VAL_EV_CPDISABLED,
    VAL_EV_PDOWNACK,
    VAL_EV_CONNANALOG,
    VAL_EV_CONNDIGITAL,
    VAL_EV_ASSIGNED,
    VAL_EV_ORIG_FAIL,
    VAL_EV_NDSS_ORIG_CANCEL,
    VAL_EV_INTERCEPT,
    VAL_EV_REORDER,
    VAL_EV_CC_RELEASE,
    VAL_EV_CC_RELEASE_SO_REJ,
    VAL_EV_FNM_RELEASE,
    VAL_EV_DIALING_COMPLETE,
    VAL_EV_DIALING_CONTINUE,
    VAL_EV_MAINTENANCE,
    VAL_EV_VP_ON,
    VAL_EV_VP_OFF,
    VAL_EV_PSIST_FAIL,
    VAL_EV_TC_RELEASE_MS,
    VAL_EV_TC_RELEASE_PDOWN,
    VAL_EV_TC_RELEASE_DISABLE,
    VAL_EV_TC_RELEASE_BS,
    VAL_EV_TC_RELEASE_SO_REJECT,
    VAL_EV_TC_RELEASE_TIMEOUT,
    VAL_EV_TC_RELEASE_ACK_FAIL,
    VAL_EV_TC_RELEASE_FADE,
    VAL_EV_TC_RELEASE_LOCK,
    VAL_EV_PAGE_FAIL,
    VAL_EV_RETRY_TIMER_ACTIVE,
    VAL_EV_RETRY_TIMER_INACTIVE,
    VAL_EV_AMPS_INSVC,
    VAL_EV_ORIG_REJECTED,
    VAL_EV_ORIG_REJECTED_SO_NOT_SUPPORTED,
    VAL_EV_BUSY_ORIG_FAIL,
    VAL_EV_ACCT_ORIG_FAIL,

    VAL_EV_PKT_ACTIVE = 50,
    VAL_EV_PKT_RELEASED,
    VAL_EV_PKT_DORMANT,

    VAL_EV_ORIG_USER_CANCEL = 60,
    VAL_EV_ORIG_ACCESS_FAIL,
    VAL_EV_ORIG_NO_SVC_FAIL,
    VAL_EV_ORIG_RETRY_ORDER,
    VAL_EV_SR_ENABLED,
    VAL_EV_SR_DISABLED,
    VAL_EV_ORIG_REQ_RECEIVED,
    VAL_EV_REG_SUCCESS,
    VAL_EV_ORIG_BLOCKED_BY_IRAT,

    VAL_EV_FLASHFAIL = 80,
    VAL_EV_ANALOG_PAGE_RECEIVED,
    VAL_EV_AMPS_IDLE,
    VAL_EV_ABBR_INTERCEPT,
    VAL_EV_ABBR_REORDER,
    VAL_EV_CONNCOMPLETE,
    VAL_EV_ENTER_OOSA,
    VAL_EV_MSID_UPDATED,
    VAL_EV_POWERUP_NV_READ_COMPLETE,
    VAL_EV_LOCKED_ORIG_FAIL,
    VAL_EV_TC_RELEASE_MT_CALL,
#ifdef MTK_CBP
    VAL_EV_SMS_CANCEL_BY_PWRDOWN,
#endif
#ifdef MTK_DEV_C2K_IRAT
    VAL_EV_PSW_CARD_COMPLETE,
#endif
#ifdef MTK_CBP
    VAL_EV_PRL_LIST_ID_UPDATE,
#endif

    VAL_RPT_CP_EVENT_INVALID
 } ValRptCpEventT;


//don't modify following macro, brew has referred to it
#ifdef MTK_CBP
#define VAL_PSW_MAX_CALLING_PARTY_NUMBER_SIZE 50
#else
#define VAL_PSW_MAX_CALLING_PARTY_NUMBER_SIZE 32
#endif
/***************************************************************************

  EVENT NAME: VAL_PSW_EVT_CALL_DIALING_MSG
  DESCRIPTION:
    Sent when the call is dialing
    (For example, when AIW sends a ATD13505372343 command to originate a call, UI also should display
     "dialing 13505372343". We uses VAL_PSW_EVT_CALL_DIALING_MSG to inform UI this status.)
  MESSAGE TYPE:
    ValPswCallDialingMsgT

****************************************************************************/
typedef PACKED_PREFIX struct
{
  PswRequestModeT   RequestMode;     /* requested call type */
  PswServiceOptionT ServiceOption;   /* requested service option */
  kal_bool              Encoded;
  kal_bool              DigitMode;       /* digit encoding indicator  */
  kal_uint8             NumDigits;       /* number of digits to be dialled   */
  kal_uint8             Digits[VAL_PSW_MAX_CALLING_PARTY_NUMBER_SIZE + 1];
                                     /* of  ascii digits, null terminated string */
} PACKED_POSTFIX  ValPswCallDialingMsgT;

 typedef PACKED_PREFIX struct
 {
    ValRptCpEventT Msg;
    kal_bool soIncluded;
    PswServiceOptionT SO;
    ValPswCallDialingMsgT dialData; /* Valid only for Event VAL_EV_DIALING_COMPLETE */
 } PACKED_POSTFIX  ValRptCpEventMsgT;

 /* VAL_NWK_RPT_CP_RESPONSE_MSG */
 typedef PACKED_PREFIX struct
 {
    kal_uint8 Response;
    kal_uint8 Request;
 } PACKED_POSTFIX  ValNwkRptCpResponseMsgT;

 /* VAL_NWK_RPT_CP_STATUS_MSG */
 typedef enum
 {
    VAL_CP_DISABLED,            /* CP Disabled                              */
    VAL_CP_SYS_DETERMINATION,   /* System Determination (6.6.1.1)           */
    VAL_CP_PILOT_ACQUISITION,   /* Pilot Channel Acquisition (6.6.1.2)      */
    VAL_CP_SYNC_ACQUISITION,    /* Sync Channel Acquisition (6.6.1.3)       */
    VAL_CP_TIMING_CHANGE,       /* Timing Change (6.6.1.4)                  */
    VAL_CP_CDMA_IDLE,           /* Idle (6.6.2)                             */
    VAL_CP_UPDATE_OHD_INFO,     /* Update Overhead Information (6.6.3.2)    */
    VAL_CP_PAGE_RESPONSE,       /* Page Response (6.6.3.3)                  */
    VAL_CP_ORD_MSG_RESP,        /* Order/Message Response (6.6.3.4)         */
    VAL_CP_ORIGINATION,         /* Origination Attempt (6.6.3.5)            */
    VAL_CP_REGISTRATION,        /* Registration Attempt (6.6.3.6)           */
    VAL_CP_MSG_TRANSMISSION,    /* Message Transmission (6.6.3.7)           */
    VAL_CP_TC_INIT,             /* Traffic Channel Initialization (6.6.4.2) */
    VAL_CP_TC_WAIT_ORDER,       /* TC Waiting for Order (6.6.4.3.1)         */
    VAL_CP_TC_WAIT_ANSWER,      /* TC Waiting for MS Answer (6.6.4.3.2)     */
    VAL_CP_TC_CONVERSATION,     /* TC Conversation (6.6.4.4)                */
    VAL_CP_TC_RELEASE,          /* TC Release (6.6.4.5)                     */

    VAL_CP_NUM_STATES,          /* Number of Call Processing States         */
    VAL_CP_STATE_INVALID        /* Used by PSW for exception handling       */
 } ValCPStateT;

//don't modify following Enum, brew has referred to it
typedef enum
{
    VAL_PSW_IN_SERVICE,
    VAL_PSW_NO_SERVICE,
    VAL_PSW_OOSA,
#ifdef MTK_CBP
    VAL_PSW_LIMITED_SERVICE,
#endif
    VAL_PSW_INVALID_SERVICE_STATUS
} ValPswServiceStatusT;

 typedef PACKED_PREFIX struct
 {
    ValPswServiceStatusT Service_status; /* Status of PS's service */
    ValCPStateT State;                /* Call Processing State                */
    ValCPStateT PrevState;            /* Previous Call Processing State       */
    kal_uint8  Roam;                      /* ROAM Status                          */
    kal_uint16 Band;                      /* Current Operating Band               */
    kal_uint16 Channel;                   /* Current Channel Number               */
    kal_uint8  Block;                     /* current CDMA block (if CDMA system)  */
    kal_uint8  ServingSystem;             /* Serving System/Block                 */
    kal_uint16 Sid;                       /* Last-Received System ID  (sid)       */
    kal_uint16 Nid;                       /* Current Location Area ID (nid)       */
    kal_uint16 PilotPn;                   /* PILOT_PN                             */
    kal_uint8  pRevInUse;                 /* CDMA Protocol Revision that MS uses  */
    kal_uint16 RegZone;                   /* Current Reg Zone Info                */
 } PACKED_POSTFIX  ValRptCpStatusMsgT;

 /* VAL_NWK_RPT_DATA_BURST_MSG */
 typedef PACKED_PREFIX struct
 {
    kal_uint8 MsgNumber;
    kal_uint8 BurstType;
    kal_uint8 NumMsgs;
    kal_uint8 NumFields;
    kal_uint8 Data[1];
 } PACKED_POSTFIX  ValNwkRptDataBurstMsgT;

 /* VAL_NWK_RPT_HANDOFF_MSG */
 typedef enum
 {
    VAL_IDLE_SAME_SYSTEM = 1,
    VAL_IDLE_NEW_SYSTEM,
    VAL_SOFT,
    VAL_HARD,
    VAL_TC_TO_AVC
 } ValHandoffTypeT;

 typedef PACKED_PREFIX struct
 {
    kal_bool DisjointActiveSet;
    kal_bool FrameOffsetChange;
    kal_bool ChannelChange;
    kal_bool LongCodeChange;
    kal_bool ServCfgChange;
 } PACKED_POSTFIX  ValHandoffTCReportT;

 typedef PACKED_PREFIX struct
 {
    ValHandoffTypeT      Type;
    ValHandoffTCReportT  Report;
 } PACKED_POSTFIX  ValNwkRptHandoffMsgT;

 /* VAL_NWK_RPT_REGISTRATION_ACCEPT_MSG */
 typedef PACKED_PREFIX struct
 {
    kal_bool RoamIndPresent;
    kal_uint8 RoamInd;
 } PACKED_POSTFIX  ValNwkRptRegistrationAcceptMsgT;

 /* VAL_NWK_RPT_SERVICE_CONFIG_MSG */
 typedef enum
 {
    VAL_MUX_OPTION1 = 1,
    VAL_MUX_OPTION2,
    VAL_MUX_OPTION3,
    VAL_MUX_OPTION4,
    VAL_MUX_OPTION5,
    VAL_MUX_OPTION6,
    VAL_MUX_OPTION7,
    VAL_MUX_OPTION8,
    VAL_MUX_OPTION9,
    VAL_MUX_OPTION10,
    VAL_MUX_OPTION11,
    VAL_MUX_OPTION12,
    VAL_MUX_OPTION13,
    VAL_MUX_OPTION14,
    VAL_MUX_OPTION15,
    VAL_MUX_OPTION16
 } ValMultiplexOptionT;

 //don't modify following Enum, brew has referred to it
 typedef enum
 {
    VAL_SERVICE_OPTION_2 = 2,  /* Loopback               */
    VAL_SERVICE_OPTION_3,      /* Voice                  */
    VAL_SERVICE_OPTION_4,      /* Async Data Rate Set I  */
    VAL_SERVICE_OPTION_5,      /* Asunc Fax Rate Set I   */
    VAL_SERVICE_OPTION_6,      /* SMS                    */
    VAL_SERVICE_OPTION_7,      /* Packet Data            */
    VAL_SERVICE_OPTION_8,      /* Packet Data            */
    VAL_SERVICE_OPTION_9,      /* Loopback               */
    VAL_SERVICE_OPTION_10,     /* Unknown                */
    VAL_SERVICE_OPTION_11,     /* Unknown                */
    VAL_SERVICE_OPTION_12,     /* Async Data Rate Set II */
    VAL_SERVICE_OPTION_13,     /* Asunc Fax Rate Set II  */
    VAL_SERVICE_OPTION_14,     /* SMS                    */
    VAL_SERVICE_OPTION_15,     /* Packet Data            */
    VAL_SERVICE_OPTION_16,     /* Packet Data            */
    VAL_SERVICE_OPTION_17,     /* Voice                  */
    VAL_SERVICE_OPTION_18,     /* OTASP                  */
    VAL_SERVICE_OPTION_19,     /* OTASP                  */
    VAL_SERVICE_OPTION_20,     /* Unknown                */
    VAL_SERVICE_OPTION_21,     /* Unknown                */
    VAL_SERVICE_OPTION_22,     /* Packet Data            */
    VAL_SERVICE_OPTION_23,     /* Packet Data            */
    VAL_SERVICE_OPTION_24,     /* Packet Data            */
    VAL_SERVICE_OPTION_25,     /* Packet Data            */
    VAL_SERVICE_OPTION_26,     /* Packet Data            */
    VAL_SERVICE_OPTION_27,     /* Packet Data            */
    VAL_SERVICE_OPTION_28,     /* Packet Data            */
    VAL_SERVICE_OPTION_29      /* Packet Data            */
 } ValServiceOptionT;

 typedef enum
 {
    VAL_NO_TRAFFIC = 0,
    VAL_PRIMARY_TRAFFIC,
    VAL_SECONDARY_TRAFFIC
 } ValTrafficTypeT;

 typedef PACKED_PREFIX struct
 {
    kal_uint8       ConRef;
    kal_uint16          ServiceOption;
    ValTrafficTypeT ForTraffic;
    ValTrafficTypeT RevTraffic;
 } PACKED_POSTFIX  ValConnectionRecordT;

#define VAL_MAX_CON_REC 10  /* not defined in the isotel spec */
 typedef PACKED_PREFIX struct
 {
    ValMultiplexOptionT  ForMuxOption;
    ValMultiplexOptionT  RevMuxOption;
    kal_uint8              ForRates;
    kal_uint8              RevRates;
    kal_uint8              NumConRec;
    ValConnectionRecordT ConRec[VAL_MAX_CON_REC];
 } PACKED_POSTFIX  ValRptSvcConfigMsgT;

 typedef PACKED_PREFIX struct
 {
    SysCdmaBandT        BandClassInd;
    kal_uint8          BandBlockInd;
    kal_uint16              Sid;
    kal_uint16              Nid;
    kal_uint8               NetworkType;
    kal_uint8               ProtRev;
 } PACKED_POSTFIX  ValNwkRptServiceReadyMsgT;

 /* VAL_NWK_RPT_SYSTEM_TIME_MSG */
#define VAL_SYSTEM_TIME_LEN SYS_SYSTIME_SIZE /* from sysdefs.h */
 typedef PACKED_PREFIX struct
 {
    kal_uint8 SysTime[VAL_SYSTEM_TIME_LEN];
    kal_uint8 LpSec;
    kal_int8  LtmOff;
    kal_uint8 DayLt;
    kal_bool  Valid;
 } PACKED_POSTFIX  ValNwkRptSystemTimeMsgT;

 typedef PACKED_PREFIX struct
 {
    ValRptCpEventT AbortReason;
    PswServiceOptionT SO;
 } PACKED_POSTFIX  ValOrigFinishedMsgT;

 /* VAL_NWK_RPT_PKT_STATE_MSG */
 typedef enum
 {
    PKT_NULL,
    PKT_ORIGINATED,   /* Origination confirmation */
    PKT_CONNECTED,    /* RLP link established     */
    PKT_DORMANT
 } ValPktStateT;

 typedef struct
 {
    ValPktStateT state;
 } ValNwkRptPktStateMsgT;

 /* VAL_NWK_RPT_PKT_DORM_TMR_MSG */
 typedef struct
 {
    kal_uint8  dormTime;   /* unit of 0.1 sec */
 } ValNwkRptPktDormTmrMsgT;

 /* VAL_PRL_INFO_MSG */
 typedef struct
 {
    NamNumber   namNumber;
    void        *PtrToPrl;
    kal_uint16      prlId;
    kal_uint16      eri_version_number;
 } ValPrlInfoMsgT;
 /* VAL_NWK_RPT_PKT_STATE_MSG */
 typedef enum
 {
    VAL_SYS_1XRTT,
    VAL_SYS_EVDO
 } ValSysTypeT;

 /* Set MobileID message */
typedef PACKED_PREFIX struct
{
  ExeRspMsgT  RspInfo;         /* Response routing information */
  kal_uint32 SPC;
  kal_uint64 securitycode;
  kal_uint8       Id;
  kal_uint64       value;
} PACKED_POSTFIX  ValSetMobileIDMsgT;

typedef PACKED_PREFIX struct
{
  kal_bool Result;
  kal_uint8 ResponseCode;
} PACKED_POSTFIX  ValSetMobileIDResponseMsgT;

#ifdef MTK_CBP
/* verify SPC message */
typedef struct
{
  kal_uint32 SPC;           /* SPC value to veirify */
  kal_bool reset;           /* reset retry count or not */
} ValVerifySPCMsgT;

typedef struct
{
  kal_bool Result;
  kal_uint8 ResponseCode;
} ValVerifySPCResponseMsgT;
#endif

 /* VAL_PSW_E911_MODE_MSG */
 typedef PACKED_PREFIX struct
 {
    kal_bool  mode;
 } PACKED_POSTFIX  ValEmergencyModeMsgT;

#ifdef MTK_CBP
typedef enum
{
    VAL_ROAM_STATUS_HOME = 0,
    VAL_ROAM_STATUS_INTERNATIONAL_ROAM,        /* used if carrier defines certain ERI for international roam */
    VAL_ROAM_STATUS_GENERIC_OR_DOMESTIC_ROAM,  /* used whenever international ERI array is empty or when roaming on non international (i.e. domestic) system  */
    VAL_ROAM_STATUS_UNKOWN = 255
} ValRoamTypeT;

typedef enum
{
    VAL_SYS_NOT_IN_PRL = 0,
    VAL_SYS_IN_PRL,
    VAL_SYS_IN_PRL_UNKNOWN = 255
} ValSysInPrlStatusT;

  /* VAL_CSS_PRL_IND_MSG */
 typedef PACKED_PREFIX struct
 {
    ValSysTypeT sys;
	kal_bool	inPrl;
} PACKED_POSTFIX  ValCssPrlIndMsgT;
  
typedef enum
{
    VAL_POWER_UP_STAGE = 0,
    VAL_NETWORK_FOUND_STAGE
}ValNwkSrvStageT;
#endif

  /* VAL_ROAM_INDICATION_MSG */
 typedef PACKED_PREFIX struct
 {
    kal_uint8   RoamInd;
    ValSysTypeT sys;
#ifdef MTK_CBP
    ValRoamTypeT  regRoamStatus;
#endif
    kal_uint8   defaultRoamInd;
    kal_uint16  eri_version_number;
    kal_bool    valid_eri_entry;
    kal_uint8   icon_image_id;
    kal_uint8   icon_mode;
    kal_uint8   call_prompt_id;
    kal_uint8   alert_call_counter_id;
    kal_uint8   char_encoding_type;
    kal_uint8   text_length;
    kal_uint8   text[MAX_ERI_TEXT_LENGTH];
} PACKED_POSTFIX  ValRoamIndicationMsgT;

typedef PACKED_PREFIX struct
{
  ExeRspMsgT  RspInfo;         /* Response routing information */
} PACKED_POSTFIX  ValEriVersionNumberMsgT;
typedef PACKED_PREFIX struct
{
  kal_uint16            eri_version_number;
} PACKED_POSTFIX  ValEriVersionNumberRspMsgT;


 /* VAL_RPT_CQA_MSG */
 typedef PACKED_PREFIX struct
 {
    kal_bool Alarm;
 } PACKED_POSTFIX  ValReportCQAMsgT;

#ifdef KDDI_EXTENSIONS
 /* VAL_EXTENDED_DATA_BURST_RX_IND_MSG */
 typedef PACKED_PREFIX struct
 {
    kal_uint16 MCC;
    kal_uint8   DB_Subtype;
    kal_uint8   Chg_Ind;
    kal_uint8   Subunit;
    kal_uint8   Unit;
 } PACKED_POSTFIX  ValExtendedBurstRxIndMsgT;
#endif

typedef PACKED_PREFIX struct
{
 kal_uint16 serviceOption;
} PACKED_POSTFIX  ValRptServiceOptionMsgT;

typedef PACKED_PREFIX struct
{
   DsPreArangT PreArrMode;
} PACKED_POSTFIX ValRptDataPrearrangeMsgT;

typedef PACKED_PREFIX struct
{
	kal_uint16 mcc;
	kal_uint8 imsi_11_12;
#ifdef MTK_CBP
    kal_uint16 aiMcc;
#endif
} PACKED_POSTFIX ValNetworkInfo;

#ifdef MTK_CBP
typedef PACKED_PREFIX struct
{
    kal_bool existence;
} PACKED_POSTFIX ValNwkExistenceInfoMsg;

typedef PACKED_PREFIX struct
{
    kal_bool inCallState;
    kal_uint16 serviceOption;
} PACKED_POSTFIX ValPswRptServiceOptionMsgT;
#endif

#ifdef MTK_CBP_ENCRYPT_VOICE
typedef enum
{
    ENCRYPT_SUCCESS = 0,
    ENCRYPT_FAIL,
    ENCRYPT_TIMEOUT,
    ENCRYPT_UNKOWN = 255
} EncryptRspTypeT;

typedef PACKED_PREFIX struct
{
    kal_bool result;
    EncryptRspTypeT reason;
} PACKED_POSTFIX ValEncryptVoiceRspMsgT;
#endif

 /*-----------------------------------------------------------------
 * SMSHandler
 *----------------------------------------------------------------*/
 /* these constants are redefined here to avoid recompiling PSW for VAL
    they all have relevant constants defined in pswsmstune.h */
 #define VAL_SMS_MAX_ADDRESS_CHARS          32 /* SMS_MAX_ADDRESS_CHARS */
 #define VAL_SMS_MAX_USERDATA_LENGTH        220/* SMS_MAX_USERDATA_LENGTH */
 #define VAL_SMS_MAX_SUBADDRESS_CHARS       30 /* SMS_MAX_SUBADDRESS_CHARS */
 #define VAL_SMS_MAX_NUM_SERVICE_CATEGORIES 10 /* SMS_MAX_NUM_SERVICE_CATEGORIES */
 #define VAL_SMS_MAX_CHAR_CATEGORY          20 /* SMS_MAX_CHAR_CATEGORY */

/* common to a couple of messages */
typedef PACKED_PREFIX struct
{
  kal_uint8 ErrorClass;
  kal_uint8 CauseCode;
} PACKED_POSTFIX  ValSmsCauseCodeT;

/* VAL_SMS_CAUSE_CODE_STATUS_MSG */
typedef PACKED_PREFIX struct
{
  kal_uint16           SeqNum;  /* The PSW-VAL SeqNum id used in msg assembly  */
  kal_uint8            SmsType; /* 0 = MO and 1 = MT, so can tell which SeqNum */
  ValSmsCauseCodeT Error;   /* Error condition (if any) of last SMS message   */
} PACKED_POSTFIX  ValSmsCauseCodeStatusMsgT;

 /* VAL_SMS_DELIVER_IND_DATA_MSG */
typedef PACKED_PREFIX struct
{
   kal_uint16 SeqNum;
   kal_uint8  MsgType;
   kal_uint8  NumMsgs;
   kal_uint8  MsgEncoding;
   kal_uint8  NumFields;                          /* Length of data in octets        */
   kal_uint8  Char[ VAL_SMS_MAX_USERDATA_LENGTH ];     /* User Data field of message      */
} PACKED_POSTFIX  ValSmsUserDataMsgT;

 /* VAL_SMS_RX_IND_MSG */
#define VAL_MAX_SMS_SIZE   256   /* ??? change this to header + (maxsize -header) */
typedef PACKED_PREFIX struct
{
  kal_bool  Broadcast;
  kal_uint8 MsgData[VAL_MAX_SMS_SIZE];
  kal_bool  DataTruncated; /* KAL_TRUE: if ascii message is longer than VAL_MAX_SMS_SIZE */
} PACKED_POSTFIX  ValSmsRxIndMsgT;

/* VAL_SMS_TX_RSP_MSG */
typedef PACKED_PREFIX struct
{
  kal_bool  TxStatus;
} PACKED_POSTFIX  ValSmsTxRspMsgT;

/* VAL_SMS_TST_CONNECT_MSG */
typedef PACKED_PREFIX struct
{
  kal_uint16   TeleSrvId;
} PACKED_POSTFIX  ValSmsTstConnectMsgT;

/* VAL_SMS_TST_BCAST_CONNECT_MSG */
/* VAL_SMS_TST_BCAST_PREF_MSG */
typedef PACKED_PREFIX struct
{
  kal_uint32   SvcMask;
  kal_uint32   LangMask;
  kal_uint8 Priority;
} PACKED_POSTFIX  ValSmsTstBCastParmsMsgT;

/* VAL_SMS_TST_CANCEL_MSG */
typedef PACKED_PREFIX struct
{
  kal_uint16 TeleSrvId;
  kal_uint16 MsgId;
    kal_bool   SendSmsCancelDb;
} PACKED_POSTFIX  ValSmsTstCancelMsgT;

/* VAL_SMS_TST_DISCONNECT_MSG */
typedef PACKED_PREFIX struct
{
  kal_uint16 TeleSrvId;
} PACKED_POSTFIX  ValSmsTstDisconnectMsgT;

/* VAL_SMS_TST_PREF_SRV_OPT_MSG */
typedef PACKED_PREFIX struct
{
  kal_uint32 SrvOpt;
} PACKED_POSTFIX  ValSmsTstPrefSrvOptMsgT;

/* VAL_SMS_TST_SUBMIT_MSG - ETS: Create a mobile originated (user submitted) */
/*                               SMS message                                 */
typedef PACKED_PREFIX struct
{
  kal_uint16   TeleSrvId;
  kal_bool     SendOnTraffic;
  kal_uint16   MsgId;
  kal_bool     DigitMode;
  kal_bool     NumberMode;
  kal_uint8    NumberType;
  kal_uint8    DestNumDigits;
  char     DestDigits[VAL_SMS_MAX_ADDRESS_CHARS];
  kal_uint8    CallbackNumDigits;
  kal_uint8    CallbackDigits[VAL_SMS_MAX_ADDRESS_CHARS];
  kal_uint8    DefaultMsgs;
  kal_uint8    UserDefinedMsgEncoding;
  kal_uint8    UserDefinedMsgOctets[VAL_SMS_MAX_USERDATA_LENGTH];
  kal_bool     UserAck;
  kal_bool     DeliveryAck;
  kal_uint8    Validity;
  kal_uint8    Validity_Year;
  kal_uint8    Validity_Month;
  kal_uint8    Validity_Day;
  kal_uint8    Validity_Hours;
  kal_uint8    Validity_Minutes;
  kal_uint8    Validity_Seconds;
  kal_uint8    Relative_Validity;
  kal_uint8    Delivery;
  kal_uint8    Delivery_Year;
  kal_uint8    Delivery_Month;
  kal_uint8    Delivery_Day;
  kal_uint8    Delivery_Hours;
  kal_uint8    Delivery_Minutes;
  kal_uint8    Delivery_Seconds;
  kal_uint8    Relative_Delivery;
  kal_uint8    Priority;
  kal_uint8    Privacy;
  kal_uint8    AlertonDelivery;
  kal_uint8    Language;
  kal_uint16   ServCategory;
} PACKED_POSTFIX  ValSmsTstSubmitMsgT;

/* VAL_SMS_TST_TERM_STATUS_MSG */
typedef PACKED_PREFIX struct
{
  kal_uint8 Status;
} PACKED_POSTFIX  ValSmsTstTermStatusMsgT;

/* VAL_SMS_TST_USER_ACK_MSG */
typedef PACKED_PREFIX struct
{
  kal_uint16 TeleSrvId;
  kal_uint8  MsgEncoding;
  kal_uint8  NumFields;
  kal_uint8  Char[VAL_SMS_MAX_USERDATA_LENGTH];
} PACKED_POSTFIX  ValSmsTstUserAckMsgT;

/* VAL_SMS_TST_RETX_AMOUNT_MSG */
typedef PACKED_PREFIX struct
{
    kal_uint8 NumTempRetries;   /* Max # of retries if BS returns errorCode = Temporary */
    kal_uint8 NumPermRetries;   /* Max # of retries if BS returns errorCode = Permanent */
    kal_uint8 NumTimeoutRetries;/* Max # of retries if no BS SMS Ack received and timeoutoccurs */
} PACKED_POSTFIX  ValSmsTstRetxAmountMsgT;

/* -> ??? associated to what message in pswsms.c */
typedef PACKED_PREFIX struct
{
  kal_bool  DigitMode;
  kal_bool  NumberMode;
  kal_uint8 NumberType;
  kal_uint8 NumberPlan;
  kal_uint8 NumFields;
  kal_uint8 Char[ VAL_SMS_MAX_ADDRESS_CHARS ];
} PACKED_POSTFIX  ValSmsMCAddrT;

typedef PACKED_PREFIX struct
{
  kal_uint8 Type;
  kal_bool  Odd;
  kal_uint8 NumFields;
  kal_uint8 Char[ VAL_SMS_MAX_SUBADDRESS_CHARS ];
} PACKED_POSTFIX  ValSmsMCSubaddrT;

typedef PACKED_PREFIX struct
{
  kal_uint8 replySeq;
} PACKED_POSTFIX ValSmsBearerReplyOptionT;

typedef PACKED_PREFIX struct
{
  kal_uint8 Year;
  kal_uint8 Month;
  kal_uint8 Day;
  kal_uint8 Hours;
  kal_uint8 Minutes;
  kal_uint8 Seconds;
} PACKED_POSTFIX  ValSmsAbsTimeT;

typedef PACKED_PREFIX struct
{
  kal_uint8  dispmode;
  kal_uint8  reserved;
} PACKED_POSTFIX  VAL_SMS_DISPMODE;  /* ??? change to conformant typedef */

 typedef enum
 {
    VAL_CAT_UNKNOWN,
    VAL_CAT_EMERGENCIES,
    VAL_CAT_ADMINISTRATIVE,
    VAL_CAT_MAINTENANCE,
    VAL_CAT_GEN_NEWS_LOCAL,
    VAL_CAT_GEN_NEWS_REGIONAL,
    VAL_CAT_GEN_NEWS_NATIONAL,
    VAL_CAT_GEN_NEWS_INTERNATIONAL,
    VAL_CAT_FINANCE_NEWS_LOCAL,
    VAL_CAT_FINANCE_NEWS_REGIONAL,
    VAL_CAT_FINANCE_NEWS_NATIONAL,
    VAL_CAT_FINANCE_NEWS_INTERNATIONAL,
    VAL_CAT_SPORTS_NEWS_LOCAL,
    VAL_CAT_SPORTS_NEWS_REGIONAL,
    VAL_CAT_SPORTS_NEWS_NATIONAL,
    VAL_CAT_SPORTS_NEWS_INTERNATIONAL,
    VAL_CAT_ENTERTAINMENT_NEWS_LOCAL,
    VAL_CAT_ENTERTAINMENT_NEWS_REGIONAL,
    VAL_CAT_ENTERTAINMENT_NEWS_NATIONAL,
    VAL_CAT_ENTERTAINMENT_NEWS_INTERNATIONAL,
    VAL_CAT_LOCAL_WEATHER,
    VAL_CAT_TRAFFIC,
    VAL_CAT_FLIGHT_SCHEDULE,
    VAL_CAT_RESTAURANTS,
    VAL_CAT_LODGINGS,
    VAL_CAT_RETAIL_DIRECTORY,
    VAL_CAT_ADVERTISEMENT,
    VAL_CAT_STOCK_QUOTES,
    VAL_CAT_EMPLOYMENT_OPPORTUNITIES,
    VAL_CAT_MEDICAL_HEALTH,
    VAL_CAT_TECH_NEWS,
    VAL_CAT_MULTI_CATEGORY,

    VAL_CAT_CMAS_PRESIDENT_ALERT = 0X1000,  /* 3GPP2 C.R1001-G SPEC */
    VAL_CAT_CMAS_EXTREME_THREAT_TO_LIFE,
    VAL_CAT_CMAS_SEVERE_THREAT_TO_LIFE,
    VAL_CAT_CMAS_CHILD_ABDUCTION_EMERGNY,
    VAL_CAT_CMAS_TEST_MESSAGE,
    VAL_CAT_CMAS_RESERVED_MAX =0X10FF
 } VAL_SMS_SERVICE_CAT;  /* ??? change to conformant typedef */

 typedef PACKED_PREFIX struct
 {
    kal_uint8  OperationCode;
    kal_uint16 SrvCat;
    kal_uint8  Lang;
    kal_uint8  MaxMsg;
    kal_uint8  Alert;
    kal_uint8  NumChar;
    kal_uint8  Char[ VAL_SMS_MAX_CHAR_CATEGORY ];
 } PACKED_POSTFIX  VAL_SRV_CAT_RECORD;

 typedef PACKED_PREFIX struct
 {
    kal_uint8 msgEncoding;
    kal_uint8 numCat;
    VAL_SRV_CAT_RECORD cat[VAL_SMS_MAX_NUM_SERVICE_CATEGORIES];
 } PACKED_POSTFIX  VAL_SRV_CAT_DATA;
#ifdef KDDI_EXTENSIONS
typedef PACKED_PREFIX struct
{
    kal_uint32 msgIpAddr;
    kal_uint8 CtlFlag;
} PACKED_POSTFIX ValSmsIpAddrT;
#endif

typedef PACKED_PREFIX struct
{
   kal_uint8 ErrorClass;
   kal_uint8 MsgStatusCode;
} PACKED_POSTFIX  VAL_MSG_STATUS;

#ifdef MTK_CBP_ENCRYPT_VOICE
typedef struct
{
   kal_uint8	 msgType;
   kal_uint8	 subMsgType;
   kal_uint8	 mode;
   kal_bool	     SignatureVerifyResult;
   kal_bool	 	 DecryptResult;
   kal_bool	 	 RandomVerifyResult;
   kal_bool	 	 IsKmcVerCrt;
   kal_uint8	 callLen;
   kal_uint8	 callNum[30];
   kal_uint8	 timeStmp[7];
   kal_uint8	 cause;
   kal_bool	 	 msgCheckResult;
} ValCryptSmsInfoT;
#endif


 typedef PACKED_PREFIX struct
 {
    kal_uint16            SeqNum;
    kal_uint16            TeleSrvId;
    kal_uint8             NumUserDataMsgs;
    kal_uint16            MsgId;
    kal_uint8             Type;
    kal_bool              HeaderInd;
    kal_bool              UserAckPres;
    kal_bool              UserAck;
    ValSmsMCAddrT     Addr;
    kal_bool              SubaddrPres;
    ValSmsMCSubaddrT  Subaddr;
    ValSmsBearerReplyOptionT BearerReplyOption;
    kal_bool              CatPres;
    VAL_SMS_SERVICE_CAT  Cat;
    kal_bool              UsrRspCodePres;
    kal_uint8             UsrRspCode;
    kal_bool              TimeStampPres;
    ValSmsAbsTimeT    TimeStamp;
    kal_bool              ValTimeAbsPres;
    ValSmsAbsTimeT    ValTimeAbs;
    kal_bool              ValTimeRelPres;
    kal_uint8             ValTimeRel;
    kal_bool              DelTimeAbsPres;
    ValSmsAbsTimeT    DelTimeAbs;
    kal_bool              DelTimeRelPres;
    kal_uint8             DelTimeRel;
    kal_bool              PriPres;
    kal_uint8             Pri;
    kal_bool              PrvPres;
    kal_uint8             Prv;
    kal_bool              ReplyOptionPres;
    kal_bool              UserAckReq;
    kal_bool              DakReq;
    kal_bool              ReadAckReq;
    kal_bool              NumMsgPres;
    kal_uint8             NumMsg;
    kal_bool              AlertPres;
    kal_uint8             Alert;
    kal_bool              LangPres;
    kal_uint8             Lang;
    kal_bool              CallbackPres;
    ValSmsMCAddrT     Callback;
    kal_bool              DispModePres;
    VAL_SMS_DISPMODE  DispMode;
    kal_bool              MsgDepIndexPres;
    kal_uint16            MsgDepIndex;
    kal_bool              srvCatDataPres;
    VAL_SRV_CAT_DATA  srvCatData;
	kal_bool              msgStatusPres;
    VAL_MSG_STATUS msgStatus;
    kal_bool              transport_ack_reqd;	
#ifdef MTK_CBP_ENCRYPT_VOICE
	kal_bool			  cryptSmsInfoPres;
    ValCryptSmsInfoT   cryptSmsInfo;
#endif

#ifdef KDDI_EXTENSIONS
    kal_bool              msgIpAddrPres;
    ValSmsIpAddrT  msgIpAddress;
    kal_bool              NotifyFlagPres;
    kal_uint8             NotifyFlag;
    kal_bool              UimIdPres;
    kal_uint32           UimId;
#endif
 } PACKED_POSTFIX  ValSmsDeliverIndMsgT;

 /* ??? associated to what sms message */
typedef PACKED_PREFIX struct
{
  kal_uint16           TeleSrvId;
  kal_uint16           SeqNum;
  ValSmsCauseCodeT Error;
} PACKED_POSTFIX  ValSmsErrorMsgT;

typedef PACKED_PREFIX struct
{
  kal_uint8 SeqNum;
} PACKED_POSTFIX  ValSmsAckL2AckedMsgT;

typedef PACKED_PREFIX struct
{
  kal_uint8 MsgEncoding;    /* TSB58A defined representation of Char fields     */
  kal_uint8 NumFields;      /* the number of Chars present (in the array below) */
  kal_uint8 AsciiText[225]; /* the decoded user data text                       */
} PACKED_POSTFIX  ValSmsTstDecDataMsgT;

 /*-----------------------------------------------------------------
 * RLP Handler
 *----------------------------------------------------------------*/
typedef PACKED_PREFIX struct
{
  kal_uint32 FwdRateByte;
  kal_uint32 RevRateByte;
} PACKED_POSTFIX ValRlpDataRateMsgT;
 /*-----------------------------------------------------------------
 * HWD Handler
 *----------------------------------------------------------------*/
/* VAL_HWD_BATTERY_READ_DATA_MSG */
typedef PACKED_PREFIX struct
{
   kal_uint16   AuxAdcValue;
   kal_uint16   BatterVoltage;  /* in mV */
} PACKED_POSTFIX  ValBatteryReadDataMsgT;

/* VAL_HWD_TEMPERATURE_READ_DATA_MSG */
typedef PACKED_PREFIX struct
{
   kal_uint16   AuxAdcValue;
   kal_int8     TempCelcius;  /* in C */
} PACKED_POSTFIX  ValTempInfoDataMsgT;

/* VAL_HWD_RX_TX_POWER_INFO_DATA_MSG */
typedef PACKED_PREFIX struct
{
   ExeRspMsgT  RspInfo;      /* Response routing information */
   kal_int16    RxPowerDbmQ6;
   kal_int16    DivRxPowerDbmQ6;
   kal_int16    TxPowerDbmQ6;
   kal_uint16   RxGainState;
   kal_uint16   DivRxGainState;
   kal_uint16   TxGainState;
   kal_uint16   TxAgcPdmRep;
   kal_int16    TxClosedLoopAdjQ6;
   kal_int16    RxGainIntegral;
   kal_int16    RxGainCoarse;
   kal_int16    RxGainFine;
   kal_int16    RxGainPdmQ3;
   kal_int16    TxConstPowerOffsetQ6;
   kal_int16    AvgActiveEcIoQ6;
   kal_int16    TxAnt;
} PACKED_POSTFIX  ValRxTxPwrInfoMsgT;

/* VAL_PSW_PILOT_PWR_RPT_MSG */
typedef PACKED_PREFIX struct
{
   ExeRspMsgT RspInfo;      /* Response routing information */
   kal_int16    AvgActiveEcIoQ6;
} PACKED_POSTFIX  ValPswPilotPwrRptMsgT;

/* VAL_CSS_CP_PWR_CTRL_MSG */
typedef PACKED_PREFIX struct
{
    kal_bool              PowerUp;
    OperationModeT    OpMode;
} PACKED_POSTFIX ValCssCpPwrCtrlMsgT;

/*-----------------------------------------------------------------
* VMEMO Handler
*----------------------------------------------------------------*/
/* common to data messages for VMEM and VREC */
typedef PACKED_PREFIX struct
{
   kal_uint8   Rate;             /* Rate of speech */
   kal_uint8   SpchData[1];      /* Speech data (size derived from rate) */
} PACKED_POSTFIX  ValVmemDataMsgT;

/* VAL_VMEM_DATA_OFFLINE_MSG */
typedef ValVmemDataMsgT ValVmemDataOfflineMsgT;

/* VAL_VMEM_DATA_ONLINE_MSG */
typedef ValVmemDataMsgT ValVmemDataOnlineMsgT;

/* VAL_VREC_MIXED_DATA_MSG */
typedef ValVmemDataMsgT ValVrecMixedDataMsgT;

/* VAL_VREC_PCM_DATA_MSG */
typedef PACKED_PREFIX struct
{
   kal_uint16 SpchData[160];      /* Speech data (size is fixed at 160) */
} PACKED_POSTFIX  ValVrecPcmDataMsgT;


/* VAL_L1DTST_GETPHONESTATUS; rspmsg data structure defined by L1D */
//typedef ExeRspMsgT ValL1DTstGetPhoneStatusMsgT;


/* VAL_L1D_RSSI_RPT_MSG */
typedef PACKED_PREFIX struct
{
   kal_int16    Rssi;
} PACKED_POSTFIX  ValL1dRssiRptMsgT;

typedef enum
{
  VAL_RTC_DATA_TIME,
  VAL_RTC_DATA_DATE  /*gqdeng add get rtc data type for time or date information*/
} ValRtcCurDataT;

  /*-----------------------------------------------------------------
 * HRPD Handler
 *----------------------------------------------------------------*/
typedef PACKED_PREFIX struct
{
    kal_uint8   SessionOpened; /* 0: session closed, 1-session opened on rev0, 2:session opened on revA */
    kal_bool    IsEhrpd;
} PACKED_POSTFIX  ValHrpdSessionStatusMsgT;

typedef PACKED_PREFIX struct
{
  kal_uint8 Success; /* 0: fail, 1-success*/
} PACKED_POSTFIX  ValHrpdA12AuthStatusMsgT;

typedef PACKED_PREFIX struct
{
  kal_bool InService;
} PACKED_POSTFIX  ValHrpdSvcStatusMsgT;

typedef PACKED_PREFIX struct
{
  kal_bool acqd;
  kal_uint16 Band;          /* Current Operating Band               */
  kal_uint16 Channel;       /* Current Channel Number               */
  kal_uint8 SysType;
  kal_uint8 _ATRevisionNum;
  kal_uint16 PilotPn;       /* PILOT_PN  */

} PACKED_POSTFIX  ValHrpdNtwkAcqdMsgT;

typedef PACKED_PREFIX struct
{
kal_uint16 Ref_Sid;
kal_uint16 Ref_Nid;
kal_uint16 Ref_BaseID;

} PACKED_POSTFIX ValCellIDInforT;
typedef PACKED_PREFIX struct
{
kal_uint16 Ref_Sid_Update;
kal_uint16 Ref_Nid_Update;
kal_uint16 Ref_BaseID_Update;
kal_int32   Ref_Lat_Update;
kal_int32   Ref_Lon_Update;
} PACKED_POSTFIX ValCellIDInforUpdateT;
typedef PACKED_PREFIX struct
{
   kal_bool     PowerUp;                       /* KAL_TRUE power up, KAL_FALSE power down */
} PACKED_POSTFIX  ValPswPowerMsgT;

typedef PACKED_PREFIX struct
{
  kal_uint32 prefMode;  /* 4: DETERMINE_MODE_AUTOMATICALLY;  7: CDMA_ONLY; 8: HDR_ONLY */
} PACKED_POSTFIX ValDoParmSetSucMsgT;

typedef PACKED_PREFIX struct
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
} PACKED_POSTFIX  ValPswCallInitiateMsgT;

#ifdef MTK_DEV_C2K_IRAT
/* _RPT_CP_EVENT_MSG */
typedef enum
{
   RSVAS_VAL_EVENT_RECV_SUSPEND,
   RSVAS_VAL_EVENT_RECV_RESUME,
   RSVAS_VAL_EVENT_INVALID
} ValRsvasEventT;

typedef PACKED_PREFIX struct
{
  ValRsvasEventT event; /* event of C2K RSVAS received */
} PACKED_POSTFIX  ValRptC2kRsvasEventMsgT;

typedef PACKED_PREFIX struct
{
  uim_access_option_enum    CardAccessOption;
} PACKED_POSTFIX  ValPswC2kSimIndexMsgT;
#endif

 #endif  /* PSWVALAPI_H *//**Log information: \main\vtui2_5x\1 2008-12-03 05:15:45 GMT gdeng
** HREF#3454**/
/**Log information: \main\vtui2_5x\2 2008-12-08 07:10:59 GMT gdeng
** HREF#34554**/
/**Log information: \main\vtui2_5x\vtui2_5x_gdeng_href4745\1 2009-01-10 05:53:58 GMT gdeng
** HREF#4745**/
/**Log information: \main\vtui2_5x\3 2009-01-10 09:00:07 GMT cshen
** merge from branch vtui2_5x_gdenghref4745**/
/**Log information: \main\helios_dev\helios_dev_gdeng_href6379\1 2009-04-13 10:42:05 GMT gdeng
** HREF#6379**/
/**Log information: \main\helios_dev\3 2009-04-14 04:45:26 GMT cshen
** merge from branch helios_dev_gdeng_href6379**/
/**Log information: \main\helios_dev\helios_dev_jyin_href6535\1 2009-04-18 11:02:37 GMT jyin
** HREF#6535**/
/**Log information: \main\helios_dev\4 2009-04-18 11:10:18 GMT jyin
** HREF#6535**/
/**Log information: \main\helios_dev\helios_dev_zlin_href6743\1 2009-05-07 02:07:14 GMT zlin
** HREF#6743. LCD wakeup and audio play conflict issue.**/
/**Log information: \main\helios_dev\5 2009-05-07 02:10:14 GMT zlin
** Merge zlin href6743.**/
/**Log information: \main\helios_dev\helios_dev_gdeng_href6987\1 2009-05-19 07:20:21 GMT gdeng
** HREF#6987**/
/**Log information: \main\helios_dev\6 2009-05-19 09:18:41 GMT cshen
** merge from helios_dev_gdeng_href6987**/
/**Log information: \main\helios_dev\helios_dev_hbi_href7897\1 2009-08-03 09:14:32 GMT hbi
** HREF#7897:Merge Wendy cbp57_wavis_scbp4873 to fix audio issue when Vmemo stop **/
/**Log information: \main\helios_dev\7 2009-08-03 09:31:14 GMT ygwu
** HREF#7897**/
/**Log information: \main\helios_dev\helios_dev_gdeng_href8638\1 2009-10-12 08:02:30 GMT gdeng
** HREF#8638**/
/**Log information: \main\helios_dev\8 2009-10-12 08:44:15 GMT cshen
** merge from helios_dev_gdeng_href8638**/
/**Log information: \main\CBP7FeaturePhone\5 2010-09-07 08:50:05 GMT cshen
** merge from CBP7FeaturePhone_hjin_href14109**/
/**Log information: \main\CBP7FeaturePhone\CBP7FeaturePhone_gdeng_href14724\1 2010-09-21 09:30:57 GMT gdeng
** HREF#14724**/
/**Log information: \main\CBP7FeaturePhone\6 2010-09-21 09:42:31 GMT cshen
** merge from cbp7featurephone_gdeng_href14724
|**/
/**Log information: \main\CBP7FeaturePhone\CBP7FeaturePhone_wzhou_href15015\1 2010-10-14 02:53:22 GMT wzhou
** FIX CR 15015 **/
/**Log information: \main\CBP7FeaturePhone\7 2010-10-18 03:14:26 GMT jzwang
** href15015**/
/**Log information: \main\CBP7FeaturePhone\CBP7FeaturePhone_yxma_href15574\1 2010-11-11 05:33:40 GMT yxma
** href15574\ ,add VAL_EV_ORIG_USER_CANCEL_WITH_SO**/
/**Log information: \main\CBP7FeaturePhone\8 2010-11-11 06:00:21 GMT cshen
** merge from CBP7FeaturePhone_yxma_href15574**/
/**Log information: \main\CBP7FeaturePhone\CBP7FeaturePhone_nicholaszhao_href17384\1 2011-07-04 08:06:39 GMT nicholaszhao
** HREF#17384**/
/**Log information: \main\CBP7FeaturePhone\9 2011-07-12 09:40:18 GMT marszhang
** HREF#17384**/
/**Log information: \main\CBP80\cbp80_cshen_scbp10098\1 2012-07-26 06:28:12 GMT cshen
** cbp80_cshen_scbp10098**/
/**Log information: \main\Trophy\Trophy_wzhou_href22163\1 2013-04-25 03:05:50 GMT wzhou
** HREF#22163: add A12 auth status message in VAL**/
/**Log information: \main\Trophy\1 2013-04-25 03:06:27 GMT jzwang
** href#22163**/
/**Log information: \main\Trophy\Trophy_zjiang_href22291\1 2013-10-28 02:51:20 GMT zjiang
** HREF#22291.fix crts21779.号码长度由15调整为32.**/
/**Log information: \main\Trophy\3 2013-10-28 02:52:57 GMT cshen
** href#22291**/
/**Log information: \main\Trophy\Trophy_zjiang_href22291_fix1\1 2013-10-28 06:47:54 GMT zjiang
** HREF#22291.fix HREF#22291.**/
/**Log information: \main\Trophy\4 2013-10-28 06:55:19 GMT cshen
** href#22291**/

