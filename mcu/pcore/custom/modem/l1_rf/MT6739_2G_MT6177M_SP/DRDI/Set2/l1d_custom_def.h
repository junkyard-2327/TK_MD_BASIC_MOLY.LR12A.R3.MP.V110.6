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
 *   l1d_custom_def.h
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   RF constance definition
 *
 * Author:
 * -------
 *  
 *
 *------------------------------------------------------------------------------
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
 * removed!
 * removed!
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
 *05 28 2015 gone.li
 *move tx power rollback undefine default value from l1d_data_pcore.c
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
 *******************************************************************************/

#ifndef  _L1D_CUSTOM_DEFINITION_H_Set2_
#define  _L1D_CUSTOM_DEFINITION_H_Set2_
/* ------------------------------------------------------------------------- */
#include "l1d_custom_rf.h"
#include "l1d_rf_common.h"

#ifndef  Custom_RF_XO_CapID_Set2
#define  Custom_RF_XO_CapID_Set2    31
#endif

#ifndef  Custom_RF_AFC_DACVALUE_Set2
#define  Custom_RF_AFC_DACVALUE_Set2 PSI_EE    // default AFC dac value
#endif

#ifndef  Custom_RF_AFC_SLOPEINV_Set2
#define  Custom_RF_AFC_SLOPEINV_Set2 C_PSI_STA    // default AFC inverse slope
#endif

/* ========================================================================= */

/*TX power rollback*/
#if IS_GPRS

/*GSM850*/
#ifndef GSM850_TX_ROLLBACK_2T_GMSK_Set2
#define GSM850_TX_ROLLBACK_2T_GMSK_Set2 8
#endif

#ifndef GSM850_TX_ROLLBACK_3T_GMSK_Set2
#define GSM850_TX_ROLLBACK_3T_GMSK_Set2 24
#endif

#ifndef GSM850_TX_ROLLBACK_4T_GMSK_Set2
#define GSM850_TX_ROLLBACK_4T_GMSK_Set2 32
#endif

#ifndef GSM850_TX_ROLLBACK_5T_GMSK_Set2
#define GSM850_TX_ROLLBACK_5T_GMSK_Set2 40
#endif

/*GSM*/
#ifndef GSM_TX_ROLLBACK_2T_GMSK_Set2
#define GSM_TX_ROLLBACK_2T_GMSK_Set2 8
#endif

#ifndef GSM_TX_ROLLBACK_3T_GMSK_Set2
#define GSM_TX_ROLLBACK_3T_GMSK_Set2 24
#endif

#ifndef GSM_TX_ROLLBACK_4T_GMSK_Set2
#define GSM_TX_ROLLBACK_4T_GMSK_Set2 32
#endif

#ifndef GSM_TX_ROLLBACK_5T_GMSK_Set2
#define GSM_TX_ROLLBACK_5T_GMSK_Set2 40
#endif

/*DCS*/
#ifndef DCS_TX_ROLLBACK_2T_GMSK_Set2
#define DCS_TX_ROLLBACK_2T_GMSK_Set2 8
#endif

#ifndef DCS_TX_ROLLBACK_3T_GMSK_Set2
#define DCS_TX_ROLLBACK_3T_GMSK_Set2 24
#endif

#ifndef DCS_TX_ROLLBACK_4T_GMSK_Set2
#define DCS_TX_ROLLBACK_4T_GMSK_Set2 32
#endif

#ifndef DCS_TX_ROLLBACK_5T_GMSK_Set2
#define DCS_TX_ROLLBACK_5T_GMSK_Set2 40
#endif

/*PCS*/
#ifndef PCS_TX_ROLLBACK_2T_GMSK_Set2
#define PCS_TX_ROLLBACK_2T_GMSK_Set2 8
#endif

#ifndef PCS_TX_ROLLBACK_3T_GMSK_Set2
#define PCS_TX_ROLLBACK_3T_GMSK_Set2 24
#endif

#ifndef PCS_TX_ROLLBACK_4T_GMSK_Set2
#define PCS_TX_ROLLBACK_4T_GMSK_Set2 32
#endif

#ifndef PCS_TX_ROLLBACK_5T_GMSK_Set2
#define PCS_TX_ROLLBACK_5T_GMSK_Set2 40
#endif

#endif //end IS_GPRS

#if IS_EGPRS

/*GSM850*/
#ifndef GSM850_TX_ROLLBACK_2T_EPSK_Set2
#define GSM850_TX_ROLLBACK_2T_EPSK_Set2 8
#endif

#ifndef GSM850_TX_ROLLBACK_3T_EPSK_Set2
#define GSM850_TX_ROLLBACK_3T_EPSK_Set2 24
#endif

#ifndef GSM850_TX_ROLLBACK_4T_EPSK_Set2
#define GSM850_TX_ROLLBACK_4T_EPSK_Set2 32
#endif

#ifndef GSM850_TX_ROLLBACK_5T_EPSK_Set2
#define GSM850_TX_ROLLBACK_5T_EPSK_Set2 40
#endif

/*GSM*/
#ifndef GSM_TX_ROLLBACK_2T_EPSK_Set2
#define GSM_TX_ROLLBACK_2T_EPSK_Set2 8
#endif

#ifndef GSM_TX_ROLLBACK_3T_EPSK_Set2
#define GSM_TX_ROLLBACK_3T_EPSK_Set2 24
#endif

#ifndef GSM_TX_ROLLBACK_4T_EPSK_Set2
#define GSM_TX_ROLLBACK_4T_EPSK_Set2 32
#endif

#ifndef GSM_TX_ROLLBACK_5T_EPSK_Set2
#define GSM_TX_ROLLBACK_5T_EPSK_Set2 40
#endif

/*DCS*/
#ifndef DCS_TX_ROLLBACK_2T_EPSK_Set2
#define DCS_TX_ROLLBACK_2T_EPSK_Set2 8
#endif

#ifndef DCS_TX_ROLLBACK_3T_EPSK_Set2
#define DCS_TX_ROLLBACK_3T_EPSK_Set2 24
#endif

#ifndef DCS_TX_ROLLBACK_4T_EPSK_Set2
#define DCS_TX_ROLLBACK_4T_EPSK_Set2 32
#endif

#ifndef DCS_TX_ROLLBACK_5T_EPSK_Set2
#define DCS_TX_ROLLBACK_5T_EPSK_Set2 40
#endif

/*PCS*/
#ifndef PCS_TX_ROLLBACK_2T_EPSK_Set2
#define PCS_TX_ROLLBACK_2T_EPSK_Set2 8
#endif

#ifndef PCS_TX_ROLLBACK_3T_EPSK_Set2
#define PCS_TX_ROLLBACK_3T_EPSK_Set2 24
#endif

#ifndef PCS_TX_ROLLBACK_4T_EPSK_Set2
#define PCS_TX_ROLLBACK_4T_EPSK_Set2 32
#endif

#ifndef PCS_TX_ROLLBACK_5T_EPSK_Set2
#define PCS_TX_ROLLBACK_5T_EPSK_Set2 40
#endif
#endif


// if GSM850 is not support
#ifndef  PDATA_GSM850_PR1_Set2
#define  PDATA_GSM850_PR1_Set2              0x00
#endif

#ifndef  PDATA_GSM850_PR2_Set2
#define  PDATA_GSM850_PR2_Set2              0x00
#endif

#ifndef  PDATA_GSM850_PR3_Set2
#define  PDATA_GSM850_PR3_Set2              0x00
#endif

#ifndef  PDATA_GSM850_PT1_Set2
#define  PDATA_GSM850_PT1_Set2              0x00
#endif

#ifndef  PDATA_GSM850_PT2_Set2
#define  PDATA_GSM850_PT2_Set2              0x00
#endif

#ifndef  PDATA_GSM850_PT3_Set2
#define  PDATA_GSM850_PT3_Set2              0x00
#endif

//8g switch
#ifndef  PDATA_GMSK_Set2
#define  PDATA_GMSK_Set2                    0
#endif
#ifndef  PDATA_8PSK_Set2
#define  PDATA_8PSK_Set2                    0
#endif

//GSM850
#ifndef  PDATA_GSM850_PR3A_Set2
#define  PDATA_GSM850_PR3A_Set2             PDATA_GSM850_PR3_Set2
#endif
#ifndef  PDATA_GSM850_PT3A_Set2
#define  PDATA_GSM850_PT3A_Set2             PDATA_GSM850_PT3_Set2
#endif
#ifndef  PDATA_GSM850_PR2B_Set2
#define  PDATA_GSM850_PR2B_Set2             PDATA_GSM850_PR2_Set2
#endif
#ifndef  PDATA_GSM850_PR2M1_Set2
   #if defined(QB_PR2B_Set2) && QB_PR2B_Set2<QB_PR2_Set2
#define  PDATA_GSM850_PR2M1_Set2            PDATA_GSM850_PR2B_Set2
   #else
#define  PDATA_GSM850_PR2M1_Set2            PDATA_GSM850_PR2_Set2
   #endif
#endif
#ifndef  PDATA_GSM850_PR2M2_Set2
#define  PDATA_GSM850_PR2M2_Set2            PDATA_GSM850_PR2M1_Set2
#endif
#ifndef  PDATA_GSM850_PR2M3_Set2
#define  PDATA_GSM850_PR2M3_Set2            PDATA_GSM850_PR2M2_Set2
#endif
#ifndef  PDATA_GSM850_PT2B_Set2
#define  PDATA_GSM850_PT2B_Set2             PDATA_GSM850_PT2_Set2
#endif
#ifndef  PDATA_GSM850_PT2M1_8G_Set2
   #if defined(QB_PT2B_Set2) && QB_PT2B_Set2<QB_PT2_Set2
#define  PDATA_GSM850_PT2M1_8G_Set2         PDATA_GSM850_PT2B_Set2
   #else
#define  PDATA_GSM850_PT2M1_8G_Set2         PDATA_GSM850_PT2_Set2
   #endif
#endif
#ifndef  PDATA_GSM850_PT2M1_G8_Set2
   #if defined(QB_PT2B_Set2) && QB_PT2B_Set2<QB_PT2_Set2
#define  PDATA_GSM850_PT2M1_G8_Set2         PDATA_GSM850_PT2B_Set2
   #else
#define  PDATA_GSM850_PT2M1_G8_Set2         PDATA_GSM850_PT2_Set2
   #endif
#endif
#ifndef  PDATA_GSM850_PT2M2_8G_Set2
#define  PDATA_GSM850_PT2M2_8G_Set2         PDATA_GSM850_PT2M1_8G_Set2
#endif
#ifndef  PDATA_GSM850_PT2M2_G8_Set2
#define  PDATA_GSM850_PT2M2_G8_Set2         PDATA_GSM850_PT2M1_G8_Set2
#endif
#ifndef  PDATA_GSM850_PT2M3_8G_Set2
#define  PDATA_GSM850_PT2M3_8G_Set2         PDATA_GSM850_PT2M2_8G_Set2
#endif
#ifndef  PDATA_GSM850_PT2M3_G8_Set2
#define  PDATA_GSM850_PT2M3_G8_Set2         PDATA_GSM850_PT2M2_G8_Set2
#endif

//GSM
#ifndef  PDATA_GSM_PR3A_Set2
#define  PDATA_GSM_PR3A_Set2                PDATA_GSM_PR3_Set2
#endif
#ifndef  PDATA_GSM_PT3A_Set2
#define  PDATA_GSM_PT3A_Set2                PDATA_GSM_PT3_Set2
#endif
#ifndef  PDATA_GSM_PR2B_Set2
#define  PDATA_GSM_PR2B_Set2                PDATA_GSM_PR2_Set2
#endif
#ifndef  PDATA_GSM_PR2M1_Set2
   #if defined(QB_PR2B_Set2) && QB_PR2B_Set2<QB_PR2_Set2
#define  PDATA_GSM_PR2M1_Set2               PDATA_GSM_PR2B_Set2
   #else
#define  PDATA_GSM_PR2M1_Set2               PDATA_GSM_PR2_Set2
   #endif
#endif
#ifndef  PDATA_GSM_PR2M2_Set2
#define  PDATA_GSM_PR2M2_Set2               PDATA_GSM_PR2M1_Set2
#endif
#ifndef  PDATA_GSM_PR2M3_Set2
#define  PDATA_GSM_PR2M3_Set2               PDATA_GSM_PR2M2_Set2
#endif
#ifndef  PDATA_GSM_PT2B_Set2
#define  PDATA_GSM_PT2B_Set2                PDATA_GSM_PT2_Set2
#endif
#ifndef  PDATA_GSM_PT2M1_8G_Set2
   #if defined(QB_PT2B_Set2) && QB_PT2B_Set2<QB_PT2_Set2
#define  PDATA_GSM_PT2M1_8G_Set2            PDATA_GSM_PT2B_Set2
   #else
#define  PDATA_GSM_PT2M1_8G_Set2            PDATA_GSM_PT2_Set2
   #endif
#endif
#ifndef  PDATA_GSM_PT2M1_G8_Set2
   #if defined(QB_PT2B_Set2) && QB_PT2B_Set2<QB_PT2_Set2
#define  PDATA_GSM_PT2M1_G8_Set2            PDATA_GSM_PT2B_Set2
   #else
#define  PDATA_GSM_PT2M1_G8_Set2            PDATA_GSM_PT2_Set2
   #endif
#endif
#ifndef  PDATA_GSM_PT2M2_8G_Set2
#define  PDATA_GSM_PT2M2_8G_Set2            PDATA_GSM_PT2M1_8G_Set2
#endif
#ifndef  PDATA_GSM_PT2M2_G8_Set2
#define  PDATA_GSM_PT2M2_G8_Set2            PDATA_GSM_PT2M1_G8_Set2
#endif
#ifndef  PDATA_GSM_PT2M3_8G_Set2
#define  PDATA_GSM_PT2M3_8G_Set2            PDATA_GSM_PT2M2_8G_Set2
#endif
#ifndef  PDATA_GSM_PT2M3_G8_Set2
#define  PDATA_GSM_PT2M3_G8_Set2            PDATA_GSM_PT2M2_G8_Set2
#endif

//DCS
#ifndef  PDATA_DCS_PR3A_Set2
#define  PDATA_DCS_PR3A_Set2                PDATA_DCS_PR3_Set2
#endif
#ifndef  PDATA_DCS_PT3A_Set2
#define  PDATA_DCS_PT3A_Set2                PDATA_DCS_PT3_Set2
#endif
#ifndef  PDATA_DCS_PR2B_Set2
#define  PDATA_DCS_PR2B_Set2                PDATA_DCS_PR2_Set2
#endif
#ifndef  PDATA_DCS_PR2M1_Set2
   #if defined(QB_PR2B_Set2) && QB_PR2B_Set2<QB_PR2_Set2
#define  PDATA_DCS_PR2M1_Set2               PDATA_DCS_PR2B_Set2
   #else
#define  PDATA_DCS_PR2M1_Set2               PDATA_DCS_PR2_Set2
   #endif
#endif
#ifndef  PDATA_DCS_PR2M2_Set2
#define  PDATA_DCS_PR2M2_Set2               PDATA_DCS_PR2M1_Set2
#endif
#ifndef  PDATA_DCS_PR2M3_Set2
#define  PDATA_DCS_PR2M3_Set2              PDATA_DCS_PR2M2_Set2
#endif
#ifndef  PDATA_DCS_PT2B_Set2
#define  PDATA_DCS_PT2B_Set2                PDATA_DCS_PT2_Set2
#endif
#ifndef  PDATA_DCS_PT2M1_8G_Set2
   #if defined(QB_PT2B_Set2) && QB_PT2B_Set2<QB_PT2_Set2
#define  PDATA_DCS_PT2M1_8G_Set2            PDATA_DCS_PT2B_Set2
   #else
#define  PDATA_DCS_PT2M1_8G_Set2            PDATA_DCS_PT2_Set2
   #endif
#endif
#ifndef  PDATA_DCS_PT2M1_G8_Set2
   #if defined(QB_PT2B_Set2) && QB_PT2B_Set2<QB_PT2_Set2
#define  PDATA_DCS_PT2M1_G8_Set2            PDATA_DCS_PT2B_Set2
   #else
#define  PDATA_DCS_PT2M1_G8_Set2            PDATA_DCS_PT2_Set2
   #endif
#endif
#ifndef  PDATA_DCS_PT2M2_8G_Set2
#define  PDATA_DCS_PT2M2_8G_Set2            PDATA_DCS_PT2M1_8G_Set2
#endif
#ifndef  PDATA_DCS_PT2M2_G8_Set2
#define  PDATA_DCS_PT2M2_G8_Set2            PDATA_DCS_PT2M1_G8_Set2
#endif
#ifndef  PDATA_DCS_PT2M3_8G_Set2
#define  PDATA_DCS_PT2M3_8G_Set2            PDATA_DCS_PT2M2_8G_Set2
#endif
#ifndef  PDATA_DCS_PT2M3_G8_Set2
#define  PDATA_DCS_PT2M3_G8_Set2            PDATA_DCS_PT2M2_G8_Set2
#endif

//PCS
#ifndef  PDATA_PCS_PR3A_Set2
#define  PDATA_PCS_PR3A_Set2                PDATA_PCS_PR3_Set2
#endif
#ifndef  PDATA_PCS_PT3A_Set2
#define  PDATA_PCS_PT3A_Set2                PDATA_PCS_PT3_Set2
#endif
#ifndef  PDATA_PCS_PR2B_Set2
#define  PDATA_PCS_PR2B_Set2                PDATA_PCS_PR2_Set2
#endif
#ifndef  PDATA_PCS_PR2M1_Set2
   #if defined(QB_PR2B_Set2) && QB_PR2B_Set2<QB_PR2_Set2
#define  PDATA_PCS_PR2M1_Set2               PDATA_PCS_PR2B_Set2
   #else
#define  PDATA_PCS_PR2M1_Set2               PDATA_PCS_PR2_Set2
   #endif
#endif
#ifndef  PDATA_PCS_PR2M2_Set2
#define  PDATA_PCS_PR2M2_Set2               PDATA_PCS_PR2M1_Set2
#endif
#ifndef  PDATA_PCS_PR2M3_Set2
#define  PDATA_PCS_PR2M3_Set2               PDATA_PCS_PR2M2_Set2
#endif
#ifndef  PDATA_PCS_PT2B_Set2
#define  PDATA_PCS_PT2B_Set2                PDATA_PCS_PT2_Set2
#endif
#ifndef  PDATA_PCS_PT2M1_8G_Set2
   #if defined(QB_PT2B_Set2) && QB_PT2B_Set2<QB_PT2_Set2
#define  PDATA_PCS_PT2M1_8G_Set2            PDATA_PCS_PT2B_Set2
   #else
#define  PDATA_PCS_PT2M1_8G_Set2            PDATA_PCS_PT2_Set2
   #endif
#endif
#ifndef  PDATA_PCS_PT2M1_G8_Set2
   #if defined(QB_PT2B_Set2) && QB_PT2B_Set2<QB_PT2_Set2
#define  PDATA_PCS_PT2M1_G8_Set2            PDATA_PCS_PT2B_Set2
   #else
#define  PDATA_PCS_PT2M1_G8_Set2            PDATA_PCS_PT2_Set2
   #endif
#endif
#ifndef  PDATA_PCS_PT2M2_8G_Set2
#define  PDATA_PCS_PT2M2_8G_Set2            PDATA_PCS_PT2M1_8G_Set2
#endif
#ifndef  PDATA_PCS_PT2M2_G8_Set2
#define  PDATA_PCS_PT2M2_G8_Set2            PDATA_PCS_PT2M1_G8_Set2
#endif
#ifndef  PDATA_PCS_PT2M3_8G_Set2
#define  PDATA_PCS_PT2M3_8G_Set2            PDATA_PCS_PT2M2_8G_Set2
#endif
#ifndef  PDATA_PCS_PT2M3_G8_Set2
#define  PDATA_PCS_PT2M3_G8_Set2            PDATA_PCS_PT2M2_G8_Set2
#endif

#ifndef  QB_PR3A_Set2
#define  QB_PR3A_Set2                       ( QB_PR3_Set2+2 )
#endif
#ifndef  QB_PT3A_Set2
#define  QB_PT3A_Set2                       ( QB_PT3_Set2+2 )
#endif
#ifndef  QB_PR2B_Set2
#define  QB_PR2B_Set2                       QB_PR2_Set2 
#endif
#ifndef  QB_PR2M1_Set2
#define  QB_PR2M1_Set2                      0 //(16000)
#endif
#ifndef  QB_PR2M2_Set2
#define  QB_PR2M2_Set2                      0 //(16000)
#endif
#ifndef  QB_PT2B_Set2
#define  QB_PT2B_Set2                       0 //(16000)
#endif
#ifndef  QB_SR0_Set2
#define  QB_SR0_Set2                        (-10000)
#endif
#ifndef  QB_ST0_Set2
#define  QB_ST0_Set2                        (-10000)
#endif
#ifndef  QB_ST2_Set2
#define  QB_ST2_Set2                        (-10000)
#endif
#ifndef  QB_ST2B_Set2
#define  QB_ST2B_Set2                       (-10000)
#endif
#ifndef  QB_ST2M_G8_Set2
#define  QB_ST2M_G8_Set2                    (-10000)
#endif
#ifndef  QB_ST2M_8G_Set2
#define  QB_ST2M_8G_Set2                    (-10000)
#endif
#ifndef  QB_PT2M1_8G_Set2
#define  QB_PT2M1_8G_Set2                   0
#endif
#ifndef  QB_PT2M1_G8_Set2
#define  QB_PT2M1_G8_Set2                   0
#endif
#ifndef  QB_PT2M2_8G_Set2
#define  QB_PT2M2_8G_Set2                   ( QB_PT2M1_8G_Set2-2 )
#endif
#ifndef  QB_PT2M2_G8_Set2
#define  QB_PT2M2_G8_Set2                   ( QB_PT2M1_G8_Set2-2 )
#endif
#ifndef  QB_PT2M3_8G_Set2
#define  QB_PT2M3_8G_Set2                   ( QB_PT2M2_8G_Set2-2 )
#endif
#ifndef  QB_PT2M3_G8_Set2
#define  QB_PT2M3_G8_Set2                   ( QB_PT2M2_G8_Set2-2 )
#endif
/*---------------------------------------------------------------------------*/

#ifndef  QB_TX_SAMPLE_OFFSET_GMSK_Set2
#define  QB_TX_SAMPLE_OFFSET_GMSK_Set2      0
#endif

#ifndef  QB_TX_SAMPLE_OFFSET_EPSK_Set2
#define  QB_TX_SAMPLE_OFFSET_EPSK_Set2      0
#endif

#ifndef  TXPC_EPSK_TP_SLOPE_LB_Set2
#define  TXPC_EPSK_TP_SLOPE_LB_Set2         25
#endif

#ifndef  TXPC_EPSK_TP_SLOPE_HB_Set2
#define  TXPC_EPSK_TP_SLOPE_HB_Set2         25
#endif

#ifndef  IS_EGSM900_DISABLE_Set2
#define  IS_EGSM900_DISABLE_Set2            0
#endif

#ifndef  BAT_VOLTAGE_SAMPLE_PERIOD_SECOND_Set2
#define  BAT_VOLTAGE_SAMPLE_PERIOD_SECOND_Set2     180
#endif

#ifndef  BAT_VOLTAGE_AVERAGE_COUNT_Set2
#define  BAT_VOLTAGE_AVERAGE_COUNT_Set2            1
#endif

#ifndef  BAT_TEMPERATURE_SAMPLE_PERIOD_SECOND_Set2
#define  BAT_TEMPERATURE_SAMPLE_PERIOD_SECOND_Set2 180
#endif

#ifndef  BAT_TEMPERATURE_AVERAGE_COUNT_Set2
#define  BAT_TEMPERATURE_AVERAGE_COUNT_Set2        1
#endif

#ifndef  BAT_LOW_VOLTAGE_TRHESHOLD_Set2
#define  BAT_LOW_VOLTAGE_TRHESHOLD_Set2            (3.5)
#endif

#ifndef  BAT_HIGH_VOLTAGE_TRHESHOLD_Set2
#define  BAT_HIGH_VOLTAGE_TRHESHOLD_Set2           (4.0)
#endif

#ifndef  BAT_LOW_TEMPERATURE_TRHESHOLD_Set2
#define  BAT_LOW_TEMPERATURE_TRHESHOLD_Set2        (0)
#endif

#ifndef  BAT_HIGH_TEMPERATURE_TRHESHOLD_Set2
#define  BAT_HIGH_TEMPERATURE_TRHESHOLD_Set2       (50)
#endif

#ifndef  RF_TEMPERATURE_SAMPLE_PERIOD_SECOND_Set2
#define  RF_TEMPERATURE_SAMPLE_PERIOD_SECOND_Set2  1
#endif

#ifndef  RF_TEMPERATURE_AVERAGE_COUNT_Set2
#define  RF_TEMPERATURE_AVERAGE_COUNT_Set2         1
#endif

#if IS_TX_VOLTAGE_COMPENSATION_SUPPORT
   #ifndef AP_UPDATE_VOLTINFO_PERIOD_Set2
#define MINUTES2FRAME_Set2(n)                     ((int)((n)*13000))
#define AP_UPDATE_VOLTINFO_PERIOD_Set2            MINUTES2FRAME_Set2(5)
   #endif
#endif

#ifndef  CLK1_EN_Set2
#define  CLK1_EN_Set2                       1
#endif

#ifndef  CLK2_EN_Set2
#define  CLK2_EN_Set2                       0
#endif

#ifndef  CLK3_EN_Set2
#define  CLK3_EN_Set2                       0
#endif

#ifndef  CLK4_EN_Set2
#define  CLK4_EN_Set2                       0
#endif

#ifndef  GPS_CO_CLOCK_BUF_IDX_Set2
#define  GPS_CO_CLOCK_BUF_IDX_Set2          0
#endif

#ifndef  GSM850_PATH_SEL_Set2
#define  GSM850_PATH_SEL_Set2               0x7
#endif

#ifndef  GSM_PATH_SEL_Set2
#define  GSM_PATH_SEL_Set2                  0x6
#endif

#ifndef  DCS_PATH_SEL_Set2
#define  DCS_PATH_SEL_Set2                  0x5
#endif

#ifndef  PCS_PATH_SEL_Set2
#define  PCS_PATH_SEL_Set2                  0x4
#endif

#ifndef  GSM_ERR_DET_ID_Set2
#define  GSM_ERR_DET_ID_Set2                9
#endif

#if IS_COSIM_ON_L1SIM_SUPPORT
   #if IS_CHIP_MT6583_MD1 || IS_CHIP_MT6583_MD2 || IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
/* since we will advance the BULON timing, we should change the ST1 to make the RF event happened */
#undef   QB_ST1_Set2
#define  QB_ST1_Set2                        180
#undef   QB_SR3_Set2
#define  QB_SR3_Set2                         5
   #endif
#endif

#define  TQ_SR0_Set2                        (QB_SR0_Set2-QB_RON_2_FSYNC)
#define  TQ_SR1_Set2                        (QB_SR1_Set2-QB_RON_2_FSYNC)
#define  TQ_SR2_Set2                        (QB_SR2_Set2-QB_RON_2_FSYNC)
#define  TQ_SR2M_Set2                       (QB_SR2M_Set2-QB_RON_2_FSYNC)
#define  TQ_SR3_Set2                        (QB_SR3_Set2-QB_FSYNC_2_ROFF)
#define  TQ_PR1_Set2                        (QB_PR1_Set2-QB_RON_2_FSYNC)
#define  TQ_PR2_Set2                        (QB_PR2_Set2-QB_RON_2_FSYNC)
#define  TQ_PR2M1_Set2                      (QB_PR2M1_Set2-QB_RON_2_FSYNC)
#define  TQ_PR2M2_Set2                      (QB_PR2M2_Set2-QB_RON_2_FSYNC)
#define  TQ_PR3_Set2                        (QB_PR3_Set2-QB_FSYNC_2_ROFF)
#define  TQ_PR3A_Set2                       (QB_PR3A_Set2-QB_FSYNC_2_ROFF)

#define  TQ_ST0_Set2                        (QB_ST0_Set2-QB_TON_2_FSYNC)
#define  TQ_ST1_Set2                        (QB_ST1_Set2-QB_TON_2_FSYNC)
#define  TQ_ST2_Set2                        (QB_ST2_Set2-QB_TON_2_FSYNC)
#define  TQ_ST3_Set2                        (QB_ST3_Set2-QB_FSYNC_2_TOFF)
#define  TQ_PT1_Set2                        (QB_PT1_Set2-QB_TON_2_FSYNC)
#define  TQ_PT2_Set2                        (QB_PT2_Set2-QB_TON_2_FSYNC)
#define  TQ_PT2B_Set2                       (QB_PT2B_Set2-QB_TON_2_FSYNC)
#define  TQ_PT3_Set2                        (QB_PT3_Set2-QB_FSYNC_2_TOFF)
#define  TQ_PT3A_Set2                       (QB_PT3A_Set2-QB_FSYNC_2_TOFF)
#define  TQ_APCON_Set2                      (QB_APCON_Set2-QB_TON_2_FSYNC)
#define  TQ_APCMID_Set2                     (QB_APCMID_Set2-QB_TON_2_FSYNC)
#define  TQ_APCOFF_Set2                     (QB_APCOFF_Set2-QB_FSYNC_2_TOFF)
#define  TQ_BDLON_Set2                      (QB_RX_FENA_2_FSYNC-QB_RON_2_FSYNC+QB_RX_ADEN_2_FENA)
#define  TQ_BDLOFF_Set2                     (-QB_FSYNC_2_ROFF)
#define  TQ_BULON_Set2                      (QB_TX_FENA_2_FSYNC-QB_TON_2_FSYNC+QB_TX_DAEN_2_FENA)
#define  TQ_BULOFF_Set2                     (-QB_FSYNC_2_TOFF)
#define  TQ_AFC2_2_BOFF_Set2                (TQ_BULOFF_Set2+QB_TX_FSYNC_2_FENA)

#define  TQ_PR2B_Set2                       (QB_PR2B_Set2-QB_RON_2_FSYNC)
#define  TQ_PT2M1_G8_Set2                   (QB_PT2M1_G8_Set2-QB_TON_2_FSYNC)
#define  TQ_PT2M2_G8_Set2                   (QB_PT2M2_G8_Set2-QB_TON_2_FSYNC)
#define  TQ_PT2M3_G8_Set2                   (QB_PT2M3_G8_Set2-QB_TON_2_FSYNC)
#define  TQ_PT2M1_8G_Set2                   (QB_PT2M1_8G_Set2-QB_TON_2_FSYNC)
#define  TQ_PT2M2_8G_Set2                   (QB_PT2M2_8G_Set2-QB_TON_2_FSYNC)
#define  TQ_PT2M3_8G_Set2                   (QB_PT2M3_8G_Set2-QB_TON_2_FSYNC)
#define  TQ_ST2B_Set2                       (QB_ST2B_Set2-QB_TON_2_FSYNC)
#define  TQ_ST2M_G8_Set2                    (QB_ST2M_G8_Set2-QB_TON_2_FSYNC)
#define  TQ_ST2M_8G_Set2                    (QB_ST2M_8G_Set2-QB_TON_2_FSYNC)

#if    !defined(QB_PR3_Set2) || !defined(QB_SR3_Set2)
// no compare QB_PR3 & QB_SR3 in macro
#elif  IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION
   #if   TQ_PR3A_Set2>TQ_SR3_Set2 && TQ_PR3A_Set2>TQ_PR3_Set2
#define  QR_BOFF_2_IDLE_Set2                TQ_PR3A_Set2
   #elif TQ_PR3_Set2 >TQ_SR3_Set2 && TQ_PR3_Set2>TQ_PR3A_Set2
#define  QR_BOFF_2_IDLE_Set2                TQ_PR3_Set2
   #else
#define  QR_BOFF_2_IDLE_Set2                TQ_SR3_Set2
   #endif
#else
   #if   TQ_SR3_Set2>TQ_PR3_Set2
#define  QR_BOFF_2_IDLE_Set2                TQ_SR3_Set2
   #else
#define  QR_BOFF_2_IDLE_Set2                TQ_PR3_Set2
   #endif
#endif
/*---------------------------------------------------------------------------*/
/* General timing check for slot 0 RX window */
#if TQ_SR0_Set2>TQ_AFC_READY
#error "TQ_SR0 should not be larger than TQ_AFC_READY"
#endif

#if TQ_SR1_Set2>TQ_AFC_READY
#error "TQ_SR1 should not be larger than TQ_AFC_READY"
#endif

#if TQ_SR2_Set2>TQ_AFC_READY
#error "TQ_SR2 should not be larger than TQ_AFC_READY"
#endif

#if TQ_PR1_Set2>TQ_AFC_READY
#error "TQ_PR1 should not be larger than TQ_AFC_READY"
#endif

#if TQ_PR2_Set2>TQ_AFC_READY
#error "TQ_PR2 should not be larger than TQ_AFC_READY"
#endif

#if TQ_PR2B_Set2>TQ_AFC_READY
#error "TQ_PR2B should not be larger than TQ_AFC_READY"
#endif

#if IS_BSI_SX0_SUPPORT
   #if (QB_SR0_Set2!=(-10000)) && (QB_SR0_Set2 < QB_SR1_Set2)
#error "QB_SR0 should be larger than QB_SR1"
   #endif

   #if (QB_ST0_Set2!=(-10000)) && (QB_ST0_Set2 < QB_ST1_Set2)
#error "QB_ST0 should be larger than QB_ST1"
   #endif
#endif

/* ========================================================================= */

#if IS_DFM_RF_TIMING_CHECK_SUPPORT
/* RF-BFE timing constraints at RX on */
   #if IS_RF_MT6252RF || IS_RF_MT6162 || IS_RF_MT6163
      #if (QB_SR2_Set2<=QB_RX_FENA_2_FSYNC)
#error "QB_SR2 should be larger than QB_RX_FENA_2_FSYNC"
      #endif
   #elif IS_RF_MT6251RF || IS_RF_MT6256RF || IS_RF_MT6255RF || IS_RF_MT6250RF
      #if (QB_SR2_Set2<=QB_RX_FENA_2_FSYNC+11)
#error "QB_SR2 should be 11QB larger than QB_RX_FENA_2_FSYNC"
      #endif
   #elif IS_RF_MT6280RF || IS_RF_MT6169
      #if (QB_SR2_Set2<=QB_RX_FENA_2_FSYNC+7)
#error "QB_SR2 should be 7QB larger than QB_RX_FENA_2_FSYNC"
      #endif
   #elif IS_RF_MT6166 || IS_RF_MT6165
      #if (QB_SR2_Set2<=38+6) //38qb is for RX BFE group delay, and 6qb is for RX gain settling
#error "QB_SR2 should be larger than 44QB for RX BFE group delay"
      #endif
   #elif IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
      #if (QB_SR2_Set2<=52)  //24us is for RX BFE group delay, and 25us for RF settling
#error "QB_SR2 should be 4QB larger than QB_RX_FENA_2_FSYNC"
      #endif
   #else
#error "please add the timing constraint of QB_SR2 in l1d_data.c"
   #endif

/* RF-BFE timing constraints at RX off */
   #if IS_RF_MT6252RF || IS_RF_MT6162 || IS_RF_MT6163
      #if (QB_SR3_Set2<QB_RX_FSYNC_2_FENA)
#error "QB_SR3 should be larger than or equal to QB_RX_FSYNC_2_FENA"
      #endif
   #elif IS_RF_MT6251RF || IS_RF_MT6256RF || IS_RF_MT6255RF || IS_RF_MT6250RF
      #if (QB_SR3<=QB_RX_FSYNC_2_FENA)
#error "QB_SR3 should be larger than QB_RX_FSYNC_2_FENA"
      #endif
   #elif IS_RF_MT6280RF || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
      #if (QB_SR3_Set2<=QB_RX_FSYNC_2_FENA+1)
#error "QB_SR3 should be 1QB larger than QB_RX_FSYNC_2_FENA"
      #endif
   #else
#error "please add the timing constraint of QB_SR3 in l1d_data.c"
   #endif

/* RF-BFE timing constraints at TX on */
   #if IS_COSIM_ON_L1SIM_SUPPORT
   #elif IS_RF_MT6252RF || IS_RF_MT6162 || IS_RF_MT6163
      #if (QB_ST2B_Set2<=QB_TX_FENA_2_FSYNC)
#error "QB_ST2B should be larger than QB_TX_FENA_2_FSYNC"
      #endif
   #elif IS_RF_MT6256RF || IS_RF_MT6255RF || IS_RF_MT6250RF
      #if (QB_ST2B_Set2<=QB_TX_FENA_2_FSYNC+11)
#error "QB_ST2B should be 11QB larger than QB_TX_FENA_2_FSYNC"
      #endif
   #elif IS_RF_MT6251RF
      #if (QB_ST2_Set2<=QB_TX_FENA_2_FSYNC+17)
#error "QB_ST2 should be 17QB larger than QB_TX_FENA_2_FSYNC"
      #endif
   #elif IS_RF_MT6280RF || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
      #if (QB_ST2B_Set2<=QB_TX_FENA_2_FSYNC+7)
#error "QB_ST2B should be 7QB larger than QB_TX_FENA_2_FSYNC"
      #endif
   #else
#error "please add the timing constraint of QB_ST2B/QB_ST2 in l1d_data.c"
   #endif

/* RF-BFE timing constraints at TX off */
   #if IS_COSIM_ON_L1SIM_SUPPORT
   #elif IS_RF_MT6252RF || IS_RF_MT6251RF || IS_RF_MT6256RF || IS_RF_MT6255RF || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
      #if (QB_ST3_Set2<=QB_TX_FSYNC_2_FENA)
#error "QB_ST3 should be larger than QB_TX_FSYNC_2_FENA"
      #endif
   #elif IS_RF_MT6250RF || IS_RF_MT6162 || IS_RF_MT6163
      #if (QB_ST3_Set2<=QB_TX_FSYNC_2_FENA+10)
#error "QB_ST3 should be 10QB larger than QB_TX_FSYNC_2_FENA"
      #endif
   #elif IS_RF_MT6280RF || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165
      #if (QB_ST3_Set2<=QB_TX_FSYNC_2_FENA+6)
#error "QB_ST3 should be 6QB larger than QB_TX_FSYNC_2_FENA"
      #endif
   #else
#error "please add the timing constraint of QB_ST3 in l1d_data.c"
   #endif
#endif /* IS_DFM_RF_TIMING_CHECK_SUPPORT */

/* ========================================================================= */

/*IS_CONTINUOUS_TDMA_EVENT_TIMING_CHECK_SUPPORT: the timing difference of two continuous TDMA events should be larger than 1QB  */
#if IS_CONTINUOUS_TDMA_EVENT_TIMING_CHECK_SUPPORT
   #if ((QB_PT2M1_G8_Set2-QB_PT2M2_G8_Set2)<=1)
#error "QB_PT2M1_G8 should be larger than (QB_PT2M2_G8+1)"
   #endif
   #if ((QB_PT2M2_G8_Set2-QB_PT2M3_G8_Set2)<=1)
#error "QB_PT2M2_G8 should be larger than (QB_PT2M3_G8+1)"
   #endif
   #if ((QB_PT2M1_8G_Set2-QB_PT2M2_8G_Set2)<=1)
#error "QB_PT2M1_8G should be larger than (QB_PT2M2_8G+1)"
   #endif
   #if ((QB_PT2M2_8G_Set2-QB_PT2M3_8G_Set2)<=1)
#error "QB_PT2M2_8G should be larger than (QB_PT2M3_8G+1)"
   #endif
#endif
/* ========================================================================= */

/* IS_SPI_CONTROL_BY_BPI_SUPPORT: avoid the SPI switch to TDD before SR3/ST3 is sent*/
#if IS_SPI_CONTROL_SWITCH_BY_BPI_TIMING_CHECK_SUPPORT
   #if ((QB_PR3_Set2-QB_SR3_Set2)<=2)
#error "QB_PR3 should be larger than (QB_SR3+2)"
   #endif
   #if IS_BPI_V2_PT3A_SUPPORT
      #if ((QB_PT3A_Set2-QB_ST3_Set2)<=7)
#error "QB_PT3A should be larger than (QB_ST3+7)"
      #endif
   #else
      #if ((QB_PT3_Set2-QB_ST3_Set2)<=2)
#error "QB_PT3 should be larger than (QB_ST3+2)"
      #endif
   #endif
#endif
/* ========================================================================= */

#if IS_OUTBAND_BLOCKER_DETECTION_SUPPORT
/* RP1/PR2 timing constraints at RX on */
   #if IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
      #if (QB_PR1_Set2<=QB_SR2_Set2+5) || (QB_PR2_Set2<=QB_SR2_Set2+5)
#error "QB_PR1 and QB_PR2 should be larger than (QB_SR2 + 5)"
      #endif
   #else
#error "please add the timing constraints for QB_PR1 and QB_PR2 in l1d_data.c"
   #endif
#endif
/* ========================================================================= */

/* avoid the timing of RP3 or ST3 are behind TQ_VALIDATE_COUNT_HF/TQ_VALIDATE_COUNT_1R7PM for 8PM and 1R7PM case */
#if L1D_PM_ENHANCE
   #if ((QB_PR3_Set2>=TQ_PM_WIN_OFF_MARGIN) || (QB_SR3_Set2>=TQ_PM_WIN_OFF_MARGIN) )
#error "QB_PR3 and QB_SR3 should be smaller than 8QB"
   #endif
#endif
/* ========================================================================= */

#ifndef  RF_TEMPERATURE_SAMPLE_PERIOD_Set2
#define  RF_TEMPERATURE_SAMPLE_PERIOD_Set2    BAT_TEMPERATURE_SAMPLE_PERIOD_Set2
#endif
#ifndef  RF_TEMPERATURE_AVERAGE_COUNT_Set2
#define  RF_TEMPERATURE_AVERAGE_COUNT_Set2    BAT_TEMPERATURE_AVERAGE_COUNT_Set2
#endif


/*---------------------------------------------------------------------------*/

#ifndef IS_RAMPPROFILE_ROLLBACK_ENABLE_Set2
#define IS_RAMPPROFILE_ROLLBACK_ENABLE_Set2  0
#endif

/*---------------------------------------------------------------------------*/

#endif
