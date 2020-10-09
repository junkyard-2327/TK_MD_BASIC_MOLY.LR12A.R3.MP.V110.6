/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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

/****************************************************************************
 * Filename:
 * ---------
 *   errc_mrs_interface.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *   ERRC MRS interface functions
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 05 07 2019 yung-chun.chang
 * [MOLY00399729] [R3][ERRC] LTE CA table rearch
 * 	
 * 	oa part(LR12A.R3.MP).
 *
 * 01 30 2019 yung-chun.chang
 * [MOLY00382085] [Gen93][ERRC] CA HPUE
 * 	
 * 	oa part.
 *
 * 11 21 2018 yung-chun.chang
 * [MOLY00365358] [Sony][SM33][FT] 在美?FCC网?下，通?MCC 自?disable Band38和B40。main
 * 	
 * 	mrs part.
 *
 * 02 26 2018 morton.lin
 * [MOLY00309519] [Gen93/95][UMOLYA][ERRC][RCM] WWLTEDB table movement for better customization
 * 1. LTEBand and CAComb table movement
 * 	2. Introduce LTEBandExcl
 * 	3. Add new DL only bands - B75 & B76
 *
 * 12 11 2017 morton.lin
 * [MOLY00295077] [Gen93][ERRC][RCM] LTE support band and CA combination customization re-arch
 * Common IF and MRS part (LR12A.R3.MP) (Not in V-List)
 *
 * 11 29 2017 yung-chun.chang
 * [MOLY00292082] [Gen93][TMO] 2G disable with ecc enable
 * rcm oa part
 *
 * 01 25 2017 menghau.wu
 * [MOLY00217129] [MT6293] code sync from UMOLY (Phase4)
 * UMOLY CR : [MOLY00223173] [6292][Gemini][L+L][Merge LR12][WCS/SE3/PS1~PS15]
 * UMOLY CL : 3370203
 *
 * 03 09 2016 sabrina.hsu
 * [MOLY00156230] [6292] ERRC code sync LR11 to UMOLY
 * merge LR11 CL 1801342 [MOLY00148166]CT CA capability query support
 *
 * 02 17 2016 sabrina.hsu
 * [MOLY00156230] [6292] ERRC code sync LR11 to UMOLY
 * mrs/nvram/sbp merge
 *
 *
 ****************************************************************************/

#ifndef _ERRC_MRS_INTERFACE_H_
#define _ERRC_MRS_INTERFACE_H_

#include "kal_general_types.h"
#include "mrs_as_enums.h"
#include "mrs_as_struct.h"
#include "errc_nvram_editor.h"
#include "el1d_rf_public.h"
#include "custom_eas_config.h"

/****************************************************************************
 * FUNCTION
 *     errc_ue_eutra_capability_get
 *
 * DESCRIPTION
 *     Get the encoded UE-EUTRA-Capability IE as defined in 36.311
 *
 * PARAMETERS
 *     @param
 *         MRS_SIM_INDEX sim_index:
 *            SIM Index (currently, only the value 'MRS_SIM1' is supported).
 *     @param
 *         kal_uint8 **pp_ue_eutra_capa:
 *             Address of pointer to the encoded UE-EUTRA-Capability IE.
 *             Function allocates memory for the encoded IE and sets the
 *             pointer (*pp_ue_eutra_capa) to point to it. 
 *             Caller is responsible for releasing the memory.
 *     @param
 *         mrs_plmn_id_list *p_plmn_id_list
 *             The list of PLMN Id on which UE camped.
 *             NOTE: The mnc3 should be set to 0x00 or 0x0F if it's not
 *                   being used. (i.e. 5 digits PLMN Id)
 * RETURNS
 *    @return
 *        kal_uint32: Length of the encoded UE-EUTRA-Capability IE in bytes.
 *
 * GLOBALS AFFECTED
 ****************************************************************************/

kal_uint32 errc_ue_eutra_capability_get(
    MRS_SIM_INDEX sim_index, kal_uint8 **pp_ue_eutra_capa, mrs_plmn_id_list *p_plmn_id_list, kal_bool is_disable_gsm);

/****************************************************************************
 * FUNCTION
 *     errc_rcm_any_get_ue_category
 *
 * DESCRIPTION
 *     Get the LTE UE category
 *
 * PARAMETERS
 *     @param
 *       void
 * RETURNS
 *    @return
 *        kal_uint8: LTE UE categoty defined by ERRC RCM
 *
 * GLOBALS AFFECTED
 ****************************************************************************/
kal_uint8 errc_rcm_any_get_ue_category(void);

#ifndef __LTE_CA_TBL_V2_SUPPORT__
/****************************************************************************
 * FUNCTION
 *     errc_rcm_get_lte_support_band_for_mcc
 *
 * DESCRIPTION
 *     Get the World Wide LTE Support Band by Mobile Country Code
 *
 * PARAMETERS
 *     @param
 *       [in] SIM index
 *       [in] PLMN Id (MNC part will be skipped)
 *       [out] Pointer to an array which can hold 32 elements each contains
 *             kal_uint8 bitmask. The LSB in byte 0 is the Band 1.
 *             Bit '1': supported ; Bit '0': not supported
 * RETURNS
 *    @return
 *        kal_bool: TRUE if valid support band bitmask got successfully, and
 *                  the content of p_lte_band_bitmask is the result.
 *                  FALSE if no valid support band information got.
 *
 * GLOBALS AFFECTED
 ****************************************************************************/
kal_bool errc_rcm_get_lte_support_band_for_mcc(
    const MRS_SIM_INDEX sim_idx,
    const mrs_plmn_id *p_plmn_id,
    kal_uint8 *p_lte_band_bitmask);
#endif

/****************************************************************************
 * FUNCTION
 *     errc_rcm_get_lte_support_band_from_table
 *
 * DESCRIPTION
 *     Get the LTE Support Band from table
 *
 * PARAMETERS
 *     @param
 *       [in] SIM index
 *       [in] PLMN Id (MNC part will be skipped)
 *       [out] Pointer to an array which can hold 32 elements each contains
 *             kal_uint8 bitmask. The LSB in byte 0 is the Band 1.
 *             Bit '1': supported ; Bit '0': not supported
 *       [in] which table: if __LTE_CA_TBL_V2_SUPPORT__ define, can choose Capability size table/CA selection table/(eas global support band table is only for disable band by sim+cplmn for china)
                           else, only can choose eas global support band table 
 *       [in] plmn num for source table
 * RETURNS
 *    @return
 *        kal_bool: TRUE if valid support band bitmask got successfully, and
 *                  the content of p_lte_band_bitmask is the result.
 *                  FALSE if no valid support band information got.
 *
 * GLOBALS AFFECTED
 ****************************************************************************/

kal_bool errc_rcm_get_lte_support_band_from_table(
    const MRS_SIM_INDEX sim_idx,
    const mrs_plmn_id *p_plmn_id,
    kal_uint8 *p_lte_band_bitmask,
	const eas_global_support_band_struct *src_table,
	kal_uint32 src_table_plmn_num);

/****************************************************************************
 * FUNCTION
 *     errc_rcm_get_lte_support_band_for_plmn_list
 *
 * DESCRIPTION
 *     Get the World Wide LTE Support Band by Public Land Mobile Network 
 *     Identity list
 *
 * PARAMETERS
 *     @param
 *       [in] SIM index
 *       [in] PLMN Id List
 *       [out] Pointer to an array which can hold 32 elements each contains
 *             kal_uint8 bitmask. The LSB in byte 0 is the Band 1.
 *             Bit '1': supported ; Bit '0': not supported
 *       [in] whether support requestFrequencyband(NW+UE)
 * RETURNS
 *    @return
 *        kal_bool: TRUE if valid support band bitmask got successfully, and
 *                  the content of p_lte_band_bitmask is the result.
 *                  FALSE if no valid support band information got.
 *
 * GLOBALS AFFECTED
 ****************************************************************************/
kal_bool errc_rcm_get_lte_support_band_for_plmn_list(
    const MRS_SIM_INDEX sim_idx,
    const mrs_plmn_id_list *p_plmn_id_list,
    kal_uint8 *p_lte_band_bitmask,
    kal_bool is_requestfreban);

/****************************************************************************
 * FUNCTION
 *     errc_rcm_get_custom_disable_band_list
 *
 * DESCRIPTION
 *     Get the custom disable band list setting by nvram 
 *
 * PARAMETERS
 *     @param
 *       [in] SIM index
 *       [out] p_positive_disable_band_list
 *       [out] p_inverted_disable_band_list
 * RETURNS
 *    @return
 *
 * GLOBALS AFFECTED
 ****************************************************************************/
void errc_rcm_get_custom_disable_band_list(
    const MRS_SIM_INDEX sim_idx,
    nvram_errc_custom_disable_band_positive_struct *p_positive_disable_band_list,
    nvram_errc_custom_disable_band_inverted_struct *p_inverted_disable_band_list);	
	
/****************************************************************************
 * FUNCTION
 *     errc_rcm_check_special_plmn_excluded
 *
 * DESCRIPTION
 *     Check if the input PLMN List contains any special PLMN which is set to
 *     be excluded from being filtered by global LTE support band table.
 *
 * PARAMETERS
 *     @param
 *       [in] SIM index
 *       [in] PLMN Id List
 *
 * RETURNS
 *    @return
 *        kal_bool: TRUE if the input PLMN list contains one or more special
 *        PLMN identities.
 *
 * GLOBALS AFFECTED
 ****************************************************************************/
kal_bool errc_rcm_check_special_plmn_excluded(
    const MRS_SIM_INDEX sim_idx,
    const mrs_plmn_id_list *p_plmn_id_list);


#if defined(__GEMINI_LTE__) && defined(UNIT_TEST)     //Gemini Multi LTE UT
/****************************************************************************
 * FUNCTION
 *     errc_ut_duplicate_nvram_for_multiSIM
 *
 * DESCRIPTION
 *     Function called by MRS_EAS to get ERRC MoDIS ut_duplicate_nvram_multiSIM setting
 *
 * PARAMETERS
 *     @param
 *       void
 * RETURNS
 *    @return
 *        0: default duplicate NVRAM fro other SIM; 1: no duplicating, setting nvram is invoked by MSC
 *
 * GLOBALS AFFECTED
 ****************************************************************************/
kal_uint8 errc_ut_duplicate_nvram_for_multiSIM(void);
#endif    // defined(__GEMINI_LTE__) && defined(UNIT_TEST)

#endif /* _ERRC_MRS_INTERFACE_H_ */
