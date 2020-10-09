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

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   l1d_rf_common.c
 *
 * Project:
 * --------
 *   TK6291
 *
 * Description:
 * ------------
 *   CC RF constance defintion
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#include "l1d_rf_common.h"
#include "l1d_public.h"

#if IS_32K_CRYSTAL_REMOVAL_SUPPORT
extern int CLoad_FreqOffset;

void L1D_RF_GetCLoadFreqOffset( int *buff )
{
   *buff = CLoad_FreqOffset;
}
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_TXPC_CL_AUXADC_SUPPORT || IS_TXPC_CL_BSI_SUPPORT
void L1D_RF_TXPC_CL_GetAllADC( sTXPC_L1CAL *buff, char is_EPSK )
{  /* For NVRAM to get L1 Default values for 1st boot-up (detector target value by PCL) */
   const signed char *p_src;
         signed char *p_dst;
   int i, n;

   for( i = 0; i < FrequencyBandCount; i++ )
   {
   #if IS_EPSK_TX_SUPPORT
      if( is_EPSK == 1 )
      { 
         p_src = (signed char*)TXADC_Data_EPSK[i];
      }
      else
   #endif
      {  
		  p_src = (signed char*)TXADC_Data[i];
         (void)is_EPSK;
      }

      if( p_src != 0 )
      {  p_dst = (signed char*)(&buff->adc[i]);

         for( n = sizeof(sTXPC_ADCDATA); n > 0; n-- )
         {  *p_dst++ = *p_src++;
         }
      }
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_TXPC_CL_GetAllTEMP( sTXPC_L1CAL *buff, char is_EPSK )
{  /* For NVRAM to get L1 Default values for 1st boot-up (detector temperature compensation value) */
   const signed char *p_src;
         signed char *p_dst;
   int i, n;

   /* start from Band850 */
   for( i = 1; i < FrequencyBandCount; i++ )
   {
   #if IS_EPSK_TX_SUPPORT
      if( is_EPSK == 1 )
      { 
         p_src = (signed char*)TXTEMP_Data_EPSK[i];
      }
      else
   #endif
      {  
	     p_src = (signed char*)TXTEMP_Data[i];
         (void)is_EPSK;
      }

      if( p_src != 0 )
      {  p_dst = (signed char*)(&buff->temp[i]);

         for( n = sizeof(sTXPC_TEMPDATA); n > 0; n-- )
         {  *p_dst++ = *p_src++;
         }
      }
   }
}
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#if 0
#if IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2
   #if IS_GPRS
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
   #endif
/* under construction !*/
   #if IS_EGPRS
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
   #endif
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2
   #if IS_GPRS
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
   #endif
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2
   #if IS_EGPRS
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
   #endif
#endif
/* under construction !*/
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

