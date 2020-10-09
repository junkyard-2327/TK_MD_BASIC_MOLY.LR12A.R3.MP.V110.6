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
* Copyright (c) 2009-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
/*************************************************************************
 *
 * File Name:       do_ims.h
 * Module:         inc
 * Description:      definitions of  IMS
 *
 * Restrictions:
 *
 * Dependencies:
 *
 *************************************************************************
 *************************************************************************

 ************************************************************************/
#ifndef _DO_IMS_H
#define _DO_IMS_H

#include "do_Qos.h"
#include "hlpapi.h"
#include "iratapi.h"

#ifndef MAX_APN_NUM
#define MAX_APN_NUM         20
#endif

#ifndef MAX_APN_NI_LEN
#define MAX_APN_NI_LEN      100
#endif

#ifndef MTK_DEV_C2K_IRAT
#ifndef MAX_PDN_NUM
#define MAX_PDN_NUM        5
#endif
#ifndef MAX_APN_LEN
#define MAX_APN_LEN        100
#endif
#endif /* MTK_DEV_C2K_IRAT */
#define MAX_ADDR_STR_LEN   72
#define MAX_SUPPORTED_ADDR_NUM   4
extern   kal_uint8  HlpMainPdnID;

typedef enum
{
  IMS_IDLE,
  IMS_WFR_PPP_CONN,
  IMS_WFR_PDN_CONN,
  IMS_WFR_IPADDR_CONFIG,
  IMS_WFR_QOS_NEGO,
  IMS_PPP_CONNECTED,
  IMS_WFR_PDN_REL,
  IMS_WFR_SIP_REGISTRATION,
  IMS_WFR_QOS_REL,
  IMS_WFR_CALL_SETUP,
  IMS_CALL_CONNECTED,
  IMS_WFR_CALL_RELEASE,
  IMS_WFR_SIP_DEREGISTRATION,
  IMS_WFR_SESSION_MODIFY,
  IMS_PDN_CONNECTED
}IMSStateEnumT;

typedef enum
{
  NullReq,
  DialUpReq,
  SIPRegReq,
  AppConnReq,
  NetwkConnReq,
  NetwkInitQoSReq,
  NetwkRelReq,
  AppRelReq,
  /*DailUpRelInd,*/
  PdnRelInd,
  SessionSetupInd,
  SessionRelInd,
  SIPDeregInd,
  QoSRelInd
}IMSEventTypeT;

typedef enum
{
  OPT_SUCC,
  OPT_FAIL,
  OPT_DUPLICATE,
  OPT_PDN_RENEGO
}AppOptStatusT;

typedef enum
{
  UM_PPP_REL,
  RM_PPP_REL,
  SIP_DEREGISTER

}AppReleaseIndT;

typedef  enum
{
   APP_DIAL_UP,
   APP_SIP,
   APP_VOIP,
   APP_LTE,
   MAX_SUPPORTED_APPLICATION
}AppTypeEnumT;

typedef enum
{
   PDN_SUCCESS,
   PDN_FAIL,
   PDN_REJECT,
   PDN_TIMEOUT
}PdnResultEnumT;

/*this flag is used to set to include additional param in PCO, 1-P-CSCF addr req, the other values are reserved*/
typedef enum
{
  NULL_FLAG,
  PCSCF_ADDR_REQ,
}PDPTypeEnumT;


typedef struct
{
  AppTypeEnumT     Application;
  kal_uint8            FlowNum;
  HlpQoSFlowInfoT  FlowInfo[MAX_SUPPORTED_IPFLOW];
}IMSApplicationResourceT;

typedef struct
{
   kal_uint8          PdnId;
   IPAddrTypeT    AddrType;
   kal_uint8          AppNum;
   IMSApplicationResourceT  AppRes[MAX_SUPPORTED_APPLICATION];
}IMSResourceInfoT;

typedef struct
{
  kal_uint8   num;
  IMSResourceInfoT  ResourceInfo[MAX_PDN_NUM];
}IMSResourceInfoList;


typedef struct
{
  IMSResourceInfoList  ResourceList;
}ImsAppNetwkResourceMsgT;

typedef struct
{
  kal_uint8    PdnId;
  kal_uint8    PdnType;
  kal_uint8    AttachType;
  kal_uint32   PDN_Address[5]; /*the last byte is IPv4 Addr*/
  kal_uint32   IP4DefRouterAddr;
  PDPTypeEnumT   PDPFlag;
  kal_uint8    APNLen;
  kal_uint8    APN[MAX_APN_LEN];
}ImsAppNetwkConnReqMsgT;

typedef struct
{
  AppTypeEnumT   AppType;
  kal_uint8          DialAddr[MAX_ADDR_STR_LEN];
  kal_uint8          FlowNum;
  kal_uint16        PortNum[MAX_SUPPORTED_IPFLOW];
}ImsAppConnReqMsgT;

typedef  struct
{
  kal_uint8         PdnId;
  AppTypeEnumT  AppType;
}ImsAppConnRelMsgT;

typedef struct
{
  kal_uint8          SIPServerAddr[MAX_ADDR_STR_LEN];
}ImsAppSIPRegistrationReqMsgT;

typedef struct
{
  kal_uint8 Result;
  kal_uint32  LocalIPAddr;
  kal_uint32  RemoteIPAddr;
}ImsCamPppIndT;

typedef struct
{
  kal_uint8             PdnId;
  PdnResultEnumT    Result;
}ImsPppPdnConnRspMsgT;

typedef struct
{
  kal_uint8  PdnId;
  kal_uint8  RecInd;
}ImsPppPdnRelIndMsgT;

typedef struct
{
  kal_uint8   result;
  kal_uint32 IP6GlobalAddress[4];
  kal_uint32 IP6LocalAddress[4];
  kal_uint32 IP6RouterAddress[4];
  kal_uint8   PdnId;
}IMSIpv6ConfgRspMsgT;

typedef struct
{
  AppOptStatusT  Status;
  AppTypeEnumT   AppType;
  IPAddrTypeT    AddrType;
  kal_uint32         LocalIPAddr[5];/*the last kal_uint32 is IPv4*/
  kal_uint32         RemoteIPAddr;
  DataConnErrCodeT           ErrCode;
}AppImsSetupRspMsgT;

typedef struct
{
  AppOptStatusT  Status;
  AppTypeEnumT   AppType;
}AppImsReleaseRspMsgT;

typedef struct
{
  kal_uint8  AppType;
  kal_uint8  Reason;
}AppImsReleaseIndMsgT;

typedef struct
{
  kal_uint8          PdnId;
  kal_uint8          BearerId;/*use 0xf0|PdnId to indicate default bearer*/
  AppOptStatusT  Status;
  IPAddrTypeT    AddrType;
  kal_uint32         LocalIPAddr[5];/*the last kal_uint32 is Ipv4 addr*/
  kal_uint8          Pcscf6Num;
  kal_uint32         PCSCF6Addr[MAX_SUPPORTED_ADDR_NUM][4];
  kal_uint8          DNS6Num;
  kal_uint32         DNS6Addr[MAX_SUPPORTED_ADDR_NUM][4];
  kal_uint8          Pcscf4Num;
  kal_uint32         PCSCF4Addr[MAX_SUPPORTED_ADDR_NUM];
  kal_uint8          DNS4Num;
  kal_uint32         DNS4Addr[MAX_SUPPORTED_ADDR_NUM];

  kal_uint32         RouteAddr;
  kal_uint8          IP6Interfaceid[8];
  kal_uint8          SelBearerCtrlMode;
  DataConnErrCodeT  ErrCode;
  kal_uint8          ResContainerLen; /*length of Operation reserved PCO container FF00H, 0 means not available*/
  kal_uint8          ResContainer[255]; /*content of operation reserved PCO container FF00H*/
#ifdef SPRINT_EXTENSIONS
  kal_uint32      DNSPriAddr;
  kal_uint32      DNSSecAddr;
#endif
#ifdef MTK_CBP //MTK_DEV_C2K_IRAT
  kal_uint16         IPv4MTU;
#endif /* MTK_DEV_C2K_IRAT */
}AppImsNetwkConnRspMsgT;

typedef struct
{
  AppOptStatusT  Status;
}AppImsNetwkRelRspMsgT;

typedef struct
{
  kal_uint8          PdnId;
  IPAddrTypeT    AddrType;
  kal_uint8          APNLen;
  kal_uint8          APN[MAX_APN_LEN];
  kal_uint8          Num;
  kal_uint16         ProfileID[MAX_SUPPORTED_IPFLOW];
  QoMPktFilterContentT   Tft[MAX_SUPPORTED_IPFLOW];
}AppImsBearerReqMsgT;

typedef enum
{
  TYPE_LOCAL_ADDR,
  TYPE_GLOBAL_ADDR
}HlpImsIPv6AddrTypeT;

typedef struct
{
  kal_uint8  PdnId;
  kal_uint8  Type;
  kal_uint8  Ipv6Addr[16];
}HlpImsSetIPv6AddrMsgT;

typedef enum
{
  PDN_AUTH_NULL,
  PDN_AUTH_PAP,
  PDN_AUTH_CHAP,
}HlpImsPdnAuthTypeT;

#ifdef MTK_CBP //MTK_DEV_C2K_IRAT
typedef PACKED_PREFIX struct {
  kal_uint8    PdnId;
  kal_uint8    PdnType;
  kal_uint8    AttachType;
  kal_uint32   PDN_Address[5]; /*the last kal_uint32 is IPv4 Addr*/
  kal_uint32   IP4DefRouterAddr;
  PDPTypeEnumT   PDPFlag;
  kal_uint8    APNLen;
  kal_uint8    APN[MAX_APN_LEN];
  kal_uint8    AuthType;
  kal_uint8    UserId[HLP_MAX_USRID_LEN+1];
  kal_uint8    pwdLen;
  kal_uint8    PassWord[HLP_MAX_PSWD_LEN];
  kal_uint8    ModuleName[HLP_MAX_USRID_LEN+1];
} PACKED_POSTFIX HlpNetConnReqT;

typedef  struct {
  kal_bool  NeedResetConn; /* Flag to indicate if we have to locally reset the data connection without communicating with the network. */
}  HlpCssNetRelT;

typedef struct {
  kal_uint32 Cause; /* Cause to trigger Network Release Request */
} HlpValNetRelT, HlpValNetwkRelRspMsgT;

typedef PACKED_PREFIX struct
{
  kal_uint8          PdnId;
  IPAddrTypeT    AddrType;
  kal_uint8          APNLen;
  kal_uint8          APN[MAX_APN_LEN];
  kal_uint8          Num;
  kal_uint16         ProfileID[MAX_SUPPORTED_IPFLOW];
  QoMPktFilterContentT   Tft[MAX_SUPPORTED_IPFLOW];
} PACKED_POSTFIX HlpBearerSetupReqT;

typedef struct
{
  kal_uint8   PdnId;
  kal_uint8   Bearer_Id;
}HlpBearerDisconnReqT;
#endif /* MTK_DEV_C2K_IRAT */

typedef struct
{
   kal_uint8  ApnIdx;
   kal_uint8  ApnLength;
   kal_uint8  Apn[MAX_APN_LEN];
   kal_uint16 InactivityTime; /*unit: minute*/
}EApnSyncT;

typedef struct
{
  kal_bool  ClearAllApnInfo;
  EApnSyncT EApnSynUserDef;
}HlpEapnsyncDefineReqMsgT;

typedef struct
{
   kal_uint8  Mcc1;
   kal_uint8  Mcc2;
   kal_uint8  Mcc3;
   kal_uint8  Mnc1;
   kal_uint8  Mnc2;
   kal_uint8  Mnc3;
}OpPcoPlmnIdT;

typedef struct
{
   kal_bool      ReqV4MTU;
   kal_uint32    OpPcoId;
   OpPcoPlmnIdT  OpPcoPlmnId;
}VzwPcoCfgT;

#define HLP_VZW_PCO_MCCMNC_TO_SEND_LEN 3

typedef  struct
{
    kal_bool       MtuReq;
    kal_uint16     PcoCode;
    kal_uint8      PcoMccMnc[HLP_VZW_PCO_MCCMNC_TO_SEND_LEN];
} HlpVzwSpecPco;

typedef enum
{
   InitialAttach  = 1,
   HandOverAttach = 3
}EHRPDPdnAttachTypeT;

typedef struct
{
   IPAddrTypeT   	  AddrType;
   kal_uint32         LocalIPAddr[5];/*the last uint32 is Ipv4 addr*/
   kal_uint8          Pcscf6Num;
   kal_uint32         PCSCF6Addr[MAX_SUPPORTED_ADDR_NUM][4];
   kal_uint8          DNS6Num;
   kal_uint32         DNS6Addr[MAX_SUPPORTED_ADDR_NUM][4];
   kal_uint8          Pcscf4Num;
   kal_uint32         PCSCF4Addr[MAX_SUPPORTED_ADDR_NUM];
   kal_uint8          DNS4Num;
   kal_uint32         DNS4Addr[MAX_SUPPORTED_ADDR_NUM];
   kal_uint32         RouteAddr;
   kal_uint8          SelBearerCtrlMode;
   kal_uint8          ResContainerLen; /*length of Operation reserved PCO container FF00H, 0 means not available*/
   kal_uint8          ResContainer[255]; /*content of operation reserved PCO container FF00H*/
   kal_uint32         PriDNSAddr;
   kal_uint32         SecDNSAddr;
   kal_uint16         IPv4MTU;
}NwAppliedParmEHRPDT;

typedef struct
{
   kal_uint8              PdnId;
   IPAddrTypeT            PdnType;
   EHRPDPdnAttachTypeT    AttachType;
   kal_uint32             PDN_Address[5]; /*the last uint32 is IPv4 Addr*/
   kal_uint32             IP4DefRouterAddr;
   PDPTypeEnumT           PDPFlag;
   kal_uint8              APNLen;
   kal_uint8              APN[MAX_APN_LEN];
   HlpImsPdnAuthTypeT     AuthType;
   kal_uint8              UserId[HLP_MAX_USRID_LEN+1];
   kal_uint8              pwdLen;
   kal_uint8              PassWord[HLP_MAX_PSWD_LEN];
   VzwPcoCfgT             PCO4Vzw;
   HlpPppRouteTypeE       RouteType;
} HlpEhrpdBearerConnReqMsgT;

typedef struct
{
   kal_uint8				PdnId;
   DataConnErrCodeT         ErrCode;
   NwAppliedParmEHRPDT  	Parm;
} HlpEhrpdBearerConnCnfMsgT;

typedef  enum {
   NORMAL_RELEASE,
   LOCAL_RESET,
}DataDiscTypeT;

typedef struct {
   kal_uint8         PdnId;
   DataDiscTypeT     DiscType;
}HlpEhrpdBearerDisconReqMsgT;

typedef struct
{
   kal_uint8         PdnId;
   DataDiscTypeT     DiscType;
}HlpEhrpdBearerDisconCnfMsgT;

typedef struct
{
   kal_uint8          PdnId;
   DataConnErrCodeT   ErrCode;
   DataDiscCauseT     Cause;
}HlpEhrpdBearerDisconIndMsgT;

typedef struct
{
   kal_uint8                      PdnId;
   NwAppliedParmEHRPDT            Parm;
}HlpEhrpdBearerModifyIndMsgT;


#ifdef CBP7_EHRPD
kal_bool HlpImsGeteHRPDAttr(void);
kal_uint8 HlpImsGetPdnIdByAppType(AppTypeEnumT AppType);
void HlpImsClearAppInfo(void);
#endif
/***********************************************************************
                                 Structures and Definitions
***********************************************************************/



#endif
/**Log information: \main\CBP80\cbp80_yzhang_scbp10127\1 2012-08-03 06:45:35 GMT yzhang
** Sprint EHRPD requirement:IPCP,AUTH,DNS Server Addr in PCO of VSNCP**/
/**Log information: \main\Trophy\Trophy_xding_href22331\1 2013-12-10 07:17:40 GMT xding
** HREF#22331, 合并MMC相关功能到Trophy baseline上**/
/**Log information: \main\Trophy\1 2013-12-10 08:33:07 GMT jzwang
** href#22331:Merge MMC latest implementation from Qilian branch.**/

