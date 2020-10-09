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
#ifndef _HLPAPI_H_
#define _HLPAPI_H_
/*****************************************************************************
*
* FILE NAME   : hlpapi.h
*
* DESCRIPTION :
*
*     This include file provides system wide global type declarations and
*     constants
*
* HISTORY     :
*     See Log at end of file.
*
*****************************************************************************/

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "module_msg_range.h"
#include "sysdefs.h"
#include "pswcustom.h"
#include "valatdata.h"
#include "cpbuf.h"
#include "iopapi.h"
#include "sbp_public_utility.h"
#include "hlp_nvram.h"
#include "slc_nvram.h"

#define EAP_AKA_PRIME 1

/*----------------------------------------------------------------------------
 Global Defines and Macros
----------------------------------------------------------------------------*/
#define HLP_MAILBOX_CMD                  EXE_MAILBOX_1_ID
#define HLP_MAILBOX2_CMD                 EXE_MAILBOX_2_ID
#define HLP_SEC_MAILBOX                  EXE_MESSAGE_MBOX_3
#define HLP_SEC_CMD                      EXE_MAILBOX_3_ID

#define HLP_MAX_SIZE_DATA                240
#define HLP_MAX_NUM_REV_RLP              300
#define HLP_MAX_SPY_LEN                  164
#define MAX_NUM_DO_INACTIVITY_TICKS      4500    /* 4500 x 6.67ms = 30 sec */
#define MAX_NUM_1X_INACTIVITY_TICKS      30      /* second */

#define HLP_AKA_KEY_LEN                  16 /*128 bits 3G TS 33.105.v.3.0(2000-03)*/
#define HLP_AKA_RAND_LEN                 16 /*128 bits 3G TS 33.105.v.3.0(2000-03)*/
#define HLP_AKA_FMK_LEN                  4  /*32 bits */
#define HLP_AKA_AMF_LEN                  2  /*16 bits 3G TS 33.105.v.3.0(2000-03)*/
#define HLP_AKA_MACA_LEN                 8  /*64 bits 3G TS 33.105.v.3.0(2000-03)*/
#define HLP_AKA_MACS_LEN                 8  /*64 bits 3G TS 33.105.v.3.0(2000-03)*/
#define HLP_AKA_RES_LEN                  16 /*32<->128 bits 3G TS 33.105.v.3.0(2000-03)*/
#define HLP_AKA_CK_LEN                   16 /*128 bits 3G TS 33.105.v.3.0(2000-03)*/
#define HLP_AKA_IK_LEN                   16 /*128 bits 3G TS 33.105.v.3.0(2000-03)*/
#define HLP_AKA_AK_LEN                   6  /*48 bits 3G TS 33.105.v.3.0(2000-03)*/
#define HLP_AKA_AKS_LEN                  6  /*48 bits 3G TS 33.105.v.3.0(2000-03)*/
#define HLP_AKA_UAK_LEN                  16
#define HLP_AKA_AUTN_LEN                 16
#define HLP_AKA_AUTS_LEN                 16

#define EAP_AKA_NONCE_S_LEN              16
#define EAP_AKA_NONCE_MT_LEN             16
#define EAP_AKA_MAC_LEN                  16
#define EAP_AKA_K_AUT_LEN                32
#define EAP_AKA_K_ENCR_LEN               16
#define EAP_AKA_MSK_DATA_LEN             64
#define EAP_AKA_IV_LEN                   16

#define EAP_AKA_RAND_LEN                 16
#define EAP_AKA_AUTN_LEN                 16
#define EAP_AKA_RES_MAX_LEN              16
#define EAP_AKA_MK_LEN                   20
#define EAP_AKA_MSK_LEN                  64
#define EAP_AKA_AUTS_LEN                 14
#define EAP_AKA_IK_LEN                   16
#define EAP_AKA_CK_LEN                   16
#define EAP_AKA_SHA1_MAC_LEN             20

#define EAP_AKA_PSEUDONYM_LEN            128
#define EAP_AKA_REAUTH_ID_LEN            128
#define EAP_AKA_KC_LEN                   8
#define RM_WRITE_FLAG_SND_ACK            1

#if EAP_AKA_PRIME
#define EAP_AKA_K_RE_LEN                 32
#define EAP_AKA_EMSK_DATA_LEN            64
#define EAP_AKA_PRIME_MK_LEN             208
#endif

#define HLP_MAX_SOCKET                   10

#define HLP_MN_PASSWD_MAX_SIZE           HLP_MAX_PSWD_LEN
#define HLP_BETTER_SYSTEM_THRESH         20
#define MN_NAI_MAX_SIZE                  HLP_MAX_USRID_LEN
#define HLP_NUM_DIAL_STRING_DIGITS       11

#ifdef CBP7_EHRPD
#define MAX_HLP_FLOW_SUPPORTED           8  /* 6 */ /*Must be same as MAX_RLP_FLOW_SUPPORTED*/
#define MAX_RLP_FRAMES_PER_IP_PKT        32
#define NUM_HLP_FWD_IP_DATA_IND_ENTRIES  16
#endif

#define HSPD_PRI


#define VAL_UIM_FILE_CHANGE_LIST_MAX     50
#define HLP_VZW_PCO_CODE                 0xFF00
#define HLP_VZW_PCO_CODE_STR             "FF00"
#define HLP_VZW_PCO_MCCMNC_LEN           6
#define HLP_VZW_PCO_MCCMNC_STR           "311480"
#define HLP_VZW_PCO_CODE_STR_LEN         4

#define HLP_MAX_APN_NUM                  10
#define HLP_UIM_USIM_ACL_TAG           0xDD
#define HLP_UIM_USIM_ACL_SEPERATOR     0x2E
#define HLP_MIP_ERROR_CODE_BASE        0x80b0
#define HLP_PDN_ERROR_CODE_BASE        0x8000

/***********************************************************************/
/* Global Typedefs                                                     */
/**********************************************************************/


/***********************************************************************/
/* Enumeration Definitions                                             */
/***********************************************************************/
typedef enum
{
   HlpDataChRetOK,
   HlpDataChRetOK_Empty,
   HlpDataChRetFull,
   HlpDataChRetErr
} HlpDataChRetStatus;

typedef  struct {
   CpBufferT   *bufPtr;
   kal_uint16   offset;
   kal_uint16   dataLen;
   kal_uint8    nRLPFlow;
   kal_uint8    streamType;

   kal_uint16   tcpTag;
   kal_uint32   tcpPort;
   kal_uint32   srcIpAddr;
   kal_uint32   dstIpAddr;

#ifdef CBP7_EHRPD
   kal_uint16   FrameType;   /* distinguish Ipv4/Ipv6 and PDN-ID */
#endif

   kal_uint8    BearerId;
} RmDataCpBuffDescT;

typedef enum
{
   RmDataQBuffOK,/*Process successfully*/
   RmDataQBuffOK_Empty,/* Buffer Q empty after read successfully */
   RmDataQBuffFull,/* Buffer Q full */
   RmDataQBuffErr /* Error occurred. */
} RmDataQBuffStatusE;

typedef enum
{
   DO_NETWORK,
   RTT_NETWORK,
   NON_CONNECTED
} NetworkT;

typedef enum
{
   IN_SERVICE,
   OOSA,
   TO_ACQUIRE
} SvcStatusT;

typedef enum
{
   ASYNC_DATA,
   NETWORK_RM,
   PPP_ONLY,
   RELAY_RM,
   MAIN_CONN
} NspeAppT;

typedef enum
{
   DO_ONLY,       /* DO is active and is the only system that is allowed.  */
   DO_PREFERRED,  /* DO and 1X are both active, DO is preferred.       */
   RTT_ONLY,      /* 1X is active and is the only system that is allowed.  */
   RTT_PREFERRED,  /* DO and 1X are both active, 1X is preferred.       */
   NO_PREFERENCE,
#ifdef MTK_CBP
   HLP_NTW_PREF_NONE
#endif
} NetworkPrefT;

typedef enum
{
   CONNECTION_FAILED_IND,
   CONNECTION_CLOSED_IND,
   CONNECTION_OPENED_IND
} ConnectionRspT;

typedef enum
{
   Um,  /* Service Stream */
   Rm,
   Um_AccessStream,
   PppEndPointMax
} pppEndPointT;

typedef enum
{
   DO_FOUND,    /* Only DO network is found */
   RTT_FOUND,   /* Only 1X network is found */
   BOTH,        /* Both network are found   */
   NEITHER      /* Nothing available        */
} NetworkRspT;

typedef enum
{
   HA_DEC0,
   HA_DEC1,
   HA_ENC0,
   HA_ENC1
} pppHaPortT;

typedef enum
{
   HLP_NETWORK_ERROR_EVDO_CO_NO_SERVICE,
   HLP_NETWORK_ERROR_EVDO_CO_ACCESS_FAILURE,
   HLP_NETWORK_ERROR_EVDO_CO_REDIRECTION,
   HLP_NETWORK_ERROR_EVDO_CO_NOT_PREFERRED,
   HLP_NETWORK_ERROR_EVDO_CO_MODE_HANDOFF,
   HLP_NETWORK_ERROR_EVDO_CO_IN_PROGRESS,
   HLP_NETWORK_ERROR_EVDO_CO_SETUP_TIMEOUT,
   HLP_NETWORK_ERROR_EVDO_CO_SESSION_NOT_OPEN,
   HLP_NETWORK_ERROR_EVDO_RELEASE_NO_REASON,
   HLP_NETWORK_ERROR_EVDO_PROTOCOL_FAILURE,
   HLP_NETWORK_ERROR_EVDO_DENY_NO_REASON,
   HLP_NETWORK_ERROR_EVDO_DENY_NETWORK_BUSY,
   HLP_NETWORK_ERROR_EVDO_DENY_AUTHENTICATION,
   HLP_NETWORK_ERROR_EVDO_REDIRECT_TO_1X,
   HLP_NETWORK_ERROR_EVDO_FADE,
   HLP_NETWORK_ERROR_EVDO_USER_DISCONNECTED
#if defined (MTK_DEV_C2K_IRAT) && defined (MTK_DEV_C2K_SRLTE_L1)
   ,
   HLP_NETWORK_ERROR_EVDO_RSVAS_SUSPEND,
   HLP_NETWORK_ERROR_EVDO_RSVAS_VIRTUAL_SUSPEND
#endif
   ,
   HLP_NETWORK_SESSION_NEGOTIATION_COMPLETE,
   HLP_NETWORK_ERROR_EVDO_LAST
}HlpConnCloseReasonT;

typedef struct HlpPPPHaLLD
{
   kal_uint32               sourceAddr;
   kal_uint32               xferCount;
   kal_uint32               configReg;
   kal_uint32               nextInLLD;
} HlpPPPHaLLDT;

typedef enum
{
   REG_TIMER_EXPIRED,
   DORMANT_RECONN,
   SID_NID_CHANGE,
   PKT_ZID_CHANGE,
   COLOR_CODE_CHANGE
} MipReRegReasonT;

typedef enum
{
    Check_T_Dormancy = 0x01,
    Check_T_HRPD_Search = 0x02,
    Check_T_Rapid_Dormancy = 0x04,
    Check_T_ResDef_Dormancy = 0x08,
    Check_Dormancy_All = 0x0f
} DormParmCheckT;

typedef enum
{
    HLP_TIMER_TCH_SETUP,
    HLP_TIMER_WFR_SYS_RSP,
    HLP_TIMER_1X_CONNECTION_5MIN,
    HLP_TIMER_WFR_FAST_CONN,
    HLP_TIMER_DATA_RETRY,
    HLP_TIMER_DO_RETRY,
    HLP_TIMER_FALLBACK,
    HLP_TIMER_DO_OOSA_CONNECT_1X,
    HLP_TIMER_WFR_RM_CONNECT,
    HLP_TIMER_PPP_UM_REQ,
    HLP_TIMER_PPP_RM_REQ,
    HLP_TIMER_PPP_A12_REQ,
    HLP_TIMER_PPP_AUX_REQ,
    HLP_TIMER_PPP_UM_LOCAL_AUTH_REQ,
    HLP_TIMER_PPP_RM_LOCAL_AUTH_REQ,
    HLP_TIMER_PPP_A12_LOCAL_AUTH_REQ,
    HLP_TIMER_PPP_AUX_LOCAL_AUTH_REQ,
    HLP_TIMER_PPP_UM_REMOTE_AUTH_REQ,
    HLP_TIMER_PPP_RM_REMOTE_AUTH_REQ,
    HLP_TIMER_PPP_A12_REMOTE_AUTH_REQ,
    HLP_TIMER_PPP_AUX_REMOTE_AUTH_REQ,
    HLP_TIMER_PPP_MNRP_REQ,
    HLP_TIMER_WFR_UIM_AUTH_RSP,
    HLP_TIMER_THROTTLING_HSPD,
    HLP_TIMER_THROTTLING_HRPD,
    HLP_TIMER_IP_250MS,
    HLP_TIMER_DRMNT_RCNT_BACKOFF,
    HLP_TIMER_WFR_HANDOFF_HYST,
    HLP_TIMER_XOFF_RSP,
    HLP_TIMER_TCH_REL,
    HLP_TIMER_C109_PULSE,
    HLP_TIMER_PPP_CONNECT_BACKOFF,
    HLP_TIMER_DATA_RELEASE,
    HLP_TIMER_PDN_REQ_0,               /* ehrpd start, 0-4 not the pdn id, but the pdn array index */
    HLP_TIMER_PDN_REQ_1,
    HLP_TIMER_PDN_REQ_2,
    HLP_TIMER_PDN_REQ_3,
    HLP_TIMER_PDN_REQ_4,
    HLP_TIMER_VSE_VER_CAP_IND,
    HLP_TIMER_VSE_PPP_INACT,
    HLP_TIMER_IMS_WFR_RSP,
    HLP_TIMER_PDN_INACT_0,
    HLP_TIMER_PDN_INACT_1,
    HLP_TIMER_PDN_INACT_2,
    HLP_TIMER_PDN_INACT_3,
    HLP_TIMER_PDN_INACT_4,
    HLP_TIMER_THROTTLING_EHRPD,
    HLP_TIMER_UE_PARTIAL_CONTEXT,      /* ehrpd end */
    HLP_TIMER_MIP_RRP_REG,             /* mip start */
    HLP_TIMER_MIP_RRP_DEREG,
    HLP_TIMER_MIP_RRQ_REG,
    HLP_TIMER_MIP_AGENT_ADV,
    HLP_TIMER_MIP_LIFETIME,            /* mip end */
    HLP_TIMER_IPV6_TEST,
    HLP_TIMER_NAT,
    HLP_TIMER_A12_REDIAL_PENDING,
    HLP_TIMER_RSVAS_ABORT_REQ,
    HLP_TIMER_VSNCP_PDN_OPEN,
    HLP_TIMER_MAX_NUM
}hlp_timer_enum;

typedef enum
{
   /*Network Generates PDN Error*/
   GeneralError = 0x8000,
   UnauthorizedAPN,
   PDNLimitExceeded,
   NoPGWAvailable,
   PGWUnreachable,
   PGWReject,
   InsufficientParameters,
   ResourceUnavailable,
   AdminProhibited,
   PDNIDAlreadyInUse,
   SubScriptionLimitation,
   PDNConnAlreadyExistForPDN,
   EmergencyNotSupported,
   ReconnectNotAllowed,
   /*User Defined PDN Error*/
   EAPAKAfailure = 0x8080,
   RetryTmrThrottling,
   NetworkNoRsp,
   PDNAttachAbort,
   PDNLimitExceededInUESide,
   PDNIDAlreadyInUseInUESide,
   InvalidPDNAttachReq,
   PdnRecFailure,
   MainConnSetupFailure,
   BearerResourceUnAvailable,
   OpAbortByUser,
   RttDataConnected,
   EAPAKAReject,
   LCPNego3Failure,
   TCHSetupFailure,
   NwNoRspInLCP,
   NwNoRspInAuth,
   A12Retry3Failure,
   RsvasSuspended,
   AbortByGMSS,
   /*User Defined PPP Error*/
   PppAuthFail = 0x80b0,
   MipPppLcpTmo,
   MipPppNcpTmo,
   SipPppLcpTmo,
   SipPppNcpTmo,
   MipPppOptMismatch,
   SipPppOptMismatch,
   MipSolTmo,
   MipRrqTmo,
   MipRrpErr,
   MipLcpFail,
   SipLcpFail,
   MipNcpFail,
   SipNcpFail,
   A12AuthFail,
   EapAkaAuthFail,
   MipAdminProhibFail,
   MultiTchFail,
   PppA12LcpTmo,
   DnsNoResponse,
   /*Network Generates MIP Error*/
   /*0x80f0 - 0x8140: MIP error code, shall not disorder it*/
   MipUnspecifiedFailure = 0x80f0,
   MipAdminProhibited,
   MipInsuffResources1,
   MipMnFailedAuth,
   MipHaFailedAuth,
   MipLifetimeTooLong,
   MipPoorlyFormedReq,
   MipPoorlyFormedReply,
   MipEncapUnavail,
   MipReservedUnavail,
   MipRevTunUnavail,
   MipRTNTNotSet,
   MipMnTooDistant,
   MipInvalidCareOfAddr,
   MipRegTimeout,
   MipDsNotSupport,
   MipHnUnreachable,
   MipHaHostUnreachable,
   MipHaPortUnreachable,
   MipHaUnreachable = 0x8108,
   MipVendorSpecific,
   MipNonzeroHaAddr,
   MipNonzeroHomeAddr = 0x8110,
   MipMissingNai,
   MipMissingHa,
   MipMissingHomeAddr,
   MipUnknownChall = 0x8118,
   MipMissingChall,
   MipStaleChall,
   MipMissingMnFa,
   MipReasonUnspec = 0x8130,
   MipAdminProhib,
   MipInsuffResources2,
   MipMnFailedAuth2,
   MipFaFailedAuth,
   MipIdentMismatch,
   MipPoorlyFormedReq2,
   MipTooManyBindings,
   MipUnknownHaAddr,
   MipRevTunnelUnavail,
   MipRTNTNotSet2,
   MipEncapsulationUnavail = 0x813b,
   MipRegWithRedirected = 0x813f,
   MipErrCodeFromHome = 0x8140,
   NullError   = 0xeeee,
   NoError     = 0xffff
}DataConnErrCodeT;

/***********************************************************************/
/* Message/Struct Definitions                                          */
/***********************************************************************/
typedef struct
{
   NetworkT    networkType;
   SvcStatusT  svcStatus;
} networkSvcT;

typedef struct
{
   networkSvcT ServiceStatus;
} HlpOosaIndMsgT;

typedef struct
{
   NetworkRspT  SysToBeConnected;
} HlpSystemQueryRspMsgT;

/* Same as ValPswCallEndReasonT defined in valpswapi.h */
typedef enum
{
  HLP_PSW_ORIG_FAIL=2,
  HLP_PSW_ORIG_CANCELED_NDSS,
  HLP_PSW_ORIG_CANCELED,
  HLP_PSW_INTERCEPT,
  HLP_PSW_REORDER,
  HLP_PSW_CC_RELEASE,
  HLP_PSW_CC_RELEASE_SO_REJ,
  HLP_PSW_FNM_RELEASE,
  HLP_PSW_DIALING_COMPLETE,
  HLP_PSW_DIALING_CONTINUE,
  HLP_PSW_MAINTENANCE,
  HLP_PSW_VP_ON,
  HLP_PSW_VP_OFF,
  HLP_PSW_PSIST_FAIL,
  HLP_PSW_TC_RELEASE_MS,
  HLP_PSW_TC_RELEASE_PDOWN,
  HLP_PSW_TC_RELEASE_DISABLE,
  HLP_PSW_TC_RELEASE_BS,
  HLP_PSW_TC_RELEASE_SO_REJECT,
  HLP_PSW_TC_RELEASE_TIMEOUT,
  HLP_PSW_TC_RELEASE_ACK_FAIL,
  HLP_PSW_TC_RELEASE_FADE,
  HLP_PSW_TC_RELEASE_LOCK,
  HLP_PSW_PAGE_FAIL,
  HLP_PSW_RETRY_TIMER_ACTIVE,
  HLP_PSW_RETRY_TIMER_INACTIVE,
  HLP_PSW_AMPS_INSVC,
  HLP_PSW_ORIG_REJECTED,
  HLP_PSW_EV_ORIG_RETRY_ORDER,
  HLP_PSW_SO_REDIRECT
} HlpPswCallEndReasonT;

typedef struct
{
   HlpPswCallEndReasonT reason;
} HlpConnectionFailedIndMsgT;

typedef struct
{
   ConnectionRspT ConnRsp;
} HlpConnectionRspMsgT;

typedef struct
{
   kal_uint16 sid;
   kal_uint16 nid;
} HlpSidNidChangIndMsgT;

typedef struct
{
   kal_uint8 pid;
} HlpPktZoneIdChangIndMsgT;

typedef struct
{
   kal_uint8 subnetId[16];
} HlpSubnetIdChangIndMsgT;

typedef struct
{
   kal_uint8            CallNumber[HLP_MAX_BWSR_DIG_LEN]; /* ASCII chars, NULL terminated       */
   kal_uint8            UserId[HLP_MAX_USRID_LEN];        /* Username use for SIP               */
   kal_uint8            Pswd[HLP_MAX_PSWD_LEN];           /* Password use for SIP               */
} DialingInfoT;

typedef struct
{
   NspeAppT  AppInstance;
   kal_uint8         Action;
} HlpUmAppInstanceMsgT;

typedef struct
{
  kal_uint8   FileCount;
  kal_uint16  FileId[VAL_UIM_FILE_CHANGE_LIST_MAX];
} HlpUimFileChangeMsgT;

typedef struct {
   kal_uint32 ipaddress;
   kal_uint16 port;
} FilterMux;

typedef struct {
   FilterMux socket[4];
   kal_uint16  currentSocketNum;
}MuxInfo;

typedef struct
{
   kal_bool gotoDormant;
} HlpConnectionReleasedIndMsgT;

typedef struct
{
   kal_bool               success;                            /* True = TCH connection and 1X RLP established. */
} HlpConnectionIndMsgT;

typedef struct
{
   kal_bool             TcpType;   /* KAL_TRUE=TCP, KAL_FALSE=UDP */
   kal_int16            socketId;  /* input socket Id, will be used in the response message */
   ExeRspMsgT       SocketCreateRspInfo;
   ExeRspMsgT       SocketConnRspInfo;
   ExeRspMsgT       SocketCloseRspInfo;
} HlpSocketCreateMsgT;

typedef struct
{
   kal_uint32           IpAddr;
   kal_uint16           Port;
} HlpAppAddrT;

typedef struct
{
   kal_uint8            Sap;
   HlpAppAddrT      ResourceAddr;
   ExeRspMsgT       SocketBindRspInfo;
} HlpSocketBindMsgT;

typedef struct
{
   kal_uint8            Sap;
   kal_bool             Passive;  /* KAL_FALSE=active, TURE=listen                   */
   HlpAppAddrT      DestAddr; /* IP and port number if active mode is chosen */
} HlpSocketConnectMsgT;

typedef enum
{
   HLP_IP6_ADDR_TYPE_PUBLIC,
   HLP_IP6_ADDR_TYPE_PUBLIC_TEMP,
   HLP_IP6_ADDR_TYPE_LOCAL
} HlpIp6AddrTypeE;

typedef struct
{
   kal_uint8            Sap;
   kal_uint8 FlowId;
   HlpIp6AddrTypeE AddrType;
   kal_uint16 PeerAddrPort;
   kal_uint32 PeerAddrIp[4];
} HlpIp6SocketConnectMsgT;

typedef struct
{
   kal_uint8 Sap;
} HlpIp6SocketConnectRspMsgT;

typedef struct
{
   kal_uint8            Sap;
   kal_bool             Graceful;
} HlpSocketCloseMsgT;

typedef struct
{
   kal_uint8            Sap;   /*server's sap*/
   kal_int16            SockListenfd;
   kal_int16            sockfd[5];
   kal_uint8            SocketNum;
   ExeRspMsgT       MmiSocketListenRspInfo;
} HlpSocketListenMsgT;

typedef struct
{
   kal_uint8            Sap;
   kal_uint8            opt_type;           /* Specifies which option is being set */
   kal_uint16           size;
} HlpOptionRequestMsgT;

typedef struct
{
   kal_uint8            Sap;
   kal_int8             how;
} HlpSocketShutDownMsgT;

typedef struct
{
   kal_uint8            Sap;
   kal_bool             lingerOnOff;
   kal_uint32           lingerTime;
} HlpSocketLingerMsgT;

typedef struct
{
   kal_uint32           IpAddr;        /* 32-bit IP address.               */
   kal_uint16           UdpPort;       /* UDP port address.                */
} HlpDatagramAddrT;

typedef struct
{
   kal_uint8*           DataBufP;      /* Point to the first byte          */
   kal_uint16           DataLen;       /* size of data in byte             */
   kal_uint8            Flags;         /* if IP_MOREDATA is set in the flag
                                      it indicates that datagram is not
                                      able to fit into allocated buffer
                                      Datagram is truncated to fit.    */
} HlpDatagramT;

typedef struct
{
#if defined(MTK_PLT_ON_PC) && defined(MTK_PLT_ON_PC_UT)
    kal_uint8            data[255];
#endif
    kal_uint8*           DataP;   /* point to the first byte of data.    */
    kal_uint16           Size;    /* The size of data in byte.           */
    kal_bool             Push;    /* KAL_TRUE, send immediately;             */
                              /* KAL_FALSE, TCP determine by itself.     */
    HlpDatagramAddrT To;      /* The address of receipent for UDP    */
    kal_uint8            Sap;     /* Socket of which the data is going to
                                 be sent.                            */
} HlpSocketSendReqMsgT;

typedef   struct
{
   kal_uint8    Sap;
}   HlpUpbRecvDataRspMsgT;

typedef struct
{
   kal_uint8    Sap;
} HlpTcpbRecvRspMsgT;

typedef struct
{
   kal_uint32   SrcIp;
   kal_uint32   DestIp;
   kal_uint16   SrcPort;
   kal_uint16   DestPort;
   kal_uint16   DataLength;
   kal_uint8   *DataPtr;
} HlpMipRrpMsgT;

typedef struct
{
   kal_uint32   SrcIp;
   kal_uint32   DestIp;
   kal_uint16   DataLength;
   kal_uint8   *DataPtr;
} HlpMipAgentAdvMsgT;

typedef struct
{
   kal_uint8    Status;
   kal_uint32   LocalIp;
   kal_uint32   RemoteIp;
} HlpMipUmPppStatusMsgT;

typedef struct
{
   pppEndPointT  interface;
   kal_uint8         status;
   kal_uint32        localAddr;
   kal_uint32        remoteAddr;
   kal_uint32        priDNS;
   kal_uint32        secDNS;
} HlpPppStatusMsgT;

typedef struct
{
   kal_uint8            UserId[HLP_MAX_USRID_LEN];
   kal_uint8            Pswd[HLP_MAX_PSWD_LEN];
} HlpUsernamePasswdMsgT;

typedef struct
{
   hlp_timer_enum       TimerID;
} HlpTimerExpiredMsgT;

typedef struct
{
   kal_uint8*           DataP;   /* point to the first byte of data.    */
   kal_uint16           Size;    /* The size of data in byte.           */
   kal_bool             Push;    /* KAL_TRUE, send immediately;             */
                             /* KAL_FALSE, TCP determine by itself.     */
   kal_uint8            Sap;     /* Socket of which the data is going to
                                be sent.                            */
} HlpTcpbDataSendReqMsgT;

typedef struct
{
   HlpDatagramT      SendData;    /* Datagram itself..                  */
   HlpDatagramAddrT  To;          /* The address of receipent.          */
   kal_uint8             Sap;         /* SAP to TCB                         */
} HlpUpbSendDataMsgT;

typedef struct
{
   kal_bool              NetworkMode;  /* True: Network Mode, +CRM=2        */
                                   /* False: Relay Mode,  +CRM=1        */
} HlpSetNetworkOrRelayModeMsgT;

#ifdef CBP7_EHRPD
typedef struct {
   CpBufferT   *dataPtr;
   kal_uint16   offset;
   kal_uint16   dataLen;
} PafHlpFwdDataPktT;

typedef struct
{
   kal_uint8       nAppType;
   kal_uint8       nRLPFlowId;
   kal_uint8       nRoute;
   kal_bool        bRohcEnabled;
   kal_uint8       numRlpFrames;
   PafHlpFwdDataPktT   rlpFrames[MAX_RLP_FRAMES_PER_IP_PKT];
} HlpRlpFwdIPDataPktT;
#endif

#if 1 //!defined (MTK_DEV_MEMORY_OPT)
#define NUM_HLP_FWD_DATA_IND_ENTRIES     600
#define NUM_HLP_REV_DATA_IND_ENTRIES     150
#else
/* under construction !*/
/* under construction !*/
#endif

typedef RmDataCpBuffDescT HlpRlpFwdDataPktT;
typedef RmDataCpBuffDescT HlpRlpRevDataPktT;

typedef struct
{
   kal_uint8   forceNetworkPref;
   kal_uint8   forceCSSResp;
} HlpSysSelPrefSetMsgT;

typedef struct
{
   kal_uint8     nDMUV;
} HlpValDMUVSetMsgT;

typedef struct
{
   HlpConnCloseReasonT ConnCloseReason;
} HlpConnStatusMsgT;

#ifdef HSPD_PRI

#define RSA_PUBLIC_KEY_BIT     (1<<0)
#define AUTH_SET_BIT           (1<<1)
#define PKOID_SET_BIT          (1<<2)

typedef enum
{
   RSA_PUBLIC_KEY_SET = RSA_PUBLIC_KEY_BIT,
   AUTH_SET           = AUTH_SET_BIT,
   SET_BOTH           = RSA_PUBLIC_KEY_BIT|AUTH_SET_BIT,
   PKOID_SET          = PKOID_SET_BIT
} RsaSetE;

typedef struct
{
   kal_uint8 nPKOID;
   kal_uint8 nActiveDmuRsaPublicKeyNo;
   kal_uint8 MN_Authenticator[MN_AUTH_MAX_SIZE];
} HlpRSAPublicKeyOrgIdInfoT;

typedef enum
{
   /* Set All Params in a Profile */
   HL_PARM_SET_HSPD_SEG_PROFILE_DATA             = 0,
   HL_PARM_GET_HSPD_SEG_PROFILE_DATA,
   HL_PARM_SET_HSPD_SECURE_SEG_PROFILE_DATA,  /* no Gets for Secure Data */

   HL_PARM_SET_HSPD_SECURE_SEG_PROFILE_BYTE_DATA,

   HL_PARM_GET_HSPD_SECURE_SEG_PROFILE_DATA,

   /* Set All HSPD SegData together, that are not part of a Profile */
   HL_PARM_SET_HSPD_SEG_ALL_DATA,
   HL_PARM_GET_HSPD_SEG_ALL_DATA,

   /* Init HSPD Db to defaults */
   HL_PARM_SET_HSPD_SEG_INIT,   /* Init Hspd Data that are not part of a Profile */
   HL_PARM_SET_HSPD_SEG_PROFILE_INIT, /* Init a Profile, with ProfileId */

   /* Set Individual Params in HSPD SegData, that are not part of a Profile */
   HL_PARM_SET_ACTIVE_PROFILE,                   /* ActiveProfile */
   HL_PARM_GET_ACTIVE_PROFILE                    = 10,
   HL_PARM_SET_NUM_PROFILE,                      /* NumProfiles */
   HL_PARM_GET_NUM_PROFILE,
   HL_PARM_SET_RRP_TIMEOUT,                      /* RRPTimeout */
   HL_PARM_GET_RRP_TIMEOUT,
   HL_PARM_SET_NUM_REG_RETRIES,                  /* NumRegRetries */
   HL_PARM_GET_NUM_REG_RETRIES,
   HL_PARM_SET_REG_BACKOFF,                      /* RRA */
   HL_PARM_GET_REG_BACKOFF,
   HL_PARM_SET_IS801_IPADDR,                     /* Is801_IpAddr */
   HL_PARM_GET_IS801_IPADDR                      = 20,
   HL_PARM_SET_IS801_PORTNUM,                    /* Is801_PortNum */
   HL_PARM_GET_IS801_PORTNUM,
   HL_PARM_SET_IS801_USERID,                     /* Is801_UserId[HLP_MAX_USRID_LEN]*/
   HL_PARM_GET_IS801_USERID,
   HL_PARM_SET_IS801_PSWD,                       /* Is801_Pswd[HLP_MAX_PSWD_LEN] */
   HL_PARM_GET_IS801_PSWD,
   HL_PARM_SET_IS801_CALLEDNUMBER,               /* Is801_CalledNumber[HLP_MAX_BWSR_DIG_LEN] */
   HL_PARM_GET_IS801_CALLEDNUMBER,
   HL_PARM_SET_MN_HA_AUTH,                       /* 0-RFC2002, 1-RFC2002bis */
   HL_PARM_GET_MN_HA_AUTH                        = 30,
   HL_PARM_SET_MN_HA_AUTH_ALGO,                  /* MN_HA_Auth_Algo */
   HL_PARM_GET_MN_HA_AUTH_ALGO,
   HL_PARM_SET_MN_AAA_AUTH_ALGO,                 /* MN_AAA_Auth_Algo */
   HL_PARM_GET_MN_AAA_AUTH_ALGO,
   HL_PARM_SET_MN_AUTHENTICATOR,                 /* MN_Authenticator[MN_AUTH_MAX_SIZE] */
   HL_PARM_GET_MN_AUTHENTICATOR,
   HL_PARM_SET_ACTIVE_DMURSA_PK,                 /* ActiveDmuRsaPublicKey */
   HL_PARM_GET_ACTIVE_DMURSA_PK,
   HL_PARM_SET_NPKOID,                           /* nPKOID */
   HL_PARM_GET_NPKOID                            = 40,
   HL_PARM_SET_SIP_NAI,                          /* SIP_NAI[HLP_MN_NAI_MAX_SIZE] */
   HL_PARM_GET_SIP_NAI,
   HL_PARM_SET_SIP_DUN_NAI,                      /* SIP_DUN_NAI[HLP_MN_NAI_MAX_SIZE] */
   HL_PARM_GET_SIP_DUN_NAI,
   HL_PARM_SET_AN_NAI,                           /* AN_NAI[HLP_MN_NAI_MAX_SIZE] */
   HL_PARM_GET_AN_NAI,
   HL_PARM_SET_DORMANT_HANDOFF_OPTSET,           /* DormantHandoffOptSet */
   HL_PARM_GET_DORMANT_HANDOFF_OPTSET,
   HL_PARM_SET_DATA_SCRM_ENABLED,                /* DataScrmEnabled */
   HL_PARM_GET_DATA_SCRM_ENABLED                 = 50,
   HL_PARM_SET_DATA_TRTL_ENABLED,                /* DataTrtlEnabled */
   HL_PARM_GET_DATA_TRTL_ENABLED,
   HL_PARM_SET_PREFRC,                           /* PrefRc */
   HL_PARM_GET_PREFRC,
   HL_PARM_SET_DNS_PRI_IP_ADDR,
   HL_PARM_GET_DNS_PRI_IP_ADDR,
   HL_PARM_SET_DNS_SEC_IP_ADDR,
   HL_PARM_GET_DNS_SEC_IP_ADDR,
   HL_PARM_GET_DNS_IP_ADDR,
   HL_PARM_SET_DNS_IP_ADDR                       = 60,
   HL_PARM_SET_MIP_MODE,
   HL_PARM_GET_MIP_MODE,

   /* Set Individual Params in HSPD Secure SegData, that are not part of a Profile */
   HL_PARM_SET_SIP_STRING_PASSWORD,
   HL_PARM_GET_SIP_STRING_PASSWORD,
   HL_PARM_SET_AN_PASSWORD,
   HL_PARM_GET_AN_PASSWORD,
   HL_PARM_SET_AN_BINARY_PASSWORD,
   HL_PARM_SET_SIP_BINARY_PASSWORD,
   HL_PARM_SET_PACKET_DIAL_STRING,
   HL_PARM_GET_PACKET_DIAL_STRING                = 70,
   HL_PARM_SET_VJ_COMPRESSION_ENABLE,
   HL_PARM_GET_VJ_COMPRESSION_ENABLE,
   HL_PARM_SET_MIP_STRING_PASSWORD,
   HL_PARM_GET_MIP_STRING_PASSWORD,
   HL_PARM_SET_MIP_BINARY_PASSWORD,
   HL_PARM_GET_MIP_BINARY_PASSWORD,
   HL_PARM_SET_QNC_ENABLED,
   HL_PARM_GET_QNC_ENABLED,
   HL_PARM_SET_MDR_MODE_ENABLED,
   HL_PARM_GET_MDR_MODE_ENABLED                  = 80,
   HL_PARM_SECURE_PROFILE_DATA_INIT,
   HL_PARM_GET_SIP_BINARY_PASSWORD,
#ifdef CBP7_EHRPD
   HL_PARM_SET_AKA_PASSWORD                      = 83,
   HL_PARM_GET_AKA_PASSWORD,
   HL_PARM_SET_AKA_RROFILEDATA,
   HL_PARM_GET_AKA_PROFILEDATA,
#endif
   HL_PARM_GET_HSPD_LOCK                         = 87,
   HL_PARM_SET_HSPD_LOCK,
   HL_PARM_SET_HSPD_LOCK_CODE,
   HL_PARM_SET_DATA_AUTO_PACKET_DETECTION,
   HL_PARM_GET_DATA_AUTO_PACKET_DETECTION,
   HL_PARM_SET_DATA_SO,
   HL_PARM_GET_DATA_SO,
   HL_PARM_SET_MN_NAI,
   HL_PARM_GET_MN_NAI,
   HL_PARM_SET_MN_DUN_NAI,
   HL_PARM_GET_MN_DUN_NAI,
   HL_PARM_SET_MN_HA_SPI_ENABLE,
   HL_PARM_GET_MN_HA_SPI_ENABLE,
   HL_PARM_SET_MN_HA_SPI,
   HL_PARM_GET_MN_HA_SPI,
   HL_PARM_SET_MN_AAA_SPI_ENABLE,
   HL_PARM_GET_MN_AAA_SPI_ENABLE,
   HL_PARM_SET_MN_AAA_SPI,
   HL_PARM_GET_MN_AAA_SPI,
   HL_PARM_SET_MN_REVERSE_TUNNELING,
   HL_PARM_GET_MN_REVERSE_TUNNELING,
   HL_PARM_SET_MN_HOME_IP_ADDRESS,
   HL_PARM_GET_MN_HOME_IP_ADDRESS,
   HL_PARM_SET_HOME_AGENT_PRIMARY_IP_ADDRESS,
   HL_PARM_GET_HOME_AGENT_PRIMARY_IP_ADDRESS,
   HL_PARM_SET_HOME_AGENT_SECONDARY_IP_ADDRESS,
   HL_PARM_GET_HOME_AGENT_SECONDARY_IP_ADDRESS,

   HL_PARM_SET_HSPD_NETWORKMODE,
   HL_PARM_GET_HSPD_NETWORKMODE,

   HL_PARM_SET_HSPD_DORMANT_TIMER_MODE,
   HL_PARM_GET_HSPD_DORMANT_TIMER_MODE,

   HL_PARM_SET_MIP_DE_REG_RETRIES                = 118,
   HL_PARM_GET_MIP_DE_REG_RETRIES,
   HL_PARM_SET_MIP_RE_REG_ONLYIF_TRAFFIC,
   HL_PARM_GET_MIP_RE_REG_ONLYIF_TRAFFIC,
   HL_PARM_SET_MIP_NAI_ENABLE,
   HL_PARM_GET_MIP_NAI_ENABLE,

   HL_PARM_SET_DATA_DO_TO_1X_ENABLE,
   HL_PARM_GET_DATA_DO_TO_1X_ENABLE,

   HL_PARM_SET_DATA_PPP_UM_CONFIG                = 126,
   HL_PARM_GET_DATA_PPP_UM_CONFIG,
   HL_PARM_SET_DATA_PPP_RM_CONFIG,
   HL_PARM_GET_DATA_PPP_RM_CONFIG,
   HL_PARM_SET_DATA_TCP_CONFIG,
   HL_PARM_GET_DATA_TCP_CONFIG,

   HL_PARM_SET_DO_RETRY_TIMER                    = 132,
   HL_PARM_GET_DO_RETRY_TIMER,

#ifdef CBP7_EHRPD
   HL_PARM_SET_EHRPD_TEST_MODE                   = 148,
   HL_PARM_GET_EHRPD_TEST_MODE,
#endif

   HL_PARM_SET_PROFILE_VALID                     = 150,
   HL_PARM_GET_PROFILE_VALID,
   HL_PARM_VAL_AT_SET_HSPD_NETWORKMODE,
   HL_PARM_VAL_AT_SET_AN_NAI,
   HL_PARM_VAL_AT_GET_AN_NAI,

   HL_PARM_OPERATION_ID_END_LIST
} HlpParmOperationId;

typedef enum
{
   HL_PARM_MIN_VALUE,
   HL_PARM_MAX_VALUE,
   HL_PARM_DEFAULT_VALUE,
   HL_PARM_CUSTOM_VALUE,
   HL_PARM_OP_TYPE_LIST_END
} HlpParmOperationType;

typedef enum
{
   HL_PARM_OPERATION_SUCCESS,
   HL_PARM_OPERATION_FAIL_READ_NOT_ALLOWED,
   HL_PARM_OPERATION_FAIL_WRITE_NOT_ALLOWED,
   HL_PARM_OPERATION_NOT_ALLOWED_IN_HL_STATE,
   HL_PARM_OPERATION_FAIL_INVALID_PTR,
   HL_PARM_OPERATION_FAIL_INVALID_LENGTH,
   HL_PARM_OPERATION_GENERAL_FAILURE,
   HL_PARM_OPERATION_NO_CHANGE_IN_VALUE,
   HL_PARM_OPERATION_FAIL_VALUE_OUT_OF_RANGE,
   HL_PARM_OPERATION_PARAMETER_NOT_SUPPORTED,
   HL_PARM_OPERATION_INTERFACE_NOT_SUPPORTED,
   HL_PARM_OPERATION_FAIL_OP_TYPE_NOT_SUPPORTED,
   HL_PARM_OPERATION_FAIL_DEFAULT_NOT_DEFINED,
   HL_PARM_OPERATION_FAIL_DEFAULT_NOT_SUPPORTED_FOR_PARM,
   HL_PARM_OPERATION_RESULT_END_LIST
} HlpParmAccessResultCode;

typedef enum
{
   NOT_CONNECTED,
   DO_CONNECTING,
   DO_CONNECTED,
   RTT_CONNECTING,
   RTT_CONNECTED
} ConnStateT;

typedef struct
{
   ExeRspMsgT resp;
   kal_uint8   SMS_Over_IP_Networks_Indication;
   kal_uint8   SigComp;
   kal_uint8   ImsDomain[72];
   kal_uint8   AkaPassword[72];
   kal_uint16  SipT1Timer_ims;
   kal_uint16  SipTFTimer_ims;
   kal_uint16  SipT2Timer_ims;
   kal_uint16  SipPcscfPort;
} HlpSmsImsEtsCfgSetT;

typedef struct
{
   kal_uint8   SMS_Over_IP_Networks_Indication;
   kal_uint8   SigComp;
   kal_uint8   ImsDomain[72];
   kal_uint8   AkaPassword[72];
   kal_uint16  SipT1Timer_ims;
   kal_uint16  SipTFTimer_ims;
   kal_uint16  SipT2Timer_ims;
   kal_uint16  SipPcscfPort;
} HlpSmsImsEtsCfgGetT;

/* The following structures are to be obsolete
   but keep them for backword compatible now
typedef   struct
{
   ExeRspMsgT resp;
   kal_uint16  restartTimer;
   kal_uint8   lcpReqTry;
   kal_uint8   lcpNakTry;
   kal_uint8   lcpTermTry;
   kal_uint8   authRetry;
   kal_uint8   ipcpReqTry;
   kal_uint8   ipcpNakTry;
   kal_uint8   ipcpTermTry;
   kal_uint8   ipcpCompression;
}   HlpPppUmEtsCfgSetT;

typedef   struct
{
   kal_uint8 result;
}   HlpPppUmEtsCfgSetRespT;

typedef   struct
{
   kal_uint8   result;
   kal_uint16  restartTimer;
   kal_uint8   lcpReqTry;
   kal_uint8   lcpNakTry;
   kal_uint8   lcpTermTry;
   kal_uint8   authRetry;
   kal_uint8   ipcpReqTry;
   kal_uint8   ipcpNakTry;
   kal_uint8   ipcpTermTry;
   kal_uint8   ipcpCompression;
}   HlpPppUmEtsCfgGetT;

typedef   struct
{
   kal_uint16  restartTimer;
   kal_uint8   lcpReqTry;
   kal_uint8   lcpNakTry;
   kal_uint8   lcpTermTry;
   kal_uint8   authRetry;
   kal_uint8   ipcpReqTry;
   kal_uint8   ipcpNakTry;
   kal_uint8   ipcpTermTry;
   kal_uint8   ipcpCompression;
}   HlpPppUmEtsCfgT;
   The above structures are to be obsolete
   but keep them for backword compatible now */



typedef struct
{
   kal_uint32  RxBytes;
   kal_uint32  RxPackets;
   kal_uint32  BadRxPackets;
   kal_uint32  TxBytes;
   kal_uint32  TxPackets;
   kal_uint64  TotalRxBytes;
   kal_uint64  TotalRxPackets;
   kal_uint64  TotalBadRxPackets;
   kal_uint64  TotalTxBytes;
   kal_uint64  TotalTxPackets;
} IPCounterT;

typedef struct
{
   kal_uint8   lcpReqTries;
   kal_uint8   lcpNakTries;
   kal_uint16  lcpRestartTimer;
   kal_uint8   lcpTermTries;
   kal_uint16  lcpTermTimer;
   kal_uint8   authRetries;
   kal_uint16  authTimer;
   kal_uint8   ncpReqTries;
   kal_uint8   ncpNakTries;
   kal_uint16  ncpReStrTimer;
   kal_uint8   ncpTermTries;
   kal_uint16  ncpTermTimer;
} HlpPppUmCfg_APIStruct;

typedef struct
{
   kal_bool    pppKeepAlive;
   kal_bool    pppDetect;
   kal_uint8   lcpReqTries;
   kal_uint8   lcpNakTries;
} HlpPppRmCfg_APIStruct;

typedef struct
{
   kal_uint16  tcpMtu;
} HlpTcpCfgSet_APIStruct;

typedef struct
{
   kal_uint16  tcpMtu;
   kal_uint16  tcpWinSize_1XRTT;
   kal_uint16  tcpWinSize_EVDO;
} HlpTcpCfg_APIStruct;

typedef struct{
   kal_uint8 ProfileId;
   kal_uint8 NAI[HLP_MN_NAI_MAX_SIZE];
} HlpHspdMNNAI_APIStruct;

typedef struct{
   kal_uint8 ProfileId;
   kal_uint8 MN_REV_TUNNELING;
} HlpHspdRevTunneling_APIStruct;

typedef struct{
   kal_uint8  ProfileId;
   kal_uint32 SPI;
} HlpHspdMNSPI_APIStruct;

typedef struct{
   kal_uint8 ProfileId;
   kal_bool  SPI_Enable;
} HlpHspdMNSPIEnable_APIStruct;

typedef struct{
   kal_uint8 ProfileId;
   kal_uint32 IPAddress;
} HlpHspdProfileIPAddress_APIStruct;

typedef struct{
   kal_uint8 ProfileId;
} HlpHspdProfileParmGet_APIStruct;

typedef struct{
   kal_uint8    ProfileId;
   kal_bool     Profile_Valid;
   kal_uint32   MN_HOME_IP_ADDR;
   kal_uint32   HA_PRI_IP_ADDR;
   kal_uint32   HA_SEC_IP_ADDR;
   kal_uint8    MN_NAI[HLP_MN_NAI_MAX_SIZE];
   kal_uint8    MN_DUN_NAI[HLP_MN_NAI_MAX_SIZE];
   kal_uint8    MN_REV_TUNNELING;
   kal_bool     bMN_HA_SPI_Enable;
   kal_uint32   MN_HA_SPI;
   kal_bool     bMN_AAA_SPI_Enable;
   kal_uint32   MN_AAA_SPI;
} HlpProfileData_APIStruct;

typedef struct
{
   kal_uint8     ProfileId;
   kal_bool      Profile_Valid;
   kal_uint8     MN_AAA_PASSWORD_LEN;
   kal_uint8     MN_AAA_PASSWORD[MN_PASSWD_MAX_SIZE]; /* MIP AAA Shared Secret*/
   kal_uint8     MN_HA_PASSWORD_LEN;
   kal_uint8     MN_HA_PASSWORD[MN_PASSWD_MAX_SIZE]; /* MIP HA Shared Secret  */
} HlpSecureProfileData_APIStruct;

typedef struct
{
   kal_uint8   ProfileId;   /* Init the data to defaults, for this ProfileId */
} HlpInitHspdProfileData_APIStruct;

typedef struct
{
   kal_uint8   ProfileId;   /* Init the data to defaults, for this ProfileId */
} HlpGetHspdProfileData_APIStruct;

typedef struct
{

   /* HSPD Seg Data, that are not part of a profile */
   /*===============================================*/
   kal_uint8    RRPTimeout;      /* RRP MIP Registration timeout        */
   kal_uint8    NumRegRetries;   /* RRP MIP Registration Retry Attempts */
   kal_uint16   RRA;             /* Pre Re-registration backoff         */
   kal_uint32   Is801_IpAddr;
   kal_uint16   Is801_PortNum;
   kal_uint8    Is801_UserId[HLP_MAX_USRID_LEN];
   kal_uint8    Is801_Pswd[HLP_MAX_PSWD_LEN];
   kal_uint8    Is801_CalledNumber[HLP_MAX_BWSR_DIG_LEN];

   kal_uint8    MN_HA_AUTH;  /* 0-RFC2002, 1-RFC2002bis, 2-bypassHA */
   kal_uint8    MN_HA_Auth_Algo;
   kal_uint8    MN_AAA_Auth_Algo;
   kal_uint8    MN_Authenticator[MN_AUTH_MAX_SIZE];
   kal_uint8    ActiveDmuRsaPublicKey;   /* 0-TestKey, 1-CommercialKey */
   kal_uint8    nPKOID;

   kal_uint8    SIP_NAI[HLP_MN_NAI_MAX_SIZE];
   kal_uint8    SIP_DUN_NAI[HLP_MN_NAI_MAX_SIZE];
   kal_uint8    AN_NAI[HLP_MN_NAI_MAX_SIZE];

   kal_uint8    DormantHandoffOptSet;  /* 0-Disabled, 1-Enabled */
   kal_uint8    DataScrmEnabled;  /* Supp Chan Supported */
   kal_uint8    DataTrtlEnabled;   /* Slow Down data at high CPU utilization */
   kal_uint8    PrefRc; /* Preferred Radio Cfg. Default-RC3 */
   kal_uint32   DNS_PRI_IP_ADDR;
   kal_uint32   DNS_SEC_IP_ADDR;
   kal_uint8    MIPMode;

   kal_uint32   ActiveProfile;
   kal_uint8    NumProfiles;
   kal_uint8    VJCompEnabled;
   /* HSPD Secure Seg Data, that are not part of a profile */
   /*======================================================*/
   /* Only Set applies, no Gets for Secure Data */
   kal_uint8    SIP_PASSWORD[HLP_MAX_PSWD_LEN]; /* Simple IP User Password   */
   kal_uint8    AN_PASSWORD[HLP_MAX_PSWD_LEN]; /* AN Shared Secret*/
} HlpHspdSegData_APIStruct;

typedef struct
{
  kal_uint8 RRPTimeout;
} HlpRrpTimeout_APIStruct;

typedef struct
{
  kal_uint8 NumRegRetries;
} HlpNumRegRetries_APIStruct;

typedef struct
{
  kal_uint8 NumDeRegRetries;
} HlpDeRegRetries_APIStruct;

typedef struct
{
  kal_bool ReRegOnlyIfTraffic;
} HlpReRegOnlyIfTraffic_APIStruct;

typedef struct
{
  kal_bool MipNaiEnabled;
} HlpMipNaiEnable_APIStruct;

typedef struct
{
  kal_uint16 RRA;
}  HlpReRegBackoff_APIStruct;

typedef struct
{
   kal_uint32   Is801_IpAddr;
} HlpIs801IpAddr_APIStruct;

typedef   struct
{
   kal_uint16   Is801_PortNum;
}    HlpIs801PortNum_APIStruct;

typedef struct
{
   kal_uint8    Is801_UserId[HLP_MAX_USRID_LEN];
} HlpIs801UserId_APIStruct;

typedef struct
{
   kal_uint8    Is801_Pswd[HLP_MAX_PSWD_LEN];
} HlpIs801Pswd_APIStruct;

typedef struct
{
   kal_uint8    Is801_CalledNumber[HLP_MAX_BWSR_DIG_LEN];
} HlpIs801CalledNumber_APIStruct;

typedef struct
{
   kal_uint8    MN_HA_AUTH;  /* 0-RFC2002, 1-RFC2002bis, 2-bypassHA */
} HlpMNHAAUTH_APIStruct;
typedef  struct
{
   kal_uint8    MN_HA_Auth_Algo;
} HlpMNHAAuthAlgo_APIStruct;

typedef struct
{
   kal_uint8    MN_AAA_Auth_Algo;
} HlpMNAAAAuthAlgo_APIStruct;

typedef struct
{
   kal_uint8    MN_Authenticator[MN_AUTH_MAX_SIZE];
}  HlpMNAuthenticator_APIStruct;

typedef struct
{
   kal_uint8    ActiveDmuRsaPublicKey;   /* 0-TestKey, 1-CommercialKey */
} HlpActiveDmuRsaPublicKey_APIStruct;

typedef struct
{
   kal_uint8    nPKOID;
} HlpPKOID_APIStruct;

typedef struct
{
   kal_uint8    SIP_NAI[HLP_MN_NAI_MAX_SIZE];
} HlpSIPNAI_APIStruct;

typedef struct
{
   kal_uint8    SIP_DUN_NAI[HLP_MN_NAI_MAX_SIZE];
} HlpSIPDUNNAI_APIStruct;

typedef struct
{
   kal_uint8    AN_NAI[HLP_MN_NAI_MAX_SIZE];
} HlpANNAI_APIStruct;

typedef struct
{
   kal_uint8    DormantHandoffOptSet;  /* 0-Disabled, 1-Enabled */
} HlpDormantHandoffOptSet_APIStruct;

typedef struct
{
   kal_uint8    DataScrmEnabled;   /* Supp Chan Supported */
} HlpDataScrmEnabled_APIStruct;

typedef struct
{
   kal_uint8    DataTrtlEnabled;   /* Slow Down data at high CPU utilization */
} HlpDataTrtlEnabled_APIStruct;

typedef struct
{
   kal_uint8    PrefRc; /* Preferred Radio Cfg. Default-RC3 */
} HlpPrefRc_APIStruct;

typedef struct
{
   kal_uint8    VJCompressionEnabled;
}  HlpVJCompressionEnabled_APIStruct;

typedef struct
{
   kal_uint8    DialString[HLP_NUM_DIAL_STRING_DIGITS];
}  HlpDialString_APIStruct;

typedef struct
{
   kal_bool     QNC_Enabled;
} HlpQncEnabled_APIStruct;

typedef struct
{
   kal_uint8    MDR_Mode;
}  HlpMdrMode_APIStruct;

typedef struct
{
   kal_bool DoTo1X_Enabled;
}  HlpDoTo1XEnabled_APIStruct;

typedef  struct
{
   kal_uint32   DNS_PRI_IP_ADDR;
}  HlpDNSPRIIPADDR_APIStruct;

typedef  struct
{
   kal_uint32   DNS_SEC_IP_ADDR;
}  HlpDNSSECIPADDR_APIStruct;

typedef  struct
{
   HlpDNSPRIIPADDR_APIStruct PriIpAddr;
   HlpDNSSECIPADDR_APIStruct SecIpAddr;
}   HlpDNSIPADDR_APIStruct;

typedef  struct
{
  kal_uint32 ActiveProfile;
}  HlpActiveProfile_APIStruct;

typedef   struct
{
  kal_uint8    ProfileId;
  kal_bool     Profile_Valid;
}  HlpProfileValid_APIStruct;

typedef  struct
{
   kal_uint8    NumProfiles;
}  HlpNumProfiles_APIStruct;

typedef struct
{
   kal_uint8    MipMode;
}  HlpMipMode_APIStruct;

typedef struct
{
   kal_uint8    SIP_PASSWORD[HLP_MAX_PSWD_LEN];
}  HlpSipPassword_APIStruct;

typedef  struct
{
   kal_uint8    AN_PASSWORD[HLP_MAX_PSWD_LEN];
}  HlpAnPassword_APIStruct;

typedef struct
{
   kal_uint8    AN_PASSWORD_LEN;
   kal_uint8    AN_PASSWORD[HLP_MAX_PSWD_LEN];
}  HlpAnBinaryPassword_APIStruct;

typedef struct
{
   kal_uint8    ProfileId;
   kal_uint8    MN_AAA_PASSWORD_LEN;
   kal_uint8    MN_AAA_PASSWORD[HLP_MN_PASSWD_MAX_SIZE];
   kal_uint8    MN_HA_PASSWORD_LEN;
   kal_uint8    MN_HA_PASSWORD[HLP_MN_PASSWD_MAX_SIZE];
} HlpMIPPasswordHex_APIStruct;

typedef struct
{
   kal_uint8    ProfileId;
   kal_uint8    MN_HA_PASSWORD[HLP_MN_PASSWD_MAX_SIZE];
   kal_uint8    MN_AAA_PASSWORD[HLP_MN_PASSWD_MAX_SIZE];
}    HlpMIPPasswordString_APIStruct;

typedef   struct
{
   kal_uint8    SIP_PASSWORD_LEN;
   kal_uint8    SIP_PASSWORD[HLP_MAX_PSWD_LEN];
}  HlpSIPPasswordHex_APIStruct;

typedef  struct
{
   kal_uint8    ProfileId;   /* Init the data to defaults, for this ProfileId */
}  HlpSecureSegInit_APIStruct;

typedef struct
{
    kal_bool HspdLocked;
} HlpHspdLockGet_APIStruct;

typedef struct
{
    kal_uint16  LockCode;
    kal_bool    Lock;
} HlpHspdLockSet_APIStruct;

typedef struct
{
    kal_uint16  CurrentLockCode;
    kal_uint16  NewLockCode;
} HlpHspdLockCode_APIStruct;

typedef struct
{
    kal_bool Enable; /*   KAL_TRUE: Scan the serial link for PPP packets
           Default is KAL_FALSE: Wait for ATD #777*/
} HlpDataAutoPacketDetection_APIStruct;

typedef  struct
{
    kal_bool HspdNetworkMode;
} HlpHspdNetworkMode_APIStruct;

typedef  struct
{
   kal_uint16 T_Dormancy;
   kal_uint16 T_HRPD_Search;
   kal_uint16 T_Rapid_Dormancy;
   kal_uint16 T_ResDef_Dormancy;
#ifdef MTK_CBP
   /* refer to DormParmCheckT enum
    * bit3: T_ResDef_Dormancy; bit2: T_Rapid_Dormancy; bit1: T_HRPD_Search; bit0: T_Dormancy.
    * if 1, need check
    */
   DormParmCheckT Check_Flag;
#endif
}   HlpDormantTimerData_APIStruct;

typedef  struct
{
   kal_uint16 T_DO_Retry;
} HlpDoRetryTimerData_APIStruct;

typedef  struct {
   kal_uint16 T_Dormancy;
} HlpValCtaUpdateReqMsgT;

typedef enum
{
  HLP_DATA_SO_PRE701=0,
  HLP_DATA_SO_QP=1,
  HLP_DATA_SO_IS701=2
} HlpDataSOType;

typedef  struct
{
  HlpDataSOType SOSetType;
}  HlpDataSO_APIStruct;

typedef struct
{
   HlpParmOperationId ParmId;
   kal_bool InProgress;
   kal_bool RspNeeded;
   ExeRspMsgT  RspInfo;
   kal_int16       RegId;
} HlpSecureRspType;

typedef struct {
   kal_uint8 N_DIGITS;
   kal_uint8 MDN[OTA_MAX_MDN_DIGITS];
} HlpPswMDNUpdatedMsgT;

typedef struct
{
   kal_bool TriggeredByCs;
} HlpPswRsvasAbortReqMsgT;

#define MAX_CHAP_DATA_LEN 16

typedef   struct{
   kal_uint8 ChapId;
   kal_uint8 ChapLen;
   kal_uint8 ChapData[MAX_CHAP_DATA_LEN];
}  HlpUimAccessChapTestMsgT;

typedef   struct {
   kal_uint16 T_Dormancy;
   kal_uint16 T_HRPD_Search;
   kal_uint16 T_Rapid_Dormancy;
   kal_uint16 T_ResDef_Dormancy;
   DormParmCheckT Check_Flag;
}  HlpDormancyTimersSetMsgT;

typedef   struct {
   kal_uint16 T_DO_Retry;
}  HlpDORetryTimersSetMsgT;

typedef HlpSecureRspType HlpSegRspType;
#endif

#ifdef CBP7_EHRPD
typedef struct
{
   kal_uint8    AKA_PASSWORD[HLP_MAX_PSWD_LEN];
} HlpAkaPassword_APIStruct;

typedef struct
{
   HlpHspdAkaProfileDataT    AkaProfileData;
} HlpAkaProfileData_APIStruct;

typedef enum
{
   AKAAuth_Success,
   AKAAuth_AUTNFailure,
   AKAAuth_SQNSyncFailure,
   AKAAuth_RESInvalid,
   AKAAuth_CKInvalid,
   AKAAuth_IKInvalid,
   AKAAuth_UnknowFailure
#if EAP_AKA_PRIME
   ,
   AKAAuth_KDFIputInvalid,
   AKAAuth_KDFInvalid
#endif
} EapAkaAuthResultT;

typedef struct
{
   EapAkaAuthResultT authResult;
} HlpSecAkaAuthRspMsgT;
#endif

typedef struct
{
   kal_bool bEncryptDecryptResult;
} HlpSecAesCryptRspMsgT;

typedef   struct
{
   ExeRspMsgT  RspInfo;
   kal_uint8 FlowId;
   HlpIp6AddrTypeE AddrType;
   kal_uint16 LocalAddrPort;
   kal_uint16 PeerAddrPort;
   kal_uint32 PeerAddrIp[4];
}  HlpIp6TcpConnectionOpenMsgT;

typedef struct
{
   kal_uint8 Sap;
}  HlpTcpConnectionOpenRspMsgT;

typedef struct
{
   ExeRspMsgT  RspInfo;
   kal_uint16 LocalAddrPort;
   kal_uint16 PeerAddrPort;
   kal_uint32 PeerAddrIp;
}  HlpIp4TcpConnectionOpenMsgT;

#ifdef CBP7_EHRPD
typedef struct
{
   kal_bool eEHRPD;
} HlpImsEHRPDAttriMsgT;

/* IP6 related Begin */

typedef struct
{
   ExeRspMsgT  RspInfo;
   kal_uint8 FlowId;
   HlpIp6AddrTypeE AddrType;
   kal_uint16 LocalAddrPort;
   kal_uint16 PeerAddrPort;
   kal_uint32 PeerAddrIp[4];
   kal_int32  PayloadSize;
} HlpIp6UdpConnectionOpenMsgT;

typedef struct
{
   kal_uint8 Sap;
} HlpIp6UdpConnectionOpenRspMsgT;

typedef struct
{
   kal_uint8 Sap;
} HlpIp6UdpConnectionCloseMsgT;

typedef struct
{
   kal_uint8 Sap;
} HlpIp6TcpConnectionCloseMsgT;

/* IP6 related End */


typedef struct
{
   kal_bool bRevRohcOnRlpFlow;
   HlpProtocolIdentifierT  RevProtcolID;
   RevRohcProtocolParmsT   RevRohcParms;
   kal_bool bFwdRohcOnRlpFlow;
   HlpProtocolIdentifierT  FwdProtcolID;
   FwdRohcProtocolParmsT   FwdRohcParms;
} HlpRlpFlowProtocolInfoT;

typedef struct
{
   HlpRlpFlowProtocolInfoT RlpFlowProtocolInfo[MAX_HLP_FLOW_SUPPORTED];
} HlpRlpFlowProtocolInfoMsgT;

typedef struct
{
   kal_uint8  curRoute;
} HlpRlpRouteChangedMsgT;
#endif

typedef enum
{
   HLP_PPP_ROUTE_DEFAULT,
   HLP_PPP_ROUTE_NDIS
} HlpPppRouteTypeE;

typedef struct
{
   kal_uint8 RouteType;
} HlpPppRouteTypeSetMsgT;

typedef enum
{
   PATH_HDLC,
   PATH_IP,
   PATH_ROHC,
   PATH_IP_WITH_PDNMUX
} HlpRlpDataPathT;

typedef struct
{
   NetworkT   network;
   SvcStatusT svcStatus;
} HlpSvcStatusMsgT;

typedef enum
{
  CONN_SUSPEND,
  CONN_RESUME,
  CONN_DISABLE,
  CONN_RELEASE,
  CONN_RESET
} ConnCmdT;

typedef struct
{
  ConnCmdT   dataCmd;
} HlpDataConnectionCmdT;

typedef enum
{
   PowerUp,
   HybridRegistration,
   RTTOnlyRegistration,
   TriggerPDRegistration,
   DefaultAttach,
   SetIPv6Address,
   DedicateAttach,
   DetachAll,
   SendPING_IPv4,
   SendPING_IPv6
} ActionT;

typedef struct
{
  ActionT    myAction;
  kal_uint32     Ipv4Src;
  kal_uint32     Ipv4Dst;
  kal_uint32     Ipv6Src[4];
  kal_uint32     Ipv6Dst[4];
  kal_uint8      PDNid;
  kal_uint8      PDNtype;
  kal_uint8      AttachType;
  kal_uint8      APNstring[16];
} HlpTestBrowserConnectMsgT;

typedef struct
{
   kal_bool bPowerUp;
} HlpPowerReqMsgT;


typedef enum
{
   HLP_DOANAUTH_CHINATELECOM,
   HLP_DOANAUTH_INDONESIASMART,
   HLP_DOANAUTH_CARRIER_MAX
} HlpDOANAuthT;

typedef struct
{
   HlpDOANAuthT   DOANAuthAlgo;
} HlpDOANAuthAlgoSetMsgT;

typedef struct
{
  kal_uint32  SrcAddr;
  kal_uint32  DstAddress;
  kal_uint32  Length;
  kal_uint8   Data[520];
} HlpValPingReqMsgT;

typedef struct
{
  kal_uint8     Apn[100]; /* APN of PDN which need update its inactivity timer */
} HlpValUpdatePdnInactivityTimerT;

typedef enum
{
    HLP_VAL_SET_PCMT_MODE = 0,
    HLP_VAL_READ_PCMT_MODE,
    HLP_VAL_PCMT_INVALID_MODE = 255
}HlpValPcmtModeT;

typedef struct
{
    ExeRspMsgT      RspInfo;
    HlpValPcmtModeT mode;
    kal_bool            pcmtIratSet;
    kal_uint32          pcmtIratValue;
    kal_bool            pcmtEhrpdSet;
    kal_uint32          pcmtEhrpdValue;
}  HlpValPcmtParaMsgT;

typedef struct
{
  kal_uint8 AppSubType;
} HlpPppDataReqMsgT;

typedef enum
{
   HLP_UT_CONFIG_PARAM_1X_PS_ORIG_FAIL_REASON,
   HLP_UT_CONFIG_PARAM_CONTINUE_PROCESS_RATDM_UL_DATA,
   HLP_UT_CONFIG_PARAM_MCC,
   HLP_UT_CONFIG_PARAM_COMPLETE_PROCESS_DL_DATA,
   HLP_UT_CONFIG_PARAM_SBP_ID,
   HLP_UT_CONFIG_PARAM_MAX
}HlpUtConfigParamT;

typedef struct
{
    kal_uint32 LocalIPAddr;
    kal_uint32 PriDNSAddr;
	kal_uint32 RemoteIPAddr;
    kal_uint32 SecDNSAddr;
    kal_uint16 IPv4MTU;
}NwAppliedParm1xHRPDT;

typedef struct
{
   kal_uint8		 Cid;							   /*context id of PDP*/
   NetworkPrefT	     NetworkPref;
   NspeAppT		     AppType;
   DialingInfoT      CallInfo;
   kal_uint16		 InactivityTmr; 				   /* number of seconds for 1X RLP only  */
   kal_bool			 ReleaseTchWhenFallback;		   /* MIP to SIP fallback, release TCH	 */
   HlpPppRouteTypeE  RouteType;
}HlpPppConnectReqMsgT;

typedef struct
{
   kal_uint8			 	Cid; /*context id of PDP*/
   DataConnErrCodeT     ErrCode;
   NwAppliedParm1xHRPDT Parm;
}HlpPppConnectCnfMsgT;

typedef struct
{
   kal_uint8			 	Cid; /*context id of PDP*/
}HlpPppDisconnectReqMsgT;

typedef struct
{
   kal_uint8			 	Cid; /*context id of PDP*/
}HlpPppDisconnectCnfMsgT;

typedef enum
{
   DISCONNECT_BY_NW,
   DISCONNECT_BY_ME    
}DataDiscCauseT;

typedef struct
{
   kal_uint8			   Cid; /*context id of PDP*/
   DataDiscCauseT      Cause;
}HlpPppDisconnectIndMsgT;

typedef struct
{
   kal_uint8				 Cid; /*context id of PDP*/
   NwAppliedParm1xHRPDT  Parm;
}HlpPppModifyIndMsgT;

/*---------------------------------------------------------------
*  Declare global variables
*----------------------------------------------------------------*/
extern kal_bool           PppFilterIpMux;

extern MuxInfo        FilterMuxInfo;
/*---------------------------------------------------------------
*  Declare global function prototypes
*----------------------------------------------------------------*/

extern void PppHaDecode0Lisr (void);
extern void PppHaDecode1Lisr (void);
extern void PppHaEncode0Lisr (void);
extern void PppHaEncode1Lisr (void);
extern void  HlpSetInternetPdnId(kal_uint8 PdnId);

RmDataQBuffStatusE RmWrite(RmDataCpBuffDescT *Buff, kal_uint32 flags);
RmDataQBuffStatusE RmRead(RmDataCpBuffDescT * Buff);
void C2kPppLineStatusNotify(kal_uint32 PppStatus);
void C2kPppLineStatusIndicate(kal_uint32 PppStatus);
kal_bool HlpIsHightPriorityConnReq(void);

#endif



