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
 * custom_nvram_extra.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *    This file defines the methods to manuplate the file object defined in NVRAM data items. 
 *   
 *
 * Author:
 * -------
 * -------
 ****************************************************************************/
#ifndef CUSTOM_NVRAM_EXTRA_H
#define CUSTOM_NVRAM_EXTRA_H

//#include "kal_non_specific_general_types.h"
#include "kal_general_types.h"
#include "ps_public_enum.h"
#include "sim_ps_enum.h"

#if defined(__SUBSIDY_LOCK__) || defined(__SMB_SIMME_LOCK__) || defined (__CARRIER_RESTRICTION__)
#include "l4_nvram_editor.h"
#endif

#ifndef L4_NOT_PRESENT
#define SML_TRACE    kal_brief_trace
#else
#define SML_TRACE(...)
#endif

#if !defined(__MAUI_BASIC__)

#ifndef ATEST_ENABLE
#include "mcd_l3_inc_struct.h"
#endif
#include "nvram_data_items.h"

/***************************************************************************** 
* Define
*****************************************************************************/
/***************************************************************************** 
* Typedef 
*****************************************************************************/
/* 
 *   BEGIN:PH add for smu_security_info_struct (NVRAM_EF_MS_SECURITY_LID)
 * typedef struct
 * {
 *     kal_uint8                reg_ps_key[NVRAM_EDITOR_NUM_OF_BYTE_KEY];
 *     kal_uint8                security_indication;
 *     kal_uint8                auto_lock_item;
 *     kal_uint8                np_code[NVRAM_EDITOR_NUM_OF_BYTE_NP * NVRAM_EDITOR_NUM_NP];
 *     kal_uint8                np_key[NVRAM_EDITOR_NUM_OF_BYTE_KEY];
 *     kal_uint8                nsp_code[NVRAM_EDITOR_NUM_OF_BYTE_NSP * NVRAM_EDITOR_NUM_NSP];
 *     kal_uint8                nsp_key[NVRAM_EDITOR_NUM_OF_BYTE_KEY];
 *     kal_uint8                np_of_sp[NVRAM_EDITOR_NUM_OF_BYTE_NP];
 *     kal_uint8                np_of_cp[NVRAM_EDITOR_NUM_OF_BYTE_NP];
 *     kal_uint8                gid1[NVRAM_EDITOR_NUM_GID];
 *     kal_uint8                gid2[NVRAM_EDITOR_NUM_GID];
 *     kal_uint8                sp_key[NVRAM_EDITOR_NUM_OF_BYTE_KEY];
 *     kal_uint8                cp_key[NVRAM_EDITOR_NUM_OF_BYTE_KEY];
 *     kal_uint8                imsi_code[NVRAM_EDITOR_NUM_OF_BYTE_IMSI];
 *     kal_uint8                imsi_key[NVRAM_EDITOR_NUM_OF_BYTE_KEY];
 *     kal_uint8                phone_key[NVRAM_EDITOR_NUM_OF_BYTE_KEY];
 *     kal_uint8                last_imsi[NVRAM_EDITOR_NUM_OF_BYTE_IMSI];
 *     kal_uint8                pin1[NVRAM_EDITOR_NUM_PIN1];
 *     kal_uint8                pin1_valid;
 *     kal_uint8                phone_lock_verified;
 *  }smu_security_info_struct;
 *
 */
typedef enum
{
    SMU_REG_PS_KEY_A,
    SMU_SECURITY_INDICATION_U8,
    SMU_AUTO_LOCK_ITEM_U8,
    SMU_NP_CODE_A,
    SMU_NP_KEY_A,
    SMU_NSP_CODE_A,
    SMU_NSP_KEY_A,
    SMU_NP_OF_SP_A,
    SMU_NP_OF_CP_A,
    SMU_GID1_A,
    SMU_GID2_A,
    SMU_SP_KEY_A,
    SMU_CP_KEY_A,
    SMU_IMSI_CODE_A,
    SMU_IMSI_KEY_A,
    SMU_PHONE_KEY_A,
    SMU_LAST_IMSI_A,
    SMU_PIN1_A,
    SMU_PIN1_VALID_U8,
    SMU_PHONE_LOCK_VERIFIED_U8,
    SMU_ICCID_A
} smu_item_enum;

#if defined(__SMB_SIMME_LOCK__)
typedef enum
{
    SML_GBLOB_MAJOR_VER_U8,
    SML_GBLOB_MINOR_VER_U8,
    SML_GBLOB_DEVICE_LOCK_STATE_U8,
    SML_GBLOB_IMEI_1_A,
    SML_GBLOB_IMEI_2_A,
    SML_GBLOB_IMEI_3_A,
    SML_GBLOB_IMEI_4_A,
    SML_GBLOB_SML_LOCK_RULE_U8,
    SML_GBLOB_SML_LOCK_SUB_RULE_A,
    SML_GBLOB_TLV_DATA_A,
    SML_GBLOB_DEV_PROTECT_ALGO_U8,
    SML_GBLOB_DEV_MAX_RETRY_CNT_A,
    SML_GBLOB_DEV_REMAIN_RETRY_CNT_A,
    SML_GBLOB_DEVICE_LOCK_INT_CNT_A,
    SML_GBLOB_DEVICE_LOCK_SALT_A,
    SML_GBLOB_DEVICE_LOCK_HCK_A,
    SML_GBLOB_SIG_PROTECT_ALGO_U8,
    SML_GBLOB_SIGNATURE_A,
} smu_gblob_item_enum;
#endif /* __SMB_SIMME_LOCK__ */

typedef struct
{
    /* Data object ptr */
    void *smu_security_info_ptr;
    /* Load a new data object */
      kal_bool(*load) (void *, kal_uint8);             /* pobjFromlid */
    /* Update a the data object */
      kal_bool(*update) (void *, kal_uint8);           /* pobjTolid */
    /* Release the data object */
      kal_bool(*destoy) (kal_uint8);
    /* Query the value of the item in kal_uint8 */
      kal_uint8(*query_u8) (smu_item_enum, kal_uint8); /* eItem */
    /* Query the value of the item in kal_uint8[] */
    void (*query_a) (smu_item_enum,         /* eItem */
                     kal_uint8 *,           /* pstrTo */
                     kal_uint8,
                     kal_uint8);            /* chlen */
    /* Assign the value of the item in kal_uint8 */
    void (*assign_u8) (smu_item_enum,       /* eItem */
                       kal_uint8, kal_uint8);          /* Value */
    /* Assign the value of the item in string with length */
    void (*assign_a) (smu_item_enum,        /* eItem */
                      kal_uint8 *,          /* pValue */
                      kal_uint8,
                      kal_uint8);           /* len */
    /* Compare the string with the data item */
      kal_bool(*match) (smu_item_enum,      /* eItem */
                        kal_uint8 *,        /* pstr */
                        kal_uint8,
                        kal_uint8);         /* len */
} nvram_ef_ms_security_struct;

#if defined(__SMB_SIMME_LOCK__)
typedef struct
{
    /* Data object ptr */
    void *gblob_data_ptr;
    /* Load a new data object */
    kal_bool(*load) (void *);
    /* Update a the data object */
    kal_bool(*update) (void *);
    /* Query the value of the item in kal_uint8 */
    kal_uint8(*query_u8) (smu_gblob_item_enum); /* eItem */
    /* Query the value of the item in kal_uint8[] */
    void (*query_a) (smu_gblob_item_enum,         /* eItem */
                     kal_uint8 *,           /* pstrTo */
                     kal_uint8);            /* chlen */
    /* Assign the value of the item in kal_uint8 */
    void (*assign_u8) (smu_gblob_item_enum,       /* eItem */
                       kal_uint8);          /* Value */
    /* Assign the value of the item in string with length */
    void (*assign_a) (smu_gblob_item_enum,         /* eItem */
                      kal_uint8 *,          /* pValue */
                      kal_uint8);           /* len */
    /* Compare the string with the data item */
    kal_bool(*match) (smu_gblob_item_enum,      /* eItem */
                      kal_uint8 *,        /* pstr */
                      kal_uint8);         /* len */
} nvram_ef_gblob_data_struct;
#endif /* __SMB_SIMME_LOCK__ */

/******************************************************************************
 * New SML Architecture 
 *****************************************************************************/
/******************************************************************************
 *    typedef struct {
 *        kal_uint32  magic_head;
 *        sml_category_meta_struct    cat[SML_CAT_SIZE];
 *        sml_control_key_struct      key[SML_CAT_SIZE];
 *        kal_uint8   code_cat_n[SML_CFG_CAT_N_SIZE];
 *        kal_uint8   code_cat_ns[SML_CFG_CAT_NS_SIZE];
 *        kal_uint8   code_cat_sp[SML_CFG_CAT_SP_SIZE];
 *        kal_uint8   code_cat_c[SML_CFG_CAT_C_SIZE];
 *        kal_uint8   code_cat_sim[SML_CFG_CAT_SIM_SIZE];
 *        kal_uint8   code_cat_ns_sp[SML_CFG_CAT_NS_SP_SIZE];
 *        kal_uint8   code_cat_sim_c[SML_CFG_CAT_SIM_C_SIZE];
 *        kal_uint8   range_cat_ns[SML_CAT_NS_RANGE_SIZE]
 *        kal_uint32 magic_tail;         
 *    } sml_context_struct;
 *****************************************************************************/ 


typedef struct {
    void    * pObj;
    void    (* give)(void * /* pLidToObj */, kal_uint8);
    void    (* take)(void * /* pObjToLid */, kal_uint8);
    void    (* destory)(kal_uint8);
    void    * (* getItem)(sml_cat_enum,sml_ctx_enum,kal_uint16 * /* length */, kal_uint8);
    void    (* putItem)(sml_cat_enum,sml_ctx_enum,void * /* pItem */, kal_uint16 * /* plen */, kal_uint8);
} nvram_ef_sml_obj_struct;

#if defined(__SUBSIDY_LOCK__) || defined(__SMB_SIMME_LOCK__)
typedef struct {
    void    * pObj;
    void    (* give)(void * /* pLidToObj */, kal_uint8);
    void    (* take)(void * /* pObjToLid */, kal_uint8);
    void    (* destory)(kal_uint8);
    void    * (* getItem)(sml_sl_cat_enum,sml_ctx_enum,kal_uint16 * /* length */, kal_uint8);
    void    (* putItem)(sml_sl_cat_enum,sml_ctx_enum,void * /* pItem */, kal_uint16 * /* plen */, kal_uint8);
} nvram_ef_sml_sl_obj_struct;
#endif /* __SUBSIDY_LOCK__ || __SMB_SIMME_LOCK__ */

#ifdef __CARRIER_RESTRICTION__
typedef struct {
    void    * pObj;
    void    (* give)(void * /* pLidToObj */, kal_uint8);
    void    (* take)(void * /* pObjToLid */, kal_uint8);
    void    (* destory)(kal_uint8);
    void    * (* getItem)(smu_crrst_cat_enum,sml_ctx_enum,kal_uint16 * /* length */, kal_uint8);
    void    (* putItem)(smu_crrst_cat_enum,sml_ctx_enum,void * /* pItem */, kal_uint16 * /* plen */, kal_uint8);
    void    * (*getList)(sml_ctx_enum, kal_uint16 *, kal_uint8);
} nvram_ef_smu_crrst_obj_struct;
#endif /* __CARRIER_RESTRICTION__ */

 
/***************************************************************************** 
* Extern Global Variable                                                                    
*****************************************************************************/

extern nvram_ef_ms_security_struct *pSmuSecurityInfog;
#if defined(__SMB_SIMME_LOCK__)
extern nvram_ef_gblob_data_struct  *pGblobData;
#endif /* __SMB_SIMME_LOCK__ */
extern nvram_ef_sml_obj_struct *pSMLg;

#if defined(__SUBSIDY_LOCK__) || defined(__SMB_SIMME_LOCK__)
extern nvram_ef_sml_sl_obj_struct *pSMLSLg;
#endif /* __SUBSIDY_LOCK__ || __SMB_SIMME_LOCK__ */

#ifdef __CARRIER_RESTRICTION__
extern nvram_ef_smu_crrst_obj_struct * pCRRSTg;
#endif


/************************************************************************ 
 * Test SIM card handling
 ************************************************************************/
#define SML_TESTSIM_ALW_REJECT  0
#define SML_TESTSIM_ALW_ALLOW   1
#define SML_TESTSIM_INI_ALLOW   2
/* Customer defined field */
#define SML_TESTSIM_OP_MODE     SML_TESTSIM_ALW_ALLOW

extern kal_uint8 sml_Testsim_op_mode(void);

/************************************************************************ 
 * MASTER-SLAVE Behavior
 ************************************************************************/
/* Customer defined field */
#define SML_MASTER_KEY_ENABLE     KAL_FALSE

extern kal_bool sml_is_Masterkey_enable(void);
/************************************************************************
* Define whether use sim mnc length or nvram
* used by sml_Getcode
* 0:nvram,1:sim
************************************************************************/
#define SML_MNC_LENGTH_NEST    1

/***************************************************************************** 
* Extern Global Function                                                                    
*****************************************************************************/
#if defined(__SMB_SIMME_LOCK__)
extern void smu_init_gblob_data_obj();
extern kal_uint16 sml_gblob_Load(void *pLid);
#endif /* __SMB_SIMME_LOCK__ */
extern void smu_init_ms_security_obj(kal_uint8 source);
extern void sml_init_sml_obj(kal_uint8 source);
extern kal_uint16 sml_Load( void * pLid, kal_uint8 source );
extern kal_uint16 sml_Save( void * pLid, kal_uint8 source );
extern kal_bool sml_Unlock( sml_cat_enum cat,
                            kal_uint8 * key, 
                            kal_uint8 key_len, 
                            kal_uint8 source );
extern kal_bool sml_Lock( sml_cat_enum cat, 
                          kal_uint8 * key, 
                          kal_uint8 key_len, 
                          kal_uint8 source );
extern kal_bool sml_Add( sml_cat_enum cat, 
                         kal_uint8 * code, 
                         kal_uint8 len, 
                         kal_uint8 * key, 
                         kal_uint8 key_len, 
                         kal_uint8 * remain, 
                         kal_uint8 source );
extern kal_bool sml_Remove( sml_cat_enum cat, kal_uint8 source );
extern kal_bool sml_Reset( sml_cat_enum cat, 
                           kal_uint8 * key, 
                           kal_uint8 key_len, 
                           kal_uint8 source );
extern kal_bool sml_Disable( sml_cat_enum cat, kal_uint8 source );
extern void sml_Status( sml_cat_enum cat, 
                        sml_state_enum * state, 
                        kal_uint32 * retry_count, 
                        kal_uint8 * num_of_sets, 
                        kal_uint8 * space_of_sets, 
                        sml_key_state_enum * key_state, 
                        kal_uint8 * auto_lock_count, 
                        kal_uint8 source );
extern kal_bool sml_Autolock( sml_cat_enum cat, 
                              kal_uint8 * code, 
                              kal_uint8 len, 
                              kal_uint8 * remain, 
                              kal_uint8 source );
extern kal_uint8 sml_Catcode( sml_cat_enum cat, 
                              kal_uint8 * imsi, 
                              kal_uint8 * gid1, 
                              kal_uint8 * gid2, 
                              kal_uint8 mnc_len, 
                              kal_uint8 * code );
extern kal_bool sml_Check( sml_cat_enum cat, 
                           kal_uint8 * imsi, 
                           kal_uint8 * gid1,
                           kal_uint8 * gid2,
                           kal_uint16 num_cnl,
                           kal_uint8 * cnl,
                           kal_uint8 * dck,
                           kal_uint8 sim_mnc_len,
                           kal_uint32 * remain, 
                           kal_uint8 source);

extern void sml_init_max_retry_count_obj(kal_uint8 source);

extern kal_uint16 sml_max_retry_count_Load(void * pLid, kal_uint8 source);

extern kal_bool sml_check_and_update_retry_count(kal_uint8 source);

extern void sml_get_lock_codes(kal_uint8 * num_of_sets,
                        kal_uint8 * code_cat_n,
                        kal_uint8 * code_cat_ns,
                        kal_uint8 * code_cat_sp,
                        kal_uint8 * code_cat_c,
                        kal_uint8 * code_cat_sim,
                        kal_uint8 * code_cat_ns_sp,
                        kal_uint8 * code_cat_sim_c,
                        kal_uint8 source);

extern kal_bool sml_UpdateMaxRetryCount(sml_cat_enum cat,
                         kal_uint32 data,
                         kal_uint8  source);

extern kal_uint16 sml_mrc_Save(void *pLid, kal_uint8 source);

#ifdef __CARRIER_RESTRICTION__
extern void sml_init_crrst_obj(kal_uint8 source);
extern kal_uint16 sml_crrst_Load( void *pLid, kal_uint8 source );
extern kal_bool sml_crrst_Check(sml_ctx_enum list,
                           smu_crrst_cat_enum cat,
                           kal_uint8 * imsi, 
                           kal_uint8 * gid1,
                           kal_uint8 * gid2,
                           kal_uint8 * spn,
                           kal_uint8 sim_mnc_len,
                           kal_uint8 source);
extern kal_uint8 sml_crrst_GetCode( smu_crrst_cat_enum cat, 
                              kal_uint8 * imsi, 
                              kal_uint8 * gid1, 
                              kal_uint8 * gid2, 
                              kal_uint8 * spn,
                              kal_uint8 sim_mnc_len, 
                              kal_uint8 * pdata, 
                              kal_uint8 * code);
extern kal_uint8 sml_crrst_Catcode( smu_crrst_cat_enum cat, 
                              kal_uint8 * imsi, 
                              kal_uint8 * gid1, 
                              kal_uint8 * gid2, 
                              kal_uint8 * spn,
                              kal_uint8 mnc_len, 
                              kal_uint8 * code );
extern kal_bool sml_crrst_Unlock(kal_uint8 * key, 
                            kal_uint8 key_len, 
                            kal_uint8 source );
extern kal_bool sml_crrst_Lock(kal_uint8 *key, 
                            kal_uint8 key_len,
                            kal_uint8 source);
extern kal_bool sml_crrst_Add( smu_crrst_cat_enum cat, 
                               kal_uint8 list,
                               kal_uint8 *code, 
                               kal_uint8 len,
                               kal_uint8 source);
extern kal_bool sml_crrst_Remove( smu_crrst_cat_enum cat, 
                               kal_uint8 list,
                               kal_uint8 *code, 
                               kal_uint8 len,
                               kal_uint8 source);

extern kal_bool sml_crrst_Disable(kal_uint8 * key,
                     kal_uint8 key_len,
                     kal_uint8 source);

extern kal_bool sml_crrst_Enable(kal_uint8 * key,
                     kal_uint8 key_len,
                     kal_uint8 source);

extern kal_bool sml_crrst_Remove_All(kal_uint8 source);

extern kal_bool sml_crrst_Remove_WhiteList(kal_uint8 source);

extern kal_bool sml_crrst_Remove_BlackList(kal_uint8 source);

extern kal_uint16 sml_crrst_Save( void *pLid, kal_uint8 source );

extern kal_bool sml_crrst_Status(smu_crrst_state_enum *state,
                                kal_uint8 *multi_sim_policy,
                                kal_uint8 *allowed_carriers_prioritized,
                                smu_carrier_restriction_list_struct *white_list,
                                smu_carrier_restriction_list_struct *black_list,
                                kal_uint8 source);

extern kal_bool sml_crrst_Update_MSP_ACP(kal_uint8 *key,
                                                  kal_uint8 key_len,
                                                  kal_uint8 multi_sim_policy,
                                                  kal_uint8 allowed_carriers_prioritized,
                                                  kal_uint8 source);

extern kal_bool sml_UpdateCrrstCatKeyData(kal_uint8 algo_type,
                                            kal_uint32 max_retry_count,
                                            kal_uint8 *hck,
                                            kal_uint8 *salt,
                                            kal_uint8 *inter_cnt,
                                            kal_uint8 source);
#endif

#ifdef __VZW_RSU_LOCK_CODE_EXTEND_SUPPORT__
extern void sml_init_vzwlc_obj(kal_uint8 source);
#endif

#ifdef __TFN_SIMLOCK__
extern kal_uint8 custom_sml_tfn_get_tfn_efuse_bit();
extern void sml_check_tfn_simlock_data_consistency(kal_uint8 source);
#endif

// TMO SML
extern void sml_tmo_printkey(t_cust_chl_sym_key *key);
#ifndef ATEST_ENABLE
extern kal_bool sml_tmo_UpdateNwTimeAndCheckTempLock(kal_uint8 source, kal_uint8 nw_time_zone, nw_time_zone_time_struct *nw_time);
#ifdef __ATT_SIM_LOCK__
extern kal_bool sml_att_UpdateNwTimeAndCheckTempLock(kal_uint8 source, kal_uint8 nw_time_zone, nw_time_zone_time_struct *nw_time);
#endif
#endif
extern kal_uint32 sml_rsu_nwTimeToSeconds(kal_uint8 nw_time_zone, nw_time_zone_time_struct *nw_time);
extern kal_bool sml_tmo_CheckTempUnlock(kal_uint8 source);
extern kal_bool sml_tmo_FirstLoad( void *pLid, kal_uint8 source );
extern kal_uint16 sml_tmo_Load( void * pLid, kal_uint8 source );
extern kal_uint16 sml_tmo_Save( void * pLid, kal_uint8 source );
extern kal_bool sml_tmo_Check( sml_cat_enum cat, 
                           kal_uint8 * imsi, 
                           kal_uint8 * gid1,
                           kal_uint8 * gid2,
                           kal_uint8 sim_mnc_len,
                           kal_uint8 * remain, 
                           kal_uint8 source);
extern kal_uint8 sml_tmo_Catcode( sml_cat_enum cat, 
                              kal_uint8 * imsi, 
                              kal_uint8 * gid1, 
                              kal_uint8 * gid2, 
                              kal_uint8 mnc_len, 
                              kal_uint8 * code );
extern kal_uint8 sml_tmo_GetCode( sml_cat_enum cat, 
                              kal_uint8 * imsi, 
                              kal_uint8 * gid1, 
                              kal_uint8 * gid2, 
                              kal_uint8 sim_mnc_len, 
                              kal_uint8 * pdata, 
                              kal_uint8 * code);
extern void sml_tmo_GetVersion(kal_uint8 *version, kal_uint8 source);
extern kal_uint8 *sml_ReconstructBlob( sml_tmo_context_struct *pObj, kal_uint32 *pLen );
extern kal_uint8 *sml_tmo_get_modem_config_ReconstructBlob( sml_tmo_context_struct *pObj, kal_uint16 *pLen, kal_uint8 *pData );
extern kal_uint8 *sml_ConstructBlob( kal_uint8 *pObj, kal_uint16 slb_len);
extern kal_uint16 sml_tmo_getSize();
extern kal_uint16 sml_GetCount( kal_uint8 *pData );
extern void sml_Dump(kal_char *title, kal_uint8 *pData, kal_uint16 len);
extern void sml_GetLockState(kal_uint8 *lock_state, kal_uint8 source);
extern kal_uint32 sml_GetUnlockTimeLeft(kal_uint8 source);

#ifdef __ATT_SIM_LOCK__
// ATT SML
extern kal_bool sml_att_CheckTempUnlock(kal_uint8 source);
extern kal_bool sml_att_FirstLoad( void *pLid, kal_uint8 source );
extern kal_uint16 sml_att_Load( void * pLid, kal_uint8 source );
extern kal_uint16 sml_att_Save( void * pLid, kal_uint8 source );
extern kal_bool sml_att_Check( sml_cat_enum cat,
                           kal_uint8 * imsi,
                           kal_uint8 * gid1,
                           kal_uint8 * gid2,
                           kal_uint8 sim_mnc_len,
                           kal_uint8 * remain,
                           kal_uint8 source);
extern kal_uint8 sml_att_Catcode( sml_cat_enum cat,
                              kal_uint8 * imsi,
                              kal_uint8 * gid1,
                              kal_uint8 * gid2,
                              kal_uint8 mnc_len,
                              kal_uint8 * code );
extern kal_uint8 sml_att_GetCode( sml_cat_enum cat,
                              kal_uint8 * imsi,
                              kal_uint8 * gid1,
                              kal_uint8 * gid2,
                              kal_uint8 sim_mnc_len,
                              kal_uint8 * pdata,
                              kal_uint8 * code);
extern void sml_att_GetVersion(kal_uint8 *version, kal_uint8 source);
extern void sml_att_GetLockState(kal_uint8 *lock_state, kal_uint8 source);
extern kal_uint32 sml_att_GetUnlockTimeLeft(kal_uint8 source);
extern kal_uint8 *sml_att_ReconstructBlob( sml_att_context_struct *pObj, kal_uint32 *pLen );
extern kal_uint8 *sml_att_get_modem_config_ReconstructBlob( sml_att_context_struct *pObj, kal_uint16 *pLen, kal_uint8 *pData );
extern kal_uint8 *sml_att_ConstructBlob( kal_uint8 *pObj, kal_uint16 slb_len);
extern kal_uint16 sml_att_getSize();
#endif

extern kal_uint16 sml_Nvram_get_lid_size( kal_uint16 file_idx );
extern kal_bool sml_Process_autolock( kal_uint8 * imsi, 
                                      kal_uint8 * gid1, 
                                      kal_uint8 * gid2, 
                                      kal_uint8 num_mnc, 
                                      kal_uint8 * remain_count, 
                                      kal_uint8 source );

extern kal_uint8 sml_Is_autolock(kal_uint8 *imsi, kal_uint8 source );

extern kal_bool sml_Verify( sml_cat_enum cat, 
                             kal_uint8 * key, 
                             kal_uint8 len, 
                             kal_uint32 * retry_count, 
                             kal_uint8 source );
extern kal_bool sml_Verify_OTA( sml_cat_enum cat,
                                kal_uint8 * key, 
                                kal_uint8 len, 
                                kal_uint8 source );
extern kal_bool sml_CheckVisa(const kal_uint8 * imsi, 
                              kal_uint8 mnc_len);

/*[MAUI_01634719] mtk01612: common API to query state*/
extern kal_uint8 sml_query_state( sml_cat_enum cat, 
                 kal_uint8 source);
/*Function to get code whether mnc length is 2 or 3 */
extern kal_uint8 sml_GetCode( sml_cat_enum cat, 
                              kal_uint8 * imsi, 
                              kal_uint8 * gid1, 
                              kal_uint8 * gid2, 
                              kal_uint8 sim_mnc_len, 
                              kal_uint8 * pdata, 
                              kal_uint8 * code);

extern void sml_custom_context_selection(kal_uint8 sim_interface);

#ifdef __CHANGE_SML_KEY__
extern kal_bool sml_ChangePW(sml_cat_enum cat,
                             kal_uint32 *lock_count,
	                    kal_uint8 *key1,
	                    kal_uint8 *key2,
	                    kal_uint8 len,
	                    kal_uint8 source);
#endif

extern kal_uint8 custom_get_sim_op_list_num(sim_operator_type_enum op, sim_operator_check_method_enum type);
extern kal_uint8 custom_get_sim_op_method_table_num(sim_operator_check_method_enum type);

extern kal_bool smu_is_write_protect2(nvram_lid_enum file_idx);
extern kal_bool smu_CheckHplmnIsLteOnly(const kal_uint8 * imsi, kal_uint8 mnc_len);

#if defined(__SUBSIDY_LOCK__) || defined(__SMB_SIMME_LOCK__)
extern kal_uint16 sml_sl_getBlobSize();
extern kal_uint8 *sml_sl_ConstructBlob(kal_uint8 *pObj, kal_uint16 slb_len, kal_uint16 *error_cause, kal_uint8 source);
extern kal_uint8 *sml_sl_ConstructSmlBlob(sml_sl_blob_context_struct *pObj, kal_uint8 source);
extern kal_uint16 sml_sl_Load(void * pLid,
                            void * psmlLid,
                            kal_uint8 source,
                            kal_bool pass_sign_check,
                            kal_uint8 * public_key_modulus,
                            kal_uint8 * public_key_exponent);
extern kal_uint16 sml_sl_Save(void * pLid, kal_uint8 source);
extern kal_bool sml_sl_Check(sml_sl_cat_enum cat,
                           kal_uint8 * imsi, 
                           kal_uint8 * gid1,
                           kal_uint8 sim_mnc_len,
                           kal_uint8 source);
extern kal_uint8 sml_sl_GetCode(sml_sl_cat_enum cat,
                              kal_uint8 * imsi, 
                              kal_uint8 * gid1, 
                              kal_uint8 sim_mnc_len, 
                              kal_uint8 * pdata, 
                              kal_uint8 * code);
extern kal_bool sml_sl_Verify(sml_sl_cat_enum cat, 
                             kal_uint8 * key, 
                             kal_uint8 len, 
                             kal_uint8 source);
#endif

#if defined(__SMB_SIMME_LOCK__)
extern kal_uint16 sml_sl_getBlobSize();
extern kal_bool custom_sml_is_gblob_enabled(void);
extern kal_bool custom_sml_is_gblob_imei_verification_enabled(void);
extern kal_bool custom_sml_is_eslblobf_allow(void);
extern kal_bool custom_sml_is_nonctrlslot_allow_unlock(void);
extern kal_bool custom_sml_is_secured_simme_cntxt_enabled(void);
extern kal_bool custom_sml_is_nonctrlslot_always_lock_check(void);
extern kal_bool custom_sml_is_nonctrlslot_allow_sml_check(void);
#endif /* __SIB_SIMME_LOCK__ */

#ifdef __VSIM__
extern kal_bool custom_vsim_read_nvram_file(kal_uint8 profile_id, uicc_card_type_enum vsim_type, nvram_vsim_ef_file_struct *vsim_ef_buf);

extern kal_bool custom_vsim_write_nvram_file(kal_uint8 profile_id, kal_uint16 file_id, uicc_card_type_enum vsim_type, nvram_vsim_ef_file_struct *vsim_ef_buf);

extern kal_bool custom_vsim_file_instance(kal_uint8 profile_id, kal_uint8 vsim_type, kal_uint8 *file_id, kal_uint8** file_ptr);

extern kal_int8 custom_vsim_get_gsm_auth(kal_uint8 sim_auth_algo, kal_uint8 *ki, kal_uint8 *rand, kal_uint8 *sres, kal_uint8 *kc);

extern kal_int8 custom_vsim_get_usim_auth(kal_uint8 usim_auth_algo, kal_uint8 *opc, kal_uint8 *ki, kal_uint8 *rand, kal_uint8 *autn, kal_uint8 *ik, kal_uint8 *ck, kal_uint8 *res, kal_uint32 *res_len, kal_uint8 *auts);


#define EF_META_SIZE 32
#define EF_DATA_SIZE 32
#ifndef __MDVSIM__
#define EF_U_META_SIZE 64
#else
#define EF_U_META_SIZE 96
#endif
#define EF_U_DATA_SIZE 32

extern kal_uint8 DF_GSM_data[EF_META_SIZE+EF_DATA_SIZE];
extern kal_uint8 EF_ICCID_data[EF_META_SIZE+EF_DATA_SIZE];
extern kal_uint8 EF_LP_data[EF_META_SIZE+EF_DATA_SIZE];
extern kal_uint8 EF_SST_data[EF_META_SIZE+EF_DATA_SIZE];
extern kal_uint8 EF_PHASE_data[EF_META_SIZE+EF_DATA_SIZE];
extern kal_uint8 EF_IMSI_data[EF_META_SIZE+EF_DATA_SIZE];
extern kal_uint8 EF_AD_data[EF_META_SIZE+EF_DATA_SIZE];
extern kal_uint8 EF_ACC_data[EF_META_SIZE+EF_DATA_SIZE];
extern kal_uint8 EF_KC_data[EF_META_SIZE+EF_DATA_SIZE];
extern kal_uint8 EF_LOCI_data[EF_META_SIZE+EF_DATA_SIZE];
extern kal_uint8 EF_HPPLMN_data[EF_META_SIZE+EF_DATA_SIZE];
extern kal_uint8 EF_BCCH_data[EF_META_SIZE+EF_DATA_SIZE];
extern kal_uint8 EF_FPLMN_data[EF_META_SIZE+EF_DATA_SIZE];

/* USIM file*/
extern kal_uint8 EF_AUTH_data[258];

#ifndef __MDVSIM__
extern const kal_uint8 ADF_USIM_data[EF_U_META_SIZE + EF_U_DATA_SIZE];
extern const kal_uint8 EF_U_ELP_data[EF_U_META_SIZE + EF_U_DATA_SIZE];
extern const kal_uint8 EF_U_ICCID_data[EF_U_META_SIZE + EF_U_DATA_SIZE];
extern const kal_uint8 EF_U_PSLOCI_data[EF_U_META_SIZE + EF_U_DATA_SIZE];
extern const kal_uint8 EF_U_ACC_data[EF_U_META_SIZE + EF_U_DATA_SIZE];
extern const kal_uint8 EF_U_LOCI_data[EF_U_META_SIZE + EF_U_DATA_SIZE];
extern const kal_uint8 EF_U_AD_data[EF_U_META_SIZE + EF_U_DATA_SIZE];
extern const kal_uint8 EF_U_IMSI_data[EF_U_META_SIZE + EF_U_DATA_SIZE];
extern const kal_uint8 EF_U_HPPLMN_data[EF_U_META_SIZE + EF_U_DATA_SIZE];
extern const kal_uint8 EF_U_UST_data[EF_U_META_SIZE + EF_U_DATA_SIZE];
extern const kal_uint8 EF_U_EST_data[EF_U_META_SIZE + EF_U_DATA_SIZE];
extern const kal_uint8 EF_U_PLMNWACT_data[EF_U_META_SIZE + EF_U_DATA_SIZE];
extern const kal_uint8 EF_U_OPLMNWACT_data[EF_U_META_SIZE + EF_U_DATA_SIZE];
extern const kal_uint8 EF_U_HPLMNWACT_data[EF_U_META_SIZE + EF_U_DATA_SIZE];
#else
extern kal_uint8 ADF_USIM_data[VSIM_PROFILE_ENTRY][EF_U_META_SIZE+EF_U_DATA_SIZE];
extern kal_uint8 EF_U_DIR_data[VSIM_PROFILE_ENTRY][EF_U_META_SIZE+EF_U_DATA_SIZE];
extern kal_uint8 EF_U_ELP_data[VSIM_PROFILE_ENTRY][EF_U_META_SIZE+EF_U_DATA_SIZE];
extern kal_uint8 EF_U_ICCID_data[VSIM_PROFILE_ENTRY][EF_U_META_SIZE+EF_U_DATA_SIZE];
extern kal_uint8 EF_U_PSLOCI_data[VSIM_PROFILE_ENTRY][EF_U_META_SIZE+EF_U_DATA_SIZE];
extern kal_uint8 EF_U_LOCI_data[VSIM_PROFILE_ENTRY][EF_U_META_SIZE+EF_U_DATA_SIZE];
extern kal_uint8 EF_U_IMSI_data[VSIM_PROFILE_ENTRY][EF_U_META_SIZE+EF_U_DATA_SIZE];
extern kal_uint8 EF_U_HPPLMN_data[VSIM_PROFILE_ENTRY][EF_U_META_SIZE+EF_U_DATA_SIZE];
extern kal_uint8 EF_U_UST_data[VSIM_PROFILE_ENTRY][EF_U_META_SIZE+EF_U_DATA_SIZE];
extern kal_uint8 EF_U_EST_data[VSIM_PROFILE_ENTRY][EF_U_META_SIZE+EF_U_DATA_SIZE];
extern kal_uint8 EF_U_PLMNWACT_data[VSIM_PROFILE_ENTRY][EF_U_META_SIZE+EF_U_DATA_SIZE];
extern kal_uint8 EF_U_OPLMNWACT_data[VSIM_PROFILE_ENTRY][EF_U_META_SIZE+EF_U_DATA_SIZE];
extern kal_uint8 EF_U_HPLMNWACT_data[VSIM_PROFILE_ENTRY][EF_U_META_SIZE+EF_U_DATA_SIZE];

#endif/* __MDVSIM__ */
#endif /* __VSIM__ */

extern kal_bool custom_sim_disable_sim_slot(void);

extern kal_bool sml_UpdateAutoLock(sml_cat_enum cat,
								   kal_uint8 *key,
								   kal_uint8 key_len,
								   kal_uint8 count,
								   kal_uint8 source);

extern kal_bool sml_UpdateCatKeyAlgoData(sml_cat_enum cat,
                         kal_uint8 algo_type,
                         kal_uint8 *salt,
						 kal_uint8 *inter_cnt,
						 kal_uint8 source);
#ifdef __ENABLE_BMVNO_SIMME_LOCK_CONFIG__
extern kal_bool sml_is_bmvno_plmn_gid(kal_uint8* mccmnc, kal_uint8 is_valid_gid1, kal_uint8* gid1);
#endif
#ifdef __RJIO_CHECK_ICCID_WHEN_MCC_MNC_MATCHED_NVM__
extern kal_bool sml_is_rjio_mccmnc_iccid(kal_uint8 *sim_imsi, kal_uint8 *sim_iccid, kal_uint8 sim_mnc_length);
#endif
#endif /* !defined(__MAUI_BASIC__) */
#endif /* CUSTOM_NVRAM_EXTRA_H */

