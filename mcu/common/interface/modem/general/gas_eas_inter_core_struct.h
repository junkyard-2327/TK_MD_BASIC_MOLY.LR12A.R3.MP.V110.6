/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2014
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
 *   gas_eas_inter_core_struct.h
 *
 * Project:
 * --------
 *   UMOLY
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
 ****************************************************************************/

#ifndef _GAS_EAS_INTER_CORE_STRUCT_H
#define _GAS_EAS_INTER_CORE_STRUCT_H

#include "as_inter_core_struct.h"
#include "gas_eas_inter_core_enum.h"

typedef struct
{
   LOCAL_PARA_HDR
   ts_ir_gsm_cell_bsic_info gsm_cell_bsic_info;
#ifdef UNIT_TEST
   kal_uint32 bsic_ind_ms_diff;
#endif /* UNIT_TEST */
} eas_gas_gcell_bsic_ind_struct;

typedef struct
{
   LOCAL_PARA_HDR
   kal_uint8 list_ref;
   ts_ir_gsm_cell_rssi_info gsm_cell_rssi_info;
   kal_bool is_long_period;
#ifdef UNIT_TEST
   kal_uint32 meas_ind_ms_diff;
#endif /* UNIT_TEST */   
} eas_gas_gcell_meas_ind_struct;

/* LTE to GAS IR Measurement */
typedef struct {
  LOCAL_PARA_HDR
  kal_uint8 list_ref;
  te_ir_errc_state errc_state;
  kal_int16 prio_meas_period;
  ts_ir_gsm_cell_list gsm_cell_list;
} eas_gas_config_gcell_prio_meas_req_struct;

typedef struct {
  LOCAL_PARA_HDR
   te_ir_bsic_enh_status  bsic_enh_status;
}eas_gas_bsic_enh_ind_struct;

typedef struct {
  LOCAL_PARA_HDR
  kal_uint8 list_ref;
  te_ir_errc_state errc_state;
  ts_ir_gsm_cell_list gsm_cell_list;
  /* This flag is used to indicate whether measurement period should be reset
   * immediately. (TRUE:  meas is performed in the first DRX. 
   *               FALSE: meas is performed in the first T-meas occasion)  
   * In current design, the following rules should be followed.
   * (1)If num of GSM cells != 0, this flag will be set as FALSE only if tmeas,gsm measurement 
   *                              is triggered when priority measurement is on-going (i.e., at least 
   *                              one of GSM cells hits priority reselection criteria for priority 
   *                              based measurement reselection). For other case, this flag should 
   *                              be set as TRUE. If any improvement is needed, the usage limitation 
   *                              for this flag should be confirmed with GL1's colleague.
   * (2) If num of GSM cells == 0, this flag will alwyas be set as FALSE;
   */
  kal_bool is_meas_period_reset;
  
  /* When this flag is set to TRUE, the standby measurement will be performed every T-meas without */
  /* multiplying by N layers. So that there will be 2 measurement results within 10s OOS period, which */
  /* increases the successful rate of finding a candidate during OOS */
  kal_bool prohibit_apply_n_layer;
  
  #ifdef __LTE_RAT__
	  /*eas configures gas to make use of idle rf to decode bsic in order to speed up srvcc to geran*/
  kal_bool is_auto_gap_valid;
#endif

} eas_gas_config_gcell_meas_req_struct;
#endif /* _GAS_EAS_INTER_CORE_STRUCT_H */
