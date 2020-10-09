/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2013
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
 *  drv_hsl.c 
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   Driver of LTE L1 ESL High Speed Logger 
 * 
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 ****************************************************************************/
#include <kal_public_api.h>
#include <drv_hsl.h>

#define HSL_MAX_BUFFER_SIZE 512
#define HSL_MAX_RAW_TRACE_SIZE (128)

static char _hslBuffer[HSL_MAX_BUFFER_SIZE];

/*-----------------------------------------------------------------------*
* FUNCTION
*  HSLPrintSting 
*
* DESCRIPTION
*  This function print a string with given length to HSL
*
* PARAMETERS
*  string: string to print
*  size: length of the string
*
* RETURNS
*  None.
*
*------------------------------------------------------------------------*/
void HSLPrintString(char * string, unsigned long int size)
{
    unsigned long int idx;

    for(idx = 0; idx < size; idx++)
    {
        M_HSLPrintChar(string[idx]);
    }
}

/*-----------------------------------------------------------------------*
* FUNCTION
*  HSLPrintf
*
* DESCRIPTION
*  This function is a generic printf entry for HSL
*
* PARAMETERS
*  fmt: string format 
*
* RETURNS
*  None.
*
*------------------------------------------------------------------------*/
void HSLPrintf(const char * fmt, ... )
{
    unsigned long int size;
    va_list args;

    va_start(args, fmt);
    size = vsnprintf(_hslBuffer, HSL_MAX_BUFFER_SIZE, fmt, args);
    va_end(args);

    if(size >= HSL_MAX_BUFFER_SIZE)
    {
        /* truncated */
        size = HSL_MAX_BUFFER_SIZE - 1;
    }

    HSLPrintString(_hslBuffer, size);
}

void hsl_printf(const char * fmt, ... )
{
    char buffer[HSL_MAX_RAW_TRACE_SIZE];
    unsigned long int size;
    va_list args;

    va_start(args, fmt);
    size = vsnprintf(_hslBuffer, HSL_MAX_BUFFER_SIZE, fmt, args);
    va_end(args);

    if(size >= HSL_MAX_RAW_TRACE_SIZE)
    {
        /* truncated */
        buffer[HSL_MAX_RAW_TRACE_SIZE-1] = 0;
        size = HSL_MAX_RAW_TRACE_SIZE - 1;
    }

    HSLPrintString(_hslBuffer, size);
}
