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
 * custom_nvram_sec.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for NVRAM security customization. 
 *
 * Author:
 * -------
 * -------
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
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
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
 * removed!
 *
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 *
 * removed!
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
 * removed!
 * removed!
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
 * removed!
 * removed!
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
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
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
 * removed!
 * removed!
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
 * removed!
 * removed!
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
 * removed!
 * removed!
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
 * removed!
 * removed!
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
 * removed!
 * removed!
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
 * removed!
 * removed!
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
 * removed!
 * removed!
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
 * removed!
 * removed!
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
 * removed!
 * removed!
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
 * removed!
 * removed!
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
 * removed!
 * removed!
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
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#if !defined(NVRAM_NOT_PRESENT)

#include <string.h>
#include <stdio.h>

#include "kal_general_types.h"
#include "custom_nvram_sec.h"

#include "kal_public_api.h"
#include "SST_secure.h"

#include "nvram_lid_statistics.h"       /* NVRAM_SECUPACK_SIZE */

#ifndef __OPTR_NONE__
#include "op_custom_nvram_sec.h"
#endif

#ifdef NVRAM_AUTO_GEN
// fake API for nvram_auto_gen compile
#define memcpy(...)
#define memset(...)
#define strcmp(...) (1)
#endif

#if defined(__SMB_SIMME_LOCK__)
typedef sml_category_meta_s_struct SML_CAT_META_STRUCT;
typedef sml_control_key_s_struct SML_CTRL_KEY_STRUCT;
typedef sml_context_s_struct SML_CONTEXT_STRUCT;
#else
typedef sml_category_meta_struct SML_CAT_META_STRUCT;
typedef sml_control_key_struct SML_CTRL_KEY_STRUCT;
typedef sml_context_struct SML_CONTEXT_STRUCT;
#endif

extern kal_bool SST_Get_NVRAM_Key(kal_uint32 *p_key, kal_uint32 *p_addr, kal_uint32 *p_len);
/*
 * CUST PARA Configuration                                                 
 */ 
#ifdef __CUST_PARA_SUPPORT__

/* WARNING!! DO NOT remove g_CustParaCfg or modify its name */

__attribute__((section("CUST_PARA"))) const CustPara_ST g_CustParaCfg=
{
    0xFF
};

/* WARNING!! DO NOT remove g_CustParaCfg_Tail or modify its name */
__attribute__((section("CUST_PARA_TAIL"))) kal_uint32  g_CustParaCfg_Tail;
#endif /* __CUST_PARA_SUPPORT__ */

#ifdef __NVRAM_SECRET_DATA__
/* Please do not modify this */
#define SECRET_DATA_PADDING_PATTERN  {0XE9A4B5A4, 0XEBB973A4, 0XE9A4FAA9, 0X79AC44A5}

/********************************************************************************
 *  This structure will be protected by chip dependent algorithm
 *************************************************************/
// __attribute__((section("PRIMARY_RODATA")))
const CUST_SECRET_DATA_ST custom_secret_data =
{
    /*  This key is used to encrypt the data transfered between metatool and target.
        We suggest custom must change this key and make it secretly if possible.  */
    {
        0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
        0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
        0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
        0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F
    },
    /* ------ Custom can add other secret data here -----*/

    /* please do not remove this member or modify it, to support AES 16 byte alignment */
    SECRET_DATA_PADDING_PATTERN
};

#endif

#if defined(NVRAM_AUTO_GEN)

#include "custom_nvram_extra.h" /* SML_STATE_UNLOCK */

/********************************************************************************
 *  This key is used to encrypt (software) the data with NVRAM_ATTR_CONFIDENTIAL
 *  in NVRAM , we suggest custom must change this key and make it secretly if possible
 *************************************************************/
const kal_uint8 custom_secret_key[NVRAM_SECRET_KEY_SIZE] = {0x31, 0x32, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66};


const kal_uint8 custom_key_seed[NVRAM_CUSTOM_KEY_SEED_SIZE]={0x1,0x2,0x3,0x4,0x5,0x6,0x7,0x8,0x9,0xA,0xB,0xC,0xD,0xE,0xF,0x10,0x11,0x12,013,0x14,0x15,0x16,0x17,0x18,0x19,0x1A,0x1B,0x1C};

const kal_uint8 NVRAM_SECURE_PARA[SEC_RO_PARA_TOTAL] =
{
    0x01
};


#ifdef __SECURE_USB_DOWNLOAD__
const kal_uint8 custom_symmetric_key[NVRAM_SECRET_KEY_MAX_SIZE] =
{
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F
};
const T_Customer_Public_Key custom_asymmetric_key =
{
    2, 64, 0x0051, 8,
    {0x0001, 0x0001},
    {
        0x002A, 0x178D, 0xBCB4, 0xC985, 0xD21E, 0x2A71, 0xDBE4, 0x1E27, 
        0x29CD, 0x2285, 0x65B3, 0x6596, 0x2B4C, 0x8266, 0x057B, 0xB911, 
        0x283D, 0x1912, 0xB02D, 0x2B15, 0xB61D, 0x8DB9, 0xC1D9, 0x069C, 
        0xA352, 0xD7F6, 0x0EAB, 0x46EB, 0xB0CE, 0xAEC5, 0x842C, 0x92B1, 
        0x94FC, 0xD410, 0x60F5, 0x8F2C, 0x186A, 0x9527, 0xF40A, 0x4DF9, 
        0xA31D, 0x86C0, 0x7464, 0xB57C, 0x600A, 0xB37A, 0x02FB, 0xD0A6, 
        0x6399, 0xB779, 0x96A7, 0x9B5E, 0x2E8D, 0x0247, 0xA844, 0x28EE, 
        0x26B6, 0xAF64, 0x7C49, 0xC924, 0xD8DF, 0x5FBA, 0xEBAA, 0xB74F
    }
};
#endif /* __SECURE_USB_DOWNLOAD__ */

/*
 * typedef struct {
 *      kal_uint32  magic_head;                                 -> 4
 *      sml_category_meta_struct    cat[SML_SUPPORT_CAT_SIZE];  -> ( 4 *  7)
 *      sml_control_key_struct      key[SML_SUPPORT_CAT_SIZE];  -> ( 9 *  7)
 *      kal_uint8   code_cat_n[SML_CFG_CAT_N_SIZE];             -> (30 *  3)
 *      kal_uint8   code_cat_ns[SML_CFG_CAT_NS_SIZE];           -> (30 *  4)
 *      kal_uint8   code_cat_sp[SML_CFG_CAT_SP_SIZE];           -> (30 *  4)
 *      kal_uint8   code_cat_c[SML_CFG_CAT_C_SIZE];             -> (30 *  5)
 *      kal_uint8   code_cat_sim[SML_CFG_CAT_SIM_SIZE];         -> (30 *  8)
 *      kal_uint8   code_cat_ns_sp[SML_CFG_CAT_NS_SP_SIZE];     -> ( 5 * 10)
 *      kal_uint8   code_cat_sim_c[SML_CFG_CAT_SIM_C_SIZE];     -> (10 * 10)
 *      kal_uint8   range_cat_ns[SML_CAT_NS_RANGE_SIZE];        -> 2
 *      kal_uint32 magic_tail;                                  -> 4
 *  } sml_context_struct;                                       -> 971
 */

const nvram_sml_context_struct NVRAM_EF_SML_DEFAULT = 
{       
        SML_MAGIC_HEAD_VALUE, 
    #ifdef CUSTOM_SML_DEFAULT
         CUSTOM_SML_DEFAULT
    #else /* CUSTOM_SML_DEFAULT */
        {{SML_STATE_UNLOCK,SML_RETRY_COUNT_N_CAT,0,0},     /* Category N */
        {SML_STATE_UNLOCK,SML_RETRY_COUNT_NS_CAT ,0,0},   /* Category NS */
        {SML_STATE_UNLOCK,SML_RETRY_COUNT_SP_CAT ,0,0},   /* Category SP */
        {SML_STATE_UNLOCK,SML_RETRY_COUNT_C_CAT ,0,0},    /* Category C */
        {SML_STATE_UNLOCK,SML_RETRY_COUNT_SIM_CAT ,0,0},  /* Category SIM */
        {SML_STATE_UNLOCK,SML_RETRY_COUNT_NS_CAT ,0,0},   /* Link NS-SP */
        {SML_STATE_UNLOCK,SML_RETRY_COUNT_C_CAT ,0,0}},    /* Link SIM-C */
        {{SML_KEY_EMPTY,{0x21,0x43,0x65,0x87,0xFF,0xFF,0xFF,0xFF}},
        {SML_KEY_EMPTY,{0x65,0x87,0x21,0x43,0xFF,0xFF,0xFF,0xFF}},
        {SML_KEY_EMPTY,{0x11,0x11,0x22,0x22,0xFF,0xFF,0xFF,0xFF}},
        {SML_KEY_EMPTY,{0x33,0x33,0x44,0x44,0xFF,0xFF,0xFF,0xFF}},
        {SML_KEY_EMPTY,{0x55,0x55,0x66,0x66,0xFF,0xFF,0xFF,0xFF}},
        {SML_KEY_EMPTY,{0x77,0x77,0x88,0x88,0xFF,0xFF,0xFF,0xFF}},
        {SML_KEY_EMPTY,{0x99,0x99,0x00,0x00,0xFF,0xFF,0xFF,0xFF}}},
        /* Category N code */
        {0xc1,0xc1,0xc1,
         0xFF,0xFF,0xFF,
         0xFF,0xFF,0xFF,
         0xFF,0xFF,0xFF,
         0xFF,0xFF,0xFF,
         0xFF,0xFF,0xFF,
         0xFF,0xFF,0xFF,
         0xFF,0xFF,0xFF,
         0xFF,0xFF,0xFF,
#ifdef __RJIO_CHECK_ICCID_WHEN_MCC_MNC_MATCHED__
		 0xFF,0xFF,0xFF,
		 0xFF,0xFF,0xFF,
		 0xFF,0xFF,0xFF,
		 0xFF,0xFF,0xFF,
		 0xFF,0xFF,0xFF,
		 0xFF,0xFF,0xFF,
		 0xFF,0xFF,0xFF,
		 0xFF,0xFF,0xFF,
		 0xFF,0xFF,0xFF,
		 0xFF,0xFF,0xFF,
		 0xFF,0xFF,0xFF,
		 0xFF,0xFF,0xFF,
		 0xFF,0xFF,0xFF,
		 0xFF,0xFF,0xFF,
		 0xFF,0xFF,0xFF,
#endif /* __RJIO_CHECK_ICCID_WHEN_MCC_MNC_MATCHED__ */
         0xFF,0xFF,0xFF},	
        /* Category NS code */
        {0xc2,0xc2,0xc2,0xc2,
         0xFF,0xFF,0xFF,0xFF},
        /* Category SP code */
#ifdef __SML_CONFIG_GID_LENGTH__
		{0xc3,0xc3,0xc3,
		 0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,
		 0xFF,0xFF,0xFF,
		 0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
#else
        {0xc3,0xc3,0xc3,0xc3,
         0xFF,0xFF,0xFF,0xFF},
#endif
        /* Category C code */
#ifdef __SML_CONFIG_GID_LENGTH__
		{0xc4,0xc4,0xc4,
		 0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,
		 0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,
		 0xFF,0xFF,0xFF,
		 0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		 0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
#else
        {0xc4,0xc4,0xc4,0xc4,0xc4,
         0xFF,0xFF,0xFF,0xFF,0xFF},
#endif
        /* Category SIM code */
        {0xc5,0xc5,0xc5,0xc5,0xc5,0xc5,0xc5,0xc5,
         0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
        /* Link Category NS-SP */
#ifdef __SML_CONFIG_GID_LENGTH__
		{0xc6,0xc6,0xc6,0xc6,
		 0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,
		 0xFF,0xFF,0xFF,0xFF,
		 0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
#else
        {0xc6,0xc6,0xc6,0xc6,0xc6,
         0xFF,0xFF,0xFF,0xFF,0xFF},
#endif
        /* Link Category SIM-C */
#ifdef __SML_CONFIG_GID_LENGTH__
		{0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,
		 0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,
		 0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,
		 0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		 0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
		 0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
#else
        {0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,
         0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},        
#endif
         /* NS Range size */
        {0xFF,0xFF},
    #endif /* CUSTOM_SML_DEFAULT */
        SML_MAGIC_TAIL_VALUE        
};

const nvram_sml_tmo_context_struct NVRAM_EF_SML_TMO_DEFAULT = 
{       
         {0x00,0x01,0x00,0x05},                             /* version */
         SML_PROTECTION_SCHEME_HMAC_SHA256,                 /* protection scheme */
         SML_TMO_STATE_PERMANENT_LOCK,                          /* state */
         {0x00, 0x5C},                                      /* length (92=42+32+16+2) */
         {0x00, 0x04},                                      /* num of mcc-mnc */
         {0x31, 0x02, 0x60, 0x00,                           /* mcc-mnc list */
          0x31, 0x03, 0x10, 0x00,
          0x31, 0x03, 0x00, 0x00,
          0x00, 0x10, 0x10, 0x00,
          0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00,
         },
         {0x00, 0x01},                                      /* num of gid */
         {0x54, 0x4D,                                       /* gid lst */
          0x00, 0x00,
          0x00, 0x00,
          0x00, 0x00,
          0x00, 0x00,
          0x00, 0x00,
          0x00, 0x00,
          0x00, 0x00,
          0x00, 0x00,
          0x00, 0x00},
         {0,0},                                             /* reserved */
         {0,0,0,0,0,0,0,0},                                 /* start time */
         {0,0,0,0},                                         /* end time */
         {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* imei */
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
         {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* MAC or signature */
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
         {0,0,0,0}                                          /* unlock time */
};

#ifdef __ATT_SIM_LOCK__
const nvram_sml_att_context_struct NVRAM_EF_SML_ATT_DEFAULT = 
{       
         {0x00,0x01,0x00,0x05},                             /* version */
         SML_PROTECTION_SCHEME_HMAC_SHA256,                 /* protection scheme */
         SML_ATT_STATE_PERMANENT_LOCK,                      /* state */
         {0x00, 0x52},                                      /* length (82) */
         {0x00, 0x02},                                      /* num of mcc-mnc */
         {0x31, 0x01, 0x50, 0x00,                           /* mcc-mnc list */
          0x00, 0x10, 0x10, 0x00,
          0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00,
         },
         {0x00, 0x00},                                      /* num of gid */
         {0x00, 0x00,                                       /* gid lst */
          0x00, 0x00,
          0x00, 0x00,
          0x00, 0x00,
          0x00, 0x00,
          0x00, 0x00,
          0x00, 0x00,
          0x00, 0x00,
          0x00, 0x00,
          0x00, 0x00},
         {0,0},                                             /* reserved */
         {0,0,0,0,0,0,0,0},                                 /* start time */
         {0,0,0,0},                                         /* end time */
         {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* imei */
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
         {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,   /* MAC or signature */
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
          0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
         {0,0,0,0}                                          /* unlock time */
};
#endif

#ifdef __SMB_SIMME_LOCK_NV__
const nvram_sml_context_s_struct NVRAM_EF_SML_S_DEFAULT =
{
    SML_MAGIC_HEAD_VALUE, 
#ifdef CUSTOM_SML_DEFAULT
    CUSTOM_SML_DEFAULT
#else /* CUSTOM_SML_DEFAULT */
    {{SML_STATE_UNLOCK,5,SML_RETRY_COUNT_N_CAT,0,0},     /* Category N */
     {SML_STATE_UNLOCK,5,SML_RETRY_COUNT_NS_CAT,0,0},   /* Category NS */
     {SML_STATE_UNLOCK,5,SML_RETRY_COUNT_SP_CAT,0,0},   /* Category SP */
     {SML_STATE_UNLOCK,5,SML_RETRY_COUNT_C_CAT,0,0},    /* Category C */
     {SML_STATE_UNLOCK,5,SML_RETRY_COUNT_SIM_CAT,0,0},  /* Category SIM */
     {SML_STATE_UNLOCK,5,SML_RETRY_COUNT_NS_CAT,0,0},   /* Link NS-SP */
     {SML_STATE_UNLOCK,5,SML_RETRY_COUNT_C_CAT,0,0}},    /* Link SIM-C */
     
    {{SML_KEY_EMPTY,
      0,
      {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
       0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
      {0x00,0x00,0x00,0x00},
      {0x21,0x43,0x65,0x87,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
       0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
       0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
       0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF}},

     {SML_KEY_EMPTY,
      0,
      {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
       0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
      {0x00,0x00,0x00,0x00},
      {0x65,0x87,0x21,0x43,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
       0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
       0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
       0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF}},
     
     {SML_KEY_EMPTY,
      0,
      {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
       0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
      {0x00,0x00,0x00,0x00},
      {0x11,0x11,0x22,0x22,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
       0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
       0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
       0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF}},

     {SML_KEY_EMPTY,
      0,
      {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
       0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
      {0x00,0x00,0x00,0x00},
      {0x33,0x33,0x44,0x44,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
       0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
       0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
       0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF}},
     
     {SML_KEY_EMPTY,
      0,
      {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
       0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
      {0x00,0x00,0x00,0x00},
      {0x55,0x55,0x66,0x66,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
       0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
       0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
       0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF}},
       
     {SML_KEY_EMPTY,
      0,
      {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
       0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
      {0x00,0x00,0x00,0x00},
      {0x77,0x77,0x88,0x88,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
       0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
       0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
       0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF}},
       
     {SML_KEY_EMPTY,
      0,
      {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
       0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},
      {0x00,0x00,0x00,0x00},
      {0x99,0x99,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
       0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
       0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
       0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF}}},
       
    /* Category N code */
    {0xc1,0xc1,0xc1,
     0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF,
     0xFF,0xFF,0xFF},   
    /* Category NS code */
    {0xc2,0xc2,0xc2,0xc2,
     0xFF,0xFF,0xFF,0xFF},
    /* Category SP code */
#ifdef __SML_CONFIG_GID_LENGTH__
	{0xc3,0xc3,0xc3,
	 0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,
	 0xFF,0xFF,0xFF,
	 0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
#else
    {0xc3,0xc3,0xc3,0xc3,
     0xFF,0xFF,0xFF,0xFF},
#endif
    /* Category C code */
#ifdef __SML_CONFIG_GID_LENGTH__
	{0xc4,0xc4,0xc4,
	 0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,
	 0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,0xc4,
	 0xFF,0xFF,0xFF,
	 0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	 0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
#else
    {0xc4,0xc4,0xc4,0xc4,0xc4,
     0xFF,0xFF,0xFF,0xFF,0xFF},
#endif
    /* Category SIM code */
    {0xc5,0xc5,0xc5,0xc5,0xc5,0xc5,0xc5,0xc5,
     0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
    /* Link Category NS-SP */
#ifdef __SML_CONFIG_GID_LENGTH__
	{0xc6,0xc6,0xc6,0xc6,
	 0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,
	 0xFF,0xFF,0xFF,0xFF,
	 0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
#else
    {0xc6,0xc6,0xc6,0xc6,0xc6,
     0xFF,0xFF,0xFF,0xFF,0xFF},
#endif
    /* Link Category SIM-C */
#ifdef __SML_CONFIG_GID_LENGTH__
	{0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,
	 0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,
	 0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,
	 0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	 0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
	 0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
#else
    {0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,0xc7,
     0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},        
#endif
     /* NS Range size */
    {0xFF,0xFF},
#endif /* CUSTOM_SML_DEFAULT */
    SML_MAGIC_TAIL_VALUE        

};
#endif /* __SMB_SIMME_LOCK_NV__ */
/* --Boundry - Custom SecuPack Default Values--  */

/* --Boundry - Custom SecuPack Default Values--  */

#else /* NVRAM_AUTO_GEN */

#include "nvram_sec.h"

/*
 * Local variable
 */
static int X;
static int hashIndex = 0;

/*****************************************************************************
 * FUNCTION
 *  custom_nvram_sec_ro_size
 * DESCRIPTION
 *  
 * PARAMETERS
 *  void
 * RETURNS
 *  
 *****************************************************************************/
kal_uint32 custom_nvram_sec_ro_size(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return 0;
}

/*****************************************************************************
 * FUNCTION
 *  custom_nvram_sec_ro_size
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *
 *****************************************************************************/
kal_uint32 custom_nvram_secupack_size(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return NVRAM_SECUPACK_SIZE;
}

/*****************************************************************************
 * FUNCTION
 *  custom_nvram_secupack_total
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *
 *****************************************************************************/
kal_uint32 custom_nvram_secupack_total(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return NVRAM_SECUPACK_TOTAL;
}


/*****************************************************************************
 * FUNCTION
 *  custom_nvram_sec_ro_size
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *
 *****************************************************************************/
kal_uint32 custom_nvram_key_len(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    return NVRAM_SECRET_KEY_SIZE;
}

/*****************************************************************************
 * FUNCTION
 *  IV_generator
 * DESCRIPTION
 *
 * PARAMETERS
 *  void
 * RETURNS
 *
 *****************************************************************************/
int custom_nvram_IV_generator(void)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    /*
     * f(x)=A*|X-B|+C
     * if(X>B)
     * hashIndex = (A*(X-B)+C)%256;
     * else
     * hashIndex = (A*(B-X)+C)%256;
     */
    return hashIndex;
}


/*****************************************************************************
 * FUNCTION
 *  custom_nvram_get_key
 * DESCRIPTION
 *  
 * PARAMETERS
 *  init_key        [?]     
 *  keys            [?]     
 * RETURNS
 *  void
 *****************************************************************************/
void custom_nvram_get_key(char *init_key, unsigned char *keys)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    nvram_get_key(init_key, keys);
}


/*****************************************************************************
 * FUNCTION
 *  custom_nvram_encrypt
 * DESCRIPTION
 *  
 * PARAMETERS
 *  keys                [?]         
 *  buffer              [?]         
 *  length              [IN]        
 *  scrambleIndex       [IN]        
 * RETURNS
 *  void
 *****************************************************************************/
void custom_nvram_encrypt(unsigned char const *keys, unsigned char *buffer, unsigned int length, int scrambleIndex)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_int32 ret;
    kal_uint8 key_buffer[256];
    ret=SST_Get_NVRAM_SW_Key((void*)key_buffer,256,(void *)NVRAM_CUSTOM_KEY_SEED,NVRAM_CUSTOM_KEY_SEED_SIZE);
    if(ret!=GET_NVRAM_KEY_ERROR_NONE )
    {
        EXT_ASSERT(KAL_FALSE, ret, 0, 0);
    }
    X = scrambleIndex;
    nvram_encrypt(key_buffer, buffer, length, custom_nvram_IV_generator);
}
void nvram_AES_encrypt(unsigned char *buffer, unsigned int length)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_int32 ret;
    kal_uint8 key_buffer[NVRAM_AES_KEY_LEN_128BIT];
    ret=SST_Get_NVRAM_SW_Key((void*)key_buffer,NVRAM_AES_KEY_LEN_128BIT,(void *)NVRAM_CUSTOM_KEY_SEED,NVRAM_CUSTOM_KEY_SEED_SIZE);
    if(ret!=GET_NVRAM_KEY_ERROR_NONE )
    {
        EXT_ASSERT(KAL_FALSE, ret, 0, 0);
    }
    ret=nvram_AES_cipher_encrypt(key_buffer, NVRAM_AES_KEY_LEN_128BIT, buffer, buffer, length);
    if(ret != NVRAM_AES_ERROR_NONE){
        EXT_ASSERT(KAL_FALSE, ret, 0, 0);
    }
}

void nvram_AES_decrypt(unsigned char *buffer, unsigned int length)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_int32 ret;
    kal_uint8 key_buffer[NVRAM_AES_KEY_LEN_128BIT];
    ret=SST_Get_NVRAM_SW_Key((void*)key_buffer,NVRAM_AES_KEY_LEN_128BIT,(void *)NVRAM_CUSTOM_KEY_SEED,NVRAM_CUSTOM_KEY_SEED_SIZE);
    if(ret!=GET_NVRAM_KEY_ERROR_NONE )
    {
        EXT_ASSERT(KAL_FALSE, ret, 0, 0);
    }
    ret=nvram_AES_cipher_decrypt(key_buffer, NVRAM_AES_KEY_LEN_128BIT, buffer, buffer, length);
    if(ret != NVRAM_AES_ERROR_NONE){
        EXT_ASSERT(KAL_FALSE, ret, 0, 0);
    }
}


/*****************************************************************************
 * FUNCTION
 *  custom_nvram_decrypt
 * DESCRIPTION
 *
 * PARAMETERS
 *  keys                [?]
 *  buffer              [?]
 *  length              [IN]
 *  scrambleIndex       [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void custom_nvram_decrypt(unsigned char const *keys, unsigned char *buffer, unsigned int length, int scrambleIndex)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_int32 ret;
    kal_uint8 key_buffer[256];
    ret=SST_Get_NVRAM_SW_Key((void*)key_buffer,256,(void *)NVRAM_CUSTOM_KEY_SEED,NVRAM_CUSTOM_KEY_SEED_SIZE);
    if(ret!=GET_NVRAM_KEY_ERROR_NONE )
    {
        EXT_ASSERT(KAL_FALSE, ret, 0, 0);
    }
    X = scrambleIndex;
    nvram_decrypt(key_buffer, buffer, length, custom_nvram_IV_generator);

}

/*****************************************************************************
 * FUNCTION
 *  custom_nvram_get_database_key
 * DESCRIPTION
 *  to get the custom database key
 * PARAMETERS
 *  key_buffer          [OUT]   the output buffer to save key
 *  buffer_size         [IN]    the size of key buffer
 * RETURNS
 *  0: Fail
 *  n: the lenghth of database key
 *****************************************************************************/
kal_int32 custom_nvram_get_database_key(kal_uint8 *key_buffer, kal_uint32 buffer_size)
{
#ifdef __NVRAM_SECRET_DATA__
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    CUST_SECRET_DATA_ST* tmp_buffer;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    if (buffer_size < NVRAM_DATABASE_KEY_SIZE)
    {
        return 0;
    }

    buffer_size = sizeof(custom_secret_data);

    tmp_buffer = (CUST_SECRET_DATA_ST*) get_ctrl_buffer(buffer_size);

#ifdef __MTK_TARGET__
    if (SST_Get_NVRAM_Key((kal_uint32*)&custom_secret_data, (kal_uint32*) tmp_buffer, &buffer_size))
   	{
        memcpy(key_buffer, tmp_buffer->m_custom_database_key, NVRAM_DATABASE_KEY_SIZE);

        buffer_size = NVRAM_DATABASE_KEY_SIZE;
   	}
   	else
   	{
       	buffer_size = 0;
   	}
#else
    memcpy(key_buffer, custom_secret_data.m_custom_database_key, NVRAM_DATABASE_KEY_SIZE);
#endif /* __MTK_TARGET__ */

    free_ctrl_buffer((kal_uint8*)tmp_buffer);

    return buffer_size;
#else
	  return 0;
#endif
}


/*****************************************************************************
 * FUNCTION
 *  mmi_sml_auto_key_gen_implemetation
 * DESCRIPTION
 *  automatic key generation
 * PARAMETERS
 *  key              [IN]
 * RETURNS
 *  void
 *****************************************************************************/
void mmi_sml_auto_key_gen_implemetation(unsigned char *key)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/

    /* return 1234 as default key */
    /* please implement this function for automatic key generation */
    /* the generated key length should at least 8 digits and also has null-terminator */
    key[0] = 0x31;
    key[1] = 0x32;
    key[2] = 0x33;
    key[3] = 0x34;
    key[4] = 0x35;
    key[5] = 0x36;
    key[6] = 0x37;
    key[7] = 0x38;
    key[8] = 0;
}
#endif /* NVRAM_AUTO_GEN */

/*****************************************************************************
 * FUNCTION
 *  nvram_sml_ota_converter
 * DESCRIPTION
 *  Convert LID data if LID size has changed
 *  
 * PARAMETERS
 * 
 * RETURNS
 *  bool
 *****************************************************************************/
kal_bool nvram_sml_ota_converter(kal_uint8 *old_value_buffer, nvram_lid_ota_check_info *previous_ota_info, kal_uint8 *new_value_buffer, nvram_lid_ota_check_info *current_ota_info)
{

/*
    If LID parameters have changed for SIMME lock related LID's,
    then our default behavior shall be reset data to default. For which nvram_sml_ota_converter()
    API returns FALSE.

    If Customer need any SML data conversion in these cases then this function has to be
    modified accordingly.
    i.e. Enable __SML_DATA_CONVERSION_LOGIC__ & write required SML data conversion logic for respective LID's.
*/

#if !defined(__SML_DATA_CONVERSION_LOGIC__)

    return KAL_FALSE;

#else

/*
    Below handling is for SIMME lock related LID data conversion. When OTA update is done from one version
    to another which has different LID parameters then it may need conversion logic to ensure all data
    are properly retained.

    This option __SML_DATA_CONVERSION_LOGIC__ shall be default off. It shall be enabled based on
    Customer request and logic.
*/

    kal_bool is_small_to_big;
    kal_uint8 reset_sml_size;
    kal_uint32 record_idx, sml_cat_idx;
    kal_bool is_need_update_file = KAL_FALSE;

    if ((previous_ota_info->LID != NVRAM_EF_SML_LID)
#if defined (__SMART_PHONE_MODEM__)
        && (previous_ota_info->LID != NVRAM_EF_SIM_LOCK_LID)
#endif
#if defined(__SMB_SIMME_LOCK__) && defined(__SMB_SIMME_LOCK_NV__)
        && (previous_ota_info->LID != NVRAM_EF_SML_S_LID)
        && (previous_ota_info->LID != NVRAM_EF_SML_GBLOB_LID)
#endif
        )
    {
        /* currently nvram_sml_ota_converter() function does not handles any other LID */
        return KAL_FALSE;
    }

    if ((previous_ota_info->total_records != current_ota_info->total_records) ||
        (previous_ota_info->record_size != current_ota_info->record_size) ||
        (previous_ota_info->ldi_category != current_ota_info->ldi_category) ||
        (previous_ota_info->ldi_attr != current_ota_info->ldi_attr) ||
        strcmp((const char *)previous_ota_info->fileprefix, (const char *)current_ota_info->fileprefix) ||
        strcmp((const char *)previous_ota_info->fileverno, (const char *)current_ota_info->fileverno))
    {
        is_need_update_file = KAL_TRUE;
    }
    else
    {
        is_need_update_file = KAL_FALSE;
    }

    // TODO: what should be the handling when total records are different?
    if ((previous_ota_info->record_size == current_ota_info->record_size) &&
        (previous_ota_info->total_records == current_ota_info->total_records))
    {
        memcpy(new_value_buffer, old_value_buffer, previous_ota_info->total_records * previous_ota_info->record_size);
        return is_need_update_file;
    }

    // TODO: what should be the handling when default values are different?

    if (previous_ota_info->LID == NVRAM_EF_SML_LID)
    {
        // R1 -> R2, small sml structure -> big sml structure
        if (previous_ota_info->record_size < current_ota_info->record_size)
        {
            is_small_to_big = KAL_TRUE;
        }
        else // R2 -> R1, big sml structure -> small sml structure
        {
            is_small_to_big = KAL_FALSE;
        }
        
        reset_sml_size = is_small_to_big ? 16 : 8;

        for (record_idx = 0; record_idx < NVRAM_EF_SML_TOTAL; record_idx++)
        {
            if (is_small_to_big)
            {
                sml_r1_context_struct *old_sml_ptr = (sml_r1_context_struct*) (old_value_buffer + (record_idx * sizeof(sml_r1_context_struct)));
                sml_context_struct *new_sml_ptr = (sml_context_struct*) (new_value_buffer + (record_idx * sizeof(sml_context_struct)));

                // Handle different key length
                for (sml_cat_idx = 0; sml_cat_idx < SML_SUPPORT_CAT_SIZE; sml_cat_idx++)
                {
                    new_sml_ptr->key[sml_cat_idx].state = old_sml_ptr->key[sml_cat_idx].state;
                    memset(new_sml_ptr->key[sml_cat_idx].key, 0xFF, reset_sml_size);
                    memcpy(new_sml_ptr->key[sml_cat_idx].key, old_sml_ptr->key[sml_cat_idx].key, 8);
                }

                // Copy the same part
                for (sml_cat_idx = 0; sml_cat_idx < SML_SUPPORT_CAT_SIZE; sml_cat_idx++)
                {
                    memcpy(&new_sml_ptr->cat[sml_cat_idx], &old_sml_ptr->cat[sml_cat_idx], sizeof(SML_CAT_META_STRUCT));
                }

                new_sml_ptr->magic_head = sizeof(sml_context_struct);
                //memcpy(new_sml_ptr->cat, old_sml_ptr->cat, SML_SUPPORT_CAT_SIZE);
                memcpy(new_sml_ptr->code_cat_n, old_sml_ptr->code_cat_n, SML_CFG_CAT_N_SIZE);
                memcpy(new_sml_ptr->code_cat_ns, old_sml_ptr->code_cat_ns, SML_CFG_CAT_NS_SIZE);
                memcpy(new_sml_ptr->code_cat_sp, old_sml_ptr->code_cat_sp, SML_CFG_CAT_SP_SIZE);
                memcpy(new_sml_ptr->code_cat_c, old_sml_ptr->code_cat_c, SML_CFG_CAT_C_SIZE);
                memcpy(new_sml_ptr->code_cat_sim, old_sml_ptr->code_cat_sim, SML_CFG_CAT_SIM_SIZE);
                memcpy(new_sml_ptr->code_cat_ns_sp, old_sml_ptr->code_cat_ns_sp, SML_CFG_CAT_NS_SP_SIZE);
                memcpy(new_sml_ptr->code_cat_sim_c, old_sml_ptr->code_cat_sim_c, SML_CFG_CAT_SIM_C_SIZE);
                memcpy(new_sml_ptr->range_cat_ns, old_sml_ptr->range_cat_ns, SML_CAT_NS_RANGE_SIZE);
                new_sml_ptr->magic_tail = old_sml_ptr->magic_tail;
            }
            else
            {
                sml_context_struct *old_sml_ptr = (sml_context_struct*) (old_value_buffer + record_idx * sizeof(sml_context_struct));
                sml_r1_context_struct *new_sml_ptr = (sml_r1_context_struct*) (new_value_buffer + record_idx * sizeof(sml_r1_context_struct));

                // Handle different key length
                for (sml_cat_idx = 0; sml_cat_idx < SML_SUPPORT_CAT_SIZE; sml_cat_idx++)
                {
                    new_sml_ptr->key[sml_cat_idx].state = old_sml_ptr->key[sml_cat_idx].state;
                    memset(new_sml_ptr->key[sml_cat_idx].key, 0xFF, reset_sml_size);
                    memcpy(new_sml_ptr->key[sml_cat_idx].key, old_sml_ptr->key[sml_cat_idx].key, 8);
                }

                // Copy the same part
                for (sml_cat_idx = 0; sml_cat_idx < SML_SUPPORT_CAT_SIZE; sml_cat_idx++)
                {
                    memcpy(&new_sml_ptr->cat[sml_cat_idx], &old_sml_ptr->cat[sml_cat_idx], sizeof(SML_CAT_META_STRUCT));
                }

                new_sml_ptr->magic_head = sizeof(sml_r1_context_struct);
                //memcpy(new_sml_ptr->cat, old_sml_ptr->cat, SML_SUPPORT_CAT_SIZE);
                memcpy(new_sml_ptr->code_cat_n, old_sml_ptr->code_cat_n, SML_CFG_CAT_N_SIZE);
                memcpy(new_sml_ptr->code_cat_ns, old_sml_ptr->code_cat_ns, SML_CFG_CAT_NS_SIZE);
                memcpy(new_sml_ptr->code_cat_sp, old_sml_ptr->code_cat_sp, SML_CFG_CAT_SP_SIZE);
                memcpy(new_sml_ptr->code_cat_c, old_sml_ptr->code_cat_c, SML_CFG_CAT_C_SIZE);
                memcpy(new_sml_ptr->code_cat_sim, old_sml_ptr->code_cat_sim, SML_CFG_CAT_SIM_SIZE);
                memcpy(new_sml_ptr->code_cat_ns_sp, old_sml_ptr->code_cat_ns_sp, SML_CFG_CAT_NS_SP_SIZE);
                memcpy(new_sml_ptr->code_cat_sim_c, old_sml_ptr->code_cat_sim_c, SML_CFG_CAT_SIM_C_SIZE);
                memcpy(new_sml_ptr->range_cat_ns, old_sml_ptr->range_cat_ns, SML_CAT_NS_RANGE_SIZE);
                new_sml_ptr->magic_tail = old_sml_ptr->magic_tail;

            }

        }
    }
#if defined(__SMB_SIMME_LOCK__) && defined(__SMB_SIMME_LOCK_NV__)
    else if (previous_ota_info->LID == NVRAM_EF_SML_S_LID)
    {
        for (record_idx = 0; record_idx < NVRAM_EF_SML_S_TOTAL; record_idx++)
        {
            sml_r2_context_s_struct *r2_sml_ptr = (sml_r2_context_s_struct*) (old_value_buffer + (record_idx * sizeof(sml_r2_context_s_struct)));
            sml_context_s_struct *r3_sml_ptr = (sml_context_s_struct*) (new_value_buffer + (record_idx * sizeof(sml_context_s_struct)));

            for (sml_cat_idx = 0; sml_cat_idx < SML_SUPPORT_CAT_SIZE; sml_cat_idx++)
            {
                r3_sml_ptr->cat[sml_cat_idx].state = r2_sml_ptr->cat[sml_cat_idx].state;
                r3_sml_ptr->cat[sml_cat_idx].max_retry_count = r2_sml_ptr->cat[sml_cat_idx].max_retry_count;
                r3_sml_ptr->cat[sml_cat_idx].retry_count = r2_sml_ptr->cat[sml_cat_idx].retry_count;
                r3_sml_ptr->cat[sml_cat_idx].autolock_count = r2_sml_ptr->cat[sml_cat_idx].autolock_count;
                r3_sml_ptr->cat[sml_cat_idx].num = r2_sml_ptr->cat[sml_cat_idx].num;
            }

            for (sml_cat_idx = 0; sml_cat_idx < SML_SUPPORT_CAT_SIZE; sml_cat_idx++)
            {
                memcpy(&r3_sml_ptr->key[sml_cat_idx], &r2_sml_ptr->key[sml_cat_idx], sizeof(SML_CTRL_KEY_STRUCT));
            }

            r3_sml_ptr->magic_head = sizeof(sml_context_struct);
            memcpy(r3_sml_ptr->code_cat_n, r2_sml_ptr->code_cat_n, SML_CFG_CAT_N_SIZE);
            memcpy(r3_sml_ptr->code_cat_ns, r2_sml_ptr->code_cat_ns, SML_CFG_CAT_NS_SIZE);
            memcpy(r3_sml_ptr->code_cat_sp, r2_sml_ptr->code_cat_sp, SML_CFG_CAT_SP_SIZE);
            memcpy(r3_sml_ptr->code_cat_c, r2_sml_ptr->code_cat_c, SML_CFG_CAT_C_SIZE);
            memcpy(r3_sml_ptr->code_cat_sim, r2_sml_ptr->code_cat_sim, SML_CFG_CAT_SIM_SIZE);
            memcpy(r3_sml_ptr->code_cat_ns_sp, r2_sml_ptr->code_cat_ns_sp, SML_CFG_CAT_NS_SP_SIZE);
            memcpy(r3_sml_ptr->code_cat_sim_c, r2_sml_ptr->code_cat_sim_c, SML_CFG_CAT_SIM_C_SIZE);
            memcpy(r3_sml_ptr->range_cat_ns, r2_sml_ptr->range_cat_ns, SML_CAT_NS_RANGE_SIZE);
            r3_sml_ptr->magic_tail = r2_sml_ptr->magic_tail;
        }
    }
    else if (previous_ota_info->LID == NVRAM_EF_SML_GBLOB_LID)
    {
        for (record_idx = 0; record_idx < NVRAM_EF_SML_GBLOB_TOTAL; record_idx++)
        {
            sml_r2_gblob_s_context_struct *r2_gblob_ptr = (sml_r2_gblob_s_context_struct*) (old_value_buffer + (record_idx * sizeof(sml_r2_gblob_s_context_struct)));
            sml_gblob_s_context_struct *r3_gblob_ptr = (sml_gblob_s_context_struct*) (new_value_buffer + (record_idx * sizeof(sml_gblob_s_context_struct)));

            r3_gblob_ptr->major_version = r2_gblob_ptr->major_version;
            r3_gblob_ptr->minor_version = r2_gblob_ptr->minor_version;
            r3_gblob_ptr->device_lock_state = r2_gblob_ptr->device_lock_state;

            memcpy(r3_gblob_ptr->imei, r2_gblob_ptr->imei_1, SML_GBLOB_IMEI_SIZE);
            memcpy(r3_gblob_ptr->imei+SML_GBLOB_IMEI_SIZE, r2_gblob_ptr->imei_2, SML_GBLOB_IMEI_SIZE);

            r3_gblob_ptr->sml_lock_type = r2_gblob_ptr->sml_lock_type;
            memcpy(r3_gblob_ptr->sml_lock_sub_type, r2_gblob_ptr->sml_lock_sub_type, SML_GBLOB_SUB_RULE_SIZE);
            memcpy(r3_gblob_ptr->tlv_data, r2_gblob_ptr->tlv_data, SML_GBLOB_TLV_DATA_SIZE);
            r3_gblob_ptr->dev_protection_algo = r2_gblob_ptr->dev_protection_algo;

            r3_gblob_ptr->dev_max_retry_cnt[SML_GBLOB_SIZE_OF_MRC-1] = r2_gblob_ptr->dev_max_retry_cnt;
            r3_gblob_ptr->dev_remain_retry_cnt[SML_GBLOB_SIZE_OF_MRC-1] = r2_gblob_ptr->dev_remain_retry_cnt;

            memcpy(r3_gblob_ptr->device_interation_cnt, r2_gblob_ptr->device_interation_cnt, SML_GBLOB_SIZE_OF_DEV_INTCNT);
            memcpy(r3_gblob_ptr->device_salt, r2_gblob_ptr->device_salt, SML_GBLOB_SIZE_OF_DEV_SALT);
            memcpy(r3_gblob_ptr->device_hck, r2_gblob_ptr->device_hck, SML_GBLOB_SIZE_OF_DEV_HCK);
            r3_gblob_ptr->sig_protection_algo = r2_gblob_ptr->sig_protection_algo;
            memcpy(r3_gblob_ptr->signature, r2_gblob_ptr->signature, SML_GBLOB_SIZE_OF_SIGNATURE);
        }
    }
#endif /* __SMB_SIMME_LOCK__ & __SMB_SIMME_LOCK_NV__ */
#if defined (__SMART_PHONE_MODEM__)
    else if (previous_ota_info->LID == NVRAM_EF_SIM_LOCK_LID)
    {
        /* No conversion required */
    }
#endif /* __SMART_PHONE_MODEM__ */
    return is_need_update_file;

#endif /* __SML_DATA_CONVERSION_LOGIC__ */

}


#if defined(__NVRAM_CRITICAL_DATA_SIGN_SUPPORT__) && !defined(NVRAM_AUTO_GEN)
#include "nvram_interface.h"
#include "cust_chl_interface.h"
#include "custom_sec_key.h"
#include "psw_nvram.h"    // For MEID Structure
#include "c2k_nvram_def.h"    // For NVRAM_EF_C2K_MOBILE_ID_LID
#include "customer_nvram_def.h"
#include "kal_trace.h"
#include "ccci_rpc_if.h"

#define EXPONENT_DAT "\x01\x00\x01"
#define EXPONENT_LEN 3
//#define DBG_FIXED_CPUID_AND_PRODUCT

typedef enum {
    OEM_DATA_TAG_CPUID = 1,
    OEM_DATA_TAG_IMEI1 = 2,
    OEM_DATA_TAG_IMEI2 = 3,
    OEM_DATA_TAG_MEID = 4,
    OEM_DATA_WIFI_MAC = 5,
    OEM_DATA_BT_MAC = 6,
} nvram_oem_data_tag_enum;

static kal_uint8 val_of_hex(kal_char ch)
{
    if (ch >= '0' && ch <= '9') {
        return ch - '0';
    }

    if (ch >= 'A' && ch <= 'F') {
        ch |= (0x1<<5);  //   to lower-case   
    }

    EXT_ASSERT(ch >= 'a' && ch <= 'f', ch, 0, 0);

    return ch - 'a' + 10;
}

static void str_to_mem(kal_char *str, kal_uint8 *mem, kal_uint32 str_len)
{
    while (str_len > 0) {
        kal_uint8 ch;

        ch = (val_of_hex(*str++)<<4);
        ch |= val_of_hex(*str++);

        *mem++ = ch;

        str_len -= 2;
    }
}

static kal_bool custom_nvram_check_cpuid(kal_uint8 *val, kal_uint8 len)
{
    kal_uint8 cpuid[16] = {0};
    kal_int32 ret;
    
    // Step 1. Read Current CPUID
    ret = SST_Get_HRID((kal_uint32 *)cpuid, sizeof(cpuid));
    EXT_ASSERT(ret>=0, ret, 0, 0);
    
#if defined(DBG_FIXED_CPUID_AND_PRODUCT)
    kal_prompt_trace(MOD_NVRAM, "custom_nvram_check_cpuid SST_Get_HRID return %d bytes", ret);
    memcpy(cpuid, "1234567887654321", 16);
#endif

    // Step 2. Compare
    if (memcmp(cpuid, val, len) != 0) {
        kal_prompt_trace(MOD_NVRAM, "custom_nvram_check_cpuid not identical");
        return KAL_FALSE;
    }

    return KAL_TRUE;
}

static kal_bool custom_nvram_check_imei(kal_uint32 imei_idx, kal_uint8 *val, kal_uint8 len, kal_bool chk_rd)
{
    kal_uint8 stored_imei[NVRAM_EF_IMEI_IMEISV_SIZE] = {0};
    kal_uint8 signed_imei[NVRAM_EF_IMEI_IMEISV_SIZE] = {0};
    kal_uint8 idx;

    if (chk_rd == KAL_FALSE) {
        return KAL_TRUE;    // don't check IMEI before for write, only check CPUID
    }

    // Step 1. Get MTK Format IMEI from val string
    // For IMEI:    86233702135540 2  ((15 decimal digits))
    // MTK  Format:            0x68 32 73 20 31 55 04 f2 (8 bytes hex digits)
    // API input String Format:   "862337021355402"  (15 ascii code string)
    EXT_ASSERT(len==15, len, 0, 0);

    for (idx = 0; idx < 8; idx ++) {  
        signed_imei[idx] = val_of_hex(*val++);        // low 4bit first
        if (idx != 7) {
            signed_imei[idx] |= (val_of_hex(*val++)<<4);   // High 4bit next
        }
    }
    
    signed_imei[7] |= 0xF0;
    signed_imei[8] = 0;
    signed_imei[9] = 0;

    // Step 2. Read Stored IMEI
    nvram_external_read_data(NVRAM_EF_IMEI_IMEISV_LID, imei_idx, stored_imei, sizeof(stored_imei));
    
    // Step 3. Compare
    if (memcmp(stored_imei, signed_imei, 8) != 0) {
        kal_prompt_trace(MOD_NVRAM, "custom_nvram_check_imei%d not identical", imei_idx);
        if (chk_rd) {
            // Write signed IMEI to replace stored IMEI, only check CPUID
            if (!nvram_secure_write_imei(sizeof(signed_imei), signed_imei, imei_idx, NULL)) {
                kal_prompt_trace(MOD_NVRAM, "custom_nvram_check_imei%d re-write imei fail", imei_idx);
                return KAL_FALSE;
            } else {
                kal_prompt_trace(MOD_NVRAM, "custom_nvram_check_imei%d re-write with signed data", imei_idx);
                return KAL_TRUE;
            }
        } else {
            return KAL_FALSE;
        }
    }

    return KAL_TRUE;
}

#if defined(__C2K_RAT__)
static kal_bool custom_nvram_check_meid(kal_uint8 *val, kal_uint8 len, kal_bool chk_rd)
{
    PswMobileIDT stored_meid = {0,0};
    PswMobileIDT signed_meid = {2,0};
    kal_uint8 idx;

    if (chk_rd == KAL_FALSE) {
        return KAL_TRUE;    // don't check MEID before for write
    }

    // Step 1. Get MTK Format MEID from val string
    // For MEID:    A000007D8E567C  ((14 decimal digits))
    // MTK  Format:            0xF2A000007D8E567C (64bit long)
    // Input String Format:   "A000007D8E567C"  (14 ascii code string)
    EXT_ASSERT(len==14, len, 0, 0);
    
    for (idx = 0; idx < 14; idx ++) {
        signed_meid.value <<= 4;
        signed_meid.value |= val_of_hex(*val++);
    }
    signed_meid.value |= ((kal_uint64)0xF2<<56);

    // Step 2. Read Stored MEID
    nvram_external_read_data(NVRAM_EF_C2K_MOBILE_ID_LID, 1, (kal_uint8 *)&stored_meid, sizeof(stored_meid));

    // Step 3. Compare
    if (memcmp(&stored_meid, &signed_meid, sizeof(stored_meid)) != 0) {
        kal_prompt_trace(MOD_NVRAM, "custom_nvram_check_meid not identical");
        if (chk_rd) {
            // Write signed IMEI to replace stored IMEI
            if (!nvram_external_write_data(NVRAM_EF_C2K_MOBILE_ID_LID, 1, (kal_uint8 *)&signed_meid, sizeof(signed_meid))) {
                kal_prompt_trace(MOD_NVRAM, "custom_nvram_check_meid re-write meid fail");
                return KAL_FALSE;
            } else {
                kal_prompt_trace(MOD_NVRAM, "custom_nvram_check_meid re-write with signed data");
                return KAL_TRUE;
            }
        } else {
            return KAL_FALSE;
        }
    }

    return KAL_TRUE;
}
#endif

static kal_bool custom_nvram_check_critical_item(kal_uint8 tag, kal_uint8 len, kal_uint8 *val, kal_bool chk_rd)
{
    kal_bool ret = KAL_TRUE;
    switch(tag) {
        case OEM_DATA_TAG_CPUID:
            ret = custom_nvram_check_cpuid(val, len);
            break;
        case OEM_DATA_TAG_IMEI1:
            ret = custom_nvram_check_imei(1, val, len, chk_rd);
            break;
        case OEM_DATA_TAG_IMEI2:
            ret = custom_nvram_check_imei(2, val, len, chk_rd);
            break;
#if defined(__C2K_RAT__)
        case OEM_DATA_TAG_MEID:
            ret = custom_nvram_check_meid(val, len, chk_rd);
            break;
#endif
        default:
            break;
    }

    return ret;
}

static kal_bool custom_nvram_check_critical_data(void *raw_data, kal_uint32 raw_len, kal_bool chk_rd)
{
    kal_uint8 *ptr = (kal_uint8 *)raw_data;
    kal_uint8 *data_end;
    kal_int16 data_len = 0; // crital data length
    nvram_oem_data_tag_enum tag;
    kal_uint8 len, *val;

    // skip ver, 2 bytes
    ptr += 2;

    // get length
    data_len =  (*ptr++)<<8;    // high byte
    data_len |= (*ptr++);       // low byte

    if (data_len > raw_len-4) {
        return KAL_FALSE;
    }
 
    data_end = ptr + data_len;

    while (ptr < data_end) {
        tag = *ptr++;
        len = *ptr++;
      
        val = ptr;

        if (custom_nvram_check_critical_item(tag, len, val, chk_rd) == KAL_FALSE) {
            // check fail
            kal_prompt_trace(MOD_NVRAM, "custom_nvram_check_critical_data tag:%d len%d check fail", tag, len);
            return KAL_FALSE;
        }

        ptr += len;
    }

    return KAL_TRUE;
}

static kal_uint32 custom_nvram_check_sign(t_cust_chl_asym_key *key, void *data, kal_uint32 data_len, void *sign, kal_uint32 sign_len)
{
    kal_uint32 ret_val;

    ret_val = CustCHL_Verify_RSA_Signature(CUST_CHL_ALG_RSA_PKCS1_V15_SHA256,
                data,
                data_len,
                sign,
                sign_len,
                key
              );

    return ret_val;
}

static kal_int32 custom_nvram_get_product_name(kal_char *buff, kal_uint32 len)
{
    kal_int32 ret = 0;
    kal_char prop_name[] = "ro.product.name";
    
    memset(buff, 0, len);

    ret = IPC_RPC_General_Query(IPC_RPC_QUERY_AP_SYS_PROPERTY, prop_name, sizeof(prop_name), buff, len);
    
    if (ret <= 0) {
        kal_prompt_trace(MOD_NVRAM, "custom_nvram_get_product got error:%d", ret);
    }

    EXT_ASSERT(ret>0, ret, 0, 0);

    buff[ret]='\0';

#if defined(DBG_FIXED_CPUID_AND_PRODUCT)
    kal_prompt_trace(MOD_NVRAM, "custom_nvram_get_product get %s", buff);
    strcpy(buff, "cactus");
#endif

    return ret;
}

static nvram_errno_enum custom_nvram_check_signed_critical_data(kal_uint8 *all_data, kal_uint32 all_data_len, kal_bool chk_rd)
{
    kal_char *key = NULL; /* 1024-bits 128-bytes 256-hexs */
    kal_uint32 key_len = 0;
    kal_char *data = NULL;
    kal_uint32 data_len = 0;
    kal_char *sign = NULL;
    kal_uint32 sign_len = 0;
    kal_char *end = NULL;
    kal_uint32 chk_ret = 0;
    t_cust_chl_asym_key  *asym_key = NULL;
    kal_uint8 *raw_data = NULL;
    kal_uint8 *raw_sign = NULL;
    kal_uint8 *tmp_buff = NULL;
    nvram_errno_enum final_ret = NVRAM_ERRNO_SUCCESS;
    kal_char product[32] = {0};
    
    // protect_data: IMEI1+IMEI2+MEID+CPUID+Model
    // NV content: protect_data + signed(protect_data) + Device Type RSA Pub Key + signed(Device Type RSA Pub Key)
    asym_key = get_ctrl_buffer(sizeof(t_cust_chl_asym_key));
    raw_data = get_ctrl_buffer(NVRAM_EF_CUSTOMER_SIGNED_CRITICAL_DATA_SIZE/2);
    raw_sign = get_ctrl_buffer(NVRAM_EF_CUSTOMER_SIGNED_CRITICAL_DATA_SIZE/2);
    ASSERT(asym_key != NULL);
    ASSERT(raw_data != NULL);
    ASSERT(raw_sign != NULL);
    
    memset(asym_key, 0, sizeof(t_cust_chl_asym_key));

    // Step 1. Check signed(Device Type RSA Pub Key) with ROOT Type RSA Pub Key to get Device Type RSA Pub Key
    ASSERT(cust_sec_get_asym_key(1, asym_key) == 0);    // key index is 1
    
    data = strstr((kal_char *)all_data, "devPubKeyModulus:");
    if (data == NULL) {
        kal_prompt_trace(MOD_NVRAM, "custom_nvram_check_signed_critical_data devPubKeyModulus not found");
        final_ret = NVRAM_ERRNO_SIG_CHK_FAIL;
        goto end;
    }
    data += strlen("devPubKeyModulus:");
    end = strstr(data, "\\n");
    data_len = end-data;

    sign = strstr((kal_char *)all_data, "devPubKeySign:");
    if (sign == NULL) {
        kal_prompt_trace(MOD_NVRAM, "custom_nvram_check_signed_critical_data devPubKeySign not found");
        final_ret = NVRAM_ERRNO_SIG_CHK_FAIL;
        goto end;
    }
    sign += strlen("devPubKeySign:");
    end = strstr(sign, "\\n");
    sign_len = end-sign;
    
    str_to_mem(sign, raw_sign, sign_len);

    // signature = rsa_encrypt(root_priv_key, sha256(exponent+modulus+product))
    custom_nvram_get_product_name(product, sizeof(product));
    tmp_buff = get_ctrl_buffer(NVRAM_EF_CUSTOMER_SIGNED_CRITICAL_DATA_SIZE/2);

    memcpy(tmp_buff, "10001", 5);  // fixed 5 bytes exponent
    memcpy(tmp_buff+5, data, data_len);
    memcpy(tmp_buff+5+data_len, product, strlen(product));
    chk_ret = custom_nvram_check_sign(asym_key, tmp_buff, 5+data_len+strlen(product), raw_sign, sign_len/2);

    free_ctrl_buffer(tmp_buff);
    if (chk_ret != 0) {
        kal_prompt_trace(MOD_NVRAM, "custom_nvram_check_signed_critical_data dev_pub_key verify fail %d", chk_ret);
        final_ret = NVRAM_ERRNO_SIG_CHK_FAIL;
        goto end;
    }

    // Step 2. Check signed(protect_data) with Device Type RSA Pub Key to get protect_data
    key = data;
    key_len = data_len;

    data = strstr((kal_char *)all_data, "criticalData:");
    if (data == NULL) {
        kal_prompt_trace(MOD_NVRAM, "custom_nvram_check_signed_critical_data criticalData not found");
        final_ret = NVRAM_ERRNO_SIG_CHK_FAIL;
        goto end;
    }
    data += strlen("criticalData:");
    end = strstr(data, "\\n");
    data_len = end-data;

    sign = strstr((kal_char *)all_data, "crticalDataSign:");
    if (sign == NULL) {
        kal_prompt_trace(MOD_NVRAM, "custom_nvram_check_signed_critical_data criticalDataSign not found");
        final_ret = NVRAM_ERRNO_SIG_CHK_FAIL;
        goto end;
    }
    sign += strlen("crticalDataSign:");
    //end = strstr(data, "\\n");
    //data_len = end-data;
    sign_len = key_len;

    memset(asym_key, 0, sizeof(t_cust_chl_asym_key));
    memcpy(asym_key->m_E_key, EXPONENT_DAT, EXPONENT_LEN);   // Exponent is fixed to 10001
    asym_key->m_E_len = EXPONENT_LEN;
    str_to_mem(key, asym_key->m_N_key, key_len);
    asym_key->m_N_len = key_len/2;
    str_to_mem(data, raw_data, data_len);
    str_to_mem(sign, raw_sign, sign_len);

    // signature = rsa_encrypt(dev_priv_key, sha256(nv_data))    
    chk_ret = custom_nvram_check_sign(asym_key, data, data_len, raw_sign, sign_len/2);
    
    if (chk_ret != 0) {
        kal_prompt_trace(MOD_NVRAM, "custom_nvram_check_signed_critical_data ciritical_data verify fail %d", chk_ret);
        final_ret = NVRAM_ERRNO_SIG_CHK_FAIL;
        goto end;
    }

    // Step 3. Check protect_data
    if (custom_nvram_check_critical_data(raw_data, data_len/2, chk_rd) == KAL_FALSE) {
        final_ret = NVRAM_ERRNO_SIG_CHK_FAIL;
        goto end;
    }

end:
    free_ctrl_buffer(asym_key);
    free_ctrl_buffer(raw_data);
    free_ctrl_buffer(raw_sign);

    kal_prompt_trace(MOD_NVRAM, "custom_nvram_check_signed_critical_data return %d", final_ret);
    
    return final_ret;
}


nvram_lid_enum custom_nvram_get_signed_critical_data_lid()
{
    return NVRAM_EF_CUSTOMER_SIGNED_CRITICAL_DATA_LID;
}

kal_bool custom_nvram_check_signed_critical_data_before_write(kal_uint8 *wr_dat, kal_uint32 len)
{
    if (custom_nvram_check_signed_critical_data(wr_dat, len, KAL_FALSE) != 0) {
        return KAL_FALSE;
    } else {
        return KAL_TRUE;
    }
}

kal_bool custom_nvram_read_and_check_signed_critical_data()
{
    kal_bool ret_val;
    kal_int32 idx = 0, chk_val = 0;
    kal_uint8 *data_buff = get_ctrl_buffer(NVRAM_EF_CUSTOMER_SIGNED_CRITICAL_DATA_SIZE);
    
    ASSERT(data_buff != NULL);

    // Only check when IMEI is not empty
    ret_val = nvram_external_read_data(NVRAM_EF_IMEI_IMEISV_LID, 1, data_buff, NVRAM_EF_IMEI_IMEISV_SIZE);
    if (ret_val != KAL_TRUE) {
        free_ctrl_buffer(data_buff);
        kal_prompt_trace(MOD_NVRAM, "custom_nvram_read_and_check_signed_critical_data read imei fail");
        return KAL_FALSE;
    }

    // check if default value, default value is all FF
    chk_val = 0xFF;
    for (idx = 0; idx < NVRAM_EF_IMEI_IMEISV_SIZE; idx++) {
        chk_val &= data_buff[idx];
    }
    
    if (chk_val == 0xFF) {
        free_ctrl_buffer(data_buff);
        kal_prompt_trace(MOD_NVRAM, "custom_nvram_read_and_check_signed_critical_data imei is default value, bypass check");
        return KAL_TRUE;
    }

    // Read critical data from nvram
    ret_val = nvram_external_read_data(NVRAM_EF_CUSTOMER_SIGNED_CRITICAL_DATA_LID, 1, data_buff, NVRAM_EF_CUSTOMER_SIGNED_CRITICAL_DATA_SIZE);
    if (ret_val != KAL_TRUE) {
        free_ctrl_buffer(data_buff);
        kal_prompt_trace(MOD_NVRAM, "custom_nvram_read_and_check_signed_critical_data read critical data fail");
        return KAL_FALSE;
    }

    // check if default value, default value is all zeros
    chk_val = 0;
    for (idx = 0; idx < NVRAM_EF_CUSTOMER_SIGNED_CRITICAL_DATA_SIZE; idx++) {
        chk_val |= data_buff[idx];
    }

    if (chk_val == 0) {
        free_ctrl_buffer(data_buff);
        kal_prompt_trace(MOD_NVRAM, "custom_nvram_read_and_check_signed_critical_data sign data is default value, check fail");
        return KAL_FALSE;
    }

    // check validation of critical data
    if (custom_nvram_check_signed_critical_data(data_buff, NVRAM_EF_CUSTOMER_SIGNED_CRITICAL_DATA_SIZE, KAL_TRUE) != 0) {
        ret_val = KAL_FALSE;
    } else {
        ret_val = KAL_TRUE;
    }
    free_ctrl_buffer(data_buff);

    return ret_val;
}

#endif

#endif /* !defined(NVRAM_NOT_PRESENT) */
