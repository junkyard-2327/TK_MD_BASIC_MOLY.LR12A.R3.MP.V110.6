/*!
 *  @file usbcore_direct_ut.c
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

usbc_usb_speed_e usbc_direct_ut_get_speed()
{
    usbc_core_t* pUsbCore = usbc_core_get_instance();

    return pUsbCore->speed;
}

kal_uint8 usbc_direct_ut_get_address()
{
    usbc_core_t* pUsbCore = usbc_core_get_instance();

    return pUsbCore->usb_address;
}

kal_uint8 usbc_direct_ut_get_config()
{
    usbc_core_t* pUsbCore = usbc_core_get_instance();

    return pUsbCore->usb_configuration;
}

usbc_usb_state_e usbc_direct_ut_get_state()
{
    usbc_core_t* pUsbCore = usbc_core_get_instance();

    return pUsbCore->state;
}

kal_uint8 usbc_direct_ut_get_total_device()
{
    usbc_core_t* pUsbCore = usbc_core_get_instance();

    return pUsbCore->total_class_devices;
}

