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
 * Filename:
 * ---------
 *   usbcore_direct.h
 *
 * Project:
 * --------
 *   TATAKA
 *
 * Description:
 * ------------
 *   USB Core direct API.
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/
#ifndef _USBCORE_DIRECT_H
#define _USBCORE_DIRECT_H

#include "hifusb_qmu.h"
#include "kal_public_api.h"
#include "ufpm_usbcore.h"


void usbc_direct_hif_usbcore_send_indication();

void usbc_direct_hif_enable_poll_queue(kal_bool enable);

void usbc_direct_hif_notify_usb_func_event(kal_uint8 class_device_id, usbc_usb_state_e state);

void usbc_direct_hif_attach(usbc_usb_speed_e speed, kal_uint8 address, kal_uint8 configuration);

void usbc_direct_hif_detach();

void usbc_direct_set_config_class_device(kal_uint8 class_device_id, kal_uint8 configuration);

void usbc_direct_core_set_config(kal_uint8 configuration);

kal_bool usbc_direct_dispatch_control_setup_packet(kal_uint8 class_device_id, void* pkt_ptr);

kal_bool usbc_direct_hif_usbq_set_gpd(hif_queue_type_e q_type, kal_uint8 logic_queue_no, qbm_gpd* first_gpd, qbm_gpd* last_gpd);

kal_uint32 usbc_direct_hif_usbq_poll_gpd(hif_deq_info_t deq_info, void **first_gpd, void **last_gpd);

kal_bool usbc_direct_hif_chk_newpkt(kal_bool isTx, kal_uint8 logic_queue_no);

kal_bool usbc_direct_hif_usbq_chk_empty(hif_queue_type_e core_queue_hif_type, kal_uint8 q_num);

kal_uint32 usbc_direct_hif_usbq_flush_gpd(hif_queue_type_e q_type, kal_uint8 logic_queue_no, hif_flush_type_e flush_type , void **pp_head, void **pp_tail);

kal_uint32 usbc_direct_hif_sw_usbq_flush_gpd(hif_queue_type_e q_type, kal_uint8 logic_queue_no, hif_flush_type_e flush_type , void **pp_head, void **pp_tail);

void usbc_direct_hifusb_set_usb_address_emulate(kal_uint8 address);

void usbc_direct_init_ufpm_mapping_table(kal_uint8 config_no, kal_uint8 class_device_id, ufpm_usb_mapping_t* perClassMapTlb);

kal_bool usbc_direct_hif_init(void);

void usbc_direct_hif_notify_usb_core_event(usbc_usb_state_e state);

kal_bool usbc_direct_hifusb_set_usbhif_connect_disconnect();

void usbc_direct_set_usb_mapping(kal_bool isTx, kal_uint8 md_q_no, kal_uint8 ap_ep_no);

void usbc_direct_lhifcore_sw_ul_enable(kal_bool en);
#endif
