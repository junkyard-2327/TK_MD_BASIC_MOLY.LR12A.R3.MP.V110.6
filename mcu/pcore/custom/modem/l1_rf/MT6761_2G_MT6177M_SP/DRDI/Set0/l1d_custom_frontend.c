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
 *   l1d_custom_frontend.c
 *
 * Project:
 * --------
 *  MT6293
 *
 * Description:
 * ------------
 *   2G front end data 
 *
 * Author:
 * -------
 * 
 *
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
 *
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
 *
 * removed!
 *
 *
 *******************************************************************************/


#include "l1d_custom_rf.h"
#include "l1d_custom_def.h"
#include "l1d_rf_pcore.h"
#if IS_MIPI_SUPPORT
#include "l1d_custom_mipi.h"
#endif


#if IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2

#ifndef  GSM_ERR_DET_ID_Set0
#define  GSM_ERR_DET_ID_Set0        9  //<--temp use, each rf should define this in l1d_custom_rf.h
#endif


   #if IS_RF_MT6140D
#define RF_TYPE_Set0      1
   #elif IS_RF_AD6548
#define RF_TYPE_Set0      2
   #elif IS_RF_AD6546
#define RF_TYPE_Set0      3
   #elif IS_RF_MT6162
#define RF_TYPE_Set0      4
   #else
#define RF_TYPE_Set0      1
   #endif

   #if !IS_BSI_TRIG_OFFCHIP_BPI_SUPPORT
#define PDATA_GSM850_SR0_Set0 0
#define PDATA_GSM850_SR3_Set0 0
#define PDATA_GSM850_ST0_Set0 0
#define PDATA_GSM850_ST3_Set0 0
#define PDATA_GSM_SR0_Set0    0
#define PDATA_GSM_SR3_Set0    0
#define PDATA_GSM_ST0_Set0    0
#define PDATA_GSM_ST3_Set0    0
#define PDATA_DCS_SR0_Set0    0
#define PDATA_DCS_SR3_Set0    0
#define PDATA_DCS_ST0_Set0    0
#define PDATA_DCS_ST3_Set0    0
#define PDATA_PCS_SR0_Set0    0
#define PDATA_PCS_SR3_Set0    0
#define PDATA_PCS_ST0_Set0    0
#define PDATA_PCS_ST3_Set0    0
   #endif

/*--------------------------------------------------For DRDI Start----------------------------------------------------------*/
const sL1D_RF_CUSTOM_INPUT_DATA l1d_rf_custom_input_data_Set0=
{
   0x12345678,                                                            // the special pattern of start position
   1,                                                                     // Struct Version ID
   RF_TYPE_Set0,                                                               // default set MT6140D_RF
   1,                                                                     // default is false, and will be changed  as true after tool update
   //sRF_BPI_VARIABLE
   {
      PDATA_GSM850_PR1_Set0,
      PDATA_GSM850_PR2_Set0,
      PDATA_GSM850_PR2B_Set0,
      PDATA_GSM850_PR3_Set0,
      PDATA_GSM850_PR3A_Set0,
#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
      PDATA_GSM850_DIVERSITY_PR1_Set0,
      PDATA_GSM850_DIVERSITY_PR2_Set0,
      PDATA_GSM850_DIVERSITY_PR2B_Set0,
      PDATA_GSM850_DIVERSITY_PR3_Set0,
      PDATA_GSM850_DIVERSITY_PR3A_Set0,
#endif
      PDATA_GSM850_PT1_Set0,
      PDATA_GSM850_PT2_Set0,
      PDATA_GSM850_PT2B_Set0,
      PDATA_GSM850_PT3_Set0,
      PDATA_GSM850_PT3A_Set0,
      PDATA_GSM_PR1_Set0,
      PDATA_GSM_PR2_Set0,
      PDATA_GSM_PR2B_Set0,
      PDATA_GSM_PR3_Set0,
      PDATA_GSM_PR3A_Set0,
#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
      PDATA_GSM_DIVERSITY_PR1_Set0,
      PDATA_GSM_DIVERSITY_PR2_Set0,
      PDATA_GSM_DIVERSITY_PR2B_Set0,
      PDATA_GSM_DIVERSITY_PR3_Set0,
      PDATA_GSM_DIVERSITY_PR3A_Set0,
#endif
      PDATA_GSM_PT1_Set0,
      PDATA_GSM_PT2_Set0,
      PDATA_GSM_PT2B_Set0,
      PDATA_GSM_PT3_Set0,
      PDATA_GSM_PT3A_Set0,
      PDATA_DCS_PR1_Set0,
      PDATA_DCS_PR2_Set0,
      PDATA_DCS_PR2B_Set0,
      PDATA_DCS_PR3_Set0,
      PDATA_DCS_PR3A_Set0,
#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
      PDATA_DCS_DIVERSITY_PR1_Set0,
      PDATA_DCS_DIVERSITY_PR2_Set0,
      PDATA_DCS_DIVERSITY_PR2B_Set0,
      PDATA_DCS_DIVERSITY_PR3_Set0,
      PDATA_DCS_DIVERSITY_PR3A_Set0,
#endif
      PDATA_DCS_PT1_Set0,
      PDATA_DCS_PT2_Set0,
      PDATA_DCS_PT2B_Set0,
      PDATA_DCS_PT3_Set0,
      PDATA_DCS_PT3A_Set0,
      PDATA_PCS_PR1_Set0,
      PDATA_PCS_PR2_Set0,
      PDATA_PCS_PR2B_Set0,
      PDATA_PCS_PR3_Set0,
      PDATA_PCS_PR3A_Set0,
#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
      PDATA_PCS_DIVERSITY_PR1_Set0,
      PDATA_PCS_DIVERSITY_PR2_Set0,
      PDATA_PCS_DIVERSITY_PR2B_Set0,
      PDATA_PCS_DIVERSITY_PR3_Set0,
      PDATA_PCS_DIVERSITY_PR3A_Set0,
#endif
      PDATA_PCS_PT1_Set0,
      PDATA_PCS_PT2_Set0,
      PDATA_PCS_PT2B_Set0,
      PDATA_PCS_PT3_Set0,
      PDATA_PCS_PT3A_Set0,
      PDATA_GSM850_PR2M1_Set0,
      PDATA_GSM850_PR2M2_Set0,
      PDATA_GSM850_PR2M3_Set0,
#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
      PDATA_GSM850_DIVERSITY_PR2M1_Set0,
      PDATA_GSM850_DIVERSITY_PR2M2_Set0,
      PDATA_GSM850_DIVERSITY_PR2M3_Set0,
#endif
      PDATA_GSM850_PT2M1_G8_Set0,
      PDATA_GSM850_PT2M2_G8_Set0,
      PDATA_GSM850_PT2M3_G8_Set0,
      PDATA_GSM850_PT2M1_8G_Set0,
      PDATA_GSM850_PT2M2_8G_Set0,
      PDATA_GSM850_PT2M3_8G_Set0,
      PDATA_GSM_PR2M1_Set0,
      PDATA_GSM_PR2M2_Set0,
      PDATA_GSM_PR2M3_Set0,
#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
      PDATA_GSM_DIVERSITY_PR2M1_Set0,
      PDATA_GSM_DIVERSITY_PR2M2_Set0,
      PDATA_GSM_DIVERSITY_PR2M3_Set0,
#endif
      PDATA_GSM_PT2M1_G8_Set0,
      PDATA_GSM_PT2M2_G8_Set0,
      PDATA_GSM_PT2M3_G8_Set0,
      PDATA_GSM_PT2M1_8G_Set0,
      PDATA_GSM_PT2M2_8G_Set0,
      PDATA_GSM_PT2M3_8G_Set0,
      PDATA_DCS_PR2M1_Set0,
      PDATA_DCS_PR2M2_Set0,
      PDATA_DCS_PR2M3_Set0,
#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
      PDATA_DCS_DIVERSITY_PR2M1_Set0,
      PDATA_DCS_DIVERSITY_PR2M2_Set0,
      PDATA_DCS_DIVERSITY_PR2M3_Set0,
#endif
      PDATA_DCS_PT2M1_G8_Set0,
      PDATA_DCS_PT2M2_G8_Set0,
      PDATA_DCS_PT2M3_G8_Set0,
      PDATA_DCS_PT2M1_8G_Set0,
      PDATA_DCS_PT2M2_8G_Set0,
      PDATA_DCS_PT2M3_8G_Set0,
      PDATA_PCS_PR2M1_Set0,
      PDATA_PCS_PR2M2_Set0,
      PDATA_PCS_PR2M3_Set0,
#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
      PDATA_PCS_DIVERSITY_PR2M1_Set0,
      PDATA_PCS_DIVERSITY_PR2M2_Set0,
      PDATA_PCS_DIVERSITY_PR2M3_Set0,
#endif
      PDATA_PCS_PT2M1_G8_Set0,
      PDATA_PCS_PT2M2_G8_Set0,
      PDATA_PCS_PT2M3_G8_Set0,
      PDATA_PCS_PT2M1_8G_Set0,
      PDATA_PCS_PT2M2_8G_Set0,
      PDATA_PCS_PT2M3_8G_Set0,
      PDATA_INIT_Set0,
      PDATA_IDLE_Set0,
      PDATA_GMSK_Set0,
      PDATA_8PSK_Set0,
      {  // sRF_PDATA_OFFCHIP
         { PDATA_GSM850_SR0_Set0, PDATA_GSM850_SR3_Set0, PDATA_GSM850_ST0_Set0, PDATA_GSM850_ST3_Set0, }, /* GSM850 */
         { PDATA_GSM_SR0_Set0,    PDATA_GSM_SR3_Set0,    PDATA_GSM_ST0_Set0,    PDATA_GSM_ST3_Set0,    }, /* GSM    */
         { PDATA_DCS_SR0_Set0,    PDATA_DCS_SR3_Set0,    PDATA_DCS_ST0_Set0,    PDATA_DCS_ST3_Set0,    }, /* DCS    */
         { PDATA_PCS_SR0_Set0,    PDATA_PCS_SR3_Set0,    PDATA_PCS_ST0_Set0,    PDATA_PCS_ST3_Set0,    }, /* PCS    */
      },
   },
   //sRF_TIMING_VARIABLE
   {
      QB_RX_FENA_2_FSYNC,
      QB_RX_FSYNC_2_FENA,
      QB_TX_FENA_2_FSYNC,
      QB_TX_FSYNC_2_FENA,
      QB_SR0_Set0,
      QB_SR1_Set0,
      QB_SR2_Set0,
      QB_SR3_Set0,
      QB_SR2M_Set0,
      QB_PR1_Set0,
      QB_PR2_Set0,
      QB_PR2B_Set0,
      QB_PR3_Set0,
      QB_PR3A_Set0,
      QB_PR2M1_Set0,
      QB_PR2M2_Set0,
      QB_ST0_Set0,
      QB_ST1_Set0,
      QB_ST2_Set0,
      QB_ST2B_Set0,
      QB_ST3_Set0,
      QB_ST2M_G8_Set0,
      QB_ST2M_8G_Set0,
      QB_PT1_Set0,
      QB_PT2_Set0,
      QB_PT2B_Set0,
      QB_PT3_Set0,
      QB_PT3A_Set0,
      QB_PT2M1_G8_Set0,
      QB_PT2M2_G8_Set0,
      QB_PT2M3_G8_Set0,
      QB_PT2M1_8G_Set0,
      QB_PT2M2_8G_Set0,
      QB_PT2M3_8G_Set0,
      QB_APCON_Set0,
      QB_APCMID_Set0,
      QB_APCOFF_Set0,
      QB_APCDACON_Set0,
      QR_BOFF_2_IDLE_Set0,
   },
   //sRF_APC_COMPENSATE_VARIABLE
   {
      BAT_VOLTAGE_SAMPLE_PERIOD_SECOND_Set0,     //BAT_VOLTAGE_SAMPLE_PERIOD,
      BAT_VOLTAGE_AVERAGE_COUNT_Set0,            //BAT_VOLTAGE_AVERAGE_COUNT,
      BAT_TEMPERATURE_SAMPLE_PERIOD_SECOND_Set0, //BAT_TEMPERATURE_SAMPLE_PERIOD,
      BAT_TEMPERATURE_AVERAGE_COUNT_Set0,        //BAT_TEMPERATURE_AVERAGE_COUNT,
      //(BAT_LOW_VOLTAGE_TRHESHOLD*10),       //BAT_LOW_VOLTAGE,
      //(BAT_HIGH_VOLTAGE_TRHESHOLD*10),      //BAT_HIGH_VOLTAGE,
      //BAT_LOW_TEMPERATURE_TRHESHOLD,        //BAT_LOW_TEMPERATURE,
      //BAT_HIGH_TEMPERATURE_TRHESHOLD,       //BAT_HIGH_TEMPERATURE,
      RF_TEMPERATURE_SAMPLE_PERIOD_SECOND_Set0,  //RF_TEMPERATURE_SAMPLE_PERIOD,     // OH
      RF_TEMPERATURE_AVERAGE_COUNT_Set0,         //RF_TEMPERATURE_AVERAGE_COUNT,     // OH
   },
   //sRF_PCL_VARIABLE
   {
      RFDEF,                            // txios_highpcl_850_GMSK;
      RFDEF,                            // txios_highpcl_900_GMSK;
      RFDEF,                            // txios_highpcl_DCS_GMSK;
      RFDEF,                            // txios_highpcl_PCS_GMSK;
      RFDEF,                            // txios_highpcl_850_EPSK;
      RFDEF,                            // txios_highpcl_900_EPSK;
      RFDEF,                            // txios_highpcl_DCS_EPSK;
      RFDEF,                            // txios_highpcl_PCS_EPSK;
      RFDEF,                            // txios_lowpcl_850_GMSK;
      RFDEF,                            // txios_lowpcl_900_GMSK;
      RFDEF,                            // txios_lowpcl_DCS_GMSK;
      RFDEF,                            // txios_lowpcl_PCS_GMSK;
      RFDEF,                            // txios_lowpcl_850_EPSK;
      RFDEF,                            // txios_lowpcl_900_EPSK;
      RFDEF,                            // txios_lowpcl_DCS_EPSK;
      RFDEF,                            // txios_lowpcl_PCS_EPSK;
   },
   //sRF_LBMOD_GC_VARIABLE
   {
      RFDEF,                            // lbmod_gc_highpcl_850_GMSK;
      RFDEF,                            // lbmod_gc_highpcl_900_GMSK;
      RFDEF,                            // lbmod_gc_highpcl_DCS_GMSK;
      RFDEF,                            // lbmod_gc_highpcl_PCS_GMSK;
      RFDEF,                            // lbmod_gc_highpcl_850_EPSK;
      RFDEF,                            // lbmod_gc_highpcl_900_EPSK;
      RFDEF,                            // lbmod_gc_highpcl_DCS_EPSK;
      RFDEF,                            // lbmod_gc_highpcl_PCS_EPSK;
      RFDEF,                            // lbmod_gc_lowpcl_850_GMSK;
      RFDEF,                            // lbmod_gc_lowpcl_900_GMSK;
      RFDEF,                            // lbmod_gc_lowpcl_DCS_GMSK;
      RFDEF,                            // lbmod_gc_lowpcl_PCS_GMSK;
      RFDEF,                            // lbmod_gc_lowpcl_850_EPSK;
      RFDEF,                            // lbmod_gc_lowpcl_900_EPSK;
      RFDEF,                            // lbmod_gc_lowpcl_DCS_EPSK;
      RFDEF,                            // lbmod_gc_lowpcl_PCS_EPSK;
   },
   //sRF_HBMOD_GC_VARIABLE
   {
      RFDEF,                             // hbmod_gc_highpcl_850_GMSK;
      RFDEF,                             // hbmod_gc_highpcl_900_GMSK;
      RFDEF,                             // hbmod_gc_highpcl_DCS_GMSK;
      RFDEF,                             // hbmod_gc_highpcl_PCS_GMSK;
      RFDEF,                             // hbmod_gc_highpcl_850_EPSK;
      RFDEF,                             // hbmod_gc_highpcl_900_EPSK;
      RFDEF,                             // hbmod_gc_highpcl_DCS_EPSK;
      RFDEF,                             // hbmod_gc_highpcl_PCS_EPSK;
      RFDEF,                             // hbmod_gc_lowpcl_850_GMSK;
      RFDEF,                             // hbmod_gc_lowpcl_900_GMSK;
      RFDEF,                             // hbmod_gc_lowpcl_DCS_GMSK;
      RFDEF,                             // hbmod_gc_lowpcl_PCS_GMSK;
      RFDEF,                             // hbmod_gc_lowpcl_850_EPSK;
      RFDEF,                             // hbmod_gc_lowpcl_900_EPSK;
      RFDEF,                             // hbmod_gc_lowpcl_DCS_EPSK;
      RFDEF,                             // hbmod_gc_lowpcl_PCS_EPSK;
   },
   //sRF_ITC_PCL_VARIABLE
   {
      RFDEF,                             // txitc_highpcl_850_GMSK;
      RFDEF,                             // txitc_highpcl_900_GMSK;
      RFDEF,                             // txitc_highpcl_DCS_GMSK;
      RFDEF,                             // txitc_highpcl_PCS_GMSK;
      RFDEF,                             // txitc_highpcl_850_EPSK;
      RFDEF,                             // txitc_highpcl_900_EPSK;
      RFDEF,                             // txitc_highpcl_DCS_EPSK;
      RFDEF,                             // txitc_highpcl_PCS_EPSK;
      RFDEF,                             // txitc_lowpcl_850_GMSK;
      RFDEF,                             // txitc_lowpcl_900_GMSK;
      RFDEF,                             // txitc_lowpcl_DCS_GMSK;
      RFDEF,                             // txitc_lowpcl_PCS_GMSK;
      RFDEF,                             // txitc_lowpcl_850_EPSK;
      RFDEF,                             // txitc_lowpcl_900_EPSK;
      RFDEF,                             // txitc_lowpcl_DCS_EPSK;
      RFDEF,                             // txitc_lowpcl_PCS_EPSK;
   },
   //sRF_TX_POWERFEEDBACK_VARIABLE
   {
      RFDEF_short,
      QB_TX_SAMPLE_OFFSET_GMSK,
      QB_TX_SAMPLE_OFFSET_EPSK,
      TXPC_EPSK_TP_SLOPE_LB_Set0,
      TXPC_EPSK_TP_SLOPE_HB_Set0,
   },
   //sRF_TX_POWER_ROLLBACK_VARIABLE
   //{
   //   {GSM850_TX_ROLLBACK_2T_GMSK, GSM850_TX_ROLLBACK_3T_GMSK, GSM850_TX_ROLLBACK_4T_GMSK, GSM850_TX_ROLLBACK_5T_GMSK},//GMSK
   //   {GSM_TX_ROLLBACK_2T_GMSK,    GSM_TX_ROLLBACK_3T_GMSK,    GSM_TX_ROLLBACK_4T_GMSK,    GSM_TX_ROLLBACK_5T_GMSK   },
   //   {DCS_TX_ROLLBACK_2T_GMSK,    DCS_TX_ROLLBACK_3T_GMSK,    DCS_TX_ROLLBACK_4T_GMSK,    DCS_TX_ROLLBACK_5T_GMSK   },
   //   {PCS_TX_ROLLBACK_2T_GMSK,    PCS_TX_ROLLBACK_3T_GMSK,    PCS_TX_ROLLBACK_4T_GMSK,    PCS_TX_ROLLBACK_5T_GMSK   },
   //   {GSM850_TX_ROLLBACK_2T_EPSK, GSM850_TX_ROLLBACK_3T_EPSK, GSM850_TX_ROLLBACK_4T_EPSK, GSM850_TX_ROLLBACK_5T_EPSK},//8PSK
   //   {GSM_TX_ROLLBACK_2T_EPSK,    GSM_TX_ROLLBACK_3T_EPSK,    GSM_TX_ROLLBACK_4T_EPSK,    GSM_TX_ROLLBACK_5T_EPSK   },
   //   {DCS_TX_ROLLBACK_2T_EPSK,    DCS_TX_ROLLBACK_3T_EPSK,    DCS_TX_ROLLBACK_4T_EPSK,    DCS_TX_ROLLBACK_5T_EPSK   },
   //   {PCS_TX_ROLLBACK_2T_EPSK,    PCS_TX_ROLLBACK_3T_EPSK,    PCS_TX_ROLLBACK_4T_EPSK,    PCS_TX_ROLLBACK_5T_EPSK   },
   //},
   //sRF_RX_BAND_VARIABLE;
   {
      GSM850_PATH_SEL_Set0,
      GSM_PATH_SEL_Set0,
      DCS_PATH_SEL_Set0,
      PCS_PATH_SEL_Set0,
      
 #if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)     
      GSM850_DIVERSITY_PATH_SEL_Set0,
      GSM_DIVERSITY_PATH_SEL_Set0,
      DCS_DIVERSITY_PATH_SEL_Set0,
      PCS_DIVERSITY_PATH_SEL_Set0,
 #endif
   },
   //sRF_OTHERS_VARIABLE
   {
      //Custom_RF_XO_CapID,
      //PSI_EE,
      //C_PSI_STA,
      IS_EGSM900_DISABLE,	
      //GSM850_GSM900_SWAP,
      //DCS1800_PCS1900_SWAP,
      GSM_ERR_DET_ID_Set0, //OH
      TX_PROPAGATION_DELAY_Set0,
#if IS_DYNAMIC_G_E_TXWIN_POSITION_SUPPORT
      TQ_EPSK_TX_DELAY,
#endif
      IS_RAMPPROFILE_ROLLBACK_ENABLE_Set0, // enable rampprofile rollback
   },
   //sRF_AFC_TRACKING_VARIABLE
   {
      0,
      416,
      16,
   },
   //sRF_CLK_BUFFER_VARIABLE
   {
      CLK1_EN_Set0,
      CLK2_EN_Set0,
      CLK3_EN_Set0,
      CLK4_EN_Set0,
   },
   
   0x87654321,                         //the special pattern of end2 position

};

const L1D_CUSTOM_DISPLAY_MIPI_CLK_NVRAM_T L1_DISPLAY_Custom_MIPI_CLK_Set0= 
{
   {/* GROUP A is interfered by default display MIPI clock */
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 
   },
   {/* GROUP B is interfered by changed display MIPI clock */
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 
   }
};

#endif //#if IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/*--------------------------------------------------For DRDI End----------------------------------------------------------*/

#if IS_ANT_RXPWR_OFFSET_SUPPORT
const sL1D_ANT_RxPWR_Offset_T L1D_ANT_RxPWR_Offset_NVRAM_Set0 = 
{
   {
      0,           /* FrequencyBand400  */
      -400,        /* FrequencyBand850  */
      -400,        /* FrequencyBand900  */
      -400,        /* FrequencyBand1800  */
      -400,        /* FrequencyBand1900  */
   }, 
   {
      /* GSM400...............................*/
      {{0}}, 
      /* GSM850...............................*/
      {
         /*  ARFCN,   Rx power offset(dBm), pcell_id  */
         {  251, PWROFFSET(0), 0 }, 
         /*--------------------*/
         { TABLE_END }
      },
      /* GSM900...............................*/
      {
         /*  ARFCN,   Rx power offset(dBm), pcell_id  */
         { 4   , PWROFFSET(0), 153610370 },
         { 5   , PWROFFSET(-15), 153610370 },
         { 83  , PWROFFSET(0), 185582337 },
         { 84  , PWROFFSET(6), 185582337 },
         { 89  , PWROFFSET(0), 185582337 },
         { 90  , PWROFFSET(6), 185582337 },
         { 1023, PWROFFSET(0), 185582337 }, 
         /*--------------------*/
         { TABLE_END }
      },
      /* GSM1800..............................*/
      {
         /*  ARFCN,   Rx power offset(dBm), pcell_id   */
         {  519, PWROFFSET(0),   22102786 }, 
         {  520, PWROFFSET(-15), 22102786 }, 
         {  612, PWROFFSET(0),   185582337 }, 
         {  613, PWROFFSET(6),   185582337 }, 
         /*--------------------*/
         { TABLE_END }
      },
      /* GSM1900..............................*/
      {
         /*  ARFCN,   Rx power offset(dBm), pcell_id   */
         {  810, PWROFFSET(0), 0 }, 
         /*--------------------*/
         { TABLE_END }
      }
   }
};
#endif

#if IS_2G_TAS_SUPPORT

#include "l1d_custom_rf_tas.h"

const L1D_CUSTOM_TAS_NVRAM_T L1_TAS_Custom_NVRAM_Set0=
{
   L1D_TAS_VERSION_Set0,
   L1D_TAS_FORCE_ENABLE_Set0,
   L1D_TAS_FORCE_INIT_SETTING_Set0,
   L1D_TAS_ENABLE_ON_REAL_SIM_Set0,
   L1D_TAS_ENABLE_ON_TEST_SIM_Set0,
/* Below pararmeter setting by Band */
   {
      0,
      L1D_GSM850_TAS_STATE_NUM_Set0,
      L1D_GSM900_TAS_STATE_NUM_Set0,
      L1D_DCS1800_TAS_STATE_NUM_Set0,
      L1D_PCS1900_TAS_STATE_NUM_Set0
   },
   {
      0,
      L1D_GSM850_TAS_REAL_SIM_TAS_ENABLE_Set0,
      L1D_GSM900_TAS_REAL_SIM_TAS_ENABLE_Set0,
      L1D_DCS1800_TAS_REAL_SIM_TAS_ENABLE_Set0,
      L1D_PCS1900_TAS_REAL_SIM_TAS_ENABLE_Set0
   },
   {   
      0,
      L1D_GSM850_TAS_REAL_SIM_INIT_SETTING_Set0,
      L1D_GSM900_TAS_REAL_SIM_INIT_SETTING_Set0,
      L1D_DCS1800_TAS_REAL_SIM_INIT_SETTING_Set0,
      L1D_PCS1900_TAS_REAL_SIM_INIT_SETTING_Set0
   },
   {
      0,
      L1D_GSM850_TAS_TEST_SIM_TAS_ENABLE_Set0,
      L1D_GSM900_TAS_TEST_SIM_TAS_ENABLE_Set0,
      L1D_DCS1800_TAS_TEST_SIM_TAS_ENABLE_Set0,
      L1D_PCS1900_TAS_TEST_SIM_TAS_ENABLE_Set0
   },
   {
      0,
      L1D_GSM850_TAS_TEST_SIM_INIT_SETTING_Set0,
      L1D_GSM900_TAS_TEST_SIM_INIT_SETTING_Set0,
      L1D_DCS1800_TAS_TEST_SIM_INIT_SETTING_Set0,
      L1D_PCS1900_TAS_TEST_SIM_INIT_SETTING_Set0
   #if IS_2G_RXD_SUPPORT
   },
   {
      L1D_RXD_STX_SB_PCL_CB_PRE_SWT_THD_SET0,
      L1D_RXD_STX_SB_HR_CB_PRE_SWT_THD_SET0, 
      L1D_RXD_BTX_EVENT_SO_N_CB_SET0, 
      L1D_RXD_BTX_EVENT_SO_HR_ABS_THD_SET0,
      L1D_RXD_BTX_EVENT_SO_RXLEV_CB_THD_SET0,
      L1D_RXD_BRX_EVENT_SO_N_CB_SET0,
      L1D_RXD_BRX_EVENT_SO_LOW_QUAL_THD_SET0,
      L1D_RXD_BRX_EVENT_SO_RXLEV_CB_THD_SET0,
      L1D_RXD_BRX_EVENT_SO_SNR_THD_SET0,
      L1D_RXD_BTX_SB_HR_ABS_THD_SET0,    
      L1D_RXD_BTX_SB_PCL_CB_PRE_SWT_THD_SET0,
      L1D_RXD_BTX_SB_HR_CB_PRE_SWT_THD_SET0,
      L1D_RXD_BRX_SB_RXLEV_CB_PRE_SWT_THD_SET0,
      L1D_RXD_BTX_S_SNR_BLOCK_SET0,
      L1D_RXD_BRX_S_SNR_BLOCK_SET0,
      L1D_RXD_STX_SO_PHR_ABS_THD_SET0,
      L1D_RXD_STX_SO_PPCL_GAIN_THD_SET0,
      L1D_RXD_STX_SO_PHR_GAIN_THD_SET0      
   #endif /* IS_2G_RXD_SUPPORT */
   }
};
   
const L1D_CUSTOM_TAS_FE_NVRAM_T L1_TAS_Custom_FE_NVRAM_Set0=
{
   {
      {
         {{{0,}}},
   //* LTE Band 5 *//
         {
            {
               {
                  L1D_GSM850_TAS_STATE0_CAT_A_CONFIG_Set0,
                  L1D_GSM850_TAS_STATE0_CAT_B_CONFIG_Set0,
                  L1D_GSM850_TAS_STATE0_CAT_C_CONFIG_Set0
               },
               {
                  L1D_GSM850_TAS_STATE1_CAT_A_CONFIG_Set0,
                  L1D_GSM850_TAS_STATE1_CAT_B_CONFIG_Set0,
                  L1D_GSM850_TAS_STATE1_CAT_C_CONFIG_Set0
               },
               {
                  L1D_GSM850_TAS_STATE2_CAT_A_CONFIG_Set0,
                  L1D_GSM850_TAS_STATE2_CAT_B_CONFIG_Set0,
                  L1D_GSM850_TAS_STATE2_CAT_C_CONFIG_Set0
   #if IS_2G_RXD_SUPPORT
               },
               {
                  L1D_GSM850_TAS_STATE3_CAT_A_CONFIG_Set0,
                  L1D_GSM850_TAS_STATE3_CAT_B_CONFIG_Set0,
                  L1D_GSM850_TAS_STATE3_CAT_C_CONFIG_Set0
   #endif /* IS_2G_RXD_SUPPORT */
               }
            }
         },

//* LTE Band 8 *//
         {
            {
               {
                  L1D_GSM900_TAS_STATE0_CAT_A_CONFIG_Set0,
                  L1D_GSM900_TAS_STATE0_CAT_B_CONFIG_Set0,
                  L1D_GSM900_TAS_STATE0_CAT_C_CONFIG_Set0
               },
               {
                  L1D_GSM900_TAS_STATE1_CAT_A_CONFIG_Set0,
                  L1D_GSM900_TAS_STATE1_CAT_B_CONFIG_Set0,
                  L1D_GSM900_TAS_STATE1_CAT_C_CONFIG_Set0
               },
               {
                  L1D_GSM900_TAS_STATE2_CAT_A_CONFIG_Set0,
                  L1D_GSM900_TAS_STATE2_CAT_B_CONFIG_Set0,
                  L1D_GSM900_TAS_STATE2_CAT_C_CONFIG_Set0
   #if IS_2G_RXD_SUPPORT
               },
               {
                  L1D_GSM900_TAS_STATE3_CAT_A_CONFIG_Set0,
                  L1D_GSM900_TAS_STATE3_CAT_B_CONFIG_Set0,
                  L1D_GSM900_TAS_STATE3_CAT_C_CONFIG_Set0
   #endif /* IS_2G_RXD_SUPPORT */
               }
            }
         },

//* LTE Band 3 *//
         {
            {
               {
                  L1D_DCS1800_TAS_STATE0_CAT_A_CONFIG_Set0,
                  L1D_DCS1800_TAS_STATE0_CAT_B_CONFIG_Set0,
                  L1D_DCS1800_TAS_STATE0_CAT_C_CONFIG_Set0
               },
               {
                  L1D_DCS1800_TAS_STATE1_CAT_A_CONFIG_Set0,
                  L1D_DCS1800_TAS_STATE1_CAT_B_CONFIG_Set0,
                  L1D_DCS1800_TAS_STATE1_CAT_C_CONFIG_Set0
               },
               {      
                  L1D_DCS1800_TAS_STATE2_CAT_A_CONFIG_Set0,
                  L1D_DCS1800_TAS_STATE2_CAT_B_CONFIG_Set0,
                  L1D_DCS1800_TAS_STATE2_CAT_C_CONFIG_Set0
   #if IS_2G_RXD_SUPPORT
               },
               {      
                  L1D_DCS1800_TAS_STATE3_CAT_A_CONFIG_Set0,
                  L1D_DCS1800_TAS_STATE3_CAT_B_CONFIG_Set0,
                  L1D_DCS1800_TAS_STATE3_CAT_C_CONFIG_Set0
   #endif /* IS_2G_RXD_SUPPORT */
               }
            }
         },
//* LTE Band 2 *//
         {
            {
               {
                  L1D_PCS1900_TAS_STATE0_CAT_A_CONFIG_Set0,
                  L1D_PCS1900_TAS_STATE0_CAT_B_CONFIG_Set0,
                  L1D_PCS1900_TAS_STATE0_CAT_C_CONFIG_Set0
               },
               {
                  L1D_PCS1900_TAS_STATE1_CAT_A_CONFIG_Set0,
                  L1D_PCS1900_TAS_STATE1_CAT_B_CONFIG_Set0,
                  L1D_PCS1900_TAS_STATE1_CAT_C_CONFIG_Set0
               },
               {
                  L1D_PCS1900_TAS_STATE2_CAT_A_CONFIG_Set0,
                  L1D_PCS1900_TAS_STATE2_CAT_B_CONFIG_Set0,
                  L1D_PCS1900_TAS_STATE2_CAT_C_CONFIG_Set0
   #if IS_2G_RXD_SUPPORT
               },
               {
                  L1D_PCS1900_TAS_STATE3_CAT_A_CONFIG_Set0,
                  L1D_PCS1900_TAS_STATE3_CAT_B_CONFIG_Set0,
                  L1D_PCS1900_TAS_STATE3_CAT_C_CONFIG_Set0
   #endif /* IS_2G_RXD_SUPPORT */
               }
            }
         }
      }
   },
         
   (L1D_CUSTOM_TAS_FE_CAT_A_T*)&L1D_TAS_CAT_A_DATABASE_Set0,
   {{{0,}}},
   #if IS_MIPI_SUPPORT
   {
      (sGGE_MIPIEVENT*)&L1D_TAS_CAT_A_CONFIG0_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_TAS_CAT_A_CONFIG1_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_TAS_CAT_A_CONFIG2_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_TAS_CAT_A_CONFIG3_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_TAS_CAT_A_CONFIG4_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_TAS_CAT_A_CONFIG5_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_TAS_CAT_A_CONFIG6_MIPI_EVENT_Set0,         
      (sGGE_MIPIEVENT*)&L1D_TAS_CAT_A_CONFIG7_MIPI_EVENT_Set0,
   },
   {{{0,{0},0,0}}},
   {
      (sGGE_MIPIDATA_SUBBAND*)&L1D_TAS_CAT_A_CONFIG0_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_TAS_CAT_A_CONFIG1_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_TAS_CAT_A_CONFIG2_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_TAS_CAT_A_CONFIG3_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_TAS_CAT_A_CONFIG4_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_TAS_CAT_A_CONFIG5_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_TAS_CAT_A_CONFIG6_MIPI_DATA_Set0,         
      (sGGE_MIPIDATA_SUBBAND*)&L1D_TAS_CAT_A_CONFIG7_MIPI_DATA_Set0,
   },
   {{{0,0,0,0,{{0}}}}},
   #endif
   (L1D_CUSTOM_TAS_FE_CAT_B_T*)&L1D_TAS_CAT_B_DATABASE_Set0,
   {{{0,}}},
   #if IS_MIPI_SUPPORT
   {
      (sGGE_MIPIEVENT*)&L1D_TAS_CAT_B_CONFIG0_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_TAS_CAT_B_CONFIG1_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_TAS_CAT_B_CONFIG2_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_TAS_CAT_B_CONFIG3_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_TAS_CAT_B_CONFIG4_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_TAS_CAT_B_CONFIG5_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_TAS_CAT_B_CONFIG6_MIPI_EVENT_Set0,         
      (sGGE_MIPIEVENT*)&L1D_TAS_CAT_B_CONFIG7_MIPI_EVENT_Set0,
   },
   {{{0,{0},0,0}}},
   {
      (sGGE_MIPIDATA_SUBBAND*)&L1D_TAS_CAT_B_CONFIG0_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_TAS_CAT_B_CONFIG1_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_TAS_CAT_B_CONFIG2_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_TAS_CAT_B_CONFIG3_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_TAS_CAT_B_CONFIG4_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_TAS_CAT_B_CONFIG5_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_TAS_CAT_B_CONFIG6_MIPI_DATA_Set0,         
      (sGGE_MIPIDATA_SUBBAND*)&L1D_TAS_CAT_B_CONFIG7_MIPI_DATA_Set0,
   },
   {{{0,0,0,0,{{0}}}}},
   #endif
   (L1D_CUSTOM_TAS_FE_CAT_C_T*)&L1D_TAS_CAT_C_DATABASE_Set0,
   {{{0,}}},
   #if IS_MIPI_SUPPORT
   {
      (sGGE_MIPIEVENT*)&L1D_TAS_CAT_C_CONFIG0_MIPI_EVENT_Set0,
   },
   {{{0,{0},0,0}}},
   {
      (sGGE_MIPIDATA_SUBBAND*)&L1D_TAS_CAT_C_CONFIG0_MIPI_DATA_Set0,
   },
   {{{0,0,0,0,{{0}}}}},
   #endif
};
const L1D_CUSTOM_TAS_INHERIT_LTE_BAND_BITMAP_TABLE_T L1_TAS_Custom_InheritLteAntTable_Set0=
{
   {
    {
       (L1D_CUSTOM_TAS_INHERIT_LTE_BAND_T*)&L1D_TAS_INHERIT_LTE_ANT_GSMBandNone_Set0,
       {0,},
    },

    {
       (L1D_CUSTOM_TAS_INHERIT_LTE_BAND_T*)&L1D_TAS_INHERIT_LTE_ANT_GSMBand850_Set0,
       {0,},
    },

    {
       (L1D_CUSTOM_TAS_INHERIT_LTE_BAND_T*)&L1D_TAS_INHERIT_LTE_ANT_GSMBand900_Set0,
       {0,},
    },

    {
       (L1D_CUSTOM_TAS_INHERIT_LTE_BAND_T*)&L1D_TAS_INHERIT_LTE_ANT_GSMBand1800_Set0,
       {0,},
    },

    {
       (L1D_CUSTOM_TAS_INHERIT_LTE_BAND_T*)&L1D_TAS_INHERIT_LTE_ANT_GSMBand1900_Set0,
       {0,},
    },
   }
};

const L1D_CUSTOM_TAS_TST_T L1_TAS_Custom_TST_Set0=
{
   {
      0,
   #if IS_2G_RXD_SUPPORT
      (L1D_GSM850_TAS_TST_STATE0_Set0||L1D_GSM850_TAS_TST_STATE1_Set0||L1D_GSM850_TAS_TST_STATE2_Set0||L1D_GSM850_TAS_TST_STATE3_Set0),
      (L1D_GSM900_TAS_TST_STATE0_Set0||L1D_GSM900_TAS_TST_STATE1_Set0||L1D_GSM900_TAS_TST_STATE2_Set0||L1D_GSM900_TAS_TST_STATE3_Set0),
      (L1D_DCS1800_TAS_TST_STATE0_Set0||L1D_DCS1800_TAS_TST_STATE1_Set0||L1D_DCS1800_TAS_TST_STATE2_Set0||L1D_DCS1800_TAS_TST_STATE3_Set0),
      (L1D_PCS1900_TAS_TST_STATE0_Set0||L1D_PCS1900_TAS_TST_STATE1_Set0||L1D_PCS1900_TAS_TST_STATE2_Set0||L1D_PCS1900_TAS_TST_STATE3_Set0)
   #else
      (L1D_GSM850_TAS_TST_STATE0_Set0||L1D_GSM850_TAS_TST_STATE1_Set0||L1D_GSM850_TAS_TST_STATE2_Set0),
      (L1D_GSM900_TAS_TST_STATE0_Set0||L1D_GSM900_TAS_TST_STATE1_Set0||L1D_GSM900_TAS_TST_STATE2_Set0),
      (L1D_DCS1800_TAS_TST_STATE0_Set0||L1D_DCS1800_TAS_TST_STATE1_Set0||L1D_DCS1800_TAS_TST_STATE2_Set0),
      (L1D_PCS1900_TAS_TST_STATE0_Set0||L1D_PCS1900_TAS_TST_STATE1_Set0||L1D_PCS1900_TAS_TST_STATE2_Set0)
   #endif /* IS_2G_RXD_SUPPORT */
   },
   {
      0,
      L1D_GSM850_TAS_TST_STATE0_Set0,
      L1D_GSM900_TAS_TST_STATE0_Set0,
      L1D_DCS1800_TAS_TST_STATE0_Set0,
      L1D_PCS1900_TAS_TST_STATE0_Set0
   },
   {
      0,
      L1D_GSM850_TAS_TST_STATE1_Set0,
      L1D_GSM900_TAS_TST_STATE1_Set0,
      L1D_DCS1800_TAS_TST_STATE1_Set0,
      L1D_PCS1900_TAS_TST_STATE1_Set0
   },
   {
      0,
      L1D_GSM850_TAS_TST_STATE2_Set0,
      L1D_GSM900_TAS_TST_STATE2_Set0,
      L1D_DCS1800_TAS_TST_STATE2_Set0,
      L1D_PCS1900_TAS_TST_STATE2_Set0
   #if IS_2G_RXD_SUPPORT
   },
   {
      0,
      L1D_GSM850_TAS_TST_STATE3_Set0,
      L1D_GSM900_TAS_TST_STATE3_Set0,
      L1D_DCS1800_TAS_TST_STATE3_Set0,
      L1D_PCS1900_TAS_TST_STATE3_Set0
   #endif /* IS_2G_RXD_SUPPORT */
   }
};
#endif

#if IS_2G_DAT_SUPPORT

#include "l1d_custom_rf_dat.h"

const L1D_CUSTOM_DAT_FE_ROUTE_NVRAM_T L1_DAT_Custom_FE_ROUTE_NVRAM_Set0=
{
   L1D_DAT_ENABLE,
   {
      {
         {{{0,}}},
   //* LTE Band 5 *//
         {
            {
               {
                  L1D_GSM850_DAT_STATE0_CAT_A_CONFIG_Set0,
                  L1D_GSM850_DAT_STATE0_CAT_B_CONFIG_Set0
               },
               {
                  L1D_GSM850_DAT_STATE1_CAT_A_CONFIG_Set0,
                  L1D_GSM850_DAT_STATE1_CAT_B_CONFIG_Set0
               },
               {
                  L1D_GSM850_DAT_STATE2_CAT_A_CONFIG_Set0,
                  L1D_GSM850_DAT_STATE2_CAT_B_CONFIG_Set0
               },
               {
                  L1D_GSM850_DAT_STATE3_CAT_A_CONFIG_Set0,
                  L1D_GSM850_DAT_STATE3_CAT_B_CONFIG_Set0
               },
               {
                  L1D_GSM850_DAT_STATE4_CAT_A_CONFIG_Set0,
                  L1D_GSM850_DAT_STATE4_CAT_B_CONFIG_Set0
               },
               {
                  L1D_GSM850_DAT_STATE5_CAT_A_CONFIG_Set0,
                  L1D_GSM850_DAT_STATE5_CAT_B_CONFIG_Set0
               },
               {
                  L1D_GSM850_DAT_STATE6_CAT_A_CONFIG_Set0,
                  L1D_GSM850_DAT_STATE6_CAT_B_CONFIG_Set0
               },
               {
                  L1D_GSM850_DAT_STATE7_CAT_A_CONFIG_Set0,
                  L1D_GSM850_DAT_STATE7_CAT_B_CONFIG_Set0
               }
            }
         },

//* LTE Band 8 *//
         {
            {
               {
                  L1D_GSM900_DAT_STATE0_CAT_A_CONFIG_Set0,
                  L1D_GSM900_DAT_STATE0_CAT_B_CONFIG_Set0
               },
               {
                  L1D_GSM900_DAT_STATE1_CAT_A_CONFIG_Set0,
                  L1D_GSM900_DAT_STATE1_CAT_B_CONFIG_Set0
               },
               {
                  L1D_GSM900_DAT_STATE2_CAT_A_CONFIG_Set0,
                  L1D_GSM900_DAT_STATE2_CAT_B_CONFIG_Set0
               },
               {
                  L1D_GSM900_DAT_STATE3_CAT_A_CONFIG_Set0,
                  L1D_GSM900_DAT_STATE3_CAT_B_CONFIG_Set0
               },
               {
                  L1D_GSM900_DAT_STATE4_CAT_A_CONFIG_Set0,
                  L1D_GSM900_DAT_STATE4_CAT_B_CONFIG_Set0
               },
               {
                  L1D_GSM900_DAT_STATE5_CAT_A_CONFIG_Set0,
                  L1D_GSM900_DAT_STATE5_CAT_B_CONFIG_Set0
               },
               {
                  L1D_GSM900_DAT_STATE6_CAT_A_CONFIG_Set0,
                  L1D_GSM900_DAT_STATE6_CAT_B_CONFIG_Set0
               },
               {
                  L1D_GSM900_DAT_STATE7_CAT_A_CONFIG_Set0,
                  L1D_GSM900_DAT_STATE7_CAT_B_CONFIG_Set0
               }
            }
         },

//* LTE Band 3 *//
         {
            {
               {
                  L1D_DCS1800_DAT_STATE0_CAT_A_CONFIG_Set0,
                  L1D_DCS1800_DAT_STATE0_CAT_B_CONFIG_Set0
               },
               {
                  L1D_DCS1800_DAT_STATE1_CAT_A_CONFIG_Set0,
                  L1D_DCS1800_DAT_STATE1_CAT_B_CONFIG_Set0
               },
               {      
                  L1D_DCS1800_DAT_STATE2_CAT_A_CONFIG_Set0,
                  L1D_DCS1800_DAT_STATE2_CAT_B_CONFIG_Set0
               },
               {      
                  L1D_DCS1800_DAT_STATE3_CAT_A_CONFIG_Set0,
                  L1D_DCS1800_DAT_STATE3_CAT_B_CONFIG_Set0
               },
               {      
                  L1D_DCS1800_DAT_STATE4_CAT_A_CONFIG_Set0,
                  L1D_DCS1800_DAT_STATE4_CAT_B_CONFIG_Set0
               },
               {      
                  L1D_DCS1800_DAT_STATE5_CAT_A_CONFIG_Set0,
                  L1D_DCS1800_DAT_STATE5_CAT_B_CONFIG_Set0
               },
               {      
                  L1D_DCS1800_DAT_STATE6_CAT_A_CONFIG_Set0,
                  L1D_DCS1800_DAT_STATE6_CAT_B_CONFIG_Set0
               },
               {      
                  L1D_DCS1800_DAT_STATE7_CAT_A_CONFIG_Set0,
                  L1D_DCS1800_DAT_STATE7_CAT_B_CONFIG_Set0
               }
            }
         },
//* LTE Band 2 *//
         {
            {
               {
                  L1D_PCS1900_DAT_STATE0_CAT_A_CONFIG_Set0,
                  L1D_PCS1900_DAT_STATE0_CAT_B_CONFIG_Set0
               },
               {
                  L1D_PCS1900_DAT_STATE1_CAT_A_CONFIG_Set0,
                  L1D_PCS1900_DAT_STATE1_CAT_B_CONFIG_Set0
               },
               {
                  L1D_PCS1900_DAT_STATE2_CAT_A_CONFIG_Set0,
                  L1D_PCS1900_DAT_STATE2_CAT_B_CONFIG_Set0
               },
               {
                  L1D_PCS1900_DAT_STATE3_CAT_A_CONFIG_Set0,
                  L1D_PCS1900_DAT_STATE3_CAT_B_CONFIG_Set0
               },
               {
                  L1D_PCS1900_DAT_STATE4_CAT_A_CONFIG_Set0,
                  L1D_PCS1900_DAT_STATE4_CAT_B_CONFIG_Set0
               },
               {
                  L1D_PCS1900_DAT_STATE5_CAT_A_CONFIG_Set0,
                  L1D_PCS1900_DAT_STATE5_CAT_B_CONFIG_Set0
               },
               {
                  L1D_PCS1900_DAT_STATE6_CAT_A_CONFIG_Set0,
                  L1D_PCS1900_DAT_STATE6_CAT_B_CONFIG_Set0
               },
               {
                  L1D_PCS1900_DAT_STATE7_CAT_A_CONFIG_Set0,
                  L1D_PCS1900_DAT_STATE7_CAT_B_CONFIG_Set0
               }
            }
         }
      }
   },
};


const L1D_CUSTOM_DAT_FE_CAT_A_NVRAM_T L1_DAT_Custom_FE_CAT_A_NVRAM_Set0=
{
         
   (L1D_CUSTOM_DAT_FE_CAT_A_T*)&L1D_DAT_CAT_A_DATABASE_Set0,
   {{{0,}}},
   #if IS_MIPI_SUPPORT
   {
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_A_Route0_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_A_Route1_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_A_Route2_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_A_Route3_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_A_Route4_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_A_Route5_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_A_Route6_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_A_Route7_MIPI_EVENT_Set0,
   },
   {{{0,}}},
   {
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_A_Route0_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_A_Route1_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_A_Route2_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_A_Route3_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_A_Route4_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_A_Route5_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_A_Route6_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_A_Route7_MIPI_DATA_Set0,
   },
   {{{0,}}},
   #endif
};

const L1D_CUSTOM_DAT_FE_CAT_B_NVRAM_T L1_DAT_Custom_FE_CAT_B_NVRAM_Set0=
{
   (L1D_CUSTOM_DAT_FE_CAT_B_T*)&L1D_DAT_CAT_B_DATABASE_Set0,
   {{{0,}}},
   #if IS_MIPI_SUPPORT
   {
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route0_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route1_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route2_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route3_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route4_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route5_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route6_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route7_MIPI_EVENT_Set0,      
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route8_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route9_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route10_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route11_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route12_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route13_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route14_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route15_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route16_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route17_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route18_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route19_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route20_MIPI_EVENT_Set0,     
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route21_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route22_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route23_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route24_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route25_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route26_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route27_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route28_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route29_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route30_MIPI_EVENT_Set0,
      (sGGE_MIPIEVENT*)&L1D_DAT_CAT_B_Route31_MIPI_EVENT_Set0,
   },
   {{{0,}}},
   {
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route0_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route1_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route2_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route3_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route4_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route5_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route6_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route7_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route8_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route9_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route10_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route11_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route12_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route13_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route14_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route15_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route16_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route17_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route18_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route19_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route20_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route21_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route22_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route23_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route24_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route25_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route26_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route27_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route28_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route29_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route30_MIPI_DATA_Set0,
      (sGGE_MIPIDATA_SUBBAND*)&L1D_DAT_CAT_B_Route31_MIPI_DATA_Set0,
   },
   {{{0,}}}
   #endif
};


#endif

#if defined(__2G_RX_DIVERSITY_PATH_SUPPORT__)
const L1D_CUSTOM_RAS_NVRAM_T L1_RAS_Custom_NVRAM_Set0=
{
   {  0,
      GSM850_DIVERSITY_ENABLE_Set0,
      GSM_DIVERSITY_ENABLE_Set0,
      DCS_DIVERSITY_ENABLE_Set0,
      PCS_DIVERSITY_ENABLE_Set0},
   RXD_MODE,
   C1_P_THD_HIGH_RXLEV,
   C1_THD_HIGH_RXLEV,
   C1_THD_LOW_RXLEV,
   C1_P_D_THD_RXLEV_DIFF,
   C2_THD_RXLEV,
   C2_THD_TSCSNR,
   C2_THD_PRESNR,
   C3_THD_OBB_DEDICATED,
   C3_THD_OBB_IDLE,
   RXD_THD_RXLEV_DIFF,
   PERIOD_IDLE,
   PERIOD_DEDICATED,
   OBB_PERIOD_DEDICATED
};

#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */


