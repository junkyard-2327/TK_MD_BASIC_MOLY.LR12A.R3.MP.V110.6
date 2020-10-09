/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 *
 * Filename:
 * ---------
 *   ccci_ipc_msgid.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   CCCI_IPC msgid define.
 *
 * Author:
 * -------
 * -------
 *
 *
 * ==========================================================================
 * $Log$
 *
 * 07 11 2017 chien-hui.lu
 * [MOLY00263060] [CCCI_IPC] change CCCI IPC message ID file format
 * [CCCI IPC] change message ID configuration format.
 *
 * 07 10 2017 chien-hui.lu
 * [MOLY00263060] [CCCI_IPC] change CCCI IPC message ID file format
 * [CCCI IPC] change message ID configuration format.
 *
 * 04 05 2017 chien-hui.lu
 * [MOLY00239611] [CCCI_IPC][CCCI] add CCCI IPC and runtime feature
 * [CCCI_IPC][CCCI] add CCCI IPC config for WIPC.
 *
 * 04 05 2017 chien-hui.lu
 * [MOLY00239611] [CCCI_IPC][CCCI] add CCCI IPC and runtime feature
 * [CCCI][CCCI_IPC] add runtime feature and IPC config for MDT.
 *
 * 06 08 2015 hsin-jun.tang
 * [MOLY00117873] [CCCI IPC] L4 msg id reduction
 * [CCCI IPC] L4 msg id reduction
 *
 * 11 25 2014 cs.huang
 * [MOLY00084258] [MT6795][Modem][Feature]Please support Garbage filter from network
 * [CCCI IPC] Add CCCI IPC msgid for garbage filter
 *
 * [MOLY00084258] [MT6795][Modem][Feature]Please support Garbage filter from network
 * [CCCI IPC] Add CCCI IPC msgid for garbage filter
 *
 * 11 12 2014 cs.huang
 * [MOLY00084091] [MT6795] [SYSTEM SERVICE] [CLIB] porting C time function to MD
 * [CCCI IPC] Support Clibtime feature
 *
 * 11 01 2013 ap.wang
 * [MOLY00044721] [CCCI_IPC] Modify msg_id for IDC integration
 * 	ccci_ipc msg_id for IDC
 ****************************************************************************/


#ifndef __CCCI_IPC_MSGID_H__
#define __CCCI_IPC_MSGID_H__

#include "module_msg_range.h"

MODULE_MSG_BEGIN(MSG_ID_CCCI_MSG_CODE_BEGIN) 
    MSG_ID_IPC_INVALID_TYPE = MSG_ID_CCCI_MSG_CODE_BEGIN,
    MSG_ID_IPC_L4C_INVALID = MSG_ID_CCCI_MSG_CODE_BEGIN,
    #include "l4_ipc_msgid_source.h"
    MSG_ID_IPC_L4C_END,
    MSG_ID_IPC_EL1_INVALID = MSG_ID_IPC_L4C_INVALID + 0x40,
    #include "el1_ipc_msgid_source.h"
    MSG_ID_IPC_EL1_END,
    MSG_ID_IPC_CCCIIPC_INVALID = MSG_ID_IPC_EL1_INVALID + 0x20,
    MSG_ID_CCCIIPC_CLIB_TIME_REQ, // for clib time msg id
    MSG_ID_CCCIIPC_AP_MD_UT_MSG,
    MSG_ID_IPC_CCCIIPC_END,
    MSG_ID_IPC_IPCORE_INVALID = MSG_ID_IPC_CCCIIPC_INVALID + 0x10,
    #include "pfm_msgid_source.h"
    MSG_ID_IPC_IPCORE_END,
    MSG_ID_IPC_MDT_INVALID = MSG_ID_IPC_IPCORE_INVALID + 0x8,
    #include "mdt_msgid_source.h"
    MSG_ID_IPC_MDT_END,
    MSG_ID_IPC_UFPM_INVALID = MSG_ID_IPC_MDT_INVALID + 0x8,
    #include "ufpm_msgid_source.h"
    MSG_ID_IPC_UFPM_END,
    MSG_ID_IPC_IWLAN_INVALID = MSG_ID_IPC_UFPM_INVALID + 0x18,
    #include "iwlan_ipc_msgid_source.h"
    MSG_ID_IPC_IWLAN_END,
    MSG_ID_IPC_NEXT_NEW_USER_INVALID = MSG_ID_IPC_IWLAN_INVALID + 0x10,
    MSG_ID_IPC_END,
MODULE_MSG_END(MSG_ID_CCCI_MSG_CODE_TAIL)

#endif  /* !__CCCI_IPC_MSGID_H__ */
