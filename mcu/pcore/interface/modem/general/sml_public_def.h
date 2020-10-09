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
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2001
 *
 *******************************************************************************/

 /*******************************************************************************
 * Filename:
 * ---------
 *   sml_public_def.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Enum and Constant provided by SIM-ME Lock
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *******************************************************************************/
#ifndef SML_PUBLIC_DEF_H
#define SML_PUBLIC_DEF_H

#include "kal_public_defs.h"
#include "sim_ps_enum.h"

/*--- SML related Macro Defined ---*/

/* for MS_SECURITY */
#define NVRAM_EDITOR_NUM_OF_BYTE_KEY     8
#define NVRAM_EDITOR_NUM_OF_BYTE_NP      3
#define NVRAM_EDITOR_NUM_OF_BYTE_NSP     5
#define NVRAM_EDITOR_NUM_NSP             3
#define NVRAM_EDITOR_NUM_GID            20
#define NVRAM_EDITOR_NUM_OF_BYTE_IMSI    9
#define NVRAM_EDITOR_NUM_PIN1            8
#define NVRAM_EDITOR_NUM_OF_BYTE_ICCID  10


/*
 * the basic unit of categories
 */
#define SML_SIZE_OF_CAT_N      3 /* MCC/MNC */
#define SML_SIZE_OF_CAT_NS     4 /* MCC/MNC + HLR */
#ifdef __SML_CONFIG_GID_LENGTH__
/* GID1 and GID2 length can be varied from 1 to 20 bytes */
#define SML_SIZE_OF_CAT_SP     (3 + NUM_GID1) /* MCC/MNC + GID1 */
#define SML_SIZE_OF_CAT_C      (3 + NUM_GID1 + NUM_GID2) /* MCC/MNC + GID1 + GID2 */
#else
#define SML_SIZE_OF_CAT_SP     4 /* MCC/MNC + GID1 */
#define SML_SIZE_OF_CAT_C      5 /* MCC/MNC + GID1 + GID2 */
#endif
#define SML_SIZE_OF_CAT_SIM    8 /* IMSI */
/* Define the maximum suppot categories */
#ifdef __RJIO_CHECK_ICCID_WHEN_MCC_MNC_MATCHED__
/* current provided max White list is 23. Keep 2 more extra*/
#define SML_MAX_SUPPORT_CAT_N       25
#else
#define SML_MAX_SUPPORT_CAT_N       10
#endif /* __RJIO_CHECK_ICCID_WHEN_MCC_MNC_MATCHED__ */
#define SML_MAX_SUPPORT_CAT_NS       2
#define SML_MAX_SUPPORT_CAT_SP       2
#define SML_MAX_SUPPORT_CAT_C        2
#define SML_MAX_SUPPORT_CAT_SIM      2
/* Define the total size of each category */
#define SML_CFG_CAT_N_SIZE          (SML_MAX_SUPPORT_CAT_N * SML_SIZE_OF_CAT_N)
#define SML_CFG_CAT_NS_SIZE         (SML_MAX_SUPPORT_CAT_NS * SML_SIZE_OF_CAT_NS)
#define SML_CFG_CAT_SP_SIZE         (SML_MAX_SUPPORT_CAT_SP * SML_SIZE_OF_CAT_SP)
#define SML_CFG_CAT_C_SIZE          (SML_MAX_SUPPORT_CAT_C * SML_SIZE_OF_CAT_C)
#define SML_CFG_CAT_SIM_SIZE        (SML_MAX_SUPPORT_CAT_SIM * SML_SIZE_OF_CAT_SIM)
/* Define the support category size */
#define SML_SUPPORT_CAT_SIZE    7 /* SML_CAT_SIZE in sml_cat_enum */

#define NVRAM_SML_S_MAX_SUPPORT_SALT_LEN       32
#define NVRAM_SML_S_MAX_SUPPORT_INTER_CNT_LEN   4
#define NVRAM_SML_S_MAX_SUPPORT_HCK_LEN        64

#define SML_GBLOB_IMEI_SIZE             15
#define SML_GBLOB_TOTAL_IMEI_SIZE       SML_GBLOB_IMEI_SIZE * 4 //Support Max 4 SIM
#define SML_GBLOB_SUB_RULE_SIZE          2
#define SML_GBLOB_TLV_DATA_SIZE        256
#define SML_GBLOB_SIZE_OF_MRC            4
#define SML_GBLOB_SIZE_OF_DEV_INTCNT     4
#define SML_GBLOB_SIZE_OF_DEV_SALT      32
#define SML_GBLOB_SIZE_OF_DEV_HCK       64
#define SML_GBLOB_SIZE_OF_SIGNATURE    256
#define SML_GBLOB_SIZE_OF_PACKAGE_KEY 1024


/* Invalid SML context obj length */
#define SML_SL_NVRAM_ACCESS_ID_NONE             0
#define SML_SL_MAX_SUPPORT_KEY_LEN              16


#define DSML_MAX_BL_LEN                  128 /* should larger then max category data */

/*
 * Key management behavior
 *
 * the maximum control key length in bcd, i.e., double in digits
 * this value shall not be smaller than MAX_SIM_PASSWD_LEN-1, which is the maximum length of PIN
 */
#ifdef __EXTEND_SML_KEY_LEN__
#define SML_MAX_SUPPORT_KEY_LEN     16
#else
#define SML_MAX_SUPPORT_KEY_LEN     8 /* in byte */
#endif

#if defined(__SMB_SIMME_LOCK__) && defined(__SMB_SIMME_LOCK_NV__)
#define CAT_KEY_MAX_SUPPORT_LEN NVRAM_SML_S_MAX_SUPPORT_HCK_LEN
#else
#define CAT_KEY_MAX_SUPPORT_LEN SML_MAX_SUPPORT_KEY_LEN	
#endif

/* NVRAM_SML_MAX_SUPPORT_KEY_LEN is the largest value of SML_MAX_SUPPORT_KEY_LEN 
   used by NVRAM LID NVRAM_EF_SML_LID to prevent from NVRAM content size change
   when __EXTEND_SML_KEY_LEN__ is switched.
   Pleaes remember to align this value to the maximal SML_MAX_SUPPORT_KEY_LEN
 */
#define NVRAM_SML_MAX_SUPPORT_KEY_LEN   16

/*
 * Linked Category Support
 */
#ifdef __SML_CONFIG_GID_LENGTH__
	/* GID1 and GID2 length can be varied from 1 to 20 bytes */
#define SML_SIZE_OF_LINK_NS_SP          (4 + NUM_GID1)  /* MCC/MNC + HLR+ GID1 */
#define SML_SIZE_OF_LINK_SIM_C          (8 + NUM_GID1 + NUM_GID2) /* IMSI + GID1 + GID2 */
#else
#define SML_SIZE_OF_LINK_NS_SP          5  /* MCC/MNC + HLR+ GID1 */
#define SML_SIZE_OF_LINK_SIM_C          10 /* IMSI + GID1 + GID2 */
#endif
/* Define the maximum support num of categories */
#define SML_MAX_SUPPORT_LINK_NS_SP      2
#define SML_MAX_SUPPORT_LINK_SIM_C      2
/* define the total size of link category */
#define SML_CFG_CAT_NS_SP_SIZE          (SML_SIZE_OF_LINK_NS_SP * SML_MAX_SUPPORT_LINK_NS_SP)
#define SML_CFG_CAT_SIM_C_SIZE          (SML_SIZE_OF_LINK_SIM_C * SML_MAX_SUPPORT_LINK_SIM_C)

/*
 * Range Support
 */
#define SML_CAT_NS_RANGE_SIZE           2   /* ex: 00FF 0~255 for HLR */

/*
 * Automatically Lock
 */
#define SML_AUTOLOCK_NUM_N_CATEGORY     SML_MAX_SUPPORT_CAT_N
#define SML_AUTOLOCK_NUM_NS_CATEGORY    SML_MAX_SUPPORT_CAT_NS
#define SML_AUTOLOCK_NUM_SP_CATEGORY    SML_MAX_SUPPORT_CAT_SP
#define SML_AUTOLOCK_NUM_C_CATEGORY     SML_MAX_SUPPORT_CAT_C
#define SML_AUTOLOCK_NUM_SIM_CATEGORY   SML_MAX_SUPPORT_CAT_SIM

/*
 * Maximum Retry Count
 */
#define SML_MAX_RETRY_COUNT             5
#define SML_RETRY_TIMEOUT               3 /* in sec */
#define SML_RETRY_COUNT_N_CAT           SML_MAX_RETRY_COUNT
#define SML_RETRY_COUNT_NS_CAT          SML_MAX_RETRY_COUNT
#define SML_RETRY_COUNT_SP_CAT          SML_MAX_RETRY_COUNT
#define SML_RETRY_COUNT_C_CAT           SML_MAX_RETRY_COUNT
#define SML_RETRY_COUNT_SIM_CAT         SML_MAX_RETRY_COUNT

#if !defined(L1_SIM) || defined(__UE_SIMULATOR__) || defined(__DUMMY_L1_ON_TARGET_4G5G__)
#include "cust_chl_interface.h"

#define SML_TMO_MAX_SHARED_KEY_LENGTH       MAX_CUST_CHL_SYM_KEY_LEN
#define SML_TMO_MAX_ENCRYPTED_KEY_LENGTH    MAX_CUST_CHL_ASYM_KEY_LEN
#ifdef __ATT_SIM_LOCK__
#define SML_ATT_MAX_SHARED_KEY_LENGTH       MAX_CUST_CHL_SYM_KEY_LEN
#define SML_ATT_MAX_ENCRYPTED_KEY_LENGTH    MAX_CUST_CHL_ASYM_KEY_LEN
#endif
#endif /* L1_SIM */

/* The following size are referend from TMO SIM lock blob format */
#define SML_TMO_SIZE_OF_API_VERSION         4
#define SML_TMO_SIZE_OF_VERSION             4
#define SML_TMO_SIZE_OF_LENGTH              2
#define SML_TMO_SIZE_OF_MCC_MNC             4
#define SML_TMO_SIZE_OF_GID                 2
#define SML_TMO_SIZE_OF_MCC_MNC_GID         6
#define SML_TMO_SIZE_OF_RESERVED            2
#define SML_TMO_SIZE_OF_START_TIME          8
#define SML_TMO_SIZE_OF_END_TIME            4
#define SML_TMO_SIZE_OF_VERIFICATION_CODE   256

#define SML_TMO_SIZE_OF_MAC                 32
#define SML_TMO_SIZE_OF_SIGNATURE           256

#define SML_TMO_MAX_SLB_SIZE                NVRAM_EF_SIM_LOCK_SIZE

/* TMO SIM lock blob format 1.5 */
#define SML_TMO_MAX_PLMN_NUMBER             10
#define SML_TMO_MAX_GID_NUMBER              10
#define SML_TMO_SIZE_OF_NUM_PLMN            2
#define SML_TMO_SIZE_OF_PLMN_LIST           SML_TMO_SIZE_OF_MCC_MNC * SML_TMO_MAX_PLMN_NUMBER
#define SML_TMO_SIZE_OF_NUM_GID             2
#define SML_TMO_SIZE_OF_GID_LIST            SML_TMO_SIZE_OF_GID * SML_TMO_MAX_GID_NUMBER
#define SML_TMO_SIZE_OF_IMEI                16
#define SML_TMO_SIZE_OF_UNLOCK_TIME         4

/* Invalid SML context obj length */
#define SML_TMO_INVALID_CONTEXT_OBJ_LENGTH                0xFFFF
#define SML_TMO_NVRAM_ACCESS_ID_UPDATE_VERIFICATION_CODE  0xFD
#define SML_TMO_NVRAM_ACCESS_ID_UPDATE_SLB                0xFC
#define SML_TMO_NVRAM_ACCESS_ID_RESET_SLB                 0xFB
#define SML_TMO_NVRAM_ACCESS_ID_UNLOCK_EXPIRE             0xFA
#define SML_TMO_TIMEOUT_PERIODIC_CHECK                    (KAL_TICKS_1_SEC*10)//(12*60*KAL_TICKS_1_MIN)     /* 12 hours */
#define SML_RSU_TIMER_INDEX_PERIODIC_CHECK                0x01

#ifdef __ATT_SIM_LOCK__
/* The following size are referend from ATT SIM lock blob format */
#define SML_ATT_SIZE_OF_API_VERSION         4
#define SML_ATT_SIZE_OF_VERSION             4
#define SML_ATT_SIZE_OF_LENGTH              2
#define SML_ATT_SIZE_OF_MCC_MNC             4
#define SML_ATT_SIZE_OF_GID                 2
#define SML_ATT_SIZE_OF_MCC_MNC_GID         6
#define SML_ATT_SIZE_OF_RESERVED            2
#define SML_ATT_SIZE_OF_START_TIME          8
#define SML_ATT_SIZE_OF_END_TIME            4
#define SML_ATT_SIZE_OF_VERIFICATION_CODE   256
#define SML_ATT_SIZE_OF_MAC                 32
#define SML_ATT_SIZE_OF_SIGNATURE           256
#define SML_ATT_MAX_SLB_SIZE                NVRAM_EF_SIM_LOCK_SIZE

/* ATT SIM lock blob format 1.5 */
#define SML_ATT_MAX_PLMN_NUMBER             10
#define SML_ATT_MAX_GID_NUMBER              10
#define SML_ATT_SIZE_OF_NUM_PLMN            2
#define SML_ATT_SIZE_OF_PLMN_LIST           SML_ATT_SIZE_OF_MCC_MNC * SML_ATT_MAX_PLMN_NUMBER
#define SML_ATT_SIZE_OF_NUM_GID             2
#define SML_ATT_SIZE_OF_GID_LIST            SML_ATT_SIZE_OF_GID * SML_ATT_MAX_GID_NUMBER
#define SML_ATT_SIZE_OF_IMEI                16
#define SML_ATT_SIZE_OF_UNLOCK_TIME         4

/* Invalid SML context obj length */
#define SML_ATT_INVALID_CONTEXT_OBJ_LENGTH                0xFFFF
#define SML_ATT_NVRAM_ACCESS_ID_UPDATE_VERIFICATION_CODE  0xED
#define SML_ATT_NVRAM_ACCESS_ID_UPDATE_SLB                0xEC
#define SML_ATT_NVRAM_ACCESS_ID_RESET_SLB                 0xEB
#define SML_ATT_NVRAM_ACCESS_ID_UNLOCK_EXPIRE             0xEA
#define SML_ATT_TIMEOUT_PERIODIC_CHECK                    (KAL_TICKS_1_SEC*10)//(12*60*KAL_TICKS_1_MIN)     /* 12 hours */
#endif

/* the SML flags */
#define SML_FLAG_CAT_N             0x01
#define SML_FLAG_CAT_NS            0x02
#define SML_FLAG_CAT_SP            0x04
#define SML_FLAG_CAT_C             0x08
#define SML_FLAG_CAT_SIM           0x10

typedef struct {
    kal_uint8   major_version;
    kal_uint8   minor_version;
    kal_uint8   device_lock_state;
    kal_uint8   imei[SML_GBLOB_TOTAL_IMEI_SIZE];                     /*  15 * 4 */
    kal_uint8   sml_lock_type;
    kal_uint8   sml_lock_sub_type[SML_GBLOB_SUB_RULE_SIZE];
    kal_uint8   tlv_data[SML_GBLOB_TLV_DATA_SIZE];                   /* 256 */
    kal_uint8   dev_protection_algo;
    kal_uint8   dev_max_retry_cnt[SML_GBLOB_SIZE_OF_MRC];            /*   4 */
    kal_uint8   dev_remain_retry_cnt[SML_GBLOB_SIZE_OF_MRC];         /*   4 */
    kal_uint8   device_interation_cnt[SML_GBLOB_SIZE_OF_DEV_INTCNT]; /*   4 */
    kal_uint8   device_salt[SML_GBLOB_SIZE_OF_DEV_SALT];             /*  32 */
    kal_uint8   device_hck[SML_GBLOB_SIZE_OF_DEV_HCK];               /*  64 */
    kal_uint8   sig_protection_algo;
    kal_uint8   signature[SML_GBLOB_SIZE_OF_SIGNATURE];              /* 256 */
} sml_gblob_s_context_struct;
typedef sml_gblob_s_context_struct nvram_sml_gblob_s_context_struct;

typedef struct {
    kal_uint8   major_version;
    kal_uint8   minor_version;
    kal_uint8   device_lock_state;
    kal_uint8   imei_1[SML_GBLOB_IMEI_SIZE];                         /*  15 */
    kal_uint8   imei_2[SML_GBLOB_IMEI_SIZE];                         /*  15 */
    kal_uint8   sml_lock_type;
    kal_uint8   sml_lock_sub_type[SML_GBLOB_SUB_RULE_SIZE];
    kal_uint8   tlv_data[SML_GBLOB_TLV_DATA_SIZE];                   /* 256 */
    kal_uint8   dev_protection_algo;
    kal_uint8   dev_max_retry_cnt;
    kal_uint8   dev_remain_retry_cnt;
    kal_uint8   device_interation_cnt[SML_GBLOB_SIZE_OF_DEV_INTCNT]; /*   4 */
    kal_uint8   device_salt[SML_GBLOB_SIZE_OF_DEV_SALT];             /*  32 */
    kal_uint8   device_hck[SML_GBLOB_SIZE_OF_DEV_HCK];               /*  64 */
    kal_uint8   sig_protection_algo;
    kal_uint8   signature[SML_GBLOB_SIZE_OF_SIGNATURE];              /* 256 */
} sml_r2_gblob_s_context_struct;

typedef struct {
    kal_uint8   key[SML_GBLOB_SIZE_OF_PACKAGE_KEY];                 /* 1024 */
} sml_gblob_key_s_context_struct;
typedef sml_gblob_key_s_context_struct nvram_sml_gblob_key_s_context_struct;

/* For converting R1 SML structure to R2 */
typedef struct {
    kal_uint8 state;                    /* sml_state_enum */
    kal_uint8 retry_count;              /* SML_RETRY_COUNT_X_CAT */
    kal_uint8 autolock_count;           /* SML_AUTOLOCK_NUM_X_CAT */
    kal_uint8 num;                      /* num of valid sets */
} sml_category_meta_r1_struct;

typedef struct {
    kal_uint8 state;    /* Default Value or NULL */
    kal_uint8 key[8]; //actual data length is SML_MAX_SUPPORT_KEY_LEN
} sml_control_key_r1_struct;

typedef struct {
    kal_uint32  magic_head;                                 /* 4 */
    sml_category_meta_r1_struct cat[SML_SUPPORT_CAT_SIZE];  /* (4 * 7) */
    sml_control_key_r1_struct   key[SML_SUPPORT_CAT_SIZE];  /* (9 * 7) */
    kal_uint8   code_cat_n[SML_CFG_CAT_N_SIZE];             /* (30 * 3)*/
    kal_uint8   code_cat_ns[SML_CFG_CAT_NS_SIZE];           /* (30 * 4)*/
    kal_uint8   code_cat_sp[SML_CFG_CAT_SP_SIZE];           /* (30 * 4)*/
    kal_uint8   code_cat_c[SML_CFG_CAT_C_SIZE];             /* (30 * 5)*/
    kal_uint8   code_cat_sim[SML_CFG_CAT_SIM_SIZE];         /* (30 * 8)*/
    kal_uint8   code_cat_ns_sp[SML_CFG_CAT_NS_SP_SIZE];     /* (5 * 10)*/
    kal_uint8   code_cat_sim_c[SML_CFG_CAT_SIM_C_SIZE];     /* (10 * 10)*/
    kal_uint8   range_cat_ns[SML_CAT_NS_RANGE_SIZE];        /* 2 */
    kal_uint32 magic_tail;                                  /* 4 */
} sml_r1_context_struct;                                       /* 971 */

/* For converting LR12A.R2.MP SML to LR12A.R3.MP SML */
typedef struct {
    kal_uint8 state;    /* Default Value or NULL */
    kal_uint8 algo;
    kal_uint8 salt[NVRAM_SML_S_MAX_SUPPORT_SALT_LEN];
    kal_uint8 inter_cnt[NVRAM_SML_S_MAX_SUPPORT_INTER_CNT_LEN];
    kal_uint8 key[NVRAM_SML_S_MAX_SUPPORT_HCK_LEN];
} sml_r2_control_key_s_struct;

typedef struct {
    kal_uint8 state;                    /* sml_state_enum */
    kal_uint8 max_retry_count;          /* SML_MAX_RETRY_COUNT_X_CAT */
    kal_uint8 retry_count;              /* SML_RETRY_COUNT_X_CAT */
    kal_uint8 autolock_count;           /* SML_AUTOLOCK_NUM_X_CAT */
    kal_uint8 num;                      /* num of valid sets */
} sml_r2_category_meta_s_struct;

typedef struct {
    kal_uint32  magic_head;                                   /* 4 */
    sml_r2_category_meta_s_struct  cat[SML_SUPPORT_CAT_SIZE];    /* (4 * 7) */
    sml_r2_control_key_s_struct    key[SML_SUPPORT_CAT_SIZE];    /* (9 * 7) */
    kal_uint8   code_cat_n[SML_CFG_CAT_N_SIZE];               /* (30 * 3)*/
    kal_uint8   code_cat_ns[SML_CFG_CAT_NS_SIZE];             /* (30 * 4)*/
    kal_uint8   code_cat_sp[SML_CFG_CAT_SP_SIZE];             /* (30 * 4)*/
    kal_uint8   code_cat_c[SML_CFG_CAT_C_SIZE];               /* (30 * 5)*/
    kal_uint8   code_cat_sim[SML_CFG_CAT_SIM_SIZE];           /* (30 * 8)*/
    kal_uint8   code_cat_ns_sp[SML_CFG_CAT_NS_SP_SIZE];       /* (5 * 10)*/
    kal_uint8   code_cat_sim_c[SML_CFG_CAT_SIM_C_SIZE];       /* (10 * 10)*/
    kal_uint8   range_cat_ns[SML_CAT_NS_RANGE_SIZE];          /* 2 */
    kal_uint32 magic_tail;                                    /* 4 */
} sml_r2_context_s_struct;                                       /* 971 */

typedef struct {
    kal_uint8   version[SML_TMO_SIZE_OF_VERSION];                       /* 4 */
    kal_uint8   protection_scheme;                                      /* 1 */
    kal_uint8   state;                                                  /* 1 */
    kal_uint8   length[SML_TMO_SIZE_OF_LENGTH];                         /* 2 */
    kal_uint8   num_of_plmn[SML_TMO_SIZE_OF_NUM_PLMN];                  /* 2 */
    kal_uint8   plmn_list[SML_TMO_SIZE_OF_PLMN_LIST];                   /* N = 4 x plmn count */
    kal_uint8   num_of_gid[SML_TMO_SIZE_OF_NUM_GID];                    /* 2 */
    kal_uint8   gid_list[SML_TMO_SIZE_OF_GID_LIST];                     /* M = 2 x gid count */
    kal_uint8   reserved[SML_TMO_SIZE_OF_RESERVED];                     /* 2 */
    kal_uint8   start_time[SML_TMO_SIZE_OF_START_TIME];                 /* 8 */
    kal_uint8   end_time[SML_TMO_SIZE_OF_END_TIME];                     /* 4 */
    kal_uint8   imei[SML_TMO_SIZE_OF_IMEI];                             /* 16 */
    kal_uint8   verification_code[SML_TMO_SIZE_OF_VERIFICATION_CODE];   /* 256 */
    kal_uint8   unlock_time[SML_TMO_SIZE_OF_UNLOCK_TIME];               /* 4 */
} sml_tmo_context_struct;                                               /* 42 + N + M + 256 + 4*/
typedef sml_tmo_context_struct nvram_sml_tmo_context_struct;

#ifdef __ATT_SIM_LOCK__
typedef struct {
    kal_uint8   version[SML_ATT_SIZE_OF_VERSION];                       /* 4 */
    kal_uint8   protection_scheme;                                      /* 1 */
    kal_uint8   state;                                                  /* 1 */
    kal_uint8   length[SML_ATT_SIZE_OF_LENGTH];                         /* 2 */
    kal_uint8   num_of_plmn[SML_ATT_SIZE_OF_NUM_PLMN];                  /* 2 */
    kal_uint8   plmn_list[SML_ATT_SIZE_OF_PLMN_LIST];                   /* N = 4 x plmn count */
    kal_uint8   num_of_gid[SML_ATT_SIZE_OF_NUM_GID];                    /* 2 */
    kal_uint8   gid_list[SML_ATT_SIZE_OF_GID_LIST];                     /* M = 2 x gid count */
    kal_uint8   reserved[SML_ATT_SIZE_OF_RESERVED];                     /* 2 */
    kal_uint8   start_time[SML_ATT_SIZE_OF_START_TIME];                 /* 8 */
    kal_uint8   end_time[SML_ATT_SIZE_OF_END_TIME];                     /* 4 */
    kal_uint8   imei[SML_ATT_SIZE_OF_IMEI];                             /* 16 */
    kal_uint8   verification_code[SML_ATT_SIZE_OF_VERIFICATION_CODE];   /* 256 */
    kal_uint8   unlock_time[SML_ATT_SIZE_OF_UNLOCK_TIME];               /* 4 */
} sml_att_context_struct;                                               /* 42 + N + M + 256 + 4*/
typedef sml_att_context_struct nvram_sml_att_context_struct;
#endif

#if defined(NVRAM_AUTO_GEN)
extern const nvram_sml_tmo_context_struct NVRAM_EF_SML_TMO_DEFAULT;
#ifdef __ATT_SIM_LOCK__
extern const nvram_sml_att_context_struct NVRAM_EF_SML_ATT_DEFAULT;
#endif
#endif

typedef struct {
    kal_uint32 nonce_length;
    kal_uint8 nonce[256];
} sml_uulk_nonce_struct;
typedef sml_uulk_nonce_struct nvram_ef_sml_nonce_struct;

typedef struct {
    kal_uint8 unlock_code;
} sml_uulk_unlock_code_struct;
typedef sml_uulk_unlock_code_struct nvram_ef_sml_unlock_code_struct;

typedef struct {
    kal_uint32 signature_length;
    kal_uint8 signature[256];
} sml_uulk_signature_struct;
typedef sml_uulk_signature_struct nvram_ef_sml_signature_struct;

#ifdef __VZW_RSU_SUPPORT__
/* The maximum size of Response Message according VZW RSU SPEC is
   major version        :1 byte
   minor version        :1 byte
   protection alg       :1 byte
   network lock op      :1 byte
   imei                 :15 bytes
   timestamp            :8 bytes
   length               :2 bytes (size of following fields, including Signature)
   category lock data   :? bytes
   signature            :256 bytes

   possible maximum length is (1+1+1+1+15+8+2+65535)
*/
#define MAX_VZW_RSU_RSP_SIZE 1024

typedef enum {
    SML_VZW_RSU_UNLOCK_TIMER_SUCCESS    = 0,
    SML_VZW_RSU_UNLOCK_TIMER_FAIL       = 1,
    SML_VZW_RSU_UNLOCK_TIMER_EXPIRED    = 3, //defined by VZW RSU SPEC
} sml_vzw_rsu_unlock_timer_resp_enum;

typedef enum {
    SML_ES_ID_VZW_RSU,
    SML_ES_ID_TMO_PERIODIC_CHECK, //shall be equal to SML_TMO_TIMER_INDEX_PERIODIC_CHECK
    SML_ES_ID_MAX_NUM	
} sml_es_id_enum;

typedef enum {
    SMU_VZW_RSU_STOP_DELAY_TIMER,
    SMU_VZW_RSU_START_DELAY_TIMER	
} smu_vzw_rsu_delay_timer_op_enum;

typedef enum {
    SML_VZW_DISALLOW_TEMP_UNLOCK_CAUSE_NONE,
    SML_VZW_DISALLOW_TEMP_UNLOCK_HAS_EXPIRED,
    SML_VZW_DISALLOW_TEMP_UNLOCK_HAS_STARTED,
} sml_vzw_rsu_disallow_temp_unlock_cause_enum;

#endif /* __VZW_RSU_SUPPORT__ */

#endif
