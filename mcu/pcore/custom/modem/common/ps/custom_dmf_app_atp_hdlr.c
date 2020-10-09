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
 * custom_dmf_app_atp_hdlr.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is for encode/decode ATP AT/UTC
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by ClearCase. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Log$
 *
 * 11 04 2019 danny.kuo
 * [MOLY00456947] DMF功能新增??后modem reset
 * 	
 * 	.
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by ClearCase. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_public_defs.h"

#include "atp_dmf_struct.h"

#include "custom_dmf_app.h"

#define ATP_FIELD_TYPE(_PTR_, _INDEX_) _PTR_->field_list[_INDEX_].field_type
#define ATP_FIELD_VALUE(_PTR_, _INDEX_) _PTR_->field_list[_INDEX_].field_value
#define ATP_FIELD_LEN(_PTR_, _INDEX_) _PTR_->field_list[_INDEX_].field_len
#define ATP_FIELD_PTR(_PTR_, _INDEX_) _PTR_->field_list[_INDEX_].field_ptr

#define ATP_TEMP_BUF_SIZE (100)
#define ATP_MAX_URC_DATA_SIZE   (2048)

kal_uint16 custom_atp_get_sizeof_atp_mt_dmf_cmd_req_struct()
{
    return sizeof(atp_mt_dmf_cmd_req_struct);
}

kal_uint16 custom_atp_get_sizeof_atp_mt_dmf_cmd_cnf_struct()
{
    return sizeof(atp_mt_dmf_cmd_cnf_struct);
}

kal_uint16 custom_atp_get_sizeof_atp_mt_dmf_urc_ind_struct()
{
    return sizeof(atp_mt_dmf_urc_ind_struct);
}


kal_bool custom_atp_edmfapp_hdlr(atp_mt_dmf_cmd_req_struct *msg_ptr, atp_string_struct *source_string_ptr)
{
    kal_bool result = KAL_FALSE;
    kal_uint32 app_id = 0;
    kal_uint16 i=0;

    app_id = (kal_uint32) source_string_ptr->field_list[i].field_value;
    i++;

    // parse AT data according to APP ID    
    switch (app_id)    
    {        
        #define DMF_APP(APP_ID) \
        case APP_ID: \
        {        
            #define DMF_CMD_REQ(STRUCT_NAME, PARA_NAME) \
            STRUCT_NAME *pp = &(msg_ptr->p.PARA_NAME);

            #define  DMF_FIELD_VAR(VAR_TYPE, VAR_NAME, MAX_VAL) \
            if (ATP_FIELD_TYPE(source_string_ptr, i) != ATP_FIELD_TYPE_INT)\
            {\
                 result =  KAL_FALSE;\
                 break;\
            }\
            else\
            {\
                pp->VAR_NAME = (VAR_TYPE)ATP_FIELD_VALUE(source_string_ptr, i);\
                i++;\
            }

            #define  DMF_FIELD_VAR_O(VAR_TYPE, VAR_NAME, MAX_VAL) \
            if ((ATP_FIELD_TYPE(source_string_ptr, i) == ATP_FIELD_TYPE_EMPTY) || \
                (ATP_FIELD_TYPE(source_string_ptr, i) == ATP_FIELD_TYPE_INVALIDE)) \
            { \
                pp->VAR_NAME = 0;\
                pp->is_##VAR_NAME##_present = KAL_FALSE;\
                i++;\
            } \
            else if (ATP_FIELD_TYPE(source_string_ptr, i) != ATP_FIELD_TYPE_INT)\
            {\
                 result =  KAL_FALSE;\
                 break;\
            }\
            else\
            {\
                pp->VAR_NAME = (VAR_TYPE)ATP_FIELD_VALUE(source_string_ptr, i);\
                pp->is_##VAR_NAME##_present = KAL_TRUE;\
                i++;\
            }

            #define  DMF_FIELD_STRING(STR_NAME, LENGTH) \
            if (ATP_FIELD_TYPE(source_string_ptr, i) != ATP_FIELD_TYPE_STR)\
            {\
                 result =  KAL_FALSE;\
                 break;\
            }\
            else if( ATP_FIELD_LEN(source_string_ptr, i) > LENGTH )\
            {\
                 result =  KAL_FALSE;\
                 break;\
            }\
            else\
            {\
                pp->STR_NAME##_len = ATP_FIELD_LEN(source_string_ptr, i);\
                memcpy(pp->STR_NAME, ATP_FIELD_PTR(source_string_ptr, i), sizeof(kal_char)*ATP_FIELD_LEN(source_string_ptr, i));\
                i++;\
            }
                    
            #define DMF_APP_END \
                result = KAL_TRUE;\
                break; \
        }

        #define DMF_CMD_REQ_SEC        
        #include "custom_dmf_app_cmd_def.h"

        default:
        {
            result = KAL_FALSE;
            break;
        }
    }

    return result;
}

kal_bool custom_atp_mt_urc_to_ap(atp_mt_dmf_urc_ind_struct *ind_ptr, kal_uint8 *urc)
{
    kal_bool result = KAL_TRUE;
    kal_char tmp_buf[ATP_TEMP_BUF_SIZE+1];

    /*
    * the urc has contained AT heaader : +EDMFAPP: <APP_ID>
    * The buffer size of urc is ATP_MAX_URC_DATA_SIZE
    */

    switch(ind_ptr->ind_type)    
    {        
        #define DMF_URC_IND(IND_TYPE, STRUCT_NAME, PARA_NAME) \
        case IND_TYPE: \
        { \
            STRUCT_NAME *pp = &(ind_ptr->p.PARA_NAME);        

            #define DMF_FIELD_VAR(VAR_TYPE, VAR_NAME, MAX_VAL) \
             memset(tmp_buf, 0, sizeof(tmp_buf));\
             sprintf((kal_char *)tmp_buf, ",%d", pp->VAR_NAME);\
             strcat((char*)urc, (const char*)tmp_buf);

            #define DMF_FIELD_STRING(STR_NAME, LENGTH) \
             memset(tmp_buf, 0, sizeof(tmp_buf));\
             if(pp->STR_NAME##_len > ATP_TEMP_BUF_SIZE) \
                pp->STR_NAME##_len = ATP_TEMP_BUF_SIZE; \
             memcpy(tmp_buf, pp->STR_NAME, sizeof(kal_char)*(pp->STR_NAME##_len)); \
             strcat((char*)urc, ",\""); \
             strcat((char*)urc, (const char*)tmp_buf); \
             strcat((char*)urc, "\"");
             
            #define DMF_URC_IND_END(STRUCT_NAME) \
             break; \
        }        

        #define DMF_URC_IND_SEC        
        #include "custom_dmf_app_cmd_def.h"                

        default:            
        {
            result = KAL_FALSE;
        }    

    }


    return result;
}

kal_bool custom_atp_mt_dmf_cmd_cnf_hdlr(atp_mt_dmf_cmd_cnf_struct *msg_ptr, kal_uint8 *at_data)
{
    kal_bool result = KAL_TRUE;
    kal_char tmp_buf[ATP_TEMP_BUF_SIZE+1];

    /*
    * the at_data has contained AT heaader : +EDMFAPP: <APP_ID>
    * The buffer size of at_data is ATP_MAX_URC_DATA_SIZE
    */

    switch(msg_ptr->cnf_type)    
    {        
        #define DMF_CMD_CNF(CNF_TYPE, STRUCT_NAME, PARA_NAME)\
        case CNF_TYPE: \
        { \
            STRUCT_NAME *pp = &(msg_ptr->p.PARA_NAME);        
    
            #define DMF_FIELD_VAR(VAR_TYPE, VAR_NAME, MAX_VAL) \
             memset(tmp_buf, 0, sizeof(tmp_buf));\
             sprintf((kal_char *)tmp_buf, ",%d", pp->VAR_NAME);\
             strcat((char*)at_data, (const char*)tmp_buf);                     

            #define DMF_FIELD_STRING(STR_NAME, LENGTH) \
             memset(tmp_buf, 0, sizeof(tmp_buf));\
             if(pp->STR_NAME##_len > ATP_TEMP_BUF_SIZE) \
                pp->STR_NAME##_len = ATP_TEMP_BUF_SIZE; \
             memcpy(tmp_buf, pp->STR_NAME, sizeof(kal_char)*(pp->STR_NAME##_len)); \
             strcat((char*)at_data, ",\""); \
             strcat((char*)at_data, (const char*)tmp_buf); \
             strcat((char*)at_data, "\"");
     
            #define DMF_CMD_CNF_END(STRUCT_NAME) \
            break; \
        }        
    
        #define DMF_CMD_CNF_SEC        
        #include "custom_dmf_app_cmd_def.h"                

        default:     
        {
            result = KAL_FALSE;
            break;
        }
    }

    return result;
}
