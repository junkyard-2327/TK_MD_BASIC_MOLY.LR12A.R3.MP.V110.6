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
 * sim_cuim_utility.h
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is intended for all sim utilities for cuim.
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
/* KAL - RTOS Abstraction Layer */

#ifndef SIM_CUIM_UTILITY_H
#define SIM_CUIM_UTILITY_H


#ifdef __CDMA2000_RAT__

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "sim_ps_struct_public.h"
#include "sim_exported_enum.h"


/*****************************************************************************
 * FUNCTION
 *  sim_cuim_apdu_access
 * DESCRIPTION
 *  This function is called by MOD_UIM to replace message communication.
 * PARAMETERS
 *
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void sim_cuim_apdu_access(kal_uint8 sim_index, 
                                uim_sim_apdu_access_req_struct *apdu_req, 
                                uim_sim_apdu_access_cnf_struct *apdu_cnf);

#ifdef __SIM_EXTENDED_APDU__
/*****************************************************************************
 * FUNCTION
 *  sim_cuim_apdu_access
 * DESCRIPTION
 *  This function is called by MOD_UIM to replace message communication.
 * PARAMETERS
 *
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void sim_cuim_extended_apdu_access(kal_uint8 sim_index, 
                                uim_sim_extended_apdu_access_req_struct *extended_apdu_req_p, 
                                uim_sim_extended_apdu_access_cnf_struct *extended_apdu_cnf_p);
#endif

/*****************************************************************************

FUNCTION NAME:  cuim_read_imsi_for_sim

DESCRIPTION:    sim call this function to get IMSI_M through CSIM channel

PARAMETERS:     input      uint8 sim_index
                        output   uint8 *imsi_data

RETURNS:        CMD result

*****************************************************************************/
sim_cmd_result_enum cuim_read_imsi_for_sim(kal_uint8 sim_index, kal_uint8 *imsi_data);

/*****************************************************************************
 * FUNCTION
 *  sim_cuim_skip_uim_recovery
 * DESCRIPTION
 *  This function returns whether UIM recovery should be skipped
 * PARAMETERS
 *  kal_uint8 sim_index
 * RETURNS
 *  kal_bool
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
kal_bool sim_cuim_skip_uim_recovery(kal_uint8 sim_index);

/*****************************************************************************
 * FUNCTION
 *  usim_select_for_cuim
 * DESCRIPTION
 *  This function is called by MOD_UIM when it needs to select file for uicc card
 * PARAMETERS
 *  kal_uint8 sim_index
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void sim_cuim_select(kal_uint8 sim_index, uim_sim_select_req_struct *select_req, uim_sim_select_cnf_struct *select_cnf);

/*****************************************************************************
 * FUNCTION
 *  sim_uim_send_app_ready_ind
 * DESCRIPTION
 *  This function is called by MOD_UIM when it is enter sim ready state
 *  It will directly send the SIM_APP_READY_IND to the SMU and SIMMNGR
 * PARAMETERS
 *  kal_uint8 sim_index
 *  kal_uint8 channel_id
 *  kal_uint8 app_type
 *  kal_uint8 *mcc (mcc[4])
 *  kal_uint8 *mnc (mnc[4])
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void sim_uim_send_app_ready_ind(kal_uint8 sim_index, kal_uint8 channel_id, kal_uint8 app_type, uim_sim_app_ready_data_struct* uim_ready_data);


/* Used by DSBP_RECONFIG's users. Use 1~255 in order for each SIM task. */
extern void sim_incr_dsbp_trans_id(protocol_id_enum ps_id);
extern kal_uint8 sim_get_dsbp_trans_id(protocol_id_enum ps_id);


/*****************************************************************************
 * FUNCTION
 *  uim_module_clean
 * DESCRIPTION
 *  This function cleans UIM module's GV when minidump happens.
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 * GLOBALS AFFECTED
 *  void
 *****************************************************************************/
void uim_module_clean(void);

#endif /* __CDMA2000_RAT__ */

#endif /* SIM_CUIM_UTILITY_H */

