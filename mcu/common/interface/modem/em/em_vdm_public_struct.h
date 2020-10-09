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
 *   em_vdm_public_struct.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Engineer mode public structures.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *              HISTORY
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


#ifndef _EM_VDM_PUBLIC_STRUCT_H
#define _EM_VDM_PUBLIC_STRUCT_H

#include "em_public_struct.h"
#include "ims_interface_md.h"

#define EM_VDM_TRK_MAX_DOMAIN_ATTEMPT_RECORD 15  // align VDM_TRK_MAX_DOMAIN_ATTEMPT_RECORD

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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

/* should be synced with vdm_trk_call_inst_state_enum*/
typedef enum{
    EM_VDM_CALL_STATE_DISCONNECTED = 0,
    EM_VDM_CALL_STATE_CONNECTED,
    EM_VDM_CALL_STATE_MO_EST_ADS_INIT,
    EM_VDM_CALL_STATE_MO_EST_ADS_EXE,
    EM_VDM_CALL_STATE_MO_EST_DOMAIN_ATMP,
    EM_VDM_CALL_STATE_MO_EST_BIND_CALL_ID,
    EM_VDM_CALL_STATE_MO_EST_CC_PROCESS,
    EM_VDM_CALL_STATE_MO_EST_ADS_END,
    EM_VDM_CALL_STATE_MT_EST_APPROVE,
    EM_VDM_CALL_STATE_MT_EST_DOMAIN_ATMP
} em_vdm_call_state_enum;

/* align vdm_trk_call_inst_domain_enum */
typedef enum{
    EM_VDM_TRK_CALL_INST_DOMAIN_NULL = 0,      // Domain not decided yet
    EM_VDM_TRK_CALL_INST_DOMAIN_IMS,           // IMS domain
    EM_VDM_TRK_CALL_INST_DOMAIN_CS,            // CS domain
    EM_VDM_TRK_CALL_INST_DOMAIN_IMS_TO_CS,     // IMS domain, SRVCC ongoing
    EM_VDM_TRK_CALL_INST_DOMAIN_NUM
} em_vdm_trk_call_inst_domain_enum;

/* align vdm_ads_select_result_enum */
typedef enum
{
    EM_VDM_ADS_SELECT_RESULT_NULL = 0, // applicable when ADS fails
    EM_VDM_ADS_SELECT_RESULT_IMS,
    EM_VDM_ADS_SELECT_RESULT_CS
} em_vdm_ads_select_result_enum;

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;

   kal_uint8                        call_id;
   em_vdm_call_state_enum     state;
   ims_call_dir_enum                dir;
   ims_call_mode_enum               mode;
   kal_uint8                        number[MAX_CC_ECPI_NUM_LEN];
   ims_disc_cause_enum              disc_cause;
   em_vdm_trk_call_inst_domain_enum domain;
   kal_bool                         is_emergency;
   kal_bool                         ims_380_occur;
   kal_bool                         is_ims_380_redial_normal;
   kal_bool                         is_trk_redial_as_ecc;

   /* align vdm_trk_domain_attempt_rec_struct */
   em_vdm_ads_select_result_enum    domain_atmp_domain[EM_VDM_TRK_MAX_DOMAIN_ATTEMPT_RECORD];
   ims_cc_cause_enum                domain_atmp_failure_cause[EM_VDM_TRK_MAX_DOMAIN_ATTEMPT_RECORD];
   kal_uint8                        domain_attempt_rec_idx; 
} em_vdm_call_info_ind_struct;

#endif /* _EM_VDM_PUBLIC_STRUCT_H */

