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
 * customer_sms_tl_retry.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file contains SMS module CM layer entry function.
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
 *============================================================================
 ****************************************************************************/ 


/*
**   Includes
*/
#include "kal_general_types.h"

//for SBP
#include "sbp_public_utility.h"

#include "sim_exported_enum.h"


/* For customer define the SMS PS retry count */
#define MAX_SMS_PS_RETRY_COUNT  1

/* For customer define the SMS CS retry count */
#define MAX_SMS_CS_RETRY_COUNT  1

/* For customer define the SMS Rau retry count */
#define MAX_SMS_RAU_RETRY_COUNT  2

#define INVALID_TIMER_VALUE 0xffff

kal_uint8 sms_tl_max_retry_count (protocol_id_enum ps_id);

kal_uint16 sms_tl_retry_timer (protocol_id_enum ps_id);

kal_uint8 sms_tl_max_retry_count_during_call (protocol_id_enum ps_id);

kal_uint16 sms_tl_retry_timer_during_call (protocol_id_enum ps_id);


kal_uint8 sms_tl_max_ps_retry_count(void);

kal_uint8 sms_tl_max_cs_retry_count(void);

kal_uint8 sms_tl_max_rau_retry_count(void);

kal_uint8 custom_get_sms_tl_retry_count_by_hplmn_id(kal_uint32 hplmn_id);

kal_uint16 custom_sms_tl_retry_timer (kal_uint32 hplmn_id, protocol_id_enum ps_id);

kal_uint16 custom_get_sms_tl_retry_timer_by_hplmn_id(kal_uint32 hplmn_id);
/*****************************************************************************
* FUNCTION
*   sms_tl_max_retry_count 
* DESCRIPTION
*   This function is used to define the max
*   TL layer retry count for SMS operation
*
* PARAMETERS
*
* RETURNS
*  kal_uint8
* GLOBALS AFFECTED
*   None
*****************************************************************************/

kal_uint8 sms_tl_max_retry_count(protocol_id_enum ps_id)
{
   return (sbp_query_md_feature_data_by_ps(SBP_SMS_MAX_TL_RETRY, ps_id)); 
}


/*****************************************************************************
* FUNCTION
*  sms_tl_retry_timer
* DESCRIPTION
*   This function is used to define the 
*   TL layer retry timer for SMS operation
*
* PARAMETERS
*
* RETURNS
*  kal_uint16
* GLOBALS AFFECTED
*   None
*****************************************************************************/

kal_uint16 sms_tl_retry_timer (protocol_id_enum ps_id)
{
    return (sbp_query_md_feature_data_by_ps(SBP_SMS_TL_RETRY_TIMER, ps_id)*10); 
}

/*****************************************************************************
* FUNCTION
*   sms_tl_max_ps_retry_count 
* DESCRIPTION
*   This function is used to define the max
*   PS retry count for SMS operation
*
* PARAMETERS
*
* RETURNS
*  kal_uint8
* GLOBALS AFFECTED
*   None
*****************************************************************************/

kal_uint8 sms_tl_max_ps_retry_count(void)
{
   return (MAX_SMS_PS_RETRY_COUNT);
}

/*****************************************************************************
* FUNCTION
*   sms_tl_max_cs_retry_count 
* DESCRIPTION
*   This function is used to define the max
*   CS retry count for SMS operation
*
* PARAMETERS
*
* RETURNS
*  kal_uint8
* GLOBALS AFFECTED
*   None
*****************************************************************************/

kal_uint8 sms_tl_max_cs_retry_count(void)
{
   return (MAX_SMS_CS_RETRY_COUNT);
}

/*****************************************************************************
* FUNCTION
*   sms_tl_max_rau_retry_count 
* DESCRIPTION
*   This function is used to define the max
*   Rau retry count for SMS operation
*
* PARAMETERS
*
* RETURNS
*  kal_uint8
* GLOBALS AFFECTED
*   None
*****************************************************************************/

kal_uint8 sms_tl_max_rau_retry_count(void)
{
   return (MAX_SMS_RAU_RETRY_COUNT);
}

/*****************************************************************************
* FUNCTION
*   sms_tl_max_retry_count_during_call 
* DESCRIPTION
*   This function is used to define the max
*   TL layer retry count for SMS operation when call on peer protocol stack is ongoing
*
* PARAMETERS
*
* RETURNS
*  kal_uint8
* GLOBALS AFFECTED
*   None
*****************************************************************************/

kal_uint8 sms_tl_max_retry_count_during_call(protocol_id_enum ps_id)
{
   return (sbp_query_md_feature_data_by_ps(SBP_SMS_MAX_TL_RETRY_COUNT_DURING_CALL, ps_id)); 
}


/*****************************************************************************
* FUNCTION
*  sms_tl_retry_timer_during_call
* DESCRIPTION
*   This function is used to define the 
*   TL layer retry timer for SMS operation when call on peer protocol stack is ongoing
*
* PARAMETERS
*
* RETURNS
*  kal_uint16
* GLOBALS AFFECTED
*   None
*****************************************************************************/

kal_uint16 sms_tl_retry_timer_during_call (protocol_id_enum ps_id)
{
    return (sbp_query_md_feature_data_by_ps(SBP_SMS_TL_RETRY_TIMER_DURING_CALL, ps_id)*100); 
}

/*****************************************************************************
* FUNCTION
*  custom_get_sms_tl_retry_count_by_hplmn_id
*
* DESCRIPTION
* This function allows  customer to modify the MAX RETRY COUNT based on the PLMN ID .
*
* PARAMETERS
*  PLMN ID
*
* RETURNS
* SMS TL MAX RETRY COUNT 
*
* GLOBALS AFFECTED
*  none
*****************************************************************************/

kal_uint8 custom_get_sms_tl_retry_count_by_hplmn_id(kal_uint32 hplmn_id)
{
	kal_uint8 retry_count = 0xff;

	switch(hplmn_id)
    {
        case 26002:           //For TMO Poland operator 26002
		case 23430:          //For UK EE opreator 23430 - 23486      
		case 23431:
		case 23432:
		case 23433:
		case 23434:
		case 23486:			
		    retry_count = 2;
			break;
			
		default:
			retry_count = 0xff;
			break;
    }

	return retry_count;
}

/*****************************************************************************
* FUNCTION
* custom_sms_tl_retry_timer
*
* DESCRIPTION
* This function is used to define the 
* TL layer retry timer for SMS operation based on HPLMN of the operator
*
* PARAMETERS
*
* RETURNS
* custom_tl_retry_timer
*
* GLOBALS AFFECTED
* None
*****************************************************************************/
kal_uint16 custom_sms_tl_retry_timer (kal_uint32 hplmn_id, protocol_id_enum ps_id)
{
     kal_uint16 custom_tl_retry_timer = INVALID_TIMER_VALUE;
	

	/* If SBP_CUSTOM_SMS_TL_RETRY_TIMER feature is enabled , then update SMS TL retry timer based on HPLMN of the oprator*/
	if((sbp_query_md_feature_by_ps(SBP_CUSTOM_SMS_TL_RETRY_TIMER,ps_id) == KAL_TRUE))
    {
		custom_tl_retry_timer = custom_get_sms_tl_retry_timer_by_hplmn_id(hplmn_id);
   	}


	/* If UE is not on custom PLMN list then default SMS TL MAX RETRY TIMER VALUE shall be used */
	if(custom_tl_retry_timer == INVALID_TIMER_VALUE)
	{
		custom_tl_retry_timer = sbp_query_md_feature_data_by_ps(SBP_SMS_TL_RETRY_TIMER,ps_id);
	}
    
    custom_tl_retry_timer = custom_tl_retry_timer * 10;          
	return custom_tl_retry_timer;
}

/*****************************************************************************
* FUNCTION
* custom_get_sms_tl_retry_timer_by_hplmn_id
*
* DESCRIPTION
* This function allows  customer to modify the SMS TL retry Timer based on the PLMN ID .
*
* PARAMETERS
* PLMN ID
*
* RETURNS
* SMS TL RETRY TIMER
*
* GLOBALS AFFECTED
* none
*****************************************************************************/

kal_uint16 custom_get_sms_tl_retry_timer_by_hplmn_id(kal_uint32 hplmn_id)
{
	kal_uint16 retry_timer = INVALID_TIMER_VALUE;

	switch (hplmn_id)
    {
        case 732101:                      /*CLARO OPERATOR */
		    retry_timer = 180;
			break;
			
		default:
			retry_timer = INVALID_TIMER_VALUE;
			break;
    }

	return retry_timer;
}

