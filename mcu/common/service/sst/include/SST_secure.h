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
 *   SST_secure.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This is header file for SST_secure.c
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


#ifndef __SST_SECURE_H__
#define __SST_SECURE_H__

/*******************************************************************************
 * Included header files
 *******************************************************************************/

#include "kal_general_types.h"
#include "nvram_data_items.h"

#include "sst_interface.h"
#include "kal_public_defs.h"
#include "reg_base.h"

/*************************************************************************
 * External global data declaration
 *************************************************************************/

/*************************************************************************
 * External Function Declaration
 *************************************************************************/

/*************************************************************************
 * Type definitions
 *************************************************************************/
 
/* max size of NVRAM secret key in bytes*/
#define NVRAM_KEY_GEN_AES_LEN                        32
#define NVRAM_KEY_GEN_MAX_KEY_LEN                    256

/* Error types of get NVRAM key*/
#define GET_NVRAM_KEY_ERROR_NONE                      0
#define GET_NVRAM_KEY_ERROR_KEY_BUFFER_INVALID       -1  // input buffer pointer is NULL
#define GET_NVRAM_KEY_ERROR_KEY_SEED_BUFFER_INVALID  -2  // input seed buffer pointer is NULL
#define GET_NVRAM_KEY_ERROR_KEY_LEN_EXCEED_MAX       -3  // input len exceed NVRAM_KEY_MAX_LEN
#define GET_NVRAM_KEY_ERROR_KEY_SEED_LEN_NOT_MATCH   -4


#define PROTECTED_LID_ERROR_NONE                      0x0
#define PROTECTED_LID_ERROR_SECURE_NOT_ALLOWED        0x1000
#define PROTECTED_LID_ERROR_NORMAL_R_FORBID           0x1001
#define PROTECTED_LID_ERROR_NORMAL_W_FORBID           0x1002

/* NVRAM AES en/decrypt related */
#define NVRAM_AES_KEY_LEN_128BIT					16
#define NVRAM_AES_KEY_LEN_192BIT					24
#define NVRAM_AES_KEY_LEN_256BIT					32

#define NVRAM_AES_ERROR_NONE						0
#define NVRAM_AES_ERROR_KEY_LEN_ERROR				-1
#define NVRAM_AES_ERROR_DATA_LEN_NOT_ALIGN			-2
#define NVRAM_AES_ERROR_DATA_LEN_ERROR				-3
#define NVRAM_AES_ERROR_BUF_PTR_ERROR				-4



//AP efuse offset definition
#if defined(MT6771)
#define OFFSET_EFUSE_AP_SBC_EN 0x60
#define OFFSET_BIT_AP_SBC_EN 0x2
#define	OFFSET_EFUSE_C_CTRL0 0x4c4
#define	OFFSET_EFUSE_C_CTRL1 0x4c8
#define	OFFSET_EFUSE_C_DAT0  0x510
#define	OFFSET_EFUSE_C_DAT1  0x514
#define	OFFSET_EFUSE_C_DAT2  0x518
#define	OFFSET_EFUSE_C_DAT3  0x51c
#define	OFFSET_EFUSE_C_DAT4  0x520
#define	OFFSET_EFUSE_C_DAT5  0x524
#define BASE_AP_EFUSE_ADDR   0xC1F10000	
#elif defined(MT6739)
#define OFFSET_EFUSE_AP_SBC_EN 0x60
#define OFFSET_BIT_AP_SBC_EN 0x2
#define	OFFSET_EFUSE_C_CTRL0 0x770
#define	OFFSET_EFUSE_C_CTRL1 0x774
#define	OFFSET_EFUSE_C_CTRL2  0x778
#define	OFFSET_EFUSE_C_CTRL3  0x77c
#define	OFFSET_EFUSE_C_DAT0  0x780
#define	OFFSET_EFUSE_C_DAT1  0x784
#define BASE_AP_EFUSE_ADDR   0xC1C00000	
#elif defined(MT6761) || defined(MT6765) || defined(MT6762)
#define OFFSET_EFUSE_AP_SBC_EN 0x60
#define OFFSET_BIT_AP_SBC_EN 0x2
#define	OFFSET_EFUSE_C_CTRL0 0x4c4
#define	OFFSET_EFUSE_C_CTRL1 0x4c8
#define	OFFSET_EFUSE_C_DAT0  0x510
#define	OFFSET_EFUSE_C_DAT1  0x514
#define	OFFSET_EFUSE_C_DAT2  0x518
#define	OFFSET_EFUSE_C_DAT3  0x51c
#define	OFFSET_EFUSE_C_DAT4  0x520
#define	OFFSET_EFUSE_C_DAT5  0x524
#define BASE_AP_EFUSE_ADDR   0xC1C50000	
#else
#define OFFSET_EFUSE_AP_SBC_EN 0x60
#define OFFSET_BIT_AP_SBC_EN 0x2
#define	OFFSET_EFUSE_C_CTRL0 0x0
#define	OFFSET_EFUSE_C_CTRL1 0x0
#define	OFFSET_EFUSE_C_DAT0  0x0
#define	OFFSET_EFUSE_C_DAT1  0x0
#define	OFFSET_EFUSE_C_DAT2  0x0
#define	OFFSET_EFUSE_C_DAT3  0x0
#define	OFFSET_EFUSE_C_DAT4  0x0
#define	OFFSET_EFUSE_C_DAT5  0x0	
#define BASE_AP_EFUSE_ADDR   EFUSE_base	
#endif

//AP efuse offset array
extern kal_uint32 ap_efuse_offset_arr[];
 
#if defined(__SV5_ENABLED__) || defined(__SV5X_ENABLED__)
#if defined(__SMART_PHONE_MODEM__) && defined(__X_BOOTING__)
#define SECURE_RO_SIZE_OVERHEAD 0	//SEC_RO has no GFH for external phone
#else
#define SECURE_RO_SIZE_OVERHEAD 404 
#endif /*defined(__SMART_PHONE_MODEM__) && defined(__X_BOOTING__)*/
#else
#define SECURE_RO_SIZE_OVERHEAD  0
#endif


// AP HRID location
#if defined(TK6291)

// No HRID, use MEID instead 
#define EFUSE_HRID0                         ((volatile unsigned *)(0xFFFFFFFF))
#define EFUSE_HRID1                         ((volatile unsigned *)(0xFFFFFFFF))

/* Efuse base from MD view
 * 0xC0206000 MT6755, MT6797
 */
// from Everest/Elbrus/Whitney these high-end project, efuse has 128 bits
#elif defined(MT6755) || defined(MT6797) || defined(MT6750) || defined(ELBRUS) || defined(MT6799) || defined(MT6759) || defined(MT6758) || defined(MT6775) || defined(MT6763) || defined(MT6739) || defined(MT6771)
#define EFUSE_HRID0                         ((volatile unsigned *)(EFUSE_base+0x0140))
#define EFUSE_HRID1                         ((volatile unsigned *)(EFUSE_base+0x0144))
#define SIZE_HRID                           (8)
#elif defined(MT6765) || defined(MT6762) || defined(MT6761) || defined(MT6768)
#define EFUSE_HRID0                         ((volatile unsigned *)(EFUSE_base+0x0140))
#define EFUSE_HRID1                         ((volatile unsigned *)(EFUSE_base+0x0144))
#define EFUSE_HRID2                         ((volatile unsigned *)(EFUSE_base+0x0148))
#define EFUSE_HRID3                         ((volatile unsigned *)(EFUSE_base+0x014C))
#define SIZE_HRID                           (16)
#else

#error "Not Supported Chips"

#endif

#define HW_AES_ENCRYPT	1
#define HW_AES_DECRYPT	0

/*************************************************************************
 * Export API of SSS and SST
 *************************************************************************/
extern kal_bool   SST_Is_Secure_BB(void);



extern void SST_Secure_Algo (kal_uint8 Direction, kal_uint32 ContentAddr,
                             kal_uint32 ContentLen, kal_uint8 *CustomSeed,
                             kal_uint8 *ResText);

extern void SST_Secure_Algo_With_Level (kal_uint8 Direction, kal_uint32 ContentAddr,
                        kal_uint32 ContentLen, kal_uint8 *CustomSeed, kal_uint32 Level,
                        kal_uint8 *ResText);

extern kal_bool SST_Get_NVRAM_Key(kal_uint32 *p_key, kal_uint32 *p_addr, kal_uint32 *p_len);
   
extern void SSS_Init_Share_Crypto_Drv(void * cb_ts_record, void * cb_ts_info, kal_uint32 init_tbl);

extern void SSS_Init_Crypto_Drv(void * cb_ts_record, void * cb_ts_info);

/*****************************************************************************
 * FUNCTION
 *  SST_NVRAM_Data_Access_Check
 * DESCRIPTION
 *  This function is to check the access to sensive or secure NVRAM data item.
 *  It is for internal used for NVRAM and security.
 * PARAMETERS
 *  LID:                               [IN]    NVRAM LID
 *  rw:                                 [IN]    read or write access : 0 => read, 1 => write
 *  is_secure_data_access:   [IN]    Secure or normal access : 0 => normal, 1 => secure
 * RETURNS
 *  unsigned 32 bits
 * RETURN VALUES
 *  0 :  check pass
 *  otherwise :  check failed, please must not allowed to read nvram if checking failed
 *****************************************************************************/
extern kal_uint32 SST_NVRAM_Data_Access_Check(nvram_lid_enum LID, kal_int32 rw, kal_bool is_secure_data_access, void * reserved_ptr);

extern kal_int32 SST_Get_HRID(kal_uint32 * pRId, kal_uint32 check_buf_size);

extern kal_int32 SST_Get_NVRAM_SW_Key(void * pNVKey, kal_uint32 nNVKeySize, void * pKeySeed, kal_uint32 nKeySeedSize);

// SST "S"pecific "S"ecure "F"eature Initialiation
extern void SST_SSF_Init(void);

// SST "S"pecific "S"ecure "F"eature De-init
extern void SST_SSF_Deinit(void);

kal_int32 nvram_AES_cipher_encrypt(unsigned char const *_key, unsigned int key_len, unsigned char *src_buf, unsigned char *dst_buf, unsigned int data_len);

kal_int32 nvram_AES_cipher_decrypt(unsigned char const *_key, unsigned int key_len, unsigned char *src_buf, unsigned char *dst_buf, unsigned int data_len);


#endif //__SST_SECURE_H__
