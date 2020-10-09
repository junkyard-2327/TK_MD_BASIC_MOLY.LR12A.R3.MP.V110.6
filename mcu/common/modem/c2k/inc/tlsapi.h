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
* Copyright (c) 2002-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
/*****************************************************************************
* 
* FILE NAME   : tlsapi.h
*
* DESCRIPTION : API definition for TLS task.
*
* HISTORY     :
*****************************************************************************/
#ifndef _TLSAPI_H_
#define _TLSAPI_H_

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "do_msgdefs.h"
#include "syscommon.h"
/*----------------------------------------------------------------------------
 Global Defines and Macros
----------------------------------------------------------------------------*/
#define TLS_PRIORITY_STRING_LEN 256
#define TLS_MAX_SPY_LEN         164

/*----------------------------------------------------------------------------
 Mailbox IDs
----------------------------------------------------------------------------*/
#define TLS_MAILBOX_CMD EXE_MAILBOX_1_ID

/*----------------------------------------------------------------------------
     Command Message IDs, for TLS task, for TLS_MAILBOX_CMD, EXE_MAILBOX_1_ID
     The messages IDs for components shall also be put in here.     
----------------------------------------------------------------------------*/
typedef enum /*_Message_ID_define*/
{
   TLS_TEST_ANON_MSG = TLS_CMD_MSGID_START,
   TLS_TRANSPORT_CONNECT_RSP_MSG,
   TLS_HANDSHAKE_MSG,
   TLS_TIMER_EXPIRED_MSG,
   TLS_HANDSHAKE_FINISH_MSG,
   TLS_RECORD_RECV_MSG,
   TLS_BYE_MSG,
   TLS_TEST_X509_MSG,
   TLS_TEST_OPENPGP_MSG,

   TLS_VAL_CONN_REQ,
   TLS_VAL_SEND_REQ,
   TLS_VAL_CLOSE_REQ,


   TLS_CMD_MSGID_LAST
} TlsMsgIdT;

typedef enum /*_Trace_ID_define*/
{
   TLS_TRACE_PEER_CLOSED_TLS_CONNECTION,
   TLS_TRACE_RECV_RECORD_ERROR,
   TLS_TRACE_HANDSHAKE_ERROR,
   TLS_TRACE_HANDSHAKE_IN_PROGRESS,
   TLS_TRACE_HANDSHAKE_COMPLETE,

   TLS_TRACE_LAST
} TlsGeneralTraceIdT;

typedef PACKED_PREFIX struct
{
   kal_uint8 Priorities[TLS_PRIORITY_STRING_LEN];
} PACKED_POSTFIX  TlsTestMsgT;

typedef struct {
   void *session;
} TlsByeMsgT;

typedef struct {
   void *session;
} TlsHandshakeMsgT;

typedef struct {
   void *session;
} TlsHandshakeFinishMsgT;

typedef struct {
   void *session;
} TlsRecordRecvMsgT;

typedef PACKED_PREFIX struct{
   kal_uint16           TimerID;
} PACKED_POSTFIX  TlsTimerExpiredMsgT;



/* The UE shall only support Alternative Client Authentication based security.   */
typedef struct {
	kal_uint32 addressType;    /* 0: IPV4, 1: IPv6, 2: both */
	kal_uint32 address[5];       /* [0]: IPV4 address, [1]-[4] IPV6 address */
	kal_uint16 locadPort;
	kal_uint16 remotePort;
	kal_uint16 certType;
	kal_uint16 certLength;
	kal_uint8  certBuf[1];
}TlsOpenReqMsgT;


typedef struct {
	kal_uint32 len;    /* length of data to be sent */
	kal_uint8 * buf;       /* buffer of data */
}TlsSendMsgT;

typedef struct
{
  kal_uint16 len;
  kal_uint8 *buf;
}ValTlsSendRspT;

/*****************************************************************************
* End of File
*****************************************************************************/
#endif


