/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
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
 *
 * Filename:
 * ---------
 * custom_eas_config.c
 *
 * Project:
 * --------
 *   MONZA
 *
 * Description:
 * ------------
 *   This file is used to define the EAS configuration.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef _CUSTOM_EAS_CONFIG_H
#define _CUSTOM_EAS_CONFIG_H

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "global_type.h"
#include "el1d_rf_public.h"
#include "mrs_eas_capability.h"

#define CUSTOM_WCABC_BAND_MAX   2

#define CUSTOM_COEXIST_OPERATOR_ROW 1
#define CUSTOM_OPERATOR_NUM         3
#define CUSTOM_PLMN_LIST_NUM        5

typedef enum {
    CUSTOM_EAS_OP_CMCC = 0,
    CUSTOM_EAS_OP_CU   = 1,
    CUSTOM_EAS_OP_CT   = 2,
 
    CUSTOM_EAS_OP_END = 255
} eas_custom_operator_enum;

typedef struct
{
    LTE_Band            band;
    LTE_CA_BW_CLAS_E    ca_bw_clas_ul;
    LTE_CA_BW_CLAS_E    ca_bw_clas_dl;
} LTE_CA_BAND_PARAM_E_config;  //because include el1d_rf_custom_data.h will lead to build fail of MT6763_SP(BASIC), so create this to mimic LTE_CA_BAND_PARAM_E

typedef struct
{
    eas_custom_operator_enum    op;
    kal_uint8                   band_num;
    LTE_CA_BAND_PARAM_E_config  band_param[CUSTOM_WCABC_BAND_MAX];
} eas_custom_white_list_cabc_config;

extern const eas_custom_white_list_cabc_config CUSTOM_EUTRA_WHITE_LIST_CABC_CFG[];
extern const kal_uint32 CUSTOM_EUTRA_WHITE_LIST_CABC_CFG_NUM;

typedef struct
{
    eas_custom_operator_enum    op;
    kal_char                    *plmnId;
} eas_custom_operator_plmn_config;

extern const eas_custom_operator_plmn_config CUSTOM_EUTRA_OPERATOR_PLMN_CFG[];
extern const kal_uint32 CUSTOM_EUTRA_OPERATOR_PLMN_CFG_NUM;

typedef struct
{
    /* PLMN identity */
    kal_char  *plmnId;
    kal_uint32  feature_group_ind_fdd;
    kal_uint32  feature_group_ind_tdd;
    kal_uint32  feature_group_ind_rel9_add_r9_fdd;
    kal_uint32  feature_group_ind_rel9_add_r9_tdd;
    kal_uint32  feature_group_ind_r10_fdd;
    kal_uint32  feature_group_ind_r10_tdd;
} eas_custom_fgi_blacklist_plmn_config;

extern const eas_custom_fgi_blacklist_plmn_config CUSTOM_FGI_BLACKLIST_PLMN_CFG[];
extern const kal_uint32 CUSTOM_FGI_BLACKLIST_PLMN_CFG_NUM;

extern const eas_custom_fgi_blacklist_plmn_config CUSTOM_FGI_BLACKLIST_HPLMN_CFG[];
extern const kal_uint32 CUSTOM_FGI_BLACKLIST_HPLMN_CFG_NUM;


typedef struct
{
    /* PLMN identity */
    kal_char  *plmnId;
} custom_hsr_plmn_list;

extern const custom_hsr_plmn_list CUSTOM_HSR_PLMN_LIST[];
extern const kal_uint32 CUSTOM_HSR_PLMN_LIST_NUM;


typedef struct
{
    /* PLMN identity */
    kal_char  *plmnId;
} custom_ul64qam_plmn_list;

extern const custom_ul64qam_plmn_list CUSTOM_UL64QAM_PLMN_LIST[];
extern const kal_uint32 CUSTOM_UL64QAM_PLMN_LIST_NUM;

typedef struct
{
    /* PLMN identity */
    kal_char  *plmnId;
} custom_dl256qam_plmn_list;

extern const custom_dl256qam_plmn_list CUSTOM_DL256QAM_PLMN_LIST[];
extern const kal_uint32 CUSTOM_DL256QAM_PLMN_LIST_NUM;


typedef struct
{
    /* PLMN identity */
    kal_char  *plmnId;
    /* Max size of eutra capability (bytes)*/
    kal_uint32 max_eutra_capability_size;
} eas_custom_eutra_cap_size_config;

extern const eas_custom_eutra_cap_size_config CUSTOM_EUTRA_CAP_SIZE_CFG[];
extern const kal_uint32 CUSTOM_EUTRA_CAP_SIZE_CFG_NUM;


/*partial band information setting*/
typedef struct
{
    kal_char  *plmnId;
    eas_partial_band_list_struct partial_band_info;
}eas_custom_partial_band_info_config;
extern const eas_custom_partial_band_info_config CUSTOM_PARTIAL_BAND_INFO_TBL[];
extern const kal_uint32 CUSTOM_PARTIAL_BAND_INFO_NUM;

/*ROHC profile  setting*/
#define NUM_OF_CUSTOM_ROHC_PROFILE  9
#define CUSTOM_ROHC_PLMN_CFG_END "FFFFFF"
typedef struct
{
    kal_char            *plmnId;
    kal_bool            rohc_profiles[NUM_OF_CUSTOM_ROHC_PROFILE];
}custom_eas_lte_rohc_profile_config;
extern const custom_eas_lte_rohc_profile_config CUSTOM_EUTRA_ROHC_PROFILE_CFG[];
extern const kal_uint32 CUSTOM_EUTRA_ROHC_PROFILE_NUM;


//Shall align to MAX_NUM_LTE_BAND_BITMASK (32)
#define MAX_NUM_CUSTOM_LTE_BAND_BITMASK 32
#define EAS_RCM_CA_BAND_TBL_END "FFFFFF"

typedef struct
{
    /* PLMN Identity */
    kal_char  *plmnId;
    /* Bitmask indicates which LTE band is required */
    kal_uint8  eightWidthLteBandBitmask[MAX_NUM_CUSTOM_LTE_BAND_BITMASK];
} eas_global_support_band_struct;

#ifdef __LTE_CA_TBL_V2_SUPPORT__
extern const eas_global_support_band_struct eas_ca_sel_tbl[];
extern const kal_uint32 eas_ca_sel_num;
extern const eas_global_support_band_struct eas_capsize_reduce_tbl[];
extern const kal_uint32 eas_capsize_reduce_num;
#endif
extern const eas_global_support_band_struct eas_global_support_band_tbl[];
extern const kal_uint32 eas_global_support_band_num;


typedef struct
{
    /* PLMN Identity */
    kal_char  *plmnId;
} eas_special_plmn_exclude_struct;

extern const eas_special_plmn_exclude_struct eas_special_plmn_exclude_tbl[];
extern const kal_uint32 eas_special_plmn_exclude_num;


typedef struct
{
    kal_char  *plmnId;
    kal_char  *caCombEnableList;
    kal_char  *caCombDisableList;
} eas_global_ca_comb_struct;

extern const eas_global_ca_comb_struct eas_global_ca_comb_tbl[];
extern const kal_uint32 eas_global_ca_comb_num;

typedef struct
{
    kal_char            *plmnId;
    kal_bool            csfb_2g_afr;
    kal_bool            csfb_3g_afr;
}custom_hplmn_afr_mapping_record;
extern const custom_hplmn_afr_mapping_record CUSTOM_HPLMN_AFR_MAPPING_TABLE[];
extern const kal_uint32 CUSTOM_HPLMN_AFR_MAPPING_RECORD_NUM;

/*************************************************************************
* Function
*************************************************************************/
extern void eas_custom_get_bgsrch_intv_para(kal_uint8 *a_intv_init_ptr,
                                     kal_uint8 *a_intv_max_ptr,
                                     kal_uint8 *a_intv_delta_ptr );
extern kal_int16 eas_custom_get_ct_min_rsrp();
extern kal_uint8 eas_custom_get_dcsa_trigge_th(void);
extern kal_uint8 eas_custom_get_dcsa_expire(void);
extern kal_uint8 eas_custom_get_rohc_profile_num(void);

#if defined (__AS_SPECIFIC_CHANNEL_SRCH__)|| defined(UNIT_TEST)
#define LTE_SPECIFIC_CHANNELS_INVALID_EARFCN 0xFFFFFFFF
extern EARFCN eas_custom_get_specific_channels_invalid_earfcn();
extern void eas_custom_set_specific_channel_srch( kal_bool set_value );
extern kal_bool eas_custom_is_specific_channel_srch(void);
extern EARFCN eas_custom_get_specific_earfcn(kal_uint16 band, kal_uint8 earfcn_index);
extern void eas_custom_set_specific_earfcn(kal_uint16 band, kal_uint8 earfcn_index, EARFCN earfcn);
extern kal_uint16 eas_custom_get_lte_specific_band_number(void);
extern kal_uint8 eas_custom_get_lte_specific_channel_number(void);
#endif
extern kal_uint8 eas_custom_get_coexist_operator_row(void);
extern kal_uint8 eas_custom_get_operator_num(void);
extern kal_uint8 eas_custom_get_plmn_list_num(void);
extern eas_custom_operator_enum eas_custom_get_coexist_operator(kal_uint8 row, kal_uint8 coexist_operator_idx);
extern kal_char* eas_custom_get_plmn_list_of_target_operator(kal_uint8 target_operator, kal_uint8 plmn_list_idx);

const kal_uint32 * eas_custom_get_ignore_ims_emerg_sup_plmns();

void eas_custom_get_tmo_prefer_band_info(kal_bool* enable, const kal_uint32** plmn_id_list, const kal_uint16** band_list, kal_uint8* band_num_pl);                                                
void eas_custom_get_sprint_prefer_band_info(kal_bool* enable, const kal_uint32** plmn_id_list, const kal_uint16** band_list, kal_uint8* band_num_pl);

#endif /* _CUSTOM_EAS_CONFIG_H */

