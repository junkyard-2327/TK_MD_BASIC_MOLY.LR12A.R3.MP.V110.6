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
 *	afe.c
 *
 * Project:
 * --------
 *   MAUI
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
 * $Revision:   1.21  $
 * $Modtime:   Jul 08 2005 16:31:52  $
 * $Log:   //mtkvs01/vmdata/Maui_sw/archives/mcu/l1audio/afe.h-arc  $
 *
 * 12 19 2017 thomas.chen
 * [MOLY00296986] [Build warning removal]fix warning
 * .
 *
 * 11 09 2017 thomas.chen
 * [MOLY00288616] Remove DisableInterrupt API
 * .
 *
 * 09 27 2017 thomas.chen
 * [MOLY00279366] Fix 9295M build error
 * .
 *
 * 08 25 2017 ting-ni.chen
 * [MOLY00273782] [Sylvia] [MT6771] bringup chip define
 * [Sylvia][MT6771] bringup chip define
 *
 * 06 09 2017 sungshen.wu
 * [MOLY00245550] [Zion] Bringup Check in
 * .Zion check in
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
 * 02 08 2017 sheila.chen
 * [MOLY00209193] [93MD] speech driver
 * remove unused media functions.
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
 * 03 30 2016 thomas.chen
 * [MOLY00171812] fix UMOLYA BuildError
 * .
 *
 * 02 04 2016 fu-shing.ju
 * [MOLY00120200] 6291Plus development
 * Fix MSBB issue.
 *
 * 10 07 2015 fu-shing.ju
 * [MOLY00120200] 6291Plus development
 * Add Data_Sync_Barrier() for 6292.
 *
 * 08 17 2015 fu-shing.ju
 * [MOLY00120200] 6291Plus development
 * Add ELBRUS chip option.
 *
 * 06 11 2015 thomas.chen
 * [MOLY00120543] Jade PreBuild
 * .
 *
 * 02 03 2015 fu-shing.ju
 * [MOLY00091627] TK6291 development
 * Sync Audio driver with MOLY TRUNK W15.05.P1.
 *
 * 04 07 2014 sheila.chen
 * [MOLY00061869] [UMoly] check-in
 * add TK6291 chip
 *
 * 01 28 2014 sheila.chen
 * [MOLY00050441] [MT6595 Bring-Up] speech related code
 * DVT test cases check in
 *
 * 01 15 2014 sheila.chen
 * [MOLY00050441] [MT6595 Bring-Up] speech related code
 * [ROME] add DVT setting
 *
 * 01 07 2014 sheila.chen
 * [MOLY00050441] [MT6595 Bring-Up] speech related code
 * Merging	//MOLY/Development_BRANCHES/MT6595E1_BRING_UP_DEV/mcu/driver/audio/...
 * to //MOLY/TRUNK/MOLY/mcu/driver/audio/...
 *
 * 12 26 2013 sheila.chen
 * [MOLY00050441] [MT6595 Bring-Up] speech related code
 * Fix bug, MDAFE hw register is 32 bit instead of 16 bit
 *
 * 12 10 2013 lanus.chao
 * [MOLY00046252] Add  MT6595 chip option
 * .
 *
 * 12 09 2013 lanus.chao
 * [MOLY00046252] Add  MT6595 chip option
 * .
 *
 * 08 21 2013 sheila.chen
 * [MOLY00031287] [MT6592][MT6571] Chip back prepare
 * add MT6592/MT6571 chip options
 *
 * 08 16 2013 sheila.chen
 * [MOLY00011218] [MT6290] Code modification
 * remove unused code
 *
 * 08 13 2013 sheila.chen
 * [MOLY00011218] [MT6290] Code modification
 * move register backup by chip
 *
 * 08 05 2013 sheila.chen
 * [MOLY00011218] [MT6290] Code modification
 * remove unused afe code
 *
 * 05 14 2013 sheila.chen
 * [MOLY00022118] [Volunteer Patch] DRC2.0 (MagiLoudness) Integration
 * DRC 2.0 modification
 *
 * 03 01 2013 sheila.chen
 * [MOLY00011218] [MT6290] Code modification
 * Fix Build error for MT6290
 *
 * 01 16 2013 sheila.chen
 * [MOLY00008869] [Need Patch][Build Error] WR8 build error for MT6582_L1S(DEFAULT)
 * Fix Build Error
 *
 * 01 07 2013 sheila.chen
 * [MOLY00008234] [MT6572] Integration
 * MT6572 bring up
 *
 * 12 25 2012 sheila.chen
 * [MOLY00000112] [MT6583] Pre-integration
 * wbBT
 *
 * 12 18 2012 sheila.chen
 * [MOLY00000112] [MT6583] Pre-integration
 * Set Mode Modification
 *
 * 11 01 2012 sheila.chen
 * [MOLY00000112] [MT6583] Pre-integration
 * 1. Sidetone update
 * 
 * 2. digital gain setting (AGC, DL volume)
 * 
 * 3. FIX AFE setting to privent too many noise
 * 
 * 4. Fix PCM MSB, LSB mapping mismatch
 * 5. Turn on enhancement
 * 6. Add Acroustic loopback code
 * 
 * 09 26 2012 sheila.chen
 * [MOLY00000112] [MT6583] Pre-integration
 * Chip Rename to MT6589
 * Remove unused AFE functions
 * Phase in phone call usage
 * 
 * 09 20 2012 sheila.chen
 * [MOLY00000112] [MT6583] Pre-integration
 * add compile option for analog AFE
 * 
 * 09 17 2012 sheila.chen
 * [MOLY00000112] [MT6583] Pre-integration
 * 83 phone call prepare, warning removal
 * 
 * 08 21 2012 dior.lin
 * [MOLY00002430] Modify for MD2G wakeup by Audio
 * Modify for MD2G wakeup by Audio.
 * 
 * 08 17 2012 kh.hung
 * [MOLY00002243] Fix cross category header inclusion
 * Remove l1d_reg.h.
 * 
 * 07 27 2012 sheila.chen
 * [MOLY00000112] [MT6583] Pre-integration
 * Fix build warning.
 * 
 * 07 25 2012 sheila.chen
 * [MOLY00000112] [MT6583] Pre-integration
 * Phase in PCMNWAY, param AM manager with 2 parameter, and recording.
 *
 * 06 08 2012 kh.hung
 * removed!
 * .
 *
 * 05 16 2012 jy.huang
 * removed!
 * .
 *
 * 05 16 2012 jy.huang
 * removed!
 * .
 *
 * 05 14 2012 jy.huang
 * removed!
 * .
 *
 * 11 29 2011 lanus.chao
 * removed!
 * .
 *
 *
 *******************************************************************************/
#ifndef AFE_H
#define AFE_H

/*
============================================================================================================
------------------------------------------------------------------------------------------------------------
||                        Chapter:  INCLUDE FILES
------------------------------------------------------------------------------------------------------------
============================================================================================================
*/

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "reg_base.h"
#include "kal_trace.h"
#include "l1audio_trace.h"
#include "l1sp_trc.h"
#include "audcoeff_default.h"
#include "afe_def.h"
#include "dcl.h"
#include "us_timer.h"
#include "speech_def.h"



/*
============================================================================================================
------------------------------------------------------------------------------------------------------------
||                        Chapter: Data Types and Structures
------------------------------------------------------------------------------------------------------------
============================================================================================================
*/
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if (defined(MT6295M) || defined(__MD95__))
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
#else 
/* under construction !*/
#endif 
/* under construction !*/
#endif

//=============================================================================================
//                  Section: Structure AFE_STRUCT_T (afe main structure)
//=============================================================================================
typedef struct {

   // kal_uint16     aud_id;
	
   kal_bool       loopback; 
   kal_bool       afe_init;
   kal_uint8      voice8kMode;
   

   //for 65nm clock gating, digital AFE register backup
   // RegBackup      regbak;

   
} AFE_STRUCT_T;

typedef struct {
   
   kal_uint32 afe_conn0;

} AFE_RG_STRUCT_T;

/*
============================================================================================================
------------------------------------------------------------------------------------------------------------
||                        Chapter: Special Configurations for Specific Usage
------------------------------------------------------------------------------------------------------------
============================================================================================================
*/

//=============================================================================================
//                   Section: Debug and Unit Test Configuration
//=============================================================================================
//#define __AFE_DEBUG__
#ifdef __AFE_DEBUG__
   #define afe_prompt_trace  kal_prompt_trace

static kal_char * _aszAfeState[] =
{
   "AFE_STATE_OFF",
   "AFE_STATE_ON",
   "AFE_STATE_IDLE_OFF",
   "AFE_STATE_CLASS_D_OFF"
};

#else
   #define afe_prompt_trace(...) 
#endif



/*
============================================================================================================
------------------------------------------------------------------------------------------------------------
||                        Chapter: DEFINITION OF DATA TYPES
------------------------------------------------------------------------------------------------------------
============================================================================================================
*/


//=============================================================================================
//                  Section: External Variables and Functions
//=============================================================================================
extern AFE_STRUCT_T afe;
extern AFE_RG_STRUCT_T afeRG;

/*
============================================================================================================
------------------------------------------------------------------------------------------------------------
||                        Chapter: Function Prototypes
------------------------------------------------------------------------------------------------------------
============================================================================================================
*/

void AFE_Init( void );


void AFE_DELAY(uint16 delay);


void AFE_Chip_Init( void );


void AFE_TurnOnLoopback( void );
void AFE_TurnOffLoopback( void );

kal_uint8 AFE_GetVoice8KMode(void);
void AFE_SetVoice8KMode(kal_uint8 mode);
void AFE_SetConn0(kal_uint32 val);
#endif //AFE_H
