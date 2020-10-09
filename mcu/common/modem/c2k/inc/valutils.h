/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS (""MEDIATEK SOFTWARE"")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN ""AS-IS"" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
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
/**************************************************************************************************
* %version: 2 %  %instance: HZPT_2 %   %date_created: Fri Mar 23 16:20:45 2007 %  %created_by: jingzhang %  %derived_by: jingzhang %
**************************************************************************************************/

#ifndef VALUTITLS_H
#define VALUTITLS_H
#include "sysdefs.h"
#ifdef  __cplusplus
extern "C" {
#endif

#ifdef MTK_CBP
typedef enum
{
    VAL_VSER_STATUS_TRACE = 30000000,
    VAL_SAVE_UNSLCT_RESULT_EXP_TRACE_1 = 70000000,
    VAL_SAVE_UNSLCT_RESULT_EXP_TRACE_2, 
    VAL_SAVE_UNSLCT_RESULT_EXP_TRACE_3,
    VAL_SEND_UNSLCT_RESULT_EXP_TRACE_1 = 70000005,
    VAL_ENH_AT_SEND_UNSLCT_RESULT_EXP_TRACE_1 = 70000010,
    VAL_ENH_AT_SEND_UNSLCT_RESULT_EXP_TRACE_2,
    VAL_SUSPEND_TRACE_1 = 70000015,
    VAL_SUSPEND_TRACE_2,
    VAL_GET_SYS_TIME_TRACE_1 = 70000020,
    VAL_GET_SYS_TIME_TRACE_2
} ValGenericDec1TraceIDE;
#endif

/*****************************************************************************
 
  FUNCTION NAME: PhbChar2BCD - Revised by zhengyi 2004-9-9
  DESCRIPTION:
        Convert digital char string to BCD code.: example:convert '135' to 0x31 0xF5
  PARAMETERS:
        pBcd :where BCD code storaged.
        pCharArray: char string with '\0' end.
  RETURNED VALUES:

*****************************************************************************/

void PhbChar2BCD( kal_uint8* pBcd,
                  kal_uint8* pCharArray );

/*****************************************************************************
  FUNCTION NAME: PhbBCD2Char 
  DESCRIPTION:
        Convert BCD code to digital char string. example:convert 0x31 0xF5 to '135' 
        the max char string length is signed 10.
  PARAMETERS:
        pBcd : pointer to BCD code array, with 0xf*,or 0xff end.
        pCharArray: char string
  RETURNED VALUES:

*****************************************************************************/
#ifdef MTK_CBP
void PhbBCD2Char( kal_uint8* pCharArray,kal_uint8 MaxCharLen, kal_uint8* pBcd, kal_uint8 MaxBcdLen );
#else
void PhbBCD2Char( kal_uint8* pCharArray,
                  kal_uint8* pBcd );
#endif
kal_uint8   getuint8(kal_uint8* data, kal_uint16 startBit, kal_uint8 numBits);
kal_uint16  getuint16(kal_uint8* data, kal_uint16 startBit, kal_uint8 numBits);
void    putuint8(kal_uint8* data, kal_uint16 startBit, kal_uint8 numBits, kal_uint8 value);
void    putuint16(kal_uint8* data, kal_uint16 startBit, kal_uint8 numBits, kal_uint16 value);
kal_uint16  crc16bit(kal_uint8* msg, kal_uint16 len);
#ifdef  __cplusplus
}
#endif
#endif

/**Log information: \main\vtui2_5x\2 2008-09-29 07:41:09 GMT dwang
** HREF#2278**/
/**Log information: \main\vtui2_5x\3 2008-11-06 03:03:10 GMT pzhang
** HREF#2895**/

