/*!
 *  @file usbcore_direct.c
 *  @author Roger Huang <bo-kai.haung@mediatek.com>
 *  @version 1.0
 *  @section LICENSE
 *
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
 *  @section DESCRIPTION
 *  This file provides main functions of usbcore
 */

#include "kal_public_api.h"
#include "syscomp_config.h"
#include "usbcore_common.h"
#include "usbcore_hif.h"
#include "usbcore_usbstd.h"
#include "usbcore_main.h"
#include "hmu.h"
#include "hmu_conf_data.h"
#include "sysservice_msgid.h"
#include "nvram_interface.h"
#include "nvram_data_items.h"
#include "usbcore_debug.h"

#include "hif_usb.h"
#include "usbcore_main.h"
#include "usbcore_hif.h"
#include "hifusb_qmu.h"
#include "hif_ior.h"
#include "qmu_bm_util.h"
#include "qmu_bm.h"
#include "usbcore_ind_q.h"
#include "usbcore_direct.h"
#include "ufpm_if.h"

void usbc_direct_hif_usbcore_send_indication()
{
    usbc_ind_t ind_to_enqueue;

    ind_to_enqueue.type = USBC_IND_UFPM_POLL;
    ind_to_enqueue.ext = 0;
    ind_to_enqueue.data = 0;
    usbc_enqueue_ind(&ind_to_enqueue);
    hmu_hifeg_set(HIF_DRV_EG_USBC_IND_EVENT);
}

void usbc_direct_hif_enable_poll_queue(kal_bool enable)
{
    usbc_core_get_instance()->hmu_indication = enable? (HIF_DRV_EG_HIF_TICK_EVENT | HIF_DRV_EG_USBC_IND_EVENT):HIF_DRV_EG_USBC_IND_EVENT;

    if(enable) {
        usbc_direct_hif_usbcore_send_indication();
    }
}

// Notify USB classes for USB evnets
void usbc_direct_hif_notify_usb_func_event(kal_uint8 class_device_id, usbc_usb_state_e state)
{
    usbc_core_indicate_function_state(class_device_id, state);

    return;
}

// notify USBCORE for USB events
void usbc_direct_hif_notify_usb_core_event(usbc_usb_state_e state)
{
    usbc_core_get_instance()->state = state;
}

// Notify USBCORE for configuration state, but do not broadcast ATTACHED notification for USB class
void usbc_direct_hif_attach(usbc_usb_speed_e speed, kal_uint8 address, kal_uint8 configuration)
{
    usbc_core_t* pUsbCore = usbc_core_get_instance();

    // Emulate speed change for USBCORE only
    pUsbCore->speed = speed;                    // emulate speed change notify: We do not need to re-compose configuration descriptors in MDT, so do NOT use usbc_core_speed_change
    usbc_core_notify_speed_change(speed);
    usbc_direct_hif_factory();

    // Emulate SetAddress for USBCORE only
    usbc_core_set_usb_address(address);     // set USB address

    // Emulate SetConfig for USBCORE only
    usbc_direct_core_set_config(configuration);

    // Update USBCORE callbacks
    usbc_direct_hif_factory();
}

// Notify USBCORE for RESET, but do NOT broadcast RESET notifucation for USB class
void usbc_direct_hif_detach()
{
    usbc_core_t    *pUsbCore = usbc_core_get_instance();

    // Clean USB indication queue
    usbc_empty_ind_queue(); 

    usbc_core_set_hif_configuration();
    pUsbCore->usb_configuration = 0;
    pUsbCore->state = USBC_USB_STATE_RESET;
    usbc_core_clear_status();
}

void usbc_direct_set_config_class_device(kal_uint8 class_device_id, kal_uint8 configuration)
{
    #define CFG_TO_INDEX(config)   (config-1)

    usbc_core_t    *pUsbCore = usbc_core_get_instance();
    usbc_class_set_config_func_t class_set_config_func;
    usb_class_type_e    type;
    usb_cfg_param_t     cfg_param;

    cfg_param = pUsbCore->dev_param->mode_param[pUsbCore->mode].cfg_param[CFG_TO_INDEX(configuration)];
    type = cfg_param.class_type[class_device_id];
    class_set_config_func = usbc_get_class_set_config_func(type);

    if (class_set_config_func) {
        class_set_config_func(class_device_id, CFG_TO_INDEX(configuration), cfg_param.class_ctxt[class_device_id]);
    }
}

void usbc_direct_core_set_config(kal_uint8 configuration)
{
    #define CFG_TO_INDEX(config)   (config-1)

    usbc_core_t        *pUsbCore = usbc_core_get_instance();
    //kal_bool            result = KAL_TRUE;
    kal_uint32          idx_class;
    usb_class_type_e    type;
    kal_uint32          idx_if;
    kal_uint32          idx_ep;

    /* Check if configuration is changed */
    if (pUsbCore->usb_configuration == configuration) {
        usbc_trace_info(USBCORE_HIF_SET_CONFIG_UNCHANGED);
        return;
    }
    pUsbCore->usb_configuration = configuration;

    /* Reinit usb classes of old configuration */
    usbc_trace_info(USBCORE_HIF_SET_CONFIG_REINIT_START);
    usbc_reinit_class();
    usbc_trace_info(USBCORE_HIF_SET_CONFIG_REINIT_END);

    if (configuration == 0)
    {  /* Clear all class device / interface / tx_queue / rx_queue number */
       pUsbCore->total_class_devices = 0;
       pUsbCore->total_class_interfaces = 0;
       pUsbCore->total_tx_queues = 0;
       pUsbCore->total_rx_queues = 0;
    } else
    {
        /* Fill class_device / interface / tx_queue / rx_queue */
        pUsbCore->total_class_devices = pUsbCore->dev_param->mode_param[pUsbCore->mode].cfg_param[CFG_TO_INDEX(configuration)].class_num;
        for (idx_class = 0; idx_class < pUsbCore->total_class_devices; idx_class ++)
        {
            type = pUsbCore->dev_param->mode_param[pUsbCore->mode].cfg_param[CFG_TO_INDEX(configuration)].class_type[idx_class];
            pUsbCore->class_device[idx_class].state = USBC_CORE_CLASS_DEVICE_STATE_INITIATED;
            pUsbCore->class_device[idx_class].class_type = type;
            pUsbCore->class_device[idx_class].total_pipes = 0;
        }

        pUsbCore->total_class_interfaces = pUsbCore->resource_interface_number[CFG_TO_INDEX(configuration)];
        for (idx_if = 0; idx_if < pUsbCore->total_class_interfaces; idx_if ++)
        {
            kal_mem_cpy(&pUsbCore->class_interface[idx_if],
                           &pUsbCore->if_info[CFG_TO_INDEX(configuration)][idx_if].class_interface,
                           sizeof(usbc_core_class_interface_t));
            pUsbCore->class_interface[idx_if].state = USBC_CORE_CLASS_INTERFACE_STATE_INITIATED;
        }

        pUsbCore->total_tx_queues = pUsbCore->resource_ep_tx_number[CFG_TO_INDEX(configuration)];
        for (idx_ep = 0; idx_ep < pUsbCore->total_tx_queues; idx_ep ++)
        {
            kal_mem_cpy(&pUsbCore->tx_queue[idx_ep],
                           &pUsbCore->ep_tx_info[CFG_TO_INDEX(configuration)][idx_ep].queue_info,
                           sizeof(usbc_core_queue_t));
            pUsbCore->tx_queue[idx_ep].state = USBC_CORE_QUEUE_STATE_INITIATED;
            pUsbCore->class_device[pUsbCore->tx_queue[idx_ep].class_device_id].total_pipes ++;
        }

        pUsbCore->total_rx_queues = pUsbCore->resource_ep_rx_number[CFG_TO_INDEX(configuration)];
        for (idx_ep = 0; idx_ep < pUsbCore->total_rx_queues; idx_ep ++)
        {
            kal_mem_cpy(&pUsbCore->rx_queue[idx_ep],
                           &pUsbCore->ep_rx_info[CFG_TO_INDEX(configuration)][idx_ep].queue_info,
                           sizeof(usbc_core_queue_t));
            pUsbCore->rx_queue[idx_ep].state = USBC_CORE_QUEUE_STATE_INITIATED;
            pUsbCore->class_device[pUsbCore->rx_queue[idx_ep].class_device_id].total_pipes ++;
        }
    }

    /* According to Ming's comment in 2013/4/24, we can still set old property to hif if usb_configuration is changed to 0 */
    //usbc_core_set_hif_configuration();

    //usbc_trace_info(USBCORE_HIF_SET_CONFIG_HIF, pUsbCore->usb_configuration);
    //usbc_core_set_usbhif_configuration(pUsbCore->usb_configuration);

    if (pUsbCore->usb_configuration > 0) {
        pUsbCore->state = USBC_USB_STATE_ATTACHED;
    } else {
        pUsbCore->state = USBC_USB_STATE_ATTACHING;
    }


    return;
}


kal_bool usbc_direct_dispatch_control_setup_packet(kal_uint8 class_device_id, void* pkt_ptr)
{
    usbc_core_t        *pUsbCore = usbc_core_get_instance();
    kal_bool handled = KAL_TRUE;
    hifusb_setup_packet_t *p_setup = (hifusb_setup_packet_t*)pkt_ptr;
    kal_uint8 infx;

    pUsbCore->setup_packet.bmRequestType    = p_setup->bmRequestType;
    pUsbCore->setup_packet.bRequest         = p_setup->bRequest;
    pUsbCore->setup_packet.wValue           = USBC_EF16P((kal_uint8*)&p_setup->wValue);
    pUsbCore->setup_packet.wIndex           = USBC_EF16P((kal_uint8*)&p_setup->wIndex);
    pUsbCore->setup_packet.wLength          = USBC_EF16P((kal_uint8*)&p_setup->wLength);

    infx = usbc_class_device_get_1st_interface(class_device_id);

    if ( (pUsbCore->setup_packet.bmRequestType & USBC_REQUEST_TYPE_MASK) == USBC_REQUEST_TYPE_CLASS &&
         (pUsbCore->setup_packet.bmRequestType & USBC_REQUEST_RECIP_MASK) == USBC_REQUEST_RECIP_INTERFACE &&
         (infx < pUsbCore->total_class_interfaces) ) {

        (pUsbCore->class_interface[infx]).notify_control_setup_packet(class_device_id, pkt_ptr);
    }
    else {
        /* unknown reqeuset */
        //ASSERT(0);
        handled = KAL_FALSE;
    }
   
    return handled; 
}

void usbc_direct_class_device_submit_control_request(ufpm_send_ap_ep0_msg_t* ep0_rsp_ptr, kal_bool isIndication)
{
    // Send control results vai UFPM
    ufpm_set_control_request(ep0_rsp_ptr, isIndication);
}

kal_bool usbc_direct_hif_usbq_chk_empty(hif_queue_type_e core_queue_hif_type, kal_uint8 logic_queue_no)
{
    usbc_core_t        *pUsbCore = usbc_core_get_instance();
    kal_bool isEmpty;
    kal_bool isTx = ((core_queue_hif_type == HIFQ_TYPE_RX) || (core_queue_hif_type == HIFQ_TYPE_RX_W_BPS))? KAL_FALSE:KAL_TRUE;
    kal_uint8 phy_queue_no = (isTx)? HIFUSB_EPNO_2_QNO(pUsbCore->tx_queue[logic_queue_no].ep_no):HIFUSB_EPNO_2_QNO(pUsbCore->rx_queue[logic_queue_no].ep_no);

    isEmpty = hifusb_chk_que_empty(isTx, phy_queue_no);

    usbc_data_trace(USBCORE_DIRECT_CHK_QUEUE_EMPTY, isTx, logic_queue_no, phy_queue_no, isEmpty);

    return isEmpty;
}

void usbc_direct_hifusb_set_usb_address_emulate(kal_uint8 address)
{
    // Do nothing because USB driver does not have to be notified for speed in USB fast path
    return;
}

kal_bool usbc_direct_hifusb_set_usbhif_connect_disconnect()
{
    // Do nothing because USB driver does not have to be connect/disconnect USB
    return KAL_TRUE;
}

void usbc_direct_init_ufpm_mapping_table(kal_uint8 config_no, kal_uint8 class_device_id, ufpm_usb_mapping_t* perClassMapTlb)
{
    usbc_core_t        *pUsbCore = usbc_core_get_instance();
    usbc_endpoint_info_t    *tx_ep, *rx_ep;
    usbc_core_queue_t   *tx_q, *rx_q;
    kal_uint8 idx, mapTlbIdx = 0;

    // Fill Tx EP/queue info into perClassMapTlb
    for(idx = 0; idx < pUsbCore->resource_ep_tx_number[config_no]; idx++) {
        tx_ep = &(pUsbCore->ep_tx_info[config_no][idx]);
        tx_q = &(tx_ep->queue_info);

        if(0 == tx_ep->epdscr_size) {
            break;
        }
        else {
            if(tx_q->class_device_id == class_device_id) {
                perClassMapTlb[mapTlbIdx].type = 0x40 | ((tx_q->double_fifo) << 4) | ((tx_q->xfer_type - 1) << 2) | 0x00;
                perClassMapTlb[mapTlbIdx].map = tx_q->ep_no; 
                perClassMapTlb[mapTlbIdx].maxPktSize = tx_q->max_packet_size;
                perClassMapTlb[mapTlbIdx].queue_config = tx_q->config;
                mapTlbIdx++;
            }
        }
    }

    // Fill Rx EP/queue info into perClassMapTlb
    for(idx = 0; idx < pUsbCore->resource_ep_rx_number[config_no]; idx++) {
        rx_ep = &(pUsbCore->ep_rx_info[config_no][idx]);
        rx_q = &(rx_ep->queue_info);

        if(0 == rx_ep->epdscr_size) {
            break;
        }
        else {
            if(rx_q->class_device_id == class_device_id) {
                perClassMapTlb[mapTlbIdx].type = 0x40 | ((rx_q->double_fifo) << 4) | ((rx_q->xfer_type - 1) << 2) | 0x01;
                perClassMapTlb[mapTlbIdx].map = rx_q->ep_no;
                perClassMapTlb[mapTlbIdx].maxPktSize = rx_q->max_packet_size;
                perClassMapTlb[mapTlbIdx].queue_config = rx_q->config;
                mapTlbIdx++;
            }
        }
    }

    return;
}

kal_bool usbc_direct_hif_init(void)
{
    kal_bool        result = KAL_FALSE;
    USBC_NON_EXCEPTION_MODE_CHECK();

    result = hifusb_init_ufp();
    ASSERT(result);
    return result;
}


void usbc_direct_set_usb_mapping(kal_bool isTx, kal_uint8 md_q_no, kal_uint8 ap_ep_no)
{
    usbc_core_t        *pUsbCore = usbc_core_get_instance();

    if(isTx) {
        pUsbCore->tx_queue[md_q_no].ep_no = ap_ep_no;

    } else {
        pUsbCore->rx_queue[md_q_no].ep_no = ap_ep_no;
    }
}

void usbc_direct_lhifcore_sw_ul_enable(kal_bool en)
{
    if(en) {
        lhifcore_sw_ul_enable(KAL_TRUE, usbc_normal_hif_meta_ul_lhif_notify);
    }
    else {
        lhifcore_sw_ul_enable(KAL_FALSE, NULL);
    }
}
