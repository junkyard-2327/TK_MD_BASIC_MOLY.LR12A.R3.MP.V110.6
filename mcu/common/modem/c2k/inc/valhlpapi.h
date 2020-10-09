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
#ifndef VALHLP_H
#define VALHLP_H
/*************************************************************************************************
*
* FILE NAME   : valhlpapi.h
*
* DESCRIPTION : This file contains the declarations, definitions
*               and data structures used  to interface to the
*               VAL for the Network API.
*
*
* HISTORY     :
*     See Log at end of file
*
**************************************************************************************************/
#include "kal_public_defs.h"

#include "sysdefs.h"
#include "valapi.h"
#include "hlpapi.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define NET_INADDR_ANY        0x0L

#define NET_MAX_SOCKS         8

#define VAL_NET_MAX_REG_TASK  5
#define NET_MAX_LISTEN_SOCK   5
#define NET_LINGER_TIMER      120 /*linger at most 2m*/
#define VAL_INADDR_LOOPBACK   0x7F000001UL
#define VAL_INVALID_LEN       0xFFFFFFFFUL

#ifdef MTK_PLT_ON_PC
#define VAL_ICMP_HEADER_LEN   (8)
#endif /* MTK_PLT_ON_PC */

typedef enum
{
  NET_IP_PROTOCOL   = 0,
  NET_ICMP_PROTOCOL = 1,
  NET_TCP_PROTOCOL  = 6,
  NET_UDP_PROTOCOL  = 17
} NetProtocolT;

typedef enum
{
  NET_SOCK_STREAM_TYPE,
  NET_SOCK_DGRAM_TYPE,
  SOCK_ICMP_TYPE
} NetTypeT;

typedef enum
{
  NET_AF_INET_DOMAIN
} NetDomainT;

typedef enum
{
  NET_WRITE_EVENT           = 0x0001,     /*socket ready to write */
  NET_READ_EVENT            = 0x0002,      /*socket ready to read */
  NET_CLOSE_EVENT           = 0x0004,     /*socket close successfully */
  NET_ACCEPT_EVENT          = 0x0008,    /*socket ready to accept connection request */
  NET_CONNECT_EVENT         = 0x0010,   /*socket connect successfully */
  NET_CREATE_EVENT          = 0x0020,    /*socket created successfully */
  NET_BIND_EVENT            = 0x0040,       /*socket binded successfully*/
  NET_LISTEN_EVENT          = 0x0080,
  NET_BIND_FAIL_EVENT       = 0x0100,
  NET_SHUTDOWN_FAIL_EVENT   = 0x0200,  /* shut down failed*/
  NET_SHUTDOWN_SUCESS_EVENT = 0x0400,
  NET_OPT_SET_FAIL_EVENT    = 0x0800,
  NET_OPT_SET_SUCESS_EVENT  = 0x1000,
  NET_LISTEN_FAIL_EVENT     = 0x2000,
  NET_CONNECT_FAIL_EVENT    = 0x4000,
  NET_CREATE_FAIL_EVENT     = 0x8000,
  NET_NUM_EVENT
} NetEvenTypeT;

typedef struct
{
  kal_uint16 SinFamily;
  kal_uint16 SinPort;
  kal_uint32 Address;
  char   SizeZero[8];
} NetSockAddrT;

typedef struct
{
  kal_uint16 SinFamily;
  kal_uint16 SinPort;
  kal_uint32 Address[4];
  char   SizeZero[8];
} NetSockIPv6AddrT;


typedef enum
{
  SOCKET_NULL_STATE,
  SOCKET_OPENING_STATE,
  SOCKET_OPEN_STATE,
  SOCKET_CLOSING_STATE,
  SOCKET_WAITFOR_CLOSE_STATE,
  SOCKET_CLOSED_STATE
} SockStateT;

typedef enum
{
  SOCKET_OP_LISTEN     = 0x0001,
  SOCKET_OP_LINGER     = 0x0002,
  SOCKET_OP_KEEPALIVE  = 0x0004,
  SOCKET_OP_ACCEPTCONN = 0x0008,
  SOCKET_OP_NALGE      = 0x0010,
  SOCKET_OP_RCVSIZE   =  0x0020,
  SOCKET_OP_SNDSIZE  =  0x00040,
  All_SOCKET_OP
}SocketOptionT;

typedef enum
{
  SOCKET_SEND_NO_DELAY = 0x01,
  SOCKET_SEND_IDLE     = 0x02
}SocketSendTypeT;

typedef enum
{
  SOCK_SD_NONE = 0x00,
  SOCK_SD_RECEIVE = 0x01,
  SOCK_SD_SEND = 0x02,
  SOCK_SD_BOTH = 0x03
}SockSDStateT;

typedef enum
{
  SOCKET_FP_TOS =1,                      /* set IP type-of-service          */
  SOCKET_FP_TTL =2,                      /* set IP datagram time-to-live    */
  SOCKET_FP_FLAGS =3,                    /* set or clear binary option      */
  SOCKET_FP_RECVBUF =4,                  /* set receive buffer size         */
  SOCKET_FP_MAXSEG = 5,
  SOCKET_FP_MAXRXTSHIFT =6,              /* set maximum frame re-transmission */
  SOCKET_FP_KEEPALIVE=7
}SocketOpFlagT;

typedef enum
{
  NET_SUCCESS,   /* The operation was a success. */
  NET_EBADF,     /* Bad file number */
  NET_EFAULT,    /*  Bad address     */
  NET_EWOULDBLOCK,   /*    Operation would block */
  NET_EAFNOSUPPORT,  /*  Address family not supported by protocol. */
  NET_EPROTOTYPE,    /*  Protocol wrong type for socket */
  NET_ESOCKNOSUPPORT,/*  Socket type not supported. */
  NET_EPROTONOSUPPORT,/* Protocol not supported */
  NET_EMFILE,         /* Too many open files. */
  NET_EOPNOTSUPP,     /* Operation not supported on transport endpoint. */
  NET_EADDRINUSE,     /* Address already in use. */
  NET_EADDRREQ,       /* Destination address required */
  NET_EINPROGRESS,    /* Operation now in progress */
  NET_ESHUTDOWN,    /* Socket was closed */
  NET_EISCONN,         /* 	Transport endpoint is already connected. */
  NET_EIPADDRCHANGED,  /* Remote address changed. */
  NET_ENOTCONN,       	/* Transport endpoint is not connected. */
  NET_ECONNREFUSED,   	/* Connection refused. */
  NET_ETIMEDOUT,      	/* Connection timed out. */
  NET_ECONNRESET,     	/* Connection reset by peer. */
  NET_ECONNABORTED,   	/* Software caused connection abort. */
  NET_ENETDOWN,       	/* Network is down. */
  NET_EPIPE,          	/* Broken pipe. */
  NET_EMAPP,          	/* No mapping found. */
  NET_EBADAPP,        	/* RegId invalid. */
  NET_ESOCKEXIST,      	/* The socket doesn't exist. */
  NET_EINVAL,         	/* Invalid argument. */
  NET_EMSGSIZE,       	/* Message too long. */
  NET_EEOF,           	/* End of file reached. */
  NET_EHOSTNOTFOUND,  	/* The host wasn't found. */
  NET_ETRYAGAIN,      	/* Try again. */
  NET_ENORECOVERY,    	/* Can't recover from error. */
  NET_ENOADDRESS,     	/* No address given. */
  NET_SUCCESS_END,      /*Success and have no more data left to be sent to val*/
  NET_ENETEXIST
} NetResultT;

typedef enum
{
  NET_RLP_DEFAULT_SETTINGS,
  NET_RLP_CURRENT_SETTINGS,
  NET_RLP_NEGOTIATED_SETTINGS
} NetRlpSettingsTypeT;

typedef struct
{
	kal_uint8 FwdNakRounds;
	kal_uint8 FwdNaksPerRounds[7];
	kal_uint8 RevNakRounds;
	kal_uint8 RevNaksPerRounds[7];
} NetRlpSettingsT;

/*This data type is the PPP connection status.
 * NET_ISCONN_STATUS	            -	PPP connection is established and available.
 * NET_INPROGRESS_STATUS,   	  -	PPP connection in progress.
 * NET_NONET_STATUS,	            -	PPP connection disconnected.
 * NET_CLOSEINPROGRESS_STATUS 	  -	PPP connection is closing.
 */
typedef enum
{
  NET_ISCONN_STATUS,
  NET_INPROGRESS_STATUS,
  NET_NONET_STATUS,
  NET_CLOSEINPROGRESS_STATUS,
  NET_DORMINPROGRESS_STATUS,
  NET_INDORMANCY_STATUS,
  NET_WAKINGUP_STATUS,
  NET_SUSPEND_STATUS,
  NET_IDLE_STATUS,
  NET_DISABLED_STATUS,
  NET_UNAVAILABLE_STATUS,
  NET_RELEASED_STATUS,
  NET_RESET_STATUS
} NetStatusT;

typedef enum
{
  NET_EVT_SOCKET,
  NET_EVT_NET,
  NET_EVT_DNS_LOOKUP,
  NET_EVT_MAX
} ValNetEventIdT;

typedef struct
{
  kal_uint16 SockFd;
  kal_uint32 EventMask;
} NetSocketMsgT;


typedef struct
{
  kal_uint16 SockFd;
  kal_uint32 EventMask;
  RegIdT RegId;
} NetSocket2MsgT;

typedef struct
{
  RegIdT     RegId;
  NetStatusT Status;
} NetEventMsgT;

typedef struct
{
  char*        NameP;
  NetSockAddrT Addr;
} NetDnsLookupMsgT;

/*some test message body - hyang*/
typedef struct
{
  RegIdT regid;
} NetTestRegIdT;

typedef struct
{
  kal_int16 sockfd;
} NetTestSockFdT;

/*valnet call back prototype*/
typedef void (*ValNetEventFunc)( RegIdT         RegId,
                                 ValNetEventIdT EventId,
                                 void*          EventMsgP );


#define NET_SOCKUSABLE 0
#define NULL_REGID -1
#define UDP_MAX_PAYLOAD_LEN  1472
#define MAX_IP_DATAGRAM_LEN 8192
#define SOCKFD_BASE 100


typedef struct
{
  kal_uint32        evtExpected;
  kal_int16         sockfd;
  RegIdT        regid;
  kal_uint8         sap;
  NetDomainT    family;
  NetTypeT      type;
  NetProtocolT  protocol;
  kal_bool          bDataReady;
  kal_bool          bDataSendReady;
  kal_bool          bSapValid;
  kal_bool          bBinded;
  SockStateT    SockState;
  HlpAppAddrT   localAddr;
  HlpAppAddrT   destAddr;
  HlpAppAddrT   destIp6Addr[4];

  unsigned char bufRecvData[MAX_IP_DATAGRAM_LEN];
  int           lenRecvData;
  int           maxLenRecvData;
  int           lenBytesToBeRead;
  unsigned char bufSendData[MAX_IP_DATAGRAM_LEN];
  int           lenSendData;
  int           maxLenSendData;
  kal_uint16        socketOpt;
  kal_int16         sockListenfd;
  kal_bool          bAppUsed;
  kal_uint32        lingerTime;
  SockSDStateT  sdState;
#ifdef MTK_DEV_GPSONE_ON_LTE
  kal_int32               SocketHandle;
  gps_rpc_rat_mode_t  SocketRatMode;
#endif
} SockCtrlBlkT;

/* ETS Messages
 */
typedef  struct
{
  kal_uint8 result;
}   ValNetResultRspT;

typedef  struct
{
  kal_uint8 status;
}   ValNetStatusRspT;

typedef  struct
{
  ExeRspMsgT RspInfo;
  kal_int16      sockfd;
  kal_uint32     evtMask;
}   ValNetEventSelectMsgT;

typedef  struct
{
  ExeRspMsgT  RspInfo;
  kal_uint16      RegId;
  kal_uint8       domain;   /* NetDomainT   */
  kal_uint8       type;     /* NetTypeT     */
  kal_uint8       protocol; /* NetProtocolT */
}   ValNetSocketCreateMsgT;

typedef  struct
{
  kal_uint8  result;
  kal_uint16 sockfd;
}   ValNetSocketCreateRspT;

typedef  struct
{
  ExeRspMsgT RspInfo;
  kal_int16      sockfd;
  kal_uint16     SinFamily;
  kal_uint16     SinPort;
  kal_uint32     Address;
  char       SizeZero[8];
  kal_int16      namelen;
}   ValNetConnectMsgT;

typedef  struct
{
  ExeRspMsgT RspInfo;
  kal_int16      sockfd;
}   ValNetCloseMsgT;

typedef  struct
{
  ExeRspMsgT RspInfo;
  kal_int16      sockfd;
}   ValNetGetSockStatusMsgT;

typedef  struct
{
  SockStateT sockState;
}   ValNetGetSockStatusRspT;

typedef  struct
{
  ExeRspMsgT RspInfo;
  kal_int16      sockfd;
  kal_int32      nbytes;
  kal_uint8*     buffer;
}   ValNetRecvMsgT;

typedef  struct
{
  kal_uint8 result;
  kal_int16 numBytesRead;
}   ValNetRecvRspT;

typedef  struct
{
  ExeRspMsgT RspInfo;
  kal_int16      sockfd;
  kal_int32      nbytes;
  kal_uint8*     buffer;
}   ValNetSendMsgT;

typedef  struct
{
  kal_uint8 result;
  kal_int16 numBytesSend;
}   ValNetSendRspT;

typedef  struct
{
  ExeRspMsgT RspInfo;
  kal_int16      sockfd;
  kal_uint16     SinFamily;
  kal_uint16     SinPort;
  kal_uint32     Address;
  char       SizeZero[8];
  kal_int16      namelen;
}   ValNetBindMsgT;

typedef  struct
{
  ExeRspMsgT RspInfo;
  kal_int16      sockfd;
  kal_int16      backlog;
}   ValNetListenMsgT;

typedef  struct
{
  ExeRspMsgT RspInfo;
  kal_int16      sockfd;
  kal_uint16     SinFamily;
  kal_uint16     SinPort;
  kal_uint32     Address;
  char       SizeZero[8];
}   ValNetAcceptMsgT;

typedef  struct
{
  kal_uint8  result;
  kal_int16  addrlen;
  kal_int16  newsock;
}   ValNetAcceptRspT;

typedef  struct
{
  kal_int16  sockfd;
  int    nbytes;
  kal_uint8* buffer;
  kal_uint16 SinFamily;
  kal_uint16 SinPort;
  kal_uint32 Address;
  kal_uint8  SizeZero[8];
  int    tolen;
}   ValNetSendToMsgT;

typedef  struct
{
  kal_int16  sockfd;
  int    nbytes;
  kal_uint8* buffer;
  kal_uint16 SinFamily;
  kal_uint16 SinPort;
  kal_uint32 Address;
  kal_uint8  SizeZero[8];
  int    tolen;
}   ValNetRecvFromMsgT;

typedef  struct
{
  kal_uint16 RegId;
  char*  HostName;
  kal_uint32 IpAddrP;
}   ValNetGetHostByNameMsgT;

typedef  struct
{
  char* cp;
}   ValNetInetAddrMsgT;

typedef  struct
{
  int   LenP;
  char* AuthStrP;
}   ValNetGetPPPAuthParmsMsgT;

typedef  struct
{
  char* AuthStrP;
}   ValNetSetPPPAuthParmsMsgT;

typedef  struct
{
  kal_uint8 Length;
  char  DialStr[HLP_MAX_BWSR_DIG_LEN];
}   ValNetGetDialStrParmsRspMsgT;

typedef  struct
{
  ExeRspMsgT RspInfo;
  char DialStr[HLP_MAX_BWSR_DIG_LEN];
}   ValNetSetDialStrParmsMsgT;

typedef  struct
{
  NetResultT Result;
}   ValNetSetDialStrParmsRspMsgT;

typedef  struct
{
  kal_uint32 IpAddrPrimary;
  kal_uint32 IpAddrSecondary;
}   ValNetGetDNSServerIpAddrRspMsgT;

typedef  struct
{
  kal_uint32 IpAddrPrimary;
  kal_uint32 IpAddrSecondary;
}   ValNetSetDNSServerIpAddrMsgT;

typedef  struct
{
  kal_uint8  Type;
  kal_uint8  Code;
  kal_uint16 Checksum;
  kal_uint16 Identifier;
  kal_uint16 SequenceNumber;
}  IcmpPingMsgT;

typedef struct
{
    IcmpPingMsgT msg;
    kal_uint32 length;
    kal_uint32 count;
    kal_uint32 ticks;
    kal_bool   infinite;
    kal_timerid        hlp_ping_timer_id; 
    //ExeTimerT timerCallback;
    kal_bool   timerInUse;
    kal_uint32 startTimeInMs;
    kal_uint32 totalTxBytes;
    kal_uint32 totalRxBytes;
    ExeRspMsgT RspMsg;
}ValEtsNetPingStructT;

typedef  struct
{
  ExeRspMsgT RspMsg;
  kal_uint32 Length;
  kal_uint32 Interval;
  kal_int32 Times;
}   ValNetPingReqMsgT;

typedef  struct
{
  kal_uint32 totalTime;
  kal_uint32 ulBaud;
  kal_uint32 dlBaud;
}  ValNetPingRspMsgT;

typedef  struct
{
  NetStatusT  state;
}   ValHlpDataStateMsgT;

typedef struct
{
  kal_uint8          status; /*0-Succ, 1-Fail or released*/
  kal_uint32         LocalIPAddr;
  kal_uint32         RemoteIPAddr;
  kal_uint32         PriDNSAddr;
  kal_uint32         SecDNSAddr;
} ValPSConnRspT;

typedef enum
{
    VAL_PS_NO = 0,  /* Release PS from existing system*/
    VAL_PS_1X,      /* PS service is on 1X */
    VAL_PS_HRPD,    /* PS service is on HRPD */
    VAL_PS_EHRPD    /* PS service is on EHRPD */
} ValPsConnT;

typedef enum
{
   VAL_PS_CONN_FAIL_UNUSED = 0,
   VAL_PS_CONN_FAIL_PPP_AUTH_FAIL = 6,
   VAL_PS_CONN_FAIL_MIP_PPP_LCP_TMO,
   VAL_PS_CONN_FAIL_MIP_PPP_NCP_TMO,
   VAL_PS_CONN_FAIL_SIP_PPP_LCP_TMO,
   VAL_PS_CONN_FAIL_SIP_PPP_NCP_TMO,
   VAL_PS_CONN_FAIL_MIP_PPP_OPT_MISMATCH,
   VAL_PS_CONN_FAIL_SIP_PPP_OPT_MISMATCH,
   VAL_PS_CONN_FAIL_MIP_SOL_TMO,
   VAL_PS_CONN_FAIL_MIP_RRQ_TMO,
   VAL_PS_CONN_FAIL_MIP_RRP_ERR,
   VAL_PS_CONN_FAIL_MIP_LCP_FAIL,
   VAL_PS_CONN_FAIL_SIP_LCP_FAIL,
   VAL_PS_CONN_FAIL_MIP_NCP_FAIL,
   VAL_PS_CONN_FAIL_SIP_NCP_FAIL,
   VAL_PS_CONN_FAIL_PPP_A12_AUTH_FAIL,
   VAL_PS_CONN_FAIL_PPP_EAP_AKA_AUTH_FAIL,
   VAL_PS_CONN_FAIL_MIP_ADMIN_PROHIB_FAIL,
   VAL_PS_CONN_FAIL_MULTI_TCH_FAIL,
   VAL_PS_CONN_FAIL_PPP_A12_LCP_TMO
} ValPsConnErrT;

extern SockCtrlBlkT SockCtrlBlkTable[NET_MAX_SOCKS];

extern SockCtrlBlkT* GetAvailableSockCtrlBlk( void );
extern void          FreeSockCtrlBlk(SockCtrlBlkT* pSCB);
extern SockCtrlBlkT* GetSockCtrlBlkBySockfd( kal_int16 sockfd);
extern void          NetworkEventNotify(RegIdT RegId,NetStatusT NetStatus);
extern void          SocketEventNotify(kal_int16 SockFd, kal_uint32 EventMask);
extern kal_uint32        GetSocketEventMask( SockCtrlBlkT* pSCB,
                                         kal_uint32        evtExpected );
extern kal_bool          CanClosePPPSession( void );
extern SockCtrlBlkT *GetAcceptSockCtrlBlkfd(kal_int16 sockfd, kal_int16 *clinsockfd, kal_int8 *acceptBlkNum);
 extern kal_uint16 GetAvailableSockCtrlNum( void );

/* Message handler */
RegIdT ValNetRegister( ValNetEventFunc NetCallback );
void NetUnregister( RegIdT RegId );
void ValPppConnStatusMsg( void* MsgDataP );
#ifdef MTK_DEV_C2K_IRAT
void ValPppMruNotifyMsg(void *MsgDataP);
#endif
void ValSocketCreateStatusMsg( void* MsgDataP );
void ValSocketBindStatusMsg( void* MsgDataP );
void ValSocketConnStatusMsg( void* MsgDataP );
void ValSocketCloseStatusMsg( void* MsgDataP );
void ValTcpbDataRecvMsg( void* MsgDataP );
void ValSocketInactTmoMsg(void *MsgData);
void ValTcpbDataSendRspMsg( void* MsgDataP );
void ValUpbRecvDataMsg( void* MsgDataP );
void ValUdpbSentDataRspMsg( void* MsgDataP );
void ValSocketListenStatusMsg(void* MsgDataP);
void ValSocketOptStatusMsg(void *MsgDataP);
void ValSocketShutdownStatusMsg(void *MsgDataP);
void ValSocketLingerStatusMsg(void *MsgDataP);
kal_bool ValNetGetPppConnStatus(void);

#ifdef __cplusplus
extern "C" {
#endif
/*===========================================================================
FUNCTION ValNetInit()

DESCRIPTION

DEPENDENCIES
  None.

PARAMETERS:

RETURN VALUE
===========================================================================*/
void ValNetInit( void );

/***************************************************************************

  FUNCTION NAME: ValNetRegister

  DESCRIPTION:
    This function registers a callback for all network services related events.

  PARAMETERS:
    NetCallback - The callback function to be called for the notification of network
                  services events.

  RETURNED VALUES:

    The assigned registration ID of the subscriber.

*****************************************************************************/
RegIdT ValNetRegister( ValNetEventFunc NetCallback );

/***************************************************************************

  FUNCTION NAME: ValNetUnregister

  DESCRIPTION:
    This function unregisters the given client so that it won't receive additional
    network services related events.

  PARAMETERS:
    RegId - The assigned registration ID of the subscriber.

  RETURNED VALUES:
    void

*****************************************************************************/
void ValNetUnregister( RegIdT RegId );

/***************************************************************************

  FUNCTION NAME: NetPppOpen

  DESCRIPTION:
    This function opens a new PPP connection

  PARAMETERS:
    RegId - The assigned registration ID of the subscriber.

  RETURNED VALUES:
    A success or failure code from NetResultT

*****************************************************************************/
NetResultT ValNetPppOpen( RegIdT RegId );

/***************************************************************************

  FUNCTION NAME: ValNetPppClose

  DESCRIPTION:
    This function closes a PPP connection

  PARAMETERS:
    RegId - The assigned registration ID of the subscriber.

  RETURNED VALUES:
    A success or failure code from NetResultT.

*****************************************************************************/
NetResultT ValNetPppClose( RegIdT RegId );

/***************************************************************************

  FUNCTION NAME: ValNetPppDormantReq

  DESCRIPTION:
    This function request the PPP connection to enter dormancy state.

  PARAMETERS:
    RegId - The assigned registration ID of the subscriber.

  RETURNED VALUES:
    A success or failure code from NetResultT.

*****************************************************************************/
NetResultT ValNetPppDormantReq( RegIdT RegId );

/***************************************************************************

  FUNCTION NAME: ValNetGetPppStatus

  DESCRIPTION:
    This function get the PPP connection status.

  PARAMETERS:
    RegId - The assigned registration ID of the subscriber.

  RETURNED VALUES:


*****************************************************************************/
NetStatusT ValNetGetPppStatus( RegIdT RegId );

/***************************************************************************

  FUNCTION NAME: ValNetEventSelect

  DESCRIPTION:
    This function registers the client to receive the events as indicated by the event mask.

  PARAMETERS:
    SockFd    - The file decriptor ID of the socket.
    EventMask - The event mask of the events that have occurred.

  RETURNED VALUES:
    A success or failure code from NetResultT.

*****************************************************************************/
NetResultT ValNetEventSelect( kal_int16  sockfd,
                              kal_uint32 evtMask );

/***************************************************************************

  FUNCTION NAME: ValNetSocket

  DESCRIPTION:
    This function opens a socket of the specified protocol type

  PARAMETERS:
    RegId    - The assigned registration ID of the subscriber.
    Domain   - The protocol family to be used.
    Type     - Stream, datagram etc.
    Protocol - UDP, TCP, etc.
    SockFd   - [out] The new file descriptor for the socket.

  RETURNED VALUES:
    A success or failure code from NetResultT.

*****************************************************************************/
NetResultT ValNetSocket( RegIdT       RegId,
                         NetDomainT   af,
                         NetTypeT     type,
                         NetProtocolT protocol,
                         kal_int16*       SockFd );

/***************************************************************************

  FUNCTION NAME: ValNetConnect

  DESCRIPTION:
    This function makes a connection the given network node

  PARAMETERS:
    SockFd    - The file decriptor ID of the socket.
    ServAddrP - The address and port of the server.
    AddrLen   - The length of the server address structure.

  RETURNED VALUES:
    A success or failure code from NetResultT.

*****************************************************************************/
NetResultT ValNetConnect( kal_int16               sockfd,
                          const NetSockAddrT* name,
                          kal_int16               namelen );

/***************************************************************************

  FUNCTION NAME: ValNetClose

  DESCRIPTION:
    This function closes the given socket.

  PARAMETERS:
    SockFd	-	The file decriptor ID of the socket.

  RETURNED VALUES:
    A success or failure code from NetResultT.

*****************************************************************************/
NetResultT ValNetClose( kal_int16 sockfd );

/***************************************************************************

  FUNCTION NAME: NetGetSockStatus

  DESCRIPTION:

    This function get the status of  the given socket.

  PARAMETERS:

    SockFd	-	The file decriptor ID of the socket.

  RETURNED VALUES:

   .

*****************************************************************************/
SockStateT ValNetGetSockStatus( kal_int16 sockfd );

/***************************************************************************

  FUNCTION NAME: ValNetRecv

  DESCRIPTION:

    This function receives bytes from a socket into the given buffer

  PARAMETERS:

    sockfd        - The file decriptor ID of the socket.
    buffer        - The buffer where incoming data is copied to.
    nbytes        - The length of BufferP.
    NumBytesReadP - [out] The number of bytes copied into BufferP


  RETURNED VALUES:

    A success or failure code from NetResultT

*****************************************************************************/
NetResultT ValNetRecv( kal_int16  sockfd,
                       char*  buffer,
                       int    nbytes,
                       kal_int16* NumBytesReadP );

/***************************************************************************

  FUNCTION NAME: ValNetSend

  DESCRIPTION:

    This function sends bytes through the opened socket.

  PARAMETERS:

    sockfd        - The file decriptor ID of the socket.
    buffer        - The buffer where incoming data is copied to.
    nbytes        - The length of BufferP.
    NumBytesReadP - [out] The number of bytes copied into BufferP


  RETURNED VALUES:

    A success or failure code from NetResultT

*****************************************************************************/
NetResultT ValNetSend( kal_int16  sockfd,
                       char*  buffer,
                       int    nbytes,
                       kal_int16* NumBytesSendP );

/***************************************************************************

  FUNCTION NAME: ValNetBind

  DESCRIPTION:

    This function binds the given socket to a given network node

  PARAMETERS:

    sockfd   - The file decriptor ID of the socket.
    name     - The address and port of the server.
    namelen  - The length of the server address structure.

  RETURNED VALUES:

    A success or failure code from NetResultT

*****************************************************************************/
NetResultT ValNetBind( kal_int16               sockfd,
                       const NetSockAddrT* name,
                       kal_int16               namelen );

/***************************************************************************

  FUNCTION NAME: ValNetListen

  DESCRIPTION:
    This function registers the client for new connection events associated with the socket.

  PARAMETERS:
    sockfd  - The file decriptor ID of the socket.
    backlog - The maximum number of pending connections allowed.

  RETURN VALUE:
	A success or failure code from NetResultT.


*****************************************************************************/
NetResultT ValNetListen( kal_int16 sockfd,
                         kal_int16 backlog );

/***************************************************************************

  FUNCTION NAME: ValNetAccept

  DESCRIPTION:
    This function accepts a new connection from another network node.

  PARAMETERS:
    sockfd  - The file decriptor ID of the socket.
    addr    - The address and port of the server. This is an output parameter, so
              it doesn't have to be initialized.
    addrlen - The length of the server address structure. This is an output
              parameter, so it doesn't have to be initialized.
    newsock - Pointer to the new connetion socket when a new connection is
              sucessfully established. This is an output parameter, so it
              doesn't have to be initialized.

  RETURN VALUE:
	A success or failure code from NetResultT.

*****************************************************************************/
NetResultT ValNetAccept( kal_int16         sockfd,
                         NetSockAddrT* addr,
                         kal_int16*        addrlen,
                         kal_int16*        newsock );

/***************************************************************************

  FUNCTION NAME: ValNetSendTo

  DESCRIPTION:
    This function sends a datagram to the specified network node

  PARAMETERS:
    sockfd        - The file decriptor ID of the socket.
    buffer        - The buffer where outgoing data is copied from.
    nbytes        - The length of the data ready to be written from BufferP.
    toAddr        - The address the datagram should be sent to.
    tolen         - The length of the address in ToAddrP.
    NumBytesSendP - The number of bytes written to the socket. This is an output
                     parameter, so it doesn't have to be initialized.

  RETURN VALUE:
    A success or failure code from NetResultT.

*****************************************************************************/
NetResultT ValNetSendTo( kal_int16         sockfd,
                         char*         buffer,
                         int           nbytes,
                         NetSockAddrT* toAddr,
                         int           tolen,
                         kal_int16*        NumBytesSendP );

/***************************************************************************

  FUNCTION NAME: ValNetRecvFrom

  DESCRIPTION:
    This function receives a datagram from the specified network node.

  PARAMETERS:
    sockfd        - The file decriptor ID of the socket.
    buffer        - The buffer where incoming data is copied to.
    nbytes        - The length of the buffer in BufferP.
    from          - The address the datagram should be recieved from.
    fromlen       - point to the length of the receive socket address. This is an
                     output parameter, so it doesn't have to be initialized.
    NumBytesReadP - The number of bytes receiving from the socket. This is an
                     output parameter, so it doesn't have to be initialized.

  RETURN VALUE:
    A success or failure code from NetResultT.

*****************************************************************************/
NetResultT ValNetRecvFrom( int           sockfd,
                           char*         buffer,
                           int           nbytes,
                           NetSockAddrT* from,
                           int*          fromlen,
                           kal_int16*        NumBytesReadP );

/***************************************************************************

  FUNCTION NAME: ValNetGetHostByName

  DESCRIPTION
    This function converts a host name to an IP address.

  PARAMETERS
    RegId    - The assigned registration ID of the subscriber.
    HostName - The name of the host.
    IPAddrP  - The quad IP address number. This is an output parameter, so it
                doesn't have to be initialized.

  RETURN VALUE:
    A success or failure code from NetResultT.

*****************************************************************************/
NetResultT ValNetGetHostByName( RegIdT  RegId,
                                char*   HostName,
                                kal_uint32* IPAddrP );

/***************************************************************************

  FUNCTION NAME: ValNetInetAddr

  DESCRIPTION
    This function converts the Internet host address cp from numbers and
    dots notation into binary data in network byte order.

  PARAMETERS:
    cp - The address as a string in numbers and dots notation.

  RETURN VALUE:
    Host address converted to binary or -1 (0xFFFF) if the input string is invalid.

*****************************************************************************/
kal_uint32 ValNetInetAddr( char* cp );

/***************************************************************************

  FUNCTION NAME: NetHToNl

  DESCRIPTION:

    This function converts the unsigned integer HostLong from host byte order
    to network byte order

  PARAMETERS:

    HostLong	-	A host byte order number

  RETURNED VALUES:

    An unsigned long of net byte order

*****************************************************************************/
kal_uint32 NetHToNl (kal_uint32 hostlong);

/***************************************************************************

  FUNCTION NAME: NetHToNs

  DESCRIPTION:

    This function converts the unsigned short integer hostshort from host byte
    order to network byte order

  PARAMETERS:

    HostLong	-	A host byte order number

  RETURNED VALUES:

    An unsigned short of net byte order

*****************************************************************************/
kal_uint16 NetHToNs(kal_uint16 hostshort);

/***************************************************************************

  FUNCTION NAME: NetNToHl

  DESCRIPTION:

    This function converts the unsigned integer netlong from network byte order
    to host byte order.

  PARAMETERS:

    NetLong	-	A net byte order number

  RETURNED VALUES:

    An unsigned long of host byte order

*****************************************************************************/
kal_uint32 NetNToHl (kal_uint32 netlong);

/***************************************************************************

  FUNCTION NAME: NetNToHs

  DESCRIPTION:

    This function converts the unsigned short integer netshort from network byte
    order to host byte order

  PARAMETERS:

    NetShort	-	A net byte order number

  RETURNED VALUES:

    An unsigned short of host byte order

*****************************************************************************/
kal_uint16 NetNToHs (kal_uint16 netshort);

/***************************************************************************

  FUNCTION NAME: NetSetPppAuthParms

  DESCRIPTION:
    This function sets the PPP authentication parameters from the protocol stack.

  PARAMETERS:
    AuthStrP - The PPP authentication parameters as a concatentation of 2 NULL
                terminated strings "userid@domain.com\0password\0".

  RETURN VALUE:
    A success or failure code from NetResultT.

*****************************************************************************/
NetResultT ValNetSetPppAuthParms( char* AuthStrP );

/***************************************************************************

  FUNCTION NAME: NetGetDialStrParms

  DESCRIPTION:
    This function gets the dial number used while setup the PPP session.

  PARAMETERS:
    DialStrP - the dial number used.

  RETURN VALUE:
    A success or failure code from NetResultT.

*****************************************************************************/
NetResultT ValNetGetDialStrParms( char* DialStrP,
                                  int*  LenP );

/***************************************************************************

  FUNCTION NAME: NetSetDialStrParms

  DESCRIPTION:
    This function Sets the dial number used while setup the PPP session.

  PARAMETERS:
    DialStrP - the dial number used.

  RETURN VALUE:
    A success or failure code from NetResultT.

*****************************************************************************/
NetResultT ValNetSetDialStrParms( char* DialStrP );


/***************************************************************************

  FUNCTION NAME: ValNetSetDormToRelTimer

  DESCRIPTION:
    To set the time duration to disconnect packet data call in dormant mode.

  PARAMETERS:
    Duration	-duration bettween dormancy to release, uint: s.

  RETURNED VALUES:
    A success or failure code from NetResultT

*****************************************************************************/
NetResultT ValNetSetDormToRelTimer(kal_uint16 Duration);

/***************************************************************************

  FUNCTION NAME: NetSetRlpInactTmoReq

  DESCRIPTION:
    Tells the Browser and RLP to activate/deactivate its inactivity timer on
the
     specified channel.

  PARAMETERS:
    nInactTime - 0   : Disable Inactivity Monitor Feature.
                 Else: Enable Inactivity Monitoring for the specified number
of seconds.

  RETURN VALUE:
    A success or failure code from NetResultT.

*****************************************************************************/
NetResultT ValNetSetRlpInactTmoReq( kal_uint16 nInactTime );

/***************************************************************************

  FUNCTION NAME: NetGetRlpSettings

  DESCRIPTION:
    This function gets the NAK related RLP settings from the protocol stack.

  PARAMETERS:
    RlpSettingsType - The current, default, or negotiated RLP settings.
    SettingsP       - The RLP settings. This is an output parameter, so it doesn't
                       have to be initialized.

  RETURN VALUE:
    A success or failure code from NetResultT.

*****************************************************************************/
NetResultT ValNetGetRlpSetting( NetRlpSettingsTypeT RlpSettingsType,
                                NetRlpSettingsT*    SettingsP );

/***************************************************************************

  FUNCTION NAME: NetSetRlpSettings

  DESCRIPTION:
    This function sets the NAK related RLP settings from the protocol stack.

  PARAMETERS:
    RlpSettingsType - The current, default, or negotiated RLP settings.
    SettingsP       - The RLP settings.

  RETURN VALUE:
    A success or failure code from NetResultT.

*****************************************************************************/
NetResultT ValValNetSetRlpSetting( NetRlpSettingsTypeT RlpSettingsType,
                                   NetRlpSettingsT*    SettingsP );

/***************************************************************************

  FUNCTION NAME: NetGetIpAddress

  DESCRIPTION:
    This function gets the IP address of the MS if any.

  PARAMETERS:
    IpAddrP - The IP address of the MS. This is an output parameter, so it doesn't
               have to be initialized.

  RETURN VALUE:
    A success or failure code from NetResultT.

*****************************************************************************/
NetResultT ValNetGetIpAddress( kal_uint32* IpAddrP );

NetResultT ValNetGetRemoteIpAddress( kal_uint32* IpAddrP );

/***************************************************************************

  FUNCTION NAME: ValNetGetDNSServerIpAddr

  DESCRIPTION:
    This function get the current DNS servers IP address.

  PARAMETERS:
    IpAddrP - Pointer to the DNS server's IP address. This is an output parameter,
               so it doesn't have to be initialized.

  RETURN VALUE:
    A success or failure code from NetResultT.

*****************************************************************************/
NetResultT ValNetGetDNSServerIpAddr( kal_uint32* IpAddrP );

/***************************************************************************

  FUNCTION NAME: ValNetGetPeerName

  DESCRIPTION:
    This function gets the peer name of the network node the socket it is associated with.

  PARAMETERS:
	SockFd   - The file decriptor ID of the socket.
    AddrP    - The address of the other end of the socket connection. This
  	            is an output parameter, so it doesn't have to be initialized.
    AddrLenP - The size of the address returned. This is an output parameter, so
                it doesn't have to be initialized.

  RETURN VALUE:
    A success or failure code from NetResultT.

*****************************************************************************/
NetResultT ValNetGetPeerName( kal_int16         SockFd,
                              NetSockAddrT* AddrP,
                              kal_int16*        AddrLenP );

/***************************************************************************

  FUNCTION NAME: ValNetSetDNSServerIpAddr

  DESCRIPTION:
    This function Sets the current DNS servers IP address.

  PARAMETERS:
    IpAddrP - Pointer to the DNS server's IP address. This is an input parameter.

  RETURN VALUE:
    Void

*****************************************************************************/
void ValNetSetDNSServerIpAddr( kal_uint32 IpAddrPri, kal_uint32 IpAddrSec );

/*===========================================================================
FUNCTION ValNetShutdown()

DESCRIPTION
   Shut down socket descriptor.

   SHUT_RD: No more receives can be issued on socket; process can still send on socket;
                  socket receive buffer discarded; any further data received is discarded by TCP;
                  no effect on socket send buffer;
  SHUT_WR: No more sends can be issued on socket; process can still receive on socket;
                  contents of socket send buffer sent to other end, followed by normal
                  TCP connection termintation (FIN; no effect on socket recive buffer;

DEPENDENCIES
  None.

PARAMETERS:
  sockfd:  socket ID
  shut dow: SHUT_RD SHUT_WR SHUT_WRRD

RETURN VALUE:
  NetResultT
===========================================================================*/

NetResultT ValNetShutdown(kal_int16 sockfd, kal_int8 how );

/*===========================================================================
FUNCTION ValNetSetNoDelay()

DESCRIPTION
   Use nagle algorthm

DEPENDENCIES
  None.

PARAMETERS:
  sockfd:  socket ID
  shut dow: KAL_TRUE: no use nagle algorithm; KAL_FALSE: use nagle algorithm

RETURN VALUE:
  NetResultT
===========================================================================*/

NetResultT ValNetSetNoDelay(kal_int16 sockfd, kal_bool bNodaly);

/*===========================================================================
FUNCTION ValNetGetNoDelay()

DESCRIPTION
   get if to use nagle algorthm

DEPENDENCIES
  None.

PARAMETERS:
  sockfd:  socket ID

RETURN VALUE:
  kal_bool
===========================================================================*/

NetResultT ValNetGetNoDelay(kal_int16 sockfd, kal_bool* delay);

/*===========================================================================
FUNCTION ValNetSetKeepAlive()

DESCRIPTION
   Set keep Alive

DEPENDENCIES
  None.

PARAMETERS:
  sockfd:  socket ID
  keepAlive: if keep alive;

RETURN VALUE:
  NONE
===========================================================================*/

NetResultT ValNetSetKeepAlive(kal_int16 sockfd, kal_bool keepAlive);

/*===========================================================================
FUNCTION ValNetGetKeepAlive()

DESCRIPTION
   get if to keep Alive

DEPENDENCIES
  None.

PARAMETERS:
  sockfd:  socket ID

RETURN VALUE:
  keep alive or not.
===========================================================================*/

NetResultT ValNetGetKeepAlive(kal_int16 sockfd, kal_bool* keepAlive);

/*===========================================================================
FUNCTION ValNetSetLinger()

DESCRIPTION
   set if to linger

DEPENDENCIES
  None.

PARAMETERS:
  sockfd:  socket ID
  lingerOnOff: linger on or off
  lingerTime: time to linger

RETURN VALUE:
  NetResultT
===========================================================================*/

NetResultT ValNetSetLinger(kal_int16 sockfd, kal_bool lingerOnOff, kal_uint32 lingerTime);

/*===========================================================================
FUNCTION ValNetGetLinger()

DESCRIPTION
   Get if to linger

DEPENDENCIES
  None.

PARAMETERS:
  sockfd:  socket ID
  lingerOnOff: linger on or off
  lingerTime: time to linger

RETURN VALUE:
  NONE
===========================================================================*/
NetResultT ValNetGetLinger(kal_int16 sockfd, kal_bool *lingerOnOff, kal_uint32 *lingerTime);

/*===========================================================================
FUNCTION ValNetSetSendBufSize()

DESCRIPTION
   set send buffer size

DEPENDENCIES
  None.

PARAMETERS:
  sockfd:  socket ID
  size: buffer's size

RETURN VALUE:
  int
===========================================================================*/

NetResultT ValNetSetSendBufSize(kal_int16 sockfd, int size );

/*===========================================================================
FUNCTION NetGetSendBufSize()

DESCRIPTION
   get send buffer size

DEPENDENCIES
  None.

PARAMETERS:
  sockfd:  socket ID

RETURN VALUE:
  int
===========================================================================*/

int ValNetGetSendBufSize(kal_int16 sockfd);

/*===========================================================================
FUNCTION ValNetSetRecvBufSize()

DESCRIPTION
   Set receive buffer size

DEPENDENCIES
  None.

PARAMETERS:
  sockfd:  socket ID
  size: buffer size

RETURN VALUE:
  NetResultT
===========================================================================*/

NetResultT ValNetSetRecvBufSize(kal_int16 sockfd, int size);

/*===========================================================================
FUNCTION ValNetGetRecvBufSize()

DESCRIPTION
   Get receive buffer size

DEPENDENCIES
  None.

PARAMETERS:
  sockfd:  socket ID

RETURN VALUE:
  int
===========================================================================*/

int ValNetGetRecvBufSize(kal_int16 sockfd);

  /*===========================================================================
FUNCTION ValNetGetSockName()

DESCRIPTION

DEPENDENCIES
  None.

PARAMETERS:

RETURN VALUE
===========================================================================*/
NetResultT ValNetGetSockName(kal_int16 sockfd, kal_uint32 *IpAddrP, kal_uint16 *port);

/*===========================================================================
FUNCTION ValNetGetConnectionType()

DESCRIPTION:  Gets network type when in data service.

DEPENDENCIES
  None.

PARAMETERS:

RETURN VALUE: ConnStateT
===========================================================================*/
ConnStateT ValNetGetConnectionType( void );



#ifdef __cplusplus
}
#endif

/***************************************************************************

  FUNCTION NAME: ValNetProcessEvent

  DESCRIPTION:

    This function processes the event received and calls the registered call back

  PARAMETERS:

    NetEventId   - The id of the val net event
    NetEventMsgP - the event message body

  RETURNED VALUES:
	<NONE>

*****************************************************************************/
void ValNetProcessEvent( ValNetEventIdT NetEventId,
                         void*          NetEventMsgP );
#ifdef MTK_CBP //MTK_DEV_C2K_IRAT
/*****************************************************************************

  FUNCTION NAME: ValApi_Set_PS_Connection_Req2

  DESCRIPTION:
    This is used to request DO chip to start PS connection on the specified CDMA service.

  PARAMETERS: None.

  RETURNED VALUES:  None.

*****************************************************************************/
void ValApi_Set_PS_Connection_Req2(ValPsConnT PsType, char *User, char* Password);
#endif

/*****************************************************************************

  FUNCTION NAME: ValApi_Set_PS_Connection_Req

  DESCRIPTION:
    This is used to request DO chip to start PS connection on the specified CDMA service.

  PARAMETERS: None.

  RETURNED VALUES:  None.

*****************************************************************************/
void ValApi_Set_PS_Connection_Req(ValPsConnT PsType);

/*****************************************************************************

  FUNCTION NAME: ValApi_Set_PS_Connection_Rsp

  DESCRIPTION:
    This is used to send the rsult of command ValApi_Set_PS_Connection_Req.

  PARAMETERS: PSConnRsp - pionter to data block of Irat_SetPSConnRspT
              SysPri - priority of HRPD/EHRPD system. 0xff means not available.

  RETURNED VALUES:  None.

*****************************************************************************/
void ValApi_Set_PS_Connection_Rsp(ValPSConnRspT *PSConnRsp);

/*****************************************************************************

  FUNCTION NAME: ValApi_PS_Conn_MIP_Status_Rsp

  DESCRIPTION:
    This is used to send the result of MIP registration or deregistration.

  PARAMETERS: rrpErr - MIP RRP error code
              reason - Failure reason

  RETURNED VALUES:  None.

*****************************************************************************/
void ValApi_PS_Conn_MIP_Status_Rsp(kal_uint8 rrpErr, ValPsConnErrT reason);

#ifdef MTK_CBP
/***************************************************************************

  FUNCTION NAME: ValNetSendPingReq

  DESCRIPTION:
    This function send ping command.

  PARAMETERS:
    void

  RETURN VALUE:
    Void

*****************************************************************************/
void ValNetSendPingReq(void);
void ValNetSendPingReqExt(ValNetPingReqMsgT* MsgP);
void ValNetPingExpiryMsg(void* MsgDataP);
void ValStopPingTimer(void);
void ValIncTotalTxByteCount(kal_uint32 len);
void ValIncTotalRxByteCount(kal_uint32 len);
#endif /*MTK_CBP*/

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /*__VAL_NET_H__*/

/*****************************************************************************
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


/**Log information: \main\Trophy\Trophy_zjiang_href22289\1 2013-10-25 07:16:24 GMT zjiang
** HREF#22289.ÐÞ¸Ä+CMIPÃüÁî£¬Ìí¼Ó+CCDATAºÍ+VCDMAIPÃüÁî.**/
/**Log information: \main\Trophy\1 2013-10-25 07:19:11 GMT cshen
** href#22289**/

