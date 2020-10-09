/*******************************************************************************
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
*******************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *    c2k_rsva_struct.h
 *
 * Project:
 * --------
 *    SRLTE
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *
 ******************************************************************************/
#ifndef _C2K_RSVA_STRUCT_H_
#define _C2K_RSVA_STRUCT_H_

#include "c2k_rsva_enums.h"

// #ifdef __CDMA2000_RAT__

/*----------------------------------------------------------------------------*/
/*                             MD3 CSS <--> MD1 RSVAC                         */
/*----------------------------------------------------------------------------*/


typedef struct {    
    LOCAL_PARA_HDR
    css_freq_scan_type_enum freq_scan_type;
    kal_bool is_full_band;
    kal_uint8 session_id; /* session id */
}css_rsvac_frequency_scan_start_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    css_freq_scan_stop_cause_enum cause;
    /* preemption session id, only used when cause=CSS_FREQ_SCAN_PREEMPTED */
    /* always release the resource when cause=CSS_FREQ_SCAN_FINISHED */
    kal_uint8 session_id; /* session id */
}css_rsvac_frequency_scan_stop_req_struct;

typedef struct {    
    LOCAL_PARA_HDR
    css_freq_scan_type_enum freq_scan_type;
    kal_bool is_full_band;
    kal_uint8 session_id; /* session id */
}css_rsvac_frequency_scan_modify_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 session_id; /* session id */
#ifdef MTK_PLT_ON_PC_IT 
    kal_uint8 padding;
#endif
}rsvac_css_frequency_scan_accept_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 preempt_session_id; /* preemption session id */
}rsvac_css_frequency_scan_preempt_ind_struct;


/*----------------------------------------------------------------------------*/
/*                              MD3 PSW <--> MD1 RSVAS                        */
/*----------------------------------------------------------------------------*/


typedef struct {
   LOCAL_PARA_HDR   
   rsvas_service_type_enum peer_service_type;
   rsvas_sim_enum sim_in_transfer;
} rsvas_cas_suspend_service_req_struct;

typedef struct {
   LOCAL_PARA_HDR   
   rsvas_id_enum id;
   kal_bool is_protect_req;
} rsvas_cas_protect_cs_service_req_struct;

#if defined(__GEMINI_PREEMPT_PEER_SERVICE__)||defined(MTK_CBP)
typedef struct {
   LOCAL_PARA_HDR   
   rsvas_service_type_enum peer_service_type;
} rsvas_cas_abort_service_req_struct;

typedef struct {
   LOCAL_PARA_HDR   
   rsvas_service_type_enum peer_service_type;
   rsvas_sim_enum sim_in_transfer;
} rsvas_cas_virtual_suspend_service_req_struct;

typedef struct {
   LOCAL_PARA_HDR 
   rsvas_sim_enum sim_in_transfer;
} rsvas_cas_virtual_resume_service_req_struct;
#endif
#if defined(MTK_PLT_ON_PC)
typedef struct {
   LOCAL_PARA_HDR
   module_type mod_src;
   rsvas_id_enum id;
   rsvas_service_type_enum service_type;
}rsvas_cas_occupy_service_req_struct;

typedef struct {
   LOCAL_PARA_HDR
   module_type mod_src;
   rsvas_id_enum id;
   rsvas_service_type_enum service_type;
}rsvas_cas_release_service_req_struct;

typedef struct {
   LOCAL_PARA_HDR
   module_type mod_src;
   rsvas_id_enum new_id;
   rsvas_service_type_enum reserve_domain_service_after_transfer;
}rsvas_cas_transfer_service_req_struct;
typedef struct {
   LOCAL_PARA_HDR
} rsvas_cas_service_res_occupy_ind_struct;
#endif

typedef struct {
   kal_uint16 mod_src;
   rsvas_id_enum id;
   rsvas_service_type_enum service_type;
}rsvas_as_occupy_service_req_struct;

typedef struct {
   kal_uint16 mod_src;
   rsvas_id_enum id;
   rsvas_service_type_enum service_type;
}rsvas_as_release_service_req_struct;

typedef struct {
   kal_uint16 mod_src;
   rsvas_id_enum new_id;
   rsvas_service_type_enum reserve_domain_service_after_transfer;
}rsvas_as_transfer_service_req_struct;

typedef struct {
   LOCAL_PARA_HDR
   kal_uint32 rpc_buffer_index;
} rsvas_rpc_struct;

typedef struct {
   LOCAL_PARA_HDR
} rsvas_cas_resume_service_req_struct;


// #endif /* __CDMA2000_RAT__ */

#endif /* _C2K_RSVA_STRUCT_H_ */
