/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
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
 *
 * Filename:
 * ---------
 * custom_gas_config.c
 *
 * Project:
 * --------
 *   MONZA
 *
 * Description:
 * ------------
 *   This file is used to define the GAS configuration.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
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
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef _CUSTOM_GAS_CONFIG_H
#define _CUSTOM_GAS_CONFIG_H

#include "kal_general_types.h"

/* Use to set the RACH bar service type under which service type we will bar the cell when RACH fail */
#define RACH_BAR_SERVICE_TYPE_NONE  0x00  /* NONE */
#define RACH_BAR_SERVICE_TYPE_CS    0x01  /* CS only */
#define RACH_BAR_SERVICE_TYPE_PS    0x02  /* PS only */
#define RACH_BAR_SERVICE_TYPE_CS_PS 0x03  /* CS+PS */

/*************************************************************************
* Global Variable
*************************************************************************/
extern kal_uint16 gas_custom_max_arfcn_to_try;

extern kal_uint8 gas_custom_max_decoded_cell_a_band[];

extern kal_bool gas_custom_fake_cell_feature;

extern kal_uint8 gas_custom_search_offset;

extern kal_int16 rxlev_access_min;

extern kal_int16 gas_rlac_threshold_in_CSFB;

extern kal_uint16 max_rach_fail_count_csfb;

extern kal_uint16 max_rach_fail_count;

extern kal_uint16 cell_count_threshold;

extern kal_uint16 max_bar_timer_period;

extern kal_uint16 min_bar_timer_period;

extern kal_uint16 bar_timer_default_period;

extern kal_bool gas_custom_paging_low_power_switch;

extern kal_uint8 gas_custom_MR_RxQual_Threshold ;

extern kal_uint8 gas_custom_MR_RxQual_poor_counter;

extern kal_uint8 gas_custom_MR_RxLev_Threshold ;

extern kal_uint8 gas_custom_umts_rscp_reward_threshold;

extern kal_uint8 gas_custom_snr_threshold;

extern kal_int16 c1_cell_selection_rxlev_min;

extern kal_uint8 rach_bar_service_type;

extern kal_uint16 gas_custom_BSIC_reading_time_interval;

extern kal_uint8 gas_custom_bsic_decode_fail_thresh;

extern kal_uint8 gas_custom_wideband_signal_penalty_count;
extern kal_int16 gas_custom_filter_4g2_redirection_threshold;

extern kal_int16 gas_custom_eutra_qrxlevmin;


/*************************************************************************
* Function
*************************************************************************/
extern kal_bool rr_get_improved_call_prefer_setting (void);

extern kal_bool rr_get_l2_fill_bits_randomization_setting (void);

extern kal_bool gas_custom_is_specific_channel_srch (void);

extern kal_uint8 gas_custom_get_num_of_specific_channels (void);

extern kal_uint16 * gas_custom_get_specific_channels (void);

extern void gas_custom_set_specific_channel_srch (kal_bool set_value);

extern kal_bool gas_custom_get_fake_cell_feature_mode (void);

extern kal_int16 as_custom_get_rxlev_access_min (void);

extern kal_int16 as_custom_get_rlac_threshold_in_csfb (void);

extern kal_uint16 as_custom_get_max_rach_fail_count (void);

extern kal_uint16 as_custom_get_max_rach_fail_count_csfb(void);

extern kal_uint16 as_custom_get_bar_timer_period (kal_uint8 arfcn_count);

extern kal_uint16 as_custom_get_bar_timer_default_period (void);

extern kal_bool gas_custom_check_fake_cell(kal_uint8 *apc_para,kal_uint16 *customer_cell_info);

extern kal_bool gas_custom_get_paging_low_power_switch (void);

extern kal_uint8 as_custom_get_mr_rxqual_threshold (void);

extern kal_uint8 as_custom_get_mr_rxqual_poor_counter (void);

extern kal_uint8 as_custom_get_mr_nc_power_better_than_sc_rxlev_threshold (void);

extern kal_uint8 gas_custom_get_umts_rscp_reward_threshold (void);

extern kal_uint8 gas_custom_get_snr_threshold (void);

extern kal_int16 as_custom_get_c1_cell_selection_rxlev_min (void);

extern kal_uint8 as_custom_get_paging_retry_timer_ticks (void);

extern kal_uint8 gas_custom_get_rach_bar_service_type(void);


extern kal_uint8 gas_custom_get_bsic_decode_fail_thresh(void);

extern kal_uint8 gas_custom_get_wideband_signal_penalty_count(void);

#ifdef __A5_3_AND_GEA_WHILTE_LIST__

extern kal_bool gas_custom_check_plmn_for_a5_gea(kal_uint32, kal_uint8*, kal_uint8*);

#endif /* __A5_3_AND_GEA_WHILTE_LIST__ */
extern kal_uint8 gas_custom_get_n200_counter_value(void);

#ifdef __VAMOS_CUSTOM_CONFIG__

extern kal_bool gas_custom_check_plmn_for_vamos(kal_uint32, kal_uint8*);

#endif /* __VAMOS_CUSTOM_CONFIG__ */
extern kal_int16 gas_custom_get_filter_4g2_redirection_threshold(void);



extern kal_uint32 gas_custom_get_emrgency_call_failure_cell_bar_time(void);
extern kal_uint8 gas_custom_get_emrgency_call_failure_max_count(void);

extern kal_int16 gas_custom_get_eutra_qrxlevmin(void);

#endif /* _CUSTOM_GAS_CONFIG_H */

