/******************************************************************************
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

/******************************************************************************
 *
 * Filename:
 * ---------
 *   FEC_CAL_DATA_DIM.h
 *
 * Project:
 * --------
 *   TK6291 Project
 *
  * Description:
 * ------------
 *   Dimennsion of Calibration data
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
 *******************************************************************************/


#ifndef _FEC_CAL_DATA_DIM_H_
#define _FEC_CAL_DATA_DIM_H_


/************************************************************************************
* #include
************************************************************************************/



/************************************************************************************
* #define
************************************************************************************/


#define FEC_LTE_TX_CBW_NUM                                  7
#define FEC_LTE_DET_CBW_NON_CCA_NUM                         6


#define FEC_CAL_TEMP_SECTION_LTE                            8
#define FEC_CAL_EARFCN_SECTION_LTE                          15
#define FEC_CAL_EARFCN_SECTION                              21
#define FEC_ETPC_PA_MODE_NUM                                3
#define FEC_ETPC_VCC_IDX_NUM                                8
#define FEC_LTE_TPC_NUM_OF_PA_MODE                          3


#define FEC_TX_DNL_PGA_A_GAIN_STEPS                         21
#define FEC_TX_DNL_PGA_B_GAIN_STEPS                         10
#define FEC_TX_DNL_PGA_AUX_GAIN_STEPS                       7
#define FEC_TX_PGA_GAIN_STEP_SUBBAND_NUM                    12 //< 12 subband for PGA gain step cal

#define FEC_DET_GAIN_STEPS                                  15
#define FEC_ETPC_GAIN_ASYM_NUM                              12
#define FEC_TX_PGA_TYPE_NUM                                 3
#define FEC_DET_FE_GAIN_STEPS                               2
#define FEC_FILT_TAPS_NUM                                   7   ///< maximum numbers of compensation filter taps 
#define FEC_DET_TPC_EQLPF_TAP_NUM                           11


#define FEC_LTE_TPC_RF_PGA_A_NUM                            (FEC_TX_DNL_PGA_A_GAIN_STEPS)
#define FEC_LTE_TPC_RF_PGA_A_CW_NUM                         (1)
#define FEC_LTE_TPC_RF_PGA_B_NUM                            (FEC_TX_DNL_PGA_B_GAIN_STEPS + FEC_TX_DNL_PGA_AUX_GAIN_STEPS)
#define FEC_LTE_TPC_RF_PGA_B_CW_NUM                         (1)
#define FEC_LTE_TPC_RF_DET_NUM                              (15)
#define FEC_LTE_TPC_RF_DET_CW_NUM                           (1)
#define FEC_LTE_TPC_RF_DET_LNA_ALGO_NUM                     (3)
#define FEC_LTE_TPC_PGA_AB_OVERLAP                          (10)


#define FEC_LTE_MIPI_TPC_EVENT_NUM                          (6)
#define FEC_LTE_MIPI_TPC_DATA_NUM                           (6)
#define FEC_LTE_MIPI_TPC_SECTION_NUM                        (8 + 1)


#define FEC_LTE_TPC_CAL_DATA_CHECK_VAL                      (0x0FEC1000)
#define FEC_LTE_TPC_MIPI_DATA_CHECK_VAL                     (0x0FEC1001)
#define FEC_LTE_DPD_CAL_DATA_CHECK_VAL                      (0x0FEC1002)
#define FEC_LTE_DPD_MIPI_DATA_CHECK_VAL                     (0x0FEC1003)


#define FEC_TXGA_MAX_TONE_PAIRS                             6   ///< maximum numbers of test tone pairs for TXGA
#define FEC_TXGA_MAX_TONE_PAIRS_PADDED                      3   ///< maximum numbers of padded tone pairs for TXGA
#define FEC_TXGA_MAX_TONES                                  FEC_TXGA_MAX_TONE_PAIRS*2         ///< maximum numbers of test tones for TXGA
#define FEC_TXGA_MAX_TONES_PADDED                           FEC_TXGA_MAX_TONE_PAIRS_PADDED*2  ///< maximum numbers of padded tones for TXGA

/************************************************************************************
* typedef
************************************************************************************/
/** Structure Prototypes can be seen by other files**/



/************************************************************************************
* Global Functions Prototype (Interface)
************************************************************************************/
/** Function Prototypes can be used by other files**/


#endif
