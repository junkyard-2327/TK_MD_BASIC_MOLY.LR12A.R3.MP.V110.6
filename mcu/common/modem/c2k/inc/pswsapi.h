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
* Copyright (c) 1999-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
/*****************************************************************************
*
* FILE NAME   : pswsapi.h
*
* DESCRIPTION : API definition for PSW secondary task.
*
* HISTORY     :
*     See Log at end of file
*
*****************************************************************************/
#ifndef _PSWSAPI_H_
#define _PSWSAPI_H_

/*----------------------------------------------------------------------------
 Global typedefs
----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "sysapi.h"

#include "module_msg_range.h"
/*----------------------------------------------------------------------------
 Global Defines and Macros
----------------------------------------------------------------------------*/
#define PSW_S_MAILBOX_CMD	EXE_MAILBOX_1_ID
/*----------------------------------------------------------------------------
     Message IDs
----------------------------------------------------------------------------*/

/*-----------------**
** Message Formats **
**------------------*/
typedef struct
{
   kal_uint8          parameterP[64];
   kal_uint8          parameterG[20];
   kal_uint8          exp[20];
} PswSModExpMSReqMsgT;

typedef struct
{
   kal_uint8		  bsResult[64];
   kal_uint8		  parameterP[64];
   kal_uint8		  exp[20];
   kal_uint8		  numbytes;
} PswSModExpKReqMsgT;

typedef struct
{
   kal_uint16 sid;
   kal_uint16 nid;
   kal_uint16 EcIo;
   kal_uint8 curSys;
   kal_uint16 curChan;
   SysCdmaBandT curBand;
} PswSCssValidateSyncMsgT;

typedef struct {
   kal_uint16 lenKey;
   kal_uint8 *pKey;
   kal_uint8 nPubKeyModLen;
   kal_uint8 *pPubKeyMod;
   ExeRspMsgT DmuKeyGenReqRspInfo;
} PswSHlpDmuKeyGenReqMsgT;

typedef struct {
   kal_uint8 nTextLen;
   kal_uint8 *pText;
   kal_uint8 nPubKeyExpLen;
   kal_uint8 *pPubKeyExp;
   kal_uint8 nPubKeyModLen;
   kal_uint8 *pPubKeyMod;
   kal_uint8 nEncryptTextLen;
   kal_uint8 *pEncryptText;
   ExeRspMsgT DmuKeyEncReqRspInfo;
} PswSHlpDmuKeyEncReqMsgT;
#endif
/*****************************************************************************
* $Log: pswsapi.h $
*
* 06 29 2017 sue.zhong
* [MOLY00259241] [6293][C2K]Replace with KAL data type
* ::KAL type - folder inc
*
* 11 09 2016 sue.zhong
* [MOLY00208435] [6293][C2K]Sync C2K code to UMOLYA TRUNK
* Update C2K PS code (1/2)
* Revision 1.3  2005/03/18 10:05:22  dstecker
* Modifications for the 4.05 merge
* Revision 1.2  2004/03/25 12:07:49  fpeng
* Updated from 6.0 CP 2.5.0
* Revision 1.1  2003/05/12 15:39:22  fpeng
* Initial revision
* Revision 1.3  2002/06/06 14:25:41  dstecker
* Updated copyright notice
* Revision 1.2  2002/05/29 15:13:56  ameya
* Added structure defn for PswSCssValidateSyncMsgT and msg id PSW_S_CSS_VAL_SYNC_MSG.
* Revision 1.1  2001/11/20 12:03:17  mclee
* Initial revision
* Revision 1.3  2001/04/03 10:10:08  mclee
* Define PswSFillSSPRListMsgT and added enum PSW_S_FILL_SSPR_REQ_MSG
* Revision 1.2  2001/01/24 22:53:35Z  mclee
* Declaired structs and enum for PswSmodExpMSReqMsgT & PswSModExpKReqMsgT used to inputs to Diffie Hellman Calculation.
* Revision 1.1.2.1  2000/11/22 00:08:02Z  mclee
* Duplicate revision
* Revision 1.1  2000/11/22 00:08:02Z  mclee
* Initial revision
*****************************************************************************/

/*****************************************************************************
* End of File
*****************************************************************************/

