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
 *   mml1_rf_calgor_def.h
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   The definition of MML1 RF calibration
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#ifndef MML1_RF_CALGOR_DEF_H
#define MML1_RF_CALGOR_DEF_H

#include "kal_general_types.h"


/*******************************************************************************
 * #define
 ******************************************************************************/
#if defined(MT6177M_RF)                     
   #define MMRFC_TX_RCF_NOMINAL_VALUE        (17)
   #define MMRFC_DET_PGA_NOMINAL_VALUE       (181)
#elif defined(MT6177L_RF)
   #define MMRFC_TX_RCF_NOMINAL_VALUE        (16)  //DE originally confirmed 13, but PG writes 16
#elif defined(MT6179_RF)
   #define MMRFC_TX_RCF_NOMINAL_VALUE        (16)
#elif defined(MT6176_RF)
   #define MMRFC_TX_RCF_NOMINAL_VALUE        (22)
#else
   #error "No Valid RF Chip was defined"
#endif

#if defined(MT6177M_RF)
   #define MMRFC_TX_LPF_NOMINAL_VALUE        (26)
#elif defined(MT6177L_RF)
   #define MMRFC_TX_LPF_NOMINAL_VALUE        (170)  //DE originally confirmed 155, but PG writes 172.
#elif defined(MT6179_RF)
   #define MMRFC_TX_LPF_NOMINAL_VALUE        (170)
#elif defined(MT6176_RF)
   #define MMRFC_TX_LPF_NOMINAL_VALUE        (170)
#else
   #error "No Valid RF Chip was defined"
#endif

//Note: TPC related macros need to be careful to be aligned with macros defined in DSP
#define MMRFC_DET_EQLPF_TAP_NUM              (11)  ///< maximum numbers of filter taps for DET EQLPF comp.
#define MMRFC_DET_MAX_TONE_PAIRS             (13)  ///< maximum numbers of test tone pairs for DET
#define MMRFC_TXGA_MAX_TONE_PAIRS            (5)   ///< maximum numbers of test tone pairs for TXGA
#define MMRFC_TXFD_MAX_TONE_PAIRS            (4)   ///< maximum numbers of test tone pairs for TXGA
#define MMRFC_TXGA_MAX_TONE_PAIRS_PADDED     (2)   ///< maximum numbers of padded tone pairs for TXGA
#define MMRFC_TXGA_MAX_TONES                 (MMRFC_TXGA_MAX_TONE_PAIRS*2)         ///< maximum numbers of test tones for TXGA
#define MMRFC_TXGA_MAX_TONES_PADDED          (MMRFC_TXGA_MAX_TONE_PAIRS_PADDED*2)  ///< maximum numbers of padded tones for TXGA
#define MMRFC_FILT_TAPS_NUM                  (7)   ///< maximum numbers of compensation filter taps
#define MMRFC_RXIRR_FILT_TAPS_NUM            (5)   ///< maximum numbers of compensation filter taps for RXIRR
#define MMRFC_TXFDAD_FILT_TAPS_NUM           (13)  ///< maximum numbers of compensation filter taps for TX FDAD
#define MMRFC_TXGA_FILT_TAPS_NUM             (5)   ///< maximum numbers of compensation filter taps for TXGA 

#define MMRFC_TX_LEAKAGE_MEASURE_TONES       (20)  //maximum measure points for Tx Leakage measurement

#endif
