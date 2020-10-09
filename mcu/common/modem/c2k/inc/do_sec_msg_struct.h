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
 
/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2015
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
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

/*****************************************************************************

  FILE NAME:  do_sec_msg_struct.h

  DESCRIPTION:

    This file contains the defenitions of all the SEC msg structures.

*****************************************************************************/
#ifndef _DO_SEC_MSG_STRUCT_H_
#define _DO_SEC_MSG_STRUCT_H_

#include "kal_public_defs.h"
#include "secapi.h"
#include "secdef.h"

#ifdef CBP7_EHRPD
typedef struct
{
    LOCAL_PARA_HDR
    SecAkaAuthReqMsgT msg;
} sec_aka_auth_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    SecAkaDeriveMKReqMsgT msg;
} sec_aka_derivemk_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    SecAkaDeriveMKReqMsgT msg;
} sec_aka_prime_derivemk_req_msg_struct;

typedef struct
{
	LOCAL_PARA_HDR
	SecAkaDeriveMskReqMsgT msg;
} sec_aka_derivemsk_req_msg_struct;

typedef struct
{
	LOCAL_PARA_HDR
	SecAkaDeriveReauthXKeyReqMsgT msg;
} sec_aka_derivereauthxkey_req_msg_struct;

typedef struct
{
	LOCAL_PARA_HDR
	SecAkaPrimeDeriveReauthMkReqMsgT msg;
} sec_aka_prime_derivereauthmk_req_msg_struct;

typedef struct
{
	LOCAL_PARA_HDR
	SecAkaDeriveMacReqMsgT msg;
} sec_aka_derivemac_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    SecAkaAuthSpyT msg;
} sec_aka_auth_spy_struct;

typedef struct
{
    LOCAL_PARA_HDR
    SecAkaDeriveMkSpyT msg;
} sec_aka_derive_mk_spy_struct;

typedef struct
{
    LOCAL_PARA_HDR
    SecAkaDeriveReauthXkeySpyT msg;
} sec_aka_derive_reauth_xkey_spy_struct;

typedef struct
{
	LOCAL_PARA_HDR
	SecAkaDeriveMskSpyT msg;
} sec_aka_derive_msk_spy_struct;

typedef struct
{
    LOCAL_PARA_HDR
    SecAkaDeriveMacSpyT msg;
} sec_aka_derive_mac_spy_struct;

typedef struct
{
	LOCAL_PARA_HDR
	SecAkaDerivePmkSpyT msg;
} sec_aka_derive_pmk_spy_struct;

typedef struct
{
    LOCAL_PARA_HDR
    SecAkaAesCryptSpyT msg;
} sec_aka_aes_crypt_spy_struct;

typedef struct
{
    LOCAL_PARA_HDR
    SecAkaAesCryptReqMsgT msg;
} sec_aka_aescrypt_req_msg_struct;

#endif
#endif

