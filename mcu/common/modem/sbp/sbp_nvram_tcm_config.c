/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2019
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
 * sbp_nvram_tcm_config.c
 *
 * Project:
 * --------
 *   GEN93
 *
 * Description:
 * ------------
 * This file contains functions which handle callbacks when SIM card/operator change.
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/


#include "kal_general_types.h"
#include "sbp_public_utility.h"
#include "kal_public_api.h"
#include "l4_msgid.h"
#include "md_sap.h"
#include "ps_public_struct.h"

#if UNIT_TEST
#define SBP_RECONFIGURE_SAP     DUMMY_SAP
#else
#define SBP_RECONFIGURE_SAP     L4C_ME_SAP
#endif /* UNIT_TEST*/

/*****************************************************************************
* FUNCTION
 *  nvram_custom_config_tcm_profile
 * DESCRIPTION
 * Handler of call back function for TCM module.
 * Message will be sent to TCM whenever SIM 
 * card/operator change.
 * PARAMETERS
 *  sbp_reconfig_custom_param_struct
 * RETURNS
 *  KAL_TRUE
 *****************************************************************************/
kal_bool nvram_custom_config_tcm_profile(sbp_reconfig_custom_param_struct *param_ptr)
{

    tcm_dsbp_reconfigure_ind_struct *tcm_dsbp_reconfig_ind = NULL;

    if (param_ptr == NULL) {
        return KAL_FALSE;
    }
    tcm_dsbp_reconfig_ind = (tcm_dsbp_reconfigure_ind_struct *)construct_local_para
                    (sizeof(tcm_dsbp_reconfigure_ind_struct), TD_RESET);

    kal_mem_cpy(&(tcm_dsbp_reconfig_ind->sbp_parameters), param_ptr, sizeof(sbp_reconfig_custom_param_struct));

    msg_send6(kal_get_active_module_id(),
              MOD_TCM + param_ptr->ps_id,
              SBP_RECONFIGURE_SAP,
              MSG_ID_TCM_DSBP_RECONFIGURE_IND,
              (local_para_struct *)tcm_dsbp_reconfig_ind,
              NULL);

	return KAL_TRUE;
}