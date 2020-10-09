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
 *   lte_custom_rf_tpc.h
 *
 * Project:
 * --------
 *   MT6177M
 *
 * Description:
 * ------------
 *   MT6177M LTE FDD/TDD TPC
 *
 * Author:
 * -------
 *
 *
 *******************************************************************************/

#ifndef  _LTE_CUSTOM_RF_TPC_Set3_H_
#define  _LTE_CUSTOM_RF_TPC_Set3_H_
/* ------------------------------------------------------------------------- */
#if !defined(MT6177M_LTE_RF)
   #error "rf files mismatch with compile option!"
#endif

//#include "el1d_rf_custom_data.h"

/*--------------------------------------------------------------*/
/*                VPA_source_define_Set3                  */
/*--------------------------------------------------------------*/
#define  LTE_Band1_VPA_SOURCE_Set3    VPA_SOURCE_HW_PMIC
#define  LTE_Band2_VPA_SOURCE_Set3    VPA_SOURCE_HW_PMIC
#define  LTE_Band3_VPA_SOURCE_Set3    VPA_SOURCE_HW_PMIC
#define  LTE_Band4_VPA_SOURCE_Set3    VPA_SOURCE_HW_PMIC
#define  LTE_Band5_VPA_SOURCE_Set3    VPA_SOURCE_HW_PMIC
#define  LTE_Band7_VPA_SOURCE_Set3    VPA_SOURCE_HW_PMIC
#define  LTE_Band8_VPA_SOURCE_Set3    VPA_SOURCE_HW_PMIC
#define  LTE_Band9_VPA_SOURCE_Set3    VPA_SOURCE_HW_PMIC
#define  LTE_Band11_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band12_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band13_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band14_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band17_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band18_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band19_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band20_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band21_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band22_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band25_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band26_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band27_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band28_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band29_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band30_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band32_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band34_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band38_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band39_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band40_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band41_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band42_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band43_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band44_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band66_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band71_VPA_SOURCE_Set3   VPA_SOURCE_HW_PMIC
#define  LTE_Band252_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC
#define  LTE_Band255_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC
#define  LTE_Route25_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC
#define  LTE_Route26_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC
#define  LTE_Route27_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC
#define  LTE_Route28_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC
#define  LTE_Route29_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC
#define  LTE_Route30_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC
#define  LTE_Route31_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC
#define  LTE_Route32_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC
#define  LTE_Route33_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC
#define  LTE_Route34_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC
#define  LTE_Route35_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC
#define  LTE_Route36_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC
#define  LTE_Route37_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC
#define  LTE_Route38_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC
#define  LTE_Route39_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC
#define  LTE_Route40_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC
#define  LTE_Route41_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC
#define  LTE_Route42_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC
#define  LTE_Route43_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC
#define  LTE_Route44_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC
#define  LTE_Route45_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC
#define  LTE_Route46_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC
#define  LTE_Route47_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC
#define  LTE_Route48_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC
#define  LTE_Route49_VPA_SOURCE_Set3  VPA_SOURCE_HW_PMIC


/*--------------------------------------------------------------*/
/*                TX Power Backoff                              */
/*--------------------------------------------------------------*/
//* ------------- BAND None Start ----------------------------------------------------------*/
#define  LTE_BandNone_SPBF_QPSK_Set3                  0     // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_BandNone_SPBF_16QAM_Set3                 0     // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_BandNone_SPBF_64QAM_Set3                 0     // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_BandNone_SPBF_PUSCH_RB_THRES_Set3        2     // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_BandNone_SPBF_PUSCH_Set3                 0     // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_BandNone_CONST_SPBF_Set3                 0     // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_BandNone_TPBF_TEMP_THRES_Set3            0     // deg-C
#define  LTE_BandNone_TPBF_LOW_TEMP_THRES_Set3        0     // deg-C
#define  LTE_BandNone_TPBF_PWR_THRES_Set3             0     // 1/32dB
#define  LTE_BandNone_TPBF_APT_MODE_Set3              0     // 1/32dB
#define  LTE_BandNone_TPBF_ET_MODE_Set3               0     // 1/32dB
#define  LTE_BandNone_TPBF_DPD_MODE_Set3              0     // 1/32dB
#define  LTE_BandNone_TPBF_NT_RB_THRES_Set3           2     // RB
#define  LTE_BandNone_TPBF_NT_APT_MODE_Set3           0     // 1/32dB
#define  LTE_BandNone_TPBF_NT_ET_MODE_Set3            0     // 1/32dB
#define  LTE_BandNone_TPBF_NT_DPD_MODE_Set3           0     // 1/32dB

//* --------------- BAND1 Start ------------------------------------------------------------*/
#define  LTE_Band1_SPBF_QPSK_Set3                     0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band1_SPBF_16QAM_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band1_SPBF_64QAM_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band1_SPBF_PUSCH_RB_THRES_Set3           2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band1_SPBF_PUSCH_Set3                    0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band1_CONST_SPBF_Set3                    0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band1_TPBF_TEMP_THRES_Set3               65      // deg-C
#define  LTE_Band1_TPBF_LOW_TEMP_THRES_Set3           (-20)   // deg-C
#define  LTE_Band1_TPBF_PWR_THRES_Set3                (19*32) // 1/32dB
#define  LTE_Band1_TPBF_APT_MODE_Set3                 16      // 1/32dB
#define  LTE_Band1_TPBF_ET_MODE_Set3                  16      // 1/32dB
#define  LTE_Band1_TPBF_DPD_MODE_Set3                 16      // 1/32dB
#define  LTE_Band1_TPBF_NT_RB_THRES_Set3              2       // RB
#define  LTE_Band1_TPBF_NT_APT_MODE_Set3              0       // 1/32dB
#define  LTE_Band1_TPBF_NT_ET_MODE_Set3               0       // 1/32dB
#define  LTE_Band1_TPBF_NT_DPD_MODE_Set3              0       // 1/32dB

//* --------------- BAND2 Start ------------------------------------------------------------*/
#define  LTE_Band2_SPBF_QPSK_Set3                     0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band2_SPBF_16QAM_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band2_SPBF_64QAM_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band2_SPBF_PUSCH_RB_THRES_Set3           2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band2_SPBF_PUSCH_Set3                    0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band2_CONST_SPBF_Set3                    0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band2_TPBF_TEMP_THRES_Set3               65      // deg-C
#define  LTE_Band2_TPBF_LOW_TEMP_THRES_Set3           (-20)   // deg-C
#define  LTE_Band2_TPBF_PWR_THRES_Set3                (19*32) // 1/32dB
#define  LTE_Band2_TPBF_APT_MODE_Set3                 16      // 1/32dB
#define  LTE_Band2_TPBF_ET_MODE_Set3                  16      // 1/32dB
#define  LTE_Band2_TPBF_DPD_MODE_Set3                 16      // 1/32dB
#define  LTE_Band2_TPBF_NT_RB_THRES_Set3              2       // RB
#define  LTE_Band2_TPBF_NT_APT_MODE_Set3              0       // 1/32dB
#define  LTE_Band2_TPBF_NT_ET_MODE_Set3               0       // 1/32dB
#define  LTE_Band2_TPBF_NT_DPD_MODE_Set3              0       // 1/32dB

//* --------------- BAND3 Start ------------------------------------------------------------*/
#define  LTE_Band3_SPBF_QPSK_Set3                     0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band3_SPBF_16QAM_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band3_SPBF_64QAM_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band3_SPBF_PUSCH_RB_THRES_Set3           2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band3_SPBF_PUSCH_Set3                    0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band3_CONST_SPBF_Set3                    0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band3_TPBF_TEMP_THRES_Set3               65      // deg-C
#define  LTE_Band3_TPBF_LOW_TEMP_THRES_Set3           (-20)   // deg-C
#define  LTE_Band3_TPBF_PWR_THRES_Set3                (19*32) // 1/32dB
#define  LTE_Band3_TPBF_APT_MODE_Set3                 16      // 1/32dB
#define  LTE_Band3_TPBF_ET_MODE_Set3                  16      // 1/32dB
#define  LTE_Band3_TPBF_DPD_MODE_Set3                 16      // 1/32dB
#define  LTE_Band3_TPBF_NT_RB_THRES_Set3              2       // RB
#define  LTE_Band3_TPBF_NT_APT_MODE_Set3              0       // 1/32dB
#define  LTE_Band3_TPBF_NT_ET_MODE_Set3               0       // 1/32dB
#define  LTE_Band3_TPBF_NT_DPD_MODE_Set3              0       // 1/32dB

//* --------------- BAND4 Start ------------------------------------------------------------*/
#define  LTE_Band4_SPBF_QPSK_Set3                     0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band4_SPBF_16QAM_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band4_SPBF_64QAM_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band4_SPBF_PUSCH_RB_THRES_Set3           2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band4_SPBF_PUSCH_Set3                    0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band4_CONST_SPBF_Set3                    0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band4_TPBF_TEMP_THRES_Set3               65      // deg-C
#define  LTE_Band4_TPBF_LOW_TEMP_THRES_Set3           (-20)   // deg-C
#define  LTE_Band4_TPBF_PWR_THRES_Set3                (19*32) // 1/32dB
#define  LTE_Band4_TPBF_APT_MODE_Set3                 16      // 1/32dB
#define  LTE_Band4_TPBF_ET_MODE_Set3                  16      // 1/32dB
#define  LTE_Band4_TPBF_DPD_MODE_Set3                 16      // 1/32dB
#define  LTE_Band4_TPBF_NT_RB_THRES_Set3              2       // RB
#define  LTE_Band4_TPBF_NT_APT_MODE_Set3              0       // 1/32dB
#define  LTE_Band4_TPBF_NT_ET_MODE_Set3               0       // 1/32dB
#define  LTE_Band4_TPBF_NT_DPD_MODE_Set3              0       // 1/32dB

//* --------------- BAND5 Start ------------------------------------------------------------*/
#define  LTE_Band5_SPBF_QPSK_Set3                     0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band5_SPBF_16QAM_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band5_SPBF_64QAM_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band5_SPBF_PUSCH_RB_THRES_Set3           2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band5_SPBF_PUSCH_Set3                    0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band5_CONST_SPBF_Set3                    0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band5_TPBF_TEMP_THRES_Set3               65      // deg-C
#define  LTE_Band5_TPBF_LOW_TEMP_THRES_Set3           (-20)   // deg-C
#define  LTE_Band5_TPBF_PWR_THRES_Set3                (19*32) // 1/32dB
#define  LTE_Band5_TPBF_APT_MODE_Set3                 16      // 1/32dB
#define  LTE_Band5_TPBF_ET_MODE_Set3                  16      // 1/32dB
#define  LTE_Band5_TPBF_DPD_MODE_Set3                 16      // 1/32dB
#define  LTE_Band5_TPBF_NT_RB_THRES_Set3              2       // RB
#define  LTE_Band5_TPBF_NT_APT_MODE_Set3              0       // 1/32dB
#define  LTE_Band5_TPBF_NT_ET_MODE_Set3               0       // 1/32dB
#define  LTE_Band5_TPBF_NT_DPD_MODE_Set3              0       // 1/32dB

//* --------------- BAND7 Start ------------------------------------------------------------*/
#define  LTE_Band7_SPBF_QPSK_Set3                     0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band7_SPBF_16QAM_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band7_SPBF_64QAM_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band7_SPBF_PUSCH_RB_THRES_Set3           2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band7_SPBF_PUSCH_Set3                    0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band7_CONST_SPBF_Set3                    0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band7_TPBF_TEMP_THRES_Set3               65      // deg-C
#define  LTE_Band7_TPBF_LOW_TEMP_THRES_Set3           (-20)   // deg-C
#define  LTE_Band7_TPBF_PWR_THRES_Set3                (19*32) // 1/32dB
#define  LTE_Band7_TPBF_APT_MODE_Set3                 16      // 1/32dB
#define  LTE_Band7_TPBF_ET_MODE_Set3                  16      // 1/32dB
#define  LTE_Band7_TPBF_DPD_MODE_Set3                 16      // 1/32dB
#define  LTE_Band7_TPBF_NT_RB_THRES_Set3              2       // RB
#define  LTE_Band7_TPBF_NT_APT_MODE_Set3              0       // 1/32dB
#define  LTE_Band7_TPBF_NT_ET_MODE_Set3               0       // 1/32dB
#define  LTE_Band7_TPBF_NT_DPD_MODE_Set3              0       // 1/32dB

//* --------------- BAND8 Start ------------------------------------------------------------*/
#define  LTE_Band8_SPBF_QPSK_Set3                     0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band8_SPBF_16QAM_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band8_SPBF_64QAM_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band8_SPBF_PUSCH_RB_THRES_Set3           2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band8_SPBF_PUSCH_Set3                    0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band8_CONST_SPBF_Set3                    0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band8_TPBF_TEMP_THRES_Set3               65      // deg-C
#define  LTE_Band8_TPBF_LOW_TEMP_THRES_Set3           (-20)   // deg-C
#define  LTE_Band8_TPBF_PWR_THRES_Set3                (19*32) // 1/32dB
#define  LTE_Band8_TPBF_APT_MODE_Set3                 16      // 1/32dB
#define  LTE_Band8_TPBF_ET_MODE_Set3                  16      // 1/32dB
#define  LTE_Band8_TPBF_DPD_MODE_Set3                 16      // 1/32dB
#define  LTE_Band8_TPBF_NT_RB_THRES_Set3              2       // RB
#define  LTE_Band8_TPBF_NT_APT_MODE_Set3              0       // 1/32dB
#define  LTE_Band8_TPBF_NT_ET_MODE_Set3               0       // 1/32dB
#define  LTE_Band8_TPBF_NT_DPD_MODE_Set3              0       // 1/32dB

//* --------------- BAND9 Start ------------------------------------------------------------*/
#define  LTE_Band9_SPBF_QPSK_Set3                     0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band9_SPBF_16QAM_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band9_SPBF_64QAM_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band9_SPBF_PUSCH_RB_THRES_Set3           2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band9_SPBF_PUSCH_Set3                    0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band9_CONST_SPBF_Set3                    0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band9_TPBF_TEMP_THRES_Set3               65      // deg-C
#define  LTE_Band9_TPBF_LOW_TEMP_THRES_Set3           (-20)   // deg-C
#define  LTE_Band9_TPBF_PWR_THRES_Set3                (19*32) // 1/32dB
#define  LTE_Band9_TPBF_APT_MODE_Set3                 16      // 1/32dB
#define  LTE_Band9_TPBF_ET_MODE_Set3                  16      // 1/32dB
#define  LTE_Band9_TPBF_DPD_MODE_Set3                 16      // 1/32dB
#define  LTE_Band9_TPBF_NT_RB_THRES_Set3              2       // RB
#define  LTE_Band9_TPBF_NT_APT_MODE_Set3              0       // 1/32dB
#define  LTE_Band9_TPBF_NT_ET_MODE_Set3               0       // 1/32dB
#define  LTE_Band9_TPBF_NT_DPD_MODE_Set3              0       // 1/32dB

//* --------------- BAND11 Start ------------------------------------------------------------*/
#define  LTE_Band11_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band11_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band11_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band11_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band11_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band11_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band11_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band11_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band11_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band11_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band11_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band11_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band11_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band11_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band11_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band11_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND12 Start ------------------------------------------------------------*/
#define  LTE_Band12_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band12_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band12_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band12_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band12_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band12_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band12_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band12_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band12_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band12_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band12_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band12_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band12_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band12_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band12_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band12_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND13 Start ------------------------------------------------------------*/
#define  LTE_Band13_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band13_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band13_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band13_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band13_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band13_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band13_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band13_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band13_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band13_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band13_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band13_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band13_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band13_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band13_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band13_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND14 Start ------------------------------------------------------------*/
#define  LTE_Band14_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band14_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band14_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band14_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band14_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band14_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band14_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band14_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band14_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band14_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band14_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band14_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band14_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band14_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band14_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band14_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND17 Start ------------------------------------------------------------*/
#define  LTE_Band17_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band17_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band17_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band17_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band17_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band17_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band17_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band17_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band17_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band17_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band17_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band17_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band17_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band17_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band17_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band17_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND18 Start ------------------------------------------------------------*/
#define  LTE_Band18_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band18_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band18_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band18_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band18_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band18_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band18_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band18_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band18_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band18_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band18_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band18_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band18_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band18_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band18_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band18_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND19 Start ------------------------------------------------------------*/
#define  LTE_Band19_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band19_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band19_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band19_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band19_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band19_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band19_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band19_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band19_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band19_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band19_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band19_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band19_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band19_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band19_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band19_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND20 Start ------------------------------------------------------------*/
#define  LTE_Band20_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band20_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band20_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band20_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band20_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band20_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band20_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band20_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band20_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band20_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band20_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band20_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band20_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band20_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band20_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band20_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND21 Start ------------------------------------------------------------*/
#define  LTE_Band21_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band21_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band21_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band21_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band21_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band21_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band21_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band21_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band21_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band21_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band21_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band21_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band21_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band21_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band21_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band21_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND22 Start ------------------------------------------------------------*/
#define  LTE_Band22_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band22_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band22_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band22_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band22_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band22_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band22_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band22_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band22_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band22_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band22_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band22_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band22_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band22_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band22_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band22_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND23 Start ------------------------------------------------------------*/
#define  LTE_Band23_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band23_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band23_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band23_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band23_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band23_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band23_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band23_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band23_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band23_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band23_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band23_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band23_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band23_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band23_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band23_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND25 Start ------------------------------------------------------------*/
#define  LTE_Band25_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band25_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band25_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band25_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band25_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band25_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band25_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band25_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band25_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band25_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band25_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band25_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band25_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band25_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band25_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band25_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND26 Start ------------------------------------------------------------*/
#define  LTE_Band26_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band26_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band26_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band26_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band26_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band26_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band26_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band26_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band26_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band26_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band26_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band26_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band26_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band26_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band26_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band26_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND27 Start ------------------------------------------------------------*/
#define  LTE_Band27_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band27_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band27_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band27_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band27_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band27_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band27_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band27_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band27_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band27_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band27_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band27_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band27_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band27_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band27_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band27_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND28 Start ------------------------------------------------------------*/
#define  LTE_Band28_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band28_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band28_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band28_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band28_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band28_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band28_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band28_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band28_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band28_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band28_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band28_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band28_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band28_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band28_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band28_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND29 Start ------------------------------------------------------------*/
#define  LTE_Band29_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band29_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band29_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band29_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band29_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band29_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band29_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band29_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band29_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band29_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band29_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band29_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band29_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band29_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band29_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band29_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND30 Start ------------------------------------------------------------*/
#define  LTE_Band30_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band30_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band30_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band30_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band30_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band30_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band30_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band30_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band30_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band30_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band30_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band30_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band30_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band30_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band30_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band30_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND32 Start ------------------------------------------------------------*/
#define  LTE_Band32_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band32_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band32_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band32_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band32_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band32_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band32_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band32_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band32_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band32_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band32_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band32_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band32_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band32_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band32_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band32_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND34 Start ------------------------------------------------------------*/
#define  LTE_Band34_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band34_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band34_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band34_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band34_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band34_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band34_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band34_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band34_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band34_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band34_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band34_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band34_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band34_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band34_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band34_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND38 Start ------------------------------------------------------------*/
#define  LTE_Band38_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band38_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band38_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band38_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band38_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band38_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band38_TPBF_TEMP_THRES_Set3              65     // deg-C
#define  LTE_Band38_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band38_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band38_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band38_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band38_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band38_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band38_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band38_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band38_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND39 Start ------------------------------------------------------------*/
#define  LTE_Band39_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band39_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band39_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band39_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band39_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band39_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band39_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band39_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band39_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band39_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band39_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band39_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band39_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band39_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band39_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band39_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND40 Start ------------------------------------------------------------*/
#define  LTE_Band40_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band40_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band40_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band40_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band40_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band40_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band40_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band40_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band40_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band40_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band40_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band40_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band40_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band40_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band40_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band40_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND41 Start ------------------------------------------------------------*/
#define  LTE_Band41_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band41_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band41_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band41_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band41_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band41_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band41_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band41_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band41_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band41_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band41_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band41_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band41_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band41_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band41_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band41_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND42 Start ------------------------------------------------------------*/
#define  LTE_Band42_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band42_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band42_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band42_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band42_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band42_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band42_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band42_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band42_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band42_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band42_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band42_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band42_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band42_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band42_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band42_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND43 Start ------------------------------------------------------------*/
#define  LTE_Band43_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band43_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band43_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band43_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band43_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band43_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band43_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band43_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band43_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band43_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band43_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band43_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band43_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band43_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band43_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band43_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND44 Start ------------------------------------------------------------*/
#define  LTE_Band44_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band44_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band44_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band44_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band44_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band44_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band44_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band44_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band44_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band44_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band44_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band44_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band44_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band44_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band44_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band44_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND66 Start ------------------------------------------------------------*/
#define  LTE_Band66_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band66_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band66_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band66_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band66_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band66_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band66_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band66_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band66_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band66_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band66_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band66_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band66_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band66_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band66_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band66_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND71 Start ------------------------------------------------------------*/
#define  LTE_Band71_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band71_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band71_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band71_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band71_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band71_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band71_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band71_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band71_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band71_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band71_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band71_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band71_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band71_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band71_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band71_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND252 Start ------------------------------------------------------------*/
#define  LTE_Band252_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band252_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band252_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band252_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band252_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band252_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band252_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band252_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band252_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band252_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band252_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band252_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band252_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band252_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band252_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band252_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

//* --------------- BAND255 Start ------------------------------------------------------------*/
#define  LTE_Band255_SPBF_QPSK_Set3                    0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band255_SPBF_16QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band255_SPBF_64QAM_Set3                   0       // 0 ~ 7*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band255_SPBF_PUSCH_RB_THRES_Set3          2       // 1 ~ 8 (RB, unsigned integer, default: 2)
#define  LTE_Band255_SPBF_PUSCH_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)
#define  LTE_Band255_CONST_SPBF_Set3                   0       // 0 ~ 15*32 (unit: 1/32dB, unsigned integer, default: 0)

#define  LTE_Band255_TPBF_TEMP_THRES_Set3              65      // deg-C
#define  LTE_Band255_TPBF_LOW_TEMP_THRES_Set3          (-20)   // deg-C
#define  LTE_Band255_TPBF_PWR_THRES_Set3               (19*32) // 1/32dB
#define  LTE_Band255_TPBF_APT_MODE_Set3                16      // 1/32dB
#define  LTE_Band255_TPBF_ET_MODE_Set3                 16      // 1/32dB
#define  LTE_Band255_TPBF_DPD_MODE_Set3                16      // 1/32dB
#define  LTE_Band255_TPBF_NT_RB_THRES_Set3             2       // RB
#define  LTE_Band255_TPBF_NT_APT_MODE_Set3             0       // 1/32dB
#define  LTE_Band255_TPBF_NT_ET_MODE_Set3              0       // 1/32dB
#define  LTE_Band255_TPBF_NT_DPD_MODE_Set3             0       // 1/32dB

/*******Multi-cluster Vcc Offset**********************************/
#define LTE_MC_VCC_OFS_Set3                   0
/****** Start of Band None Multi-cluster Vcc index offset ******/
#define LTE_BandNone_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_BandNone_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_BandNone_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_BandNone_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_BandNone_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_BandNone_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_BandNone_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_BandNone_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_BandNone_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_BandNone_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_BandNone_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_BandNone_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_BandNone_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_BandNone_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_BandNone_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_BandNone_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 1 Multi-cluster Vcc index offset ******/
#define LTE_Band1_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band1_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band1_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band1_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band1_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band1_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band1_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band1_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band1_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band1_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band1_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band1_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band1_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band1_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band1_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band1_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 2 Multi-cluster Vcc index offset ******/
#define LTE_Band2_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band2_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band2_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band2_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band2_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band2_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band2_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band2_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band2_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band2_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band2_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band2_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band2_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band2_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band2_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band2_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 3 Multi-cluster Vcc index offset ******/
#define LTE_Band3_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band3_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band3_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band3_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band3_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band3_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band3_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band3_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band3_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band3_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band3_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band3_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band3_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band3_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band3_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band3_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 4 Multi-cluster Vcc index offset ******/
#define LTE_Band4_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band4_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band4_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band4_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band4_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band4_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band4_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band4_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band4_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band4_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band4_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band4_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band4_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band4_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band4_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band4_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 5 Multi-cluster Vcc index offset ******/
#define LTE_Band5_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band5_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band5_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band5_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band5_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band5_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band5_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band5_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band5_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band5_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band5_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band5_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band5_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band5_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band5_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band5_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 6 Multi-cluster Vcc index offset ******/
#define LTE_Band6_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band6_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band6_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band6_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band6_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band6_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band6_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band6_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band6_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band6_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band6_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band6_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band6_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band6_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band6_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band6_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 7 Multi-cluster Vcc index offset ******/
#define LTE_Band7_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band7_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band7_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band7_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band7_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band7_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band7_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band7_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band7_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band7_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band7_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band7_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band7_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band7_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band7_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band7_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 8 Multi-cluster Vcc index offset ******/
#define LTE_Band8_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band8_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band8_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band8_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band8_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band8_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band8_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band8_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band8_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band8_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band8_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band8_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band8_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band8_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band8_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band8_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 9 Multi-cluster Vcc index offset ******/
#define LTE_Band9_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band9_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band9_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band9_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band9_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band9_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band9_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band9_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band9_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band9_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band9_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band9_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band9_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band9_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band9_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band9_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 10 Multi-cluster Vcc index offset ******/
#define LTE_Band10_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band10_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band10_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band10_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band10_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band10_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band10_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band10_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band10_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band10_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band10_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band10_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band10_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band10_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band10_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band10_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 11 Multi-cluster Vcc index offset ******/
#define LTE_Band11_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band11_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band11_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band11_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band11_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band11_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band11_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band11_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band11_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band11_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band11_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band11_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band11_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band11_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band11_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band11_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 12 Multi-cluster Vcc index offset ******/
#define LTE_Band12_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band12_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band12_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band12_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band12_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band12_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band12_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band12_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band12_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band12_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band12_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band12_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band12_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band12_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band12_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band12_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 13 Multi-cluster Vcc index offset ******/
#define LTE_Band13_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band13_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band13_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band13_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band13_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band13_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band13_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band13_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band13_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band13_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band13_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band13_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band13_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band13_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band13_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band13_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 14 Multi-cluster Vcc index offset ******/
#define LTE_Band14_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band14_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band14_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band14_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band14_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band14_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band14_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band14_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band14_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band14_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band14_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band14_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band14_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band14_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band14_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band14_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 17 Multi-cluster Vcc index offset ******/
#define LTE_Band17_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band17_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band17_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band17_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band17_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band17_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band17_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band17_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band17_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band17_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band17_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band17_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band17_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band17_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band17_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band17_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 18 Multi-cluster Vcc index offset ******/
#define LTE_Band18_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band18_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band18_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band18_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band18_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band18_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band18_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band18_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band18_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band18_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band18_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band18_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band18_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band18_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band18_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band18_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 19 Multi-cluster Vcc index offset ******/
#define LTE_Band19_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band19_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band19_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band19_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band19_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band19_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band19_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band19_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band19_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band19_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band19_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band19_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band19_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band19_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band19_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band19_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 20 Multi-cluster Vcc index offset ******/
#define LTE_Band20_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band20_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band20_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band20_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band20_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band20_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band20_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band20_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band20_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band20_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band20_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band20_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band20_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band20_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band20_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band20_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 21 Multi-cluster Vcc index offset ******/
#define LTE_Band21_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band21_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band21_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band21_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band21_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band21_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band21_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band21_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band21_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band21_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band21_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band21_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band21_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band21_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band21_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band21_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 22 Multi-cluster Vcc index offset ******/
#define LTE_Band22_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band22_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band22_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band22_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band22_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band22_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band22_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band22_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band22_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band22_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band22_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band22_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band22_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band22_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band22_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band22_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 23 Multi-cluster Vcc index offset ******/
#define LTE_Band23_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band23_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band23_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band23_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band23_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band23_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band23_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band23_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band23_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band23_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band23_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band23_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band23_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band23_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band23_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band23_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 24 Multi-cluster Vcc index offset ******/
#define LTE_Band24_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band24_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band24_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band24_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band24_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band24_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band24_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band24_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band24_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band24_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band24_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band24_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band24_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band24_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band24_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band24_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 25 Multi-cluster Vcc index offset ******/
#define LTE_Band25_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band25_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band25_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band25_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band25_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band25_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band25_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band25_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band25_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band25_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band25_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band25_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band25_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band25_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band25_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band25_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 26 Multi-cluster Vcc index offset ******/
#define LTE_Band26_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band26_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band26_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band26_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band26_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band26_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band26_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band26_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band26_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band26_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band26_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band26_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band26_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band26_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band26_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band26_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 27 Multi-cluster Vcc index offset ******/
#define LTE_Band27_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band27_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band27_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band27_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band27_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band27_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band27_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band27_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band27_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band27_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band27_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band27_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band27_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band27_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band27_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band27_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 28 Multi-cluster Vcc index offset ******/
#define LTE_Band28_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band28_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band28_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band28_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band28_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band28_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band28_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band28_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band28_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band28_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band28_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band28_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band28_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band28_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band28_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band28_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 29 Multi-cluster Vcc index offset ******/
#define LTE_Band29_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band29_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band29_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band29_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band29_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band29_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band29_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band29_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band29_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band29_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band29_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band29_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band29_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band29_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band29_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band29_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 30 Multi-cluster Vcc index offset ******/
#define LTE_Band30_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band30_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band30_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band30_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band30_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band30_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band30_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band30_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band30_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band30_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band30_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band30_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band30_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band30_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band30_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band30_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 32 Multi-cluster Vcc index offset ******/
#define LTE_Band32_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band32_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band32_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band32_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band32_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band32_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band32_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band32_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band32_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band32_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band32_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band32_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band32_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band32_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band32_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band32_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 33 Multi-cluster Vcc index offset ******/
#define LTE_Band33_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band33_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band33_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band33_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band33_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band33_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band33_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band33_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band33_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band33_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band33_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band33_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band33_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band33_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band33_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band33_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 34 Multi-cluster Vcc index offset ******/
#define LTE_Band34_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band34_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band34_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band34_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band34_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band34_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band34_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band34_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band34_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band34_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band34_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band34_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band34_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band34_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band34_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band34_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 35 Multi-cluster Vcc index offset ******/
#define LTE_Band35_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band35_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band35_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band35_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band35_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band35_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band35_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band35_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band35_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band35_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band35_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band35_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band35_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band35_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band35_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band35_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 36 Multi-cluster Vcc index offset ******/
#define LTE_Band36_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band36_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band36_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band36_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band36_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band36_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band36_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band36_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band36_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band36_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band36_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band36_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band36_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band36_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band36_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band36_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 37 Multi-cluster Vcc index offset ******/
#define LTE_Band37_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band37_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band37_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band37_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band37_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band37_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band37_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band37_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band37_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band37_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band37_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band37_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band37_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band37_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band37_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band37_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 38 Multi-cluster Vcc index offset ******/
#define LTE_Band38_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band38_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band38_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band38_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band38_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band38_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band38_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band38_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band38_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band38_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band38_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band38_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band38_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band38_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band38_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band38_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 39 Multi-cluster Vcc index offset ******/
#define LTE_Band39_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band39_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band39_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band39_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band39_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band39_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band39_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band39_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band39_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band39_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band39_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band39_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band39_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band39_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band39_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band39_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 40 Multi-cluster Vcc index offset ******/
#define LTE_Band40_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band40_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band40_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band40_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band40_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band40_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band40_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band40_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band40_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band40_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band40_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band40_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band40_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band40_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band40_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band40_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 41 Multi-cluster Vcc index offset ******/
#define LTE_Band41_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band41_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band41_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band41_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band41_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band41_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band41_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band41_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band41_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band41_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band41_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band41_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band41_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band41_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band41_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band41_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 42 Multi-cluster Vcc index offset ******/
#define LTE_Band42_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band42_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band42_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band42_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band42_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band42_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band42_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band42_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band42_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band42_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band42_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band42_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band42_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band42_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band42_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band42_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 43 Multi-cluster Vcc index offset ******/
#define LTE_Band43_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band43_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band43_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band43_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band43_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band43_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band43_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band43_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band43_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band43_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band43_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band43_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band43_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band43_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band43_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band43_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 44 Multi-cluster Vcc index offset ******/
#define LTE_Band44_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band44_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band44_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band44_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band44_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band44_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band44_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band44_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band44_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band44_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band44_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band44_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band44_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band44_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band44_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band44_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 66 Multi-cluster Vcc index offset ******/
#define LTE_Band66_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band66_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band66_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band66_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band66_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band66_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band66_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band66_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band66_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band66_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band66_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band66_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band66_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band66_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band66_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band66_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 71 Multi-cluster Vcc index offset ******/
#define LTE_Band71_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band71_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band71_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band71_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band71_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band71_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band71_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band71_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band71_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band71_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band71_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band71_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band71_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band71_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band71_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band71_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 252 Multi-cluster Vcc index offset ******/
#define LTE_Band252_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band252_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band252_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band252_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band252_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band252_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band252_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band252_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band252_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band252_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band252_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band252_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band252_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band252_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band252_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band252_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/****** Start of Band 255 Multi-cluster Vcc index offset ******/
#define LTE_Band255_MC_VCC_OFS_APT_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band255_MC_VCC_OFS_APT_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band255_MC_VCC_OFS_APT_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band255_MC_VCC_OFS_APT_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band255_MC_VCC_OFS_APT_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band255_MC_VCC_OFS_APT_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band255_MC_VCC_OFS_APT_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band255_MC_VCC_OFS_APT_LV7_Set3  LTE_MC_VCC_OFS_Set3

#define LTE_Band255_MC_VCC_OFS_DPD_LV0_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band255_MC_VCC_OFS_DPD_LV1_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band255_MC_VCC_OFS_DPD_LV2_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band255_MC_VCC_OFS_DPD_LV3_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band255_MC_VCC_OFS_DPD_LV4_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band255_MC_VCC_OFS_DPD_LV5_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band255_MC_VCC_OFS_DPD_LV6_Set3  LTE_MC_VCC_OFS_Set3
#define LTE_Band255_MC_VCC_OFS_DPD_LV7_Set3  LTE_MC_VCC_OFS_Set3

/*******Multi-cluster POW Backoff Offset**********************************/
#define LTE_MC_POW_BF_Set3               {0,0,0,0,0,999} /* 5M, 10M, 15M, 20M, CCA, Reserved*/
/****** Start of Band None Multi-cluster Vcc index offset ******/
#define LTE_BandNone_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_BandNone_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_BandNone_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 1 Multi-cluster Vcc index offset ******/
#define LTE_Band1_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band1_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band1_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 2 Multi-cluster Vcc index offset ******/
#define LTE_Band2_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band2_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band2_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 3 Multi-cluster Vcc index offset ******/
#define LTE_Band3_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band3_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band3_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 4 Multi-cluster Vcc index offset ******/
#define LTE_Band4_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band4_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band4_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 5 Multi-cluster Vcc index offset ******/
#define LTE_Band5_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band5_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band5_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 6 Multi-cluster Vcc index offset ******/
#define LTE_Band6_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band6_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band6_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 7 Multi-cluster Vcc index offset ******/
#define LTE_Band7_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band7_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band7_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 8 Multi-cluster Vcc index offset ******/
#define LTE_Band8_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band8_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band8_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 9 Multi-cluster Vcc index offset ******/
#define LTE_Band9_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band9_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band9_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 10 Multi-cluster Vcc index offset ******/
#define LTE_Band10_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band10_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band10_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 11 Multi-cluster Vcc index offset ******/
#define LTE_Band11_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band11_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band11_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 12 Multi-cluster Vcc index offset ******/
#define LTE_Band12_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band12_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band12_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 13 Multi-cluster Vcc index offset ******/
#define LTE_Band13_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band13_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band13_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 14 Multi-cluster Vcc index offset ******/
#define LTE_Band14_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band14_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band14_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 17 Multi-cluster Vcc index offset ******/
#define LTE_Band17_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band17_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band17_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 18 Multi-cluster Vcc index offset ******/
#define LTE_Band18_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band18_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band18_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 19 Multi-cluster Vcc index offset ******/
#define LTE_Band19_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band19_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band19_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 20 Multi-cluster Vcc index offset ******/
#define LTE_Band20_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band20_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band20_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 21 Multi-cluster Vcc index offset ******/
#define LTE_Band21_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band21_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band21_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 22 Multi-cluster Vcc index offset ******/
#define LTE_Band22_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band22_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band22_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 23 Multi-cluster Vcc index offset ******/
#define LTE_Band23_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band23_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band23_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 24 Multi-cluster Vcc index offset ******/
#define LTE_Band24_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band24_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band24_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 25 Multi-cluster Vcc index offset ******/
#define LTE_Band25_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band25_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band25_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 26 Multi-cluster Vcc index offset ******/
#define LTE_Band26_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band26_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band26_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 27 Multi-cluster Vcc index offset ******/
#define LTE_Band27_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band27_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band27_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 28 Multi-cluster Vcc index offset ******/
#define LTE_Band28_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band28_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band28_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 29 Multi-cluster Vcc index offset ******/
#define LTE_Band29_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band29_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band29_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 30 Multi-cluster Vcc index offset ******/
#define LTE_Band30_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band30_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band30_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 32 Multi-cluster Vcc index offset ******/
#define LTE_Band32_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band32_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band32_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 33 Multi-cluster Vcc index offset ******/
#define LTE_Band33_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band33_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band33_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 34 Multi-cluster Vcc index offset ******/
#define LTE_Band34_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band34_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band34_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 35 Multi-cluster Vcc index offset ******/
#define LTE_Band35_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band35_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band35_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 36 Multi-cluster Vcc index offset ******/
#define LTE_Band36_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band36_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band36_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 37 Multi-cluster Vcc index offset ******/
#define LTE_Band37_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band37_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band37_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band37_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 38 Multi-cluster Vcc index offset ******/
#define LTE_Band38_MC_POW_BF_APT_Set3  {0,0,0,320,0,999}

#define LTE_Band38_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band38_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 39 Multi-cluster Vcc index offset ******/
#define LTE_Band39_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band39_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band39_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 40 Multi-cluster Vcc index offset ******/
#define LTE_Band40_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band40_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band40_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 41 Multi-cluster Vcc index offset ******/
#define LTE_Band41_MC_POW_BF_APT_Set3  {0,0,0,192,0,999}

#define LTE_Band41_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band41_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 42 Multi-cluster Vcc index offset ******/
#define LTE_Band42_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band42_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band42_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 43 Multi-cluster Vcc index offset ******/
#define LTE_Band43_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band43_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band43_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 44 Multi-cluster Vcc index offset ******/
#define LTE_Band44_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band44_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band44_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 66 Multi-cluster Vcc index offset ******/
#define LTE_Band66_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band66_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band66_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 71 Multi-cluster Vcc index offset ******/
#define LTE_Band71_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band71_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band71_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 252 Multi-cluster Vcc index offset ******/
#define LTE_Band252_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band252_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band252_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/****** Start of Band 255 Multi-cluster Vcc index offset ******/
#define LTE_Band255_MC_POW_BF_APT_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band255_MC_POW_BF_DPD_Set3  LTE_MC_POW_BF_Set3

#define LTE_Band255_MC_POW_BF_ET_Set3  LTE_MC_POW_BF_Set3

/*--------------------------------------------------------------*/
/*                TX Power Conditional Backoff                  */
/*--------------------------------------------------------------*/
#define  LTE_TX_CONDI_BF_TBL0_SPBF_APT_Set3            192
#define  LTE_TX_CONDI_BF_TBL0_SPBF_ET_Set3             0
#define  LTE_TX_CONDI_BF_TBL0_SPBF_DPD_Set3            0
#define  LTE_TX_CONDI_BF_TBL0_NT_PWR_THRES_Set3        0
#define  LTE_TX_CONDI_BF_TBL0_NT_PWR_BF_APT_Set3       0
#define  LTE_TX_CONDI_BF_TBL0_NT_PWR_BF_ET_Set3        0
#define  LTE_TX_CONDI_BF_TBL0_NT_PWR_BF_DPD_Set3       0

#define  LTE_TX_CONDI_BF_TBL1_SPBF_APT_Set3            192
#define  LTE_TX_CONDI_BF_TBL1_SPBF_ET_Set3             0
#define  LTE_TX_CONDI_BF_TBL1_SPBF_DPD_Set3            192
#define  LTE_TX_CONDI_BF_TBL1_NT_PWR_THRES_Set3        0
#define  LTE_TX_CONDI_BF_TBL1_NT_PWR_BF_APT_Set3       96
#define  LTE_TX_CONDI_BF_TBL1_NT_PWR_BF_ET_Set3        0
#define  LTE_TX_CONDI_BF_TBL1_NT_PWR_BF_DPD_Set3       96

#define  LTE_TX_CONDI_BF_TBL2_SPBF_APT_Set3            192
#define  LTE_TX_CONDI_BF_TBL2_SPBF_ET_Set3             0
#define  LTE_TX_CONDI_BF_TBL2_SPBF_DPD_Set3            192
#define  LTE_TX_CONDI_BF_TBL2_NT_PWR_THRES_Set3        0
#define  LTE_TX_CONDI_BF_TBL2_NT_PWR_BF_APT_Set3       32
#define  LTE_TX_CONDI_BF_TBL2_NT_PWR_BF_ET_Set3        0
#define  LTE_TX_CONDI_BF_TBL2_NT_PWR_BF_DPD_Set3       32

#define  LTE_TX_CONDI_BF_TBL3_SPBF_APT_Set3            96
#define  LTE_TX_CONDI_BF_TBL3_SPBF_ET_Set3             0
#define  LTE_TX_CONDI_BF_TBL3_SPBF_DPD_Set3            96
#define  LTE_TX_CONDI_BF_TBL3_NT_PWR_THRES_Set3        0
#define  LTE_TX_CONDI_BF_TBL3_NT_PWR_BF_APT_Set3       0
#define  LTE_TX_CONDI_BF_TBL3_NT_PWR_BF_ET_Set3        0
#define  LTE_TX_CONDI_BF_TBL3_NT_PWR_BF_DPD_Set3       0

#define  LTE_TX_CONDI_BF_TBL4_SPBF_APT_Set3            192
#define  LTE_TX_CONDI_BF_TBL4_SPBF_ET_Set3             0
#define  LTE_TX_CONDI_BF_TBL4_SPBF_DPD_Set3            0
#define  LTE_TX_CONDI_BF_TBL4_NT_PWR_THRES_Set3        0
#define  LTE_TX_CONDI_BF_TBL4_NT_PWR_BF_APT_Set3       0
#define  LTE_TX_CONDI_BF_TBL4_NT_PWR_BF_ET_Set3        0
#define  LTE_TX_CONDI_BF_TBL4_NT_PWR_BF_DPD_Set3       0

#define  LTE_TX_CONDI_BF_TBL5_SPBF_APT_Set3            0
#define  LTE_TX_CONDI_BF_TBL5_SPBF_ET_Set3             0
#define  LTE_TX_CONDI_BF_TBL5_SPBF_DPD_Set3            0
#define  LTE_TX_CONDI_BF_TBL5_NT_PWR_THRES_Set3        0
#define  LTE_TX_CONDI_BF_TBL5_NT_PWR_BF_APT_Set3       32
#define  LTE_TX_CONDI_BF_TBL5_NT_PWR_BF_ET_Set3        0
#define  LTE_TX_CONDI_BF_TBL5_NT_PWR_BF_DPD_Set3       32

//* ------------- BAND None Start ----------------------------------------------------------*/
#define  LTE_BandNone_TXBF_CONDI_0_NS_Set3            0
#define  LTE_BandNone_TXBF_CONDI_0_BW_Set3            LTE_BANDWIDTH_INVALID
#define  LTE_BandNone_TXBF_CONDI_0_RB_LEN_Set3        1
#define  LTE_BandNone_TXBF_CONDI_0_RB_START_Set3      0
#define  LTE_BandNone_TXBF_CONDI_0_TBL_IDX_Set3       LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_BandNone_TXBF_CONDI_1_NS_Set3            0
#define  LTE_BandNone_TXBF_CONDI_1_BW_Set3            LTE_BANDWIDTH_INVALID
#define  LTE_BandNone_TXBF_CONDI_1_RB_LEN_Set3        1
#define  LTE_BandNone_TXBF_CONDI_1_RB_START_Set3      0
#define  LTE_BandNone_TXBF_CONDI_1_TBL_IDX_Set3       LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_BandNone_TXBF_CONDI_2_NS_Set3            0
#define  LTE_BandNone_TXBF_CONDI_2_BW_Set3            LTE_BANDWIDTH_INVALID
#define  LTE_BandNone_TXBF_CONDI_2_RB_LEN_Set3        1
#define  LTE_BandNone_TXBF_CONDI_2_RB_START_Set3      0
#define  LTE_BandNone_TXBF_CONDI_2_TBL_IDX_Set3       LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_BandNone_TXBF_CONDI_3_NS_Set3            0
#define  LTE_BandNone_TXBF_CONDI_3_BW_Set3            LTE_BANDWIDTH_INVALID
#define  LTE_BandNone_TXBF_CONDI_3_RB_LEN_Set3        1
#define  LTE_BandNone_TXBF_CONDI_3_RB_START_Set3      0
#define  LTE_BandNone_TXBF_CONDI_3_TBL_IDX_Set3       LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_BandNone_TXBF_CONDI_4_NS_Set3            0
#define  LTE_BandNone_TXBF_CONDI_4_BW_Set3            LTE_BANDWIDTH_INVALID
#define  LTE_BandNone_TXBF_CONDI_4_RB_LEN_Set3        1
#define  LTE_BandNone_TXBF_CONDI_4_RB_START_Set3      0
#define  LTE_BandNone_TXBF_CONDI_4_TBL_IDX_Set3       LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_BandNone_TXBF_CONDI_5_NS_Set3            0
#define  LTE_BandNone_TXBF_CONDI_5_BW_Set3            LTE_BANDWIDTH_INVALID
#define  LTE_BandNone_TXBF_CONDI_5_RB_LEN_Set3        1
#define  LTE_BandNone_TXBF_CONDI_5_RB_START_Set3      0
#define  LTE_BandNone_TXBF_CONDI_5_TBL_IDX_Set3       LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_BandNone_TXBF_CONDI_6_NS_Set3            0
#define  LTE_BandNone_TXBF_CONDI_6_BW_Set3            LTE_BANDWIDTH_INVALID
#define  LTE_BandNone_TXBF_CONDI_6_RB_LEN_Set3        1
#define  LTE_BandNone_TXBF_CONDI_6_RB_START_Set3      0
#define  LTE_BandNone_TXBF_CONDI_6_TBL_IDX_Set3       LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_BandNone_TXBF_CONDI_7_NS_Set3            0
#define  LTE_BandNone_TXBF_CONDI_7_BW_Set3            LTE_BANDWIDTH_INVALID
#define  LTE_BandNone_TXBF_CONDI_7_RB_LEN_Set3        1
#define  LTE_BandNone_TXBF_CONDI_7_RB_START_Set3      0
#define  LTE_BandNone_TXBF_CONDI_7_TBL_IDX_Set3       LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND1 Start ------------------------------------------------------------*/
#define  LTE_Band1_TXBF_CONDI_0_NS_Set3               5
#define  LTE_Band1_TXBF_CONDI_0_BW_Set3               LTE_BANDWIDTH_15M
#define  LTE_Band1_TXBF_CONDI_0_RB_LEN_Set3           1
#define  LTE_Band1_TXBF_CONDI_0_RB_START_Set3         74
#define  LTE_Band1_TXBF_CONDI_0_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL1

#define  LTE_Band1_TXBF_CONDI_1_NS_Set3               0
#define  LTE_Band1_TXBF_CONDI_1_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band1_TXBF_CONDI_1_RB_LEN_Set3           1
#define  LTE_Band1_TXBF_CONDI_1_RB_START_Set3         0
#define  LTE_Band1_TXBF_CONDI_1_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band1_TXBF_CONDI_2_NS_Set3               5
#define  LTE_Band1_TXBF_CONDI_2_BW_Set3               LTE_BANDWIDTH_20M
#define  LTE_Band1_TXBF_CONDI_2_RB_LEN_Set3           24
#define  LTE_Band1_TXBF_CONDI_2_RB_START_Set3         76
#define  LTE_Band1_TXBF_CONDI_2_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL0

#define  LTE_Band1_TXBF_CONDI_3_NS_Set3               5
#define  LTE_Band1_TXBF_CONDI_3_BW_Set3               LTE_BANDWIDTH_15M
#define  LTE_Band1_TXBF_CONDI_3_RB_LEN_Set3           6
#define  LTE_Band1_TXBF_CONDI_3_RB_START_Set3         69
#define  LTE_Band1_TXBF_CONDI_3_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL0

#define  LTE_Band1_TXBF_CONDI_4_NS_Set3               5
#define  LTE_Band1_TXBF_CONDI_4_BW_Set3               LTE_BANDWIDTH_15M
#define  LTE_Band1_TXBF_CONDI_4_RB_LEN_Set3           8
#define  LTE_Band1_TXBF_CONDI_4_RB_START_Set3         67
#define  LTE_Band1_TXBF_CONDI_4_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL2

#define  LTE_Band1_TXBF_CONDI_5_NS_Set3               5
#define  LTE_Band1_TXBF_CONDI_5_BW_Set3               LTE_BANDWIDTH_20M
#define  LTE_Band1_TXBF_CONDI_5_RB_LEN_Set3           1
#define  LTE_Band1_TXBF_CONDI_5_RB_START_Set3         99
#define  LTE_Band1_TXBF_CONDI_5_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL0

#define  LTE_Band1_TXBF_CONDI_6_NS_Set3               0
#define  LTE_Band1_TXBF_CONDI_6_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band1_TXBF_CONDI_6_RB_LEN_Set3           1
#define  LTE_Band1_TXBF_CONDI_6_RB_START_Set3         0
#define  LTE_Band1_TXBF_CONDI_6_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band1_TXBF_CONDI_7_NS_Set3               0
#define  LTE_Band1_TXBF_CONDI_7_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band1_TXBF_CONDI_7_RB_LEN_Set3           1
#define  LTE_Band1_TXBF_CONDI_7_RB_START_Set3         0
#define  LTE_Band1_TXBF_CONDI_7_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND2 Start ------------------------------------------------------------*/
#define  LTE_Band2_TXBF_CONDI_0_NS_Set3               0
#define  LTE_Band2_TXBF_CONDI_0_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band2_TXBF_CONDI_0_RB_LEN_Set3           1
#define  LTE_Band2_TXBF_CONDI_0_RB_START_Set3         0
#define  LTE_Band2_TXBF_CONDI_0_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band2_TXBF_CONDI_1_NS_Set3               0
#define  LTE_Band2_TXBF_CONDI_1_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band2_TXBF_CONDI_1_RB_LEN_Set3           1
#define  LTE_Band2_TXBF_CONDI_1_RB_START_Set3         0
#define  LTE_Band2_TXBF_CONDI_1_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band2_TXBF_CONDI_2_NS_Set3               0
#define  LTE_Band2_TXBF_CONDI_2_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band2_TXBF_CONDI_2_RB_LEN_Set3           1
#define  LTE_Band2_TXBF_CONDI_2_RB_START_Set3         0
#define  LTE_Band2_TXBF_CONDI_2_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band2_TXBF_CONDI_3_NS_Set3               0
#define  LTE_Band2_TXBF_CONDI_3_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band2_TXBF_CONDI_3_RB_LEN_Set3           1
#define  LTE_Band2_TXBF_CONDI_3_RB_START_Set3         0
#define  LTE_Band2_TXBF_CONDI_3_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band2_TXBF_CONDI_4_NS_Set3               0
#define  LTE_Band2_TXBF_CONDI_4_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band2_TXBF_CONDI_4_RB_LEN_Set3           1
#define  LTE_Band2_TXBF_CONDI_4_RB_START_Set3         0
#define  LTE_Band2_TXBF_CONDI_4_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band2_TXBF_CONDI_5_NS_Set3               0
#define  LTE_Band2_TXBF_CONDI_5_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band2_TXBF_CONDI_5_RB_LEN_Set3           1
#define  LTE_Band2_TXBF_CONDI_5_RB_START_Set3         0
#define  LTE_Band2_TXBF_CONDI_5_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band2_TXBF_CONDI_6_NS_Set3               0
#define  LTE_Band2_TXBF_CONDI_6_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band2_TXBF_CONDI_6_RB_LEN_Set3           1
#define  LTE_Band2_TXBF_CONDI_6_RB_START_Set3         0
#define  LTE_Band2_TXBF_CONDI_6_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band2_TXBF_CONDI_7_NS_Set3               0
#define  LTE_Band2_TXBF_CONDI_7_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band2_TXBF_CONDI_7_RB_LEN_Set3           1
#define  LTE_Band2_TXBF_CONDI_7_RB_START_Set3         0
#define  LTE_Band2_TXBF_CONDI_7_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND3 Start ------------------------------------------------------------*/
#define  LTE_Band3_TXBF_CONDI_0_NS_Set3               0
#define  LTE_Band3_TXBF_CONDI_0_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band3_TXBF_CONDI_0_RB_LEN_Set3           1
#define  LTE_Band3_TXBF_CONDI_0_RB_START_Set3         0
#define  LTE_Band3_TXBF_CONDI_0_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band3_TXBF_CONDI_1_NS_Set3               0
#define  LTE_Band3_TXBF_CONDI_1_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band3_TXBF_CONDI_1_RB_LEN_Set3           1
#define  LTE_Band3_TXBF_CONDI_1_RB_START_Set3         0
#define  LTE_Band3_TXBF_CONDI_1_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band3_TXBF_CONDI_2_NS_Set3               0
#define  LTE_Band3_TXBF_CONDI_2_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band3_TXBF_CONDI_2_RB_LEN_Set3           1
#define  LTE_Band3_TXBF_CONDI_2_RB_START_Set3         0
#define  LTE_Band3_TXBF_CONDI_2_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band3_TXBF_CONDI_3_NS_Set3               0
#define  LTE_Band3_TXBF_CONDI_3_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band3_TXBF_CONDI_3_RB_LEN_Set3           1
#define  LTE_Band3_TXBF_CONDI_3_RB_START_Set3         0
#define  LTE_Band3_TXBF_CONDI_3_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band3_TXBF_CONDI_4_NS_Set3               0
#define  LTE_Band3_TXBF_CONDI_4_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band3_TXBF_CONDI_4_RB_LEN_Set3           1
#define  LTE_Band3_TXBF_CONDI_4_RB_START_Set3         0
#define  LTE_Band3_TXBF_CONDI_4_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band3_TXBF_CONDI_5_NS_Set3               0
#define  LTE_Band3_TXBF_CONDI_5_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band3_TXBF_CONDI_5_RB_LEN_Set3           1
#define  LTE_Band3_TXBF_CONDI_5_RB_START_Set3         0
#define  LTE_Band3_TXBF_CONDI_5_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band3_TXBF_CONDI_6_NS_Set3               0
#define  LTE_Band3_TXBF_CONDI_6_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band3_TXBF_CONDI_6_RB_LEN_Set3           1
#define  LTE_Band3_TXBF_CONDI_6_RB_START_Set3         0
#define  LTE_Band3_TXBF_CONDI_6_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band3_TXBF_CONDI_7_NS_Set3               0
#define  LTE_Band3_TXBF_CONDI_7_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band3_TXBF_CONDI_7_RB_LEN_Set3           1
#define  LTE_Band3_TXBF_CONDI_7_RB_START_Set3         0
#define  LTE_Band3_TXBF_CONDI_7_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND4 Start ------------------------------------------------------------*/
#define  LTE_Band4_TXBF_CONDI_0_NS_Set3               0
#define  LTE_Band4_TXBF_CONDI_0_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band4_TXBF_CONDI_0_RB_LEN_Set3           1
#define  LTE_Band4_TXBF_CONDI_0_RB_START_Set3         0
#define  LTE_Band4_TXBF_CONDI_0_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band4_TXBF_CONDI_1_NS_Set3               0
#define  LTE_Band4_TXBF_CONDI_1_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band4_TXBF_CONDI_1_RB_LEN_Set3           1
#define  LTE_Band4_TXBF_CONDI_1_RB_START_Set3         0
#define  LTE_Band4_TXBF_CONDI_1_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band4_TXBF_CONDI_2_NS_Set3               0
#define  LTE_Band4_TXBF_CONDI_2_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band4_TXBF_CONDI_2_RB_LEN_Set3           1
#define  LTE_Band4_TXBF_CONDI_2_RB_START_Set3         0
#define  LTE_Band4_TXBF_CONDI_2_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band4_TXBF_CONDI_3_NS_Set3               0
#define  LTE_Band4_TXBF_CONDI_3_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band4_TXBF_CONDI_3_RB_LEN_Set3           1
#define  LTE_Band4_TXBF_CONDI_3_RB_START_Set3         0
#define  LTE_Band4_TXBF_CONDI_3_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band4_TXBF_CONDI_4_NS_Set3               0
#define  LTE_Band4_TXBF_CONDI_4_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band4_TXBF_CONDI_4_RB_LEN_Set3           1
#define  LTE_Band4_TXBF_CONDI_4_RB_START_Set3         0
#define  LTE_Band4_TXBF_CONDI_4_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band4_TXBF_CONDI_5_NS_Set3               0
#define  LTE_Band4_TXBF_CONDI_5_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band4_TXBF_CONDI_5_RB_LEN_Set3           1
#define  LTE_Band4_TXBF_CONDI_5_RB_START_Set3         0
#define  LTE_Band4_TXBF_CONDI_5_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band4_TXBF_CONDI_6_NS_Set3               0
#define  LTE_Band4_TXBF_CONDI_6_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band4_TXBF_CONDI_6_RB_LEN_Set3           1
#define  LTE_Band4_TXBF_CONDI_6_RB_START_Set3         0
#define  LTE_Band4_TXBF_CONDI_6_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band4_TXBF_CONDI_7_NS_Set3               0
#define  LTE_Band4_TXBF_CONDI_7_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band4_TXBF_CONDI_7_RB_LEN_Set3           1
#define  LTE_Band4_TXBF_CONDI_7_RB_START_Set3         0
#define  LTE_Band4_TXBF_CONDI_7_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND5 Start ------------------------------------------------------------*/
#define  LTE_Band5_TXBF_CONDI_0_NS_Set3               0
#define  LTE_Band5_TXBF_CONDI_0_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band5_TXBF_CONDI_0_RB_LEN_Set3           1
#define  LTE_Band5_TXBF_CONDI_0_RB_START_Set3         0
#define  LTE_Band5_TXBF_CONDI_0_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band5_TXBF_CONDI_1_NS_Set3               0
#define  LTE_Band5_TXBF_CONDI_1_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band5_TXBF_CONDI_1_RB_LEN_Set3           1
#define  LTE_Band5_TXBF_CONDI_1_RB_START_Set3         0
#define  LTE_Band5_TXBF_CONDI_1_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band5_TXBF_CONDI_2_NS_Set3               0
#define  LTE_Band5_TXBF_CONDI_2_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band5_TXBF_CONDI_2_RB_LEN_Set3           1
#define  LTE_Band5_TXBF_CONDI_2_RB_START_Set3         0
#define  LTE_Band5_TXBF_CONDI_2_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band5_TXBF_CONDI_3_NS_Set3               0
#define  LTE_Band5_TXBF_CONDI_3_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band5_TXBF_CONDI_3_RB_LEN_Set3           1
#define  LTE_Band5_TXBF_CONDI_3_RB_START_Set3         0
#define  LTE_Band5_TXBF_CONDI_3_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band5_TXBF_CONDI_4_NS_Set3               0
#define  LTE_Band5_TXBF_CONDI_4_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band5_TXBF_CONDI_4_RB_LEN_Set3           1
#define  LTE_Band5_TXBF_CONDI_4_RB_START_Set3         0
#define  LTE_Band5_TXBF_CONDI_4_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band5_TXBF_CONDI_5_NS_Set3               0
#define  LTE_Band5_TXBF_CONDI_5_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band5_TXBF_CONDI_5_RB_LEN_Set3           1
#define  LTE_Band5_TXBF_CONDI_5_RB_START_Set3         0
#define  LTE_Band5_TXBF_CONDI_5_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band5_TXBF_CONDI_6_NS_Set3               0
#define  LTE_Band5_TXBF_CONDI_6_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band5_TXBF_CONDI_6_RB_LEN_Set3           1
#define  LTE_Band5_TXBF_CONDI_6_RB_START_Set3         0
#define  LTE_Band5_TXBF_CONDI_6_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band5_TXBF_CONDI_7_NS_Set3               0
#define  LTE_Band5_TXBF_CONDI_7_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band5_TXBF_CONDI_7_RB_LEN_Set3           1
#define  LTE_Band5_TXBF_CONDI_7_RB_START_Set3         0
#define  LTE_Band5_TXBF_CONDI_7_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND7 Start ------------------------------------------------------------*/
#define  LTE_Band7_TXBF_CONDI_0_NS_Set3               0
#define  LTE_Band7_TXBF_CONDI_0_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band7_TXBF_CONDI_0_RB_LEN_Set3           1
#define  LTE_Band7_TXBF_CONDI_0_RB_START_Set3         0
#define  LTE_Band7_TXBF_CONDI_0_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band7_TXBF_CONDI_1_NS_Set3               0
#define  LTE_Band7_TXBF_CONDI_1_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band7_TXBF_CONDI_1_RB_LEN_Set3           1
#define  LTE_Band7_TXBF_CONDI_1_RB_START_Set3         0
#define  LTE_Band7_TXBF_CONDI_1_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band7_TXBF_CONDI_2_NS_Set3               0
#define  LTE_Band7_TXBF_CONDI_2_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band7_TXBF_CONDI_2_RB_LEN_Set3           1
#define  LTE_Band7_TXBF_CONDI_2_RB_START_Set3         0
#define  LTE_Band7_TXBF_CONDI_2_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band7_TXBF_CONDI_3_NS_Set3               0
#define  LTE_Band7_TXBF_CONDI_3_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band7_TXBF_CONDI_3_RB_LEN_Set3           1
#define  LTE_Band7_TXBF_CONDI_3_RB_START_Set3         0
#define  LTE_Band7_TXBF_CONDI_3_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band7_TXBF_CONDI_4_NS_Set3               0
#define  LTE_Band7_TXBF_CONDI_4_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band7_TXBF_CONDI_4_RB_LEN_Set3           1
#define  LTE_Band7_TXBF_CONDI_4_RB_START_Set3         0
#define  LTE_Band7_TXBF_CONDI_4_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band7_TXBF_CONDI_5_NS_Set3               0
#define  LTE_Band7_TXBF_CONDI_5_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band7_TXBF_CONDI_5_RB_LEN_Set3           1
#define  LTE_Band7_TXBF_CONDI_5_RB_START_Set3         0
#define  LTE_Band7_TXBF_CONDI_5_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band7_TXBF_CONDI_6_NS_Set3               0
#define  LTE_Band7_TXBF_CONDI_6_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band7_TXBF_CONDI_6_RB_LEN_Set3           1
#define  LTE_Band7_TXBF_CONDI_6_RB_START_Set3         0
#define  LTE_Band7_TXBF_CONDI_6_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band7_TXBF_CONDI_7_NS_Set3               0
#define  LTE_Band7_TXBF_CONDI_7_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band7_TXBF_CONDI_7_RB_LEN_Set3           1
#define  LTE_Band7_TXBF_CONDI_7_RB_START_Set3         0
#define  LTE_Band7_TXBF_CONDI_7_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND8 Start ------------------------------------------------------------*/
#define  LTE_Band8_TXBF_CONDI_0_NS_Set3               0
#define  LTE_Band8_TXBF_CONDI_0_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band8_TXBF_CONDI_0_RB_LEN_Set3           1
#define  LTE_Band8_TXBF_CONDI_0_RB_START_Set3         0
#define  LTE_Band8_TXBF_CONDI_0_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band8_TXBF_CONDI_1_NS_Set3               0
#define  LTE_Band8_TXBF_CONDI_1_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band8_TXBF_CONDI_1_RB_LEN_Set3           1
#define  LTE_Band8_TXBF_CONDI_1_RB_START_Set3         0
#define  LTE_Band8_TXBF_CONDI_1_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band8_TXBF_CONDI_2_NS_Set3               0
#define  LTE_Band8_TXBF_CONDI_2_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band8_TXBF_CONDI_2_RB_LEN_Set3           1
#define  LTE_Band8_TXBF_CONDI_2_RB_START_Set3         0
#define  LTE_Band8_TXBF_CONDI_2_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band8_TXBF_CONDI_3_NS_Set3               0
#define  LTE_Band8_TXBF_CONDI_3_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band8_TXBF_CONDI_3_RB_LEN_Set3           1
#define  LTE_Band8_TXBF_CONDI_3_RB_START_Set3         0
#define  LTE_Band8_TXBF_CONDI_3_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band8_TXBF_CONDI_4_NS_Set3               0
#define  LTE_Band8_TXBF_CONDI_4_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band8_TXBF_CONDI_4_RB_LEN_Set3           1
#define  LTE_Band8_TXBF_CONDI_4_RB_START_Set3         0
#define  LTE_Band8_TXBF_CONDI_4_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band8_TXBF_CONDI_5_NS_Set3               0
#define  LTE_Band8_TXBF_CONDI_5_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band8_TXBF_CONDI_5_RB_LEN_Set3           1
#define  LTE_Band8_TXBF_CONDI_5_RB_START_Set3         0
#define  LTE_Band8_TXBF_CONDI_5_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band8_TXBF_CONDI_6_NS_Set3               0
#define  LTE_Band8_TXBF_CONDI_6_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band8_TXBF_CONDI_6_RB_LEN_Set3           1
#define  LTE_Band8_TXBF_CONDI_6_RB_START_Set3         0
#define  LTE_Band8_TXBF_CONDI_6_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band8_TXBF_CONDI_7_NS_Set3               0
#define  LTE_Band8_TXBF_CONDI_7_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band8_TXBF_CONDI_7_RB_LEN_Set3           1
#define  LTE_Band8_TXBF_CONDI_7_RB_START_Set3         0
#define  LTE_Band8_TXBF_CONDI_7_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND9 Start ------------------------------------------------------------*/
#define  LTE_Band9_TXBF_CONDI_0_NS_Set3               0
#define  LTE_Band9_TXBF_CONDI_0_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band9_TXBF_CONDI_0_RB_LEN_Set3           1
#define  LTE_Band9_TXBF_CONDI_0_RB_START_Set3         0
#define  LTE_Band9_TXBF_CONDI_0_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band9_TXBF_CONDI_1_NS_Set3               0
#define  LTE_Band9_TXBF_CONDI_1_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band9_TXBF_CONDI_1_RB_LEN_Set3           1
#define  LTE_Band9_TXBF_CONDI_1_RB_START_Set3         0
#define  LTE_Band9_TXBF_CONDI_1_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band9_TXBF_CONDI_2_NS_Set3               0
#define  LTE_Band9_TXBF_CONDI_2_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band9_TXBF_CONDI_2_RB_LEN_Set3           1
#define  LTE_Band9_TXBF_CONDI_2_RB_START_Set3         0
#define  LTE_Band9_TXBF_CONDI_2_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band9_TXBF_CONDI_3_NS_Set3               0
#define  LTE_Band9_TXBF_CONDI_3_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band9_TXBF_CONDI_3_RB_LEN_Set3           1
#define  LTE_Band9_TXBF_CONDI_3_RB_START_Set3         0
#define  LTE_Band9_TXBF_CONDI_3_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band9_TXBF_CONDI_4_NS_Set3               0
#define  LTE_Band9_TXBF_CONDI_4_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band9_TXBF_CONDI_4_RB_LEN_Set3           1
#define  LTE_Band9_TXBF_CONDI_4_RB_START_Set3         0
#define  LTE_Band9_TXBF_CONDI_4_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band9_TXBF_CONDI_5_NS_Set3               0
#define  LTE_Band9_TXBF_CONDI_5_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band9_TXBF_CONDI_5_RB_LEN_Set3           1
#define  LTE_Band9_TXBF_CONDI_5_RB_START_Set3         0
#define  LTE_Band9_TXBF_CONDI_5_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band9_TXBF_CONDI_6_NS_Set3               0
#define  LTE_Band9_TXBF_CONDI_6_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band9_TXBF_CONDI_6_RB_LEN_Set3           1
#define  LTE_Band9_TXBF_CONDI_6_RB_START_Set3         0
#define  LTE_Band9_TXBF_CONDI_6_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band9_TXBF_CONDI_7_NS_Set3               0
#define  LTE_Band9_TXBF_CONDI_7_BW_Set3               LTE_BANDWIDTH_INVALID
#define  LTE_Band9_TXBF_CONDI_7_RB_LEN_Set3           1
#define  LTE_Band9_TXBF_CONDI_7_RB_START_Set3         0
#define  LTE_Band9_TXBF_CONDI_7_TBL_IDX_Set3          LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND11 Start ------------------------------------------------------------*/
#define  LTE_Band11_TXBF_CONDI_0_NS_Set3              0
#define  LTE_Band11_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band11_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band11_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band11_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band11_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band11_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band11_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band11_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band11_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band11_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band11_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band11_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band11_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band11_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band11_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band11_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band11_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band11_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band11_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band11_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band11_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band11_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band11_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band11_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band11_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band11_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band11_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band11_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band11_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band11_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band11_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band11_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band11_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band11_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band11_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band11_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band11_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band11_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band11_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND12 Start ------------------------------------------------------------*/
#define  LTE_Band12_TXBF_CONDI_0_NS_Set3              0
#define  LTE_Band12_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band12_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band12_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band12_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band12_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band12_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band12_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band12_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band12_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band12_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band12_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band12_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band12_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band12_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band12_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band12_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band12_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band12_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band12_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band12_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band12_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band12_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band12_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band12_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band12_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band12_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band12_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band12_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band12_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band12_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band12_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band12_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band12_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band12_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band12_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band12_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band12_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band12_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band12_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND13 Start ------------------------------------------------------------*/
#define  LTE_Band13_TXBF_CONDI_0_NS_Set3              0
#define  LTE_Band13_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band13_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band13_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band13_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band13_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band13_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band13_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band13_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band13_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band13_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band13_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band13_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band13_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band13_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band13_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band13_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band13_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band13_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band13_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band13_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band13_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band13_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band13_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band13_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band13_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band13_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band13_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band13_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band13_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band13_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band13_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band13_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band13_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band13_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band13_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band13_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band13_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band13_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band13_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND14 Start ------------------------------------------------------------*/
#define  LTE_Band14_TXBF_CONDI_0_NS_Set3              0
#define  LTE_Band14_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band14_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band14_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band14_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band14_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band14_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band14_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band14_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band14_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band14_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band14_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band14_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band14_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band14_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band14_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band14_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band14_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band14_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band14_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band14_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band14_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band14_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band14_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band14_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band14_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band14_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band14_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band14_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band14_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band14_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band14_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band14_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band14_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band14_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band14_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band14_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band14_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band14_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band14_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND17 Start ------------------------------------------------------------*/
#define  LTE_Band17_TXBF_CONDI_0_NS_Set3              0
#define  LTE_Band17_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band17_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band17_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band17_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band17_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band17_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band17_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band17_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band17_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band17_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band17_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band17_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band17_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band17_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band17_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band17_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band17_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band17_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band17_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band17_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band17_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band17_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band17_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band17_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band17_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band17_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band17_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band17_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band17_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band17_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band17_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band17_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band17_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band17_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band17_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band17_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band17_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band17_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band17_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND18 Start ------------------------------------------------------------*/
#define  LTE_Band18_TXBF_CONDI_0_NS_Set3              0
#define  LTE_Band18_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band18_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band18_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band18_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band18_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band18_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band18_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band18_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band18_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band18_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band18_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band18_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band18_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band18_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band18_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band18_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band18_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band18_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band18_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band18_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band18_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band18_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band18_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band18_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band18_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band18_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band18_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band18_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band18_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band18_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band18_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band18_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band18_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band18_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band18_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band18_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band18_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band18_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band18_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND19 Start ------------------------------------------------------------*/
#define  LTE_Band19_TXBF_CONDI_0_NS_Set3              0
#define  LTE_Band19_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band19_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band19_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band19_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band19_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band19_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band19_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band19_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band19_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band19_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band19_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band19_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band19_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band19_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band19_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band19_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band19_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band19_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band19_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band19_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band19_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band19_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band19_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band19_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band19_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band19_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band19_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band19_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band19_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band19_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band19_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band19_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band19_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band19_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band19_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band19_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band19_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band19_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band19_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND20 Start ------------------------------------------------------------*/
#define  LTE_Band20_TXBF_CONDI_0_NS_Set3              0
#define  LTE_Band20_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band20_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band20_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band20_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band20_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band20_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band20_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band20_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band20_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band20_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band20_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band20_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band20_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band20_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band20_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band20_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band20_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band20_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band20_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band20_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band20_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band20_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band20_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band20_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band20_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band20_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band20_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band20_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band20_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band20_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band20_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band20_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band20_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band20_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band20_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band20_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band20_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band20_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band20_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND21 Start ------------------------------------------------------------*/
#define  LTE_Band21_TXBF_CONDI_0_NS_Set3              0
#define  LTE_Band21_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band21_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band21_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band21_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band21_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band21_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band21_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band21_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band21_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band21_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band21_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band21_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band21_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band21_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band21_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band21_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band21_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band21_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band21_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band21_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band21_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band21_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band21_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band21_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band21_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band21_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band21_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band21_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band21_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band21_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band21_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band21_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band21_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band21_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band21_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band21_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band21_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band21_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band21_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND22 Start ------------------------------------------------------------*/
#define  LTE_Band22_TXBF_CONDI_0_NS_Set3              0
#define  LTE_Band22_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band22_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band22_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band22_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band22_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band22_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band22_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band22_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band22_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band22_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band22_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band22_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band22_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band22_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band22_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band22_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band22_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band22_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band22_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band22_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band22_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band22_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band22_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band22_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band22_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band22_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band22_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band22_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band22_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band22_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band22_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band22_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band22_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band22_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band22_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band22_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band22_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band22_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band22_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND23 Start ------------------------------------------------------------*/
#define  LTE_Band23_TXBF_CONDI_0_NS_Set3              0
#define  LTE_Band23_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band23_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band23_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band23_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band23_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band23_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band23_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band23_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band23_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band23_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band23_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band23_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band23_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band23_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band23_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band23_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band23_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band23_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band23_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band23_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band23_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band23_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band23_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band23_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band23_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band23_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band23_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band23_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band23_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band23_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band23_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band23_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band23_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band23_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band23_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band23_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band23_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band23_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band23_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND25 Start ------------------------------------------------------------*/
#define  LTE_Band25_TXBF_CONDI_0_NS_Set3              0
#define  LTE_Band25_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band25_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band25_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band25_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band25_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band25_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band25_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band25_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band25_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band25_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band25_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band25_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band25_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band25_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band25_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band25_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band25_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band25_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band25_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band25_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band25_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band25_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band25_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band25_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band25_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band25_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band25_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band25_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band25_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band25_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band25_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band25_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band25_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band25_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band25_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band25_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band25_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band25_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band25_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND26 Start ------------------------------------------------------------*/
#define  LTE_Band26_TXBF_CONDI_0_NS_Set3              0
#define  LTE_Band26_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band26_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band26_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band26_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band26_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band26_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band26_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band26_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band26_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band26_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band26_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band26_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band26_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band26_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band26_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band26_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band26_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band26_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band26_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band26_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band26_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band26_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band26_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band26_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band26_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band26_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band26_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band26_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band26_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band26_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band26_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band26_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band26_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band26_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band26_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band26_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band26_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band26_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band26_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND27 Start ------------------------------------------------------------*/
#define  LTE_Band27_TXBF_CONDI_0_NS_Set3              0
#define  LTE_Band27_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band27_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band27_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band27_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band27_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band27_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band27_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band27_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band27_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band27_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band27_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band27_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band27_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band27_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band27_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band27_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band27_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band27_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band27_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band27_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band27_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band27_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band27_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band27_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band27_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band27_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band27_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band27_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band27_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band27_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band27_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band27_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band27_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band27_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band27_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band27_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band27_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band27_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band27_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND28 Start ------------------------------------------------------------*/
#define  LTE_Band28_TXBF_CONDI_0_NS_Set3              0
#define  LTE_Band28_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band28_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band28_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band28_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band28_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band28_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band28_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band28_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band28_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band28_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band28_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band28_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band28_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band28_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band28_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band28_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band28_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band28_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band28_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band28_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band28_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band28_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band28_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band28_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band28_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band28_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band28_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band28_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band28_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band28_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band28_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band28_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band28_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band28_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band28_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band28_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band28_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band28_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band28_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND29 Start ------------------------------------------------------------*/
#define  LTE_Band29_TXBF_CONDI_0_NS_Set3              0
#define  LTE_Band29_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band29_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band29_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band29_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band29_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band29_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band29_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band29_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band29_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band29_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band29_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band29_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band29_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band29_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band29_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band29_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band29_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band29_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band29_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band29_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band29_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band29_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band29_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band29_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band29_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band29_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band29_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band29_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band29_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band29_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band29_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band29_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band29_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band29_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band29_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band29_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band29_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band29_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band29_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND30 Start ------------------------------------------------------------*/
#define  LTE_Band30_TXBF_CONDI_0_NS_Set3              0
#define  LTE_Band30_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band30_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band30_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band30_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band30_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band30_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band30_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band30_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band30_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band30_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band30_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band30_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band30_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band30_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band30_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band30_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band30_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band30_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band30_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band30_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band30_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band30_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band30_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band30_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band30_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band30_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band30_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band30_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band30_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band30_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band30_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band30_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band30_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band30_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band30_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band30_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band30_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band30_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band30_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND31 Start ------------------------------------------------------------*/
#define  LTE_Band31_TXBF_CONDI_0_NS_Set3              0
#define  LTE_Band31_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band31_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band31_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band31_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band31_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band31_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band31_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band31_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band31_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band31_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band31_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band31_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band31_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band31_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band31_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band31_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band31_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band31_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band31_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band31_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band31_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band31_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band31_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band31_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band31_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band31_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band31_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band31_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band31_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band31_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band31_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band31_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band31_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band31_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band31_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band31_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band31_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band31_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band31_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND32 Start ------------------------------------------------------------*/
#define  LTE_Band32_TXBF_CONDI_0_NS_Set3              0
#define  LTE_Band32_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band32_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band32_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band32_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band32_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band32_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band32_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band32_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band32_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band32_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band32_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band32_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band32_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band32_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band32_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band32_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band32_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band32_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band32_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band32_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band32_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band32_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band32_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band32_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band32_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band32_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band32_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band32_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band32_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band32_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band32_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band32_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band32_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band32_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band32_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band32_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band32_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band32_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band32_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND34 Start ------------------------------------------------------------*/
#define  LTE_Band34_TXBF_CONDI_0_NS_Set3              0
#define  LTE_Band34_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band34_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band34_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band34_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band34_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band34_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band34_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band34_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band34_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band34_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band34_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band34_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band34_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band34_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band34_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band34_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band34_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band34_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band34_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band34_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band34_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band34_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band34_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band34_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band34_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band34_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band34_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band34_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band34_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band34_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band34_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band34_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band34_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band34_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band34_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band34_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band34_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band34_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band34_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND38 Start ------------------------------------------------------------*/
#define  LTE_Band38_TXBF_CONDI_0_NS_Set3              1
#define  LTE_Band38_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_20M
#define  LTE_Band38_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band38_TXBF_CONDI_0_RB_START_Set3        99
#define  LTE_Band38_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL3

#define  LTE_Band38_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band38_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band38_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band38_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band38_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band38_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band38_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band38_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band38_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band38_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band38_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band38_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band38_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band38_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band38_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band38_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band38_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band38_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band38_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band38_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band38_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band38_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band38_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band38_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band38_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band38_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band38_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band38_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band38_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band38_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band38_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band38_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band38_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band38_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band38_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND39 Start ------------------------------------------------------------*/
#define  LTE_Band39_TXBF_CONDI_0_NS_Set3              0
#define  LTE_Band39_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band39_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band39_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band39_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band39_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band39_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band39_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band39_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band39_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band39_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band39_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band39_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band39_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band39_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band39_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band39_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band39_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band39_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band39_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band39_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band39_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band39_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band39_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band39_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band39_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band39_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band39_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band39_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band39_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band39_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band39_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band39_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band39_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band39_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band39_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band39_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band39_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band39_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band39_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND40 Start ------------------------------------------------------------*/
#define  LTE_Band40_TXBF_CONDI_0_NS_Set3              1
#define  LTE_Band40_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_20M
#define  LTE_Band40_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band40_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band40_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL4

#define  LTE_Band40_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band40_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band40_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band40_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band40_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band40_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band40_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band40_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band40_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band40_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band40_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band40_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band40_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band40_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band40_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band40_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band40_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band40_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band40_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band40_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band40_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band40_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band40_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band40_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band40_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band40_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band40_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band40_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band40_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band40_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band40_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band40_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band40_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band40_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band40_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND41 Start ------------------------------------------------------------*/
#define  LTE_Band41_TXBF_CONDI_0_NS_Set3              4
#define  LTE_Band41_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_20M
#define  LTE_Band41_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band41_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band41_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL0

#define  LTE_Band41_TXBF_CONDI_1_NS_Set3              4
#define  LTE_Band41_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_10M
#define  LTE_Band41_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band41_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band41_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL0

#define  LTE_Band41_TXBF_CONDI_2_NS_Set3              4
#define  LTE_Band41_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_10M
#define  LTE_Band41_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band41_TXBF_CONDI_2_RB_START_Set3        49
#define  LTE_Band41_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL0

#define  LTE_Band41_TXBF_CONDI_3_NS_Set3              4
#define  LTE_Band41_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_15M
#define  LTE_Band41_TXBF_CONDI_3_RB_LEN_Set3          32
#define  LTE_Band41_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band41_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL0

#define  LTE_Band41_TXBF_CONDI_4_NS_Set3              4
#define  LTE_Band41_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_15M
#define  LTE_Band41_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band41_TXBF_CONDI_4_RB_START_Set3        74
#define  LTE_Band41_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL0

#define  LTE_Band41_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band41_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band41_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band41_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band41_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band41_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band41_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band41_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band41_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band41_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band41_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band41_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band41_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band41_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band41_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND42 Start ------------------------------------------------------------*/
#define  LTE_Band42_TXBF_CONDI_0_NS_Set3              0
#define  LTE_Band42_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band42_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band42_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band42_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band42_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band42_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band42_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band42_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band42_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band42_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band42_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band42_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band42_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band42_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band42_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band42_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band42_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band42_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band42_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band42_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band42_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band42_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band42_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band42_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band42_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band42_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band42_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band42_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band42_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band42_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band42_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band42_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band42_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band42_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band42_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band42_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band42_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band42_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band42_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND43 Start ------------------------------------------------------------*/
#define  LTE_Band43_TXBF_CONDI_0_NS_Set3              0
#define  LTE_Band43_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band43_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band43_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band43_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band43_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band43_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band43_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band43_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band43_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band43_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band43_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band43_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band43_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band43_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band43_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band43_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band43_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band43_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band43_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band43_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band43_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band43_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band43_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band43_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band43_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band43_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band43_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band43_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band43_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band43_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band43_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band43_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band43_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band43_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band43_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band43_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band43_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band43_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band43_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND44 Start ------------------------------------------------------------*/
#define  LTE_Band44_TXBF_CONDI_0_NS_Set3              0
#define  LTE_Band44_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band44_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band44_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band44_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band44_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band44_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band44_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band44_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band44_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band44_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band44_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band44_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band44_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band44_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band44_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band44_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band44_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band44_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band44_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band44_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band44_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band44_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band44_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band44_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band44_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band44_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band44_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band44_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band44_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band44_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band44_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band44_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band44_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band44_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band44_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band44_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band44_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band44_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band44_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND66 Start ------------------------------------------------------------*/
#define  LTE_Band66_TXBF_CONDI_0_NS_Set3              0
#define  LTE_Band66_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band66_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band66_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band66_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band66_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band66_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band66_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band66_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band66_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band66_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band66_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band66_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band66_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band66_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band66_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band66_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band66_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band66_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band66_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band66_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band66_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band66_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band66_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band66_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band66_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band66_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band66_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band66_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band66_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band66_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band66_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band66_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band66_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band66_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band66_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band66_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band66_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band66_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band66_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND71 Start ------------------------------------------------------------*/
#define  LTE_Band71_TXBF_CONDI_0_NS_Set3              0
#define  LTE_Band71_TXBF_CONDI_0_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band71_TXBF_CONDI_0_RB_LEN_Set3          1
#define  LTE_Band71_TXBF_CONDI_0_RB_START_Set3        0
#define  LTE_Band71_TXBF_CONDI_0_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band71_TXBF_CONDI_1_NS_Set3              0
#define  LTE_Band71_TXBF_CONDI_1_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band71_TXBF_CONDI_1_RB_LEN_Set3          1
#define  LTE_Band71_TXBF_CONDI_1_RB_START_Set3        0
#define  LTE_Band71_TXBF_CONDI_1_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band71_TXBF_CONDI_2_NS_Set3              0
#define  LTE_Band71_TXBF_CONDI_2_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band71_TXBF_CONDI_2_RB_LEN_Set3          1
#define  LTE_Band71_TXBF_CONDI_2_RB_START_Set3        0
#define  LTE_Band71_TXBF_CONDI_2_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band71_TXBF_CONDI_3_NS_Set3              0
#define  LTE_Band71_TXBF_CONDI_3_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band71_TXBF_CONDI_3_RB_LEN_Set3          1
#define  LTE_Band71_TXBF_CONDI_3_RB_START_Set3        0
#define  LTE_Band71_TXBF_CONDI_3_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band71_TXBF_CONDI_4_NS_Set3              0
#define  LTE_Band71_TXBF_CONDI_4_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band71_TXBF_CONDI_4_RB_LEN_Set3          1
#define  LTE_Band71_TXBF_CONDI_4_RB_START_Set3        0
#define  LTE_Band71_TXBF_CONDI_4_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band71_TXBF_CONDI_5_NS_Set3              0
#define  LTE_Band71_TXBF_CONDI_5_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band71_TXBF_CONDI_5_RB_LEN_Set3          1
#define  LTE_Band71_TXBF_CONDI_5_RB_START_Set3        0
#define  LTE_Band71_TXBF_CONDI_5_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band71_TXBF_CONDI_6_NS_Set3              0
#define  LTE_Band71_TXBF_CONDI_6_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band71_TXBF_CONDI_6_RB_LEN_Set3          1
#define  LTE_Band71_TXBF_CONDI_6_RB_START_Set3        0
#define  LTE_Band71_TXBF_CONDI_6_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band71_TXBF_CONDI_7_NS_Set3              0
#define  LTE_Band71_TXBF_CONDI_7_BW_Set3              LTE_BANDWIDTH_INVALID
#define  LTE_Band71_TXBF_CONDI_7_RB_LEN_Set3          1
#define  LTE_Band71_TXBF_CONDI_7_RB_START_Set3        0
#define  LTE_Band71_TXBF_CONDI_7_TBL_IDX_Set3         LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND252 Start ------------------------------------------------------------*/
#define  LTE_Band252_TXBF_CONDI_0_NS_Set3             0
#define  LTE_Band252_TXBF_CONDI_0_BW_Set3             LTE_BANDWIDTH_INVALID
#define  LTE_Band252_TXBF_CONDI_0_RB_LEN_Set3         1
#define  LTE_Band252_TXBF_CONDI_0_RB_START_Set3       0
#define  LTE_Band252_TXBF_CONDI_0_TBL_IDX_Set3        LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band252_TXBF_CONDI_1_NS_Set3             0
#define  LTE_Band252_TXBF_CONDI_1_BW_Set3             LTE_BANDWIDTH_INVALID
#define  LTE_Band252_TXBF_CONDI_1_RB_LEN_Set3         1
#define  LTE_Band252_TXBF_CONDI_1_RB_START_Set3       0
#define  LTE_Band252_TXBF_CONDI_1_TBL_IDX_Set3        LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band252_TXBF_CONDI_2_NS_Set3             0
#define  LTE_Band252_TXBF_CONDI_2_BW_Set3             LTE_BANDWIDTH_INVALID
#define  LTE_Band252_TXBF_CONDI_2_RB_LEN_Set3         1
#define  LTE_Band252_TXBF_CONDI_2_RB_START_Set3       0
#define  LTE_Band252_TXBF_CONDI_2_TBL_IDX_Set3        LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band252_TXBF_CONDI_3_NS_Set3             0
#define  LTE_Band252_TXBF_CONDI_3_BW_Set3             LTE_BANDWIDTH_INVALID
#define  LTE_Band252_TXBF_CONDI_3_RB_LEN_Set3         1
#define  LTE_Band252_TXBF_CONDI_3_RB_START_Set3       0
#define  LTE_Band252_TXBF_CONDI_3_TBL_IDX_Set3        LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band252_TXBF_CONDI_4_NS_Set3             0
#define  LTE_Band252_TXBF_CONDI_4_BW_Set3             LTE_BANDWIDTH_INVALID
#define  LTE_Band252_TXBF_CONDI_4_RB_LEN_Set3         1
#define  LTE_Band252_TXBF_CONDI_4_RB_START_Set3       0
#define  LTE_Band252_TXBF_CONDI_4_TBL_IDX_Set3        LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band252_TXBF_CONDI_5_NS_Set3             0
#define  LTE_Band252_TXBF_CONDI_5_BW_Set3             LTE_BANDWIDTH_INVALID
#define  LTE_Band252_TXBF_CONDI_5_RB_LEN_Set3         1
#define  LTE_Band252_TXBF_CONDI_5_RB_START_Set3       0
#define  LTE_Band252_TXBF_CONDI_5_TBL_IDX_Set3        LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band252_TXBF_CONDI_6_NS_Set3             0
#define  LTE_Band252_TXBF_CONDI_6_BW_Set3             LTE_BANDWIDTH_INVALID
#define  LTE_Band252_TXBF_CONDI_6_RB_LEN_Set3         1
#define  LTE_Band252_TXBF_CONDI_6_RB_START_Set3       0
#define  LTE_Band252_TXBF_CONDI_6_TBL_IDX_Set3        LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band252_TXBF_CONDI_7_NS_Set3             0
#define  LTE_Band252_TXBF_CONDI_7_BW_Set3             LTE_BANDWIDTH_INVALID
#define  LTE_Band252_TXBF_CONDI_7_RB_LEN_Set3         1
#define  LTE_Band252_TXBF_CONDI_7_RB_START_Set3       0
#define  LTE_Band252_TXBF_CONDI_7_TBL_IDX_Set3        LTE_TX_CONDI_BF_TBL_INVALID

//* --------------- BAND255 Start ------------------------------------------------------------*/
#define  LTE_Band255_TXBF_CONDI_0_NS_Set3             0
#define  LTE_Band255_TXBF_CONDI_0_BW_Set3             LTE_BANDWIDTH_INVALID
#define  LTE_Band255_TXBF_CONDI_0_RB_LEN_Set3         1
#define  LTE_Band255_TXBF_CONDI_0_RB_START_Set3       0
#define  LTE_Band255_TXBF_CONDI_0_TBL_IDX_Set3        LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band255_TXBF_CONDI_1_NS_Set3             0
#define  LTE_Band255_TXBF_CONDI_1_BW_Set3             LTE_BANDWIDTH_INVALID
#define  LTE_Band255_TXBF_CONDI_1_RB_LEN_Set3         1
#define  LTE_Band255_TXBF_CONDI_1_RB_START_Set3       0
#define  LTE_Band255_TXBF_CONDI_1_TBL_IDX_Set3        LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band255_TXBF_CONDI_2_NS_Set3             0
#define  LTE_Band255_TXBF_CONDI_2_BW_Set3             LTE_BANDWIDTH_INVALID
#define  LTE_Band255_TXBF_CONDI_2_RB_LEN_Set3         1
#define  LTE_Band255_TXBF_CONDI_2_RB_START_Set3       0
#define  LTE_Band255_TXBF_CONDI_2_TBL_IDX_Set3        LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band255_TXBF_CONDI_3_NS_Set3             0
#define  LTE_Band255_TXBF_CONDI_3_BW_Set3             LTE_BANDWIDTH_INVALID
#define  LTE_Band255_TXBF_CONDI_3_RB_LEN_Set3         1
#define  LTE_Band255_TXBF_CONDI_3_RB_START_Set3       0
#define  LTE_Band255_TXBF_CONDI_3_TBL_IDX_Set3        LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band255_TXBF_CONDI_4_NS_Set3             0
#define  LTE_Band255_TXBF_CONDI_4_BW_Set3             LTE_BANDWIDTH_INVALID
#define  LTE_Band255_TXBF_CONDI_4_RB_LEN_Set3         1
#define  LTE_Band255_TXBF_CONDI_4_RB_START_Set3       0
#define  LTE_Band255_TXBF_CONDI_4_TBL_IDX_Set3        LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band255_TXBF_CONDI_5_NS_Set3             0
#define  LTE_Band255_TXBF_CONDI_5_BW_Set3             LTE_BANDWIDTH_INVALID
#define  LTE_Band255_TXBF_CONDI_5_RB_LEN_Set3         1
#define  LTE_Band255_TXBF_CONDI_5_RB_START_Set3       0
#define  LTE_Band255_TXBF_CONDI_5_TBL_IDX_Set3        LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band255_TXBF_CONDI_6_NS_Set3             0
#define  LTE_Band255_TXBF_CONDI_6_BW_Set3             LTE_BANDWIDTH_INVALID
#define  LTE_Band255_TXBF_CONDI_6_RB_LEN_Set3         1
#define  LTE_Band255_TXBF_CONDI_6_RB_START_Set3       0
#define  LTE_Band255_TXBF_CONDI_6_TBL_IDX_Set3        LTE_TX_CONDI_BF_TBL_INVALID

#define  LTE_Band255_TXBF_CONDI_7_NS_Set3             0
#define  LTE_Band255_TXBF_CONDI_7_BW_Set3             LTE_BANDWIDTH_INVALID
#define  LTE_Band255_TXBF_CONDI_7_RB_LEN_Set3         1
#define  LTE_Band255_TXBF_CONDI_7_RB_START_Set3       0
#define  LTE_Band255_TXBF_CONDI_7_TBL_IDX_Set3        LTE_TX_CONDI_BF_TBL_INVALID

/*---------------------------------------------------------------------------------------------*/
/* This following part serves as default value of undefined macro constants in lte_custom_rf.h */
/* DO NOT MODIFY!!!                                                                            */
/*---------------------------------------------------------------------------------------------*/
#define  LTE_BandNone_VPA_SOURCE_Set3   VPA_SOURCE_NOT_SUPPORTED

#endif /* _LTE_CUSTOM_RF_TPC_Set3_H_ */
