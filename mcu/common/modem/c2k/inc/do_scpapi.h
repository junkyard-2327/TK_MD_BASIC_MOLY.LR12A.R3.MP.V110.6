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
* Copyright (c) 2007-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/

#ifndef _DO_SCPAPI_H_
#define _DO_SCPAPI_H_
/*****************************************************************************
* 
* FILE NAME   : do_scpapi.h 
*
* DESCRIPTION :
*
*     Contains the interface typdefs for session configuration process.
*
*
*****************************************************************************/

/*------------------------------------------------------------------------
* global definitons
*------------------------------------------------------------------------*/
/*------------------------ GCP Interface ---------------------------------*/
typedef kal_bool (*AssembleConfigReqRecT)(kal_uint8 *attrDataP, kal_uint16 *attrDataLen, 
                                      kal_uint8 *reqTransId, kal_uint8 reqSeq);
typedef kal_bool (*HandleConfigReqRecT)(kal_uint8 *reqAttrDataP, kal_uint16 reqAttrDataLen,
                                    kal_uint8 *rspAttrDataP, kal_uint16 *rspAttrDataLen);
typedef void (*HandleConfigRspRecT)(kal_uint8 *rspAttrDataP, kal_uint16 rspAttrDataLen,
                                    kal_uint8 reqSeq);

/*---------------------- Personality Interface -------------------------*/
/* personality data max size */
#ifndef MTK_DEV_C2K_IRAT
#define MAX_PERSONALITY_DATA_SIZE  2300        
#else
#define MAX_PERSONALITY_DATA_SIZE  3000
#endif

typedef kal_bool (*GetPersonalityDataT)(kal_uint8 *DataBufP, kal_uint16 *DataLen, kal_bool inConfig);
typedef kal_bool (*SetPersonalityDataT)(kal_uint8 *DataBufP, kal_uint16 DataLen, kal_bool inConfig);

/*----------------------------- DSCP Interface --------------------------*/
typedef void (*SetupConfigInterfaceT)(kal_uint16 subtype);
typedef void (*SendReconfiguredIndT)(void);
typedef void (*SendCommittedIndT)(void);

typedef kal_uint8 (*NeedConfigT)(kal_uint16 *subtype);
typedef void (*CreateInConfigInstanceT)(kal_bool resetToDefault);

/* Commit hander: shall put the instance to INACTIVE state 
                  instead of OPEN per spc */
typedef void (*CommitHandlerT)(void);

/* Attribute Configuration status */
enum {
       NO_CONFIGURABLE_ATTR  = 0,
       NOT_REQUEST_CONFIG_ATTR,
       REQUEST_CONFIG_ATTR
};

#define INVALID_APP_SUBTYPE 0xffff

/* ----------------------- Generic Attribute Operation interface ---------------------*/
/* this interface is designed to set/get information data(identified by 
   protocol self-defined CmdId)in a protocol instance specified. Current
   uses are defined as following:
   1. Stream protocol use:
     CmdId = 0: Get negotiated application subtypes. Return 0 if no 
                application was re-negotiated. Otherwise return the number
                of the negotiated applications.

   2. Virtual Stream protocol use:
     CmdId = 0: Get negotiated application subtypes. Return 0 if no 
                application was re-negotiated.Otherwise return the number
                of the negotiated applications.

     CmdId = 1: Return number of re-negotiated applications. Return 0 if no 
                application was re-negotiated.

   3. Session Configuration Protocols use:
     CmdId = 0: Set Stream protocol entity negotiated application subtype 
	            into ProtocolType attribute.
   */

typedef kal_uint8 (*ConfigCmdHandlerT)(kal_uint8 CmdId, kal_uint16 *bufP, 
                                   kal_uint16 bufLen, kal_bool inConfig);
/* Command ID */
enum {
       SCPCMD0  = 0,
       SCPCMD1,
       SCPCMD2,
       SCPCMD3
};

/* ----------------------------INTERFACE --------------------------------*/
typedef struct {
  /* scp framework interface */
  NeedConfigT              NeedConfig;
  CreateInConfigInstanceT  CreateInConfigInstance;
  CommitHandlerT           CommitHandler;

  /* gcp interface */
  AssembleConfigReqRecT AssembleConfigReqRec;
  HandleConfigRspRecT   HandleConfigRspRec;
  HandleConfigReqRecT   HandleConfigReqRec;

  /* personality interface */
  GetPersonalityDataT  GetPersonalityData;
  SetPersonalityDataT  SetPersonalityData;

  /* generic cmd interface */
  ConfigCmdHandlerT    ConfigCmdHandler;

} SCPConfigInterfaceT;


typedef struct {
  
  SetupConfigInterfaceT SetupConfigInterface;
  SendReconfiguredIndT  SendReconfiguredInd;
  SendCommittedIndT     SendCommittedInd;

} SCPProtocolInterfaceT;

/*---------------------- OTA message process helper -------------------*/
/* generic OTA message header */
/* note: if there is multi-byte type field in the header, adjusting Endian
         is necessary.
 */
typedef PACKED_PREFIX struct {

          kal_uint8 MsgId;
          kal_uint8 TransId;
          kal_uint8 MsgBody[1];

} PACKED_POSTFIX  OTAMsgHeaderT;


/* OTA message sender helper */
#define ConstructOTAMessage(messageId, MsgPtrLocPara, DsaMsgP, OtaMsgP) \
        /* Allocate Mem for message */ \
        MsgPtrLocPara = (dsar_rev_msg_struct*) construct_local_para( \
                         (kal_uint32)(sizeof(dsar_rev_msg_struct)), TD_RESET); \
        DsaMsgP = &(MsgPtrLocPara->msg); \
        /* Allocate Mem for OTA message. Here use CPBUF_REV for large data block possible */ \
        DsaMsgP->ptrBuffer = CpBufGet( CPBUF_SIZE_REV, CPBUF_REV ); \
        if(DsaMsgP->ptrBuffer != NULL){ \
        OtaMsgP = (OTAMsgHeaderT *) DsaMsgP->ptrBuffer->dataPtr; \
        /* Fill message header */ \
        OtaMsgP->MsgId = messageId

/* Chan = AccessChannel or TrafficChannel or AccessTrafficChannel */
#define TransmitOTAMessage(MsgPtrLocPara, DsaMsgP, Chan, reli, confirm, \
                           InConfig, protType, transactionId, pri) \
        /* Fill DSA message fields */ \
        DsaMsgP->allowedChan = Chan; \
        DsaMsgP->reliable    = reli; \
        DsaMsgP->confirmReq  = confirm; \
        DsaMsgP->InConfigurationProtocol = InConfig; \
        DsaMsgP->protocolType = protType; \
        DsaMsgP->transId  = transactionId; \
        DsaMsgP->priority = pri; \
        /* Send to DSA */ \
        msg_send5(MOD_EVSLC, MOD_EVRCP, EVRCP_EVSLC_SAP, MSG_ID_DSAR_REV_MSG, \
                  (local_para_struct*)MsgPtrLocPara); \
        } else {free_local_para((local_para_struct*)MsgPtrLocPara);}

/* Octet-aligned message field encoder and decoder */
void PutFieldOctets(kal_uint8 **DataPtr, kal_uint8 *Data, kal_uint8 Size);
void GetFieldOctets(kal_uint8 **DataPtr, kal_uint8 *Data, kal_uint8 Size);

/* Configuration special interfaces */
/* Interface to STR */
kal_uint8 SCPGetSupportedAppSubtypes(kal_uint16 *appSubtypes);
kal_uint16 SCPGetProtocolSubType(kal_uint8 ProtocolType, kal_bool InCfg);
kal_uint16 ScpGetCurrentSessionConfigToken(void);
void DScpHandleANConfigurationCompleteMsg(void *MsgP, kal_bool callFromDsa);
void DScpHandleANSoftConfigurationCompleteMsg(void *MsgP, kal_bool callFromDsa);
void DScpSetAttriUpdateReqHandlingFlag(kal_bool bHandling);
kal_bool DScpGetAttriUpdateReqHandlingFlag(void);
#endif /* _DO_SCPAPI_H_ */

