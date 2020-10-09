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
 * sbp_nvram_rrm_config.c
 *
 * Project:
 * --------
 *   LR12A.R3.MP
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
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/


#include "kal_general_types.h"
#include "sbp_public_utility.h"
#include "l4_nvram_editor.h"
#include "l4_nvram_def.h"
#include "nvram_interface.h"
#include "custom_iwlan_config.h"

extern sim_interface_enum l4c_gemini_get_actual_sim_id(sim_interface_enum simId);

/*****************************************************************************
 * FUNCTION
 *      nvram_custom_config_band_info_profile
 * DESCRIPTION
 *      this function modifies the band priotrity that customer wants as per SBP ID (for specific SIM)
 * PARAMETERS
 *  pointer to sbp_reconfig_custom_param_struct which contains DSBP feature related information like 
 *  the stack ID, SBP_ID, etc
 * RETURNS
 *  none
 *****************************************************************************/


void nvram_custom_config_band_info_profile(sbp_reconfig_custom_param_struct *param_ptr)
{

    /*nvram_ef_band_info_struct* nvram_bi_ptr = NULL; */
     kal_uint8 *nvram_cur_buf_ptr = NULL;
    kal_uint8  *nvram_read_buf_ptr = NULL;
    
    kal_bool update_nvram = KAL_FALSE;
    sim_interface_enum sim_slot_id = l4c_gemini_get_actual_sim_id((sim_interface_enum)param_ptr->ps_id)+1;

    nvram_cur_buf_ptr =  (kal_uint8*) get_ctrl_buffer(sizeof(kal_uint8) * NVRAM_EF_BAND_INFO_SIZE);

    if (NVRAM_DEFAULT_VALUE_POINT == nvram_get_default_value(NVRAM_EF_BAND_INFO_LID,
                                                             sim_slot_id,
                                                             &nvram_read_buf_ptr))
    {
         nvram_external_write_data(NVRAM_EF_BAND_INFO_LID,
                                   sim_slot_id,
                                   nvram_read_buf_ptr,
                                  (sizeof(kal_uint8)* NVRAM_EF_BAND_INFO_SIZE));
    }

     kal_mem_cpy(nvram_cur_buf_ptr,nvram_read_buf_ptr,(sizeof(kal_uint8) * NVRAM_EF_BAND_INFO_SIZE));
     
    /* nvram_external_read_data(NVRAM_EF_BAND_INFO_LID,
                             sim_slot_id,
                             nvram_read_buf_ptr,
                            (sizeof(kal_uint8)* NVRAM_EF_BAND_INFO_SIZE));  */


    
    /*nvram_bi_ptr = (nvram_ef_band_info_struct*)nvram_read_buf_ptr;      */
 /*   ***** short description of this bad priority field  *******
                when __BAND_PRIORITY_SEARCH__ is defined, this
               * byte is used to set the priority for each band:
               *
               *      850     1900    1800    900
               *     +-------------------------------+
               * bit | 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
               *     +-------------------------------+
               * The priority of each band is representive by two bits:
               *
               * <ex> bit 5 and 4 is the priority for 1900 band:
               *         '0'   '0' -> priority value 0
               *         '0'   '1' -> priority value 1
               *         '1'   '0' -> priority value 2
               *         '1'   '1' -> priority value 3
               *
               *      The smaller the value is, the higher the priroity is:
               *      (1) if no band is preferred, the value can be assigned:
               *          0x00, 0x55, 0xaa, or 0xff
               *      (2) if 900/1800 is prefered, the value can be assigned:
               *          0x50, 0xF0, 0xF5 and so on.
               *      (3) if 850/1900 is prefered, the value can be assigned:
               *          0x05, 0x0F, 0x5F and so on.
               *      (4) if the band prefered order is 1900 -> 8500 -> 900 -> 1800,
               *          the value 0x4e (0100 1110) should be used.
               */
               
          /*  Customer needs to uncomment the below switch code for adding SBP ID and setting the values for the SBP ID */
         
         /*

                  switch(param_ptr->sbp_id)
                  {
                   case X: 
                             // customer can configure the priority of bands
                             // 6th BYTE of LID (starting from BYTE1) indicates the band priority to be considered for 2G to camp on.

                            nvram_bi_ptr->raw_data[5] = 0xXX; 
                            update_nvram =KAL_TRUE;
                           break;

                  //example to fill sbp id and values for band priority for this SBP is below
                   case 2: 
                             // customer can configure the priority of bands
                             // 6th BYTE of LID (starting from BYTE1) indicates the band priority to be considered for 2G to camp on.

                            nvram_bi_ptr->raw_data[5] = 0xbb;  
                             update_nvram =KAL_TRUE;
                           break;       

                     default:
                           update_nvram =KAL_FALSE;
                      }
                      
                  */
                 

     if( update_nvram ==KAL_TRUE)
     {
          nvram_external_write_data(NVRAM_EF_BAND_INFO_LID,
                                    sim_slot_id,
                                    nvram_cur_buf_ptr,
                                    (sizeof(kal_uint8)* NVRAM_EF_BAND_INFO_SIZE));
     }                     

     if (nvram_cur_buf_ptr != NULL)
     {
         free_ctrl_buffer(nvram_cur_buf_ptr);
         nvram_cur_buf_ptr = NULL;
     }

     nvram_read_buf_ptr = NULL;

      

}

/*****************************************************************************
 * FUNCTION
 *      nvram_custom_config_mrs_profile
 * DESCRIPTION
 *      Set NVRAM LIDs those that are controlled by MRS
 * PARAMETERS
 *      pointer to sbp_reconfig_custom_param_struct which contains DSBP feature related information like 
 *      the stack ID, SBP_ID, etc
 * RETURNS
 *  none
 *****************************************************************************/
void nvram_custom_config_rrm_profile(sbp_reconfig_custom_param_struct *param_ptr)
{

     nvram_custom_config_band_info_profile( param_ptr);
 
}



