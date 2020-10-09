/*******************************************************************************
*  Modification Notice:
*  --------------------------
*  This software is modified by MediaTek Inc. and the information contained
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
*******************************************************************************/


/*****************************************************************************
 *
 * Filename:
 * ---------
 * ul1_option.h
 *
 * Project:
 * --------
 *   MT6268 Project
 *
 * Description:
 * ------------
 *   Define compile option for UL1A/UL1C.
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
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
 
   
#ifndef UL1_OPTION_H
#define UL1_OPTION_H

//#define __UL1C_R5R6_CODE__
//#define __UL1_FAST_ABORT_SUPPORT__

#if defined(__L1_GPS_AUTO_TIMING_SYNC_SUPPORT__) || defined(__L1_GPS_REF_TIME_SUPPORT__)
#define __UL1_GPS_FRAME_SYNC_SUPPORT__
#endif

// For RAs change , this flag does not depend one amy other flag/HW  
//#ifndef __L1_STANDALONE__
//#define __RAS_SUPPORT__
//#endif

#if defined( __GEMINI_GSM__ ) && defined ( __UMTS_RAT__ )  
#define __UL1_GEMINI__

#ifdef   __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
#define __UL1_GEMINI_2_0__
#endif   /* __GEMINI_MONITOR_PAGE_DURING_TRANSFER__ */

#endif   /* __GEMINI_GSM__ && __UMTS_RAT__ */

#ifdef __GEMINI_WCDMA__
#define __UL1_GEMINI_WCDMA__
#endif   /* __GEMINI_WCDMA__ */

#ifdef   __UMTS_R8__
/* new DL data buffer is only applied on 6280 and later projects.
   If ul1d_p is built by other compile option, we should change the condition. */
#define   __UL1_NEW_DL_DATA_BUFFER__ 

#ifdef __DYNAMIC_SWITCH_CACHEABILITY__
#define  __UL1_DL_DATA_DYNAMIC_CACHEABILITY__
#endif /*__DYNAMIC_SWITCH_CACHEABILITY__*/

#endif   /*__UMTS_R8__*/

#if defined(__HSDPA_SUPPORT__) && defined(__UMTS_R8__)
/* HSPASYS Control is only applied on 6280 or later projectes. */
#define __UL1_HSPASYS_CONTROL__ 
#endif /*__HSDPA_SUPPORT__ && __UMTS_R8__*/


#ifdef   __UMTS_R9__
//Disable R9 compile option flag in UL1AC internally since there is no R9R10 support request, it can help reduce the EMI cost
//#define __UMTS_R9_UL1__
#endif   /* __UMTS_R9__ */

#ifdef   __UMTS_R10__
//Disable R10 compile option flag in UL1AC internally since there is no R9R10 support request, it can help reduce the EMI cost
//#define __UMTS_R10_UL1__
#endif   /* __UMTS_R10__ */

//Disable __L1_INTERNAL_TEST__ flag to reduce target code size. It can be enabled while carrying on Inject String Commands for internal testing only.
//#define __L1_INTERNAL_TEST__

///* real chip use */
//   #if   defined(MT6280)
//      #if defined(MT6280_S00)
//         #define __UL1_CHIP_MT6280_E1__    
//      #endif
//   #elif defined(TK6280)
//      #if defined(TK6280_S00)
//         #define __UL1_CHIP_MT6280_E1__                      
//      #endif
//   //#else
//   //#error "please check chip version"   
//   #endif   

#define __UL1_RF_TEMPERATURE_SUPPORT__

#define __SMART_CS_3G_FDD__
#define __SMART_CM_3G_FDD__
//[ALPS04720723]: Disabling 5M filter
//#define __5M_FILTER__
//#define __SMART_CM_FORCE_SWITCH__
#endif

