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
 
  FILE NAME:  secmsg.h

  DESCRIPTION:

    This file contains the defenitions of all the SEC msg id's.

*****************************************************************************/


/*----------------------------------------------------------------------------
     Command Message IDs, for SEC task, for SEC_CMD_MAILBOX, EXE_MAILBOX_1_ID
     The messages IDs for components shall also be put in here.     
----------------------------------------------------------------------------*/
#include "module_msg_range.h"
#undef MSGID_SET 
#undef MSGID_NEXT 
#undef MSG_IDS
#undef SEC_MSG_IDS_NAME  

#ifndef MSG_ID_MISMATCH_DETECT


// regular msg id's enum
#define MSGID_SET(name, val) name = val
#define MSGID_NEXT(name) name
#define MSG_IDS typedef enum
#define SEC_MSG_IDS_NAME SecMsgIdT

extern const kal_uint32 SecValidMsgIdList[];
extern kal_uint32 SecValidMsgIdListSizeOf(void);


#else


#ifdef  HWD_MSG_ID_MISMATCH_DETECT
#define  SECValidMsgIdList HwdSecValidMsgIdList
#else
#define  SECValidMsgIdList SecValidMsgIdList
#endif


#define MSGID_SET(name, val) name 
#define MSGID_NEXT(name) name
#define MSG_IDS const kal_uint32 SECValidMsgIdList[] =
#define SEC_MSG_IDS_NAME  
#endif


MSG_IDS
{
   /* SEC AKA segment*/
   MSGID_SET(SEC_AKA_AUTH_REQ_MSG, MSG_ID_SEC_CODE_BEGIN),
   MSGID_NEXT(SEC_AKA_DERIVEMK_REQ_MSG),
   MSGID_NEXT(SEC_AKA_DERIVEREAUTHXKEY_REQ_MSG),
   MSGID_NEXT(SEC_AKA_DERIVEMSK_REQ_MSG),
   MSGID_NEXT(SEC_AKA_DERIVEMAC_REQ_MSG),
   MSGID_NEXT(SEC_AKA_DERIVEPMK_REQ_MSG),
   MSGID_NEXT(SEC_AKA_AESCRYPT_REQ_MSG),
   MSGID_NEXT(SEC_AKA_AUTH_REQ_TEST_MSG),
   MSGID_NEXT(SEC_AKA_DERIVEMK_REQ_TEST_MSG),
   MSGID_NEXT(SEC_AKA_DERIVEREAUTHXKEY_REQ_TEST_MSG),
   MSGID_NEXT(SEC_AKA_DERIVEMSK_REQ_TEST_MSG),
   MSGID_NEXT(SEC_AKA_DERIVEMAC_REQ_TEST_MSG),
   MSGID_NEXT(SEC_AKA_DERIVEPMK_REQ_TEST_MSG),
   MSGID_NEXT(SEC_AKA_AESCRYPT_REQ_TEST_MSG),
   MSGID_NEXT(SEC_AKA_PRIME_SQN_INIT_MSG),

   /* SEC AKA PRIME MSg */
   MSGID_NEXT(SEC_AKA_PRIME_DERIVEMK_REQ_MSG),
   MSGID_NEXT(SEC_AKA_PRIME_DERIVEREAUTHMK_REQ_MSG),

   MSGID_NEXT(SEC_VAL_AESCRYPT_REQ_MSG),

   MSGID_NEXT(SEC_CMD_MSGID_NUM)
    
} SEC_MSG_IDS_NAME;




