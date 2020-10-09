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
#ifndef VALDBMAPI_H
#define VALDBMAPI_H
/*************************************************************************************************
* 
* FILE NAME   : valdbmapi.h
*
* DESCRIPTION : This file contains the declarations, definitions 
*               and data structures used to interface to the 
*               VAL for the DBM API.
*
*
* HISTORY     :
*     See Log at end of file
*
**************************************************************************************************/
#include "sysdefs.h"
#include "pswapi.h"
#include "cssapi.h"
#include "uimapi.h"
#include "do_clcapi.h"
#include "hlpapi.h"
#include "sysapi.h"

#include "valapi.h"

#define VAL_DBM_MAX_REG_TASK 2

#define DUMMY_REGID_COPY_DATA        0xFF /* Reg Id used in Set/Get when data has to be copied into the message buffer */ 
#define DUMMY_REGID_USE_DATAPTR      0xFE /* Reg Id used in Set/Get when valid data pointer is supplied (i.e. data does not need to be copied in message buffer) */ 

/* Messages sent between VAL and tasks managing parameters     */
/* that can be requested through VAL                           */
/* Request from VAL ---> PSW, or CSS, or HLP, or CLC, etc...                */
typedef  struct
{
	ExeRspMsgT  RspInfo;         /* Response routing information */
	RegIdT      RegId;           /* RegId of the requester      */ 
	kal_uint8 	ParmId;
	kal_uint8 	opType;
	kal_uint32 	length;
	kal_uint8* 	dataPtr;
#ifdef MTK_PLT_ON_PC_UT
	union {
	Css1xBsrTimerDuration_APIStruct 		bsr1xTimerDuration;
	Css1xAvoidanceTimerDuration_APIStruct	avoidance1xTimerDuration;
	CssDOBsrTimerDuration_APIStruct			bsrDOTimerDuration;
	Css1xManualAvoidSid_APIStruct			manual1xAvoidSid;
	CssSetMruChannel_APIStruct				mruChannel;
	CssSetChannleLockInfo_APIStruct			channleLockInfo;
	CssTimerDuration_APIStruct				timerDuration;
	HlpAkaPassword_APIStruct                akaPsd;
	HlpAkaProfileData_APIStruct             akaProfileData;
	} data;
#endif
}   ValGenericSetParmMsgT;

typedef  struct
{
   ExeRspMsgT  RspInfo;         /*Response routing information */
   RegIdT      RegId;           /* RegId of the requester      */ 
   kal_uint8       ParmId;
   kal_uint8       opType;
   kal_uint32      length;
   kal_bool        allocBuffer;     /* If true, the data will be within the response, otherwise that will be written at address pointed to by dataPtr */
   kal_uint8*      dataPtr;
#ifdef MTK_PLT_ON_PC_UT
   union {
   Css1xBsrTimerDuration_APIStruct		   bsr1xTimerDuration;
   Css1xAvoidanceTimerDuration_APIStruct   avoidance1xTimerDuration;
   CssDOBsrTimerDuration_APIStruct		   bsrDOTimerDuration;
   Css1xManualAvoidSid_APIStruct		   manual1xAvoidSid;
   CssGetMruChannel_APIStruct			   mruChannel;
   } data;
#endif 
}   ValGenericGetParmMsgT;

/* Response from PSW, CSS, HLP, CLC, etc...  ---> VAL */
typedef  struct
{
	ExeRspMsgT  RspInfo;         /* Response routing information */
	RegIdT      RegId;           /* RegId of the requester (echo from the request message) */ 
	kal_uint8       ParmId;
	kal_uint8       result;
	kal_uint32      length;
	kal_uint8*      dataPtr;
#ifdef MTK_PLT_ON_PC_UT
	union {
	Css1xBsrTimerDuration_APIStruct 		bsr1xTimerDuration;
	Css1xAvoidanceTimerDuration_APIStruct	avoidance1xTimerDuration;
	CssDOBsrTimerDuration_APIStruct			bsrDOTimerDuration;
	Css1xManualAvoidSid_APIStruct			manual1xAvoidSid;
	CssGetMruChannel_APIStruct				mruChannel;
	cssChannleLockInfo						channleLockInfo;
	CssTimerDuration_APIStruct				timerDuration;
	} data;
#endif 
}   ValGenericGetParmRspMsgT;

typedef  struct
{
   ExeRspMsgT  RspInfo;         /* Response routing information */
   RegIdT      RegId;           /* RegId of the requester (echo from the request message) */ 
   kal_uint8       ParmId;
   kal_uint8       result;
}   ValGenericSetParmRspMsgT;


/* Messages sent between VAL and other tasks requesting parameters */
/* for example between VAL and ETS                                 */
/* To VAL                                                          */
typedef  struct
{
    ExeRspMsgT rspInfo;
    kal_uint8      OperationId;
    kal_uint8      OperationType;
    kal_uint8      data;
}   ValDbmApiSetParmMsgT;

typedef  struct
{
    ExeRspMsgT rspInfo;
    kal_uint8      OperationId;
    kal_uint8      OperationType;
    kal_uint8      data;
}   ValDbmApiGetParmMsgT;

/* From VAL                                                        */
typedef  struct
{
   kal_uint8       ParmId;
   kal_uint8       result;
}   ValDbmApiSetParmRspMsgT;

typedef  struct
{
   kal_uint8      ParmId;
   kal_uint8      result;
   kal_uint32     length;
   kal_uint8      data;
}   ValDbmApiGetParmRspMsgT,  ValDbmEtsGetParmRspMsgT;

typedef  struct
{
   kal_uint8      ParmId;
   kal_uint8      result;
   kal_uint8      data;
}   ValDbmEtsGetParmNoLengthRspMsgT;

typedef enum
{
    VAL_DBM_GET_HPSD_SEG_MSG,
    VAL_PSW_EVT_GET_MS_PARM_RSP,
    VAL_PSW_EVT_SET_MS_PARM_RSP,
    VAL_HL_EVT_GET_MS_PARM_RSP,
    VAL_HL_EVT_SET_MS_PARM_RSP,
    VAL_CLC_EVT_GET_DO_PARM_RSP,
    VAL_CLC_EVT_SET_DO_PARM_RSP,
    VAL_UI_EVT_SET_PARM_RSP,
    VAL_CLC_EVT_SET_DO_PARM_NORSP,
    VAL_UICC_EVT_SET_PARM_RSP,
    VAL_UICC_EVT_GET_PARM_RSP,
    VAL_CSS_EVT_GET_PARM_RSP,
    VAL_CSS_EVT_SET_PARM_RSP,
    VAL_DBM_EVENT_END_LIST
} ValDbmEventIdT;


/*===========================================================================
   SYS Set and Get Parm Defines
===========================================================================*/
typedef enum 
{
   SYS_PARM_SET_BAND_CLASS,
   SYS_PARM_GET_BAND_CLASS,
   SYS_PARM_SET_SUB_CLASS,
   SYS_PARM_GET_SUB_CLASS,
   SYS_PARM_OPERATION_ID_END_LIST
} SysParmOperationId;

typedef enum 
{
   SYS_PARM_MIN_VALUE,
   SYS_PARM_MAX_VALUE,
   SYS_PARM_DEFAULT_VALUE,
   SYS_PARM_CUSTOM_VALUE,
   SYS_PARM_OP_TYPE_LIST_END
} SysParmOperationType;

typedef enum 
{
   SYS_PARM_OPERATION_SUCCESS,
   SYS_PARM_OPERATION_FAIL_READ_NOT_ALLOWED,
   SYS_PARM_OPERATION_FAIL_WRITE_NOT_ALLOWED,
   SYS_PARM_OPERATION_FAIL_VALUE_OUT_OF_RANGE,
   SYS_PARM_OPERATION_GENERAL_FAILURE,
   SYS_PARM_OPERATION_FAIL_OP_TYPE_NOT_SUPPORTED,
   SYS_PARM_OPERATION_NOT_SUPPORTED_BAND_CLASS,
   SYS_PARM_OPERATION_NOT_SUPPORTED_SUB_CLASS,
   SYS_PARM_OPERATION_RESULT_END_LIST
} SysParmAccessResultCode;

typedef  struct
{
    ExeRspMsgT rspInfo;
    SysParmOperationId OperationId;
    SysParmOperationType OperationType;
    kal_uint8   data;
}   ValDbmSysSetParmETSMsgT;

typedef  struct
{
    ExeRspMsgT rspInfo;
    SysParmOperationId OperationId;
    SysParmOperationType OperationType;
    kal_uint8   *data;
}   ValDbmSysGetParmETSMsgT;

typedef  struct
{
   SysParmAccessResultCode result;
}   ValDbmSysSetBandClassParmRspMsgT;

typedef  struct
{
   kal_uint8 BandClass;
   kal_uint8 Supported;
}   SysSetBandClassParmT;

typedef  struct
{
   SysParmAccessResultCode result;
}   ValDbmSysSetSubClassParmRspMsgT;

typedef  struct
{
   kal_uint8 BandClass;
   kal_uint8 SubClass;
   kal_uint8 Status;
}   SysSetSubClassParmT;

typedef  struct
{
   kal_uint8  BandClass;
}   ValDbmSysGetBandClassParmT;

typedef  struct
{
   kal_uint8  BandClass;
   kal_uint8  Supported;
}   ValBandClassRecordT;

typedef  struct
{
   kal_uint8   NumberRecords;
   ValBandClassRecordT Record[1];
}   ValDbmSysGetBandClassParmRspMsgT;

typedef  struct
{
   kal_uint8  BandClass;
}   ValDbmSysGetSubClassParmT;


#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/*===========================================================================

FUNCTION      ValDbmInit()

DESCRIPTION   Initialize the Dbm Val Module

PARAMETERS    None

RETURN VALUE  None

===========================================================================*/
void ValDbmInit( void );

/*===========================================================================

FUNCTION:     ValDbmProcessEvent
              
DESCRIPTION:  This function processes the event received and calls the 
              registered call back.
  
PARAMETERS:   ValLbsEventIdT EventId, void *EventMsgP

RETURN VALUE: None

===========================================================================*/
void ValDbmProcessEvent( ValDbmEventIdT EventId, void* EventMsgP );

/***************************************************************************

FUNCTION      ValDbmRegister

DESCRIPTION   This function registers a callback for all Dbm related events.

PARAMETERS    Callback - The callback function to be called for the notification of LBS 
              services events.
    
RETURN VALUE  The assigned registration ID of the subscriber.

*****************************************************************************/
RegIdT ValDbmRegister( ValEventFunc Callback );

/***************************************************************************

FUNCTION      ValDbmUnregister

DESCRIPTION   This function unregisters the given client so that it won't receive additional
              Dbm services related events.

PARAMETERS    RegId - The assigned registration ID of the subscriber.
  
RETURN VALUE  None 

*****************************************************************************/
void ValLbsUnregister( RegIdT RegId );


/*****************************************************************************
 *     PSW SET/GET PARAMETERS API                                            *
 *****************************************************************************/
/*----------------------------------------------------------------------------
  FUNCTION NAME:   ValDbmSetPswParameter
  DESCRIPTION:     Process a request to set a parameter maintained by PSW.
  PARAMETERS:      RegIdT: Identifier of registered application requesting service
                   ExeRspMsgT*: routing info for the response
                   PswParmOperationalId: Parameter that is being requested
                   void*:  Memory allocated for PSW to retrieve contents
                   kal_uint32: length of valid data in dataPtr
------------------------------------------------------------------------------*/
void ValDbmSetPswParameter(RegIdT RegId, ExeRspMsgT* pRspInfo, PswParmOperationId parm_op_id, 
                      PswParmOperationType opType,void* dataPtr, kal_uint32 length);
/*----------------------------------------------------------------------------
  FUNCTION NAME:   ValDbmSetPswParm
  DESCRIPTION:     Deprecated version of ValDbmSetPswParameter
------------------------------------------------------------------------------*/
void ValDbmSetPswParm(RegIdT RegId, PswParmOperationId parm_op_id, 
                      PswParmOperationType opType,void* dataPtr, kal_uint32* length);

void ValDbmSetPswParmMsg(void *MsgDataP, kal_uint32 MsgSize);
                      
/*----------------------------------------------------------------------------
  FUNCTION NAME:   ValDbmGetPswParameter
  DESCRIPTION:     Process a request to get a parameter maintained by PSW.
  PARAMETERS:      RegIdT: Identifier of registered application requesting service
                   ExeRspMsgT*: routing info for the response
                   PswParmOperationalId: Parameter that is being requested
                   void*:  Memory allocated for PSW to put contents
                   kal_uint32: length of data expected to be populated in dataPtr
------------------------------------------------------------------------------*/
void ValDbmGetPswParameter(RegIdT RegId, ExeRspMsgT* pRspInfo, PswParmOperationId parm_op_id, 
                              PswParmOperationType opType, void* dataPtr, kal_uint32 length);
/*----------------------------------------------------------------------------
  FUNCTION NAME:   ValDbmGetPswParm
  DESCRIPTION:     Deprecated version of ValDbmGetPswParameter
------------------------------------------------------------------------------*/
void ValDbmGetPswParm(RegIdT RegId, PswParmOperationId parm_op_id, 
          PswParmOperationType opType,void* dataPtr, kal_uint32* length);

void ValDbmGetPswParmMsg(void *MsgDataP, kal_uint32 MsgSize);


/*****************************************************************************
 *     CSS SET/GET PARAMETERS API                                            *
 *****************************************************************************/
/*----------------------------------------------------------------------------
  FUNCTION NAME:   ValDbmSetCssParameter
  DESCRIPTION:     Process a request to set a parameter maintained by CSS task.
  PARAMETERS:      RegIdT: Identifier of registered application requesting service
                   ExeRspMsgT*: routing info for the response
                   PswParmOperationalId: Parameter that is being requested
                   void*:  Memory allocated for PSW to retrieve contents
                   kal_uint32: length of valid data in dataPtr
------------------------------------------------------------------------------*/
void ValDbmSetCssParameter(RegIdT RegId, ExeRspMsgT* pRspInfo, CssParmOperationId parm_op_id, 
                              CssParmOperationType opType, void* dataPtr, kal_uint32 length);
/*----------------------------------------------------------------------------
  FUNCTION NAME:   ValDbmSetCssParm
  DESCRIPTION:     Deprecated version of ValDbmSetCssParameter
------------------------------------------------------------------------------*/
void ValDbmSetCssParm(RegIdT RegId, CssParmOperationId parm_op_id, 
                      CssParmOperationType opType,void* dataPtr, kal_uint32* length);
                      
void ValDbmSetCssParmMsg(void *MsgDataP, kal_uint32 MsgSize);

/*----------------------------------------------------------------------------
  FUNCTION NAME:   ValDbmGetCssParameter
  DESCRIPTION:     Process a request to get a parameter maintained by CSS.
  PARAMETERS:      RegIdT: Identifier of registered application requesting service
                   ExeRspMsgT*: routing info for the response
                   PswParmOperationalId: Parameter that is being requested
                   void*:  Memory allocated for PSW to put contents
                   kal_uint32: length of data expected to be populated in dataPtr
------------------------------------------------------------------------------*/
void ValDbmGetCssParameter(RegIdT RegId, ExeRspMsgT* pRspInfo, CssParmOperationId parm_op_id, 
                              CssParmOperationType opType, void* dataPtr, kal_uint32 length);
/*----------------------------------------------------------------------------
  FUNCTION NAME:   ValDbmGetCssParm
  DESCRIPTION:     Deprecated version of ValDbmGetCssParameter
------------------------------------------------------------------------------*/
void ValDbmGetCssParm(RegIdT RegId, CssParmOperationId parm_op_id, 
          CssParmOperationType opType,void* dataPtr, kal_uint32* length);

void ValDbmGetCssParmMsg(void *MsgDataP, kal_uint32 MsgSize);


/*****************************************************************************
 *     UIM SET/GET PARAMETERS API                                            *
 *****************************************************************************/
/*----------------------------------------------------------------------------
  FUNCTION NAME:   ValDbmSetUiccParameter
  DESCRIPTION:     Process a request to set a parameter maintained by UIM task.
  PARAMETERS:      RegIdT: Identifier of registered application requesting service
                   ExeRspMsgT*: routing info for the response
                   PswParmOperationalId: Parameter that is being requested
                   void*:  Memory allocated for PSW to retrieve contents
                   kal_uint32: length of valid data in dataPtr
------------------------------------------------------------------------------*/
void ValDbmSetUiccParameter(RegIdT RegId, ExeRspMsgT* pRspInfo, UiccParmOperationId parm_op_id, 
                              UiccParmOperationType opType,void* dataPtr, kal_uint32 length);
/*----------------------------------------------------------------------------
  FUNCTION NAME:   ValDbmSetUiccParm
  DESCRIPTION:     Deprecated version of ValDbmSetUiccParameter
------------------------------------------------------------------------------*/
void ValDbmSetUiccParm(RegIdT RegId, UiccParmOperationId parm_op_id, 
                       UiccParmOperationType opType,void* dataPtr, kal_uint32* length);

void ValDbmSetUiccParmMsg(void *MsgDataP, kal_uint32 MsgSize);
/*----------------------------------------------------------------------------
  FUNCTION NAME:   ValDbmGetUiccParameter
  DESCRIPTION:     Process a request to get a parameter maintained by UIM task.
  PARAMETERS:      RegIdT: Identifier of registered application requesting service
                   ExeRspMsgT*: routing info for the response
                   PswParmOperationalId: Parameter that is being requested
                   void*:  Memory allocated for PSW to put contents
                   kal_uint32: length of data expected to be populated in dataPtr
------------------------------------------------------------------------------*/
void ValDbmGetUiccParameter(RegIdT RegId, ExeRspMsgT* pRspInfo, UiccParmOperationId parm_op_id, 
                              UiccParmOperationType opType,void* dataPtr, kal_uint32 length);
/*----------------------------------------------------------------------------
  FUNCTION NAME:   ValDbmGetUiccParm
  DESCRIPTION:     Deprecated version of ValDbmGetUiccParameter()
------------------------------------------------------------------------------*/
void ValDbmGetUiccParm(RegIdT RegId, UiccParmOperationId parm_op_id, 
                       UiccParmOperationType opType,void* dataPtr, kal_uint32* length);

void ValDbmGetUiccParmMsg(void *MsgDataP, kal_uint32 MsgSize);


/*****************************************************************************
 *     CLC SET/GET PARAMETERS API                                            *
 *****************************************************************************/
/*----------------------------------------------------------------------------
  FUNCTION NAME:   ValDbmSetDoParameter
  DESCRIPTION:     Process a request to set a parameter maintained by PSW.
  PARAMETERS:      RegIdT: Identifier of registered application requesting service
                   ExeRspMsgT*: routing info for the response
                   PswParmOperationalId: Parameter that is being requested
                   void*:  Memory allocated for PSW to retrieve contents
                   kal_uint32: length of valid data in dataPtr
------------------------------------------------------------------------------*/
void ValDbmSetDoParameter(RegIdT RegId, ExeRspMsgT* pRspInfo, DoParmOperationId parm_op_id, 
                             DoParmOperationType opType, void* dataPtr, kal_uint32 length);
/*----------------------------------------------------------------------------
  FUNCTION NAME:   ValDbmSetDoParm
  DESCRIPTION:     Deprecated version of ValDbmSetDoParameter()
------------------------------------------------------------------------------*/
void ValDbmSetDoParm(RegIdT RegId, DoParmOperationId parm_op_id, void* dataPtr, kal_uint32* length);

void ValDbmSetDoParmMsg(void *MsgDataP, kal_uint32 MsgSize);
#ifdef MTK_CBP
kal_uint16 valTransformValCustomizedParaDataPackedType(kal_uint8* srcData,kal_uint8* desData);
void valTransformValCustomizedParaDataType(kal_uint8* srcData ,kal_uint8* desData);
kal_uint16 valGetCustomizedParmNumBytes();
#endif

/*----------------------------------------------------------------------------
  FUNCTION NAME:   ValDbmGetDoParameter
  DESCRIPTION:     Process a request to get a parameter maintained by CLC task.
  PARAMETERS:      RegIdT: Identifier of registered application requesting service
                   ExeRspMsgT*: routing info for the response
                   PswParmOperationalId: Parameter that is being requested
                   void*:  Memory allocated for PSW to put contents
                   kal_uint32: length of data expected to be populated in dataPtr
------------------------------------------------------------------------------*/
void ValDbmGetDoParameter(RegIdT RegId, ExeRspMsgT* pRspInfo, DoParmOperationId parm_op_id, 
                             DoParmOperationType opType,void* dataPtr, kal_uint32 length);
/*----------------------------------------------------------------------------
  FUNCTION NAME:   ValDbmGetDoParm
  DESCRIPTION:     Deprecated version of ValDbmGetDoParameter()
------------------------------------------------------------------------------*/
void ValDbmGetDoParm(RegIdT RegId, DoParmOperationId parm_op_id, void *paramPtr, kal_uint32 *len, void* dataPtr, kal_uint32* length);
 
void ValDbmGetDoParmMsg(void *MsgDataP, kal_uint32 MsgSize);


/*****************************************************************************
 *     HLP SET/GET PARAMETERS API                                            *
 *****************************************************************************/
/*----------------------------------------------------------------------------
  FUNCTION NAME:   ValDbmSetHlpParameter
  DESCRIPTION:     Process a request to set a parameter maintained by PSW.
  PARAMETERS:      RegIdT: Identifier of registered application requesting service
                   ExeRspMsgT*: routing info for the response
                   PswParmOperationalId: Parameter that is being requested
                   void*:  Memory allocated for PSW to retrieve contents
                   kal_uint32: length of valid data in dataPtr
------------------------------------------------------------------------------*/
void ValDbmSetHlpParameter(RegIdT RegId, ExeRspMsgT* pRspInfo, HlpParmOperationId parm_op_id, 
                             HlpParmOperationType opType, void* dataPtr, kal_uint32 length);
/*----------------------------------------------------------------------------
  FUNCTION NAME:   ValSetHlpParm
  DESCRIPTION:     Deprecated version of ValDbmSetHlpParameter
------------------------------------------------------------------------------*/
void ValSetHlpParm(RegIdT RegId, HlpParmOperationId parm_op_id, HlpParmOperationType opType, 
                        kal_uint8* dataPtr, kal_uint32* length);

void ValDbmSetHlpParmMsg(void *MsgDataP, kal_uint32 MsgSize);
/*----------------------------------------------------------------------------
  FUNCTION NAME:   ValDbmGetHlpParameter
  DESCRIPTION:     Process a request to get a parameter maintained by PSW.
  PARAMETERS:      RegIdT: Identifier of registered application requesting service
                   ExeRspMsgT*: routing info for the response
                   PswParmOperationalId: Parameter that is being requested
                   void*:  Memory allocated for PSW to put contents
                   kal_uint32: length of data expected to be populated in dataPtr
------------------------------------------------------------------------------*/
void ValDbmGetHlpParameter(RegIdT RegId, ExeRspMsgT* pRspInfo, HlpParmOperationId parm_op_id, 
                              HlpParmOperationType opType, void* dataPtr, kal_uint32 length);
/*----------------------------------------------------------------------------
  FUNCTION NAME:   ValGetHlpParm
  DESCRIPTION:     Deprecated version of ValDbmGetHlpParameter()
------------------------------------------------------------------------------*/
void ValGetHlpParm(RegIdT RegId, HlpParmOperationId parm_op_id, 
                   HlpParmOperationType opType, void* dataPtr, kal_uint32* length);
                   
void ValDbmGetHlpParmMsg(void *MsgDataP, kal_uint32 MsgSize);
                             
                             
/*****************************************************************************
 *****************************************************************************/

void ValDbmAllDataInit(ValAllDataInitMsgT *MsgP);
/*===========================================================================
FUNCTION:     ValDbmSetUiParmMsg           
DESCRIPTION:  This function processes a message to change a NV UI parameter
PARAMETERS:   MsgDataP, MsgSize
RETURN VALUE: None
===========================================================================*/
void ValDbmSetUiParmMsg(void *MsgDataP, kal_uint32 MsgSize );

/*===========================================================================
FUNCTION:     ValDbmGetUiParmMsg           
DESCRIPTION:  This function processes a message to change a NV UI parameter
PARAMETERS:   MsgDataP, MsgSize
RETURN VALUE: None
===========================================================================*/
void ValDbmGetUiParmMsg(void *MsgDataP, kal_uint32 MsgSize );

/*===========================================================================
FUNCTION:     ValDbmMDNUpdated           
DESCRIPTION:  This function processes a message from PSW that the MDN has been updated 
PARAMETERS:   MsgDataP, MsgSize
RETURN VALUE: None
===========================================================================*/
void ValDbmMDNUpdated(void *MsgDataP, kal_uint32 MsgSize );

/*===========================================================================
FUNCTION:     ValDbmESNUpdated           
DESCRIPTION:  This function processes a message from PSW that the ESN has been updated 
PARAMETERS:   MsgDataP, MsgSize
RETURN VALUE: None
===========================================================================*/
void ValDbmESNUpdated(void *MsgDataP, kal_uint32 MsgSize );

/*==========================================================================
FUNCTION:     ValDbmHlpSegInitRsp()
DESCRIPTION:  This function passes HLP Set Parm results from valhspdapi
              to valdbm.
PARAMETERS:   ValDbmApiSetParmRspMsgT result
RETURN VALUE: void
===========================================================================*/
void ValDbmHlpSegInitRsp(ValDbmApiSetParmRspMsgT* MsgP);


/*===========================================================================

FUNCTION:     ValDbmSetSysParmMsg
              
DESCRIPTION:  This function processes an ETS Message and 
  
PARAMETERS:   MsgDataP, MsgSize

RETURN VALUE: None

===========================================================================*/
extern void ValDbmSetSysParmMsg(void *MsgDataP, kal_uint32 MsgSize);

/*===========================================================================

FUNCTION:     ValDbmGetSysParmMsg
              
DESCRIPTION:  This function processes an ETS Message
  
PARAMETERS:   MsgDataP, MsgSize

RETURN VALUE: None

===========================================================================*/
extern void ValDbmGetSysParmMsg(void *MsgDataP, kal_uint32 MsgSize);

/*****************************************************************************
  FUNCTION NAME: HwdDbmSetBandClassSupportTable

  DESCRIPTION:   Set Band Class 

  PARAMETERS:    Message Pointer

  RETURNS:       SysParmAccessResultCode
*****************************************************************************/
extern SysParmAccessResultCode HwdDbmSetBandClassSupportTable(ValDbmSysSetParmETSMsgT *MsgDataP);

/*****************************************************************************
  FUNCTION NAME: HwdDbmSetSubClass

  DESCRIPTION:   Set Sub Class for Specified Band Class

  PARAMETERS:    Message Pointer

  RETURNS:       SysParmAccessResultCode
*****************************************************************************/
extern SysParmAccessResultCode HwdDbmSetSubClass(ValDbmSysSetParmETSMsgT *MsgDataP);

/*****************************************************************************
  FUNCTION NAME: HwdDbmGetBandClassSupportTable

  DESCRIPTION:   Get Band Class 

  PARAMETERS:    Message Pointer

  RETURNS:       
*****************************************************************************/
extern void HwdDbmGetBandClassSupportTable(ValDbmSysGetParmETSMsgT *MsgDataP);

/*****************************************************************************
  FUNCTION NAME: HwdDbmGetSubClass

  DESCRIPTION:   Get Sub Class for Specified Band Class

  PARAMETERS:    Message Pointer

  RETURNS:       
*****************************************************************************/
extern void HwdDbmGetSubClassSupport(ValDbmSysGetParmETSMsgT *MsgDataP);


#ifdef  __cplusplus
}
#endif

#endif /*__VAL_DBM_H__*/

/*****************************************************************************
* End of File
*****************************************************************************/


