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
 * bt_nvram_def.c
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
#include "bt_nvram_def.h" 
#include "bt_nvram_editor.h" 

// Default Values

#ifdef  __BTMODULE_RFMD3500__
static kal_uint8 const NVRAM_EF_BTRADIO_RFMD3500_DEFAULT[] = {
/* BluetoothAddress                  ,  6 */ 0xAD,0x5A,0x00,0x00,0x00,0x00,
/* MinEncryptionSize                 ,  1 */ 0x01,
/* MaxEncryptionSize                 ,  1 */ 0x10,
/* HCITransportLayerParameters       ,  3 */ 0x02,0x00,0x00,
/* FixedPIN                          , 16 */ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                                             0x00,0x00,0x00,0x00,0x00,0x00,
/* FixedPINLength                    ,  1 */ 0x00,
/* SleepEnableMask					 ,	1 */ 0x01,
/* LowPowerClockParameter	   	  	 ,  8 */ 0x03,0x02,0x00,0x00,0x00,0x10,0x00,0x00,
/* PowerControlConfiguration         , 13 */ 0x07,0x07,0x07,0x02,0x00,0x01,0x02,0x03,0x04,0x05,
                                             0x06,0x07,0x07,
/* SleepControlParameters            , 12 */ 0x00,0x00,0x14,0x10,0x20,0x30,0x30,0x30,0x30,0x00,
                                             0x03,0x02,
/* DebugControl                      ,  4 */ 0x00,0x00,0x2C,0x01,
/* LCandRMOverrideEnable             ,  4 */ 0x10,0x00,0x00,0x00,
/* RadioRegisterOverride             ,  6 */ 0x01,0x00,0x00,0x00,0x0D,0x7F,
/* CodecConfiguration                ,  8 */ 0x20,0x00,0x10,0x1F,0x00,0x0F,0x0F,0x02,
/* CVSDGainVolumeSettings            ,  6 */ 0x02,0x00,0x00,0x00,0x0E,0x0E,
/* VoiceSettings                     ,  2 */ 0x60,0x00,
/* UserBaudRate                      ,  3 */ 0x11,0x00,0x17,
/* CoexistenceParameters             ,  4 */// 0x02,0xA4,0x0E,0x00,
/* LowPowerDriftRate                 ,  1 */ 0x2D,
/* MaxTxPowerLevel                   ,  1 */ 0x04,
/* AdaptiveFrequencyHoppingParameters, 29 */ 0x02,0x00,0x3C,0x00,0x3C,0x00,0x00,0x01,0x0A,0x05,
                                             0x13,0x4F,0x02,0x08,0x01,0x0C,0x01,0x00,0x00,0x00,
                                             0x40,0x00,0x00,0x00,0x40,0x00,0x00,0x0A,0x05,
/* BufferSize                        ,  4 */ 0x7C,0x00,0x7C,0x00,
/* GPIO Mapping                      , 16 */ 0xFF,0x01,0xFF,0x02,0x04,0x06,0xFF,0x00,0xFF,0x00,
                                             0xFF,0x00,0xFF,0x00,0xFF,0x00,
/* GPIO Polarity                     ,  4 */ 0x00,0x00,0x04,0x00
};
#endif /* __BTMODULE_RFMD3500__*/

#ifdef  __BTMODULE_MT6601__
static kal_uint8 const NVRAM_EF_BTRADIO_MT6601_DEFAULT[] = {
/* BDAddr                       ,  6 */ 0x01,0x66,0x00,0x00,0x00,0x00,
/* ClassOfDevice                ,  3 */ 0x00,0x1F,0x00,
/* LinkKeyType                  ,  1 */ 0x01,
/* UnitKey                      , 16 */ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/* Encryption                   ,  3 */ 0x00,0x02,0x10,
/* PinCodeType                  ,  1 */ 0x00,
/* Voice                        ,  2 */ 0xAC,0x00,
/* Codec                        ,  1 */ 0x23,
/* Radio                        , 30 */ 0x02,0x01,0x7F,0x07,0x07,0x80,0x00,0x0B,0x03,
                                        0x07,
                                        0xFA,0x00,0x32,0x01,0x00,0x03,0xFF,0x16,0x07,0x17,0x01,0x35,0x7F,0x28,0x00,0x00,0x00,0x00,0x00,0x00,
#if defined(__MTK_TARGET__)
/* Sleep                        ,  6 */ 0x03,0x40,0x1F,0x40,0x1F,0x02,
#else
/* Sleep                        ,  6 */ 0x00,0x40,0x1F,0x00,0x00,0x02,
#endif
/* MainOscillatorInfo           ,  5 */ 0x01,0x01,0x14,0x0A,0x08,
/* LPOInfo                      ,  4 */ 0x01,0x04,0xFA,0x0A,
/* AFH                          ,  9 */ 0x40,0x06,0x40,0x06,0x40,0x1F,0x01,0x08,0x04,
/* PTA                          , 49 */ 0x01,0x14,0x00,0x14,0x00,0x00,0x00,0x00,0x00,
                                        0x41,0x14,0x00,0x14,0x00,0x00,0x00,0x00,0x00,
                                        0x21,0x14,0x00,0x14,0x00,0x00,0x00,0x00,0x00,
                                        0x00,0x00,0x00,0x00,0x00,
                                        0xA4,0x04,0x80,0x01,0x3F,0x02,0x38,0x04,
                                        0xDC,0x0A,0x00,0x00,0xFF,0x00,0x00,0x01,0x01,
/* WDT                          ,  2 */ 0xFF,0x00,
/* Debug                        ,  1 */ 0x80,
/* UART                         ,  2 */ 0x0B,0x00
};
#endif /* __BTMODULE_MT6601__*/

#ifdef  __BTMODULE_MT6611__
static kal_uint8 const NVRAM_EF_BTRADIO_MT6611_DEFAULT[] = {
/* BDAddr                       ,  6 */ 0x11,0x66,0x00,0x00,0x00,0x00,
/* Radio Cap Id                 ,  1 */ 0x40,
/* LinkKeyType                  ,  1 */ 0x01,
/* UnitKey                      , 16 */ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/* Encryption                   ,  3 */ 0x00,0x02,0x10,
/* PinCodeType                  ,  1 */ 0x00,
/* Voice                        ,  2 */ 0x60,0x00,
/* Codec                        ,  1 */ 0x23,
/* Radio                        , 6 */ 0x07,0x80,0x00,0x06,0x03,0x07,
#if defined(__MTK_TARGET__)
/* Sleep                        ,  7 */ 0x03,0x40,0x1F,0x40,0x1F,0x00,0x04,
#else
/* Sleep                        ,  7 */ 0x00,0x40,0x1F,0x00,0x00,0x00,0x04,
#endif
/* Reserved                      ,  2 */0x80,0x00,
};
#endif /* __BTMODULE_MT6611__*/


#if  defined(__BTMODULE_MT6612__) || defined(__BTMODULE_MT6616__) || defined(__BTMODULE_MT6622__) || defined(__BTMODULE_MT6626__) || defined(__BTMODULE_MT6236__) || defined(__BTMODULE_MT6256__) || defined(__BTMODULE_MT6276__) || defined(__BTMODULE_MT6255__)
static kal_uint8 const NVRAM_EF_BTRADIO_MTK_BT_CHIP_DEFAULT[] = {
/* BDAddr                       ,  6 */ 0x00,0x66,0x00,0x00,0x00,0x00,
/* Radio Cap Id                 ,  1 */ 0xFF,
/* LinkKeyType                  ,  1 */ 0x01,
/* UnitKey                      , 16 */ 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/* Encryption                   ,  3 */ 0x00,0x02,0x10,
/* PinCodeType                  ,  1 */ 0x00,
/* Voice                        ,  2 */ 0x60,0x00,
/* Codec                        ,  1 */ 0x23,
/* Radio                        ,  6 */ 0x07,0x80,0x00,0x06,0x03,0x07,
#if defined(__MTK_TARGET__)
/* Sleep                        ,  7 */ 0x03,0x40,0x1F,0x40,0x1F,0x00,0x04,
#else
/* Sleep                        ,  7 */ 0x00,0x40,0x1F,0x00,0x00,0x00,0x04,
#endif
/* Reserved                     ,  2 */0x80,0x00,
#if  defined(__BTMODULE_MT6626__) && defined(__PHONE__)
/* ECLK_SEL                     ,  1 */0x01,
#else
/* ECLK_SEL                     ,  1 */0x00,
#endif
};
#endif /* defined(__BTMODULE_MT6612__) || defined(__BTMODULE_MT6616__) || defined(__BTMODULE_MT6622__) || defined(__BTMODULE_MT6626__) || defined(__BTMODULE_MT6236__) || defined(__BTMODULE_MT6256__) || defined(__BTMODULE_MT6276__)*/






// LID Declaration
ltable_entry_struct logical_data_item_table_bt[] =
{

#ifdef  __BTMODULE_RFMD3500__
    {
        NVRAM_EF_BTRADIO_RFMD3500_LID,
        NVRAM_EF_BTRADIO_RFMD3500_TOTAL,
        NVRAM_EF_BTRADIO_RFMD3500_SIZE,
        NVRAM_NORMAL(NVRAM_EF_BTRADIO_RFMD3500_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "BT1G",
        VER(NVRAM_EF_BTRADIO_RFMD3500_LID)
    },
#endif
#ifdef  __BTMODULE_MT6601__
    {
        NVRAM_EF_BTRADIO_MT6601_LID,
        NVRAM_EF_BTRADIO_MT6601_TOTAL,
        NVRAM_EF_BTRADIO_MT6601_SIZE,
        NVRAM_NORMAL(NVRAM_EF_BTRADIO_MT6601_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "BT1H",
        VER(NVRAM_EF_BTRADIO_MT6601_LID)
    },
#endif

#ifdef  __BTMODULE_MT6611__
    {
        NVRAM_EF_BTRADIO_MT6611_LID,
        NVRAM_EF_BTRADIO_MT6611_TOTAL,
        NVRAM_EF_BTRADIO_MT6611_SIZE,
        NVRAM_NORMAL(NVRAM_EF_BTRADIO_MT6611_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "BT1I",
        VER(NVRAM_EF_BTRADIO_MT6611_LID)
    },
#endif

#if defined(__BTMODULE_MT6612__) || defined(__BTMODULE_MT6616__) || defined(__BTMODULE_MT6622__) || defined(__BTMODULE_MT6626__) || defined(__BTMODULE_MT6236__) || defined(__BTMODULE_MT6256__) || defined(__BTMODULE_MT6276__) || defined(__BTMODULE_MT6255__)
    {
        NVRAM_EF_BTRADIO_MTK_BT_CHIP_LID,
        NVRAM_EF_BTRADIO_MTK_BT_CHIP_TOTAL,
        NVRAM_EF_BTRADIO_MTK_BT_CHIP_SIZE,
        NVRAM_NORMAL(NVRAM_EF_BTRADIO_MTK_BT_CHIP_DEFAULT),
        NVRAM_CATEGORY_CALIBRAT,
        NVRAM_ATTR_AVERAGE,
        "BT6Y",
        VER(NVRAM_EF_BTRADIO_MTK_BT_CHIP_LID)
    },
#endif
    NVRAM_LTABLE_END
};

#endif /* NVRAM_NOT_PRESENT */
