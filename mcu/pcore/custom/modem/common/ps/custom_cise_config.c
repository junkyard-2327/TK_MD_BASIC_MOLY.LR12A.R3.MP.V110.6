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
/*
**   Includes
*/
#include "kal_general_types.h"

#include "custom_cise_config.h"
#include "custom_rrce_config.h"

#ifdef __AS_SPECIFIC_CHANNEL_SRCH__
kal_bool uas_custom_specific_channel_srch = KAL_FALSE;
#endif

/*
**   Macros
*/

// Number of elements in custom_plmnid_priority_table
#define CUSTOM_BAND_PRIORITY_PER_PLMN_LIST_NUM (3)

#ifdef __34G_PINGPONG_RESTRAIN__
kal_bool uas_custom_34G_pingpong_restrain = KAL_TRUE;
#endif

/**
 * The specific channels
 * How to use:
 * Max number is define in NUM_OF_SPECIFIC_CHANNELS.
 * If user only want to config UARFCNs less than NUM_OF_SPECIFIC_CHANNELS in some band, just fill invalid UARFCN.
 * For example, if band 1 only need 3 UARFCNs, just fill {10562,10563,10564,0xffff}
 */
kal_uint16 specific_uarfcn[NUM_OF_UMTS_BANDS][NUM_OF_SPECIFIC_CHANNELS]     = 
{
    {10562,10563,10564,10838}, /* band  1 */
    { 9662, 9663, 9664, 9938}, /* band  2 */
    { 1162, 1163, 1164, 1513}, /* band  3 */
    { 1537, 1538, 1539, 1738}, /* band  4 */
    { 4357, 4358, 4359, 4458}, /* band  5 */
    { 4387, 4388, 4389, 4413}, /* band  6 */
    { 2237, 2238, 2239, 2563}, /* band  7 */
    { 2937, 2938, 2939, 3088}, /* band  8 */
    { 9237, 9238, 9239, 9387}, /* band  9 */
    { 3112, 3113, 3114, 3388}, /* band 10 */
    { 3712, 3713, 3714, 3787}, /* band 11 */
    { 3842, 3843, 3844, 3903}, /* band 12 */
    { 4017, 4018, 4019, 4043}, /* band 13 */
    { 4117, 4118, 4119, 4143}, /* band 14 */
    {65535,65535,65535,65535}, /* band 15 *//* !! Reserved !! */
    {65535,65535,65535,65535}, /* band 16 *//* !! Reserved !! */
    {65535,65535,65535,65535}, /* band 17 *//* !! Reserved !! */
    {65535,65535,65535,65535}, /* band 18 *//* !! Reserved !! */
    {  712,  713,  714,  763}, /* band 19 */
    { 4512, 4513, 4514, 4512}, /* band 20 */
    {  862,  867,  868,  912}, /* band 21 */
    { 4662, 4663, 4664, 5038}  /* band 22 */
};
/* add tdd specific bands/channels, beggin with band34 */
kal_uint16 tdd_specific_uarfcn[NUM_OF_UMTS_TDD_BANDS][NUM_OF_SPECIFIC_CHANNELS]     = 
{
    {10090, 10082, 65535, 65535}, /* band  34(A) */
    {65535, 65535, 65535, 65535}, /* band  35(B) */
    {65535, 65535, 65535, 65535}, /* band  36(C) */
    {65535, 65535, 65535, 65535}, /* band  37(D) */
    {65535, 65535, 65535, 65535}, /* band  38(E) */
    {65535, 65535, 65535, 65535}, /* band  39(F) */
};

/*  predefined stored uarfcn list Customization, 
 *  the array length should not exceed 20,
 *  invalid value 65535
 */

kal_uint16 preDefinedCustomFreqList[CUSTOM_PREDEFINE_FREQ_LIST_NUM] = 
{
	10054, 10062, 10070, 10114,
	10121, 10055, 10063, 10071,
	10112, 10120, 10060, 10066,
	10072, 10088, 10107, 10092,
	65535, 65535, 65535, 65535,
};

/*
  Refer "custom_plmnid_priority_table_type" in "custom_cise_config.h" for the structure definition
  First element of the structure contains PLMN in decimal format. 
  For ex. PLMN id 530/05f is represented is marked as 53005. 
  PLMN id. with PLMN id 405/847 (MCC=405, MNC=847) is represented as 405847

  Band priorities for band 1 is present as first element in "band_priority". Band 2 priority is present as second element and so on
  In the table below, for PLMN id 53005 has priority 0x02 for band 1, 0xff for band 2 and so on.

  Lower the priority number, higher the band priority. priority value = 1 means highest priority. value =0xff means least priority
  
  CUSTOM_BAND_PRIORITY_PER_PLMN_LIST_NUM to be updated if the custom table size changes
  
*/

custom_plmnid_priority_table_type custom_plmnid_priority_table[CUSTOM_BAND_PRIORITY_PER_PLMN_LIST_NUM] = 
{
    {{53005},//Spark New Zealand
     {0x02, 0xFF, 0xFF, 0xFF, 0x01,
      0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
      0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
      0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
      0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
      0xFF}},
    {{50502},//50502 VHA
     {0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
      0xFF, 0xFF, 0x01, 0xFF, 0xFF,
      0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
      0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
      0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
      0xFF}},
    {{50503},//50503 VHA
     {0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
      0xFF, 0xFF, 0x01, 0xFF, 0xFF,
      0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
      0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
      0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
      0xFF}}   
};

/*
  If band priority for PLMN is not configured, return default band priority.
  Below table contains default band priority
*/
custom_plmnid_priority_table_type default_plmnid_priority_type = {
    {0xFFFFFF},//default PLMN
     {0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
     0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
     0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
     0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
     0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
     0xFF}
};

const custom_plmn_list CUSTOM_CSFB_COMBINED_SEARCH_PLMN[] = 
{
/* New MCCMNC can be added by customer in this as below. But make sure that it is either 5 digit or 6 digit and should not have*/
    {46001}
};

const kal_uint32 CUSTOM_CSFB_COMBINED_SEARCH_PLMN_LIST_NUM = sizeof(CUSTOM_CSFB_COMBINED_SEARCH_PLMN)/sizeof(custom_plmn_list);

/* For customer to determine support Standard Fast Return or not */

/*****************************************************************************
* FUNCTION
*  CSCE_IsSupportStdFR
*
* DESCRIPTION
*
*  this function allow customer to determine support Standard Fast Return or not
*
* PARAMETERS
*
* RETURNS
*  kal_bool
* GLOBALS AFFECTED
*   None
*****************************************************************************/

kal_bool CSCE_IsSupportStdFR (void)
{
    /********************************************* 
     KAL_TRUE: support Standard Fast Return 
     KAL_FALSE: not support Standard Fast Return 
    *********************************************/
   return KAL_TRUE;
   //return KAL_FALSE;
}

/*****************************************************************************
* FUNCTION
*  uas_custom_is_specific_channel_srch
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
kal_bool uas_custom_is_specific_channel_srch(void)
{
#ifdef __AS_SPECIFIC_CHANNEL_SRCH__
    return uas_custom_specific_channel_srch;
#else
    return KAL_FALSE;
#endif 
}

/*****************************************************************************
* FUNCTION
*  uas_custom_is_34G_pingpong_restrain
* DESCRIPTION
*   The function returns whether 34G pingpong restrain is enabled.
*
* PARAMETERS
*  Void
* RETURNS
*  kal_bool
*  TRUE: 34G pingpong restrain is enabled, FALSE: 34G pingpong restrain is disabled
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_bool uas_custom_is_34G_pingpong_restrain(void)
{
#ifdef __34G_PINGPONG_RESTRAIN__
    return uas_custom_34G_pingpong_restrain;
#else
    return KAL_FALSE;
#endif 
}

#ifdef __AS_SPECIFIC_CHANNEL_SRCH__
/*****************************************************************************
* FUNCTION
*  uas_custom_set_specific_channel_srch
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
void uas_custom_set_specific_channel_srch( kal_bool set_value )
{
    uas_custom_specific_channel_srch = set_value;
}
#endif /* __AS_SPECIFIC_CHANNEL_SRCH__ */

#ifdef __34G_PINGPONG_RESTRAIN__
/*****************************************************************************
* FUNCTION
*  uas_custom_set_34G_pingpong_restrain
* DESCRIPTION
*   The function set 34G_pingpong_restrain.
*
* PARAMETERS
*   kal_bool
*   TRUE: 34G pingpong restrain is enabled, FALSE: 34G pingpong restrain is disabled.
* RETURNS
*   Void
* GLOBALS AFFECTED
*   None
*****************************************************************************/
void uas_custom_set_34G_pingpong_restrain( kal_bool set_value )
{
    uas_custom_34G_pingpong_restrain = set_value;
}
#endif 

/*****************************************************************************
* FUNCTION
*  uas_custom_get_specific_channel
* DESCRIPTION
*   UAS use this function to get specific channel
*
* PARAMETERS
*   band            : which band to get
*   specificChannel : point to return UARFCN
* RETURNS
*  kal_bool         : Success return TRUE
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_bool uas_custom_get_specific_channel( kal_uint8 band, kal_uint16 *specificChannel)
{
    kal_bool ret = KAL_TRUE;
    kal_uint8 i;

    if ((band >= 0) && (band < NUM_OF_UMTS_BANDS))
    {
        for (i=0;i<NUM_OF_SPECIFIC_CHANNELS;i++)
        {
            *(specificChannel + i) = specific_uarfcn[band][i];
        }
    }
    else
    {
        ret = KAL_FALSE;
    }

    return ret;
}

/*****************************************************************************
* FUNCTION
*  uas_custom_set_specific_channel
* DESCRIPTION
*   use this function to set specific channel
*
* PARAMETERS
*   band            : which band to set
*   specificChannel : UARFCN to set
* RETURNS
*  kal_bool         : Success return TRUE
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_bool uas_custom_set_specific_channel( kal_uint8 band, kal_uint16 *specificChannel)
{
    kal_bool ret = KAL_TRUE;
    kal_uint8 i;

    /**
     * We'll not check input UARFCN here.
     * When UAS use specific channel, UAS will check:
     *  1> UARFCN is valid or not
     *  2> UARFCN is in UE support band or not
     */
    if ((band >= 0) && (band < NUM_OF_UMTS_BANDS))
    {
        for (i=0;i<NUM_OF_SPECIFIC_CHANNELS;i++)
        {
            specific_uarfcn[band][i] = *(specificChannel + i);
        }
    }
    else
    {
        ret = KAL_FALSE;
    }

    return ret;
}

/*****************************************************************************
* FUNCTION
*  tdd_uas_custom_get_specific_channel
* DESCRIPTION
*   UAS use this function to get tdd specific channel
*
* PARAMETERS
*   band            : which band to get
*   specificChannel : point to return UARFCN
* RETURNS
*  kal_bool         : Success return TRUE
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_bool tdd_uas_custom_get_specific_channel(kal_uint8 band, kal_uint16 *specificChannel)
{
    kal_bool ret = KAL_TRUE;
    kal_uint8 i;

    if ((band >= 0) && (band < NUM_OF_UMTS_TDD_BANDS))
    {
        for (i=0; i<NUM_OF_SPECIFIC_CHANNELS; i++)
        {
            *(specificChannel + i) = tdd_specific_uarfcn[band][i];
        }
    }
    else
    {
        ret = KAL_FALSE;
    }

    return ret;
}

/*****************************************************************************
* FUNCTION
*  tdd_uas_custom_set_specific_channel
* DESCRIPTION
*   use this function to set tdd specific channel
*
* PARAMETERS
*   band            : which band to set
*   specificChannel : UARFCN to set
* RETURNS
*  kal_bool         : Success return TRUE
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_bool tdd_uas_custom_set_specific_channel(kal_uint8 band, kal_uint16 *specificChannel)
{
    kal_bool ret = KAL_TRUE;
    kal_uint8 i;
    
    /**
     * We'll not check input UARFCN here.
     * When UAS use specific channel, UAS will check:
     *  1> UARFCN is valid or not
     *  2> UARFCN is in UE support band or not
     */
    if ((band >= 0) && (band < NUM_OF_UMTS_TDD_BANDS))
    {
        for (i=0; i<NUM_OF_SPECIFIC_CHANNELS; i++)
        {
            tdd_specific_uarfcn[band][i] = *(specificChannel + i);
        }
    }
    else
    {
        ret = KAL_FALSE;
    }

    return ret;
}
/*****************************************************************************
* FUNCTION
*  tdd_uas_custom_get_predefined_freq
* DESCRIPTION
*  use this function to get customer predefine stored frequency list
*
* PARAMETERS
*  preDefinedFreqList: uarfcn to set
* RETURNS
*  kal_uint8 num : valid uarfcn number
*
*****************************************************************************/

kal_uint8 tdd_uas_custom_get_predefined_freq(kal_uint16 *preDefinedFreqList)
{
	kal_uint8 i;
	kal_uint8 num = 0;

	for(i = 0; i < CUSTOM_PREDEFINE_FREQ_LIST_NUM; i++)
	{
		if(preDefinedCustomFreqList[i] != 0xffff)
		{
			*(preDefinedFreqList+num) = preDefinedCustomFreqList[i];
			num++;
		}
	}

	return num;
}


extern kal_bool fdd_uas_custom_plmn_for_csfb_combined_search(void* plmn_id)
{
    kal_uint32 mccmnc;
    kal_uint32 i;
    CUSTOM_RRC_PLMN_Identity* rrc_plmn = (CUSTOM_RRC_PLMN_Identity*)plmn_id;

    mccmnc = rrc_plmn->mcc.element[0];                        // mcc1
    mccmnc = (mccmnc * 10) + (rrc_plmn->mcc.element[1]);      // mcc2
    mccmnc = (mccmnc * 10) + (rrc_plmn->mcc.element[2]);        // mcc3

    mccmnc = (mccmnc * 10) + (rrc_plmn->mnc.element[0]);      // mnc1
    mccmnc = (mccmnc * 10) + (rrc_plmn->mnc.element[1]);        // mnc2
    if (rrc_plmn->mnc.numElements == 3)
    {
       mccmnc = (mccmnc * 10) + (rrc_plmn->mnc.element[2]);  // mnc3
    }
        
    for(i = 0; i < CUSTOM_CSFB_COMBINED_SEARCH_PLMN_LIST_NUM; i++)
    {    
        if(CUSTOM_CSFB_COMBINED_SEARCH_PLMN[i].mccMnc == 0xFFFFFF)    
        {
           return KAL_TRUE;
        }
        else if(CUSTOM_CSFB_COMBINED_SEARCH_PLMN[i].mccMnc == mccmnc)
        {    // Found in the table
            return KAL_TRUE;
        }
    }

    return KAL_FALSE;
 
}

/*****************************************************************************
* FUNCTION
*  fdd_uas_custom_get_band_priority_for_plmn
* DESCRIPTION
*  use this function to get band priority for particular PLMN
*
* PARAMETERS
*  plmn_id: plmn id to which band priority needs to be fetched
* RETURNS
*  kal_uint8 * : pointer to band priority of the PLMN
*
*****************************************************************************/



kal_uint8 * fdd_uas_custom_get_band_priority_for_plmn(void* plmn_id)
{
    kal_uint32 mccmnc;
    kal_uint32 i;
    CUSTOM_RRC_PLMN_Identity* rrc_plmn = (CUSTOM_RRC_PLMN_Identity*)plmn_id;

    mccmnc = rrc_plmn->mcc.element[0];                        // mcc1
    mccmnc = (mccmnc * 10) + (rrc_plmn->mcc.element[1]);      // mcc2
    mccmnc = (mccmnc * 10) + (rrc_plmn->mcc.element[2]);        // mcc3

    mccmnc = (mccmnc * 10) + (rrc_plmn->mnc.element[0]);      // mnc1
    mccmnc = (mccmnc * 10) + (rrc_plmn->mnc.element[1]);        // mnc2
    if (rrc_plmn->mnc.numElements == 3)
    {
       mccmnc = (mccmnc * 10) + (rrc_plmn->mnc.element[2]);  // mnc3
    }
        
    for(i = 0; i < CUSTOM_BAND_PRIORITY_PER_PLMN_LIST_NUM; i++)
    {    
        if(custom_plmnid_priority_table[i].custom_plmn_id.mccMnc == mccmnc)    
        {
           return (custom_plmnid_priority_table[i].band_priority);
        }
    }


    /*
     * Return default band priorities if custom table does not have an entry for the PLMN
     * Null pointer should not be returned
     */
    return (default_plmnid_priority_type.band_priority);

}
