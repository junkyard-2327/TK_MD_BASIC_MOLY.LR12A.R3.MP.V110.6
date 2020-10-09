/*****************************************************************************
*  Copyright Statement:
*  ---------------------------
*  This software/firmware and related documentation ("MediaTek Software") are
*  protected under relevant copyright laws. The information contained herein 
*  is confidential and proprietary to MediaTek Inc. and/or its licensors.  
*  Without the prior written permission of MediaTek inc. and/or its licensors,
*  any reproduction,modification, use or disclosure of MediaTek Software, and
*  information contained herein, in whole or in part, shall be strictly prohibited.
*   
*  MediaTek Inc.(C)2011.All rights reserved.
*
*  BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND
*  AGREES THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK 
*  SOFTWARE") RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED 
*  TO RECEIVER ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL 
*  WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED 
*  WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR 
*  NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER 
*  WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, 
*  INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER 
*  AGREES TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING 
*  THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE 
*  RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES 
*  CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR 
*  ANY MEDIATEK SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO 
*  CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND 
*  EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT 
*  TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,AT MEDIATEK'S OPTION, 
*  TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,OR REFUND ANY SOFTWARE 
*  LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO MEDIATEK FOR SUCH MEDIATEK 
*  SOFTWARE AT ISSUE. 
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   modem.h
 *
 * Project:
 * --------
 *   MT6291 Project
 *
 * Description:
 * ------------
 *
 * Author:
 * -------
 * -------
 ****************************************************************************/

#ifndef __DSP_HEADER_DEFINE_CMIF_FEC_H__
#define __DSP_HEADER_DEFINE_CMIF_FEC_H__

#if defined(__DSP_CODEBASE_MT6291__)
    // Users should use dsp_header_define.h to use XXIF header files rather than directly using them
    #define INCLUDE_DSP_HEADER_ENABLE
    //#include "mt6291/xxif_checksum.h"
    #include "mt6291/fec/inc/CMIF_FEC_TK6291.h"
    #include "mt6291/fec/inc/FEC_GAIN_TABLE.h"
    #include "mt6291/fec/inc/LTE_SRAM_CAL_DATA.h"
	#include "mt6291/fec/inc/FEC_FC_DELAY_TABLE.h"
    #undef INCLUDE_DSP_HEADER_ENABLE
#endif // __DSP_CODEBASE_MT6291__

#if defined(__DSP_CODEBASE_MT6291M__)
    // Users should use dsp_header_define.h to use XXIF header files rather than directly using them
    #define INCLUDE_DSP_HEADER_ENABLE
    //#include "mt6291/xxif_checksum.h"
    #include "mt6291m/fec/inc/CMIF_FEC_TK6291.h"
    #include "mt6291m/fec/inc/FEC_GAIN_TABLE.h"
    #include "mt6291m/fec/inc/LTE_SRAM_CAL_DATA.h"
	//#include "mt6291m/fec/inc/FEC_FC_DELAY_TABLE.h"
    #undef INCLUDE_DSP_HEADER_ENABLE
#endif // __DSP_CODEBASE_MT6291M__


#if defined(__DSP_CODEBASE_MT6291P__)
    // Users should use dsp_header_define.h to use XXIF header files rather than directly using them
    #define INCLUDE_DSP_HEADER_ENABLE
    //#include "mt6291/xxif_checksum.h"
    #include "mt6291p/fec/inc/CMIF_FEC_TK6291.h"
    #include "mt6291p/fec/inc/FEC_GAIN_TABLE.h"
    #include "mt6291p/fec/inc/LTE_SRAM_CAL_DATA.h"
	//#include "mt6291p/fec/inc/FEC_FC_DELAY_TABLE.h"
    #undef INCLUDE_DSP_HEADER_ENABLE
#endif // __DSP_CODEBASE_MT6291P__


#endif // __DSP_HEADER_DEFINE_CMIF_FEC_H__
