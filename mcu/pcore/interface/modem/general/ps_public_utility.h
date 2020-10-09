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
 * ps_public_utility.h
 *
 * Description:
 * ------------
 *   This file is intends for put the header of PS public API
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
 * removed!
 * removed!
 *
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
*****************************************************************************/
#ifndef _PS_PUBLIC_UTILITY_H_
#define _PS_PUBLIC_UTILITY_H_

#include "kal_general_types.h"
#include "ps_public_struct.h"
#include "sim_public_enum.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "keypad_sw.h"
#include "nvram_data_items.h"
#include "sbp_public_utility.h"

#include "c2k_irat_msg_struct.h"

extern kal_uint8 l4c_cc_ss_string_parsing(kal_uint8 *string_ptr, kal_uint8 length, kal_uint8 sim_interface, kal_bool is_in_call);

#ifdef __SGLTE_DSDS__
extern kal_bool is_SGLTE_4G_switched();
#else
extern sim_interface_enum l4c_gemini_get_actual_sim_id(sim_interface_enum simId);
#endif

extern sim_interface_enum l4c_gemini_get_switched_sim_id(sim_interface_enum simId);

extern sim_interface_enum l4c_csus_get_actual_sim_slot_id(protocol_id_enum sim_ps_Id);

extern protocol_id_enum l4c_csus_get_switched_sim_ps_id(sim_interface_enum sim_slot_Id);

extern module_type rmmi_get_default_uart_owner(void);

extern void smsal_gsm7_unpack(kal_uint8  *packed_data, kal_uint8  *unpacked_data, kal_uint16 data_len, kal_uint16 offset);
extern kal_uint16 smsal_msg_len_in_character(kal_uint8 dcs, kal_uint16 len, kal_uint8 last_byte);
extern kal_bool smsal_is_support_r4_mbdn(void);
extern void smsal_sdm_set_tp_rd(kal_uint8 *str, kal_uint16 str_len);
extern kal_uint8 smsal_cmgf_query_with_ps_id(kal_uint8 ps_id);

extern kal_bool l4c_kbd_getkeydata(kbd_data *keydata);

//move to ATP extern void rmmi_sleep_mode_callback(void);

extern void l4c_report_voice_codec(kal_uint16 codec);

extern kal_bool tcm_get_ims_flag_by_nsapi(kal_uint8 nsapi, kal_uint8 sim_interface);
extern kal_uint16 tcm_get_ims_flag_to_bitmap(kal_uint8 sim_interface);
// CSR
#ifdef __VIDEO_CALL_SUPPORT__
typedef void (*fp_vt_csr_activate_req)(void);
typedef void (*fp_vt_csr_deactivate_req)(void);

extern fp_vt_csr_activate_req csr_get_fp_vt_csr_activate_req(void);
extern fp_vt_csr_deactivate_req csr_get_fp_vt_csr_deactivate_req(void);
#endif

#if defined(__FAST_DORMANCY__) || defined(__NO_PSDATA_SEND_SCRI__)
/****************************************************************************
 * Function:    RRC_CPCSupport
 *
 * Description: Return TRUE if UE supports CPC.
 *****************************************************************************/
extern kal_bool RRC_CPCSupport(void);

#ifdef __FAST_DORMANCY__
/****************************************************************************
 * Function:    RRC_NW_R8_FD_Support
 *
 * Description: Return TRUE if NW supports T323.
 *****************************************************************************/
extern kal_bool RRC_NW_R8_FD_Support();
#endif /* __FAST_DORMANCY__ */
#endif /* __FAST_DORMANCY__ || __NO_PSDATA_SEND_SCRI__ */


/*****************************************************************************
* FUNCTION
*   sbp_query_id()
*
* DESCRIPTION
*   This function is used to query SBP ID received by modem
*
* PARAMETERS
*   [IN]    N/A
* RETURNS
*   the unsigned 4-byte value for the SBP ID
*****************************************************************************/
extern kal_uint32 sbp_query_id(void);

/*****************************************************************************
* FUNCTION
*   l4c_get_iratmode_req()
*
* DESCRIPTION
*   This function is used to get the setting of iratmode
*
* PARAMETERS
*   N/A
*
* RETURNS
*   l4c_irat_type_enum  0: AP based iRAT; 1: modem based iRAT
*****************************************************************************/
extern l4c_irat_type_enum l4c_get_iratmode_req(void);

#ifdef __CDMA2000_RAT__
/*****************************************************************************
* FUNCTION
*   errc_cel_com_lte_rat_info_to_as_info()
*
* DESCRIPTION
*   This function is used in IRAT from C2K to LTE (LTE <--RAT_CHANGE_REQ-- C2K) to convert LTE RAT info (from C2K) into EAS RAT info (for EAS)
*
* PARAMETERS
*   a_irat_type        [IN]    IRAT type from C2K to LTE
*   *a_lte_rat_info    [IN]    LTE RAT info from C2K
*
* RETURNS
*   EAS RAT info pointer, which the data is converted from *a_lte_rat_info
*****************************************************************************/
extern void *errc_cel_com_lte_rat_info_to_as_info(irat_type_enum a_irat_type, cas_eas_activate_ecell_req_struct *a_lte_rat_info);

/*****************************************************************************
* FUNCTION
*   errc_cel_com_as_info_ptr_to_as_irat_info()
*
* DESCRIPTION
*   This function is used in IRAT from C2K to LTE (LTE --RAT_CHANGE_CNF--> C2K) to convert EAS RAT info (from EAS) into C2K RAT info (for C2K)
*
* PARAMETERS
*   *a_as_info_ptr     [IN]      LTE RAT info from EAS
*   *c2k_rat_info      [IN/OUT]  LTE RAT info, containing info converted from *a_as_info_ptr, for C2K
*
* RETURNS
*   N/A
*****************************************************************************/
extern void errc_cel_com_as_info_ptr_to_c2k_rat_info(void *a_as_info_ptr, cas_eas_activate_ecell_cnf_struct *c2k_rat_info);

/*****************************************************************************
* FUNCTION
*   errc_cel_com_as_info_to_c2k_rat_info()
*
* DESCRIPTION
*   This function is used in IRAT from LTE to C2K (LTE --RAT_CHANGE_IND--> C2K) to convert EAS RAT info (from EAS) into C2K RAT info (for C2K)
*
* PARAMETERS
*   *a_as_info_ptr     [IN]      C2K RAT info from EAS
*   *c2k_rat_info      [IN/OUT]  C2K RAT info, containing info converted from *a_as_info_ptr, for C2K
*
* RETURNS
*   N/A
*****************************************************************************/
extern void errc_cel_com_as_info_to_c2k_rat_info(eas_cas_activate_ccell_req_struct *c2k_rat_info, void *a_as_info_ptr);

/*****************************************************************************
* FUNCTION
*   errc_cel_com_c2k_rat_info_to_as_info_ptr()
*
* DESCRIPTION
*   This function is used in IRAT from LTE to C2K (LTE <--RAT_CHANGE_RSP-- C2K) to convert C2K RAT info (from C2K) into EAS RAT info (for EAS)
*
* PARAMETERS
*   a_irat_type        [IN]      IRAT type from LTE to C2K
*   *c2k_rat_info      [IN]      C2K RAT info from C2K
*
* RETURNS
*   C2K RAT info pointer, which the data is converted from *c2k_rat_info
*****************************************************************************/
extern void *errc_cel_com_c2k_rat_info_to_as_info_ptr(irat_type_enum a_irat_type, eas_cas_activate_ccell_cnf_struct *c2k_rat_info);
#endif /* __CDMA2000_RAT__ */


extern void l4ctcm_translate_apn_to_spec_format(kal_uint8 *access_name, kal_uint8 *src_apn, kal_uint8 apn_len);
extern kal_uint8 l4ctcm_translate_apn_to_string_format(kal_uint8 *src_apn, kal_uint8 *dst_apn);
/*****************************************************************************
* FUNCTION
*   l4c_set_dynamic_sbp_id()
*
* DESCRIPTION
*   Change SBP ID dynamically according to the inserted SIM.
*
* PARAMETERS
*   void
*
* RETURNS
*   void
*****************************************************************************/

extern void l4c_set_dynamic_sbp_id(void);

/*****************************************************************************
* FUNCTION
*   check_if_icc_is_KOR_KT_OP_card()
*
* DESCRIPTION
*   This function is used to check whether the inserted SIM card is KT Operator or not.
*
* PARAMETERS
*
* RETURNS
*   TRUE or FALSE
*****************************************************************************/
extern kal_bool check_if_icc_is_KOR_KT_OP_card();

/*****************************************************************************
* FUNCTION
*   check_if_icc_is_KOR_SKT_OP_card()
*
* DESCRIPTION
*   This function is used to check whether the inserted SIM card is SKT Operator or not.
*
* PARAMETERS
*
* RETURNS
*   TRUE or FALSE
*****************************************************************************/
extern kal_bool check_if_icc_is_KOR_SKT_OP_card();

/*****************************************************************************
* FUNCTION
*   check_if_icc_is_KOR_LGUPLUS_OP_card()
*
* DESCRIPTION
*   This function is used to check whether the inserted SIM card is LGUPLUS Operator or not.
*
* PARAMETERS
*
* RETURNS
*   TRUE or FALSE
*****************************************************************************/
extern kal_bool check_if_icc_is_KOR_LGUPLUS_OP_card();

/*****************************************************************************
* FUNCTION
*   check_if_icc_is_KOR_OP_card()
*
* DESCRIPTION
*   This function is used to check whether the inserted SIM card is Korea Operator or not.
*
* PARAMETERS
*
* RETURNS
*   TRUE or FALSE
*****************************************************************************/
extern kal_bool check_if_icc_is_KOR_OP_card();

/*******************************************************************************
    Function Name:
        mrs_eas_is_supported_band_public

    Parameters: [in] lte_band:

    Return Value: If input band is LTE / UE supported band

    Description:
        This function checks if input band is LTE / UE supported band.
        It is defined in public header file for modules not belong to Modem private group, ex : Middleware LBS
*******************************************************************************/
kal_bool mrs_eas_is_supported_band_public(kal_uint16 sim_index, kal_uint16 lte_band); /*form 1 to max_band*/

#ifdef __IMS_SUPPORT__
extern kal_bool imcsms_get_mt_ims_sms_info(sms_concat_struct sms_concat_info,kal_uint32 *seg_bitmask,kal_uint8 ps_id);
#endif
extern kal_bool sms_get_mt_sgs_sms_info(sms_concat_struct imcsms_concat_info,kal_uint32 *seg_bitmask,kal_uint8 ps_id);


extern kal_bool phb_util_is_usim_csim(kal_uint8 sim_num);

#endif /* _PS_PUBLIC_UTILITY_H_ */

