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
 * RMMI_PS.H
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   This file is intends for ...
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/
#ifndef _RMMI_PS_H
#define _RMMI_PS_H

#include "l4c_sendmsg.h"

/* AT Set Mode Utility */
#define AT_SET_MODE_CID_ASSIGN_VALUE_OR_RETURN_IF_NOT_OK(variable, paramName, err_cause)\
    AT_SET_MODE_ASSIGN_VALUE_OR_RETURN_IF_NOT_OK(variable, paramName, err_cause) \
    if (L4C_CONTEXT_ID_IS_INVALID(variable)) \
    { \
        kal_brief_trace(TRACE_INFO, WARNING_C2K_INVALID_CONTEXT_ID); \
        *err_cause = L4C_AT_CMD_CID_UNEXPECTED; \
        return KAL_FALSE; \
    }

#define AT_SET_MODE_CID_ASSIGN_VALUE_OR_BREAK_IF_NOT_OK(variable, paramName, err_cause, ret_val)\
    AT_SET_MODE_ASSIGN_VALUE_OR_BREAK_IF_NOT_OK(variable, paramName, err_cause, ret_val) \
    if (L4C_CONTEXT_ID_IS_INVALID(variable)) \
    { \
        kal_brief_trace(TRACE_INFO, WARNING_C2K_INVALID_CONTEXT_ID); \
        *err_cause = L4C_AT_CMD_CID_UNEXPECTED; \
        ret_val = KAL_FALSE; \
        break; \
    }


#define AT_SET_MODE_ASSIGN_VALUE_OR_RETURN_IF_NOT_OK(variable, paramName, err_cause)\
    if (param_ptr->paramName##_parse_result != AT_TOKEN_PARSE_RESULT_OK) \
    { \
        kal_brief_trace(TRACE_INFO, INFO_L4C_PS_DEBUG_PARSE_RESULT_ERROR, #paramName); \
        *err_cause = L4C_AT_CMD_INVALID_PARAMETER_OR_MISSING; \
        return KAL_FALSE; \
    } \
    else \
    { \
        variable = param_ptr->paramName; \
    }

#define AT_SET_MODE_ASSIGN_VALUE_OR_BREAK_IF_NOT_OK(variable, paramName, err_cause, ret_val)\
    if (param_ptr->paramName##_parse_result != AT_TOKEN_PARSE_RESULT_OK) \
    { \
        kal_brief_trace(TRACE_INFO, INFO_L4C_PS_DEBUG_PARSE_RESULT_ERROR, #paramName); \
        *err_cause = L4C_AT_CMD_INVALID_PARAMETER_OR_MISSING; \
        ret_val = KAL_FALSE; \
        break; \
    } \
    else \
    { \
        variable = param_ptr->paramName; \
    }


#define AT_SET_MODE_ASSIGN_VALUE_OR_DEFAULT(variable, paramName, default_value)\
    if (param_ptr->paramName##_parse_result == AT_TOKEN_PARSE_RESULT_NOT_FOUND) \
    { \
        variable = default_value; \
    } \
    else \
    { \
        variable = param_ptr->paramName; \
    }

#define AT_SET_MODE_ASSIGN_STRING_OR_RETURN_IF_NOT_OK(string, paramName, length, err_cause)\
    if (param_ptr->paramName##_parse_result == AT_TOKEN_PARSE_RESULT_OK) \
    { \
        memcpy(string, param_ptr->paramName, length); \
    } \
    else if (param_ptr->paramName##_parse_result == AT_TOKEN_PARSE_RESULT_NULL_STRING)\
    { \
        kal_mem_set(string, 0, length); \
    } \
    else \
    { \
        kal_brief_trace(TRACE_INFO, INFO_L4C_PS_DEBUG_PARSE_RESULT_ERROR, #paramName); \
        *err_cause = L4C_AT_CMD_INVALID_PARAMETER_OR_MISSING; \
        return KAL_FALSE; \
    }

#define AT_SET_MODE_ASSIGN_STRING_AND_SET_INIT_IF_NOTFOUND_OR_NULL(string, paramName, length)\
    if (param_ptr->paramName##_parse_result == AT_TOKEN_PARSE_RESULT_OK) \
    { \
        memcpy(string, param_ptr->paramName, length); \
    } \
    else \
    { \
        kal_mem_set(string, 0, length); \
    }    

/* AT Read Mode Utility */
#define AT_READ_MODE_INT_PARAM_PRESENT_AND_SET_VALUE(paramName, value)\
    msg_ptr->paramName##_present = KAL_TRUE; \
    msg_ptr->paramName = (kal_uint32) value;

#define AT_READ_MODE_STR_PARAM_PRESENT_AND_SET_VALUE(paramName, value, length)\
    msg_ptr->paramName##_present = KAL_TRUE; \
    memcpy(msg_ptr->paramName, value, length);

#define AT_READ_MODE_ADDR_PARAM_PRESENT_AND_SET_VALUE(paramName, value, length)\
    msg_ptr->paramName##_present = KAL_TRUE; \
    msg_ptr->paramName.len = (pdp_addr_len_enum)length; \
    memcpy(msg_ptr->paramName.val, value, length);

#define AT_READ_MODE_ADDR_AND_MASK_PARAM_PRESENT_AND_SET_VALUE(paramName, value, length)\
    msg_ptr->paramName##_present = KAL_TRUE; \
    msg_ptr->paramName.len = (pdp_addr_len_enum)length; \
    memcpy(msg_ptr->paramName.val, value, length);

#define AT_READ_MODE_PARAM_NOT_PRESENT(paramName)\
    msg_ptr->paramName##_present = KAL_FALSE;

/* Construct & Send ILM Utility */
#define CONSTRUCT_ILM(l4bpdnL4cStruct, atStruct)\
        l4bpdnL4cStruct *l4bpdn_l4c_msg_ptr; \
        atStruct *msg_ptr; \
        l4bpdn_l4c_msg_ptr = (l4bpdnL4cStruct*) \
            construct_local_para((kal_uint16) sizeof(l4bpdnL4cStruct), TD_RESET); \
        msg_ptr = &(l4bpdn_l4c_msg_ptr->cmd);

#if defined(__SENSITIVE_DATA_MOSAIC__)        
#define SET_SENSITIVE_BUFF_IN_CONSTRUCTED_ILM()\
        kal_set_sensitive_buff(l4bpdn_l4c_msg_ptr);
#endif

#define FREE_UNUSED_CONSTRUCTED_ILM()\
        free_local_para((local_para_struct *)l4bpdn_l4c_msg_ptr)

#if defined(__SENSITIVE_DATA_MOSAIC__)
#define L4C_SEND_ILM(l4c_src_id, L4bpdnL4cMsgID)\
        msg_ptr->src_id = (kal_uint32)l4c_ps_map_l4c_src_id_to_ddm_src_id(l4c_src_id); \
        l4c_send_ps_msg_to_l4bpdn(L4_MODULE(MOD_L4BPDN, (l4c_current_mod_id - MOD_L4C)), L4bpdnL4cMsgID, L4BPDN_L4C_SAP, l4bpdn_l4c_msg_ptr, NULL);
#else  //defined(__SENSITIVE_DATA_MOSAIC__)
#define L4C_SEND_ILM(l4c_src_id, L4bpdnL4cMsgID)\
        msg_ptr->src_id = (kal_uint32)l4c_ps_map_l4c_src_id_to_ddm_src_id(l4c_src_id); \
        l4c_send_msg(L4_MODULE(MOD_L4BPDN, (l4c_current_mod_id - MOD_L4C)), L4bpdnL4cMsgID, L4BPDN_L4C_SAP, l4bpdn_l4c_msg_ptr, NULL);
#endif  //defined(__SENSITIVE_DATA_MOSAIC__) 
#endif 

