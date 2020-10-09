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

/*******************************************************************************
 * Filename:
 * ---------
 *	atp_public_utility.h
 *
 *
 * Description:
 * ------------
 *  This file contains the function prototype for 
 *  AT PROXY module utility functions.
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/


#ifndef _ATP_PUBLIC_UTILITY_H
#define _ATP_PUBLIC_UTILITY_H

#include "kal_general_types.h"
#include "atp_public_defs.h"
#include "sim_exported_enum.h"


#define ATP_VALIDATOR_OK           0
#define ATP_VALIDATOR_ERROR        255

#define ATP_IS_NUMBER( alpha_char )   \
   ( ( (alpha_char >= ATP_CHAR_0) && (alpha_char <= ATP_CHAR_9) ) ? 1 : 0 )

#define ATP_IS_LOWER( alpha_char )   \
  ( ( (alpha_char >= atp_char_a) && (alpha_char <= atp_char_z) ) ?  1 : 0 )

#define ATP_IS_UPPER( alpha_char )   \
   ( ( (alpha_char >= ATP_CHAR_A) && (alpha_char <= ATP_CHAR_Z) ) ? 1 : 0 )

#define ATP_IS_ALPHA( alpha_char )   \
   ( ( ATP_IS_UPPER(alpha_char) || ATP_IS_LOWER(alpha_char) ) ? 1 : 0 )

#define atp_skip_spaces(source_string_ptr) \
      while ((source_string_ptr->string_ptr[source_string_ptr->index] == ATP_SPACE) \
              && (source_string_ptr->index < source_string_ptr->string_length)) \
      { \
        source_string_ptr->index++; \
      }
#define atp_skip_none_a(atp_string_ptr) \
        while( (atp_string_ptr->index < atp_string_ptr->string_length) && !((atp_string_ptr->string_ptr[ atp_string_ptr->index ] == ATP_CHAR_A) ||\
             (atp_string_ptr->string_ptr[ atp_string_ptr->index ] == atp_char_a)) ) \
        { \
            atp_string_ptr->index++; \
        }

void atp_to_upper(kal_uint8 *str, kal_uint16 str_len);

kal_uint32 atp_int_validator_ext(kal_uint8 *error_cause, 
                                 atp_string_struct *source_string_ptr, 
                                 kal_uint8 delimiter, 
                                 kal_uint16 str_len);

kal_int32 atp_signed_int_validator(kal_uint8 *error_cause, atp_string_struct *source_string_ptr, kal_uint8 delimiter);

kal_uint8 atp_hex_validator_ext(kal_uint8 *error_cause, 
                                atp_string_struct *source_string_ptr, 
                                kal_uint8 delimiter, 
                                kal_uint16 max_length, 
                                kal_uint8 *str);

kal_uint8 atp_string_validator_ext(kal_uint8 *error_cause, 
                                   atp_string_struct *source_string_ptr, 
                                   kal_uint16 source_string_len, 
                                   kal_uint8 delimiter, 
                                   kal_uint16 max_length, 
                                   kal_uint8 *str);

kal_uint32 atp_extract_number_ext(atp_string_struct *source_string_ptr, 
                                  atp_validator_cause_enum *result, 
                                  kal_uint32 max);

void atp_int_to_ascii_converter(kal_uint32 digit, kal_uint8 *buff_ptr);

kal_uint16 atp_fast_string_print(kal_uint8 *buff_ptr, 
                                 kal_uint8 *fmt, 
                                 void *arg_list[], 
                                 kal_uint8 nos_arg);

kal_bool atp_hexstring_to_integer(kal_char *str, kal_uint32 *val);

kal_bool atp_hexstring_to_integer_ext(kal_char *str, kal_uint32 *val, kal_uint16 str_len);

kal_bool atp_hexstring_to_bytes(kal_char *str, kal_uint8 *val, kal_uint16 val_buf_size);

// TODO:_Hong_ replace IMSP and RMMI utility functions by above utilities

kal_uint32 atp_int_validator_range_check(
                    kal_uint8 *error_cause, 
                    atp_string_struct *source_string_ptr, 
                    kal_uint8 delimiter, 
                    kal_uint32 max);


/*****************************************************************************
 * FUNCTION
 *  atp_check_at_prefix
 *
 * DESCRIPTION
 *  check the input string begins with "AT"
 *
 * PARAMETERS
 *  str_ptr     [IN]        ASCII string
 *  str_len     [IN]        length of *str_ptr
 *
 * RETURNS
 *  KAL_TRUE/KAL_FALSE depends on success or fail.
 *
 *****************************************************************************/
kal_bool atp_check_at_prefix(kal_uint8 *str_ptr, kal_uint16 str_len);

/*****************************************************************************
 * FUNCTION
 *  l4b_atp_find_cmd_mode
 *
 * DESCRIPTION
 *  find the command mode of *at_cmd_ptr
 *
 * PARAMETERS
 *  at_cmd_ptr     [IN]        ASCII string
 *  at_cmd_len     [IN]        length of *at_cmd_ptr
 *
 * RETURNS
 *  atp_cmd_mode_enum   the command mode of *at_cmd_ptr
 *
 *****************************************************************************/
atp_cmd_mode_enum l4b_atp_find_cmd_mode(atp_string_struct *at_cmd_ptr);

/*****************************************************************************
 * FUNCTION
 *  atp_get_urc_report_mode
 * DESCRIPTION
 *  This function is used to get URC report mode value
 * PARAMETERS
 *  ps_id              [IN] which protocol id  
 *  urc_type         [IN] which URC's report mode you want to know
 * RETURNS
 *  URC's report mode value is returned.
 *****************************************************************************/
kal_uint8 atp_get_urc_report_mode(protocol_id_enum ps_id, atp_urc_report_mode_enum urc_type);

/*****************************************************************************
 * FUNCTION
 *  atp_set_urc_report_mode
 * DESCRIPTION
 *  This function is used to set URC report mode value
 * PARAMETERS 
 *  urc_type         [IN] which URC's report mode value you want to set
 *  mode              [IN] the value to be set.
 * RETURNS
 *  void
 *****************************************************************************/
void atp_set_urc_report_mode(atp_urc_report_mode_enum urc_type, kal_uint8 mode);

#ifdef __SENSITIVE_DATA_MOSAIC__
void atp_copy_partial_string(kal_uint8 *in_str_ptr, kal_uint16 in_str_len, kal_uint8 *at_str_ptr, kal_uint16 at_str_len);
#endif /* __SENSITIVE_DATA_MOSAIC__ */

#endif /* _ATP_PUBLIC_UTILITY_H */
