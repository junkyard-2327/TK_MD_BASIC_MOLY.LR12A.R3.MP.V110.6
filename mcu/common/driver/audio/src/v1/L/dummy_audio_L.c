/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 * dummy_audio.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Provide APIs when speech functionality is disabled 
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#include "kal_public_api.h"
#include "syscomp_config.h"



/************************************/
/* Tasl Creation (temp solution)    */
/* Should modify task_config.h      */
/************************************/
void L1AL_Timer_L_HISR( void )
{
}

void L1AudioL1_HISR( void )
{
}

kal_bool l1spl1_create(comptask_handler_struct **handle)
{
   static const comptask_handler_struct l1spl1_handler_info =
   {
      NULL,          /* task entry function */
      NULL,          /* task initialization function */
      NULL,          /* task reset handler */
   };

   *handle = (comptask_handler_struct *)&l1spl1_handler_info;

   return KAL_TRUE;
}


/************************************/
/* Audio Manager                    */
/************************************/

void L1Audio_Dummy( void )
{
}

/*void L1Audio_ResetDevice(void)
{
}*/

//Fix build error with mcu\l1core\modem\tl1\tl1sim\tl1sim_dummy.c
#if !((!defined(__MT6291PLUS_FIX__ERROR_)) && defined(__L1_STANDALONE__))
void SP3G_UpdateL1AInFo( kal_uint8 bitmap, kal_uint8 value )
{
    (void) bitmap;
    (void) value;
}
#endif //#if !((!defined(__MT6291PLUS_FIX__ERROR_)) && defined(__L1_STANDALONE__))

/*void L1SP_Set_DAI_Mode( kal_uint8 mode )
{
	//this feature is phased out
    (void) mode;
}*/

void L1SP_TCH_Notify_L( kal_bool bOn )
{
    (void) bOn;
}

kal_bool AM_IsSpeechOn_L( void )
{
   return KAL_FALSE;
}

kal_bool AM_AudioManager( kal_bool handover, kal_uint16 speech_mode, kal_int8 sub_channel )
{
    (void) handover;
    (void) speech_mode;
    (void) sub_channel;
    
    return KAL_FALSE;
}	

void l1sp_register_backup()
{
}

void l1sp_register_backup_notify()
{
}

void l1sp_register_restore()
{
}


