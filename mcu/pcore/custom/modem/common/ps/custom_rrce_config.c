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

#include "custom_rrce_config.h"
/*
**   Macros
*/

/* For custom to determine support UPA or not */
/* KAL_TRUE: support UPA */
/* KAL_FALSE: not support UPA */
#define RRCE_IS_SUPPORT_HSUPA KAL_TRUE

const custom_plmn_list CUSTOM_PLMN_BLACK_LIST[] = 
{
/* New MCCMNC can be added by customer in this as below. But make sure that it is either 5 digit or 6 digit and should not have*/
    {46001}
};

const custom_plmn_list CUSTOM_EFACH_BLACK_LIST[] = 
{
/* New MCCMNC can be added in this as below. But make sure that it is either 5 digit or 6 digit
    {40402},
    {404346},
*/
    {99999}
};

const kal_uint32 CUSTOM_EFACH_BLACK_LIST_NUM = sizeof(CUSTOM_EFACH_BLACK_LIST)/sizeof(custom_plmn_list);

const custom_plmn_list CUSTOM_CAT7_BAR_LIST[] = 
{
/* New MCCMNC can be added in this as below. But make sure that it is either 5 digit or 6 digit
    {40402},
    {404346},

    {40402},
    {40403},
*/
    {23001},
    {29401},
    {21630},
    {26002},
    {0xFFFFFF} // for empty list
};


const kal_uint32 CUSTOM_CAT7_BAR_LIST_NUM = sizeof(CUSTOM_CAT7_BAR_LIST)/sizeof(custom_plmn_list);

const custom_plmn_list CUSTOM_PLMN_FOR_RELEASE_INDICATOR[] = 
{
	 /* New MCCMNC can be added by customer in this as below. But make sure that it is either 5 digit or 6 digit */
	 {31030},
	 {31070},
	 {31090},
	 {310150},
	 {310170},
	 {310280},
	 {310380},
	 {310410},
	 {310560},
	 {310680},
	 {310950},
	 {311180},
	 {312670},
	 {313100}
};

const custom_plmn_list CUSTOM_PLMN_A54_WHITE_LIST[] =
{
/* New MCCMNC can be added by customer in this as below. But make sure that it is either 5 digit or 6 digit and should not have*/
     {22250}, // Iliad Italy
     {20601}, // Proximus Belgium
     {20815}, // Free Mobile France
     {64703}  // Telco OI France
};

const custom_plmn_list CUSTOM_MACIIS_BLACK_LIST[] = 
{
	 /* New MCCMNC can be added by customer in this as below. But make sure that it is either 5 digit or 6 digit */
	 {20201}, // Greece
	 {20416}, // Netherlands
	 {20420}, // Netherlands
     {21630}, // Hungary
	 {21901}, // Croatia
	 {22603}, // Romania
	 {22606}, // Romania
	 {23001}, // Czech Republic
	 {23102}, // Slovakia
	 {23203}, // Austria
	 {23207}, // Tele.ring
	 {26002}, // Poland
	 {26201}, // Germany
	 {29401}, // Macedonia
	 {29702}  // Montenegro
};

const kal_uint32 CUSTOM_MACIIS_BLACK_LIST_NUM = sizeof(CUSTOM_MACIIS_BLACK_LIST)/sizeof(custom_plmn_list);

const kal_uint32 CUSTOM_PLMN_BLACK_LIST_NUM = sizeof(CUSTOM_PLMN_BLACK_LIST)/sizeof(custom_plmn_list);

const kal_uint32 CUSTOM_PLMN_A54_WHITE_LIST_NUM = sizeof(CUSTOM_PLMN_A54_WHITE_LIST)/sizeof(custom_plmn_list);

const kal_uint16 custom_conn_temp_fail_bar_time = 300; // Default value. Customer can change as per requirement.

const kal_uint16 custom_CC_no_detect_uarfcn_bar_time = 300; // Default value. Customer can change as per requirement.

const kal_uint16 custom_CC_no_detect_Bar_Threshold = 3; // Default value. Customer can change as per requirement.

const kal_int16 custom_rach_fail_bar_EcNo = 0; // Cell will be barred after V300>N300 RACH fail based on EcNo when custom_rach_fail_bar_EcNo != 0. The recommended value of custom_rach_fail_bar_EcNo is -15

const kal_uint32 CUSTOM_PLMN_FOR_RELEASE_INDICATOR_NUM = sizeof(CUSTOM_PLMN_FOR_RELEASE_INDICATOR)/sizeof(custom_plmn_list);

const custom_cat7_plmn_list CUSTOM_CAT7_3G_BLACK_LIST[] = 
{
/* New MCC can be added by customer in this as below
    {250}, // RUSSIA MCC
    {000},
    {111}
*/
   {0xFFFFFFFF}
};

const kal_uint32 CUSTOM_CAT7_3G_BLACK_LIST_NUM = sizeof(CUSTOM_CAT7_3G_BLACK_LIST)/sizeof(custom_cat7_plmn_list);

const custom_plmn_list CUSTOM_CPC_BLACK_LIST[] = 
{
/* New MCCMNC can be added in this as below. But make sure that it is either 5 digit or 6 digit (decimal)
    {40402},   // for 5 digit
    {404037},  // for 6 digit
*/
    {0xFFFFFF} // for empty list
};

const kal_uint32 CUSTOM_CPC_BLACK_LIST_NUM = sizeof(CUSTOM_CPC_BLACK_LIST)/sizeof(custom_plmn_list);

const custom_plmn_list CUSTOM_EDRX_BLACK_LIST[] = 
{
/* New MCCMNC can be added in this as below. But make sure that it is either 5 digit or 6 digit (decimal)
    {40402},   // for 5 digit
    {404037},  // for 6 digit
*/
    {0xFFFFFF} // for empty list
};

const kal_uint32 CUSTOM_EDRX_BLACK_LIST_NUM = sizeof(CUSTOM_EDRX_BLACK_LIST)/sizeof(custom_plmn_list);

/*****************************************************************************
* FUNCTION
*  rrce_is_support_HSUPA
* DESCRIPTION
*
*  this function allow custom to determine support UPA or not
*
* PARAMETERS
*
* RETURNS
*  kal_bool
* GLOBALS AFFECTED
*   None
*****************************************************************************/
#ifndef __HSUPA_CAPABILITY_NOT_SUPPORT__
kal_bool rrce_is_support_HSUPA (void)
{
   return (RRCE_IS_SUPPORT_HSUPA);
}
#endif


kal_bool rrce_is_support_opt1(void)
{

#ifdef __TC7_CS_OPT1__   
return KAL_TRUE;
#else
return KAL_FALSE;
#endif

}



kal_bool rrce_is_support_opt2(void)
{


#ifdef __TC7_CS_OPT2__   
return KAL_TRUE;
#else
return KAL_FALSE;
#endif



}

extern kal_bool is_plmn_blacklisted_in_custom_config(void* plmn_id)
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
        
    for(i = 0; i < CUSTOM_PLMN_BLACK_LIST_NUM; i++)
    {    
        if(CUSTOM_PLMN_BLACK_LIST[i].mccMnc == 0xFFFFFF)    
        {
           return KAL_TRUE;
        }
        else if(CUSTOM_PLMN_BLACK_LIST[i].mccMnc == mccmnc)
        {    // Found in the table
            return KAL_TRUE;
        }
    }

    return KAL_FALSE;
 
}

extern kal_bool is_plmn_blacklisted_in_efach_custom_list(void* plmn_id)
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

    for(i = 0; i < CUSTOM_EFACH_BLACK_LIST_NUM; i++)
    {        
        if(CUSTOM_EFACH_BLACK_LIST[i].mccMnc == mccmnc)
        {    // Found in the table
            return KAL_TRUE;
        }
    }

    return KAL_FALSE; 
}

extern kal_bool is_plmn_blacklisted_in_maciis_custom_list(void* plmn_id)
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

    for(i = 0; i < CUSTOM_MACIIS_BLACK_LIST_NUM; i++)
    {        
        if(CUSTOM_MACIIS_BLACK_LIST[i].mccMnc == mccmnc)
        {    // Found in the table
            return KAL_TRUE;
        }
    }

    return KAL_FALSE; 
}

extern kal_bool is_cat7_blacklisted_in_custom_config(void* plmn_id)
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
        
    for(i = 0; i < CUSTOM_CAT7_BAR_LIST_NUM; i++)
    {    

        if(CUSTOM_CAT7_BAR_LIST[i].mccMnc == mccmnc)
        {    // Found in the table
            return KAL_TRUE;
        }
    }

    return KAL_FALSE;
 
}


extern  kal_uint16 custom_config_barcell_time(void)
{

   return custom_conn_temp_fail_bar_time;
   
}

extern  kal_uint16 custom_config_baruarfcn_time(void)
{

   return custom_CC_no_detect_uarfcn_bar_time;
   
}

extern  kal_uint16 custom_config_baruarfcn_threshold(void)
{

   return custom_CC_no_detect_Bar_Threshold;
   
}

extern  kal_int16 custom_config_barcell_EcNo(void)
{

   return custom_rach_fail_bar_EcNo;
   
}

extern kal_bool custom_config_3g_cat7_black_list(void* plmn_id)
{
    kal_uint32 mccmnc;
    kal_uint32 i;
    RRC_PLMN_Identity1* rrc_plmn = (RRC_PLMN_Identity1*)plmn_id;

    mccmnc = rrc_plmn->mcc.element[0];                        // mcc1
    mccmnc = (mccmnc * 10) + (rrc_plmn->mcc.element[1]);      // mcc2
    mccmnc = (mccmnc * 10) + (rrc_plmn->mcc.element[2]);        // mcc3

#if (0)
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
        
    for(i = 0; i < CUSTOM_CAT7_3G_BLACK_LIST_NUM; i++)
    {        
        if(CUSTOM_CAT7_3G_BLACK_LIST[i].mccMnc == mccmnc)
        {    // Found in the table
            return KAL_TRUE;
        }
    }

    return KAL_FALSE;
 
}

extern kal_bool is_plmn_available_for_rel_ind_in_custom_config(void* plmn_id)
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
        
    for(i = 0; i < CUSTOM_PLMN_FOR_RELEASE_INDICATOR_NUM; i++)
    {    
        if(CUSTOM_PLMN_FOR_RELEASE_INDICATOR[i].mccMnc == mccmnc)
        {    // Found in the table
            return KAL_TRUE;
        }
    }

    return KAL_FALSE;
 
}

extern kal_bool is_plmn_blacklisted_in_cpc_custom_list(void* plmn_id)
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

    for(i = 0; i < CUSTOM_CPC_BLACK_LIST_NUM; i++)
    {        
        if(CUSTOM_CPC_BLACK_LIST[i].mccMnc == mccmnc)
        {    // Found in the table
            return KAL_TRUE;
        }
    }

    return KAL_FALSE; 
}

extern kal_bool is_plmn_blacklisted_in_edrx_custom_list(void* plmn_id)
{
    kal_uint32 mccmnc;
    kal_uint32 i;
    CUSTOM_RRC_PLMN_Identity* rrc_plmn = (CUSTOM_RRC_PLMN_Identity*)plmn_id;

    mccmnc = rrc_plmn->mcc.element[0];                        // mcc1
    mccmnc = (mccmnc * 10) + (rrc_plmn->mcc.element[1]);      // mcc2
    mccmnc = (mccmnc * 10) + (rrc_plmn->mcc.element[2]);      // mcc3

    mccmnc = (mccmnc * 10) + (rrc_plmn->mnc.element[0]);      // mnc1
    mccmnc = (mccmnc * 10) + (rrc_plmn->mnc.element[1]);      // mnc2

    if (rrc_plmn->mnc.numElements == 3)
    {
       mccmnc = (mccmnc * 10) + (rrc_plmn->mnc.element[2]);   // mnc3
    }

    for(i = 0; i < CUSTOM_EDRX_BLACK_LIST_NUM; i++)
    {        
        if(CUSTOM_EDRX_BLACK_LIST[i].mccMnc == mccmnc)
        {    // Found in the table
            return KAL_TRUE;
        }
    }

    return KAL_FALSE; 
}

extern kal_bool is_a54_plmn_whitelisted_in_custom_config(void* plmn_id)
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
        
    for(i = 0; i < CUSTOM_PLMN_A54_WHITE_LIST_NUM; i++)
    {    
        if(CUSTOM_PLMN_A54_WHITE_LIST[i].mccMnc == mccmnc)
        {    // Found in the table
            return KAL_TRUE;
        }
    }

    return KAL_FALSE;
}