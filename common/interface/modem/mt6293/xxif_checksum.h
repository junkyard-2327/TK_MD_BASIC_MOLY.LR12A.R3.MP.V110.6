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
 *   xxif_checksum.h
 *
 * Project:
 * --------
 *   MT6293 Project
 *
 * Description:
 * ------------
 *   XXIF checksum definition
 *
 * Author:
 * -------
 * -------
 *
 ****************************************************************************/


#ifndef __XXIF_CHECKSUM_H__
#define __XXIF_CHECKSUM_H__

// ----------------------------------------------------
//  READ FOLLOWING PARAGRAPH BEFORE MODIFYING THIS FILE
// ----------------------------------------------------

// This header file holds the version number between L1/DSP which keep CSIF integrity between two parties.
// During boot time, DSP will write version number to CUIF. Then L1 could check whether CUIF::version_number matches expectation.
// If mismatches, it diciates the CUIF version between L1/DSP is wrong and L1 shall assert !!

// The mechanism is not perfect, because users may forget to modify the version number.
// Another approach is calculating MD5 checksum against whole CUIF folder. 
// However, the method is too sensitive that add comments to header files also changed MD5 checksum as well.

// So we believe that users would follow the guideline below

// ---------
// GUIDELINE
// ---------
// 1. BE CAREFUL TO MODIFY ANY WORD WITHIN THIS FOLDER
// 2. Add/remove/modify CSIF header definitino shall increase the version number by one
// 3. The common folder also hold header files with constant values. Changing them also increase version number by one
// 4. Remember to check-in xxif_checksum.h & CSIF header files


/* ---------- */
// LTE version number
#define LTE_CUIF_VERSION        (0)

// VERSION, AUTHOR, DESCRIPTION
// 0x0, Leo Wu, initial check-in of LTE_CUIF version number


/* ---------- */
// WCDMA version number
#define WCDMA_CUIF_VERSION      (0)

// VERSION, AUTHOR, DESCRIPTION
// 0x0, ?????, initial check-in of WCDMA_CUIF version number

/* ---------- */
// TDSCDMA version number
#define TDSCDMA_CUIF_VERSION    (0)

// VERSION, AUTHOR, DESCRIPTION
// 0x0, ?????, initial check-in of TDSCDMA_CUIF version number

/* ---------- */
// C2K versio number
#define C2K_CUIF_VERSION        (0)

// VERSION, AUTHOR, DESCRIPTION
// 0x0, ?????, initial check-in of C2K_CUIF version number


/* ---------- */
// Composite version number

#define CUIF_VERSION_NUMBER ((LTE_CUIF_VERSION << 0) | (WCDMA_CUIF_VERSION<<8) | (TDSCDMA_CUIF_VERSION<<16) | (C2K_CUIF_VERSION<<24))



/*---For 6293 build pass workaround----*/
#define RX_VERSION_NUMBER   ((3<<28) | (1<<24) | (0x16))

#define CM_VERSION_NUMBER   ((3<<28) | (2<<24) | (0x16))

#define CMIF_VERSION_NUMBER ((3<<28) | (3<<24) | (0x16))
/*------------------------------------*/


#endif // __XXIF_CHECKSUM_H__
