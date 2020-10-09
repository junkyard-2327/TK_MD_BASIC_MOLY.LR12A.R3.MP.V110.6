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
#ifndef  _DO_QOS_H_
#define  _DO_QOS_H_
/*****************************************************************************
* 
* FILE NAME   :   do_qos.h
*
* DESCRIPTION :   This file contains public QOS definitions
*
* HISTORY     :
*     See Log at end of file
*
*****************************************************************************/

/*----------------------------------------------------------------------------
* Include Files
----------------------------------------------------------------------------*/
#include "sysdefs.h"
#include "slc_nvram.h"
/*----------------------------------------------------------------------------
Defines And Macros
----------------------------------------------------------------------------*/
#define MAX_SUPPORTED_IPFLOW             2
#define MAX_SUPPORTED_QOS_BLOB_NUM 16
#define MAX_SUPPORTED_RESERVATION_NUM      15
#define MAX_CLIENT_NUM         6
#define MAX_TFT_NUM              12
#define DEFAULT_PPP_LABEL        0xff
#define DEFAULT_PPPFREE_LABEL    0xfe

typedef enum
{
   SPARE_TFT,
   CREATE_NEW_TFT,
   DELETE_TFT,
   ADD_PKTFILTER_TO_TFT,
   REPLACE_PKTFILTER,
   DELETE_PKTFILTER,
   QOS_CHECK,
   INITIAL_FLOW_REQ = 0x80,/*HSGW to UE*/
   QOS_CHECK_CONFIRM,
   HSGW_DEL_PKTFILTER,
   HSGW_REPLACE_PKTFILTER,
   UE_DEL_IDENTIFIED_PKTFILTER
   
}TftOperationCodeT;

typedef enum
{
  FLOW_BI,
  FLOW_REV,
  FLOW_FWD
}RlpFlowDirection;

typedef enum
{
  FLOW_PPPBESTEFORT,
  FLOW_PPPFREE,/*PPP Free Operation*/
  FLOW_SIP,
  FLOW_RTP_AUDIO_RS1, /*profileID=0x100*/
  FLOW_RTP_VIDEO_32K, /*profileID=0x301*/
  FLOW_RTP_AUDIO_RS2, /*profileID=0x101*/
  FLOW_RTP_VIDEO_48K, /*profileID=0x303*/
  FLOW_RTP_VIDEO_64K, /*profileID=0x305*/
  INVALID_FLOWTYPE  
}QoSFlowTypeT;

typedef enum
{
  ProtoNull,
  ProtoHDLC,
  ProtoIPv4,
  ProtoIPv6,
  ProtoROHC,
  ProtoIPv4andIPv6
}FlowProtoTypeT;

typedef enum
{
  QOS_OP_SUCCESS,
  QOS_OP_REJECT,
  QOS_OP_TIMEOUT,
  QOS_OP_FAIL
}QoSOpResultT;


typedef  PACKED_PREFIX struct
{
   kal_uint8  ReservationLabel;
   kal_uint8  Priority;
   kal_uint8  QoSSetNum;
   kal_uint8  QosAttrSetId[MAX_SUPPORTED_QOS_BLOB_NUM];/*7 bits,should not be zero*/
/*   kal_uint8  Verbose;
   kal_uint8  RlpNum;
   kal_uint8  MacFlowId;*/
   QoSFlowTypeT          FlowType;
} PACKED_POSTFIX QosSubBlobT;

typedef  PACKED_PREFIX struct
{
   kal_bool    bCurSupported;
   kal_uint16  FlowProfileID;
/*   kal_uint8   Verbose;
   kal_uint8   TrafficClass;
   kal_uint16  PeakRate;
   kal_uint16  BucketSize;
   kal_uint16  TokenRate;
   kal_uint8   MaxLatency;
   kal_uint8   MaxIPPacketLossRate;
   kal_uint8   PacketSize;
   kal_uint8   DelayVarSensitive;*/
} PACKED_POSTFIX QosAttributeT;

typedef  PACKED_PREFIX struct
{
  kal_uint8 Num;
  QosAttributeT  QosAttribute[MAX_SUPPORTED_QOS_BLOB_NUM];
} PACKED_POSTFIX QosAttrProfileT;

typedef  PACKED_PREFIX struct
{
  kal_bool    bIpV4;
  kal_uint8   PrecedenceIndex;/*evaluation precedence index*/
  /*kal_uint32  SrcAddress[4]; 
  kal_uint32  SrcAddrMask[4];
  kal_uint16  DstPortRange[2];
  kal_uint16  SrcPortRange[2];*/
  kal_uint16  SrcPortNum;/*For Forward flow, it's DstPortNum*/
  kal_uint8   ProNumOrNHdr;
  kal_uint32  Spi;/*ipsec security parameter index*/
  kal_uint8   TrafficClass; /*for ipv4, it's tos*/
  kal_uint8   TrafficMask;
  kal_uint32  FlowLabel;/*valid for IPv6 only*/
} PACKED_POSTFIX QoMPktFilterContentT;

typedef  PACKED_PREFIX struct
{
  kal_bool                  bUsed;
  QosSubBlobT           QosBlob;
/*  ProtoTypeT     ProtoType;
  kal_uint16         PortNum;
  PayLoadTypeT   PayloadType;
  FlowProtoTypeT L2P;*//*higher Layer Protocol,0 NULL,1 Octet-based HDLC-like framing
                       2 Internet Protocol version4, 3 IP version 6, 4 RoHC, 5 IPv4 and IPv6*/
  QoMPktFilterContentT  PktFilter;
} PACKED_POSTFIX QosSubScriberProfileT;

typedef PACKED_PREFIX struct
{
  kal_uint8   num;
  QosSubScriberProfileT   SubScribProfile[MAX_SUPPORTED_RESERVATION_NUM];
} PACKED_POSTFIX QosSubScriberTabelT;


typedef PACKED_PREFIX struct
{
   QosAttrProfileT             ATProfile;
   QosSubScriberTabelT    RevSubTable;
   QosSubScriberTabelT    FwdSubTable;
} PACKED_POSTFIX QoSProfileT;


typedef struct
{
  kal_uint8 ReservationLabel[MAX_RESERVATION_LABEL];
  kal_uint8 DosAllowed[MAX_RESERVATION_LABEL];
  kal_uint8 ReservationCount;
 /* FlowProtoTypeT  FlowProtocol;
  kal_uint8 ResvState[MAX_RESERVATION_LABEL];
  kal_uint8 RlpState;
  kal_uint8 HighLayerProtocol;*/
}RlpFlowInfoT;

typedef  struct
{
  kal_uint8   ResvLabel;
  QoMPktFilterContentT  Content;
}QoMPktFilterT;

typedef  struct
{
  kal_uint8          Direction;
  kal_uint8          PktFilterNum;
  QoMPktFilterT  FilterList[MAX_CLIENT_NUM];
}QoMTFTInfoT;

typedef struct
{
   QoSFlowTypeT         FlowType;
   kal_uint8                  Priority;
   kal_uint8                  ProfileNum;
   kal_uint16                ProfileID[4];  
   QoMPktFilterContentT  PktFilter;
}HlpQoSFlowInfoT;

typedef struct
{
  QoSOpResultT  result;
}HlpQOMOpFlowRspMsgT;

typedef struct
{
  kal_uint8 Label;
  kal_uint8 Direction;
}HlpQOMOpFlowRelIndMsgT;

typedef struct
{
  kal_uint8 Num;
  kal_uint8 Label[MAX_CLIENT_NUM];
}HlpQOMFlowIndMsgT;


typedef void (*MsgDepatchT)(kal_uint8* pData, kal_uint16 size, kal_uint8 PdnId);
/****************************************************************************/
void   QOMQosTableInit(void);
kal_bool   QOMRlpUpdateFwdQosTable(kal_uint8 ResvLabel, kal_uint16 len, kal_uint8* pProfile);
kal_bool   QOMRlpUpdateRevQosTable(kal_uint8 ResvLabel, kal_uint16 len, kal_uint8* pProfile);

void   QOMRlpUpdateQoSProfile(SupportedQosProfileT* pProfile);
kal_uint8 QoMGetRevRlpNumByLabel(kal_uint8 ResvLabel);
kal_uint8 QoMGetFwdRlpNumByLabel(kal_uint8 ResvLabel);
kal_uint8 QoMGetFwdLabelByRlpFlow(kal_uint8 nRlpFlow);
kal_uint8 QoMGetRevLabelPriority(kal_uint8 ResvLabel);
void  QOMRlpReservationOnRsp(QoSOpResultT Result);
void  QOMRlpQoSNegoFail(void);
void  QOMRlpFwdQosRelease(kal_uint8 Label);
void  QOMRlpRevQosRelease(kal_uint8 Label);
void QOMSetRevLabelRlpNum(kal_uint8 Label, kal_uint8 RlpNum);
void QOMSetFwdLabelRlpNum(kal_uint8 Label, kal_uint8 RlpNum);

kal_bool QOMSetQoSAttributeSet(kal_uint8 Direction,QosAttrProfileT* pProfile);
kal_bool QOMSetQoSProfile(QosAttrProfileT* pProfile);
kal_bool QOMSetSubscribQoSProfile(kal_uint8 Direction,QosSubScriberProfileT* pSubProfile);
kal_bool QOMGetNegQoSProfile(kal_uint8 Label, kal_uint8 Direction, QosSubBlobT* pProfile);
kal_bool HlpQOMFlowRequest(kal_uint8 FlowType, kal_uint8 Direction,kal_uint8* pLabel);
#if 0
/* under construction !*/
#endif
kal_bool HlpQOMReleaseQoS(kal_uint8* pLabel, kal_uint8* pDirection, kal_uint8 Num, kal_uint8 TftOpCode);
void HlpQOMFlowDeactivate(kal_uint8 num,kal_uint8 *pLabel, kal_uint8 *pDirection);
kal_bool QOMSetQoSTFT(QoMTFTInfoT* pTft);

void  QOMWriteDataToFile(void);
void QOMGetSubQosProfile(QoSProfileT* pQoSData);

void QOMEncReservationQoSRequestAttr(kal_uint16* bitPos,kal_uint8* pData);
void QOMClearSubscribQoSProfile(void);
MsgDepatchT QOMDepatchRecvdPkt(kal_uint16 DstPort);
kal_bool QOMCheckFwdTft(kal_uint16 DstPortNum);
void QOMCloseUdpConnection(void);
void QOMActivate(kal_bool flag);
QoMPktFilterContentT*  QOMGetTftByLabel(kal_uint8 Label);

#ifdef CBP7_EHRPD
void  HlpQOMSetRevFlowPath(kal_uint8 RlpFlowNum, kal_uint8 PathType);
kal_uint8 HlpQOMGetRevFlowPath(kal_uint8 RlpFlowNum);
void  HlpQOMSetFwdFlowPath(kal_uint8 RlpFlowNum, kal_uint8 PathType);
kal_uint8 HlpQOMGetFwdFlowPath(kal_uint8 RlpFlowNum);
void HlpQoMInitSubQoSTableWithPdnTable(void);

#endif

/*****************************************************************************
* End of File
*****************************************************************************/
#endif



