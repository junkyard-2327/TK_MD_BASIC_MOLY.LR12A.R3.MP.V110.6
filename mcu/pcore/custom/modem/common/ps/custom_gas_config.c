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
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#include "kal_general_types.h"
#include "custom_gas_config.h"

/* For customer define the improved call prefer setting, TRUE: enable, FALSE: disable */
#define IMPROVED_CALL_PREFER_SETTING  KAL_TRUE

/* For customer define the L2 fill bits randomization setting, TRUE: enable, FALSE: disable(default setting) */
#define L2_FILL_BITS_RANDOMIZATION_SETTING  KAL_FALSE

/* 20130902 James: at%campreq: search specific channels */
/* The variable of the specific channel searching */
kal_bool gas_custom_specific_channel_srch = KAL_FALSE;

/* The number of specific channels */
#define NUM_OF_SPECIFIC_CHANNELS    16 

/* The specific channels */
kal_uint16 specific_arfcn[NUM_OF_SPECIFIC_CHANNELS] = 
{      1,    2,    3,    4, /* band value 1: gsm900 */
     131,  132,  133,  134, /* band value 2: gsm850 */
    1536, 1537, 1538, 1539, /* band value 3: pcs, need to add PCS tag (value 1024) */
                            /* ex. arfcn 512 of pcs should be 512 + 1024 = 1536    */
     512,  513,  514,  515  /* band value 4: dcs    */
};

/* Customer can set the total number of frequencies which are scanned for full band PLMN search/list. */
kal_uint16 gas_custom_max_arfcn_to_try = 100;

/* Customer can set the number of GSM cells of each GSM band to decode for PLMN search
* or PLMN List procedure. The impact is that the larger the number, the result will be more
* sensative under that environment, but it will spend longer time to finish the procedure.
* Please do not assign each value more than 255.
*/
kal_uint8 gas_custom_max_decoded_cell_a_band[] =
{
    32, /* PGSM900 */
    32, /* EGSM900 */
    32, /* RGSM900 */
    32, /* DCS1800 */
    32, /* PCS1900 */
    32, /* GSM450  */
    32, /* GSM480  */
    32  /* GSM850  */
};

/* customer can set whether enable avoid fake cell feature. */
#define ENABLE_AVOID_FAKE_CELL_FEATURE KAL_TRUE
#define DISABLE_AVOID_FAKE_CELL_FEATURE KAL_FALSE
kal_bool gas_custom_fake_cell_feature = DISABLE_AVOID_FAKE_CELL_FEATURE;


/* Offset from -108dbm */
/* RRM is missing some PLMN with target cell RSSI -99dbm
 * reduce the threshold value from -95dbm to -100dbm */
kal_uint8 gas_custom_search_offset = 8;

/* the value of RXLEV_ACCESS_MIN */
kal_int16 rxlev_access_min = -90;

/* rlac threshold in CSFB procedure, when a specific cell's power is above the set value,
 * MS will try to camp on this 2G cell
 */
kal_int16 gas_rlac_threshold_in_CSFB = -90;

/* 2g call use RRM will put the serving into barred list if rach fail count more than this count.*/
kal_uint16 max_rach_fail_count = 3;

/* csfb call use this count RRM will put the serving into barred list if rach fail count more than this count.*/
kal_uint16 max_rach_fail_count_csfb = 3;

/* threshold of ARFCN number, MS will based on the threshold adjust barred timer length.*/
kal_uint16 cell_count_threshold = 8;

/* RACH fail barred timer length.the max value is 30min, min value is 15s */
kal_uint16 max_bar_timer_period = 30;    /* unit: second */
kal_uint16 min_bar_timer_period = 30;    /* unit: second */

/* RACH fail barred timer default length.the value is 30s */
kal_uint16 bar_timer_default_period = 30;    /* unit: second */

/* Use to set the RACH bar service type under which service type we will bar the cell when RACH fail */
//#define RACH_BAR_SERVICE_TYPE_NONE  0x00  /* NONE */
//#define RACH_BAR_SERVICE_TYPE_CS    0x01  /* CS only */
//#define RACH_BAR_SERVICE_TYPE_PS    0x02  /* PS only */
//#define RACH_BAR_SERVICE_TYPE_CS_PS 0x03  /* CS+PS */
kal_uint8 rach_bar_service_type = RACH_BAR_SERVICE_TYPE_CS_PS;

/* the default value is true, means gaging low power switch is on */
kal_bool gas_custom_paging_low_power_switch = KAL_TRUE;

/* Titan Parameters for Call drop because of ACI - Abhinav 20170901 */

/* When Scell.Rxqual is greater than or equal to Threshold ( defined as 6 ) Increment counter gas_custom_MR_RxQual_poor_counter*/
kal_uint8 gas_custom_MR_RxQual_Threshold = 6;

/* gas_custom_MR_RxQual_poor_counter?should be greater than or equal to (10) , to trigger the Measurement modification Algorithm*/
kal_uint8 gas_custom_MR_RxQual_poor_counter = 10;

/* For each neighbor cell (top six only) nc for serving cell, nc.rxlev should greater than or equal to 
   sc.rxlev + gas_custom_MR_RxLev_Threshold ( 3 ) , to trigger the Measurement modification Algorithm */
kal_uint8 gas_custom_MR_RxLev_Threshold = 3;

/* During 2G to 3G high prio cell reselection, Reward UMTS RSCP to 60 dBm */
kal_uint8 gas_custom_umts_rscp_reward_threshold = 60;

/* the threshold of snr when sorting nbr cell and adjusting MR in dedicate state*/
kal_uint8 gas_custom_snr_threshold = 6;

kal_uint8 gas_custom_paging_retry_timer_secs = 10;

/* When serving C1 < 0 and No neighbor cell , Min rxlev below which Cell Selection
 * will be triggered */
kal_int16 c1_cell_selection_rxlev_min = -440;

/* Customer can set the BSIC reading time interval which is only used for full band         */
/* plmn search procedure in virtual mode to avoid peer data SIM throughput degradation.     */
/* Please use integer type value with unit "mili second" to configure reading interval time */
/* The default value of interval time is 80 mili sec, the min value of interval time is     */
/* 80 mili sec when interval time value less than 80(0 - 80 mili sec), the max value of     */
/* interval time is limited to 3/3000 sec/mili second to avoid plmn search fail and UE OOS. */
kal_uint16 gas_custom_BSIC_reading_time_interval = 80;     /* unit: mili second */

/* customer can configure after how many number of times BSIC failed, RR should use the penalty count   */
kal_uint8 gas_custom_bsic_decode_fail_thresh = 3;

/* customer can configure the timer (count 1 = 5s) after max bsic decode failed */
kal_uint8 gas_custom_wideband_signal_penalty_count = 30;
/* customer can configure the N200 counter (valid range between 5 (min) to 34 (max) ) */
/* default value is 5. */
/* if the value is not set in correct range then vaue will be taken as 5 */
#define GAS_CUSTOMIZE_N200_COUNTER_VALUE 5

/* customer can configure the 4g2_redirection_threshold (RSSI) */
/* unit: dbm  */
kal_int16 gas_custom_filter_4g2_redirection_threshold = -90;

/* customer can configure Cell bar time while emergency call fail in same cell more than call_failure_max_count */
/* The value should be in second */
kal_uint32 gas_custom_emrgency_call_failure_cell_bar_time = 600;


/* customer can configure maximum failure count while emergency call fail in same cell  */
/* valid range of value is 2 -100 */
kal_uint8 gas_custom_emrgency_call_failure_max_count = 2;

/*  customer needs to set value of qrxlevmin within range of -110dBm to -105dbm. 
    if set below -110dBm, ping pong can still happen. 
    if set above -105dBm, it can be possible that reselection to LTE may not happen unless LTE cell becomes very strong.
    the parameter eutra_qrxlevmin is used to calculate s_non_serving for LTE cells and is received from NW.
    for this feature, this parameter is made customizable using the below custom variable*/
kal_int16 gas_custom_eutra_qrxlevmin = -110;    /* unit: dbm */

/*****************************************************************************
* FUNCTION
*  rr_get_improved_call_prefer_setting
* DESCRIPTION
*   This function is used to define the improved call prefer setting
*   TRUE: enable improved call prefer, FALSE: disable improved call prefer
*
* PARAMETERS
*
* RETURNS
*  kal_bool
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_bool rr_get_improved_call_prefer_setting (void)
{
   return (IMPROVED_CALL_PREFER_SETTING);
}


/*****************************************************************************
* FUNCTION
*  rr_get_l2_fill_bits_randomization_setting
* DESCRIPTION
*   This function is used to define the L2 fill bits randomization setting
*   TRUE: enable L2 randomization, FALSE: disable L2 randomization
*
* PARAMETERS
*
* RETURNS
*  kal_bool
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_bool rr_get_l2_fill_bits_randomization_setting (void)
{
   return (L2_FILL_BITS_RANDOMIZATION_SETTING);
}

/*****************************************************************************
* FUNCTION
*  gas_custom_is_specific_channel_srch
* DESCRIPTION
*   The function returns whether UE is in specific channel search mode.
*
* PARAMETERS
*  Void
* RETURNS
*  kal_bool
*  TRUE: specific channel search mode, FALSE: normal search mode
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_bool gas_custom_is_specific_channel_srch(void)
{
    return gas_custom_specific_channel_srch;
}

/*****************************************************************************
* FUNCTION
*   gas_custom_get_num_of_specific_channels
* DESCRIPTION
*   The function returns the number of specific channels
*
* PARAMETERS
*  Void
* RETURNS
*  kal_unit16 the number of specific channels 
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_uint8 gas_custom_get_num_of_specific_channels(void)
{
    if (gas_custom_specific_channel_srch == KAL_TRUE)
    {
        return NUM_OF_SPECIFIC_CHANNELS;
    }
    else
    {
        return 0;
    }
}

/*****************************************************************************
* FUNCTION
*   gas_custom_get_specific_channels
* DESCRIPTION
*   The function returns the number of specific channels
*
* PARAMETERS
*  Void
* RETURNS
*  kal_unit16 the number of specific channels 
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_uint16 * gas_custom_get_specific_channels(void)
{
    if (gas_custom_specific_channel_srch == KAL_TRUE)
    {
        return (&(specific_arfcn[0]));
    }
    else
    {
        return NULL;
    }
}

/*****************************************************************************
* FUNCTION
*  as_custom_set_specific_channel_srch
* DESCRIPTION
*   The function set specific search mode.
*
* PARAMETERS
*   kal_bool
*   TRUE: set specific search mode, FALSE: disable specific search mode.
* RETURNS
*   Void
* GLOBALS AFFECTED
*   None
*****************************************************************************/
void gas_custom_set_specific_channel_srch( kal_bool set_value )
{
    gas_custom_specific_channel_srch = set_value;
}

/*****************************************************************************
* FUNCTION
*  gas_custom_get_fake_cell_feature_mode
* DESCRIPTION
*   The function get fake cell feature mode.
*
* PARAMETERS
*   Void
* RETURNS
*   kal_bool
*   TRUE: enable fake cell feature, FALSE: disable fake cell feature.
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_bool gas_custom_get_fake_cell_feature_mode (void)
{
    return gas_custom_fake_cell_feature;
}

/*****************************************************************************
* FUNCTION
*  as_custom_get_rxlev_access_min
* DESCRIPTION
*   get the value of rxlev access min
*
* PARAMETERS
*   void
* RETURNS
*   the value of rxlev access min
* GLOBALS AFFECTED
*   None
*****************************************************************************/

kal_int16 as_custom_get_rxlev_access_min (void)
{
	return rxlev_access_min;
}


/*****************************************************************************
* FUNCTION
*  as_custom_get_rlac_threshold_in_csfb
* DESCRIPTION
*   The function get rlac threshold in csfb procedure.
*
* PARAMETERS
*   kal_int16 rlac threshold in csfb procedure.
* RETURNS
*   Void
* RETURNS
*   kal_bool
*   TRUE: enable fake cell feature, FALSE: disable fake cell feature.
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_int16 as_custom_get_rlac_threshold_in_csfb (void)
{
    return gas_rlac_threshold_in_CSFB * 4;
}

/*****************************************************************************
* FUNCTION
*  as_custom_get_max_rach_fail_count
* DESCRIPTION
*   The function get max rach fail count, RRM will put the 
*   serving into barred list if rach fail count more than this count.
*
* PARAMETERS
*   kal_uint16 max rach fail count.
* RETURNS
*   Void
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_uint16 as_custom_get_max_rach_fail_count (void)
{
	return max_rach_fail_count;
}
/*****************************************************************************
* FUNCTION
*  as_custom_get_max_rach_fail_count_csfb
* DESCRIPTION
*   The function get max rach fail count csfb , RRM will put the 
*   serving into barred list if rach fail count more than this count.
*
* PARAMETERS
*   kal_uint16 max rach fail count csfb.
* RETURNS
*   Void
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_uint16 as_custom_get_max_rach_fail_count_csfb (void)
{

    return max_rach_fail_count_csfb;	
}

/*****************************************************************************
* FUNCTION
*  as_custom_get_bar_timer_period
* DESCRIPTION
*   RACH fail barred timer length
*
* PARAMETERS
*   kal_uint16 RACH fail barred timer length.
* RETURNS
*   Void
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_uint16 as_custom_get_bar_timer_period (kal_uint8 arfcn_count)
{
	kal_uint16 bar_timer_period = 30;

	if (arfcn_count >= cell_count_threshold)
	{
		bar_timer_period = max_bar_timer_period;
	}
	else
{
		bar_timer_period = min_bar_timer_period;
	}

	return bar_timer_period;
}

/*****************************************************************************
* FUNCTION
*  as_custom_get_bar_timer_default_period
* DESCRIPTION
*   RACH fail barred timer default length
*
* PARAMETERS
*   kal_uint16 RACH fail barred timer default length.
* RETURNS
*   Void
* GLOBALS AFFECTED
*   None
*****************************************************************************/

kal_uint16 as_custom_get_bar_timer_default_period (void)
{
    return bar_timer_default_period;
}

/*****************************************************************************
* FUNCTION
*  gas_custom_check_fake_cell
* DESCRIPTION
*   customized APC ALG
* PARAMETERS
*   kal_uint8  * para used for customized APC ALG
*   kal_uint16 * cell information
* RETURNS
*   Void
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_bool gas_custom_check_fake_cell(kal_uint8 *apc_para,kal_uint16 *customer_cell_info)
{
    kal_bool result = KAL_FALSE;

    return result;
}

/*****************************************************************************
* FUNCTION
*  gas_custom_get_paging_low_power_switch
* DESCRIPTION
*   The function get paging low power switch.
*
* PARAMETERS
*   Void
* RETURNS
*   kal_bool
*   TRUE: low power switch is on, FALSE: low power switch is off.
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_bool gas_custom_get_paging_low_power_switch (void)
{
    return gas_custom_paging_low_power_switch;
}

/*****************************************************************************
* FUNCTION
*  as_custom_get_mr_rxqual_threshold
* DESCRIPTION
*   The function get rxqual threshold used during MR.
*
* PARAMETERS
*   none 
* RETURNS
*   RxQual Threshold
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_uint8 as_custom_get_mr_rxqual_threshold (void)
{
    return gas_custom_MR_RxQual_Threshold;
}

/*****************************************************************************
* FUNCTION
*  as_custom_get_mr_rxqual_poor_counter
* DESCRIPTION
*   The function get rxqual poor max counter used during MR.
*
* PARAMETERS
*   none 
* RETURNS
*   Rxqual poor counter
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_uint8 as_custom_get_mr_rxqual_poor_counter (void)
{
    return gas_custom_MR_RxQual_poor_counter;
}

/*****************************************************************************
* FUNCTION
*  as_custom_get_mr_rxlev_threshold
* DESCRIPTION
*   The function get rxlev threshold used during MR.
*
* PARAMETERS
*   None 
* RETURNS
*   Rxlev Threshold in qdbm
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_uint8 as_custom_get_mr_nc_power_better_than_sc_rxlev_threshold (void)
{
    return gas_custom_MR_RxLev_Threshold * 4;
}

/*****************************************************************************
* FUNCTION
*  gas_custom_get_umts_rscp_reward_threshold
* DESCRIPTION
*   The function is used to get the UMTS RSCP reward theshold during high prio cell reselection.
*
* PARAMETERS
*   Void
* RETURNS
*   kal_uint8
*   
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_uint8 gas_custom_get_umts_rscp_reward_threshold (void)
{
    return gas_custom_umts_rscp_reward_threshold;
}

/*****************************************************************************
* FUNCTION
*  gas_custom_get_snr_threshold
* DESCRIPTION
*   The function get snr_threshold.
*
* PARAMETERS
*   Void
* RETURNS
*   kal_uint8 the valure of snr_threshold.
* GLOBALS AFFECTED
*   None
*****************************************************************************/

kal_uint8 gas_custom_get_snr_threshold (void)
{
	return gas_custom_snr_threshold;
}

/*****************************************************************************
* FUNCTION
*  as_custom_get_c1_cell_selection_rxlev_min
* DESCRIPTION
*   get the value of c1_cell_selection_rxlev_min
*
* PARAMETERS
*   void
* RETURNS
*   the value of c1_cell_selection_rxlev_min
* GLOBALS AFFECTED
*   None
*****************************************************************************/

kal_int16 as_custom_get_c1_cell_selection_rxlev_min (void)
{
    return c1_cell_selection_rxlev_min;
}

/*****************************************************************************
* FUNCTION
*  as_custom_get_paging_retry_timer_ticks
* DESCRIPTION
*   The function get paging retry timer ticks
*
* PARAMETERS
*   None 
* RETURNS
*   Rxlev Threshold in qdbm
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_uint8 as_custom_get_paging_retry_timer_ticks (void)
{
    return gas_custom_paging_retry_timer_secs;
}

/*****************************************************************************
* FUNCTION
*  gas_custom_get_rach_bar_service_type
* DESCRIPTION
*   The function is used to get the RACH bar service type for the RACH fail bar cell feature.
*
* PARAMETERS
*   Void
* RETURNS
*   kal_uint8
*   
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_uint8 gas_custom_get_rach_bar_service_type(void)
{
    return rach_bar_service_type;
}


/*****************************************************************************
* FUNCTION
*  gas_custom_get_bsic_decode_fail_thresh
* DESCRIPTION
*   The function returns the MAX number of BSIC failure count after which RR needs to set BSIC read timer max.
*
* PARAMETERS
*   Void
* RETURNS
*   kal_uint8
*   
* GLOBALS AFFECTED
*   None
*****************************************************************************/

kal_uint8 gas_custom_get_bsic_decode_fail_thresh(void)
{

    return gas_custom_bsic_decode_fail_thresh;

}

/*****************************************************************************
* FUNCTION
*  gas_custom_get_bsic_decode_fail_thresh
* DESCRIPTION
*   The function returns the  BSIC read timer max when 
*    RR encountered gas_custom_bsic_decode_fail_thresh number of BSIC decode failures.
*
* PARAMETERS
*   Void
* RETURNS
*   kal_uint8
*   
* GLOBALS AFFECTED
*   None
*****************************************************************************/

kal_uint8 gas_custom_get_wideband_signal_penalty_count(void)
{

    return gas_custom_wideband_signal_penalty_count;

}

#ifdef __A5_3_AND_GEA_WHILTE_LIST__

/*****************************************************************************
* FUNCTION
*  gas_custom_check_plmn_for_a5_gea
* DESCRIPTION
*  This function is for customizing PLMN in the  list, on which gas support A5 algorithms
* 
* PARAMETERS
* plmn_id : the currently camped plmn/plmn in IMSI. the plmn is taken in the form of uint32. Each nibble holds each part of plmn.
*           each nibble in plmn ID stands for: XXXX XXXX===> X->spare(most significant nibble), X->spare, X->mcc1, X->mcc2, X->mcc3, X->mnc1, X->mnc2, X->mnc3(least significant nibble)
*
* a5        The value in this variable is filled bit wise and as per spec 24.008
*           this variable is used to set the a5 algo based on the plmn match. this indicates algo support in bit map format
*             XXXX XXXX => spear bit(MSB), a5/1, a5/2, a5/3, a5/4, a5/5, a5/6,a5/7(LSB)
*            For a51 bit  ==> bit value 0 ==> algo enabled
*                         ==> bit value 1 ==> algo disabled
*            for rest of the algo(a52 to a57)
*             bit value 0 => algo disabled
*             bit value 1 =>  algo enabled
*
* gea       : this variable is used to enable/disable the gea_x algo.
*             XXXX XXXX => spear bit(MSB), gea/1, gea/2, gea/3, gea/4, gea/5, gea/6,gea/7(LSB)
*             when bit value is set as 1, then corresponding gea algo is made enabled
*             when bit value is set as 0, then corresponding gea algo is made disabled
*           
* RETURNS
* plmn_match : if true, then the camped plmn is matched in the list of customer specified plmn
*              if false, then the camped plmn is not matched in the list of customer specified plmn       
* 
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_bool gas_custom_check_plmn_for_a5_gea(kal_uint32 plmn_id, kal_uint8 *a5, kal_uint8 *gea )
{
     kal_bool plmn_match = KAL_FALSE;
  
    /* each bit in the uint a5 stands for each a5/x algo as explained in description of function   */

    switch(plmn_id)
    {

    /*Please add  plmn list (as format explained in description )below for enabling and disabling a5/x algorithm */
    
     /* example to set a5/gea for a specific plmn is given below */
     /*case 0x0046697f: *a5 = 0x60;                  
                      *gea =  0x60;      
                       plmn_match = KAL_TRUE;
                       break;  
     
       case 0x0046697f: *a5 = 0x19;                  
                        *gea =  0x79;      
                         plmn_match = KAL_TRUE;
                         break;   

       case 0x0040445f: *a5 = 0x19;                  
                        *gea =  0x79;      
                         plmn_match = KAL_TRUE;
                         break;   */


      default: plmn_match = KAL_FALSE;
               break; 
    }   
    
    return plmn_match ;
}

#endif /* __A5_3_AND_GEA_WHILTE_LIST__ */

/*****************************************************************************
* FUNCTION
*  gas_custom_get_n200_counter_value
* DESCRIPTION
*   get the value of gas_custom_n200_counter_value*
* PARAMETERS
*   void
* RETURNS
*   the value of gas_custom_n200_counter_value
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_uint8 gas_custom_get_n200_counter_value(void)
{
    kal_uint8 gas_custom_n200_counter_value = GAS_CUSTOMIZE_N200_COUNTER_VALUE ;
    return gas_custom_n200_counter_value ; 
}



#ifdef __VAMOS_CUSTOM_CONFIG__
/*****************************************************************************
* FUNCTION
*  gas_custom_check_plmn_for_vamos
* DESCRIPTION
*  This function is for customizing PLMN in the  list and VAMOS support for the added PLMN
* 
* PARAMETERS
* plmn_id : the currently camped plmn/plmn in IMSI. the plmn is taken in the form of uint32. Each nibble holds each part of plmn.
*           each nibble in plmn ID stands for: XXXX XXXX===> X->spare(most significant nibble), X->spare, X->mcc1, X->mcc2, X->mcc3, X->mnc1, X->mnc2, X->mnc3(least significant nibble)
*
* vamos: the value can be either 1 for vamos1 or 2 for vamos2 support
*           
* RETURNS
* plmn_match : if true, then the camped plmn is matched in the list of customer specified plmn
*              if false, then the camped plmn is not matched in the list of customer specified plmn       
* 
* GLOBALS AFFECTED
*   None
*****************************************************************************/

kal_bool gas_custom_check_plmn_for_vamos(kal_uint32 plmn_id, kal_uint8 *vamos)
{
    kal_bool plmn_match = KAL_FALSE;
      

    switch(plmn_id)
    {
    
      /*Please add  plmn list (as format explained in description )below for setting the vamos values */
        
      /* example to set vamos for a specific plmn is given below */
      /*   case 0x0033420f:   telcel   */
      /*   case 0x00334020:    telcel   */
      /*   case 0x0071610f:   Peru claro   */
         case 0x00ffffff:  
                           *vamos = 0x01;                  
                            plmn_match = KAL_TRUE;
                             break;  
         
          default: plmn_match = KAL_FALSE;
                   break; 
        }   
        
        return plmn_match ;
    }


#endif /* __VAMOS_CUSTOM_CONFIG__ */

/*****************************************************************************
* FUNCTION
*  gas_custom_get_filter_4g2_redirection_threshold
* DESCRIPTION
*   The function returns filter_4g2_redirection_threshold; 
*  
*
* PARAMETERS
*   Void
* RETURNS
*   kal_int16
*   
* GLOBALS AFFECTED
*   None
*****************************************************************************/

kal_int16 gas_custom_get_filter_4g2_redirection_threshold(void)
{

    return gas_custom_filter_4g2_redirection_threshold;

}

/*****************************************************************************
* FUNCTION
*  gas_custom_get_emrgency_call_failure_cell_bar_time
* DESCRIPTION
*   The function returns emrgency call failure cell bar time; 
*  
* PARAMETERS
*   Void
* RETURNS
*   kal_uint32
*   
* GLOBALS AFFECTED
*   None
*****************************************************************************/

kal_uint32 gas_custom_get_emrgency_call_failure_cell_bar_time(void)
{

    return gas_custom_emrgency_call_failure_cell_bar_time ;

}

/*****************************************************************************
* FUNCTION
*  gas_custom_get_emrgency_call_failure_max_count
* DESCRIPTION
*   The function returns emrgency call failure maximum count; *  
*
* PARAMETERS
*   Void
* RETURNS
*   kal_uint8
*   
* GLOBALS AFFECTED
*   None
*****************************************************************************/

kal_uint8 gas_custom_get_emrgency_call_failure_max_count(void)
{

    return gas_custom_emrgency_call_failure_max_count;

}

/*****************************************************************************
* FUNCTION
*  gas_custom_get_qrxlevmin
* DESCRIPTION
*  This function returns the customer set value for Qrxlevmin in dbm.
* 
* PARAMETERS
*  void
*           
* RETURNS
* customer set value for Qrxlevmin in dbm
* 
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_int16 gas_custom_get_eutra_qrxlevmin(void)
{
    return gas_custom_eutra_qrxlevmin;
}
