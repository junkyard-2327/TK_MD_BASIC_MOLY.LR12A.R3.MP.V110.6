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
 * CUSTOM_TCM_CONFIG.H
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

#ifndef _CUSTOM_TCM_CONFIG_H
#define _CUSTOM_TCM_CONFIG_H

/** kal */
#include "kal_general_types.h"

/** enum */
#include "nvram_editor_data_item.h"
#include "sim_exported_enum.h"

/** struct */

/** Macros */

/* Note: BASIC projects would have NVRAM_NOT_PRESENT but still build custom files. */
#ifdef __PS_SERVICE__ 
kal_bool                 custom_tcm_qos_is_supported(void) ; 
kal_bool                 custom_tcm_qos_is_testing(void)   ; 
nvram_ef_sic_result_enum custom_tcm_qos_offed(void)        ; 
nvram_ef_sic_result_enum custom_tcm_qos_testing(void)      ; 

kal_bool                 custom_tcm_pdnReqType_is_supported(void) ;
kal_bool                 custom_tcm_pdnReqType_is_testing(void)   ;  
nvram_ef_sic_result_enum custom_tcm_pdnReqType_offed(void)        ;
nvram_ef_sic_result_enum custom_tcm_pdnReqType_testing(void)      ;

kal_bool                 custom_tcm_v4AddrAlloc_is_supported(void) ;
kal_bool                 custom_tcm_v4AddrAlloc_is_testing(void)   ;
nvram_ef_sic_result_enum custom_tcm_v4AddrAlloc_offed(void)        ;
nvram_ef_sic_result_enum custom_tcm_v4AddrAlloc_testing(void)      ;

kal_bool                 custom_tcm_v4dns_is_supported(void) ;
kal_bool                 custom_tcm_v4dns_is_testing(void)   ;
nvram_ef_sic_result_enum custom_tcm_v4dns_offed(void)        ;
nvram_ef_sic_result_enum custom_tcm_v4dns_testing(void)      ;

kal_bool                 custom_tcm_v4mtu_is_supported(void) ;
kal_bool                 custom_tcm_v4mtu_is_testing(void)   ;
nvram_ef_sic_result_enum custom_tcm_v4mtu_offed(void)        ;
nvram_ef_sic_result_enum custom_tcm_v4mtu_testing(void)      ;

kal_bool                 custom_tcm_bcm_is_supported(protocol_id_enum ps_id) ;
kal_bool                 custom_tcm_bcm_is_testing(void)   ;
nvram_ef_sic_result_enum custom_tcm_bcm_offed(void)        ;
nvram_ef_sic_result_enum custom_tcm_bcm_testing(void)      ;

kal_bool                 custom_tcm_etft_is_supported(void) ;
kal_bool                 custom_tcm_etft_is_testing(void)   ;
nvram_ef_sic_result_enum custom_tcm_etft_offed(void)        ;
nvram_ef_sic_result_enum custom_tcm_etft_testing(void)      ;

/* ALPS03016139 */
#define END_OF_CUSTOM_TCM_IGNORE_PCSCF_DISCOVERY_IN_SIM_PLMNS "FFFFFF"
extern const kal_char *CUSTOM_TCM_IGNORE_PCSCF_DISCOVERY_IN_SIM_PLMNS[] ;
#endif /* __PS_SERVICE__ */

#endif /* _CUSTOM_TCM_CONFIG_H */
