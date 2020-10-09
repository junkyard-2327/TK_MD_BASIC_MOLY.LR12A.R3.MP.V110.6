/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2014
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
 * l4c_mbms_cmd.h
 *
 * Project:
 * --------
 * UMOLY
 *
 * Description:
 * ------------
 * The L4C command functions of MBMS
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *----------------------------------------------------------------------------
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
 *
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/****************************************************************************/
/*! @file l4c_mbms_cmd.h
    @author Stan Chen
    @date 11 JUL 2014

    @brief The header file of MBMS command functions.

    In L4 architecture, L4C is responsible to handle the function based
    requests from RMMI and LMMI. For simplicity, inline functions is used here
    to pass requests from RMMI directly.

    The only exception is +EMBIND. L4C SHOULD keep the src_id until receives
    confirmation from UPCM/MBMSAL.
*/
/****************************************************************************/

#ifndef _L4C_MBMS_CMD_H
#define _L4C_MBMS_CMD_H
/****************************************************************************/

#include "kal_public_api.h"
#include "kal_general_types.h"
#include "mbmsal_defs.h"
#include "mbmsal_hdlr.h"

/****************************************************************************/

INLINE_MODIFIER INLINE kal_bool l4c_mbms_exe_service_req( mbmsal_context *p_context,
    kal_uint8 src_id, kal_bool enable )
{
    return mbmsal_l4c_exe_service_req_hdlr( p_context, enable );
}

INLINE_MODIFIER INLINE kal_bool l4c_mbms_get_service_req( mbmsal_context *p_context,
    kal_uint8 src_id, mbms_config_req_info **p_info )
{
    return mbmsal_l4c_get_service_req_hdlr( p_context, p_info);
}

INLINE_MODIFIER INLINE kal_bool l4c_mbms_set_priority_req( mbmsal_context *p_context,
    kal_uint8 src_id, kal_bool mbms_pri )
{
    return mbmsal_l4c_set_priority_req_hdlr( p_context, mbms_pri);
}

INLINE_MODIFIER INLINE kal_bool l4c_mbms_get_priority_req( mbmsal_context *p_context,
    kal_uint8 src_id, mbms_config_req_info **pp_info )
{
    return mbmsal_l4c_get_priority_req_hdlr( p_context, pp_info );
}

INLINE_MODIFIER INLINE kal_bool l4c_mbms_set_coverage_subscription_req(
    mbmsal_context *p_context, kal_uint8 src_id, kal_bool enable )
{
    return mbmsal_l4c_set_coverage_subscription_req_hdlr( p_context, enable );
}

INLINE_MODIFIER INLINE kal_bool l4c_mbms_get_coverage_status_req( mbmsal_context *p_context,
    kal_uint8 src_id, mbms_sib13_info **pp_info )
{
    return mbmsal_l4c_get_coverage_status_req_hdlr( p_context, pp_info );
}

INLINE_MODIFIER INLINE kal_bool l4c_mbms_set_frequency_subscription_req(
    mbmsal_context *p_context, kal_uint8 src_id, kal_bool enable )
{
    return mbmsal_l4c_set_frequency_subscription_req_hdlr( p_context,
        enable );
}

INLINE_MODIFIER INLINE kal_bool l4c_mbms_get_frequency_status_req( mbmsal_context *p_context,
    kal_uint8 src_id, mbms_sib13_info **pp_info )
{
    return mbmsal_l4c_get_frequency_status_req_hdlr( p_context, pp_info );
}

INLINE_MODIFIER INLINE kal_bool l4c_mbms_set_sai_subscription_req( mbmsal_context *p_context,
    kal_uint8 src_id, kal_bool enable )
{
    return mbmsal_l4c_set_sai_subscription_req_hdlr( p_context, enable );
}

INLINE_MODIFIER INLINE kal_bool l4c_mbms_get_sai_lists_req( mbmsal_context *p_context,
    kal_uint8 src_id, mbms_sib15_info **pp_info )
{
    return mbmsal_l4c_get_sai_lists_req_hdlr( p_context, pp_info );
}

INLINE_MODIFIER INLINE kal_bool l4c_mbms_get_timestamp_info_req( mbmsal_context* p_context,
    kal_uint8 src_id, mbms_sib16_info **pp_info )
{
    return mbmsal_l4c_get_timestamp_info_req_hdlr( p_context, pp_info );
}

INLINE_MODIFIER INLINE kal_uint32 l4c_mbms_set_session_subscription_req(
    mbmsal_context *p_context, kal_uint8 src_id, kal_bool enable )
{
    return mbmsal_l4c_set_session_subscription_req_hdlr( p_context, enable );
}

INLINE_MODIFIER INLINE kal_uint32 l4c_mbms_get_session_list_req( mbmsal_context *p_context,
    kal_uint8 src_id, mbms_sib13_info **pp_info )
{
    return mbmsal_l4c_get_session_list_req_hdlr( p_context , pp_info );
}

INLINE_MODIFIER INLINE kal_bool l4c_mbms_exe_session_req( mbmsal_context *p_context,
    kal_uint8 src_id, mbms_config_req_info *p_info )
{
    return mbmsal_l4c_exe_session_req_hdlr( p_context, p_info );
}

INLINE_MODIFIER INLINE kal_bool l4c_mbms_get_session_status_req( mbmsal_context *p_context,
    kal_uint8 src_id, mbms_servsess_info **pp_info )
{
    return mbmsal_l4c_get_session_status_req_hdlr( p_context, pp_info );
}

extern kal_bool l4c_mbms_exe_bind_hif_req( mbmsal_context *p_context,
    kal_uint8 src_id, kal_bool enable, kal_uint8 l2p, kal_uint32 chid );

INLINE_MODIFIER INLINE kal_bool l4c_mbms_get_binded_hif_req( mbmsal_context *p_context,
    kal_uint8 src_id, mbms_binding_info **pp_info )
{
    return mbmsal_l4c_get_binded_hif_req_hdlr( p_context, pp_info );
}

INLINE_MODIFIER INLINE kal_bool l4c_mbms_exe_service_coverage_para_req( mbmsal_context *p_context,
    kal_uint8 src_id, mbmsal_config_para *p_para )
{
    return mbmsal_l4c_exe_service_coverage_para_req_hdlr( p_context, p_para );
}

INLINE_MODIFIER INLINE kal_bool l4c_mbms_get_service_coverage_para_req(
    mbmsal_context *p_context, kal_uint8 src_id, mbmsal_config_para **pp_para )
{
    return mbmsal_l4c_get_service_coverage_para_req_hdlr( p_context, pp_para );
}

INLINE_MODIFIER INLINE kal_bool l4c_mbms_exe_event_req( mbmsal_context *p_context,
    kal_uint8 src_id, mbmsal_event_para *p_para )
{
    return mbmsal_l4c_exe_event_req_hdlr( p_context, p_para );
}

INLINE_MODIFIER INLINE kal_uint32 l4c_mbms_set_session_configuration_req(
    mbmsal_context *p_context, kal_uint8 src_id, mbmsal_emsesscfg_para *p_para )
{
    return mbmsal_l4c_set_session_configuration_req_hdlr( p_context, p_para );
}

/****************************************************************************/
#endif /* _L4C_MBMS_CMD_H */

