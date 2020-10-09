/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2013
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
 * Filename:
 * ------------
 *   mtf_msgid.h
 *
 * Project:
 * ------------
 *   MOLY
 *
 * Description:
 * ------------
 *   This file defines the identities of the messages received by MTF.
 * 
 *
 * Author:
 * -----------
 * -------
 *
 *===========================================================
 * $Log$
 *
 * 07 05 2019 vend_mtb_mobiveil012
 * [MOLY00419240] [Gen93][DMF] DMF misc2 FW development - ATP part
 * 	
 * 	[R3.MP] DMF - ATP changes
 *
 * 01 17 2019 danny.kuo
 * [MOLY00379522] [AT&T] Modify MTF's code to prepare MTF source code release for IQI
 * .
 *
 * .
 *****************************************************************************/

#ifndef MTF_MSGID_H
#define MTF_MSGID_H

#include "module_msg_range.h"


MODULE_MSG_BEGIN( MSG_ID_MTF_CODE_BEGIN )

/****************************************************************************
 *                          ATT Booster UT Messages
 ****************************************************************************/
/* mark the following as comment during DEV stage only, we should unmark it after DEV*/
#if defined(__MTK_INTERNAL__) && !defined(__MTK_TARGET__)  && defined(__ATT_BOOSTER_SUPPORT__)
//#include "att_booster_ut_msg.h"
#endif
MSG_ID_MT_CIQ_METRIC_IND,

MSG_ID_MT_CIQ_LT01_IND,
MSG_ID_FOR_FRAMEWORK_TEST_1,
MSG_ID_EM_EUTRA_RRC_MESSAGE_S_IND,
MSG_ID_EM_EUTRA_RRC_MESSAGE_M_IND,
MSG_ID_EM_EUTRA_RRC_MESSAGE_L_IND,

MSG_ID_DHL_MT_PEER_TRACE_IND,
MSG_ID_DHL_MT_ICD_IND,

MSG_ID_ATP_MT_DMF_CMD_REQ,
MSG_ID_ATP_MT_DMF_WIFIASC_REQ,


MODULE_MSG_END( MSG_ID_MTF_CODE_TAIL )


#endif // SDM_MSGID_H

