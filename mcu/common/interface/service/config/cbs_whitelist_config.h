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
 *   cbs_whitelist_config.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file contains the function prototypes of the buffer allocation module.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*********************************************************************
   (C) _____ (year of first publication) Sasken communication
   Technologies Limited, All rights reserved.
*   This file provides a template for .c files. This space
*   should be used to describe the file contents
*   Component-specific prefix : xxxx
*********************************************************************/

#ifndef _CBS_WHITELIST_CONFIG_H
#define _CBS_WHITELIST_CONFIG_H

#if defined(DEBUG_BUF2) && defined(__MTK_TARGET__)
#include "kal_general_types.h"
#include "kal_public_defs.h"

/*************************************************************************
 * Type Definitions
 *************************************************************************/
#define MAX_TOLERANCE (0xFFFF)
#define BUFFER_LEAKAGE_DISPLAY_NUMBER (16)

typedef struct buff_whitelist_trace_struct {
   struct kal_int_task_struct *owner_task;
   kal_char                   *task_name;
   const kal_char             *file_name;
   void                       *user_ptr;
   kal_uint32                 line;
   kal_uint32                 size;
   kal_uint32                 ticks_stamp;
   kal_uint16                 alloc_id;
} buff_whitelist_trace_s;
 
/* file /owner task/module */
typedef struct buff_leakage_whitelist {
    const kal_char *file;            // file of buffer alloc
    const kal_char *owner_task_name; // task of buffer alloc
    module_type module;              // module of buffer alloc
    kal_uint16 tolerance;            // amount of ignored exceptions
} buff_leakage_whitelist_struct;
/*************************************************************************
 * Exported Function Prototypes
 *************************************************************************/
extern buff_whitelist_trace_s * kal_debug_get_whitelis_trace(kal_uint32* trace_no);
extern buff_whitelist_trace_s * kal_debug_get_leakage(kal_uint32* trace_no);

#endif
#endif /* _CBS_WHITELIST_CONFIG_H */

/*************************************************************************
 * Global Data
 *************************************************************************/
#if defined(DEBUG_BUF2) && defined(__MTK_TARGET__)
#if defined(CBS_WHITELIST_DATA) && (!defined(DUMMY_PROTOCOL))
#if defined(__UMTS_RAT__)
BUFFER_WHITELIST_DECLARE("mrs_gas_capability.c", "MRS", MOD_MRS, 2)
BUFFER_WHITELIST_DECLARE("mac_cfg_ciphering.c", "UL2", MOD_UMAC_FDD, 7)
BUFFER_WHITELIST_DECLARE("mac_phy.c", "UL2", MOD_UMAC_FDD, 6)
BUFFER_WHITELIST_DECLARE("mac_config.c", "UL2", MOD_UMAC_FDD, 1)
BUFFER_WHITELIST_DECLARE("rrci_fsm.c", "URR", MOD_ADR_FDD, 1)
#if defined(__GEMINI__) || defined(__SGLTE__)
BUFFER_WHITELIST_DECLARE("mrs_gas_capability.c", "MRS", MOD_MRS_2, 2)
#if (GEMINI_PLUS >= 3)
BUFFER_WHITELIST_DECLARE("mrs_gas_capability.c", "MRS", MOD_MRS_3, 2)
#if (GEMINI_PLUS >= 4)
BUFFER_WHITELIST_DECLARE("mrs_gas_capability.c", "MRS", MOD_MRS_4, 2)
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ */
#ifdef __UMTS_TDD128_MODE__
BUFFER_WHITELIST_DECLARE("scsi.c", "URR", MOD_MEME_TDD, MAX_TOLERANCE)
#endif
BUFFER_WHITELIST_DECLARE("scsi.c", "URR", MOD_MEME_FDD, MAX_TOLERANCE)
#endif /* __UMTS_RAT__ */

#if defined(__LTE_RAT__)
BUFFER_WHITELIST_DECLARE("emm_plmnsel_rcv_msg_evalif.cpp", "EMM", MOD_EMM, 1)
#endif

#ifdef __CDMA2000_RAT__
BUFFER_WHITELIST_DECLARE("gmss_sim_access.c", "NWSEL", MOD_GMSS, 12)
BUFFER_WHITELIST_DECLARE("gmss_list.c", "NWSEL", MOD_GMSS, 40)
BUFFER_WHITELIST_DECLARE("cssdbm.c", "CSS", MOD_CSS, 1)
#endif

#ifdef __UMTS_TDD128_MODE__
BUFFER_WHITELIST_DECLARE("dbme.c", "TRR", MOD_ADR_TDD, 24)
BUFFER_WHITELIST_DECLARE("dbme.c", "TRR", MOD_CSE_TDD, 24)
BUFFER_WHITELIST_DECLARE("ldbme.c", "LAS", MOD_LURR_TDD, 64)
#endif

BUFFER_WHITELIST_DECLARE("nwsel_ctrl_ilm_com.c", "NWSEL", MOD_NWSEL , 10) 
BUFFER_WHITELIST_DECLARE("nwsel_sim_access.c", "NWSEL", MOD_NWSEL , 2) 
BUFFER_WHITELIST_DECLARE("llc_abm_sapi.c", "LLC", MOD_LLC, 4)
BUFFER_WHITELIST_DECLARE("sim_handler.c", "SIM", MOD_SIM , 4)
BUFFER_WHITELIST_DECLARE("usim_handler.c", "SIM", MOD_SIM , 4)
BUFFER_WHITELIST_DECLARE("rmmi_analyzer.c", "L4C", MOD_L4C, 8)
BUFFER_WHITELIST_DECLARE("lbs_msg_hdlr.c", "LBS", MOD_LBS, 8)
BUFFER_WHITELIST_DECLARE("rcs_process.c", "RR_FDD", MOD_RRM_FDD, 1)
BUFFER_WHITELIST_DECLARE("rmc_cell_resel.c", "RR_FDD", MOD_RRM_FDD, 1)
BUFFER_WHITELIST_DECLARE("rmmi_utility.c", "L4", MOD_ATCI, 8)
BUFFER_WHITELIST_DECLARE("l4b_handler.c", "L4", MOD_L4B, 8)
BUFFER_WHITELIST_DECLARE("atp_atci_msgs.c", "ATP", MOD_ATP, 1)
BUFFER_WHITELIST_DECLARE("imc_em_hdlr.c", "IMC", MOD_IMC , 2)
BUFFER_WHITELIST_DECLARE("l4c_ps_cmd.c", "L4", MOD_L4C, 1)
BUFFER_WHITELIST_DECLARE("rmmi_msghdlr.c", "L4", MOD_ATCI, 32)
#if defined(__GEMINI__) || defined(__SGLTE__)
BUFFER_WHITELIST_DECLARE("dbme.c", "URR", MOD_RRCE_FDD , 1) 
BUFFER_WHITELIST_DECLARE("gmss_sim_access.c", "NWSEL", MOD_GMSS_2, 12)
BUFFER_WHITELIST_DECLARE("gmss_list.c", "NWSEL", MOD_GMSS_2, 40)
BUFFER_WHITELIST_DECLARE("nwsel_ctrl_ilm_com.c", "NWSEL", MOD_NWSEL_2 , 10) 
BUFFER_WHITELIST_DECLARE("nwsel_sim_access.c", "NWSEL", MOD_NWSEL_2 , 2) 
BUFFER_WHITELIST_DECLARE("llc_abm_sapi.c", "LLC", MOD_LLC_2, 4)
BUFFER_WHITELIST_DECLARE("sim_handler.c", "SIM2", MOD_SIM_2 , 4)
BUFFER_WHITELIST_DECLARE("usim_handler.c", "SIM2", MOD_SIM_2 , 4)
BUFFER_WHITELIST_DECLARE("imc_em_hdlr.c", "IMC", MOD_IMC_2 , 2)
BUFFER_WHITELIST_DECLARE("rmmi_analyzer.c", "L4C_2", MOD_L4C_2, 8)
BUFFER_WHITELIST_DECLARE("rmmi_utility.c", "L4_2", MOD_ATCI_2, 8)
BUFFER_WHITELIST_DECLARE("l4b_handler.c", "L4_2", MOD_L4B_2, 8)
BUFFER_WHITELIST_DECLARE("l4c_ps_cmd.c", "L4", MOD_L4C_2, 1)
BUFFER_WHITELIST_DECLARE("rmmi_msghdlr.c", "L4_2", MOD_ATCI_2, 32)
#ifdef __GEMINI_WCDMA__
BUFFER_WHITELIST_DECLARE("rrci_fsm.c", "URR", MOD_ADR_FDD_2, 1)
BUFFER_WHITELIST_DECLARE("dbme.c", "URR", MOD_RRCE_FDD_2, 1)
BUFFER_WHITELIST_DECLARE("mac_cfg_ciphering.c", "UL2", MOD_UMAC_FDD_2, 7)
BUFFER_WHITELIST_DECLARE("mac_phy.c", "UL2", MOD_UMAC_FDD_2, 6)
BUFFER_WHITELIST_DECLARE("mac_config.c", "UL2", MOD_UMAC_FDD_2, 1)
#endif /* __GEMINI_WCDMA__ */
BUFFER_WHITELIST_DECLARE("rmc_cell_resel.c", "RR_FDD", MOD_RRM_FDD_2, 1)
BUFFER_WHITELIST_DECLARE("rcs_process.c", "RR_FDD", MOD_RRM_FDD_2, 1)
#if (GEMINI_PLUS >= 3)
BUFFER_WHITELIST_DECLARE("gmss_sim_access.c", "NWSEL", MOD_GMSS_3, 12)
BUFFER_WHITELIST_DECLARE("gmss_list.c", "NWSEL", MOD_GMSS_3, 40)
BUFFER_WHITELIST_DECLARE("nwsel_ctrl_ilm_com.c", "NWSEL", MOD_NWSEL_3 , 10) 
BUFFER_WHITELIST_DECLARE("nwsel_sim_access.c", "NWSEL", MOD_NWSEL_3 , 2) 
BUFFER_WHITELIST_DECLARE("llc_abm_sapi.c", "LLC", MOD_LLC_3, 4)
BUFFER_WHITELIST_DECLARE("sim_handler.c", "SIM3", MOD_SIM_3 , 4)
BUFFER_WHITELIST_DECLARE("usim_handler.c", "SIM3", MOD_SIM_3 , 4)
BUFFER_WHITELIST_DECLARE("imc_em_hdlr.c", "IMC", MOD_IMC_3 , 2)
BUFFER_WHITELIST_DECLARE("rmmi_analyzer.c", "L4C_3", MOD_L4C_3, 8)
BUFFER_WHITELIST_DECLARE("rmmi_utility.c", "L4_3", MOD_ATCI_3, 8)
BUFFER_WHITELIST_DECLARE("l4b_handler.c", "L4_3", MOD_L4B_3, 8)
BUFFER_WHITELIST_DECLARE("l4c_ps_cmd.c", "L4", MOD_L4C_3, 1)
BUFFER_WHITELIST_DECLARE("rmmi_msghdlr.c", "L4_3", MOD_ATCI_3, 32)
#if (defined(__GEMINI_WCDMA__) && defined(GEMINI_PLUS_WCDMA) && (GEMINI_PLUS_WCDMA >= 3))
BUFFER_WHITELIST_DECLARE("rrci_fsm.c", "URR", MOD_ADR_FDD_3, 1)
BUFFER_WHITELIST_DECLARE("dbme.c", "URR", MOD_RRCE_FDD_3, 1)
BUFFER_WHITELIST_DECLARE("mac_cfg_ciphering.c", "UL2", MOD_UMAC_FDD_3, 7)
BUFFER_WHITELIST_DECLARE("mac_phy.c", "UL2", MOD_UMAC_FDD_3, 6)
BUFFER_WHITELIST_DECLARE("mac_config.c", "UL2", MOD_UMAC_FDD_3, 1)
#endif /* (__GEMINI_WCDMA__) && (GEMINI_PLUS_WCDMA) && (GEMINI_PLUS_WCDMA >= 3) */
BUFFER_WHITELIST_DECLARE("rmc_cell_resel.c", "RR_FDD", MOD_RRM_FDD_3, 1)
BUFFER_WHITELIST_DECLARE("rcs_process.c", "RR_FDD", MOD_RRM_FDD_3, 1)
#if (GEMINI_PLUS >= 4)
BUFFER_WHITELIST_DECLARE("gmss_sim_access.c", "NWSEL", MOD_GMSS_4, 12)
BUFFER_WHITELIST_DECLARE("gmss_list.c", "NWSEL", MOD_GMSS_4, 40)
BUFFER_WHITELIST_DECLARE("nwsel_ctrl_ilm_com.c", "NWSEL", MOD_NWSEL_4 , 10) 
BUFFER_WHITELIST_DECLARE("nwsel_sim_access.c", "NWSEL", MOD_NWSEL_4 , 2) 
BUFFER_WHITELIST_DECLARE("llc_abm_sapi.c", "LLC", MOD_LLC_4, 4)
BUFFER_WHITELIST_DECLARE("sim_handler.c", "SIM4", MOD_SIM_4 , 4)
BUFFER_WHITELIST_DECLARE("usim_handler.c", "SIM4", MOD_SIM_4 , 4)
BUFFER_WHITELIST_DECLARE("imc_em_hdlr.c", "IMC", MOD_IMC_4 , 2)
BUFFER_WHITELIST_DECLARE("rmmi_analyzer.c", "L4C_4", MOD_L4C_4, 8)
BUFFER_WHITELIST_DECLARE("rmmi_utility.c", "L4_4", MOD_ATCI_4, 8)
BUFFER_WHITELIST_DECLARE("l4b_handler.c", "L4_4", MOD_L4B_4, 8)
BUFFER_WHITELIST_DECLARE("l4c_ps_cmd.c", "L4", MOD_L4C_4, 1)
BUFFER_WHITELIST_DECLARE("rmmi_msghdlr.c", "L4_4", MOD_ATCI_4, 32)
#if (defined(__GEMINI_WCDMA__) && defined(GEMINI_PLUS_WCDMA) && (GEMINI_PLUS_WCDMA >= 4))
BUFFER_WHITELIST_DECLARE("rrci_fsm.c", "URR", MOD_ADR_FDD_4, 1)
BUFFER_WHITELIST_DECLARE("dbme.c", "URR", MOD_RRCE_FDD_4, 1)
BUFFER_WHITELIST_DECLARE("mac_cfg_ciphering.c", "UL2", MOD_UMAC_FDD_4, 7)
BUFFER_WHITELIST_DECLARE("mac_phy.c", "UL2", MOD_UMAC_FDD_4, 6)
BUFFER_WHITELIST_DECLARE("mac_config.c", "UL2", MOD_UMAC_FDD_4, 1)
#endif /* (__GEMINI_WCDMA__) && (GEMINI_PLUS_WCDMA) && (GEMINI_PLUS_WCDMA >= 4) */
BUFFER_WHITELIST_DECLARE("rmc_cell_resel.c", "RR_FDD", MOD_RRM_FDD_4, 1)
BUFFER_WHITELIST_DECLARE("rcs_process.c", "RR_FDD", MOD_RRM_FDD_4, 1)
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif /* __GEMINI__ */
#endif /* defined(CBS_WHITELIST_DATA) && (!defined(DUMMY_PROTOCOL)) */
#endif /* defined(DEBUG_BUF2) && defined(__MTK_TARGET__) */




