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
 *   general_data_types.h
 *
 * Project:
 * --------
 *   MT6291 Project
 *
 * Description:
 * ------------
 *   General data type definition for Coresonic
 *
 * Author:
 * -------
 * -------
 *
 ****************************************************************************/


#ifndef __GENERAL_DATA_TYPE__
#define __GENERAL_DATA_TYPE__

// This header file provides basic data type declaration for INT/INT8/INT16/INT32/UINT/UINT8/UINT16/UINT32
// Different architecture shall have its typedefs

#if defined(__CORESONIC__)
typedef char INT8;
typedef unsigned char UINT8;
typedef short INT16;
typedef unsigned short UINT16;
typedef int INT32;
typedef unsigned int UINT32;
typedef unsigned long long UINT64;

// CPU native data type, used with care, the width is different for 16/32 machine
// These data should be used with fucntion parameter and local variables
typedef int INT;
typedef unsigned int UINT;
#endif


#if defined(__CR4__) || defined(__MIPS_IA__)
typedef signed char              INT8;
typedef unsigned char            UINT8;
typedef signed short int         INT16;
typedef unsigned short int       UINT16;
typedef signed int               INT32;
typedef unsigned int             UINT32;

typedef long INT;
typedef unsigned long UINT;
#endif

#endif // __GENERAL_DATA_TYPE__
