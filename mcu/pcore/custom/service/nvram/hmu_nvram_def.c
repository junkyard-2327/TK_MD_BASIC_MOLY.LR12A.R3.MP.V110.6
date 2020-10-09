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
 * hmu_nvram_def.c
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
#include "hmu_nvram_def.h" 
#include "hmu_nvram_editor.h"

// Default Values
#if defined (__HMU_ENABLE__)
static hmu_conf_struct const NVRAM_EF_HMU_CONFIG_DEFAULT[] =
{
      {
        3,                      //kal_uint32    dev_num;
        8,                     //kal_uint32    ext_hifinfo_len;
		{0x20, 0x4E, 0x00, 0x00, // kal_uint32                          enum_timeout;
		0x88, 0x13, 0x00, 0x00}, // kal_uint32                          tx_timeout;
      {
      {
                HMU_USB_DEV_RNDIS,  //hmuEmuDeviceTyep_enum     dev_type;
                0,                  //kal_uint32                dev_mapping;
                {NULL},             //void                      *reserve ;
                11,                 //kal_uint32                ext_devinfo_len;
                "Test RNDIS"        //kal_char                  ext_devinfo[HMU_MAX_EMUDEV_EXTINFO_SIZE];
      },
      {
                HMU_USB_DEV_ACM,    //hmuEmuDeviceTyep_enum     dev_type;
                uart_port_usb,      //kal_uint32                dev_mapping;
                {NULL},             //void                      *reserve ;
                10,                 //kal_uint32                ext_devinfo_len;
                "Test ACM1"         //kal_char                  ext_devinfo[HMU_MAX_EMUDEV_EXTINFO_SIZE];
      },
      {
                HMU_USB_DEV_ACM,    //hmuEmuDeviceTyep_enum     dev_type;
                uart_port_usb2,     //kal_uint32                dev_mapping;
                {NULL},             //void                      *reserve ;
                10,                 //kal_uint32                ext_devinfo_len;
                "Test ACM2"         //kal_char                  ext_devinfo[HMU_MAX_EMUDEV_EXTINFO_SIZE];
            }
        }
      },
};
#ifdef __USB_MBIM_SUPPORT__
static hmu_conf_struct const NVRAM_EF_HMU_CONFIG_MBIM[] =
{
    {
        1,                      //kal_uint32    dev_num;
        8,                     //kal_uint32    ext_hifinfo_len;
		{0x20, 0x4E, 0x00, 0x00, // kal_uint32                          enum_timeout;
		0x88, 0x13, 0x00, 0x00}, // kal_uint32                          tx_timeout;
        {
            {
                HMU_USB_DEV_MBIM,   //hmuEmuDeviceTyep_enum     dev_type;
                0,                  //kal_uint32                dev_mapping;
                {NULL},             //void                      *reserve ;
                10,                 //kal_uint32                ext_devinfo_len;
                "Test MBIM"         //kal_char                  ext_devinfo[HMU_MAX_EMUDEV_EXTINFO_SIZE];
            },
        }
    },
};
#endif /* __USB_MBIM_SUPPORT__ */


#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

static hmu_hd_conf_struct const NVRAM_EF_HMU_HD_CONFIG_DEFAULT[] =
{
    {
        //kal_uint32            dev_num;
        1,
        //kal_uint32            ext_hifinfo_len;
        14,
        //kal_char          ext_hifinfo[HMU_MAX_HIF_EXTINFO_SIZE];
        "i am hd device",
        //hmu_emudev_info   dev_info[HMU_MAX_EMUDEVNUM];
        {
            {
                HMU_USB_DEV_ACM,//hmuEmuDeviceTyep_enum  dev_type;
                8,//kal_uint32          dev_mapping;
                {NULL},//void               *reserve ;
                9,//kal_uint32          ext_devinfo_len;
                "I am ACM"//kal_char            ext_devinfo[HMU_MAX_EMUDEV_EXTINFO_SIZE];
            },
        },
    },
};
#endif

// LID Declaration
ltable_entry_struct logical_data_item_table_hmu[] =
{

#ifdef __HMU_ENABLE__
    {
        NVRAM_EF_HMU_CONFIG_LID,
        NVRAM_EF_HMU_CONFIG_TOTAL,
        NVRAM_EF_HMU_CONFIG_SIZE,
        //NVRAM_CUSTPACK(NVRAM_EF_HMU_CONFIG_DEFAULT),
#ifdef __USB_MBIM_SUPPORT__
        NVRAM_NORMAL(NVRAM_EF_HMU_CONFIG_MBIM),
#else
        NVRAM_NORMAL(NVRAM_EF_HMU_CONFIG_DEFAULT),
#endif
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "HM7A",
        VER(NVRAM_EF_HMU_CONFIG_LID),
    },
	{
        NVRAM_EF_HMU_HD_CONFIG_LID,
        NVRAM_EF_HMU_HD_CONFIG_TOTAL,
        NVRAM_EF_HMU_HD_CONFIG_SIZE,
        //NVRAM_CUSTPACK(NVRAM_EF_HMU_CONFIG_DEFAULT),
        NVRAM_NORMAL(NVRAM_EF_HMU_HD_CONFIG_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "HM7B",
        VER(NVRAM_EF_HMU_HD_CONFIG_LID),
    },
#endif
    NVRAM_LTABLE_END
};

#endif /* NVRAM_NOT_PRESENT */
