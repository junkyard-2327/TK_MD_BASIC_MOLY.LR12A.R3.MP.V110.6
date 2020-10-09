/*******************************************************************************
*  Modification Notice :
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
 * ul1d_rf_common.h
 *
 * Project:
 * --------
 *   3G Project Common File
 *
 * Description:
 * ------------
 *   Definition of some of customization setting not defined in ul1d_custom_rf.h
 *   And the stuff needs to be recognized by UL1D external module (wdata.c)
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef UL1D_RF_COMMON_H
#define UL1D_RF_COMMON_H

#include "ul1d_rf_cid.h"

#if IS_URF_PCORE
#include "ul1d_custom_rf.h"
#endif

/*******************************************************************************
** Common setting for all RF
*******************************************************************************/
/* This part serves as default value of undefined macro constants in ul1d_custom_rf.h */
/* Aim to accommodate to those difference between RF chips */

#ifndef  PDATA_UMTSBandNone_PR1_SetDefault
   #define  PDATA_UMTSBandNone_PR1_SetDefault     0
   #define  PDATA_UMTSBandNone_PR2_SetDefault     0
   #define  PDATA_UMTSBandNone_PR3_SetDefault     0
   #define  PDATA_UMTSBandNone_PT1_SetDefault     0
   #define  PDATA_UMTSBandNone_PT2_SetDefault     0
   #define  PDATA_UMTSBandNone_PT3_SetDefault     0
#endif
#ifndef  PDATA_UMTSBand1_PR1_SetDefault
   #define  PDATA_UMTSBand1_PR1_SetDefault     0
   #define  PDATA_UMTSBand1_PR2_SetDefault     0
   #define  PDATA_UMTSBand1_PR3_SetDefault     0
   #define  PDATA_UMTSBand1_PT1_SetDefault     0
   #define  PDATA_UMTSBand1_PT2_SetDefault     0
   #define  PDATA_UMTSBand1_PT3_SetDefault     0
#endif
#ifndef  PDATA_UMTSBand2_PR1_SetDefault
   #define  PDATA_UMTSBand2_PR1_SetDefault     0
   #define  PDATA_UMTSBand2_PR2_SetDefault     0
   #define  PDATA_UMTSBand2_PR3_SetDefault     0
   #define  PDATA_UMTSBand2_PT1_SetDefault     0
   #define  PDATA_UMTSBand2_PT2_SetDefault     0
   #define  PDATA_UMTSBand2_PT3_SetDefault     0
#endif
#ifndef  PDATA_UMTSBand3_PR1_SetDefault
   #define  PDATA_UMTSBand3_PR1_SetDefault     0
   #define  PDATA_UMTSBand3_PR2_SetDefault     0
   #define  PDATA_UMTSBand3_PR3_SetDefault     0
   #define  PDATA_UMTSBand3_PT1_SetDefault     0
   #define  PDATA_UMTSBand3_PT2_SetDefault     0
   #define  PDATA_UMTSBand3_PT3_SetDefault     0
#endif
#ifndef  PDATA_UMTSBand4_PR1_SetDefault
   #define  PDATA_UMTSBand4_PR1_SetDefault     0
   #define  PDATA_UMTSBand4_PR2_SetDefault     0
   #define  PDATA_UMTSBand4_PR3_SetDefault     0
   #define  PDATA_UMTSBand4_PT1_SetDefault     0
   #define  PDATA_UMTSBand4_PT2_SetDefault     0
   #define  PDATA_UMTSBand4_PT3_SetDefault     0
#endif
#ifndef  PDATA_UMTSBand5_PR1_SetDefault
   #define  PDATA_UMTSBand5_PR1_SetDefault     0
   #define  PDATA_UMTSBand5_PR2_SetDefault     0
   #define  PDATA_UMTSBand5_PR3_SetDefault     0
   #define  PDATA_UMTSBand5_PT1_SetDefault     0
   #define  PDATA_UMTSBand5_PT2_SetDefault     0
   #define  PDATA_UMTSBand5_PT3_SetDefault     0
#endif
#ifndef  PDATA_UMTSBand6_PR1_SetDefault
   #define  PDATA_UMTSBand6_PR1_SetDefault     0
   #define  PDATA_UMTSBand6_PR2_SetDefault     0
   #define  PDATA_UMTSBand6_PR3_SetDefault     0
   #define  PDATA_UMTSBand6_PT1_SetDefault     0
   #define  PDATA_UMTSBand6_PT2_SetDefault     0
   #define  PDATA_UMTSBand6_PT3_SetDefault     0
#endif
#ifndef  PDATA_UMTSBand7_PR1_SetDefault
   #define  PDATA_UMTSBand7_PR1_SetDefault     0
   #define  PDATA_UMTSBand7_PR2_SetDefault     0
   #define  PDATA_UMTSBand7_PR3_SetDefault     0
   #define  PDATA_UMTSBand7_PT1_SetDefault     0
   #define  PDATA_UMTSBand7_PT2_SetDefault     0
   #define  PDATA_UMTSBand7_PT3_SetDefault     0
#endif
#ifndef  PDATA_UMTSBand8_PR1_SetDefault
   #define  PDATA_UMTSBand8_PR1_SetDefault     0
   #define  PDATA_UMTSBand8_PR2_SetDefault     0
   #define  PDATA_UMTSBand8_PR3_SetDefault     0
   #define  PDATA_UMTSBand8_PT1_SetDefault     0
   #define  PDATA_UMTSBand8_PT2_SetDefault     0
   #define  PDATA_UMTSBand8_PT3_SetDefault     0
#endif
#ifndef  PDATA_UMTSBand9_PR1_SetDefault
   #define  PDATA_UMTSBand9_PR1_SetDefault     0
   #define  PDATA_UMTSBand9_PR2_SetDefault     0
   #define  PDATA_UMTSBand9_PR3_SetDefault     0
   #define  PDATA_UMTSBand9_PT1_SetDefault     0
   #define  PDATA_UMTSBand9_PT2_SetDefault     0
   #define  PDATA_UMTSBand9_PT3_SetDefault     0
#endif
#ifndef  PDATA_UMTSBand10_PR1_SetDefault
   #define  PDATA_UMTSBand10_PR1_SetDefault     0
   #define  PDATA_UMTSBand10_PR2_SetDefault     0
   #define  PDATA_UMTSBand10_PR3_SetDefault     0
   #define  PDATA_UMTSBand10_PT1_SetDefault     0
   #define  PDATA_UMTSBand10_PT2_SetDefault     0
   #define  PDATA_UMTSBand10_PT3_SetDefault     0
#endif
#ifndef  PDATA_UMTSBand11_PR1_SetDefault
   #define  PDATA_UMTSBand11_PR1_SetDefault     0
   #define  PDATA_UMTSBand11_PR2_SetDefault     0
   #define  PDATA_UMTSBand11_PR3_SetDefault     0
   #define  PDATA_UMTSBand11_PT1_SetDefault     0
   #define  PDATA_UMTSBand11_PT2_SetDefault     0
   #define  PDATA_UMTSBand11_PT3_SetDefault     0
#endif
#ifndef  PDATA_UMTSBand19_PR1_SetDefault
   #define  PDATA_UMTSBand19_PR1_SetDefault     0
   #define  PDATA_UMTSBand19_PR2_SetDefault     0
   #define  PDATA_UMTSBand19_PR3_SetDefault     0
   #define  PDATA_UMTSBand19_PT1_SetDefault     0
   #define  PDATA_UMTSBand19_PT2_SetDefault     0
   #define  PDATA_UMTSBand19_PT3_SetDefault     0
#endif

#ifndef PDATA_UMTSBand1_PR2B_SetDefault
   #define PDATA_UMTSBand1_PR2B_SetDefault PDATA_UMTSBand1_PR2_SetDefault
#endif
#ifndef PDATA_UMTSBand1_PR3A_SetDefault
   #define PDATA_UMTSBand1_PR3A_SetDefault PDATA_UMTSBand1_PR3_SetDefault
#endif
#ifndef PDATA_UMTSBand1_PT2B_SetDefault
   #define PDATA_UMTSBand1_PT2B_SetDefault PDATA_UMTSBand1_PT2_SetDefault
#endif
#ifndef PDATA_UMTSBand1_PT3A_SetDefault
   #define PDATA_UMTSBand1_PT3A_SetDefault PDATA_UMTSBand1_PT3_SetDefault
#endif

#ifndef PDATA_UMTSBand2_PR2B_SetDefault
   #define PDATA_UMTSBand2_PR2B_SetDefault PDATA_UMTSBand2_PR2_SetDefault
#endif
#ifndef PDATA_UMTSBand2_PR3A_SetDefault
   #define PDATA_UMTSBand2_PR3A_SetDefault PDATA_UMTSBand2_PR3_SetDefault
#endif
#ifndef PDATA_UMTSBand2_PT2B_SetDefault
   #define PDATA_UMTSBand2_PT2B_SetDefault PDATA_UMTSBand2_PT2_SetDefault
#endif
#ifndef PDATA_UMTSBand2_PT3A_SetDefault
   #define PDATA_UMTSBand2_PT3A_SetDefault PDATA_UMTSBand2_PT3_SetDefault
#endif

#ifndef PDATA_UMTSBand3_PR2B_SetDefault
   #define PDATA_UMTSBand3_PR2B_SetDefault PDATA_UMTSBand3_PR2_SetDefault
#endif
#ifndef PDATA_UMTSBand3_PR3A_SetDefault
   #define PDATA_UMTSBand3_PR3A_SetDefault PDATA_UMTSBand3_PR3_SetDefault
#endif
#ifndef PDATA_UMTSBand3_PT2B_SetDefault
   #define PDATA_UMTSBand3_PT2B_SetDefault PDATA_UMTSBand3_PT2_SetDefault
#endif
#ifndef PDATA_UMTSBand3_PT3A_SetDefault
   #define PDATA_UMTSBand3_PT3A_SetDefault PDATA_UMTSBand3_PT3_SetDefault
#endif

#ifndef PDATA_UMTSBand4_PR2B_SetDefault
   #define PDATA_UMTSBand4_PR2B_SetDefault PDATA_UMTSBand4_PR2_SetDefault
#endif
#ifndef PDATA_UMTSBand4_PR3A_SetDefault
   #define PDATA_UMTSBand4_PR3A_SetDefault PDATA_UMTSBand4_PR3_SetDefault
#endif
#ifndef PDATA_UMTSBand4_PT2B_SetDefault
   #define PDATA_UMTSBand4_PT2B_SetDefault PDATA_UMTSBand4_PT2_SetDefault
#endif
#ifndef PDATA_UMTSBand4_PT3A_SetDefault
   #define PDATA_UMTSBand4_PT3A_SetDefault PDATA_UMTSBand4_PT3_SetDefault
#endif

#ifndef PDATA_UMTSBand5_PR2B_SetDefault
   #define PDATA_UMTSBand5_PR2B_SetDefault PDATA_UMTSBand5_PR2_SetDefault
#endif
#ifndef PDATA_UMTSBand5_PR3A_SetDefault
   #define PDATA_UMTSBand5_PR3A_SetDefault PDATA_UMTSBand5_PR3_SetDefault
#endif
#ifndef PDATA_UMTSBand5_PT2B_SetDefault
   #define PDATA_UMTSBand5_PT2B_SetDefault PDATA_UMTSBand5_PT2_SetDefault
#endif
#ifndef PDATA_UMTSBand5_PT3A_SetDefault
   #define PDATA_UMTSBand5_PT3A_SetDefault PDATA_UMTSBand5_PT3_SetDefault
#endif

#ifndef PDATA_UMTSBand6_PR2B_SetDefault
   #define PDATA_UMTSBand6_PR2B_SetDefault PDATA_UMTSBand6_PR2_SetDefault
#endif
#ifndef PDATA_UMTSBand6_PR3A_SetDefault
   #define PDATA_UMTSBand6_PR3A_SetDefault PDATA_UMTSBand6_PR3_SetDefault
#endif
#ifndef PDATA_UMTSBand6_PT2B_SetDefault
   #define PDATA_UMTSBand6_PT2B_SetDefault PDATA_UMTSBand6_PT2_SetDefault
#endif
#ifndef PDATA_UMTSBand6_PT3A_SetDefault
   #define PDATA_UMTSBand6_PT3A_SetDefault PDATA_UMTSBand6_PT3_SetDefault
#endif

#ifndef PDATA_UMTSBand7_PR2B_SetDefault
   #define PDATA_UMTSBand7_PR2B_SetDefault PDATA_UMTSBand7_PR2_SetDefault
#endif
#ifndef PDATA_UMTSBand7_PR3A_SetDefault
   #define PDATA_UMTSBand7_PR3A_SetDefault PDATA_UMTSBand7_PR3_SetDefault
#endif
#ifndef PDATA_UMTSBand7_PT2B_SetDefault
   #define PDATA_UMTSBand7_PT2B_SetDefault PDATA_UMTSBand7_PT2_SetDefault
#endif
#ifndef PDATA_UMTSBand7_PT3A_SetDefault
   #define PDATA_UMTSBand7_PT3A_SetDefault PDATA_UMTSBand7_PT3_SetDefault
#endif

#ifndef PDATA_UMTSBand8_PR2B_SetDefault
   #define PDATA_UMTSBand8_PR2B_SetDefault PDATA_UMTSBand8_PR2_SetDefault
#endif
#ifndef PDATA_UMTSBand8_PR3A_SetDefault
   #define PDATA_UMTSBand8_PR3A_SetDefault PDATA_UMTSBand8_PR3_SetDefault
#endif
#ifndef PDATA_UMTSBand8_PT2B_SetDefault
   #define PDATA_UMTSBand8_PT2B_SetDefault PDATA_UMTSBand8_PT2_SetDefault
#endif
#ifndef PDATA_UMTSBand8_PT3A_SetDefault
   #define PDATA_UMTSBand8_PT3A_SetDefault PDATA_UMTSBand8_PT3_SetDefault
#endif

#ifndef PDATA_UMTSBand9_PR2B_SetDefault
   #define PDATA_UMTSBand9_PR2B_SetDefault PDATA_UMTSBand9_PR2_SetDefault
#endif
#ifndef PDATA_UMTSBand9_PR3A_SetDefault
   #define PDATA_UMTSBand9_PR3A_SetDefault PDATA_UMTSBand9_PR3_SetDefault
#endif
#ifndef PDATA_UMTSBand9_PT2B_SetDefault
   #define PDATA_UMTSBand9_PT2B_SetDefault PDATA_UMTSBand9_PT2_SetDefault
#endif
#ifndef PDATA_UMTSBand9_PT3A_SetDefault
   #define PDATA_UMTSBand9_PT3A_SetDefault PDATA_UMTSBand9_PT3_SetDefault
#endif

#ifndef PDATA_UMTSBand10_PR2B_SetDefault
   #define PDATA_UMTSBand10_PR2B_SetDefault PDATA_UMTSBand10_PR2_SetDefault
#endif
#ifndef PDATA_UMTSBand10_PR3A_SetDefault
   #define PDATA_UMTSBand10_PR3A_SetDefault PDATA_UMTSBand10_PR3_SetDefault
#endif
#ifndef PDATA_UMTSBand10_PT2B_SetDefault
   #define PDATA_UMTSBand10_PT2B_SetDefault PDATA_UMTSBand10_PT2_SetDefault
#endif
#ifndef PDATA_UMTSBand10_PT3A_SetDefault
   #define PDATA_UMTSBand10_PT3A_SetDefault PDATA_UMTSBand10_PT3_SetDefault
#endif

#ifndef PDATA_UMTSBand11_PR2B_SetDefault
   #define PDATA_UMTSBand11_PR2B_SetDefault PDATA_UMTSBand11_PR2_SetDefault
#endif
#ifndef PDATA_UMTSBand11_PR3A_SetDefault
   #define PDATA_UMTSBand11_PR3A_SetDefault PDATA_UMTSBand11_PR3_SetDefault
#endif
#ifndef PDATA_UMTSBand11_PT2B_SetDefault
   #define PDATA_UMTSBand11_PT2B_SetDefault PDATA_UMTSBand11_PT2_SetDefault
#endif
#ifndef PDATA_UMTSBand11_PT3A_SetDefault
   #define PDATA_UMTSBand11_PT3A_SetDefault PDATA_UMTSBand11_PT3_SetDefault
#endif

#ifndef PDATA_UMTSBand19_PR2B_SetDefault
   #define PDATA_UMTSBand19_PR2B_SetDefault PDATA_UMTSBand19_PR2_SetDefault
#endif
#ifndef PDATA_UMTSBand19_PR3A_SetDefault
   #define PDATA_UMTSBand19_PR3A_SetDefault PDATA_UMTSBand19_PR3_SetDefault
#endif
#ifndef PDATA_UMTSBand19_PT2B_SetDefault
   #define PDATA_UMTSBand19_PT2B_SetDefault PDATA_UMTSBand19_PT2_SetDefault
#endif
#ifndef PDATA_UMTSBand19_PT3A_SetDefault
   #define PDATA_UMTSBand19_PT3A_SetDefault PDATA_UMTSBand19_PT3_SetDefault
#endif

#if IS_3G_RXD_FE_CONTROL_SUPPORT
#ifndef  PDATA2_UMTSBandNone_PR1_SetDefault
   #define  PDATA2_UMTSBandNone_PR1_SetDefault     0
   #define  PDATA2_UMTSBandNone_PR2_SetDefault     0
   #define  PDATA2_UMTSBandNone_PR3_SetDefault     0
#endif
#ifndef  PDATA2_UMTSBand1_PR1_SetDefault
   #define  PDATA2_UMTSBand1_PR1_SetDefault     0
   #define  PDATA2_UMTSBand1_PR2_SetDefault     0
   #define  PDATA2_UMTSBand1_PR3_SetDefault     0
#endif
#ifndef  PDATA2_UMTSBand2_PR1_SetDefault
   #define  PDATA2_UMTSBand2_PR1_SetDefault     0
   #define  PDATA2_UMTSBand2_PR2_SetDefault     0
   #define  PDATA2_UMTSBand2_PR3_SetDefault     0
#endif
#ifndef  PDATA2_UMTSBand3_PR1_SetDefault
   #define  PDATA2_UMTSBand3_PR1_SetDefault     0
   #define  PDATA2_UMTSBand3_PR2_SetDefault     0
   #define  PDATA2_UMTSBand3_PR3_SetDefault     0
#endif
#ifndef  PDATA2_UMTSBand4_PR1_SetDefault
   #define  PDATA2_UMTSBand4_PR1_SetDefault     0
   #define  PDATA2_UMTSBand4_PR2_SetDefault     0
   #define  PDATA2_UMTSBand4_PR3_SetDefault     0
#endif
#ifndef  PDATA2_UMTSBand5_PR1_SetDefault
   #define  PDATA2_UMTSBand5_PR1_SetDefault     0
   #define  PDATA2_UMTSBand5_PR2_SetDefault     0
   #define  PDATA2_UMTSBand5_PR3_SetDefault     0
#endif
#ifndef  PDATA2_UMTSBand6_PR1_SetDefault
   #define  PDATA2_UMTSBand6_PR1_SetDefault     0
   #define  PDATA2_UMTSBand6_PR2_SetDefault     0
   #define  PDATA2_UMTSBand6_PR3_SetDefault     0
#endif
#ifndef  PDATA2_UMTSBand7_PR1_SetDefault
   #define  PDATA2_UMTSBand7_PR1_SetDefault     0
   #define  PDATA2_UMTSBand7_PR2_SetDefault     0
   #define  PDATA2_UMTSBand7_PR3_SetDefault     0
#endif
#ifndef  PDATA2_UMTSBand8_PR1_SetDefault
   #define  PDATA2_UMTSBand8_PR1_SetDefault     0
   #define  PDATA2_UMTSBand8_PR2_SetDefault     0
   #define  PDATA2_UMTSBand8_PR3_SetDefault     0
#endif
#ifndef  PDATA2_UMTSBand9_PR1_SetDefault
   #define  PDATA2_UMTSBand9_PR1_SetDefault     0
   #define  PDATA2_UMTSBand9_PR2_SetDefault     0
   #define  PDATA2_UMTSBand9_PR3_SetDefault     0
#endif
#ifndef  PDATA2_UMTSBand10_PR1_SetDefault
   #define  PDATA2_UMTSBand10_PR1_SetDefault     0
   #define  PDATA2_UMTSBand10_PR2_SetDefault     0
   #define  PDATA2_UMTSBand10_PR3_SetDefault     0
#endif
#ifndef  PDATA2_UMTSBand11_PR1_SetDefault
   #define  PDATA2_UMTSBand11_PR1_SetDefault     0
   #define  PDATA2_UMTSBand11_PR2_SetDefault     0
   #define  PDATA2_UMTSBand11_PR3_SetDefault     0
#endif
#ifndef  PDATA2_UMTSBand19_PR1_SetDefault
   #define  PDATA2_UMTSBand19_PR1_SetDefault     0
   #define  PDATA2_UMTSBand19_PR2_SetDefault     0
   #define  PDATA2_UMTSBand19_PR3_SetDefault     0
#endif

#ifndef PDATA2_UMTSBand1_PR2B_SetDefault
   #define PDATA2_UMTSBand1_PR2B_SetDefault PDATA2_UMTSBand1_PR2_SetDefault
#endif
#ifndef PDATA2_UMTSBand1_PR3A_SetDefault
   #define PDATA2_UMTSBand1_PR3A_SetDefault PDATA2_UMTSBand1_PR3_SetDefault
#endif

#ifndef PDATA2_UMTSBand2_PR2B_SetDefault
   #define PDATA2_UMTSBand2_PR2B_SetDefault PDATA2_UMTSBand2_PR2_SetDefault
#endif
#ifndef PDATA2_UMTSBand2_PR3A_SetDefault
   #define PDATA2_UMTSBand2_PR3A_SetDefault PDATA2_UMTSBand2_PR3_SetDefault
#endif

#ifndef PDATA2_UMTSBand3_PR2B_SetDefault
   #define PDATA2_UMTSBand3_PR2B_SetDefault PDATA2_UMTSBand3_PR2_SetDefault
#endif
#ifndef PDATA2_UMTSBand3_PR3A_SetDefault
   #define PDATA2_UMTSBand3_PR3A_SetDefault PDATA2_UMTSBand3_PR3_SetDefault
#endif

#ifndef PDATA2_UMTSBand4_PR2B_SetDefault
   #define PDATA2_UMTSBand4_PR2B_SetDefault PDATA2_UMTSBand4_PR2_SetDefault
#endif
#ifndef PDATA2_UMTSBand4_PR3A_SetDefault
   #define PDATA2_UMTSBand4_PR3A_SetDefault PDATA2_UMTSBand4_PR3_SetDefault
#endif

#ifndef PDATA2_UMTSBand5_PR2B_SetDefault
   #define PDATA2_UMTSBand5_PR2B_SetDefault PDATA2_UMTSBand5_PR2_SetDefault
#endif
#ifndef PDATA2_UMTSBand5_PR3A_SetDefault
   #define PDATA2_UMTSBand5_PR3A_SetDefault PDATA2_UMTSBand5_PR3_SetDefault
#endif

#ifndef PDATA2_UMTSBand6_PR2B_SetDefault
   #define PDATA2_UMTSBand6_PR2B_SetDefault PDATA2_UMTSBand6_PR2_SetDefault
#endif
#ifndef PDATA2_UMTSBand6_PR3A_SetDefault
   #define PDATA2_UMTSBand6_PR3A_SetDefault PDATA2_UMTSBand6_PR3_SetDefault
#endif

#ifndef PDATA2_UMTSBand7_PR2B_SetDefault
   #define PDATA2_UMTSBand7_PR2B_SetDefault PDATA2_UMTSBand7_PR2_SetDefault
#endif
#ifndef PDATA2_UMTSBand7_PR3A_SetDefault
   #define PDATA2_UMTSBand7_PR3A_SetDefault PDATA2_UMTSBand7_PR3_SetDefault
#endif

#ifndef PDATA2_UMTSBand8_PR2B_SetDefault
   #define PDATA2_UMTSBand8_PR2B_SetDefault PDATA2_UMTSBand8_PR2_SetDefault
#endif
#ifndef PDATA2_UMTSBand8_PR3A_SetDefault
   #define PDATA2_UMTSBand8_PR3A_SetDefault PDATA2_UMTSBand8_PR3_SetDefault
#endif

#ifndef PDATA2_UMTSBand9_PR2B_SetDefault
   #define PDATA2_UMTSBand9_PR2B_SetDefault PDATA2_UMTSBand9_PR2_SetDefault
#endif
#ifndef PDATA2_UMTSBand9_PR3A_SetDefault
   #define PDATA2_UMTSBand9_PR3A_SetDefault PDATA2_UMTSBand9_PR3_SetDefault
#endif

#ifndef PDATA2_UMTSBand10_PR2B_SetDefault
   #define PDATA2_UMTSBand10_PR2B_SetDefault PDATA2_UMTSBand10_PR2_SetDefault
#endif
#ifndef PDATA2_UMTSBand10_PR3A_SetDefault
   #define PDATA2_UMTSBand10_PR3A_SetDefault PDATA2_UMTSBand10_PR3_SetDefault
#endif

#ifndef PDATA2_UMTSBand11_PR2B_SetDefault
   #define PDATA2_UMTSBand11_PR2B_SetDefault PDATA2_UMTSBand11_PR2_SetDefault
#endif
#ifndef PDATA2_UMTSBand11_PR3A_SetDefault
   #define PDATA2_UMTSBand11_PR3A_SetDefault PDATA2_UMTSBand11_PR3_SetDefault
#endif

#ifndef PDATA2_UMTSBand19_PR2B_SetDefault
   #define PDATA2_UMTSBand19_PR2B_SetDefault PDATA2_UMTSBand19_PR2_SetDefault
#endif
#ifndef PDATA2_UMTSBand19_PR3A_SetDefault
   #define PDATA2_UMTSBand19_PR3A_SetDefault PDATA2_UMTSBand19_PR3_SetDefault
#endif

#else
//Add for RXD
#ifndef  PDATA2_BAND1_PR1
   #define  PDATA2_BAND1_PR1     0
   #define  PDATA2_BAND1_PR2     0
   #define  PDATA2_BAND1_PR3     0
#endif
#ifndef  PDATA2_BAND2_PR1
   #define  PDATA2_BAND2_PR1     0
   #define  PDATA2_BAND2_PR2     0
   #define  PDATA2_BAND2_PR3     0
#endif
#ifndef  PDATA2_BAND3_PR1
   #define  PDATA2_BAND3_PR1     0
   #define  PDATA2_BAND3_PR2     0
   #define  PDATA2_BAND3_PR3     0
#endif
#ifndef  PDATA2_BAND4_PR1
   #define  PDATA2_BAND4_PR1     0
   #define  PDATA2_BAND4_PR2     0
   #define  PDATA2_BAND4_PR3     0
#endif
#ifndef  PDATA2_BAND5_PR1
   #define  PDATA2_BAND5_PR1     0
   #define  PDATA2_BAND5_PR2     0
   #define  PDATA2_BAND5_PR3     0
#endif
#ifndef  PDATA2_BAND6_PR1
   #define  PDATA2_BAND6_PR1     0
   #define  PDATA2_BAND6_PR2     0
   #define  PDATA2_BAND6_PR3     0
#endif
#ifndef  PDATA2_BAND7_PR1
   #define  PDATA2_BAND7_PR1     0
   #define  PDATA2_BAND7_PR2     0
   #define  PDATA2_BAND7_PR3     0
#endif
#ifndef  PDATA2_BAND8_PR1
   #define  PDATA2_BAND8_PR1     0
   #define  PDATA2_BAND8_PR2     0
   #define  PDATA2_BAND8_PR3     0
#endif
#ifndef  PDATA2_BAND9_PR1
   #define  PDATA2_BAND9_PR1     0
   #define  PDATA2_BAND9_PR2     0
   #define  PDATA2_BAND9_PR3     0
#endif
#ifndef  PDATA2_BAND10_PR1
   #define  PDATA2_BAND10_PR1    0
   #define  PDATA2_BAND10_PR2    0
   #define  PDATA2_BAND10_PR3    0
#endif
#ifndef  PDATA2_BAND11_PR1
   #define  PDATA2_BAND11_PR1    0
   #define  PDATA2_BAND11_PR2    0
   #define  PDATA2_BAND11_PR3    0
#endif
#ifndef  PDATA2_BAND19_PR1
   #define  PDATA2_BAND19_PR1    0
   #define  PDATA2_BAND19_PR2    0
   #define  PDATA2_BAND19_PR3    0
#endif

/* Define PDATA2_BANDx_PRx */
#ifndef PDATA2_BAND1_PR2B
   #define PDATA2_BAND1_PR2B  PDATA2_BAND1_PR2
#endif
#ifndef PDATA2_BAND1_PR3A
   #define PDATA2_BAND1_PR3A  PDATA2_BAND1_PR3
#endif
#ifndef PDATA2_BAND2_PR2B
   #define PDATA2_BAND2_PR2B  PDATA2_BAND2_PR2
#endif
#ifndef PDATA2_BAND2_PR3A
   #define PDATA2_BAND2_PR3A  PDATA2_BAND2_PR3
#endif
#ifndef PDATA2_BAND3_PR2B
   #define PDATA2_BAND3_PR2B  PDATA2_BAND3_PR2
#endif
#ifndef PDATA2_BAND3_PR3A
   #define PDATA2_BAND3_PR3A  PDATA2_BAND3_PR3
#endif
#ifndef PDATA2_BAND4_PR2B
   #define PDATA2_BAND4_PR2B  PDATA2_BAND4_PR2
#endif
#ifndef PDATA2_BAND4_PR3A
   #define PDATA2_BAND4_PR3A  PDATA2_BAND4_PR3
#endif
#ifndef PDATA2_BAND5_PR2B
   #define PDATA2_BAND5_PR2B  PDATA2_BAND5_PR2
#endif
#ifndef PDATA2_BAND5_PR3A
   #define PDATA2_BAND5_PR3A  PDATA2_BAND5_PR3
#endif
#ifndef PDATA2_BAND6_PR2B
   #define PDATA2_BAND6_PR2B  PDATA2_BAND6_PR2
#endif
#ifndef PDATA2_BAND6_PR3A
   #define PDATA2_BAND6_PR3A  PDATA2_BAND6_PR3
#endif
#ifndef PDATA2_BAND7_PR2B
   #define PDATA2_BAND7_PR2B  PDATA2_BAND7_PR2
#endif
#ifndef PDATA2_BAND7_PR3A
   #define PDATA2_BAND7_PR3A  PDATA2_BAND7_PR3
#endif
#ifndef PDATA2_BAND8_PR2B
   #define PDATA2_BAND8_PR2B  PDATA2_BAND8_PR2
#endif
#ifndef PDATA2_BAND8_PR3A
   #define PDATA2_BAND8_PR3A  PDATA2_BAND8_PR3
#endif
#ifndef PDATA2_BAND9_PR2B
   #define PDATA2_BAND9_PR2B  PDATA2_BAND9_PR2
#endif
#ifndef PDATA2_BAND9_PR3A
   #define PDATA2_BAND9_PR3A  PDATA2_BAND9_PR3
#endif
#ifndef PDATA2_BAND10_PR2B
   #define PDATA2_BAND10_PR2B PDATA2_BAND10_PR2
#endif
#ifndef PDATA2_BAND10_PR3A
   #define PDATA2_BAND10_PR3A PDATA2_BAND10_PR3
#endif
#ifndef PDATA2_BAND11_PR2B
   #define PDATA2_BAND11_PR2B PDATA2_BAND11_PR2
#endif
#ifndef PDATA2_BAND11_PR3A
   #define PDATA2_BAND11_PR3A PDATA2_BAND11_PR3
#endif
#ifndef PDATA2_BAND19_PR2B
   #define PDATA2_BAND19_PR2B PDATA2_BAND19_PR2
#endif
#ifndef PDATA2_BAND19_PR3A
   #define PDATA2_BAND19_PR3A PDATA2_BAND19_PR3
#endif
#endif /*end of IS_3G_RXD_FE_CONTROL_SUPPORT*/

/* Define BANDx_CHANNEL_SEL */
#ifndef UMTSBandNone_CHANNEL_SEL_SetDefault
   #define UMTSBandNone_CHANNEL_SEL_SetDefault NON_USED_BAND
#endif
#ifndef UMTSBand1_CHANNEL_SEL_SetDefault
   #define UMTSBand1_CHANNEL_SEL_SetDefault NON_USED_BAND
#endif
#ifndef UMTSBand2_CHANNEL_SEL_SetDefault
   #define UMTSBand2_CHANNEL_SEL_SetDefault NON_USED_BAND
#endif
#ifndef UMTSBand3_CHANNEL_SEL_SetDefault
   #define UMTSBand3_CHANNEL_SEL_SetDefault NON_USED_BAND
#endif
#ifndef UMTSBand4_CHANNEL_SEL_SetDefault
   #define UMTSBand4_CHANNEL_SEL_SetDefault NON_USED_BAND
#endif
#ifndef UMTSBand5_CHANNEL_SEL_SetDefault
   #define UMTSBand5_CHANNEL_SEL_SetDefault NON_USED_BAND
#endif
#ifndef UMTSBand6_CHANNEL_SEL_SetDefault
   #define UMTSBand6_CHANNEL_SEL_SetDefault NON_USED_BAND
#endif
#ifndef UMTSBand8_CHANNEL_SEL_SetDefault
   #define UMTSBand8_CHANNEL_SEL_SetDefault NON_USED_BAND
#endif
#ifndef UMTSBand9_CHANNEL_SEL_SetDefault
   #define UMTSBand9_CHANNEL_SEL_SetDefault NON_USED_BAND
#endif
#ifndef UMTSBand10_CHANNEL_SEL_SetDefault
   #define UMTSBand10_CHANNEL_SEL_SetDefault NON_USED_BAND
#endif
#ifndef UMTSBand11_CHANNEL_SEL_SetDefault
   #define UMTSBand11_CHANNEL_SEL_SetDefault NON_USED_BAND
#endif
#ifndef UMTSBand19_CHANNEL_SEL_SetDefault
   #define UMTSBand19_CHANNEL_SEL_SetDefault NON_USED_BAND
#endif

/* Define BANDx_CHANNEL2_SEL */
#ifndef UMTSBandNone_CHANNEL2_SEL_SetDefault
   #define UMTSBandNone_CHANNEL2_SEL_SetDefault NON_USED_BAND
#endif
#ifndef UMTSBand1_CHANNEL2_SEL_SetDefault
   #define UMTSBand1_CHANNEL2_SEL_SetDefault  NON_USED_BAND
#endif
#ifndef UMTSBand2_CHANNEL2_SEL_SetDefault
   #define UMTSBand2_CHANNEL2_SEL_SetDefault  NON_USED_BAND
#endif
#ifndef UMTSBand3_CHANNEL2_SEL_SetDefault
   #define UMTSBand3_CHANNEL2_SEL_SetDefault  NON_USED_BAND
#endif
#ifndef UMTSBand4_CHANNEL2_SEL_SetDefault
   #define UMTSBand4_CHANNEL2_SEL_SetDefault  NON_USED_BAND
#endif
#ifndef UMTSBand5_CHANNEL2_SEL_SetDefault
   #define UMTSBand5_CHANNEL2_SEL_SetDefault  NON_USED_BAND
#endif
#ifndef UMTSBand6_CHANNEL2_SEL_SetDefault
   #define UMTSBand6_CHANNEL2_SEL_SetDefault  NON_USED_BAND
#endif
#ifndef UMTSBand8_CHANNEL2_SEL_SetDefault
   #define UMTSBand8_CHANNEL2_SEL_SetDefault  NON_USED_BAND
#endif
#ifndef UMTSBand9_CHANNEL2_SEL_SetDefault
   #define UMTSBand9_CHANNEL2_SEL_SetDefault  NON_USED_BAND
#endif
#ifndef UMTSBand10_CHANNEL2_SEL_SetDefault
   #define UMTSBand10_CHANNEL2_SEL_SetDefault NON_USED_BAND
#endif
#ifndef UMTSBand11_CHANNEL2_SEL_SetDefault
   #define UMTSBand11_CHANNEL2_SEL_SetDefault NON_USED_BAND
#endif
#ifndef UMTSBand19_CHANNEL2_SEL_SetDefault
   #define UMTSBand19_CHANNEL2_SEL_SetDefault NON_USED_BAND
#endif

/* Define Bandx_OUTPUT_SEL */
#ifndef UMTSBandNone_OUTPUT_SEL_SetDefault
   #define UMTSBandNone_OUTPUT_SEL_SetDefault NON_USED_BAND
#endif
#ifndef UMTSBand1_OUTPUT_SEL_SetDefault
   #define UMTSBand1_OUTPUT_SEL_SetDefault  NON_USED_BAND
#endif
#ifndef UMTSBand2_OUTPUT_SEL_SetDefault
   #define UMTSBand2_OUTPUT_SEL_SetDefault  NON_USED_BAND
#endif
#ifndef UMTSBand3_OUTPUT_SEL_SetDefault
   #define UMTSBand3_OUTPUT_SEL_SetDefault  NON_USED_BAND
#endif
#ifndef UMTSBand4_OUTPUT_SEL_SetDefault
   #define UMTSBand4_OUTPUT_SEL_SetDefault  NON_USED_BAND
#endif
#ifndef UMTSBand5_OUTPUT_SEL_SetDefault
   #define UMTSBand5_OUTPUT_SEL_SetDefault  NON_USED_BAND
#endif
#ifndef UMTSBand6_OUTPUT_SEL_SetDefault
   #define UMTSBand6_OUTPUT_SEL_SetDefault  NON_USED_BAND
#endif
#ifndef UMTSBand8_OUTPUT_SEL_SetDefault
   #define UMTSBand8_OUTPUT_SEL_SetDefault  NON_USED_BAND
#endif
#ifndef UMTSBand9_OUTPUT_SEL_SetDefault
   #define UMTSBand9_OUTPUT_SEL_SetDefault  NON_USED_BAND
#endif
#ifndef UMTSBand10_OUTPUT_SEL_SetDefault
   #define UMTSBand10_OUTPUT_SEL_SetDefault NON_USED_BAND
#endif
#ifndef UMTSBand11_OUTPUT_SEL_SetDefault
   #define UMTSBand11_OUTPUT_SEL_SetDefault NON_USED_BAND
#endif
#ifndef UMTSBand19_OUTPUT_SEL_SetDefault
   #define UMTSBand19_OUTPUT_SEL_SetDefault NON_USED_BAND
#endif

/* Define Bandx_OUTPUT_DET_SEL */
#ifndef UMTSBandNone_OUTPUT_DET_SEL_SetDefault
   #define UMTSBandNone_OUTPUT_DET_SEL_SetDefault NON_USED_BAND
#endif
#ifndef UMTSBand1_OUTPUT_DET_SEL_SetDefault
   #define UMTSBand1_OUTPUT_DET_SEL_SetDefault    NON_USED_BAND
#endif
#ifndef UMTSBand2_OUTPUT_DET_SEL_SetDefault
   #define UMTSBand2_OUTPUT_DET_SEL_SetDefault    NON_USED_BAND
#endif
#ifndef UMTSBand3_OUTPUT_DET_SEL_SetDefault
   #define UMTSBand3_OUTPUT_DET_SEL_SetDefault    NON_USED_BAND
#endif
#ifndef UMTSBand4_OUTPUT_DET_SEL_SetDefault
   #define UMTSBand4_OUTPUT_DET_SEL_SetDefault    NON_USED_BAND
#endif
#ifndef UMTSBand5_OUTPUT_DET_SEL_SetDefault
   #define UMTSBand5_OUTPUT_DET_SEL_SetDefault    NON_USED_BAND
#endif
#ifndef UMTSBand6_OUTPUT_DET_SEL_SetDefault
   #define UMTSBand6_OUTPUT_DET_SEL_SetDefault    NON_USED_BAND
#endif
#ifndef UMTSBand8_OUTPUT_DET_SEL_SetDefault
   #define UMTSBand8_OUTPUT_DET_SEL_SetDefault    NON_USED_BAND
#endif
#ifndef UMTSBand9_OUTPUT_DET_SEL_SetDefault
   #define UMTSBand9_OUTPUT_DET_SEL_SetDefault    NON_USED_BAND
#endif
#ifndef UMTSBand10_OUTPUT_DET_SEL_SetDefault
   #define UMTSBand10_OUTPUT_DET_SEL_SetDefault   NON_USED_BAND
#endif
#ifndef UMTSBand11_OUTPUT_DET_SEL_SetDefault
   #define UMTSBand11_OUTPUT_DET_SEL_SetDefault   NON_USED_BAND
#endif
#ifndef UMTSBand19_OUTPUT_DET_SEL_SetDefault
   #define UMTSBand19_OUTPUT_DET_SEL_SetDefault   NON_USED_BAND
#endif

//For MPR Setting
#ifndef MPR_BACK_OFF_HSDPA_BAND1_SetDefault
   #define    MPR_BACK_OFF_HSDPA_BAND1_SetDefault  MPRSetting2
#endif
#ifndef MPR_BACK_OFF_HSDPA_BAND2_SetDefault
   #define    MPR_BACK_OFF_HSDPA_BAND2_SetDefault  MPRSetting2
#endif
#ifndef MPR_BACK_OFF_HSDPA_BAND3_SetDefault
   #define    MPR_BACK_OFF_HSDPA_BAND3_SetDefault  MPRSetting2
#endif
#ifndef MPR_BACK_OFF_HSDPA_BAND4_SetDefault
   #define    MPR_BACK_OFF_HSDPA_BAND4_SetDefault  MPRSetting2
#endif
#ifndef MPR_BACK_OFF_HSDPA_BAND5_SetDefault
   #define    MPR_BACK_OFF_HSDPA_BAND5_SetDefault  MPRSetting2
#endif
#ifndef MPR_BACK_OFF_HSDPA_BAND6_SetDefault
   #define    MPR_BACK_OFF_HSDPA_BAND6_SetDefault  MPRSetting2
#endif
#ifndef MPR_BACK_OFF_HSDPA_BAND8_SetDefault
   #define    MPR_BACK_OFF_HSDPA_BAND8_SetDefault  MPRSetting2
#endif
#ifndef MPR_BACK_OFF_HSDPA_BAND9_SetDefault
   #define    MPR_BACK_OFF_HSDPA_BAND9_SetDefault  MPRSetting2
#endif
#ifndef MPR_BACK_OFF_HSDPA_BAND10_SetDefault
   #define    MPR_BACK_OFF_HSDPA_BAND10_SetDefault MPRSetting2
#endif
#ifndef MPR_BACK_OFF_HSDPA_BAND11_SetDefault
   #define    MPR_BACK_OFF_HSDPA_BAND11_SetDefault MPRSetting2
#endif
#ifndef MPR_BACK_OFF_HSDPA_BAND19_SetDefault
   #define    MPR_BACK_OFF_HSDPA_BAND19_SetDefault MPRSetting2
#endif
#ifndef MPR_BACK_OFF_HSUPA_BAND1_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND1_SetDefault  MPRSetting2
#endif
#ifndef MPR_BACK_OFF_HSUPA_BAND2_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND2_SetDefault  MPRSetting2
#endif
#ifndef MPR_BACK_OFF_HSUPA_BAND3_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND3_SetDefault  MPRSetting2
#endif
#ifndef MPR_BACK_OFF_HSUPA_BAND4_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND4_SetDefault  MPRSetting2
#endif
#ifndef MPR_BACK_OFF_HSUPA_BAND5_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND5_SetDefault  MPRSetting2
#endif
#ifndef MPR_BACK_OFF_HSUPA_BAND6_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND6_SetDefault  MPRSetting2
#endif
#ifndef MPR_BACK_OFF_HSUPA_BAND8_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND8_SetDefault  MPRSetting2
#endif
#ifndef MPR_BACK_OFF_HSUPA_BAND9_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND9_SetDefault  MPRSetting2
#endif
#ifndef MPR_BACK_OFF_HSUPA_BAND10_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND10_SetDefault MPRSetting2
#endif
#ifndef MPR_BACK_OFF_HSUPA_BAND11_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND11_SetDefault MPRSetting2
#endif
#ifndef MPR_BACK_OFF_HSUPA_BAND19_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND19_SetDefault MPRSetting2
#endif

#if IS_3G_MPR_EXTEND_SUPPORT

/*SUB 1 Default*/
#ifndef       MPR_BACK_OFF_HSUPA_BAND1_SUB_1_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND1_SUB_1_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND2_SUB_1_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND2_SUB_1_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND3_SUB_1_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND3_SUB_1_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND4_SUB_1_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND4_SUB_1_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND5_SUB_1_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND5_SUB_1_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND6_SUB_1_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND6_SUB_1_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND7_SUB_1_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND7_SUB_1_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND8_SUB_1_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND8_SUB_1_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND9_SUB_1_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND9_SUB_1_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND10_SUB_1_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND10_SUB_1_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND11_SUB_1_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND11_SUB_1_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND12_SUB_1_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND12_SUB_1_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND13_SUB_1_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND13_SUB_1_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND14_SUB_1_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND14_SUB_1_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND15_SUB_1_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND15_SUB_1_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND16_SUB_1_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND16_SUB_1_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND17_SUB_1_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND17_SUB_1_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND18_SUB_1_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND18_SUB_1_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND19_SUB_1_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND19_SUB_1_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND20_SUB_1_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND20_SUB_1_SetDefault MPRSetting_SUB_0
#endif
//======================================================================


//SUB 2 Default
//======================================================================
#ifndef       MPR_BACK_OFF_HSUPA_BAND1_SUB_2_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND1_SUB_2_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND2_SUB_2_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND2_SUB_2_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND3_SUB_2_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND3_SUB_2_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND4_SUB_2_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND4_SUB_2_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND5_SUB_2_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND5_SUB_2_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND6_SUB_2_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND6_SUB_2_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND7_SUB_2_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND7_SUB_2_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND8_SUB_2_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND8_SUB_2_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND9_SUB_2_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND9_SUB_2_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND10_SUB_2_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND10_SUB_2_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND11_SUB_2_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND11_SUB_2_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND12_SUB_2_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND12_SUB_2_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND13_SUB_2_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND13_SUB_2_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND14_SUB_2_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND14_SUB_2_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND15_SUB_2_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND15_SUB_2_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND16_SUB_2_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND16_SUB_2_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND17_SUB_2_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND17_SUB_2_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND18_SUB_2_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND18_SUB_2_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND19_SUB_2_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND19_SUB_2_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND20_SUB_2_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND20_SUB_2_SetDefault MPRSetting_SUB_0
#endif
//======================================================================


//SUB 3 Default
//======================================================================
#ifndef       MPR_BACK_OFF_HSUPA_BAND1_SUB_3_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND1_SUB_3_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND2_SUB_3_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND2_SUB_3_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND3_SUB_3_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND3_SUB_3_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND4_SUB_3_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND4_SUB_3_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND5_SUB_3_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND5_SUB_3_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND6_SUB_3_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND6_SUB_3_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND7_SUB_3_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND7_SUB_3_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND8_SUB_3_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND8_SUB_3_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND9_SUB_3_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND9_SUB_3_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND10_SUB_3_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND10_SUB_3_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND11_SUB_3_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND11_SUB_3_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND12_SUB_3_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND12_SUB_3_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND13_SUB_3_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND13_SUB_3_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND14_SUB_3_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND14_SUB_3_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND15_SUB_3_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND15_SUB_3_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND16_SUB_3_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND16_SUB_3_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND17_SUB_3_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND17_SUB_3_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND18_SUB_3_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND18_SUB_3_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND19_SUB_3_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND19_SUB_3_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND20_SUB_3_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND20_SUB_3_SetDefault MPRSetting_SUB_0
#endif
//======================================================================


//SUB 4 Default
//======================================================================
#ifndef       MPR_BACK_OFF_HSUPA_BAND1_SUB_4_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND1_SUB_4_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND2_SUB_4_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND2_SUB_4_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND3_SUB_4_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND3_SUB_4_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND4_SUB_4_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND4_SUB_4_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND5_SUB_4_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND5_SUB_4_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND6_SUB_4_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND6_SUB_4_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND7_SUB_4_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND7_SUB_4_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND8_SUB_4_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND8_SUB_4_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND9_SUB_4_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND9_SUB_4_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND10_SUB_4_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND10_SUB_4_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND11_SUB_4_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND11_SUB_4_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND12_SUB_4_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND12_SUB_4_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND13_SUB_4_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND13_SUB_4_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND14_SUB_4_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND14_SUB_4_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND15_SUB_4_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND15_SUB_4_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND16_SUB_4_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND16_SUB_4_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND17_SUB_4_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND17_SUB_4_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND18_SUB_4_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND18_SUB_4_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND19_SUB_4_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND19_SUB_4_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND20_SUB_4_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND20_SUB_4_SetDefault MPRSetting_SUB_0
#endif
//======================================================================

//SUB 5 Default
//======================================================================
#ifndef       MPR_BACK_OFF_HSUPA_BAND1_SUB_5_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND1_SUB_5_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND2_SUB_5_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND2_SUB_5_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND3_SUB_5_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND3_SUB_5_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND4_SUB_5_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND4_SUB_5_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND5_SUB_5_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND5_SUB_5_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND6_SUB_5_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND6_SUB_5_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND7_SUB_5_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND7_SUB_5_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND8_SUB_5_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND8_SUB_5_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND9_SUB_5_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND9_SUB_5_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND10_SUB_5_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND10_SUB_5_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND11_SUB_5_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND11_SUB_5_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND12_SUB_5_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND12_SUB_5_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND13_SUB_5_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND13_SUB_5_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND14_SUB_5_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND14_SUB_5_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND15_SUB_5_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND15_SUB_5_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND16_SUB_5_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND16_SUB_5_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND17_SUB_5_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND17_SUB_5_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND18_SUB_5_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND18_SUB_5_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND19_SUB_5_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND19_SUB_5_SetDefault MPRSetting_SUB_0
#endif

#ifndef       MPR_BACK_OFF_HSUPA_BAND20_SUB_5_SetDefault
   #define    MPR_BACK_OFF_HSUPA_BAND20_SUB_5_SetDefault MPRSetting_SUB_0
#endif
//======================================================================

#ifndef       R6_MPR_SUB_EN_SetDefault
   #define    R6_MPR_SUB_EN_SetDefault KAL_FALSE
#endif

#endif//IS_3G_MPR_EXTEND_SUPPORT

/* Define RX_HIGHBAND3_INDICATOR for 4-bands users (MT6572/82) */
#ifndef RX_HIGHBAND3_INDICATOR
   #define RX_HIGHBAND3_INDICATOR UMTSBandNone
#endif
/* Define RX_LOWBAND2_INDICATOR for 3-bands (MT6290 Dongle, HW limitation) */
#ifndef RX_LOWBAND2_INDICATOR
   #define RX_LOWBAND2_INDICATOR  UMTSBandNone
#endif

#define    MPR_BACK_OFF_HSDPA_BAND7  MPRSetting2
#define    MPR_BACK_OFF_HSDPA_BAND12 MPRSetting2
#define    MPR_BACK_OFF_HSDPA_BAND13 MPRSetting2
#define    MPR_BACK_OFF_HSDPA_BAND14 MPRSetting2
#define    MPR_BACK_OFF_HSDPA_BAND15 MPRSetting2
#define    MPR_BACK_OFF_HSDPA_BAND16 MPRSetting2
#define    MPR_BACK_OFF_HSDPA_BAND17 MPRSetting2
#define    MPR_BACK_OFF_HSDPA_BAND18 MPRSetting2
#define    MPR_BACK_OFF_HSDPA_BAND20 MPRSetting2
#define    MPR_BACK_OFF_HSUPA_BAND7  MPRSetting2
#define    MPR_BACK_OFF_HSUPA_BAND12 MPRSetting2
#define    MPR_BACK_OFF_HSUPA_BAND13 MPRSetting2
#define    MPR_BACK_OFF_HSUPA_BAND14 MPRSetting2
#define    MPR_BACK_OFF_HSUPA_BAND15 MPRSetting2
#define    MPR_BACK_OFF_HSUPA_BAND16 MPRSetting2
#define    MPR_BACK_OFF_HSUPA_BAND17 MPRSetting2
#define    MPR_BACK_OFF_HSUPA_BAND18 MPRSetting2
#define    MPR_BACK_OFF_HSUPA_BAND20 MPRSetting2

#ifndef ULTRA_LOW_COST_EN_SetDefault
   #define ULTRA_LOW_COST_EN_SetDefault      KAL_FALSE
#endif

#ifndef TEAMPERATURE_MEAS_EN
   #define TEAMPERATURE_MEAS_EN   KAL_FALSE
#endif

#ifndef VPA_FPWM_MODE
   #define VPA_FPWM_MODE          KAL_FALSE
#endif

#if IS_3G_ELNA_SUPPORT
/* ------------------- RX eLNA setting -------------------- */
#ifndef UMTSBand1_RX_eLNA_SetDefault
   #define  UMTSBand1_RX_eLNA_SetDefault           UMTS_ELNA_OFF
#endif

#ifndef UMTSBand2_RX_eLNA_SetDefault
   #define  UMTSBand2_RX_eLNA_SetDefault           UMTS_ELNA_OFF
#endif

#ifndef UMTSBand3_RX_eLNA_SetDefault
   #define  UMTSBand3_RX_eLNA_SetDefault           UMTS_ELNA_OFF
#endif

#ifndef UMTSBand4_RX_eLNA_SetDefault
   #define  UMTSBand4_RX_eLNA_SetDefault           UMTS_ELNA_OFF
#endif

#ifndef UMTSBand5_RX_eLNA_SetDefault
   #define  UMTSBand5_RX_eLNA_SetDefault           UMTS_ELNA_OFF
#endif

#ifndef UMTSBand6_RX_eLNA_SetDefault
   #define  UMTSBand6_RX_eLNA_SetDefault           UMTS_ELNA_OFF
#endif

#ifndef UMTSBand7_RX_eLNA_SetDefault
   #define  UMTSBand7_RX_eLNA_SetDefault           UMTS_ELNA_OFF
#endif

#ifndef UMTSBand8_RX_eLNA_SetDefault
   #define  UMTSBand8_RX_eLNA_SetDefault           UMTS_ELNA_OFF
#endif

#ifndef UMTSBand9_RX_eLNA_SetDefault
   #define  UMTSBand9_RX_eLNA_SetDefault           UMTS_ELNA_OFF
#endif

#ifndef UMTSBand10_RX_eLNA_SetDefault
   #define  UMTSBand10_RX_eLNA_SetDefault          UMTS_ELNA_OFF
#endif

#ifndef UMTSBand11_RX_eLNA_SetDefault
   #define  UMTSBand11_RX_eLNA_SetDefault          UMTS_ELNA_OFF
#endif

#ifndef UMTSBand12_RX_eLNA_SetDefault
   #define  UMTSBand12_RX_eLNA_SetDefault           UMTS_ELNA_OFF
#endif

#ifndef UMTSBand13_RX_eLNA_SetDefault
   #define  UMTSBand13_RX_eLNA_SetDefault           UMTS_ELNA_OFF
#endif

#ifndef UMTSBand14_RX_eLNA_SetDefault
   #define  UMTSBand14_RX_eLNA_SetDefault           UMTS_ELNA_OFF
#endif

#ifndef UMTSBand15_RX_eLNA_SetDefault
   #define  UMTSBand15_RX_eLNA_SetDefault           UMTS_ELNA_OFF
#endif

#ifndef UMTSBand16_RX_eLNA_SetDefault
   #define  UMTSBand16_RX_eLNA_SetDefault           UMTS_ELNA_OFF
#endif

#ifndef UMTSBand17_RX_eLNA_SetDefault
   #define  UMTSBand17_RX_eLNA_SetDefault           UMTS_ELNA_OFF
#endif

#ifndef UMTSBand18_RX_eLNA_SetDefault
   #define  UMTSBand18_RX_eLNA_SetDefault           UMTS_ELNA_OFF
#endif

#ifndef UMTSBand19_RX_eLNA_SetDefault
   #define  UMTSBand19_RX_eLNA_SetDefault          UMTS_ELNA_OFF
#endif

#ifndef UMTSBand20_RX_eLNA_SetDefault
   #define  UMTSBand20_RX_eLNA_SetDefault          UMTS_ELNA_OFF
#endif

/* ------------------- RXD eLNA setting ------------------- */
#ifndef UMTSBand1_RXD_eLNA_SetDefault
   #define  UMTSBand1_RXD_eLNA_SetDefault          UMTS_ELNA_OFF
#endif

#ifndef UMTSBand2_RXD_eLNA_SetDefault
   #define  UMTSBand2_RXD_eLNA_SetDefault          UMTS_ELNA_OFF
#endif

#ifndef UMTSBand3_RXD_eLNA_SetDefault
   #define  UMTSBand3_RXD_eLNA_SetDefault          UMTS_ELNA_OFF
#endif

#ifndef UMTSBand4_RXD_eLNA_SetDefault
   #define  UMTSBand4_RXD_eLNA_SetDefault          UMTS_ELNA_OFF
#endif

#ifndef UMTSBand5_RXD_eLNA_SetDefault
   #define  UMTSBand5_RXD_eLNA_SetDefault          UMTS_ELNA_OFF
#endif

#ifndef UMTSBand6_RXD_eLNA_SetDefault
   #define  UMTSBand6_RXD_eLNA_SetDefault          UMTS_ELNA_OFF
#endif

#ifndef UMTSBand7_RXD_eLNA_SetDefault
   #define  UMTSBand7_RXD_eLNA_SetDefault          UMTS_ELNA_OFF
#endif

#ifndef UMTSBand8_RXD_eLNA_SetDefault
   #define  UMTSBand8_RXD_eLNA_SetDefault          UMTS_ELNA_OFF
#endif

#ifndef UMTSBand9_RXD_eLNA_SetDefault
   #define  UMTSBand9_RXD_eLNA_SetDefault          UMTS_ELNA_OFF
#endif

#ifndef UMTSBand10_RXD_eLNA_SetDefault
   #define  UMTSBand10_RXD_eLNA_SetDefault         UMTS_ELNA_OFF
#endif

#ifndef UMTSBand11_RXD_eLNA_SetDefault
   #define  UMTSBand11_RXD_eLNA_SetDefault         UMTS_ELNA_OFF
#endif

#ifndef UMTSBand12_RXD_eLNA_SetDefault
   #define  UMTSBand12_RXD_eLNA_SetDefault          UMTS_ELNA_OFF
#endif

#ifndef UMTSBand13_RXD_eLNA_SetDefault
   #define  UMTSBand13_RXD_eLNA_SetDefault          UMTS_ELNA_OFF
#endif

#ifndef UMTSBand14_RXD_eLNA_SetDefault
   #define  UMTSBand14_RXD_eLNA_SetDefault          UMTS_ELNA_OFF
#endif

#ifndef UMTSBand15_RXD_eLNA_SetDefault
   #define  UMTSBand15_RXD_eLNA_SetDefault          UMTS_ELNA_OFF
#endif

#ifndef UMTSBand16_RXD_eLNA_SetDefault
#define  UMTSBand16_RXD_eLNA_SetDefault          UMTS_ELNA_OFF
#endif

#ifndef UMTSBand17_RXD_eLNA_SetDefault
   #define  UMTSBand17_RXD_eLNA_SetDefault          UMTS_ELNA_OFF
#endif

#ifndef UMTSBand18_RXD_eLNA_SetDefault
   #define  UMTSBand18_RXD_eLNA_SetDefault          UMTS_ELNA_OFF
#endif

#ifndef UMTSBand19_RXD_eLNA_SetDefault
   #define  UMTSBand19_RXD_eLNA_SetDefault         UMTS_ELNA_OFF
#endif

#ifndef UMTSBand20_RXD_eLNA_SetDefault
   #define  UMTSBand20_RXD_eLNA_SetDefault         UMTS_ELNA_OFF
#endif

/* ------------------- RX eLNA setting -------------------- */
#define  UMTSBand1_RX_eLNA                      UMTSBand1_RX_eLNA_SetDefault
#define  UMTSBand2_RX_eLNA                      UMTSBand2_RX_eLNA_SetDefault
#define  UMTSBand3_RX_eLNA                      UMTSBand3_RX_eLNA_SetDefault
#define  UMTSBand4_RX_eLNA                      UMTSBand4_RX_eLNA_SetDefault
#define  UMTSBand5_RX_eLNA                      UMTSBand5_RX_eLNA_SetDefault
#define  UMTSBand6_RX_eLNA                      UMTSBand6_RX_eLNA_SetDefault
#define  UMTSBand7_RX_eLNA                      UMTSBand7_RX_eLNA_SetDefault
#define  UMTSBand8_RX_eLNA                      UMTSBand8_RX_eLNA_SetDefault
#define  UMTSBand9_RX_eLNA                      UMTSBand9_RX_eLNA_SetDefault
#define  UMTSBand10_RX_eLNA                     UMTSBand10_RX_eLNA_SetDefault
#define  UMTSBand11_RX_eLNA                     UMTSBand11_RX_eLNA_SetDefault
#define  UMTSBand12_RX_eLNA                     UMTSBand12_RX_eLNA_SetDefault
#define  UMTSBand13_RX_eLNA                     UMTSBand13_RX_eLNA_SetDefault
#define  UMTSBand14_RX_eLNA                     UMTSBand14_RX_eLNA_SetDefault
#define  UMTSBand15_RX_eLNA                     UMTSBand15_RX_eLNA_SetDefault
#define  UMTSBand16_RX_eLNA                     UMTSBand16_RX_eLNA_SetDefault
#define  UMTSBand17_RX_eLNA                     UMTSBand17_RX_eLNA_SetDefault
#define  UMTSBand18_RX_eLNA                     UMTSBand18_RX_eLNA_SetDefault
#define  UMTSBand19_RX_eLNA                     UMTSBand19_RX_eLNA_SetDefault
#define  UMTSBand20_RX_eLNA                     UMTSBand20_RX_eLNA_SetDefault

/* ------------------- RXD eLNA setting ------------------- */
#define  UMTSBand1_RXD_eLNA                      UMTSBand1_RXD_eLNA_SetDefault
#define  UMTSBand2_RXD_eLNA                      UMTSBand2_RXD_eLNA_SetDefault
#define  UMTSBand3_RXD_eLNA                      UMTSBand3_RXD_eLNA_SetDefault
#define  UMTSBand4_RXD_eLNA                      UMTSBand4_RXD_eLNA_SetDefault
#define  UMTSBand5_RXD_eLNA                      UMTSBand5_RXD_eLNA_SetDefault
#define  UMTSBand6_RXD_eLNA                      UMTSBand6_RXD_eLNA_SetDefault
#define  UMTSBand7_RXD_eLNA                      UMTSBand7_RXD_eLNA_SetDefault
#define  UMTSBand8_RXD_eLNA                      UMTSBand8_RXD_eLNA_SetDefault
#define  UMTSBand9_RXD_eLNA                      UMTSBand9_RXD_eLNA_SetDefault
#define  UMTSBand10_RXD_eLNA                     UMTSBand10_RXD_eLNA_SetDefault
#define  UMTSBand11_RXD_eLNA                     UMTSBand11_RXD_eLNA_SetDefault
#define  UMTSBand12_RXD_eLNA                     UMTSBand12_RXD_eLNA_SetDefault
#define  UMTSBand13_RXD_eLNA                     UMTSBand13_RXD_eLNA_SetDefault
#define  UMTSBand14_RXD_eLNA                     UMTSBand14_RXD_eLNA_SetDefault
#define  UMTSBand15_RXD_eLNA                     UMTSBand15_RXD_eLNA_SetDefault
#define  UMTSBand16_RXD_eLNA                     UMTSBand16_RXD_eLNA_SetDefault
#define  UMTSBand17_RXD_eLNA                     UMTSBand17_RXD_eLNA_SetDefault
#define  UMTSBand18_RXD_eLNA                     UMTSBand18_RXD_eLNA_SetDefault
#define  UMTSBand19_RXD_eLNA                     UMTSBand19_RXD_eLNA_SetDefault
#define  UMTSBand20_RXD_eLNA                     UMTSBand20_RXD_eLNA_SetDefault

#endif // IS_3G_ELNA_SUPPORT



#if IS_3G_ELNA_IDX_SUPPORT
/* ------------------- RX eLNA setting -------------------- */
#ifndef UMTSBand1_RX_eLNA_IDX_SetDefault
   #define  UMTSBand1_RX_eLNA_IDX_SetDefault           MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand2_RX_eLNA_IDX_SetDefault
   #define  UMTSBand2_RX_eLNA_IDX_SetDefault           MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand3_RX_eLNA_IDX_SetDefault
   #define  UMTSBand3_RX_eLNA_IDX_SetDefault           MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand4_RX_eLNA_IDX_SetDefault
   #define  UMTSBand4_RX_eLNA_IDX_SetDefault           MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand5_RX_eLNA_IDX_SetDefault
   #define  UMTSBand5_RX_eLNA_IDX_SetDefault           MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand6_RX_eLNA_IDX_SetDefault
   #define  UMTSBand6_RX_eLNA_IDX_SetDefault           MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand7_RX_eLNA_IDX_SetDefault
   #define  UMTSBand7_RX_eLNA_IDX_SetDefault           MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand8_RX_eLNA_IDX_SetDefault
   #define  UMTSBand8_RX_eLNA_IDX_SetDefault           MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand9_RX_eLNA_IDX_SetDefault
   #define  UMTSBand9_RX_eLNA_IDX_SetDefault           MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand10_RX_eLNA_IDX_SetDefault
   #define  UMTSBand10_RX_eLNA_IDX_SetDefault          MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand11_RX_eLNA_IDX_SetDefault
   #define  UMTSBand11_RX_eLNA_IDX_SetDefault          MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand12_RX_eLNA_IDX_SetDefault
   #define  UMTSBand12_RX_eLNA_IDX_SetDefault           MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand13_RX_eLNA_IDX_SetDefault
   #define  UMTSBand13_RX_eLNA_IDX_SetDefault           MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand14_RX_eLNA_IDX_SetDefault
   #define  UMTSBand14_RX_eLNA_IDX_SetDefault           MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand15_RX_eLNA_IDX_SetDefault
   #define  UMTSBand15_RX_eLNA_IDX_SetDefault           MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand16_RX_eLNA_IDX_SetDefault
   #define  UMTSBand16_RX_eLNA_IDX_SetDefault           MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand17_RX_eLNA_IDX_SetDefault
   #define  UMTSBand17_RX_eLNA_IDX_SetDefault           MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand18_RX_eLNA_IDX_SetDefault
   #define  UMTSBand18_RX_eLNA_IDX_SetDefault           MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand19_RX_eLNA_IDX_SetDefault
   #define  UMTSBand19_RX_eLNA_IDX_SetDefault           MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand20_RX_eLNA_IDX_SetDefault
   #define  UMTSBand20_RX_eLNA_IDX_SetDefault           MML1_FE_ELNA_NONE
#endif

/* ------------------- RXD eLNA setting ------------------- */
#ifndef UMTSBand1_RXD_eLNA_IDX_SetDefault
   #define  UMTSBand1_RXD_eLNA_IDX_SetDefault          MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand2_RXD_eLNA_IDX_SetDefault
   #define  UMTSBand2_RXD_eLNA_IDX_SetDefault          MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand3_RXD_eLNA_IDX_SetDefault
   #define  UMTSBand3_RXD_eLNA_IDX_SetDefault          MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand4_RXD_eLNA_IDX_SetDefault
   #define  UMTSBand4_RXD_eLNA_IDX_SetDefault          MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand5_RXD_eLNA_IDX_SetDefault
   #define  UMTSBand5_RXD_eLNA_IDX_SetDefault          MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand6_RXD_eLNA_IDX_SetDefault
   #define  UMTSBand6_RXD_eLNA_IDX_SetDefault          MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand7_RXD_eLNA_IDX_SetDefault
   #define  UMTSBand7_RXD_eLNA_IDX_SetDefault          MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand8_RXD_eLNA_IDX_SetDefault
   #define  UMTSBand8_RXD_eLNA_IDX_SetDefault          MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand9_RXD_eLNA_IDX_SetDefault
   #define  UMTSBand9_RXD_eLNA_IDX_SetDefault          MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand10_RXD_eLNA_IDX_SetDefault
   #define  UMTSBand10_RXD_eLNA_IDX_SetDefault         MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand11_RXD_eLNA_IDX_SetDefault
   #define  UMTSBand11_RXD_eLNA_IDX_SetDefault         MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand12_RXD_eLNA_IDX_SetDefault
   #define  UMTSBand12_RXD_eLNA_IDX_SetDefault          MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand13_RXD_eLNA_IDX_SetDefault
   #define  UMTSBand13_RXD_eLNA_IDX_SetDefault          MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand14_RXD_eLNA_IDX_SetDefault
   #define  UMTSBand14_RXD_eLNA_IDX_SetDefault          MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand15_RXD_eLNA_IDX_SetDefault
   #define  UMTSBand15_RXD_eLNA_IDX_SetDefault          MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand16_RXD_eLNA_IDX_SetDefault
#define  UMTSBand16_RXD_eLNA_IDX_SetDefault            MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand17_RXD_eLNA_IDX_SetDefault
   #define  UMTSBand17_RXD_eLNA_IDX_SetDefault          MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand18_RXD_eLNA_IDX_SetDefault
   #define  UMTSBand18_RXD_eLNA_IDX_SetDefault          MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand19_RXD_eLNA_IDX_SetDefault
   #define  UMTSBand19_RXD_eLNA_IDX_SetDefault         MML1_FE_ELNA_NONE
#endif

#ifndef UMTSBand20_RXD_eLNA_IDX_SetDefault
   #define  UMTSBand20_RXD_eLNA_IDX_SetDefault         MML1_FE_ELNA_NONE
#endif

/* ------------------- RX eLNA setting -------------------- */
#define  UMTSBand1_RX_eLNA_IDX                      UMTSBand1_RX_eLNA_IDX_SetDefault
#define  UMTSBand2_RX_eLNA_IDX                      UMTSBand2_RX_eLNA_IDX_SetDefault
#define  UMTSBand3_RX_eLNA_IDX                      UMTSBand3_RX_eLNA_IDX_SetDefault
#define  UMTSBand4_RX_eLNA_IDX                      UMTSBand4_RX_eLNA_IDX_SetDefault
#define  UMTSBand5_RX_eLNA_IDX                      UMTSBand5_RX_eLNA_IDX_SetDefault
#define  UMTSBand6_RX_eLNA_IDX                      UMTSBand6_RX_eLNA_IDX_SetDefault
#define  UMTSBand7_RX_eLNA_IDX                      UMTSBand7_RX_eLNA_IDX_SetDefault
#define  UMTSBand8_RX_eLNA_IDX                      UMTSBand8_RX_eLNA_IDX_SetDefault
#define  UMTSBand9_RX_eLNA_IDX                      UMTSBand9_RX_eLNA_IDX_SetDefault
#define  UMTSBand10_RX_eLNA_IDX                     UMTSBand10_RX_eLNA_IDX_SetDefault
#define  UMTSBand11_RX_eLNA_IDX                     UMTSBand11_RX_eLNA_IDX_SetDefault
#define  UMTSBand12_RX_eLNA_IDX                     UMTSBand12_RX_eLNA_IDX_SetDefault
#define  UMTSBand13_RX_eLNA_IDX                     UMTSBand13_RX_eLNA_IDX_SetDefault
#define  UMTSBand14_RX_eLNA_IDX                     UMTSBand14_RX_eLNA_IDX_SetDefault
#define  UMTSBand15_RX_eLNA_IDX                     UMTSBand15_RX_eLNA_IDX_SetDefault
#define  UMTSBand16_RX_eLNA_IDX                     UMTSBand16_RX_eLNA_IDX_SetDefault
#define  UMTSBand17_RX_eLNA_IDX                     UMTSBand17_RX_eLNA_IDX_SetDefault
#define  UMTSBand18_RX_eLNA_IDX                     UMTSBand18_RX_eLNA_IDX_SetDefault
#define  UMTSBand19_RX_eLNA_IDX                     UMTSBand19_RX_eLNA_IDX_SetDefault
#define  UMTSBand20_RX_eLNA_IDX                     UMTSBand20_RX_eLNA_IDX_SetDefault

/* ------------------- RXD eLNA setting ------------------- */
#define  UMTSBand1_RXD_eLNA_IDX                      UMTSBand1_RXD_eLNA_IDX_SetDefault
#define  UMTSBand2_RXD_eLNA_IDX                      UMTSBand2_RXD_eLNA_IDX_SetDefault
#define  UMTSBand3_RXD_eLNA_IDX                      UMTSBand3_RXD_eLNA_IDX_SetDefault
#define  UMTSBand4_RXD_eLNA_IDX                      UMTSBand4_RXD_eLNA_IDX_SetDefault
#define  UMTSBand5_RXD_eLNA_IDX                      UMTSBand5_RXD_eLNA_IDX_SetDefault
#define  UMTSBand6_RXD_eLNA_IDX                      UMTSBand6_RXD_eLNA_IDX_SetDefault
#define  UMTSBand7_RXD_eLNA_IDX                      UMTSBand7_RXD_eLNA_IDX_SetDefault
#define  UMTSBand8_RXD_eLNA_IDX                      UMTSBand8_RXD_eLNA_IDX_SetDefault
#define  UMTSBand9_RXD_eLNA_IDX                      UMTSBand9_RXD_eLNA_IDX_SetDefault
#define  UMTSBand10_RXD_eLNA_IDX                     UMTSBand10_RXD_eLNA_IDX_SetDefault
#define  UMTSBand11_RXD_eLNA_IDX                     UMTSBand11_RXD_eLNA_IDX_SetDefault
#define  UMTSBand12_RXD_eLNA_IDX                     UMTSBand12_RXD_eLNA_IDX_SetDefault
#define  UMTSBand13_RXD_eLNA_IDX                     UMTSBand13_RXD_eLNA_IDX_SetDefault
#define  UMTSBand14_RXD_eLNA_IDX                     UMTSBand14_RXD_eLNA_IDX_SetDefault
#define  UMTSBand15_RXD_eLNA_IDX                     UMTSBand15_RXD_eLNA_IDX_SetDefault
#define  UMTSBand16_RXD_eLNA_IDX                     UMTSBand16_RXD_eLNA_IDX_SetDefault
#define  UMTSBand17_RXD_eLNA_IDX                     UMTSBand17_RXD_eLNA_IDX_SetDefault
#define  UMTSBand18_RXD_eLNA_IDX                     UMTSBand18_RXD_eLNA_IDX_SetDefault
#define  UMTSBand19_RXD_eLNA_IDX                     UMTSBand19_RXD_eLNA_IDX_SetDefault
#define  UMTSBand20_RXD_eLNA_IDX                     UMTSBand20_RXD_eLNA_IDX_SetDefault

#endif // IS_3G_ELNA_IDX_SUPPORT


/*******************************************************************************
** CA CFG INDEX DEFAULT DEFINE
*******************************************************************************/
#ifndef RX_CABAND_IND_00_SetDefault
   #define RX_CABAND_IND_00_SetDefault   UMTS_CA_BANDNONE
#endif
#ifndef RX_CABAND_IND_01_SetDefault
   #define RX_CABAND_IND_01_SetDefault   UMTS_CA_BANDNONE
#endif
#ifndef RX_CABAND_IND_02_SetDefault
   #define RX_CABAND_IND_02_SetDefault   UMTS_CA_BANDNONE
#endif
#ifndef RX_CABAND_IND_03_SetDefault
   #define RX_CABAND_IND_03_SetDefault   UMTS_CA_BANDNONE
#endif
#ifndef RX_CABAND_IND_04_SetDefault
   #define RX_CABAND_IND_04_SetDefault   UMTS_CA_BANDNONE
#endif

#define RX_CABAND_IND_00      RX_CABAND_IND_00_SetDefault
#define RX_CABAND_IND_01      RX_CABAND_IND_01_SetDefault
#define RX_CABAND_IND_02      RX_CABAND_IND_02_SetDefault
#define RX_CABAND_IND_03      RX_CABAND_IND_03_SetDefault
#define RX_CABAND_IND_04      RX_CABAND_IND_04_SetDefault


#if IS_URF_PCORE
#define PA_SECTION           PA_SECTION_SetDefault
#define TC_PR1               TC_PR1_SetDefault
#define TC_PR2               TC_PR2_SetDefault
#define TC_PR2B              TC_PR2B_SetDefault
#define TC_PR3               TC_PR3_SetDefault

#define TC_PT1               TC_PT1_SetDefault
#define TC_PT2               TC_PT2_SetDefault
#define TC_PT2B              TC_PT2B_SetDefault
#define TC_PT3               TC_PT3_SetDefault

#define MAX_OFFSET           MAX_OFFSET_SetDefault
#define VM_OFFSET            VM_OFFSET_SetDefault
#define VBIAS_OFFSET         VBIAS_OFFSET_SetDefault
#define DC2DC_OFFSET         DC2DC_OFFSET_SetDefault
#define VGA_OFFSET           VGA_OFFSET_SetDefault

#define RF_SETTING_BY_NVRAM    KAL_TRUE
#define PMU_PASETTING          PMU_PASETTING_SetDefault
#define RX_DIVERSITY_ALWAYS_ON RX_DIVERSITY_ALWAYS_ON_SetDefault
#define PA_DIRFT_COMPENSATION  PA_DIRFT_COMPENSATION_SetDefault
#define ULTRA_LOW_COST_EN      ULTRA_LOW_COST_EN_SetDefault
#endif

#define BAND1_CHANNEL_SEL         UMTSBand1_CHANNEL_SEL_SetDefault
#define BAND2_CHANNEL_SEL         UMTSBand2_CHANNEL_SEL_SetDefault
#define BAND3_CHANNEL_SEL         UMTSBand3_CHANNEL_SEL_SetDefault
#define BAND4_CHANNEL_SEL         UMTSBand4_CHANNEL_SEL_SetDefault
#define BAND5_CHANNEL_SEL         UMTSBand5_CHANNEL_SEL_SetDefault
#define BAND6_CHANNEL_SEL         UMTSBand6_CHANNEL_SEL_SetDefault
#define BAND8_CHANNEL_SEL         UMTSBand8_CHANNEL_SEL_SetDefault
#define BAND9_CHANNEL_SEL         UMTSBand9_CHANNEL_SEL_SetDefault
#define BAND10_CHANNEL_SEL        UMTSBand10_CHANNEL_SEL_SetDefault
#define BAND11_CHANNEL_SEL        UMTSBand11_CHANNEL_SEL_SetDefault
#define BAND19_CHANNEL_SEL        UMTSBand19_CHANNEL_SEL_SetDefault

#define BAND1_CHANNEL2_SEL        UMTSBand1_CHANNEL2_SEL_SetDefault
#define BAND2_CHANNEL2_SEL        UMTSBand2_CHANNEL2_SEL_SetDefault
#define BAND3_CHANNEL2_SEL        UMTSBand3_CHANNEL2_SEL_SetDefault
#define BAND4_CHANNEL2_SEL        UMTSBand4_CHANNEL2_SEL_SetDefault
#define BAND5_CHANNEL2_SEL        UMTSBand5_CHANNEL2_SEL_SetDefault
#define BAND6_CHANNEL2_SEL        UMTSBand6_CHANNEL2_SEL_SetDefault
#define BAND8_CHANNEL2_SEL        UMTSBand8_CHANNEL2_SEL_SetDefault
#define BAND9_CHANNEL2_SEL        UMTSBand9_CHANNEL2_SEL_SetDefault
#define BAND10_CHANNEL2_SEL       UMTSBand10_CHANNEL2_SEL_SetDefault
#define BAND11_CHANNEL2_SEL       UMTSBand11_CHANNEL2_SEL_SetDefault
#define BAND19_CHANNEL2_SEL       UMTSBand19_CHANNEL2_SEL_SetDefault

#define BAND1_OUTPUT_SEL          UMTSBand1_OUTPUT_SEL_SetDefault
#define BAND2_OUTPUT_SEL          UMTSBand2_OUTPUT_SEL_SetDefault
#define BAND3_OUTPUT_SEL          UMTSBand3_OUTPUT_SEL_SetDefault
#define BAND4_OUTPUT_SEL          UMTSBand4_OUTPUT_SEL_SetDefault
#define BAND5_OUTPUT_SEL          UMTSBand5_OUTPUT_SEL_SetDefault
#define BAND6_OUTPUT_SEL          UMTSBand6_OUTPUT_SEL_SetDefault
#define BAND8_OUTPUT_SEL          UMTSBand8_OUTPUT_SEL_SetDefault
#define BAND9_OUTPUT_SEL          UMTSBand9_OUTPUT_SEL_SetDefault
#define BAND10_OUTPUT_SEL         UMTSBand10_OUTPUT_SEL_SetDefault
#define BAND11_OUTPUT_SEL         UMTSBand11_OUTPUT_SEL_SetDefault
#define BAND19_OUTPUT_SEL         UMTSBand19_OUTPUT_SEL_SetDefault

#define BAND1_OUTPUT_DET_SEL      UMTSBand1_OUTPUT_DET_SEL_SetDefault
#define BAND2_OUTPUT_DET_SEL      UMTSBand2_OUTPUT_DET_SEL_SetDefault
#define BAND3_OUTPUT_DET_SEL      UMTSBand3_OUTPUT_DET_SEL_SetDefault
#define BAND4_OUTPUT_DET_SEL      UMTSBand4_OUTPUT_DET_SEL_SetDefault
#define BAND5_OUTPUT_DET_SEL      UMTSBand5_OUTPUT_DET_SEL_SetDefault
#define BAND6_OUTPUT_DET_SEL      UMTSBand6_OUTPUT_DET_SEL_SetDefault
#define BAND8_OUTPUT_DET_SEL      UMTSBand8_OUTPUT_DET_SEL_SetDefault
#define BAND9_OUTPUT_DET_SEL      UMTSBand9_OUTPUT_DET_SEL_SetDefault
#define BAND10_OUTPUT_DET_SEL     UMTSBand10_OUTPUT_DET_SEL_SetDefault
#define BAND11_OUTPUT_DET_SEL     UMTSBand11_OUTPUT_DET_SEL_SetDefault
#define BAND19_OUTPUT_DET_SEL     UMTSBand19_OUTPUT_DET_SEL_SetDefault

#define PDATA_BAND1_PR1           PDATA_UMTSBand1_PR1_SetDefault
#define PDATA_BAND1_PR2           PDATA_UMTSBand1_PR2_SetDefault
#define PDATA_BAND1_PR2B          PDATA_UMTSBand1_PR2B_SetDefault
#define PDATA_BAND1_PR3           PDATA_UMTSBand1_PR3_SetDefault
#define PDATA_BAND1_PR3A          PDATA_UMTSBand1_PR3A_SetDefault
#define PDATA_BAND1_PT1           PDATA_UMTSBand1_PT1_SetDefault
#define PDATA_BAND1_PT2           PDATA_UMTSBand1_PT2_SetDefault
#define PDATA_BAND1_PT2B          PDATA_UMTSBand1_PT2B_SetDefault
#define PDATA_BAND1_PT3           PDATA_UMTSBand1_PT3_SetDefault
#define PDATA_BAND1_PT3A          PDATA_UMTSBand1_PT3A_SetDefault

#define PDATA_BAND2_PR1           PDATA_UMTSBand2_PR1_SetDefault
#define PDATA_BAND2_PR2           PDATA_UMTSBand2_PR2_SetDefault
#define PDATA_BAND2_PR2B          PDATA_UMTSBand2_PR2B_SetDefault
#define PDATA_BAND2_PR3           PDATA_UMTSBand2_PR3_SetDefault
#define PDATA_BAND2_PR3A          PDATA_UMTSBand2_PR3A_SetDefault
#define PDATA_BAND2_PT1           PDATA_UMTSBand2_PT1_SetDefault
#define PDATA_BAND2_PT2           PDATA_UMTSBand2_PT2_SetDefault
#define PDATA_BAND2_PT2B          PDATA_UMTSBand2_PT2B_SetDefault
#define PDATA_BAND2_PT3           PDATA_UMTSBand2_PT3_SetDefault
#define PDATA_BAND2_PT3A          PDATA_UMTSBand2_PT3A_SetDefault

#define PDATA_BAND3_PR1           PDATA_UMTSBand3_PR1_SetDefault
#define PDATA_BAND3_PR2           PDATA_UMTSBand3_PR2_SetDefault
#define PDATA_BAND3_PR2B          PDATA_UMTSBand3_PR2B_SetDefault
#define PDATA_BAND3_PR3           PDATA_UMTSBand3_PR3_SetDefault
#define PDATA_BAND3_PR3A          PDATA_UMTSBand3_PR3A_SetDefault
#define PDATA_BAND3_PT1           PDATA_UMTSBand3_PT1_SetDefault
#define PDATA_BAND3_PT2           PDATA_UMTSBand3_PT2_SetDefault
#define PDATA_BAND3_PT2B          PDATA_UMTSBand3_PT2B_SetDefault
#define PDATA_BAND3_PT3           PDATA_UMTSBand3_PT3_SetDefault
#define PDATA_BAND3_PT3A          PDATA_UMTSBand3_PT3A_SetDefault

#define PDATA_BAND4_PR1           PDATA_UMTSBand4_PR1_SetDefault
#define PDATA_BAND4_PR2           PDATA_UMTSBand4_PR2_SetDefault
#define PDATA_BAND4_PR2B          PDATA_UMTSBand4_PR2B_SetDefault
#define PDATA_BAND4_PR3           PDATA_UMTSBand4_PR3_SetDefault
#define PDATA_BAND4_PR3A          PDATA_UMTSBand4_PR3A_SetDefault
#define PDATA_BAND4_PT1           PDATA_UMTSBand4_PT1_SetDefault
#define PDATA_BAND4_PT2           PDATA_UMTSBand4_PT2_SetDefault
#define PDATA_BAND4_PT2B          PDATA_UMTSBand4_PT2B_SetDefault
#define PDATA_BAND4_PT3           PDATA_UMTSBand4_PT3_SetDefault
#define PDATA_BAND4_PT3A          PDATA_UMTSBand4_PT3A_SetDefault

#define PDATA_BAND5_PR1           PDATA_UMTSBand5_PR1_SetDefault
#define PDATA_BAND5_PR2           PDATA_UMTSBand5_PR2_SetDefault
#define PDATA_BAND5_PR2B          PDATA_UMTSBand5_PR2B_SetDefault
#define PDATA_BAND5_PR3           PDATA_UMTSBand5_PR3_SetDefault
#define PDATA_BAND5_PR3A          PDATA_UMTSBand5_PR3A_SetDefault
#define PDATA_BAND5_PT1           PDATA_UMTSBand5_PT1_SetDefault
#define PDATA_BAND5_PT2           PDATA_UMTSBand5_PT2_SetDefault
#define PDATA_BAND5_PT2B          PDATA_UMTSBand5_PT2B_SetDefault
#define PDATA_BAND5_PT3           PDATA_UMTSBand5_PT3_SetDefault
#define PDATA_BAND5_PT3A          PDATA_UMTSBand5_PT3A_SetDefault

#define PDATA_BAND6_PR1           PDATA_UMTSBand6_PR1_SetDefault
#define PDATA_BAND6_PR2           PDATA_UMTSBand6_PR2_SetDefault
#define PDATA_BAND6_PR2B          PDATA_UMTSBand6_PR2B_SetDefault
#define PDATA_BAND6_PR3           PDATA_UMTSBand6_PR3_SetDefault
#define PDATA_BAND6_PR3A          PDATA_UMTSBand6_PR3A_SetDefault
#define PDATA_BAND6_PT1           PDATA_UMTSBand6_PT1_SetDefault
#define PDATA_BAND6_PT2           PDATA_UMTSBand6_PT2_SetDefault
#define PDATA_BAND6_PT2B          PDATA_UMTSBand6_PT2B_SetDefault
#define PDATA_BAND6_PT3           PDATA_UMTSBand6_PT3_SetDefault
#define PDATA_BAND6_PT3A          PDATA_UMTSBand6_PT3A_SetDefault

#define PDATA_BAND7_PR1           PDATA_UMTSBand7_PR1_SetDefault
#define PDATA_BAND7_PR2           PDATA_UMTSBand7_PR2_SetDefault
#define PDATA_BAND7_PR2B          PDATA_UMTSBand7_PR2B_SetDefault
#define PDATA_BAND7_PR3           PDATA_UMTSBand7_PR3_SetDefault
#define PDATA_BAND7_PR3A          PDATA_UMTSBand7_PR3A_SetDefault
#define PDATA_BAND7_PT1           PDATA_UMTSBand7_PT1_SetDefault
#define PDATA_BAND7_PT2           PDATA_UMTSBand7_PT2_SetDefault
#define PDATA_BAND7_PT2B          PDATA_UMTSBand7_PT2B_SetDefault
#define PDATA_BAND7_PT3           PDATA_UMTSBand7_PT3_SetDefault
#define PDATA_BAND7_PT3A          PDATA_UMTSBand7_PT3A_SetDefault

#define PDATA_BAND8_PR1           PDATA_UMTSBand8_PR1_SetDefault
#define PDATA_BAND8_PR2           PDATA_UMTSBand8_PR2_SetDefault
#define PDATA_BAND8_PR2B          PDATA_UMTSBand8_PR2B_SetDefault
#define PDATA_BAND8_PR3           PDATA_UMTSBand8_PR3_SetDefault
#define PDATA_BAND8_PR3A          PDATA_UMTSBand8_PR3A_SetDefault
#define PDATA_BAND8_PT1           PDATA_UMTSBand8_PT1_SetDefault
#define PDATA_BAND8_PT2           PDATA_UMTSBand8_PT2_SetDefault
#define PDATA_BAND8_PT2B          PDATA_UMTSBand8_PT2B_SetDefault
#define PDATA_BAND8_PT3           PDATA_UMTSBand8_PT3_SetDefault
#define PDATA_BAND8_PT3A          PDATA_UMTSBand8_PT3A_SetDefault

#define PDATA_BAND9_PR1           PDATA_UMTSBand9_PR1_SetDefault
#define PDATA_BAND9_PR2           PDATA_UMTSBand9_PR2_SetDefault
#define PDATA_BAND9_PR2B          PDATA_UMTSBand9_PR2B_SetDefault
#define PDATA_BAND9_PR3           PDATA_UMTSBand9_PR3_SetDefault
#define PDATA_BAND9_PR3A          PDATA_UMTSBand9_PR3A_SetDefault
#define PDATA_BAND9_PT1           PDATA_UMTSBand9_PT1_SetDefault
#define PDATA_BAND9_PT2           PDATA_UMTSBand9_PT2_SetDefault
#define PDATA_BAND9_PT2B          PDATA_UMTSBand9_PT2B_SetDefault
#define PDATA_BAND9_PT3           PDATA_UMTSBand9_PT3_SetDefault
#define PDATA_BAND9_PT3A          PDATA_UMTSBand9_PT3A_SetDefault

#define PDATA_BAND10_PR1          PDATA_UMTSBand10_PR1_SetDefault
#define PDATA_BAND10_PR2          PDATA_UMTSBand10_PR2_SetDefault
#define PDATA_BAND10_PR2B         PDATA_UMTSBand10_PR2B_SetDefault
#define PDATA_BAND10_PR3          PDATA_UMTSBand10_PR3_SetDefault
#define PDATA_BAND10_PR3A         PDATA_UMTSBand10_PR3A_SetDefault
#define PDATA_BAND10_PT1          PDATA_UMTSBand10_PT1_SetDefault
#define PDATA_BAND10_PT2          PDATA_UMTSBand10_PT2_SetDefault
#define PDATA_BAND10_PT2B         PDATA_UMTSBand10_PT2B_SetDefault
#define PDATA_BAND10_PT3          PDATA_UMTSBand10_PT3_SetDefault
#define PDATA_BAND10_PT3A         PDATA_UMTSBand10_PT3A_SetDefault

#define PDATA_BAND11_PR1          PDATA_UMTSBand11_PR1_SetDefault
#define PDATA_BAND11_PR2          PDATA_UMTSBand11_PR2_SetDefault
#define PDATA_BAND11_PR2B         PDATA_UMTSBand11_PR2B_SetDefault
#define PDATA_BAND11_PR3          PDATA_UMTSBand11_PR3_SetDefault
#define PDATA_BAND11_PR3A         PDATA_UMTSBand11_PR3A_SetDefault
#define PDATA_BAND11_PT1          PDATA_UMTSBand11_PT1_SetDefault
#define PDATA_BAND11_PT2          PDATA_UMTSBand11_PT2_SetDefault
#define PDATA_BAND11_PT2B         PDATA_UMTSBand11_PT2B_SetDefault
#define PDATA_BAND11_PT3          PDATA_UMTSBand11_PT3_SetDefault
#define PDATA_BAND11_PT3A         PDATA_UMTSBand11_PT3A_SetDefault

#define PDATA_BAND19_PR1          PDATA_UMTSBand19_PR1_SetDefault
#define PDATA_BAND19_PR2          PDATA_UMTSBand19_PR2_SetDefault
#define PDATA_BAND19_PR2B         PDATA_UMTSBand19_PR2B_SetDefault
#define PDATA_BAND19_PR3          PDATA_UMTSBand19_PR3_SetDefault
#define PDATA_BAND19_PR3A         PDATA_UMTSBand19_PR3A_SetDefault
#define PDATA_BAND19_PT1          PDATA_UMTSBand19_PT1_SetDefault
#define PDATA_BAND19_PT2          PDATA_UMTSBand19_PT2_SetDefault
#define PDATA_BAND19_PT2B         PDATA_UMTSBand19_PT2B_SetDefault
#define PDATA_BAND19_PT3          PDATA_UMTSBand19_PT3_SetDefault
#define PDATA_BAND19_PT3A         PDATA_UMTSBand19_PT3A_SetDefault

#if IS_3G_RXD_FE_CONTROL_SUPPORT
#define PDATA2_BAND1_PR1           PDATA2_UMTSBand1_PR1_SetDefault
#define PDATA2_BAND1_PR2           PDATA2_UMTSBand1_PR2_SetDefault
#define PDATA2_BAND1_PR2B          PDATA2_UMTSBand1_PR2B_SetDefault
#define PDATA2_BAND1_PR3           PDATA2_UMTSBand1_PR3_SetDefault
#define PDATA2_BAND1_PR3A          PDATA2_UMTSBand1_PR3A_SetDefault

#define PDATA2_BAND2_PR1           PDATA2_UMTSBand2_PR1_SetDefault
#define PDATA2_BAND2_PR2           PDATA2_UMTSBand2_PR2_SetDefault
#define PDATA2_BAND2_PR2B          PDATA2_UMTSBand2_PR2B_SetDefault
#define PDATA2_BAND2_PR3           PDATA2_UMTSBand2_PR3_SetDefault
#define PDATA2_BAND2_PR3A          PDATA2_UMTSBand2_PR3A_SetDefault

#define PDATA2_BAND3_PR1           PDATA2_UMTSBand3_PR1_SetDefault
#define PDATA2_BAND3_PR2           PDATA2_UMTSBand3_PR2_SetDefault
#define PDATA2_BAND3_PR2B          PDATA2_UMTSBand3_PR2B_SetDefault
#define PDATA2_BAND3_PR3           PDATA2_UMTSBand3_PR3_SetDefault
#define PDATA2_BAND3_PR3A          PDATA2_UMTSBand3_PR3A_SetDefault

#define PDATA2_BAND4_PR1           PDATA2_UMTSBand4_PR1_SetDefault
#define PDATA2_BAND4_PR2           PDATA2_UMTSBand4_PR2_SetDefault
#define PDATA2_BAND4_PR2B          PDATA2_UMTSBand4_PR2B_SetDefault
#define PDATA2_BAND4_PR3           PDATA2_UMTSBand4_PR3_SetDefault
#define PDATA2_BAND4_PR3A          PDATA2_UMTSBand4_PR3A_SetDefault

#define PDATA2_BAND5_PR1           PDATA2_UMTSBand5_PR1_SetDefault
#define PDATA2_BAND5_PR2           PDATA2_UMTSBand5_PR2_SetDefault
#define PDATA2_BAND5_PR2B          PDATA2_UMTSBand5_PR2B_SetDefault
#define PDATA2_BAND5_PR3           PDATA2_UMTSBand5_PR3_SetDefault
#define PDATA2_BAND5_PR3A          PDATA2_UMTSBand5_PR3A_SetDefault

#define PDATA2_BAND6_PR1           PDATA2_UMTSBand6_PR1_SetDefault
#define PDATA2_BAND6_PR2           PDATA2_UMTSBand6_PR2_SetDefault
#define PDATA2_BAND6_PR2B          PDATA2_UMTSBand6_PR2B_SetDefault
#define PDATA2_BAND6_PR3           PDATA2_UMTSBand6_PR3_SetDefault
#define PDATA2_BAND6_PR3A          PDATA2_UMTSBand6_PR3A_SetDefault

#define PDATA2_BAND7_PR1           PDATA2_UMTSBand7_PR1_SetDefault
#define PDATA2_BAND7_PR2           PDATA2_UMTSBand7_PR2_SetDefault
#define PDATA2_BAND7_PR2B          PDATA2_UMTSBand7_PR2B_SetDefault
#define PDATA2_BAND7_PR3           PDATA2_UMTSBand7_PR3_SetDefault
#define PDATA2_BAND7_PR3A          PDATA2_UMTSBand7_PR3A_SetDefault

#define PDATA2_BAND8_PR1           PDATA2_UMTSBand8_PR1_SetDefault
#define PDATA2_BAND8_PR2           PDATA2_UMTSBand8_PR2_SetDefault
#define PDATA2_BAND8_PR2B          PDATA2_UMTSBand8_PR2B_SetDefault
#define PDATA2_BAND8_PR3           PDATA2_UMTSBand8_PR3_SetDefault
#define PDATA2_BAND8_PR3A          PDATA2_UMTSBand8_PR3A_SetDefault

#define PDATA2_BAND9_PR1           PDATA2_UMTSBand9_PR1_SetDefault
#define PDATA2_BAND9_PR2           PDATA2_UMTSBand9_PR2_SetDefault
#define PDATA2_BAND9_PR2B          PDATA2_UMTSBand9_PR2B_SetDefault
#define PDATA2_BAND9_PR3           PDATA2_UMTSBand9_PR3_SetDefault
#define PDATA2_BAND9_PR3A          PDATA2_UMTSBand9_PR3A_SetDefault

#define PDATA2_BAND10_PR1          PDATA2_UMTSBand10_PR1_SetDefault
#define PDATA2_BAND10_PR2          PDATA2_UMTSBand10_PR2_SetDefault
#define PDATA2_BAND10_PR2B         PDATA2_UMTSBand10_PR2B_SetDefault
#define PDATA2_BAND10_PR3          PDATA2_UMTSBand10_PR3_SetDefault
#define PDATA2_BAND10_PR3A         PDATA2_UMTSBand10_PR3A_SetDefault

#define PDATA2_BAND11_PR1          PDATA2_UMTSBand11_PR1_SetDefault
#define PDATA2_BAND11_PR2          PDATA2_UMTSBand11_PR2_SetDefault
#define PDATA2_BAND11_PR2B         PDATA2_UMTSBand11_PR2B_SetDefault
#define PDATA2_BAND11_PR3          PDATA2_UMTSBand11_PR3_SetDefault
#define PDATA2_BAND11_PR3A         PDATA2_UMTSBand11_PR3A_SetDefault

#define PDATA2_BAND19_PR1          PDATA2_UMTSBand19_PR1_SetDefault
#define PDATA2_BAND19_PR2          PDATA2_UMTSBand19_PR2_SetDefault
#define PDATA2_BAND19_PR2B         PDATA2_UMTSBand19_PR2B_SetDefault
#define PDATA2_BAND19_PR3          PDATA2_UMTSBand19_PR3_SetDefault
#define PDATA2_BAND19_PR3A         PDATA2_UMTSBand19_PR3A_SetDefault
#endif

#define MPR_BACK_OFF_HSDPA_BAND1  MPR_BACK_OFF_HSDPA_BAND1_SetDefault
#define MPR_BACK_OFF_HSDPA_BAND2  MPR_BACK_OFF_HSDPA_BAND2_SetDefault
#define MPR_BACK_OFF_HSDPA_BAND3  MPR_BACK_OFF_HSDPA_BAND3_SetDefault
#define MPR_BACK_OFF_HSDPA_BAND4  MPR_BACK_OFF_HSDPA_BAND4_SetDefault
#define MPR_BACK_OFF_HSDPA_BAND5  MPR_BACK_OFF_HSDPA_BAND5_SetDefault
#define MPR_BACK_OFF_HSDPA_BAND6  MPR_BACK_OFF_HSDPA_BAND6_SetDefault
#define MPR_BACK_OFF_HSDPA_BAND8  MPR_BACK_OFF_HSDPA_BAND8_SetDefault
#define MPR_BACK_OFF_HSDPA_BAND9  MPR_BACK_OFF_HSDPA_BAND9_SetDefault
#define MPR_BACK_OFF_HSDPA_BAND10 MPR_BACK_OFF_HSDPA_BAND10_SetDefault
#define MPR_BACK_OFF_HSDPA_BAND11 MPR_BACK_OFF_HSDPA_BAND11_SetDefault
#define MPR_BACK_OFF_HSDPA_BAND19 MPR_BACK_OFF_HSDPA_BAND19_SetDefault
#define MPR_BACK_OFF_HSUPA_BAND1  MPR_BACK_OFF_HSUPA_BAND1_SetDefault
#define MPR_BACK_OFF_HSUPA_BAND2  MPR_BACK_OFF_HSUPA_BAND2_SetDefault
#define MPR_BACK_OFF_HSUPA_BAND3  MPR_BACK_OFF_HSUPA_BAND3_SetDefault
#define MPR_BACK_OFF_HSUPA_BAND4  MPR_BACK_OFF_HSUPA_BAND4_SetDefault
#define MPR_BACK_OFF_HSUPA_BAND5  MPR_BACK_OFF_HSUPA_BAND5_SetDefault
#define MPR_BACK_OFF_HSUPA_BAND6  MPR_BACK_OFF_HSUPA_BAND6_SetDefault
#define MPR_BACK_OFF_HSUPA_BAND8  MPR_BACK_OFF_HSUPA_BAND8_SetDefault
#define MPR_BACK_OFF_HSUPA_BAND9  MPR_BACK_OFF_HSUPA_BAND9_SetDefault
#define MPR_BACK_OFF_HSUPA_BAND10 MPR_BACK_OFF_HSUPA_BAND10_SetDefault
#define MPR_BACK_OFF_HSUPA_BAND11 MPR_BACK_OFF_HSUPA_BAND11_SetDefault
#define MPR_BACK_OFF_HSUPA_BAND19 MPR_BACK_OFF_HSUPA_BAND19_SetDefault

#if IS_3G_MPR_EXTEND_SUPPORT

#define MPR_R6_B1_SUB_1   MPR_BACK_OFF_HSUPA_BAND1_SUB_1_SetDefault
#define MPR_R6_B2_SUB_1   MPR_BACK_OFF_HSUPA_BAND2_SUB_1_SetDefault
#define MPR_R6_B3_SUB_1   MPR_BACK_OFF_HSUPA_BAND3_SUB_1_SetDefault
#define MPR_R6_B4_SUB_1   MPR_BACK_OFF_HSUPA_BAND4_SUB_1_SetDefault
#define MPR_R6_B5_SUB_1   MPR_BACK_OFF_HSUPA_BAND5_SUB_1_SetDefault
#define MPR_R6_B6_SUB_1   MPR_BACK_OFF_HSUPA_BAND6_SUB_1_SetDefault
#define MPR_R6_B7_SUB_1   MPR_BACK_OFF_HSUPA_BAND7_SUB_1_SetDefault
#define MPR_R6_B8_SUB_1   MPR_BACK_OFF_HSUPA_BAND8_SUB_1_SetDefault
#define MPR_R6_B9_SUB_1   MPR_BACK_OFF_HSUPA_BAND9_SUB_1_SetDefault
#define MPR_R6_B10_SUB_1  MPR_BACK_OFF_HSUPA_BAND10_SUB_1_SetDefault
#define MPR_R6_B11_SUB_1  MPR_BACK_OFF_HSUPA_BAND11_SUB_1_SetDefault
#define MPR_R6_B12_SUB_1  MPR_BACK_OFF_HSUPA_BAND12_SUB_1_SetDefault
#define MPR_R6_B13_SUB_1  MPR_BACK_OFF_HSUPA_BAND13_SUB_1_SetDefault
#define MPR_R6_B14_SUB_1  MPR_BACK_OFF_HSUPA_BAND14_SUB_1_SetDefault
#define MPR_R6_B15_SUB_1  MPR_BACK_OFF_HSUPA_BAND15_SUB_1_SetDefault
#define MPR_R6_B16_SUB_1  MPR_BACK_OFF_HSUPA_BAND16_SUB_1_SetDefault
#define MPR_R6_B17_SUB_1  MPR_BACK_OFF_HSUPA_BAND17_SUB_1_SetDefault
#define MPR_R6_B18_SUB_1  MPR_BACK_OFF_HSUPA_BAND18_SUB_1_SetDefault
#define MPR_R6_B19_SUB_1  MPR_BACK_OFF_HSUPA_BAND19_SUB_1_SetDefault
#define MPR_R6_B20_SUB_1  MPR_BACK_OFF_HSUPA_BAND20_SUB_1_SetDefault

#define MPR_R6_B1_SUB_2   MPR_BACK_OFF_HSUPA_BAND1_SUB_2_SetDefault
#define MPR_R6_B2_SUB_2   MPR_BACK_OFF_HSUPA_BAND2_SUB_2_SetDefault
#define MPR_R6_B3_SUB_2   MPR_BACK_OFF_HSUPA_BAND3_SUB_2_SetDefault
#define MPR_R6_B4_SUB_2   MPR_BACK_OFF_HSUPA_BAND4_SUB_2_SetDefault
#define MPR_R6_B5_SUB_2   MPR_BACK_OFF_HSUPA_BAND5_SUB_2_SetDefault
#define MPR_R6_B6_SUB_2   MPR_BACK_OFF_HSUPA_BAND6_SUB_2_SetDefault
#define MPR_R6_B7_SUB_2   MPR_BACK_OFF_HSUPA_BAND7_SUB_2_SetDefault
#define MPR_R6_B8_SUB_2   MPR_BACK_OFF_HSUPA_BAND8_SUB_2_SetDefault
#define MPR_R6_B9_SUB_2   MPR_BACK_OFF_HSUPA_BAND9_SUB_2_SetDefault
#define MPR_R6_B10_SUB_2  MPR_BACK_OFF_HSUPA_BAND10_SUB_2_SetDefault
#define MPR_R6_B11_SUB_2  MPR_BACK_OFF_HSUPA_BAND11_SUB_2_SetDefault
#define MPR_R6_B12_SUB_2  MPR_BACK_OFF_HSUPA_BAND12_SUB_2_SetDefault
#define MPR_R6_B13_SUB_2  MPR_BACK_OFF_HSUPA_BAND13_SUB_2_SetDefault
#define MPR_R6_B14_SUB_2  MPR_BACK_OFF_HSUPA_BAND14_SUB_2_SetDefault
#define MPR_R6_B15_SUB_2  MPR_BACK_OFF_HSUPA_BAND15_SUB_2_SetDefault
#define MPR_R6_B16_SUB_2  MPR_BACK_OFF_HSUPA_BAND16_SUB_2_SetDefault
#define MPR_R6_B17_SUB_2  MPR_BACK_OFF_HSUPA_BAND17_SUB_2_SetDefault
#define MPR_R6_B18_SUB_2  MPR_BACK_OFF_HSUPA_BAND18_SUB_2_SetDefault
#define MPR_R6_B19_SUB_2  MPR_BACK_OFF_HSUPA_BAND19_SUB_2_SetDefault
#define MPR_R6_B20_SUB_2  MPR_BACK_OFF_HSUPA_BAND20_SUB_2_SetDefault

#define MPR_R6_B1_SUB_3   MPR_BACK_OFF_HSUPA_BAND1_SUB_3_SetDefault
#define MPR_R6_B2_SUB_3   MPR_BACK_OFF_HSUPA_BAND2_SUB_3_SetDefault
#define MPR_R6_B3_SUB_3   MPR_BACK_OFF_HSUPA_BAND3_SUB_3_SetDefault
#define MPR_R6_B4_SUB_3   MPR_BACK_OFF_HSUPA_BAND4_SUB_3_SetDefault
#define MPR_R6_B5_SUB_3   MPR_BACK_OFF_HSUPA_BAND5_SUB_3_SetDefault
#define MPR_R6_B6_SUB_3   MPR_BACK_OFF_HSUPA_BAND6_SUB_3_SetDefault
#define MPR_R6_B7_SUB_3   MPR_BACK_OFF_HSUPA_BAND7_SUB_3_SetDefault
#define MPR_R6_B8_SUB_3   MPR_BACK_OFF_HSUPA_BAND8_SUB_3_SetDefault
#define MPR_R6_B9_SUB_3   MPR_BACK_OFF_HSUPA_BAND9_SUB_3_SetDefault
#define MPR_R6_B10_SUB_3  MPR_BACK_OFF_HSUPA_BAND10_SUB_3_SetDefault
#define MPR_R6_B11_SUB_3  MPR_BACK_OFF_HSUPA_BAND11_SUB_3_SetDefault
#define MPR_R6_B12_SUB_3  MPR_BACK_OFF_HSUPA_BAND12_SUB_3_SetDefault
#define MPR_R6_B13_SUB_3  MPR_BACK_OFF_HSUPA_BAND13_SUB_3_SetDefault
#define MPR_R6_B14_SUB_3  MPR_BACK_OFF_HSUPA_BAND14_SUB_3_SetDefault
#define MPR_R6_B15_SUB_3  MPR_BACK_OFF_HSUPA_BAND15_SUB_3_SetDefault
#define MPR_R6_B16_SUB_3  MPR_BACK_OFF_HSUPA_BAND16_SUB_3_SetDefault
#define MPR_R6_B17_SUB_3  MPR_BACK_OFF_HSUPA_BAND17_SUB_3_SetDefault
#define MPR_R6_B18_SUB_3  MPR_BACK_OFF_HSUPA_BAND18_SUB_3_SetDefault
#define MPR_R6_B19_SUB_3  MPR_BACK_OFF_HSUPA_BAND19_SUB_3_SetDefault
#define MPR_R6_B20_SUB_3  MPR_BACK_OFF_HSUPA_BAND20_SUB_3_SetDefault

#define MPR_R6_B1_SUB_4   MPR_BACK_OFF_HSUPA_BAND1_SUB_4_SetDefault
#define MPR_R6_B2_SUB_4   MPR_BACK_OFF_HSUPA_BAND2_SUB_4_SetDefault
#define MPR_R6_B3_SUB_4   MPR_BACK_OFF_HSUPA_BAND3_SUB_4_SetDefault
#define MPR_R6_B4_SUB_4   MPR_BACK_OFF_HSUPA_BAND4_SUB_4_SetDefault
#define MPR_R6_B5_SUB_4   MPR_BACK_OFF_HSUPA_BAND5_SUB_4_SetDefault
#define MPR_R6_B6_SUB_4   MPR_BACK_OFF_HSUPA_BAND6_SUB_4_SetDefault
#define MPR_R6_B7_SUB_4   MPR_BACK_OFF_HSUPA_BAND7_SUB_4_SetDefault
#define MPR_R6_B8_SUB_4   MPR_BACK_OFF_HSUPA_BAND8_SUB_4_SetDefault
#define MPR_R6_B9_SUB_4   MPR_BACK_OFF_HSUPA_BAND9_SUB_4_SetDefault
#define MPR_R6_B10_SUB_4  MPR_BACK_OFF_HSUPA_BAND10_SUB_4_SetDefault
#define MPR_R6_B11_SUB_4  MPR_BACK_OFF_HSUPA_BAND11_SUB_4_SetDefault
#define MPR_R6_B12_SUB_4  MPR_BACK_OFF_HSUPA_BAND12_SUB_4_SetDefault
#define MPR_R6_B13_SUB_4  MPR_BACK_OFF_HSUPA_BAND13_SUB_4_SetDefault
#define MPR_R6_B14_SUB_4  MPR_BACK_OFF_HSUPA_BAND14_SUB_4_SetDefault
#define MPR_R6_B15_SUB_4  MPR_BACK_OFF_HSUPA_BAND15_SUB_4_SetDefault
#define MPR_R6_B16_SUB_4  MPR_BACK_OFF_HSUPA_BAND16_SUB_4_SetDefault
#define MPR_R6_B17_SUB_4  MPR_BACK_OFF_HSUPA_BAND17_SUB_4_SetDefault
#define MPR_R6_B18_SUB_4  MPR_BACK_OFF_HSUPA_BAND18_SUB_4_SetDefault
#define MPR_R6_B19_SUB_4  MPR_BACK_OFF_HSUPA_BAND19_SUB_4_SetDefault
#define MPR_R6_B20_SUB_4  MPR_BACK_OFF_HSUPA_BAND20_SUB_4_SetDefault

#define MPR_R6_B1_SUB_5   MPR_BACK_OFF_HSUPA_BAND1_SUB_5_SetDefault
#define MPR_R6_B2_SUB_5   MPR_BACK_OFF_HSUPA_BAND2_SUB_5_SetDefault
#define MPR_R6_B3_SUB_5   MPR_BACK_OFF_HSUPA_BAND3_SUB_5_SetDefault
#define MPR_R6_B4_SUB_5   MPR_BACK_OFF_HSUPA_BAND4_SUB_5_SetDefault
#define MPR_R6_B5_SUB_5   MPR_BACK_OFF_HSUPA_BAND5_SUB_5_SetDefault
#define MPR_R6_B6_SUB_5   MPR_BACK_OFF_HSUPA_BAND6_SUB_5_SetDefault
#define MPR_R6_B7_SUB_5   MPR_BACK_OFF_HSUPA_BAND7_SUB_5_SetDefault
#define MPR_R6_B8_SUB_5   MPR_BACK_OFF_HSUPA_BAND8_SUB_5_SetDefault
#define MPR_R6_B9_SUB_5   MPR_BACK_OFF_HSUPA_BAND9_SUB_5_SetDefault
#define MPR_R6_B10_SUB_5  MPR_BACK_OFF_HSUPA_BAND10_SUB_5_SetDefault
#define MPR_R6_B11_SUB_5  MPR_BACK_OFF_HSUPA_BAND11_SUB_5_SetDefault
#define MPR_R6_B12_SUB_5  MPR_BACK_OFF_HSUPA_BAND12_SUB_5_SetDefault
#define MPR_R6_B13_SUB_5  MPR_BACK_OFF_HSUPA_BAND13_SUB_5_SetDefault
#define MPR_R6_B14_SUB_5  MPR_BACK_OFF_HSUPA_BAND14_SUB_5_SetDefault
#define MPR_R6_B15_SUB_5  MPR_BACK_OFF_HSUPA_BAND15_SUB_5_SetDefault
#define MPR_R6_B16_SUB_5  MPR_BACK_OFF_HSUPA_BAND16_SUB_5_SetDefault
#define MPR_R6_B17_SUB_5  MPR_BACK_OFF_HSUPA_BAND17_SUB_5_SetDefault
#define MPR_R6_B18_SUB_5  MPR_BACK_OFF_HSUPA_BAND18_SUB_5_SetDefault
#define MPR_R6_B19_SUB_5  MPR_BACK_OFF_HSUPA_BAND19_SUB_5_SetDefault
#define MPR_R6_B20_SUB_5  MPR_BACK_OFF_HSUPA_BAND20_SUB_5_SetDefault

#define R6_MPR_SUB_EN     R6_MPR_SUB_EN_SetDefault
#endif



#ifndef  TC_PR1_2
   #define  TC_PR1_2    TC_PR1
#endif
#ifndef  TC_PR2_2
   #define  TC_PR2_2    TC_PR2
#endif
#ifndef  TC_PR2B_2
   #define  TC_PR2B_2   TC_PR2B
#endif
#ifndef  TC_PR3_2
   #define  TC_PR3_2    TC_PR3
#endif
#ifndef  TC_PR3A_2
   #define  TC_PR3A_2   TC_PR3A
#endif

//For Dual Cell
#ifndef TC_DC_SR1
   #define TC_DC_SR1    TC_SR2
#endif
#ifndef TC_DC_SR2
   #define TC_DC_SR2    TC_SR2B
#endif
#ifndef TC_RXD_SR1
   #define TC_RXD_SR1   TC_SR2B
#endif
#ifndef TC_RXD_SR3
   #define TC_RXD_SR3   TC_SR3
#endif

#ifndef  TC_PR3A
   #define  TC_PR3A    TC_PR3+20
#endif
#ifndef  TC_PT3A
   #define  TC_PT3A    TC_PT3+20
#endif
#ifndef  TC_PR2B
   #define  TC_PR2B    TC_PR2+20
#endif
#ifndef  TC_PT2B
   #define  TC_PT2B    TC_PT2+20
#endif
#ifndef  TC_SR2
   #define  TC_SR2    TC_SR1
#endif
#ifndef  TC_SR2B
   #define  TC_SR2B    TC_SR2
#endif
#ifndef  TC_ST2
   #define  TC_ST2    TC_ST1
#endif
#ifndef  TC_ST2B
   #define  TC_ST2B    TC_ST2
#endif
#ifndef  TC_ST2C
   #define  TC_ST2C    TC_ST2B
#endif

#if(IS_3G_RX_POWER_OFFSET_SUPPORT)
#define RPO_3G_ENABLE            RPO_3G_ENABLE_SetDefault
#define RPO_3G_META_ENABLE       RPO_3G_META_ENABLE_SetDefault
#endif

#if (IS_3G_MIPI_SUPPORT)
#define IS_3G_MIPI_ENABLE    IS_3G_MIPI_ENABLE_SetDefault
#define MIPI_OFFSET          MIPI_OFFSET_SetDefault
#endif

#if IS_URF_PCORE
#define RX_BAND_INDICATOR_0 RX_BAND_INDICATOR_0_SetDefault
#define RX_BAND_INDICATOR_1 RX_BAND_INDICATOR_1_SetDefault
#define RX_BAND_INDICATOR_2 RX_BAND_INDICATOR_2_SetDefault
#define RX_BAND_INDICATOR_3 RX_BAND_INDICATOR_3_SetDefault
#define RX_BAND_INDICATOR_4 RX_BAND_INDICATOR_4_SetDefault
#endif

#ifndef BAND5_AND_BAND6_INDICATOR_SetDefault
#define BAND5_AND_BAND6_INDICATOR_SetDefault 0
#endif
#define BAND5_AND_BAND6_INDICATOR BAND5_AND_BAND6_INDICATOR_SetDefault

#if IS_3G_B5_AND_B19_INDICATOR_SUPPORT
#ifndef BAND5_AND_BAND19_INDICATOR_SetDefault
#define BAND5_AND_BAND19_INDICATOR_SetDefault 0
#endif
#ifndef DISABLE_B5_INDICATOR_SetDefault
#define DISABLE_B5_INDICATOR 0
#endif
#define BAND5_AND_BAND19_INDICATOR BAND5_AND_BAND19_INDICATOR_SetDefault
#define DISABLE_B5_INDICATOR DISABLE_B5_INDICATOR_SetDefault
#endif

/*---------------------------------------------------------------------------*/

#endif /* End of #ifndef UL1D_RF_COMMON_H */

