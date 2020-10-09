/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*******************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   l1d_custom_rf.h
 *
 * Project:
 * --------
 *   MT6177M
 *
 * Description:
 * ------------
 *   MT6177M 2G RF constance definition
 *
 * Author:
 * -------
 *
 *
 *==============================================================================
 *******************************************************************************/

#ifndef  _L1D_CUSTOM_RF_H_Set1_
#define  _L1D_CUSTOM_RF_H_Set1_
/* --------------------------------------------------------------------------- */
#include "l1d_public.h"

#if !defined(MT6177M_2G_RF)
   #error "rf files mismatch with compile option!"
#endif

   #if IS_MIPI_SUPPORT
#include "l1d_custom_mipi.h"
   #endif

/*--------------------------------------------------------*/
/*   Event Timing Define                                  */
/*--------------------------------------------------------*/
/*MT6177M*/ #define  QB_SR1_Set1               160 //save time for TDD 
/*MT6177M*/ #define  QB_SR2_Set1               53  //save time for TDD /* QB_SR2_Set1 should be larger than 52 */
/*MT6177M*/ #define  QB_SR2M_Set1              39
/*MT6177M*/ #define  QB_SR3_Set1               2//5    /* SR3 should be larger than (QB_RX_FSYNC_2_FENA+2QB) */
/*MT6177M*/ #define  QB_PR1_Set1               162 //save time for TDD /* QB_PR1>QB_SR0 to prevent RF conflict among 2/3G    */
/*MT6177M*/ #define  QB_PR2_Set1               65
/*MT6177M*/ #define  QB_PR3_Set1               7
/*MT6177M*/ #define  QB_ST1_Set1               255
/*MT6177M*/ #define  QB_ST2B_Set1              38   /* ST2B should be larger  than (QB_TX_FENA_2_FSYNC+8QB) */
/*MT6177M*/ #define  QB_ST3_Set1               38   /* ST3  should be larger  than (QB_TX_FSYNC_2_FENA+7QB)*/
/*MT6177M*/ #define  QB_PT1_Set1               257  /* QB_PT1>QB_ST1 to prevent RF conflict among 2/3G     */
/*MT6177M*/ #define  QB_PT2_Set1               56
/*MT6177M*/ #define  QB_PT2B_Set1              6
/*MT6177M*/ #define  QB_PT3_Set1               30
/*MT6177M*/ #define  QB_PT3A_Set1              40
/*MT6177M*/ #define  QB_ST2M_G8_Set1           4
/*MT6177M*/ #define  QB_ST2M_8G_Set1           4
/*MT6177M*/ #define  QB_PT2M1_G8_Set1          -1
/*MT6177M*/ #define  QB_PT2M2_G8_Set1          -3
/*MT6177M*/ #define  QB_PT2M1_8G_Set1          10
/*MT6177M*/ #define  QB_PT2M2_8G_Set1          4
/*MT6177M*/
/*MT6177M*/
/*MT6177M*/ #define  QB_APCON_Set1             13 //OH:11
/*MT6177M*/ #define  QB_APCMID_Set1            15 //OH:18
/*MT6177M*/ #define  QB_APCOFF_Set1            12  //56: 6
/*MT6177M*/ #define  QB_APCDACON_Set1          25 //0
/*MT6177M*/ #define  TX_PROPAGATION_DELAY_Set1 50 //6169:47 / OH:46
/*MT6177M*/
/*MT6177M*/ /*--------------------------------------------------*/
/*MT6177M*/ /*   define  BPI data for MT6290                    */
/*MT6177M*/ /*--------------------------------------------------*/
/*MT6177M*/ /*  PRCB : bit   pin                                */
/*MT6177M*/ /*         16    ANTENNA_CONFLICT_2G                */
/*MT6177M*/ /*         17    SPI_SWITCH_TO_2G                   */
/*MT6177M*/ /*         18    GSM_ERR_DET_ID                     */
/*MT6177M*/ /*         19    SP3T_V1 TXOUT_B2B39 TXOUT_B7B38    */
/*MT6177M*/ /*         20    SP3T_V2 W_PA_B7_EN                 */
/*MT6177M*/ /*         21    ASM_VCTRL_A Main_V1                */
/*MT6177M*/ /*         22    ASM_VCTRL_B Main_V2                */
/*MT6177M*/ /*         23    ASM_VCTRL_C Main_V3                */
/*MT6177M*/ /*         24    WG_GGE_PA_ENABLE                   */
/*MT6177M*/ /*         29    GSM_ERR_DET_ID(7206_ERR_DETECT_2G) */
/*MT6177M*/ /*         30    GSM_ERR_DET_ID(OGT_ERR_DETECT_2G)  */
/*MT6177M*/ /*--------------------------------------------------*/
/*MT6177M*/
/*MT6177M*/ /*------------------------------------------------------*/
/*MT6177M*/ /*  GSM_ERR_DET_ID(Pin:31) has no dedicate output pin,  */
/*MT6177M*/ /*  and it is mapped to bit "31" for SW control.        */
/*MT6177M*/ /*  For accurate RF conflict detection, this value must */
/*MT6177M*/ /*  set "31" and is unchangable.                        */
/*MT6177M*/ /*------------------------------------------------------*/
/*MT6177M*/ #define  PDATA_GSM_ERR_DET_Set1      (0x80000000)
/*MT6177M*/
/*MT6177M*/ #define  PDATA_GMSK_Set1              0x00000000
/*MT6177M*/
/*MT6177M*/ #define  PDATA_8PSK_Set1              0x00000000                                         
/*MT6177M*/ #define  PDATA_GSM850_PR1_Set1       (0x0000A000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_GSM850_PR2_Set1       (0x0000A000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_GSM850_PR3_Set1       (0x00000000                                        )
/*MT6177M*/ #define  PDATA_GSM_PR1_Set1          (0x0000800A           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_GSM_PR2_Set1          (0x0000800A           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_GSM_PR3_Set1          (0x00000000                                        )
/*MT6177M*/ #define  PDATA_DCS_PR1_Set1          (0x00008000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_DCS_PR2_Set1          (0x00008000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_DCS_PR3_Set1          (0x00000000                                        )
/*MT6177M*/ #define  PDATA_PCS_PR1_Set1          (0x00008000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_PCS_PR2_Set1          (0x00008000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_PCS_PR3_Set1          (0x00000000                                        )
/*MT6177M*/ #define  PDATA_GSM850_PT1_Set1       (0x0000A000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_GSM850_PT2_Set1       (0x0000A000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_GSM850_PT2B_Set1      (0x0000A000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_GSM850_PT3_Set1       (0x00000000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_GSM850_PT3A_Set1      (0x00000000                                        )
/*MT6177M*/ #define  PDATA_GSM850_PT2M1_G8_Set1  (0x0000A000|PDATA_8PSK_Set1|PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_GSM850_PT2M2_G8_Set1  (0x0000A000|PDATA_8PSK_Set1|PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_GSM850_PT2M1_8G_Set1  (0x0000A000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_GSM850_PT2M2_8G_Set1  (0x0000A000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_GSM_PT1_Set1          (0x00008000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_GSM_PT2_Set1          (0x00008000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_GSM_PT2B_Set1         (0x00008000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_GSM_PT3_Set1          (0x00000000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_GSM_PT3A_Set1         (0x00000000                                        )
/*MT6177M*/ #define  PDATA_GSM_PT2M1_G8_Set1     (0x00008000|PDATA_8PSK_Set1|PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_GSM_PT2M2_G8_Set1     (0x00008000|PDATA_8PSK_Set1|PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_GSM_PT2M1_8G_Set1     (0x00008000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_GSM_PT2M2_8G_Set1     (0x00008000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_DCS_PT1_Set1          (0x00008000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_DCS_PT2_Set1          (0x00008000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_DCS_PT2B_Set1         (0x00008000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_DCS_PT3_Set1          (0x00000000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_DCS_PT3A_Set1         (0x00000000                                        )
/*MT6177M*/ #define  PDATA_DCS_PT2M1_G8_Set1     (0x00008000|PDATA_8PSK_Set1|PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_DCS_PT2M2_G8_Set1     (0x00008000|PDATA_8PSK_Set1|PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_DCS_PT2M1_8G_Set1     (0x00008000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_DCS_PT2M2_8G_Set1     (0x00008000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_PCS_PT1_Set1          (0x00008000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_PCS_PT2_Set1          (0x00008000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_PCS_PT2B_Set1         (0x00008000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_PCS_PT3_Set1          (0x00000000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_PCS_PT3A_Set1         (0x00000000                                        )
/*MT6177M*/ #define  PDATA_PCS_PT2M1_G8_Set1     (0x00008000|PDATA_8PSK_Set1|PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_PCS_PT2M2_G8_Set1     (0x00008000|PDATA_8PSK_Set1|PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_PCS_PT2M1_8G_Set1     (0x00008000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_PCS_PT2M2_8G_Set1     (0x00008000           |PDATA_GSM_ERR_DET_Set1)
/*MT6177M*/ #define  PDATA_INIT_Set1             (0x00000000                                        )
/*MT6177M*/ #define  PDATA_IDLE_Set1             (0x00000000                                        )
/*MT6177M*/
/*MT6177M*//*----------------------------------------------*/
/*MT6177M*//*   APC Compensate Thresholds                  */
/*MT6177M*//*----------------------------------------------*/
/*MT6177M*/
/*MT6177M*/ #define    BAT_VOLTAGE_SAMPLE_PERIOD_SECOND_Set1     180
/*MT6177M*/ #define    BAT_VOLTAGE_SAMPLE_PERIOD_Set1            SECONDS2FRAME(BAT_VOLTAGE_SAMPLE_PERIOD_SECOND_Set1)
/*MT6177M*/ #define    BAT_VOLTAGE_AVERAGE_COUNT_Set1            1
/*MT6177M*/ #define    BAT_LOW_VOLTAGE_TRHESHOLD_Set1            (3.5)
/*MT6177M*/ #define    BAT_HIGH_VOLTAGE_TRHESHOLD_Set1           (4.0)
/*MT6177M*/ #define    BAT_LOW_VOLTAGE_Set1                      VOLT2UVOLT(BAT_LOW_VOLTAGE_TRHESHOLD_Set1)
/*MT6177M*/ #define    BAT_HIGH_VOLTAGE_Set1                     VOLT2UVOLT(BAT_HIGH_VOLTAGE_TRHESHOLD_Set1)
/*MT6177M*/
/*MT6177M*/ #define    BAT_TEMPERATURE_SAMPLE_PERIOD_SECOND_Set1 180
/*MT6177M*/ #define    BAT_TEMPERATURE_SAMPLE_PERIOD_Set1        SECONDS2FRAME(BAT_TEMPERATURE_SAMPLE_PERIOD_SECOND_Set1)
/*MT6177M*/ #define    BAT_TEMPERATURE_AVERAGE_COUNT_Set1        1
/*MT6177M*/ #define    BAT_LOW_TEMPERATURE_TRHESHOLD_Set1        (0)
/*MT6177M*/ #define    BAT_HIGH_TEMPERATURE_TRHESHOLD_Set1       (50)
/*MT6177M*/ #define    BAT_LOW_TEMPERATURE_Set1                  TEMP2MTEMP(BAT_LOW_TEMPERATURE_TRHESHOLD_Set1)
/*MT6177M*/ #define    BAT_HIGH_TEMPERATURE_Set1                 TEMP2MTEMP(BAT_HIGH_TEMPERATURE_TRHESHOLD_Set1)
/*MT6177M*/
/*MT6177M*/ #define    RF_TEMPERATURE_SAMPLE_PERIOD_SECOND_Set1  1
/*MT6177M*/ #define    RF_TEMPERATURE_SAMPLE_PERIOD_Set1         SECONDS2FRAME(RF_TEMPERATURE_SAMPLE_PERIOD_SECOND_Set1)
/*MT6177M*/ #define    RF_TEMPERATURE_AVERAGE_COUNT_Set1         1
/*MT6177M*/
/*MT6177M*//*----------------------------------------------*/
/*MT6177M*//*   Voltage Compensate Parameter               */
/*MT6177M*//*----------------------------------------------*/
/*MT6177M*/
/*MT6177M*/ #define    MINUTES2FRAME_Set1(n)                     ((int)((n)*13000))
/*MT6177M*/ #define    AP_UPDATE_VOLTINFO_PERIOD_Set1            MINUTES2FRAME_Set1(5)
/*MT6177M*/
/*MT6177M*//*----------------------------------------------*/
/*MT6177M*//*   Crystal parameter                          */
/*MT6177M*//*----------------------------------------------*/
/*MT6177M*/ #define Custom_RF_XO_CapID_Set1   (196) /* RF SOP, Range:0~255 */
/*MT6177M*/
/*MT6177M*/ /**********************************************************/
/*MT6177M*/ /*  Define your band mode selection on                    */
/*MT6177M*/ /*  High Band and Low Band receivers                      */
/*MT6177M*/ /**********************************************************/
/*MT6177M*/ /*   Primarary Path                                       */
/*MT6177M*/ /*    IORX_PRXa    a=1~10                                 */
/*MT6177M*/ /*                                                        */
/*MT6177M*/ /*   MMRF ELNA index                                      */
/*MT6177M*/ /*    MML1_FE_ELNA_NONE                                   */
/*MT6177M*/ /*    MML1_FE_ELNAb    b=1~12                             */
/*MT6177M*/ /*                                                        */
/*MT6177M*/ /*   Example 1: Primarary Path 10 + MMRF ELNA index 12    */
/*MT6177M*/ /*    IORX_PRX10_MML1_FE_ELNA12                           */
/*MT6177M*/ /*                                                        */
/*MT6177M*/ /*   Example 2: Primarary Path 5  + MMRF ELNA index NONE  */
/*MT6177M*/ /*    IORX_PRX5    or                                     */
/*MT6177M*/ /*    IORX_PRX5_MML1_FE_ELNA_NONE                         */
/*MT6177M*/ /*                                                        */
/*MT6177M*/ /**********************************************************/
/*MT6177M*/
/*MT6177M*/ #define GSM850_PATH_SEL_Set1 IORX_PRX10
/*MT6177M*/ #define GSM_PATH_SEL_Set1    IORX_PRX10    
/*MT6177M*/ #define DCS_PATH_SEL_Set1    IORX_PRX7
/*MT6177M*/ #define PCS_PATH_SEL_Set1    IORX_PRX4
/*MT6177M*/
/*MT6177M*//*======================================================================================== */
/*MT6177M*/
/*MT6177M*/ /*----------------------------------------------*/
/*MT6177M*/ /*   TX Power Control (TXPC) Support            */
/*MT6177M*/ /*----------------------------------------------*/
/*MT6177M*/
/*MT6177M*/ #define IS_BSI_CLOSED_LOOP_TXPC_ON_Set1      0
/*MT6177M*/
/*MT6177M*/ #define TXPC_EPSK_TP_SLOPE_LB_Set1          ((24<<8)+23) /* Unit: degree/dB. Temperature increment that causes 1-dB EPSK TX power drop */
/*MT6177M*/ #define TXPC_EPSK_TP_SLOPE_HB_Set1          ((23<<8)+23) /* Two slope method : [( temp<20:slpoe1)<<8 + (temp>=20:slpoe2)], slope must < 256 */
/*MT6177M*/
/*MT6177M*/ /*----------------------------------------------*/
/*MT6177M*/ /*   DCXO LPM parameter                         */
/*MT6177M*/ /*----------------------------------------------*/
/*MT6177M*/ #define CUSTOM_CLOAD_FREQ_OFFSET_Set1   61557 /*in unit of Hz*/
/*MT6177M*/
/*MT6177M*/ /*----------------------------------------------*/
/*MT6177M*/ /*   TX power rollback parameter                */
/*MT6177M*/ /*----------------------------------------------*/
/*MT6177M*/ /*Unit: 1/8 dB*/
/*MT6177M*/ /*GSM850 GMSK*/
/*MT6177M*/ #define GSM850_TX_ROLLBACK_2T_GMSK_Set1      8
/*MT6177M*/ #define GSM850_TX_ROLLBACK_3T_GMSK_Set1     24
/*MT6177M*/ #define GSM850_TX_ROLLBACK_4T_GMSK_Set1     32
/*MT6177M*/ #define GSM850_TX_ROLLBACK_5T_GMSK_Set1     40
/*MT6177M*/
/*MT6177M*/ /*GSM GMSK*/
/*MT6177M*/ #define GSM_TX_ROLLBACK_2T_GMSK_Set1         8
/*MT6177M*/ #define GSM_TX_ROLLBACK_3T_GMSK_Set1        24
/*MT6177M*/ #define GSM_TX_ROLLBACK_4T_GMSK_Set1        32
/*MT6177M*/ #define GSM_TX_ROLLBACK_5T_GMSK_Set1        40
/*MT6177M*/
/*MT6177M*/ /*DCS GMSK*/
/*MT6177M*/ #define DCS_TX_ROLLBACK_2T_GMSK_Set1         8
/*MT6177M*/ #define DCS_TX_ROLLBACK_3T_GMSK_Set1        24
/*MT6177M*/ #define DCS_TX_ROLLBACK_4T_GMSK_Set1        32
/*MT6177M*/ #define DCS_TX_ROLLBACK_5T_GMSK_Set1        40
/*MT6177M*/
/*MT6177M*/ /*PCS GMSK*/
/*MT6177M*/ #define PCS_TX_ROLLBACK_2T_GMSK_Set1         8
/*MT6177M*/ #define PCS_TX_ROLLBACK_3T_GMSK_Set1        24
/*MT6177M*/ #define PCS_TX_ROLLBACK_4T_GMSK_Set1        32
/*MT6177M*/ #define PCS_TX_ROLLBACK_5T_GMSK_Set1        40
/*MT6177M*/
/*MT6177M*/ /*GSM850 EPSK*/
/*MT6177M*/ #define GSM850_TX_ROLLBACK_2T_EPSK_Set1      8
/*MT6177M*/ #define GSM850_TX_ROLLBACK_3T_EPSK_Set1     24
/*MT6177M*/ #define GSM850_TX_ROLLBACK_4T_EPSK_Set1     32
/*MT6177M*/ #define GSM850_TX_ROLLBACK_5T_EPSK_Set1     40
/*MT6177M*/
/*MT6177M*/ /*GSM EPSK*/
/*MT6177M*/ #define GSM_TX_ROLLBACK_2T_EPSK_Set1         8
/*MT6177M*/ #define GSM_TX_ROLLBACK_3T_EPSK_Set1        24
/*MT6177M*/ #define GSM_TX_ROLLBACK_4T_EPSK_Set1        32
/*MT6177M*/ #define GSM_TX_ROLLBACK_5T_EPSK_Set1        40
/*MT6177M*/
/*MT6177M*/ /*DCS EPSK*/
/*MT6177M*/ #define DCS_TX_ROLLBACK_2T_EPSK_Set1         8
/*MT6177M*/ #define DCS_TX_ROLLBACK_3T_EPSK_Set1        24
/*MT6177M*/ #define DCS_TX_ROLLBACK_4T_EPSK_Set1        32
/*MT6177M*/ #define DCS_TX_ROLLBACK_5T_EPSK_Set1        40
/*MT6177M*/
/*MT6177M*/ /*PCS EPSK*/
/*MT6177M*/ #define PCS_TX_ROLLBACK_2T_EPSK_Set1         8
/*MT6177M*/ #define PCS_TX_ROLLBACK_3T_EPSK_Set1        24
/*MT6177M*/ #define PCS_TX_ROLLBACK_4T_EPSK_Set1        32
/*MT6177M*/ #define PCS_TX_ROLLBACK_5T_EPSK_Set1        40
/*MT6177M*/
/*MT6177M*/ /*Enable ramping profile rollback to improve switching spectrum depending on PA*/
/*MT6177M*/ #define IS_RAMPPROFILE_ROLLBACK_ENABLE_Set1  1
/*MT6177M*/
/*MT6177M*/ #if IS_RX_POWER_OFFSET_SUPPORT
/*MT6177M*/ #define RPO_2G_ENABLE_Set1          0
/*MT6177M*/ #define RPO_2G_META_ENABLE_Set1     0
/*MT6177M*/ #endif/*IS_RX_POWER_OFFSET_SUPPORT*/
#endif
