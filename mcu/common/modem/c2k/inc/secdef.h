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
#ifndef  _SEC_DEF_H_
#define  _SEC_DEF_H_
/*****************************************************************************
* 
* FILE NAME   :   secdef.h
*
* DESCRIPTION :   This file contains function prototypes and other definitions
*                 for the SEC component, which are shared between other 
*                 components within SEC.
*
*
* HISTORY     :
*     See Log at end of file
*
*****************************************************************************/

/*----------------------------------------------------------------------------
* Include Files
----------------------------------------------------------------------------*/
#include "kal_public_api.h"
#include "kal_public_defs.h"
#include "sysapi.h"
#include "hlpapi.h"
#include "secapi.h"

/*----------------------------------------------------------------------------
 Global Defines And Macros
----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------
 Local Defines And Macros
----------------------------------------------------------------------------*/

#ifdef CBP7_EHRPD
/*----------------------------------------------------------------------------
Global Typedefs 
----------------------------------------------------------------------------*/
typedef struct {
   kal_uint8 rand[HLP_AKA_RAND_LEN];
   kal_uint8 autn[HLP_AKA_AUTN_LEN];
   kal_uint8 rcvdMac[HLP_AKA_MACA_LEN];
   kal_uint8 AMF[HLP_AKA_AMF_LEN];
   kal_uint8 SQN[HLP_AKA_SQN_LEN];
   kal_uint8 xMac[HLP_AKA_MACA_LEN];
   kal_uint8 ik[EAP_AKA_IK_LEN];
   kal_uint8 ck[EAP_AKA_CK_LEN];
   kal_uint8 res[HLP_AKA_RES_LEN];
} SecAkaAuthSpyT;

typedef struct {
   kal_uint8 identity[HLP_MN_NAI_MAX_SIZE];
   kal_uint8 ck[EAP_AKA_CK_LEN];
   kal_uint8 ik[EAP_AKA_IK_LEN];
   kal_uint8 mk[EAP_AKA_PRIME_MK_LEN];
} SecAkaDeriveMkSpyT;

typedef struct {
   kal_uint8 identity[HLP_MN_NAI_MAX_SIZE];
   kal_uint8 counter[2];
   kal_uint8 nonces[EAP_AKA_NONCE_S_LEN];
   kal_uint8 mk[EAP_AKA_MK_LEN];
   kal_uint8 Xkey[EAP_AKA_SHA1_MAC_LEN];
} SecAkaDeriveReauthXkeySpyT;

typedef struct {
   kal_uint8 mk[EAP_AKA_MK_LEN]; 
   kal_uint8 xOut[EAP_AKA_SHA1_MAC_LEN];
} SecAkaDeriveMskSpyT;

typedef struct {
   kal_uint8 key[EAP_AKA_K_AUT_LEN];
   kal_uint8 MsgBody[100];
   kal_uint8 ExtraMsgBody[100];
   kal_uint8 mac[EAP_AKA_MAC_LEN];
} SecAkaDeriveMacSpyT;

typedef   struct {
   kal_uint8  msk[EAP_AKA_K_AUT_LEN];
   kal_uint8 key[EAP_AKA_K_AUT_LEN];
   kal_uint8 pmk[EAP_AKA_MSK_DATA_LEN];
} PACKED_POSTFIX SecAkaDerivePmkSpyT;

typedef struct {
   kal_bool  bEncrypt;   /*0 - encrypt, 1 - decrypt*/
   kal_uint8 key[EAP_AKA_K_ENCR_LEN]; 
   kal_uint8 iv[EAP_AKA_IV_LEN]; 
   kal_uint8 data[100]; 
} SecAkaAesCryptSpyT;
#endif

/*----------------------------------------------------------------------------
 Global Function Prototypes
----------------------------------------------------------------------------*/
#ifdef CBP7_EHRPD
extern void SecAkaAuthReqMsg(SecAkaAuthReqMsgT *MsgDataP);
extern void SecAkaDeriveMkReqMsg(SecAkaDeriveMKReqMsgT *MsgDataP);
extern void SecAkaDeriveMskReqMsg(SecAkaDeriveMskReqMsgT * MsgDataP);
extern void SecAkaDeriveReauthXKeyReqMsg(SecAkaDeriveReauthXKeyReqMsgT *MsgDataP);
extern void SecAkaDeriveMacReqMsg(SecAkaDeriveMacReqMsgT *MsgDataP);
extern void SecAkaDerivePmkReqMsg(SecAkaDerivePmkReqMsgT *MsgDataP);
extern void SecAkaAesCryptReqMsg(SecAkaAesCryptReqMsgT *MsgDataP);
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
void SecAkaSQNInitialization(void);
#if EAP_AKA_PRIME
void SecAkaPrimeDeriveMkReqMsg(SecAkaDeriveMKReqMsgT *MsgDataP);
void SecAkaPrimeDeriveReauthMkReqMsg(SecAkaPrimeDeriveReauthMkReqMsgT *MsgDataP);
#endif
#endif
extern void SecValAesCryptReqMsg(SecAkaAesCryptReqMsgT *MsgDataP);
/*****************************************************************************
* End of File
*****************************************************************************/
#endif




