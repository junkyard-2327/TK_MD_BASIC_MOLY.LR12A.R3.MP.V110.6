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
 * mt_dispathcer.h
 *
 * Project:
 * --------
 * UMOLYA
 *
 * Description:
 * ------------
 * MT Framework dispatcher prototyes
 *
 * Author:
 * -------
 * -------
 *
 *
 * ==========================================================================
 * $Log$ 
 *
 * 
 ****************************************************************************/
#ifndef _MT_DISPATCHER_H_
#define _MT_DISPATCHER_H_

#include "kal_general_types.h"

#ifdef __MTK_TARGET__
#define MT_DISPATCHER_ENTRY_RESERVED_SIZE	(12)
#else
#define MT_DISPATCHER_ENTRY_RESERVED_SIZE	(16)
#endif

#define GET_RULE_CODE(type, code, protocol)   ( 0xFFFFFFFF & (protocol | code << 2 | type << 18) )
#define GET_ICD_TYPE_FROM_RULE_CODE(code)   ( 0x00000003 & (code) >> 18)
#define GET_ICD_CODE_FROM_RULE_CODE(code)   ( 0x0000FFFF & (code) >> 2)
#define GET_ICD_PROTOCOL_FROM_RULE_CODE(code)   ( 0x00000003 & (code) )

typedef struct _mt_dispatcher_list_t {
	void *head;
	void *tail;
} mt_dispatcher_list_t;

int mt_dispatcher_entry_init(void* entry, kal_uint16 magic, kal_uint32 dispatch_key);
int mt_dispatcher_add_entry(mt_dispatcher_list_t *tbl, kal_uint32 code, void* entry);
void* mt_dispatcher_find_entry(mt_dispatcher_list_t *tbl, kal_uint32 code, void* last_entry);
void mt_dispatcher_init();
void mt_dispatcher_verify(void* e, kal_uint16 magic);

#endif // _MT_DISPATCHER_H_