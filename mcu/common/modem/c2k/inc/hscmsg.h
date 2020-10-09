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
* Copyright (c) 1998-2011 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
/*****************************************************************************
 
  FILE NAME:  hscmsg.h

  DESCRIPTION:

    This file contains the defenitions of all the HSC msg id's.

*****************************************************************************/

/*----------------------------------------------------------------------------
* Message IDs for signals and commands sent to HSC 
*----------------------------------------------------------------------------*/

#include "hsc_msgid.h"

#ifndef MSG_ID_MISMATCH_DETECT
#undef MSGID_SET 
#undef MSGID_NEXT 


// regular msg id's enum
#define MSGID_SET(name, val) name = val
#define MSGID_NEXT(name) name

#define HSC_SPDO_MSG_IDS typedef enum
#define HSC_SPDO__MSG_IDS_NAME HscSpDoMsgIdT
#define HSC_SP1X_MSG_IDS typedef enum
#define HSC_SP1X__MSG_IDS_NAME HscSp1xMsgIdT
#define HSC_CMD_MSG_IDS typedef enum
#define HSC_CMD__MSG_IDS_NAME HscCmdMsgIdT


extern const kal_uint32 HscSpDoValidMsgIdList[];
extern kal_uint32 HscSpDoValidMsgIdListSizeOf(void);
extern const kal_uint32 HscSp1xValidMsgIdList[];
extern kal_uint32 HscSp1xValidMsgIdListSizeOf(void);
extern const kal_uint32 HscCmdValidMsgIdList[];
extern kal_uint32 HscCmdValidMsgIdListSizeOf(void);


#else


#ifdef  HWD_MSG_ID_MISMATCH_DETECT
#define  HSC_SPDOValidMsgIdList HwdHscSpDoValidMsgIdList
#define  HSC_SP1XValidMsgIdList HwdHscSp1xValidMsgIdList
#define  HSC_CMDValidMsgIdList  HwdHscCmdValidMsgIdList
#else
#define  HSC_SPDOValidMsgIdList HscSpDoValidMsgIdList
#define  HSC_SP1XValidMsgIdList HscSp1xValidMsgIdList
#define  HSC_CMDValidMsgIdList  HscCmdValidMsgIdList
#endif


#undef HSC_SPDO_MSG_IDS
#undef HSC_SPDO__MSG_IDS_NAME  
#undef HSC_SP1X_MSG_IDS 
#undef HSC_SP1X__MSG_IDS_NAME  
#undef HSC_CMD_MSG_IDS  
#undef HSC_CMD__MSG_IDS_NAME  



#define HSC_SPDO_MSG_IDS const kal_uint32 HSC_SPDOValidMsgIdList[] =
#define HSC_SPDO__MSG_IDS_NAME 
#define HSC_SP1X_MSG_IDS const kal_uint32 HSC_SP1XValidMsgIdList[] =
#define HSC_SP1X__MSG_IDS_NAME 
#define HSC_CMD_MSG_IDS const kal_uint32 HSC_CMDValidMsgIdList []=
#define HSC_CMD__MSG_IDS_NAME 


#endif


