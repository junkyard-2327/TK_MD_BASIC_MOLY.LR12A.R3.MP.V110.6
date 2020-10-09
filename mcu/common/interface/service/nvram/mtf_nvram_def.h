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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __MTF_NVRAM_DEF_H__
#define __MTF_NVRAM_DEF_H__

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 


#include "nvram_defs.h"
#include "nvram_enums.h"


// LID Enums
    /********************************************
     *
     *  MTF Item
     *
     **********************************************/
typedef enum
{
        NVRAM_EF_MTF_START                   = NVRAM_LID_GRP_MTF(0),
        NVRAM_EF_MTF_DMF_MISC_STATISTICS_LID  = NVRAM_EF_MTF_START,
        NVRAM_EF_MTF_DMF_KPI_STATISTICS_LID,
        NVRAM_EF_MTF_DMF_CUSTOM_KPI_STATISTICS_LID,
        
        NVRAM_EF_MTF_LAST_LID        = NVRAM_LID_GRP_MTF(63)
}nvram_lid_mtf_enum;

// VERNO

#define NVRAM_EF_MTF_DMF_MISC_STATISTICS_LID_VERNO              "001"
#define NVRAM_EF_MTF_DMF_KPI_STATISTICS_LID_VERNO				"000"
#define NVRAM_EF_MTF_DMF_CUSTOM_KPI_STATISTICS_LID_VERNO		"000"



// Size and Total 

typedef struct
{
    kal_uint32  lte_attach_request_count;
    kal_uint32  lte_attach_accept_count;
    kal_uint32  lte_attach_reject_count;
    kal_uint32  lte_attach_3410_expiry_count;
    kal_uint32  non_ims_pdp_request_count;
    kal_uint32  non_ims_pdp_accept_count;
    kal_uint32  non_ims_pdp_reject_count;
    kal_uint32  non_ims_pdp_t3380_expiry_count;
    kal_uint32  ims_pdp_request_count;
    kal_uint32  ims_pdp_accept_count;
    kal_uint32  ims_pdp_reject_count;
    kal_uint32  ims_pdp_t3380_expiry_count;
    kal_uint32  non_ims_pdn_request_count;
    kal_uint32  non_ims_pdn_success_count;
    kal_uint32  non_ims_pdn_reject_count;
    kal_uint32  non_ims_pdn_t3482_expiry_count;
    kal_uint32  ims_pdn_request_count;
    kal_uint32  ims_pdn_success_count;
    kal_uint32  ims_pdn_reject_count;
    kal_uint32  ims_pdn_t3482_expiry_count; 

    kal_uint32  non_data_sim_paging_count;
    kal_uint32  non_data_sim_paging_for_volte_count;
    kal_uint32  non_data_sim_paging_for_sms_count;
    kal_uint32  non_data_sim_paging_for_detach_count;
    kal_uint32  non_data_sim_paging_fail_count;
    kal_uint32  non_data_sim_paging_for_others_count; 
   
} nvram_ef_mtf_dmf_misc_statistics_struct;

#define NVRAM_EF_MTF_DMF_MISC_STATISTICS_SIZE         sizeof(nvram_ef_mtf_dmf_misc_statistics_struct) 
#define NVRAM_EF_MTF_DMF_MISC_STATISTICS_TOTAL        (1 * NVRAM_DUAL_RECORD)

// Size and Total 
typedef struct
{
    kal_uint32  lte_attach_req_cnt;
    kal_uint32  lte_attach_succ_cnt;
    kal_uint32  lte_attach_fail_cnt;
	kal_uint32  act_default_eps_bearer_req_cnt;
    kal_uint32  act_default_eps_bearer_accept_cnt;
	kal_uint32  act_default_eps_bearer_reject_cnt;
	kal_uint32  srvcc_ho_req_cnt;
	kal_uint32  srvcc_ho_succ_cnt;
	kal_uint32  srvcc_ho_fail_cnt;
	
	kal_uint32 initial_ims_reg_req_cnt;
	kal_uint32 initial_ims_reg_req_with_401_rsp_cnt;
	kal_uint32 initial_ims_reg_req_with_auc_cnt;
	kal_uint32 initial_ims_reg_success_cnt;
	
	kal_uint32 initial_volte_call_rsp_cnt;
	kal_uint32 final_volte_call_rsp_cnt;
	kal_uint32 initial_volte_call_drop_cnt;
	kal_uint32 final_volte_call_drop_cnt;
	
	kal_uint32 initial_mo_volte_call_req_cnt;
	kal_uint32 initial_mo_volte_call_connect_to_nw_cnt;
	kal_uint32 mo_volte_call_early_release_cnt;
	kal_uint32 mo_volte_call_with_403_cnt;
	kal_uint32 mo_volte_call_with_486_cnt; 
	kal_uint32 mo_volte_call_with_480_cnt;
	kal_uint32 mo_volte_call_with_484_cnt;
	kal_uint32 mo_volte_call_with_600_cnt;
	kal_uint32 mo_volte_call_with_604_cnt;
	kal_uint32 mo_volte_call_with_487_cnt;
	
	kal_uint32 initial_mt_volte_call_req_cnt;
	kal_uint32 mt_volte_call_connect_success_cnt;
	kal_uint32 mt_volte_call_early_release_cnt;
	kal_uint32 mt_volte_call_with_486_cnt;
	kal_uint32 mt_volte_call_with_403_cnt;
	kal_uint32 mt_volte_call_with_480_cnt;
	kal_uint32 mt_volte_call_with_484_cnt;
	kal_uint32 mt_volte_call_with_600_cnt;
	kal_uint32 mt_volte_call_with_604_cnt;
	kal_uint32 mt_volte_call_with_487_cnt;
   
} nvram_ef_mtf_dmf_kpi_statistics_struct;
#define NVRAM_EF_MTF_DMF_KPI_STATISTICS_SIZE         sizeof(nvram_ef_mtf_dmf_kpi_statistics_struct) 
#define NVRAM_EF_MTF_DMF_KPI_STATISTICS_TOTAL        (1 * NVRAM_DUAL_RECORD)


typedef struct
{
    kal_uint32  lte_attach_req_cnt;
    kal_uint32  lte_attach_succ_cnt;
    kal_uint32  lte_attach_fail_with_cause2_cnt;
	kal_uint32  lte_attach_fail_with_cause3_cnt;
	kal_uint32  lte_attach_fail_with_cause6_cnt;
	kal_uint32  lte_attach_fail_with_cause7_cnt;
	kal_uint32  lte_attach_fail_with_cause8_cnt;
	kal_uint32  lte_attach_fail_with_cause11_cnt;
	kal_uint32  lte_attach_fail_with_cause12_cnt;
	kal_uint32  lte_attach_fail_with_cause13_cnt;
	kal_uint32  lte_attach_fail_with_cause14_cnt;
	kal_uint32  lte_attach_fail_with_cause15_cnt;
	kal_uint32  lte_attach_fail_with_cause16_cnt;
	kal_uint32  lte_attach_fail_with_cause17_cnt;
	kal_uint32  lte_attach_fail_with_cause18_cnt;
	kal_uint32  lte_attach_fail_with_cause22_cnt;
	kal_uint32  lte_attach_fail_with_cause25_cnt;
	kal_uint32  lte_attach_fail_with_cause35_cnt;
	kal_uint32  lte_attach_fail_with_cause42_cnt;

	
	kal_uint32  act_default_eps_bearer_req_cnt;
    kal_uint32  act_default_eps_bearer_accept_cnt;
	kal_uint32  act_default_eps_bearer_reject_cnt;
	kal_uint32  srvcc_ho_req_cnt;
	kal_uint32  srvcc_ho_succ_cnt;
	kal_uint32  srvcc_ho_fail_cnt;

	kal_uint32 initial_ims_reg_req_cnt;
	kal_uint32 initial_ims_reg_req_with_401_rsp_cnt;
	kal_uint32 initial_ims_reg_req_with_auc_cnt;
	kal_uint32 initial_ims_reg_success_cnt;
	
	kal_uint32 initial_volte_call_rsp_cnt;
	kal_uint32 final_volte_call_rsp_cnt;
	kal_uint32 initial_volte_call_drop_cnt;
	kal_uint32 final_volte_call_drop_cnt;
	
	kal_uint32 initial_mo_volte_call_req_cnt;
	kal_uint32 initial_mo_volte_call_connect_to_nw_cnt;
	kal_uint32 mo_volte_call_early_release_cnt;
	kal_uint32 mo_volte_call_with_403_cnt;
	kal_uint32 mo_volte_call_with_486_cnt; 
	kal_uint32 mo_volte_call_with_480_cnt;
	kal_uint32 mo_volte_call_with_484_cnt;
	kal_uint32 mo_volte_call_with_600_cnt;
	kal_uint32 mo_volte_call_with_604_cnt;
	kal_uint32 mo_volte_call_with_487_cnt;
	
	kal_uint32 initial_mt_volte_call_req_cnt;
	kal_uint32 mt_volte_call_connect_success_cnt;
	kal_uint32 mt_volte_call_early_release_cnt;
	kal_uint32 mt_volte_call_with_486_cnt;
	kal_uint32 mt_volte_call_with_403_cnt;
	kal_uint32 mt_volte_call_with_480_cnt;
	kal_uint32 mt_volte_call_with_484_cnt;
	kal_uint32 mt_volte_call_with_600_cnt;
	kal_uint32 mt_volte_call_with_604_cnt;
	kal_uint32 mt_volte_call_with_487_cnt;
   
} nvram_ef_mtf_dmf_custom_kpi_statistics_struct;
#define NVRAM_EF_MTF_DMF_CUSTOM_KPI_STATISTICS_SIZE         sizeof(nvram_ef_mtf_dmf_custom_kpi_statistics_struct) 
#define NVRAM_EF_MTF_DMF_CUSTOM_KPI_STATISTICS_TOTAL        (1 * NVRAM_DUAL_RECORD)



#ifdef __cplusplus
}
#endif 

#endif /* __L4_NVRAM_DEF_H__ */ 
