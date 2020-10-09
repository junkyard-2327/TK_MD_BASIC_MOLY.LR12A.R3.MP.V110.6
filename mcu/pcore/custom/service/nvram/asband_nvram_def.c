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
 * asband_nvram_def.c
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
#include "asband_nvram_def.h" 
#include "asband_nvram_editor.h" 



/*
        3G multiband support
bit     |	8     7    6    5    4    3    2    1
  |-------------------------------------------
byte 0  | VIII  VII  VI   V    IV	  III  II   I
  |-------------------------------------------
byte 1  |                                X    IX

*/
typedef enum
{
    Support_UMTS_BAND_I       = 0x01,
    Support_UMTS_BAND_II      = 0x02,
    Support_UMTS_BAND_III     = 0x04,
    Support_UMTS_BAND_IV      = 0x08,
    Support_UMTS_BAND_V       = 0x10,
    Support_UMTS_BAND_VI      = 0x20,
    Support_UMTS_BAND_VII     = 0x40,
    Support_UMTS_BAND_VIII    = 0x80,
    Support_UMTS_BAND_IX      = 0x01,
    Support_UMTS_BAND_X       = 0x02,
    Support_UMTS_BAND_XI      = 0x04,
    Support_UMTS_BAND_XII     = 0x08,
    Support_UMTS_BAND_XIII    = 0x10,
    Support_UMTS_BAND_XIV     = 0x20,
    Support_UMTS_BAND_XV      = 0x40,
    Support_UMTS_BAND_XVI     = 0x80,
    Support_UMTS_BAND_XVII    = 0x01,
    Support_UMTS_BAND_XVIII   = 0x02,
    Support_UMTS_BAND_XIX     = 0x04,
    Support_UMTS_BAND_XX      = 0x08,
    Support_UMTS_BAND_XXI     = 0x10,
    Support_UMTS_BAND_XXII    = 0x20,
    Support_UMTS_BAND_XXIII   = 0x40,
    Support_UMTS_BAND_XXIV    = 0x80,
    Support_UMTS_BAND_XXV     = 0x01,
    Support_UMTS_BAND_XXVI    = 0x02,
    Support_UMTS_BAND_XXVII   = 0x04,
    Support_UMTS_BAND_XXVIII  = 0x08,
    Support_UMTS_BAND_XXIX    = 0x10,
    Support_UMTS_BAND_XXX     = 0x20,
    Support_UMTS_BAND_XXXI    = 0x40,
    Support_UMTS_BAND_XXXII   = 0x80
}FDD_umts_band_nvram_bitmask_enum;

typedef enum
{
    Support_UMTS_BAND_A       = 0x01,
    Support_UMTS_BAND_B      = 0x02,
    Support_UMTS_BAND_C     = 0x04,
    Support_UMTS_BAND_D      = 0x08,
    Support_UMTS_BAND_E       = 0x10,
    Support_UMTS_BAND_F      = 0x20
}TDD_umts_band_nvram_bitmask_enum;


static kal_uint8 const NVRAM_EF_AS_BAND_SETTING_DEFAULT[] =
{
/* Byte 0 is GSM band */
    0
#if defined(__EGSM900__) && defined(__DISABLE_EGSM__) //mtk02475: AS and L1 need keep EGSM compile option turn on, request RAC turn on PGSM only
    + 0x01
#else /* defined(__EGSM900__) && defined(__DISABLE_EGSM__) */
#ifdef __PGSM900__
    + 0x01
#endif /* __PGSM900__ */
#ifdef __EGSM900__
    + 0x02
#endif /* __EGSM900__ */
#endif /* defined(__EGSM900__) && defined(__DISABLE_EGSM__) */
#ifdef __RGSM900__
    + 0x04
#endif /* __RGSM900__ */
#ifdef __DCS1800__
    + 0x08
#endif /* __DCS1800__ */
#ifdef __PCS1900__
    + 0x10
#endif /* __PCS1900__ */
#ifdef __GSM450__
    + 0x20
#endif /* __GSM450__ */
#ifdef __GSM850__
    + 0x80
#endif /* __GSM850__ */
    ,
#if defined(__MODEM_PACKAGE_DISABLE_UMTS_FDD__)
    0,0,0,0,
#else
/* Byte 1~4 is UMTS band */
	// for MT6276/MT6573 UMTS band customization, need to default turn on all UMTS band instead of check UMTS band feature option
	/* 1th	byte is first byte of UMTS supported band */
    0 // initial value
    + Support_UMTS_BAND_I
    + Support_UMTS_BAND_II
    + Support_UMTS_BAND_III
    + Support_UMTS_BAND_IV
    + Support_UMTS_BAND_V
    + Support_UMTS_BAND_VI
    + Support_UMTS_BAND_VII
    + Support_UMTS_BAND_VIII
    ,  // end of character

    /* 2th  byte is second byte of UMTS supported band */
    0 // initial value
    + Support_UMTS_BAND_IX
    + Support_UMTS_BAND_X
    + Support_UMTS_BAND_XI
    + Support_UMTS_BAND_XII
    + Support_UMTS_BAND_XIII
    + Support_UMTS_BAND_XIV
    + Support_UMTS_BAND_XV
    + Support_UMTS_BAND_XVI
    ,  // end of character

    /* 3th  byte is third byte of UMTS supported band */
    0 // initial value
    + Support_UMTS_BAND_XVII
    + Support_UMTS_BAND_XVIII
    + Support_UMTS_BAND_XIX
    + Support_UMTS_BAND_XX
    + Support_UMTS_BAND_XXI
    + Support_UMTS_BAND_XXII
    + Support_UMTS_BAND_XXIII
    + Support_UMTS_BAND_XXIV
    ,  // end of character

    /* 4th  byte is fourth byte of UMTS supported band */
    0 // initial value
    + Support_UMTS_BAND_XXV
    + Support_UMTS_BAND_XXVI
    + Support_UMTS_BAND_XXVII
    + Support_UMTS_BAND_XXVIII
    + Support_UMTS_BAND_XXIX
    + Support_UMTS_BAND_XXX
    + Support_UMTS_BAND_XXXI
    + Support_UMTS_BAND_XXXII
    ,  // end of character
#endif

/* Byte 5 ~ 36 are used for LTE bands; LSB of byte 5 is Band1 */
/* 5th  -  8th bytes : LTE FDD bands 
 * 9th  - 12th bytes : LTE TDD bands
 * 13th        byte  : LTE FDD bands (TS 36.101 v14.3.0)
 * 14th - 35th bytes : Reserved
 * 36th        byte  : LTE FDD bands (LTE-U)
 */
/* For UESIM, default is band 3/7/8/20/38/39/40/41 */
#ifdef __MODEM_PACKAGE_DISABLE_LTE_FDD__
    0, 0, 0, 0,
#else
#if defined(__UE_SIMULATOR__)
    /* 5th byte is first byte of LTE supported band */
    0xc4 
    ,  // end of character

    /* 6th byte is second byte of LTE supported band */
    0x00 // initial value
    ,  // end of character

    /* 7th byte is third byte of LTE supported band */
    0x08 // initial value
    ,  // end of character

    /* 8th byte is fourth byte of LTE supported band */
    0x00 // initial value
    ,  // end of character
#else
    /* 5th byte is first byte of LTE supported band */
    0xff // initial value
    ,  // end of character

    /* 6th byte is second byte of LTE supported band */
    0xff // initial value
    ,  // end of character

    /* 7th byte is third byte of LTE supported band */
    0xff // initial value
    ,  // end of character

    /* 8th byte is fourth byte of LTE supported band */
    0xff // initial value
    ,  // end of character
#endif
#endif // __MODEM_PACKAGE_DISABLE_LTE_FDD__

#ifdef __MODEM_PACKAGE_DISABLE_LTE_TDD__
    0, 0, 0, 0,
#else
#if defined(__UE_SIMULATOR__)
    /* 9th byte is fifth byte of LTE supported band */
    0xe0 // initial value
    ,  // end of character

    /* 10th byte is sixth byte of LTE supported band */
    0x01 // initial value
    ,  // end of character

    /* 11th byte is seventh byte of LTE supported band */
    0x00 // initial value
    ,  // end of character

    /* 12th byte is eightth byte of LTE supported band */
    0x00 // initial value    
    ,
#else
    /* 9th byte is fifth byte of LTE supported band */
    0xff // initial value
    ,  // end of character

    /* 10th byte is sixth byte of LTE supported band */
    0xff // initial value
    ,  // end of character

    /* 11th byte is seventh byte of LTE supported band */
    0xff // initial value
    ,  // end of character

    /* 12th byte is eightth byte of LTE supported band */
    0x7f // initial value
    ,
#endif
#endif // __MODEM_PACKAGE_DISABLE_LTE_TDD__
#if defined(__MODEM_PACKAGE_DISABLE_LTE_FDD__) || defined(__UE_SIMULATOR__)
    /* 13th byte is ninth byte of LTE supported band */
    0x00 // initial value
    ,  // end of character
#else
    /* 13th byte is ninth byte of LTE supported band */
    0x7f // initial value
    ,  // end of character
#endif //__MODEM_PACKAGE_DISABLE_LTE_FDD__ || __UE_SIMULATOR__
    /* 14th byte is tenth byte of LTE supported band */
    0x00 // initial value
    ,  // end of character

    /* 15th byte is eleventh byte of LTE supported band */
    0x00 // initial value
    ,  // end of character

    /* 16th byte is twelvth byte of LTE supported band */
    0x00 // initial value
    ,  // end of character

    /* 17th byte is thirteenth byte of LTE supported band */
    0x00 // initial value
    ,  // end of character

    /* 18th byte is fourteenth byte of LTE supported band */
    0x00 // initial value
    ,  // end of character

    /* 19th byte is fifteenth byte of LTE supported band */
    0x00 // initial value
    ,  // end of character

    /* 20th byte is sixteenth byte of LTE supported band */
    0x00 // initial value
    ,  // end of character

    /* 21st byte is seventeenth byte of LTE supported band */
    0x00 // initial value
    ,  // end of character

    /* 22nd byte is eighteenth byte of LTE supported band */
    0x00 // initial value
    ,  // end of character

    /* 23rd byte is nineteenth byte of LTE supported band */
    0x00 // initial value
    ,  // end of character

    /* 24th byte is twentieth byte of LTE supported band */
    0x00 // initial value
    ,  // end of character

    /* 25th byte is twentyfirst byte of LTE supported band */
    0x00 // initial value
    ,  // end of character

    /* 26th byte is twentysecond byte of LTE supported band */
    0x00 // initial value
    ,  // end of character

    /* 27th byte is twentythird byte of LTE supported band */
    0x00 // initial value
    ,  // end of character

    /* 28th byte is twentyfourth byte of LTE supported band */
    0x00 // initial value
    ,  // end of character

    /* 29th byte is twentyfifth byte of LTE supported band */
    0x00 // initial value
    ,  // end of character

    /* 30th byte is twentysixth byte of LTE supported band */
    0x00 // initial value
    ,  // end of character

    /* 31st byte is twentyseventh byte of LTE supported band */
    0x00 // initial value
    ,  // end of character

    /* 32nd byte is twentyeighth byte of LTE supported band */
    0x00 // initial value
    ,  // end of character

    /* 33rd byte is twentyninth byte of LTE supported band */
    0x00 // initial value
    ,  // end of character

    /* 34th byte is thirtieth byte of LTE supported band */
    0x00 // initial value
    ,  // end of character

    /* 35th byte is thirtyfirst byte of LTE supported band */
    0x00 // initial value
    ,  // end of character

#if defined(__MODEM_PACKAGE_DISABLE_LTE_FDD__) || defined(__UE_SIMULATOR__)
    /* 36th byte is thirtysecond byte of LTE supported band */
    0x00 // initial value
    ,  // end of character
#else
    /* 36th byte is thirtysecond byte of LTE supported band */
    0x48 // initial value
    ,  // end of character
#endif

#if defined(__MODEM_PACKAGE_DISABLE_UMTS_TDD__)
    0,0,0,0
#else
	/* 1th	byte is first byte of UMTS supported band */
    0 // initial value
#ifdef __UMTS_TDD128_BAND_A__    
    + Support_UMTS_BAND_A
#endif
#ifdef __UMTS_TDD128_BAND_B__ 
    + Support_UMTS_BAND_B
#endif
#ifdef __UMTS_TDD128_BAND_C__ 
    + Support_UMTS_BAND_C
#endif
#ifdef __UMTS_TDD128_BAND_D__ 
    + Support_UMTS_BAND_D
#endif
#ifdef __UMTS_TDD128_BAND_E__ 
    + Support_UMTS_BAND_E
#endif
#ifdef __UMTS_TDD128_BAND_F__ 
    + Support_UMTS_BAND_F
#endif
    ,  // end of character
    0,
    0,
    0
#endif    
};

/*
 *   LID table
 */
ltable_entry_struct logical_data_item_table_asband[] =
{
    {
        NVRAM_EF_AS_BAND_SETTING_LID,
        NVRAM_EF_AS_BAND_SETTING_TOTAL,
        NVRAM_EF_AS_BAND_SETTING_SIZE,
        NVRAM_NORMAL(NVRAM_EF_AS_BAND_SETTING_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "AA01",
        VER(NVRAM_EF_AS_BAND_SETTING_LID)
    },
    NVRAM_LTABLE_END
};

#endif /* NVRAM_NOT_PRESENT */
