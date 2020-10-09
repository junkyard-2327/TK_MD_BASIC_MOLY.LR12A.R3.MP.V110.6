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
 * rr_nvram_def.c
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
#include "rr_nvram_def.h" 
#include "rr_nvram_editor.h"

// Default Values

static kal_uint8 const NVRAM_EF_BAND_INFO_DEFAULT[] = {
        0x00, /* mcc1 */
        0x00, /* mcc2 */
        0x00, /* mcc3 */
        0x00, /* recorded_mcc_count for gas_learned_mcc_workingband_table/ learned band */
        0x00, /* working_band */
        0x00  /* when __BAND_PRIORITY_SEARCH__ is defined, this
               * byte is used to set the priority for each band:
               *
               *      850     1900    1800    900
               *     +-------------------------------+
               * bit | 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
               *     +-------------------------------+
               * The priority of each band is representive by two bits:
               *
               * <ex> bit 5 and 4 is the priority for 1900 band:
               *         '0'   '0' -> priority value 0
               *         '0'   '1' -> priority value 1
               *         '1'   '0' -> priority value 2
               *         '1'   '1' -> priority value 3
               *
               *      The smaller the value is, the higher the priroity is:
               *      (1) if no band is preferred, the value can be assigned:
               *          0x00, 0x55, 0xaa, or 0xff
               *      (2) if 900/1800 is prefered, the value can be assigned:
               *          0x50, 0xF0, 0xF5 and so on.
               *      (3) if 850/1900 is prefered, the value can be assigned:
               *          0x05, 0x0F, 0x5F and so on.
               *      (4) if the band prefered order is 1900 -> 8500 -> 900 -> 1800,
               *          the value 0x4e (0100 1110) should be used.
               */
};


    /* gas_learned_mcc_workingband_table[125]: mcc_index                           */
    /* gas_recorded_workingband_of_mcc_table[125]: 4bits workingband               */
    /* gas_learned_mcc_workingband_table record if this mcc has be learned;        */
    /* gas_recorded_mcc_mappy_workingband_table setting: P1900,D1800,EG900,G850    */
    /* mapping to search workingband return value bit 0,0,0,0,P,D,EG,G;            */
    /* 0: this (P/D/EG/G) GSM frequency band is not set to working band applying.  */
    /* 1: this (P/D/EG/G) GSM frequency band is set to working band applying.      */

    static kal_uint8 const NVRAM_EF_GAS_WORKING_BAND_INFO_DEFAULT[] =
    {
        0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* MCC: 000 ~ 079 */
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* MCC: 080 ~ 159 */
        0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x86, 0xba, 0x2b, 0xb2,   /* MCC: 160 ~ 239 */
        0xab, 0xa1, 0x5a, 0x2b, 0xaa, 0xaa, 0xaf, 0x42, 0x0b, 0xc8,   /* MCC: 240 ~ 319 */
        0x00, 0x02, 0x2a, 0xaa, 0xaa, 0xb6, 0xaa, 0x80, 0x00, 0x00,   /* MCC: 320 ~ 399 */
        0xec, 0x2f, 0xfe, 0xfc, 0xae, 0xc0, 0x2b, 0xc8, 0x22, 0x80,   /* MCC: 400 ~ 479 */
        0x00, 0x00, 0x02, 0x42, 0x30, 0x84, 0xa0, 0x5e, 0x3e, 0xd0,   /* MCC: 480 ~ 559 */
        0x00, 0x00, 0x00, 0x00, 0x00, 0x3d, 0xff, 0xff, 0xff, 0xfb,   /* MCC: 560 ~ 639 */
        0xf7, 0xff, 0x10, 0x00, 0x00, 0x00, 0x00, 0x02, 0xaa, 0xa8,   /* MCC: 640 ~ 719 */
        0x28, 0x2a, 0xa8, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* MCC: 720 ~ 799 */
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* MCC: 800 ~ 879 */
        0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* MCC: 880 ~ 959 */
        0x00, 0x00, 0x00, 0x00, 0x00, 0xf6, 0x66, 0x66, 0x66, 0x66,   /* MCC: 960 ~ 999, GAS_record_working band: 1 ~10 */
        0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66,   /* GAS_record_working band: 11 ~ 30 */
        0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x26, 0x66, 0x66,   /* GAS_record_working band: 31 ~ 50 */
        0x92, 0x99, 0x00, 0x09, 0xf6, 0xef, 0xff, 0x87, 0x1f, 0xff,   /* GAS_record_working band: 51 ~ 70 */
        0x6e, 0x9b, 0x3f, 0x79, 0xf6, 0x66, 0x66, 0x66, 0x62, 0x26,   /* GAS_record_working band: 71 ~ 90 */
        0x66, 0x66, 0x66, 0x26, 0x66, 0x66, 0x66, 0x66, 0x60, 0x00,   /* GAS_record_working band: 91 ~ 110 */
        0x66, 0x66, 0x66, 0x66, 0x26, 0x66, 0x76, 0x66, 0x26, 0x22,   /* GAS_record_working band: 111 ~ 130 */
        0x62, 0x62, 0x22, 0x22, 0x62, 0x26, 0x66, 0x6e, 0x66, 0x26,   /* GAS_record_working band: 131 ~ 150 */
        0x62, 0x62, 0x66, 0x66, 0x66, 0x66, 0x26, 0x26, 0x22, 0x66,   /* GAS_record_working band: 151 ~ 170 */
        0x62, 0x66, 0x62, 0x66, 0x66, 0x62, 0x66, 0x66, 0x62, 0x62,   /* GAS_record_working band: 171 ~ 190 */
        0x66, 0x68, 0xbb, 0x99, 0x49, 0x9b, 0x79, 0xbf, 0x92, 0x1c,   /* GAS_record_working band: 191 ~ 210 */
        0x6c, 0x2f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* GAS_record_working band: 211 ~ 214 */
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00    /* recorded 214 GAS workingband, update 2015/05 */
    };

static kal_uint8 NVRAM_EF_GAS_CSG_FINGERPRINT_DEFAULT[sizeof(nvram_ef_gas_csg_fingerprint_struct)];

// LID Declaration
ltable_entry_struct logical_data_item_table_rr[] =
{
    {
        NVRAM_EF_BAND_INFO_LID,
        NVRAM_EF_BAND_INFO_TOTAL,
        NVRAM_EF_BAND_INFO_SIZE,
        NVRAM_NORMAL(NVRAM_EF_BAND_INFO_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "RR0X",
        VER(NVRAM_EF_BAND_INFO_LID)
    },
#ifdef __BAND_BLOCK__
    {
        NVRAM_EF_BAND_BLOCK_LID,
        NVRAM_EF_BAND_BLOCK_TOTAL,
        NVRAM_EF_BAND_BLOCK_SIZE,
        NVRAM_NORMAL(NVRAM_EF_FF_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "RR1E",
        VER(NVRAM_EF_BAND_BLOCK_LID),
    },
#endif /* __BAND_BLOCK__ */
    {
        NVRAM_EF_GAS_WORKING_BAND_INFO_LID,
        NVRAM_EF_GAS_WORKING_BAND_INFO_TOTAL,
        NVRAM_EF_GAS_WORKING_BAND_INFO_SIZE,
        NVRAM_NORMAL(NVRAM_EF_GAS_WORKING_BAND_INFO_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        /* MOLY00146227:GAS solve the build error of duplicated fileprefix
           issue when enabling fast roaming feature, GAS change the fileprefix
           of NVRAM_EF_GAS_WORKING_BAND_INFO_LID                             */
        "RR15",
        VER(NVRAM_EF_GAS_WORKING_BAND_INFO_LID)
    },
    {
        NVRAM_EF_GAS_CSG_FINGERPRINT_LID,
        NVRAM_EF_GAS_CSG_FINGERPRINT_TOTAL,
        NVRAM_EF_GAS_CSG_FINGERPRINT_SIZE,
        NVRAM_NORMAL(NVRAM_EF_GAS_CSG_FINGERPRINT_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_AVERAGE,
        "RR0A",
        VER(NVRAM_EF_GAS_CSG_FINGERPRINT_LID)
    },
    NVRAM_LTABLE_END
};

#endif /* NVRAM_NOT_PRESENT */
