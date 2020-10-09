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
 * 
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
 ****************************************************************************/
#ifndef __VSIM_NVRAM_DEF_H__
#define __VSIM_NVRAM_DEF_H__
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 


#include "nvram_defs.h"
#include "nvram_enums.h"
#include "ps_public_enum.h"
#include "device.h"
// LID Enums

typedef enum
{
        NVRAM_EF_VSIM_RSA_KEY_LID               = NVRAM_LID_GRP_VSIM(0), // __REL10__: t3346    
        NVRAM_EF_KEYGEN_LID,
        NVRAM_EF_VSIM_CONFIG_LID,
        NVRAM_EF_VSIM_PROFILE_LID,        
        NVRAM_EF_VSIM_SIM_IMSI_LID,
        NVRAM_EF_VSIM_U_IMSI_LID,

        NVRAM_EF_VSIM_LAST_LID                  = NVRAM_LID_GRP_VSIM(63)
}nvram_lid_vsim_enum;

// VERNO
#define NVRAM_EF_VSIM_RSA_KEY_LID_VERNO "000"
#define NVRAM_EF_KEYGEN_LID_VERNO "001"

#ifdef __MDVSIM__
/*
 * VSIM VERNO
 */
#define NVRAM_EF_VSIM_CONFIG_LID_VERNO "000"
#define NVRAM_EF_VSIM_PROFILE_LID_VERNO "000"
#define NVRAM_EF_VSIM_SIM_IMSI_LID_VERNO "000"
#define NVRAM_EF_VSIM_U_IMSI_LID_VERNO "000"
#endif
// Size and Total 

/**
  * VSIM file
  */

#define NVRAM_EF_VSIM_CONFIG_TOTAL         (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_VSIM_CONFIG_SIZE          (2)

#ifdef __MDVSIM__
#define VSIM_PROFILE_ENTRY              (5)
#else
#define VSIM_PROFILE_ENTRY              (1)
#endif
#define NVRAM_EF_VSIM_PROFILE_TOTAL        (VSIM_PROFILE_ENTRY)
#define NVRAM_EF_VSIM_PROFILE_SIZE         (521)

#define NVRAM_VSIM_SIM_EF_TOTAL         (1)
#define NVRAM_VSIM_USIM_EF_TOTAL        (VSIM_PROFILE_ENTRY)
#define VSIM_FILE_META_SIZE             (96)
#define VSIM_FILE_DATA_SIZE             (32)
#define NVRAM_VSIM_EF_DEFUALT_SIZE      (VSIM_FILE_META_SIZE+VSIM_FILE_DATA_SIZE)
#define NVRAM_VSIM_EF_U_DEFUALT_SIZE    (VSIM_FILE_META_SIZE+VSIM_FILE_DATA_SIZE)

#define NVRAM_EF_VSIM_SIM_IMSI_TOTAL NVRAM_VSIM_SIM_EF_TOTAL
#define NVRAM_EF_VSIM_SIM_IMSI_SIZE NVRAM_VSIM_EF_DEFUALT_SIZE
#define NVRAM_EF_VSIM_U_IMSI_TOTAL NVRAM_VSIM_USIM_EF_TOTAL
#define NVRAM_EF_VSIM_U_IMSI_SIZE NVRAM_VSIM_EF_U_DEFUALT_SIZE

// Data Structure of Each LID


typedef  struct 
{ 
    kal_uint8 meta[VSIM_FILE_META_SIZE];
    kal_uint8 data[VSIM_FILE_DATA_SIZE];
} nvram_vsim_ef_file_struct;

typedef nvram_vsim_ef_file_struct nvram_ef_vsim_sim_imsi_struct;
typedef nvram_vsim_ef_file_struct nvram_ef_vsim_u_imsi_struct;

typedef  struct 
{ 
    kal_uint8           vsim_ki_enabled;    /* VSIM Ki enable, 0: use fixed auth_res; otherwise use auth. algo*/
    kal_uint8           vsim_asym_key_idx;  /* 0-based index, assymetric key index for Ki protection */
    kal_uint8           sim_auth_algo;      /* 0: COMP128v2v3, 1:XOR, 2: OTHERS*/
    kal_uint8           usim_auth_algo;     /* 0: MILENAGE, 1:OTHERS*/
    kal_uint8           vsim_type;          /* uicc_card_type_enum, 0: Not init, 1:SIM, 2:USIM for now */
    kal_uint16          auth_res_len;
    kal_uint8           auth_res[256];
    kal_uint16          enc_ki_len;
    kal_uint8           enc_ki[256];        /* Ki(16Bytes), enc_ki(256Bytes) */
} nvram_ef_vsim_profile_struct;

typedef  struct 
{ 
    kal_uint8           vsim_enabled;       /* VSIM Mode, 0:Disabled; otherwise is Enabled */
    kal_uint8           vsim_profile_id;    /* 0-based index, for different operator EF (such as EF_IMSI) and secret key, Ki */
} nvram_ef_vsim_config_struct;

typedef struct
{
    t_cust_chl_asym_key enc_rsa_key;  //800B
}nvram_ef_vsim_rsa_key_struct;

#define NVRAM_VSIM_RSA_KEY_NUM 3
#define NVRAM_EF_VSIM_RSA_KEY_SIZE   sizeof(nvram_ef_vsim_rsa_key_struct)
#define NVRAM_EF_VSIM_RSA_KEY_TOTAL   NVRAM_VSIM_RSA_KEY_NUM

typedef struct
{
    kal_uint8 num_of_key;
}nvram_ef_keygen_struct;

#define NVRAM_EF_KEYGEN_SIZE   sizeof(nvram_ef_keygen_struct)
#define NVRAM_EF_KEYGEN_TOTAL   1

#ifdef __cplusplus
}
#endif 

#endif /* __VSIM_NVRAM_DEF_H__ */ 
