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
 * l4c_mbms_msg.h
 *
 * Project:
 * --------
 * UMOLY
 *
 * Description:
 * ------------
 * The header file of MBMS message handler functions in L4C.
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
 *
 * removed!
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/****************************************************************************/
/*! @file l4c_mbms_msg.h
    @author Stan Chen
    @date 11 JUL 2014

    @brief The header file of MBMS message handler functions in L4C.

    In L4 current design, the indications from sub-modules are message based.
    L4C handles incoming ilm in this file. But MBMSAL sub-module is designed
    as simplicity, functional invocation is used here.

    The APIs, including URC sending and confirmation handling, are defined
    in this header file.
*/
/****************************************************************************/

#ifndef _L4C_MBMS_MSG_H
#define _L4C_MBMS_MSG_H
/****************************************************************************/

#include "kal_public_api.h"
#include "kal_general_types.h"
#include "mbmsal_defs.h"

/****************************************************************************/
/*! @brief The confirmation handler of binding MBMS host interface.

    @param[in] p_context A pointer to a MBMSAL context.
    @param[in] p_info A pointer to a responding information.
    @since UMOLY
*/
/****************************************************************************/
extern void l4c_mbms_exe_bind_hif_cnf( mbmsal_context *p_context,
    kal_bool result );

/****************************************************************************/
/*! @brief

    @param[in] p_context A pointer to a MBMSAL context.
    @param[in] p_info A pointer to URC information struct.
    @since UMOLY
*/
/****************************************************************************/
extern void l4c_mbms_urc_coverage_status_ind( mbmsal_context *p_context,
    mbms_sib13_info *p_info );

/****************************************************************************/
/*! @brief

    @param[in] p_context A pointer to a MBMSAL context.
    @param[in] p_info A pointer to URC information struct.
    @since UMOLY
*/
/****************************************************************************/
extern void l4c_mbms_urc_frequency_status_ind( mbmsal_context *p_context,
    mbms_sib13_info *p_info );

/****************************************************************************/
/*! @brief

    @param[in] p_context A pointer to a MBMSAL context.
    @param[in] p_info A pointer to URC information struct.
    @since UMOLY
*/
/****************************************************************************/
extern void l4c_mbms_urc_sai_lists_ind( mbmsal_context *p_context,
    mbms_sib15_info *p_info );

/****************************************************************************/
/*! @brief

    @param[in] p_context A pointer to a MBMSAL context.
    @param[in] p_info A pointer to URC information struct.
    @param[in] output_sess Forcibly output sessions or not.
    @since UMOLY
*/
/****************************************************************************/
extern void l4c_mbms_urc_session_list_ind( mbmsal_context *p_context,
    mbms_sib13_info *p_info, kal_bool output_sess );

/****************************************************************************/
/*! @brief

    @param[in] p_context A pointer to a MBMSAL context.
    @param[in] p_info A pointer to URC information struct.
    @since UMOLY
*/
/****************************************************************************/
extern void l4c_mbms_urc_session_status_ind( mbmsal_context *p_context,
    mbms_servsess_info *p_info );

/****************************************************************************/
#endif /* _L4C_MBMS_MSG_H */
