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
/*************************************************************
*
* This Software is the property of VIA Telecom, Inc. and may only be used pursuant to a license from VIA Telecom, Inc.  
* 
* Any unauthorized use inconsistent with the terms of such license is strictly prohibited.
* 
* Copyright (c) 2002-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
/**************************************************************************************************
* %version: 2 %  %instance: HZPT_2 %   %date_created: Fri Mar 23 15:56:10 2007 %  %created_by: jingzhang %  %derived_by: jingzhang %
**************************************************************************************************/

/*****************************************************************************
* 
* FILE NAME   :     syskeydef.h
*
* DESCRIPTION :     all keys defintion.
*
* HISTORY     :     See Log at end of file
*
*****************************************************************************/
#ifndef  _SYS_KEY_DEF_H_
#define  _SYS_KEY_DEF_H_

#ifdef __cplusplus
extern "C"
{
#endif

/* define all hardware keys */
typedef enum 
{
    SYS_KEY_ID_START  = 0,          /* do not modify it */
    SYS_0_KEY = SYS_KEY_ID_START,    /* '0' key */
    SYS_1_KEY,              /* '1' key */
    SYS_2_KEY,              /* '2' key */
    SYS_3_KEY,              /* '3' key */
    SYS_4_KEY,              /* '4' key */
    SYS_5_KEY,              /* '5' key */
    SYS_6_KEY,              /* '6' key */
    SYS_7_KEY,              /* '7' key */
    SYS_8_KEY,              /* '8' key */
    SYS_9_KEY,              /* '9' key */
    
    SYS_POUND_KEY,          /* '#' key */
    SYS_STAR_KEY,           /* '*' key */
    SYS_SEND_KEY,           /* Send key */
    SYS_END_KEY,            /* End key */

    SYS_CLR_KEY,            /* Clear key */
    SYS_MEM_KEY,
    SYS_PWR_KEY,            /* Power key */  
    SYS_UP_KEY,             /* Up key */
    SYS_DOWN_KEY,           /* Down key */    
    SYS_FUNCTION_KEY,       /* Function key */

    SYS_RIGHT_KEY,          /* Right key */
    SYS_LEFT_KEY,           /* Left key  */  

    SYS_SELECT_KEY,         /* Select key */
    SYS_CAMERA_KEY,         /* Camera key */
    
    SYS_RIGHT_SOFT_KEY,     /* right soft key */
    SYS_LEFT_SOFT_KEY,      /* left soft key */

    SYS_VOLUME_UP_KEY,      /* volume up key */
    SYS_VOLUME_DOWN_KEY,    /* volume down key */

    SYS_EAR_KEY,            /* ear key */

    SYS_SMS_KEY,            /* SMS key */
    SYS_PHONEBOOK_KEY,      /* Phonebook key */
    SYS_MENU_KEY,           /* Menu key  */
    SYS_RCL_KEY ,           /* Rcl key */
    SYS_DND_MUTE_KEY,       /* DND/MUTE key */  
    SYS_SPK_KEY,            /* SPK key */

    SYS_RECORD_KEY,         /* Record key */

    SYS_MP3_PLAY_KEY,       /* MP3 play key */
    SYS_MP3_BACKWARD_KEY,   /* MP3 Backward key */
    SYS_MP3_FORWARD_KEY,    /* MP3 Forward key */

    SYS_ADD_KEY_ID_START,
    SYS_KEY_A = SYS_ADD_KEY_ID_START,
    SYS_KEY_B,
    SYS_KEY_C,
    SYS_KEY_D,
    SYS_KEY_E,
    SYS_KEY_F,
    SYS_KEY_G,
    SYS_KEY_H,
    SYS_KEY_I,
    SYS_KEY_J,
    SYS_KEY_K,
    SYS_KEY_L,
    SYS_KEY_M,
    SYS_KEY_N,
    SYS_KEY_O,
    SYS_KEY_P,
    SYS_KEY_Q,
    SYS_KEY_R,
    SYS_KEY_S,
    SYS_KEY_T,
    SYS_KEY_U,
    SYS_KEY_V,
    SYS_KEY_W,
    SYS_KEY_X,
    SYS_KEY_Y,
    SYS_KEY_Z,
    SYS_KEY_DEL,
    SYS_KEY_ENTER,
    SYS_KEY_SHIFT,
    SYS_KEY_IME,
    SYS_KEY_DOT,
    SYS_KEY_SPACE,
    SYS_KEY_SYM,
    SYS_KEY_SEND2,
    SYS_KEY_CTRL,
    SYS_KEY_ALT,
 
    SYS_RESERVED_1_KEY,     /* resever 1 key */
    SYS_RESERVED_2_KEY,     /* resever 2 key */
    SYS_RESERVED_3_KEY,     /* resever 3 key */
    SYS_RESERVED_4_KEY,     /* resever 4 key */
    SYS_RESERVED_5_KEY,     /* resever 4 key */ 
    
    /********************************************************************
    * do not change the above key defintions                            *
    * if you have new hardware key, please define them following        *
    ********************************************************************/

    /********************************************************************
    * SPECIAL KEY START in single key mode 
    * FLIP KEY - NO HOLD, if it is press, then other key can be press
    * HOOK KEY - NO HOLD, if it is press, then other key can be press
    *********************************************************************/
    SYS_SPECIAL_KEY_ID_START     = 90,            /*do not modify this value*/
    SYS_FLIP_KEY    = SYS_SPECIAL_KEY_ID_START,     /* flip key, do not modify it */
    SYS_HOOK_KEY    = SYS_SPECIAL_KEY_ID_START + 1, /* Hook key */

    /************************************************************************
    * do not change the above special key defintions                        *
    * if you have new special hardware key, please define them following    *
    *************************************************************************/

    SYS_KEY_ID_END  = 100                          /*do not modify this value*/
} SysKeyIdT;

#ifdef __cplusplus
}
#endif

#endif

/*****************************************************************************
* $Log: syskeydef.h $
* Revision 1.2  2008/02/14 16:46:12  zlin
* Optimize code and remove the feature that map virtual MMI key to sys key.
* Revision 1.1  2007/10/29 10:53:02  binye
* Initial revision
* Revision 1.1  2007/10/12 14:50:43  qyu
* Initial revision
* Revision 1.2  2006/12/29 15:58:23  xyliu
* New key id.
* Revision 1.1  2006/11/26 21:43:05  yliu
* Initial revision
* Revision 1.2  2006/11/24 14:13:25  xyliu
* New Keypad Id defination.
*****************************************************************************/


/**Log information: \main\helios_dev\helios_dev_xyliu_href7563\1 2009-07-03 08:59:43 GMT xyliu
** HREF#7563|Merge VTUI2_5x 1.0.0 to Helios (BB Driver part)**/
/**Log information: \main\helios_dev\2 2009-07-06 06:25:11 GMT xyliu
** HREF#7563|Merge VTUI2_5x 1.0.0 to Helios (Driver part)**/
/**Log information: \main\VTUI3\VTUI3_hxwang_href10789\1 2010-03-05 08:50:46 GMT hxwang
** HREF#10789, Merge Helios LC driver**/
/**Log information: \main\VTUI3\2 2010-03-05 09:31:04 GMT xyliu
** HREF#10789 Merge from hxwang**/
/**Log information: \main\VTUI3\VTUI3_xyliu_href11002\1 2010-03-18 06:12:27 GMT xyliu
** HREF#11002 Update the driver for Helios_LC include the Keypad and backlight**/
/**Log information: \main\VTUI3\3 2010-03-18 06:23:00 GMT xyliu
** HREF#11002 Merge from xyliu**/
/**Log information: \main\VTUI3\VTUI3_xyliu_href11002_fix1\1 2010-03-19 02:58:48 GMT xyliu
** HREF#11002 Fix a bug about whole keypad on Hleiios_LC**/
/**Log information: \main\VTUI3\4 2010-03-19 03:01:16 GMT xyliu
** HREF#11002 Merge from xyliu**/

