/*************************************************************
******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
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

/*************************************************************
*
*
*************************************************************/

/*****************************************************************************
* 
* FILE NAME   :psws_msg_struct.h 
*
* DESCRIPTION :
*
*
* HISTORY     :
*     See Log at end of file
*
*****************************************************************************/

#ifndef _PSWS_MSG_STRUCT_H
#define _PSWS_MSG_STRUCT_H

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "do_slapi.h"
#include "psws_msgid.h"
#include "pswsapi.h"

/* PSWS Messages */
typedef struct
{
    LOCAL_PARA_HDR
    PswSModExpMSReqMsgT msg;
} psw_s_mod_exp_msreq_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    PswSModExpKReqMsgT msg;
} psw_s_mod_exp_kreq_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    DHKepCalReqMsgT msg;
} do_dhkep_cal_req_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    PswSModExpMSReqMsgT msg;
} psw_s_mod_exp_ms_req_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    PswSHlpDmuKeyEncReqMsgT msg;
} psw_s_hlp_dmu_keyenc_req_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
} psw_s_dbm_data_nam_msg_struct;


typedef struct
{
    LOCAL_PARA_HDR
    PswSHlpDmuKeyGenReqMsgT msg;
} psw_s_hlp_dmu_keygen_req_msg_struct;


#endif
