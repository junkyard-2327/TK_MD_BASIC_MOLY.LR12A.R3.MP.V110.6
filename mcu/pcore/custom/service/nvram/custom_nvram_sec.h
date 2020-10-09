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

/*******************************************************************************
 * Filename:
 * ---------
 * custom_nvram_sec.h
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
 *==============================================================================
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
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
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
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#ifndef CUSTOM_NVRAM_SEC_H
#define CUSTOM_NVRAM_SEC_H

#include "kal_general_types.h"
#include "sml_public_def.h"

typedef struct
{
    kal_uint8 security_indication;
    kal_uint8 phone_key[NVRAM_EDITOR_NUM_OF_BYTE_KEY];
    kal_uint8 last_imsi[NVRAM_EDITOR_NUM_OF_BYTE_IMSI];
    kal_uint8 pin1[NVRAM_EDITOR_NUM_PIN1];
    kal_uint8 pin1_valid;
    kal_uint8 phone_lock_verified;
    kal_uint8 iccid[NVRAM_EDITOR_NUM_OF_BYTE_ICCID];
} smu_security_info_struct;

/* --------------------------
 * Beginning of SML Configuration
 * --------------------------- */
#define NVRAM_SECRET_KEY_SIZE       8
#define NVRAM_DATABASE_KEY_SIZE     64  /* must be multiple of 16 */
#define NVRAM_CUSTOM_KEY_SEED_SIZE  32

/* General control key structure */
typedef struct {
    kal_uint8 state;    /* Default Value or NULL */
    kal_uint8 key[NVRAM_SML_MAX_SUPPORT_KEY_LEN]; //actual data length is SML_MAX_SUPPORT_KEY_LEN
} sml_control_key_struct;

/* General lock structure */
typedef struct {
    kal_uint8 state;                    /* sml_state_enum */
    kal_uint8 retry_count;              /* SML_RETRY_COUNT_X_CAT */
    kal_uint8 autolock_count;           /* SML_AUTOLOCK_NUM_X_CAT */
    kal_uint8 num;                      /* num of valid sets */
} sml_category_meta_struct;

typedef struct {
    kal_uint32  magic_head;                                 /* 4 */
    sml_category_meta_struct    cat[SML_SUPPORT_CAT_SIZE];  /* (4 * 7) */
    sml_control_key_struct      key[SML_SUPPORT_CAT_SIZE];  /* (9 * 7) */
    kal_uint8   code_cat_n[SML_CFG_CAT_N_SIZE];             /* (30 * 3)*/
    kal_uint8   code_cat_ns[SML_CFG_CAT_NS_SIZE];           /* (30 * 4)*/
    kal_uint8   code_cat_sp[SML_CFG_CAT_SP_SIZE];           /* (30 * 4)*/
    kal_uint8   code_cat_c[SML_CFG_CAT_C_SIZE];             /* (30 * 5)*/
    kal_uint8   code_cat_sim[SML_CFG_CAT_SIM_SIZE];         /* (30 * 8)*/
    kal_uint8   code_cat_ns_sp[SML_CFG_CAT_NS_SP_SIZE];     /* (5 * 10)*/
    kal_uint8   code_cat_sim_c[SML_CFG_CAT_SIM_C_SIZE];     /* (10 * 10)*/
    kal_uint8   range_cat_ns[SML_CAT_NS_RANGE_SIZE];        /* 2 */
    kal_uint32 magic_tail;                                  /* 4 */
} sml_context_struct;                                       /* 971 */
typedef sml_context_struct nvram_sml_context_struct;

#ifdef __SMB_SIMME_LOCK_NV__
typedef struct {
    kal_uint8 state;    /* Default Value or NULL */
    kal_uint8 algo;
    kal_uint8 salt[NVRAM_SML_S_MAX_SUPPORT_SALT_LEN];
    kal_uint8 inter_cnt[NVRAM_SML_S_MAX_SUPPORT_INTER_CNT_LEN];
    kal_uint8 key[NVRAM_SML_S_MAX_SUPPORT_HCK_LEN];
} sml_control_key_s_struct;

typedef struct {
    kal_uint8 state;                    /* sml_state_enum */
    kal_uint32 max_retry_count;         /* SML_MAX_RETRY_COUNT_X_CAT */
    kal_uint32 retry_count;             /* SML_RETRY_COUNT_X_CAT */
    kal_uint8 autolock_count;           /* SML_AUTOLOCK_NUM_X_CAT */
    kal_uint8 num;                      /* num of valid sets */
} sml_category_meta_s_struct;

typedef struct {
    kal_uint32  magic_head;                                   /* 4 */
    sml_category_meta_s_struct  cat[SML_SUPPORT_CAT_SIZE];    /* (4 * 7) */
    sml_control_key_s_struct    key[SML_SUPPORT_CAT_SIZE];    /* (9 * 7) */
    kal_uint8   code_cat_n[SML_CFG_CAT_N_SIZE];               /* (30 * 3)*/
    kal_uint8   code_cat_ns[SML_CFG_CAT_NS_SIZE];             /* (30 * 4)*/
    kal_uint8   code_cat_sp[SML_CFG_CAT_SP_SIZE];             /* (30 * 4)*/
    kal_uint8   code_cat_c[SML_CFG_CAT_C_SIZE];               /* (30 * 5)*/
    kal_uint8   code_cat_sim[SML_CFG_CAT_SIM_SIZE];           /* (30 * 8)*/
    kal_uint8   code_cat_ns_sp[SML_CFG_CAT_NS_SP_SIZE];       /* (5 * 10)*/
    kal_uint8   code_cat_sim_c[SML_CFG_CAT_SIM_C_SIZE];       /* (10 * 10)*/
    kal_uint8   range_cat_ns[SML_CAT_NS_RANGE_SIZE];          /* 2 */
    kal_uint32 magic_tail;                                    /* 4 */
} sml_context_s_struct;                                       /* 971 */
typedef sml_context_s_struct nvram_sml_context_s_struct;

#endif /* __SMB_SIMME_LOCK_NV__ */

typedef struct
{
    kal_uint8 data[3072];
} smu_op129_sim_lock_rawdata_struct;
typedef smu_op129_sim_lock_rawdata_struct nvram_sml_op129_sim_lock_rawdata_struct;

#ifdef __TFN_SIMLOCK__
typedef struct {
    kal_uint32  magic_head;                                   /* 4 */
    sml_category_meta_s_struct  cat[SML_SUPPORT_CAT_SIZE];    /* (4 * 7) */
    sml_control_key_s_struct    key[SML_SUPPORT_CAT_SIZE];    /* (9 * 7) */
    kal_uint8   code_cat_n[SML_CFG_CAT_N_SIZE];               /* (30 * 3)*/
    kal_uint8   code_cat_ns[SML_CFG_CAT_NS_SIZE];             /* (30 * 4)*/
    kal_uint8   code_cat_sp[SML_CFG_CAT_SP_SIZE];             /* (30 * 4)*/
    kal_uint8   code_cat_c[SML_CFG_CAT_C_SIZE];               /* (30 * 5)*/
    kal_uint8   code_cat_sim[SML_CFG_CAT_SIM_SIZE];           /* (30 * 8)*/
    kal_uint8   code_cat_ns_sp[SML_CFG_CAT_NS_SP_SIZE];       /* (5 * 10)*/
    kal_uint8   code_cat_sim_c[SML_CFG_CAT_SIM_C_SIZE];       /* (10 * 10)*/
    kal_uint8   range_cat_ns[SML_CAT_NS_RANGE_SIZE];          /* 2 */
    kal_uint32 magic_tail;                                    /* 4 */
} sml_context_tfn_struct;                                       /* 971 */
typedef sml_context_tfn_struct nvram_ef_l4_tfn_simlock_struct;

#endif
/* the magic number of file header and tail */
#define SML_MAGIC_HEAD_VALUE              (sizeof(sml_context_struct))
#define SML_MAGIC_TAIL_VALUE              0x26598088

/* --------------------------
 * End of SML Configuration
 * --------------------------- */

#if !defined(NVRAM_NOT_PRESENT)
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

#include "nvram_defs.h" /* NVRAM_MSP_ALIGNMENT */

/*
 * CUST PARA Configuration
 */
#ifdef __CUST_PARA_SUPPORT__
typedef struct {
	kal_uint8	dummy[4096]; /* defined by customer */
} CustPara_ST;
#endif


/*
 * Secure RO Version
 * Whenever nvram_sml_context_struct's size or members are changed,
 * be sure to assign an unique version number to SEC_RO_STRUCT_VER.
 * Otherwise, PC side tool has no idea how to compose it
 */
#ifndef __SECURE_USB_DOWNLOAD__
#define SEC_RO_STRUCT_VER		  1
#else
#define SEC_RO_STRUCT_VER		  2
#endif

/*
 * Secure RO
 */
typedef enum
{
    SEC_RO_PARA_DBG_PORT,
    SEC_RO_PARA_TOTAL
}sec_ro_para_enum;

typedef struct
{
    kal_uint8  m_custom_database_key[NVRAM_DATABASE_KEY_SIZE];
    /* -------- custom can add other secret data here ------------------- */


    /* please do not remove this member, to support AES 16 byte alignment */
    kal_uint32 padding[NVRAM_MSP_ALIGNMENT>>2];
} CUST_SECRET_DATA_ST;

typedef struct
{
	nvram_lid_enum LID;
	kal_uint16 total_records;
	kal_uint32 record_size;
	nvram_attr_enum ldi_attr;
	nvram_category_enum ldi_category;
	kal_char fileprefix[FILE_PREFIX_LEN+1];
	kal_char fileverno[FILE_VERNO_LEN + 1];
}nvram_lid_ota_check_info;


extern const kal_uint8 NVRAM_SECUPACK_DEFAULT[];
extern const kal_uint8 NVRAM_CUSTOM_KEY[];
extern const kal_uint8 NVRAM_CUSTOM_KEY_SEED[];

extern kal_uint32 secupack_total_to_verify;
extern void custom_nvram_get_key(char *init_key, unsigned char *keys);
extern void custom_nvram_encrypt(unsigned char const *keys, unsigned char *buffer, unsigned int length, int scrambleIndex);
extern void custom_nvram_decrypt(unsigned char const *keys, unsigned char *buffer, unsigned int length, int scrambleIndex);
extern  void nvram_AES_encrypt(unsigned char *buffer, unsigned int length);
extern  void nvram_AES_decrypt(unsigned char *buffer, unsigned int length);

extern kal_uint32 custom_nvram_sec_ro_size(void);
extern kal_uint32 custom_nvram_secupack_size(void);
extern kal_uint32 custom_nvram_secupack_total(void);
extern kal_uint32 custom_nvram_key_len(void);
extern kal_int32 custom_nvram_get_database_key(kal_uint8 *key_buffer, kal_uint32 buffer_size);

extern nvram_lid_enum custom_nvram_get_signed_critical_data_lid();
extern kal_bool custom_nvram_check_signed_critical_data_before_write(kal_uint8 *wr_dat, kal_uint32 len);
extern kal_bool custom_nvram_read_and_check_signed_critical_data();

#if defined(NVRAM_AUTO_GEN)
extern const nvram_sml_context_struct NVRAM_EF_SML_DEFAULT;
#ifdef __SMB_SIMME_LOCK_NV__
extern const nvram_sml_context_s_struct NVRAM_EF_SML_S_DEFAULT;
#endif /* __SMB_SIMME_LOCK_NV__ */
extern const kal_uint8 custom_secret_key[];
extern const kal_uint8 custom_key_seed[];
extern const CUST_SECRET_DATA_ST custom_secret_data;
extern const kal_uint8 NVRAM_SECURE_PARA[];
#ifdef __SECURE_USB_DOWNLOAD__
extern const kal_uint8 custom_symmetric_key[];
extern const T_Customer_Public_Key custom_asymmetric_key;
#endif
#endif


#ifdef __cplusplus
}
#endif
#endif /* !defined(NVRAM_NOT_PRESENT) */
#endif /* CUSTOM_NVRAM_SEC_H */

