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
 * Filename:
 * ---------
 * Custom_operator_name.c
 *
 * Description:
 * ------------
 *   This file is intends for Customer to define the operator name for AT command such as +COPS, +CPOL, +COPN
 *
 * Author:
 * -------
 * -------
 *
*****************************************************************************/


//#include "kal_non_specific_general_types.h"
#include "string.h"
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "ps_public_enum.h"

#define RMMI_PLMN_NAME_ENTRIES    (sizeof(plmn_numeric_name_table)/sizeof(plmn_numeric_name_table[0]))

/* -------PLEASE ADJUST "customer_operator_name_def.h" to define operator names ------  */
/* ----- NOTE:   LONG alphanumeric format can only up to 16 characters -------   */
/* ------------SHORT alphanumeric format can only up to 8 charactors  -------- */
char plmn_long_name_table[][MAX_PLMN_LONG_NAME_LEN] = {
    #define OPER_NAME(LONG_NAME,SHORT_NAME,NUMERIC_NAME) LONG_NAME,
        #include "customer_operator_name_def.h"
    #undef OPER_NAME
};
char plmn_short_name_table[][MAX_PLMN_SHORT_NAME_LEN] = {
    #define OPER_NAME(LONG_NAME,SHORT_NAME,NUMERIC_NAME) SHORT_NAME,
        #include "customer_operator_name_def.h"
    #undef OPER_NAME
};
char plmn_numeric_name_table[][MAX_PLMN_NUMERIC_NAME_LEN] = {
    #define OPER_NAME(LONG_NAME,SHORT_NAME,NUMERIC_NAME) NUMERIC_NAME,
        #include "customer_operator_name_def.h"
    #undef OPER_NAME
};

/*------ Please do not change below functions ------------------*/
kal_uint16 rmmi_get_max_oper_count(void);
kal_bool rmmi_translate_oper_name(kal_uint8 format1, kal_uint8 *oper_str1, kal_uint8 format2, kal_uint8 *oper_str2);
void rmmi_get_oper_name(kal_uint16 i, kal_uint8 * oper_numeric, kal_uint8 * oper_short, kal_uint8 * oper_long);
void rmmi_set_oper_info(kal_uint8 * oper_numeric, kal_uint8 * oper_short, kal_uint8 * oper_long);


/*****************************************************************************
* FUNCTION
*  rmmi_get_max_oper_count
* DESCRIPTION
*   This function returns RMMI_PLMN_NAME_ENTRIES defined by customer
*
* PARAMETERS
*   
* RETURNS
*  kal_uint16
*
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_uint16 rmmi_get_max_oper_count(void)
{
   return (RMMI_PLMN_NAME_ENTRIES);
}

/*****************************************************************************
* FUNCTION
*  rmmi_translate_oper_name
* DESCRIPTION
*   This function convert oper_str1 (format1) to oper_str2(format2)
*
* PARAMETERS
*   IN: format1
*   IN: oper_str1
*   IN: format2
*   OUT: oper_str2
*   
* RETURNS
*  kal_bool 
*	KAL_TRUE: Success
*	KAL_FALSE: oper_str1 not found
*
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_bool rmmi_translate_oper_name(kal_uint8 format1, kal_uint8 *oper_str1, kal_uint8 format2, kal_uint8 *oper_str2)
{
    kal_uint16 i;
    kal_uint16 rmmi_plmn_name_entries = RMMI_PLMN_NAME_ENTRIES;//use local variable
    kal_uint8 format_len[3] = {MAX_PLMN_LONG_NAME_LEN, MAX_PLMN_SHORT_NAME_LEN, MAX_PLMN_NUMERIC_NAME_LEN};
    char* plmn_name_table_ptr[3] = {
        plmn_long_name_table[0],
        plmn_short_name_table[0],
        plmn_numeric_name_table[0]
    };

    if (format1==format2)
    {
        strcpy((char *)oper_str2,(char *)oper_str1);
        return KAL_TRUE;
    }
    else
    {
        for (i=0;i<rmmi_plmn_name_entries;i++)
        {
            if (strcmp((char *)oper_str1, (plmn_name_table_ptr[format1]+i*format_len[format1]))== 0)
            {
                /* found entry in the table */
                strcpy((char *)oper_str2, (plmn_name_table_ptr[format2]+i*format_len[format2]));
                return KAL_TRUE;
            }
        }

        /* cannot found in the table */
        if (format1==2)// 2: numeric
            strcpy((char *)oper_str2,(char *)oper_str1);
        else 
            strcpy((char *)oper_str2,"");
        
        return KAL_FALSE;
    }
}

/*****************************************************************************
* FUNCTION
*  rmmi_get_oper_name
* DESCRIPTION
*  This function gives the numeric, short alphanumeric, and long alphanumeric
*  strings for the specified entry.
*
* PARAMETERS
*  IN	i : specified the i-th entry
*  OUT	oper_numeric
*  OUT  oper_short_str
*  OUT 	oper_long_str
*  
* RETURNS
*  void
* GLOBALS AFFECTED
*   None
*****************************************************************************/
void rmmi_get_oper_name(kal_uint16 i, kal_uint8 * oper_numeric, kal_uint8 * oper_short, kal_uint8 * oper_long)
{
    oper_numeric[0]='\0';
    oper_short[0]='\0';
    oper_long[0]='\0';

    if (i >= RMMI_PLMN_NAME_ENTRIES)
        return;

    if (strlen((char *)plmn_numeric_name_table[i])>0)
    {
        strcpy((char *)oper_numeric,(char *)plmn_numeric_name_table[i]);
        strcpy((char *)oper_short,(char *)plmn_short_name_table[i]);
        strcpy((char *)oper_long,(char *)plmn_long_name_table[i]);
    }
    return;
}

/*****************************************************************************
* FUNCTION
*  rmmi_set_oper_info
* DESCRIPTION
*   This function is used to store the plmn long/short/numeric name in plmn tables
*
* PARAMETERS
*   
* RETURNS
* 
*
* GLOBALS AFFECTED
*   None
*****************************************************************************/
void rmmi_set_oper_info(kal_uint8 * oper_numeric, kal_uint8 * oper_short, kal_uint8 * oper_long)
{
    kal_uint16 i;
    kal_uint16 rmmi_plmn_name_entries = RMMI_PLMN_NAME_ENTRIES;//use local variable
    kal_uint8 *cr = NULL;

    //should have oper_numeric
    if (strlen((char *)oper_numeric) == 0)
    {
        return;
    }

	/* if the nw string contains CR (0x0d), replace it with space (0x20)*/
	if (oper_long != NULL)
	{
    	cr = (kal_uint8*)strchr((const char*)oper_long, '\r' );
    
    	if ( cr ) 
        {
            *cr = ' ';
    	}
		cr = NULL;
	}

    if (oper_short != NULL)
    {
    	cr = (kal_uint8*)strchr((const char*)oper_short, '\r' );
    
    	if ( cr ) 
        {
            *cr = ' ';
    	}
    }

    for (i=0;i<rmmi_plmn_name_entries;i++)
    {
        if (strcmp((char *)oper_numeric, (char *)plmn_numeric_name_table[i])== 0)
        {
            /* found entry in the table
                       * update the longname and shortname
                       */
            if (oper_short != NULL)
            {
                kal_mem_set((char *)plmn_short_name_table[i],0,MAX_PLMN_SHORT_NAME_LEN);
                strncpy(plmn_short_name_table[i],(char *)oper_short, (MAX_PLMN_SHORT_NAME_LEN-1));
            }
            
            if (oper_long != NULL)
            {
                kal_mem_set((char *)plmn_long_name_table[i],0,MAX_PLMN_LONG_NAME_LEN);
                strncpy((char *)plmn_long_name_table[i],(char *)oper_long, (MAX_PLMN_LONG_NAME_LEN-1));
            }
            return;
        }
        else if (strlen((char *)plmn_numeric_name_table[i]) == 0)//empty string
        {
            break;
        }
    }

    //not found in the table, add new entry
    //if table is full, overwrite the last entry
    if (i == RMMI_PLMN_NAME_ENTRIES)
    {
        i = RMMI_PLMN_NAME_ENTRIES-1;
    }
    
    kal_mem_set((char *)plmn_long_name_table[i],0,MAX_PLMN_LONG_NAME_LEN);
    kal_mem_set((char *)plmn_short_name_table[i],0,MAX_PLMN_SHORT_NAME_LEN);
    kal_mem_set((char *)plmn_numeric_name_table[i],0,MAX_PLMN_NUMERIC_NAME_LEN);
    
    strncpy((char *)plmn_numeric_name_table[i],(char *)oper_numeric, (MAX_PLMN_NUMERIC_NAME_LEN-1));
    
    if (oper_short != NULL)
    {
        strncpy((char *)plmn_short_name_table[i],(char *)oper_short, (MAX_PLMN_SHORT_NAME_LEN-1));
    }
    
    if (oper_long != NULL)
    {
        strncpy((char *)plmn_long_name_table[i],(char *)oper_long, (MAX_PLMN_LONG_NAME_LEN-1));
    }
    
    return;
}
