/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
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
 * aud_custom_exp.h
 *
 * Project:
 * --------
 *   DUMA
 *
 * Description:
 * ------------
 * This file is the header of audio customization related function or definition.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 *
 * 10 24 2016 sheila.chen
 * [MOLY00209193] [93MD] speech driver
 * Remove old historys.
 *
 * 02 03 2015 fu-shing.ju
 * [MOLY00091627] TK6291 development
 * Sync Audio driver with MOLY TRUNK W15.05.P1.
 *
 * 02 12 2014 sheila.chen
 * [MOLY00050441] [MT6595 Bring-Up] speech related code
 * 95 ENH Basic
 *  	
 * 	Merging
 *  	
 * 	//MOLY_CBr/sheila.chen/MOLY_95It/mcu/driver/audio/src/...
 *  	
 * 	to //MOLY/TRUNK/MOLY/mcu/driver/audio/src/...
 *
 * 05 22 2013 sheila.chen
 * [MOLY00023100] [Volunteer Patch][[MP Feature Patch Back] [Vibration Speaker] Speech HAL part (make 2-in1, 3-in-1 difference)
 * 3-in-1 speaker modification. (to indicate 2-in-1 or 3-in-1)
 *
 * 05 03 2013 sheila.chen
 * [MOLY00008234] [MT6572/MT6582] Integration
 * 3-in-1 speaker interface
 *
 * 03 08 2013 sheila.chen
 * [MOLY00008234] [MT6572/MT6582] Integration
 * Lenovo's new feature for MT6582 & MT657
 *
 * 11 21 2012 sheila.chen
 * [MOLY00000112] [MT6583] Pre-integration
 * Warming removal 3
 * 
 * Fix CTM potential bug
 * 
 * 10 15 2012 sheila.chen
 * [MOLY00000112] [MT6583] Pre-integration
 * 1. enable background sound
 * 
 * 2. change WB em data structure
 * 
 * 09 11 2012 sheila.chen
 * [MOLY00000112] [MT6583] Pre-integration
 * Sync Mode number
 *
 * 07 16 2012 sheila.chen
 * NULL
 * phase in 75+80.
 *
 * 06 27 2012 sheila.chen
 * removed!
 * Phase-in pcm2way
 *
 * 06 04 2012 sheila.chen
 * removed!
 * .
 *
 *
 * 
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef AUDIO_CUSTOM_EXP_H
#define AUDIO_CUSTOM_EXP_H


#if 0 
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

typedef struct _AUDIO_VIBSPK_PARAMETER_STRUCT_
{
	short notch_filter_para[15];
	bool is2In1Spk; // true for 2-in-1 speaker, false for 3-in-1 speaker.
	
} AUDIO_VIBSPK_PARAMETER_STRUCT;

typedef struct _AUDIO_NXP_SMARTPA_PARAMETER_STRUCT_
{
	bool isNxpFeatureOptOn;
	short chip_delay_with_switch;
	short mic_index; // bit wise definition ordered from main mic to reference mic. Only one bit is set!! bit 0: o17, bit 1: o18, bit 2: o23, bit 3: o24, bit 4: o25, 
	
} AUDIO_NXP_SMARTPA_PARAMETER_STRUCT;

#if 0
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
