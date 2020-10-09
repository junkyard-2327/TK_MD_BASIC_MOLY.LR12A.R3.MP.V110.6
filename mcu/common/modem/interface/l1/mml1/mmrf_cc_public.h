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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   mmrf_cc_public.h
 *
 * Project:
 * --------
 *   TK6291
 *
 * Description:
 * ------------
 *   Cross-Core Multi-Mode RF public API, structure
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *----------------------------------------------------------------------------
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
 *
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
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef  _MMRF_CC_PUBLIC_H_
#define  _MMRF_CC_PUBLIC_H_

/*===============================================================================*/
#include "mmrf_cc_global.h"

#if defined(__MTK_TARGET__)
#include "gmss_public.h"
#endif

#if defined(__MTK_TARGET__)
// bits: 0|0|Lf|Lt|W|C|T|G             
#define MMRF_WM_ID_MASK_LTE_FDD    GMSS_WM_ID_MASK_LTE_FDD
#define MMRF_WM_ID_MASK_LTE_TDD    GMSS_WM_ID_MASK_LTE_TDD
#define MMRF_WM_ID_MASK_LTE        GMSS_WM_ID_MASK_LTE
#define MMRF_WM_ID_MASK_WCDMA      GMSS_WM_ID_MASK_WCDMA
#define MMRF_WM_ID_MASK_C2K        GMSS_WM_ID_MASK_C2K
#define MMRF_WM_ID_MASK_TDSCDMA    GMSS_WM_ID_MASK_TDSCDMA
#define MMRF_WM_ID_MASK_GSM        GMSS_WM_ID_MASK_GSM

#define MMRF_WM_ID_LWG             (GMSS_WM_ID_MASK_LTE|GMSS_WM_ID_MASK_WCDMA|GMSS_WM_ID_MASK_GSM)
#else
/*Avoid build error in xl1im simulation*/
#define MMRF_WM_ID_MASK_LTE_FDD    0x20
#define MMRF_WM_ID_MASK_LTE_TDD    0x10
#define MMRF_WM_ID_MASK_LTE        (MMRF_WM_ID_MASK_LTE_FDD | MMRF_WM_ID_MASK_LTE_TDD)
#define MMRF_WM_ID_MASK_WCDMA      0x08
#define MMRF_WM_ID_MASK_C2K        0x04
#define MMRF_WM_ID_MASK_TDSCDMA    0x02
#define MMRF_WM_ID_MASK_GSM        0x01

#define MMRF_WM_ID_LWG             (MMRF_WM_ID_MASK_LTE|MMRF_WM_ID_MASK_WCDMA|MMRF_WM_ID_MASK_GSM)
#endif

#define MMRF_IS_C2K_EXIST (gmss_is_cdma2000_supported())

/*===================================================================*/
/*                        W/T Query Function declaration             */
/*===================================================================*/

/*===============================================================================*/
/*   MMRF_UBIN_isWcdmaModeActivated                                                     */
/*   Normal mode: directly return GMSS result */
/*   Meta mode  : return by MMRF_WMidRunTimeValue. set by MMRFTST_UBIN_WMidInit and MMRFTST_UBIN_SetWMid */
/*   L1S        : directly return by DEFAULT_WORLD_MODE_ID, define in proj.mak */
/*===============================================================================*/
kal_bool MMRF_UBIN_isWcdmaModeActivated(kal_uint8 sim_index);

/*===============================================================================*/
/*   MMRF_UBIN_isTdscdmaModeActivated                                                     */
/*   Normal mode: directly return GMSS result */
/*   Meta mode  : return by MMRF_WMidRunTimeValue. set by MMRFTST_UBIN_WMidInit and MMRFTST_UBIN_SetWMid */
/*   L1S        : directly return by DEFAULT_WORLD_MODE_ID, define in proj.mak */ 
/*===============================================================================*/
kal_bool MMRF_UBIN_isTdscdmaModeActivated(kal_uint8 sim_index);

/*===============================================================================*/
/*   MMRF_UBIN_isLteFddModeActivated                                                     */
/*   Normal mode: directly return GMSS result */
/*   Meta mode  : return by MMRF_WMidRunTimeValue. set by MMRFTST_UBIN_WMidInit and MMRFTST_UBIN_SetWMid */
/*   L1S        : directly return by DEFAULT_WORLD_MODE_ID, define in proj.mak */
/*===============================================================================*/
kal_bool MMRF_UBIN_isLteFddModeActivated(void);

/*===============================================================================*/
/*   MMRF_UBIN_isLteTddModeActivated                                                     */
/*   Normal mode: directly return GMSS result */
/*   Meta mode  : return by MMRF_WMidRunTimeValue. set by MMRFTST_UBIN_WMidInit and MMRFTST_UBIN_SetWMid */
/*   L1S        : directly return by DEFAULT_WORLD_MODE_ID, define in proj.mak */
/*===============================================================================*/
kal_bool MMRF_UBIN_isLteTddModeActivated(void);

/*===============================================================================*/
/*   MMRFTST_UBIN_QueryInitWMid                                                     */
/*   For Meta mode UBin usage, report initial WM ID RAT capability to Meta Tool     */
/*===============================================================================*/
kal_uint8 MMRFTST_UBIN_QueryInitWMid(void);

/*===============================================================================*/
/*   MMRFTST_UBIN_SetWMid                                                     */
/*   For Meta mode UBin usage, set MMRF_WMidRunTimeValue when WCDMA and TDSCDMA mode switch for calibration*/
/*   Input: RAT type, Major use for MML1_RF_3G_FDD and MML1_RF_3G_TDD         */
/*===============================================================================*/
void MMRFTST_UBIN_SetWMid(MML1_RF_RAT_T rat);

#endif /* End of #ifndef _MMRF_CC_PUBLIC_H_ */

