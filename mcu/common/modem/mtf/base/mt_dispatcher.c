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
 * mt_task.c
 *
 * Project:
 * --------
 * UMOLYA
 *
 * Description:
 * ------------
 * MT_Framework task implement 
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

/*****************************************************************************/
/*                            Includes                                       */
/*****************************************************************************/

#include "mt.h"
#include "mt_dispatcher.h"

/*****************************************************************************/
/*                               Define                                      */
/*****************************************************************************/

/*****************************************************************************/
/*                         Global variables                                  */
/*****************************************************************************/

/*****************************************************************************/
/*                         External functions                                */
/*****************************************************************************/

/*****************************************************************************/
/*                         Internal functions                                */
/*****************************************************************************/

/*****************************************************************************/
/*                         Function Body                                     */
/*****************************************************************************/

int
mt_dispatcher_entry_init(void* entry, kal_uint16 magic, kal_uint32 dispatch_key)
{
	mt_dispatcher_entry_head_t *h = entry;
	if (h->inited) {
		return -1;
	}
	
	h->magic = magic;
	h->inited = KAL_TRUE;
	h->dispatch_key = dispatch_key;
	h->next = NULL;
	
	return 0;
}

int
mt_dispatcher_add_entry(mt_dispatcher_list_t *list, kal_uint32 code, void* entry)
{
	mt_dispatcher_entry_head_t *e = entry;
	e->next = NULL;
	e->dispatch_key = code;
	if (list->tail == NULL) {
		list->head = list->tail = e;
	} else {
		list->tail = ((mt_dispatcher_entry_head_t *)list->tail)->next = e;
	}
    
    return 0;
}

void*
mt_dispatcher_find_entry(mt_dispatcher_list_t *list, kal_uint32 code, void* last_entry)
{
	mt_dispatcher_entry_head_t *e = (last_entry?((mt_dispatcher_entry_head_t *)last_entry)->next:list->head);
	while(e) {
		if (e->dispatch_key == code) {
			return e;
		}
		e = e->next;
	}
	return NULL;
}
void 
mt_dispatcher_verify(void* d, kal_uint16 magic)
{
	mt_dispatcher_entry_head_t *e = d;
	EXT_ASSERT(e->magic == magic, e->magic, magic, 0);
}

void
mt_dispatcher_init()
{
	EXT_ASSERT(MT_DISPATCHER_ENTRY_RESERVED_SIZE == sizeof(mt_dispatcher_entry_head_t), MT_DISPATCHER_ENTRY_RESERVED_SIZE, sizeof(mt_dispatcher_entry_head_t), 0);
}
