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
 * afe2.c
 *
 * Project:
 * --------
 *   Maui_sw
 *
 * Description:
 * ------------
 *   Audio Front End
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
 * $Revision:   1.20  $
 * $Modtime:   Aug 15 2005 14:00:06  $
 * $Log:   //mtkvs01/vmdata/Maui_sw/archives/mcu/l1audio/afe2.c-arc  $
 *
 * 05 14 2017 ys.hsieh
 * [MOLY00249046] [MT6763]add speech hw dvt audio command patch
 * 	
 * 	Bianco DVT for audiocommand
 *
 * 03 01 2017 sheila.chen
 * [MOLY00209193] [93MD] speech driver
 * clean marked code. 
 * refator the gain control (BT)
 * fix bug: the debug info size should be 16.
 * common parameter default value location change
 *
 * 02 24 2017 sheila.chen
 * [MOLY00209193] [93MD] speech driver
 * remove backup and restore function in AFE.
 *
 * 02 24 2017 sheila.chen
 * [MOLY00209193] [93MD] speech driver
 * rewrite digital gain control.
 *
 * 02 13 2017 sheila.chen
 * [MOLY00209193] [93MD] speech driver
 * remove afe setrefresh and related code.
 * remove mute speaker which is only using in audio path
 *
 * 02 13 2017 sheila.chen
 * [MOLY00209193] [93MD] speech driver
 * remove unused toneLoopback
 *
 * 02 06 2017 thomas.chen
 * [MOLY00227776] [Bianco Bring-up] 93 Bringup modification
 * .
 *
 * 01 26 2017 sheila.chen
 * [MOLY00209193] [93MD] speech driver
 * revise afe driver.
 *
 * 01 26 2017 sheila.chen
 * [MOLY00209193] [93MD] speech driver
 * revise afe driver.
 *
 * 11 09 2016 thomas.chen
 * [MOLY00212357] 93 SpeechDriver Checkin
 * .
 *
 * 10 27 2016 fu-shing.ju
 * [MOLY00206327] SWB Speech Dev
 * SWB speech driver.
 *
 * 05 10 2012 jy.huang
 * removed!
 * .
 *
 *    Rev 1.0   Dec 31 2004 11:29:16   BM
 * Initial revision.
 *
 *******************************************************************************/

/*
============================================================================================================
------------------------------------------------------------------------------------------------------------
||                        INCLUDE FILES
------------------------------------------------------------------------------------------------------------
============================================================================================================
*/
#include "afe.h"

/*
============================================================================================================
------------------------------------------------------------------------------------------------------------
||                        Global Variables
------------------------------------------------------------------------------------------------------------
============================================================================================================
*/
AFE_STRUCT_T afe;
AFE_RG_STRUCT_T afeRG;
/*
============================================================================================================
------------------------------------------------------------------------------------------------------------
||                        AFE Internal Utility Functions
------------------------------------------------------------------------------------------------------------
============================================================================================================
*/

/* ========================================================================= */
/*   AFE Event Handler                                                  */
/*   This function runs under the context of L1Audio Task                    */
/* ========================================================================= */


void AFE_Init_status(kal_bool flag)
{
   afe.afe_init = flag;
}

//=============================================================================================
//                  AFE Init
//=============================================================================================
/*****************************************************************************
* FUNCTION
*  AFE_Init
* DESCRIPTION
*   This function is to initialize the AFE module.
*
* PARAMETERS
*  None
* RETURNS
*  None
* CALLER
*  L1Audio_Task, L1Audio_ResetDevice
* GLOBALS AFFECTED
*  None
*****************************************************************************/
void AFE_Init( void )
{
   static kal_bool afe_initialized = KAL_FALSE;

   afe.loopback         = KAL_FALSE;

   if (KAL_FALSE == afe_initialized) {
      afe_initialized = KAL_TRUE;      
   }

	afe.voice8kMode = 2; // 32k mode 
    AFE_Chip_Init();

	afe.afe_init = true;

}

void AFE_DELAY(uint16 delay)
{
   kal_uint32 curr_frc, latest_us;

   curr_frc = ust_get_current_time();//unit: micro second (us)
   do{
      latest_us = ust_get_current_time();;
   }while(delay > ust_us_duration(curr_frc, latest_us));
}

/*
============================================================================================================
------------------------------------------------------------------------------------------------------------
||                       Chapter: Digital/Analog Gain Related
------------------------------------------------------------------------------------------------------------
============================================================================================================
*/
/*
void AFE_DigitalOnly_GetOutputVolume(kal_uint8 aud_func, kal_uint8 *vol)
{
	*vol = 0x1000; // fix value for non speech path
	// *vol = afe.aud[aud_func].digitOnly_digital_gain;
}
*/


//=============================================================================================
//                  Section: [AFE Feature] ABB Registers Backup/Store 
//=============================================================================================
#if 0
/* under construction !*/
/* under construction !*/
#if __RELOAD_HW_COEFF__
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if __RELOAD_HW_COEFF__
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
#endif 

void AFE_SetConn0(kal_uint32 val){
    afeRG.afe_conn0 = val;
    *AFE_CONN0 = afeRG.afe_conn0;
    kal_prompt_trace(MOD_L1SP, "[AFE_SetConn0] afeRG.afe_conn0 = %d", afeRG.afe_conn0);
}

