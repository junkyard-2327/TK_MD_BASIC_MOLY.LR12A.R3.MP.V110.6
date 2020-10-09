/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
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

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   l1tst_msg_common.h
 *
 * Project:
 * --------
 *   MT6291
 *
 * Description:
 * ------------
 *   Common definition of GL1TST task
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
 * $Revision: $
 * $Modtime:  $
 * $Log:      $
 *
 * 01 29 2016 yungshian.lai
 * [MOLY00163211] [L1TST] Sawless Development & DTS_STEP_CNT=512.
 *
 *******************************************************************************/

#ifndef _L1TST_MSG_COMMON_H_
#define _L1TST_MSG_COMMON_H_

/*************************************************************************
 * Include Statements for KAL
 *************************************************************************/
#include "kal_public_api.h"

/*************************************************************************
* Include Statements for FT
 *************************************************************************/
#include "ft_msg_common.h"

/*************************************************************************
* Global constant and data definition
 *************************************************************************/
#define GL1TST_CNF_OK     1
#define GL1TST_CNF_FAIL   0

/*************************************************************************
 * Function declaration
 *************************************************************************/
void _GL1TST_ALLOC_MSG(ilm_struct* ptr_ilm, kal_uint16 size, kal_bool  IsFtMsg);
void _GL1TST_SendFtMsgByToken(module_type  src_mod, module_type  dest_mod, sap_type  sap, msg_type  msg, ilm_struct  *ilm_ptr, kal_uint16  token);
void _GL1TST_SendFtMsgToFtByToken(ilm_struct  *ilm_ptr, kal_uint16  token);
void _GL1TST_SendFtMsgToAddRecord(ilm_struct  *ilm_ptr, kal_uint16  token);

kal_uint16   GL1TST_GetGolbalToken( void );

/*************************************************************************
*  Utility Functions
 *************************************************************************/
#define GL1TST_ALLOC_MSG(ptr_ilm,size)          _GL1TST_ALLOC_MSG(ptr_ilm, size, KAL_TRUE)
#define GL1TST_ALLOC_OTHER_MSG(ptr_ilm,size)    _GL1TST_ALLOC_MSG(ptr_ilm, size, KAL_FALSE)

//#define GL1TST_SEND_MSG(src_mod, dest_mod, sap, msg, ilm_ptr)   _GL1TST_SendFtMsgByToken(src_mod, dest_mod, sap, msg, ilm_ptr, GL1TST_GetGolbalToken())
#define GL1TST_SEND_MSG_TO_FT(ilm_ptr)          _GL1TST_SendFtMsgToFtByToken(ilm_ptr, GL1TST_GetGolbalToken())

#endif /* _L1TST_MSG_COMMON_H_ */
