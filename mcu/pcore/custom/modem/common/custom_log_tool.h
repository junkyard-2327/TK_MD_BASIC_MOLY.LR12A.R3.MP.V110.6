/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2009
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
 * Filename:
 * ---------
 *   custom_log_tool.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file defines Customer Log Tool function prototype.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by Customer Log tool. DO NOT MODIFY!! 
 *------------------------------------------------------------------------------
 * $Log$
 *
 * 09 09 2019 chuangde.zhang
 * [MOLY00420450] [CB70] About ModemKC_log for Commercial market issue
 * .
 *
 * 09 01 2019 chuangde.zhang
 * [MOLY00420450] [CB70] About ModemKC_log for Commercial market issue
 * .
 *
 * 07 18 2019 chuangde.zhang
 * init
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by Customer Log tool. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/
#ifndef _CUSTOM_LOG_TOOL_H
#define _CUSTOM_LOG_TOOL_H

#include "kal_general_types.h"

#ifdef __MODEMKC_LOG__
#include "modemkc_log_common.h"
#endif /* __MODEMKC_LOG__ */


extern void custom_log_example_func(kal_uint32 payload_size, void *payload);

#ifdef __MODEMKC_LOG__
extern void custom_create_mutexkc();
#endif 

extern void custom_log_modemkc_putrecord
(
#ifdef __MODEMKC_LOG__
    modemkc_log_feature_enum_type feature_id,
    kal_uint8 log_id,
#endif /* __MODEMKC_LOG__ */
    kal_uint32 payload_size,
    void *payload
);


#endif /* _CUSTOM_LOG_TOOL_H */

