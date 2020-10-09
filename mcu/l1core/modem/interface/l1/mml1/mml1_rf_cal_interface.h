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
 *   mml1_rf_cal_interface.h
 *
 * Project:
 * --------
 *   TK6291
 *
 * Description:
 * ------------
 *   Multi-Mode Multi-RAT Layer1 RF Calibration interface to each RAT
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
 *
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
 *
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
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
 *
 * removed!
 * removed!
 * removed!
 *
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
 *
 *
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef  _MML1_RF_CAL_INTERFACE_H_
#define  _MML1_RF_CAL_INTERFACE_H_

/*===============================================================================*/
#include "kal_general_types.h"
#include "mml1_rf_cal_def.h"
#include "mmrf_cc_global.h"
#include "mmrf_common_cid.h"
#include "mml1_rf_global.h"
#include "mml1_rf_interface.h"
#include "mml1_rf_calgor_interface.h"
#include "mml1_rf_cwreg_seq_gen.h" /* for CW structure definition RF_CW_T */
#include "mml1_rf_public.h"

/*===============================================================================*/
/*        Define for Multi-Mode RF Calibration                                   */
/*===============================================================================*/
extern const kal_int16 DET_GAIN_TABLE[MMRFC_DET_GAIN_STEPS][2];

/*Feature Compile Option*/
#define MMRFC_G14B_WORKAROUND                (1)
#define IS_MMRFC_TX_FDIQ_LS_ALGOR            (1)
#define IS_MMRFC_RESULT_ASSERT_CHECK         (0)
#define IS_TXK_MEAS_AFIFO_WORKAROUND         (0) ///<[WHQA0026052] SW workaround to keep AFIFO(between DETADC and CIC) enable during two TXFDIQ/TXIQ test tones
#define IS_MMRFC_INTERNAL_DEBUG_ENABLE       (0)
#define IS_DL_TRIGGER_CAL_ENABLE             (0)   
#define IS_DL_TRIGGER_CAL_W_SHM_UPDATE_ENABLE (1)
#if IS_MML1_RF_MT6176
   #define MMRFC_EXTRA_GAIN_NUM                 (1) //EXTRA Gain setting for G25DNL
   #define IRR_DROOPING_EST_SUPPORT             (0)
   #define IS_QDL_LPM_WORKAROUND_ENABLE         (0)
   #define IS_QDL_MAN_TRIG_ENABLE               (0)
#elif IS_MML1_RF_MT6177L
   #define MMRFC_EXTRA_GAIN_NUM                 (3) //EXTRA Gain setting for G25DNL,G26DNL2,G27DNL2
   #define IRR_DROOPING_EST_SUPPORT             (1)
   #define IS_QDL_LPM_WORKAROUND_ENABLE         (0) //MT6179 E2 and MT6177L E1 should be already fixed
   #define IS_QDL_MAN_TRIG_ENABLE               (0)
#elif IS_MML1_RF_MT6177M
   #define MMRFC_EXTRA_GAIN_NUM                 (1) //EXTRA Gain setting for G25DNL
   #define IRR_DROOPING_EST_SUPPORT             (0)
   #define IS_QDL_LPM_WORKAROUND_ENABLE         (0)
   #define IS_QDL_MAN_TRIG_ENABLE               (0)

#else
#error "No Valid RF Chip was defined" //For further RF chip, need to check if workaround is also needed or not
#endif

#define IS_3G_FDD_USE_MMRFC_RESULT_STRUCTURE  (1)

#define IS_MMRFC_RESULT_CHECK_SUPPORT        (1)

#if (defined(L1_SIM) || IS_MML1_FPGA_MT6293)
   #define IS_MMRFC_RESULT_TRACE_CHECK_SUPPORT  (0)
#else
   #define IS_MMRFC_RESULT_TRACE_CHECK_SUPPORT  (1)  
#endif

#if IS_MMRFC_INTERNAL_DEBUG_ENABLE
// Enable Analyse tool trace feature (Tracing wil happen when item tracing is enabled separately)
   #define MMRFC_ANALYSE_TOOL_TRACE     (1)
// flag enables item for measurement tracing
// recal supported: if use recal, only one item at time
   #define MMRFC_ANALYSE_RX_IRR_ENABLE  (1)
   #define MMRFC_ANALYSE_DET_ENABLE     (1)
   #define MMRFC_ANALYSE_RX_IIP2_ENABLE (0)
   #define MMRFC_ANALYSE_TX_FDIQ_ENABLE (1)
   #define MMRFC_ANALYSE_TX_FIIQ_ENABLE (1)
   #define MMRFC_ANALYSE_TX_GA_ENABLE   (1)
   #define MMRFC_ANALYSE_RX_DC_ENABLE   (1)
   #define MMRFC_ANALYSE_TX_DC_ENABLE   (1)
   #define MMRFC_ANALYSE_DET_DC_ENABLE  (1)
   #define MMRFC_ANALYSE_RX_TX_LEAKAGE_ENABLE (1)
   #define MMRFC_ANALYSE_TX_LO_ENABLE   (1)
   #define MMRFC_ANALYSE_STX_DCC_ENABLE (1)
   
#else
// Enable Analyse tool trace feature (Tracing wil happen when item tracing is enabled separately)
   #define MMRFC_ANALYSE_TOOL_TRACE     (0)
// flag enables item for measurement tracing
// recal supported: if use recal, only one item at time
   #define MMRFC_ANALYSE_RX_IRR_ENABLE  (0)
   #define MMRFC_ANALYSE_DET_ENABLE     (0)
   #define MMRFC_ANALYSE_RX_IIP2_ENABLE (0)
   #define MMRFC_ANALYSE_TX_FDIQ_ENABLE (0)
   #define MMRFC_ANALYSE_TX_FIIQ_ENABLE (0)
   #define MMRFC_ANALYSE_TX_GA_ENABLE   (0)
   #define MMRFC_ANALYSE_RX_DC_ENABLE   (0)
   #define MMRFC_ANALYSE_TX_DC_ENABLE   (0)
   #define MMRFC_ANALYSE_DET_DC_ENABLE  (0)
   #define MMRFC_ANALYSE_RX_TX_LEAKAGE_ENABLE (0)
   #define MMRFC_ANALYSE_TX_LO_ENABLE   (0)
   #define MMRFC_ANALYSE_STX_DCC_ENABLE (0)

#endif


#define MMRFC_ANALYZED_BY_RFTOOL_ENABLE (0)
#if MMRFC_ANALYZED_BY_RFTOOL_ENABLE
#undef MMRFC_ANALYSE_TOOL_TRACE
#define MMRFC_ANALYSE_TOOL_TRACE        (1)
#endif

#define MMRFC_TX_ABB_GAIN_MODE_NUM             (2)  ///< ABB 0dB/4dB mode

#define MMRFC_NCO_PHI_NUM            (2)
#define MMRFC_DET_DC_COMP_SET        (15)
#define MMRFC_DET_FIIQ_COMP_SET      (2)
#define MMRFC_DET_FDIQ_COMP_SET      (1)

#define MMRFC_RXMS_IQK_MEM_NUM       (3)  ///< IQK measurement engine output
#define MMRFC_RXMS_RXK_MEM_NUM       (4)  ///< RXK measurement engine output

/** Bitmap for nco_phi_bmp to indicate which NCO PHI should be updated*/
#define MMRFC_NCO_PHI_NONE           (0x0000)
#define MMRFC_NCO_PHI_0              (0x0001)
#define MMRFC_NCO_PHI_1              (0x0002)
#define MMRFC_NCO_PHI_01             (0x0003)
#define MMRFC_NCO_PHI_2              (0x0004)
#define MMRFC_NCO_PHI_3              (0x0008)

/** Bitmap to indicate which compensation set should be applied on DET DFE */
/**   0: DET_DC_I_0/DET_DC_Q_0/DET_FIIQ_GAIN_0/DET_FIIQ_PHASE_0            */
/**   1: DET_DC_I_1/DET_DC_Q_1/DET_FIIQ_GAIN_1/DET_FIIQ_PHASE_1            */
#define MMRFC_DET_COMP_SEL_MEAS01_SET0  (0x0000) //for measurement sel 0/1
#define MMRFC_DET_COMP_SEL_MEAS01_SET1  (0x0001) //for measurement sel 0/1
#define MMRFC_DET_COMP_SEL_MEAS23_SET0  (0x0000) //for measurement sel 2/3
#define MMRFC_DET_COMP_SEL_MEAS23_SET1  (0x0002) //for measurement sel 2/3
#define MMRFC_DET_COMP_SEL_MEAS45_SET0  (0x0000) //for measurement sel 4/5
#define MMRFC_DET_COMP_SEL_MEAS45_SET1  (0x0004) //for measurement sel 4/5
#define MMRFC_DET_COMP_SEL_MEAS67_SET0  (0x0000) //for measurement sel 6/7
#define MMRFC_DET_COMP_SEL_MEAS67_SET1  (0x0008) //for measurement sel 6/7
#define MMRFC_DET_COMP_SEL_MEAS89_SET0  (0x0000) //for measurement sel 8/9
#define MMRFC_DET_COMP_SEL_MEAS89_SET1  (0x0010) //for measurement sel 8/9

/** Maximum support band number among RATs,
  * should be dominated by LTE band support nunber */
#define MMRFC_XL1_MAX_SUPPORT_BAND_NUM       (25)

/** Define calibration item list bitmap according to order */
#define MMRFC_POC_CAL_ORDER_LO_DET_CDCOC      /*(0x00001)*/(0x00001)

/**redundent definition, should be remove after sync with all RAT*/
#define MMRFC_POC_CAL_ORDER_DET_FD_IQ         /*(0x00002)*/(MMRFC_POC_CAL_ORDER_LO_DET_CDCOC     <<1)
#define MMRFC_POC_CAL_ORDER_DET_FI_IQ         /*(0x00002)*/(MMRFC_POC_CAL_ORDER_LO_DET_CDCOC     <<1)
#define MMRFC_POC_CAL_ORDER_DET_FINE_DC_FWD   /*(0x00002)*/(MMRFC_POC_CAL_ORDER_LO_DET_CDCOC     <<1)
#define MMRFC_POC_CAL_ORDER_DET_FINE_DC_REV   /*(0x00002)*/(MMRFC_POC_CAL_ORDER_LO_DET_CDCOC     <<1)
#define MMRFC_POC_CAL_ORDER_DET_DNL           /*(0x00002)*/(MMRFC_POC_CAL_ORDER_LO_DET_CDCOC     <<1)

#define MMRFC_POC_CAL_ORDER_TX_RCCAL          /*(0x00002)*/(MMRFC_POC_CAL_ORDER_LO_DET_CDCOC     <<1)
#define MMRFC_POC_CAL_ORDER_DET_IQ_DC_DNL     /*(0x00004)*/(MMRFC_POC_CAL_ORDER_TX_RCCAL         <<1)
#define MMRFC_POC_CAL_ORDER_DET_PCB           /*(0x00008)*/(MMRFC_POC_CAL_ORDER_DET_IQ_DC_DNL    <<1)
#define MMRFC_POC_CAL_ORDER_TX_PRE_CAP_TUNING /*(0x00010)*/(MMRFC_POC_CAL_ORDER_DET_PCB          <<1)
#define MMRFC_POC_CAL_ORDER_TX_FD_IQ          /*(0x00020)*/(MMRFC_POC_CAL_ORDER_TX_PRE_CAP_TUNING<<1)
#define MMRFC_POC_CAL_ORDER_TX_FI_IQ_DC       /*(0x00040)*/(MMRFC_POC_CAL_ORDER_TX_FD_IQ         <<1)
#define MMRFC_POC_CAL_ORDER_TX_GA             /*(0x00080)*/(MMRFC_POC_CAL_ORDER_TX_FI_IQ_DC      <<1)
#define MMRFC_POC_CAL_ORDER_TX_DNL            /*(0x00100)*/(MMRFC_POC_CAL_ORDER_TX_GA            <<1)
#define MMRFC_POC_CAL_ORDER_TX_CAP_TUNING     /*(0x00200)*/(MMRFC_POC_CAL_ORDER_TX_DNL           <<1)
#define MMRFC_POC_CAL_ORDER_TX_PGA_AB_GAIN    /*(0x00400)*/(MMRFC_POC_CAL_ORDER_TX_CAP_TUNING    <<1)
#define MMRFC_POC_CAL_ORDER_TX_PGA_AB_PHASE   /*(0x00800)*/(MMRFC_POC_CAL_ORDER_TX_PGA_AB_GAIN   <<1)

//All RX CAL item must be After TX CAL item   
#define MMRFC_POC_CAL_ORDER_RX_DCOC           /*(0x01000)*/(MMRFC_POC_CAL_ORDER_TX_PGA_AB_PHASE  <<1)
#define MMRFC_POC_CAL_ORDER_RX_PCB            /*(0x02000)*/(MMRFC_POC_CAL_ORDER_RX_DCOC          <<1)
#define MMRFC_POC_CAL_ORDER_RX_IRR            /*(0x04000)*/(MMRFC_POC_CAL_ORDER_RX_PCB           <<1)
#define MMRFC_POC_CAL_ORDER_RX_IIP2           /*(0x08000)*/(MMRFC_POC_CAL_ORDER_RX_IRR           <<1)
#define MMRFC_POC_CAL_ORDER_RX_TX_LEAKAGE     /*(0x20000)*/(MMRFC_POC_CAL_ORDER_STX_DCC          <<1)


//STX DCC Cal                                 
#define MMRFC_POC_CAL_ORDER_STX_DCC           /*(0x10000)*/(MMRFC_POC_CAL_ORDER_RX_IIP2          <<1)

#define MMRFC_POC_CAL_ORDER_TX_ITEMS_ALL     (MMRFC_POC_CAL_ORDER_LO_DET_CDCOC      |\
                                              MMRFC_POC_CAL_ORDER_DET_IQ_DC_DNL     |\
                                              MMRFC_POC_CAL_ORDER_TX_RCCAL          |\
                                              MMRFC_POC_CAL_ORDER_TX_PRE_CAP_TUNING |\
                                              MMRFC_POC_CAL_ORDER_TX_FD_IQ          |\
                                              MMRFC_POC_CAL_ORDER_TX_FI_IQ_DC       |\
                                              MMRFC_POC_CAL_ORDER_TX_GA             |\
                                              MMRFC_POC_CAL_ORDER_TX_CAP_TUNING     |\
                                              MMRFC_POC_CAL_ORDER_TX_DNL            |\
                                              MMRFC_POC_CAL_ORDER_TX_PGA_AB_GAIN    |\
                                              MMRFC_POC_CAL_ORDER_TX_PGA_AB_PHASE   |\
                                              MMRFC_POC_CAL_ORDER_STX_DCC           |\
                                              MMRFC_POC_CAL_ORDER_DET_PCB)

#define POC_DCOC_I_0 (-32)  //for CW335 setting ,6bit = 6'b100000 ,set -32 for calculation use
#define POC_DCOC_Q_0 (-32)  //for CW335 setting ,6bit = 6'b100000 ,set -32 for calculation use


/** RF BSI CW POR */
#define CW1_POR                                        M_RF_CW_PACK(1, 0x00000)

/** CW1: TOP Mode Control */
#define CW1_MODE_BIT                                   (16)                                       //MODE[3:0]: 0001: Sleep
#define CW1_MODE_LEN                                   ( 4)                                       //           0010: Calibration
#define CW1_MODE_MASK                                  M_RF_CW_MASK(CW1_MODE_LEN, CW1_MODE_BIT)   //           0100: Warm-up;     1000: Burst
#define CW1_RAT_BIT                                    (12)                                       //RAT[3:0]:  0000: 2G
#define CW1_RAT_LEN                                    ( 4)                                       //           0001: FDD; 0010: TDD
#define CW1_RAT_MASK                                   M_RF_CW_MASK(CW1_RAT_LEN, CW1_RAT_BIT)     //           0011: CDMA
#define CW1_TRX_BIT                                    ( 9)                                       //TRX[2:0]:  001: RX
#define CW1_TRX_LEN                                    ( 3)                                       //           010: TX
#define CW1_TRX_MASK                                   M_RF_CW_MASK(CW1_TRX_LEN, CW1_TRX_BIT)     //           011: TRX
#define CW1_STD_BIT                                    ( 6)                                       //STD[2:0]:  STD[0]: 0: 2G TX GMSK;       1: 2G TX EDGE
#define CW1_STD_LEN                                    ( 3)                                       //           STD[1]: 0: 3G mode (for SX); 1: 4G mode (for SX)
#define CW1_STD_MASK                                   M_RF_CW_MASK(CW1_STD_LEN, CW1_STD_BIT)     //           STD[2]: X: Reserved
#define CW1_SRXON_BIT                                  ( 4)                                       //[0]: SRX2_ON
#define CW1_SRXON_LEN                                  ( 2)                                       //[1]: SRX1_ON
#define CW1_SRXON_MASK                                 M_RF_CW_MASK(CW1_SRXON_LEN, CW1_SRXON_BIT)
#define CW1_PCCEN_BIT                                  ( 2)                                       //[0]: SRX2_PCC_EN
#define CW1_PCCEN_LEN                                  ( 2)                                       //[1]: SRX1_PCC_EN
#define CW1_PCCEN_MASK                                 M_RF_CW_MASK(CW1_PCCEN_LEN, CW1_PCCEN_BIT)
#define CW1_TUNNELEN_BIT                               ( 1)                                       //TUNNEL_EN[0]: 0x1 :TUNNEL_EN
#define CW1_TUNNELEN_LEN                               ( 1)                                       //
#define CW1_TUNNELEN_MASK                              M_RF_CW_MASK(CW1_TUNNELEN_LEN, CW1_TUNNELEN_BIT)

#if IS_MML1_RF_MT6177L
#define M_RF_CW1(mODE, tRX, sRXON, pCCEN, rAT, sTD, tUNNEL)  \
                 (     M_RF_CW_FIELD(CW1_RAT,      rAT   ) | \
                       M_RF_CW_FIELD(CW1_MODE,     mODE  ) | \
                       M_RF_CW_FIELD(CW1_TRX,      tRX   ) | \
                       M_RF_CW_FIELD(CW1_STD,      sTD   ) | \
                       M_RF_CW_FIELD(CW1_SRXON,    sRXON ) | \
                       M_RF_CW_FIELD(CW1_PCCEN,    pCCEN ) | \
                       M_RF_CW_FIELD(CW1_TUNNELEN, tUNNEL))

#elif IS_MML1_RF_MT6177M
#define M_RF_CW1(mODE, tRX, sRXON, pCCEN, rAT, sTD, tUNNEL)      \
                 (     M_RF_CW_FIELD(CW1_RAT,   rAT  ) | \
                       M_RF_CW_FIELD(CW1_MODE,  mODE ) | \
                       M_RF_CW_FIELD(CW1_TRX,   tRX  ) | \
                       M_RF_CW_FIELD(CW1_STD,   sTD  ) | \
                       M_RF_CW_FIELD(CW1_SRXON, sRXON) | \
                       M_RF_CW_FIELD(CW1_PCCEN, pCCEN) )
#else
   #error "No Valid RF Chip was defined"
#endif

#define M_RF_CW_FIELD(fIELD, vALUE)                    ((vALUE << fIELD##_BIT) & (fIELD##_MASK))
#define M_RF_CW_MASK(lEN, bIT)                         (((1<<lEN)-1) << bIT)

#define MMRFC_DFE_RX_PATH_NUM                     (2)

/* Gerardo: Follow the same convention as 
in lrfinterface.h for SRX/STX related defines below */

/* 92: use of RF_SRX_NUM and RF_MAX_SRX_NUM to be unified */
#define MMRFC_RF_SRX_NUM                          (2)          ///< number of RF SRX control

#define MMRFC_RF_SRX_IDX_SRX1                     (0)
#define MMRFC_RF_SRX_IDX_SRX2                     (1)
#define MMRFC_RF_SRX_IDX_SRX3                     (2)
#define MMRFC_RF_SRX_IDX_SRX4                     (3)
#define MMRFC_RF_SRX_IDX_TUNL                     (0xF)

//RF CC operation
#define   MMRFC_RF_CC_IDX_PCC                        (0)
#define   MMRFC_RF_CC_IDX_SCC                        (1)
#define   MMRFC_RF_CC_IDX_CC0                        (0)
#define   MMRFC_RF_CC_IDX_CC1                        (1)

#define   PLK_CC_NUM                           (2) 

#define MML1_MAX_SUPPORT_BAND_NUM               MMPOC_XL1_BAND_NUM_BAND_NUM


// for RXDFE strobe idx use
#define RX_POC_IQK_TRIG_IDX_PATH0 (0)
#define RX_POC_IQK_TRIG_IDX_PATH1 (1)
#define RX_POC_RXK_TRIG_IDX_PATH0 (0)
#define RX_POC_RXK_TRIG_IDX_PATH1 (4)
#define RX_POC_PLK_TRIG_IDX_PATH0 (0)
#define RX_POC_PLK_TRIG_IDX_PATH1 (1)

#define MMPOC_IIP2CAL_SAMPLE_PERIOD   (8)


/* Temp disable/enable some DFE API calling to avoid unsync during bring up*/
#define IS_MMRFC_DFE_DRV_ENABLE (1)

//6179 has only one Detector path to use
#define DET_PATH_SEL_NUM      (1)

#define MMRFC_DET_GAIN_STEPS_DET_CAL                 (17)//15

#define MMRFC_TX_DC_COMP_FC_MODE_NUM            (2)
#define MMRFC_TX_DC_COMP_PGA_SLICE_SET_NUM      (8)
#define MMRFC_TX_IQ_COMP_FC_MODE_NUM            (2)
#define MMRFC_TX_IQ_COMP_PGA_SLICE_SET_NUM      (8)

#define MMRFC_ASYMM_COMP_PGA_SLICE_SET_NUM      (3)
#define MMRFC_ASYMM_COMP_GROUP_REG_NUM          (MMRFC_ASYMM_COMP_PGA_SLICE_SET_NUM)
#define MMRFC_ASYMM_COMP_COEFF_NUM              (5)
#define MMRFC_ASYMM_COMP_COEFF_REG_NUM          (5)

#define MMRFC_FREQ_DEP_COMP_FC_MODE_NUM         (2)
#define MMRFC_FREQ_DEP_COMP_PGA_SLICE_SET_NUM   (8)
#define MMRFC_FREQ_DEP_COMP_GROUP_REG_NUM       (MMRFC_FREQ_DEP_COMP_FC_MODE_NUM*MMRFC_FREQ_DEP_COMP_PGA_SLICE_SET_NUM)
#define MMRFC_FREQ_DEP_COMP_COEFF_NUM           (7)
#define MMRFC_FREQ_DEP_COMP_COEFF_REG_NUM       (3)

#define MMRFC_FDAD_COMP_PGA_SLICE_SET_NUM       (8)
#define MMRFC_FDAD_COMP_GROUP_REG_NUM           (MMRFC_FDAD_COMP_PGA_SLICE_SET_NUM)
#define MMRFC_FDAD_COMP_COEFF_NUM               (13)
#define MMRFC_FDAD_COMP_COEFF_REG_NUM           (13)


#define MML1_MIPI_MAGIC_NUMBER               (0xFE)
#define MML1_MIPI_MAGIC_NUMBER_MASK          (0xFE000000)
#define MML1_MIPI_MAGIC_NUMBER_OFFSET        (24)
#define MML1_MIPI_PORT_MASK                  (0xF)   //4'b1111 for RAT mipi port check
#define MML1_MIPI_RW_MSK                     (0x1F00)
#define MML1_MIPI_RW_OFFSET                  (8)
#define MML1_MIPI_NORMAL_W_LENGTH            (0x15)

#define TX_DNL_CAL_GAIN_STEP_TONE_NUM        (2)


/** MIPI CW **/
#define MMRFC_MAX_MIPI_PAON_CW_NUMBER_PER_BAND  (48)//12*2->24*2
#define MMRFC_MAX_MIPI_PAOFF_CW_NUMBER_PER_BAND (16)//2*2->4*2

/** Mask to extract a buffer type from a buffer handle, which also contains
  * a reference field. The buffer type identifies the size, structure and
  * logical use of the buffer */
#define MMPOC_BUFFER_HANDLE_TYPE_MASK              (0xFFE0)

/** Bit position of the type field in buffer handle
  * Use to extract buffer types */
#define MMPOC_BUFFER_HANDLE_TYPE_SHIFT             (5)

/** Magic number to ensuring that pool buffer is completed filled by buffer server
  * This number must be assigned to the last member of the pool buffer being allocated */
#define MMPOC_SHARED_POOL_BUFFER_MAGIC_MARKER_VAL  (0xF00D)

#define DET_FE_MID_GAIN_NOMINAL   448   //s6.5, Middle FE Gain: 14dB
#define DET_CAL_FE_MID_GAIN_IDX   6     //D6 for DET calibration with FE middle gain
#define DET_CAL_FE_LOW_GAIN_IDX   7     //D7 for DET calibration with FE low gain

/** define MMRFC TX/RX TOUE as EL1D ROUTE MAX because LTE use the max dimension of route **/
#define MMRFC_TX_COMP_ROUTE_MAX              (4)       // 4
#define MMRFC_RX_IRR_COMP_ROUTE_MAX          (10)   //10 for MT6179 , 6 for MT6176
#define MMRFC_RX_DC_COMP_ROUTE_MAX           (10)    //Set maximum number as same as RXIRR
#define MMRFC_RX_IIP2_COMP_ROUTE_MAX         (50)  //50 for MT6179 ,11 for MT6176

/** RF VCO and Divider definition */
//RX VCO Selection
#define MMPOC_VCO1                 (1)
#define MMPOC_VCO2                 (2)
#define MMPOC_VCO3                 (3)
#define MMPOC_VCO4                 (4)
#define MMPOC_VCO5                 (5)
#define MMPOC_VCO6                 (6)
#define MMPOC_VCO7                 (7)
#define MMPOC_VCO8                 (8)
#define MMPOC_VCO31                (31)
#define MMPOC_VCO32                (32)
#define MMPOC_VCO_NULL             (0xFF)
//Rx Divider
#define MMPOC_DIV2                 (2)
#define MMPOC_DIV4                 (4)
#define MMPOC_DIV6                 (6)
#define MMPOC_DIV8                 (8)
#define MMPOC_DIV10                (10)
#define MMPOC_DIV3                 (3)
#define MMPOC_DIV_NULL             (0xFF)

//TX DCO Selection
#define MMPOC_DCOH                 (11)
#define MMPOC_DCOL                 (12)
#define MMPOC_DCO_NULL             (0xFF)

#define FREQ_THRESHOLD_1400MHz   14000 // 1400Mhz
#define FREQ_THRESHOLD_1800MHz   18000 // 1800Mhz
#define FREQ_THRESHOLD_2000MHz   20000 // 2000Mhz
#define FREQ_THRESHOLD_2300MHz   23000 // 2300Mhz
#define FREQ_THRESHOLD_2400MHz   24000 // 2400Mhz

#define DET_PCB_TONE_NUM           (20)

//TX PGA
#define MMPOC_TX_MODDRV_AB_SEL_A        (0)
#define MMPOC_TX_MODDRV_AB_SEL_B        (1)
#define MMPOC_TX_MODDRV_A_MAX_IDX       (20)
#define MMPOC_TX_MODDRV_B_MIN_IDX       (12)

#define MMPOC_TX_PGA_GAIN               (15)
#define MMPOC_CW706_TX_PGA_GAIN_shift   (15)
#define MMPOC_CW706_TX_DPD_MODE_shift   (19)

#define MMPOC_PRE_CFG_TX_GAIN_IDX       (TXG_12a)
#define MMPOC_PRE_CFG_DET_GAIN_IDX      (DETG_10)

//TTG
#define MMPOC_CW50_TTG_FRAC_TX_SHIFT    (3)   // frac[22:3] >> CW50[19:0]
#define MMPOC_CW50_TTG_FRAC_SHIFT       (3)   // frac[22:3] >> CW50[19:0]
#define MMPOC_CW52_TTG_FRAC_RX_SHIFT    (3)   // frac[22:3] >> CW52[19:0]
#define MMPOC_CW51_TTG_FRAC_MASK        (0x7) // frac[22:0] >> frac[2:0]
#define MMPOC_NUM_OF_TTG_SETTING        (2)

//TODO: create CW1 table, need not run-time determine 
/** CW1 RF Mode bit field definition */
#define MMPOC_RF_MODE_SLEEP       (0x1)  ///< 0b 0001: Sleep mode
#define MMPOC_RF_MODE_CAL         (0x2)  ///< 0b 0010: Calibration mode
#define MMPOC_RF_MODE_WARMUP      (0x4)  ///< 0b 0100: Warm-up mode
#define MMPOC_RF_MODE_BURST       (0x8)  ///< 0b 1000: Burst mode

#define MMPOC_RF_MODE_RAT_2G      (0x0)  ///< 0b 0000: 2G
#define MMPOC_RF_MODE_RAT_FDD     (0x1)  ///< 0b 0001: FDD
#define MMPOC_RF_MODE_RAT_TDD     (0x2)  ///< 0b 0010: TDD
#define MMPOC_RF_MODE_RAT_C2K     (0x3)  ///< 0b 0011: CDMA2000 (C2K)

#define MMPOC_RF_MODE_TRX_RX      (0x1)  ///< 0b  001: RX
#define MMPOC_RF_MODE_TRX_TX      (0x2)  ///< 0b  010: TX
#define MMPOC_RF_MODE_TRX_TRX     (0x3)  ///< 0b  011: TRX

///< STD[0] 0: 2G TX GMSK, 1: TX EDGE 
///< STD[1] 0: 3G mode, 1: 4G mode
///< STD[2] x: reserved
#define MMPOC_RF_MODE_STD_2G_TX_GMSK    (0x0)
#define MMPOC_RF_MODE_STD_2G_TX_EDGE    (0x1)
#define MMPOC_RF_MODE_STD_3G            (0x0)
#define MMPOC_RF_MODE_STD_4G            (0x2)


#define MMPOC_RF_MODE_SRXON_SRX1  (0x2)  ///< 0b  10: SRX1 ON
#define MMPOC_RF_MODE_SRXON_SRX2  (0x1)  ///< 0b  01: SRX2 ON
#define MMPOC_RF_MODE_SRXON_NONE  (0x0)  ///< 0b  00: For FDD Tx usage

#define MMPOC_RF_MODE_PCCEN_SRX1  (0x2)  ///< 0b  10: SRX1 is PCC
#define MMPOC_RF_MODE_PCCEN_SRX2  (0x1)  ///< 0b  01: SRX2 is PCC
#define MMPOC_RF_MODE_PCCEN_NONE  (0x0)  ///< 0b  00: Not PCC

#define MMPOC_RF_MODE_TUNNEL_OFF  (0x0)  ///< 
#define MMPOC_RF_MODE_TUNNEL_ON   (0x1)  ///< 

//MT6293 RXDFE
/*===============================================================================*/
#define MMRXDFE_FDPM_TAPS_NUM_MAX           (5)
#define MMRXDFE_RFEQ_TAPS_NUM_MAX           (14)
/*===============================================================================*/


/*===============================================================================*/
/*        Structures for Multi-Mode RF Calibration                               */
/*===============================================================================*/

//MT6293 RXDFE
/*===============================================================================*/
typedef enum
{
   MMRXDFE_ANT_BITMAP_NONE = 0x0,
   MMRXDFE_ANT_BITMAP_0    = 0x1,
   MMRXDFE_ANT_BITMAP_1    = 0x2,
   MMRXDFE_ANT_BITMAP_0_1  = 0x3,

} MMRXDFE_ANT_BITMAP_E;

typedef enum
{
   MMRXDFE_P_PATH_BITMAP_NONE = 0x0,
   MMRXDFE_P_PATH_BITMAP_0    = 0x1,
   MMRXDFE_P_PATH_BITMAP_1    = 0x2,
   MMRXDFE_P_PATH_BITMAP_0_1  = 0x3,

} MMRXDFE_P_PATH_BITMAP_E;

typedef enum
{
   MMRXDFE_P_PATH_SEL_0,
   MMRXDFE_P_PATH_SEL_1,
   MMRXDFE_P_PATH_SEL_NUM,
} MMRXDFE_P_PATH_SEL_E;

typedef enum
{
   MMRXDFE_C_PATH_BITMAP_NONE = 0x0,
   MMRXDFE_C_PATH_BITMAP_0    = 0x1,
   MMRXDFE_C_PATH_BITMAP_1    = 0x2,
   MMRXDFE_C_PATH_BITMAP_0_1  = 0x3,

} MMRXDFE_C_PATH_BITMAP_E;

typedef enum
{
   MMRXDFE_C_PATH_SEL_0,
   MMRXDFE_C_PATH_SEL_1,
   MMRXDFE_C_PATH_SEL_NUM,
} MMRXDFE_C_PATH_SEL_E;

typedef enum
{
   MMRXDFE_MEAS_TYPE_SEL_WB_FC   = 0,
   MMRXDFE_MEAS_TYPE_SEL_WB      = 1,
   MMRXDFE_MEAS_TYPE_SEL_WB_FILT = 2,
   MMRXDFE_MEAS_TYPE_SEL_WB_PN   = 3,
   MMRXDFE_MEAS_TYPE_SEL_IB      = 4,
   MMRXDFE_MEAS_TYPE_SEL_DC      = 5,
   MMRXDFE_MEAS_TYPE_SEL_IQC     = 6,
   MMRXDFE_MEAS_TYPE_SEL_IIP2    = 7,
 
} MMRXDFE_MEAS_TYPE_SEL_E;

typedef struct
{
   MMRXDFE_ANT_BITMAP_E     a_bitmap;
   MMRXDFE_P_PATH_BITMAP_E  p_bitmap;
   MMRXDFE_C_PATH_BITMAP_E  c_bitmap;
} MMRXDFE_A_P_C_BITMAP_T;


typedef struct
{
   kal_int32    filter_taps[MMRXDFE_FDPM_TAPS_NUM_MAX]; ///< s1.9
} MMRFC_RX_IRR_FDIQ_COMP_T;

typedef struct
{
   kal_int32    gain_mismatch;  ///< s-3.10
   kal_int32    phase_mismatch; ///< s-4.10
} MMRFC_RX_IRR_FIIQ_COMP_T;

typedef struct
{
   kal_int32    filter_taps[MMRXDFE_RFEQ_TAPS_NUM_MAX]; ///< s8
} MMRFC_RX_RFEQ_COMP_T;

typedef struct
{
   kal_bool                 en;
   kal_uint8                tap_sel;   ///< 0: 1 tap, 1: 2 taps
   MMRFC_RX_IRR_FDIQ_COMP_T fdiq_comp;
} MMRXDFE_FDPM_COMP_T;

typedef struct
{
   kal_bool             en;
   kal_uint8            cr_sel;     ///< 0: C4R8, 1: C5R7, 2: C6R6, 3: NA
   kal_uint8            tap_sel;    ///< 0: 9 taps, 1: 14 taps
   MMRFC_RX_RFEQ_COMP_T rfeq_comp;
} MMRXDFE_RFEQ_COMP_T;

typedef struct
{
   kal_bool                 en;
   MMRFC_RX_IRR_FIIQ_COMP_T fiiq_comp;
} MMRXDFE_IQC_COMP_T;

typedef struct
{
   MMRXDFE_FDPM_COMP_T   fdpm_comp;
   MMRXDFE_RFEQ_COMP_T   rfeq_comp;
   MMRXDFE_IQC_COMP_T    iqc_comp;
   
} MMRXDFE_COMP_T;

typedef struct
{
   kal_bool     en;
   kal_int32    nco_phase_step; ///< s0.22
} MMRXDFE_NCO_CONFIG_T;

typedef struct
{
   kal_int32   ib_power[MMRXDFE_C_PATH_SEL_NUM][MMRFC_ANT_NUM]; 
} MMRFC_RX_IB_POWER_T;



/*===============================================================================*/


/** Expands the macro as the action ID
  * Defines the MMPOC_ACTION_DEF macro as the action IDs, this allows the
  * enumeration to be constructed with the ones recognized by all RATs */
#define MMPOC_ACTION_DEF(eNTRYpOINT, aCTIONiD)   aCTIONiD,
typedef enum
{
   MMPOC_ACTION_ID_NULL = 0,
   #include "mml1_rf_calpocseq_action.h"
   MMPOC_ACTION_ID_CNTS,

}MMPOC_ACTION_ID_E;
#undef MMPOC_ACTION_DEF

/** Enumeration of event queue index, should allign the order of MML1_RF_RAT_T enumeration */
typedef enum
{
   MMPOC_EVENT_QUEUE_IDX_2G    = 0,
   MMPOC_EVENT_QUEUE_IDX_3GFDD = 1,
   MMPOC_EVENT_QUEUE_IDX_3GTDD = 2,
   MMPOC_EVENT_QUEUE_IDX_LTE   = 3,
   MMPOC_EVENT_QUEUE_IDX_C2K   = 4,
   MMPOC_EVENT_QUEUE_IDX_CNT      ,

}MMPOC_EVENT_QUEUE_IDX_E;

/** Expands the macro as the buffer type ID (consecutive value)
  * Defines the MMPOC_BUFFER_DEF macro as the buffer type ID to
  * allow the index enumeration to be constructed */
#define MMPOC_BUFFER_DEF(bUFiD, tYPE, pORT, mIPIcWtYPE)     MMPOC_BUFFER_IDX_##bUFiD,

/** Enumeration to count how many buffer types are defined
  * (given by the MMPOC_BUFFER_TYPE_NUM_OF), it is also used to
  * help create the values in the enumeration */
typedef enum
{
   #include "mml1_rf_calpocseq_buffer.h"
   MMPOC_BUFFER_IDX_NUM_OF,
   MMPOC_BUFFER_TYPE_NUM_OF = MMPOC_BUFFER_IDX_NUM_OF

}MMPOC_BUFFER_IDX_E;
#undef MMPOC_BUFFER_DEF

/** Expands the macro as the buffer type ID shifted left to the
  * position of the type field in buffer handle
  * Defines the MMPOC_BUFFER_DEF macro as the buffer type ID shifted
  * left to the position of the type field in buffer handle, this allows
  * the enumeration to be constructed with the actual buffer type values */
#define MMPOC_BUFFER_DEF(bUFiD, tYPE, pORT, mIPIcWtYPE)     bUFiD = (MMPOC_BUFFER_IDX_##bUFiD << MMPOC_BUFFER_HANDLE_TYPE_SHIFT),

/** Enumeration to count how many buffer types are defined
  * (given by the MMPOC_BUFFER_TYPE_NUM_OF), it is also used to
  * help create the values in the enumeration */
typedef enum
{
   #include "mml1_rf_calpocseq_buffer.h"
   MMPOC_BUFFER_END,

}MMPOC_BUFFER_TYPE_E;
#undef MMPOC_BUFFER_DEF

typedef enum{ 
    DETG_0,
    DETG_1,
    DETG_2,
    DETG_3,
    DETG_4,
    DETG_5,
    DETG_6 =6,
    DETG_7,
    DETG_8,
    DETG_9,
    DETG_10,
    DETG_11,
    DETG_12,
    DETG_13,
    DETG_14,
    DETG_15,
    DETG_16,       
    DET_G_MAX = MMRFC_DET_GAIN_STEPS_DET_CAL,
}MMRFC_DET_G_IDX;

typedef enum{ 
   MMPOC_DETK_FIIQ_FDIQ_DNL = DETG_6,
   MMPOC_DETK_FIIQ_DNL      = DETG_7,
}MMRFC_DET_CAL_ITEM_CFG_E;

typedef enum{ 
   MMPOC_PreCongfig_CAL,  
   MMPOC_PreCal_CAL,     
   MMPOC_STX_DCC,
   MMPOC_DETIQDC_DNL_CAL, 
   MMPOC_DET_PCB_CAL,
   MMPOC_TXRC_CAL,
   MMPOC_TX_PRECAP_CAL,
   MMPOC_TXFD_CAL,        
   MMPOC_TXIQ_CAL,        
   MMPOC_TXDC_CAL,        
   MMPOC_TXGA_CAL,         
   MMPOC_TXCAP_CAL,       
   MMPOC_TX_DNL_CAL,      
   MMPOC_TX_GAIN_CAL,       
   MMPOC_TX_PHASE_CAL,    
   //Rx Part
   MMPOC_RXDC_CAL,        
   MMPOC_RXIRR_IQ_CAL,    
   MMPOC_RXIRR_FD_CAL,    
   MMPOC_RXIIP2_CAL,      
   MMPOC_RX_TX_LEAKAGE_CAL,
   MMPOC_ITEM_END,  
}MMRFC_TX_CAL_ITEM_CFG_E;

typedef enum
{
   TX_FDIQ         = 0x0001,
   TX_FIIQ         = 0x0002,
   TX_DC           = 0x0004,
   TX_ASYM         = 0x0008,
   DET_FDIQ        = 0x0010,
   DET_FIIQ        = 0x0020,
   DET_DC          = 0x0040,
   DET_PCB         = 0x0800,
   //DET_AD_BB_LPBK  = 0x0080, /*Compensate anti-droop with TIA low gain which has larger BW for TXRC/TCFDIQ cal (BB loopback path)*/
   //DET_AD_RF_LPBK  = 0x0100, /*DET anti-droop compensation with selected TIA mode and PGA BW configuration (RF loopback path)*/
   TX_FIIQ_ABB_4DB = 0x0200, /*ReCal use: compensate TX FIIQ ABB 4DB mode(for DPD use)*/
   TX_DC_ABB_4DB   = 0x0400, /*ReCal use: compensate TX DC   ABB 4DB mode(for DPD use)*/
   RX_DC           = 0x1000,
   RX_DIGITAL_DC   = 0x2000,
   RX_IRR          = 0x4000
} RF_COMP_INDEX_E;

typedef enum
{
   DET_FE_GAIN_L,
   DET_FE_GAIN_M,
   DET_FE_GAIN_H,
   DET_FE_GAIN_NUM,
} DET_FE_GAIN_E;

typedef enum
{
   TX_LPF_CAL = 0,
   TX_RCF_CAL = 1,
   TX_LPF_RCF_CAL_NUM = 2,
}MMRFC_LPF_RCF_CAL_TYPE_E;

typedef enum
{
   MMRFC_DETK_ITEM_DC,     ///< DETK DC
   MMRFC_DETK_ITEM_IQ_DNL, ///< DETK FI_FD_DNL
   MMRFC_DETK_ITEM_FD_CCA, ///< DETK FD_CCA
   MMRFC_DETK_ITEM_PCB,    ///< DETK PCB   
   MMRFC_DETK_ITEM_NUM,    ///< DETK NUM
} MMRFC_DETK_ITEM_E;

typedef enum{ 
   MIPI_PA_ASM_ON = 0,
   MIPI_PA_OFF,
   MIPI_ASM_OFF,
   MIPI_CTRL_NUM  = 3,
}MMRFC_MIPI_DATA_CTRL_E;

typedef enum{ 
   BPI_PA_ASM_ON = 0,
   BPI_PA_OFF,
   BPI_ASM_OFF,
   BPI_RX_ON,
   BPI_RX_OFF,
   BPI_CTRL_NUM  = 5,
}MMRFC_BPI_DATA_CTRL_E;

#if IS_MML1_RF_MT6177L

   typedef enum{ 
      LO_CDCOC_K_TRIG,
      LO_CDCOC_K_DEFAULT,
   }MMRFC_LO_CDCOC_CTRL;

   typedef enum{ 
      TXG_00a=0,  
      TXG_01a,  
      TXG_02a,  
      TXG_03a,  
      TXG_04a,  
      TXG_05a,  
      TXG_06a,  
      TXG_07a,  
      TXG_08a,  
      TXG_09a,  
      TXG_10a,  
      TXG_11a,  
      TXG_12a,  
      TXG_13a,  
      TXG_14a,  
      TXG_15a,  
      TXG_16a,  
      TXG_17a,  
      TXG_18a,  
      TXG_19a,  
      TXG_20a,  
      TXG_12b=21,  
      TXG_13b,  
      TXG_14b,  
      TXG_15b,  
      TXG_16b,  
      TXG_17b,  
      TXG_18b,  
      TXG_19b,  
      TXG_20b,  
      TXG_21b,  
      TXG_22,  
      TXG_23,  
      TXG_24, 
      TXG_25, 
      TXG_25DNL=35, //for GAIN STEP on G25/G26
      TXG_26DNL1,   //for GAIN STEP on G25/G26
      TXG_26DNL2,   //for GAIN STEP on G26/G27
      TXG_27DNL1,   //for GAIN STEP on G26/G27
      TXG_27DNL2,   //for GAIN STEP on G27/G28
      TXG_28DNL,    //for GAIN STEP on G27/G28   
      TXG_MAX
   }MMRFC_TX_G_IDX;

#elif IS_MML1_RF_MT6177M
   typedef enum{ 
      LO_CDCOC_K_TRIG,
      LO_K_TRIG,
      CDCOC_K_TRIG,   
      LO_CDCOC_K_DEFAULT,
   }MMRFC_LO_CDCOC_CTRL;


   typedef enum{ 
      TXG_00a=0,  
      TXG_01a,  
      TXG_02a,  
      TXG_03a,  
      TXG_04a,  
      TXG_05a,  
      TXG_06a,  
      TXG_07a,  
      TXG_08a,  
      TXG_09a,  
      TXG_10a,  
      TXG_11a,  
      TXG_12a,  
      TXG_13a,  
      TXG_14a,  
      TXG_15a,  
      TXG_16a,  
      TXG_17a,  
      TXG_18a,  
      TXG_19a,  
      TXG_20a,  
      TXG_21a=21,    
      TXG_22,  
      TXG_23,  
      TXG_24, 
      TXG_25, 
      TXG_26,
      TXG_27DNL,
      TXG_28DNL,
      TXG_29DNL,
      TXG_CAL,
      TXG_MAX
   }MMRFC_TX_G_IDX;
#else
   #error "No Valid RF Chip was defined"
#endif

typedef enum
{
   TX,
   RX,
} MMRF_DUP_MOD;

typedef enum{ 
   Enable,
   Disable,
}MMRFC_CTRL;

typedef enum
{
   MMRFC_TXK_ADDA_DISABLE        = 0x0000,
   MMRFC_TXK_ADDA_DETADC_EN      = 0x0001,
   MMRFC_TXK_ADDA_TXDAC_EN       = 0x0002,
   MMRFC_TXK_ADDA_ENABLE         = 0x0003,
   MMRFC_TXK_ADDA_INVALID        = 0x0004,
} MMRFC_TXK_ADDA_BITMAP_E;

typedef enum
{
   MMRFC_ANT_NONE                = 0x0000,
   MMRFC_ANT_0                   = 0x0001,
   MMRFC_ANT_1                   = 0x0002,
   MMRFC_ANT_01                  = 0x0003,
   MMRFC_ANT_INVALID             = 0x0004,
} MMRFC_ANT_BITMAP_E;

typedef enum
{
   MMRFC_PATH_1 = 0x0000,
   MMRFC_PATH_2 = 0x0001,
   MMRFC_PATH_3 = 0x0002,
   MMRFC_PATH_4 = 0x0003,
   MMRFC_PATH_INVALID = 0x0004,
} MMRFC_PATH_BITMAP_E;

typedef enum
{
   MMRFC_BB_PATH_NONE = 0x0000,
   MMRFC_BB_PATH_1 = 0x0001,
   MMRFC_BB_PATH_2 = 0x0002,
   MMRFC_BB_PATH_3 = 0x0003,
   MMRFC_BB_PATH_4 = 0x0004,
   MMRFC_BB_PATH_INVALID = 0x0005,
} MMRFC_BB_PATH_BITMAP_E;


/* Noted : RX_HPM should be 0 and RX_LPM should be 1 , RX IRR CAL use this as loop seq. */
typedef enum
{
   MMRFC_RX_HPM = 0x0000,
   MMRFC_RX_LPM = 0x0001,   
} MMRFC_POWER_MODE_E;

/* ReUse MMRFC_POWER_MODE_E for RX IRR CAL loop */
typedef enum
{
   MMRFC_RXIRR_CAL_HPM = MMRFC_RX_HPM,
   MMRFC_RXIRR_CAL_LPM = MMRFC_RX_LPM,
   MMRFC_RXIRR_CAL_LIF = 0x0002,
} MMRFC_RXIRR_CAL_MODE_E;

typedef enum
{
   MMRFC_RXK_PHASE,
   MMRFC_RXK_GAIN,
   MMRFC_RXK_DC,
   MMRFC_DETK_PHASE,
   MMRFC_DETK_GAIN,
   MMRFC_DETK_DC,
   MMRFC_TXK_PHASE,
   MMRFC_TXK_GAIN,
   MMRFC_TXK_DC,
   MMRFC_POC_ITEM_MAX
} MMRFC_POC_ITEM_E;


typedef enum
{
   MMRFC_IMM_DETK_TRG,     ///< DET IQDCDNL
   MMRFC_IMM_TXK_TRG,      ///< TX FIIQ
   MMRFC_IMM_TXFDIQK_TRG,  ///< TX FDIQ
   MMRFC_IMM_TXASYMK_TRG,  ///< TX GA
   MMRFC_IMM_TXRCK_TRG,    ///< Tone Power Measurement (TX RC, TX DNL, PGA Cap Tuning, PGA Gain Step)
   MMRFC_IMM_TXPDK_TRG,    ///< PGA Phase Step
   MMRFC_IMM_ETDMA_TRG,
   MMRFC_IMM_TDE_FAT_TRG,
   MMRFC_IMM_DPD_FAT_TRG,
   MMRFC_IMM_CIM3_FAT_TRG,
} MMRFC_TXK_ITEM_IMM_E; //POC

typedef enum
{
   MMRFC_DET_TRG                  = 0x0001,    
   MMRFC_TXK_1TONE_0_TRG          = 0x0002,     
   MMRFC_TXK_1TONE_1_TRG          = 0x0004, 
   MMRFC_TXK_2TONE_PH_ALIGN_TRG   = 0x0008,  
   MMRFC_TXK_2TONE_PH_N_ALIGN_TRG = 0x0018,  
   MMRFC_DPD_FAT_TRG              = 0x0020,
   MMRFC_ET_FAT_TRG               = 0x0040,
} MMRFC_TXK_SW_TRIG_E; //POC

typedef enum
{
   MMRFC_PBC_DETK,
   MMRFC_PBC_TXIQK,
   MMRFC_PBC_IIP2K,
} MMRFC_TXK_ITEM_PBC_E; //Pre-Burst Cal

typedef enum
{
   MMRFC_SW_TXK_TRG,     ///< TX FIIQ
   MMRFC_SW_TXFDIQK_TRG, ///< TX FDIQ
   MMRFC_SW_TXASYMK_TRG, ///< TX GA
   MMRFC_SW_TXRCK_TRG,   ///< Tone Power Measurement (TX RC, TX DNL, PGA Cap Tuning, PGA Gain Step)
   MMRFC_SW_TXPDK_TRG,   ///< PGA Phase Step
} MMRFC_TXK_ITEM_SW_MODE_E; //SW Mode

typedef enum
{
   MMRFC_TXK_FIIQ_IQ,    ///< TXK FIIQ IQ
   MMRFC_TXK_FIIQ_DC,    ///< TXK FIIQ DC
   MMRFC_TXK_FIIQ_NUM,   ///< TXK FIIQ NUM
} MMRFC_TXK_FIIQ_ITEM_E;

typedef enum
{
   MMPOC_SUB_BAND_SWITCH,    
   MMPOC_CENTRAL_BAND_SWITCH,    
} MMRFC_BAND_SWITCH_SEL_E;

typedef enum
{
   MMPOC_XL1_LOW_BAND         = 0,    
   MMPOC_XL1_MID_BAND         = 1,    
   MMPOC_XL1_HIGH_BAND        = 2,
   MMPOC_XL1_ULTRA_HIGH_BAND  = 3,
   MMPOC_XL1_BAND_CATEGORY_NUM= 4,
   MMPOC_XL1_NOT_DEFINE_BAND,
} MMRFC_XL1_BAND_DEF_E;


typedef enum
{
   MMPOC_XL1_LOW_BAND_TABLE1         = 0,   
   MMPOC_XL1_LOW_BAND_TABLE2         = 1,  
   MMPOC_XL1_MID_BAND_TABLE1         = 2,  
   MMPOC_XL1_MID_BAND_TABLE2         = 3, 
   MMPOC_XL1_HIGH_BAND_TABLE1        = 4,
   MMPOC_XL1_HIGH_BAND_TABLE2        = 5,
   MMPOC_XL1_ULTRA_HIGH_BAND_TABLE1  = 6,
   MMPOC_XL1_ULTRA_HIGH_BAND_TABLE2  = 7,
   MMPOC_XL1_BAND_TABLE_CATEGORY_NUM = 8,
   MMPOC_XL1_NOT_DEFINE_BAND_TABLE,
} MMRFC_XL1_BAND_TABLE_DEF_E;

typedef enum
{
                               /* MEM0  MEM1  MEM2 */
   MMRFC_RXMS_IQK_MUL_MASK_0,  /*  I^2     I    IQ */
   MMRFC_RXMS_IQK_MUL_MASK_1,  /*  I^2    IQ     I */
   MMRFC_RXMS_IQK_MUL_MASK_2,  /*   IQ   I^2     I */
   MMRFC_RXMS_IQK_MUL_MASK_3,  /*    I   I^2    IQ */
   MMRFC_RXMS_IQK_MUL_MASK_4,  /*   IQ     I   I^2 */
   MMRFC_RXMS_IQK_MUL_MASK_5,  /*    I    IQ   I^2 */
   MMRFC_RXMS_IQK_MUL_MASK_NUM
} MMRFC_RXMS_IQK_MUL_MASK_E;

/** Enumeration of band number for each RAT to report its band support capability */
typedef enum
{
   MMPOC_XL1_BAND_NUM_BAND_NONE,

   MMPOC_XL1_BAND_NUM_BAND_1,
   MMPOC_XL1_BAND_NUM_BAND_2,
   MMPOC_XL1_BAND_NUM_BAND_3,
   MMPOC_XL1_BAND_NUM_BAND_4,
   MMPOC_XL1_BAND_NUM_BAND_5,
   MMPOC_XL1_BAND_NUM_BAND_6,
   MMPOC_XL1_BAND_NUM_BAND_7,
   MMPOC_XL1_BAND_NUM_BAND_8,
   MMPOC_XL1_BAND_NUM_BAND_9,
   MMPOC_XL1_BAND_NUM_BAND_10,
   MMPOC_XL1_BAND_NUM_BAND_11,
   MMPOC_XL1_BAND_NUM_BAND_12,
   MMPOC_XL1_BAND_NUM_BAND_13,
   MMPOC_XL1_BAND_NUM_BAND_14,
   MMPOC_XL1_BAND_NUM_BAND_15,
   MMPOC_XL1_BAND_NUM_BAND_16,
   MMPOC_XL1_BAND_NUM_BAND_17,
   MMPOC_XL1_BAND_NUM_BAND_18,
   MMPOC_XL1_BAND_NUM_BAND_19,
   MMPOC_XL1_BAND_NUM_BAND_20,
   MMPOC_XL1_BAND_NUM_BAND_21,
   MMPOC_XL1_BAND_NUM_BAND_22,
   MMPOC_XL1_BAND_NUM_BAND_23,
   MMPOC_XL1_BAND_NUM_BAND_24,
   MMPOC_XL1_BAND_NUM_BAND_25,
   MMPOC_XL1_BAND_NUM_BAND_26,
   MMPOC_XL1_BAND_NUM_BAND_27,
   MMPOC_XL1_BAND_NUM_BAND_28,
   MMPOC_XL1_BAND_NUM_BAND_29,
   MMPOC_XL1_BAND_NUM_BAND_30,
   MMPOC_XL1_BAND_NUM_BAND_31,
   MMPOC_XL1_BAND_NUM_BAND_32,
   MMPOC_XL1_BAND_NUM_BAND_33,
   MMPOC_XL1_BAND_NUM_BAND_34,
   MMPOC_XL1_BAND_NUM_BAND_35,
   MMPOC_XL1_BAND_NUM_BAND_36,
   MMPOC_XL1_BAND_NUM_BAND_37,
   MMPOC_XL1_BAND_NUM_BAND_38,
   MMPOC_XL1_BAND_NUM_BAND_39,
   MMPOC_XL1_BAND_NUM_BAND_40,
   MMPOC_XL1_BAND_NUM_BAND_41,
   MMPOC_XL1_BAND_NUM_BAND_42,
   MMPOC_XL1_BAND_NUM_BAND_43,
   MMPOC_XL1_BAND_NUM_BAND_44,
   MMPOC_XL1_BAND_NUM_BAND_45,
   MMPOC_XL1_BAND_NUM_BAND_46,
   MMPOC_XL1_BAND_NUM_BAND_47,
   MMPOC_XL1_BAND_NUM_BAND_48,
   MMPOC_XL1_BAND_NUM_BAND_65,
   MMPOC_XL1_BAND_NUM_BAND_66,
   MMPOC_XL1_BAND_NUM_BAND_67,
   MMPOC_XL1_BAND_NUM_BAND_68,
   MMPOC_XL1_BAND_NUM_BAND_69,
   MMPOC_XL1_BAND_NUM_BAND_70,
   MMPOC_XL1_BAND_NUM_BAND_71,
   MMPOC_XL1_BAND_NUM_BAND_252,
   MMPOC_XL1_BAND_NUM_BAND_253,
   MMPOC_XL1_BAND_NUM_BAND_254,
   MMPOC_XL1_BAND_NUM_BAND_255,
   MMPOC_XL1_BAND_NUM_BAND_62,
   MMPOC_XL1_BAND_NUM_BAND_63,
   MMPOC_XL1_BAND_NUM_BAND_NUM,
}MMRFC_XL1_BAND_NUM_E;

typedef enum
{
  CASE_RX_DCOC,
  CASE_RX_RC,
  CASE_RX_IRR ,
  CASE_RX_IIP2 ,
  CASE_RX_PL,
  CASE_RX_IIP2_NOISE_MEAS,
  CASE_RX_TX_LEAKAGE_MEAS,
  CASE_RX_IRR_ReCal,
  CASE_RX_PCB,
  CASE_RX_PRESET,
}MMRFC_RX_CAL_TYPE_E;

typedef enum
{
  MMRFC_STRX_BUFFER_SEL = 0,
  MMRFC_TX_BUFFER_SEL   = 1,
  MMRFC_LIN_BUFFER_SEL  = 2,
  MMRFC_DPD_BUFFER_SEL  = 3,
}MMRFC_TX_CW_BUFFER_SEL_E;

typedef enum
{
   TTG_COS_ONLY,
   TTG_SIN_ONLY,
   TTG_COS_N_P_SIN,
   TTG_COS_N_N_SIN,
} MMRFC_TXDFE_TTG_MODE_E;

typedef enum
{
   MMRFC_TTG_GAIN_FROM_L1,
   MMRFC_TTG_GAIN_FROM_TPC,
}MMRFC_TXDFE_TTG_GAIN_SWTICH_E;

typedef enum
{
   MMRFC_TONE_1ST,
   MMRFC_TONE_2ND,
   MMRFC_TONE_NUM,
} MMRFC_TXDFE_TTG_INDEX_E;

typedef enum
{
   MMRFC_TONE_1ST_P0,
   MMRFC_TONE_1ST_P1,    
   MMRFC_TONE_2ND_P0,
   MMRFC_TONE_2ND_P1,
   MMRFC_DPD_RAMP,
}MMRFC_TXDFE_SW_TTG_SETTING_SEL_E;

typedef enum
{
   MMRFC_ET_MODE=0,
   MMRFC_DPD_MODE=1,
   MMRFC_APT_MODE=2,
} MMRFC_TXDFE_SW_MODE_E;

typedef enum
{
   MMRFC_PGA_SETA_SLICE8,
   MMRFC_PGA_SETA_SLICE7,
   MMRFC_PGA_SETA_SLICE4,
   MMRFC_PGA_SETA_SLICE2, 
   MMRFC_PGA_SETA_SLICE1,   
   MMRFC_PGA_SETB_SLICE2,
   MMRFC_PGA_SETB_SLICE1,
   MMRFC_PGA_SETAUX,
} MMRFC_TXDFE_SW_GAIN_INFO_E;

typedef enum
{
   MMRFC_PGA_SETA, 
   MMRFC_PGA_SETB,
   MMRFC_PGA_SET_NUM,
} MMRFC_PGA_GAIN_SLICE_E;

typedef enum
{
   MMRFC_PA_H_MODE=0,
   MMRFC_PA_M_MOLE=1,
   MMRFC_PA_L_MODE=2,
} MMRFC_TXDFE_SW_PA_MODE_E;

typedef enum
{
   MMRFC_TX_ASYMM_COMP_ON,
   MMRFC_TX_ASYMM_COMP_OFF,
} MMRFC_TXDFE_ASYMM_COMP_EN_E;

typedef enum
{
   MMRFC_TAPS_3,
   MMRFC_TAPS_5,
   MMRFC_TAPS_7,
   MMRFC_TAPS_9,
   MMRFC_TAPS_11,
   MRFC_TAPS_UNDEF,

} MMRFC_TXDFE_FLT_TAP_E;

typedef enum
{
   MMRFC_TX_FREQ_DEP_COMP_ON,
   MMRFC_TX_FREQ_DEP_COMP_OFF,
} MMRFC_TXDFE_FREQ_DEP_COMP_EN_E;

typedef enum
{
   MMRFC_DAC_LPBK_PATH,
   MMRFC_BB_LPBK_PATH,
   MMRFC_RF_LPBK_PATH,   
      
} MMRFC_LPBK_PATH_SEL_E;

typedef enum
{
   MMRFC_TXDFE_RFPATH_P0,
   MMRFC_TXDFE_RFPATH_P1,
   MMRFC_TXDFE_RFPATH_INVALID,
}MMRFC_TXDFE_RFPATH_SEL_E;

typedef enum
{
   MMRFC_SR_13M  = 2,
   MMRFC_SR_26M  = 3,
   MMRFC_SR_52M  = 4,
   MMRFC_SR_104M = 5,
   MMRFC_SR_208M = 6
} MMRFC_TXDFE_SW_RAT_IDX_E;//for txdfe_rf sw mode,sw sampling rate

typedef enum
{
   MMRFC_DET_MID_GAIN,
   MMRFC_DET_LOW_GAIN,
   MMRFC_DET_GAIN_NUM,
} MMRFC_DETDFE_TIA_GAIN_IDX_E;

typedef enum
{
   SLEEP_MODE       = 0x1,
   CALIBRATION_MODE = 0x2,
   WARMUP_MODE      = 0x4,
   BURST_MODE       = 0x8,
}MML1_RF_POC_MODE_E;

typedef enum
{
  RXIF_GAIN_0dB  = 0,
  RXIF_GAIN_3dB   ,
  RXIF_GAIN_6dB   ,
  RXIF_GAIN_9dB   ,
  RXIF_GAIN_12dB  ,
  RXIF_GAIN_15dB  ,
  RXIF_GAIN_18dB  ,
  RXIF_GAIN_NUMBER,
} RXIF_GAIN_E;

typedef enum
{
  RX_TIA_GAIN_51p5dB  = 0,
  RX_TIA_GAIN_57p5dB  ,
  RX_TIA_GAIN_63p5dB  ,
  RX_TIA_GAIN_67p5dB  , //LPM 67.5dB = HPM 69.5dB
  RX_TIA_GAIN_NUMBER  ,
} RX_TIA_GAIN_E;


typedef enum
{
  RX_LNA_GAIN_m48dB  = 0,
  RX_LNA_GAIN_m42dB  ,
  RX_LNA_GAIN_m36dB  ,
  RX_LNA_GAIN_m30dB  ,
  RX_LNA_GAIN_m24dB  ,
  RX_LNA_GAIN_m18dB  ,
  RX_LNA_GAIN_NUMBER ,
} RX_LNA_GAIN_E;

/*Tx DET path selection */
typedef enum
{
   DET_IO_DET1 = 0,
   DET_IO_DET2 = 1,

   DET_IO_NON_USED = 0xFFFF,
}MMRF_DET_IO_E;

typedef enum
{
   MMRFC_RFK_DETK,
   MMRFC_RFK_TXK,
} MMRFC_MEAS_STATUS_E;

//LC LPBK table
typedef enum
{  
   All_CAL_PATH_OFF,  
   ABB_RCF_RCC_STEP1,             
   ABB_RCF_RCC_STEP2,
   DPD_ABB_4DB_MODE_CAL, /*TX ABB cal with ABB 4dB gain mode,only set LPBK_BB_PATH =1*/
   TX_DET_DNL_IQMM_DCOC_PCB_CAL, 
   TX_FD_IQMM_CAL,  
   TX_GA_CAL_STEP_2,         
   TX_DNL_IQMM_DCOC_CAL,        
}MMRFC_LBPK_CFG;

typedef enum{ 
   LPF_RCF_SLICE_A_EN,
   LPF_RCF_SLICE_B_EN,
   LPF_RCF_SLICE_G14B_MANUAL,  
   LPF_RCF_DEFAULT,
   LPF_RCF_SLICE_SET_CNT,
}MMRFC_LPF_RCF_SLICE_CTRL;

typedef enum{ 
   TXDFE_TXK_3GFDD,
   TXDFE_TXK_C2K,  
   TXDFE_TXK_3GTDD,
   TXDFE_TXK_LTE,
}MMRFC_TXDFE_TXK_RAT_SEL_E;

typedef enum{ 
   FORCE_P0      ,
   FORCE_P1      ,
   ALIGN_TXDFE   ,  
}MMRFC_TXK_DETADC_SEL_E;


typedef enum{ 
   MMRFC_NONE,
   MMRFC_DCOC,
   MMRFC_FDPM,  
}MMRFC_RXDFE_TTG_INPUT_E;

typedef enum{ 
   MMRFC_RXDFE_SR_3P25M,
   MMRFC_RXDFE_SR_6P5M,
   MMRFC_RXDFE_SR_13M, 
   MMRFC_RXDFE_SR_26M,
   MMRFC_RXDFE_SR_52M,
   MMRFC_RXDFE_SR_104M,
   MMRFC_RXDFE_SR_4P33M,
   MMRFC_RXDFE_SR_8P66M,
   MMRFC_RXDFE_SR_17P33M,
   MMRFC_RXDFE_SR_1P92M,
   MMRFC_RXDFE_SR_3P84M,
   MMRFC_RXDFE_SR_7P68M,
   MMRFC_RXDFE_SR_15P36M,
   MMRFC_RXDFE_SR_30P72M,
   MMRFC_RXDFE_SR_2P56M,
   MMRFC_RXDFE_SR_9P8304M, 
}MMRFC_RXDFE_TTG_SR_E;

typedef enum{ 
   MMRFC_P0A0,
   MMRFC_P0A1,
   MMRFC_P1A0,
   MMRFC_P1A1,
   MMRFC_C0A0,
   MMRFC_C0A1,
   MMRFC_C1A0,
   MMRFC_C1A1,
}MMRFC_RXDFE_TTG_WIN_SEL_E;

typedef enum
{
   MMRFC_DAC_104M,
   MMRFC_DAC_208M,
   MMRFC_DAC_416M,
   MMRFC_DAC_NUM,
} MMRFC_DAC_RATE_E;


typedef struct
{
   MMRFC_RXDFE_TTG_INPUT_E        rxdfe_ttg_source;
   MMRFC_RXDFE_TTG_SR_E           rxdfe_ttg_sample_rat;
   MMRFC_RXDFE_TTG_WIN_SEL_E      rxdfe_ttg_win_sel;
   kal_uint32                     rxdfe_ttg_enable;
}MMRFC_RXDFE_TTG_COMMON_T;

typedef struct
{
   kal_uint32                     rxdfe_i_step;  // freq_i =  rxdfe_ttg_sample_rat*rxdfe_i_step/1024
   kal_uint32                     rxdfe_q_step;  // freq_q =  rxdfe_ttg_sample_rat*rxdfe_q_step/1024
   kal_uint32                     rxdfe_i_step_init;  
   kal_uint32                     rxdfe_q_step_init;
   kal_uint32                     rxdfe_q_inv;
   kal_uint32                     rxdfe_i_scale; // 1/2^n , n = 0~15
   kal_uint32                     rxdfe_q_scale; // 1/2^n , n = 0~15
   kal_int32                      rxdfe_i_dc;    // s0.14
   kal_int32                      rxdfe_q_dc;    // s0.14
}MMRFC_RXDFE_TTG_CONFIG_T;


/** RF RX CW (by-band setting)
 */
typedef struct
{
   kal_uint16      RG_TX_LPF_OPIB1;
   kal_uint16      RG_TX_LPF_OPIB2;

} MML1_RF_LPF_OPIB_LUT_T;

typedef struct
{
   MMRFC_XL1_BAND_NUM_E         band;
   kal_uint32           srx1_vco_cfg;        //CW131 SRX1 VCO1  D[2:0]
   kal_uint32         srx1_3_vco_cfg;        //CW131 SRX1 VCO31 D[2:0]
   kal_uint32           srx2_vco_cfg;        //CW133 SRX2 VCO2  D[2:0]
   kal_uint32         srx2_3_vco_cfg;        //CW133 SRX2 VCO32 D[2:0]

   kal_uint32        srx1_runtime_rc;        //CW179, CW181(TDD) VCO1  D[15:0]
   kal_uint32      srx1_3_runtime_rc;        //CW179, CW181(TDD) VCO31 D[15:0]
   kal_uint32        srx2_runtime_rc;        //CW279, CW281(TDD) VCO2  D[15:0]
   kal_uint32      srx2_3_runtime_rc;        //CW279, CW281(TDD) VCO32 D[15:0]

   kal_uint32                rxlo_en;        //CW495, CW499 D[16:15]
   
   kal_uint32              srx1_rsv0;        //CW128 SRX1 VCO1  D[19:9]
   kal_uint32            srx1_3_rsv0;        //CW128 SRX1 VCO31 D[19:9]
   kal_uint32              srx2_rsv0;        //CW129 SRX2 VCO2  D[19:9]
   kal_uint32            srx2_3_rsv0;        //CW129 SRX2 VCO32 D[19:9]
} MMPOC_RF_RX_CW_DATA_T;

typedef struct
{
   kal_uint32           lo_cap_array;        //CW714 TX_LO_CAP_ARRAY[6:0]
   kal_uint32              lo_ind_sw;        //CW714 TX_LO_IND_SW
   kal_uint32      lo_fe_in_bias_lpm;        //CW714 TX_LO_FE_IN_BIAS_LPM[4:0]
   kal_uint32      lo_fe_in_bias_hpm;        //CW714 TX_LO_FE_IN_BIAS_HPM[4:0]

   kal_uint16       lo_cap_array_adj;
   MMRFC_XL1_BAND_NUM_E         band;

} MMPOC_RF_TX_CW_DATA_T;

//KC!!! ToDo: Remove this structure if 3G use the new one.
typedef struct
{
   MMRFC_XL1_BAND_NUM_E         band;
   kal_uint32                   tx_ttg_div2_en;
   kal_uint32                   tx_ttg_div4_en;
   kal_uint32                   tx_ttg_lb_div2_en;
   kal_uint32                   tx_ttg_ico_buf_supply_sel;
   kal_uint32                   tx_ttg_5g_en;
} MMPOC_RF_TX_TTG_CW_DATA_T;

//KC!!! ToDo: Remove this structure if 3G use the new one.
typedef struct
{
   MMRFC_XL1_BAND_NUM_E         band;
   kal_uint32                   rx_ttg_div2_en;
   kal_uint32                   rx_ttg_div4_en;
   kal_uint32                   rx_ttg_lb_div2_en; 
   kal_uint32                   rx_ttg_ico_buf_supply_sel;
   kal_uint32                   rx_ttg_5g_en;
} MMPOC_RF_RX_TTG_CW_DATA_T;

typedef struct
{
   kal_uint32                   tx_ttg_div2_en;
   kal_uint32                   tx_ttg_div4_en;
   kal_uint32                   tx_ttg_ico_buf_supply_sel;
   kal_uint32                   tx_ttg_5g_en;
} MMPOC_RF_TX_TTG_CW_BBBM_DATA_T;

typedef struct
{
   kal_uint32                   rx_ttg_div2_en;
   kal_uint32                   rx_ttg_div4_en;
   kal_uint32                   rx_ttg_ico_buf_supply_sel;
   kal_uint32                   rx_ttg_5g_en;
} MMPOC_RF_RX_TTG_CW_BBBM_DATA_T;

typedef struct
{
   kal_uint32  cw713;
} MMRFC_RF_CW_BACKUP_T;


#if IS_MML1_RF_MT6177L

   /** This CONFIG BUFFER is for TX TDD MODE use*/
   typedef struct
   {
      RF_CW_T srxCw128_cw129;    //SRX1/SRX2 CW128/CW129 SRX Band Setting
      RF_CW_T srxCw130_cw132;    //SRX N  Setting 1
      RF_CW_T srxCw131_cw133;    //SRX N  Setting 2
      RF_CW_T srxCw126_cw127;    //SRX AFC Setting
      RF_CW_T srxCw181_cw281;    //SRX1/SRX2 Run-Time RC (TDD)
      RF_CW_T rxLoCw495_cw499;   //LO1/LO2 for SRX path
   }MMRFC_SRX_RXLO_CONFIG_BUFFER_T;

   /** RF CW table type for the action to set RF TX output modulator mode (HRM, NHRM),
     * TX o/p port, TX balun cap., TX PGA driver */
   typedef struct
   {
      RF_CW_T txCw707;
      RF_CW_T txCw786;
      RF_CW_T txCw794;
      RF_CW_T txCw795;
      RF_CW_T txCw796;
      RF_CW_T txCw814;
      RF_CW_T txCw712;
      RF_CW_T txCw802;
      RF_CW_T txCw803;
      RF_CW_T txCw714;  //MT6179 needed for STX locking,refer to BBBM setting.
      RF_CW_T txCw816;
      RF_CW_T txCw818;
   }MMRFC_TX_CONFIG_BUFFER_T;

   typedef struct
   {
      RF_CW_T rxCw326_333[11];//RX+RXD_PATH1
   }MMPOC_RF_RX_BW_CONFIG_BUFFER_T;

   typedef struct
   {
      RF_CW_T rxPathCtrlCw320_327; //RX  Path 1 or 2
      RF_CW_T rxPathCtrlCw617;     //RXP/D partial off
      RF_CW_T rxPathCtrlCw322_329; //RX  Path 1 or 2
      RF_CW_T rxPathCtrlCw323_330; //RX  Path 1 or 2
      RF_CW_T rxPathCtrlCw324_331; //RXD Path 1 or 2
      RF_CW_T rxPathCtrlCw325_332; //RXD Path 1 or 2
   } MMRFC_RX_PATH_CTRL_BUFFER_T;

   /** buffer type for auto K trigger (e.g LO/CDCOC)  */
   typedef struct
   {
      /*CDCOC+LO   ,default     */
      RF_CW_T txCw728[2];
      RF_CW_T txCw732[2];
      RF_CW_T txCw727[2];
   }MMPOC_RF_LO_CDCOC_TRIGGER_TIMER_CONFIG_BUFFER_T;

#elif IS_MML1_RF_MT6177M

   /** This CONFIG BUFFER is for TX TDD MODE use*/
   typedef struct
   {
      RF_CW_T stxCw511      ;    //MT6176 need Band info in STX band register
      RF_CW_T srxCw128_cw129;    //SRX1/SRX2 CW128/CW129 SRX Band Setting
      RF_CW_T srxCw130_cw132;    //SRX N  Setting 1
      RF_CW_T srxCw131_cw133;    //SRX N  Setting 2
      RF_CW_T srxCw181_cw281;    //SRX1/SRX2 Run-Time RC (TDD)
   }MMRFC_SRX_RXLO_CONFIG_BUFFER_T;

   /** RF CW table type for the action to set RF TX output modulator mode (HRM, NHRM),
     * TX o/p port, TX balun cap., TX PGA driver */
   typedef struct
   {
      RF_CW_T txCw707;
      RF_CW_T txCw786;
      RF_CW_T txCw794;
      RF_CW_T txCw795;
      RF_CW_T txCw796;
      RF_CW_T txCw814;
      RF_CW_T txCw712;
      RF_CW_T txCw802;
      RF_CW_T txCw803;
   }MMRFC_TX_CONFIG_BUFFER_T;

   typedef struct
   {
      RF_CW_T rxCw326_333[11];//RX+RXD_PATH1
   }MMPOC_RF_RX_BW_CONFIG_BUFFER_T;

   typedef struct
   {
      RF_CW_T rxPathCtrlCw320_327; //RX  Path 1 or 2
      RF_CW_T rxPathCtrlCw321_328; //RXD path 1 or 2
      RF_CW_T rxPathCtrlCw322_329; //RX  Path 1 or 2
      RF_CW_T rxPathCtrlCw324_331; //RXD Path 1 or 2
   } MMRFC_RX_PATH_CTRL_BUFFER_T;

   /** buffer type for auto K trigger (e.g LO/CDCOC)  */
   typedef struct
   {
      /*CDCOC+LO   , LO_only    ,CDCOC_only  ,default     */
     RF_CW_T txCw728[4];
      RF_CW_T txCw732[4];
      RF_CW_T txCw727[4];
   }MMPOC_RF_LO_CDCOC_TRIGGER_TIMER_CONFIG_BUFFER_T;
#else
   #error "No Valid RF Chip was defined"   
#endif

/** RF CW table type for the action to turn on TX PA in low gain mode */
typedef struct
{
   kal_uint32 data1[MMRFC_MAX_MIPI_PAON_CW_NUMBER_PER_BAND];
   //kal_uint32 data_cfg;   
   //kal_uint32 mipi_data;
}MMRFC_TXPA_ON_LOWGAIN_BUFFER_T;
/** RF CW table type for the action to turn on/off ETM power supply for PA*/
typedef struct
{
   kal_uint32 data1[MMRFC_MAX_MIPI_PAON_CW_NUMBER_PER_BAND];
   //kal_uint32 data_cfg;   
   //kal_uint32 mipi_data;
}MMRFC_TXPA_ETM_CONFIG_BUFFER_T;

/** RF CW table type for the BPI ctrl to turn on TX PA */
typedef struct
{
   kal_uint32 pt0_data_l; ///< bpi[31:0]
   kal_uint32 pt0_data_h; ///< bpi[47:32]
   kal_uint32 pt1_data_l; ///< bpi[31:0]
   kal_uint32 pt1_data_h; ///< bpi[47:32]
   kal_uint32 pt2_data_l; ///< bpi[31:0]
   kal_uint32 pt2_data_h; ///< bpi[47:32]

}MMRFC_TX_ON_BPI_CTRL_BUFFER_T;
/** RF CW table type for the action to set RF STX settings, including DCO/NMMD */
typedef struct
{
   kal_uint32 pr0_data_l; ///< bpi[31:0]
   kal_uint32 pr0_data_h; ///< bpi[47:32]
   kal_uint32 pr1_data_l; ///< bpi[31:0]
   kal_uint32 pr1_data_h; ///< bpi[47:32]
   kal_uint32 pr2_data_l; ///< bpi[31:0]
   kal_uint32 pr2_data_h; ///< bpi[47:32]

}MMRFC_RX_ON_BPI_CTRL_BUFFER_T;

/** RF CW table type for the BPI ctrl to turn on TX PA */
typedef struct
{
   kal_uint32 pr3_data_l; ///< bpi[31:0]
   kal_uint32 pr3_data_h; ///< bpi[47:32]

}MMRFC_RX_OFF_BPI_CTRL_BUFFER_T;

/** RF CW table type for the action to turn on TX PA in low gain mode */
typedef struct
{
   kal_uint32 data1[MMRFC_MAX_MIPI_PAOFF_CW_NUMBER_PER_BAND];
   //kal_uint32 data_cfg;   
   //kal_uint32 mipi_data;
}MMRFC_TXPA_OFF_BUFFER_T;

/** RF CW table type for the BPI ctrl to turn off TX PA */
typedef struct
{
   kal_uint32 pt3_data_l; ///< bpi[31:0]
   kal_uint32 pt3_data_h; ///< bpi[47:32]

}MMRFC_TX_OFF_BPI_CTRL_BUFFER_T;

/** RF CW table type for the action to turn off ASM */
typedef struct
{
   kal_uint32 data1[MMRFC_MAX_MIPI_PAOFF_CW_NUMBER_PER_BAND];
}MMRFC_RX_OFF_BUFFER_T;

typedef enum
{
   VPA_SOURCE_INVALID   = VPA_SOURCE_NOT_SUPPORTED,
   VPA_SOURCE_VBAT      = VPA_SOURCE_HW_VAPC,
   VPA_SOURCE_PMIC      = VPA_SOURCE_HW_PMIC,
   VPA_SOURCE_ETM_0     = VPA_SOURCE_HW_ETM_SW_APT,
   VPA_SOURCE_ETM_1     = VPA_SOURCE_HW_ETM_SW_ET,
   VPA_SOURCE_PMIC2     = VPA_SOURCE_HW_PMIC2,
   VPA_SOURCE_V_BATTERY = VPA_SOURCE_HW_V_BATTERY,
   VPA_SOURCE_HPUE_VPA   = VPA_SOURCE_HW_EXT_VPA
} MMRFC_VPA_SOURCE_CONFIGUATION_TYPE_T;

/*********************************************************************/
/**     Pre-config CW buffers for TX POC before POC item start       */
/*********************************************************************/

/** RF CW table type for the action to set RF STX settings, including DCO/NMMD */
typedef struct
{
   RF_CW_T stxCw511;   //STX MAIN
   RF_CW_T stxCw529;   //DCO1
   RF_CW_T stxCw549;   //MMD2
   RF_CW_T stxCw550;   //MMD3
   RF_CW_T stxCw551;   //MMD4 Only for 2GTX
   RF_CW_T stxCw552;   //MMD5 Only for 2GTX
   RF_CW_T stxCw582;   //Noffset
}MMRFC_STX_CONFIG_BUFFER_T;

typedef struct
{
   RF_CW_T srxCw134_cw136;   // SRX1/2 offset setting 1
   RF_CW_T srxCw135_cw137;   // SRX1/2 offset setting 2
   RF_CW_T  rxCw320_cw327;   // RX  PATH1/2 partial off control
   RF_CW_T  rxCw321_cw328;   // RXD PATH1/2 partial off control
}MMRFC_RX_MISC_TXTDD_CONFIG_BUFFER_T;

/** RF CW table type for the action to set RF TX PGA driver bias current for Linear mode */
typedef struct
{
   RF_CW_T txGainCw797;

}MMRFC_TX_DRV_BIAS_LIN_CONFIG_BUFFER_T;

/** RF CW table type for the action to set RF TX PGA driver bias current for DPD mode */
typedef struct
{
   RF_CW_T txGainCw799;

}MMRFC_TX_DRV_BIAS_DPD_CONFIG_BUFFER_T;


//For TX CCA case ,these CW setting is different by BBBM
//Need to send these CWs during TX POC cal BW change.
typedef struct
{
   RF_CW_T txCw797;
   RF_CW_T txCw712;   
}MMRFC_TX_CCA_BW_EXTRA_CW_BUFFER_T;

typedef struct
{
   kal_int16                      i_part;
   kal_int16                      q_part;

}MMRFC_TXDFE_TX_DC_COMP_T;

typedef struct
{
   MMRFC_TXDFE_TX_DC_COMP_T            comp_tab[MMRFC_TX_DC_COMP_FC_MODE_NUM][MMRFC_TX_DC_COMP_PGA_SLICE_SET_NUM];

}MMRFC_TXDFE_TX_DC_COMP_TAB_T;

typedef struct
{
   kal_int8                       gain;
   kal_int8                       phase;

}MMRFC_TXDFE_TX_IQ_COMP_T;

typedef struct
{
   MMRFC_TXDFE_TX_IQ_COMP_T            comp_tab[MMRFC_TX_IQ_COMP_FC_MODE_NUM][MMRFC_TX_IQ_COMP_PGA_SLICE_SET_NUM];

}MMRFC_TXDFE_TX_IQ_COMP_TAB_T;

typedef struct
{
   kal_int16                      i_part;
   kal_int16                      q_part;

} MMRFC_TXDFE_FDAD_COMP_COEFF_UNIT_T;

typedef struct
{
   MMRFC_TXDFE_FDAD_COMP_COEFF_UNIT_T  cof[MMRFC_FDAD_COMP_COEFF_NUM];

} MMRFC_TXDFE_FDAD_COMP_COEFF_T;

typedef struct
{
   MMRFC_TXDFE_FDAD_COMP_COEFF_T       coeff_tab[MMRFC_FDAD_COMP_PGA_SLICE_SET_NUM];

} MMRFC_TXDFE_FDAD_COMP_COEFF_TAB_T;

typedef struct
{
   kal_int16                      i_part;
   kal_int16                      q_part;

} MMRFC_TXDFE_ASYMM_COMP_COEFF_UNIT_T;

typedef struct
{
   MMRFC_TXDFE_ASYMM_COMP_COEFF_UNIT_T cof[MMRFC_ASYMM_COMP_COEFF_NUM];

} MMRFC_TXDFE_ASYMM_COMP_COEFF_T;

typedef struct
{
   MMRFC_TXDFE_ASYMM_COMP_COEFF_T      coeff_tab[MMRFC_ASYMM_COMP_PGA_SLICE_SET_NUM];

} MMRFC_TXDFE_ASYMM_COMP_COEFF_TAB_T;

typedef struct
{
   /** SW TPC con1  mode */
   MMRFC_TXDFE_SW_MODE_E mode;

   /** SW TPC con1 gain information */
   MMRFC_TXDFE_SW_GAIN_INFO_E gain;

   /** SW TPC con1 gain information */
   MMRFC_TXDFE_SW_PA_MODE_E pa_mode;

   /** SW TPC con1 DPD lut select*/
   kal_uint32 dpd_lut_sel;

   /** SW TPC con1 ETDPD_norm*/
   kal_uint32 etdpd_norm;

   /** SW TPC con1 BB gain*/
   kal_uint32 bb_gain;

   /*CBW index*/
   MMRFC_TX_RAT_CBW_CFG_E cbw_idx;

} MMRFC_TXDFE_SW_MODE_CFG_T;

typedef struct
{
   /* for ET mode */
   kal_uint32 gain_bkf_m0;

   /* for DPD mode */
   kal_uint32 gain_bkf_m1;

   /* for APT mode */
   kal_uint32 gain_bkf_m2;

   /* back-off enable */
   kal_uint32 gain_bkf_en;
   
} MMRFC_TXDFE_GAIN_BKF_CON_T;


typedef struct
{ 
  kal_uint32 rf_ttg[MMRFC_RX_RAT_CBW_CFG_NUM][MMRFC_RXIRR_MAX_TONE_PAIRS];                               

} MMRFC_RX_TTG_OFFSET_T;

typedef struct
{ 
  kal_uint32 rf_ttg[MMRFC_TX_RAT_CBW_CFG_NUM];                               

} MMRFC_DET_TTG_OFFSET_T;

typedef struct{    
    kal_uint32           acc_i_sqr;
    kal_uint32           acc_q_sqr;    
    kal_int32            acc_i;
    kal_int32            acc_q;
    kal_int32            acc_iq;
} MMRFC_IQK_MEAS_TEST_T;

typedef struct{    
    kal_int32            real;  ///< i_cos-q_sin
    kal_int32            image; ///< i_sin+q_cos
} MMRFC_RXK_PL_MEAS_T; ///< for RX path loss cal

typedef struct {
   kal_int32 DC;
   kal_int32 DC_inv;
}TXFIIQDC_TTG_DC_artificial;

typedef struct
{
   MMRFC_TXK_SW_TRIG_E cal_item;
   kal_uint32 tone_length;
   kal_uint32 meas_offset;
} MMRFC_TXK_IMM_CFG_T;

typedef struct
{
   MMRFC_TXK_ITEM_PBC_E cal_item;    ///< 0: DETK, 1: TXIQK, 2: IIP2K
   kal_uint32 tone_length;           ///< 0~524287, 0~2520us (uint=1/104MHz)
   kal_uint32 meas_offset;           ///< 0~32767, 0~315us (uint=1/104MHz)
   kal_uint32 time_chip;             ///< 0~2559 chip
   kal_uint32 time_slot;             ///< 0~14 slot
   kal_uint32 sel_cnt;               ///< test tone and meas. select index
   kal_uint16 is_cnt_rst;            ///< Reset for debug counter
} MMRFC_TXK_W_PBC_CFG_T;

typedef struct
{
   MMRFC_TXK_ITEM_PBC_E cal_item;    ///< 0: DETK, 1: TXIQK, 2: IIP2K
   kal_uint32 tone_length;           ///< 0~524287, 0~2520us (uint=1/104MHz)
   kal_uint32 meas_offset;           ///< 0~32767, 0~315us (uint=1/104MHz)
   kal_uint32 time_ts;               ///< 0~307199 ts
   kal_uint32 sel_cnt;               ///< test tone and meas. select index
   kal_uint32 is_cnt_rst;            ///< Reset for debug counter
} MMRFC_TXK_L_PBC_CFG_T;

typedef struct
{
   MMRFC_TXK_ITEM_PBC_E cal_item;    ///< 0: DETK, 1: TXIQK
   kal_uint32 tone_length;           ///< 0~524287, 0~2520us (uint=1/104MHz)
   kal_uint32 meas_offset;           ///< 0~32767, 0~315us (uint=1/104MHz)
   kal_uint32 time_chip;             ///< 0~8191 chip
   kal_uint32 sel_cnt;               ///< test tone and meas. select index
   kal_uint16 is_cnt_rst;            ///< Reset for debug counter
} MMRFC_TXK_T_PBC_CFG_T;

typedef struct
{
   kal_uint16 tone_sel_en;               
   kal_uint32 tone_sel;
   kal_uint16 meas_sel_en;
   kal_uint32 meas_sel;         
   kal_uint32 ddpc_sel;             
} MMRFC_TXK_SW_MODE_CFG_T;

typedef struct
{
   kal_int32 dc_i;
   kal_int32 dc_q;

} MMRFC_DET_DC_COMP_T;

typedef struct
{
   kal_int32 gain;
   kal_int32 phase;

} MMRFC_DET_FIIQ_COMP_T;

/* Please use the following bitmap definition for nco_phi_bmp */
/* MMRFC_NCO_PHI_NONE = 0x0000 */
/* MMRFC_NCO_PHI_0    = 0x0001 */
/* MMRFC_NCO_PHI_1    = 0x0002 */
/* MMRFC_NCO_PHI_2    = 0x0004 */
/* MMRFC_NCO_PHI_3    = 0x0008 */
/* MMRFC_NCO_PHI_4    = 0x0010 */
typedef struct
{
   kal_uint32 nco_phi_bmp;
   kal_int32 nco_phi[MMRFC_NCO_PHI_NUM];
} MMRFC_NCO_PHI_T;

typedef struct
{
   MMRFC_TX_RAT_CBW_CFG_E rat_cbw;      ///< RAT/CBW configuration
   kal_uint32 eqlfp_en;              ///< eqlpf enable, 0: Disable, 1: Enable
   MMRFC_NCO_PHI_T nco_phi;             ///< DET NCO phi for TX related cal.
   kal_uint32 is_det_cal;               ///< 0: TXK, 1: DETK
   MMRFC_LPBK_PATH_SEL_E lpbk_path_sel; ///< Loopback path selection
   kal_uint32 detk_comp_en;             ///< Enable/Disable DET compensation during DET calibration - 0: Disable DET comp. during DETK, 1: Enable DET comp. during DETK
} MMRFC_DET_DFE_CFG_T;

typedef struct
{
   kal_uint32 acc_len[MMRFC_ANT_NUM][MMRFC_RXMS_IQK_MEM_NUM];

} MMRFC_RXMS_IQK_ACC_LEN_T;

typedef struct
{
   kal_uint16 sample_mask[MMRFC_ANT_NUM][MMRFC_RXMS_IQK_MEM_NUM];
   kal_uint16 tck[MMRFC_ANT_NUM][MMRFC_RXMS_IQK_MEM_NUM];
   kal_uint16 clp_len[MMRFC_ANT_NUM][MMRFC_RXMS_IQK_MEM_NUM];
   kal_uint16 rnd_len[MMRFC_ANT_NUM][MMRFC_RXMS_IQK_MEM_NUM];

} MMRFC_RXMS_IQK_RATE_CLP_RND_T;

typedef struct
{
   MMRFC_RAT_E rat;                            ///< RAT configuration, valid for WCDMA/LTE
   MMRFC_RXMS_IQK_ACC_LEN_T acc_len;           ///< accumulation length
   MMRFC_RXMS_IQK_RATE_CLP_RND_T rate_clp_rnd; ///< sample rate mask, measurement tick, clpping length, and round length
   MMRFC_RXMS_IQK_MUL_MASK_E mul_mask;         ///< multiply mask
   
} MMRFC_RXMS_IQK_CFG_T;

typedef struct
{
   kal_uint32 iqk_i_sqr[MMRFC_ANT_NUM];
   kal_uint32 iqk_q_sqr[MMRFC_ANT_NUM];
   kal_int32  iqk_iq[MMRFC_ANT_NUM];
   kal_int32  iqk_i[MMRFC_ANT_NUM];
   kal_int32  iqk_q[MMRFC_ANT_NUM];

} MMRFC_RXMS_IQK_RESULT_T;

typedef struct
{
   kal_int32  dck_i[MMRFC_ANT_NUM];
   kal_int32  dck_q[MMRFC_ANT_NUM];

} MMRFC_RXMS_DCK_RESULT_T;

typedef struct
{
   kal_int32 iip2k_i_sin[MMRFC_ANT_NUM];
   kal_int32 iip2k_q_cos[MMRFC_ANT_NUM];
   kal_int32 iip2k_q_sin[MMRFC_ANT_NUM];
   kal_int32 iip2k_i_cos[MMRFC_ANT_NUM];
   
} MMRFC_RXMS_IIP2K_RESULT_T;


typedef struct
{
   kal_uint32 acc_len[MMRFC_ANT_NUM][MMRFC_RXMS_RXK_MEM_NUM]; ///< accumulation length (decimal value, ex. set 1024 for 2^10 samples)

} MMRFC_RXMS_RXK_ACC_LEN_T;

typedef struct
{
   kal_uint16 sample_mask[MMRFC_ANT_NUM][MMRFC_RXMS_RXK_MEM_NUM];
   kal_uint16 tck[MMRFC_ANT_NUM][MMRFC_RXMS_RXK_MEM_NUM];

} MMRFC_RXMS_RXK_RATE_T;

typedef struct
{
   MMRFC_RAT_E rat;                   ///< RAT configuration, valid for WCDMA/LTE
   MMRFC_RXMS_RXK_ACC_LEN_T acc_len;  ///< accumulation length (decimal value, ex. set 1024 for 2^10 samples)
   MMRFC_RXMS_RXK_RATE_T rate;        ///< sample rate mask and measurement tick
   
} MMRFC_RXMS_RXK_CFG_T;

typedef struct
{
   kal_uint8            split_band_num; //when split_band_handle = TRUE , take split_band_num for ref.
   kal_bool             split_band_handle; //if this Band need split band handle during POC, e.g. B40,B41 
   kal_uint32           tx_center_freq[MMRFC_TX_SUBBAND_NUM];
   kal_uint32           rx_center_freq;
}MMRFC_BAND_SUPPORT_INFO_T;

typedef struct
{
   MMRFC_RAT_E               rat;
   MMRFC_XL1_BAND_NUM_E      supportedBand;
   MMRFC_BAND_SUPPORT_INFO_T supportedBandInfo;
   kal_uint32                split_subband_idx;
   kal_uint32                curr_tx_route_idx; 
   kal_bool                  is_pre_cap_tuning; //for IOTX off setting 
}MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T;

/** MMRFC RF Rx VCO-Divider set element template */
typedef struct
{
   kal_uint8 vco;          ///< VCO index: 1: VCO1; 2: VCO2; 3: VCO31 or VCO32, and NULL (0xFF)
   kal_uint8 div;          ///< Divider: 2, 4, 6, 8, 10, 3, and NULL (0xFF)
} MMRFC_RF_VCO_DIV_SEL_T;

typedef struct
{
   RF_CW_T topCw1;

}MMPOC_RF_TX_STATE_CONFIG_BUFFER_T;

typedef struct
{
   RF_CW_T rxPwrModeCw413; //RX  Path 1 
   RF_CW_T rxPwrModeCw414; //RXD path 1 
   RF_CW_T rxPwrModeCw415; //RX  Path 2
   RF_CW_T rxPwrModeCw416; //RXD Path 2
}MML1_RX_POWER_MODE_BUFFER_T;

typedef struct
{
   RF_CW_T rxCw467_476; //trigger timer for FDD CAL mode 
   RF_CW_T rxCw468_477; //trigger timer for FDD Warmup mode/TTGBUF_TON 
   RF_CW_T rxCw469_478; //trigger timer for FDD TPD DCOC/CW469 RX1_DUTYC_TON 
}MML1_RX_FDD_MODE_TIMER_BUFFER_T;

typedef struct
{
   RF_CW_T rxCw470_479; //trigger timer for TDD CAL mode 
   RF_CW_T rxCw471_480; //trigger timer for TDD Warmup mode/TTGBUF_TON 
   RF_CW_T rxCw472_481; //trigger timer for TDD TPD DCOC 
}MML1_RX_TDD_MODE_TIMER_BUFFER_T;

typedef struct
{
   RF_CW_T rxGainCw334; //RX  path1
   RF_CW_T rxGainCw336; //RXD path1 
   RF_CW_T rxGainCw340; //RX  Path2
   RF_CW_T rxGainCw342; //RXD Path2
}MML1_RX_GAIN_CW_BUFFER_T;

typedef struct
{
   RF_CW_T rxGainCw334_340; //RX  path1 or 2
   RF_CW_T rxGainCw336_342; //RXD path1 or 2
}MMRFC_RX_GAIN_CW_BUFFER_T;

typedef struct
{
   RF_CW_T rxLoCw495_499; //LO1 or LO2

} MMRFC_RX_LO_CTRL_BUFFER_T;

typedef struct
{
   RF_CW_T rxSrxCw128_129;   //SRX1/SRX2 Band inform
   RF_CW_T rxSrxCw130_132;   //SRX1/SRX2 Channel setting 1
   RF_CW_T rxSrxCw131_133;   //SRX1/SRX2 Channel setting 2
   RF_CW_T rxSrxRunTimeRcCw; //Run-Time RC
                             //Cw179_279 SRX1/SRX2 Run-Time RC (FDD)
                             //Cw181_281 SRX1/SRX2 Run-Time RC (TDD)
                             //Cw183_283 SRX1/SRX2 Run-Time RC (C2K)
   
} MMRFC_SRX_CONFIG_BUFFER_T;

typedef struct
{
   RF_CW_T rxCw335;//RX_PATH1
   RF_CW_T rxCw337;//RXD_PATH1
   RF_CW_T rxCw341;//RX_PATH2
   RF_CW_T rxCw343;//RXD_PATH2
}MML1_RF_RX_DCOC_COMP_CONFIG_BUFFER_T;

typedef struct
{
   RF_CW_T iip2Cw473_482; //PRX1 or PRX2
   RF_CW_T iip2Cw349_350; //DRX1 or DRX2
} MML1_RF_RX_RG_BIAS_IIP2C_CONFIG_BUFFER_T;

typedef struct
{
   RF_CW_T rxPathCtrlCw500; //RX tunnel partial off control
   RF_CW_T rxPathCtrlCw501; //RXD tunnel partial off control
   RF_CW_T rxPathCtrlCw502; //RX TUNNAL GROUP/LNA selection
   RF_CW_T rxPathCtrlCw503; //RX tunnel by-band setting
   RF_CW_T rxPathCtrlCw504; //RXD TUNNAL GROUP/LNA selection
   RF_CW_T rxPathCtrlCw505; //RXD tunnel by-band setting
   RF_CW_T rxPathCtrlCw506; //RXRXD tunnel LNA gain
   RF_CW_T rxPathCtrlCw508; //RXRXD tunnel LNA gain for IIP2 K
} MMRFC_RXT_PATH_CTRL_BUFFER_T;

typedef struct
{
   RF_CW_T rxCw399_400; //RXRXD1/RXRXD2 TOPBIAS RG for MIXER
} MMRFC_RX_MIXER_BIAS_CONFIG_BUFFER_T;

typedef struct
{
   RF_CW_T rxCurrABBCw448; //RX  Path 1 
   RF_CW_T rxCurrABBCw456; //RXD path 1 
   RF_CW_T rxCurrABBCw452; //RX  Path 2
   RF_CW_T rxCurrABBCw460; //RXD Path 2
}MML1_RX_CURR_ABB_BUFFER_T;

typedef struct
{
  RF_CW_T power_mode_cw[5]; // CW413,414(PATH1); CW415,416(PATH2)

} MML1_RX_POWER_MODE_CONFIG_BUFFER_T;

typedef struct
{
  RF_CW_T current_abb_cw[5]; // CW448,456(PATH1); CW452,460(PATH2)

} MML1_RX_CURR_ABB_CONFIG_BUFFER_T;

typedef struct
{
 kal_uint32 gate_bias_i;
 kal_uint32 gate_bias_q;
} MML1_RX_IIP2C_GATE_BIAS_T;

typedef struct
{
   RF_CW_T ttgCw50;
   RF_CW_T ttgCw51;
   RF_CW_T ttgCw52;
   RF_CW_T ttgCw53;
}MMPOC_RF_TTG_FREQ_CONFIG_BUFFER_T;

typedef struct
{
   RF_CW_T ttgCw50;
   RF_CW_T ttgCw51;

}MMPOC_RF_TX_TTG_FREQ_CONFIG_BUFFER_T;

/** buffer type for TTG  */

/** RF CW table type for the action to set TTG NMMD  */
typedef struct
{
   RF_CW_T ttgCw51;
   RF_CW_T ttgCw52;

}MMPOC_RF_RX_TTG_FREQ_CONFIG_BUFFER_T;

/** RF CW table type for the action to trigger TTG ON/OFF  */
typedef struct
{
   RF_CW_T ttgCw45; // ON/OFF

}MMPOC_RF_TTG_TRIG_CONFIG_BUFFER_T;


/** buffer type for TX  */

/** RF CW table type for the action to set TX forward gain table */
typedef struct
{
   RF_CW_T txGainCw706[MMRFC_TX_DNL_PGA_A_GAIN_STEPS+MMRFC_TX_DNL_PGA_B_GAIN_STEPS+MMRFC_TX_DNL_PGA_AUX_GAIN_STEPS+MMRFC_EXTRA_GAIN_NUM];

}MMPOC_RF_TX_GAIN_TABLE_BUFFER_T;

/** RF CW table type for the action to set DET forward gain table */
typedef struct
{
   RF_CW_T detGainCw705[MMRFC_DET_GAIN_STEPS_DET_CAL];

}MMPOC_RF_DET_GAIN_TABLE_BUFFER_T;

typedef struct
{
   RF_CW_T txCw711[8];
  
}MMPOC_RF_LPBK_CONFIG_BUFFER_T;

/** RF CW table type for the action to set LPF BW */
typedef struct
{
   RF_CW_T txCw710;//LPF_RSEL
   RF_CW_T txCw787;//LPF_CSEL
   
}EL1D_RF_TX_LPF_BW_CONFIG_BUFFER_T;

/** RF CW table type for the action to set RCF BW */
typedef struct
{
   RF_CW_T txCw793;//RCF_RSEL&RCF_CSEL
   
}EL1D_RF_TX_RCF_BW_CONFIG_BUFFER_T;

typedef struct
{
   RF_CW_T txCw821;//LPF_SLICE_EN
   RF_CW_T txCw822;//RCF_SLICE_EN   

}EL1D_RF_TX_LPF_RCF_SLICE_BUFFER_T;

typedef struct
{
   kal_uint8 tx_lo_ind;
   kal_uint8 tx_lo_capcal_peak_cap;
   kal_uint8 tx_lo_in_bias_hpm;
   kal_uint8 tx_lo_in_bias_lpm;
}MMRFC_TX_LO_ELEMENT_T;

typedef struct
{
   kal_uint32 start_time;         
   kal_uint32 duration;         
   kal_uint32 delay;           
} MMRFC_FAC_K_Timing_PARAM_T;

typedef struct
{
   MMRFC_XL1_BAND_NUM_E pcc_band ;         
   MMRFC_XL1_BAND_NUM_E scc_band ;         
} MMRFC_FAC_K_Rx_Setting_T;

typedef struct
{
   kal_int16 rxm_gain;
   kal_int16 rxd_gain;
 } MMRFC_FAC_K_LNA_Gain_CFG_T;

typedef struct
{
   kal_int16 rxm[PLK_CC_NUM];
   kal_int16 rxd[PLK_CC_NUM];
} MMRFC_FAC_K_Rx_Result_T;


/** TXDFE */
typedef struct
{
   /** TTG phase*/
   kal_int32 phi;

   /** TTG gain*/
   kal_uint32 gain;

   /** TTG phase0 mode*/
   MMRFC_TXDFE_TTG_MODE_E p0_mode;

   /** TTG phase1 mode*/
   MMRFC_TXDFE_TTG_MODE_E p1_mode;

   /** 1st TTG tone DC value: i part*/
   kal_int32  dc_i;

   /** 1st TTG tone DC value: q part*/
   kal_int32  dc_q;

} MMRFC_TXDFE_TTG_CTRL_T;

typedef struct
{
   kal_uint32            rxio;
   kal_uint32            rxdio;
   kal_uint8             vco;
   kal_uint8             div;
   kal_uint8             is_intra_ncca;
   kal_uint8             dc_comp_idx;
   kal_uint8             srx_path;
   MML1_RF_BSIMM_PORT_T  tunnel_tras;   //this field is used to set the rfic bsi port which is in the tunnel transmiter side. If no tunnel used, tunnel_trans = tunnel_recv. Need to set as : MML1_RF_RFIC1 = 0, MML1_RF_RFIC2 = 1 
   MML1_RF_BSIMM_PORT_T  tunnel_recv;   //this field is used to set the rfic bsi port which is in the tunnel receiver side. If no tunnel used, tunnel_trans = tunnel_recv. Need to set as : MML1_RF_RFIC1 = 0, MML1_RF_RFIC2 = 1
   MML1_RF_BSIMM_PORT_T  rfic_sel;
   kal_bool              isolation_buffer;
   kal_uint16            rx_rf_route_idx; //RX RF-only route table (excluding FE routes)
   kal_uint32            rx_route_idx;  //for TX leakage use, indicate the route_idx of ROUTE_TBL
}MMRFC_RX_CAL_CFG_T;

typedef struct
{
   MMRFC_XL1_BAND_NUM_E  band;
   kal_uint16            txio;
   kal_uint8             dco;
   kal_uint8             div;
   kal_bool              is_hrm;
   kal_uint8             srx_path;        // SRX1 = 0,SRX2 = 1 ; SRX3 & SRX4 is invalid for MMRFC operation; if FDD band, always set MMRFC_RF_SRX_IDX_SRX1 (value = 0)
   MML1_RF_BSIMM_PORT_T  tx_rfic_sel;     // rfic bsimm port sel:MML1_RF_RFIC1 = 0, MML1_RF_RFIC2 = 1
   kal_bool              is_tx_tdd_band;
   MMRF_PMIC_VPA_NUM_E   vpaIdx;
   MMRFC_VPA_SOURCE_CONFIGUATION_TYPE_T  vpa_source; 
   kal_uint32            tx_self_comp_idx; //TX RF+FE route table
   kal_uint32            tx_route_idx;  //for TX leakage use, indicate the route_idx of ROUTE_TBL
   kal_uint16            tx_freq;
}MMRFC_TX_CAL_CFG_T;

typedef struct
{
   kal_uint8 AB_SEL;
   kal_uint8 TXG_IDX;
   kal_uint8 DETG_IDX;
   kal_int32 BB_Backoff_dB;
}TX_IQDC_CAL_SEQ_T;


typedef struct
{
   kal_uint8 AB_SEL;
   kal_uint8 TXG_IDX[TX_DNL_CAL_GAIN_STEP_TONE_NUM]; //1st & 2nd TX GAIN index of Gain step DNL cal
   kal_uint8 DETG_IDX;
   kal_int32 BB_Backoff_dB;
}TX_DNL_CAL_SEQ_T;

typedef struct
{
   MMRFC_XL1_BAND_NUM_E  rx_band;
   MMRFC_RX_CAL_TYPE_E   rx_cal_item;
   kal_uint32            route_idx;
   MMRFC_XL1_BAND_NUM_E  iip2_tx_band; ///< TX band information for RX IIP2
   kal_uint32            port;
   kal_uint32            rx_center_freq;
   kal_bool              is_rx_cca;

   /*Add new parameters needed for CW construction here*/
   
} MMRFC_RX_CW_PARAM_T;  ///< parameters needed for RX related CW construction

typedef struct
{
   kal_uint32   detadc_en_sw;
   kal_uint32   detadc_ck_div;
   kal_uint32   otf_detadc_trg_tgl;
   kal_uint32   detadc_timer_sel;
} MMRFC_TXK_TRG_AD_T;  ///< parameters needed for RX related CW construction


/*===============================================================================*/
/*        Structures for Multi-Mode DPD and CIM3 Factory Calibration             */
/*===============================================================================*/

typedef struct
{
   kal_int32 buff_i;
   kal_int32 buff_q;
   
}MMRFC_DPD_FAC_AVG_BUF_RESULT_T;

typedef struct
{
   kal_int32 i_sin;
   kal_int32 i_cos;
   kal_int32 q_sin;
   kal_int32 q_cos;   
   
}MMRFC_CIM3_FAC_AVG_BUF_RESULT_T;

typedef struct
{
   kal_uint8             route_num;
   kal_bool              is_rx_tdd_band;
   MMRFC_RX_CAL_CFG_T    cfg[MMRFC_RX_IRR_COMP_ROUTE_MAX];
}MMRFC_RX_CAL_IRR_DC_CFG_T;

typedef struct
{
   kal_uint8          route_num;
   kal_uint16         rx_iip2_usage_comp_idx[MMRFC_RX_IIP2_COMP_ROUTE_MAX];
   kal_bool           is_rx_tdd_band;
   MMRFC_RX_CAL_CFG_T rx_cfg[MMRFC_RX_IIP2_COMP_ROUTE_MAX];
   MMRFC_TX_CAL_CFG_T tx_cfg[MMRFC_RX_IIP2_COMP_ROUTE_MAX];
}MMRFC_RX_CAL_IIP2_CFG_T;

typedef struct
{
   kal_uint8 route_num;
   MMRFC_TX_CAL_CFG_T tx_cfg[MMRFC_TX_COMP_ROUTE_MAX];
}MMRFC_TX_ROUTE_CFG_T;

typedef struct
{
  MMRFC_RX_DC_RESULT_T rx_dc[MMRFC_RXDC_TIA_GAIN_STEPS][MMRFC_RXDC_PGA_GAIN_STEPS];
} MMRFC_RX_DC_HPM_RESULT_T;

typedef struct
{
  MMRFC_RX_DC_RESULT_T rx_dc[MMRFC_RXDC_TIA_GAIN_STEPS][MMRFC_RXDC_PGA_GAIN_STEPS];
} MMRFC_RX_DC_LPM_RESULT_T;

typedef struct
{
   kal_uint32 V_TX_BAL_CAPA;
   kal_uint32 V_TX_BAL_CAPB;
} MMRFC_CAP_TUNNING_SETTING_T;

typedef struct
{
   /* RX IRR */
   MMRFC_RX_IRR_RESULT_T       rx_irr_hpm[MMRFC_RX_IRR_COMP_ROUTE_MAX][MMRFC_RX_RAT_CBW_CFG_NUM][MMRFC_ANT_NUM]; //RX IRR for HPM
   MMRFC_RX_IRR_RESULT_T       rx_irr_lpm[MMRFC_RX_IRR_COMP_ROUTE_MAX][MMRFC_RX_RAT_CBW_CFG_NUM][MMRFC_ANT_NUM]; //RX IRR for LPM
   MMRFC_RX_IRR_RESULT_T       rx_irr_hpm_lif[MMRFC_RX_IRR_COMP_ROUTE_MAX][MMRFC_RX_RAT_CBW_CFG_NUM][MMRFC_ANT_NUM]; //RX IRR for HPM LIF , HPM max gain

   /* RX DC */
   MMRFC_RX_DC_HPM_RESULT_T    rx_dc_hpm[MMRFC_RX_DC_COMP_ROUTE_MAX][MMRFC_ANT_NUM];     //RF DC for HPM
   MMRFC_RX_DC_HPM_RESULT_T    rx_dig_dc_hpm[MMRFC_RX_DC_COMP_ROUTE_MAX][MMRFC_ANT_NUM]; //Digital DC for HPM
   MMRFC_RX_DC_LPM_RESULT_T    rx_dc_lpm[MMRFC_RX_DC_COMP_ROUTE_MAX][MMRFC_ANT_NUM];     //RF DC for LPM
   MMRFC_RX_DC_LPM_RESULT_T    rx_dig_dc_lpm[MMRFC_RX_DC_COMP_ROUTE_MAX][MMRFC_ANT_NUM]; //Digital DC for LPM

   /* RX IIP2 */
   MMRFC_IIP2_RESULT_T         rx_iip2[MMRFC_ANT_NUM][MMRFC_RX_IIP2_COMP_ROUTE_MAX];

   /* DET */
   kal_uint32                  det_coarse_dcoc_cw807; //CW807, V_TXCDCOC1[19:0]
   kal_uint32                  det_coarse_dcoc_cw808; //CW808, V_TXCDCOC2[19:0]

   /* Please refer to DET_TIA_COMP_INDEX_LUT/DET_CBW_COMP_INDEX_LUT for mapping from DET gain index/CBW to comp. structure */
   MMRFC_DET_IQDNL_RESULT_T    det_iqdnl_fwd[MMRFC_DET_FE_GAIN_STEPS][MMRFC_TX_RAT_CBW_CFG_NUM]; //1.4MHz and 3MHz share the same config -> restore result per CBW(20150206)
   MMRFC_DET_DC_RESULT_T       det_dc_fwd[MMRFC_DET_GAIN_STEPS_DET_CAL]; //17 DET gain step

   /* Please refer to DET_TIA_COMP_INDEX_LUT/DET_CBW_COMP_INDEX_LUT for mapping from DET gain index/CBW to comp. structure */
   MMRFC_DET_IQDNL_RESULT_T    det_iqdnl_fwd_cca[MMRFC_DET_GAIN_STEPS_DET_CAL]; //only for DET 40MHz

   /* Please refer to DET_TIA_COMP_INDEX_LUT/DET_CBW_COMP_INDEX_LUT for mapping from DET gain index/CBW to comp. structure */
   MMRFC_DET_IQDNL_RESULT_T    det_iqdnl_rev[MMRFC_DET_FE_GAIN_STEPS][MMRFC_TX_RAT_CBW_CFG_NUM]; //1.4MHz and 3MHz share the same config -> restore result per CBW(20150206)
   MMRFC_DET_DC_RESULT_T       det_dc_rev[MMRFC_DET_GAIN_STEPS_DET_CAL]; //17 DET gain step

   /* Please refer to DET_TIA_COMP_INDEX_LUT/DET_CBW_COMP_INDEX_LUT for mapping from DET gain index/CBW to comp. structure */
   MMRFC_DET_IQDNL_RESULT_T    det_iqdnl_rev_cca[MMRFC_DET_GAIN_STEPS_DET_CAL]; //only for DET 40MHz



   MMRFC_DET_EQLPF_CFG_T       det_pcb[MMRFC_DET_FE_GAIN_STEPS][MMRFC_TX_RAT_CBW_CFG_NUM]; 

   MMRFC_DET_EQLPF_CFG_T       det_pcb_cca[MMRFC_DET_GAIN_STEPS_DET_CAL];

   /* TX LO Cal */
   kal_uint32                  tx_lo;                 //CW714, {2'b00,V_TXLOCAP[6:0],V_TXLOIND,V_TXLOINBIAS[4:0],V_TXLOINBIAS[4:0]}
   kal_uint32                  tx_lo_ind;             //CW714[10]
   kal_uint32                  tx_lo_capcal_peak_cap; //CW714[17:11]
   kal_uint32                  tx_lo_in_bias_hpm;     //CW714[4:0]
   kal_uint32                  tx_lo_in_bias_lpm;     //CW714[9:5]   
   kal_int32                   stx_delta_duty_cycle;  //for calculating CW568 V_DCC_DELTA_NC[10:0] with different Nmmd
   
   /* TX RC */
   kal_int32                   tx_rc_lpf[MMRFC_TX_RAT_CBW_CFG_NUM]; //CW787, V_TXLPFCSEL[7:0], only 5 CBW for LPF but it will map to 6 LTE RF CBW for easy access
   kal_int32                   tx_rc_rcf;                       //CW793, V_TXRCFCSEL[6:0]

   /* TX IQDC */
   /* TXIQ: G0, G9, G10, G12a, G14a, G12b, G14b, G22  */
   /* TXDC: G0, G9, G10, G12a, G14a, G12b, G14b, G22  */
   /* freq_dep_phase_tx is temp output for FDIQ cal   */
   /* Please refer to TX_COMP_INDEX_PGA_A_LUT/TX_COMP_INDEX_PGA_B_LUT for mapping from TX gain index to comp. structure */
   MMRFC_TX_IQDC_RESULT_T      tx_iqdc_lin[MMRFC_TX_RAT_CBW_CFG_NUM][MMRFC_TX_PGA_SLICE_NUM+1]; //+1 for PGA-AUX
   MMRFC_TX_IQDC_RESULT_T      tx_iqdc_dpd[MMRFC_TX_RAT_CBW_CFG_NUM][MMRFC_TX_PGA_SLICE_NUM+1]; //+1 for PGA-AUX
   MMRFC_TX_FD_FILT_RESULT_T       tx_fdiq[MMRFC_TX_RAT_CBW_CFG_NUM][MMRFC_TX_PGA_SLICE_NUM+1]; //+1 for PGA-AUX

   /* TX DNL */
   kal_int32                   tx_dnl_lin_pga_a[MMRFC_TX_DNL_PGA_A_SEQ_NUM]; //20 gain diff
   kal_int32                   tx_dnl_lin_pga_b[MMRFC_TX_DNL_PGA_B_SEQ_NUM]; //15 gain diff

   /* TX GA */
   MMRFC_TX_GA_RESULT_T        tx_ga_wo_ET[MMRFC_TX_PGA_TYPE_NUM][MMRFC_TX_RAT_CBW_CFG_NUM]; //3 PGA type, 6CBW

   /* TX PGA Phase Step */
   kal_int32                   pga_phase_step;

   /* TX PGA Cap Tuning */
   MMRFC_CAP_TUNNING_SETTING_T cap_tuning_pga_a; //CW795, V_TX_BAL_CAPA_AACT[5:0],V_TX_BAL_CAPB_AACT[5:0]
   MMRFC_CAP_TUNNING_SETTING_T cap_tuning_pga_b; //CW796, V_TX_BAL_CAPA_BACT[5:0],V_TX_BAL_CAPB_BACT[5:0]

 
   /* TX PGA Pre-Cap Tuning, here mainly for TX GA TX-IO-OFF CBW case */
   MMRFC_CAP_TUNNING_SETTING_T pre_cap_tuning_pga_a; //CW795, V_TX_BAL_CAPA_AACT[5:0],V_TX_BAL_CAPB_AACT[5:0]
   MMRFC_CAP_TUNNING_SETTING_T pre_cap_tuning_pga_b; //CW796, V_TX_BAL_CAPA_BACT[5:0],V_TX_BAL_CAPB_BACT[5:0]

} MMRFC_RESULT_PER_BAND_T;

typedef struct
{
   kal_uint32 cap_id;
   kal_int32  pwr;
} MMPOC_TX_CAP_TUN_T;

/*===============================================================================*/
/*        Global Functions declaration (interface)                               */
/*===============================================================================*/
//MMRFC DFE Control
void MMRFC_TXK_AD_Ctrl(MMRFC_TXDFE_TXK_RAT_SEL_E rat, MMRFC_TXK_TRG_AD_T* p);

void MMRFC_TXK_IMM_Ctrl(MMRFC_TXDFE_TXK_RAT_SEL_E rat, const MMRFC_TXK_IMM_CFG_T* p);
void MMRFC_TXK_Update_Det_Dfe_DC_Comp(MMRFC_TXDFE_TXK_RAT_SEL_E rat, MMRFC_DET_DC_COMP_T* p);
void MMRFC_TXK_Update_Det_Dfe_Fiiq_Comp(MMRFC_TXDFE_TXK_RAT_SEL_E rat, MMRFC_DET_FIIQ_COMP_T* p);
void MMRFC_TXK_Update_Det_Dfe_Eqlpf_Comp(MMRFC_TXDFE_TXK_RAT_SEL_E rat, MMRFC_DET_EQLPF_CFG_T* p);

void MMRFC_TXK_Det_Dfe_Ctrl(MMRFC_TXDFE_TXK_RAT_SEL_E rat, const MMRFC_DET_DFE_CFG_T* p);
kal_bool MMRFC_TXK_Get_Status(MMRFC_TXDFE_TXK_RAT_SEL_E rat, MMRFC_MEAS_STATUS_E meas_sel);
void MMRFC_TXK_Get_Det_Result(MMRFC_TXDFE_TXK_RAT_SEL_E rat, MMRFC_IQK_MEAS_T* result, kal_uint32 meas_sel);
void MMRFC_TXK_Get_Tx_Result(MMRFC_TXDFE_TXK_RAT_SEL_E rat, MMRFC_TXK_MEAS_T* result, kal_uint32 meas_sel);
void MMRFC_TXK_Ctrl_Intra_CCA_Sw_En(MMRFC_TXDFE_TXK_RAT_SEL_E rat, kal_bool enable);
void MMRFC_TXK_Det_Gain_Ctrl(MMRFC_TXDFE_TXK_RAT_SEL_E rat, kal_bool enable, kal_uint32 det_gain_idx);
void MMRFC_TXK_Set_TX_DET_LPBK(MMRFC_TXDFE_TXK_RAT_SEL_E rat, kal_uint32 lpbk_enable);
void MMRFC_TXK_Afifo_Workaround( MMRFC_TXDFE_TXK_RAT_SEL_E rat, kal_bool enable );

kal_bool MML1_CIM3_Fac_Get_HW_AVG_BUF_Status( void );
void MML1_CIM3_Fac_Get_HW_AVG_BUF_Result( MMRFC_CIM3_FAC_AVG_BUF_RESULT_T *result );

//MMRFC POC main function
void MML1_RF_MMPOCDoCal(MMRFC_RAT_E                       rat,
                        MMRFC_XL1_BAND_SUPPORT_CAPABILITY_T* band_cap_p,
                        kal_uint32                          cal_item_list_bitmap);

//MMRFC RF CW Control
kal_uint8 MML1_RF_BandToHLB(MMRFC_XL1_BAND_NUM_E rf_band);
MMRFC_XL1_BAND_DEF_E MML1_RF_POC_TX_BandToHMLB(MMRFC_XL1_BAND_NUM_E rf_band);



//MMRFC Factory Calibration Tx Control 

//93 RXMS
void MMRFC_RXDFE_MS_Get_Iqk_Result(MMRFC_RXMS_IQK_RESULT_T* result, MMRXDFE_P_PATH_SEL_E path_sel, MMRFC_ANT_BITMAP_E ant_bmp);
void MMRFC_RXDFE_MS_Get_Dck_Result(MMRFC_RXMS_DCK_RESULT_T* result, MMRXDFE_P_PATH_SEL_E path_sel, MMRFC_ANT_BITMAP_E ant_bmp);
void MMRFC_RXDFE_MS_Get_Iip2k_Result(MMRFC_RXMS_IIP2K_RESULT_T* result, MMRXDFE_C_PATH_SEL_E path_sel, MMRFC_ANT_BITMAP_E ant_bmp);
void MMRFC_RXDFE_MS_Get_Ib_Result(MMRFC_RX_IB_POWER_T* result);
kal_bool MMRFC_RXDFE_MS_Check_Iqk_Rdy_Bit(MMRXDFE_P_PATH_SEL_E path_sel, MMRFC_ANT_BITMAP_E ant_bmp);
kal_bool MMRFC_RXDFE_MS_Check_Dck_Rdy_Bit(MMRXDFE_P_PATH_SEL_E path_sel, MMRFC_ANT_BITMAP_E ant_bmp);
kal_bool MMRFC_RXDFE_MS_Check_Iip2k_Rdy_Bit(MMRXDFE_C_PATH_SEL_E path_sel, MMRFC_ANT_BITMAP_E ant_bmp);
void MMRFC_RXDFE_MS_RC_Config(MMRFC_RXMEAS_RC_CONFIG_E rc_config);
MMRFC_RX_IB_POWER_T* MMRFC_RXDFE_MS_Get_Irq_Ib_Power_Addr(void);
kal_bool MMRFC_RXDFE_MS_Get_Ib_Power_Valid_Flag(void);
void MMRFC_RXDFE_MS_Reset_Ib_Power_Valid_Flag(void);
void MMRFC_RXDFE_MS_Rxk_Readback_Irq_Handler(void);

//TODO93: Remove it
void MMRFC_RXDFE_MS_Rxk_Result_Reassign(MMRFC_RXMS_IIP2K_RESULT_T* rxk_meas_result_ptr,const kal_uint16 result_num, MMRFC_RXK_MEAS_T* rxk_meas_ptr, kal_uint32 ant_idx);


//MMRFC TX POC TXDFE Control
void MMRFC_TXDFE_SW_Mode_Cfg_Win_On(MMRFC_TXDFE_TXK_RAT_SEL_E rat, MMRFC_TXDFE_SW_TTG_SETTING_SEL_E ttg_setting_sel, MMRFC_TXDFE_RFPATH_SEL_E txdfe_rfpath_sel );
void MMRFC_TXDFE_SW_Mode_Cfg_Win_Off(MMRFC_TXDFE_TXK_RAT_SEL_E rat, MMRFC_TXDFE_RFPATH_SEL_E txdfe_rfpath_sel );
void MMRFC_TXDFE_Set_DAC_Rate(MMRFC_TXDFE_TXK_RAT_SEL_E rat, MMRFC_TXDFE_RFPATH_SEL_E txdfe_rfpath_sel, MMRFC_DAC_RATE_E rate);
void MMRFC_TXDFE_SW_Mode_Config(MMRFC_TXDFE_TXK_RAT_SEL_E rat, MMRFC_TX_RAT_CBW_CFG_E cbw_idx, kal_uint32 pga_gain_idx, MMRFC_TXDFE_RFPATH_SEL_E txdfe_rfpath_sel );
void MMRFC_TXDFE_SW_Mode_Win_Ctrl(MMRFC_TXDFE_TXK_RAT_SEL_E rat, kal_bool sw_win, MMRFC_TXDFE_RFPATH_SEL_E txdfe_rfpath_sel);
void MMRFC_TXDFE_SW_FEC_TRIG(MMRFC_TXDFE_TXK_RAT_SEL_E rat, MMRFC_TXDFE_RFPATH_SEL_E txdfe_rfpath_sel);
void MMRFC_TXDFE_Set_TTG_config(MMRFC_TXDFE_TXK_RAT_SEL_E rat, MMRFC_TXDFE_TTG_INDEX_E tone_idx, const MMRFC_TXDFE_TTG_CTRL_T *p );
void MMRFC_TXDFE_TTG_Gain_Switch(MMRFC_TXDFE_TXK_RAT_SEL_E rat, MMRFC_TXDFE_TTG_GAIN_SWTICH_E ttg_gain_ctrl);
void MMRFC_TXDFE_PARAM_COMP (RF_COMP_INDEX_E comp_idx, MMRFC_TX_RAT_CBW_CFG_E cbw_cfg, MMRFC_RAT_E rat, MMRFC_XL1_BAND_NUM_E band, kal_uint8 curr_band_idx);
void MMRFC_TXDFE_SW_Intra_Band_CCA_Con(MMRFC_TXDFE_TXK_RAT_SEL_E rat, kal_bool enable );
void MMRFC_TXDFE_SW_TPC_Mode_Cfg(MMRFC_TXDFE_TXK_RAT_SEL_E rat, MMRFC_TXDFE_RFPATH_SEL_E txdfe_rfpath_sel, kal_bool sw_tpc_en );
void MMRFC_TXDFE_Gain_Backoff_Init( MMRFC_TXDFE_TXK_RAT_SEL_E rat );

//MMRFC TXDFE compenstion
void MMRFC_TX_PARAM_COMP(RF_COMP_INDEX_E comp_idx, 
                         MMRFC_TX_RAT_CBW_CFG_E cbw_cfg, 
                         MMRFC_TXDFE_TX_DC_COMP_TAB_T* tx_dc, 
                         MMRFC_TXDFE_TX_IQ_COMP_TAB_T* tx_iq,
                         MMRFC_TXDFE_FDAD_COMP_COEFF_TAB_T* tx_fdiq,
                         MMRFC_TXDFE_ASYMM_COMP_COEFF_TAB_T* tx_ga);

//MMRFC DET POC DETDFE Control
void MMRFC_DETDFE_PARAM_COMP (RF_COMP_INDEX_E comp_idx, 
                                MMRFC_TX_RAT_CBW_CFG_E cbw_case_idx,
                                MMRFC_DETDFE_TIA_GAIN_IDX_E fe_gain,
                                kal_uint32 det_gain_step, 
                                MMRFC_RAT_E rat, 
                                kal_uint32 route_idx);


MMPOC_TX_CAP_TUN_T MML1_RF_search_MAX(MMPOC_TX_CAP_TUN_T a, MMPOC_TX_CAP_TUN_T b, MMPOC_TX_CAP_TUN_T c,kal_bool is_3_value_compare);
kal_uint32 MMRFC_Unsign_Round_N_Saturate_2(kal_uint32 in, kal_int16 out_wl, kal_int16 sh);
void MMRFC_Log2_2_Lin_Table(kal_uint32 *man,kal_int16  *expo,kal_int32  in, kal_int16  in_wl,kal_int16  in_Q, kal_int16  exp_wl,kal_int16  man_Q,kal_uint32 *table,kal_int16   Qtx,kal_int16  Qty); 
kal_uint16 MMRFC_Log10_2_Lin (kal_int32 in_dB10, kal_int16 in_wl, kal_int16 in_frac, kal_int16 out_wl);
#if MMRFC_ANALYSE_TOOL_TRACE
void MMRFC_Analyse_Tool_Counter_Reset();
#endif
//PORPOC
void MMRFC_POR_POC_Cal(void);

#if IS_MML1_FPGA_MT6293 //for FPGA debug
   void MMRFC_RXDFE_TTG_Common_Setting(MMRFC_RXDFE_TTG_COMMON_T* common_settings);
   void MMRFC_RXDFE_TTG_Config_Setting(MMRFC_RXDFE_TTG_CONFIG_T* config_settings);
#endif

#if IS_MML1_RF_MT6177L
#define IS_MMRFC_TDD_HANDOVER_TEST_CASE_FAIL_WORKAROUND_SUPPORT    1

   #if IS_MMRFC_TDD_HANDOVER_TEST_CASE_FAIL_WORKAROUND_SUPPORT
extern kal_uint32 MML1_RF_POC_Get_CW447_Value( void );
   #endif
#endif

void MML1_RF_GET_TXDFE_PGA_TABLE_ADDR(MMRFC_PGA_GAIN_SLICE_E slice_type, const MMRFC_TX_COMP_INDEX_E** pga_table_p, kal_uint32* table_size_p);


#endif /* End of #ifndef _MML1_RF_CAL_INTERFACE_H_ */

