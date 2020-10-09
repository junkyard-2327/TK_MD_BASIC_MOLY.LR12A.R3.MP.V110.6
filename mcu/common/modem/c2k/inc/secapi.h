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
* FILE NAME   : secapi.h
*
* DESCRIPTION : API definition for SEC  task.
*
* HISTORY     :
*****************************************************************************/
#ifndef _SECAPI_H_
#define _SECAPI_H_

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "syscommon.h"
#include "hlpapi.h"
#ifdef CBP7_EHRPD
#define EAP_AKA_PRIME 1
#endif
/*----------------------------------------------------------------------------
 Global Defines and Macros
----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
 Mailbox IDs
----------------------------------------------------------------------------*/
#define SEC_CMD_MAILBOX         EXE_MAILBOX_1_ID

/*----------------------------------------------------------------------------
     Command Message IDs, for SEC task, for SEC_CMD_MAILBOX, EXE_MAILBOX_1_ID
     The messages IDs for components shall also be put in here.     
----------------------------------------------------------------------------*/
#include "secmsg.h"

#ifdef CBP7_EHRPD
typedef struct {
   kal_uint8 *key;
   kal_uint8 keyLen;
   kal_uint8 *rand;
   kal_uint16 randLen;
   kal_uint8 *autn;
   kal_uint16 autnLen;
   kal_uint8 *res;
   kal_uint16 resLen;
   kal_uint8 *ik;
   kal_uint16 ikLen;
   kal_uint8 *ck;
   kal_uint16 ckLen;
   kal_uint8 *auts;
   kal_uint16 autsLen;
#if EAP_AKA_PRIME
   kal_uint16 kdf[1];
   kal_uint16 bidding;
#endif
  ExeRspMsgT RspInfo;
}SecAkaAuthReqMsgT;

typedef struct {
   kal_uint8 *identity;
   kal_uint16 identityLen;
   kal_uint8 *autn;
   kal_uint16 autnLen;
   kal_uint8 *ck;
   kal_uint16 ckLen;
   kal_uint8 *ik;
   kal_uint16 ikLen; 
   kal_uint8 *mk;
   kal_uint16 mkLen;
   kal_bool bNeedCKIKDerive;
   ExeRspMsgT RspInfo;
}SecAkaDeriveMKReqMsgT;

typedef struct {
   kal_uint8 *identity;
   kal_uint16 identityLen;
   kal_uint8 *counter;
   kal_uint16 counterLen;
   kal_uint8 *nonces;
   kal_uint16 noncesLen; 
   kal_uint8 *mk;
   kal_uint16 mkLen;
   kal_uint8 *Xkey;
   kal_uint16 XKeyLen;
   ExeRspMsgT RspInfo;
}SecAkaDeriveReauthXKeyReqMsgT;

#if EAP_AKA_PRIME
typedef struct {
   kal_uint8 *identity;
   kal_uint16 identityLen;
   kal_uint8 *counter;
   kal_uint16 counterLen;
   kal_uint8 *nonces;
   kal_uint16 noncesLen; 
   kal_uint8 *k_re;
   kal_uint16 k_reLen;
   kal_uint8 *mk;
   kal_uint16 mkLen;
   ExeRspMsgT RspInfo;
}SecAkaPrimeDeriveReauthMkReqMsgT;
#endif

typedef struct {
   kal_uint8 *Key;
   kal_uint8 *xOut;
   kal_uint16 xOutLen;
   ExeRspMsgT RspInfo;
}SecAkaDeriveMskReqMsgT;

typedef struct {
   kal_uint8 *key;
   kal_uint8 *addr1;
   kal_uint8 *addr2;
   kal_uint8 *mac;
   kal_uint8 keyLen; 
   kal_uint8 addrLen1;
   kal_uint8 addrLen2;
   kal_uint8 macLen;
   ExeRspMsgT RspInfo;
} SecAkaDeriveMacReqMsgT;

typedef struct {
   kal_uint8  *msk;
   kal_uint16 mskLen;
   kal_uint8 *key;
   kal_uint16 keyLen;
   kal_uint8 *pmk;
   kal_uint16 pmkLen;
   ExeRspMsgT RspInfo;
} SecAkaDerivePmkReqMsgT;

typedef struct {
   ExeRspMsgT RspInfo;
   kal_uint8 rand[HLP_AKA_RAND_LEN];
   kal_uint8 autn[HLP_AKA_AUTN_LEN];
} SecAkaAuthReqTestMsgT;

typedef struct {
   ExeRspMsgT RspInfo;
   kal_uint8 identity[HLP_MN_NAI_MAX_SIZE];
   kal_uint8 ck[EAP_AKA_CK_LEN];
   kal_uint8 ik[EAP_AKA_IK_LEN];
} SecAkaDeriveMkReqTestMsgT;

typedef struct {
   ExeRspMsgT RspInfo;
   kal_uint8 identity[HLP_MN_NAI_MAX_SIZE];
   kal_uint8 counter[2];
   kal_uint8 nonces[EAP_AKA_NONCE_S_LEN];
   kal_uint8 mk[EAP_AKA_MK_LEN];
}SecAkaDeriveReauthXKeyReqTestMsgT;

typedef struct {
   ExeRspMsgT RspInfo;
   kal_uint8 mk[EAP_AKA_MK_LEN]; 
} SecAkaDeriveMskReqTestMsgT;

typedef struct {
   ExeRspMsgT RspInfo;
   kal_uint8 key[EAP_AKA_K_AUT_LEN];
   kal_uint8 MsgBodyLen;
   kal_uint8 MsgBody[100];
   kal_uint8 ExtraMsgBodyLen;
   kal_uint8 ExtraMsgBody[100];
} SecAkaDeriveMacReqTestMsgT;

typedef struct {
   ExeRspMsgT RspInfo;
   kal_uint8 key[EAP_AKA_K_AUT_LEN];
   kal_uint8  msk[EAP_AKA_K_AUT_LEN];
} SecAkaDerivePmkReqTestMsgT;

typedef struct {
   ExeRspMsgT RspInfo;
   kal_bool  bEncrypt;   /*0 - encrypt, 1 - decrypt*/
   kal_uint8 key[EAP_AKA_K_ENCR_LEN]; 
   kal_uint8 iv[EAP_AKA_IV_LEN]; 
} SecAkaAesCryptReqTestMsgT;

typedef struct {
   kal_uint8 authkey[16];
   kal_uint8 op[16];
} SecAkaEtsSetAuthKeyMsgT;
#endif

typedef struct {
   kal_bool  bEncrypt;   /*KAL_TRUE - encrypt, KAL_FALSE - decrypt*/
   kal_uint8 *key; 
   kal_uint8 *iv; 
   kal_uint8 *data; 
   kal_uint16 dataLen;
   ExeRspMsgT RspInfo;
}SecAkaAesCryptReqMsgT;

/*****************************************************************************
* End of File
*****************************************************************************/
#endif 


