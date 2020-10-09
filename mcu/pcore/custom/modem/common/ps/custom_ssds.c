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
 * custom_ssds.c
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
 ****************************************************************************/

#include <string.h>
#include "kal_trace.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "custom_ssds.h"
#include "custom_ssds_config.h"
#include "sbp_public_utility.h"
#include "rmmi_common_enum.h"

/* SIM */
#include "sim_common_enums.h" /* for is_test_sim */

extern kal_bool ssds_path_is_pct_icccard(module_type dst_module);

kal_bool  _custom_ssds_is_cfu(custom_ssds_atcmd_info *atcmd_info)
{
    kal_char action_activate[] = "*";
    kal_char action_deactivate[] = "#";
    kal_char action_query[]  = "*#";
    kal_char action_rigester[]  = "**";
    kal_char action_erasure[] = "##";
    kal_uint32  index = 0;
    kal_bool    is_cfu = KAL_FALSE;

    /*find '=' */
    while ((atcmd_info->atcmd_buff[index] != '=') && (index < atcmd_info->atcmd_len))
    {
        index++;
    }

    if (index >= atcmd_info->atcmd_len)
    {
        kal_prompt_trace(MOD_SSDS, "ERROR! Unexpected AT command!");
        return KAL_FALSE;
    } else {
        index += 6;
    }

    /*skip the action*/
    if ( (0 == kal_mem_cmp(atcmd_info->atcmd_buff+index, action_query, 2)) ||
         (0 == kal_mem_cmp(atcmd_info->atcmd_buff+index, action_rigester, 2)) ||
         (0 == kal_mem_cmp(atcmd_info->atcmd_buff+index, action_erasure, 2)) )
    {
        index += 2;
    }
    else if ( (0 == kal_mem_cmp(atcmd_info->atcmd_buff+index, action_activate, 1)) ||
              (0 == kal_mem_cmp(atcmd_info->atcmd_buff+index, action_deactivate, 1)) )
    {
        index += 1;
    }
    else
    {
        kal_prompt_trace(MOD_SSDS, "ERROR! ACTION parse fail!");
        return KAL_FALSE;
    }

    /*parse the CFU code*/
    if (0 == kal_mem_cmp(atcmd_info->atcmd_buff+index, "21", 2) ||
        0 == kal_mem_cmp(atcmd_info->atcmd_buff+index, "22", 2))
    {
        is_cfu = KAL_TRUE;
    }

    return  is_cfu;
}

kal_bool  _custom_ssds_is_ocb(custom_ssds_atcmd_info *atcmd_info)
{
    kal_char action_activate[] = "*";
    kal_char action_deactivate[] = "#";
    kal_char action_query[]  = "*#";
    kal_char action_rigester[]  = "**";
    kal_char action_erasure[] = "##";
    kal_uint32  index = 0;
    kal_bool    is_ocb = KAL_FALSE;

    /*find '=' */
    while ((atcmd_info->atcmd_buff[index] != '=') && (index < atcmd_info->atcmd_len))
    {
        index++;
    }

    index += 6; /*skip: "*/

    /*skip the action*/
    if ( (0 == kal_mem_cmp(atcmd_info->atcmd_buff+index, action_query, 2)) ||
         (0 == kal_mem_cmp(atcmd_info->atcmd_buff+index, action_rigester, 2)) ||
         (0 == kal_mem_cmp(atcmd_info->atcmd_buff+index, action_erasure, 2)) )
    {
        index += 2;
    }
    else if ( (0 == kal_mem_cmp(atcmd_info->atcmd_buff+index, action_activate, 1)) ||
              (0 == kal_mem_cmp(atcmd_info->atcmd_buff+index, action_deactivate, 1)) )
    {
        index += 1;
    }

    /*parse the OCB information*/
    if (0 == kal_mem_cmp(atcmd_info->atcmd_buff+index, "330", 3))
    {
        is_ocb = KAL_FALSE;
    }
    else if ((0 == kal_mem_cmp(atcmd_info->atcmd_buff+index, "33", 2)) ||
        (0 == kal_mem_cmp(atcmd_info->atcmd_buff+index, "331", 3)) ||
        (0 == kal_mem_cmp(atcmd_info->atcmd_buff+index, "332", 3)) ||
        (0 == kal_mem_cmp(atcmd_info->atcmd_buff+index, "333", 3)) )
    {
        is_ocb = KAL_TRUE;
    }

    return  is_ocb;

}
/*ps only check:
*/
kal_bool  _custom_ssds_ps_only_path_variable(kal_uint32 op_id,
                                             kal_char *mccmnc )
{

    kal_uint32 atcmd_request_ps_only_table[] = {01, 02, 03, 05, 06, 07, 9, 15, 16, 18, 19, 50, 107,
                                                117, 120, 145, 148, 154, 157, 196, 201, 204, 221, 224,
                                                238, 276};
    kal_uint32 index;
    kal_bool   ret_value = KAL_FALSE;

     /*Special case : support XCAP only or 2/3/4G*/
    for (index=0; index<sizeof(atcmd_request_ps_only_table)/sizeof(atcmd_request_ps_only_table[0]); index++)
    {
        if (op_id == atcmd_request_ps_only_table[index])
        {
            ret_value = KAL_TRUE;
        }
    }

    /*Country specific setting for 'PS Only': H3G/Sweden H3G/Denmark Rogers/Canada Entel/Chile TIM/Brazil A1/Slovenia VIP/Serbia*/
    if ((0 == (kal_mem_cmp(mccmnc, "24002", 5))) || (0 == (kal_mem_cmp(mccmnc, "23806", 5))) || (0 == (kal_mem_cmp(mccmnc, "22201", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "21603", 5))) || (0 == (kal_mem_cmp(mccmnc, "29340", 5))) || (0 == (kal_mem_cmp(mccmnc, "22005", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "23205", 5))) || (0 == (kal_mem_cmp(mccmnc, "23210", 5))) || (0 == (kal_mem_cmp(mccmnc, "73001", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "73010", 5))) || (0 == (kal_mem_cmp(mccmnc, "72402", 5))) || (0 == (kal_mem_cmp(mccmnc, "72403", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "72404", 5))) || (0 == (kal_mem_cmp(mccmnc, "29341", 5))))
    {
        ret_value = KAL_TRUE;
    }
    /*AT&T/Mexico(OPID=7) Claro/Chile(OPID=120) support XCAP and CSFB if XCAP fail*/
    if ((0 == (kal_mem_cmp(mccmnc, "334090", 6))) || (0 == (kal_mem_cmp(mccmnc, "334050", 6))) ||
        (0 == (kal_mem_cmp(mccmnc, "73003", 5))))
    {
        ret_value = KAL_FALSE;
    }
    return  ret_value;
}

/*cs only check:
*/
kal_bool  _custom_ssds_cs_only_path_variable(kal_uint32 op_id,
                                             kal_char *mccmnc)
{
    kal_uint32 atcmd_request_cs_only_table[] = { 17, 20, 100, 101, 102, 104, 106, 108, 110, 111, 112, 114, 115, 116, 122,
                                                 125, 126, 127, 131, 135, 143, 147, 149, 151, 163, 165, 176, 183,
                                                 184, 185, 187, 189, 191, 192, 210, 211, 216, 245, 282};
    kal_uint32    index;
    kal_bool      ret_value = KAL_FALSE;

    /*Special case: support CS only*/
    for (index=0; index<sizeof(atcmd_request_cs_only_table)/sizeof(atcmd_request_cs_only_table[0]); index++)
    {
        if (op_id == atcmd_request_cs_only_table[index])
        {
            ret_value = KAL_TRUE;
        }
    }

    /*Specail case: support CS only*/
    if ((0 == (kal_mem_cmp(mccmnc, "26003", 5))) || (0 == (kal_mem_cmp(mccmnc, "28602", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "22603", 5))) || (0 == (kal_mem_cmp(mccmnc, "22610", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "28405", 5))) || (0 == (kal_mem_cmp(mccmnc, "22605", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "20610", 5))) || (0 == (kal_mem_cmp(mccmnc, "21403", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "24007", 5))) || (0 == (kal_mem_cmp(mccmnc, "23101", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "22210", 5))) || (0 == (kal_mem_cmp(mccmnc, "24008", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "732101", 6)))|| (0 == (kal_mem_cmp(mccmnc, "732123", 6)))||
        (0 == (kal_mem_cmp(mccmnc, "334140", 6)))|| (0 == (kal_mem_cmp(mccmnc, "50216", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "51503", 5))) || (0 == (kal_mem_cmp(mccmnc, "45601", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "71617", 5))) || (0 == (kal_mem_cmp(mccmnc, "74810", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "722310", 6)))|| (0 == (kal_mem_cmp(mccmnc, "722320", 6)))||
        (0 == (kal_mem_cmp(mccmnc, "722330", 6)))|| (0 == (kal_mem_cmp(mccmnc, "722010", 6)))||
        (0 == (kal_mem_cmp(mccmnc, "722070", 6)))|| (0 == (kal_mem_cmp(mccmnc, "72207", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "24214", 5))) || (0 == (kal_mem_cmp(mccmnc, "74807", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "28405", 5))) || (0 == (kal_mem_cmp(mccmnc, "334090", 6)))||
        (0 == (kal_mem_cmp(mccmnc, "334050", 6)))|| (0 == (kal_mem_cmp(mccmnc, "41006", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "26001", 5))) || (0 == (kal_mem_cmp(mccmnc, "23201", 5))) || 
        (0 == (kal_mem_cmp(mccmnc, "37001", 5))))
    {
        ret_value = KAL_TRUE;
    }

    return  ret_value;

}

kal_bool  _custom_ssds_cdma_only_path_variable(kal_uint32  op_id,
                                                               kal_char    *mccmnc)
{
    kal_uint32 atcmd_request_cdma_only_table[] = { 12 };
    kal_uint32    index;
    kal_bool      ret_value = KAL_FALSE;

    /*Special case: support CDMA only*/
    for (index=0; index<sizeof(atcmd_request_cdma_only_table)/sizeof(atcmd_request_cdma_only_table[0]); index++)
    {
       if (op_id == atcmd_request_cdma_only_table[index])
       {
           ret_value = KAL_TRUE;
       }
    }

    return  ret_value;

}


kal_bool  _custom_ssds_get_clir_path_variable(  kal_uint32  op_id,
                                                kal_char	*mccmnc,
                                                kal_bool    is_ims_registered,
                                                custom_ssds_ims_domain_type   ims_domain,
                                                custom_ssds_roaming_type     roaming_status,
                                                custom_ssds_atcmd_info *atcmd_info,
                                                custom_ssds_path_type *atcmd_req_type
                                             )
{
    if ((0 == (kal_mem_cmp(mccmnc, "23415", 5))) || (0 == (kal_mem_cmp(mccmnc, "23591", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "25001", 5))) || (0 == (kal_mem_cmp(mccmnc, "25002", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "26202", 5))) || (0 == (kal_mem_cmp(mccmnc, "26204", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "26209", 5))) || (0 == (kal_mem_cmp(mccmnc, "24405", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "23003", 5))) || (0 == (kal_mem_cmp(mccmnc, "23099", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "23002", 5))) || (0 == (kal_mem_cmp(mccmnc, "20408", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "73002", 5))) || (0 == (kal_mem_cmp(mccmnc, "22201", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "20601", 5))) || (0 == (kal_mem_cmp(mccmnc, "23203", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "23207", 5))) || (0 == (kal_mem_cmp(mccmnc, "23205", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "23210", 5))) || (0 == (kal_mem_cmp(mccmnc, "24421", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "20416", 5))) || (0 == (kal_mem_cmp(mccmnc, "20420", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "41406", 5))) || (0 == (kal_mem_cmp(mccmnc, "23106", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "20209", 5))) || (0 == (kal_mem_cmp(mccmnc, "20210", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "53001", 5))) || (0 == (kal_mem_cmp(mccmnc, "23801", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "23810", 5))) || (0 == (kal_mem_cmp(mccmnc, "26001", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "21910", 5))))
    {
        if (CUSTOM_SSDS_ATCMD_TYPE_SET_CLIR == atcmd_info->atcmd_type)
        {
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_CS_ONLY_ALWAYS;
        }
        else
        {
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_NOT_SUPPORT_832;
        }
        return  KAL_TRUE;
    }

    if ((op_id == 3) || (op_id == 5) || ((op_id == 7)&&(0!=(kal_mem_cmp(mccmnc, "334090", 6)))&&(0!=(kal_mem_cmp(mccmnc, "334050", 6)))) || (op_id == 8) ||
        (op_id == 15) || (op_id == 16) || (op_id == 50) || (op_id == 107) || (op_id == 113) || (op_id == 157) ||
        (op_id == 117) || (op_id == 118) || (op_id == 121) || (op_id == 124) || (op_id == 127) || (op_id == 128) || (op_id == 129) || (op_id == 134) ||
        (op_id == 135) || (op_id == 148) || (op_id == 150) || (op_id == 152) || (op_id == 161) || (op_id == 103) || (op_id == 145) ||
        (op_id == 154) || (op_id == 162) || (op_id == 181) || (op_id == 183) || (op_id == 196) || (op_id == 199) || (op_id == 204) || (op_id == 219) ||
        (op_id == 238) || (op_id == 276) || (op_id == 279) || (0 == (kal_mem_cmp(mccmnc, "24201", 5))))
    {
        if (CUSTOM_SSDS_ATCMD_TYPE_SET_CLIR == atcmd_info->atcmd_type)
        {
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_CS_ONLY_ALWAYS;
        }
        else
        {
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_NOT_SUPPORT_832;
        }
        return  KAL_TRUE;
    }
    else if ((op_id == 1) || (op_id == 2))
    {
        if (is_ims_registered != KAL_TRUE)
        {
           *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_PS_ONLY;
		   if(CUSTOM_SSDS_ATCMD_TYPE_SET_CLIR == atcmd_info->atcmd_type)
		   {
               *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_PS_ONLY_SET_TO_QUERY;
		   }
        }
        else
        {
           *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_NOT_SUPPORT_409;
        }
        return  KAL_TRUE;
    }
    else if ((op_id == 9) || (0 == (kal_mem_cmp(mccmnc, "73001", 5))) || (0 == (kal_mem_cmp(mccmnc, "73010", 5))))
    {
        *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_NOT_SUPPORT_409;
        return  KAL_TRUE;
    }
    else if ((op_id == 109) || (op_id == 153) ||
        (0 == (kal_mem_cmp(mccmnc, "24002", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "23806", 5))) || (0 == (kal_mem_cmp(mccmnc, "23802", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "23877", 5))) || (0 == (kal_mem_cmp(mccmnc, "20610", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "21403", 5))) || (0 == (kal_mem_cmp(mccmnc, "29341", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "22288", 5))) || (0 == (kal_mem_cmp(mccmnc, "22299", 5))))
    {
        if (is_ims_registered != KAL_TRUE)
        {
           *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_CS_ONLY;
        }
        else
        {/* special for CHT and VHA and Denmark/Telenor and Telekom/Slovenia:CLIR terminal based */
            if (CUSTOM_SSDS_ATCMD_TYPE_SET_CLIR == atcmd_info->atcmd_type)
            {
                *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_CS_ONLY_ALWAYS;
            }
            else
            {
                *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_NOT_SUPPORT_832;
            }
        }
        return  KAL_TRUE;
    }
    else if ((op_id == 111) || (op_id == 147) || (op_id == 210) || (op_id == 232) ||
        (0 == (kal_mem_cmp(mccmnc, "41006", 5))))
    {/* For Voda-IND, Airtel-IND, BSNL-IND, Mobitel-Srilanka, Telenor-Pakistan:
        1) Set CLIR: terminal based; CME Error:4 greys out CLIR settings
        2) Get CLIR: NW based to avoid invalid pop-up on MMI query */
        if (CUSTOM_SSDS_ATCMD_TYPE_SET_CLIR == atcmd_info->atcmd_type)
        {
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_OPERATION_NOT_SUPPORTED_4;
        }
        else
        {
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_CS_ONLY;
        }
        return  KAL_TRUE;
    }
    else if ((0 == (kal_mem_cmp(mccmnc, "33430", 5))) || (0 == (kal_mem_cmp(mccmnc, "334030", 6)))||(0 == (kal_mem_cmp(mccmnc, "72405", 5))) ||
        (op_id == 18) ||  (op_id == 116)|| (op_id == 186) || (0 == (kal_mem_cmp(mccmnc, "70401", 5)))||(0 == (kal_mem_cmp(mccmnc, "70402", 5))) ||
        (op_id == 216))
    {
       *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_OPERATION_NOT_SUPPORTED_4;
       return  KAL_TRUE;
    }

    return  KAL_FALSE;

}

kal_bool  _custom_ssds_get_clip_path_variable(  kal_uint32  op_id,
                                                kal_bool    is_ims_registered,
                                                custom_ssds_ims_domain_type   ims_domain,
                                                custom_ssds_roaming_type     roaming_status,
                                                custom_ssds_atcmd_info *atcmd_info,
                                                custom_ssds_path_type *atcmd_req_type
                                             )
{
    if ((op_id == 1) || (op_id == 2))
    {
        if (is_ims_registered != KAL_TRUE)
        {
           *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_PS_ONLY;
		   if(CUSTOM_SSDS_ATCMD_TYPE_SET_CLIP == atcmd_info->atcmd_type)
		   {
               *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_PS_ONLY_SET_TO_QUERY;
		   }
        }
        else
        {
           *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_NOT_SUPPORT_409;
        }

        return  KAL_TRUE;
    }

    return  KAL_FALSE;

}

kal_bool  _custom_ssds_get_colp_path_variable(  kal_uint32  op_id,
                                                kal_bool    is_ims_registered,
                                                custom_ssds_ims_domain_type   ims_domain,
                                                custom_ssds_roaming_type     roaming_status,
                                                custom_ssds_atcmd_info *atcmd_info,
                                                custom_ssds_path_type *atcmd_req_type
                                             )
{
    if ((op_id == 1) || (op_id == 2))
    {
        if (is_ims_registered != KAL_TRUE)
        {
           *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_PS_ONLY;
		    if(CUSTOM_SSDS_ATCMD_TYPE_SET_COLP == atcmd_info->atcmd_type)
		   {
               *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_PS_ONLY_SET_TO_QUERY;
		   }
        }
        else
        {
           *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_NOT_SUPPORT_409;
        }

        return  KAL_TRUE;
    }

    return  KAL_FALSE;

}

kal_bool  _custom_ssds_get_colr_path_variable(  kal_uint32  op_id,
                                                kal_bool    is_ims_registered,
                                                custom_ssds_ims_domain_type   ims_domain,
                                                custom_ssds_roaming_type     roaming_status,
                                                custom_ssds_atcmd_info *atcmd_info,
                                                custom_ssds_path_type *atcmd_req_type
                                             )
{
    if ((op_id == 1) || (op_id == 2))
    {
        if (is_ims_registered != KAL_TRUE)
        {
           *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_PS_ONLY;
		   if(CUSTOM_SSDS_ATCMD_TYPE_SET_COLR == atcmd_info->atcmd_type)
		   {
               *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_PS_ONLY_SET_TO_QUERY;
		   }
        }
        else
        {
           *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_NOT_SUPPORT_409;
        }

        return  KAL_TRUE;
    }

    return  KAL_FALSE;

}
kal_bool  _custom_ssds_get_cb_path_variable(    kal_uint32  op_id,
                                                kal_char    *mccmnc,
                                                kal_bool    is_ims_registered,
                                                custom_ssds_ims_domain_type   ims_domain,
                                                custom_ssds_roaming_type     roaming_status,
                                                custom_ssds_atcmd_info *atcmd_info,
                                                custom_ssds_path_type *atcmd_req_type
                                           )
{
    kal_bool    is_ocb;

    if (op_id == 01)
    {
        is_ocb = _custom_ssds_is_ocb(atcmd_info);

        if (KAL_TRUE == is_ocb)
        {
            if (is_ims_registered != KAL_TRUE)
            {
               *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_PS_ONLY;
               if(CUSTOM_SSDS_ATCMD_TYPE_SET_CALL_BARRING == atcmd_info->atcmd_type)
               {
                   *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_PS_ONLY_SET_TO_QUERY;
               }
            }
            else
            {
               *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_NOT_SUPPORT_409;
            }

            return  KAL_TRUE;

        }

    }
    else if(0 == (kal_mem_cmp(mccmnc, "21670", 5)))
    {/*VDF Hungary does not support Barring of Outgoing Calls*/
        is_ocb = _custom_ssds_is_ocb(atcmd_info);

        if (KAL_TRUE == is_ocb)
        {
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_OPERATION_NOT_SUPPORTED_4;
            return  KAL_TRUE;
        }
    }
    else if((op_id == 7)||(op_id == 139)||(op_id == 145)||(op_id == 196)||
        (0 == (kal_mem_cmp(mccmnc, "73002", 5)))||(0 == (kal_mem_cmp(mccmnc, "20416", 5)))||
        (0 == (kal_mem_cmp(mccmnc, "20420", 5)))||(0 == (kal_mem_cmp(mccmnc, "20404", 5))))
    {/* Per AT&T SME, Movistar/Chile, DTAG/Netherlands, VDF/Netherlands, Bouygues/France Call barring should not be supported in XCAP/Ut */
        *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_CS_ONLY;
        return  KAL_TRUE;
    }
    else if((op_id == 8)||(op_id == 114)||(op_id == 115)||(op_id == 116)||(op_id == 148)||(op_id == 157)||(op_id == 201)||(op_id == 204)||
        (op_id == 216) || (op_id == 238) || (op_id == 276) || (0 == (kal_mem_cmp(mccmnc, "24214", 5)))||(0 == (kal_mem_cmp(mccmnc, "25020", 5)))||
        (0 == (kal_mem_cmp(mccmnc, "732123", 6))))
    {/* Per TMOUS Spec and Rogers/Canada, Movistar/Colombia,ICE/Norway and KPN Netherlands, Zong-Pakistan Call barring should not be supported in XCAP/Ut and CS domain */
        *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_OPERATION_NOT_SUPPORTED_4;
        return  KAL_TRUE;
    }

    return  KAL_FALSE;

}

kal_bool  _custom_ssds_get_cw_path_variable(    kal_uint32  op_id,
                                                kal_char	*mccmnc,
                                                kal_bool    is_ims_registered,
                                                custom_ssds_ims_domain_type   ims_domain,
                                                custom_ssds_roaming_type     roaming_status,
                                                custom_ssds_rf_status rf_status,
                                                custom_ssds_atcmd_info *atcmd_info,
                                                custom_ssds_path_type *atcmd_req_type
                                           )
{
    //*atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_CS_ONLY;

    if (is_ims_registered == KAL_TRUE)
    {
        if (((op_id == 7)&&(0!=(kal_mem_cmp(mccmnc, "334090", 6)))&&(0!=(kal_mem_cmp(mccmnc, "334050", 6))))|| (op_id == 129) ||
           (op_id == 8) || (op_id == 50) || (op_id == 103) || (op_id == 113) || ((op_id == 137)&&(0!=(kal_mem_cmp(mccmnc, "24007", 5)))) ||
           (op_id == 145) || (op_id == 152) || (op_id == 178) || (op_id == 186) || (op_id == 195) || (op_id == 196) ||
           (op_id == 202) || (op_id == 219) || (op_id == 232) || (op_id == 281) ||
           (0 == (kal_mem_cmp(mccmnc, "72406", 5))) || (0 == (kal_mem_cmp(mccmnc, "72410", 5)))||
           (0 == (kal_mem_cmp(mccmnc, "72411", 5))) || (0 == (kal_mem_cmp(mccmnc, "72423", 5)))||
           (0 == (kal_mem_cmp(mccmnc, "24201", 5))) || (0 == (kal_mem_cmp(mccmnc, "23002", 5)))||
           (0 == (kal_mem_cmp(mccmnc, "23205", 5))) || (0 == (kal_mem_cmp(mccmnc, "23210", 5)))||
           (0 == (kal_mem_cmp(mccmnc, "21601", 5))) || (0 == (kal_mem_cmp(mccmnc, "26006", 5)))||
           (0 == (kal_mem_cmp(mccmnc, "23806", 5))) || (0 == (kal_mem_cmp(mccmnc, "25915", 5)))||
           (0 == (kal_mem_cmp(mccmnc, "25701", 5))))
        {
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_PS_ONLY;
        }
        else if((0 == (kal_mem_cmp(mccmnc, "23802", 5))) || (0 == (kal_mem_cmp(mccmnc, "23877", 5))) || (op_id == 153))
        {
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_CS_ONLY;
        }
        else if (0 == (kal_mem_cmp(mccmnc, "71606", 5)))
        {
            return  KAL_FALSE;
        }
        else if((KAL_FALSE == _custom_ssds_cs_only_path_variable(op_id, mccmnc)) ||
            (op_id == 176) || (op_id == 151) || (op_id == 188) || (op_id == 210) || (op_id == 183) ||
            (0 == (kal_mem_cmp(mccmnc, "20610", 5))) || (0 == (kal_mem_cmp(mccmnc, "21403", 5))) ||
            (0 == (kal_mem_cmp(mccmnc, "23101", 5))) || (0 == (kal_mem_cmp(mccmnc, "74810", 5))) ||
            (0 == (kal_mem_cmp(mccmnc, "722310", 6)))|| (0 == (kal_mem_cmp(mccmnc, "722320", 6)))||
            (0 == (kal_mem_cmp(mccmnc, "722330", 6)))|| (0 == (kal_mem_cmp(mccmnc, "722010", 6)))||
            (0 == (kal_mem_cmp(mccmnc, "722070", 6)))|| (0 == (kal_mem_cmp(mccmnc, "72207", 5))) ||
            (0 == (kal_mem_cmp(mccmnc, "74807", 5))) || (0 == (kal_mem_cmp(mccmnc, "334090", 6)))||
            (0 == (kal_mem_cmp(mccmnc, "334050", 6)))|| (0 == (kal_mem_cmp(mccmnc, "732123", 6))))
        {/* terminal based when ims registered for non CS only operator and
          * OP176/OP151/Telenor BG/A1 Austria/Orange Belgium, Slovakia, Spain */
            if (CUSTOM_SSDS_ATCMD_TYPE_SET_CALL_WAITING == atcmd_info->atcmd_type)
            {
                *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_NOT_SUPPORT_832;
            }
            else
            {
                *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_NOT_SUPPORT_CCWA;
            }
        }
        else if(op_id == 114 || op_id == 115 || op_id == 116)
        {/* special case for Korea operators: CW should be active/de-active by special number or service center */
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_OPERATION_NOT_SUPPORTED_4;
        }
        else
        {/* for other CS only operator */
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_CS_ONLY;
        }
    }
    else
    {/* cs only default if ims not registered  */
        *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_CS_ONLY;

        if ((op_id == 1) || (op_id == 2) || (op_id == 5) || (op_id == 9))
        {
            if (CUSTOM_SSDS_ATCMD_TYPE_SET_CALL_WAITING == atcmd_info->atcmd_type)
            {
                *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_PS_ONLY_SET_TO_QUERY;
            }
            else
            {
                *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_PS_ONLY;
            }
        }
        else if (((op_id == 7)&& (0 != (kal_mem_cmp(mccmnc, "334090", 6))) && (0 != (kal_mem_cmp(mccmnc, "334050", 6)))) || (op_id == 145) || (op_id == 196) || (op_id == 50) ||
            (0 == (kal_mem_cmp(mccmnc, "23205", 5))) || (0 == (kal_mem_cmp(mccmnc, "23210", 5)))||
            (0 == (kal_mem_cmp(mccmnc, "25701", 5))))
        {
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_PS_ONLY;
        }
        else if (((op_id == 6) && (0 != (kal_mem_cmp(mccmnc, "22210", 5)))) || (op_id == 15) || (op_id == 107) || (op_id == 151) || (op_id == 160)||
        	(0 == (kal_mem_cmp(mccmnc, "25002", 5))))
        {
            if (CUSTOM_SSDS_ATCMD_TYPE_SET_CALL_WAITING == atcmd_info->atcmd_type)
            {
                *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_NOT_SUPPORT_832;
            }
            else
            {
                *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_NOT_SUPPORT_CCWA;
            }
        }
        else if (op_id == 117 )/*Special case for SmartFren (op_id=117)*/
        {
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_NOT_SUPPORT_100;
        }
    }

    /* Terminal based CW regardless of IMS registration status:
     * EE UK (16), Starhub(104), CHT(109), AIS /Thailand(122), DTAC/Thailand(125), TrueMove/Thailand(131),
     * MTS/Russia(135), KPN Netherlands(201), Telus/Canada(157),JTL/Kenya(200), C&W/Panama(211), TurkCell/Turkey(143),
     * Telcel/Mexico(334020), Claro/Colombia(732101), Telenor Sweden(24008) , Claro Chile(73003), Telefonica Spain (21405/21407),
     * TIM/Italy(22201), VHA(153, if WFC registered and RF OFF), Telkomsel/Indonesia(224) */
    if ((op_id == 16) || (op_id == 104) || (op_id == 109) || (op_id == 122) || (op_id == 125) || (op_id == 131) ||
        (op_id == 135) ||(op_id == 143) || (op_id == 157) || (op_id == 164) || (op_id == 184) || (op_id == 200) || (op_id == 201) ||
        (op_id == 211) || (op_id == 224) || (op_id == 238) || (op_id == 276) || (op_id == 279) ||(op_id == 282) ||
        (0 == (kal_mem_cmp(mccmnc, "334020", 6))) || (0 == (kal_mem_cmp(mccmnc, "20420", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "732101", 6))) || (0 == (kal_mem_cmp(mccmnc, "24008", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "334030", 6))) || (0 == (kal_mem_cmp(mccmnc, "33403", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "73003", 5)))  || (0 == (kal_mem_cmp(mccmnc, "20416", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "51503", 5)))  || (0 == (kal_mem_cmp(mccmnc, "21405", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "21407", 5)))  || (0 == (kal_mem_cmp(mccmnc, "24601", 5))) ||
        (0 == (kal_mem_cmp(mccmnc, "22201", 5)))  ||
        (op_id == 153 && ims_domain == CUSTOM_SSDS_IMS_DOMAIN_TYPE_WFC && rf_status == CUSTOM_SSDS_RF_OFF))
    {
        if (CUSTOM_SSDS_ATCMD_TYPE_SET_CALL_WAITING == atcmd_info->atcmd_type)
        {
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_NOT_SUPPORT_832;
        }
        else
        {
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_NOT_SUPPORT_CCWA;
        }
    }

    /* Support XCAP regardless of IMS REG Status:
     * RJIO-IND(18), Telenor-Mynmar(41406), VIP/Serbia(22005)
     */
    if ((op_id == 18) ||
        (0 == (kal_mem_cmp(mccmnc, "41406", 5))) || (0 == (kal_mem_cmp(mccmnc, "22005", 5))))
    {
        *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_PS_PREFER;
    }

    return  KAL_TRUE;
}

kal_bool  _custom_ssds_get_cf_path_variable(    kal_uint32  op_id,
                                                kal_char    *mccmnc,
                                                kal_bool    is_ims_registered,
                                                custom_ssds_ims_domain_type   ims_domain,
                                                custom_ssds_roaming_type     roaming_status,
                                                custom_ssds_rf_status rf_status,
                                                custom_ssds_atcmd_info *atcmd_info,
                                                custom_ssds_path_type *atcmd_req_type
                                           )
{
    kal_bool is_cfu;
    if ((0 == (kal_mem_cmp(mccmnc, "41006", 5))))
    {/* Telenor-Pakistan:
        1) Set COLP: terminal based; CME Error:4 greys out COLP settings
        2) Get COLP: NW based to avoid invalid pop-up on MMI query */
        if (CUSTOM_SSDS_ATCMD_TYPE_SET_CALL_FORWARDING == atcmd_info->atcmd_type)
        {
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_OPERATION_NOT_SUPPORTED_4;
        }
        else
        {
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_CS_ONLY;
        }
        return  KAL_TRUE;
    }

    if (0 == (kal_mem_cmp(mccmnc, "732123", 6)))
    {/* Movistar Colombia: only CFU support XCAP */
        is_cfu = _custom_ssds_is_cfu(atcmd_info);
        if (is_cfu)
        {
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_PS_PREFER;
            return KAL_TRUE;
        }
    }

    if (op_id == 276)
    {/* Altice US: only CFU support XCAP */
        is_cfu = _custom_ssds_is_cfu(atcmd_info);
        if (!is_cfu)
        {
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_OPERATION_NOT_SUPPORTED_4;
            return KAL_TRUE;
        }
    }

    return  KAL_FALSE;
}


kal_bool  _custom_ssds_get_path_variable (    kal_uint32  in_op_id,
                                              kal_char    *mccmnc,
                                              kal_bool    is_ims_registered,
                                              custom_ssds_ims_domain_type   ims_domain,
                                              custom_ssds_roaming_type     roaming_status,
                                              kal_bool             is_mobile_data_setting_enabled,
                                              kal_bool  ps_status,
                                              custom_ssds_rf_status rf_status,
                                              custom_ssds_atcmd_info *atcmd_info,
                                              custom_ssds_path_type *atcmd_req_type
                                         )
{
    kal_bool    ret_value = KAL_FALSE;
    kal_uint32  op_id = in_op_id;

    if (ims_domain == CUSTOM_SSDS_IMS_DOMAIN_TYPE_WFC)
    {
        // Different with others, for 3/Austria, 3/Denmark, if WFC is registered, UE should try PS
        if (((op_id == 11) && (0 != (kal_mem_cmp(mccmnc, "23205", 5))) && (0 != (kal_mem_cmp(mccmnc, "23210", 5))) &&
            (0 != (kal_mem_cmp(mccmnc, "23806", 5)))) || (0 == (kal_mem_cmp(mccmnc, "71606", 5))) ||
            (0 == (kal_mem_cmp(mccmnc, "22288", 5)))  || (0 == (kal_mem_cmp(mccmnc, "22299", 5))))
        {
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_CS_ONLY;
            return  KAL_TRUE;
        }
        /* Do not support Ut-XCAP on WiFi: Globe-Philippines */
        if (op_id == 243)
        {
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_CS_ONLY;
            return  KAL_TRUE;
        }
    }

    /*Special case: CT only support call farwarding and call waiting*/
    if (op_id == 9)
    {
        if ((atcmd_info->atcmd_type != CUSTOM_SSDS_ATCMD_TYPE_SET_CALL_WAITING) &&
            (atcmd_info->atcmd_type != CUSTOM_SSDS_ATCMD_TYPE_GET_CALL_WAITING) &&
            (atcmd_info->atcmd_type != CUSTOM_SSDS_ATCMD_TYPE_SET_CALL_FORWARDING) &&
            (atcmd_info->atcmd_type != CUSTOM_SSDS_ATCMD_TYPE_GET_CALL_FORWARDING))
        {
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_NOT_SUPPORT_409;
            return  KAL_TRUE;
        }

        /*International roaming, treat it as CMCC*/
        if (CUSTOM_SSDS_ROAMING_TYPE_INTERNATIONAL == roaming_status)
        {
            op_id = 1;
        }
    }

    /* GrameenPhone-bangladesh(191) supports SS over Ut(except CW,which is TB) when PS attach, else SS on CS */
    if (op_id == 191)
    {
        if((atcmd_info->atcmd_type != CUSTOM_SSDS_ATCMD_TYPE_SET_CALL_WAITING) &&
            (atcmd_info->atcmd_type != CUSTOM_SSDS_ATCMD_TYPE_GET_CALL_WAITING))
        {
/* MOLY00398321: GrameenPhone has not finished its XCAP implementation yet and has requested to use CS for SS temporarily
 *  Remove else part, once GrameenPhone confirms its XCAP support.
 */
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_CS_ONLY;
            return  KAL_TRUE;
#endif
        }
    }

    if ((0 == (kal_mem_cmp(mccmnc, "53001", 5))))
    {
        if (is_ims_registered == KAL_FALSE)
        {
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_CS_ONLY;
            return  KAL_TRUE;
        }
    }

    /* Korea special requirement for SS. Only CLIP/CLIR should be kept for KT/SKT. All other services are NOT allowed
     * to query/enable/disable from default UI or standard MMI code. These services should be subsrcibled by dialing
     * special number or customer service center.
    */
    if (op_id == 114 || op_id == 115)
    {/* Korea: KT and SKT */
        if (atcmd_info->atcmd_type == CUSTOM_SSDS_ATCMD_TYPE_SET_CLIR ||
            atcmd_info->atcmd_type == CUSTOM_SSDS_ATCMD_TYPE_GET_CLIR ||
            atcmd_info->atcmd_type == CUSTOM_SSDS_ATCMD_TYPE_SET_CLIP ||
            atcmd_info->atcmd_type == CUSTOM_SSDS_ATCMD_TYPE_GET_CLIP)
        {/* CLIP and CLIR service*/
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_CS_ONLY;
            return KAL_TRUE;
        }
        else
        {
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_OPERATION_NOT_SUPPORTED_4;
            return KAL_TRUE;
        }
    }

    if (op_id == 116)
    {/* Korea: LGU */
        *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_OPERATION_NOT_SUPPORTED_4;
        return KAL_TRUE;
    }

    /* TPG-Singapore(221) supports SS over Ut only if IMS registered, else SS not supported */
    if (op_id == 221)
    {
        if (KAL_FALSE == is_ims_registered)
        {
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_NOT_SUPPORT_100;
            return  KAL_TRUE;
        }
    }
    /*JTL-Kenya doesn't have any SS so this leaves CW to use terminal based only */
    if (op_id == 200)
    {
        if (atcmd_info->atcmd_type != CUSTOM_SSDS_ATCMD_TYPE_SET_CALL_WAITING &&
            atcmd_info->atcmd_type != CUSTOM_SSDS_ATCMD_TYPE_GET_CALL_WAITING)
        {
            *atcmd_req_type = CUSTOM_SSDS_PATH_TYPE_OPERATION_NOT_SUPPORTED_4;
            return KAL_TRUE;
        }
    }
    switch (atcmd_info->atcmd_type)
    {
        case CUSTOM_SSDS_ATCMD_TYPE_SET_CLIR:
        case CUSTOM_SSDS_ATCMD_TYPE_GET_CLIR:
            ret_value = _custom_ssds_get_clir_path_variable(op_id, mccmnc, is_ims_registered, ims_domain, roaming_status,
                                                            atcmd_info, atcmd_req_type);
            break;

        case CUSTOM_SSDS_ATCMD_TYPE_SET_CLIP:
        case CUSTOM_SSDS_ATCMD_TYPE_GET_CLIP:
            ret_value = _custom_ssds_get_clip_path_variable(op_id, is_ims_registered, ims_domain, roaming_status,
                                                            atcmd_info, atcmd_req_type);
            break;

        case CUSTOM_SSDS_ATCMD_TYPE_SET_COLR:
        case CUSTOM_SSDS_ATCMD_TYPE_GET_COLR:
            ret_value = _custom_ssds_get_colr_path_variable(op_id, is_ims_registered, ims_domain, roaming_status,
                                                            atcmd_info, atcmd_req_type);
            break;

        case CUSTOM_SSDS_ATCMD_TYPE_SET_COLP:
        case CUSTOM_SSDS_ATCMD_TYPE_GET_COLP:
            ret_value = _custom_ssds_get_colp_path_variable(op_id, is_ims_registered, ims_domain, roaming_status,
                                                            atcmd_info, atcmd_req_type);
            break;
        case CUSTOM_SSDS_ATCMD_TYPE_SET_CALL_WAITING:
        case CUSTOM_SSDS_ATCMD_TYPE_GET_CALL_WAITING:
            ret_value = _custom_ssds_get_cw_path_variable(op_id, mccmnc,is_ims_registered, ims_domain, roaming_status,
                                                            rf_status, atcmd_info, atcmd_req_type);
            break;

        case CUSTOM_SSDS_ATCMD_TYPE_SET_CALL_BARRING:
        case CUSTOM_SSDS_ATCMD_TYPE_GET_CALL_BARRING:
            ret_value = _custom_ssds_get_cb_path_variable(op_id, mccmnc, is_ims_registered, ims_domain, roaming_status,
                                                            atcmd_info, atcmd_req_type);
            break;

        case CUSTOM_SSDS_ATCMD_TYPE_SET_CALL_FORWARDING:
        case CUSTOM_SSDS_ATCMD_TYPE_GET_CALL_FORWARDING:
            ret_value = _custom_ssds_get_cf_path_variable(op_id, mccmnc,is_ims_registered, ims_domain, roaming_status,
                                                            rf_status, atcmd_info, atcmd_req_type);
            break;

        default:
            ret_value = KAL_FALSE;
            break;

    }

    return  ret_value;
}

void _custom_ssds_get_cw_rsp_path_variable(kal_uint32                   op_id,
                                           kal_bool                     is_ims_registered,
                                           custom_ssds_roaming_type     roaming_status,
                                           custom_ssds_atcmd_info       *atcmd_info,
                                           kal_uint32                   rsp_id,
                                           custom_ssds_csfb_type        *csfb_type)
{
    /*check if terminal based call waiting*/
    if (KAL_FALSE == is_ims_registered)
    {
        if ((op_id == 1) || (op_id == 2) || (op_id == 5) || (op_id == 9))
        {
            if (403 == rsp_id)
            {
                if ((op_id == 9) && (roaming_status != CUSTOM_SSDS_ROAMING_TYPE_INTERNATIONAL))
                {
                    *csfb_type = CUSTOM_SSDS_CSFB_TYPE_NO_403;
                }
                else
                {
                    *csfb_type = CUSTOM_SSDS_CSFB_TYPE_ALWAYS;
                }
            }
            else if (831 == rsp_id)
            {
                if ((op_id == 9) && (roaming_status != CUSTOM_SSDS_ROAMING_TYPE_INTERNATIONAL))
                {
                    *csfb_type = CUSTOM_SSDS_CSFB_TYPE_NO_31;
                }
                else
                {
                    *csfb_type = CUSTOM_SSDS_CSFB_TYPE_ONCE;
                }
            }
            else
            {
                if (atcmd_info->atcmd_type == CUSTOM_SSDS_ATCMD_TYPE_SET_CALL_WAITING)
                {
                    *csfb_type = CUSTOM_SSDS_CSFB_TYPE_NO_832;
                }
                else if (atcmd_info->atcmd_type == CUSTOM_SSDS_ATCMD_TYPE_GET_CALL_WAITING)
                {
                    *csfb_type = CUSTOM_SSDS_CSFB_TYPE_NO_CCWA;
                }
            }
        }
    }
}

void _custom_ssds_get_cb_rsp_path_variable(kal_uint32                   op_id,
                                           kal_bool                     is_ims_registered,
                                           custom_ssds_roaming_type     roaming_status,
                                           custom_ssds_atcmd_info       *atcmd_info,
                                           kal_uint32                   rsp_id,
                                           custom_ssds_csfb_type        *csfb_type)
{
    kal_bool    is_ocb;

    if (op_id == 01)
    {
        is_ocb = _custom_ssds_is_ocb(atcmd_info);

        if ((KAL_TRUE == is_ocb) &&
             (KAL_FALSE == is_ims_registered))
        {
            if (403 == rsp_id)
            {
                *csfb_type = CUSTOM_SSDS_CSFB_TYPE_ALWAYS;
            }
            else if (831 == rsp_id)
            {
                *csfb_type = CUSTOM_SSDS_CSFB_TYPE_ONCE;
            }
            else
            {
                *csfb_type = CUSTOM_SSDS_CSFB_TYPE_NO_409;
            }

            return;

        }

    }

    return;

}

void _custom_ssds_get_clir_rsp_path_variable(  kal_uint32                   op_id,
                                               kal_bool                     is_ims_registered,
                                               custom_ssds_roaming_type     roaming_status,
                                               custom_ssds_atcmd_info       *atcmd_info,
                                               kal_uint32                   rsp_id,
                                               custom_ssds_csfb_type        *csfb_type)
{
    if (KAL_FALSE == is_ims_registered)
    {
        if ((op_id == 1) || (op_id == 2))
        {
            if (403 == rsp_id)
            {
                *csfb_type = CUSTOM_SSDS_CSFB_TYPE_ALWAYS;
            }
            else if (831 == rsp_id)
            {
                *csfb_type = CUSTOM_SSDS_CSFB_TYPE_ONCE;
            }
            else
            {
                *csfb_type = CUSTOM_SSDS_CSFB_TYPE_NO_409;
            }
        }
    }
}

void _custom_ssds_get_colr_rsp_path_variable(kal_uint32                 op_id,
                                           kal_bool                     is_ims_registered,
                                           custom_ssds_roaming_type     roaming_status,
                                           custom_ssds_atcmd_info       *atcmd_info,
                                           kal_uint32                   rsp_id,
                                           custom_ssds_csfb_type        *csfb_type)
{
    if (KAL_FALSE == is_ims_registered)
    {
        if ((op_id == 1) || (op_id == 2))
        {
            if (403 == rsp_id)
            {
                *csfb_type = CUSTOM_SSDS_CSFB_TYPE_ALWAYS;
            }
            else if (831 == rsp_id)
            {
                *csfb_type = CUSTOM_SSDS_CSFB_TYPE_ONCE;
            }
            else
            {
                *csfb_type = CUSTOM_SSDS_CSFB_TYPE_NO_409;
            }
        }
    }
}

void _custom_ssds_get_colp_rsp_path_variable(kal_uint32                 op_id,
                                           kal_bool                     is_ims_registered,
                                           custom_ssds_roaming_type     roaming_status,
                                           custom_ssds_atcmd_info       *atcmd_info,
                                           kal_uint32                   rsp_id,
                                           custom_ssds_csfb_type        *csfb_type)
{
    if (KAL_FALSE == is_ims_registered)
    {
        if ((op_id == 1) || (op_id == 2))
        {
            if (403 == rsp_id)
            {
                *csfb_type = CUSTOM_SSDS_CSFB_TYPE_ALWAYS;
            }
            else if (831 == rsp_id)
            {
                *csfb_type = CUSTOM_SSDS_CSFB_TYPE_ONCE;
            }
            else
            {
                *csfb_type = CUSTOM_SSDS_CSFB_TYPE_NO_409;
            }
        }
    }
}

void _custom_ssds_get_clip_rsp_path_variable(kal_uint32                 op_id,
                                           kal_bool                     is_ims_registered,
                                           custom_ssds_roaming_type     roaming_status,
                                           custom_ssds_atcmd_info       *atcmd_info,
                                           kal_uint32                   rsp_id,
                                           custom_ssds_csfb_type        *csfb_type)
{
    if (KAL_FALSE == is_ims_registered)
    {
        if ((op_id == 1) || (op_id == 2))
        {
            if (403 == rsp_id)
            {
                *csfb_type = CUSTOM_SSDS_CSFB_TYPE_ALWAYS;
            }
            else if (831 == rsp_id)
            {
                *csfb_type = CUSTOM_SSDS_CSFB_TYPE_ONCE;
            }
            else
            {
                *csfb_type = CUSTOM_SSDS_CSFB_TYPE_NO_409;
            }
        }
    }
}

#if 1
/*
*   Decide the path after receiving the ATCMD request from AP with below case:
*   1. current ims status
*   2. current wfc status
*   3. volte setting
*   3. atcmd type and atcmd raw data
*/
custom_ssds_path_type  _custom_ssds_get_req_path_variable (   custom_ssds_info_struct  *req_info,
                                                              kal_uint32  op_id,
                                                              kal_bool    is_ims_registered,
                                                              custom_ssds_ims_domain_type   ims_domain,
                                                              custom_ssds_roaming_type     roaming_status,
                                                              kal_bool             is_mobile_data_setting_enabled,
                                                              kal_bool ps_status,
                                                              custom_ssds_rf_status rf_status,
                                                              custom_ssds_atcmd_info *atcmd_info
                                                         )
{
    custom_ssds_path_type   atcmd_path_type;
    custom_ssds_path_type   special_atcmd_req_type;
    kal_bool                ret_value;

    /*Set the default value*/
    if (KAL_TRUE == is_ims_registered)
        atcmd_path_type = CUSTOM_SSDS_PATH_TYPE_PS_PREFER;
    else
        atcmd_path_type = CUSTOM_SSDS_PATH_TYPE_CS_ONLY;

    if(KAL_TRUE == _custom_ssds_ps_only_path_variable(op_id, req_info->mccmnc))
    {
        atcmd_path_type = CUSTOM_SSDS_PATH_TYPE_PS_ONLY;
    }

    /*Special case: support CS only*/

    if(KAL_TRUE == _custom_ssds_cs_only_path_variable(op_id, req_info->mccmnc))
    {
        atcmd_path_type = CUSTOM_SSDS_PATH_TYPE_CS_ONLY;
    }

    /*Special case: support CDMA only*/
    if(KAL_TRUE == _custom_ssds_cdma_only_path_variable(op_id, req_info->mccmnc))
    {
        atcmd_path_type = CUSTOM_SSDS_PATH_TYPE_OPERATION_NOT_SUPPORTED_4;
        return atcmd_path_type;
    }

    /*Special case: any exception???*/
    ret_value = _custom_ssds_get_path_variable(op_id, req_info->mccmnc, is_ims_registered, ims_domain,
                    roaming_status, is_mobile_data_setting_enabled, ps_status, rf_status, atcmd_info, &special_atcmd_req_type);
    if (KAL_TRUE == ret_value)
    {
        atcmd_path_type = special_atcmd_req_type;
    }

    /*special case for data off*/
    if(!is_mobile_data_setting_enabled)
    {
        /* Movistar Argentina , Play/Poland, Kyivstar/Ukraine  will chose CS when data off*/
        /* Movistar/Mexico(334030, 33403) Movistar/Peru(71606) will chose PS when data off, Dito-Philippines(279) */
        if((op_id == 132 && (!(0 == (kal_mem_cmp(req_info->mccmnc, "334030", 6))))&&(!(0 == (kal_mem_cmp(req_info->mccmnc, "33403", 5))))&&
            (!(0 == (kal_mem_cmp(req_info->mccmnc, "71606", 5)))))||(0 == (kal_mem_cmp(req_info->mccmnc, "37001", 5))) || (op_id == 279) || 
            (op_id == 281))
        {
            atcmd_path_type = CUSTOM_SSDS_PATH_TYPE_CS_ONLY;
        }
    }
    /*special case for roaming*/
    if(CUSTOM_SSDS_ROAMING_TYPE_NO != roaming_status)
    {
        /*Optus Australia, Umobile, Sky UK , Avantel/Colombia ,Vodafone/Egypt, Wind/Italy,
          Freedom/Canada, Mobitel-Srilanka,Movistar/Colombia, Kyivstar/Ukraine, MEO/Portugal do not support Ut/XCAP in roaming NW;
          CT does not support Ut/XCAP when roaming to HK (using VDF NL IMSI) */
        if((op_id == 152) || (op_id == 189) || (op_id == 206) || (op_id == 209) || (op_id == 219) || (op_id == 162) ||
           (op_id == 164) || (op_id == 232) || (op_id == 281) || (op_id == 283) ||
           ((KAL_TRUE == req_info->is_ct_card) && (0 == (kal_mem_cmp(req_info->mccmnc, "20404", 5))))||
           (0 == (kal_mem_cmp(req_info->mccmnc, "60202", 5))) || (0 == (kal_mem_cmp(req_info->mccmnc, "22288", 5))) ||
           (0 == (kal_mem_cmp(req_info->mccmnc, "22299", 5))) || (0 == (kal_mem_cmp(req_info->mccmnc, "37001", 5))) ||
           (0 == (kal_mem_cmp(req_info->mccmnc, "732123", 6))))
        {
            atcmd_path_type = CUSTOM_SSDS_PATH_TYPE_CS_ONLY;
        }
        else if (KAL_FALSE == is_ims_registered && ((0 == (kal_mem_cmp(req_info->mccmnc, "23205", 5))) || (0 == (kal_mem_cmp(req_info->mccmnc, "23210", 5)))))
        {
            atcmd_path_type = CUSTOM_SSDS_PATH_TYPE_CS_ONLY;
        }
        /* Smartfren-OP117*/
        else if(op_id == 117 && KAL_FALSE == ret_value)
        {
            if (is_ims_registered == KAL_TRUE)
            {
                atcmd_path_type = CUSTOM_SSDS_PATH_TYPE_PS_PREFER;
            }
            else
            {
                atcmd_path_type = CUSTOM_SSDS_PATH_TYPE_CS_ONLY;
            }
        }
        /* TPG-Singapore(221): do not allow Ut when roaming */
        else if(op_id == 221)
        {
            atcmd_path_type = CUSTOM_SSDS_PATH_TYPE_NOT_SUPPORT_100;
        }
        /* Dito-Philippines(279) use CS if roaming & data off */
        if(!is_mobile_data_setting_enabled && (op_id == 279))
        {
            atcmd_path_type = CUSTOM_SSDS_PATH_TYPE_CS_ONLY;
        }
    }

    return  atcmd_path_type;
}

void  _custom_ssds_get_req_path_nvram_variable (              custom_ssds_info_struct  *req_info,
                                                              kal_uint32  op_id,
                                                              kal_bool    is_ims_registered,
                                                              custom_ssds_ims_domain_type   ims_domain,
                                                              custom_ssds_roaming_type     roaming_status,
                                                              kal_bool             is_mobile_data_setting_enabled,
                                                              kal_bool ps_status,
                                                              custom_ssds_atcmd_info *atcmd_info,
                                                              custom_ssds_path_type	 *req_path_type
                                                         )
{
#if 1
    nvram_ef_ssds_request_profile_value_struct	request_info;
    nvram_ef_ssds_request_profile_action_struct	request_action;

    kal_mem_set(&request_info, 0x0, sizeof(nvram_ef_ssds_request_profile_value_struct));
    request_info.op_id = op_id;
    kal_mem_cpy(&(request_info.mccmnc[0]), &(req_info->mccmnc[0]), 6);

    request_info.ims_domain = ims_domain;
    request_info.ims_registered = is_ims_registered;
    request_info.atcmd_type = atcmd_info->atcmd_type;
    request_info.roaming_type = roaming_status;
    request_info.sim_type = req_info->sim_type;

    if (KAL_TRUE == (custom_ssds_config_get_request_path(req_info->sim_id, &request_info, &request_action)))
    {
        *req_path_type = request_action.req_path;
        kal_prompt_trace(MOD_SSDS, "Use NVRAM reqeust result");
    }
#endif
}

void  _custom_ssds_get_req_path_post_variable (               custom_ssds_info_struct  *req_info,
                                                              kal_uint32  op_id,
                                                              kal_bool    is_ims_registered,
                                                              custom_ssds_ims_domain_type   ims_domain,
                                                              custom_ssds_roaming_type     roaming_status,
                                                              kal_bool             is_mobile_data_setting_enabled,
                                                              kal_bool ps_status,
                                                              custom_ssds_atcmd_info *atcmd_info,
                                                              custom_ssds_path_type	 *req_path_type
                                                         )
{
}

custom_ssds_path_type  custom_ssds_get_req_path_variable (    custom_ssds_info_struct  *req_info,
                                                              kal_uint32  op_id,
                                                              kal_bool    is_ims_registered,
                                                              custom_ssds_ims_domain_type   ims_domain,
                                                              custom_ssds_roaming_type     roaming_status,
                                                              kal_bool             is_mobile_data_setting_enabled,
                                                              kal_bool ps_status,
                                                              custom_ssds_rf_status rf_status,
                                                              custom_ssds_atcmd_info *atcmd_info
                                                         )
{
    custom_ssds_path_type	req_path_type;

    req_path_type = _custom_ssds_get_req_path_variable(req_info, op_id, is_ims_registered, ims_domain, roaming_status, is_mobile_data_setting_enabled, ps_status, rf_status, atcmd_info);

    _custom_ssds_get_req_path_nvram_variable(req_info, op_id, is_ims_registered, ims_domain, roaming_status, is_mobile_data_setting_enabled, ps_status, atcmd_info, &req_path_type);

    _custom_ssds_get_req_path_post_variable(req_info, op_id, is_ims_registered, ims_domain, roaming_status,is_mobile_data_setting_enabled, ps_status, atcmd_info, &req_path_type);

    return	req_path_type;
}
#endif

#if 1
/*
*   Decide the CSFB after receiving the ATCMD response from XCAP with below case:
*   1. current ims status
*   2. atcmd type
*   3. response from XCAP
*/
void _custom_ssds_get_rsp_path_variable(   custom_ssds_info_struct      *req_info,
                                           kal_uint32                   in_op_id,
                                           kal_bool                     is_ims_registered,
                                           custom_ssds_ims_domain_type  ims_domain,
                                           custom_ssds_roaming_type     roaming_status,
                                           custom_ssds_rf_status rf_status,
                                           custom_ssds_atcmd_info       *atcmd_info,
                                           kal_uint32                   in_rsp_id,
                                           custom_ssds_csfb_type        *csfb_type,
                                           kal_bool                     *trigger_ims_dereg)
{
    kal_uint32 op_id = in_op_id;
    kal_uint32 rsp_id = in_rsp_id;

    /*Work round for CU: rsp=400*/
    if (op_id == 2)
    {
        if (400 == rsp_id)
        {
            rsp_id = 403;
        }
    }
    /* Telefonica and Telenet Belgium requires that after UE receives 40x error response (other than 403) from NW, it needs to CSFB */
    else if ((op_id == 15) || (op_id == 164))
    {
        if (403 == rsp_id)
        {
           *csfb_type = CUSTOM_SSDS_CSFB_TYPE_ALWAYS;
           return;
        }
        else if (rsp_id >= 400 && rsp_id < 410)
        {
            *csfb_type = CUSTOM_SSDS_CSFB_TYPE_ONCE;
            return;
        }
    }
    /* EE UK requires that when UE receives 404 or 408 Error response from NW, it needs to CSFB */
    else if (op_id == 16)
    {
        if (404 == rsp_id || 408 == rsp_id)
        {
           *csfb_type = CUSTOM_SSDS_CSFB_TYPE_ONCE;
           return;
        }
    }
    /* IDEA-IND requires that when UE receives 304, 403, 404, 409 or 412 Error response from NW, it needs to CSFB */
    else if (op_id == 186)
    {
        if (304 == rsp_id || 403 == rsp_id || 404 == rsp_id || 409 == rsp_id || 412 == rsp_id)
        {
           *csfb_type = CUSTOM_SSDS_CSFB_TYPE_ONCE;
           return;
        }
    }
    /* O2 CZ requires that when UE receives 409 Error response from NW, it needs to CSFB */
    else if (op_id == 195)
    {
        if (409 == rsp_id)
        {
           *csfb_type = CUSTOM_SSDS_CSFB_TYPE_ONCE;
           return;
        }
    }
    /* Bell Canada require that when UE receive 500 error response from NW, it needs CSFB. RMSC00330187 RMSC00330189 */
    else if (op_id == 121)
    {
        if (500 == rsp_id)
        {
           *csfb_type = CUSTOM_SSDS_CSFB_TYPE_ONCE;
           return;
        }
        else if (200 == rsp_id)
        {
           if ((ims_domain == CUSTOM_SSDS_IMS_DOMAIN_TYPE_WFC) && (rf_status == CUSTOM_SSDS_RF_OFF))
           {
                if (CUSTOM_SSDS_ATCMD_TYPE_SET_CALL_FORWARDING == atcmd_info->atcmd_type)
                {
                    *trigger_ims_dereg = KAL_TRUE;
                }
           }
        }
    }
    /* Videotron Canada requires that when UE receives 409 Error response from NW, it needs to CSFB */
    else if (op_id == 238)
    {
        if (409 == rsp_id)
        {
           *csfb_type = CUSTOM_SSDS_CSFB_TYPE_ONCE;
           return;
        }
    }

    /*set the default value*/
    switch (rsp_id)
    {
        case 200:
        case 404:
        case 409:
            *csfb_type = CUSTOM_SSDS_CSFB_TYPE_NO;
            break;

        case 403:
            *csfb_type = CUSTOM_SSDS_CSFB_TYPE_ALWAYS;
            break;

        case 831:
            *csfb_type = CUSTOM_SSDS_CSFB_TYPE_ONCE;
            break;

        default:
            *csfb_type = CUSTOM_SSDS_CSFB_TYPE_NO;
            break;
    }

    /*Special case: CT*/
    if (op_id == 9)
    {
        /*International roaming, treat it as CMCC*/
        if (CUSTOM_SSDS_ROAMING_TYPE_INTERNATIONAL == roaming_status)
        {
            op_id = 1;
        }
        else
        {
            *csfb_type = CUSTOM_SSDS_CSFB_TYPE_NO;
            if ((atcmd_info->atcmd_type == CUSTOM_SSDS_ATCMD_TYPE_SET_CALL_WAITING) ||
                (atcmd_info->atcmd_type == CUSTOM_SSDS_ATCMD_TYPE_GET_CALL_WAITING))
            {
                _custom_ssds_get_cw_rsp_path_variable(op_id, is_ims_registered, roaming_status, atcmd_info, rsp_id, csfb_type);
            }

            return;
        }
    }

    /*check any special requirement*/
    switch (atcmd_info->atcmd_type)
    {
        case CUSTOM_SSDS_ATCMD_TYPE_SET_CLIR:
        case CUSTOM_SSDS_ATCMD_TYPE_GET_CLIR:
            _custom_ssds_get_clir_rsp_path_variable(op_id, is_ims_registered, roaming_status, atcmd_info, rsp_id, csfb_type);
            break;

        case CUSTOM_SSDS_ATCMD_TYPE_SET_CLIP:
        case CUSTOM_SSDS_ATCMD_TYPE_GET_CLIP:
            _custom_ssds_get_clip_rsp_path_variable(op_id, is_ims_registered, roaming_status, atcmd_info, rsp_id, csfb_type);
            break;

        case CUSTOM_SSDS_ATCMD_TYPE_SET_COLR:
        case CUSTOM_SSDS_ATCMD_TYPE_GET_COLR:
            _custom_ssds_get_colr_rsp_path_variable(op_id, is_ims_registered, roaming_status, atcmd_info, rsp_id, csfb_type);
            break;

        case CUSTOM_SSDS_ATCMD_TYPE_SET_COLP:
        case CUSTOM_SSDS_ATCMD_TYPE_GET_COLP:
            _custom_ssds_get_colp_rsp_path_variable(op_id, is_ims_registered, roaming_status, atcmd_info, rsp_id, csfb_type);
            break;
        case CUSTOM_SSDS_ATCMD_TYPE_SET_CALL_BARRING:
        case CUSTOM_SSDS_ATCMD_TYPE_GET_CALL_BARRING:
            _custom_ssds_get_cb_rsp_path_variable(op_id, is_ims_registered, roaming_status, atcmd_info, rsp_id, csfb_type);
            break;

        case CUSTOM_SSDS_ATCMD_TYPE_SET_CALL_WAITING:
        case CUSTOM_SSDS_ATCMD_TYPE_GET_CALL_WAITING:
            _custom_ssds_get_cw_rsp_path_variable(op_id, is_ims_registered, roaming_status, atcmd_info, rsp_id, csfb_type);
            break;

        default:
            break;
    }

    /* Special case for SmartFren(CDMA solution) and RJIL(4G only solution) and Seatel(4G only solution) */
    if (117 == op_id || 148 == op_id || 221 == op_id)
    {
        *csfb_type = CUSTOM_SSDS_CSFB_TYPE_NO;
    }
    else if (18 == op_id)
    {
        /* ALPS04349217: In international romaing, Server not responding, try on CS once */
        if (CUSTOM_SSDS_ROAMING_TYPE_INTERNATIONAL == roaming_status && 200 != rsp_id)
        {
            *csfb_type = CUSTOM_SSDS_CSFB_TYPE_ONCE;
        }
        else
        {
            *csfb_type = CUSTOM_SSDS_CSFB_TYPE_NO;
        }
    }
    else if (202 == op_id)
    {
        /* Spark-NZ: XCAP fail, try on CS once */
        if (200 != rsp_id)
        {
            *csfb_type = CUSTOM_SSDS_CSFB_TYPE_ONCE;
        }
    }

}

void _custom_ssds_get_rsp_path_nvram_variable(    custom_ssds_info_struct  	*req_info,
										   kal_uint32                   in_op_id,
                                           kal_bool                     is_ims_registered,
                                           custom_ssds_roaming_type     roaming_status,
                                           custom_ssds_atcmd_info       *atcmd_info,
                                           kal_uint32                   rsp_id,
                                           custom_ssds_csfb_type        *csfb_type)
{
#if 1
	nvram_ef_ssds_response_profile_value_struct		request_info;
	nvram_ef_ssds_response_profile_action_struct	request_action;

	kal_mem_set(&request_info, 0x0, sizeof(nvram_ef_ssds_response_profile_value_struct));
	request_info.op_id = in_op_id;
	kal_mem_cpy(&(request_info.mccmnc[0]), &(req_info->mccmnc[0]), 6);

	request_info.ims_registered = is_ims_registered;
	request_info.atcmd_type = atcmd_info->atcmd_type;
	request_info.roaming_type = roaming_status;
	request_info.rsp_id = rsp_id;
	request_info.sim_type = req_info->sim_type;

	if (KAL_TRUE == (custom_ssds_config_get_response_path(req_info->sim_id, &request_info, &request_action)))
	{
		*csfb_type = request_action.rsp_path;
    	kal_prompt_trace(MOD_SSDS, "Use NVRAM response result");
	}
#endif
}

void _custom_ssds_get_rsp_path_post_variable(    custom_ssds_info_struct  	*req_info,
										   kal_uint32                   in_op_id,
                                           kal_bool                     is_ims_registered,
                                           custom_ssds_roaming_type     roaming_status,
                                           custom_ssds_atcmd_info       *atcmd_info,
                                           kal_uint32                   rsp_id,
                                           custom_ssds_csfb_type        *csfb_type)
{

}

void custom_ssds_get_rsp_path_variable(    custom_ssds_info_struct  	*req_info,
										   kal_uint32                   in_op_id,
                                           kal_bool                     is_ims_registered,
                                           custom_ssds_ims_domain_type  ims_domain,
                                           custom_ssds_roaming_type     roaming_status,
                                           custom_ssds_rf_status rf_status,
                                           custom_ssds_atcmd_info       *atcmd_info,
                                           kal_uint32                   rsp_id,
                                           custom_ssds_csfb_type        *csfb_type,
                                           kal_bool                     *trigger_ims_dereg)
{
	_custom_ssds_get_rsp_path_variable(req_info, in_op_id, is_ims_registered,ims_domain,
									   roaming_status, rf_status, atcmd_info, rsp_id, csfb_type, trigger_ims_dereg);

	_custom_ssds_get_rsp_path_nvram_variable(req_info, in_op_id, is_ims_registered,
									   roaming_status, atcmd_info, rsp_id, csfb_type);

	_custom_ssds_get_rsp_path_post_variable(req_info, in_op_id, is_ims_registered,
									   roaming_status, atcmd_info, rsp_id, csfb_type);

}

#endif

#if 1

void _custom_ssds_get_pdn_setup_variable( custom_ssds_info_struct  *req_info,
										  kal_uint32           op_id,
                                          kal_bool             is_mobile_data_setting_enabled,
                                          kal_bool             is_data_roaming_setting_enabled,
                                          custom_ssds_ims_domain_type   ims_domain,
                                          custom_ssds_roaming_type   roaming_status,
                                          custom_ssds_pdn_type    *pdn_type,
                                          custom_ssds_pdn_rat_type *pdn_rat_type,
                                          module_type module_id)
{
    *pdn_rat_type = CUSTOM_SSDS_PDN_RAT_TYPE_ANY;
    if ((0 == (kal_mem_cmp(req_info->mccmnc, "72207", 5))) || ((136==op_id) && (0 != (kal_mem_cmp(req_info->mccmnc, "73001", 5))) &&
        (0 != (kal_mem_cmp(req_info->mccmnc, "73010", 5)))) || (1001==op_id))
    {/* 72207 for Movistar/AR */
        *pdn_type = CUSTOM_SSDS_PDN_TYPE_INTERNET;

        if (KAL_TRUE != is_mobile_data_setting_enabled)
        {
            *pdn_type = CUSTOM_SSDS_PDN_TYPE_NO_CONN;
        }
        else
        {
            if ((KAL_TRUE != is_data_roaming_setting_enabled) &&
                (CUSTOM_SSDS_ROAMING_TYPE_NO != roaming_status))
            {
                *pdn_type = CUSTOM_SSDS_PDN_TYPE_NOT_MATCH;
            }
        }

        return;

    }
    else if ((8==op_id)|| (0 == (kal_mem_cmp(req_info->mccmnc, "33403", 5)))|| (0 == (kal_mem_cmp(req_info->mccmnc, "334030", 6))))
    {
        *pdn_type = CUSTOM_SSDS_PDN_TYPE_INTERNET;
        return;
    }
    else if ((7==op_id) || (145==op_id) || (196==op_id))
    {
        *pdn_type = CUSTOM_SSDS_PDN_TYPE_XCAP;

        return;
    }
    else
    {
        *pdn_type = CUSTOM_SSDS_PDN_TYPE_XCAP;

        if ((KAL_TRUE != is_data_roaming_setting_enabled) &&
            (CUSTOM_SSDS_ROAMING_TYPE_NO != roaming_status) &&
            (op_id != 5) && (op_id != 18) && (op_id != 19) &&
            (op_id != 181) && (op_id != 186) &&
            (0 != (kal_mem_cmp(req_info->mccmnc, "24002", 5))) &&
			(0 != (kal_mem_cmp(req_info->mccmnc, "23806", 5)))) /* Special case for Telstra(OP19)/TMO-EU(OP05)/H3G-Sweden/Telkom-SA/Idea-Ind */
        {
            *pdn_type = CUSTOM_SSDS_PDN_TYPE_NOT_MATCH;
        }

        /* Special case for softbank [OTR-SS-110027]                                                     *
         * [Home Network]                                                                 *
         *   - turned off the "Cellular data" and the "4G" of the Preferred network type  *
         *  [Roaming Network]                                                             *
         *  If the UE meets one of the following:                                         *
         *   - turned off the "Cellular data" and the "4G" of the Preferred network type  *
         *   - turned off the "4G" of the Preferred network type and the "Data roaming"   *
         *  And the UE shall notify to the user that SS Configuration was failed.         */
		if((op_id == 50) && (req_info->prefer_rat != RAT_LTE) &&
            ((KAL_TRUE != is_mobile_data_setting_enabled) ||
            ((KAL_TRUE != is_data_roaming_setting_enabled) && (CUSTOM_SSDS_ROAMING_TYPE_NO != roaming_status))))
        {
            *pdn_type = CUSTOM_SSDS_PDN_TYPE_NOT_MATCH;
        }
        if((CUSTOM_SSDS_ROAMING_TYPE_NO != roaming_status) && (op_id == 279))
        {
            *pdn_type = CUSTOM_SSDS_PDN_TYPE_INTERNET;
        }
        if (KAL_TRUE == sbp_query_md_feature_by_ps(SBP_DISABLE_SS_WHEN_DATA_OFF,(protocol_id_enum)(module_id - MOD_SSDS))
            && (KAL_TRUE != is_mobile_data_setting_enabled) && (op_id == 1 || op_id == 9))
        {
            *pdn_type = CUSTOM_SSDS_PDN_TYPE_NO_CONN;
        }

        if (ims_domain == CUSTOM_SSDS_IMS_DOMAIN_TYPE_WFC)
        {
            if (op_id == 121 || (0 == (kal_mem_cmp(req_info->mccmnc, "21630", 5))))
            {
                *pdn_rat_type = CUSTOM_SSDS_PDN_RAT_TYPE_WIFI_PREFER;
            }
        }
        return;
    }
}


void _custom_ssds_get_pdn_setup_nvram_variable( custom_ssds_info_struct  *req_info,
										  kal_uint32           op_id,
                                          kal_bool             is_mobile_data_setting_enabled,
                                          kal_bool             is_data_roaming_setting_enabled,
                                          custom_ssds_ims_domain_type ims_domain,
                                          custom_ssds_roaming_type   roaming_status,
                                          custom_ssds_pdn_type    *pdn_type,
                                          custom_ssds_pdn_rat_type *pdn_rat_type)
{
#if 1
	nvram_ef_ssds_pdn_profile_value_struct		request_info;
	nvram_ef_ssds_pdn_profile_action_struct		request_action;

	kal_mem_set(&request_info, 0x0, sizeof(nvram_ef_ssds_pdn_profile_value_struct));
	request_info.op_id = op_id;
	kal_mem_cpy(&(request_info.mccmnc[0]), &(req_info->mccmnc[0]), 6);

	request_info.data_setting = is_mobile_data_setting_enabled;
	request_info.roaming_setting = is_data_roaming_setting_enabled;
	request_info.ims_domain = ims_domain;
	request_info.roaming_type = roaming_status;
	request_info.sim_type = req_info->sim_type;

	if (KAL_TRUE == (custom_ssds_config_get_pdn_path(req_info->sim_id, &request_info, &request_action)))
	{
		*pdn_type = request_action.pdn_path;
        *pdn_rat_type = request_action.pdn_rat_type;
    	kal_prompt_trace(MOD_SSDS, "Use NVRAM PDN result");
	}
#endif
}

void _custom_ssds_get_pdn_setup_post_variable( custom_ssds_info_struct  *req_info,
										  kal_uint32           op_id,
                                          kal_bool             is_mobile_data_setting_enabled,
                                          kal_bool             is_data_roaming_setting_enabled,
                                          custom_ssds_ims_domain_type ims_domain,
                                          custom_ssds_roaming_type   roaming_status,
                                          custom_ssds_pdn_type    *pdn_type,
                                          custom_ssds_pdn_rat_type *pdn_rat_type)
{
	return;
}

/*
*   Check if setup-up PDN condition is matched with below case:
*   1. mobile data setting;
*   2. data_roaming_setting
*   3. data_roaming status
*/
void custom_ssds_get_pdn_setup_variable(  custom_ssds_info_struct  *req_info,
										  kal_uint32           op_id,
                                          kal_bool             is_mobile_data_setting_enabled,
                                          kal_bool             is_data_roaming_setting_enabled,
                                          custom_ssds_ims_domain_type   ims_domain,
                                          custom_ssds_roaming_type   roaming_status,
                                          custom_ssds_pdn_type    *pdn_type,
                                          custom_ssds_pdn_rat_type *pdn_rat_type,
                                          module_type module_id)
{
	_custom_ssds_get_pdn_setup_variable(req_info, op_id, is_mobile_data_setting_enabled,
									    is_data_roaming_setting_enabled, ims_domain, roaming_status,
									    pdn_type, pdn_rat_type, module_id);

	_custom_ssds_get_pdn_setup_nvram_variable(req_info, op_id, is_mobile_data_setting_enabled,
									    is_data_roaming_setting_enabled, ims_domain, roaming_status, pdn_type, pdn_rat_type);

	_custom_ssds_get_pdn_setup_post_variable(req_info, op_id, is_mobile_data_setting_enabled,
									    is_data_roaming_setting_enabled, ims_domain, roaming_status, pdn_type, pdn_rat_type);
}
#endif

/*
*   Check if needing to release PDN when below case happened:
*   1. mobile data setting change;
*   2. data_roaming_setting change
*   3. data_roaming status change
*/
void custom_ssds_get_pdn_release_variable(  kal_uint32              op_id,
                                            kal_bool                is_mobile_data_setting_enabled,
                                            kal_bool                is_data_roaming_setting_enabled,
                                            custom_ssds_roaming_type   roaming_status,
                                            kal_bool                *need_to_release)
{
    *need_to_release = KAL_FALSE;

    if ((136==op_id) || (1001==op_id))
    {
        if (KAL_TRUE != is_mobile_data_setting_enabled)
        {
            *need_to_release = KAL_TRUE;
            return;
        }

        if ((KAL_TRUE == is_mobile_data_setting_enabled) &&
            (KAL_TRUE != is_data_roaming_setting_enabled) &&
            (CUSTOM_SSDS_ROAMING_TYPE_NO != roaming_status))
        {
            *need_to_release = KAL_TRUE;
            return;
        }

    }
    else if  ((7==op_id) || (8==op_id) || (145==op_id) || (196==op_id) || (19==op_id)) /* Special case for AT&T, Telstra, TMO US */
    {
        *need_to_release = KAL_FALSE;
        return;
    }
    else
    {
        if ((KAL_TRUE != is_data_roaming_setting_enabled) &&
            (CUSTOM_SSDS_ROAMING_TYPE_NO != roaming_status))
        {
            *need_to_release = KAL_TRUE;
            return;
        }
    }

    return;
}

kal_uint32 custom_ssds_get_reuse_pdn_conn_timer_value( module_type src_module,
                                                       kal_uint32  op_id, kal_char	*mccmnc)
{
    kal_uint32 timer_value = 0;
    kal_bool test_sim_flag = KAL_FALSE;

    #if defined(__GEMINI__) || defined(__SGLTE__)
    test_sim_flag=is_test_sim(src_module - MOD_SSDS);
    #else
    test_sim_flag=is_test_sim();
    #endif

    if(KAL_TRUE == ssds_path_is_pct_icccard(src_module))
    {
        timer_value = CUSTOM_SSDS_REUSE_PDN_CONN_PCT_TIMEOUT_TICK;/* for PCT TEST:keep PDN and wait instrument to release PDN  */
    }
    else if(KAL_TRUE == test_sim_flag)
    {
        timer_value = 0;/* for test SIM */
    }
    else if(op_id == 16)
    {
        timer_value = KAL_TICKS_1_SEC * 240; /* EE UK requires that UE shall wait 4 minutes before sending a PDN Disconnect Request to NW to deactivate the eezone bearer */
    }
    else if(129 == op_id)
    {
        timer_value = KAL_TICKS_1_SEC * 300; /* KDDI requires that: if there is no data transimission in the PDN for 300 secconds, the device shall disconnect the PDN */
    }
    else if(0 == (kal_mem_cmp(mccmnc, "50503", 5))) /* Wait for 60 sec for Voda AU */
    {
        timer_value = KAL_TICKS_1_SEC * 60;
    }
    else if( 0 == kal_mem_cmp(mccmnc, "20801", 5) || 0 == kal_mem_cmp(mccmnc, "20802", 5)) /* Orange France */
    {
        timer_value = KAL_TICKS_1_SEC * 60 ;  /*1min */
    }
    else
    {
        timer_value = CUSTOM_SSDS_REUSE_PDN_CONN_TIMEOUT_TICK;/* for real network */
    }

    kal_prompt_trace(src_module,"%s %d the reuse PDN CONN timer value is:%d ",  __FUNCTION__, __LINE__, timer_value);

	return timer_value;
}

kal_bool ssds_need_retry_default_apn(module_type module_id,kal_uint32  op_id,kal_char *mccmnc)
{
    kal_bool ret_value = KAL_TRUE;

    if(KAL_TRUE == sbp_query_md_feature_by_ps(SBP_NOT_TRY_DEFAULT_APN_FOR_SS,(protocol_id_enum)(module_id - MOD_SSDS))
       || (op_id == 5) || (op_id == 109) || (op_id == 129) || (op_id == 219) ||
       (0 == (kal_mem_cmp(mccmnc, "23415", 5))) || (0 == (kal_mem_cmp(mccmnc, "24601", 5))))
    {//SBP on or xcap in other APN ,not in default apn,we should not try the default APN
        ret_value = KAL_FALSE;
    }

    return ret_value;
}

#if 1
void _custom_ssds_get_pdn_fail_path_variable(kal_uint32 op_id,
                                             custom_ssds_info_struct path_req_info,
                                             custom_ssds_roaming_type roaming_type,
                                             kal_uint32 esm_cause,
                                             kal_bool ims_status,
                                             custom_ssds_ims_domain_type cus_ims_type,
                                             custom_ssds_pdn_fail_path_type *path_type)
{
    /*special case for CT*/
    if (op_id == 9)
    {
        /*only ct_volte==enable and roaming is international, can allow CSFB: treated as CMCC*/
        if ((KAL_TRUE != path_req_info.is_ct_volte_enabled) ||
            (CUSTOM_SSDS_ROAMING_TYPE_INTERNATIONAL != roaming_type))
        {
            *path_type = CUSTOM_SSDS_PDN_FAIL_PATH_TYPE_NO_CSFB_31;
            return;
        }
    }

    /* special case for Smarten(CDMA solution) and RJIL(4G only solution) and Seatel(4G only solution) */
    if (op_id == 117 || op_id == 18 || op_id == 148)
    {
         /* ALPS04174847: In international romaing, PDN fail, try on CS once */
        if (op_id == 18 && CUSTOM_SSDS_ROAMING_TYPE_INTERNATIONAL == roaming_type)
        {
            *path_type = CUSTOM_SSDS_PDN_FAIL_PATH_TYPE_CSFB_ONCE;
        }
        else
        {
            *path_type = CUSTOM_SSDS_PDN_FAIL_PATH_TYPE_NO_CSFB;
        }
        return;
    }

    /* CSFB always after received PDN reject cause #32 or #55 from Telia LT network */
    if ((0 == (kal_mem_cmp(path_req_info.mccmnc, "24601", 5))) && 
        ((esm_cause == RMMI_ERR_SERV_OPTION_NOT_SUPPORTED) || (esm_cause == ESM_MULTIPLE_PDN_APN_NOT_ALLOWED)))
    {
        *path_type = CUSTOM_SSDS_PDN_FAIL_PATH_TYPE_CSFB_ALWAYS;
        return;
    }

    /* ALPS0461329: Telstra(19) needs on ESM_REQ_SERVICE_NOT_SUBSCRIBED error, CSFB_always */
    if(op_id == 19 && esm_cause == ESM_REQ_SERVICE_NOT_SUBSCRIBED)
    {
        *path_type = CUSTOM_SSDS_PDN_FAIL_PATH_TYPE_CSFB_ALWAYS;
        return;
    }

    return;
}

void _custom_ssds_get_pdn_fail_path_nvram_variable(kal_uint32 op_id,
                                                   custom_ssds_info_struct path_req_info,
                                                   custom_ssds_roaming_type roaming_type,
                                                   kal_uint32 esm_cause,
                                                   kal_bool ims_status,
                                                   custom_ssds_ims_domain_type cus_ims_type,
                                                   custom_ssds_pdn_fail_path_type *path_type)
{
#if 1
    nvram_ef_ssds_pdn_fail_profile_value_struct	 request_info;
    nvram_ef_ssds_pdn_fail_profile_action_struct request_action;

    kal_mem_set(&request_info, 0x0, sizeof(nvram_ef_ssds_pdn_fail_profile_value_struct));

    request_info.esm_cause = esm_cause;
    request_info.op_id = op_id;
    kal_mem_cpy(&(request_info.mccmnc[0]), &(path_req_info.mccmnc[0]), 6);
    request_info.sim_type = path_req_info.sim_type;
    request_info.ims_registered = ims_status;
    request_info.ims_domain = cus_ims_type;
    request_info.roaming_type = roaming_type;

    if (KAL_TRUE == (custom_ssds_config_get_pdn_fail_path(path_req_info.sim_id, &request_info, &request_action)))
    {
        *path_type = request_action.pdn_fail_path;
        kal_prompt_trace(MOD_SSDS, "Use NVRAM reqeust result");
    }
#endif
}

void _custom_ssds_get_pdn_fail_path_post_variable(kal_uint32 op_id,
                                                  custom_ssds_info_struct path_req_info,
                                                  custom_ssds_roaming_type roaming_type,
                                                  kal_uint32 esm_cause,
                                                  kal_bool ims_status,
                                                  custom_ssds_ims_domain_type cus_ims_type,
                                                  custom_ssds_pdn_fail_path_type *path_type)
{
    return;
}


void custom_ssds_get_pdn_fail_path_variable(kal_uint32 op_id,
                                            custom_ssds_info_struct path_req_info,
                                            custom_ssds_roaming_type roaming_type,
                                            kal_uint32 esm_cause,
                                            kal_bool ims_status,
                                            custom_ssds_ims_domain_type cus_ims_type,
                                            custom_ssds_pdn_fail_path_type *path_type)
{
    _custom_ssds_get_pdn_fail_path_variable(op_id,path_req_info,roaming_type,esm_cause,
                                            ims_status,cus_ims_type,path_type);

    _custom_ssds_get_pdn_fail_path_nvram_variable(op_id,path_req_info,roaming_type,esm_cause,
                                                  ims_status,cus_ims_type,path_type);

    _custom_ssds_get_pdn_fail_path_post_variable(op_id,path_req_info,roaming_type,esm_cause,
                                                 ims_status,cus_ims_type,path_type);
}
#endif

kal_bool custom_ssds_is_csfb_allowed(kal_uint32 op_id, kal_char *mccmnc, custom_ssds_roaming_type roaming_type)
{
    kal_bool is_csfb_allowed = KAL_TRUE;

    if (117 == op_id && CUSTOM_SSDS_ROAMING_TYPE_NO == roaming_type)
    {
        is_csfb_allowed = KAL_FALSE;
    }
    return is_csfb_allowed;
}

kal_bool custom_ssds_is_csfb_during_imsCall_allowed(kal_uint32 op_id,
                                                    kal_char *mccmnc,
                                                    custom_ssds_roaming_type roaming_type,
                                                    custom_ssds_ims_domain_type ims_domain,
                                                    kal_bool is_wfc_call)
{
    kal_bool is_csfb_allowed = KAL_FALSE;
    /* M1(Singapore) */
    if(KAL_TRUE == is_wfc_call)
    {
        is_csfb_allowed = KAL_TRUE;
    }

    return is_csfb_allowed;
}

kal_bool custom_only_ps_supported_atcmd( custom_ssds_info_struct  *req_info,
                                                              kal_uint32  op_id,
                                                              kal_bool    is_ims_registered,
                                                              custom_ssds_ims_domain_type   ims_domain,
                                                              custom_ssds_roaming_type     roaming_status,
                                                              kal_bool             is_mobile_data_setting_enabled,
                                                              kal_bool ps_status,
                                                              custom_ssds_rf_status rf_status,
                                                              custom_ssds_atcmd_info *atcmd_info,
                                                              custom_ssds_path_type           *atcmd_req_type
                                                         )
    
{
    if((atcmd_info->atcmd_type== CUSTOM_SSDS_ATCMD_TYPE_SET_COLR) && (op_id == 1 || op_id == 2))
    {//special case for CMCC/CU
        *atcmd_req_type = custom_ssds_get_req_path_variable(req_info, op_id, is_ims_registered,
                        ims_domain, roaming_status, is_mobile_data_setting_enabled, ps_status, rf_status, atcmd_info);
        return KAL_TRUE;
    }
    return KAL_FALSE;
}

kal_bool custom_only_cs_supported_atcmd(custom_ssds_info_struct  *req_info,
                                                              kal_uint32  op_id,
                                                              kal_bool    is_ims_registered,
                                                              custom_ssds_ims_domain_type   ims_domain,
                                                              custom_ssds_roaming_type     roaming_status,
                                                              kal_bool             is_mobile_data_setting_enabled,
                                                              kal_bool ps_status,
                                                              custom_ssds_rf_status rf_status,
                                                              custom_ssds_atcmd_info *atcmd_info,
                                                              custom_ssds_path_type           *atcmd_req_type
                                                         )
{
    return KAL_FALSE;
}

