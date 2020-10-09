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
 * Filename:
 * ---------
 * sbp_public_utility.h
 *
 * Description:
 * ------------
 *   This file is intends for put the header of SBP public API
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
*****************************************************************************/

#ifndef _SBP_PUBLIC_UTILITY_H
#define _SBP_PUBLIC_UTILITY_H

#ifdef __cplusplus
extern "C" {
#endif

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "sim_exported_enum.h"

#define SBP_ID_INVALID 0xffffffff
#define SBP_SIM_SLOT_ID_INVALID 0xff


/*****************************************************************************
* DESCRIPTION
*   This enum is defined for Single Binary Platform (SBP) features
*   NVRAM saves one binary value for each feature
*****************************************************************************/
typedef enum
{
//Please add SBP features in sbp_feature.def

#define SBP_FEATURE_DEF_BEGIN(x)
#define SBP_FEATURE_DEF(FEATURE, ATTR, DESC, DESC_V0,DESC_V1, DEFAULT_VAL) FEATURE,
#define SBP_FEATURE_DEF_END(x)

#include "sbp_feature.def"
#undef SBP_FEATURE_DEF_BEGIN
#undef SBP_FEATURE_DEF
#undef SBP_FEATURE_DEF_END


    SBP_MAX_MD_FEATURE
}sbp_md_feature_enum;

/*****************************************************************************
* DESCRIPTION
*   This enum is defined for Single Binary Platform (SBP) features
*   NVRAM saves one byte value for each feature
*****************************************************************************/
typedef enum
{
//Please add SBP data in sbp_data.def
 
#define SBP_DATA_DEF(ID, FEATURE, ATTR, DESC)       FEATURE,
#define SBP_DATA_DEF_BIT(ID, FEATURE, ATTR)     FEATURE,

#include "sbp_data.def"
#undef SBP_DATA_DEF
#undef SBP_DATA_DEF_BIT

    SBP_DATA_MAX_MD_FEATURE
}sbp_md_feature_data_enum;


/* SBP Test Mode Enum */
typedef enum
{
    SBP_TEST_MODE_NONE = 0,
    SBP_TEST_MODE_1,
    SBP_TEST_MODE_2,
    SBP_TEST_MODE_MAX
}sbp_test_mode_enum;

/* SBP ATTRIBUTE Bitmask */
typedef enum
{
    SBP_ATTR_NONE = 0,
    SBP_ATTR_NOT_SUPPORT_DYNAMIC_SBP = 0x01,       /*  bit 1 is for current SBP NV will keep when Dynamic SBP change */
    SBP_ATTR_ALL = 0xff
}sbp_attribute_enum;

/**
* DESCRIPTION
*   This enum is TO define RUIM configuration.
**/
typedef enum
{
    SBP_RUIM_DISABLED = 0x00,    /*   Non-RUIM configuration   */
    SBP_RUIM_ENABLED = 0x01    /*   RUIM configuration   */
}c2k_sbp_ruim_config_enum;

/** 
 * SBP(Single Binary Platform) modem configuration
 * a bitmap for all modem configurable feature
 **/
typedef struct
{
    kal_uint32 sbp_mode; //reserved for usage
    kal_uint8 modem_sbp_config[(SBP_MAX_MD_FEATURE/8)+1]; //the size depends on SBP_MAX_MD_FEATURE
} nvram_ef_sbp_modem_config_struct;

#define NVRAM_EF_SBP_MODEM_CONFIG_TOTAL (1)
#define NVRAM_EF_SBP_MODEM_CONFIG_SIZE sizeof(nvram_ef_sbp_modem_config_struct)

/** 
 * SBP(Single Binary Platform) modem data configuration
 * a byte for each modem configurable feature
 **/
typedef struct
{   
    kal_uint32 sbp_mode; //reserved for usage
    kal_uint8 modem_sbp_data_config[SBP_DATA_MAX_MD_FEATURE];
} nvram_ef_sbp_modem_data_config_struct;

#define NVRAM_EF_SBP_MODEM_DATA_CONFIG_TOTAL (1)
#define NVRAM_EF_SBP_MODEM_DATA_CONFIG_SIZE sizeof(nvram_ef_sbp_modem_data_config_struct)

/** 
 * SBP(Single Binary Platform) modem feature/data customization
 * a list of customized SBP feature / feature data
 * priorirty: customization > DSBP > SBP
 **/

#define SBP_MAX_CUSTOM_CONFIG (100)      // allows 100 custom configurations

typedef enum
{
    SBP_CUST_CFG_TYPE_NONE = 0,
    SBP_CUST_CFG_TYPE_FEATURE,
    SBP_CUST_CFG_TYPE_DATA
}sbp_cust_cfg_type_enum;

typedef struct{
    kal_uint32                sbp_id;
    sbp_cust_cfg_type_enum    sbp_cust_cfg_type;
    kal_uint16                sbp_cust_cfg_feature;     // enum for SBP feature or SBP feature data
    kal_uint8                 sbp_cust_cfg_feature_val;
}sbp_custom_config_struct;

typedef struct{
    sbp_custom_config_struct  sbp_custom_config[SBP_MAX_CUSTOM_CONFIG];
}nvram_ef_sbp_custom_modem_config_struct;

#define NVRAM_EF_SBP_CUSTOM_MODEM_CONFIG_TOTAL (1)
#define NVRAM_EF_SBP_CUSTOM_MODEM_CONFIG_SIZE sizeof(nvram_ef_sbp_custom_modem_config_struct)

typedef struct 
{
    kal_uint8 mcc_mnc[7];
    kal_uint32 sbp_id;
} mccmnc_to_sbp_id_struct;

typedef enum
{
    SBP_ID_OM = 0,
    SBP_ID_CMCC = 1,
    SBP_ID_CU = 2,
    SBP_ID_ORANGE = 3,
    SBP_ID_TMO_EU = 5,
    SBP_ID_VODAFONE = 6,
    SBP_ID_ATT = 7,
    SBP_ID_TMO_US = 8,
    SBP_ID_CT = 9,
    SBP_ID_TIER_2 = 10,
    SBP_ID_H3G = 11,
    SBP_ID_VERIZON = 12,
    SBP_ID_TELEFONICA = 15,
    SBP_ID_EE = 16,
    SBP_ID_DOCOMO = 17,
    SBP_ID_SPRINT = 20,
    SBP_ID_SOFTBANK = 50,
    SBP_ID_CSL = 100,
    SBP_ID_PCCW = 101,
    SBP_ID_SMT = 102,
    SBP_ID_SINGTEL = 103,
    SBP_ID_STARHUB = 104,
    SBP_ID_AMX = 105,
    SBP_ID_3HK = 106,
    SBP_ID_MTS = 135,
    SBP_ID_USCC = 236,

    /* Legacy C2K SBP ID */
    SBP_ID_GENERIC = SBP_ID_OM,
    SBP_ID_VERIZON_C2K = SBP_ID_VERIZON
}sbp_id_enum;

/* --------------------------
 * End of SBP Configuration
 * --------------------------- */


/*****************************************************************************
* FUNCTION
*   sbp_query_md_feature()
*
* DESCRIPTION
*   This function is used to query modem configuration
*
* PARAMETERS
*   feature [IN]    modem feature
*
* RETURNS
*   KAL_TRUE    : if this feature is turned on
*   KAL_FALSE   : if this feature is turned off
*****************************************************************************/
extern kal_bool sbp_query_md_feature(sbp_md_feature_enum feature);

/*****************************************************************************
* FUNCTION
*   sbp_query_id()
*
* DESCRIPTION
*   This function is used to query SBP ID received by modem
*
* PARAMETERS
*   [IN]    N/A
* RETURNS
*   the unsigned 4-byte value for the SBP ID
*****************************************************************************/
extern kal_uint32 sbp_query_id(void);

/*****************************************************************************
* FUNCTION
*   sbp_query_sub_id()
*
* DESCRIPTION
*   This function is used to query SBP Sub ID received by modem
*
* PARAMETERS
*   [IN]    N/A
* RETURNS
*   the unsigned 4-byte value for the SBP Sub ID
*****************************************************************************/
extern kal_uint32 sbp_query_sub_id(void);


/*****************************************************************************
* FUNCTION
*   sbp_query_md_feature_for_c2k()
*
* DESCRIPTION
*   This function is used to query modem configuration and used by C2K team only
*   The function will judge current active PS using C2K's API and return the corresponding setting.
*
* PARAMETERS
*   feature [IN]    modem feature
*
* RETURNS
*   KAL_TRUE    : if this feature is turned on
*   KAL_FALSE   : if this feature is turned off
*****************************************************************************/
extern kal_bool sbp_query_md_feature_for_c2k(sbp_md_feature_enum feature);

/*****************************************************************************
* FUNCTION
*   sbp_query_md_feature_by_ps()
*
* DESCRIPTION
*   This function is used to query modem configuration according to the PS ID
*
* PARAMETERS
*   feature [IN]    modem feature
*   ps_id [IN]      PS ID
*
* RETURNS
*   KAL_TRUE    : if this feature is turned on
*   KAL_FALSE   : if this feature is turned off
*****************************************************************************/
extern kal_bool sbp_query_md_feature_by_ps(sbp_md_feature_enum feature, protocol_id_enum ps_id);

/*****************************************************************************
* FUNCTION
*   sbp_query_md_feature_no_overwrite()
*
* DESCRIPTION
*   This function is used to query modem configuration without overwrite
*
* PARAMETERS
*   feature [IN]    modem feature
*
* RETURNS
*   KAL_TRUE    : if this feature is turned on
*   KAL_FALSE   : if this feature is turned off
*****************************************************************************/
extern kal_bool sbp_query_md_feature_no_overwrite(sbp_md_feature_enum feature);

/*****************************************************************************
* FUNCTION
*   sbp_query_md_feature_no_overwrite_by_ps()
*
* DESCRIPTION
*   This function is used to query modem configuration without overwrite according to the PS ID
*
* PARAMETERS
*   feature [IN]    modem feature
*   ps_id [IN]      PS ID
*
* RETURNS
*   KAL_TRUE    : if this feature is turned on
*   KAL_FALSE   : if this feature is turned off
*****************************************************************************/
extern kal_bool sbp_query_md_feature_no_overwrite_by_ps(sbp_md_feature_enum feature, protocol_id_enum ps_id);


/*****************************************************************************
* FUNCTION
*   sbp_set_md_feature()
*
* DESCRIPTION
*   This function is used to set modem configuration
*
* PARAMETERS
*   feature         [IN]    modem feature
*   is_turned_on    [IN]
*   sbp_feature_ptr [IN/OUT]
*
* RETURNS
*   KAL_TRUE if success; otherwise KAL_FALSE
*****************************************************************************/
extern kal_bool sbp_set_md_feature(sbp_md_feature_enum feature, 
                                   kal_bool is_turned_on, 
                                   nvram_ef_sbp_modem_config_struct *sbp_feature_ptr);

/*****************************************************************************
* FUNCTION
*   sbp_query_md_feature_data()
*
* DESCRIPTION
*   This function is used to query modem configuration
*
* PARAMETERS
*   feature [IN]    modem feature
*
* RETURNS
*   The byte value for the input feature
*****************************************************************************/
extern kal_uint8 sbp_query_md_feature_data(sbp_md_feature_data_enum feature);

/*****************************************************************************
* FUNCTION
*   sbp_query_md_feature_data_for_c2k()
*
* DESCRIPTION
*   This function is used to query modem configuration and used by C2K team only
*   The function will judge current active PS using C2K's API and return the corresponding setting.
*
* PARAMETERS
*   feature [IN]    modem feature
*
* RETURNS
*   the unsigned byte value for the feature
*****************************************************************************/
extern kal_uint8 sbp_query_md_feature_data_for_c2k(sbp_md_feature_data_enum feature);

/*****************************************************************************
* FUNCTION
*   sbp_query_md_feature_data_by_ps()
*
* DESCRIPTION
*   This function is used to query modem configuration data
*
* PARAMETERS
*   feature [IN]    modem feature
*   ps_id [IN]      PS ID
*
* RETURNS
*   the unsigned byte value for the feature
*****************************************************************************/
extern kal_uint8 sbp_query_md_feature_data_by_ps(sbp_md_feature_data_enum feature, protocol_id_enum ps_id);

/*****************************************************************************
* FUNCTION
*   sbp_query_md_feature_data_no_overwrite()
*
* DESCRIPTION
*   This function is used to query modem configuration without overwrite
*
* PARAMETERS
*   feature [IN]    modem feature
*
* RETURNS
*   The byte value for the input feature
*****************************************************************************/
extern kal_uint8 sbp_query_md_feature_data_no_overwrite(sbp_md_feature_data_enum feature);

/*****************************************************************************
* FUNCTION
*   sbp_query_md_feature_data_no_overwrite_by_ps()
*
* DESCRIPTION
*   This function is used to query modem configuration data without overwrite
*
* PARAMETERS
*   feature [IN]    modem feature
*   ps_id [IN]      PS ID
*
* RETURNS
*   the unsigned byte value for the feature
*****************************************************************************/
extern kal_uint8 sbp_query_md_feature_data_no_overwrite_by_ps(sbp_md_feature_data_enum feature, protocol_id_enum ps_id);

/*****************************************************************************
* FUNCTION
*   sbp_set_md_feature_data()
*
* DESCRIPTION
*   This function is used to query modem configuration
*
* PARAMETERS
*   feature         [IN]    modem feature
*   data            [IN]
*   sbp_data_ptr    [IN/OUT]
*
* RETURNS
*   KAL_TRUE if success; otherwise KAL_FALSE
*****************************************************************************/
extern kal_bool sbp_set_md_feature_data(sbp_md_feature_data_enum feature, 
                                        kal_uint8 data, 
                                        nvram_ef_sbp_modem_data_config_struct *sbp_data_ptr);

/*****************************************************************************
* FUNCTION
*   sbp_general_set_md_feature_data()
*
* DESCRIPTION
*   This function is used to set modem configuration data
*   Please don't use this API if you don't get the permission from SBP FPM.
*
* PARAMETERS
*   feature [IN]    modem feature
*
* RETURNS
*   the unsigned byte value for the feature
*****************************************************************************/
extern kal_bool sbp_general_set_md_feature_data(sbp_md_feature_data_enum feature, kal_uint8 data);

/*****************************************************************************
 * FUNCTION
 *  custom_nvram_set_sbp_id
 * DESCRIPTION
 * Set SBP features and data according to SBP ID.
 * PARAMETERS
 *  sbp_mode  [IN]
 * RETURNS
 *   KAL_TRUE    : Set SBP ID successfully
 *   KAL_FALSE   : Error happens when setting SBP ID
 *****************************************************************************/
extern kal_bool custom_nvram_set_sbp_id(kal_uint32 sbp_id, kal_bool is_in_dynamic_sbp, kal_uint8 *imsi, protocol_id_enum ps_id);

/*****************************************************************************
 * FUNCTION
 *  custom_nvram_init_sbp_id
 * DESCRIPTION
 * Set SBP features and data according to SBP ID and SIM SBP ID.
 * PARAMETERS
 *  sbp_id  [IN]
 * RETURNS
 *   Void
 *****************************************************************************/
extern void custom_nvram_init_sbp_id(kal_uint32 sbp_id);


/*****************************************************************************
* FUNCTION
*   sbp_get_sim_sbp_id_for_all()
*
* DESCRIPTION
*   get SIM SBP ID which trigger DSBP for all modem (IMS/VoLTE + PS/L1)
*
* PARAMETERS
*   ps_id   [IN]    protocol ID
*
* RETURNS
*   the unsigned 4-byte value for the SIM SBP ID
*
*****************************************************************************/
extern kal_uint32 sbp_get_sim_sbp_id_for_all(protocol_id_enum ps_id);

/*****************************************************************************
* FUNCTION
*   sbp_get_current_sim_sbp_id()
*
* DESCRIPTION
*   get SIM SBP ID which trigger DSBP for IMS/VoLTE
*
* PARAMETERS
*   ps_id   [IN]    protocol ID
*
* RETURNS
*   the unsigned 4-byte value for the SIM SBP ID
*
*****************************************************************************/
extern kal_uint32 sbp_get_current_sim_sbp_id(protocol_id_enum ps_id);

/*****************************************************************************
* FUNCTION
*   sbp_get_sim_sbp_id()
*
* DESCRIPTION
*   get SIM SBP ID which trigger DSBP for IMS/VoLTE
*
* PARAMETERS
*   ps_id   [IN]    protocol ID
*
* RETURNS
*   the unsigned 4-byte value for the SIM SBP ID
*
*****************************************************************************/
extern kal_uint32 sbp_get_sim_sbp_id(protocol_id_enum ps_id);

/*****************************************************************************
* FUNCTION
*   sbp_set_sim_sbp_id_for_all()
*
* DESCRIPTION
*   set SIM SBP ID which trigger DSBP for all modem (IMS/VoLTE + PS/L1)
*
* PARAMETERS
*   ps_id       [IN]    protocol ID
*   sim_sbp_id  [IN]    SIM SBP ID
*   mcc  [IN]    MCC
*   mnc  [IN]    MNC
*   iccid  [IN]   ICCID
*
* RETURNS
*   KAL_TRUE    - success
*   KAL_FALSE   - failure
*
*****************************************************************************/
extern kal_bool sbp_set_sim_sbp_id_for_all(protocol_id_enum ps_id, kal_uint32 sim_sbp_id, kal_uint8 *mcc, kal_uint8 *mnc, kal_uint8 *iccid);

/*****************************************************************************
* FUNCTION
*   sbp_set_current_sim_sbp_id()
*
* DESCRIPTION
*   get SIM SBP ID which trigger DSBP for IMS/VoLTE
*
* PARAMETERS
*   ps_id       [IN]    protocol ID
*   sim_sbp_id  [IN]    SIM SBP ID
*
* RETURNS
*   KAL_TRUE    - success
*   KAL_FALSE   - failure
*
*****************************************************************************/
extern kal_bool sbp_set_current_sim_sbp_id(protocol_id_enum ps_id, kal_uint32 sim_sbp_id);

/*****************************************************************************
* FUNCTION
*   sbp_set_sim_sbp_id()
*
* DESCRIPTION
*   set SIM SBP ID which trigger DSBP for IMS/VoLTE
*
* PARAMETERS
*   ps_id       [IN]    protocol ID
*   sim_sbp_id  [IN]    SIM SBP ID
*
* RETURNS
*   KAL_TRUE    - success
*   KAL_FALSE   - failure
*
*****************************************************************************/
extern kal_bool sbp_set_sim_sbp_id(protocol_id_enum ps_id, kal_uint32 sim_sbp_id, kal_uint8 *mcc, kal_uint8 *mnc, kal_uint8 *iccid);

/*****************************************************************************
 * FUNCTION
 *  sbp_convert_mcc_mnc_string_from_imsi
 * DESCRIPTION
 *  get mcc, mnc from imsi with string format
 * PARAMETERS
 *  imsi
 * RETURNS
 *  KAL_TRUE
 *****************************************************************************/
kal_bool sbp_convert_mcc_mnc_string_from_imsi(kal_uint8* mcc_ptr, kal_uint32 mcc_size, kal_uint8 *mnc_ptr, kal_uint32 mnc_size, kal_uint8* imsi_ptr, kal_uint8 mnc_len);

/*****************************************************************************
 * FUNCTION
*   sbp_get_sbp_feature_raw_config()
*
* DESCRIPTION
*   Get SBP Feature Raw Data according to the ps_id
*   Please don't use this API if you don't get the permission from SBP FPM.
*
* PARAMETERS
*   ps_id       [IN]    protocol ID
*
* RETURNS
*   KAL_TRUE    - success
*   KAL_FALSE   - failure
*
*****************************************************************************/
extern kal_bool sbp_get_sbp_feature_raw_config(protocol_id_enum ps_id, kal_uint8 *raw_config);

/*****************************************************************************
* FUNCTION
*   sbp_set_sbp_feature_raw_config()
*
* DESCRIPTION
*   Set SBP Feature Raw Data according to the ps_id
*   Please don't use this API if you don't get the permission from SBP FPM.
*
* PARAMETERS
*   ps_id       [IN]    protocol ID
*
* RETURNS
*   KAL_TRUE    - success
*   KAL_FALSE   - failure
*
*****************************************************************************/
extern void sbp_set_sbp_feature_raw_config(protocol_id_enum ps_id, kal_uint8 *raw_config);


/*****************************************************************************
* FUNCTION
*   sbp_get_sbp_data_raw_config()
*
* DESCRIPTION
*   Get SBP Data Raw Data according to the ps_id
*   Please don't use this API if you don't get the permission from SBP FPM.
*
* PARAMETERS
*   ps_id       [IN]    protocol ID
*
* RETURNS
*   KAL_TRUE    - success
*   KAL_FALSE   - failure
*
*****************************************************************************/
extern kal_bool sbp_get_sbp_data_raw_config(protocol_id_enum ps_id, kal_uint8 *raw_config);

/*****************************************************************************
* FUNCTION
*   sbp_set_sbp_data_raw_config()
*
* DESCRIPTION
*   Get SBP Data Raw Data according to the ps_id
*   Please don't use this API if you don't get the permission from SBP FPM.
*
* PARAMETERS
*   ps_id       [IN]    protocol ID
*
* RETURNS
*   KAL_TRUE    - success
*   KAL_FALSE   - failure
*
*****************************************************************************/
extern void sbp_set_sbp_data_raw_config(protocol_id_enum ps_id, kal_uint8 *raw_config);


/*****************************************************************************
* FUNCTION
*   sbp_general_set_md_feature()
*
* DESCRIPTION
*   This function is used to set modem configuration.
*   Please don't use this API if you don't get the permission from SBP FPM.
*
* PARAMETERS
*   feature         [IN]    modem feature
*   is_turned_on    [IN]
*
* RETURNS
*   KAL_TRUE if success; otherwise KAL_FALSE
*****************************************************************************/
extern kal_bool sbp_general_set_md_feature(sbp_md_feature_enum feature, kal_bool is_turned_on);

/*****************************************************************************
* FUNCTION
*   sbp_update_features_to_nvram()
*
* DESCRIPTION
*   This function is used to store current config of features from SBP contexts into NVRAM_EF_SBP_MODEM_CONFIG_LID
*   Please don't use this API if you don't get the permission from SBP FPM.
*
* PARAMETERS
*   ps_id       [IN]    protocol ID
*
* RETURNS
*   KAL_TRUE    - success
*   KAL_FALSE   - failure
*
*****************************************************************************/
extern kal_bool sbp_update_features_to_nvram();

/*****************************************************************************
* FUNCTION
*   sbp_update_data_to_nvram()
*
* DESCRIPTION
*   This function is used to store current config of data from SBP contexts into NVRAM_EF_SBP_MODEM_DATA_CONFIG_LID
*   Please don't use this API if you don't get the permission from SBP FPM.
*
* PARAMETERS
*   ps_id       [IN]    protocol ID
*
* RETURNS
*   KAL_TRUE    - success
*   KAL_FALSE   - failure
*
*****************************************************************************/
extern kal_bool sbp_update_data_to_nvram();


/*****************************************************************************
* FUNCTION
*   sbp_update_specific_feature_to_nvram()
*
* DESCRIPTION
*   This function is used to write a single SBP feature to NVRAM, keeping all other features the same
*
* PARAMETERS
*   feature         [IN]    modem feature
*   is_turned_on    [IN]
*
* RETURNS
*   KAL_TRUE    - success
*   KAL_FALSE   - failure
*
*****************************************************************************/
kal_bool sbp_update_specific_feature_to_nvram(sbp_md_feature_enum feature, kal_bool is_turned_on);

/*****************************************************************************
* FUNCTION
*   sbp_update_specific_data_to_nvram()
*
* DESCRIPTION
*   This function is used to write a single SBP feature data to NVRAM, keeping all other feature data the same
*
* PARAMETERS
*   feature [IN]    modem feature data
*   data [IN]       value of feature data
*
* RETURNS
*   KAL_TRUE    - success
*   KAL_FALSE   - failure
*
*****************************************************************************/
kal_bool sbp_update_specific_data_to_nvram(sbp_md_feature_data_enum feature, kal_uint8 data);

/*****************************************************************************
* FUNCTION
*   sbp_init_contexts()
*
* DESCRIPTION
*   This function is used to init SBP Contexts
*   Please don't use this API if you don't get the permission from SBP FPM.
*
* PARAMETERS
*   [IN]    N/A
*
* RETURNS
*   KAL_TRUE or KAL_FALSE
*****************************************************************************/
extern kal_bool sbp_init_contexts();

/*****************************************************************************
 * FUNCTION
 *  sbp_get_test_mode
 *
 * DESCRIPTION
 * query if it is under test mode or not
 *
 * PARAMETERS
 *  [IN]    N/A
 * RETURNS
 *   current SBP test mode : sbp_test_mode_enum
 *****************************************************************************/
extern sbp_test_mode_enum sbp_get_test_mode(void);

/*****************************************************************************
 * FUNCTION
 *  sbp_set_test_mode
 *
 * DESCRIPTION
 * Set SBP to test mode.
 * In test mode, we read current values of nvram files instead of using default values before applying SBP settings.
 *
 * PARAMETERS
 *  test_mdoe [IN]    sbp_test_mode_enum
 * RETURNS
 *   KAL_TRUE    : success
 *   KAL_FALSE   : fail
 *****************************************************************************/
extern kal_bool sbp_set_test_mode(sbp_test_mode_enum test_mode);

/*****************************************************************************
* FUNCTION
*   sbp_set_md_feature_by_ps()
*
* DESCRIPTION
*   This function is used to set modem configuration by PS
*   Please don't use this API if you don't get the permission from SBP FPM.
*
* PARAMETERS
*   feature         [IN]    modem feature
*   is_turned_on    [IN]
*   sbp_feature_ptr [IN/OUT]
*
* RETURNS
*   KAL_TRUE if success; otherwise KAL_FALSE
*****************************************************************************/
kal_bool sbp_set_md_feature_by_ps(sbp_md_feature_enum feature,
                            kal_bool is_turned_on, 
                            protocol_id_enum ps_id);

/*****************************************************************************
* FUNCTION
*   sbp_set_md_feature_data_by_ps()
*
* DESCRIPTION
*   This function is used to set modem configuration data by PS
*   Please don't use this API if you don't get the permission from SBP FPM.
*
* PARAMETERS
*   feature [IN]    modem feature
*
* RETURNS
*   the unsigned byte value for the feature
*****************************************************************************/
kal_bool sbp_set_md_feature_data_by_ps(sbp_md_feature_data_enum feature, 
        kal_uint8 data, 
        protocol_id_enum ps_id);

/*****************************************************************************
* FUNCTION
*   sbp_set_sbp_id()
*
* DESCRIPTION
*   This function is used to set SBP ID into SBP contexts and its NVRAM
*   Please don't use this API if you don't get the permission from SBP FPM.
*
* PARAMETERS
*   [IN]    N/A
*
* RETURNS
*   KAL_TRUE or KAL_FALSE
*****************************************************************************/
extern kal_bool sbp_set_sbp_id(kal_uint32 sbp_id);

/*****************************************************************************
* FUNCTION
*   sbp_md_feature_overwrite()
*
* DESCRIPTION
*   This function is used to overwrite the configuration for GCF or other test modes
*
* PARAMETERS
*   feature [IN]    modem feature
*   enabled [IN]   feature is turned on or not 
*
* RETURNS
*   KAL_TRUE    : if this feature is turned on
*   KAL_FALSE   : if this feature is turned off
*****************************************************************************/
extern kal_bool sbp_md_feature_overwrite(sbp_md_feature_enum feature, kal_bool enabled);

/*****************************************************************************
* FUNCTION
*   sbp_md_feature_data_overwrite()
*
* DESCRIPTION
*   This function is used to overwrite the configuration for GCF or other test modes
*
* PARAMETERS
*   feature [IN]    modem feature
*   value [IN]       the value of the feature 
*
* RETURNS
*   the overwrited value for the feature
*****************************************************************************/
extern kal_uint8 sbp_md_feature_data_overwrite(sbp_md_feature_data_enum feature, kal_uint8 value);

/*****************************************************************************
* FUNCTION
*   sbp_reload_config()
*
* DESCRIPTION
*   This function is used to reload SBP related feature/data configuration
*   Please don't use this API if you don't get the permission from SBP FPM.
*
* PARAMETERS
*   ps_id       [IN]    protocol ID
*
* RETURNS
*   KAL_TRUE    - success
*   KAL_FALSE   - failure
*
*****************************************************************************/
void sbp_reload_config();

/*****************************************************************************
 * FUNCTION
 *  nvram_custom_config_sbp_by_model_id
 * DESCRIPTION
 * Set SBP features and data according to Model ID.
 * PARAMETERS
 *  md_product_model_id  [IN]
 * RETURNS
 *   KAL_TRUE    : Set SBP ID successfully
 *   KAL_FALSE   : Error happens when setting SBP ID
 *****************************************************************************/
extern kal_bool nvram_custom_config_sbp_by_model_id(kal_uint32 md_product_model_id);

/*****************************************************************************
* FUNCTION
*   sbp_update_custom_config_to_nvram
*
* DESCRIPTION
*   This function updates sbp feature/data custom config to nvram
*   
*
* PARAMETERS
*   ps_id       [IN]    protocol ID
*   is_erase    [IN]    reset the feature/data item or not
* RETURNS
*   void
*
*****************************************************************************/
kal_bool sbp_update_custom_config_to_nvram(sbp_custom_config_struct *sbp_custom_config_ptr, kal_bool is_erase);

/*****************************************************************************
* FUNCTION
*   sbp_get_max_custom_config
*
* DESCRIPTION
*   This function gets MAX custom config NV entries
*
* PARAMETERS
*   [IN]    N/A
* RETURNS
*   void
*
*****************************************************************************/
kal_uint16 sbp_get_max_custom_config(void);

/*****************************************************************************
* FUNCTION
*    sbp_get_last_dsbp_sim_info()
*
* DESCRIPTION
*   This function is used to get MCC/MNC/ICCID of last completed DSBP
*   For mode2 device, this will include SIM info from last power up
*   For mode1 device, only include SIM info in current sbp context
*
* PARAMETERS
*   ps_id      [IN]    protocol ID
*   param      [IN]    mcc, mnc, iccid
* RETURNS
*   void
*
*****************************************************************************/
extern void sbp_get_last_dsbp_sim_info(protocol_id_enum ps_id, kal_uint8 *mcc, kal_uint8 *mnc, kal_uint8 *iccid);

/*****************************************************************************
* FUNCTION
*    sbp_get_last_mode2_dsbp_sim_info()
*
* DESCRIPTION
*   This function is used to get SIM_SBP_ID/MCC/MNC/ICCID of last completed mode2 DSBP
*   Can be used in DSBP callback function to compare with last mode2 DSBP result
*   As part of mode2 design, this includes info from SIM insert of last power cycle
*
* PARAMETERS
*   ps_id      [IN]    protocol ID
*   param      [IN]    sim_sbp_id, mcc, mnc, iccid
* RETURNS
*   void
*
*****************************************************************************/
extern void sbp_get_last_mode2_dsbp_sim_info(protocol_id_enum ps_id, kal_uint32 *sim_sbp_id, kal_uint8 *mcc, kal_uint8 *mnc, kal_uint8 *iccid);

#ifdef __cplusplus
}
#endif

#endif  /* _SBP_PUBLIC_UTILITY_H */

