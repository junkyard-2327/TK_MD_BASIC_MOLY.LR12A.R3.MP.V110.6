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
 * phb_ilm.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This is startup handler of PHB module.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
//#include "kal_release.h"        /* Basic data type */
#include "md_sap.h"
#include "svc_sap.h"
#include "drv_msgid.h"

//#include "stack_common.h"
//#include "stack_msgs.h"
//#include "stack_ltlcom.h" /* Task message communiction */
//#include "syscomp_config.h"
#include "task_config.h"        /* Task creation */
//#include "app_buff_alloc.h"     /* Declaration of buffer management API */

#include "kal_trace.h"
#include "phb_trc.h"

//#include "sim_common_enums.h"
// #include "nvram_editor_data_item.h"
//#include "custom_nvram_editor_data_item.h"

//#include "l4_common.h"
//#include "ps2sim_struct.h"

//#include "l4c2phb_enums.h"
//#include "l4c2phb_struct.h"

#include "phb_defs.h"
//#include "phb_control_block.h"

//#include "phb_ilm.h"
#include "phb_utils.h"

/* For alignment macro */
//#include "phb_sap.h"

#include "kal_general_types.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "kal_public_api.h"

#undef  _FILE_CODE_
#define _FILE_CODE_ _PHB_ILM_C_


/*****************************************************************************
 * FUNCTION
 *  phb_send_ilm
 * DESCRIPTION
 *  This is phb_send_ilm function of PHB module.
 * PARAMETERS
 *  dest_id             [IN]        
 *  msg_id              [IN]        
 *  local_param_ptr     [?]         
 *  peer_buf_ptr        [?]         
 *  ilm_ptr(?)          [IN]        The primitives
 * RETURNS
 *  void
 *****************************************************************************/
void phb_send_ilm(module_type dest_id, kal_uint16 msg_id, void *local_param_ptr, void *peer_buf_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    sap_type sap;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, FUNC_PHB_SEND_ILM);

    switch (dest_id)
    {
        case MOD_SIM:
            dest_id = (module_type) (MOD_SIM + phb_which_sim_ex());
            sap = PS_SIM_SAP;
            break;
            
        case MOD_NVRAM:
            sap = PS_NVRAM_SAP;
            break;
            
	case MOD_CVAL:
	case MOD_CVAL_ATC:
             sap = CVAL_PHB_SAP;
	     break;
            
        case MOD_L4C:
            dest_id = (module_type) (MOD_L4C + phb_which_sim_ex());
        default:
            sap = PHB_L4C_SAP;
            break;
    }
    
#if defined(__GEMINI__) || defined(GEMINI_PLUS) || defined(__SGLTE__)
    msg_send6(phb_current_mod, dest_id, sap, msg_id, local_param_ptr, peer_buf_ptr);
#else
    msg_send6(MOD_PHB, dest_id, sap, msg_id, local_param_ptr, peer_buf_ptr);
#endif
}   /* End of phb_send_ilm */

#if defined(__SGLTE__)
void phb_send_ilm2(module_type src_id, module_type dest_id, kal_uint16 msg_id, void *local_param_ptr, void *peer_buf_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, FUNC_PHB_SEND_ILM);

    msg_send6(src_id, dest_id, PHB_L4C_SAP, msg_id, local_param_ptr, peer_buf_ptr);
}   /* End of phb_send_ilm */
#endif /* defined(__SGLTE__) */
#if defined(__CDMA2000_RAT__)
void phb_send_cdma_ilm(module_type dest_id, kal_uint16 msg_id, void *local_param_ptr, void *peer_buf_ptr)
{
    /*----------------------------------------------------------------*/
    /* Local Variables                                                */
    /*----------------------------------------------------------------*/
    sap_type sap;

    /*----------------------------------------------------------------*/
    /* Code Body                                                      */
    /*----------------------------------------------------------------*/
    kal_trace(TRACE_FUNC, FUNC_PHB_SEND_CDMA_ILM);

      dest_id = (module_type) (MOD_UIM + phb_which_sim_ex());
      sap = PS_CUIM_SAP;
    
	  #if defined(__GEMINI__) || defined(GEMINI_PLUS) || defined(__SGLTE__)
      msg_send5(phb_current_mod, dest_id, sap, msg_id, local_param_ptr);
	  #else
      msg_send5(MOD_PHB, dest_id, sap, msg_id, local_param_ptr);
	  #endif
}   /* End of phb_send_ilm */
#endif

