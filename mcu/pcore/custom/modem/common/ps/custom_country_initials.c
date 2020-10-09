/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2015
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
 * Filename:
 * ---------
 * Custom_country_initials.c
 *
 * Description:
 * ------------
 *   This file is intends for Customer to define the country initials for EONS feature
 *
 * Author:
 * -------
 * 
 *
*****************************************************************************/

#include "string.h"
#include "kal_general_types.h"

#define COUNTRY_INITIALS_ENTRIES    (sizeof(country_initials_table)/sizeof(country_initials_table[0]))

/* -----------PLEASE ADJUST HERE to define country initials-----------------  */
/* ----- NOTE:   country initials string can only up to 3 characters (including space) -------   */
char* country_initials_table[][2] = {

            {"310", "US "}, /* US */
            {"311", "US "}, /* US */
            {"312", "US "}, /* US */
            {"313", "US "}, /* US */
            {"314", "US "}, /* US */
            {"315", "US "}, /* US */
            {"316", "US "}, /* US */

            {"",    ""} /* default: "" indicate the last one */
};


/*------ Please do not change below functions ------------------*/
kal_uint16 custom_get_max_ci_count(void);
kal_bool custom_get_ci_by_mcc(const kal_uint8 *mcc_str, kal_uint8 *ci_str);				


/*****************************************************************************
* FUNCTION
*  custom_get_max_ci_count
* DESCRIPTION
*   This function returns COUNTRY_INITIALS_ENTRIES defined by customer
*
* PARAMETERS
*   
* RETURNS
*  kal_uint16
*
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_uint16 custom_get_max_ci_count(void)
{
   return (COUNTRY_INITIALS_ENTRIES);
}

/*****************************************************************************
* FUNCTION
*  custom_get_ci_by_mcc
* DESCRIPTION
*   This function gets country initials through mcc
*
* PARAMETERS
*   IN: mcc_str
*   OUT: ci_str
*   
* RETURNS
*  kal_bool 
*  KAL_TRUE: Success
*  KAL_FALSE: mcc_str not found
*
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_bool custom_get_ci_by_mcc(const kal_uint8 *mcc_str, kal_uint8 *ci_str)
{
    kal_uint16 index;

    if (NULL == mcc_str || NULL == ci_str)
    {
      return KAL_FALSE;
    }

    for(index = 0; index < COUNTRY_INITIALS_ENTRIES; index++)
    {
        if(strncmp((char *)mcc_str, (char *)country_initials_table[index][0], 3)== 0)
        {
            /* found entry in the table */
            strncpy((char *)ci_str,(char *)country_initials_table[index][1], 3);
            return KAL_TRUE;
        }
    }

    /* cannot found in the table */
    strcpy((char *)ci_str, "");
    return KAL_FALSE;
}


