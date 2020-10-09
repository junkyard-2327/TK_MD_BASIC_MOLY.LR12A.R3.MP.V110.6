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

/*****************************************************************************
 *
 * Filename:
 * ---------
 * dhl_nvram_def.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * 
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef NVRAM_NOT_PRESENT

#include "kal_general_types.h"
#ifdef NVRAM_AUTO_GEN
#include "nvram_auto_gen.h"
#endif

#include "nvram_enums.h"
#include "nvram_defs.h"

/*
 *   User Headers & Default value
 */
#include "dhl_nvram_def.h" 
#include "dhl_nvram_editor.h"

// Default Values
#if !defined(__CUSTOMIZED_PORT_SETTING__)
static port_setting_struct const NVRAM_EF_PORT_SETTING_DEFAULT[]=
{
// ################################################
// Record 1
// ################################################
    {
    /********************************************/
    //      TST_PORT
    /********************************************/
    #if defined(__ANDROID_MODEM__)
        uart_port_dhl_sp,
    #else
        uart_port_usb2,
    #endif

    /********************************************/
    //      PS_UART_PORT
    /********************************************/
    #if defined(__SMART_PHONE_MODEM__)
        uart_port_at_ccci,
    #else
        uart_port_usb,
    #endif

    /********************************************/
    //      TST_BAUDRATE
    /********************************************/
        921600,

    /********************************************/
    //      PS_BAUDRATE
    /********************************************/
        115200,


        KAL_FALSE,                   /* High SpeedSIM */
        0,                           /* SWDBG */
    #if defined(__ONLY_ONE_UART__)
        1,                           /* uart power setting (0x03) */
    #else
        3,
    #endif

        uart_port_null,              /* CTI uart port: uart_null (value is 0x63 (99) */
        0,                           /* CTI baud rate: auto*/

    /********************************************/
    //      TST_PORT_L1
    /********************************************/
    #if defined(__ANDROID_MODEM__)
        uart_port_dhl_sp,
    #else
        uart_port_usb2,
    #endif

    /********************************************/
    //      TST_BAUDRATE_L1
    /********************************************/
        921600,


        0,                           /* tst output mode*/
    #if !defined( __UL1_STANDALONE__ )
        0,                            /* USB logging mode */
    #else
        #if defined(__MODEM_3G_LOGGING__) && defined(_DSPIRDBG__)
            2,
        #else
            1,
        #endif /* defined(__MODEM_3G_LOGGING__) && defined(_DSPIRDBG__) */
    #endif /*  __UL1_STANDALONE__  */

        uart_port_null,     //TST-DSP
        921600,             //TST-DSP baudrate

    /********************************************/
    //      usb_cdrom_config
    /********************************************/
        0,       // USB CD-ROM config,  0:CD-ROM , 1: COM

    /********************************************/
    //      SPEECH_PORT
    /********************************************/
        uart_port_usb4,

    /********************************************/
    //      PS_UART_PORT_2
    /********************************************/
	#if defined(__MODEM_CARD__)
        uart_port_usb3
    #else
		uart_port_null
	#endif
    },
};
#endif /* !defined(__CUSTOMIZED_PORT_SETTING__) */

// NVRAM_EF_DHL_FILTER_SIZE = 8182, only initialize first 32 bytes 
static kal_uint8 const NVRAM_EF_DHL_FILTER_DEFAULT[NVRAM_EF_DHL_FILTER_SIZE] =
{
	7,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,
  255, 255, 255, 255, 255, 255, 255, 255,
  255, 255, 255, 255, 255, 255, 255, 255,
};

// LID Declaration
ltable_entry_struct logical_data_item_table_dhl[] =
{
    {
        NVRAM_EF_TST_FILTER_LID,
        NVRAM_EF_TST_FILTER_TOTAL,
        NVRAM_EF_TST_FILTER_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "DH0Y",
        VER(NVRAM_EF_TST_FILTER_LID)
    },

    {
        NVRAM_EF_PORT_SETTING_LID,
        NVRAM_EF_PORT_SETTING_TOTAL,
        NVRAM_EF_PORT_SETTING_SIZE,
    #if defined(__CUSTOMIZED_PORT_SETTING__) && !defined(NVRAM_AUTO_GEN)
        NVRAM_NORMAL(NVRAM_EF_CUSTOM_PORT_SETTING_DEFAULT),
    #else
        NVRAM_NORMAL(NVRAM_EF_PORT_SETTING_DEFAULT),
    #endif
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "DH0Z",
        VER(NVRAM_EF_PORT_SETTING_LID)
    },
#if defined(__TST_DNT_LOGGING__)
    {
        NVRAM_EF_PS_L2COPRO_FILTER_SETTINGS_LID,
        NVRAM_EF_PS_L2COPRO_FILTER_SETTINGS_TOTAL,
        NVRAM_EF_PS_L2COPRO_FILTER_SETTINGS_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "DH31",
        VER(NVRAM_EF_PS_L2COPRO_FILTER_SETTINGS_LID)
    },
#endif  //#if defined(__TST_DNT_LOGGING__)
    {
        NVRAM_EF_DHL_FILTER_LID,
        NVRAM_EF_DHL_FILTER_TOTAL,
        NVRAM_EF_DHL_FILTER_SIZE,
        NVRAM_NORMAL(NVRAM_EF_DHL_FILTER_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "DH1K",
        VER(NVRAM_EF_DHL_FILTER_LID)
    },
    {
        NVRAM_EF_DSP_FILTER_LID,
        NVRAM_EF_DSP_FILTER_TOTAL,
        NVRAM_EF_DSP_FILTER_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "DH1M",
        VER(NVRAM_EF_DSP_FILTER_LID)
    },

	 {
        NVRAM_EF_TST_CONFIG_LID,
        NVRAM_EF_TST_CONFIG_TOTAL,
        NVRAM_EF_TST_CONFIG_SIZE,
        NVRAM_NORMAL(NVRAM_EF_ZERO_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "DH72",
        VER(NVRAM_EF_TST_CONFIG_LID)
    },
    NVRAM_LTABLE_END
};

#endif /* NVRAM_NOT_PRESENT */
