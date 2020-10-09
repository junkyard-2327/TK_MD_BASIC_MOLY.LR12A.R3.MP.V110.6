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
 *	mmi2mm_struct.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for struct definition between MM and MMI/L4.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
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
 * removed!
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
 * removed!
 * removed!
 *
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
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/


/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2002
*
*******************************************************************************
 *  FILENAME : mmi2mm_struct.h
 *  SYNOPSIS : Functions for encoding/decoding.
 *
 *                      R E V I S I O N    H I S T O R Y
 *
 */
#ifndef _MMI2MM_STRUCT_H
#define _MMI2MM_STRUCT_H

#include "kal_general_types.h"
#include "l3_inc_enums.h"
#include "mcd_l3_inc_struct.h"
#include "ps_public_enum.h"
#include "kal_public_defs.h"
#include "nas_as_inter_core_enum.h"
#ifdef __VOLTE_SUPPORT__
#include "ims_common_def.h"
#endif /* __VOLTE_SUPPORT__ */

/* MM NVRAM Re-structure Start  */
#include "nvram_editor_data_item.h"
/* MM NVRAM Re-structure End  */
#include "gmss_public.h"

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8   imei[9];
    kal_uint8   imei_svn;
    #if defined(__GEMINI__)
    kal_uint8   peer_ps_imei[9];
    #endif
    kal_uint8 packed_drx_para[2];
#ifdef __MONITOR_PAGE_DURING_TRANSFER__
    gprs_transfer_preference_enum prefer; //mtk02475: gprs_transfer_preference
#endif
#ifdef __TC02_SECURITY_REQUIREMENT__
    kal_uint8 nvram_imsi_loci_gloci[MAX_LEN_OF_IMSI_LOCI_GLOCI]; //mtk02475: for man-in-middle-attack prevention
#endif
#ifdef __MM_INTEGRITY_PREF__
    kal_bool is_disable_integrity_check;
#endif 
    nvram_ef_mm_data_struct    nvram_mm_data_info;
    nvram_ef_t3346_timer_info_struct t3346_info;
    init_cause_enum init_cause;
} gmmreg_init_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 band;
} gmmreg_band_sel_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    plmn_selection_mode_enum plmn_sel_mode;
} gmmreg_sel_mode_req_struct;

typedef struct {
    kal_uint8 timer_unit;
    kal_uint8 timer_value;
} gmmreg_timer_struct;

#ifdef __MONITOR_PAGE_DURING_TRANSFER__
typedef struct {
    LOCAL_PARA_HDR
    gprs_transfer_preference_enum prefer;
} gmmreg_set_gprs_transfer_preference_req_struct;
#endif

typedef struct {
    LOCAL_PARA_HDR
    domain_id_enum attach_type;   /* CS-only, PS-only or both CS/PS*/
    kal_uint8 ready_timer_p; /* true if ready timer value present*/
    gmmreg_timer_struct ready_timer_value; /* default ready timer value*/
    kal_uint8 att_id;        /* Johnny: 3G RAC, for attach_req and detach_req using */
    mm_user_search_type_enum search_type;   //mm_user_search_type_enum
    kal_bool is_follow_on_request;
#ifdef __SGLTE__ 
    kal_bool mmdc_ps_attach;
    attach_cause_enum attach_cause;
#endif
} gmmreg_attach_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    domain_id_enum detach_type; /* CS-only, PS-only or both CS/PS */
    kal_bool power_off;   /* mobile shut down or not */
    kal_uint8 att_id;      /* Johnny: 3G RAC, for attach_req and detach_req using */
    l4c_rac_detach_cause_enum           detach_cause;
} gmmreg_detach_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_main_ps;
} gmmreg_data_allow_req_struct;

#ifdef __REMOTE_SIM__
typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_rsim_enabled;
    kal_bool is_aka_sim_enabled;
} gmmreg_rsim_aka_status_req_struct;
#endif

typedef struct {
    LOCAL_PARA_HDR
    plmn_reselection_enum plmn_search_mode;       /* plmn_reselection_enum */
    //kal_bool is_gprs_required; /* John Tang 2004/03/10: For at+cops = 2 then at+cops= 0 case. */
    plmn_id_rat_struct selected_plmn; /* Selected PLMN */
    kal_bool is_manual_csg_sel;
    kal_uint32 csg_id;
    rat_enum prefer_rat;   //  0:default ,  1:GSM ,   2:UMTS
    kal_bool from_l4c;
    kal_uint16 factory_mode_arfcn; //0xFFFF means invalid arfcn, /* 20081110 mtk00714, for fast camp on test machine */
} gmmreg_plmn_search_req_struct;


typedef struct {
    LOCAL_PARA_HDR
    plmn_id_rat_struct plmn_id_rat;
} gmmreg_csg_list_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    rat_enum rat_mode;              /* RATCM_RAT_ENUM*/
    rat_enum active_rat;
    domain_id_enum detach_domain; //for UEMODE:PS_MODE_x, CS domain should be detached first in RAT_MODE which contains RAT_LTE
    rat_enum reported_rat;
    rat_mode_change_cause_enum  rat_mode_change_cause;
} gmmreg_set_rat_mode_req_struct;

#ifdef __DYNAMIC_BAND_SEL__
typedef struct {
    LOCAL_PARA_HDR
    band_selection_enum gsm_band; /* refer to band_selection_enum value*/
    kal_bool is_gsm_band_present;
    kal_uint8 umts_fdd_band[SIZE_OF_UMTS_BAND];    /* 3G band change */
    kal_bool is_umts_band_present; /* 3G band change */
}gmmreg_set_preferred_band_req_struct;
#endif

typedef struct {
    LOCAL_PARA_HDR
    kal_bool force_send_SCRI;
    end_session_cause_enum cause;
}gmmreg_end_ps_data_session_req_struct;

#if defined(__GEMINI__) || defined(__SGLTE__)
typedef struct {
    LOCAL_PARA_HDR
    sim_config_status_enum sim_config_status;
    sim_insert_status_enum sim_insert_status;
}gmmreg_sim_status_update_req_struct;
#endif

typedef struct {
    LOCAL_PARA_HDR
    rat_enum  prefer_rat;
}gmmreg_set_prefer_rat_req_struct;

#ifdef __SGLTE__ 
typedef struct {
    LOCAL_PARA_HDR
    rat_enum  target_rat;
}gmmreg_ps_switch_req_struct;


#endif

#ifdef __VOLTE_SUPPORT__
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool                       is_ims_voice_available;
} gmmreg_set_ims_voice_availability_req_struct;

typedef  struct
{
    LOCAL_PARA_HDR
    mm_ims_voice_termination        mm_ivt;
} gmmreg_set_ims_voice_termination_req_struct;
#endif /* __VOLTE_SUPPORT__ */

typedef struct {
    LOCAL_PARA_HDR
    act_sim_enum  active_sim;
}gmmreg_active_sim_info_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    umts_duplex_mode_type source_umts_duplex_mode;
    umts_duplex_mode_type target_umts_duplex_mode;
    lte_duplex_mode_type source_lte_duplex_mode;
    lte_duplex_mode_type target_lte_duplex_mode;
	mode_switch_cause_enum  cause;
} gmmreg_duplex_mode_change_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    plmn_id_struct plmn;
    rat_enum rat;
    kal_uint8 ara_start[2];
    kal_uint8 ara_end[2];
}gmmreg_aral_update_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    rat_enum rat_mode; //User's setting, could be RAT_GSM or RAT_UMTS or RAT_GSM_UMTS
    kal_bool is_pgcheck_on;
} gmmreg_set_pgcheck_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool mode;
}gmmreg_cs_voice_call_protection_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    rfoff_cause_enum rfoff_cause;
}gmmreg_rfoff_req_struct;

/* MSG_ID_GMMREG_SET_MS_SV_REQ */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 svn;
}gmmreg_set_ms_sv_req_struct;

typedef struct {
    kal_bool is_mobile_data_enable_present;
    kal_bool is_mobile_data_enable;
    kal_bool is_mobile_data_roaming_enable_present;
    kal_bool is_mobile_data_roaming_enable;
    kal_bool is_volte_enable_present;
    kal_bool is_volte_enable;
    kal_bool is_vzw_ims_test_mode_enable_present;
    kal_bool is_vzw_ims_test_mode_enable; 
} gmmreg_cellular_network_config;

typedef struct {
    LOCAL_PARA_HDR
    gmmreg_cellular_network_config config;
}gmmreg_cellular_network_config_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_user_selected_main_ps; /* GEMINI : is it user selected data preferred stack e.g. internet data*/
} gmmreg_user_selected_main_ps_req_struct;

#endif


