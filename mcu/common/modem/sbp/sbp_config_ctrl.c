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

#include "kal_general_types.h"
#include "sbp_public_utility.h"
#include "kal_public_api.h"
#include "ps_em_enum.h"
#include "nvram_interface.h"
#include "nvram_data_items.h"
#include "sbp_nvram_def.h"
#include "nvram_enums.h"
#include "nvram_editor_data_item.h"
#include "sim_ps_api.h"
#include "custom_imc_config.h"
#include "md_sap.h"
#include "kal_trace.h"
#include "ps_public_struct.h"

extern kal_uint32 md_product_model_id;
extern kal_uint32 default_sbp_id;

extern void sbp_get_reconfig_param(protocol_id_enum ps_id, sbp_reconfig_custom_param_struct *param);

kal_uint32 old_default_sbp_id = SBP_ID_INVALID;

#if defined (__MOD_IMC__)
extern  kal_bool nvram_custom_config_ims_profile(sbp_reconfig_custom_param_struct *param_ptr);
#endif /* __MOD_IMC__ */
extern kal_bool nvram_custom_config_ims_other_profile(sbp_reconfig_custom_param_struct *param_ptr);

#ifdef __VOLTE_SUPPORT__
extern kal_bool nvram_custom_config_ltecsr_profile(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool nvram_custom_config_sdm_ads_profile(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool nvram_custom_config_vdm_ads_profile(sbp_reconfig_custom_param_struct *param_ptr);
#endif /* __VOLTE_SUPPORT__ */

#ifdef __LTE_RAT__
extern kal_bool nvram_custom_config_errc_para(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool nvram_custom_config_el1c_para(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool nvram_custom_config_lte_pref(sbp_reconfig_custom_param_struct *param_ptr);
#endif
#ifdef __CDMA2000_RAT__
extern void nvram_custom_config_c2k_nam_para(kal_uint32 old_sbp_id, protocol_id_enum ps_id); 
extern kal_bool nvram_custom_reconfig_c2k_nam_para(sbp_reconfig_custom_param_struct *param_ptr);  
#endif
extern kal_bool nvram_custom_config_umts(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool nvram_custom_config_sbp(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool nvram_custom_config_rrc_dynamic_cap(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool nvram_custom_config_iwlan_profile(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool nvram_custom_config_l4c_dsbp_profile(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool nvram_custom_config_rac_dsbp_profile(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool nvram_custom_config_mscap(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool nvram_custom_config_regional_phone_mode(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool nvram_custom_config_wo_profile(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool nvram_custom_config_l4c(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool nvram_custom_config_bip_profile(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool nvram_custom_config_rrc_band_priority_order(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool nvram_custom_config_d2_profile(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool nvram_custom_config_nwsel_dsbp_profile(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool nvram_custom_config_rrc_profile(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool custom_config_cc_profile(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool nvram_custom_config_sms_profile(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool nvram_custom_config_smsal_common_profile(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool nvram_custom_config_mrs_profile(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool nvram_custom_config_rrm_profile(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool nvram_custom_config_tcm_profile(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool nvram_custom_config_sm_profile(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool nvram_custom_config_ps_conformance_setting(sbp_reconfig_custom_param_struct *param_ptr);
extern kal_bool custom_config_atci_profile(sbp_reconfig_custom_param_struct *param_ptr);


/*  For MoDIS UT, SAP_INFO(xxx_SAP,MOD_A,ANY)
 *  If MOD_A is the test module and send msg to non test modules with above SAP INFO, 
 *  the msg can NOT be trapped and non test modules will receive the msg.
 *  <solution>:
 *  1. use an unique SAP between MOD_A and each non-test module instead of xxx_SAP for ANY
 *  2. use an dummy SAP which is not defined in sap_info.h
 *  solution#1 needs many dummy SAPs, for general purpose, we adopt solution#2
 */
#if UNIT_TEST
#define SBP_RECONFIGURE_SAP     DUMMY_SAP
#else
#define SBP_RECONFIGURE_SAP     L4C_ME_SAP
#endif /* UNIT_TEST*/

/*
 *  to be feasible to send DSBP_RECONFIGURE_REQ in order in the future,
 *  to duplicate from reconfig_mod_info_tbl[] in custom_l4_utility.c
 *  the sending order would be tbl[0]->tbl[1]->tbl[2]...
 */
sbp_reconfigure_module_info_struct sbp_reconfigure_mod_info_tbl[] = 
{
    // add dummy module and unused reconfigure type for build error: zero size of table if __IMS_SUPPORT__ is not defined
    {MOD_RAC,    SBP_RECONFIGURE_SAP,     RECONFIG_DSBP_CHANGE_ALL,  CFG_GEMINI_MOD, nvram_custom_config_rac_dsbp_profile},    
    {MOD_L4C,    SBP_RECONFIGURE_SAP,     RECONFIG_DSBP_CHANGE,  CFG_GEMINI_MOD, nvram_custom_config_l4c_dsbp_profile},
#ifdef __IMS_SUPPORT__
    {MOD_VDM,    SBP_RECONFIGURE_SAP,     RECONFIG_DSBP_CHANGE,      CFG_GEMINI_MOD, nvram_custom_config_vdm_ads_profile},
#ifdef __MULTIPLE_IMS_SUPPORT__                        
    {MOD_IMC,    SBP_RECONFIGURE_SAP,     RECONFIG_DSBP_CHANGE | RECONFIG_PRE_DSBP_CHANGE,  CFG_GEMINI_MOD, nvram_custom_config_ims_profile},
    {MOD_SDM,    SBP_RECONFIGURE_SAP,     RECONFIG_DSBP_CHANGE,      CFG_GEMINI_MOD, nvram_custom_config_sdm_ads_profile},
#if defined(__MTK_TARGET__) && defined(__VOLTE_SUPPORT__) // LTECSR is not created in MoDIS, can't send msg to LTECSR
    {MOD_LTECSR, L4C_ME_SAP,     RECONFIG_DSBP_CHANGE,               CFG_GEMINI_MOD, nvram_custom_config_ltecsr_profile},
#endif /* defined(__MTK_TARGET__) && defined(__VOLTE_SUPPORT__) */
#else
    {MOD_IMC,    SBP_RECONFIGURE_SAP,     RECONFIG_DSBP_CHANGE | RECONFIG_PRE_DSBP_CHANGE,  CFG_SINGLE_MOD, nvram_custom_config_ims_profile},
    {MOD_SDM,    SBP_RECONFIGURE_SAP,     RECONFIG_DSBP_CHANGE,      CFG_GEMINI_MOD, nvram_custom_config_sdm_ads_profile},
#if defined(__MTK_TARGET__) && defined(__VOLTE_SUPPORT__) // LTECSR is not created in MoDIS, can't send msg to LTECSR
    {MOD_LTECSR, SBP_RECONFIGURE_SAP,     RECONFIG_DSBP_CHANGE,      CFG_SINGLE_MOD, nvram_custom_config_ltecsr_profile},
#endif /* defined(__MTK_TARGET__) && defined(__VOLTE_SUPPORT__) */
#endif /* __MULTIPLE_IMS_SUPPORT__ */
#endif
    {MOD_WO,     SBP_RECONFIGURE_SAP,     RECONFIG_DSBP_CHANGE | RECONFIG_DSBP_NOT_OCCUR,  CFG_GEMINI_MOD, nvram_custom_config_wo_profile},
    {MOD_IWLAN,    SBP_RECONFIGURE_SAP,     RECONFIG_DSBP_CHANGE | RECONFIG_PRE_DSBP_CHANGE,  CFG_GEMINI_MOD, nvram_custom_config_iwlan_profile},

#ifndef __MTK_TARGET__
    {MOD_NIL,    SBP_RECONFIGURE_SAP,     RECONFIG_DSBP_CHANGE_ALL,  CFG_GEMINI_MOD, NULL},
    {MOD_SBP,    SBP_RECONFIGURE_SAP,     RECONFIG_DSBP_CHANGE_ALL | RECONFIG_PRE_DSBP_CHANGE_ALL,  CFG_GEMINI_MOD, NULL},
#endif
    {MOD_SMS,    SBP_RECONFIGURE_SAP,     RECONFIG_DSBP_CHANGE_ALL | RECONFIG_DSBP_CHANGE,  CFG_GEMINI_MOD, nvram_custom_config_sms_profile},
    {MOD_SMSAL,    SBP_RECONFIGURE_SAP,     RECONFIG_DSBP_CHANGE_ALL | RECONFIG_DSBP_CHANGE,  CFG_GEMINI_MOD, nvram_custom_config_smsal_common_profile},
    {MOD_D2AM,    SBP_RECONFIGURE_SAP,     RECONFIG_DSBP_CHANGE | RECONFIG_PRE_DSBP_CHANGE,  CFG_GEMINI_MOD, nvram_custom_config_d2_profile},
#if defined(__MTK_TARGET__) && defined(__BIP_SUPPORT__)
    {MOD_BIP_DS_MGR,    SBP_RECONFIGURE_SAP,     RECONFIG_DSBP_CHANGE,  CFG_SINGLE_MOD, nvram_custom_config_bip_profile},
#endif
    {MOD_NIL,   SBP_RECONFIGURE_SAP,     RECONFIG_DSBP_CHANGE,  CFG_GEMINI_MOD, custom_config_cc_profile},
    {MOD_EL2PORTAL,    SBP_RECONFIGURE_SAP,     RECONFIG_DSBP_CHANGE_ALL,  CFG_GEMINI_LTE_MOD, NULL},
    {MOD_NWSEL,  SBP_RECONFIGURE_SAP,     RECONFIG_PRE_DSBP_CHANGE_ALL | RECONFIG_DSBP_CHANGE_ALL | RECONFIG_DSBP_NOT_OCCUR,  CFG_GEMINI_MOD, nvram_custom_config_nwsel_dsbp_profile},
    {MOD_NIL,    SBP_RECONFIGURE_SAP,     RECONFIG_DSBP_CHANGE_ALL,  CFG_GEMINI_MOD, nvram_custom_config_rrc_profile},
    {MOD_RRM_FDD,     SBP_RECONFIGURE_SAP,     RECONFIG_DSBP_CHANGE_ALL, CFG_GEMINI_MOD, nvram_custom_config_rrm_profile},
    {MOD_NIL,     SBP_RECONFIGURE_SAP,     RECONFIG_DSBP_CHANGE_ALL, CFG_GEMINI_MOD, nvram_custom_config_mrs_profile},
    {MOD_NIL,    SBP_RECONFIGURE_SAP,     RECONFIG_DSBP_CHANGE_ALL | RECONFIG_DSBP_CHANGE,  CFG_GEMINI_MOD, nvram_custom_config_tcm_profile},
    {MOD_NIL,    SBP_RECONFIGURE_SAP,     RECONFIG_DSBP_CHANGE_ALL | RECONFIG_DSBP_CHANGE,  CFG_GEMINI_MOD, nvram_custom_config_sm_profile},
    {MOD_NIL,    SBP_RECONFIGURE_SAP,     RECONFIG_DSBP_CHANGE_ALL | RECONFIG_DSBP_CHANGE,  CFG_GEMINI_MOD, nvram_custom_config_ps_conformance_setting},
    {MOD_NIL,   SBP_RECONFIGURE_SAP,     RECONFIG_DSBP_CHANGE,  CFG_GEMINI_MOD, custom_config_atci_profile},
#ifdef __CDMA2000_RAT__    
    {MOD_NIL,    SBP_RECONFIGURE_SAP,     RECONFIG_DSBP_CHANGE, CFG_SINGLE_MOD, nvram_custom_reconfig_c2k_nam_para},        
#endif
        
};

sbp_reconfigure_module_info_struct *sbp_get_sbp_reconfigure_mod_tbl()
{
    return sbp_reconfigure_mod_info_tbl;
}

kal_uint8 sbp_get_num_of_sbp_reconfigure_mod_tbl()
{
    return sizeof(sbp_reconfigure_mod_info_tbl)/sizeof(sbp_reconfigure_mod_info_tbl[0]);
}


/*This part is to declare the functions and data structures for NVRAM Reset 
      if the SBP ID(From CCCI or NVRAM) changes from previous one after the boot up*/

extern void nvram_custom_reset_sample_para(kal_uint32 old_sbp_id, protocol_id_enum ps_id);
extern void nvram_custom_reset_mscap(kal_uint32 old_sbp_id, protocol_id_enum ps_id);
extern void nvram_custom_reset_rrc_dynamic_cap(kal_uint32 old_sbp_id, protocol_id_enum ps_id);
extern void nvram_custom_reset_regional_phone_mode(kal_uint32 old_sbp_id, protocol_id_enum ps_id);
#ifdef __LTE_RAT__
extern void nvram_custom_reset_errc_para(kal_uint32 old_sbp_id, protocol_id_enum ps_id);
extern void nvram_custom_reset_lte_pref(kal_uint32 old_sbp_id, protocol_id_enum ps_id);
extern void nvram_custom_reset_el1c_para(kal_uint32 old_sbp_id, protocol_id_enum ps_id);
#endif
#ifdef __VOLTE_SUPPORT__
extern void nvram_custom_reset_ltecsr_profile(kal_uint32 old_sbp_id, protocol_id_enum ps_id);
extern void nvram_custom_reset_vdm_ads_profile(kal_uint32 old_sbp_id, protocol_id_enum ps_id);
#endif /* __VOLTE_SUPPORT__ */

void custom_reset_nvram_lids(kal_uint32 sbp_id);

typedef void(*SBP_RESET_NVRAM_LID)(kal_uint32, protocol_id_enum);

SBP_RESET_NVRAM_LID nvram_lid_reset_func_tbl[] =
{
    nvram_custom_reset_mscap,
    nvram_custom_reset_rrc_dynamic_cap,
    nvram_custom_reset_regional_phone_mode,
#ifdef __VOLTE_SUPPORT__
    nvram_custom_reset_vdm_ads_profile,
    nvram_custom_reset_ltecsr_profile,
#endif
#ifdef __LTE_RAT__        
    nvram_custom_reset_errc_para,
    nvram_custom_reset_lte_pref,
    nvram_custom_reset_el1c_para,
#endif
};

SBP_RESET_NVRAM_LID nvram_lid_reset_with_new_sbp_id_func_tbl[] =
{
    nvram_custom_reset_sample_para,
#ifdef __CDMA2000_RAT__
    nvram_custom_config_c2k_nam_para,
#endif /* __CDMA2000_RAT__ */
};

/* NVRAM RESET Declaration ends here*/

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
void custom_nvram_init_sbp_id(kal_uint32 sbp_id)
{
    protocol_id_enum ps_id;
    sbp_reconfig_custom_param_struct sbp_reconfig_custom_param;
    kal_uint8 num_of_dsbp_tbl, i;
    kal_uint32 sim_sbp_id;

    sbp_init_contexts();

    /*this modification is used in operator specific NWSIM, only define these compile option in VzW/ATT/Sprint/TMO NWSIM project*/
#ifdef __ATT_ENNWSIM__
    sbp_id = 7;
#endif

#ifdef __SPRINT_ENNWSIM__
    sbp_id = 20;
#endif

#ifdef __TMO_ENNWSIM__
    sbp_id = 8;
#endif

#ifdef __VZW_ENNWSIM__
    sbp_id = 12;
#endif

    /* sbp_id is not set from CCCI or MODIS so we use default_sbp_id,
        which is initialized in the sbp_init_contexts() from NVRAM*/
    if (sbp_id == SBP_ID_INVALID)
        sbp_id = default_sbp_id;

    /****************************************************************** 
      Update SBP ID first and then WorldMode ID 
      Otherwise NVRAM_EF_SBP_MODEM_DATA_CONFIG_LID would be overwrite
      PS. WorldMode ID is saved in NVRAM_EF_SBP_MODEM_DATA_CONFIG_LID
     ******************************************************************/
    // reset SBP related setting if needed
    custom_reset_nvram_lids(sbp_id);// this will reset the NVRAM LIDs if the SBP ID is changed from previous one

    // set SBP ID
    sbp_set_sbp_id(sbp_id);

    // Configure SBP feature set
    sbp_reconfig_custom_param.sbp_id = sbp_id;
    sbp_reconfig_custom_param.sbp_sub_id = sbp_query_sub_id();
    sbp_reconfig_custom_param.is_in_dynamic_sbp = KAL_FALSE;   
    sbp_reconfig_custom_param.ps_id =  PROTOCOL_1;
    sbp_reconfig_custom_param.mcc[0] = 0;
    sbp_reconfig_custom_param.mnc[0] = 0;
    sbp_reconfig_custom_param.trans_id = 0;  // operation not related to SIM card, use 0

    nvram_custom_config_sbp(&sbp_reconfig_custom_param);

    num_of_dsbp_tbl = sbp_get_num_of_sbp_reconfigure_mod_tbl();
    /* SBP Multiple context */
    for (ps_id = PROTOCOL_1; ps_id < MAX_SIM_NUM ; ps_id++)
    {
        custom_nvram_set_sbp_id(sbp_id, KAL_FALSE, NULL, ps_id);

        sim_sbp_id = sbp_get_sim_sbp_id_for_all(ps_id);
        if (sim_sbp_id != SBP_ID_INVALID)
        {
            // prepare MCC/MNC/ICCID
            sbp_get_reconfig_param(ps_id, &sbp_reconfig_custom_param);
            // set other information
            sbp_reconfig_custom_param.sbp_id = sim_sbp_id;
            sbp_reconfig_custom_param.ps_id = ps_id;
            sbp_reconfig_custom_param.is_in_dynamic_sbp = KAL_TRUE;

            nvram_custom_config_sbp(&sbp_reconfig_custom_param);

            for (i=0; i< num_of_dsbp_tbl; i++)
            {
                /* Only handle RECONFIG_IMS_CHANGE type */
                if ((sbp_reconfigure_mod_info_tbl[i].reconfig_type & RECONFIG_DSBP_CHANGE_ALL) == 0)
                {
                    continue;
                }

                /* Check if Gemini module and right protocol id */
                if ((sbp_reconfigure_mod_info_tbl[i].gemini_check & CFG_MASK_MOD) == CFG_SINGLE_MOD)
                {
                    if (ps_id != PROTOCOL_1)
                    {
                        continue;
                    }
                }
                // Check the numbers of GEMINI_LTE that this module supports:
                else if ((sbp_reconfigure_mod_info_tbl[i].gemini_check & CFG_MASK_MOD) == CFG_GEMINI_LTE_MOD)
                {
                    if (ps_id >= MAX_LTE_NUM)
                    {
                        continue;
                    }
                }

                if (sbp_reconfigure_mod_info_tbl[i].custom_func_ptr != NULL)
                {
                    sbp_reconfigure_mod_info_tbl[i].custom_func_ptr(&sbp_reconfig_custom_param);
                }

            }
        }
    }

    nvram_custom_config_sbp_by_model_id(md_product_model_id);
}

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
kal_bool custom_nvram_set_sbp_id(kal_uint32 sbp_id, kal_bool is_in_dynamic_sbp, kal_uint8 *imsi, protocol_id_enum ps_id)
{
    sbp_reconfig_custom_param_struct sbp_reconfig_custom_param;

    sbp_reconfig_custom_param.sbp_id = sbp_id;
    sbp_reconfig_custom_param.sbp_sub_id = sbp_query_sub_id();
    sbp_reconfig_custom_param.is_in_dynamic_sbp = is_in_dynamic_sbp;   
    sbp_reconfig_custom_param.ps_id = ps_id;

    kal_mem_set(sbp_reconfig_custom_param.mcc, 0, MAX_MCC_STR_LEN);
    kal_mem_set(sbp_reconfig_custom_param.mnc, 0, MAX_MNC_STR_LEN);
    kal_mem_set(sbp_reconfig_custom_param.iccid, 0, 21);
    sbp_reconfig_custom_param.trans_id = 0;  // operation not related to SIM card, use 0

    if (sbp_id != SBP_ID_INVALID && ps_id != PROTOCOL_1)
    {
        /* For Dual IMS, IMC/LTECSR/VDM/SDM has multiple record in NV LID */
    #ifdef __VOLTE_SUPPORT__
        #ifdef __MULTIPLE_IMS_SUPPORT__
        nvram_custom_config_ltecsr_profile(&sbp_reconfig_custom_param);
        #endif
        nvram_custom_config_vdm_ads_profile(&sbp_reconfig_custom_param); 
        nvram_custom_config_sdm_ads_profile(&sbp_reconfig_custom_param);
    #endif
    #if defined (__MOD_IMC__)
        #ifdef __MULTIPLE_IMS_SUPPORT__
        if(sbp_id != 0){
            nvram_custom_config_ims_profile(&sbp_reconfig_custom_param);
        }
        #endif
    #endif
        nvram_custom_config_iwlan_profile(&sbp_reconfig_custom_param);
        nvram_custom_config_wo_profile(&sbp_reconfig_custom_param);

    #ifdef __GEMINI_LTE__
        if ((ps_id-PROTOCOL_1)< MAX_LTE_NUM) //PROTOCOL_1 : 0x00
        {           
        #ifdef __LTE_RAT__
            nvram_custom_config_errc_para(&sbp_reconfig_custom_param);
            nvram_custom_config_lte_pref(&sbp_reconfig_custom_param);
        #endif /* __LTE_RAT__ */
        }
    #endif /* __GEMINI_LTE__ */

        nvram_custom_config_l4c_dsbp_profile(&sbp_reconfig_custom_param);
    }
    else if (sbp_id != SBP_ID_INVALID && ps_id == PROTOCOL_1)
    {
    #ifdef __LTE_RAT__
        /* update ERRC parameters */
        nvram_custom_config_errc_para(&sbp_reconfig_custom_param);
        nvram_custom_config_lte_pref(&sbp_reconfig_custom_param);
        /* Update EL1C parameter for only PROTOCOL_1 - Only one copy */
        nvram_custom_config_el1c_para(&sbp_reconfig_custom_param);
    #endif          
    
    #ifdef __VOLTE_SUPPORT__
        nvram_custom_config_vdm_ads_profile(&sbp_reconfig_custom_param); 
        nvram_custom_config_sdm_ads_profile(&sbp_reconfig_custom_param); 
        nvram_custom_config_ltecsr_profile(&sbp_reconfig_custom_param); 
    #endif
        nvram_custom_config_iwlan_profile(&sbp_reconfig_custom_param);
        nvram_custom_config_wo_profile(&sbp_reconfig_custom_param);

    #if defined (__MOD_IMC__)
        if(sbp_id != 0)
        {
            nvram_custom_config_ims_profile(&sbp_reconfig_custom_param); 
        }
    #endif /* __MOD_IMC__ */

        nvram_custom_config_rrc_dynamic_cap(&sbp_reconfig_custom_param);
        nvram_custom_config_rrc_band_priority_order(&sbp_reconfig_custom_param);
        //nvram_custom_config_e911_profile(&sbp_reconfig_custom_param);
        nvram_custom_config_mscap(&sbp_reconfig_custom_param);
        nvram_custom_config_regional_phone_mode(&sbp_reconfig_custom_param);
        nvram_custom_config_l4c(&sbp_reconfig_custom_param);
        nvram_custom_config_l4c_dsbp_profile(&sbp_reconfig_custom_param);
#ifdef __BIP_SUPPORT__
        nvram_custom_config_bip_profile(&sbp_reconfig_custom_param);
#endif
    }
    else
    {
        return KAL_FALSE;
    }
    
    return KAL_TRUE;
    
}


/*****************************************************************************
 * FUNCTION
 *  custom_reset_nvram_lids
 * DESCRIPTION
 *  This function will reset nvram parameters to the default value for the lids present in the table nvram_lid_reset_func_tbl
 *  please don't use this API  if you don't get the permission from SBP FPM.
 * PARAMETERS
 *   SBP ID: this is the new sbp_id received from the CCCI
 * RETURNS
 *****************************************************************************/
void custom_reset_nvram_lids(kal_uint32 sbp_id)
{
    kal_uint8 table_size = 0, table_size_new = 0, i = 0;
    protocol_id_enum ps_id;

    old_default_sbp_id = sbp_query_id();

    /* This Prompt trace is for Testing Purpose and will be omitted in MAIN branch Check-in*/
    //kal_prompt_trace(MOD_SBP, "Old SBP_ID = %d , New SBP_ID = %d", old_default_sbp_id, sbp_id);

    if(old_default_sbp_id != sbp_id)
    {
        table_size = sizeof(nvram_lid_reset_func_tbl)/sizeof(SBP_RESET_NVRAM_LID);
        table_size_new = sizeof(nvram_lid_reset_with_new_sbp_id_func_tbl)/sizeof(SBP_RESET_NVRAM_LID);

        for (ps_id = PROTOCOL_1; ps_id < MAX_SIM_NUM ; ps_id++)
        {
            for(i = 0; i < table_size; i++)
            {
                nvram_lid_reset_func_tbl[i](old_default_sbp_id, ps_id);
            }
        }

        // Reset functions using new CCCI sbp id
        for (ps_id = PROTOCOL_1; ps_id < MAX_SIM_NUM ; ps_id++)
        {
            for(i = 0; i < table_size_new; i++)
            {
                nvram_lid_reset_with_new_sbp_id_func_tbl[i](sbp_id, ps_id);
            }
        }
    }
}

/*****************************************************************************
 * FUNCTION
 *  nvram_custom_reset_sample_para
 * DESCRIPTION
 *  Sample function to reset nvram parameters to the default value.
 * PARAMETERS
 *   sbp_id   SBP ID from CCCI
 * RETURNS
 *****************************************************************************/
void nvram_custom_reset_sample_para(kal_uint32 sbp_id, protocol_id_enum ps_id)
{
    // sample function, remove when reset table is not empty
    return;
}
