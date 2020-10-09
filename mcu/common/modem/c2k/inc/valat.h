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
* Copyright (c) 2004-2013 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
/********************************************************************************************
* 
* FILE NAME   : valat.h
*
* DESCRIPTION : Prototypes and definitions for VAL AT.
*
********************************************************************************************/
#ifndef  _VALAT_H_
#define _VALAT_H_

#include "sysdefs.h"
#include "valuimapi.h"

#include "val_nvram.h"

/*-----------------------------------------------------------------
 *   VAL AT definitions
 *----------------------------------------------------------------*/
#define ATC_MAX_ATPARMS          15
#define ATC_MAX_NUM_LINE_IN_RSP  15
#define ATC_MAX_COMMAND_BODY_LEN 16

typedef struct 
{
  char*  data;
  kal_uint16 len;
} AtcDataParse;

typedef struct
{
   kal_uint32        num32;
   char*         ptrCharStr;
   AtcDataParse	 buf;
   kal_uint32        ipAddr;
#ifdef MTK_CBP //MTK_DEV_C2K_IRAT
   kal_bool          entered;
#endif      
} AtcParmT;

typedef  struct
{
   char*          ParmLine[ATC_MAX_NUM_LINE_IN_RSP];  
}   AtcParmArrayT;

typedef  struct
{
   char           cmdName[16];
   AtcParmT*      ParmList[ATC_MAX_ATPARMS];
   kal_uint8          chan;
} AtcSendAtMsgT;

typedef  struct
{
    char            cmdName[ATC_MAX_COMMAND_BODY_LEN];
    AtcParmArrayT   LinesOfParms;
    kal_uint8           numOfValidLines;
    kal_bool            rspStatus;
    kal_bool            needBufferAck;
    kal_bool            skipResultCode;
    char*           ErrResultNum;
    kal_uint8           chan;	 
    kal_uint16          LineLen[ATC_MAX_NUM_LINE_IN_RSP];
#ifdef MTK_CBP
    kal_bool            isUrc;
#endif
}   AtcSendAtRespMsgT;

/*-----------------------------------------------------------------
 *   VAL AT global variables 
 *----------------------------------------------------------------*/
extern AtcDbmBinDataT       AtcNvmData;

#endif  /* _VALAT_H_ */

