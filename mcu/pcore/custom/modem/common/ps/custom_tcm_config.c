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
 * CUSTOM_TCM_CONFIG.C
 *
 * Project:
 * --------
 *   
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
 ****************************************************************************/

#include "custom_tcm_config.h"
#include "l4_ps_api.h"  // qos and GCF mode

/* Note: BASIC projects would have NVRAM_NOT_PRESENT but still build custom files. */
#ifdef __PS_SERVICE__ 

kal_bool                 custom_tcm_qos_is_supported(void) { return KAL_TRUE; }
kal_bool                 custom_tcm_qos_is_testing(void)   { return (query_ps_conf_test_mode() == PS_CONF_TEST_IOT); }
nvram_ef_sic_result_enum custom_tcm_qos_offed(void)        { return SIC_RESULT_QOS_R6; }
nvram_ef_sic_result_enum custom_tcm_qos_testing(void)      { return SIC_RESULT_QOS_R11; }

kal_bool                 custom_tcm_pdnReqType_is_supported(void) { return KAL_TRUE; }
kal_bool                 custom_tcm_pdnReqType_is_testing(void)   { return KAL_FALSE; }
nvram_ef_sic_result_enum custom_tcm_pdnReqType_offed(void)        { return SIC_RESULT_PDNREQTYPE_NOT_CARRY; }
nvram_ef_sic_result_enum custom_tcm_pdnReqType_testing(void)      { return SIC_RESULT_PDNREQTYPE_CAN_CARRY; }

kal_bool                 custom_tcm_v4AddrAlloc_is_supported(void) { return KAL_TRUE; }
kal_bool                 custom_tcm_v4AddrAlloc_is_testing(void)   { return (query_ps_conf_test_mode() == PS_CONF_TEST_IOT); }
nvram_ef_sic_result_enum custom_tcm_v4AddrAlloc_offed(void)        { return SIC_RESULT_V4ADDRALLOC_NONE; }
nvram_ef_sic_result_enum custom_tcm_v4AddrAlloc_testing(void)      { return SIC_RESULT_V4ADDRALLOC_VIA_NASSIG; }

kal_bool                 custom_tcm_v4dns_is_supported(void) { return KAL_TRUE; }         
kal_bool                 custom_tcm_v4dns_is_testing(void)   { return (query_ps_conf_test_mode() == PS_CONF_TEST_IOT); }        
nvram_ef_sic_result_enum custom_tcm_v4dns_offed(void)        { return SIC_RESULT_V4REQ_NONE; }
nvram_ef_sic_result_enum custom_tcm_v4dns_testing(void)      { return SIC_RESULT_V4REQ_DNSV4; }

kal_bool                 custom_tcm_v4mtu_is_supported(void) { return KAL_TRUE; }         
kal_bool                 custom_tcm_v4mtu_is_testing(void)   { return KAL_FALSE; }        
nvram_ef_sic_result_enum custom_tcm_v4mtu_offed(void)        { return SIC_RESULT_V4REQ_NONE; }
nvram_ef_sic_result_enum custom_tcm_v4mtu_testing(void)      { return SIC_RESULT_V4REQ_MTUV4; }

kal_bool custom_tcm_bcm_is_supported(protocol_id_enum ps_id) {
    if (sbp_query_md_feature_by_ps(SBP_DISABLE_MS_SUPPORT_OF_NETWORK_REQUESTED_BEARER_CONTROL_INDICATOR,ps_id) == KAL_TRUE)
    {
        return KAL_FALSE;
    }	
    else
    {
        return KAL_TRUE;
    } 
}
kal_bool custom_tcm_bcm_is_testing(void) {
    #ifdef __REL7__
    if (query_ps_conf_test_mode() == PS_CONF_TEST_IOT && (query_ps_conf_test_profile_setting() & IOT_TEST_ERICSSON))  {
        return KAL_TRUE ;
    } else if (query_ps_conf_test_mode() == PS_CONF_TEST_OPERATOR && 
                ((query_ps_conf_test_profile_setting() & OPERATOR_TEST_CU) ||
                 (query_ps_conf_test_profile_setting() & OPERATOR_TEST_VODAFONE) ||
                 (query_ps_conf_test_profile_setting() & OPERATOR_TEST_ATNT)
                )) {
        return KAL_TRUE ;
    } else 
    #endif /* __REL7__ */
    {
        return KAL_FALSE ;
    }
}
nvram_ef_sic_result_enum custom_tcm_bcm_offed(void)        { return SIC_RESULT_BCMETFT_NONE; }
nvram_ef_sic_result_enum custom_tcm_bcm_testing(void)      { return SIC_RESULT_BCMETFT_BCM; }

kal_bool                 custom_tcm_etft_is_supported(void) { return KAL_TRUE; }         
kal_bool                 custom_tcm_etft_is_testing(void)   { return (query_ps_conf_test_mode() == PS_CONF_TEST_IOT); }        
nvram_ef_sic_result_enum custom_tcm_etft_offed(void)        { return SIC_RESULT_BCMETFT_NONE; }
nvram_ef_sic_result_enum custom_tcm_etft_testing(void)      { return SIC_RESULT_BCMETFT_ETFT; }

/* ALPS03016139 */
/* If you DONT want to request P-CSCF PCO in roaming attach when some SIM is inserted, 
 * please add the SIM MCC-MNC in the below list 
 * - Note: The <p-cscf-discovery> setting by AT+CGDCONT would be ignored directly in roaming attach */
const kal_char *CUSTOM_TCM_IGNORE_PCSCF_DISCOVERY_IN_SIM_PLMNS[] = { 
    "26202", // MCC-MNC for VDF DE SIM 

    /* Add before this line. */
    END_OF_CUSTOM_TCM_IGNORE_PCSCF_DISCOVERY_IN_SIM_PLMNS
} ;

#endif /* __PS_SERVICE__ */
