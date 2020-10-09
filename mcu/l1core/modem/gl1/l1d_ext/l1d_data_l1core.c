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
 *   l1d_data_l1core.c
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   Definition of global data & tables used in L1D
 *
 * Author:
 * -------
 * -------
 *
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
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
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
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
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
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
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
 *
 *
 * removed!
 * removed!
 * removed!
 *
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
 *
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
 *
 * removed!
 * removed!
 *
 *******************************************************************************/

#include  "l1d_cid.h"
#include  "l1d_loc_def.h"
#include  "l1d_reg.h"
#include  "l1d_data_l1core.h"
#include  "l1d_rf_l1core.h"
#include  "m12190_l1core.h"
#include  "l1d_public.h"

/*...........................................................................*/
#if   (INTERNDATA_L1D_DATA==INTERN_FULL)
#define IS_INTERNDATA_LEVEL1     1
#else
#define IS_INTERNDATA_LEVEL1     0
#endif
/*...........................................................................*/

/* ========================================================================= */
#if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
/* the following define moved to L1D_RF_Custom_Timing_Table_Update TQ_FSWin_DTIRQ_Delay and TQ_FBWin_Start_Offset for tk6291 cross-core modification */
#else
   #if IS_BSI_SX0_SUPPORT && (QB_SR0!=(-10000))
#define  TQ_FBWIN_START_OFFSET   (TQ_SR0+TQ_SBWIN_DSP_EXTEND1+TQ_BURST_HEAD_GUARD)
   #else
#define  TQ_FBWIN_START_OFFSET   (TQ_SR1+TQ_SBWIN_DSP_EXTEND1+TQ_BURST_HEAD_GUARD)
   #endif
#define  TQ_FSWIN_DTIRQ_DELAY    ((TQ_SLOT_LEN-TQ_FBWIN_START_OFFSET-TQ_SBWIN_DSP_EXTEND2)/2)
#endif

#if IS_BSI_SX0_SUPPORT
   #if !defined(SX0_DATA_COUNT)
#error "SX0_DATA_COUNT should be defined in l1d_rf.h of specific RF driver, use 0 if no data"
#error "L1D_RF_SetSData_SR0(), L1D_RF_SetSData_ST0() should be defined in m12195.c of specific RF driver"
   #endif
#endif

/* ========================================================================= */

#include "l1_interface_reg.h"

/* Compile option consistency check */
#if (IS_GSM && !MD_DRV_IS_GSM) || (!IS_GSM && MD_DRV_IS_GSM)
#error "Please check the compile option defined in l1_option.h"
#endif

#if (IS_GPRS && !MD_DRV_IS_GPRS) || (!IS_GPRS && MD_DRV_IS_GPRS)
#error "Please check the compile option defined in l1_option.h"
#endif

#if (IS_EGPRS && !MD_DRV_IS_EGPRS) || (!IS_EGPRS && MD_DRV_IS_EGPRS)
#error "Please check the compile option defined in l1_option.h"
#endif

#if (IS_EPSK_TX_SUPPORT && !MD_DRV_IS_EPSK_TX_SUPPORT) || (!IS_EPSK_TX_SUPPORT && MD_DRV_IS_EPSK_TX_SUPPORT)
#error "Please check the compile option defined in l1_option.h"
#endif

#if (IS_CENTRALIZED_SMM_CHIP && !MD_DRV_IS_CENTRALIZED_SMM_CHIP) || (!IS_CENTRALIZED_SMM_CHIP && MD_DRV_IS_CENTRALIZED_SMM_CHIP)
#error "Please check the compile option defined in l1_option.h"
#endif

#if (IS_AST_B2S_SUPPORT && !MD_DRV_IS_AST_B2S_SUPPORT) || (!IS_AST_B2S_SUPPORT && MD_DRV_IS_AST_B2S_SUPPORT)
#error "Please check the compile option defined in l1_option.h"
#endif

#if (IS_FOR_FACTORY_MODE_ONLY && !MD_DRV_IS_FOR_FACTORY_MODE_ONLY) || (!IS_FOR_FACTORY_MODE_ONLY && MD_DRV_IS_FOR_FACTORY_MODE_ONLY)
#error "Please check the compile option defined in l1_option.h"
#endif

#if (IS_FHC_SUPPORT && !MD_DRV_IS_FHC_SUPPORT) || (!IS_FHC_SUPPORT && MD_DRV_IS_FHC_SUPPORT)
#error "Please check the compile option defined in l1_option.h"
#endif

#if (IS_NSFT_SUPPORT && !MD_DRV_IS_NSFT_SUPPORT) || (!IS_NSFT_SUPPORT && MD_DRV_IS_NSFT_SUPPORT)
#error "Please check the compile option defined in l1_option.h"
#endif

#if (IS_NSFT_LIST_MODE_SUPPORT && !MD_DRV_IS_NSFT_LIST_MODE_SUPPORT) || (!IS_NSFT_LIST_MODE_SUPPORT&& MD_DRV_IS_NSFT_LIST_MODE_SUPPORT)
#error "Please check the compile option defined in l1_option.h"
#endif

#if (IS_SINGLE_END_BER_SUPPORT && !MD_DRV_IS_SINGLE_END_BER_SUPPORT) || (!IS_SINGLE_END_BER_SUPPORT && MD_DRV_IS_SINGLE_END_BER_SUPPORT)
#error "Please check the compile option defined in l1_option.h"
#endif

#if (IS_NSFT_SACCH_TEST_ITEM_SUPPORT && !MD_DRV_IS_NSFT_SACCH_TEST_ITEM_SUPPORT) || (!IS_NSFT_SACCH_TEST_ITEM_SUPPORT && MD_DRV_IS_NSFT_SACCH_TEST_ITEM_SUPPORT)
#error "Please check the compile option defined in l1_option.h"
#endif

#if (IS_MULTISLOT_TX_SUPPORT && !MD_DRV_IS_MULTISLOT_TX_SUPPORT) || (!IS_MULTISLOT_TX_SUPPORT && MD_DRV_IS_MULTISLOT_TX_SUPPORT)
#error "Please check the compile option defined in l1_option.h"
#endif

#if (IS_VCXO_LC_SUPPORT && !MD_DRV_IS_VCXO_LC_SUPPORT) || (!IS_VCXO_LC_SUPPORT && MD_DRV_IS_VCXO_LC_SUPPORT)
#error "Please check the compile option defined in l1_option.h"
#endif

#if (IS_TX_POWER_CONTROL_SUPPORT && !MD_DRV_IS_TX_POWER_CONTROL_SUPPORT) || (!IS_TX_POWER_CONTROL_SUPPORT && MD_DRV_IS_TX_POWER_CONTROL_SUPPORT)
#error "Please check the compile option defined in l1_option.h"
#endif

#if (IS_TXPC_CL_AUXADC_SUPPORT && !MD_DRV_IS_TXPC_CL_AUXADC_SUPPORT) || (!IS_TXPC_CL_AUXADC_SUPPORT && MD_DRV_IS_TXPC_CL_AUXADC_SUPPORT)
#error "Please check the compile option defined in l1_option.h"
#endif

#if (IS_W_CANCELLATION_SUPPORT && !MD_DRV_IS_W_CANCELLATION_SUPPORT) || (!IS_W_CANCELLATION_SUPPORT && MD_DRV_IS_W_CANCELLATION_SUPPORT)
#error "Please check the compile option defined in l1_option.h"
#endif

#if (IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2 && !MD_DRV_IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2) || (!IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2 && MD_DRV_IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2)
#error "Please check the compile option defined in l1_option.h"
#endif

#if (IS_UDVT_FH_SUPPORT && !MD_DRV_IS_UDVT_FH_SUPPORT) || (!IS_UDVT_FH_SUPPORT && MD_DRV_IS_UDVT_FH_SUPPORT)
#error "Please check the compile option defined in l1_option.h"
#endif

#if (IS_32K_CRYSTAL_REMOVAL_SUPPORT && !MD_DRV_IS_32K_CRYSTAL_REMOVAL_SUPPORT) || (!IS_32K_CRYSTAL_REMOVAL_SUPPORT && MD_DRV_IS_32K_CRYSTAL_REMOVAL_SUPPORT)
#error "Please check the compile option defined in l1_option.h"
#endif

#if (IS_TX_GAIN_RF_CALIBRATION_SUPPORT && !MD_DRV_IS_TX_GAIN_RF_CALIBRATION_SUPPORT) || (!IS_TX_GAIN_RF_CALIBRATION_SUPPORT && MD_DRV_IS_TX_GAIN_RF_CALIBRATION_SUPPORT)
#error "Please check the compile option defined in l1_option.h"
#endif

#if IS_COSIM_ON_L1SIM_SUPPORT
#elif (IS_BPI_DATA_32_BIT_CHIP && !MD_DRV_IS_BPI_DATA_32_BIT_CHIP) || (!IS_BPI_DATA_32_BIT_CHIP && MD_DRV_IS_BPI_DATA_32_BIT_CHIP)
#error "Please check the compile option defined in l1_option.h"
#endif

#if IS_COSIM_ON_L1SIM_SUPPORT
#elif (IS_BPI_DATA_48_BIT_CHIP && !MD_DRV_IS_BPI_DATA_48_BIT_CHIP) || (!IS_BPI_DATA_48_BIT_CHIP && MD_DRV_IS_BPI_DATA_48_BIT_CHIP)
#error "Please check the compile option defined in l1_option.h"
#endif

#if (IS_MD2G_PWD_DEFAULT_SW_MODE && !MD_DRV_IS_MD2G_PWD_DEFAULT_SW_MODE) || (!IS_MD2G_PWD_DEFAULT_SW_MODE && MD_DRV_IS_MD2G_PWD_DEFAULT_SW_MODE)
#error "Please check the compile option defined in l1_option.h"
#endif

/* Constant consistency check */
#if MD_DRV_TQ_AFC_READY != TQ_AFC_READY
#error "Please check the definition of MD_DRV_TQ_AFC_READY in l1_interface_reg.h"
#endif

#if IS_COSIM_ON_L1SIM_SUPPORT
#elif MD_DRV_TQ_MAXIMUM != TQ_MAXIMUM
#error "Please check the definition of MD_DRV_TQ_MAXIMUM in l1_interface_reg.h"
#endif

#if MD_DRV_TQ_CTIRQ1 != TQ_CTIRQ1
#error "Please check the definition of MD_DRV_TQ_CTIRQ1 in l1_interface_reg.h"
#endif

#if MD_DRV_TQ_WRAP_COUNT != TQ_WRAP_COUNT
#error "Please check the definition of MD_DRV_TQ_WRAP_COUNT in l1_interface_reg.h"
#endif

#if MD_DRV_TQ_VALIDATE_COUNT != TQ_VALIDATE_COUNT
#error "Please check the definition of MD_DRV_TQ_VALIDATE_COUNT in l1_interface_reg.h"
#endif

#if MD_DRV_EVTENA0_SLOW_EN_SEL != EVTENA0_SLOW_EN_SEL
#error "Please check the definition of MD_DRV_EVTENA0_SLOW_EN_SEL in l1_interface_reg.h"
#endif

#if (IS_MIPI_SUPPORT && !MD_DRV_IS_2G_MIPI_SUPPORT) || (!IS_MIPI_SUPPORT && MD_DRV_IS_2G_MIPI_SUPPORT)
#error "Please check the definition of IS_MIPI_SUPPORT in l1d_cid.h"
#error "Please check the definition of MD_DRV_IS_2G_MIPI_SUPPORT in l1_option.h"
#endif

/* ========================================================================= */

/* #if  (IS_CHIP_MT6205)||(IS_CHIP_MT6208)||(IS_FPGA_TARGET) */
/*--------------------------------------------------------*/
/*   RX GAIN SETTING                                      */
/*--------------------------------------------------------*/
/* Value | Single-End_Voltage  |                          */
/*-------+---------------------|                          */
/*   0   |     AVDD*0.8        |                          */
/*   1   |     AVDD*0.4        |                          */
/*--------------------------------------------------------*/

#if   BBRX_GAIN_DOUBLE==0
#define RX_GAIN_SE  (float)0.8
#elif BBRX_GAIN_DOUBLE==1
#define RX_GAIN_SE  (float)0.4
#endif

#if IS_CHIP_MT6205_AND_LATTER_VERSION || IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
/*----------------------------------------------*/
/*                  BBTX_GAIN                   */
/*----------------------------------------------*/
/* Value | Output Swing || Value | Output Swing */
/*-------+--------------||-------+--------------*/
/*   3   |  AVDD*0.900  ||   7   |  AVDD*0.360  */
/*   2   |  AVDD*0.720  ||   6   |  AVDD*0.288  */
/*   1   |  AVDD*0.576  ||   5   |  AVDD*0.225  */
/*   0   |  AVDD*0.450  ||   4   |  AVDD*0.180  */
/*----------------------------------------------*/
   #if   BBTX_GAIN==3
#define TX_GAIN_DIFF  (float)0.900
   #elif BBTX_GAIN==2
#define TX_GAIN_DIFF  (float)0.720
   #elif BBTX_GAIN==1
#define TX_GAIN_DIFF  (float)0.576
   #elif BBTX_GAIN==0
#define TX_GAIN_DIFF  (float)0.450
   #elif (BBTX_GAIN==-1)||(BBTX_GAIN==7)
#define TX_GAIN_DIFF  (float)0.360
   #elif (BBTX_GAIN==-2)||(BBTX_GAIN==6)
#define TX_GAIN_DIFF  (float)0.288
   #elif (BBTX_GAIN==-3)||(BBTX_GAIN==5)
#define TX_GAIN_DIFF  (float)0.225
   #elif (BBTX_GAIN==-4)||(BBTX_GAIN==4)
#define TX_GAIN_DIFF  (float)0.180
   #endif

#endif

#if IS_CHIP_MT6205B
/*----------------------------------------------*/
/*                  BBTX_GAIN                   */
/*----------------------------------------------*/
/* Value | Output Swing || Value | Output Swing */
/*-------+--------------||-------+--------------*/
/*   3   |  AVDD*0.53   ||   7   |  AVDD*0.38   */
/*   2   |  AVDD*0.49   ||   6   |  AVDD*0.36   */
/*   1   |  AVDD*0.46   ||   5   |  AVDD*0.33   */
/*   0   |  AVDD*0.41   ||   4   |  AVDD*0.31   */
/*----------------------------------------------*/
   #if   BBTX_GAIN==3
#define TX_GAIN_DIFF  (float)0.53
   #elif BBTX_GAIN==2
#define TX_GAIN_DIFF  (float)0.49
   #elif BBTX_GAIN==1
#define TX_GAIN_DIFF  (float)0.46
   #elif BBTX_GAIN==0
#define TX_GAIN_DIFF  (float)0.41
   #elif (BBTX_GAIN==-1)||(BBTX_GAIN==7)
#define TX_GAIN_DIFF  (float)0.38
   #elif (BBTX_GAIN==-2)||(BBTX_GAIN==6)
#define TX_GAIN_DIFF  (float)0.36
   #elif (BBTX_GAIN==-3)||(BBTX_GAIN==5)
#define TX_GAIN_DIFF  (float)0.33
   #elif (BBTX_GAIN==-4)||(BBTX_GAIN==4)
#define TX_GAIN_DIFF  (float)0.31
   #endif

#endif

/*...........................................................................*/
#if defined(__MTK_TARGET__) && defined(__ARMCC_VERSION)
#if IS_INTERNDATA_LEVEL1
#pragma arm section rwdata = "INTSRAM_RW" , rodata = "INTSRAM_RODATA" , zidata = "INTSRAM_ZI"
#else
#pragma arm section rwdata , rodata , zidata
#endif
#endif /* __MTK_TARGET__ */
/*...........................................................................*/

#if IS_CHIP_MT6218_AND_LATTER_VERSION || IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION /* 14-bit RXADC */
/*MT6218~*/ const  float bb_cali_scale=((2*RX_GAIN_SE/16383)/(TX_GAIN_DIFF/1023));
#else                                 /* 11-bit RXADC */
/*OTHER*/   const  float bb_cali_scale=((2*RX_GAIN_SE/2047)/(TX_GAIN_DIFF/1023));
#endif

#if IS_EDGE_SAIC_CHIP_MT6238_AND_LATTER_VERSION
const signed long bb_tx_opt_swing_dac_sqr=((BBTX_GAIN_SWING*5420)/(2*1120))*((BBTX_GAIN_SWING*5420)/(2*1120));    //MT6238 Rx ADC short of 2dB
#elif IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION || IS_CHIP_MT6225_AND_LATTER_VERSION
const signed long bb_tx_opt_swing_dac_sqr=((BBTX_GAIN_SWING*6912)/(2*1120))*((BBTX_GAIN_SWING*6912)/(2*1120));
#elif IS_CHIP_MT6218B_AND_LATTER_VERSION
const signed long bb_tx_opt_swing_dac_sqr=((BBTX_GAIN_SWING*5184)/(2*1120))*((BBTX_GAIN_SWING*5184)/(2*1120));
#endif

/*----------------------------------------*/
/* Calibration data for round trip delay  */
/*----------------------------------------*/
CONST  short  TxPropagationDelay = 0;   //TX_PROPAGATION_DELAY;

/*----------------------------------------*/
/* data for BFE setting                   */
/*----------------------------------------*/
#if IS_BBTXRX_CHIP_DESIGN_VER_2 || IS_BBTXRX_CHIP_DESIGN_VER_3
const unsigned char bbrx_iq_swap               = (0x01& BBRX_IQ_SWAP              );
const unsigned char bbtx_iq_swap               = (0x01& BBTX_IQ_SWAP              );
const unsigned char bbtx_common_mode_voltage   = (0x03& BBTX_COMMON_MODE_VOLTAGE  );
const unsigned char bbtx_offset_i              = (0xFF& BBTX_OFFSET_I             );
const unsigned char bbtx_offset_q              = (0xFF& BBTX_OFFSET_Q             );
const unsigned char bbtx_phseli                = (0x3F& BBTX_PHSEL_I              );
const unsigned char bbtx_phselq                = (0x3F& BBTX_PHSEL_Q              );
const unsigned char bbtx_rpsel                 = (0x03& BBTX_RPSEL                );
const unsigned char bbtx_inten                 = (0x01& BBTX_INTEN                );
const unsigned char bbtx_sw_qbcnt              = (0x1F& BBTX_SW_QBCNT             );
const unsigned char bbtx_gain_comp             = (0x3F& BBTX_GAIN_COMP            );
const unsigned char bbtx_iqgain_sel            = (0x3F& BBTX_IQGAIN_SEL           );
const unsigned char bbtx_epsk_dtap_sym         = (0x03& BBTX_EPSK_DTAP_SYM        );
#else
const unsigned char bbrx_iq_swap               = (0x01& BBRX_IQ_SWAP              );
const unsigned char bbrx_gain_double           = (0x01& BBRX_GAIN_DOUBLE          );
const unsigned char bbtx_iq_swap               = (0x01& BBTX_IQ_SWAP              );
const unsigned char bbtx_calrcsel              = (0x07& BBTX_CALRCSEL             );
   #if IS_CHIP_MT6225_AND_LATTER_VERSION || IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
const unsigned char bbtx_calbias               = (0x0F& BBTX_CALBIAS              );//for upper chip BBTX_CALBIAS is 4bits
   #else
const unsigned char bbtx_calbias               = (0x1F& BBTX_CALBIAS              );
   #endif
const unsigned char bbtx_common_mode_voltage   = (0x07& BBTX_COMMON_MODE_VOLTAGE  );
const unsigned char bbtx_gain                  = (0x07& BBTX_GAIN                 );
const unsigned char bbtx_trim_i                = (0x0F& BBTX_TRIM_I               );
const unsigned char bbtx_trim_q                = (0x0F& BBTX_TRIM_Q               );
   #if IS_CHIP_MT6225_AND_LATTER_VERSION || IS_SAIC_CHIP_MT6223_AND_LATTER_VERSION
const unsigned char bbtx_dccoarse_i            = (0x03& BBTX_DCCOARSE_I           );
const unsigned char bbtx_dccoarse_q            = (0x03& BBTX_DCCOARSE_Q           );
   #endif
const unsigned char bbtx_offset_i              = (0x3F& BBTX_OFFSET_I             );
const unsigned char bbtx_offset_q              = (0x3F& BBTX_OFFSET_Q             );
   #if IS_EDGE_SAIC_CHIP_MT6238_AND_LATTER_VERSION
const unsigned char bbtx_phsel                 = (0x0F& BBTX_PHSEL                );
   #else
const unsigned char bbtx_phsel                 = (0x07& BBTX_PHSEL                );
   #endif

   #if IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
const unsigned char bbtx_calrcsel_h            = (0x07& BBTX_CALRCSEL_H           );
const unsigned char bbtx_common_mode_voltage_h = (0x07& BBTX_COMMON_MODE_VOLTAGE_H);
const unsigned char bbtx_gain_h                = (0x07& BBTX_GAIN_H               );
const unsigned char bbtx_trim_i_h              = (0x0F& BBTX_TRIM_I_H             );
const unsigned char bbtx_trim_q_h              = (0x0F& BBTX_TRIM_Q_H             );
      #if IS_SAIC_CHIP_MT6223_AND_LATTER_VERSION
const unsigned char bbtx_dccoarse_i_h          = (0x03& BBTX_DCCOARSE_I_H         );
const unsigned char bbtx_dccoarse_q_h          = (0x03& BBTX_DCCOARSE_Q_H         );
      #endif
const unsigned char bbtx_offset_i_h            = (0x3F& BBTX_OFFSET_I_H           );
const unsigned char bbtx_offset_q_h            = (0x3F& BBTX_OFFSET_Q_H           );
      #if IS_EDGE_SAIC_CHIP_MT6238_AND_LATTER_VERSION
const unsigned char bbtx_phsel_h               = (0x0F& BBTX_PHSEL_H              );
      #else
const unsigned char bbtx_phsel_h               = (0x07& BBTX_PHSEL_H              );
      #endif
      #if !IS_CHIP_MT6223 && !IS_CHIP_MT6253 /*MT6223 and MT 6253T don't support 8PSK*/
const unsigned char bbtx_rpsel                 = (0x03& BBTX_RPSEL                );
const unsigned char bbtx_inten                 = (0x01& BBTX_INTEN                );
const unsigned char bbtx_sw_qbcnt              = (0x1F& BBTX_SW_QBCNT             );
      #endif
   #endif

   #if IS_CHIP_MT6227
const unsigned char bbtx_iqswap_onfly          = (0x01& BBTX_IQSWAP_ONFLY         );
   #endif
#endif

/*----------------------------------------*/
/* data for BBTX setting                  */
/*----------------------------------------*/
CONST int apc_bat_voltage_period     = 0;   //BAT_VOLTAGE_SAMPLE_PERIOD;
CONST int apc_bat_voltage_count      = 0;   //BAT_VOLTAGE_AVERAGE_COUNT;
CONST int apc_bat_temperature_period = 0;   //BAT_TEMPERATURE_SAMPLE_PERIOD;
CONST int apc_bat_temperature_count  = 0;   //BAT_TEMPERATURE_AVERAGE_COUNT;
CONST int apc_rf_temperature_period  = 0;   //RF_TEMPERATURE_SAMPLE_PERIOD;
CONST int apc_rf_temperature_count   = 0;   //RF_TEMPERATURE_AVERAGE_COUNT;

/*--------------------------------------------------------*/
/* data for BDL/BUL data                                  */
/*--------------------------------------------------------*/
const unsigned short bdlcon_data  = BDLCON_DATA;
const unsigned short bulcon1_data = BULCON1_DATA;
CONST unsigned short bulcon2_data = 0;   //BULCON2_DATA;
#if IS_TDMA_AD_DA_WINDOW_SUPPORT
const unsigned short bdlcon2_data = BDLCON2_DATA;
const unsigned short bulcon3_data = BULCON3_DATA;
#endif

unsigned short qb_boff_2_idle = 0;

/* ========================================================================= */

const short TQ_Afc_ChargeInIdle_VCXO   = TQ_AFC_CHARGE_IN_IDLE_VCXO;
const short TQ_Afc_ChargeInIdle_VCTCXO = TQ_AFC_CHARGE_IN_IDLE_VCTCXO;

CONST short TQ_FBWin_Start_Offset = 0;   //TQ_FBWIN_START_OFFSET;  /* 216 QB  */
CONST short TQ_FSWin_DTIRQ_Delay  = 0;   //TQ_FSWIN_DTIRQ_DELAY   /* 190 QB  */
/* ========================================================================= */

#if IS_DYNAMIC_G_E_TXWIN_POSITION_SUPPORT || IS_DYNAMIC_G_E_TXWIN_POSITION_SUPPORT_V2
CONST signed short TQ_EPSK_TX_delay = 0;   //TQ_EPSK_TX_DELAY; /* QB */
#endif

const short FrequencyBias = 0;
short AFC_Dac_TRx_Offset[5/*band*/] =
{  0, /* FrequencyBand400  */
   0, /* FrequencyBand850  */
   0, /* FrequencyBand900  */
   0, /* FrequencyBand1800 */
   0, /* FrequencyBand1900 */
};

#if IS_VCXO_LC_TRXOFFSET_COMPENSATE_SUPPORT
   #if IS_CHIP_MT6252
short AFC_Default_TRx_Offset[5/*band*/] =
{  10, /* FrequencyBand400  */
   10, /* FrequencyBand850  */
   10, /* FrequencyBand900  */
   10, /* FrequencyBand1800 */
   10, /* FrequencyBand1900 */
};

short AFC_TRx_Offset[5/*band*/] =
{  0, /* FrequencyBand400  */
   0, /* FrequencyBand850  */
   0, /* FrequencyBand900  */
   0, /* FrequencyBand1800 */
   0, /* FrequencyBand1900 */
};
   #else
short AFC_Default_TRx_Offset[5/*band*/] =
{  0, /* FrequencyBand400  */
   0, /* FrequencyBand850  */
   0, /* FrequencyBand900  */
   0, /* FrequencyBand1800 */
   0, /* FrequencyBand1900 */
};

short AFC_TRx_Offset[5/*band*/] =
{  0, /* FrequencyBand400  */
   0, /* FrequencyBand850  */
   0, /* FrequencyBand900  */
   0, /* FrequencyBand1800 */
   0, /* FrequencyBand1900 */
};
   #endif
#else
   #if IS_RF_MT6162
short AFC_TRx_Offset[5/*band*/] =
{  0, /* FrequencyBand400  */
   0, /* FrequencyBand850  */
   0, /* FrequencyBand900  */
   0, /* FrequencyBand1800 */
   0, /* FrequencyBand1900 */
};
      #if IS_RF_VCO_DOO_OFF
short AFC_Default_TRx_Offset[5/*band*/] =
{  0, /* Hz, FrequencyBand400  */
   0, /* Hz, FrequencyBand850  */
   0, /* Hz, FrequencyBand900  */
   0, /* Hz, FrequencyBand1800 */
   0, /* Hz, FrequencyBand1900 */
};
      #elif IS_RF_VCO_PARTIAL_DOO_ON
short AFC_Default_TRx_Offset[5/*band*/] =
{  0, /* Hz, FrequencyBand400  */
  15, /* Hz, FrequencyBand850  */
  14, /* Hz, FrequencyBand900  */
  23, /* Hz, FrequencyBand1800 */
  24, /* Hz, FrequencyBand1900 */
};
      #else
short AFC_Default_TRx_Offset[5/*band*/] =
{  0, /* Hz, FrequencyBand400  */
  24, /* Hz, FrequencyBand850  */
  19, /* Hz, FrequencyBand900  */
  36, /* Hz, FrequencyBand1800 */
  40, /* Hz, FrequencyBand1900 */
};
      #endif
   #elif IS_RF_MT6163
short AFC_TRx_Offset[5/*band*/] =
{  0, /* FrequencyBand400  */
   0, /* FrequencyBand850  */
   0, /* FrequencyBand900  */
   0, /* FrequencyBand1800 */
   0, /* FrequencyBand1900 */
};

short AFC_Default_TRx_Offset[5/*band*/] =
{  0, /* Hz, FrequencyBand400  */
  15, /* Hz, FrequencyBand850  */
  15, /* Hz, FrequencyBand900  */
  20, /* Hz, FrequencyBand1800 */
  20, /* Hz, FrequencyBand1900 */
};
   #endif
#endif

#if IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
   #if IS_DSDA_DCS_TX_NOTCH_SWITCH_SUPPORT
CONST sint_P PDATA_TABLE_DCS_TX_NOTCH[/*5*/][2][5] =
{
      #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   {{0}},
      #else
         #if IS_DCS_NB_WB_SWITCH_SUPPORT
      /* use this field to store the BPI data for the DCS narrow band  */
   {  {  PDATA_DCS_NB_PR1, PDATA_DCS_NB_PR2, PDATA_DCS_NB_PR2B, PDATA_DCS_NB_PR3, PDATA_DCS_NB_PR3A  } , /* RX */
      {  PDATA_DCS_PT1,    PDATA_DCS_PT2,    PDATA_DCS_PT2B,    PDATA_DCS_PT3,    PDATA_DCS_PT3A     } , /* TX */
   },
         #else
      /* FrequencyBand400 (not support)  */
   {  { 0, 0, 0, 0 },
      { 0, 0, 0, 0 },
   },
         #endif
      /* FrequencyBand850  */
   {  {  PDATA_GSM850_PR1, PDATA_GSM850_PR2, PDATA_GSM850_PR2B, PDATA_GSM850_PR3, PDATA_GSM850_PR3A  } , /* RX */
      {  PDATA_GSM850_PT1, PDATA_GSM850_PT2, PDATA_GSM850_PT2B, PDATA_GSM850_PT3, PDATA_GSM850_PT3A  } , /* TX */
   }, /* FrequencyBand900  */
   {  {  PDATA_GSM_PR1, PDATA_GSM_PR2, PDATA_GSM_PR2B, PDATA_GSM_PR3, PDATA_GSM_PR3A  } ,                /* RX */
      {  PDATA_GSM_PT1, PDATA_GSM_PT2, PDATA_GSM_PT2B, PDATA_GSM_PT3, PDATA_GSM_PT3A  } ,                /* TX */
   }, /* FrequencyBand1800 */
   {  {  PDATA_DCS_PR1,       PDATA_DCS_PR2,       PDATA_DCS_PR2B,       PDATA_DCS_PR3,       PDATA_DCS_PR3A        } ,   /* RX */
      {  PDATA_DCS_NOTCH_PT1, PDATA_DCS_NOTCH_PT2, PDATA_DCS_NOTCH_PT2B, PDATA_DCS_NOTCH_PT3, PDATA_DCS_NOTCH_PT3A  } ,   /* TX */
   }, /* FrequencyBand1900 */
   {  {  PDATA_PCS_PR1, PDATA_PCS_PR2, PDATA_PCS_PR2B, PDATA_PCS_PR3, PDATA_PCS_PR3A  } ,                /* RX */
      {  PDATA_PCS_PT1, PDATA_PCS_PT2, PDATA_PCS_PT2B, PDATA_PCS_PT3, PDATA_PCS_PT3A  } ,                /* TX */
   }
      #endif
};

CONST sint_P PDATA_TABLE_DEFAULT[/*5*/][2][5] =
{
      #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   {{0}},
      #else
         #if IS_DCS_NB_WB_SWITCH_SUPPORT
      /* use this field to store the BPI data for the DCS narrow band  */
   {  {  PDATA_DCS_NB_PR1, PDATA_DCS_NB_PR2, PDATA_DCS_NB_PR2B, PDATA_DCS_NB_PR3, PDATA_DCS_NB_PR3A  } , /* RX */
      {  PDATA_DCS_PT1,    PDATA_DCS_PT2,    PDATA_DCS_PT2B,    PDATA_DCS_PT3,    PDATA_DCS_PT3A     } , /* TX */
   },
         #else
      /* FrequencyBand400 (not support)  */
   {  { 0, 0, 0, 0 },
      { 0, 0, 0, 0 },
   },
         #endif
      /* FrequencyBand850  */
   {  {  PDATA_GSM850_PR1, PDATA_GSM850_PR2, PDATA_GSM850_PR2B, PDATA_GSM850_PR3, PDATA_GSM850_PR3A  } , /* RX */
      {  PDATA_GSM850_PT1, PDATA_GSM850_PT2, PDATA_GSM850_PT2B, PDATA_GSM850_PT3, PDATA_GSM850_PT3A  } , /* TX */
   }, /* FrequencyBand900  */
   {  {  PDATA_GSM_PR1, PDATA_GSM_PR2, PDATA_GSM_PR2B, PDATA_GSM_PR3, PDATA_GSM_PR3A  } ,                /* RX */
      {  PDATA_GSM_PT1, PDATA_GSM_PT2, PDATA_GSM_PT2B, PDATA_GSM_PT3, PDATA_GSM_PT3A  } ,                /* TX */
   }, /* FrequencyBand1800 */
   {  {  PDATA_DCS_PR1, PDATA_DCS_PR2, PDATA_DCS_PR2B, PDATA_DCS_PR3, PDATA_DCS_PR3A  } ,                /* RX */
      {  PDATA_DCS_PT1, PDATA_DCS_PT2, PDATA_DCS_PT2B, PDATA_DCS_PT3, PDATA_DCS_PT3A  } ,                /* TX */
   }, /* FrequencyBand1900 */
   {  {  PDATA_PCS_PR1, PDATA_PCS_PR2, PDATA_PCS_PR2B, PDATA_PCS_PR3, PDATA_PCS_PR3A  } ,                /* RX */
      {  PDATA_PCS_PT1, PDATA_PCS_PT2, PDATA_PCS_PT2B, PDATA_PCS_PT3, PDATA_PCS_PT3A  } ,                /* TX */
   }
      #endif
};
CONST sint_P (*PDATA_TABLE_P)[2][5] = PDATA_TABLE_DEFAULT;
   #else
CONST sint_P PDATA_TABLE[/*5*/][2][5] =
{
      #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   {{0}},
      #else
         #if IS_DCS_NB_WB_SWITCH_SUPPORT
      /* use this field to store the BPI data for the DCS narrow band  */
   {  {  PDATA_DCS_NB_PR1, PDATA_DCS_NB_PR2, PDATA_DCS_NB_PR2B, PDATA_DCS_NB_PR3, PDATA_DCS_NB_PR3A  } , /* RX */
      {  PDATA_DCS_PT1,    PDATA_DCS_PT2,    PDATA_DCS_PT2B,    PDATA_DCS_PT3,    PDATA_DCS_PT3A     } , /* TX */
   },
         #else
      /* FrequencyBand400 (not support)  */
   {  { 0, 0, 0, 0 },
      { 0, 0, 0, 0 },
   },
         #endif
      /* FrequencyBand850  */
   {  {  PDATA_GSM850_PR1, PDATA_GSM850_PR2, PDATA_GSM850_PR2B, PDATA_GSM850_PR3, PDATA_GSM850_PR3A  } , /* RX */
      {  PDATA_GSM850_PT1, PDATA_GSM850_PT2, PDATA_GSM850_PT2B, PDATA_GSM850_PT3, PDATA_GSM850_PT3A  } , /* TX */
   }, /* FrequencyBand900  */
   {  {  PDATA_GSM_PR1, PDATA_GSM_PR2, PDATA_GSM_PR2B, PDATA_GSM_PR3, PDATA_GSM_PR3A  } ,                /* RX */
      {  PDATA_GSM_PT1, PDATA_GSM_PT2, PDATA_GSM_PT2B, PDATA_GSM_PT3, PDATA_GSM_PT3A  } ,                /* TX */
   }, /* FrequencyBand1800 */
   {  {  PDATA_DCS_PR1, PDATA_DCS_PR2, PDATA_DCS_PR2B, PDATA_DCS_PR3, PDATA_DCS_PR3A  } ,                /* RX */
      {  PDATA_DCS_PT1, PDATA_DCS_PT2, PDATA_DCS_PT2B, PDATA_DCS_PT3, PDATA_DCS_PT3A  } ,                /* TX */
   }, /* FrequencyBand1900 */
   {  {  PDATA_PCS_PR1, PDATA_PCS_PR2, PDATA_PCS_PR2B, PDATA_PCS_PR3, PDATA_PCS_PR3A  } ,                /* RX */
      {  PDATA_PCS_PT1, PDATA_PCS_PT2, PDATA_PCS_PT2B, PDATA_PCS_PT3, PDATA_PCS_PT3A  } ,                /* TX */
   }
      #endif
};
      #if IS_2G_RXD_SUPPORT  
CONST sint_P PDATA_DIVERSITY_TABLE[/*5*/][2][5] =
{
         #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   {{0}},
         #else
            #if IS_DCS_NB_WB_SWITCH_SUPPORT
      /* use this field to store the BPI data for the DCS narrow band  */
   {  {  PDATA_DCS_DIVERSITY_NB_PR1, PDATA_DCS_DIVERSITY_NB_PR2, PDATA_DCS_DIVERSITY_NB_PR2B, PDATA_DCS_DIVERSITY_NB_PR3, PDATA_DCS_DIVERSITY_NB_PR3A  } , /* RX */
      {  PDATA_DCS_DIVERSITY_PT1,    PDATA_DCS_DIVERSITY_PT2,    PDATA_DCS_DIVERSITY_PT2B,    PDATA_DCS_DIVERSITY_PT3,    PDATA_DCS_DIVERSITY_PT3A     } , /* TX */
   },
            #else
      /* FrequencyBand400 (not support)  */
   {  { 0, 0, 0, 0 },
      { 0, 0, 0, 0 },
   },
            #endif
      /* FrequencyBand850  */
   {  {  PDATA_GSM850_DIVERSITY_PR1, PDATA_GSM850_DIVERSITY_PR2, PDATA_GSM850_DIVERSITY_PR2B, PDATA_GSM850_DIVERSITY_PR3, PDATA_GSM850_DIVERSITY_PR3A  } , /* RX */
      {  PDATA_GSM850_DIVERSITY_PT1, PDATA_GSM850_DIVERSITY_PT2, PDATA_GSM850_DIVERSITY_PT2B, PDATA_GSM850_DIVERSITY_PT3, PDATA_GSM850_DIVERSITY_PT3A  } , /* TX */
   }, /* FrequencyBand900  */
   {  {  PDATA_GSM_DIVERSITY_PR1, PDATA_GSM_DIVERSITY_PR2, PDATA_GSM_DIVERSITY_PR2B, PDATA_GSM_DIVERSITY_PR3, PDATA_GSM_DIVERSITY_PR3A  } ,                /* RX */
      {  PDATA_GSM_DIVERSITY_PT1, PDATA_GSM_DIVERSITY_PT2, PDATA_GSM_DIVERSITY_PT2B, PDATA_GSM_DIVERSITY_PT3, PDATA_GSM_DIVERSITY_PT3A  } ,                /* TX */
   }, /* FrequencyBand1800 */
   {  {  PDATA_DCS_DIVERSITY_PR1, PDATA_DCS_DIVERSITY_PR2, PDATA_DCS_DIVERSITY_PR2B, PDATA_DCS_DIVERSITY_PR3, PDATA_DCS_DIVERSITY_PR3A  } ,                /* RX */
      {  PDATA_DCS_DIVERSITY_PT1, PDATA_DCS_DIVERSITY_PT2, PDATA_DCS_DIVERSITY_PT2B, PDATA_DCS_DIVERSITY_PT3, PDATA_DCS_DIVERSITY_PT3A  } ,                /* TX */
   }, /* FrequencyBand1900 */
   {  {  PDATA_PCS_DIVERSITY_PR1, PDATA_PCS_DIVERSITY_PR2, PDATA_PCS_DIVERSITY_PR2B, PDATA_PCS_DIVERSITY_PR3, PDATA_PCS_DIVERSITY_PR3A  } ,                /* RX */
      {  PDATA_PCS_DIVERSITY_PT1, PDATA_PCS_DIVERSITY_PT2, PDATA_PCS_DIVERSITY_PT2B, PDATA_PCS_DIVERSITY_PT3, PDATA_PCS_DIVERSITY_PT3A  } ,                /* TX */
   }
         #endif
};      
      #endif
   #endif
#else
CONST signed short PDATA_TABLE[/*5*/][2][3] =
{     
   #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   {{0}},
   #else
      /* FrequencyBand400 (not support)  */
   {  { 0, 0, 0 },
      { 0, 0, 0 },
   }, /* FrequencyBand850  */
   {  {  PDATA_GSM850_PR1, PDATA_GSM850_PR2, PDATA_GSM850_PR3  } ,   /* RX */
      {  PDATA_GSM850_PT1, PDATA_GSM850_PT2, PDATA_GSM850_PT3  } ,   /* TX */
   }, /* FrequencyBand900  */
   {  {  PDATA_GSM_PR1, PDATA_GSM_PR2, PDATA_GSM_PR3  } ,            /* RX */
      {  PDATA_GSM_PT1, PDATA_GSM_PT2, PDATA_GSM_PT3  } ,            /* TX */
   }, /* FrequencyBand1800 */
   {  {  PDATA_DCS_PR1, PDATA_DCS_PR2, PDATA_DCS_PR3  } ,            /* RX */
      {  PDATA_DCS_PT1, PDATA_DCS_PT2, PDATA_DCS_PT3  } ,            /* TX */
   }, /* FrequencyBand1900 */
   {  {  PDATA_PCS_PR1, PDATA_PCS_PR2, PDATA_PCS_PR3  } ,            /* RX */
      {  PDATA_PCS_PT1, PDATA_PCS_PT2, PDATA_PCS_PT3  } ,            /* TX */
   }
   #endif
};
#endif

#if IS_BSI_TRIG_OFFCHIP_BPI_SUPPORT
CONST signed short PDATA_SX_TABLE[/*5*/][2][2] =
{  
   #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   {{0}},
   #else
   /* FrequencyBand400 (not support)  */
   {  { 0, 0 },
      { 0, 0 },
   }, /* FrequencyBand850  */
   {  {  PDATA_GSM850_SR0, PDATA_GSM850_SR3  },    /* RX */
      {  PDATA_GSM850_ST0, PDATA_GSM850_ST3  },    /* TX */
   }, /* FrequencyBand900  */
   {  {  PDATA_GSM_SR0,    PDATA_GSM_SR3     },    /* RX */
      {  PDATA_GSM_ST0,    PDATA_GSM_ST3     },    /* TX */
   }, /* FrequencyBand1800 */
   {  {  PDATA_DCS_SR0,    PDATA_DCS_SR3     },    /* RX */
      {  PDATA_DCS_ST0,    PDATA_DCS_ST3     },    /* TX */
   }, /* FrequencyBand1900 */
   {  {  PDATA_PCS_SR0,    PDATA_PCS_SR3     },    /* RX */
      {  PDATA_PCS_ST0,    PDATA_PCS_ST3     },    /* TX */
   }
   #endif
};
#endif

#if IS_CHIP_MT6218_AND_LATTER_VERSION
/*MT6218~*/ CONST signed short PDATA_TABLE2[5][2][2] =
/*MT6218~*/ {
/*MT6218~*/    #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
/*MT6218~*/    {{0}},
/*MT6218~*/    #else    
/*MT6218~*/    /* FrequencyBand400 (not support)  */
/*MT6218~*/    {  { 0, 0 },
/*MT6218~*/       { 0    },
/*MT6218~*/    }, /* FrequencyBand850  */
/*MT6218~*/    {  {  PDATA_GSM850_PR2M1, PDATA_GSM850_PR2M2  } ,   /* RX */
/*MT6218~*/       {  PDATA_GSM850_PT2B                       } ,   /* TX */
/*MT6218~*/    }, /* FrequencyBand900  */
/*MT6218~*/    {  {  PDATA_GSM_PR2M1   , PDATA_GSM_PR2M2     } ,   /* RX */
/*MT6218~*/       {  PDATA_GSM_PT2B                          } ,   /* TX */
/*MT6218~*/    }, /* FrequencyBand1800 */
/*MT6218~*/    {  {  PDATA_DCS_PR2M1   , PDATA_DCS_PR2M2     } ,   /* RX */
/*MT6218~*/       {  PDATA_DCS_PT2B                          } ,   /* TX */
/*MT6218~*/    }, /* FrequencyBand1900 */
/*MT6218~*/    {  {  PDATA_PCS_PR2M1   , PDATA_PCS_PR2M2     } ,   /* RX */
/*MT6218~*/       {  PDATA_PCS_PT2B                          } ,   /* TX */
/*MT6218~*/    }
/*MT6218~*/    #endif
/*MT6218~*/ };
#endif

#if IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
CONST sint_P PDATA_TABLE3[5][3][3] =
{ 
   #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   {{0}},
   #else
    /* FrequencyBand400 (not support)  */
   {  { 0, 0 },
      { 0, 0 },
   }, /* FrequencyBand850  */
   {  {  PDATA_GSM850_PR2M1   , PDATA_GSM850_PR2M2   , PDATA_GSM850_PR2M3     }, /* RX    */
      {  PDATA_GSM850_PT2M1_G8, PDATA_GSM850_PT2M2_G8, PDATA_GSM850_PT2M3_G8  }, /* TX g8 */
      {  PDATA_GSM850_PT2M1_8G, PDATA_GSM850_PT2M2_8G, PDATA_GSM850_PT2M3_8G  }, /* TX 8g */
   }, /* FrequencyBand900  */
   {  {  PDATA_GSM_PR2M1      , PDATA_GSM_PR2M2      , PDATA_GSM_PR2M3        }, /* RX    */
      {  PDATA_GSM_PT2M1_G8   , PDATA_GSM_PT2M2_G8   , PDATA_GSM_PT2M3_G8     }, /* TX g8 */
      {  PDATA_GSM_PT2M1_8G   , PDATA_GSM_PT2M2_8G   , PDATA_GSM_PT2M3_8G     }, /* TX 8g */
   }, /* FrequencyBand1800 */
   {  {  PDATA_DCS_PR2M1      , PDATA_DCS_PR2M2      , PDATA_DCS_PR2M3        }, /* RX    */
      {  PDATA_DCS_PT2M1_G8   , PDATA_DCS_PT2M2_G8   , PDATA_DCS_PT2M3_G8     }, /* TX g8 */
      {  PDATA_DCS_PT2M1_8G   , PDATA_DCS_PT2M2_8G   , PDATA_DCS_PT2M3_8G     }, /* TX 8g */
   }, /* FrequencyBand1900 */
   {  {  PDATA_PCS_PR2M1      , PDATA_PCS_PR2M2      , PDATA_PCS_PR2M3        }, /* RX    */
      {  PDATA_PCS_PT2M1_G8   , PDATA_PCS_PT2M2_G8   , PDATA_PCS_PT2M3_G8     }, /* TX g8 */
      {  PDATA_PCS_PT2M1_8G   , PDATA_PCS_PT2M2_8G   , PDATA_PCS_PT2M3_8G     }, /* TX 8g */
   }
   #endif
};
   #if IS_2G_RXD_SUPPORT 
CONST sint_P PDATA_DIVERSITY_TABLE3[5][3][3] =
{ 
      #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   {{0}},
      #else
    /* FrequencyBand400 (not support)  */
   {  { 0, 0 },
      { 0, 0 },
   }, /* FrequencyBand850  */
   {  {  PDATA_GSM850_DIVERSITY_PR2M1   , PDATA_GSM850_DIVERSITY_PR2M2   , PDATA_GSM850_DIVERSITY_PR2M3     }, /* RX    */
      {  PDATA_GSM850_DIVERSITY_PT2M1_G8, PDATA_GSM850_DIVERSITY_PT2M2_G8, PDATA_GSM850_DIVERSITY_PT2M3_G8  }, /* TX g8 */
      {  PDATA_GSM850_DIVERSITY_PT2M1_8G, PDATA_GSM850_DIVERSITY_PT2M2_8G, PDATA_GSM850_DIVERSITY_PT2M3_8G  }, /* TX 8g */
   }, /* FrequencyBand900  */
   {  {  PDATA_GSM_DIVERSITY_PR2M1      , PDATA_GSM_DIVERSITY_PR2M2      , PDATA_GSM_DIVERSITY_PR2M3        }, /* RX    */
      {  PDATA_GSM_DIVERSITY_PT2M1_G8   , PDATA_GSM_DIVERSITY_PT2M2_G8   , PDATA_GSM_DIVERSITY_PT2M3_G8     }, /* TX g8 */
      {  PDATA_GSM_DIVERSITY_PT2M1_8G   , PDATA_GSM_DIVERSITY_PT2M2_8G   , PDATA_GSM_DIVERSITY_PT2M3_8G     }, /* TX 8g */
   }, /* FrequencyBand1800 */
   {  {  PDATA_DCS_DIVERSITY_PR2M1      , PDATA_DCS_DIVERSITY_PR2M2      , PDATA_DCS_DIVERSITY_PR2M3        }, /* RX    */
      {  PDATA_DCS_DIVERSITY_PT2M1_G8   , PDATA_DCS_DIVERSITY_PT2M2_G8   , PDATA_DCS_DIVERSITY_PT2M3_G8     }, /* TX g8 */
      {  PDATA_DCS_DIVERSITY_PT2M1_8G   , PDATA_DCS_DIVERSITY_PT2M2_8G   , PDATA_DCS_DIVERSITY_PT2M3_8G     }, /* TX 8g */
   }, /* FrequencyBand1900 */
   {  {  PDATA_PCS_DIVERSITY_PR2M1      , PDATA_PCS_DIVERSITY_PR2M2      , PDATA_PCS_DIVERSITY_PR2M3        }, /* RX    */
      {  PDATA_PCS_DIVERSITY_PT2M1_G8   , PDATA_PCS_DIVERSITY_PT2M2_G8   , PDATA_PCS_DIVERSITY_PT2M3_G8     }, /* TX g8 */
      {  PDATA_PCS_DIVERSITY_PT2M1_8G   , PDATA_PCS_DIVERSITY_PT2M2_8G   , PDATA_PCS_DIVERSITY_PT2M3_8G     }, /* TX 8g */
   }
      #endif
};
   #endif  
#endif
/*...........................................................................*/

#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
#else
const APBADDR_P PDATA_REG_TABLE[/*4:5*/] =
{
   BPI_V( BPIDX(0,0) ),
   BPI_V( BPIDX(1,0) ),
   BPI_V( BPIDX(2,0) ),
   BPI_V( BPIDX(3,0) ),
#if IS_RTX_5CWIN_SUPPORT
   BPI_V( BPIDX(4,0) ),
#endif
};

#if IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
const APBADDR_P PDATA_REG_TABLE2[/*4:5*/] =
{
   BPI_V( PR3A_EV(0) ),
   BPI_V( PR3A_EV(1) ),
   BPI_V( PR3A_EV(2) ),
   BPI_V( PR3A_EV(3) ),
   #if IS_RTX_5CWIN_SUPPORT
   BPI_V( PR3A_EV(4) ),
   #endif
};
#endif

#if IS_BPI_V2_PT3A_SUPPORT
const APBADDR_P PDATA_REG_TABLE3[2] =
{
   BPI_V( PT3A_CWIN1 ),
   BPI_V( PT3A_CWIN2 ),
};
#endif

#if IS_CHIP_MT6218_AND_LATTER_VERSION
/*MT6218~*/ const APBADDR  PDATA_PT2B_REG_TABLE[2][3] =
/*MT6218~*/ {
/*MT6218~*/    { BPI_V( 20 ), BPI_V( 15 ), BPI_V( 21 ) },
/*MT6218~*/    { BPI_V( 16 ), BPI_V( 15 ), BPI_V( 17 ) },
/*MT6218~*/ };
/*MT6218~*/
/*MT6218~*/ const APBADDR  PDATA_PR2M_REG_TABLE[4] =
/*MT6218~*/ {
/*MT6218~*/    0,
/*MT6218~*/    BPI_V( 16 ),
/*MT6218~*/    BPI_V( 18 ),
/*MT6218~*/    BPI_V( 20 ),
/*MT6218~*/ };
#endif

#if IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
const APBADDR_P  PDATA_PT2M_REG_TABLE[4] =
{
   0,
   BPI_V( PT2M_EV(0,0) ),
   BPI_V( PT2M_EV(1,0) ),
   BPI_V( PT2M_EV(2,0) ),
};

const APBADDR_P  PDATA_PR2M_REG_TABLE[4] =
{
   0,
   BPI_V( 20 ),
   BPI_V( 22 ),
   BPI_V( 24 ),
};
#endif
#endif

/*...........................................................................*/

#if IS_BSI_SX0_SUPPORT
CONST signed short RTX_START_TQ_TABLE[2] =
{
   #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   0,
   #else
   /* TQ_SLOT_BEGIN(i) + */ -TQ_SR0,               /* RX_START_CWIN_REG_TABLE[c][0]                   */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_ST0,               /* TX_START_CWIN_REG_TABLE[c][1]                   */
   #endif
};
#endif

#if IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
   #ifdef L1D_TEST
signed short RX_START_TQ_TABLE[8] =
{
      #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   0,
      #else
   /* TQ_SLOT_BEGIN(i) + */ -TQ_SR1,               /* RX_START_CWIN_REG_TABLE[c][0]                   */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_PR1,               /* RX_START_CWIN_REG_TABLE[c][1]                   */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_PR2,               /* RX_START_CWIN_REG_TABLE[c][2]                   */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_PR2B,              /* RX_START_CWIN_REG_TABLE[c][3]                   */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_SR2,               /* RX_START_RIDX_REG_TABLE[i][0]                   */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_BDLON,             /* RX_START_RIDX_REG_TABLE[i][1]                   */
   /* TQ_SLOT_BEGIN(i) + */  TQ_MAXIMUM,           /* RX_START_RIDX_REG_TABLE[i][2] (for FBWIN_HEAD)  */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_AFC_READY_RX,      /* RX_START_RIDX_REG_TABLE[i][3] (for FBWIN_HEAD)  */
      #endif
};
   #else
CONST signed short RX_START_TQ_TABLE[8] =
{
      #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   0,
      #else
   /* TQ_SLOT_BEGIN(i) + */ -TQ_SR1,               /* RX_START_CWIN_REG_TABLE[c][0]                   */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_PR1,               /* RX_START_CWIN_REG_TABLE[c][1]                   */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_PR2,               /* RX_START_CWIN_REG_TABLE[c][2]                   */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_PR2B,              /* RX_START_CWIN_REG_TABLE[c][3]                   */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_SR2,               /* RX_START_RIDX_REG_TABLE[i][0]                   */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_BDLON,             /* RX_START_RIDX_REG_TABLE[i][1]                   */
   /* TQ_SLOT_BEGIN(i) + */  TQ_MAXIMUM,           /* RX_START_RIDX_REG_TABLE[i][2] (for FBWIN_HEAD)  */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_AFC_READY_RX,      /* RX_START_RIDX_REG_TABLE[i][3] (for FBWIN_HEAD)  */
      #endif
};
   #endif

#elif IS_CHIP_MT6225_AND_LATTER_VERSION
   #ifdef L1D_TEST
signed short RX_START_TQ_TABLE[7] =
{  
      #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   0,
      #else
   /* TQ_SLOT_BEGIN(i) + */ -TQ_SR1,               /* RX_START_CWIN_REG_TABLE[c][0]                   */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_PR1,               /* RX_START_CWIN_REG_TABLE[c][1]                   */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_PR2,               /* RX_START_CWIN_REG_TABLE[c][2]                   */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_SR2,               /* RX_START_RIDX_REG_TABLE[i][0]                   */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_BDLON,             /* RX_START_RIDX_REG_TABLE[i][1]                   */
   /* TQ_SLOT_BEGIN(i) + */  TQ_MAXIMUM,           /* RX_START_RIDX_REG_TABLE[i][2] (for FBWIN_HEAD)  */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_AFC_READY,         /* RX_START_RIDX_REG_TABLE[i][3] (for FBWIN_HEAD)  */
      #endif
};
   #else
CONST signed short RX_START_TQ_TABLE[7] =
{
      #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   0,
      #else
   /* TQ_SLOT_BEGIN(i) + */ -TQ_SR1,               /* RX_START_CWIN_REG_TABLE[c][0]                   */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_PR1,               /* RX_START_CWIN_REG_TABLE[c][1]                   */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_PR2,               /* RX_START_CWIN_REG_TABLE[c][2]                   */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_SR2,               /* RX_START_RIDX_REG_TABLE[i][0]                   */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_BDLON,             /* RX_START_RIDX_REG_TABLE[i][1]                   */
   /* TQ_SLOT_BEGIN(i) + */  TQ_MAXIMUM,           /* RX_START_RIDX_REG_TABLE[i][2] (for FBWIN_HEAD)  */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_AFC_READY,         /* RX_START_RIDX_REG_TABLE[i][3] (for FBWIN_HEAD)  */
      #endif
};
   #endif

#else
CONST signed short RX_START_TQ_TABLE[7] =
{
   #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   0,
   #else
   /* TQ_SLOT_BEGIN(i) + */ -TQ_SR1,               /* RX_START_CWIN_REG_TABLE[c][0]                   */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_PR1,               /* RX_START_CWIN_REG_TABLE[c][1]                   */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_PR2,               /* RX_START_CWIN_REG_TABLE[c][2]                   */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_SR2,               /* RX_START_RIDX_REG_TABLE[i][0]                   */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_BDLON,             /* RX_START_RIDX_REG_TABLE[i][1]                   */
   /* TQ_SLOT_BEGIN(i) + */  TQ_MAXIMUM,           /* RX_START_RIDX_REG_TABLE[i][2] (for FBWIN_HEAD)  */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_AFC_READY,         /* RX_START_RIDX_REG_TABLE[i][3] (for FBWIN_HEAD)  */
   #endif
};
#endif

/*...........................................................................*/

#if IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
CONST signed short RX_END_TQ_TABLE[5] =
{
   #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   0,
   #else
   /* TQ_SLOT_BEGIN(n) + */  TQ_SR3,               /* RX_END_CWIN_REG_TABLE[c][0]     */
   /* TQ_SLOT_BEGIN(n) + */  TQ_PR3,               /* RX_END_CWIN_REG_TABLE[c][1]     */
   /* TQ_SLOT_BEGIN(n) + */  TQ_PR3A,              /* RX_END_CWIN_REG_TABLE[c][2]     */
   /* TQ_SLOT_BEGIN(n) + */  TQ_BDLOFF,            /* RX/FSI_END_RIDX_REG_TABLE[i][0] */
   /* TQ_SLOT_BEGIN(n) + */  TQ_MAXIMUM,           /* FSI_END_RIDX_REG_TABLE[i][1]    */
   #endif
};
#else
CONST signed short RX_END_TQ_TABLE[4] =
{
   #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   0,
   #else
   /* TQ_SLOT_BEGIN(n) + */  TQ_SR3,               /* RX_END_CWIN_REG_TABLE[c][0]     */
   /* TQ_SLOT_BEGIN(n) + */  TQ_PR3,               /* RX_END_CWIN_REG_TABLE[c][1]     */
   /* TQ_SLOT_BEGIN(n) + */  TQ_BDLOFF,            /* RX/FSI_END_RIDX_REG_TABLE[i][0] */
   /* TQ_SLOT_BEGIN(n) + */  TQ_MAXIMUM,           /* FSI_END_RIDX_REG_TABLE[i][1]    */
   #endif
};
#endif

/*...........................................................................*/

#if IS_GPRS
CONST signed short RX_MIDDLE_TQ_TABLE[3] =
{
   #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   0,
   #else
   /* TQ_SLOT_BEGIN(i) + */ +TQ_BDLOFF,            /* RX_MIDDLE_RIDX_REG_TABLE[i][0] */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_BDLON,             /* RX_MIDDLE_RIDX_REG_TABLE[i][1] */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_SR2M,              /* RX_MIDDLE_RIDX_REG_TABLE[i][2] */
   #endif
};

   #if IS_CHIP_MT6218_AND_LATTER_VERSION || IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
/*MT6218~*/ CONST signed short RX_MIDDLE_TQ_TABLE2[2] =
/*MT6218~*/ {
/*MT6218~*/	 #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
/*MT6218~*/    0,
/*MT6218~*/    #else
/*MT6218~*/    /* TQ_SLOT_BEGIN(i) + */ -TQ_PR2M1,             /* RX_MIDDLE_RIDX_REG_TABLE2[i][0] */
/*MT6218~*/    /* TQ_SLOT_BEGIN(i) + */ -TQ_PR2M2,             /* RX_MIDDLE_RIDX_REG_TABLE2[i][1] */
/*MT6218~*/    #endif
/*MT6218~*/ };
   #endif
#endif

/*...........................................................................*/

CONST signed short TX_START_TQ_TABLE[8] =
{
   #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   0,
   #else
   /* TQ_SLOT_BEGIN(i) + */ -TQ_AFC_READY,          /* TX_START_CWIN_REG_TABLE[c][0] */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_ST1,                /* TX_START_CWIN_REG_TABLE[c][1] */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_PT1,                /* TX_START_CWIN_REG_TABLE[c][2] */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_PT2,                /* TX_START_CWIN_REG_TABLE[c][3] */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_APCON,              /* TX_START_TIDX_REG_TABLE[i][0] */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_APCON,              /* TX_START_TIDX_REG_TABLE[i][1] */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_BULON,              /* TX_START_TIDX_REG_TABLE[i][2] */
   /* TQ_SLOT_BEGIN(i) + */ -TQ_ST2,                /* Bright4 : For TDMA_BSI( txwin_sr2 ), not used in Bright2 */
   #endif
};

#if IS_CHIP_MT6218_AND_LATTER_VERSION || IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
/*MT6218~*/ CONST signed short TX_START_TQ_TABLE2[1] =
/*MT6218~*/ {
/*MT6218~*/    #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
/*MT6218~*/    0,
/*MT6218~*/    #else
/*MT6218~*/    /* TQ_SLOT_BEGIN(i) + */ -TQ_PT2B,               /* TX_START_CWIN_REG_TABLE2[c][0] */
/*MT6218~*/    #endif
/*MT6218~*/ };
#endif

#if IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
/*MT6229~*/ CONST signed short TX_START_TQ_TABLE3[1] =
/*MT6229~*/ {
/*MT6229~*/    #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
/*MT6229~*/    0,
/*MT6229~*/    #else
/*MT6229~*/    /* TQ_SLOT_BEGIN(i) + */ -TQ_ST2B,               /* TX_START_CWIN_REG_TABLE2[c][0] */
/*MT6229~*/    #endif
/*MT6229~*/ };
#endif

/*...........................................................................*/

CONST signed short TX_END_TQ_TABLE[6] =
{  
   #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   0,
   #else
   /* TQ_SLOT_BEGIN(n) + */  TQ_AFC2_2_BOFF,       /* TX_END_CWIN_REG_TABLE[c][0] */
   /* TQ_SLOT_BEGIN(n) + */  TQ_ST3,               /* TX_END_CWIN_REG_TABLE[c][1] */
   /* TQ_SLOT_BEGIN(n) + */  TQ_PT3,               /* TX_END_CWIN_REG_TABLE[c][2] */
   /* TQ_SLOT_BEGIN(n) + */  TQ_BULOFF,            /* TX_END_TIDX_REG_TABLE[i][0] */
   /* TQ_SLOT_BEGIN(n) + */  TQ_APCOFF,            /* TX_END_TIDX_REG_TABLE[i][1] */
   /* TQ_SLOT_BEGIN(n) + */  TQ_APCOFF,            /* TX_END_TIDX_REG_TABLE[i][2] */
   #endif
};

#if IS_BPI_V2_PT3A_SUPPORT
CONST signed short TX_END_TQ_TABLE2[1] =
{
   #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   0,
   #else
   TQ_PT3A,
   #endif
};
#endif

/*...........................................................................*/

#if IS_GPRS || IS_MULTISLOT_TX_SUPPORT
CONST signed short TX_MIDDLE_TQ_TABLE[4] =
{
   #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   0,
   #else
   /* TQ_SLOT_BEGIN(i) */ +TQ_BULOFF,              /* TX_MIDDLE_TIDX_REG_TABLE[i][0] */
   /* TQ_SLOT_BEGIN(i) */ -TQ_BULON,               /* TX_MIDDLE_TIDX_REG_TABLE[i][1] */
   /* TQ_SLOT_BEGIN(i) */ -TQ_APCMID,              /* TX_MIDDLE_TIDX_REG_TABLE[i][2] */
   /* TQ_SLOT_BEGIN(i) */ -TQ_APCMID,              /* TX_MIDDLE_TIDX_REG_TABLE[i][3] */
   #endif
};

   #if IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
/*EGPRS*/CONST signed short TX_MIDDLE_TQ_TABLE2[2][4] =
/*EGPRS*/{
/*EGPRS*/   #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
/*EGPRS*/   {0},
/*EGPRS*/   #else
/*EGPRS*/   /* TQ_SLOT_BEGIN(i) */{ -TQ_ST2M_G8,
/*EGPRS*/   /* TQ_SLOT_BEGIN(i) */  -TQ_PT2M1_G8,
/*EGPRS*/   /* TQ_SLOT_BEGIN(i) */  -TQ_PT2M2_G8,
/*EGPRS*/   /* TQ_SLOT_BEGIN(i) */  -TQ_PT2M3_G8 },
/*EGPRS*/
/*EGPRS*/   /* TQ_SLOT_BEGIN(i) */{ -TQ_ST2M_8G,
/*EGPRS*/   /* TQ_SLOT_BEGIN(i) */  -TQ_PT2M1_8G,
/*EGPRS*/   /* TQ_SLOT_BEGIN(i) */  -TQ_PT2M2_8G,
/*EGPRS*/   /* TQ_SLOT_BEGIN(i) */  -TQ_PT2M3_8G },
/*EGPRS*/   #endif
/*EGPRS*/};
   #endif

#endif /*End of "IS_GPRS"*/

/*...........................................................................*/

CONST signed short PM_START_TQ_TABLE[7] =
{
   TQ_SLOT0_BEGIN,
   TQ_SLOT1_BEGIN + TQ_AFC_READY,
   TQ_SLOT2_BEGIN + TQ_AFC_READY,
   TQ_SLOT3_BEGIN + TQ_AFC_READY,
   TQ_SLOT4_BEGIN + TQ_AFC_READY,
   TQ_SLOT5_BEGIN + TQ_AFC_READY,
#if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   0,
#else   
   TQ_VALIDATE-1-TQ_SHORT_PMWIN_LEN-QR_BOFF_2_IDLE,
#endif
};

/*...........................................................................*/

#if L1D_PM_ENHANCE
   #if L1D_WT_COBIN_ARCHITECTURE_SUPPORT && IS_FDD_DUAL_MODE_SUPPORT
/* advance PM position of 1st half frame in order to meet FDD dual mode criteria */
const signed short SHORT_PM_START_TQ_TABLE_CT1_FDD[4] =
{
   TQ_PM0_BEGIN_HF-TQ_FIRST_4PM_ADV_FDD,
   TQ_PM1_BEGIN_HF-TQ_FIRST_4PM_ADV_FDD,
   TQ_PM2_BEGIN_HF-TQ_FIRST_4PM_ADV_FDD,
   TQ_PM3_BEGIN_HF-TQ_FIRST_4PM_ADV_FDD,
};
   #endif /* L1D_WT_COBIN_ARCHITECTURE_SUPPORT && IS_FDD_DUAL_MODE_SUPPORT */
   
/* advance PM position of 1st half frame in order to meet FDD dual mode criteria */
const signed short SHORT_PM_START_TQ_TABLE_CT1[4] =
{
   TQ_PM0_BEGIN_HF-TQ_FIRST_4PM_ADV,
   TQ_PM1_BEGIN_HF-TQ_FIRST_4PM_ADV,
   TQ_PM2_BEGIN_HF-TQ_FIRST_4PM_ADV,
   TQ_PM3_BEGIN_HF-TQ_FIRST_4PM_ADV,
};

const signed short SHORT_PM_START_TQ_TABLE_CT2H[4] =
{
   TQ_PM0_BEGIN_HF,
   TQ_PM1_BEGIN_HF,
   TQ_PM2_BEGIN_HF,
   TQ_PM3_BEGIN_HF,
};

   #if IS_FDD_DUAL_MODE_SUPPORT || IS_TDD_DUAL_MODE_SUPPORT
      #if L1D_WT_COBIN_ARCHITECTURE_SUPPORT
const signed short SHORT_PM_END_POINT_TABLE_FDD[8] =
{
   TQ_PM0_BEGIN_HF-TQ_FIRST_4PM_ADV_FDD+TQ_SHORT_PMWIN_LEN_IN_IDLE+TQ_PM_WIN_OFF_MARGIN,
   TQ_PM1_BEGIN_HF-TQ_FIRST_4PM_ADV_FDD+TQ_SHORT_PMWIN_LEN_IN_IDLE+TQ_PM_WIN_OFF_MARGIN,
   TQ_PM2_BEGIN_HF-TQ_FIRST_4PM_ADV_FDD+TQ_SHORT_PMWIN_LEN_IN_IDLE+TQ_PM_WIN_OFF_MARGIN,
   TQ_PM3_BEGIN_HF-TQ_FIRST_4PM_ADV_FDD+TQ_SHORT_PMWIN_LEN_IN_IDLE+TQ_PM_WIN_OFF_MARGIN,
   TQ_PM0_BEGIN_HF+TQ_SHORT_PMWIN_LEN_IN_IDLE+TQ_PM_WIN_OFF_MARGIN+TQ_PM_REGBIAS_OFF_HF,
   TQ_PM1_BEGIN_HF+TQ_SHORT_PMWIN_LEN_IN_IDLE+TQ_PM_WIN_OFF_MARGIN+TQ_PM_REGBIAS_OFF_HF,
   TQ_PM2_BEGIN_HF+TQ_SHORT_PMWIN_LEN_IN_IDLE+TQ_PM_WIN_OFF_MARGIN+TQ_PM_REGBIAS_OFF_HF,
   TQ_VALIDATE-1,
};
      #endif /* L1D_WT_COBIN_ARCHITECTURE_SUPPORT */

const signed short SHORT_PM_END_POINT_TABLE[8] =
{
   TQ_PM0_BEGIN_HF-TQ_FIRST_4PM_ADV+TQ_SHORT_PMWIN_LEN_IN_IDLE+TQ_PM_WIN_OFF_MARGIN,
   TQ_PM1_BEGIN_HF-TQ_FIRST_4PM_ADV+TQ_SHORT_PMWIN_LEN_IN_IDLE+TQ_PM_WIN_OFF_MARGIN,
   TQ_PM2_BEGIN_HF-TQ_FIRST_4PM_ADV+TQ_SHORT_PMWIN_LEN_IN_IDLE+TQ_PM_WIN_OFF_MARGIN,
   TQ_PM3_BEGIN_HF-TQ_FIRST_4PM_ADV+TQ_SHORT_PMWIN_LEN_IN_IDLE+TQ_PM_WIN_OFF_MARGIN,
   TQ_PM0_BEGIN_HF+TQ_SHORT_PMWIN_LEN_IN_IDLE+TQ_PM_WIN_OFF_MARGIN+TQ_PM_REGBIAS_OFF_HF,
   TQ_PM1_BEGIN_HF+TQ_SHORT_PMWIN_LEN_IN_IDLE+TQ_PM_WIN_OFF_MARGIN+TQ_PM_REGBIAS_OFF_HF,
   TQ_PM2_BEGIN_HF+TQ_SHORT_PMWIN_LEN_IN_IDLE+TQ_PM_WIN_OFF_MARGIN+TQ_PM_REGBIAS_OFF_HF,
   TQ_VALIDATE-1,
};
   #endif

   #if IS_DSP_ENHANCE_SHORT_FBSB_SUPPORT
/*WT */ CONST signed short FB_ENHANCE_TQ_LEN_TABLE[FB_ENHANCE_TQ_LEN_TABLE_SIZE] =
/*WT */ {
/*WT */     0*4,   //   156*N  symbol
/*WT */    36*4,   // 156*N+36 symbol
/*WT */    76*4,   // 156*N+76 symbol
/*WT */   116*4,   //156*N+116 symbol
/*WT */ };
/*WT */
/*WT */ CONST signed short FB_BURST_SCALOR_TABLE[FB_ENHANCE_TQ_LEN_TABLE_SIZE] =
/*WT */ {
/*WT */    26887,// 420,   //   156*N  symbol
/*WT */    29127,//1820,   // 156*N+36 symbol
/*WT */    27594,// 862,   // 156*N+76 symbol
/*WT */    18079,// 565,   //156*N+116 symbol
/*WT */ };
/*WT */
/*WT */ CONST signed short FB_BURST_RESOLUTION_TABLE[FB_ENHANCE_TQ_LEN_TABLE_SIZE] =
/*WT */ {
/*WT */    22,   // 156*N      symbol
/*WT */    20,   // 156*N+36   symbol
/*WT */    21,   // 156*N+76   symbol
/*WT */    21,   // 156*N+116  symbol
/*WT */ };
/*WT */
/*WT */ CONST signed short SB_EXTEND_TQ_LEN_TABLE[SB_EXTEND_TQ_LEN_TABLE_SIZE] =
/*WT */ {
/*WT */     4,   //170 symbol SB
/*WT */    28,   //176 symbol SB
/*WT */    52,   //182 symbol SB
/*WT */ };
/*WT */
/*WT */ CONST signed short SB_BURST_SCALOR_TABLE[SB_EXTEND_TQ_LEN_TABLE_SIZE] =
/*WT */ {
/*WT */    24672,//386,   //170 symbol SB
/*WT */    23831,//372,   //176 symbol SB
/*WT */    23046,//360,   //182 symbol SB
/*WT */ };
/*WT */
/*WT */ CONST signed short SB_BURST_RESOLUTION_TABLE[SB_EXTEND_TQ_LEN_TABLE_SIZE] =
/*WT */ {
/*WT */    22,
/*WT */    22,
/*WT */    22,
/*WT */ };
   #endif /* IS_DSP_ENHANCE_SHORT_FBSB_SUPPORT */

   #if IS_TDD_DUAL_MODE_SUPPORT
/*TDD*/ const signed short TD_DM_PM_BEGIN_POINT_TABLE[8] =
/*TDD*/ {
/*TDD*/    TQ_AFC_READY,                                                                      /*  256 */
/*TDD*/    TQ_AFC_READY+(TQ_AFC_READY+TQ_1R7PM_PMWIN_LEN_IN_IDLE+TQ_PM_WIN_OFF_MARGIN)*1,     /*  648 */
/*TDD*/    TQ_AFC_READY+(TQ_AFC_READY+TQ_1R7PM_PMWIN_LEN_IN_IDLE+TQ_PM_WIN_OFF_MARGIN)*2,     /* 1040 */
/*TDD*/    TQ_AFC_READY+(TQ_AFC_READY+TQ_1R7PM_PMWIN_LEN_IN_IDLE+TQ_PM_WIN_OFF_MARGIN)*3,     /* 1432 */
/*TDD*/    TQ_AFC_READY+(TQ_AFC_READY+TQ_1R7PM_PMWIN_LEN_IN_IDLE+TQ_PM_WIN_OFF_MARGIN)*4,     /* 1824 */
/*TDD*/    TQ_AFC_READY+(TQ_AFC_READY+TQ_1R7PM_PMWIN_LEN_IN_IDLE+TQ_PM_WIN_OFF_MARGIN)*5,     /* 2216 */
/*TDD*/    TQ_AFC_READY+(TQ_AFC_READY+TQ_1R7PM_PMWIN_LEN_IN_IDLE+TQ_PM_WIN_OFF_MARGIN)*6,     /* 2608 */
/*TDD*/    TQ_AFC_READY+(TQ_AFC_READY+TQ_1R7PM_PMWIN_LEN_IN_IDLE+TQ_PM_WIN_OFF_MARGIN)*7,     /* 3000 */
/*TDD*/ };
/*TDD*/
/*TDD*/ const signed short TD_DM_PM_END_POINT_TABLE[8] =
/*TDD*/ {
/*TDD*/    (TQ_AFC_READY+TQ_1R7PM_PMWIN_LEN_IN_IDLE+TQ_PM_WIN_OFF_MARGIN)*1,                  /*  392 */
/*TDD*/    (TQ_AFC_READY+TQ_1R7PM_PMWIN_LEN_IN_IDLE+TQ_PM_WIN_OFF_MARGIN)*2,                  /*  784 */
/*TDD*/    (TQ_AFC_READY+TQ_1R7PM_PMWIN_LEN_IN_IDLE+TQ_PM_WIN_OFF_MARGIN)*3,                  /* 1176 */
/*TDD*/    (TQ_AFC_READY+TQ_1R7PM_PMWIN_LEN_IN_IDLE+TQ_PM_WIN_OFF_MARGIN)*4,                  /* 1568 */
/*TDD*/    (TQ_AFC_READY+TQ_1R7PM_PMWIN_LEN_IN_IDLE+TQ_PM_WIN_OFF_MARGIN)*5,                  /* 1960 */
/*TDD*/    TQ_MAXIMUM, //(TQ_AFC_READY+TQ_1R7PM_PMWIN_LEN_IN_IDLE+8)*6,
/*TDD*/    TQ_MAXIMUM, //(TQ_AFC_READY+TQ_1R7PM_PMWIN_LEN_IN_IDLE+8)*7,
/*TDD*/    TQ_MAXIMUM, //(TQ_AFC_READY+TQ_1R7PM_PMWIN_LEN_IN_IDLE+8)*8,
/*TDD*/ };
   #endif
CONST signed short TD_DM_PM_TQ_TABLE[/*10:11*/] =
{
   #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   0,
   #else
  -TQ_SR1,                                      /* PM_CWIN_REG_TABLE[c][0] */
  -TQ_PR1,                                      /* PM_CWIN_REG_TABLE[c][1] */
  -TQ_PR2,                                      /* PM_CWIN_REG_TABLE[c][2] */
  -TQ_PR2B,                                     /* PM_CWIN_REG_TABLE[c][3] */
   TQ_1R7PM_PMWIN_LEN_IN_IDLE+TQ_SR3,           /* PM_CWIN_REG_TABLE[c][4] */
   TQ_1R7PM_PMWIN_LEN_IN_IDLE+TQ_PR3,           /* PM_CWIN_REG_TABLE[c][5] */
   TQ_1R7PM_PMWIN_LEN_IN_IDLE+TQ_PR3A,          /* PM_CWIN_REG_TABLE[c][6] */
  -TQ_SR2,                                      /* PM_RIDX_REG_TABLE[i][0] */
  -TQ_BDLON,                                    /* PM_RIDX_REG_TABLE[i][1] */
   TQ_1R7PM_PMWIN_LEN_IN_IDLE+TQ_BDLOFF,        /* PM_RIDX_REG_TABLE[i][2] */
   #endif
};

   #if L1D_PM_1R7PM
const signed short PM_1R7PM_START_TQ_TABLE[6] =
{
   TQ_PM0_BEGIN_1R7PM,   //Null
   TQ_PM1_BEGIN_1R7PM,
   TQ_PM2_BEGIN_1R7PM,
   TQ_PM3_BEGIN_1R7PM,
   TQ_PM4_BEGIN_1R7PM,
   TQ_CTIRQ1_HF_MIN-100-TQ_1R7PM_PMWIN_LEN_IN_IDLE,
};
   #endif
#endif

/*...........................................................................*/

#if IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
CONST signed short PM_TQ_TABLE[10] =
{
   #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   0,
   #else
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_SR1,                                     /* PM_CWIN_REG_TABLE[c][0] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_PR1,                                     /* PM_CWIN_REG_TABLE[c][1] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_PR2,                                     /* PM_CWIN_REG_TABLE[c][2] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_PR2B,                                    /* PM_CWIN_REG_TABLE[c][3] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */  TQ_SHORT_PMWIN_LEN+TQ_SR3,                  /* PM_CWIN_REG_TABLE[c][4] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */  TQ_SHORT_PMWIN_LEN+TQ_PR3,                  /* PM_CWIN_REG_TABLE[c][5] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */  TQ_SHORT_PMWIN_LEN+TQ_PR3A,                 /* PM_CWIN_REG_TABLE[c][6] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_SR2,                                     /* PM_RIDX_REG_TABLE[i][0] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_BDLON,                                   /* PM_RIDX_REG_TABLE[i][1] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */  TQ_SHORT_PMWIN_LEN+TQ_BDLOFF,               /* PM_RIDX_REG_TABLE[i][2] */
   #endif
};
   #if L1D_PM_ENHANCE
CONST signed short PM_IN_IDLE_TQ_TABLE[10] =
{
   #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   0,
   #else
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_SR1,                                     /* PM_CWIN_REG_TABLE[c][0] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_PR1,                                     /* PM_CWIN_REG_TABLE[c][1] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_PR2,                                     /* PM_CWIN_REG_TABLE[c][2] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_PR2B,                                    /* PM_CWIN_REG_TABLE[c][3] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */  TQ_SHORT_PMWIN_LEN_IN_IDLE+TQ_SR3,          /* PM_CWIN_REG_TABLE[c][4] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */  TQ_SHORT_PMWIN_LEN_IN_IDLE+TQ_PR3,          /* PM_CWIN_REG_TABLE[c][5] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */  TQ_SHORT_PMWIN_LEN_IN_IDLE+TQ_PR3A,         /* PM_CWIN_REG_TABLE[c][6] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_SR2,                                     /* PM_RIDX_REG_TABLE[i][0] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_BDLON,                                   /* PM_RIDX_REG_TABLE[i][1] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */  TQ_SHORT_PMWIN_LEN_IN_IDLE+TQ_BDLOFF,       /* PM_RIDX_REG_TABLE[i][2] */
   #endif
};
      #if L1D_PM_1R7PM
CONST signed short PM_1R7PM_TQ_TABLE[10] =
{
   #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   0,
   #else
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_SR1,                                     /* PM_CWIN_REG_TABLE[c][0] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_PR1,                                     /* PM_CWIN_REG_TABLE[c][1] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_PR2,                                     /* PM_CWIN_REG_TABLE[c][2] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_PR2B,                                    /* PM_CWIN_REG_TABLE[c][3] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */  TQ_1R7PM_PMWIN_LEN_IN_IDLE+TQ_SR3,          /* PM_CWIN_REG_TABLE[c][4] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */  TQ_1R7PM_PMWIN_LEN_IN_IDLE+TQ_PR3,          /* PM_CWIN_REG_TABLE[c][5] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */  TQ_1R7PM_PMWIN_LEN_IN_IDLE+TQ_PR3A,         /* PM_CWIN_REG_TABLE[c][6] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_SR2,                                     /* PM_RIDX_REG_TABLE[i][0] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_BDLON,                                   /* PM_RIDX_REG_TABLE[i][1] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */  TQ_1R7PM_PMWIN_LEN_IN_IDLE+TQ_BDLOFF,       /* PM_RIDX_REG_TABLE[i][2] */
   #endif
};
      #endif
   #endif

#else
CONST signed short PM_TQ_TABLE[8] =
{
   #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   0,
   #else
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_SR1,                                     /* PM_CWIN_REG_TABLE[c][0] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_PR1,                                     /* PM_CWIN_REG_TABLE[c][1] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_PR2,                                     /* PM_CWIN_REG_TABLE[c][2] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */  TQ_SHORT_PMWIN_LEN+TQ_SR3,                  /* PM_CWIN_REG_TABLE[c][3] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */  TQ_SHORT_PMWIN_LEN+TQ_PR3,                  /* PM_CWIN_REG_TABLE[c][4] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_SR2,                                     /* PM_RIDX_REG_TABLE[i][0] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_BDLON,                                   /* PM_RIDX_REG_TABLE[i][1] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */  TQ_SHORT_PMWIN_LEN+TQ_BDLOFF,               /* PM_RIDX_REG_TABLE[i][2] */
   #endif
};
   #if L1D_PM_ENHANCE
CONST signed short PM_IN_IDLE_TQ_TABLE[8] =
{
      #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   0,
      #else
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_SR1,                                     /* PM_CWIN_REG_TABLE[c][0] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_PR1,                                     /* PM_CWIN_REG_TABLE[c][1] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_PR2,                                     /* PM_CWIN_REG_TABLE[c][2] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */  TQ_SHORT_PMWIN_LEN_IN_IDLE+TQ_SR3,          /* PM_CWIN_REG_TABLE[c][3] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */  TQ_SHORT_PMWIN_LEN_IN_IDLE+TQ_PR3,          /* PM_CWIN_REG_TABLE[c][4] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_SR2,                                     /* PM_RIDX_REG_TABLE[i][0] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_BDLON,                                   /* PM_RIDX_REG_TABLE[i][1] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */  TQ_SHORT_PMWIN_LEN_IN_IDLE+TQ_BDLOFF,       /* PM_RIDX_REG_TABLE[i][2] */
      #endif
};
      #if L1D_PM_1R7PM
CONST signed short PM_1R7PM_TQ_TABLE[8] =
{
         #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   0,
         #else	
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_SR1,                                     /* PM_CWIN_REG_TABLE[c][0] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_PR1,                                     /* PM_CWIN_REG_TABLE[c][1] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_PR2,                                     /* PM_CWIN_REG_TABLE[c][2] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */  TQ_1R7PM_PMWIN_LEN_IN_IDLE+TQ_SR3,          /* PM_CWIN_REG_TABLE[c][3] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */  TQ_1R7PM_PMWIN_LEN_IN_IDLE+TQ_PR3,          /* PM_CWIN_REG_TABLE[c][4] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_SR2,                                     /* PM_RIDX_REG_TABLE[i][0] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */ -TQ_BDLON,                                   /* PM_RIDX_REG_TABLE[i][1] */
   /* TQ_SLOT_BEGIN(i) + TQ_AFC_READY + */  TQ_1R7PM_PMWIN_LEN_IN_IDLE+TQ_BDLOFF,       /* PM_RIDX_REG_TABLE[i][2] */
         #endif
};
      #endif
   #endif

#endif

/*...........................................................................*/

const signed short FWIN_POS_TABLE[8] =
{
   TQ_SLOT0_BEGIN,
   TQ_SLOT1_BEGIN,
   TQ_SLOT2_BEGIN,
   TQ_SLOT3_BEGIN,
   TQ_SLOT4_BEGIN,
   TQ_SLOT5_BEGIN,
   TQ_SLOT6_BEGIN,
   TQ_SLOT7_BEGIN,
};

/*...........................................................................*/

CONST sint_P FSWIN_STOP_DATA_BPI_TABLE[2] =
{
#if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   0,
#else
   PDATA_IDLE,
   PDATA_IDLE,
#endif
};

#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
#else
const  APBADDR_P  FSWIN_STOP_REG_BPI_TABLE[2] =
{
   BPI_V(BPIRES1),
   BPI_V(BPIRES2),
};
#endif

#if IS_RF_MT6179 || IS_RF_MT6176 || IS_RF_MT6177L || IS_RF_MT6177M
const sint_S FSWIN_STOP_DATA_BSI_TABLE[4] =
{
    // Need to set RFIC due to 2 RFIC structure , 0: RFIC0, 2 : RFIC1
   (sint_S)SCTRL_IDLE(L1D_RFIC1)|AGCIDX(FS_RXWIN_IDX+0),
   (sint_S)SCTRL_IDLE(L1D_RFIC1)|AGCIDX(FS_RXWIN_IDX+1),   
   (sint_S)SCTRL_IDLE(L1D_RFIC2)|AGCIDX(FS_RXWIN_IDX+0),
   (sint_S)SCTRL_IDLE(L1D_RFIC2)|AGCIDX(FS_RXWIN_IDX+1),
};
#else
const sint_S FSWIN_STOP_DATA_BSI_TABLE[2] =
{
   (sint_S)SCTRL_IDLE|AGCIDX(FS_RXWIN_IDX+0),
   (sint_S)SCTRL_IDLE|AGCIDX(FS_RXWIN_IDX+1),
};
#endif

#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
#else
const  APBADDR_S  FSWIN_STOP_REG_BSI_TABLE[2] =
{
   BSI_Dn_CON(AGCDTIDX(FS_RXWIN_IDX+0)),
   BSI_Dn_CON(AGCDTIDX(FS_RXWIN_IDX+1)),
};
#endif

#if IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
CONST signed short FSWIN_STOP_DATA_TABLE[5] =
{
   #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   0,
   #else
   TQ_FSWIN_STOP_FSYNC+TQ_SR3,
   TQ_FSWIN_STOP_FSYNC+TQ_PR3,
   TQ_FSWIN_STOP_FSYNC+TQ_PR3A,
   TQ_MAXIMUM,
   TQ_FSWIN_STOP_FSYNC+TQ_BDLOFF,
   //PDATA_IDLE, move to FSWIN_STOP_DATA_BPI_TABLE
   //PDATA_IDLE, move to FSWIN_STOP_DATA_BPI_TABLE
   //(signed short)SCTRL_IDLE|AGCIDX(FS_RXWIN_IDX+0), move to FSWIN_STOP_DATA_BSI_TABLE
   //(signed short)SCTRL_IDLE|AGCIDX(FS_RXWIN_IDX+1), move to FSWIN_STOP_DATA_BSI_TABLE
   #endif
};

const  APBADDR  FSWIN_STOP_REG_TABLE[2][5] =
{
   {  TDMA_BSI(AGCIDX(FS_RXWIN_IDX+0)),
      TDMA_BPI(BPIRES1),
      TDMA_BPI(BPIRES2),
      TDMA_BDLON(FS_RXWIN_IDX+0),
      TDMA_BDLOFF(FS_RXWIN_IDX+0),
      //BPI_V(BPIRES1), move to FSWIN_STOP_REG_BPI_TABLE
      //BPI_V(BPIRES2), move to FSWIN_STOP_REG_BPI_TABLE
      //BSI_Dn_CON(AGCDTIDX(FS_RXWIN_IDX+0)), move to FSWIN_STOP_REG_BSI_TABLE
   },
   {  TDMA_BSI(AGCIDX(FS_RXWIN_IDX+1)),
      TDMA_BPI(BPIRES1),
      TDMA_BPI(BPIRES2),
      TDMA_BDLON(FS_RXWIN_IDX+1),
      TDMA_BDLOFF(FS_RXWIN_IDX+1),
      //BPI_V(BPIRES1), move to FSWIN_STOP_REG_BPI_TABLE
      //BPI_V(BPIRES2), move to FSWIN_STOP_REG_BPI_TABLE
      //BSI_Dn_CON(AGCDTIDX(FS_RXWIN_IDX+1)), move to FSWIN_STOP_REG_BSI_TABLE
   }
};
#else
CONST signed short FSWIN_STOP_DATA_TABLE[7] =
{
   #if IS_CC_NVRAM_CUSTOM_DATA_SUPPORT
   0,
   #else
   TQ_FSWIN_STOP_FSYNC+TQ_SR3,
   TQ_FSWIN_STOP_FSYNC+TQ_PR3,
   TQ_MAXIMUM,
   TQ_FSWIN_STOP_FSYNC+TQ_BDLOFF,
   PDATA_IDLE,
   (signed short)SCTRL_IDLE|AGCIDX(FS_RXWIN_IDX+0),
   (signed short)SCTRL_IDLE|AGCIDX(FS_RXWIN_IDX+1),
   #endif
};

const APBADDR FSWIN_STOP_REG_TABLE[2][6] =
{
   {  TDMA_BSI(AGCIDX(FS_RXWIN_IDX+0)),
      TDMA_BPI(BPIRES),
      TDMA_BDLON(FS_RXWIN_IDX+0),
      TDMA_BDLOFF(FS_RXWIN_IDX+0),
      BPI_V(BPIRES),
      BSI_Dn_CON(AGCDTIDX(FS_RXWIN_IDX+0))
   },
   {  TDMA_BSI(AGCIDX(FS_RXWIN_IDX+1)),
      TDMA_BPI(BPIRES),
      TDMA_BDLON(FS_RXWIN_IDX+1),
      TDMA_BDLOFF(FS_RXWIN_IDX+1),
      BPI_V(BPIRES),
      BSI_Dn_CON(AGCDTIDX(FS_RXWIN_IDX+1))
   }
};
#endif

#if IS_L1D_MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT
#else
#if IS_RF_MT6162 || IS_RF_MT6163
const unsigned long FSWIN_STOP_BSI_DATA_TABLE[2] =
{
   SDATA_IDLE,  SDATA_IDLE_1
};

const APBADDR FSWIN_STOP_BSI_REG_TABLE[4] =
{  (APBADDR)BSI_Dn_DAT(AGCDTIDX(FS_RXWIN_IDX+0)  ), /* the 1st data of SR3 */
   (APBADDR)BSI_Dn_DAT(AGCDTIDX(FS_RXWIN_IDX+1)  ), /* the 1st data of SR3 */
   (APBADDR)BSI_Dn_DAT(AGCDTIDX(FS_RXWIN_IDX+0)+1), /* the 2nd data of SR3 */
   (APBADDR)BSI_Dn_DAT(AGCDTIDX(FS_RXWIN_IDX+1)+1)  /* the 2nd data of SR3 */
};
#else
const unsigned long FSWIN_STOP_BSI_DATA_TABLE[1] =
{
   SDATA_IDLE,
};

const APBADDR FSWIN_STOP_BSI_REG_TABLE[2] =
{  (APBADDR)BSI_Dn_DAT(AGCDTIDX(FS_RXWIN_IDX+0)),
   (APBADDR)BSI_Dn_DAT(AGCDTIDX(FS_RXWIN_IDX+1))
};
   #endif
#endif

/* ========================================================================= */

const unsigned char LOWEST_TX_POWER[5] =
{
   5,  /* FrequencyBand400  */
   5,  /* FrequencyBand850  */
   5,  /* FrequencyBand900  */
   0,  /* FrequencyBand1800 */
   0,  /* FrequencyBand1900 */
};

/*---------------------------------------------------------------------------*/

const unsigned char CONTISLOTMASK[5] =
{
   0x81, 0x3, 0x6, 0xC, 0x18
};

const unsigned char FIRSTSLOTMASK[5] =
{
   0x1, 0x3, 0x7, 0xF, 0x0
};

/*---------------------------------------------------------------------------*/

#if IS_CHIP_MT6208 || IS_FPGA_TARGET
/*FPGA,MT6208*/ const short  FIR_COEF[] =
/*FPGA,MT6208*/ {  19 /*count*/,
/*FPGA,MT6208*/    /*-----------------------------------*/
/*FPGA,MT6208*/    0x007F, 0x007E, 0x007E, 0x007E, 0x0000,
/*FPGA,MT6208*/    0x0002, 0x0006, 0x000A, 0x000C, 0x000D,
/*FPGA,MT6208*/    0x000C, 0x000A, 0x0006, 0x0002, 0x0000,
/*FPGA,MT6208*/    0x007E, 0x007E, 0x007E, 0x007F
/*FPGA,MT6208*/    /*-----------------------------------*/
/*FPGA,MT6208*/ };
#elif IS_CHIP_MT6205
/*MT6205*/ const short  FIR_COEF[] =
/*MT6205*/ {   16 /*count*/,
/*MT6205*/     /*-------------------------------------*/
/*MT6205*/     2,  4,  5,  3,  0, -6, -12, -16, -16, -8,
/*MT6205*/     7, 28, 52, 74, 90, 95
/*MT6205*/     /*-------------------------------------*/
/*MT6205*/ };
#elif IS_CHIP_MT6217 || IS_CHIP_MT6219 || IS_CHIP_MT6227 || IS_CHIP_MT6228
/*MT6217*/ const short  FIR_COEF[] =
/*MT6217*/ {   16 /*count*/,
/*MT6217*/     /*-------------------------------------*/
/*MT6217*/     2,  4,  5,  3,  0, -6, -12, -16, -16, -8,
/*MT6217*/     7, 28, 52, 74, 90, 95
/*MT6217*/     /*-------------------------------------*/
/*MT6217*/ };
#elif IS_CHIP_MT6218
/*MT6218*/ const short  FIR_COEF[] =
/*MT6218*/ {   16 /*count*/,
/*MT6218*/     /*-------------------------------------*/
/*MT6218*/     4,  8, 10,  6,  0,-12, -24, -32, -32,-16,
/*MT6218*/    14, 56,104,148,180,190
/*MT6218*/     /*-------------------------------------*/
/*MT6218*/ };
#elif IS_CHIP_MT6225_AND_LATTER_VERSION
/*MT6225*/ const short  FIR_COEF[] =    /* WB FIR, 0020h */ /* New WB FIR Coeffs as MT6229 */
/*MT6225*/ {   11 /*count*/,
/*MT6225*/     /*-------------------------------------*/
/*MT6225*/     2, 9, -4, -20, 5, 43, 1, -87, -35, 186,
/*MT6225*/     319
/*MT6225*/     /*-------------------------------------*/
/*MT6225*/ };
/*MT6225*/ const short  NB_FIR_COEF[] = /* NB FIR, 0070h */
/*MT6225*/ {   11 /*count*/,
/*MT6225*/     /*-------------------------------------*/
/*MT6225*/     -1, 1, 5, 7, -1, -18, -27, -2, 64, 139,
/*MT6225*/     172
/*MT6225*/     /*-------------------------------------*/
/*MT6225*/ };
/*MT6225*/ const short  NB_FIR_COEF_WIDER[] = /* NB FIR for TX auto Cal, 0070h */
/*MT6225*/ {   11 /*count*/,
/*MT6225*/     /*-------------------------------------*/
/*MT6225*/     -3,  -3,  3,  13,  10, -13, -37, -18, 58, 152,
/*MT6225*/     195
/*MT6225*/     /*-------------------------------------*/
/*MT6225*/ };
#endif

#if IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
   #if IS_EDGE_SAIC_CHIP_MT6256_AND_LATTER_VERSION
/*MT6256*/ const short  FIR_COEF[] =    /* WB FIR, 0020h */
/*MT6256*/ {   11 /*count*/,
      #if (IS_CHIP_MT6256_S00 || IS_CHIP_MT6251_S00) && defined(L1D_TEST)
/*MT6256*/     /*-------------------------------------*/
/*MT6256*/     -3, 8, 6, -20, -11, 40, 19, -82, -51, 183,
/*MT6256*/     334
/*MT6256*/     /*-------------------------------------*/
      #else
/*MT6256*/     /*-------------------------------------*/
/*MT6256*/     -5, 7, 10, -20, -16, 44, 28, -87, -67, 187,   /* 120KHz */
/*MT6256*/     350
/*MT6256*/     /*-------------------------------------*/
      #endif
/*MT6256*/ };
/*MT6256*/ const short  NB_FIR_COEF[] = /* NB FIR, 0070h */
/*MT6256*/ {   11 /*count*/,
/*MT6256*/     /*-------------------------------------*/
/*MT6256*/     -1, -3, -3, 6, 15, 0, -36, -39, 40, 164,      /* 90KHz */
/*MT6256*/     226
/*MT6256*/     /*-------------------------------------*/
/*MT6256*/ };
/*MT6256*/ const short  NB_FIR_COEF_WIDER[] = /* NB FIR for TX auto Cal, 0070h */
/*MT6256*/ {   0 /*count*/,
/*MT6256*/     /*-------------------------------------*/
/*MT6256*/     /*-------------------------------------*/
/*MT6256*/ };
   #elif IS_EDGE_SAIC_CHIP_MT6238_AND_LATTER_VERSION && !IS_CHIP_MT6253T
      #ifdef L1D_TEST
/*MT6238*/ const short  FIR_COEF[] =    /* WB FIR, 0020h */
/*MT6238*/ {   11 /*count*/,
/*MT6238*/     /*-------------------------------------*/
/*MT6238*/     -3, 5, 7, -12, -11, 27, 17, -58, -29, 167,
/*MT6238*/     295
/*MT6238*/     /*-------------------------------------*/
/*MT6238*/ };
/*MT6238*/ const short  NB_FIR_COEF[] = /* NB FIR, 0070h */
/*MT6238*/ {   11 /*count*/,
/*MT6238*/     /*-------------------------------------*/
/*MT6238*/     0, -4, -4, 6, 15, 0, -32, -31, 44, 155,
/*MT6238*/     209
/*MT6238*/     /*-------------------------------------*/
/*MT6238*/ };
      #elif  IS_EDGE_SAIC_CHIP_MT6270A_AND_LATTER_VERSION && (IS_RF_MT6162 || IS_RF_MT6163)
/*MT6270A~+OH*/ const short  FIR_COEF[] =    /* WB FIR, 0020h */
/*MT6270A~+OH*/ {   11 /*count*/,
/*MT6270A~+OH*/     /*-------------------------------------*/
/*MT6270A~+OH*/     -4, 6, 8, -14, -13, 30, 20, -63, -38, 170,
/*MT6270A~+OH*/     308
/*MT6270A~+OH*/     /*-------------------------------------*/
/*MT6270A~+OH*/ };
/*MT6270A~+OH*/ const short  NB_FIR_COEF[] = /* NB FIR, 0070h */
/*MT6270A~+OH*/ {   11 /*count*/,
/*MT6270A~+OH*/     /*-------------------------------------*/
/*MT6270A~+OH*/     -2, -5, -1, 11, 13, -8, -37, -25, 52, 156,
/*MT6270A~+OH*/     204
/*MT6270A~+OH*/     /*-------------------------------------*/
/*MT6270A~+OH*/ };
      #else
/*MT6238*/ const short  FIR_COEF[] =    /* WB FIR, 0020h */
/*MT6238*/ {   11 /*count*/,
/*MT6238*/     /*-------------------------------------*/
/*MT6238*/     -3, 5, 7, -12, -11, 27, 17, -58, -29, 167,
/*MT6238*/     295
/*MT6238*/     /*-------------------------------------*/
/*MT6238*/ };
/*MT6238*/ const short  NB_FIR_COEF[] = /* NB FIR, 0070h */
/*MT6238*/ {   11 /*count*/,
/*MT6238*/     /*-------------------------------------*/
/*MT6238*/     0, -4, -4, 6, 15, 0, -32, -31, 44, 155,
/*MT6238*/     209
/*MT6238*/     /*-------------------------------------*/
/*MT6238*/ };
      #endif
/*MT6238*/ const short  NB_FIR_COEF_WIDER[] = /* NB FIR for TX auto Cal, 0070h */
/*MT6238*/ {   11 /*count*/,
/*MT6238*/     /*-------------------------------------*/
/*MT6238*/     -3,  -3,  3,  13,  10, -13, -37, -18, 58, 152,
/*MT6238*/     195
/*MT6238*/     /*-------------------------------------*/
/*MT6238*/ };
   #elif IS_CHIP_MT6223 || IS_CHIP_MT6253T
/*MT6223*/ const short  FIR_COEF[] =    /* WB FIR, 0020h */
/*MT6223*/ {   11 /*count*/,
      #ifdef L1D_TEST
/*MT6223*/     /*-------------------------------------*/
/*MT6223*/     2, 9, -4, -20, 5, 43, 1, -87, -35, 186,
/*MT6223*/     319
/*MT6223*/     /*-------------------------------------*/
      #else
/*MT6223*/     /*-------------------------------------*/
/*MT6223*/     -1, 8, 3, -15, -6, 32, 11, -65, -29, 172,
/*MT6223*/     298
/*MT6223*/     /*-------------------------------------*/
      #endif
/*MT6223*/ };
/*MT6223*/ const short  NB_FIR_COEF[] = /* NB FIR, 0070h */
/*MT6223*/ {   11 /*count*/,
/*MT6223*/     /*-------------------------------------*/
/*MT6223*/     -1, 1, 5, 7, -1, -18, -27, -2, 64, 139,
/*MT6223*/     172
/*MT6223*/     /*-------------------------------------*/
/*MT6223*/ };
/*MT6223*/ const short  NB_FIR_COEF_WIDER[] = /* NB FIR for TX auto Cal, 0070h */
/*MT6223*/ {   11 /*count*/,
/*MT6223*/     /*-------------------------------------*/
/*MT6223*/     -3,  -3,  3,  13,  10, -13, -37, -18, 58, 152,
/*MT6223*/     195
/*MT6223*/     /*-------------------------------------*/
/*MT6223*/ };
   #elif IS_CHIP_MT6229 || IS_CHIP_MT6268T
/*MT6229*/ const short  FIR_COEF[] =    /* WB FIR, 0020h */
/*MT6229*/ {   11 /*count*/,
/*MT6229*/     /*-------------------------------------*/
/*MT6229*/     2, 9, -4, -20, 5, 43, 1, -87, -35, 186,
/*MT6229*/     319
/*MT6229*/     /*-------------------------------------*/
/*MT6229*/ };
/*MT6229*/ const short  NB_FIR_COEF[] = /* NB FIR, 0070h */
/*MT6229*/ {   11 /*count*/,
/*MT6229*/     /*-------------------------------------*/
/*MT6229*/     -1, 1, 5, 7, -1, -18, -27, -2, 64, 139,
/*MT6229*/     172
/*MT6229*/     /*-------------------------------------*/
/*MT6229*/ };
/*MT6229*/ const short  NB_FIR_COEF_WIDER[] = /* NB FIR for TX auto Cal, 0070h */
/*MT6229*/ {   11 /*count*/,
/*MT6229*/     /*-------------------------------------*/
/*MT6229*/     -3,  -3,  3,  13,  10, -13, -37, -18, 58, 152,
/*MT6229*/     195
/*MT6229*/     /*-------------------------------------*/
/*MT6229*/ };
   #endif

   #ifdef L1D_TEST
      #if IS_CHIP_MT6256_S00
/*MT6229,L1D_TEST~*/ const short  VCXO_NARROW_FB_FIR_COEF[] =  /* Narrow Band FIR for FB */
/*MT6229,L1D_TEST~*/ {   11 /*count*/,
/*MT6229,L1D_TEST~*/     /*-------------------------------------*/
/*MT6229,L1D_TEST~*/     -2, -3, -3, 0, 6, 16, 30, 46, 61, 71, 75,
/*MT6229,L1D_TEST~*/     /*-------------------------------------*/
/*MT6229,L1D_TEST~*/ };
/*MT6229,L1D_TEST~*/ const short  VCXO_WIDE_FB_FIR_COEF[] =    /* Wide Band  FIR for FB */
/*MT6229,L1D_TEST~*/ {   11 /*count*/,
/*MT6229,L1D_TEST~*/     /*-------------------------------------*/
/*MT6229,L1D_TEST~*/     1, -1, -5, -10, -12, -7, 12, 41, 75, 102, 113,
/*MT6229,L1D_TEST~*/     /*-------------------------------------*/
/*MT6229,L1D_TEST~*/ };
      #elif IS_CHIP_MT6256 || IS_CHIP_MT6255 || IS_CHIP_MT6250 || IS_CHIP_MT6280 || IS_CHIP_MT6583_MD1 || IS_CHIP_MT6583_MD2 || IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
/*MT6256,L1D_TEST~*/ const short  VCXO_NARROW_FB_FIR_COEF[] =  /* Narrow Band FIR for FB: 30KHz */
/*MT6256,L1D_TEST~*/ {   11 /*count*/,
/*MT6256,L1D_TEST~*/     /*-------------------------------------*/
/*MT6256,L1D_TEST~*/     -3, -6, -6, -1, 12, 32, 60, 91, 119, 140, 148,
/*MT6256,L1D_TEST~*/     /*-------------------------------------*/
/*MT6256,L1D_TEST~*/ };
/*MT6256,L1D_TEST~*/ const short  VCXO_WIDE_FB_FIR_COEF[] =    /* Wide Band  FIR for FB: 50KHz */
/*MT6256,L1D_TEST~*/ {   11 /*count*/,
/*MT6256,L1D_TEST~*/     /*-------------------------------------*/
/*MT6256,L1D_TEST~*/     1, -2, -10, -20, -25, -13, 24, 83, 152, 208, 228, /* WN:dummy pattern */
/*MT6256,L1D_TEST~*/     /*-------------------------------------*/
/*MT6256,L1D_TEST~*/ };
      #else
/*MT6229,L1D_TEST~*/ const short  VCXO_NARROW_FB_FIR_COEF[] =  /* Narrow Band FIR for FB */
/*MT6229,L1D_TEST~*/ {   11 /*count*/,
/*MT6229,L1D_TEST~*/     /*-------------------------------------*/
/*MT6229,L1D_TEST~*/     -2, -3, -3, 0, 6, 16, 30, 46, 61, 71, 75,
/*MT6229,L1D_TEST~*/     /*-------------------------------------*/
/*MT6229,L1D_TEST~*/ };
/*MT6229,L1D_TEST~*/ const short  VCXO_WIDE_FB_FIR_COEF[] =    /* Wide Band  FIR for FB */
/*MT6229,L1D_TEST~*/ {   11 /*count*/,
/*MT6229,L1D_TEST~*/     /*-------------------------------------*/
/*MT6229,L1D_TEST~*/     1, -1, -5, -10, -12, -7, 12, 41, 75, 102, 113,
/*MT6229,L1D_TEST~*/     /*-------------------------------------*/
/*MT6229,L1D_TEST~*/ };
      #endif
/*MT6229,L1D_TEST~*/ const short  TCVCXO_NARROW_FB_FIR_COEF[] =  /* Narrow Band FIR for FB: 15KHz */
/*MT6229,L1D_TEST~*/ {   11 /*count*/,
/*MT6229,L1D_TEST~*/     /*-------------------------------------*/
/*MT6229,L1D_TEST~*/     7, 8, 12, 16, 21, 26, 30, 34, 37, 39, 40,
/*MT6229,L1D_TEST~*/     /*-------------------------------------*/
/*MT6229,L1D_TEST~*/ };
/*MT6229,L1D_TEST~*/ const short  TCVCXO_WIDE_FB_FIR_COEF[] =    /* Wide Band FIR for FB: 65KHz */
/*MT6229,L1D_TEST~*/ {   11 /*count*/,
/*MT6229,L1D_TEST~*/     /*-------------------------------------*/
/*MT6229,L1D_TEST~*/     3, 5, 3, -4, -16, -21, -9, 26, 76, 121, 139,
/*MT6229,L1D_TEST~*/     /*-------------------------------------*/
/*MT6229,L1D_TEST~*/ };
   #endif

   #if defined(MT6229_FB_VCXO)
      #if IS_CHIP_MT6256_S00
/*MT6256 */ const short  NARROW_FB_FIR_COEF[] =  /* Narrow Band FIR for FB */
/*MT6256 */ {   11 /*count*/,
/*MT6256 */     /*-------------------------------------*/
/*MT6256 */     -2, -3, -3, 0, 6, 16, 30, 46, 61, 71, 75,
/*MT6256 */     /*-------------------------------------*/
/*MT6256 */ };
/*MT6256 */ const short  WIDE_FB_FIR_COEF[] =    /* Wide Band  FIR for FB */
/*MT6256 */ {   11 /*count*/,
/*MT6256 */     /*-------------------------------------*/
/*MT6256 */     1, -1, -5, -10, -12, -7, 12, 41, 75, 102, 113,
/*MT6256 */     /*-------------------------------------*/
/*MT6256 */ };
      #elif IS_CHIP_MT6256 || IS_CHIP_MT6255 || IS_CHIP_MT6250 || IS_CHIP_MT6280 || IS_CHIP_MT6583_MD1 || IS_CHIP_MT6583_MD2 || IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
/*MT6256~*/ const short  NARROW_FB_FIR_COEF[] =  /* Narrow Band FIR for FB */
/*MT6256~*/ {   11 /*count*/,
/*MT6256~*/     /*-------------------------------------*/
/*MT6256~*/     -3, -6, -6, -1, 12, 32, 60, 91, 119, 140, 148,
/*MT6256~*/     /*-------------------------------------*/
/*MT6256~*/ };
/*MT6256~*/ const short  WIDE_FB_FIR_COEF[] =    /* Wide Band  FIR for FB */
/*MT6256~*/ {   11 /*count*/,
/*MT6256~*/     /*-------------------------------------*/
/*MT6256~*/     1, -2, -10, -20, -25, -13, 24, 83, 152, 208, 228,
/*MT6256~*/     /*-------------------------------------*/
/*MT6256~*/ };
      #else
/*MT6229~*/ const short  NARROW_FB_FIR_COEF[] =  /* Narrow Band FIR for FB */
/*MT6229~*/ {   11 /*count*/,
/*MT6229~*/     /*-------------------------------------*/
/*MT6229~*/     -2, -3, -3, 0, 6, 16, 30, 46, 61, 71, 75,
/*MT6229~*/     /*-------------------------------------*/
/*MT6229~*/ };
/*MT6229~*/ const short  WIDE_FB_FIR_COEF[] =    /* Wide Band  FIR for FB */
/*MT6229~*/ {   11 /*count*/,
/*MT6229~*/     /*-------------------------------------*/
/*MT6229~*/     1, -1, -5, -10, -12, -7, 12, 41, 75, 102, 113,
/*MT6229~*/     /*-------------------------------------*/
/*MT6229~*/ };
      #endif
   #else
/*MT6229~*/ const short  NARROW_FB_FIR_COEF[] =  /* Narrow Band FIR for FB */
/*MT6229~*/ {   11 /*count*/,
/*MT6229~*/     /*-------------------------------------*/
/*MT6229~*/     7, 8, 12, 16, 21, 26, 30, 34, 37, 39, 40,
/*MT6229~*/     /*-------------------------------------*/
/*MT6229~*/ };
/*MT6229~*/ const short  WIDE_FB_FIR_COEF[] =    /* Wide Band FIR for FB */
/*MT6229~*/ {   11 /*count*/,
/*MT6229~*/     /*-------------------------------------*/
/*MT6229~*/     3, 5, 3, -4, -16, -21, -9, 26, 76, 121, 139,
/*MT6229~*/     /*-------------------------------------*/
/*MT6229~*/ };
   #endif
#endif

#if IS_DUAL_LOOP_AFC_CONTROL_SUPPORT
unsigned char USE_3_SUBSTAGES_FB_STAGE1       = 0;  /* USE_3_SUBSTAGES_FB_STAGE1 should be set according to l1d_rf.is_lock_dcxo */
#elif !IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
   #if  defined(AFC_VCXO) || defined(AFC_VCXO_2G)
const unsigned char USE_3_SUBSTAGES_FB_STAGE1 = 1;
   #else
const unsigned char USE_3_SUBSTAGES_FB_STAGE1 = 0;
   #endif
#endif

/*-----------------------------*/
/* define DSP power constance  */
/*-----------------------------*/
const int dsp_power_constance = (int)(DSP_MAGIC_VALUE*64);

#ifndef  DCS_TX_GAIN_SETTING
#define  DCS_TX_GAIN_SETTING    0
#endif
#ifndef  PCS_TX_GAIN_SETTING
#define  PCS_TX_GAIN_SETTING    0
#endif

#if (DCS_TX_GAIN_SETTING<=-1) || (PCS_TX_GAIN_SETTING<=-1) || (DCS_TX_GAIN_SETTING>=3) || (PCS_TX_GAIN_SETTING>=3)
#error "MT6139E TX gain setting out of range!"
#endif
const unsigned char dcs_tx_gain_setting=DCS_TX_GAIN_SETTING;
const unsigned char pcs_tx_gain_setting=PCS_TX_GAIN_SETTING;

/*---------------------------------*/
/* AFC Kalman filter coefficients  */
/*---------------------------------*/
#define  AFC_A0_G_SNR          (2560)      /*   a0=0.5, g=1, SNR=4  (0.625) * (2^12) */
#define  AFC_PAD_VCXO          (5120)      /*   (1.2e-6)     * (2^24) */
#if IS_TWO_STEP_AFC_TRACKING_SUPPORT
#define  AFC_PAD_SPEED_VCXO    (10240)     /*   (1.2e-6)     * (2^25) */
#endif
#define  AFC_PAD_VCTCXO        (640)       /*   (1.2e-6)     * (2^24) */
#if IS_TWO_STEP_AFC_TRACKING_SUPPORT
#define  AFC_PAD_SPEED_VCTCXO  (1280)
#endif

#if IS_TWO_STEP_AFC_TRACKING_SUPPORT
const signed int AFC_KALMAN_FILTER_PAD_SPEED_VCXO    = ( (AFC_PAD_SPEED_VCXO <<12)/AFC_A0_G_SNR )>>4;     /* VCXO:512 */
const signed int AFC_KALMAN_FILTER_PAD_NORMAL_VCXO   = ( (AFC_PAD_VCXO<<12)/AFC_A0_G_SNR )>>4;            /* VCXO:512 */
signed int AFC_KALMAN_FILTER_PAD_VCXO                = ( (AFC_PAD_VCXO<<12)/AFC_A0_G_SNR )>>4;            /* VCXO:512 */

const signed int AFC_KALMAN_FILTER_PAD_SPEED_VCTCXO  = ( (AFC_PAD_SPEED_VCTCXO <<12)/AFC_A0_G_SNR )>>4;   /* TCVCXO:64 */
const signed int AFC_KALMAN_FILTER_PAD_NORMAL_VCTCXO = ( (AFC_PAD_VCTCXO<<12)/AFC_A0_G_SNR )>>4;          /* TCVCXO:64 */
signed int AFC_KALMAN_FILTER_PAD_VCTCXO              = ( (AFC_PAD_VCTCXO<<12)/AFC_A0_G_SNR )>>4;          /* TCVCXO:64 */
#else
const signed int AFC_KALMAN_FILTER_PAD_VCXO          = ( (AFC_PAD_VCXO<<12)/AFC_A0_G_SNR )>>4;            /* VCXO:512 */
const signed int AFC_KALMAN_FILTER_PAD_VCTCXO        = ( (AFC_PAD_VCTCXO<<12)/AFC_A0_G_SNR )>>4;          /* TCVCXO:64 */
#endif

//AFC Thermal Tracking Parameter
unsigned char AFC_UPDATE_PERIOD          = 255;   //shall be the multiple of 51 frames

//#ifndef GSM_ERR_DET_ID
//#define  GSM_ERR_DET_ID          9  //<--temp use, each rf should define this in l1d_custom_rf.h
//#endif

//CONST unsigned char gsm_err_det_id = GSM_ERR_DET_ID;

#if IS_MPLL_FH_SUPPORT || IS_MT6276E1_TEMP_MPLL_FH_SUPPORT || IS_MT6276_FREERUN_SUPPORT
unsigned char MPLL_FLT = 1;
#endif

#if IS_SPLL_FH_SUPPORT
unsigned char SPLL_FLT = 1;
#endif

#if IS_32K_CRYSTAL_REMOVAL_SUPPORT
char l1d_ext_32k_exist = 0;
#endif

#if IS_RF_MT6140D
CONST unsigned long  TXCW[2][2][5]=
{  {     // High PCL
      {  0x0000000,  //450  /* GMSK */
         0x20A480B,  //850
         0x21A480B,  //900
         0x202400B,  //1800
         0x202400B,  //1900
      },
      {  0x0000000,  //450  /* EPSK */
         0x200F89B,  //850
         0x208F89B,  //900
         0x200F07B,  //1800
         0x200F07B,  //1900
      },
   },
   {     // Low PCL
      {  0x0000000,  //450  /* GMSK */
         0x20A480B,  //850
         0x21A480B,  //900
         0x202400B,  //1800
         0x202400B,  //1900
      },
      {  0x0000000,  //450  /* EPSK */
         0x214F89B,  //850
         0x21CF89B,  //900
         0x201E07B,  //1800
         0x201E07B,  //1900
      },
   },
};
#endif

/*...........................................................................*/
#if defined(__MTK_TARGET__) && defined(__ARMCC_VERSION)
#pragma arm section rwdata , rodata , zidata
#endif /* __MTK_TARGET__ */
/*...........................................................................*/

/* TX power control */
#if IS_TX_POWER_CONTROL_SUPPORT
   #if IS_TXPC_CL_BSI_SUPPORT && IS_BSI_CLOSED_LOOP_TXPC_ON
char  closed_loop_txpc_type   = 2;
   #elif IS_TXPC_CL_AUXADC_SUPPORT && IS_AUXADC_CLOSED_LOOP_TXPC_ON
char  closed_loop_txpc_type   = 1;
   #else
char  closed_loop_txpc_type   = 0;
   #endif

   #if IS_TXPC_OL_AUXADC_SUPPORT && IS_EPSK_TX_SUPPORT
const char  open_loop_txpc_type     = 1;
   #elif IS_TXPC_OL_BSI_SUPPORT && IS_EPSK_TX_SUPPORT
const char  open_loop_txpc_type     = 2;
   #else
const char  open_loop_txpc_type     = 0;
   #endif

char *is_txpc_calibrated_ptr;

   #if !defined(__UMTS_RAT__) || !defined(__MTK_UL1_FDD__)|| defined(__MULTI_RAT_AFC_TADC_SHARE_SUPPORT__)
      #if IS_RF_MT6162 || IS_RF_MT6163
const char  temp_adc_cal_type       = 1; /* get the temperature info from AUXADC */
      #elif IS_RF_MT6256RF || IS_RF_MT6280RF || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
const char  temp_adc_cal_type       = 2; /* get the temperature info from BSI    */
      #else
const char  temp_adc_cal_type       = 0;
      #endif
   #else
const char  temp_adc_cal_type       = 0;
   #endif
#endif

#if IS_TXPC_CL_AUXADC_SUPPORT
CONST short TQ_TxSampleOffsetGMSK   = 0;   //QB_TX_SAMPLE_OFFSET_GMSK;
   #if IS_EPSK_TX_SUPPORT
CONST short TQ_TxSampleOffsetEPSK   = 0;   //QB_TX_SAMPLE_OFFSET_EPSK;
   #endif
      short scan_qb = -30; // for fine tune timing
#endif

#if IS_TXPC_OL_BSI_SUPPORT || IS_TXPC_OL_AUXADC_SUPPORT
   #if IS_CHIP_MT6256 || IS_CHIP_MT6280 || IS_CHIP_MT6583_MD1 || IS_CHIP_MT6583_MD2 || IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293 || IS_EDGE_SAIC_CHIP_MT6270A_AND_LATTER_VERSION
CONST short txpc_epsk_tp_slope_lb   = 0;   //TXPC_EPSK_TP_SLOPE_LB;
CONST short txpc_epsk_tp_slope_hb   = 0;   //TXPC_EPSK_TP_SLOPE_HB;
      short *ref_temperature_ptr;
   #endif
#endif

/* RX LNA calbiration */
#if IS_MULTI_LNA_MODE_CALIBRATION_SUPPORT
   #if IS_RF_MT6162 || IS_RF_MT6163 || IS_RF_MT6280RF || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
const char  is_lna_calibration      = 1;
   #else
const char  is_lna_calibration      = 0;
   #endif
#endif

#if IS_DECREASE_RF_TX_MAX_POWER_SUPPORT
/*------------------------------------------------------------------------------------*/
/*  Tx_Fine_Tune_Table      : Modifiable (used for fine tune tx power at build time)  */
/*  Tx_Power_Decrement_Table: Unmodifiable (keep all value equal zero)                */
/*------------------------------------------------------------------------------------*/
sTX_POWER_DECREMENT_TABLE Tx_Fine_Tune_Table=
{
   {
	  /* default value is rollback power accroding to multi-tx slots */
      /* unit: 1/8 dB */
      {  /* FrequencyBand850 */
         {  /* GMSK: 1T, 2T, 3T, 4T */
                      0,  24,  38,  48   //  0, 24, 38, 48
         },
         {  /* EPSK: 1T, 2T, 3T, 4T */
                      0,  24,  38,  48   //  0, 24, 38, 48
         }
      },
      {  /* FrequencyBand900 */
         {  /* GMSK: 1T, 2T, 3T, 4T */
                      0,  24,  38,  48   //  0, 24, 38, 48
         },
         {  /* EPSK: 1T, 2T, 3T, 4T */
                      0,  24,  38,  48   //  0, 24, 38, 48
         }
      },
      {  /* FrequencyBand1800 */
         {  /* GMSK: 1T, 2T, 3T, 4T */
                      0,  24,  38,  48   //  0, 24, 38, 48
         },
         {  /* EPSK: 1T, 2T, 3T, 4T */
                      0,  24,  38,  48   //  0, 24, 38, 48
         }
      },
      {  /* FrequencyBand1900 */
         {  /* GMSK: 1T, 2T, 3T, 4T */
                      0,  24,  38,  48   //  0, 24, 38, 48
         },
         {  /* EPSK: 1T, 2T, 3T, 4T */
                      0,  24,  38,  48   //  0, 24, 38, 48
         }
      },
   }
};

/* Tx_Power_Decrement_Table should be all zero. */
sTX_POWER_DECREMENT_TABLE Tx_Power_Decrement_Table={{{{0}}}};
   #if IS_TAS_MAX_TXPWR_REDUCTION_SUPPORT
sTX_POWER_DECREMENT_TABLE Tx_Power_Decrement_Table_Tas={{{{0}}}};
   #endif
#endif /* IS_DECREASE_RF_TX_MAX_POWER_SUPPORT */

/*----------------------------------------------*/
/*   BPI Check                                  */
/*----------------------------------------------*/
#if IS_RF_MTKSOC1 || IS_RF_MTKSOC1T
/*The BPI9 is the control of RFVCO. It should be set at PR1, PR2, PT1, PT2 and PT2B*/
   #if !(0x0200 & PDATA_GSM850_PR1 & PDATA_GSM850_PR2 & PDATA_GSM850_PT1 & PDATA_GSM850_PT2 & PDATA_GSM850_PT2B)
#error " Please set PDATA_RFDOO (BPI9) into GSM850 BPI data of PR1, PR2, PT1, PT2 and PT2B!!!"
   #endif

   #if !(0x0200 & PDATA_GSM_PR1 & PDATA_GSM_PR2 & PDATA_GSM_PT1 & PDATA_GSM_PT2 & PDATA_GSM_PT2B)
#error " Please set PDATA_RFDOO (BPI9) into GSM BPI data bit9 of PR1, PR2, PT1, PT2 and PT2B!!!"
   #endif

   #if !(0x0200 & PDATA_DCS_PR1 & PDATA_DCS_PR2 & PDATA_DCS_PT1 & PDATA_DCS_PT2 & PDATA_DCS_PT2B)
#error " Please set PDATA_RFDOO (BPI9) into DCS BPI data bit9 of PR1, PR2, PT1, PT2 and PT2B!!!"
   #endif

   #if !(0x0200 & PDATA_PCS_PR1 & PDATA_PCS_PR2 & PDATA_PCS_PT1 & PDATA_PCS_PT2 & PDATA_PCS_PT2B)
#error " Please set PDATA_RFDOO (BPI9) into PCS BPI data bit9 of PR1, PR2, PT1, PT2 and PT2B!!!"
   #endif
#endif /*IS_CHIP_MT6253*/

#if IS_AST_B2S_SUPPORT
   #if !(TQ_PR1 > TQ_AFC_READY_RX + 3) || !(TQ_PT1 > TQ_AFC_READY + 3)
#error " Please set (TQ_PR1 > TQ_AFC_READY_RX + 3) and (TQ_PT1 > TQ_AFC_READY + 3) for AST project!!!"
   #endif
#endif

#if IS_RF_MT6162 || IS_RF_MT6163
   #if ((PDATA_GSM850_PR3 |PDATA_GSM_PR3 |PDATA_DCS_PR3 |PDATA_PCS_PR3 ) & (1<<GSM_ERR_DET_ID))
#error "Bit[9] of PR3 should not be 1!"
   #endif
   #if ((PDATA_GSM850_PR3A|PDATA_GSM_PR3A|PDATA_DCS_PR3A|PDATA_PCS_PR3A) & (1<<GSM_ERR_DET_ID))
#error "Bit[9] of PR3A should not be 1!"
   #endif
   #if ((PDATA_GSM850_PT3 |PDATA_GSM_PT3 |PDATA_DCS_PT3 |PDATA_PCS_PT3 ) & (1<<GSM_ERR_DET_ID))
#error "Bit[9] of PT3 should not be 1!"
   #endif
   #if ((PDATA_GSM850_PT3A|PDATA_GSM_PT3A|PDATA_DCS_PT3A|PDATA_PCS_PT3A) & (1<<GSM_ERR_DET_ID))
#error "Bit[9] of PT3A should not be 1!"
   #endif
#endif

/*----------------------------------------------*/
/*   BSI Check                                  */
/*----------------------------------------------*/
#if IS_BSI_V2_SUPPORT
// ST2B/2M data count should be the same with Xn data count
   #if (SX2_DATA_COUNT != ST2B_ST2M_DATA_COUNT)
#error "BSI v2.0 only support Xn count == Yn count"
   #endif
#endif
#if IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
// BSI event count should be less than chip support event count
   #if (CWIN_BSI_EVENT_COUNT*CWIN_COUNT+RIDX_COUNT+YIDX_COUNT > BSI_RFIC_EVENT_COUNT)
#error "BSI event counts should not exceed the hardware limit, please check BSI setting."
   #endif
#else   
// BSI event count should be less than chip support event count
   #if (CWIN_BSI_EVENT_COUNT*CWIN_COUNT+RIDX_COUNT+YIDX_COUNT > BSI_EVENT_COUNT)
#error "BSI event counts should not exceed the hardware limit, please check BSI setting."
   #endif
#endif
// BSI data count should be less than chip support data count
#if ((SX0_DATA_COUNT+SX1_DATA_COUNT+SX3_DATA_COUNT)*CWIN_COUNT+SX2_DATA_COUNT*RIDX_COUNT+ST2B_ST2M_DATA_COUNT*YIDX_COUNT > BSI_DATA_COUNT_SW_LIMIT)
#error "BSI data counts should not exceed the hardware limit, please check BSI setting."
#endif

/*...........................................................................*/

#if defined(L1_SIM)
#elif IS_CHIP_MT6256_S00
#elif IS_CHIP_MT6256 || IS_CHIP_MT6255 || IS_CHIP_MT6250 || IS_CHIP_MT6280 || IS_CHIP_MT6583_MD1 || IS_CHIP_MT6583_MD2 || IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
   #if (DCOC_QB_RX_FENA_2_FSYNC!=QB_RX_FENA_2_FSYNC)
#error "DCOC_QB_RX_FENA_2_FSYNC is not equal to QB_RX_FENA_2_FSYNC! "
   #endif
#endif

/*...........................................................................*/

#if IS_RF_TOOL_CUSTOMIZATION_SUPPORT

   #if IS_RF_MT6140D
#define RF_TYPE      1
   #elif IS_RF_AD6548
#define RF_TYPE      2
   #elif IS_RF_AD6546
#define RF_TYPE      3
   #else
#define RF_TYPE      1
   #endif

sRF_TABLE l1_rf_table=
{
   0x12345678,                                                            // the special pattern of start position
   2,                                                                     // Struct Version ID
   RF_TYPE,                                                               // default set MT6140D_RF
   0,                                                                     // default is false, and will be changed  as true after tool update
  {   {  { RFDEF, RFDEF, RFDEF, RFDEF, RFDEF },
         { RFDEF, RFDEF, RFDEF, RFDEF, RFDEF },
      },
      {  { RFDEF, RFDEF, RFDEF, RFDEF, RFDEF },
         { RFDEF, RFDEF, RFDEF, RFDEF, RFDEF },
      },
      {  { RFDEF, RFDEF, RFDEF, RFDEF, RFDEF },
         { RFDEF, RFDEF, RFDEF, RFDEF, RFDEF },
      },
      {  { RFDEF, RFDEF, RFDEF, RFDEF, RFDEF },
         { RFDEF, RFDEF, RFDEF, RFDEF, RFDEF },
      },
      {  { RFDEF, RFDEF, RFDEF, RFDEF, RFDEF },
         { RFDEF, RFDEF, RFDEF, RFDEF, RFDEF },
      }
  },                                                                      //PDATA_TABLE[5][2][5]
  {   {  { RFDEF, RFDEF, RFDEF },
         { RFDEF, RFDEF, RFDEF },
         { RFDEF, RFDEF, RFDEF },
      },
      {  { RFDEF, RFDEF, RFDEF },
         { RFDEF, RFDEF, RFDEF },
         { RFDEF, RFDEF, RFDEF },
      },
      {  { RFDEF, RFDEF, RFDEF },
         { RFDEF, RFDEF, RFDEF },
         { RFDEF, RFDEF, RFDEF },
      },
      {  { RFDEF, RFDEF, RFDEF },
         { RFDEF, RFDEF, RFDEF },
         { RFDEF, RFDEF, RFDEF },
      },
      {  { RFDEF, RFDEF, RFDEF },
         { RFDEF, RFDEF, RFDEF },
         { RFDEF, RFDEF, RFDEF },
      }
   },                                                                     //PDATA_TABLE3[5][3][3]
  { RFDEF, RFDEF, RFDEF, RFDEF, RFDEF, RFDEF,RFDEF, RFDEF },              //RX_START_TQ_TABLE[8]
  { RFDEF, RFDEF, RFDEF, RFDEF, RFDEF },                                  //RX_END_TQ_TABLE[5]
  { RFDEF, RFDEF, RFDEF },                                                //RX_MIDDLE_TQ_TABLE
  { RFDEF, RFDEF },                                                       //RX_MIDDLE_TQ_TABLE2[2]
  { RFDEF, RFDEF, RFDEF, RFDEF, RFDEF, RFDEF,RFDEF, RFDEF },              //TX_START_TQ_TABLE[8]
  { RFDEF },                                                              //TX_START_TQ_TABLE2[1]
  { RFDEF },                                                              //TX_START_TQ_TABLE3[1]
  { RFDEF, RFDEF, RFDEF, RFDEF, RFDEF, RFDEF },                           //TX_END_TQ_TABLE[6]
  { RFDEF, RFDEF, RFDEF, RFDEF },                                         //TX_MIDDLE_TQ_TABLE[4]
  {   { RFDEF, RFDEF, RFDEF, RFDEF },
      { RFDEF, RFDEF, RFDEF, RFDEF }
  },                                                                      //TX_MIDDLE_TQ_TABLE2[2][4]
  { RFDEF, RFDEF, RFDEF, RFDEF, RFDEF, RFDEF,RFDEF },                     //PM_START_TQ_TABLE[7]
  { RFDEF, RFDEF, RFDEF, RFDEF, RFDEF, RFDEF,RFDEF, RFDEF,RFDEF, RFDEF }, //PM_TQ_TABLE[10]
  { RFDEF, RFDEF, RFDEF, RFDEF, RFDEF, RFDEF,RFDEF, RFDEF,RFDEF, RFDEF }, //PM_IN_IDLE_TQ_TABLE[10]
  { RFDEF, RFDEF, RFDEF, RFDEF, RFDEF, RFDEF,RFDEF, RFDEF,RFDEF, RFDEF }, //PM_1R7PM_TQ_TABLE[10]
  { RFDEF, RFDEF, RFDEF, RFDEF, RFDEF, RFDEF,RFDEF, RFDEF,RFDEF },        //FSWIN_STOP_DATA_TABLE[9]
  {   {   { URFDEF, URFDEF, URFDEF, URFDEF, URFDEF },
          { URFDEF, URFDEF, URFDEF, URFDEF, URFDEF },
      },
      {   { URFDEF, URFDEF, URFDEF, URFDEF, URFDEF },
          { URFDEF, URFDEF, URFDEF, URFDEF, URFDEF },
      },
   },                                                                    //txios_pcl_tab[2][2][5]
   {   {   { URFDEF, URFDEF, URFDEF, URFDEF, URFDEF },
           { URFDEF, URFDEF, URFDEF, URFDEF, URFDEF },
       },
       {   { URFDEF, URFDEF, URFDEF, URFDEF, URFDEF },
           { URFDEF, URFDEF, URFDEF, URFDEF, URFDEF },
       }
   },                                                                    //txitc_pcl_tab[2][2][5]
   {   {   { URFDEF, URFDEF, URFDEF, URFDEF, URFDEF },
           { URFDEF, URFDEF, URFDEF, URFDEF, URFDEF },
       },
       {   { URFDEF, URFDEF, URFDEF, URFDEF, URFDEF },
           { URFDEF, URFDEF, URFDEF, URFDEF, URFDEF },
       }
   },                                                                    //txmod_gc_tab[2][2][5]
   30,                                                                   //XCAPID
   0x87654321,                                                           //the special pattern of end1 position
   PDATA_GMSK,
   PDATA_8PSK,
   GSM850_GSM900_SWAP,
   DCS1800_PCS1900_SWAP,
   SECONDS2FRAME(180),                                                   //BAT_VOLTAGE_SAMPLE_PERIOD;
   1,                                                                    //BAT_VOLTAGE_AVERAGE_COUNT;
   SECONDS2FRAME(180),                                                   //BAT_TEMPERATURE_SAMPLE_PERIOD;
   1,                                                                    //BAT_TEMPERATURE_AVERAGE_COUNT;
   VOLT2UVOLT(3.5),                                                      //BAT_LOW_VOLTAGE;
   VOLT2UVOLT(4.0),                                                      //BAT_HIGH_VOLTAGE;
   TEMP2MTEMP(0),                                                        //BAT_LOW_TEMPERATURE;
   TEMP2MTEMP(50),                                                       //BAT_HIGH_TEMPERATURE;
   0x87654321,                                                           //the special pattern of end2 position
};
#endif

#if IS_TDD_DUAL_MODE_SUPPORT
   #if IS_CHIP_MT6575
      #if defined(__AST_MC1INS_WAKEUP__)
unsigned long TD_AFC_switch_GPIO_pin     =  103;
      #else
unsigned long TD_AFC_switch_GPIO_pin     =  24;
      #endif
   #else
unsigned long TD_AFC_switch_GPIO_pin     =  24;
   #endif
signed   long TD_AFC_switch_GPIO_status  =  0;
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_EPSK_TX_SUPPORT
   #if IS_EPSK_TX_NOT_SUPPORT_RF
/*EPSK*/ sMIDRAMPDATA* GSM850_EPSK_InterRampData[] = { 0,0,0,0 };
/*EPSK*/ sMIDRAMPDATA* GSM_EPSK_InterRampData[] =    { 0,0,0,0 };
/*EPSK*/ sMIDRAMPDATA* DCS_EPSK_InterRampData[] =    { 0,0,0,0 };
/*EPSK*/ sMIDRAMPDATA* PCS_EPSK_InterRampData[] =    { 0,0,0,0 };
/*EPSK*/ sMIDRAMPDATA** EPSK_InterRampData[]    =    { 0,                         /* FrequencyBand400 (not support)  */
                                                       GSM850_EPSK_InterRampData, /* FrequencyBand850                */
                                                       GSM_EPSK_InterRampData,    /* FrequencyBand900                */
                                                       DCS_EPSK_InterRampData,    /* FrequencyBand1800               */
                                                       PCS_EPSK_InterRampData,    /* FrequencyBand1900               */
                                                     };
/*EPSK*/ sRAMPDATA*  RampData_EPSK[]            =    {0,0,0,0,0};
   #endif
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
