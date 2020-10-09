/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 * Filename:
 * ---------
 *  l1edps_common_parameters.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *  Total parameters define value between SS and UE
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 02 23 2016 panu.peisa
 * [MOLY00147611] MT6292 EL1 code merge from UMOLY_92L1Dev CBr to UMOLY
 * Integrated mcu/common, mcu/make and mcu/pcore changes from  2084256 to 2095461 ( swrd part )..
 *
 * 10 13 2015 david.tang (janne.blankenstein)
 * [MOLY00145122] [MT6291][E1EVB][EL1S] Update l1edps mbms header files
 * . mbms config
 *
 * 10 30 2015 panu.peisa
 * [MOLY00147611] MT6292 EL1 code merge from UMOLY_92L1Dev CBr to UMOLY
 * 	
 * 	mcu/pcore changes integated from UMOLY_92L1Dev CBr ( swrd part ).
 *
 * 08 27 2015 david.tang
 * [MOLY00139318] [MT6291][E1EVB][EL1S] Update l1edps header files
 * . [l1edps] update common header files
 *
 * 08 04 2015 jerry.ho
 * [MOLY00135324] MT6291 sync EL1S codes to LR11 and UMOLY
 * Sync CBR V6 to LR11 and UMOLY .
 *
 * 06 09 2015 david.tang
 * [MOLY00112427] [MT6291][E1EVB][EL1S] Update l1edps files from CBr4
 * .[l1edps] update l1edps from cbr
 *
 * 05 04 2015 david.tang
 * [MOLY00109013] [MT6291][E1EVB][EL1S] Update l1edps files from CBr
 * .[l1edps] update l1edps from cbr - evb.v3
 *
 * 02 26 2015 david.tang
 * [MOLY00097085] [MT6291]FPGA][EL1S] update l1edps parameters
 * . update l1edps parameters in oa
 *
 * 10 27 2014 ty.shen
 * [MOLY00079667] [UMOLY][L1S] Framework Update
 * .
 *
 * 08 04 2014 shao-kai.hsu
 * [MOLY00073990] [LPP CP] LPP code check-in for OTDOA feature
 * Add LPP OTDOA EL1S test cases (OA part).
 *
 * 11 18 2013 vend_cp.chiang
 * [MOLY00046206] [MT6290E2][EL1S][FDD][TC SCH_TX_01] ACK rate is not 100%
 * modify RS_power , p_o_nomial_pusch, p_o_nomial_pucch for SCH_TX_01 NACK
 *
 * 08 16 2013 vend_david.tang
 * [MOLY00032458] [MT6290E1][EL1S][L1EDPS COMMON] Refine L1S test procedure - 3
 * Update L1S from DEV branch.
 *
 * 08 14 2013 shao-kai.hsu
 * [MOLY00032458] [MT6290E1][EL1S][L1EDPS COMMON] Refine L1S test procedure - 3
 * .
 *
 * 08 14 2013 shao-kai.hsu
 * [MOLY00032458] [MT6290E1][EL1S][L1EDPS COMMON] Refine L1S test procedure - 3
 * .
 *
 * 08 12 2013 vend_cp.chiang
 * [MOLY00032458] [MT6290E1][EL1S][L1EDPS COMMON] Refine L1S test procedure - 3
 * l1edps common parameter define change and TPC releated header define change for init power
 *
 * 08 07 2013 shao-kai.hsu
 * [MOLY00032458] [MT6290E1][EL1S][L1EDPS COMMON] Refine L1S test procedure - 3
 * .
 *
 * 08 07 2013 vend_cp.chiang
 * [MOLY00032458] [MT6290E1][EL1S][L1EDPS COMMON] Refine L1S test procedure - 3
 * Ra rampup and initial power config
 *
 * 07 19 2013 vend_cp.chiang
 * [MOLY00030358] [MT6290E1][EL1S][L1EDPS COMMON] Refine L1S test procedure - 2
 * SCH_TPC reference power
 *
 * 07 18 2013 shao-kai.hsu
 * [MOLY00030358] [MT6290E1][EL1S][L1EDPS COMMON] Refine L1S test procedure - 2
 * Integration change.
 *
 * 07 16 2013 vend_cp.chiang
 * [MOLY00024856] [L1S] Test script revision
 * SCH_TX_05
 *
 * 07 11 2013 shao-kai.hsu
 * [MOLY00024856] [L1S] Test script revision
 * .
 *
 * 07 10 2013 vend_cp.chiang
 * [MOLY00024856] [L1S] Test script revision
 * .
 *
 * 07 04 2013 vend_cp.chiang
 * [MOLY00028630] [MT6290E1][FDD][SCH_TPC_01] pathloss and alpha set to 0, this cause test case can't run as expected.
 * set pathloss alpha to non zero for match test flow
 *
 * 07 04 2013 vend_cp.chiang
 * [MOLY00028594] [MT6290E1][EL1S][FDD][SCH_TPC_01] when RRC reconfig, p_o_ue doesn't change, this will not trigger F(i) & G(i) reset
 * RRC reconfig p_o_ue to reset F(i) & G(i)
 *
 * 07 02 2013 shao-kai.hsu
 * [MOLY00024856] [L1S] Test script revision
 * .
 *
 * 06 28 2013 vend_cp.chiang
 * [MOLY00025272] [MT6290E1][L1EDPS][TC COMMON] L1S test script common modification
 * MODIFY PMAX POWER
 *
 * 06 27 2013 shao-kai.hsu
 * [MOLY00024856] [L1S] Test script revision
 * add onoff duration.
 *
 * 06 20 2013 vend_david.tang
 * [MOLY00025363] [MT6290E1][L1EDPS COMMON] Refine L1S test procedure
 * . Modify L1S RNTI value for BTS2.
 *
 * 05 29 2013 vend_cp.chiang
 * [MOLY00024158] [MT6290E1][L1EDPS COMMON] fix test procedure idle_sch_ra_03
 * .
 *
 * 05 23 2013 shao-kai.hsu
 * [MOLY00014022] [MT6290 PO admit]  Checkin  MT6290 SM L1S build relative codes
 * L1S Integration change.
 *
 * 05 22 2013 shao-kai.hsu
 * [MOLY00014022] [MT6290 PO admit]  Checkin  MT6290 SM L1S build relative codes
 * Modify TDD config for L1S
 *
 * 05 17 2013 shao-kai.hsu
 * [MOLY00013475] [MT6290 PO admit]  Checkin  MT6290 MM L1S build relative codes
 * Increase cell power level to -30dBm
 *
 * 03 30 2013 jerry.ho
 * [MOLY00010951] LTE L1S relative files merge to MOLY
 *
 * 11 05 2012 jerry.ho
 * [MOLY00005322] TATAKA merge to MOLY
 * add LTE l1edps common header files
 ****************************************************************************/


#ifndef _L1EDPS_COMMON_PARAMETERS_H
#define _L1EDPS_COMMON_PARAMETERS_H

#define L1S_RELEASE 0
#define L1S_SETUP 1
#define PAGING_IMSI 6										/*0..1023*/

#define L1S_FALSE 0
#define L1S_TRUE  1

#if 1
#define PWR1 -80
#define PWR2 -83
#define PWR3 -83
#define PWR4 -83
#define PWR5 -83
#define PWR6 -83
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

typedef enum
{
    CELL_ID_BTS1 = 1,
    CELL_ID_BTS2 = 2,
    CELL_ID_BTS3 = 3,
    CELL_ID_NUM  = 4,
    CELL_ID_INVALID

} l1edps_cell_id_enum;

/*RF setting*/
#define TxAtt_RF1 0											/*0 ~ 1200 (0.0 ~ 120.0 dB) (0.1 dB units and steps)*/
#define RxRefPower_RF1 0										/*�V350 ~ +50 (�V35.0 ~ +5.0 dBm)*/
#define TxAtt_RF2 0											/*0 ~ 1200 (0.0 ~ 120.0 dB) (0.1 dB units and steps)*/
#define RxRefPower_RF2 0										/*�V350 ~ +50 (�V35.0 ~ +5.0 dBm)*/
#define TxAtt_RF3 0											/*0 ~ 1200 (0.0 ~ 120.0 dB) (0.1 dB units and steps)*/
#define RxRefPower_RF3 0										/*�V350 ~ +50 (�V35.0 ~ +5.0 dBm)*/
#define TxAtt_RF4 0											/*0 ~ 1200 (0.0 ~ 120.0 dB) (0.1 dB units and steps)*/
#define RxRefPower_RF4 0										/*�V350 ~ +50 (�V35.0 ~ +5.0 dBm)*/
/*==========================RRC Message for BTS1 ==========================*/
#define CFI_VALUE_BTS1 3 									/*1..3*/

/* PHY Signal Power */
#define CELL_RS_POWER_BTS1 PWR1
#define PSS_POWER_BTS1 PWR1
#define SSS_POWER_BTS1 PWR1
#define PCFICH_POWER_BTS1 PWR1
#define PHICH_POWER_BTS1 PWR1
#define PHICH_TOTAL_POWER_BTS1 PWR1
#define PDCCH_POWER_BTS1 PWR1
#define PBCH_POWER_BTS1 PWR1
#define PDSCH_POWER_BTS1 PWR1
#define CSI_RS_POWER_BTS1 PWR1
//TBD... MBSFN_RS & POS_RS & PHICH_DummyTotalPower & PMCH_POWER
#define PMCH_POWER_BTS1 (POWER_MIN_x10/10) // convert POWER_SCALE() => -999

/*AWGN power*/
#define AWGN_POWER_BTS1 -98

/*OCNG Config*/
#define OCNG_SETUP_BTS1 L1S_SETUP							/*BOOLEAN*/
#define OCNG_POWER_BTS1 PWR1								/*99.0..25.0*/

/*Cell Info*/
#define PHYS_CELL_ID_BTS1 1								/*0..503*/
#define CELL_OFFSET_BTS1 0									/*0..10 ms*/

/*ANTENNA_PORT_NUM */
#define ONE_ANTENNA 0
#define TWO_ANTENNA 1
#define FOUR_ANTENNA 2
#define EIGHT_ANTENNA 3
#if defined(SS_DEF_1TX) || defined(__L1EDPS_ENABLE__)
/* RF */
#define ANTENNA_PORT_NUM_BTS1 ONE_ANTENNA 
#else
/* DIQ/AIQ */
#define ANTENNA_PORT_NUM_BTS1 TWO_ANTENNA 
#endif

#define DL_EARFCN_BTS1 0

/*RNTI value*/
#define C_RNTI_BTS1 0xFFF2									/*0x0001..0xFFF3*/
#define T_C_RNTI_BTS1 0xFFF2									/*0x0001..0xFFF3*/
#define SI_RNTI_BTS1 0xFFFF									/*fixed value*/
#define P_RNTI_BTS1 0xFFFE									/*fixed value*/
//SPS_C_RNTI is defined in RRC Connec. setup

/*RAR*/
#define RAR_TC_RNTI_BTS1 T_C_RNTI_BTS1
#define RAR_RA_RNTI_VALID_BTS1 L1S_SETUP						/*L1S_SETUP: true, L1S_RELEASE: false*/
#define RAR_HOPPING_FLAG_BTS1 L1S_RELEASE
#define RAR_UL_DELAY_BTS1 L1S_RELEASE
//#define RAR_BI_BTS1 L1S_RELEASE
#define RAR_CQI_REQUEST_BTS1 L1S_RELEASE
#define RAR_RB_START_BTS1 2
#define RAR_N_RB_BTS1 6
#define RAR_NUB_OF_CW_BTS1 1
#define RAR_MCS_TB1_BTS1 9
#define RAR_MCS_TB2_BTS1 0

/*DL_BW */
#define BW_6_RB 0
#define BW_15_RB 1
#define BW_25_RB 2
#define BW_50_RB 3
#define BW_75_RB 4
#define BW_100_RB 5

#define MIB_DL_BANDWIDTH_BTS1 BW_100_RB

/*PHICH_DURATION */
#define PHICH_DURATION_NORMAL 0
#define PHICH_DURATION_EXTEND 1
#define MIB_PHICH_DURATION_BTS1 PHICH_DURATION_NORMAL	

/*PHICH_RESOURCE value*/
#define PHICH_RESOURCE_oneSixth 0
#define PHICH_RESOURCE_half 1
#define PHICH_RESOURCE_one 2
#define PHICH_RESOURCE_two 3
#define MIB_PHICH_RESOURCE_BTS1 PHICH_RESOURCE_oneSixth

/*SIB1*/
//{
	#define SIB1_FREQ_BAND_INDICATOR_BTS1 1				/*1..64*/
	#define SIB1_SERVING_Q_RXLEV_MIN_BTS1 -70			/*-70..-22*/
	#define SIB1_SERVING_Q_QUAL_MIN_BTS1 -34			/*-34..-3*/
	#define SIB1_SERVING_P_MAX_BTS1 23					/*-30..33*/

	/*schedulingInfoList*/
	#define SI_PERIODICITY_rf8 0
	#define SI_PERIODICITY_rf16 1
	#define SI_PERIODICITY_rf32 2
	#define SI_PERIODICITY_rf64 3
	#define SI_PERIODICITY_rf128 4
	#define SI_PERIODICITY_rf256 5
	#define SI_PERIODICITY_rf512 6
	#define SIB1_SI1_PERIODICITY_BTS1 SI_PERIODICITY_rf8
	#define SIB1_SI2_PERIODICITY_BTS1 SI_PERIODICITY_rf8

	#define SI_WINDOW_LENGTH_ms1 0
	#define SI_WINDOW_LENGTH_ms2 1
	#define SI_WINDOW_LENGTH_ms5 2
	#define SI_WINDOW_LENGTH_ms10 3
	#define SI_WINDOW_LENGTH_ms15 4
	#define SI_WINDOW_LENGTH_ms20 5 
	#define SI_WINDOW_LENGTH_ms40 6

	#define SIB1_SI_WINDOW_LENGTH_BTS1 SI_WINDOW_LENGTH_ms20		
	#define SIB1_SYSTEM_INFO_VALUE_TAG_BTS1 0			/*0..31*/	

	/*tdd-Config*/
	#define SUBFRAME_ASSIGNMENT_sa0 0
	#define SUBFRAME_ASSIGNMENT_sa1 1
	#define SUBFRAME_ASSIGNMENT_sa2 2
	#define SUBFRAME_ASSIGNMENT_sa3 3
	#define SUBFRAME_ASSIGNMENT_sa4 4
	#define SUBFRAME_ASSIGNMENT_sa5 5
	#define SUBFRAME_ASSIGNMENT_sa6 6
	#define SIB1_SUBFRAME_ASSIGNMENT_BTS1 SUBFRAME_ASSIGNMENT_sa1

	#define SPECIAL_SUBFRAME_PATTERN_ssp0 0
	#define SPECIAL_SUBFRAME_PATTERN_ssp1 1
	#define SPECIAL_SUBFRAME_PATTERN_ssp2 2
	#define SPECIAL_SUBFRAME_PATTERN_ssp3 3
	#define SPECIAL_SUBFRAME_PATTERN_ssp4 4
	#define SPECIAL_SUBFRAME_PATTERN_ssp5 5
	#define SPECIAL_SUBFRAME_PATTERN_ssp6 6
	#define SPECIAL_SUBFRAME_PATTERN_ssp7 7
	#define SPECIAL_SUBFRAME_PATTERN_ssp8 8
	#define SIB1_SPECIAL_SUBFRAME_PATTERN_BTS1 SPECIAL_SUBFRAME_PATTERN_ssp6
//}

/*SIB2*/
//{
	/*radioResourceConfigCommon.preambleInfo*/
	#define NUMBER_OF_RA_PREAMBLES_n4 0
	#define NUMBER_OF_RA_PREAMBLES_n8 1
	#define NUMBER_OF_RA_PREAMBLES_n12 2
	#define NUMBER_OF_RA_PREAMBLES_n16 3
	#define NUMBER_OF_RA_PREAMBLES_n20 4
	#define NUMBER_OF_RA_PREAMBLES_n24 5
	#define NUMBER_OF_RA_PREAMBLES_n28 6
	#define NUMBER_OF_RA_PREAMBLES_n32 7
	#define NUMBER_OF_RA_PREAMBLES_n36 8
	#define NUMBER_OF_RA_PREAMBLES_n40 9
	#define NUMBER_OF_RA_PREAMBLES_n44 10
	#define NUMBER_OF_RA_PREAMBLES_n48 11
	#define NUMBER_OF_RA_PREAMBLES_n52 12
	#define NUMBER_OF_RA_PREAMBLES_n56 13
	#define NUMBER_OF_RA_PREAMBLES_n60 14
	#define NUMBER_OF_RA_PREAMBLES_n64 15
	#define SIB2_NUMBER_OF_RA_PREAMBLES_BTS1 NUMBER_OF_RA_PREAMBLES_n64	
	
	#define SIZE_OF_RA_PREAMBLES_GROUP_A_n4 0
	#define SIZE_OF_RA_PREAMBLES_GROUP_A_n8 1
	#define SIZE_OF_RA_PREAMBLES_GROUP_A_n12 2
	#define SIZE_OF_RA_PREAMBLES_GROUP_A_n16 3
	#define SIZE_OF_RA_PREAMBLES_GROUP_A_n20 4
	#define SIZE_OF_RA_PREAMBLES_GROUP_A_n24 5
	#define SIZE_OF_RA_PREAMBLES_GROUP_A_n28 6
	#define SIZE_OF_RA_PREAMBLES_GROUP_A_n32 7
	#define SIZE_OF_RA_PREAMBLES_GROUP_A_n36 8
	#define SIZE_OF_RA_PREAMBLES_GROUP_A_n40 9
	#define SIZE_OF_RA_PREAMBLES_GROUP_A_n44 10
	#define SIZE_OF_RA_PREAMBLES_GROUP_A_n48 11
	#define SIZE_OF_RA_PREAMBLES_GROUP_A_n52 12
	#define SIZE_OF_RA_PREAMBLES_GROUP_A_n56 13
	#define SIZE_OF_RA_PREAMBLES_GROUP_A_n60 14
	#define SIZE_OF_RA_PREAMBLES_GROUP_A_n64 15
	#define SIB2_SIZE_OF_RA_PREAMBLES_GROUP_A_BTS1 SIZE_OF_RA_PREAMBLES_GROUP_A_n64	

	#define MESSAGE_POWER_OFFSET_GROUP_B_minusinfinity 0
	#define MESSAGE_POWER_OFFSET_GROUP_B_dB0 1
	#define MESSAGE_POWER_OFFSET_GROUP_B_dB5 2
	#define MESSAGE_POWER_OFFSET_GROUP_B_dB8 3
	#define MESSAGE_POWER_OFFSET_GROUP_B_dB10 4
	#define MESSAGE_POWER_OFFSET_GROUP_B_dB12 5
	#define MESSAGE_POWER_OFFSET_GROUP_B_dB15 6
	#define MESSAGE_POWER_OFFSET_GROUP_B_dB18 7
	#define SIB2_MESSAGE_POWER_OFFSET_GROUP_B_BTS1 MESSAGE_POWER_OFFSET_GROUP_B_minusinfinity			

	/*radioResourceConfigCommon.rach-ConfigCommon.powerRampingParameters*/
	#define POWER_RAMPING_STEP_dB0 0
	#define POWER_RAMPING_STEP_dB2 1
	#define POWER_RAMPING_STEP_dB4 2
	#define POWER_RAMPING_STEP_dB6 3
	#define SIB2_POWER_RAMPING_STEP_BTS1 POWER_RAMPING_STEP_dB2	

	#define PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_dBm_minus120 0
	#define PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_dBm_minus118 1
	#define PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_dBm_minus116 2
	#define PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_dBm_minus114 3
	#define PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_dBm_minus112 4
	#define PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_dBm_minus110 5
	#define PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_dBm_minus108 6
	#define PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_dBm_minus106 7
	#define PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_dBm_minus104 8
	#define PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_dBm_minus102 9
	#define PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_dBm_minus100 10
	#define PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_dBm_minus98 11
	#define PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_dBm_minus96 12
	#define PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_dBm_minus94 13
	#define PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_dBm_minus92 14
	#define PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_dBm_minus90 15
	#define SIB2_PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_BTS1 PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_dBm_minus90

	/*radioResourceConfigCommon.rach-ConfigCommon.ra-SupervisionInfo*/
	#define PREAMBLE_TRANS_MAX_n3 0
	#define PREAMBLE_TRANS_MAX_n4 1
	#define PREAMBLE_TRANS_MAX_n5 2
	#define PREAMBLE_TRANS_MAX_n6 3
	#define PREAMBLE_TRANS_MAX_n7 4
	#define PREAMBLE_TRANS_MAX_n8 5
	#define PREAMBLE_TRANS_MAX_n10 6
	#define PREAMBLE_TRANS_MAX_n20 7
	#define PREAMBLE_TRANS_MAX_n50 8
	#define PREAMBLE_TRANS_MAX_n100 9
	#define PREAMBLE_TRANS_MAX_n200 10
	#define SIB2_PREAMBLE_TRANS_MAX_BTS1 PREAMBLE_TRANS_MAX_n200

	/*radioResourceConfigCommon.rach-ConfigCommon.ra-SupervisionInfo*/
	#define RA_RESPONSE_WINDOW_SIZE_sf2 0
	#define RA_RESPONSE_WINDOW_SIZE_sf3 1
	#define RA_RESPONSE_WINDOW_SIZE_sf4 2
	#define RA_RESPONSE_WINDOW_SIZE_sf5 3
	#define RA_RESPONSE_WINDOW_SIZE_sf6 4
	#define RA_RESPONSE_WINDOW_SIZE_sf7 5
	#define RA_RESPONSE_WINDOW_SIZE_sf8 6
	#define RA_RESPONSE_WINDOW_SIZE_sf10 7	
	#define SIB2_RA_RESPONSE_WINDOW_SIZE_BTS1 RA_RESPONSE_WINDOW_SIZE_sf5	


	#define MAC_CONTENTION_RESOLUTION_TIMER_sf8 0
	#define MAC_CONTENTION_RESOLUTION_TIMER_sf16 1
	#define MAC_CONTENTION_RESOLUTION_TIMER_sf24 2
	#define MAC_CONTENTION_RESOLUTION_TIMER_sf32 3
	#define MAC_CONTENTION_RESOLUTION_TIMER_sf40 4
	#define MAC_CONTENTION_RESOLUTION_TIMER_sf48 5
	#define MAC_CONTENTION_RESOLUTION_TIMER_sf56 6
	#define MAC_CONTENTION_RESOLUTION_TIMER_sf64 7	
	#define SIB2_MAC_CONTENTION_RESOLUTION_TIMER_BTS1 MAC_CONTENTION_RESOLUTION_TIMER_sf64

	#define SIB2_MAX_HARQ_MSG3TX_BTS1 5							/*1..8*/

	/*radioResourceConfigCommon.bcch-Config*/
	#define MODIFICATION_PERIOD_COEFF_N2 0
	#define MODIFICATION_PERIOD_COEFF_N4 1
	#define MODIFICATION_PERIOD_COEFF_N8 2
	#define MODIFICATION_PERIOD_COEFF_N16 3
	#define SIB2_MODIFICATION_PERIOD_COEFF_BTS1 MODIFICATION_PERIOD_COEFF_N2

	/*radioResourceConfigCommon.pcch-Config*/
	#define DEFAULT_PAGING_CYCLE_RF32 0
	#define DEFAULT_PAGING_CYCLE_RF64 1
	#define DEFAULT_PAGING_CYCLE_RF128 2
	#define DEFAULT_PAGING_CYCLE_RF256 3
	#define SIB2_DEFAULT_PAGING_CYCLE_BTS1 DEFAULT_PAGING_CYCLE_RF32
	
	#define NB_fourT 0
	#define NB_twoT 1
	#define NB_oneT 2
	#define NB_halfT 3
	#define NB_quarterT 4
	#define NB_oneEightT 5
	#define NB_oneSixteenthT 6
	#define NB_oneThirtySecondT 7
	#define SIB2_NB_BTS1 NB_oneEightT

	/*radioResourceConfigCommon.prach-Config*/
	#define SIB2_ROOT_SEQUENCE_INDEX_BTS1 128							/*0..837*/	
	#define SIB2_PRACH_CONFIG_INDEX_BTS1 12							/*0..63*/	
	#define SIB2_HIGH_SPEED_FLAG_BTS1 L1S_RELEASE						/*BOOLEAN*/	
	#define SIB2_ZERO_CORRELATION_ZONE_CONFIG_BTS1 0				/*0..15*/	
	#define SIB2_PRACH_FREQ_OFFSET_BTS1 0							/*0..94*/
	
	/*radioResourceConfigCommon.pdsch-ConfigCommon*/
	#define SIB2_REFERENCE_SIGNAL_POWER_BTS1 18						/*-60..50*/	
	#define SIB2_P_B_BTS1 0												/*0..3*/

	/*radioResourceConfigCommon.pusch-ConfigBasic*/
	#define SIB2_N_SB_BTS1 1											/*1..4*/
	
	#define HOPPING_MODE_interSubFrame 0
	#define HOPPING_MODE_intraAndInterSubFrame 1
	#define SIB2_HOPPING_MODE_BTS1 HOPPING_MODE_interSubFrame
	
	#define SIB2_PUSCH_HOPPING_OFFSET_BTS1 2 							/*0..98*/
	#define SIB2_enable64QAM_BTS1 L1S_RELEASE

	/*radioResourceConfigCommon.ul-ReferenceSignalsPUSCH*/
	#define SIB2_GROUP_HOPPING_SETUP_BTS1       L1S_RELEASE         /*BOOLEAN*/
	#define SIB2_GROUP_ASSIGNMENT_PUSCH_BTS1    0                   /*0..29*/	
	#define SIB2_SEQUENCE_HOPPING_ENABLED_BTS1  L1S_RELEASE         /*BOOLEAN*/	
	#define SIB2_CYCLIC_SHIFT_BTS1              0                   /*0..7*/

	/*radioResourceConfigCommon.pucch-ConfigCommon*/
	#define DELTA_PUCCH_SHIFT_ds1               0
	#define DELTA_PUCCH_SHIFT_ds2               1
	#define DELTA_PUCCH_SHIFT_ds3               2
	#define SIB2_DELTA_PUCCH_SHIFT_BTS1         DELTA_PUCCH_SHIFT_ds3
	#define SIB2_NRB_CQI_BTS1                   1                   /*0..98*/
	#define SIB2_NCS_AN_BTS1                    6                   /*0..7*/
	#define SIB2_N1PUCCH_AN_BTS1                2                   /*0..2047*/

	/*radioResourceConfigCommon.soundingRS-UL-ConfigCommon*/
	#define SIB2_SOUNDING_RS_UL_CONFIG_COMMON_BTS1 L1S_RELEASE

	#define SRS_BANDWIDTH_CONFIG_bw0 0
	#define SRS_BANDWIDTH_CONFIG_bw1 1
	#define SRS_BANDWIDTH_CONFIG_bw2 2
	#define SRS_BANDWIDTH_CONFIG_bw3 3
	#define SRS_BANDWIDTH_CONFIG_bw4 4
	#define SRS_BANDWIDTH_CONFIG_bw5 5
	#define SRS_BANDWIDTH_CONFIG_bw6 6
	#define SRS_BANDWIDTH_CONFIG_bw7 7
	#define SIB2_SRS_BANDWIDTH_CONFIG_BTS1 SRS_BANDWIDTH_CONFIG_bw7

	#define SRS_SUBFRAME_CONFIG_sc0 0
	#define SRS_SUBFRAME_CONFIG_sc1 1
	#define SRS_SUBFRAME_CONFIG_sc2 2
	#define SRS_SUBFRAME_CONFIG_sc3 3
	#define SRS_SUBFRAME_CONFIG_sc4 4
	#define SRS_SUBFRAME_CONFIG_sc5 5
	#define SRS_SUBFRAME_CONFIG_sc6 6
	#define SRS_SUBFRAME_CONFIG_sc7 7
	#define SRS_SUBFRAME_CONFIG_sc8 8
	#define SRS_SUBFRAME_CONFIG_sc9 9
	#define SRS_SUBFRAME_CONFIG_sc10 10
	#define SRS_SUBFRAME_CONFIG_sc11 11
	#define SRS_SUBFRAME_CONFIG_sc12 12
	#define SRS_SUBFRAME_CONFIG_sc13 13
	#define SRS_SUBFRAME_CONFIG_sc14 14
	#define SRS_SUBFRAME_CONFIG_sc15 15
	#define SIB2_SRS_SUBFRAME_CONFIG_BTS1 SRS_SUBFRAME_CONFIG_sc0
	
	#define SIB2_ACK_NACK_SRS_SIMULTANEOUS_TRANSMISSION_BTS1 L1S_RELEASE	
	#define SIB2_SRS_UP_PTS_BTS1 L1S_RELEASE


	/*radioResourceConfigCommon.uplinkPowerControlCommon.p0-NominalPUSCH*/
	#define SIB2_P0_NOMINAL_PUSCH_BTS1 -90						/*-126..24*/
	
	#define ALPHA_al0 0
	#define ALPHA_al04 1
	#define ALPHA_al05 2
	#define ALPHA_al06 3
	#define ALPHA_al07 4
	#define ALPHA_al08 5
	#define ALPHA_al09 6
	#define ALPHA_al1 7
	#define SIB2_ALPHA_BTS1 ALPHA_al1

	#define SIB2_P0_NOMINAL_PUCCH_BTS1 -96						/*-127..-96*/

	#define DELTA_PUCCH_FORMAT1_deltaF_minus2 0
	#define DELTA_PUCCH_FORMAT1_deltaF_0 1
	#define DELTA_PUCCH_FORMAT1_deltaF_2 2
	#define SIB2_DELTA_PUCCH_FORMAT1_deltaF_BTS1 DELTA_PUCCH_FORMAT1_deltaF_minus2

	#define DELTA_PUCCH_FORMAT1B_deltaF_1 0
	#define DELTA_PUCCH_FORMAT1B_deltaF_3 1
	#define DELTA_PUCCH_FORMAT1B_deltaF_5 2
	#define SIB2_DELTA_PUCCH_FORMAT1B_deltaF_BTS1 DELTA_PUCCH_FORMAT1B_deltaF_1

	#define DELTA_PUCCH_FORMAT2_deltaF_minus2 0
	#define DELTA_PUCCH_FORMAT2_deltaF_0 1
	#define DELTA_PUCCH_FORMAT2_deltaF_1 2
	#define DELTA_PUCCH_FORMAT2_deltaF_2 3
	#define SIB2_DELTA_PUCCH_FORMAT2_deltaF_BTS1 DELTA_PUCCH_FORMAT2_deltaF_minus2

	#define DELTA_PUCCH_FORMAT2A_deltaF_minus2 0
	#define DELTA_PUCCH_FORMAT2A_deltaF_0 1
	#define DELTA_PUCCH_FORMAT2A_deltaF_2 2
	#define SIB2_DELTA_PUCCH_FORMAT2A_deltaF_BTS1 DELTA_PUCCH_FORMAT2A_deltaF_minus2

	#define DELTA_PUCCH_FORMAT2B_deltaF_minus2 0
	#define DELTA_PUCCH_FORMAT2B_deltaF_0 1
	#define DELTA_PUCCH_FORMAT2B_deltaF_2 2
	#define SIB2_DELTA_PUCCH_FORMAT2B_deltaF_BTS1 DELTA_PUCCH_FORMAT2B_deltaF_minus2

	#define SIB2_DELTA_PREAMBLE_MSG3_BTS1 0							/*-1..6*/

	/*radioResourceConfigCommon.ul-CyclicPrefixLength*/
	#define UL_CYCLIC_PREFIX_LENGTH_len1 0
	#define UL_CYCLIC_PREFIX_LENGTH_len2 1 	
	#define SIB2_UL_CYCLIC_PREFIX_LENGTH_BTS1 UL_CYCLIC_PREFIX_LENGTH_len1

	/*ue-TimersAndConstants*/	
	#define T300_ms100 0
	#define T300_ms200 1
	#define T300_ms300 2
	#define T300_ms400 3
	#define T300_ms600 4	
	#define T300_ms1000 5
	#define T300_ms1500 6
	#define T300_ms2000 7
	#define SIB2_T300_BTS1 T300_ms1000

	#define T301_ms100 0
	#define T301_ms200 1
	#define T301_ms300 2
	#define T301_ms400 3
	#define T301_ms600 4	
	#define T301_ms1000 5
	#define T301_ms1500 6
	#define T301_ms2000 7
	#define SIB2_T301_BTS1 T301_ms1000

	#define T310_ms0 0
	#define T310_ms50 1
	#define T310_ms100 2
	#define T310_ms200 3
	#define T310_ms500 4	
	#define T310_ms1000 5
	#define T310_ms2000 6
	#define SIB2_T310_BTS1 T310_ms1000

	#define N310_n1 0
	#define N310_n2 1
	#define N310_n3 2
	#define N310_n4 3
	#define N310_n6 4
	#define N310_n8 5
	#define N310_n10 6
	#define N310_n20 7
	#define SIB2_N310_BTS1 N310_n1

	#define T311_ms1000 0
	#define T311_ms3000 1
	#define T311_ms5000 2
	#define T311_ms10000 3
	#define T311_ms15000 4	
	#define T311_ms20000 5
	#define T311_ms30000 6
	#define SIB2_T311_BTS1 T311_ms1000

	#define N311_n1 0
	#define N311_n2 1
	#define N311_n3 2
	#define N311_n4 3
	#define N311_n5 4
	#define N311_n6 5
	#define N311_n8 6
	#define N311_n10 7
	#define SIB2_N311_BTS1 N311_n1

	#define SIB2_UL_CARRIER_FREQ_BTS1 18000						/*0..65536*/
	#define SIB2_UL_BANDWIDTH_BTS1 BW_100_RB
	
	/*mbsfn-SubframeConfigList*/
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_BTS1 L1S_RELEASE /*L1S_RELEASE: list isn't present ; L1S_SETUP: list is present */
	#define RADIOFRAME_ALLOCATION_PERIOD_n1 0
	#define RADIOFRAME_ALLOCATION_PERIOD_n2 1
	#define RADIOFRAME_ALLOCATION_PERIOD_n4 2
	#define RADIOFRAME_ALLOCATION_PERIOD_n8 3
	#define RADIOFRAME_ALLOCATION_PERIOD_n16 4
	#define RADIOFRAME_ALLOCATION_PERIOD_n32 5
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_1_RADIOFRAME_ALLOCATION_PERIOD_BTS1 RADIOFRAME_ALLOCATION_PERIOD_n1 /*{n1, n2, n4, n8, n16, n32}*/ 
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_1_RADIOFRAME_ALLOCATION_OFFSET_BTS1 0
	#define SUBFRAME_ALLOCATION_LENGTH_ONE_FRAME 0
	#define SUBFRAME_ALLOCATION_LENGTH_FOUR_FRAME 1
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_1_SUBFRAME_ALLOCATION_LENGTH_BTS1 SUBFRAME_ALLOCATION_LENGTH_ONE_FRAME
	#define MBSFN_SF1 0x01 /* FDD only */
	#define MBSFN_SF2 0x02 /* FDD only */
	#define MBSFN_SF3 0x04 /* FDD and TDD */
	#define MBSFN_SF4 0x08 /* TDD only */
	#define MBSFN_SF6 0x10 /* FDD only */
	#define MBSFN_SF7 0x20 /* FDD and TDD */
	#define MBSFN_SF8 0x40 /* FDD and TDD */
	#define MBSFN_SF9 0x80 /* TDD only */
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_1_SUBFRAME_ALLOCATION_PATTERN_BTS1 (MBSFN_SF2|MBSFN_SF3|MBSFN_SF7)
//}

/*SIB3*/
#define SIB3_Q_HYST_BTS1 0
#define SIB3_THRESH_SERVING_LOW_BTS1 0                         /*0..31*/ 
#define SIB3_S_INTRA_SEARCH_P_BTS1 0				           /*0..31*/
#define SIB3_S_INTRA_SEARCH_Q_BTS1 0						   /*0..31*/
#define SIB3_S_NON_INTRA_SEARCH_P_BTS1 0					   /*0..31*/
#define SIB3_S_NON_INTRA_SEARCH_Q_BTS1 0					   /*0..31*/
#define SIB3_INTRA_Q_RXLEV_MIN_BTS1 -70                        /*-70..22*/
#define SIB3_INTRA_Q_QUAL_MIN_BTS1 -34                         /*-34..-3*/
#define SIB3_INTRA_P_MAX_BTS1 23                              /*-30..33*/ 
#define SIB3_INTRA_T_RESELECTION_BTS1 0                        /*-0..7*/

/*SIB4*/
#define SIB4_INTRA_NEIGHBOR_Q_OFFSET_CELL_BTS1 0

/*SIB5*/
#define SIB5_THRESHX_HIGH_BTS1 0                               /*0..31*/ 
#define SIB5_THRESHX_LOW_BTS1 0                                /*0..31*/ 
#define SIB5_INTER_Q_RXLEV_MIN_BTS1 -70                        /*-70..22*/
#define SIB5_INTER_Q_QUAL_MIN_BTS1 -34                         /*-34..-3*/
#define SIB5_INTER_P_MAX_BTS1 23                              /*-30..33*/ 
#define SIB5_INTER_T_RESELECTION_BTS1 0                        /*-0..7*/
#define SIB5_INTER_NEIGHBOR_Q_OFFSET_CELL_BTS1 0                
#define SIB5_INTER_Q_OFFSET_FREQUENCY_BTS1 0

/*SIB13*/
#define SIB13_MBSFN_1_AREA_ID_BTS1 0 //(0..255)
#define MBSFN_NON_MBSFN_REGION_LENGTH_s1 0
#define MBSFN_NON_MBSFN_REGION_LENGTH_s2 1
#define SIB13_MBSFN_1_NON_MBSFN_REGION_LENGTH_BTS1 MBSFN_NON_MBSFN_REGION_LENGTH_s1 //s1:0 ; s2:1
#define SIB13_MBSFN_1_NOTIFICATION_INDICATOR_BTS1 0 //(0..7)
#define MCCH_REPETITION_PERIOD_rf32 0
#define MCCH_REPETITION_PERIOD_rf64 1
#define MCCH_REPETITION_PERIOD_rf128 2
#define MCCH_REPETITION_PERIOD_rf256 3
#define SIB13_MBSFN_1_MCCH_REPETITION_PERIOD_BTS1 MCCH_REPETITION_PERIOD_rf32 //(0..7)
#define SIB13_MBSFN_1_MCCH_OFFSET_BTS1 0 //(0..10)
#define MCCH_MODIFICATION_PERIOD_rf512 0
#define MCCH_MODIFICATION_PERIOD_rf1024 1
#define SIB13_MBSFN_1_MCCH_MODIFICATION_PERIOD_BTS1 MCCH_MODIFICATION_PERIOD_rf512 //(0..7)
#define SIB13_MBSFN_1_MCCH_SF_ALLOC_INFO_BTS1 MBSFN_SF1
#define MCCH_SIGNALLING_MCS_n2 0
#define MCCH_SIGNALLING_MCS_n7 1
#define MCCH_SIGNALLING_MCS_n13 2
#define MCCH_SIGNALLING_MCS_n19 3
#define SIB13_MBSFN_1_MCCH_SIGNALLING_MCS_BTS1 MCCH_SIGNALLING_MCS_n2
#define MBMS_NOTIFICATION_REPETITION_COEFF_n2 0
#define MBMS_NOTIFICATION_REPETITION_COEFF_n4 1
#define SIB13_MBMS_NOTIFICATION_REPETITION_COEFF_BTS1 MBMS_NOTIFICATION_REPETITION_COEFF_n2
#define SIB13_MBMS_NOTIFICATION_OFFSET_BTS1 0 //0..10
#define SIB13_MBMS_NOTIFICATION_SF_INDEX_BTS1 1 //1..6


/*rrcConnectionSetup.radioResourceConfigDedicated*/
//{
	/*mac-MainConfig*/
	/*mac-MainConfig.explicitValue.ul-SCH-Config*/
	#define MAX_HARQ_TX_n1 0
	#define MAX_HARQ_TX_n2 1
	#define MAX_HARQ_TX_n3 2
	#define MAX_HARQ_TX_n4 3
	#define MAX_HARQ_TX_n5 4	
	#define MAX_HARQ_TX_n6 5
	#define MAX_HARQ_TX_n7 6
	#define MAX_HARQ_TX_n8 7
	#define MAX_HARQ_TX_n10 8
	#define MAX_HARQ_TX_n12 9
	#define MAX_HARQ_TX_n16 10
	#define MAX_HARQ_TX_n20 11
	#define MAX_HARQ_TX_n24 12
	#define MAX_HARQ_TX_n28 13
	#define RRC_SETUP_MAX_HARQ_TX_BTS1 MAX_HARQ_TX_n1

	#define PERIODIC_BSR_TIMER_sf5 0
	#define PERIODIC_BSR_TIMER_sf10 1
	#define PERIODIC_BSR_TIMER_sf16 2
	#define PERIODIC_BSR_TIMER_sf20 3
	#define PERIODIC_BSR_TIMER_sf32 4
	#define PERIODIC_BSR_TIMER_sf40 5
	#define PERIODIC_BSR_TIMER_sf64 6
	#define PERIODIC_BSR_TIMER_sf80 7
	#define PERIODIC_BSR_TIMER_sf128 8
	#define PERIODIC_BSR_TIMER_sf160 9
	#define PERIODIC_BSR_TIMER_sf320 10
	#define PERIODIC_BSR_TIMER_sf640 11
	#define PERIODIC_BSR_TIMER_sf1280 12
	#define PERIODIC_BSR_TIMER_sf2560 13
	#define PERIODIC_BSR_TIMER_infinity 14
	#define RRC_SETUP_PERIODIC_BSR_TIMER_BTS1 PERIODIC_BSR_TIMER_sf5

	#define RETX_BSR_TIMER_sf320 0
	#define RETX_BSR_TIMER_sf640 1
	#define RETX_BSR_TIMER_sf1280 2
	#define RETX_BSR_TIMER_sf2560 3
	#define RETX_BSR_TIMER_sf5120 4
	#define RETX_BSR_TIMER_sf10240 5
	#define RRC_SETUP_RETX_BSR_TIMER_BTS1 RETX_BSR_TIMER_sf320

	#define RRC_SETUP_TTI_BUNDLING_BTS1 L1S_RELEASE							/*BOOLEAN*/
	
	/*mac-MainConfig.explicitValue.drx-Config*/
	#define RRC_SETUP_DRX_CONFIG_BTS1 L1S_RELEASE							/*BOOLEAN*/
	
	#define ON_DURATION_TIMER_psf1 0
	#define ON_DURATION_TIMER_psf2 1
	#define ON_DURATION_TIMER_psf3 2
	#define ON_DURATION_TIMER_psf4 3
	#define ON_DURATION_TIMER_psf5 4
	#define ON_DURATION_TIMER_psf6 5
	#define ON_DURATION_TIMER_psf8 6
	#define ON_DURATION_TIMER_psf10 7
	#define ON_DURATION_TIMER_psf20 8
	#define ON_DURATION_TIMER_psf30 9
	#define ON_DURATION_TIMER_psf40 10
	#define ON_DURATION_TIMER_psf50 11
	#define ON_DURATION_TIMER_psf60 12
	#define ON_DURATION_TIMER_psf80 13
	#define ON_DURATION_TIMER_psf100 14
	#define ON_DURATION_TIMER_psf200 15
	#define RRC_SETUP_ON_DURATION_TIMER_BTS1 ON_DURATION_TIMER_psf10

	#define DRX_INACTIVITY_TIMER_psf1 0
	#define DRX_INACTIVITY_TIMER_psf2 1
	#define DRX_INACTIVITY_TIMER_psf3 2
	#define DRX_INACTIVITY_TIMER_psf4 3
	#define DRX_INACTIVITY_TIMER_psf5 4
	#define DRX_INACTIVITY_TIMER_psf6 5
	#define DRX_INACTIVITY_TIMER_psf8 6
	#define DRX_INACTIVITY_TIMER_psf10 7
	#define DRX_INACTIVITY_TIMER_psf20 8
	#define DRX_INACTIVITY_TIMER_psf30 9
	#define DRX_INACTIVITY_TIMER_psf40 10
	#define DRX_INACTIVITY_TIMER_psf50 11
	#define DRX_INACTIVITY_TIMER_psf60 12
	#define DRX_INACTIVITY_TIMER_psf80 13
	#define DRX_INACTIVITY_TIMER_psf100 14
	#define DRX_INACTIVITY_TIMER_psf200 15
	#define DRX_INACTIVITY_TIMER_psf300 16
	#define DRX_INACTIVITY_TIMER_psf500 17
	#define DRX_INACTIVITY_TIMER_psf750 18
	#define DRX_INACTIVITY_TIMER_psf1280 19
	#define DRX_INACTIVITY_TIMER_psf1920 20
	#define DRX_INACTIVITY_TIMER_psf2560 21
	#define RRC_SETUP_DRX_INACTIVITY_TIMER_BTS1 DRX_INACTIVITY_TIMER_psf1

	#define DRX_RETRANSMISSION_TIMER_psf1 0
	#define DRX_RETRANSMISSION_TIMER_psf2 1
	#define DRX_RETRANSMISSION_TIMER_psf4 2
	#define DRX_RETRANSMISSION_TIMER_psf6 3
	#define DRX_RETRANSMISSION_TIMER_psf8 4
	#define DRX_RETRANSMISSION_TIMER_psf16 5
	#define DRX_RETRANSMISSION_TIMER_psf24 6
	#define DRX_RETRANSMISSION_TIMER_psf33 7
	#define RRC_SETUP_DRX_RETRANSMISSION_TIMER_BTS1 DRX_RETRANSMISSION_TIMER_psf1

	#define LONG_DRX_CYCLE_sf10 0
	#define LONG_DRX_CYCLE_sf20 1
	#define LONG_DRX_CYCLE_sf32 2
	#define LONG_DRX_CYCLE_sf40 3
	#define LONG_DRX_CYCLE_sf64 4
	#define LONG_DRX_CYCLE_sf80 5
	#define LONG_DRX_CYCLE_sf128 6
	#define LONG_DRX_CYCLE_sf160 7
	#define LONG_DRX_CYCLE_sf256 8
	#define LONG_DRX_CYCLE_sf320 9
	#define LONG_DRX_CYCLE_sf512 10
	#define LONG_DRX_CYCLE_sf640 11
	#define LONG_DRX_CYCLE_sf1024 12
	#define LONG_DRX_CYCLE_sf1280 13
	#define LONG_DRX_CYCLE_sf2048 14
	#define LONG_DRX_CYCLE_sf2560 15
	#define NO_DRX 16
	#define RRC_SETUP_LONG_DRX_CYCLE_BTS1 LONG_DRX_CYCLE_sf40

	#define RRC_SETUP_CYCLE_START_OFFSET_BTS1 0				/*0..2559(depends on LONG_DRX_CYCLE)*/

	#define RRC_SETUP_SHORT_DRX_SETUP_BTS1 L1S_RELEASE
	
	#define SHORT_DRX_CYCLE_sf2 0
	#define SHORT_DRX_CYCLE_sf5 1
	#define SHORT_DRX_CYCLE_sf8 2
	#define SHORT_DRX_CYCLE_sf10 3
	#define SHORT_DRX_CYCLE_sf16 4
	#define SHORT_DRX_CYCLE_sf20 5
	#define SHORT_DRX_CYCLE_sf32 6
	#define SHORT_DRX_CYCLE_sf40 7
	#define SHORT_DRX_CYCLE_sf64 8
	#define SHORT_DRX_CYCLE_sf80 9
	#define SHORT_DRX_CYCLE_sf128 10
	#define SHORT_DRX_CYCLE_sf160 11
	#define RRC_SETUP_SHORT_DRX_CYCLE_BTS1 SHORT_DRX_CYCLE_sf40
	#define RRC_SETUP_DRX_SHORT_CYCLE_TIMER_BTS1 1				/*1..16*/

	/*sps-Config*/
	#define RRC_SETUP_SPS_CONFIG_DL_BTS1 L1S_RELEASE	
	#define RRC_SETUP_SPS_CONFIG_UL_BTS1 L1S_RELEASE	
	#define RRC_SETUP_SEMI_PERSIST_SCHED_C_RNTI_BTS1 0xFFF0

	/*sps-ConfigDL*/
	#define SEMI_PERSIST_SCHED_INTERVAL_DL_sf10 0
	#define SEMI_PERSIST_SCHED_INTERVAL_DL_sf20 1
	#define SEMI_PERSIST_SCHED_INTERVAL_DL_sf32 2
	#define SEMI_PERSIST_SCHED_INTERVAL_DL_sf40 3
	#define SEMI_PERSIST_SCHED_INTERVAL_DL_sf64 4
	#define SEMI_PERSIST_SCHED_INTERVAL_DL_sf80 5
	#define SEMI_PERSIST_SCHED_INTERVAL_DL_sf128 6
	#define SEMI_PERSIST_SCHED_INTERVAL_DL_sf160 7
	#define SEMI_PERSIST_SCHED_INTERVAL_DL_sf320 8
	#define SEMI_PERSIST_SCHED_INTERVAL_DL_sf640 9
	#define RRC_SETUP_SEMI_PERSIST_SCHED_INTERVAL_DL_BTS1 SEMI_PERSIST_SCHED_INTERVAL_DL_sf20

	#define RRC_SETUP_NUMBER_OF_CONF_SPS_PROCESSES_BTS1 1		/*1..8*/

	#define RRC_SETUP_N1_PUCCH_AN_PERSISTENT_LIST_SIZE_BTS1 4	/*1..4*/
	#define RRC_SETUP_N1_PUCCH_AN_PERSISTENT_LIST_1_BTS1 3		/*0..2047*/
	#define RRC_SETUP_N1_PUCCH_AN_PERSISTENT_LIST_2_BTS1 4		/*0..2047*/
	#define RRC_SETUP_N1_PUCCH_AN_PERSISTENT_LIST_3_BTS1 5		/*0..2047*/
	#define RRC_SETUP_N1_PUCCH_AN_PERSISTENT_LIST_4_BTS1 6		/*0..2047*/	

	/*sps-ConfigUL*/
	#define SEMI_PERSIST_SCHED_INTERVAL_UL_sf10 0
	#define SEMI_PERSIST_SCHED_INTERVAL_UL_sf20 1
	#define SEMI_PERSIST_SCHED_INTERVAL_UL_sf32 2
	#define SEMI_PERSIST_SCHED_INTERVAL_UL_sf40 3
	#define SEMI_PERSIST_SCHED_INTERVAL_UL_sf64 4
	#define SEMI_PERSIST_SCHED_INTERVAL_UL_sf80 5
	#define SEMI_PERSIST_SCHED_INTERVAL_UL_sf128 6
	#define SEMI_PERSIST_SCHED_INTERVAL_UL_sf160 7
	#define SEMI_PERSIST_SCHED_INTERVAL_UL_sf320 8
	#define SEMI_PERSIST_SCHED_INTERVAL_UL_sf640 9
	#define RRC_SETUP_SEMI_PERSIST_SCHED_INTERVAL_UL_BTS1 SEMI_PERSIST_SCHED_INTERVAL_UL_sf20

	#define IMPLICIT_RELEASE_AFTER_e2 0
	#define IMPLICIT_RELEASE_AFTER_e3 1
	#define IMPLICIT_RELEASE_AFTER_e4 2
	#define IMPLICIT_RELEASE_AFTER_e8 3
	#define RRC_SETUP_IMPLICIT_RELEASE_AFTER_BTS1 IMPLICIT_RELEASE_AFTER_e8

	#define RRC_SETUP_TWO_INTERVALS_CONFIG_BTS1 L1S_RELEASE

	#define RRC_SETUP_P0_NOMINAL_PUSCH_PERSISTENT_BTS1 -35	/*-126..24*/
	#define RRC_SETUP_P0_UE_PUSCH_PERSISTENT_BTS1 0			/*-8..7*/
	
	/*physicalConfigDedicated*/
	/*physicalConfigDedicated.pdsch-ConfigDedicated*/
	#define P_A_dB_minus6 0
	#define P_A_dB_minus4dot77 1
	#define P_A_dB_minus3 2
	#define P_A_dB_minus1dot77 3
	#define P_A_dB_0 4
	#define P_A_dB_1 5
	#define P_A_dB_2 6
	#define P_A_dB_3 7
	#define RRC_SETUP_P_A_dB_BTS1 P_A_dB_0

	/*physicalConfigDedicated.pucch-ConfigDedicated*/
	#define RRC_SETUP_ACK_NACK_REPETITION_SETUP_BTS1 L1S_RELEASE

	#define REPETITION_FACTOR_n2 0
	#define REPETITION_FACTOR_n4 1
	#define REPETITION_FACTOR_n6 2
	#define RRC_SETUP_REPETITION_FACTOR_BTS1  REPETITION_FACTOR_n2

	#define RRC_SETUP_N1_PUCCH_ANREP_BTS1 0 							/*0..2047*/

	#define TDD_ACK_NACK_FEEDBACK_MODE_bundling 0 
	#define TDD_ACK_NACK_FEEDBACK_MODE_multiplexing 1
	#define RRC_SETUP_TDD_ACK_NACK_FEEDBACK_MODE_BTS1 TDD_ACK_NACK_FEEDBACK_MODE_bundling

	#define RRC_SETUP_NRB_CQI_BTS1 1									/*0..98*/
	#define RRC_SETUP_NCS_AN_BTS1 6										/*0..7*/
	#define RRC_SETUP_N1PUCCH_AN_BTS1 2								/*0..2047*/	

	/*radioResourceConfigCommon.pucch-ConfigDedicated-v1020*/
    #define RRC_SETUP_PUCCH_FORMAT_BTS1             0xFF            /*0,1,0xFF*/
    #define RRC_SETUP_N3_PUCCH_AN_LIST_0_BTS1       0xFFFF          /*0..549, 0xFFFF*/
    #define RRC_SETUP_N3_PUCCH_AN_LIST_1_BTS1       0xFFFF          /*0..549, 0xFFFF*/
    #define RRC_SETUP_N3_PUCCH_AN_LIST_2_BTS1       0xFFFF          /*0..549, 0xFFFF*/
    #define RRC_SETUP_N3_PUCCH_AN_LIST_3_BTS1       0xFFFF          /*0..549, 0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_0_BTS1  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_1_BTS1  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_2_BTS1  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_3_BTS1  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_0_BTS1  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_1_BTS1  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_2_BTS1  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_3_BTS1  0xFFFF          /*0..2047,0xFFFF*/
    
    #define RRC_SETUP_SIMULTANEOUS_PUCCH_PUSCH_BTS1 L1S_RELEASE     /*0,1*/

	/*radioResourceConfigCommon.pucch-ConfigDedicated-v1130*/
    #define RRC_SETUP_N_PUCCH_ID_BTS1               0xFF            /*0..503, 0xFF*/
    #define RRC_SETUP_N1_PUCCH_AN_BTS1              0xFF            /*0..2047, 0xFF*/

	/*physicalConfigDedicated.pusch-ConfigDedicated*/
	#define RRC_SETUP_BETA_OFFSET_ACK_INDEX_BTS1    0
	#define RRC_SETUP_BETA_OFFSET_RI_INDEX_BTS1     0
	#define RRC_SETUP_BETA_OFFSET_CQI_INDEX_BTS1    2

	/*physicalConfigDedicated.pusch-ConfigDedicated-v1130*/
    #define RRC_SETUP_N_PUSCH_ID_BTS1               0xFFFF          /*0..509,0xFFFF*/
    #define RRC_SETUP_N_DMRS_CSH_ID_BTS1            0xFFFF          /*0..509,0xFFFF*/

	/*physicalConfigDedicated.uplinkPowerControlDedicated*/
	#define RRC_SETUP_P0_UE_PUSCH_BTS1 0								/*-8..7*/
	#define RRC_SETUP_DELTA_MCS_SETUP_BTS1 L1S_RELEASE				/*BOOLEAN*/
	#define RRC_SETUP_ACCUMULATION_SETUP_BTS1 L1S_SETUP				/*BOOLEAN*/
	#define RRC_SETUP_P0_UE_PUCCH_BTS1 0								/*-8..7*/
	#define RRC_SETUP_PSRS_OFFSET_BTS1 7								/*0..15*/

	#define FILTER_COEFFICIENT_fc0 0
	#define FILTER_COEFFICIENT_fc1 1
	#define FILTER_COEFFICIENT_fc2 2
	#define FILTER_COEFFICIENT_fc3 3
	#define FILTER_COEFFICIENT_fc4 4
	#define FILTER_COEFFICIENT_fc5 5
	#define FILTER_COEFFICIENT_fc6 6
	#define FILTER_COEFFICIENT_fc7 7
	#define FILTER_COEFFICIENT_fc8 8
	#define FILTER_COEFFICIENT_fc9 9
	#define FILTER_COEFFICIENT_fc11 10
	#define FILTER_COEFFICIENT_fc13 11
	#define FILTER_COEFFICIENT_fc15 12
	#define FILTER_COEFFICIENT_fc17 13
	#define FILTER_COEFFICIENT_fc19 14
	#define RRC_SETUP_FILTER_COEFFICIENT_BTS1 FILTER_COEFFICIENT_fc4

	/*physicalConfigDedicated.uplinkPowerControlDedicated-v1020*/
    #define RRC_SETUP_PSRS_OFFSET_AP_BTS1           0xFF            /*0..31,0xFF*/

	/*physicalConfigDedicated.tpc-PDCCH-ConfigPUCCH*/
	#define RRC_SETUP_TPC_PDCCH_CONFIG_PUCCH_SETUP_BTS1 L1S_RELEASE
	#define RRC_SETUP_TPC_PDCCH_CONFIG_PUCCH_TPC_RNTI_BTS1 0x000B

	#define TPC_PDCCH_CONFIG_PUCCH_TPC_FORMAT3 0	
	#define TPC_PDCCH_CONFIG_PUCCH_TPC_FORMAT3A 1	
	#define RRC_SETUP_TPC_PDCCH_CONFIG_PUCCH_TPC_FORMAT_BTS1 TPC_PDCCH_CONFIG_PUCCH_TPC_FORMAT3

	#define RRC_SETUP_TPC_PDCCH_CONFIG_PUCCH_TPC_INDEX_BTS1 1				/*DCI format 3: 1~15, DCI format 3A: 1~30*/

	/*physicalConfigDedicated.tpc-PDCCH-ConfigPUSCH*/
	#define RRC_SETUP_TPC_PDCCH_CONFIG_PUSCH_SETUP_BTS1 L1S_RELEASE
	#define RRC_SETUP_TPC_PDCCH_CONFIG_PUSCH_TPC_RNTI_BTS1 0x000C

	#define TPC_PDCCH_CONFIG_PUSCH_TPC_FORMAT3 0	
	#define TPC_PDCCH_CONFIG_PUSCH_TPC_FORMAT3A 1	
	#define RRC_SETUP_TPC_PDCCH_CONFIG_PUSCH_TPC_FORMAT_BTS1 TPC_PDCCH_CONFIG_PUSCH_TPC_FORMAT3

	#define RRC_SETUP_TPC_PDCCH_CONFIG_PUSCH_TPC_INDEX_BTS1 1				/*DCI format 3: 1~15, DCI format 3A: 1~30*/

	/*physicalConfigDedicated.cqi-ReportConfig*/
	#define CQI_REPORT_MODE_APERIODIC_rm12                  0
	#define CQI_REPORT_MODE_APERIODIC_rm20                  1
	#define CQI_REPORT_MODE_APERIODIC_rm22                  2
	#define CQI_REPORT_MODE_APERIODIC_rm30                  3
	#define CQI_REPORT_MODE_APERIODIC_rm31                  4
	#define CQI_REPORT_MODE_APERIODIC_invalid               0xFF 
	#define RRC_SETUP_CQI_REPORT_MODE_APERIODIC_BTS1        CQI_REPORT_MODE_APERIODIC_invalid

	#define RRC_SETUP_CQI_MASK_R9_BTS1                      L1S_RELEASE
	#define RRC_SETUP_PMI_RI_REPORT_R9_BTS1                 L1S_RELEASE

	#define RRC_SETUP_NOM_PDSCH_RS_EPRE_OFFSET_BTS1         0                       /*-1..6*/

	#define RRC_SETUP_CQI_REPORT_PERIODIC_SETUP_BTS1        L1S_RELEASE
	#define RRC_SETUP_CQI_PUCCH_RESOURCE_INDEX_BTS1         0                       /*0..1185*/
	#define RRC_SETUP_CQI_PMI_CONFIG_INDEX_BTS1             0                       /*0..1023*/

	#define CQI_FORMAT_INDICATOR_PERIODIC_widebandCQI       0
	#define CQI_FORMAT_INDICATOR_PERIODIC_SubbandCQI        1
	#define RRC_SETUP_CQI_FORMAT_INDICATOR_PERIODIC_BTS1    CQI_FORMAT_INDICATOR_PERIODIC_widebandCQI

	#define RRC_SETUP_CQI_SUBBAND_K_BTS1                    1                       /*1..4*/
	#define RRC_SETUP_RI_CONFIG_INDEX_BTS1                  0                       /*0..1023*/
	#define RRC_SETUP_SIMULTANEOUS_ACK_NACK_AND_CQI_BTS1 L1S_RELEASE

    #define RRC_SETUP_PERIODICITY_FACTOR_BTS1               2                       /*2,4*/

	/*physicalConfigDedicated.csi-RS-Config-r10*/
	#define RRC_SETUP_CSI_RS_CONFIG_R10_SETUP_BTS1                        L1S_RELEASE
	#define RRC_SETUP_CSI_RS_CONFIG_R10_ANTENNA_PORTS_COUNT_BTS1          ONE_ANTENNA
	#define RRC_SETUP_CSI_RS_CONFIG_R10_RESOURCE_CONFIG_BTS1              0
	#define RRC_SETUP_CSI_RS_CONFIG_R10_SUBFRAME_CONFIG_BTS1              0
	#define RRC_SETUP_CSI_RS_CONFIG_R10_p_C_BTS1                          0
	#define RRC_SETUP_CSI_RS_CONFIG_R10_ZERO_TX_POWER_CSI_RS_SETUP_BTS1   L1S_RELEASE
	#define RRC_SETUP_CSI_RS_CONFIG_R10_ZERO_TX_POWER_CSI_RS_RESOURCE_CONFIG_LIST_BTS1   0x0000
	#define RRC_SETUP_CSI_RS_CONFIG_R10_ZERO_TX_POWER_CSI_RS_SUBFRAME_CONFIG_BTS1   0

	/*physicalConfigDedicated.soundingRS-UL-ConfigDedicated*/
	#define RRC_SETUP_SOUNDING_RS_CONFIG_DEDICATED_SETUP_BTS1 L1S_RELEASE

	#define SRS_BANDWIDTH_bw0 0 
	#define SRS_BANDWIDTH_bw1 1 
	#define SRS_BANDWIDTH_bw2 2 
	#define SRS_BANDWIDTH_bw3 3
	#define RRC_SETUP_SRS_BANDWIDTH_BTS1 SRS_BANDWIDTH_bw0

	#define SRS_HOPPING_BANDWIDTH_hbw0 0 
	#define SRS_HOPPING_BANDWIDTH_hbw1 1 
	#define SRS_HOPPING_BANDWIDTH_hbw2 2 
	#define SRS_HOPPING_BANDWIDTH_hbw3 3
	#define RRC_SETUP_SRS_HOPPING_BANDWIDTH_BTS1 SRS_HOPPING_BANDWIDTH_hbw0

	#define RRC_SETUP_FREQ_DOMAIN_POSITION_BTS1 0							/*0..1023*/
	#define RRC_SETUP_SRS_DURATION_BTS1 L1S_RELEASE
	#define RRC_SETUP_SRS_CONFIG_INDEX_BTS1 0								/*0..1023*/
	#define RRC_SETUP_SRS_TRANSMISSION_COMB_BTS1 0						/*0..1*/
	#define RRC_SETUP_SRS_CYCLIC_SHIFT_BTS1 0								/*0..7*/

	/*physicalConfigDedicated.antennaInfo*/
	#define TRANSMISSION_MODE_tm1 0
	#define TRANSMISSION_MODE_tm2 1
	#define TRANSMISSION_MODE_tm3 2
	#define TRANSMISSION_MODE_tm4 3
	#define TRANSMISSION_MODE_tm5 4
	#define TRANSMISSION_MODE_tm6 5
	#define TRANSMISSION_MODE_tm7 6
	#define TRANSMISSION_MODE_tm8 7
	#define TRANSMISSION_MODE_tm9 8
	#define RRC_SETUP_TRANSMISSION_MODE_BTS1 TRANSMISSION_MODE_tm1

	#define RRC_SETUP_UE_TRANSMIT_ANTENNA_SELECTION_SETUP_BTS1 L1S_RELEASE
	#define UE_TRANSMIT_ANTENNA_SELECTION_closedloop 0
	#define UE_TRANSMIT_ANTENNA_SELECTION_openloop 1
	#define RRC_SETUP_UE_TRANSMIT_ANTENNA_SELECTION_BTS1 UE_TRANSMIT_ANTENNA_SELECTION_closedloop

	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm3_bitstring_BTS1 0x01					/*bit string size: 2, value range: 0x00..0x03*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm3_bitstring_BTS1 0x01					/*bit string size: 4, value range: 0x00..0x0F*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm4_bitstring_BTS1 0x01					/*bit string size: 6, value range: 0x00..0x3F*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm4_bitstring_BTS1 0X0000000000000001		/*bit string size: 64, value range: 0X0000000000000000..0xFFFFFFFFFFFFFFFF*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm5_bitstring_BTS1 0x01					/*bit string size: 4, value range: 0x00..0x0F*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm5_bitstring_BTS1 0x0001					/*bit string size: 16, value range: 0x0000..0xFFFF*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm6_bitstring_BTS1 0x01					/*bit string size: 4, value range: 0x00..0x0F*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm6_bitstring_BTS1 0x0001					/*bit string size: 16, value range: 0x0000..0xFFFF*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm8_bitstring_BTS1 0x01					/*bit string size: 6, value range: 0x00..0x3F*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm8_bitstring_BTS1 0x00000001				/*bit string size: 32, value range: 0x00000000..0xFFFFFFFF*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm9_bitstring_BTS1 0x01					/*bit string size: 6, value range: 0x00..0x3F*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm9_bitstring_BTS1 0x0000000000000001		/*bit string size: 64, value range: 0X0000000000000000..0xFFFFFFFFFFFFFFFF*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n8TxAntenna_tm9_bitstring_BTS1 0x0000000000000000000000000001		/*bit string size: 109, value range: 0X0000000000000000000000000000..0xFFFFFFFFFFFFFFFFFFFFFFFFFFF*/

	/*physicalConfigDedicated.schedulingRequestConfig*/
	#define RRC_SETUP_SCHEDULING_REQUEST_CONFIG_SETUP_BTS1 L1S_RELEASE
	#define RRC_SETUP_SR_PUCCH_RESOURCE_INDEX_BTS1 0						/*0..2047*/
	#define RRC_SETUP_SR_CONFIG_INDEX_BTS1 0                         				 /*0..157*/

	#define DSR_TRANS_MAX_n4 0
	#define DSR_TRANS_MAX_n8 1
	#define DSR_TRANS_MAX_n16 2
	#define DSR_TRANS_MAX_n32 3
	#define DSR_TRANS_MAX_n64 4
	#define RRC_SETUP_DSR_TRANS_MAX_BTS1 DSR_TRANS_MAX_n4

	/*physicalConfigDedicated.cif-Presence-r10*/
	#define RRC_SETUP_CIF_PRESENCE_BTS1 KAL_FALSE
//}

/*rrcConnectionReconfiguration*/
//{
	/*measConfig.reportConfig*/
	#define RRC_RECONFIG_REPORT_EVENT_A2_THRESHOLD_BTS1 0
	#define RRC_RECONFIG_REPORT_EVENT_A3_OFFSET_BTS1 0
	#define RRC_RECONFIG_REPORT_EVENT_A6_OFFSET_BTS1 0
	#define RRC_RECONFIG_REPORT_EVENT_HYSTERESIS_BTS1 0
	#define RRC_RECONFIG_REPORT_EVENT_TIME_TO_TRIGGER_BTS1 0 
	
	/*measConfig.measGapConfig*/
	#define RRC_RECONFIG_GAP_CONFIG_SETUP_BTS1 L1S_RELEASE

	#define GAP_PATTERN_gp0 0
	#define GAP_PATTERN_gp1 1
	#define NO_GAP 2
	#define RRC_RECONFIG_GAP_PATTERN_BTS1 GAP_PATTERN_gp0
	
	#define RRC_RECONFIG_GAP_OFFSET_gp0_BTS1 10											/*0..39*/
	#define RRC_RECONFIG_GAP_OFFSET_gp1_BTS1 10											/*0..79*/

	/*measConfig.s-Measure*/
	#define RRC_RECONFIG_S_MEASURE_BTS1 0												/*0..97*/

	/*measConfig.quantityConfig*/
	#define FILTER_COEFFICIENT_RSRP_fc0 0
	#define FILTER_COEFFICIENT_RSRP_fc1 1
	#define FILTER_COEFFICIENT_RSRP_fc2 2
	#define FILTER_COEFFICIENT_RSRP_fc3 3
	#define FILTER_COEFFICIENT_RSRP_fc4 4
	#define FILTER_COEFFICIENT_RSRP_fc5 5
	#define FILTER_COEFFICIENT_RSRP_fc6 6
	#define FILTER_COEFFICIENT_RSRP_fc7 7
	#define FILTER_COEFFICIENT_RSRP_fc8 8
	#define FILTER_COEFFICIENT_RSRP_fc9 9
	#define FILTER_COEFFICIENT_RSRP_fc11 10
	#define FILTER_COEFFICIENT_RSRP_fc12 11
	#define FILTER_COEFFICIENT_RSRP_fc15 12
	#define FILTER_COEFFICIENT_RSRP_fc17 13
	#define FILTER_COEFFICIENT_RSRP_fc19 14
	#define RRC_RECONFIG_FILTER_COEFFICIENT_RSRP_BTS1 FILTER_COEFFICIENT_RSRP_fc4 

	#define FILTER_COEFFICIENT_RSRQ_fc0 0
	#define FILTER_COEFFICIENT_RSRQ_fc1 1
	#define FILTER_COEFFICIENT_RSRQ_fc2 2
	#define FILTER_COEFFICIENT_RSRQ_fc3 3
	#define FILTER_COEFFICIENT_RSRQ_fc4 4
	#define FILTER_COEFFICIENT_RSRQ_fc5 5
	#define FILTER_COEFFICIENT_RSRQ_fc6 6
	#define FILTER_COEFFICIENT_RSRQ_fc7 7
	#define FILTER_COEFFICIENT_RSRQ_fc8 8
	#define FILTER_COEFFICIENT_RSRQ_fc9 9
	#define FILTER_COEFFICIENT_RSRQ_fc11 10
	#define FILTER_COEFFICIENT_RSRQ_fc12 11
	#define FILTER_COEFFICIENT_RSRQ_fc15 12
	#define FILTER_COEFFICIENT_RSRQ_fc17 13
	#define FILTER_COEFFICIENT_RSRQ_fc19 14
	#define RRC_RECONFIG_FILTER_COEFFICIENT_RSRQ_BTS1 FILTER_COEFFICIENT_RSRQ_fc4 
	
	/*measConfig.measCycleSCell-r10 = {sf160, sf256, sf320, sf512, sf640, sf1024, sf1280} */
	#define MEAS_CYCLE_SCELL_R10_sf160    0
	#define MEAS_CYCLE_SCELL_R10_sf256    1
	#define MEAS_CYCLE_SCELL_R10_sf320    2
	#define MEAS_CYCLE_SCELL_R10_sf512    3
	#define MEAS_CYCLE_SCELL_R10_sf640    4
	#define MEAS_CYCLE_SCELL_R10_sf1024   5
	#define MEAS_CYCLE_SCELL_R10_sf1280   6
	#define MEAS_CYCLE_SCELL_R10_NOCONFIG 0xFF
	#define RRC_RECONFIG_MEAS_CYCLE_SCELL_R10_BTS1 MEAS_CYCLE_SCELL_R10_NOCONFIG
	
	/*measConfig.measSubframePatternNeigh-r10*/
	#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_CONFIG_NEIGH_R10_BTS1 L1S_RELEASE
	#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_CONFIG_NEIGH_R10_PATTERN_BTS1 {0}
	#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_CONFIG_NEIGH_R10_PATTERN_FDD_BTS1 { \
		                                                                             0, 0, 0, 1, 1, 0, 0, 0, 0, 0, /* SFN % 4 = 0, Subframe0..9 */ \
                                                                                 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, /* SFN % 4 = 1, Subframe0..9 */ \
                                                                                 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, /* SFN % 4 = 2, Subframe0..9 */ \
                                                                                 0, 0, 0, 1, 1, 0, 0, 0, 0, 0  /* SFN % 4 = 3, Subframe0..9 */ \
                                                                               }
	#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_CONFIG_NEIGH_R10_PATTERN_TDD_BTS1 { \
		                                                                             0, 0, 0, 1, 1, 0, 0, 0, 0, 0, /* SFN % 2 = 0, Subframe0..9 */ \
                                                                                 0, 0, 0, 1, 1, 0, 0, 0, 0, 0  /* SFN % 2 = 1, Subframe0..9 */ \
                                                                               }
	/*measConfig.measSubframeCellList-r10 / PhysCellIdRange*/
	#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_CONFIG_NEIGH_R10_CELL_1_PCI_START_BTS1 0 /*(0..503)*/
	#define PCI_RANGE_n4   0
	#define PCI_RANGE_n8   1
	#define PCI_RANGE_n12  2
	#define PCI_RANGE_n16  3
	#define PCI_RANGE_n24  4
	#define PCI_RANGE_n32  5
	#define PCI_RANGE_n48  6
	#define PCI_RANGE_n64  7
	#define PCI_RANGE_n84  8
	#define PCI_RANGE_n96  9
	#define PCI_RANGE_n128 10
	#define PCI_RANGE_n168 11
	#define PCI_RANGE_n252 12
	#define PCI_RANGE_n504 13
	#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_CONFIG_NEIGH_R10_CELL_1_PCI_RANGE_BTS1 PCI_RANGE_n4 /*n4, n8, n12, n16, n24, n32, n48, n64, n84, n96, n128, n168, n252, n504*/

	/*mobilityControlInfo*/
//	#define RRC_RECONFIG_TARGET_PHYS_CELL_ID_BTS1 0											/*0..503*/
	#define RRC_RECONFIG_TARGET_DL_CARRIER_FREQ_BTS1 0									/*0..65535*/
	#define RRC_RECONFIG_TARGET_UL_CARRIER_FREQ_BTS1 0									/*0..65535*/
	
	#define RRC_RECONFIG_TARGET_DL_BANDWIDTH_BTS1 BW_100_RB							/*0..65535*/
	#define RRC_RECONFIG_TARGET_UL_BANDWIDTH_BTS1 BW_100_RB							/*0..65535*/
			
	#define T304_ms50 0
	#define T304_ms100 1
	#define T304_ms150 2
	#define T304_ms200 3
	#define T304_ms500 4	
	#define T304_ms1000 5
	#define T304_ms2000 6
	#define RRC_RECONFIG_T304_BTS1 T304_ms50

	/*mobilityControlInfo.radioResourceConfigCommon*/
	//{	
		/*rach-ConfigCommon.preambleInfo*/
		#define RRC_RECONFIG_NUMBER_OF_RA_PREAMBLES_BTS1 NUMBER_OF_RA_PREAMBLES_n64
		#define RRC_RECONFIG_SIZE_OF_RA_PREAMBLES_GROUP_A_BTS1 SIZE_OF_RA_PREAMBLES_GROUP_A_n64
		#define RRC_RECONFIG_MESSAGE_POWER_OFFSET_GROUP_B_BTS1 MESSAGE_POWER_OFFSET_GROUP_B_minusinfinity

		/*rach-ConfigCommon.powerRampingParameters*/
		#define RRC_RECONFIG_POWER_RAMPING_STEP_BTS1 POWER_RAMPING_STEP_dB0
		#define RRC_RECONFIG_PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_BTS1 PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_dBm_minus120

		/*rach-ConfigCommon.ra-SupervisionInfo*/
		#define RRC_RECONFIG_PREAMBLE_TRANS_MAX_BTS1 PREAMBLE_TRANS_MAX_n200

		/*rach-ConfigCommon.ra-SupervisionInfo*/
		#define RRC_RECONFIG_RA_RESPONSE_WINDOW_SIZE_BTS1 RA_RESPONSE_WINDOW_SIZE_sf10	
		#define RRC_RECONFIG_MAC_CONTENTION_RESOLUTION_TIMER MAC_CONTENTION_RESOLUTION_TIMER_sf64
		#define RRC_RECONFIG_MAX_HARQ_MSG3TX_BTS1 5							/*1..8*/

		/*prach-Config*/
		#define RRC_RECONFIG_ROOT_SEQUENCE_INDEX_BTS1 0						/*0..837*/
		#define RRC_RECONFIG_PRACH_CONFIG_INDEX_BTS1 12						/*0..63*/
		#define RRC_RECONFIG_HIGH_SPEED_FLAG_BTS1 L1S_RELEASE					/*BOOLEAN*/
		#define RRC_RECONFIG_ZERO_CORRELATION_ZONE_CONFIG_BTS1 0			/*0..15*/
		#define RRC_RECONFIG_PRACH_FREQ_OFFSET_BTS1 0						/*0..94*/

		/*pdsch-ConfigCommon*/
		#define RRC_RECONFIG_REFERENCE_SIGNAL_POWER_BTS1 -50					/*-60..50*/
		#define RRC_RECONFIG_P_B_BTS1 0											/*0..3*/

		/*pusch-ConfigBasic*/
		#define RRC_RECONFIG_N_SB_BTS1 1										/*1..4*/
		#define RRC_RECONFIG_HOPPING_MODE_BTS1 HOPPING_MODE_interSubFrame
		#define RRC_RECONFIG_PUSCH_HOPPING_OFFSET_BTS1 2 						/*0..98*/

		/*ul-ReferenceSignalsPUSCH*/
		#define RRC_RECONFIG_GROUP_HOPPING_SETUP_BTS1 L1S_RELEASE			/*BOOLEAN*/
		#define RRC_RECONFIG_GROUP_ASSIGNMENT_PUSCH_BTS1 0					/*0..29*/
		#define RRC_RECONFIG_SEQUENCE_HOPPING_SETUP_BTS1 L1S_RELEASE			/*BOOLEAN*/
		#define RRC_RECONFIG_CYCLIC_SHIFT_BTS1 0								/*0..7*/

		/*phich-Config*/
		#define RRC_RECONFIG_PHICH_DURATION_BTS1 PHICH_DURATION_NORMAL
		#define RRC_RECONFIG_PHICH_RESOURCE_BTS1 PHICH_RESOURCE_oneSixth

		/*pucch-ConfigCommon*/
		#define RRC_RECONFIG_DELTA_PUCCH_SHIFT_BTS1 DELTA_PUCCH_SHIFT_ds3
		#define RRC_RECONFIG_NRB_CQI_BTS1 1										/*0..98*/
		#define RRC_RECONFIG_NCS_AN_BTS1 6										/*0..7*/
		#define RRC_RECONFIG_N1PUCCH_AN_BTS1 2									/*0..2047*/

		/*soundingRS-UL-ConfigCommon*/
		#define RRC_RECONFIG_SOUNDING_RS_UL_CONFIG_COMMON_BTS1 L1S_RELEASE /*CHOICE*/
		#define RRC_RECONFIG_SRS_BANDWIDTH_CONFIG_BTS1 SRS_BANDWIDTH_CONFIG_bw7
		#define RRC_RECONFIG_SRS_SUBFRAME_CONFIG_BTS1  SRS_SUBFRAME_CONFIG_sc0
		#define RRC_RECONFIG_ACK_NACK_SRS_SIMULTANEOUS_TRANSMISSION_BTS1 L1S_RELEASE /*BOOLEAN*/
		#define RRC_RECONFIG_SRS_UP_PTS_BTS1 L1S_RELEASE


		/*uplinkPowerControlCommon.p0-NominalPUSCH*/
		#define RRC_RECONFIG_P0_NOMINAL_PUSCH_BTS1 19						/*-126..24*/
		#define RRC_RECONFIG_ALPHA_BTS1 ALPHA_al1
		#define RRC_RECONFIG_P0_NOMINAL_PUCCH -96						/*-127..-96*/
		#define RRC_RECONFIG_DELTA_PUCCH_FORMAT1_deltaF_BTS1 DELTA_PUCCH_FORMAT1_deltaF_minus2
		#define RRC_RECONFIG_DELTA_PUCCH_FORMAT1B_deltaF_BTS1 DELTA_PUCCH_FORMAT1B_deltaF_1
		#define RRC_RECONFIG_DELTA_PUCCH_FORMAT2_deltaF_BTS1 DELTA_PUCCH_FORMAT2_deltaF_minus2	
		#define RRC_RECONFIG_DELTA_PUCCH_FORMAT2A_deltaF_BTS1 DELTA_PUCCH_FORMAT2A_deltaF_minus2	
		#define RRC_RECONFIG_DELTA_PUCCH_FORMAT2B_deltaF_BTS1 DELTA_PUCCH_FORMAT2B_deltaF_minus2

		/*antennaInfoCommon.antennaPortsCount*/
		#define RRC_RECONFIG_ANTENNA_PORTS_COUNT_an1 0
		#define RRC_RECONFIG_ANTENNA_PORTS_COUNT_an2 1
		#define RRC_RECONFIG_ANTENNA_PORTS_COUNT_an4 2
		#define RRC_RECONFIG_ANTENNA_PORTS_COUNT_BTS1 RRC_RECONFIG_ANTENNA_PORTS_COUNT_an1

		/*p-Max*/
		#define RRC_RECONFIG_P_MAX_BTS1 23										/*-30..33*/

		/*tdd-Config*/
		#define RRC_RECONFIG_SUBFRAME_ASSIGNMENT_BTS1 SUBFRAME_ASSIGNMENT_sa1
		#define RRC_RECONFIG_SPECIAL_SUBFRAME_PATTERN_BTS1 SPECIAL_SUBFRAME_PATTERN_ssp4

		/*ul-CyclicPrefixLength*/
		#define RRC_RECONFIG_UL_CYCLIC_PREFIX_LENGTH_BTS1 UL_CYCLIC_PREFIX_LENGTH_len1
		
		/*ue-TimersAndConstants*/	
		#define RRC_RECONFIG_T300_BTS1 T300_ms100
		#define RRC_RECONFIG_T301_BTS1 T301_ms100
		#define RRC_RECONFIG_T310_BTS1 T310_ms0	
		#define RRC_RECONFIG_N310_BTS1 N310_n1
		#define RRC_RECONFIG_T311_BTS1 T311_ms1000	
		#define RRC_RECONFIG_N311_BTS1 N311_n1
		#define RRC_RECONFIG_UL_CARRIER_FREQ_BTS1 18000				/*0..65536*/
		#define RRC_RECONFIG_UL_BANDWIDTH_BTS1 BW_100_RB
	//}
	/*mobilityControlInfo.rach-ConfigDedicated*/
	#define RRC_RECONFIG_PREAMBLE_INDEX_BTS1 0						/*0..63*/
	#define RRC_RECONFIG_PRACH_MASK_INDEX_BTS1 0						/*0..15*/

	/*radioResourceConfigDedicated*/
	//{
		/*mac-MainConfig*/
		/*mac-MainConfig.explicitValue.ul-SCH-Config*/
		#define RRC_RECONFIG_MAX_HARQ_TX_BTS1 MAX_HARQ_TX_n5
		#define RRC_RECONFIG_PERIODIC_BSR_TIMER_BTS1 PERIODIC_BSR_TIMER_sf5
		#define RRC_RECONFIG_RETX_BSR_TIMER_BTS1 RETX_BSR_TIMER_sf320

		#define RRC_RECONFIG_TTI_BUNDLING_BTS1 L1S_RELEASE 						/*BOOLEAN*/
			
		/*mac-MainConfig.explicitValue.drx-Config*/
		
		#define RRC_RECONFIG_DRX_CONFIG_BTS1 L1S_RELEASE								/*BOOLEAN*/
		#define RRC_RECONFIG_ON_DURATION_TIMER_BTS1 ON_DURATION_TIMER_psf5
		#define RRC_RECONFIG_DRX_INACTIVITY_TIMER_BTS1 DRX_INACTIVITY_TIMER_psf5
		#define RRC_RECONFIG_DRX_RETRANSMISSION_TIMER_BTS1 DRX_RETRANSMISSION_TIMER_psf16
		#define RRC_RECONFIG_LONG_DRX_CYCLE_BTS1 LONG_DRX_CYCLE_sf40
		#define RRC_RECONFIG_CYCLE_START_OFFSET_BTS1 0							/*0..2559(depends on LONG_DRX_CYCLE)*/
		#define RRC_RECONFIG_SHORT_DRX_SETUP_BTS1 L1S_RELEASE
		#define RRC_RECONFIG_SHORT_DRX_CYCLE_BTS1 SHORT_DRX_CYCLE_sf2
		#define RRC_RECONFIG_DRX_SHORT_CYCLE_TIMER_BTS1 1						/*1..16*/

		/*sps-Config*/
		#define RRC_RECONFIG_SPS_CONFIG_DL_BTS1 L1S_RELEASE
		#define RRC_RECONFIG_SPS_CONFIG_UL_BTS1 L1S_RELEASE
		#define RRC_RECONFIG_SEMI_PERSIST_SCHED_C_RNTI_BTS1 0xFFF0

		/*sps-ConfigDL*/
		#define RRC_RECONFIG_SEMI_PERSIST_SCHED_INTERVAL_DL_BTS1 SEMI_PERSIST_SCHED_INTERVAL_DL_sf20

		#define RRC_RECONFIG_NUMBER_OF_CONF_SPS_PROCESSES_BTS1 3 				/*1..8*/
		#define RRC_RECONFIG_N1_PUCCH_AN_PERSISTENT_LIST_SIZE_BTS1 4				/*1..4*/
		#define RRC_RECONFIG_N1_PUCCH_AN_PERSISTENT_LIST_1_BTS1 3				/*0..2047*/
		#define RRC_RECONFIG_N1_PUCCH_AN_PERSISTENT_LIST_2_BTS1 4				/*0..2047*/
		#define RRC_RECONFIG_N1_PUCCH_AN_PERSISTENT_LIST_3_BTS1 5				/*0..2047*/
		#define RRC_RECONFIG_N1_PUCCH_AN_PERSISTENT_LIST_4_BTS1 6				/*0..2047*/
		
		/*sps-ConfigUL*/
		#define RRC_RECONFIG_SEMI_PERSIST_SCHED_INTERVAL_UL_BTS1 SEMI_PERSIST_SCHED_INTERVAL_UL_sf20
		#define RRC_RECONFIG_IMPLICIT_RELEASE_AFTER_BTS1 IMPLICIT_RELEASE_AFTER_e8
		#define RRC_RECONFIG_TWO_INTERVALS_CONFIG_BTS1 L1S_RELEASE
		#define RRC_RECONFIG_P0_NOMINAL_PUSCH_PERSISTENT_BTS1 20				/*-126..24*/
		#define RRC_RECONFIG_P0_UE_PUSCH_PERSISTENT_BTS1 -126					/*-8..7*/		
			
		/*physicalConfigDedicated*/
		/*physicalConfigDedicated.pdsch-ConfigDedicated*/
		#define RRC_RECONFIG_P_A_dB_BTS1 P_A_dB_0

		/*physicalConfigDedicated.pucch-ConfigDedicated*/
		#define RRC_RECONFIG_ACK_NACK_REPETITION_SETUP_BTS1 L1S_RELEASE
		#define RRC_RECONFIG_REPETITION_FACTOR_BTS1	REPETITION_FACTOR_n2
		#define RRC_RECONFIG_N1_PUCCH_ANREP_BTS1 0								/*0..2047*/
		#define RRC_RECONFIG_TDD_ACK_NACK_FEEDBACK_MODE_BTS1 TDD_ACK_NACK_FEEDBACK_MODE_bundling
		#define RRC_RECONFIG_NRB_CQI_BTS1 1											/*0..98*/
		#define RRC_RECONFIG_NCS_AN_BTS1 6											/*0..7*/
		#define RRC_RECONFIG_N1PUCCH_AN_BTS1 2										/*0..2047*/ 

        /*radioResourceConfigCommon.pucch-ConfigDedicated-v1020*/
        #define RRC_RECONFIG_PUCCH_FORMAT_BTS1             0xFF            /*0,1,0xFF*/
        #define RRC_RECONFIG_N3_PUCCH_AN_LIST_0_BTS1       0xFFFF          /*0..549, 0xFFFF*/
        #define RRC_RECONFIG_N3_PUCCH_AN_LIST_1_BTS1       0xFFFF          /*0..549, 0xFFFF*/
        #define RRC_RECONFIG_N3_PUCCH_AN_LIST_2_BTS1       0xFFFF          /*0..549, 0xFFFF*/
        #define RRC_RECONFIG_N3_PUCCH_AN_LIST_3_BTS1       0xFFFF          /*0..549, 0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_0_BTS1  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_1_BTS1  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_2_BTS1  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_3_BTS1  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_0_BTS1  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_1_BTS1  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_2_BTS1  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_3_BTS1  0xFFFF          /*0..2047,0xFFFF*/

        #define RRC_RECONFIG_SIMULTANEOUS_PUCCH_PUSCH_BTS1 L1S_RELEASE     /*0,1*/

        /*radioResourceConfigCommon.pucch-ConfigDedicated-v1130*/
        #define RRC_RECONFIG_N_PUCCH_ID_BTS1               0xFF            /*0..503, 0xFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_BTS1              0xFF            /*0..2047, 0xFF*/
		
		/*physicalConfigDedicated.pusch-ConfigDedicated*/
		#define RRC_RECONFIG_BETA_OFFSET_ACK_INDEX_BTS1 0
		#define RRC_RECONFIG_BETA_OFFSET_RI_INDEX_BTS1 0
		#define RRC_RECONFIG_BETA_OFFSET_CQI_INDEX_BTS1 2

        /*physicalConfigDedicated.pusch-ConfigDedicated-v1130*/
        #define RRC_RECONFIG_N_PUSCH_ID_BTS1               0xFFFF          /*0..509,0xFFFF*/
        #define RRC_RECONFIG_N_DMRS_CSH_ID_BTS1            0xFFFF          /*0..509,0xFFFF*/

		/*physicalConfigDedicated.uplinkPowerControlDedicated*/
		#define RRC_RECONFIG_P0_UE_PUSCH_BTS1 2									/*-8..7*/
		#define RRC_RECONFIG_DELTA_MCS_SETUP_BTS1 L1S_RELEASE						/*BOOLEAN*/
		#define RRC_RECONFIG_ACCUMULATION_SETUP_BTS1 L1S_SETUP					/*BOOLEAN*/
		#define RRC_RECONFIG_P0_UE_PUCCH_BTS1 2									/*-8..7*/
		#define RRC_RECONFIG_PSRS_OFFSET_BTS1 7									/*0..15*/
		#define RRC_RECONFIG_FILTER_COEFFICIENT_BTS1 FILTER_COEFFICIENT_fc4

        /*physicalConfigDedicated.uplinkPowerControlDedicated-v1020*/
        #define RRC_RECONFIG_PSRS_OFFSET_AP_BTS1           0xFF            /*0..31,0xFF*/

		/*physicalConfigDedicated.tpc-PDCCH-ConfigPUCCH*/
		#define RRC_RECONFIG_TPC_PDCCH_CONFIG_PUCCH_SETUP_BTS1 L1S_RELEASE
		#define RRC_RECONFIG_TPC_PDCCH_CONFIG_PUCCH_TPC_RNTI_BTS1 0x000B	
		#define RRC_RECONFIG_TPC_PDCCH_CONFIG_PUCCH_TPC_FORMAT_BTS1 TPC_PDCCH_CONFIG_PUCCH_TPC_FORMAT3
		#define RRC_RECONFIG_TPC_PDCCH_CONFIG_PUCCH_TPC_INDEX_BTS1 1 			/*DCI format 3: 1~15, DCI format 3A: 1~30*/

		/*physicalConfigDedicated.tpc-PDCCH-ConfigPUSCH*/
		#define RRC_RECONFIG_TPC_PDCCH_CONFIG_PUSCH_SETUP_BTS1 L1S_RELEASE
		#define RRC_RECONFIG_TPC_PDCCH_CONFIG_PUSCH_TPC_RNTI_BTS1 0x000C
		#define RRC_RECONFIG_TPC_PDCCH_CONFIG_PUSCH_TPC_FORMAT_BTS1 TPC_PDCCH_CONFIG_PUSCH_TPC_FORMAT3
		#define RRC_RECONFIG_TPC_PDCCH_CONFIG_PUSCH_TPC_INDEX_BTS1 1 			/*DCI format 3: 1~15, DCI format 3A: 1~30*/

		/*physicalConfigDedicated.cqi-ReportConfig*/
		#define RRC_RECONFIG_CQI_REPORT_MODE_APERIODIC_BTS1 CQI_REPORT_MODE_APERIODIC_invalid
		#define RRC_RECONFIG_CQI_MASK_R9_BTS1 L1S_RELEASE
		#define RRC_RECONFIG_PMI_RI_REPORT_R9_BTS1 L1S_RELEASE
		#define RRC_RECONFIG_NOM_PDSCH_RS_EPRE_OFFSET_BTS1 0 					/*-1..6*/
		#define RRC_RECONFIG_CQI_MASK_R9_BTS1 L1S_RELEASE
		#define RRC_RECONFIG_PMI_RI_REPORT_R9_BTS1 L1S_RELEASE		
		#define RRC_RECONFIG_CQI_REPORT_PERIODIC_SETUP_BTS1 L1S_RELEASE
		#define RRC_RECONFIG_CQI_PUCCH_RESOURCE_INDEX_BTS1 0 					/*0..1185*/
		#define RRC_RECONFIG_CQI_PMI_CONFIG_INDEX_BTS1 0 							/*0..1023*/
		#define RRC_RECONFIG_CQI_FORMAT_INDICATOR_PERIODIC_BTS1 CQI_FORMAT_INDICATOR_PERIODIC_widebandCQI
		#define RRC_RECONFIG_CQI_SUBBAND_K_BTS1 1									/*1..4*/
		#define RRC_RECONFIG_RI_CONFIG_INDEX_BTS1 0								/*0..1023*/
		#define RRC_RECONFIG_SIMULTANEOUS_ACK_NACK_AND_CQI_BTS1 L1S_RELEASE

        #define RRC_RECONFIG_PERIODICITY_FACTOR_BTS1               2                       /*2,4*/

		/*physicalConfigDedicated.csi-RS-Config-r10*/
		#define RRC_RECONFIG_CSI_RS_CONFIG_R10_SETUP_BTS1						  L1S_RELEASE
		#define RRC_RECONFIG_CSI_RS_CONFIG_R10_ANTENNA_PORTS_COUNT_BTS1		  ONE_ANTENNA
		#define RRC_RECONFIG_CSI_RS_CONFIG_R10_RESOURCE_CONFIG_BTS1			  0
		#define RRC_RECONFIG_CSI_RS_CONFIG_R10_SUBFRAME_CONFIG_BTS1			  0
		#define RRC_RECONFIG_CSI_RS_CONFIG_R10_p_C_BTS1						  0
		#define RRC_RECONFIG_CSI_RS_CONFIG_R10_ZERO_TX_POWER_CSI_RS_SETUP_BTS1   L1S_RELEASE
		#define RRC_RECONFIG_CSI_RS_CONFIG_R10_ZERO_TX_POWER_CSI_RS_RESOURCE_CONFIG_LIST_BTS1	 0x0000
		#define RRC_RECONFIG_CSI_RS_CONFIG_R10_ZERO_TX_POWER_CSI_RS_SUBFRAME_CONFIG_BTS1	0

		/*physicalConfigDedicated.soundingRS-UL-ConfigDedicated*/
		#define RRC_RECONFIG_SOUNDING_RS_CONFIG_DEDICATED_SETUP_BTS1 L1S_RELEASE
		#define RRC_RECONFIG_SRS_BANDWIDTH_BTS1 SRS_BANDWIDTH_bw0
		#define RRC_RECONFIG_SRS_HOPPING_BANDWIDTH_BTS1 SRS_HOPPING_BANDWIDTH_hbw0
		#define RRC_RECONFIG_FREQ_DOMAIN_POSITION_BTS1 0 							/*0..1023*/
		#define RRC_RECONFIG_SRS_DURATION_BTS1 L1S_RELEASE
		#define RRC_RECONFIG_SRS_CONFIG_INDEX_BTS1 0 								/*0..1023*/
		#define RRC_RECONFIG_SRS_TRANSMISSION_COMB_BTS1 0							/*0..1*/
		#define RRC_RECONFIG_SRS_CYCLIC_SHIFT_BTS1 0 								/*0..7*/

		/*physicalConfigDedicated.antennaInfo*/
		#define RRC_RECONFIG_TRANSMISSION_MODE_BTS1 TRANSMISSION_MODE_tm1
		#define RRC_RECONFIG_UE_TRANSMIT_ANTENNA_SELECTION_SETUP_BTS1 L1S_RELEASE
		#define RRC_RECONFIG_UE_TRANSMIT_ANTENNA_SELECTION_BTS1 UE_TRANSMIT_ANTENNA_SELECTION_closedloop

		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm3_bitstring_BTS1 0x01					/*bit string size: 2, value range: 0x00..0x03*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm3_bitstring_BTS1 0x01					/*bit string size: 4, value range: 0x00..0x0F*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm4_bitstring_BTS1 0x01					/*bit string size: 6, value range: 0x00..0x3F*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm4_bitstring_BTS1 0X0000000000000001		/*bit string size: 64, value range: 0X0000000000000000..0xFFFFFFFFFFFFFFFF*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm5_bitstring_BTS1 0x01					/*bit string size: 4, value range: 0x00..0x0F*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm5_bitstring_BTS1 0x0001					/*bit string size: 16, value range: 0x0000..0xFFFF*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm6_bitstring_BTS1 0x01					/*bit string size: 4, value range: 0x00..0x0F*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm6_bitstring_BTS1 0x0001					/*bit string size: 16, value range: 0x0000..0xFFFF*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm8_bitstring_BTS1 0x01					/*bit string size: 6, value range: 0x00..0x3F*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm8_bitstring_BTS1 0x00000001				/*bit string size: 32, value range: 0x00000000..0xFFFFFFFF*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm9_bitstring_BTS1 0x01					/*bit string size: 6, value range: 0x00..0x3F*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm9_bitstring_BTS1 0x0000000000000001		/*bit string size: 64, value range: 0X0000000000000000..0xFFFFFFFFFFFFFFFF*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n8TxAntenna_tm9_bitstring_BTS1 0x0000000000000000000000000001		/*bit string size: 109, value range: 0X0000000000000000000000000000..0xFFFFFFFFFFFFFFFFFFFFFFFFFFF*/

		/*physicalConfigDedicated.schedulingRequestConfig*/
		#define RRC_RECONFIG_SCHEDULING_REQUEST_CONFIG_SETUP_BTS1 L1S_RELEASE
		#define RRC_RECONFIG_SR_PUCCH_RESOURCE_INDEX_BTS1 0							/*0..2047*/
		#define RRC_RECONFIG_SR_CONFIG_INDEX_BTS1 0									/*0..157*/
		#define RRC_RECONFIG_DSR_TRANS_MAX_BTS1 DSR_TRANS_MAX_n4
		
		/*measSubframePatternPCell-r10*/
		#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_PCELL_R10_BTS1 L1S_RELEASE
		#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_PCELL_R10_PATTERN_BTS1 {0}
		#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_PCELL_R10_PATTERN_FDD_BTS1 { \
		                                                                        0, 0, 0, 1, 1, 0, 0, 0, 0, 0, /* SFN % 4 = 0, Subframe0..9 */ \
                                                                            0, 0, 0, 1, 1, 0, 0, 0, 0, 0, /* SFN % 4 = 1, Subframe0..9 */ \
                                                                            0, 0, 0, 1, 1, 0, 0, 0, 0, 0, /* SFN % 4 = 2, Subframe0..9 */ \
                                                                            0, 0, 0, 1, 1, 0, 0, 0, 0, 0  /* SFN % 4 = 3, Subframe0..9 */ \
                                                                          }
		#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_PCELL_R10_PATTERN_TDD_BTS1 { \
		                                                                        0, 0, 0, 1, 1, 0, 0, 0, 0, 0, /* SFN % 2 = 0, Subframe0..9 */ \
                                                                            0, 0, 0, 1, 1, 0, 0, 0, 0, 0  /* SFN % 2 = 1, Subframe0..9 */ \
                                                                          }
		
	//}
	/*securityConfigHO*/
	#define HANDOVER_TYPE_intraLTE 0
	#define HANDOVER_TYPE_interRAT 1
	#define RRC_RECONFIG_HANDOVER_TYPE_BTS1 HANDOVER_TYPE_intraLTE

	#define CYPERING_ALGORITHM_eea0 0
	#define CYPERING_ALGORITHM_eea1 1
	#define CYPERING_ALGORITHM_eea2 2
	#define RRC_RECONFIG_CYPERING_ALGORITHM_BTS1 CYPERING_ALGORITHM_eea0
	
	#define INTEGRITY_PROT_ALGORITHM_eia0v920 0
	#define INTEGRITY_PROT_ALGORITHM_eia1 1
	#define INTEGRITY_PROT_ALGORITHM_eia2 2
	#define RRC_RECONFIG_INTEGRITY_PROT_ALGORITHM_BTS1 INTEGRITY_PROT_ALGORITHM_eia0v920
	
	/*RRCConnectionReconfiguration-v1020-IEs*/
	/*SCellToReleaseList-r10*/
	#define RRC_RECONFIG_SCELL_RELEASE_SCELL_INDEX_BTS1 1
	/*SCellToAddModList-r10*/
	#define RRC_RECONFIG_SCELL_ADD_SCELL_INDEX_BTS1 1
	/*crossCarrierSchedulingConfig-r10*/
	#define RRC_RECONFIG_SCELL_PHYSICAL_CONFIG_DEDICATED_CCS_CONFIG_BTS1 L1S_RELEASE
	#define RRC_RECONFIG_SCELL_PHYSICAL_CONFIG_DEDICATED_CCS_CONFIG_OWN_CIF_CONFIG_BTS1 L1S_FALSE //Configures Carrier Indicator Field (CIF)
	#define RRC_RECONFIG_SCELL_PHYSICAL_CONFIG_DEDICATED_CCS_CONFIG_OTHER_SCHEDULING_CELLID_BTS1 0 //0..7
	#define RRC_RECONFIG_SCELL_PHYSICAL_CONFIG_DEDICATED_CCS_CONFIG_OTHER_PDSCH_START_BTS1 3 //2..4 for 1.4M and 1..3 for other BW
//}
/*Paging*/
#define PAGING_SYSTEM_INFO_MODIFICATION_BTS1 L1S_RELEASE
#define PAGING_ETWS_INDICATION_BTS1 L1S_RELEASE
#define PAGING_CMAS_INDICATION_BTS1 L1S_RELEASE

/* OTDOA */
#define OTDOA_ASSIST_DATA_REF_CELL_PRS_BW_BTS1 BW_100_RB
#define OTDOA_ASSIST_DATA_REF_CELL_PRS_CONFIG_IDX_BTS1 0

#define PRS_NO_CONSECUTIVE_SUBFRAME_sf1 0
#define PRS_NO_CONSECUTIVE_SUBFRAME_sf2 1
#define PRS_NO_CONSECUTIVE_SUBFRAME_sf4 2
#define PRS_NO_CONSECUTIVE_SUBFRAME_sf6 3
#define OTDOA_ASSIST_DATA_REF_CELL_PRS_NO_DL_FRAME_BTS1 PRS_NO_CONSECUTIVE_SUBFRAME_sf1
#define OTDOA_PRS_SUBFRAME_OFFSET_VALID_BTS1 L1S_RELEASE 
#define OTDOA_PRS_SUBFRAME_OFFSET_BTS1 0

/* MBMS MCCH info / mbsfnAreaConfiguration */
/* CSA: Common Subframe Allocation */
#define MBMS_CSA_PERIOD_n4   0
#define MBMS_CSA_PERIOD_n8   1
#define MBMS_CSA_PERIOD_n16  2
#define MBMS_CSA_PERIOD_n32  3
#define MBMS_CSA_PERIOD_n64  4
#define MBMS_CSA_PERIOD_n128 5
#define MBMS_CSA_PERIOD_n256 6
#define MCCH_MSG_MBSFN_AREA_CONFIGURATION_CSA_PERIOD_BTS1 MBMS_CSA_PERIOD_n8
#define MCCH_MSG_MBSFN_AREA_CONFIGURATION_CSA_1_FRAME_ALLOC_PERIOD_BTS1 RADIOFRAME_ALLOCATION_PERIOD_n1
#define MCCH_MSG_MBSFN_AREA_CONFIGURATION_CSA_1_FRAME_ALLOC_OFFSET_BTS1 0
#define MCCH_MSG_MBSFN_AREA_CONFIGURATION_CSA_1_SUBFRAME_ALLOCATION_LENGTH_BTS1 SUBFRAME_ALLOCATION_LENGTH_ONE_FRAME
#define MCCH_MSG_MBSFN_AREA_CONFIGURATION_CSA_1_SUBFRAME_ALLOCATION_PATTERN_BTS1 (MBSFN_SF3|MBSFN_SF7|MBSFN_SF8)
#define MCCH_MSG_MBSFN_AREA_CONFIGURATION_PMCH_INFO_1_PMCH_CONFIG_SF_ALLOC_END_BTS1 47
#define MCCH_MSG_MBSFN_AREA_CONFIGURATION_PMCH_INFO_1_PMCH_CONFIG_DATA_MCS_BTS1 9
#define MBMS_MSP_PERIOD_n8   0
#define MBMS_MSP_PERIOD_n16  1
#define MBMS_MSP_PERIOD_n32  2
#define MBMS_MSP_PERIOD_n64  3
#define MBMS_MSP_PERIOD_n128 4
#define MBMS_MSP_PERIOD_n256 5
#define MBMS_MSP_PERIOD_n512 6
#define MBMS_MSP_PERIOD_n1024 7
#define MCCH_MSG_MBSFN_AREA_CONFIGURATION_PMCH_INFO_1_PMCH_CONFIG_MCH_SCHEDULING_PERIOD_BTS1 MBMS_MSP_PERIOD_n8


/*==========================RRC Message for BTS2 ==========================*/
#define CFI_VALUE_BTS2 2									/*1..3*/

/* PHY Signal Power */
#define CELL_RS_POWER_BTS2 PWR2
#define PSS_POWER_BTS2 PWR2
#define SSS_POWER_BTS2 PWR2
#define PCFICH_POWER_BTS2 PWR2
#define PHICH_POWER_BTS2 PWR2
#define PHICH_TOTAL_POWER_BTS2 PWR2
#define PDCCH_POWER_BTS2 PWR2
#define PBCH_POWER_BTS2 PWR2
#define PDSCH_POWER_BTS2 PWR2
#define CSI_RS_POWER_BTS2 PWR2

/*AWGN power*/
#define AWGN_POWER_BTS2 -98

/*OCNG Config*/
#define OCNG_SETUP_BTS2 L1S_SETUP							/*BOOLEAN*/
#define OCNG_POWER_BTS2 PWR2					    		/*99.0..25.0*/

/*Cell Config*/
#define PHYS_CELL_ID_BTS2 2								/*0..503*/
#define CELL_OFFSET_BTS2 0									/*0..10 ms*/

/*ANTENNA_PORT_NUM */
#if defined(SS_DEF_1TX) || defined(__L1EDPS_ENABLE__)
/* RF */
#define ANTENNA_PORT_NUM_BTS2 ONE_ANTENNA 
#else
/* DIQ/AIQ */
#define ANTENNA_PORT_NUM_BTS2 TWO_ANTENNA 
#endif

#define DL_EARFCN_BTS2 0

/*RNTI value*/
#define C_RNTI_BTS2 0xFF00									/*0x0001..0xFFF3*/
#define T_C_RNTI_BTS2 0xFF00									/*0x0001..0xFFF3*/
#define SI_RNTI_BTS2 0xFFFF									/*fixed value*/
#define P_RNTI_BTS2 0xFFFE									/*fixed value*/
//SPS_C_RNTI is defined in RRC Connec. setup

/*RAR*/
#define RAR_TC_RNTI_BTS2 T_C_RNTI_BTS2
#define RAR_RA_RNTI_VALID_BTS2 L1S_SETUP						/*L1S_SETUP: true, L1S_RELEASE: false*/
#define RAR_HOPPING_FLAG_BTS2 L1S_RELEASE
#define RAR_UL_DELAY_BTS2 L1S_RELEASE
//#define RAR_BI_BTS2 L1S_RELEASE
#define RAR_CQI_REQUEST_BTS2 L1S_RELEASE
#define RAR_RB_START_BTS2 2
#define RAR_N_RB_BTS2 8
#define RAR_NUB_OF_CW_BTS2 1
#define RAR_MCS_TB1_BTS2 9
#define RAR_MCS_TB2_BTS2 0

/*DL_BW */
#define MIB_DL_BANDWIDTH_BTS2 BW_100_RB

/*PHICH_DURATION */
#define MIB_PHICH_DURATION_BTS2 PHICH_DURATION_NORMAL	

/*PHICH_RESOURCE value*/
#define MIB_PHICH_RESOURCE_BTS2 PHICH_RESOURCE_oneSixth

/*SIB1*/
//{
	#define SIB1_FREQ_BAND_INDICATOR_BTS2 1				/*1..64*/
	#define SIB1_SERVING_Q_RXLEV_MIN_BTS2 -70			/*-70..-22*/
	#define SIB1_SERVING_Q_QUAL_MIN_BTS2 -34			/*-34..-3*/ 
	#define SIB1_SERVING_P_MAX_BTS2 23					/*-30..33*/

	/*schedulingInfoList*/
	#define SIB1_SI1_PERIODICITY_BTS2 SI_PERIODICITY_rf8
	#define SIB1_SI2_PERIODICITY_BTS2 SI_PERIODICITY_rf8

	#define SIB1_SI_WINDOW_LENGTH_BTS2 SI_WINDOW_LENGTH_ms1		
	#define SIB1_SYSTEM_INFO_VALUE_TAG_BTS2 0			/*0..31*/	

	/*tdd-Config*/
	#define SIB1_SUBFRAME_ASSIGNMENT_BTS2 SUBFRAME_ASSIGNMENT_sa1
	#define SIB1_SPECIAL_SUBFRAME_PATTERN_BTS2 SPECIAL_SUBFRAME_PATTERN_ssp4
//}


/*SIB2*/
//{
	/*radioResourceConfigCommon.preambleInfo*/
	#define SIB2_NUMBER_OF_RA_PREAMBLES_BTS2 NUMBER_OF_RA_PREAMBLES_n64	
	#define SIB2_SIZE_OF_RA_PREAMBLES_GROUP_A_BTS2 SIZE_OF_RA_PREAMBLES_GROUP_A_n64
	#define SIB2_MESSAGE_POWER_OFFSET_GROUP_B_BTS2 MESSAGE_POWER_OFFSET_GROUP_B_minusinfinity			

	/*radioResourceConfigCommon.rach-ConfigCommon.powerRampingParameters*/
	#define SIB2_POWER_RAMPING_STEP_BTS2 POWER_RAMPING_STEP_dB0		
	#define SIB2_PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_BTS2 PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_dBm_minus120	

	/*radioResourceConfigCommon.rach-ConfigCommon.ra-SupervisionInfo*/
	#define SIB2_PREAMBLE_TRANS_MAX_BTS2 PREAMBLE_TRANS_MAX_n200

	/*radioResourceConfigCommon.rach-ConfigCommon.ra-SupervisionInfo*/
	#define SIB2_RA_RESPONSE_WINDOW_SIZE_BTS2 RA_RESPONSE_WINDOW_SIZE_sf10	
	#define SIB2_MAC_CONTENTION_RESOLUTION_TIMER_BTS2 MAC_CONTENTION_RESOLUTION_TIMER_sf64

	#define SIB2_MAX_HARQ_MSG3TX_BTS2 5							/*1..8*/

	/*radioResourceConfigCommon.bcch-Config*/
	#define SIB2_MODIFICATION_PERIOD_COEFF_BTS2 MODIFICATION_PERIOD_COEFF_N2

	/*radioResourceConfigCommon.pcch-Config*/
	#define SIB2_DEFAULT_PAGING_CYCLE_BTS2 DEFAULT_PAGING_CYCLE_RF32
	#define SIB2_NB_BTS2 NB_oneEightT		

	/*radioResourceConfigCommon.prach-Config*/
	#define SIB2_ROOT_SEQUENCE_INDEX_BTS2 0							/*0..837*/	
	#define SIB2_PRACH_CONFIG_INDEX_BTS2 12							/*0..63*/	
	#define SIB2_HIGH_SPEED_FLAG_BTS2 L1S_RELEASE						/*BOOLEAN*/	
	#define SIB2_ZERO_CORRELATION_ZONE_CONFIG_BTS2 0				/*0..15*/	
	#define SIB2_PRACH_FREQ_OFFSET_BTS2 0							/*0..94*/
	
	/*radioResourceConfigCommon.pdsch-ConfigCommon*/
	#define SIB2_REFERENCE_SIGNAL_POWER_BTS2 -50						/*-60..50*/	
	#define SIB2_P_B_BTS2 0												/*0..3*/

	/*radioResourceConfigCommon.pusch-ConfigBasic*/
	#define SIB2_N_SB_BTS2 1											/*1..4*/
	#define SIB2_HOPPING_MODE_BTS2 HOPPING_MODE_interSubFrame	
	#define SIB2_PUSCH_HOPPING_OFFSET_BTS2 2 							/*0..98*/
	#define SIB2_enable64QAM_BTS2 L1S_RELEASE

	/*radioResourceConfigCommon.ul-ReferenceSignalsPUSCH*/
	#define SIB2_GROUP_HOPPING_SETUP_BTS2 L1S_RELEASE				/*BOOLEAN*/	
	#define SIB2_GROUP_ASSIGNMENT_PUSCH_BTS2 0						/*0..29*/	
	#define SIB2_SEQUENCE_HOPPING_ENABLED_BTS2 L1S_RELEASE			/*BOOLEAN*/	
	#define SIB2_CYCLIC_SHIFT_BTS2 0									/*0..7*/

	/*radioResourceConfigCommon.pucch-ConfigCommon*/
	#define SIB2_DELTA_PUCCH_SHIFT_BTS2 DELTA_PUCCH_SHIFT_ds3
	#define SIB2_NRB_CQI_BTS2 1										/*0..98*/	
	#define SIB2_NCS_AN_BTS2 6										/*0..7*/	
	#define SIB2_N1PUCCH_AN_BTS2 2									/*0..2047*/

	/*radioResourceConfigCommon.soundingRS-UL-ConfigCommon*/
	#define SIB2_SOUNDING_RS_UL_CONFIG_COMMON_BTS2 L1S_RELEASE
	#define SIB2_SRS_BANDWIDTH_CONFIG_BTS2 SRS_BANDWIDTH_CONFIG_bw7
	#define SIB2_SRS_SUBFRAME_CONFIG_BTS2 SRS_SUBFRAME_CONFIG_sc0
	#define SIB2_ACK_NACK_SRS_SIMULTANEOUS_TRANSMISSION_BTS2 L1S_RELEASE	
	#define SIB2_SRS_UP_PTS_BTS2 L1S_RELEASE


	/*radioResourceConfigCommon.uplinkPowerControlCommon.p0-NominalPUSCH*/
	#define SIB2_P0_NOMINAL_PUSCH_BTS2 -126						/*-126..24*/
	#define SIB2_ALPHA_BTS2 ALPHA_al0
	#define SIB2_P0_NOMINAL_PUCCH_BTS2 -127						/*-127..-96*/
	#define SIB2_DELTA_PUCCH_FORMAT1_deltaF_BTS2 DELTA_PUCCH_FORMAT1_deltaF_minus2
	#define SIB2_DELTA_PUCCH_FORMAT1B_deltaF_BTS2 DELTA_PUCCH_FORMAT1B_deltaF_1
	#define SIB2_DELTA_PUCCH_FORMAT2_deltaF_BTS2 DELTA_PUCCH_FORMAT2_deltaF_minus2
	#define SIB2_DELTA_PUCCH_FORMAT2A_deltaF_BTS2 DELTA_PUCCH_FORMAT2A_deltaF_minus2
	#define SIB2_DELTA_PUCCH_FORMAT2B_deltaF_BTS2 DELTA_PUCCH_FORMAT2B_deltaF_minus2

	#define SIB2_DELTA_PREAMBLE_MSG3_BTS2 0							/*-1..6*/

	/*radioResourceConfigCommon.ul-CyclicPrefixLength*/
	#define SIB2_UL_CYCLIC_PREFIX_LENGTH_BTS2 UL_CYCLIC_PREFIX_LENGTH_len1

	/*ue-TimersAndConstants*/	
	#define SIB2_T300_BTS2 T300_ms1000
	#define SIB2_T301_BTS2 T301_ms1000
	#define SIB2_T310_BTS2 T310_ms1000
	#define SIB2_N310_BTS2 N310_n1
	#define SIB2_T311_BTS2 T311_ms1000
	#define SIB2_N311_BTS2 N311_n1

	#define SIB2_UL_CARRIER_FREQ_BTS2 18000						/*0..65536*/
	#define SIB2_UL_BANDWIDTH_BTS2 BW_100_RB

	/*mbsfn-SubframeConfigList*/
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_BTS2 L1S_RELEASE /*L1S_RELEASE: list isn't present ; L1S_SETUP: list is present */
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_1_RADIOFRAME_ALLOCATION_PERIOD_BTS2 RADIOFRAME_ALLOCATION_PERIOD_n1 /*{n1, n2, n4, n8, n16, n32}*/ 
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_1_RADIOFRAME_ALLOCATION_OFFSET_BTS2 0
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_1_SUBFRAME_ALLOCATION_LENGTH_BTS2 SUBFRAME_ALLOCATION_LENGTH_ONE_FRAME
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_1_SUBFRAME_ALLOCATION_PATTERN_BTS2 (MBSFN_SF2|MBSFN_SF3|MBSFN_SF7)
//}


/*SIB3*/
#define SIB3_Q_HYST_BTS2 0
#define SIB3_THRESH_SERVING_LOW_BTS2 0                         /*0..31*/ 
#define SIB3_S_INTRA_SEARCH_P_BTS2 0				           /*0..31*/
#define SIB3_S_INTRA_SEARCH_Q_BTS2 0						   /*0..31*/
#define SIB3_S_NON_INTRA_SEARCH_P_BTS2 0					   /*0..31*/
#define SIB3_S_NON_INTRA_SEARCH_Q_BTS2 0					   /*0..31*/
#define SIB3_INTRA_Q_RXLEV_MIN_BTS2 -70                        /*-70..22*/
#define SIB3_INTRA_Q_QUAL_MIN_BTS2 -34                         /*-34..-3*/
#define SIB3_INTRA_P_MAX_BTS2 23                              /*-30..33*/ 
#define SIB3_INTRA_T_RESELECTION_BTS2 0                        /*-0..7*/
	
/*SIB4*/
#define SIB4_INTRA_NEIGHBOR_Q_OFFSET_CELL_BTS2 0
	
/*SIB5*/
#define SIB5_THRESHX_HIGH_BTS2 0                               /*0..31*/ 
#define SIB5_THRESHX_LOW_BTS2 0                                /*0..31*/ 
#define SIB5_INTER_Q_RXLEV_MIN_BTS2 -70                        /*-70..22*/
#define SIB5_INTER_Q_QUAL_MIN_BTS2 -34                         /*-34..-3*/
#define SIB5_INTER_P_MAX_BTS2 23                              /*-30..33*/ 
#define SIB5_INTER_T_RESELECTION_BTS2 0                        /*-0..7*/
#define SIB5_INTER_NEIGHBOR_Q_OFFSET_CELL_BTS2 0                
#define SIB5_INTER_Q_OFFSET_FREQUENCY_BTS2 0

/*SIB13*/
#define SIB13_MBSFN_1_AREA_ID_BTS2 0 //(0..255)
#define SIB13_MBSFN_1_NON_MBSFN_REGION_LENGTH_BTS2 MBSFN_NON_MBSFN_REGION_LENGTH_s1 //s1:0 ; s2:1
#define SIB13_MBSFN_1_NOTIFICATION_INDICATOR_BTS2 0 //(0..7)
#define SIB13_MBSFN_1_MCCH_REPETITION_PERIOD_BTS2 MCCH_REPETITION_PERIOD_rf32 //(0..7)
#define SIB13_MBSFN_1_MCCH_OFFSET_BTS2 0 //(0..10)
#define SIB13_MBSFN_1_MCCH_MODIFICATION_PERIOD_BTS2 MCCH_MODIFICATION_PERIOD_rf512 //(0..7)
#define SIB13_MBSFN_1_MCCH_SF_ALLOC_INFO_BTS2 MBSFN_SF1
#define SIB13_MBSFN_1_MCCH_SIGNALLING_MCS_BTS2 MCCH_SIGNALLING_MCS_n2
#define SIB13_MBMS_NOTIFICATION_REPETITION_COEFF_BTS2 MBMS_NOTIFICATION_REPETITION_COEFF_n2
#define SIB13_MBMS_NOTIFICATION_OFFSET_BTS2 0 //0..10
#define SIB13_MBMS_NOTIFICATION_SF_INDEX_BTS2 1 //1..6


/*rrcConnectionSetup.radioResourceConfigDedicated*/
//{
	/*mac-MainConfig*/
	/*mac-MainConfig.explicitValue.ul-SCH-Config*/
	#define RRC_SETUP_MAX_HARQ_TX_BTS2 MAX_HARQ_TX_n5
	#define RRC_SETUP_PERIODIC_BSR_TIMER_BTS2 PERIODIC_BSR_TIMER_sf5
	#define RRC_SETUP_RETX_BSR_TIMER_BTS2 RETX_BSR_TIMER_sf320
	#define RRC_SETUP_TTI_BUNDLING_BTS2 L1S_RELEASE							/*BOOLEAN*/	
	/*mac-MainConfig.explicitValue.drx-Config*/
	#define RRC_SETUP_DRX_CONFIG_BTS2 L1S_RELEASE							/*BOOLEAN*/
	#define RRC_SETUP_ON_DURATION_TIMER_BTS2 ON_DURATION_TIMER_psf5
	#define RRC_SETUP_DRX_INACTIVITY_TIMER_BTS2 DRX_INACTIVITY_TIMER_psf5
	#define RRC_SETUP_DRX_RETRANSMISSION_TIMER_BTS2 DRX_RETRANSMISSION_TIMER_psf16
	#define RRC_SETUP_LONG_DRX_CYCLE_BTS2 LONG_DRX_CYCLE_sf40
	#define RRC_SETUP_CYCLE_START_OFFSET_BTS2 0				/*0..2559(depends on LONG_DRX_CYCLE)*/
	#define RRC_SETUP_SHORT_DRX_SETUP_BTS2 L1S_RELEASE
	#define RRC_SETUP_SHORT_DRX_CYCLE_BTS2 SHORT_DRX_CYCLE_sf2
	#define RRC_SETUP_DRX_SHORT_CYCLE_TIMER_BTS2 1				/*1..16*/

	/*sps-Config*/
	#define RRC_SETUP_SPS_CONFIG_DL_BTS2 L1S_RELEASE	
	#define RRC_SETUP_SPS_CONFIG_UL_BTS2 L1S_RELEASE	
	#define RRC_SETUP_SEMI_PERSIST_SCHED_C_RNTI_BTS2 0xFFF0

	/*sps-ConfigDL*/
	#define RRC_SETUP_SEMI_PERSIST_SCHED_INTERVAL_DL_BTS2 SEMI_PERSIST_SCHED_INTERVAL_DL_sf20
	#define RRC_SETUP_NUMBER_OF_CONF_SPS_PROCESSES_BTS2 3		/*1..8*/	
	#define RRC_SETUP_N1_PUCCH_AN_PERSISTENT_LIST_SIZE_BTS2 4		/*1..4*/
	#define RRC_SETUP_N1_PUCCH_AN_PERSISTENT_LIST_1_BTS2 3		/*0..2047*/
	#define RRC_SETUP_N1_PUCCH_AN_PERSISTENT_LIST_2_BTS2 4		/*0..2047*/
	#define RRC_SETUP_N1_PUCCH_AN_PERSISTENT_LIST_3_BTS2 5		/*0..2047*/
	#define RRC_SETUP_N1_PUCCH_AN_PERSISTENT_LIST_4_BTS2 6		/*0..2047*/	

	/*sps-ConfigUL*/
	#define RRC_SETUP_SEMI_PERSIST_SCHED_INTERVAL_UL_BTS2 SEMI_PERSIST_SCHED_INTERVAL_UL_sf20
	#define RRC_SETUP_IMPLICIT_RELEASE_AFTER_BTS2 IMPLICIT_RELEASE_AFTER_e8
	#define RRC_SETUP_TWO_INTERVALS_CONFIG_BTS2 L1S_RELEASE
	#define RRC_SETUP_P0_NOMINAL_PUSCH_PERSISTENT_BTS2 -126	/*-126..24*/
	#define RRC_SETUP_P0_UE_PUSCH_PERSISTENT_BTS2 -126			/*-8..7*/
	
	/*physicalConfigDedicated*/
	/*physicalConfigDedicated.pdsch-ConfigDedicated*/
	#define RRC_SETUP_P_A_dB_BTS2 P_A_dB_0

	/*physicalConfigDedicated.pucch-ConfigDedicated*/
	#define RRC_SETUP_ACK_NACK_REPETITION_SETUP_BTS2 L1S_RELEASE
	#define RRC_SETUP_REPETITION_FACTOR_BTS2  REPETITION_FACTOR_n2
	#define RRC_SETUP_N1_PUCCH_ANREP_BTS2 0 								/*0..2047*/
	#define RRC_SETUP_TDD_ACK_NACK_FEEDBACK_MODE_BTS2 TDD_ACK_NACK_FEEDBACK_MODE_bundling

	#define RRC_SETUP_NRB_CQI_BTS2 1									/*0..98*/
	#define RRC_SETUP_NCS_AN_BTS2 6									/*0..7*/
	#define RRC_SETUP_N1PUCCH_AN_BTS2 2								/*0..2047*/	

    /*radioResourceConfigCommon.pucch-ConfigDedicated-v1020*/
    #define RRC_SETUP_PUCCH_FORMAT_BTS2             0xFF            /*0,1,0xFF*/
    #define RRC_SETUP_N3_PUCCH_AN_LIST_0_BTS2       0xFFFF          /*0..549, 0xFFFF*/
    #define RRC_SETUP_N3_PUCCH_AN_LIST_1_BTS2       0xFFFF          /*0..549, 0xFFFF*/
    #define RRC_SETUP_N3_PUCCH_AN_LIST_2_BTS2       0xFFFF          /*0..549, 0xFFFF*/
    #define RRC_SETUP_N3_PUCCH_AN_LIST_3_BTS2       0xFFFF          /*0..549, 0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_0_BTS2  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_1_BTS2  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_2_BTS2  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_3_BTS2  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_0_BTS2  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_1_BTS2  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_2_BTS2  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_3_BTS2  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_2_0_BTS2  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_2_1_BTS2  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_2_2_BTS2  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_2_3_BTS2  0xFFFF          /*0..2047,0xFFFF*/

    #define RRC_SETUP_SIMULTANEOUS_PUCCH_PUSCH_BTS2 L1S_RELEASE     /*0,1*/

    /*radioResourceConfigCommon.pucch-ConfigDedicated-v1130*/
    #define RRC_SETUP_N_PUCCH_ID_BTS2               0xFF            /*0..503, 0xFF*/
    #define RRC_SETUP_N1_PUCCH_AN_BTS2              0xFF            /*0..2047, 0xFF*/

	/*physicalConfigDedicated.pusch-ConfigDedicated*/
	#define RRC_SETUP_BETA_OFFSET_ACK_INDEX_BTS2 0
	#define RRC_SETUP_BETA_OFFSET_RI_INDEX_BTS2 0
	#define RRC_SETUP_BETA_OFFSET_CQI_INDEX_BTS2 2

    /*physicalConfigDedicated.pusch-ConfigDedicated-v1130*/
    #define RRC_SETUP_N_PUSCH_ID_BTS2               0xFFFF          /*0..509,0xFFFF*/
    #define RRC_SETUP_N_DMRS_CSH_ID_BTS2            0xFFFF          /*0..509,0xFFFF*/

	/*physicalConfigDedicated.uplinkPowerControlDedicated*/
	#define RRC_SETUP_P0_UE_PUSCH_BTS2 0								/*-8..7*/
	#define RRC_SETUP_DELTA_MCS_SETUP_BTS2 L1S_RELEASE				/*BOOLEAN*/
	#define RRC_SETUP_ACCUMULATION_SETUP_BTS2 L1S_SETUP				/*BOOLEAN*/
	#define RRC_SETUP_P0_UE_PUCCH_BTS2 0								/*-8..7*/
	#define RRC_SETUP_PSRS_OFFSET_BTS2 7								/*0..15*/
	#define RRC_SETUP_FILTER_COEFFICIENT_BTS2 FILTER_COEFFICIENT_fc4

    /*physicalConfigDedicated.uplinkPowerControlDedicated-v1020*/
    #define RRC_SETUP_PSRS_OFFSET_AP_BTS2           0xFF            /*0..31,0xFF*/

	/*physicalConfigDedicated.tpc-PDCCH-ConfigPUCCH*/
	#define RRC_SETUP_TPC_PDCCH_CONFIG_PUCCH_SETUP_BTS2 L1S_RELEASE
	#define RRC_SETUP_TPC_PDCCH_CONFIG_PUCCH_TPC_RNTI_BTS2 0x000B
	#define RRC_SETUP_TPC_PDCCH_CONFIG_PUCCH_TPC_FORMAT_BTS2 TPC_PDCCH_CONFIG_PUCCH_TPC_FORMAT3
	#define RRC_SETUP_TPC_PDCCH_CONFIG_PUCCH_TPC_INDEX_BTS2 1				/*DCI format 3: 1~15, DCI format 3A: 1~30*/

	/*physicalConfigDedicated.tpc-PDCCH-ConfigPUSCH*/
	#define RRC_SETUP_TPC_PDCCH_CONFIG_PUSCH_SETUP_BTS2 L1S_RELEASE
	#define RRC_SETUP_TPC_PDCCH_CONFIG_PUSCH_TPC_RNTI_BTS2 0x000C
	#define RRC_SETUP_TPC_PDCCH_CONFIG_PUSCH_TPC_FORMAT_BTS2 TPC_PDCCH_CONFIG_PUSCH_TPC_FORMAT3
	#define RRC_SETUP_TPC_PDCCH_CONFIG_PUSCH_TPC_INDEX_BTS2 1				/*DCI format 3: 1~15, DCI format 3A: 1~30*/

	/*physicalConfigDedicated.cqi-ReportConfig*/
	#define RRC_SETUP_CQI_REPORT_MODE_APERIODIC_BTS2 CQI_REPORT_MODE_APERIODIC_invalid
	#define RRC_SETUP_NOM_PDSCH_RS_EPRE_OFFSET_BTS2 0						/*-1..6*/
	
	#define RRC_SETUP_CQI_MASK_R9_BTS2 L1S_RELEASE
	#define RRC_SETUP_PMI_RI_REPORT_R9_BTS2 L1S_RELEASE
	
	#define RRC_SETUP_CQI_REPORT_PERIODIC_SETUP_BTS2 L1S_RELEASE
	#define RRC_SETUP_CQI_PUCCH_RESOURCE_INDEX_BTS2 0						/*0..1185*/
	#define RRC_SETUP_CQI_PMI_CONFIG_INDEX_BTS2 0							/*0..1023*/
	#define RRC_SETUP_CQI_FORMAT_INDICATOR_PERIODIC_BTS2  CQI_FORMAT_INDICATOR_PERIODIC_widebandCQI

	#define RRC_SETUP_CQI_SUBBAND_K_BTS2 1									/*1..4*/
	#define RRC_SETUP_RI_CONFIG_INDEX_BTS2 0								/*0..1023*/
	#define RRC_SETUP_SIMULTANEOUS_ACK_NACK_AND_CQI_BTS2 L1S_RELEASE

    #define RRC_SETUP_PERIODICITY_FACTOR_BTS2               2                       /*2,4*/

	/*physicalConfigDedicated.csi-RS-Config-r10*/
	#define RRC_SETUP_CSI_RS_CONFIG_R10_SETUP_BTS2						  L1S_RELEASE
	#define RRC_SETUP_CSI_RS_CONFIG_R10_ANTENNA_PORTS_COUNT_BTS2		  ONE_ANTENNA
	#define RRC_SETUP_CSI_RS_CONFIG_R10_RESOURCE_CONFIG_BTS2			  0
	#define RRC_SETUP_CSI_RS_CONFIG_R10_SUBFRAME_CONFIG_BTS2			  0
	#define RRC_SETUP_CSI_RS_CONFIG_R10_p_C_BTS2						  0
	#define RRC_SETUP_CSI_RS_CONFIG_R10_ZERO_TX_POWER_CSI_RS_SETUP_BTS2   L1S_RELEASE
	#define RRC_SETUP_CSI_RS_CONFIG_R10_ZERO_TX_POWER_CSI_RS_RESOURCE_CONFIG_LIST_BTS2	 0x0000
	#define RRC_SETUP_CSI_RS_CONFIG_R10_ZERO_TX_POWER_CSI_RS_SUBFRAME_CONFIG_BTS2	0

	/*physicalConfigDedicated.soundingRS-UL-ConfigDedicated*/
	#define RRC_SETUP_SOUNDING_RS_CONFIG_DEDICATED_SETUP_BTS2 L1S_RELEASE
	#define RRC_SETUP_SRS_BANDWIDTH_BTS2 SRS_BANDWIDTH_bw0
	#define RRC_SETUP_SRS_HOPPING_BANDWIDTH_BTS2 SRS_HOPPING_BANDWIDTH_hbw0

	#define RRC_SETUP_FREQ_DOMAIN_POSITION_BTS2 0							/*0..1023*/
	#define RRC_SETUP_SRS_DURATION_BTS2 L1S_RELEASE
	#define RRC_SETUP_SRS_CONFIG_INDEX_BTS2 0								/*0..1023*/
	#define RRC_SETUP_SRS_TRANSMISSION_COMB_BTS2 0						/*0..1*/
	#define RRC_SETUP_SRS_CYCLIC_SHIFT_BTS2 0								/*0..7*/

	/*physicalConfigDedicated.antennaInfo*/
	#define RRC_SETUP_TRANSMISSION_MODE_BTS2 TRANSMISSION_MODE_tm1

	#define RRC_SETUP_UE_TRANSMIT_ANTENNA_SELECTION_SETUP_BTS2 L1S_RELEASE
	#define RRC_SETUP_UE_TRANSMIT_ANTENNA_SELECTION_BTS2 UE_TRANSMIT_ANTENNA_SELECTION_closedloop

	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm3_bitstring_BTS2 0x01					/*bit string size: 2, value range: 0x00..0x03*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm3_bitstring_BTS2 0x01					/*bit string size: 4, value range: 0x00..0x0F*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm4_bitstring_BTS2 0x01					/*bit string size: 6, value range: 0x00..0x3F*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm4_bitstring_BTS2 0X0000000000000001		/*bit string size: 64, value range: 0X0000000000000000..0xFFFFFFFFFFFFFFFF*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm5_bitstring_BTS2 0x01					/*bit string size: 4, value range: 0x00..0x0F*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm5_bitstring_BTS2 0x0001					/*bit string size: 16, value range: 0x0000..0xFFFF*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm6_bitstring_BTS2 0x01					/*bit string size: 4, value range: 0x00..0x0F*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm6_bitstring_BTS2 0x0001					/*bit string size: 16, value range: 0x0000..0xFFFF*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm8_bitstring_BTS2 0x01					/*bit string size: 6, value range: 0x00..0x3F*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm8_bitstring_BTS2 0x00000001				/*bit string size: 32, value range: 0x00000000..0xFFFFFFFF*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm9_bitstring_BTS2 0x01					/*bit string size: 6, value range: 0x00..0x3F*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm9_bitstring_BTS2 0x0000000000000001		/*bit string size: 64, value range: 0X0000000000000000..0xFFFFFFFFFFFFFFFF*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n8TxAntenna_tm9_bitstring_BTS2 0x0000000000000000000000000001		/*bit string size: 109, value range: 0X0000000000000000000000000000..0xFFFFFFFFFFFFFFFFFFFFFFFFFFF*/

	/*physicalConfigDedicated.schedulingRequestConfig*/
	#define RRC_SETUP_SCHEDULING_REQUEST_CONFIG_SETUP_BTS2 L1S_RELEASE
	#define RRC_SETUP_SR_PUCCH_RESOURCE_INDEX_BTS2 0						/*0..2047*/
	#define RRC_SETUP_SR_CONFIG_INDEX_BTS2 0                         				 /*0..157*/
	#define RRC_SETUP_DSR_TRANS_MAX_BTS2 DSR_TRANS_MAX_n4

	/*physicalConfigDedicated.cif-Presence-r10*/
	#define RRC_SETUP_CIF_PRESENCE_BTS2 KAL_FALSE	
//}

/*rrcConnectionReconfiguration*/
//{
	#define RRC_RECONFIG_REPORT_EVENT_A2_THRESHOLD_BTS2 0
	#define RRC_RECONFIG_REPORT_EVENT_A3_OFFSET_BTS2 0
	#define RRC_RECONFIG_REPORT_EVENT_A6_OFFSET_BTS2 0
	#define RRC_RECONFIG_REPORT_EVENT_HYSTERESIS_BTS2 0
	#define RRC_RECONFIG_REPORT_EVENT_TIME_TO_TRIGGER_BTS2 0 
		
	/*measGapConfig*/
	#define RRC_RECONFIG_GAP_CONFIG_SETUP_BTS2 L1S_RELEASE
	#define RRC_RECONFIG_GAP_PATTERN_BTS2 GAP_PATTERN_gp0
	
	#define RRC_RECONFIG_GAP_OFFSET_gp0_BTS2 0											/*0..39*/
	#define RRC_RECONFIG_GAP_OFFSET_gp1_BTS2 0											/*0..79*/

	/*measConfig.s-Measure*/
	#define RRC_RECONFIG_S_MEASURE_BTS2 0												/*0..97*/

	/*measConfig.quantityConfig*/
	#define RRC_RECONFIG_FILTER_COEFFICIENT_RSRP_BTS2 FILTER_COEFFICIENT_RSRP_fc4 
	#define RRC_RECONFIG_FILTER_COEFFICIENT_RSRQ_BTS2 FILTER_COEFFICIENT_RSRQ_fc4 
	
	/*measConfig.measCycleSCell-r10 = {sf160, sf256, sf320, sf512, sf640, sf1024, sf1280} */
	#define RRC_RECONFIG_MEAS_CYCLE_SCELL_R10_BTS2 MEAS_CYCLE_SCELL_R10_NOCONFIG

	/*measConfig.measSubframePatternNeigh-r10*/
	#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_CONFIG_NEIGH_R10_BTS2 L1S_RELEASE
	#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_CONFIG_NEIGH_R10_PATTERN_BTS2 {0}
	#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_CONFIG_NEIGH_R10_PATTERN_FDD_BTS2 { \
		                                                                             0, 0, 0, 1, 1, 0, 0, 0, 0, 0, /* SFN % 4 = 0, Subframe0..9 */ \
                                                                                 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, /* SFN % 4 = 1, Subframe0..9 */ \
                                                                                 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, /* SFN % 4 = 2, Subframe0..9 */ \
                                                                                 0, 0, 0, 1, 1, 0, 0, 0, 0, 0  /* SFN % 4 = 3, Subframe0..9 */ \
                                                                               }
	#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_CONFIG_NEIGH_R10_PATTERN_TDD_BTS2 { \
		                                                                             0, 0, 0, 1, 1, 0, 0, 0, 0, 0, /* SFN % 2 = 0, Subframe0..9 */ \
                                                                                 0, 0, 0, 1, 1, 0, 0, 0, 0, 0  /* SFN % 2 = 1, Subframe0..9 */ \
                                                                               }
	/*measConfig.measSubframeCellList-r10 / PhysCellIdRange*/
	#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_CONFIG_NEIGH_R10_CELL_1_PCI_START_BTS2 0 /*(0..503)*/
	#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_CONFIG_NEIGH_R10_CELL_1_PCI_RANGE_BTS2 PCI_RANGE_n4 /*n4, n8, n12, n16, n24, n32, n48, n64, n84, n96, n128, n168, n252, n504*/
	
	/*mobilityControlInfo*/
//	#define RRC_RECONFIG_TARGET_PHYS_CELL_ID_BTS2 0										/*0..503*/
	#define RRC_RECONFIG_TARGET_DL_CARRIER_FREQ_BTS2 0									/*0..65535*/
	#define RRC_RECONFIG_TARGET_UL_CARRIER_FREQ_BTS2 0									/*0..65535*/
	
	#define RRC_RECONFIG_TARGET_DL_BANDWIDTH_BTS2 BW_100_RB							/*0..65535*/
	#define RRC_RECONFIG_TARGET_UL_BANDWIDTH_BTS2 BW_100_RB							/*0..65535*/
	#define RRC_RECONFIG_T304_BTS2 T304_ms50

	/*mobilityControlInfo.radioResourceConfigCommon*/
	//{	
		/*rach-ConfigCommon.preambleInfo*/
		#define RRC_RECONFIG_NUMBER_OF_RA_PREAMBLES_BTS2 NUMBER_OF_RA_PREAMBLES_n64
		#define RRC_RECONFIG_SIZE_OF_RA_PREAMBLES_GROUP_A_BTS2 SIZE_OF_RA_PREAMBLES_GROUP_A_n64
		#define RRC_RECONFIG_MESSAGE_POWER_OFFSET_GROUP_B_BTS2 MESSAGE_POWER_OFFSET_GROUP_B_minusinfinity

		/*rach-ConfigCommon.powerRampingParameters*/
		#define RRC_RECONFIG_POWER_RAMPING_STEP_BTS2 POWER_RAMPING_STEP_dB0
		#define RRC_RECONFIG_PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_BTS2 PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_dBm_minus120

		/*rach-ConfigCommon.ra-SupervisionInfo*/
		#define RRC_RECONFIG_PREAMBLE_TRANS_MAX_BTS2 PREAMBLE_TRANS_MAX_n200

		/*rach-ConfigCommon.ra-SupervisionInfo*/
		#define RRC_RECONFIG_RA_RESPONSE_WINDOW_SIZE_BTS2 RA_RESPONSE_WINDOW_SIZE_sf10	
		#define RRC_RECONFIG_MAC_CONTENTION_RESOLUTION_TIMER_BTS2 MAC_CONTENTION_RESOLUTION_TIMER_sf64
		#define RRC_RECONFIG_MAX_HARQ_MSG3TX_BTS2 5							/*1..8*/

		/*prach-Config*/
		#define RRC_RECONFIG_ROOT_SEQUENCE_INDEX_BTS2 0						/*0..837*/
		#define RRC_RECONFIG_PRACH_CONFIG_INDEX_BTS2 12						/*0..63*/
		#define RRC_RECONFIG_HIGH_SPEED_FLAG_BTS2 L1S_RELEASE					/*BOOLEAN*/
		#define RRC_RECONFIG_ZERO_CORRELATION_ZONE_CONFIG_BTS2 0			/*0..15*/
		#define RRC_RECONFIG_PRACH_FREQ_OFFSET_BTS2 0						/*0..94*/

		/*pdsch-ConfigCommon*/
		#define RRC_RECONFIG_REFERENCE_SIGNAL_POWER_BTS2 -50					/*-60..50*/
		#define RRC_RECONFIG_P_B_BTS2 0											/*0..3*/

		/*pusch-ConfigBasic*/
		#define RRC_RECONFIG_N_SB_BTS2 1										/*1..4*/
		#define RRC_RECONFIG_HOPPING_MODE_BTS2 HOPPING_MODE_interSubFrame
		#define RRC_RECONFIG_PUSCH_HOPPING_OFFSET_BTS2 2 						/*0..98*/

		/*ul-ReferenceSignalsPUSCH*/
		#define RRC_RECONFIG_GROUP_HOPPING_SETUP_BTS2 L1S_RELEASE			/*BOOLEAN*/
		#define RRC_RECONFIG_GROUP_ASSIGNMENT_PUSCH_BTS2 0					/*0..29*/
		#define RRC_RECONFIG_SEQUENCE_HOPPING_SETUP_BTS2 L1S_RELEASE			/*BOOLEAN*/
		#define RRC_RECONFIG_CYCLIC_SHIFT_BTS2 0								/*0..7*/

		/*phich-Config*/
		#define RRC_RECONFIG_PHICH_DURATION_BTS2 PHICH_DURATION_NORMAL
		#define RRC_RECONFIG_PHICH_RESOURCE_BTS2 PHICH_RESOURCE_oneSixth

		/*pucch-ConfigCommon*/
		#define RRC_RECONFIG_DELTA_PUCCH_SHIFT_BTS2 DELTA_PUCCH_SHIFT_ds3
		#define RRC_RECONFIG_NRB_CQI_BTS2 1										/*0..98*/
		#define RRC_RECONFIG_NCS_AN_BTS2 6										/*0..7*/
		#define RRC_RECONFIG_N1PUCCH_AN_BTS2 2									/*0..2047*/

		/*soundingRS-UL-ConfigCommon*/
		#define RRC_RECONFIG_SOUNDING_RS_UL_CONFIG_COMMON_BTS2 L1S_RELEASE /*CHOICE*/
		#define RRC_RECONFIG_SRS_BANDWIDTH_CONFIG_BTS2 SRS_BANDWIDTH_CONFIG_bw7
		#define RRC_RECONFIG_SRS_SUBFRAME_CONFIG_BTS2  SRS_SUBFRAME_CONFIG_sc0
		#define RRC_RECONFIG_ACK_NACK_SRS_SIMULTANEOUS_TRANSMISSION_BTS2 L1S_RELEASE /*BOOLEAN*/
		#define RRC_RECONFIG_SRS_UP_PTS_BTS2 L1S_RELEASE


		/*uplinkPowerControlCommon.p0-NominalPUSCH*/
		#define RRC_RECONFIG_P0_NOMINAL_PUSCH_BTS2 -126						/*-126..24*/
		#define RRC_RECONFIG_ALPHA_BTS2 ALPHA_al0
		#define RRC_RECONFIG_DELTA_PUCCH_FORMAT1_deltaF_BTS2 DELTA_PUCCH_FORMAT1_deltaF_minus2
		#define RRC_RECONFIG_DELTA_PUCCH_FORMAT1B_deltaF_BTS2 DELTA_PUCCH_FORMAT1B_deltaF_1
		#define RRC_RECONFIG_DELTA_PUCCH_FORMAT2_deltaF_BTS2 DELTA_PUCCH_FORMAT2_deltaF_minus2	
		#define RRC_RECONFIG_DELTA_PUCCH_FORMAT2A_deltaF_BTS2 DELTA_PUCCH_FORMAT2A_deltaF_minus2	
		#define RRC_RECONFIG_DELTA_PUCCH_FORMAT2B_deltaF_BTS2 DELTA_PUCCH_FORMAT2B_deltaF_minus2

		/*antennaInfoCommon.antennaPortsCount*/
		#define RRC_RECONFIG_ANTENNA_PORTS_COUNT_BTS2 RRC_RECONFIG_ANTENNA_PORTS_COUNT_an1

		/*p-Max*/
		#define RRC_RECONFIG_P_MAX_BTS2 23										/*-30..33*/

		/*tdd-Config*/
		#define RRC_RECONFIG_SUBFRAME_ASSIGNMENT_BTS2 SUBFRAME_ASSIGNMENT_sa1
		#define RRC_RECONFIG_SPECIAL_SUBFRAME_PATTERN_BTS2 SPECIAL_SUBFRAME_PATTERN_ssp4

		/*ul-CyclicPrefixLength*/
		#define RRC_RECONFIG_UL_CYCLIC_PREFIX_LENGTH_BTS2 UL_CYCLIC_PREFIX_LENGTH_len1
		
		/*ue-TimersAndConstants*/	
		#define RRC_RECONFIG_T300_BTS2 T300_ms100
		#define RRC_RECONFIG_T301_BTS2 T301_ms100
		#define RRC_RECONFIG_T310_BTS2 T310_ms0	
		#define RRC_RECONFIG_N310_BTS2 N310_n1
		#define RRC_RECONFIG_T311_BTS2 T311_ms1000	
		#define RRC_RECONFIG_N311_BTS2 N311_n1
		#define RRC_RECONFIG_UL_CARRIER_FREQ_BTS2 18000				/*0..65536*/
		#define RRC_RECONFIG_UL_BANDWIDTH_BTS2 UL_BANDWIDTH_n100
	//}
	/*mobilityControlInfo.rach-ConfigDedicated*/
	#define RRC_RECONFIG_PREAMBLE_INDEX_BTS2 0						/*0..63*/
	#define RRC_RECONFIG_PRACH_MASK_INDEX_BTS2 0						/*0..15*/

	/*radioResourceConfigDedicated*/
	//{
		/*mac-MainConfig*/
		/*mac-MainConfig.explicitValue.ul-SCH-Config*/
		#define RRC_RECONFIG_MAX_HARQ_TX_BTS2 MAX_HARQ_TX_n5
		#define RRC_RECONFIG_PERIODIC_BSR_TIMER_BTS2 PERIODIC_BSR_TIMER_sf5
		#define RRC_RECONFIG_RETX_BSR_TIMER_BTS2 RETX_BSR_TIMER_sf320

		#define RRC_RECONFIG_TTI_BUNDLING_BTS2 L1S_RELEASE 						/*BOOLEAN*/
			
		/*mac-MainConfig.explicitValue.drx-Config*/
		
		#define RRC_RECONFIG_DRX_CONFIG_BTS2 L1S_RELEASE								/*BOOLEAN*/
		#define RRC_RECONFIG_ON_DURATION_TIMER_BTS2 ON_DURATION_TIMER_psf5
		#define RRC_RECONFIG_DRX_INACTIVITY_TIMER_BTS2 DRX_INACTIVITY_TIMER_psf5
		#define RRC_RECONFIG_DRX_RETRANSMISSION_TIMER_BTS2 DRX_RETRANSMISSION_TIMER_psf16
		#define RRC_RECONFIG_LONG_DRX_CYCLE_BTS2 LONG_DRX_CYCLE_sf40
		#define RRC_RECONFIG_CYCLE_START_OFFSET_BTS2 0							/*0..2559(depends on LONG_DRX_CYCLE)*/
		#define RRC_RECONFIG_SHORT_DRX_SETUP_BTS2 L1S_RELEASE
		#define RRC_RECONFIG_SHORT_DRX_CYCLE_BTS2 SHORT_DRX_CYCLE_sf2
		#define RRC_RECONFIG_DRX_SHORT_CYCLE_TIMER_BTS2 1						/*1..16*/

		/*sps-Config*/
		#define RRC_RECONFIG_SPS_CONFIG_DL_BTS2 L1S_RELEASE
		#define RRC_RECONFIG_SPS_CONFIG_UL_BTS2 L1S_RELEASE
		#define RRC_RECONFIG_SEMI_PERSIST_SCHED_C_RNTI_BTS2 0xFFF0

		/*sps-ConfigDL*/
		#define RRC_RECONFIG_SEMI_PERSIST_SCHED_INTERVAL_DL_BTS2 SEMI_PERSIST_SCHED_INTERVAL_DL_sf20

		#define RRC_RECONFIG_NUMBER_OF_CONF_SPS_PROCESSES_BTS2 1 				/*1..8*/
		#define RRC_RECONFIG_N1_PUCCH_AN_PERSISTENT_LIST_SIZE_BTS2 4				/*1..4*/
		#define RRC_RECONFIG_N1_PUCCH_AN_PERSISTENT_LIST_1_BTS2 3				/*0..2047*/
		#define RRC_RECONFIG_N1_PUCCH_AN_PERSISTENT_LIST_2_BTS2 4				/*0..2047*/
		#define RRC_RECONFIG_N1_PUCCH_AN_PERSISTENT_LIST_3_BTS2 5				/*0..2047*/
		#define RRC_RECONFIG_N1_PUCCH_AN_PERSISTENT_LIST_4_BTS2 6				/*0..2047*/
		
		/*sps-ConfigUL*/
		#define RRC_RECONFIG_SEMI_PERSIST_SCHED_INTERVAL_UL_BTS2 SEMI_PERSIST_SCHED_INTERVAL_UL_sf20
		#define RRC_RECONFIG_IMPLICIT_RELEASE_AFTER_BTS2 IMPLICIT_RELEASE_AFTER_e8
		#define RRC_RECONFIG_TWO_INTERVALS_CONFIG_BTS2 L1S_RELEASE
		#define RRC_RECONFIG_P0_NOMINAL_PUSCH_PERSISTENT_BTS2 -126				/*-126..24*/
		#define RRC_RECONFIG_P0_UE_PUSCH_PERSISTENT_BTS2 -126					/*-8..7*/		
			
		/*physicalConfigDedicated*/
		/*physicalConfigDedicated.pdsch-ConfigDedicated*/
		#define RRC_RECONFIG_P_A_dB_BTS2 P_A_dB_0

		/*physicalConfigDedicated.pucch-ConfigDedicated*/
		#define RRC_RECONFIG_ACK_NACK_REPETITION_SETUP_BTS2 L1S_RELEASE
		#define RRC_RECONFIG_REPETITION_FACTOR_BTS2	REPETITION_FACTOR_n2
		#define RRC_RECONFIG_N1_PUCCH_ANREP_BTS2 0								/*0..2047*/
		#define RRC_RECONFIG_TDD_ACK_NACK_FEEDBACK_MODE_BTS2 TDD_ACK_NACK_FEEDBACK_MODE_bundling
		#define RRC_RECONFIG_NRB_CQI_BTS2 1											/*0..98*/
		#define RRC_RECONFIG_NCS_AN_BTS2 6											/*0..7*/
		#define RRC_RECONFIG_N1PUCCH_AN_BTS2 2										/*0..2047*/ 

        /*radioResourceConfigCommon.pucch-ConfigDedicated-v1020*/
        #define RRC_RECONFIG_PUCCH_FORMAT_BTS2             0xFF            /*0,1,0xFF*/
        #define RRC_RECONFIG_N3_PUCCH_AN_LIST_0_BTS2       0xFFFF          /*0..549, 0xFFFF*/
        #define RRC_RECONFIG_N3_PUCCH_AN_LIST_1_BTS2       0xFFFF          /*0..549, 0xFFFF*/
        #define RRC_RECONFIG_N3_PUCCH_AN_LIST_2_BTS2       0xFFFF          /*0..549, 0xFFFF*/
        #define RRC_RECONFIG_N3_PUCCH_AN_LIST_3_BTS2       0xFFFF          /*0..549, 0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_0_BTS2  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_1_BTS2  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_2_BTS2  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_3_BTS2  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_0_BTS2  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_1_BTS2  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_2_BTS2  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_3_BTS2  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_2_0_BTS2  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_2_1_BTS2  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_2_2_BTS2  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_2_3_BTS2  0xFFFF          /*0..2047,0xFFFF*/

        #define RRC_RECONFIG_SIMULTANEOUS_PUCCH_PUSCH_BTS2 L1S_RELEASE     /*0,1*/

        /*radioResourceConfigCommon.pucch-ConfigDedicated-v1130*/
        #define RRC_RECONFIG_N_PUCCH_ID_BTS2               0xFF            /*0..503, 0xFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_BTS2              0xFF            /*0..2047, 0xFF*/
		
		/*physicalConfigDedicated.pusch-ConfigDedicated*/
		#define RRC_RECONFIG_BETA_OFFSET_ACK_INDEX_BTS2 0
		#define RRC_RECONFIG_BETA_OFFSET_RI_INDEX_BTS2 0
		#define RRC_RECONFIG_BETA_OFFSET_CQI_INDEX_BTS2 2

        /*physicalConfigDedicated.pusch-ConfigDedicated-v1130*/
        #define RRC_RECONFIG_N_PUSCH_ID_BTS2               0xFFFF          /*0..509,0xFFFF*/
        #define RRC_RECONFIG_N_DMRS_CSH_ID_BTS2            0xFFFF          /*0..509,0xFFFF*/

		/*physicalConfigDedicated.uplinkPowerControlDedicated*/
		#define RRC_RECONFIG_P0_UE_PUSCH_BTS2 0									/*-8..7*/
		#define RRC_RECONFIG_DELTA_MCS_SETUP_BTS2 L1S_RELEASE						/*BOOLEAN*/
		#define RRC_RECONFIG_ACCUMULATION_SETUP_BTS2 L1S_SETUP					/*BOOLEAN*/
		#define RRC_RECONFIG_P0_UE_PUCCH_BTS2 0									/*-8..7*/
		#define RRC_RECONFIG_PSRS_OFFSET_BTS2 7									/*0..15*/
		#define RRC_RECONFIG_FILTER_COEFFICIENT_BTS2 FILTER_COEFFICIENT_fc4

        /*physicalConfigDedicated.uplinkPowerControlDedicated-v1020*/
        #define RRC_RECONFIG_PSRS_OFFSET_AP_BTS2           0xFF            /*0..31,0xFF*/

		/*physicalConfigDedicated.tpc-PDCCH-ConfigPUCCH*/
		#define RRC_RECONFIG_TPC_PDCCH_CONFIG_PUCCH_SETUP_BTS2 L1S_RELEASE
		#define RRC_RECONFIG_TPC_PDCCH_CONFIG_PUCCH_TPC_RNTI_BTS2 0x000B	
		#define RRC_RECONFIG_TPC_PDCCH_CONFIG_PUCCH_TPC_FORMAT_BTS2 TPC_PDCCH_CONFIG_PUCCH_TPC_FORMAT3
		#define RRC_RECONFIG_TPC_PDCCH_CONFIG_PUCCH_TPC_INDEX_BTS2 1 			/*DCI format 3: 1~15, DCI format 3A: 1~30*/

		/*physicalConfigDedicated.tpc-PDCCH-ConfigPUSCH*/
		#define RRC_RECONFIG_TPC_PDCCH_CONFIG_PUSCH_SETUP_BTS2 L1S_RELEASE
		#define RRC_RECONFIG_TPC_PDCCH_CONFIG_PUSCH_TPC_RNTI_BTS2 0x000C
		#define RRC_RECONFIG_TPC_PDCCH_CONFIG_PUSCH_TPC_FORMAT_BTS2 TPC_PDCCH_CONFIG_PUSCH_TPC_FORMAT3
		#define RRC_RECONFIG_TPC_PDCCH_CONFIG_PUSCH_TPC_INDEX_BTS2 1 			/*DCI format 3: 1~15, DCI format 3A: 1~30*/

		/*physicalConfigDedicated.cqi-ReportConfig*/
		#define RRC_RECONFIG_CQI_REPORT_MODE_APERIODIC_BTS2 CQI_REPORT_MODE_APERIODIC_invalid
		#define RRC_RECONFIG_NOM_PDSCH_RS_EPRE_OFFSET_BTS2 0 					/*-1..6*/
		#define RRC_RECONFIG_CQI_MASK_R9_BTS2 L1S_RELEASE
		#define RRC_RECONFIG_PMI_RI_REPORT_R9_BTS2 L1S_RELEASE		
		#define RRC_RECONFIG_CQI_REPORT_PERIODIC_SETUP_BTS2 L1S_RELEASE
		#define RRC_RECONFIG_CQI_PUCCH_RESOURCE_INDEX_BTS2 0 					/*0..1185*/
		#define RRC_RECONFIG_CQI_PMI_CONFIG_INDEX_BTS2 0 							/*0..1023*/
		#define RRC_RECONFIG_CQI_FORMAT_INDICATOR_PERIODIC_BTS2 CQI_FORMAT_INDICATOR_PERIODIC_widebandCQI
		#define RRC_RECONFIG_CQI_SUBBAND_K_BTS2 1									/*1..4*/
		#define RRC_RECONFIG_RI_CONFIG_INDEX_BTS2 0								/*0..1023*/
		#define RRC_RECONFIG_SIMULTANEOUS_ACK_NACK_AND_CQI_BTS2 L1S_RELEASE

        #define RRC_RECONFIG_PERIODICITY_FACTOR_BTS2               2                       /*2,4*/

		/*physicalConfigDedicated.csi-RS-Config-r10*/
		#define RRC_RECONFIG_CSI_RS_CONFIG_R10_SETUP_BTS2						  L1S_RELEASE
		#define RRC_RECONFIG_CSI_RS_CONFIG_R10_ANTENNA_PORTS_COUNT_BTS2		  ONE_ANTENNA
		#define RRC_RECONFIG_CSI_RS_CONFIG_R10_RESOURCE_CONFIG_BTS2			  0
		#define RRC_RECONFIG_CSI_RS_CONFIG_R10_SUBFRAME_CONFIG_BTS2			  0
		#define RRC_RECONFIG_CSI_RS_CONFIG_R10_p_C_BTS2						  0
		#define RRC_RECONFIG_CSI_RS_CONFIG_R10_ZERO_TX_POWER_CSI_RS_SETUP_BTS2   L1S_RELEASE
		#define RRC_RECONFIG_CSI_RS_CONFIG_R10_ZERO_TX_POWER_CSI_RS_RESOURCE_CONFIG_LIST_BTS2	 0x0000
		#define RRC_RECONFIG_CSI_RS_CONFIG_R10_ZERO_TX_POWER_CSI_RS_SUBFRAME_CONFIG_BTS2	0

		/*physicalConfigDedicated.soundingRS-UL-ConfigDedicated*/
		#define RRC_RECONFIG_SOUNDING_RS_CONFIG_DEDICATED_SETUP_BTS2 L1S_RELEASE
		#define RRC_RECONFIG_SRS_BANDWIDTH_BTS2 SRS_BANDWIDTH_bw0
		#define RRC_RECONFIG_SRS_HOPPING_BANDWIDTH_BTS2 SRS_HOPPING_BANDWIDTH_hbw0
		#define RRC_RECONFIG_FREQ_DOMAIN_POSITION_BTS2 0 							/*0..1023*/
		#define RRC_RECONFIG_SRS_DURATION_BTS2 L1S_RELEASE
		#define RRC_RECONFIG_SRS_CONFIG_INDEX_BTS2 0 								/*0..1023*/
		#define RRC_RECONFIG_SRS_TRANSMISSION_COMB_BTS2 0							/*0..1*/
		#define RRC_RECONFIG_SRS_CYCLIC_SHIFT_BTS2 0 								/*0..7*/

		/*physicalConfigDedicated.antennaInfo*/
		#define RRC_RECONFIG_TRANSMISSION_MODE_BTS2 TRANSMISSION_MODE_tm1
		#define RRC_RECONFIG_UE_TRANSMIT_ANTENNA_SELECTION_SETUP_BTS2 L1S_RELEASE
		#define RRC_RECONFIG_UE_TRANSMIT_ANTENNA_SELECTION_BTS2 UE_TRANSMIT_ANTENNA_SELECTION_closedloop

		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm3_bitstring_BTS2 0x01					/*bit string size: 2, value range: 0x00..0x03*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm3_bitstring_BTS2 0x01					/*bit string size: 4, value range: 0x00..0x0F*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm4_bitstring_BTS2 0x01					/*bit string size: 6, value range: 0x00..0x3F*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm4_bitstring_BTS2 0X0000000000000001		/*bit string size: 64, value range: 0X0000000000000000..0xFFFFFFFFFFFFFFFF*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm5_bitstring_BTS2 0x01					/*bit string size: 4, value range: 0x00..0x0F*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm5_bitstring_BTS2 0x0001					/*bit string size: 16, value range: 0x0000..0xFFFF*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm6_bitstring_BTS2 0x01					/*bit string size: 4, value range: 0x00..0x0F*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm6_bitstring_BTS2 0x0001					/*bit string size: 16, value range: 0x0000..0xFFFF*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm8_bitstring_BTS2 0x01					/*bit string size: 6, value range: 0x00..0x3F*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm8_bitstring_BTS2 0x00000001				/*bit string size: 32, value range: 0x00000000..0xFFFFFFFF*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm9_bitstring_BTS1 0x01					/*bit string size: 6, value range: 0x00..0x3F*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm9_bitstring_BTS1 0x0000000000000001		/*bit string size: 64, value range: 0X0000000000000000..0xFFFFFFFFFFFFFFFF*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n8TxAntenna_tm9_bitstring_BTS1 0x0000000000000000000000000001		/*bit string size: 109, value range: 0X0000000000000000000000000000..0xFFFFFFFFFFFFFFFFFFFFFFFFFFF*/

		/*physicalConfigDedicated.schedulingRequestConfig*/
		#define RRC_RECONFIG_SCHEDULING_REQUEST_CONFIG_SETUP_BTS2 L1S_RELEASE
		#define RRC_RECONFIG_SR_PUCCH_RESOURCE_INDEX_BTS2 0							/*0..2047*/
		#define RRC_RECONFIG_SR_CONFIG_INDEX_BTS2 0									/*0..157*/
		#define RRC_RECONFIG_DSR_TRANS_MAX_BTS2 DSR_TRANS_MAX_n4

		/*measSubframePatternPCell-r10*/
		#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_PCELL_R10_BTS2 L1S_RELEASE
		#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_PCELL_R10_PATTERN_BTS2 {0}
		#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_PCELL_R10_PATTERN_FDD_BTS2 { \
		                                                                        0, 0, 0, 1, 1, 0, 0, 0, 0, 0, /* SFN % 4 = 0, Subframe0..9 */ \
                                                                            0, 0, 0, 1, 1, 0, 0, 0, 0, 0, /* SFN % 4 = 1, Subframe0..9 */ \
                                                                            0, 0, 0, 1, 1, 0, 0, 0, 0, 0, /* SFN % 4 = 2, Subframe0..9 */ \
                                                                            0, 0, 0, 1, 1, 0, 0, 0, 0, 0  /* SFN % 4 = 3, Subframe0..9 */ \
                                                                          }
		#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_PCELL_R10_PATTERN_TDD_BTS2 { \
		                                                                        0, 0, 0, 1, 1, 0, 0, 0, 0, 0, /* SFN % 2 = 0, Subframe0..9 */ \
                                                                            0, 0, 0, 1, 1, 0, 0, 0, 0, 0  /* SFN % 2 = 1, Subframe0..9 */ \
                                                                          }
	//}
	/*securityConfigHO*/
	#define RRC_RECONFIG_HANDOVER_TYPE_BTS2 HANDOVER_TYPE_intraLTE
	#define RRC_RECONFIG_CYPERING_ALGORITHM_BTS2 CYPERING_ALGORITHM_eea0
	#define RRC_RECONFIG_INTEGRITY_PROT_ALGORITHM_BTS2 INTEGRITY_PROT_ALGORITHM_eia0v920

	/*RRCConnectionReconfiguration-v1020-IEs*/
	/*SCellToReleaseList-r10*/
	#define RRC_RECONFIG_SCELL_RELEASE_SCELL_INDEX_BTS2 1
	/*SCellToAddModList-r10*/
	#define RRC_RECONFIG_SCELL_ADD_SCELL_INDEX_BTS2 1
	/*crossCarrierSchedulingConfig-r10*/
	#define RRC_RECONFIG_SCELL_PHYSICAL_CONFIG_DEDICATED_CCS_CONFIG_BTS2 L1S_RELEASE
	#define RRC_RECONFIG_SCELL_PHYSICAL_CONFIG_DEDICATED_CCS_CONFIG_OWN_CIF_CONFIG_BTS2 L1S_FALSE //Configures Carrier Indicator Field (CIF)
	#define RRC_RECONFIG_SCELL_PHYSICAL_CONFIG_DEDICATED_CCS_CONFIG_OTHER_SCHEDULING_CELLID_BTS2 0 //0..7
	#define RRC_RECONFIG_SCELL_PHYSICAL_CONFIG_DEDICATED_CCS_CONFIG_OTHER_PDSCH_START_BTS2 3 //2..4 for 1.4M and 1..3 for other BW
//}
/*Paging*/
#define PAGING_SYSTEM_INFO_MODIFICATION_BTS2 L1S_RELEASE
#define PAGING_ETWS_INDICATION_BTS2 L1S_RELEASE
#define PAGING_CMAS_INDICATION_BTS2 L1S_RELEASE

/* OTDOA */
#define OTDOA_ASSIST_DATA_REF_CELL_PRS_BW_BTS2 BW_100_RB
#define OTDOA_ASSIST_DATA_REF_CELL_PRS_CONFIG_IDX_BTS2 0
#define OTDOA_ASSIST_DATA_REF_CELL_PRS_NO_DL_FRAME_BTS2 PRS_NO_CONSECUTIVE_SUBFRAME_sf1
#define OTDOA_PRS_SUBFRAME_OFFSET_VALID_BTS2 L1S_RELEASE 
#define OTDOA_PRS_SUBFRAME_OFFSET_BTS2 0

/*==========================RRC Message for BTS3 ==========================*/
#define CFI_VALUE_BTS3 2									/*1..3*/

/* PHY Signal Power */
#define CELL_RS_POWER_BTS3 PWR3 
#define PSS_POWER_BTS3 PWR3
#define SSS_POWER_BTS3 PWR3
#define PCFICH_POWER_BTS3 PWR3
#define PHICH_POWER_BTS3 PWR3
#define PHICH_TOTAL_POWER_BTS3 PWR3
#define PDCCH_POWER_BTS3 PWR3
#define PBCH_POWER_BTS3 PWR3
#define PDSCH_POWER_BTS3 PWR3
#define CSI_RS_POWER_BTS3 PWR3

/*AWGN power*/
#define AWGN_POWER_BTS3 -98

/*OCNG Config*/
#define OCNG_SETUP_BTS3 L1S_SETUP						/*BOOLEAN*/
#define OCNG_POWER_BTS3 PWR3								/*99.0..25.0*/

/*Cell Config*/
#define PHYS_CELL_ID_BTS3 3								/*0..503*/
#define CELL_OFFSET_BTS3 0									/*0..10 ms*/

/*ANTENNA_PORT_NUM */
#if defined(SS_DEF_1TX) || defined(__L1EDPS_ENABLE__)
/* RF */
#define ANTENNA_PORT_NUM_BTS3 ONE_ANTENNA 
#else
/* DIQ/AIQ */
#define ANTENNA_PORT_NUM_BTS3 TWO_ANTENNA 
#endif

#define DL_EARFCN_BTS3 0

/*RNTI value*/
#define C_RNTI_BTS3 0x001									/*0x0001..0xFFF3*/
#define T_C_RNTI_BTS3 0x001									/*0x0001..0xFFF3*/
#define SI_RNTI_BTS3 0xFFFF									/*fixed value*/
#define P_RNTI_BTS3 0xFFFE									/*fixed value*/
//SPS_C_RNTI is defined in RRC Connec. setup

/*DL_BW */
#define MIB_DL_BANDWIDTH_BTS3 BW_100_RB

/*PHICH_DURATION */
#define MIB_PHICH_DURATION_BTS3 PHICH_DURATION_NORMAL	

/*PHICH_RESOURCE value*/
#define MIB_PHICH_RESOURCE_BTS3 PHICH_RESOURCE_oneSixth

/*SIB1*/
//{
	#define SIB1_FREQ_BAND_INDICATOR_BTS3 1				/*1..64*/
	#define SIB1_SERVING_Q_RXLEV_MIN_BTS3 -70			/*-70..-22*/
	#define SIB1_SERVING_Q_QUAL_MIN_BTS3 -34			/*-34..-3*/ 
	#define SIB1_SERVING_P_MAX_BTS3 23					/*-30..33*/

	/*schedulingInfoList*/
	#define SIB1_SI1_PERIODICITY_BTS3 SI_PERIODICITY_rf8
	#define SIB1_SI2_PERIODICITY_BTS3 SI_PERIODICITY_rf8

	#define SIB1_SI_WINDOW_LENGTH_BTS3 SI_WINDOW_LENGTH_ms1		
	#define SIB1_SYSTEM_INFO_VALUE_TAG_BTS3 0			/*0..31*/	

	/*tdd-Config*/
	#define SIB1_SUBFRAME_ASSIGNMENT_BTS3 SUBFRAME_ASSIGNMENT_sa1
	#define SIB1_SPECIAL_SUBFRAME_PATTERN_BTS3 SPECIAL_SUBFRAME_PATTERN_ssp4
//}


/*SIB2*/
//{
	/*radioResourceConfigCommon.preambleInfo*/
	#define SIB2_NUMBER_OF_RA_PREAMBLES_BTS3 NUMBER_OF_RA_PREAMBLES_n64	
	#define SIB2_SIZE_OF_RA_PREAMBLES_GROUP_A_BTS3 SIZE_OF_RA_PREAMBLES_GROUP_A_n64
	#define SIB2_MESSAGE_POWER_OFFSET_GROUP_B_BTS3 MESSAGE_POWER_OFFSET_GROUP_B_minusinfinity			

	/*radioResourceConfigCommon.rach-ConfigCommon.powerRampingParameters*/
	#define SIB2_POWER_RAMPING_STEP_BTS3 POWER_RAMPING_STEP_dB0		
	#define SIB2_PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_BTS3 PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_dBm_minus120	

	/*radioResourceConfigCommon.rach-ConfigCommon.ra-SupervisionInfo*/
	#define SIB2_PREAMBLE_TRANS_MAX_BTS3 PREAMBLE_TRANS_MAX_n200

	/*radioResourceConfigCommon.rach-ConfigCommon.ra-SupervisionInfo*/
	#define SIB2_RA_RESPONSE_WINDOW_SIZE_BTS3 RA_RESPONSE_WINDOW_SIZE_sf10	
	#define SIB2_MAC_CONTENTION_RESOLUTION_TIMER_BTS3 MAC_CONTENTION_RESOLUTION_TIMER_sf64

	#define SIB2_MAX_HARQ_MSG3TX_BTS3 5							/*1..8*/

	/*radioResourceConfigCommon.bcch-Config*/
	#define SIB2_MODIFICATION_PERIOD_COEFF_BTS3 MODIFICATION_PERIOD_COEFF_N2

	/*radioResourceConfigCommon.pcch-Config*/
	#define SIB2_DEFAULT_PAGING_CYCLE_BTS3 DEFAULT_PAGING_CYCLE_RF32
	#define SIB2_NB_BTS3 NB_oneEightT		

	/*radioResourceConfigCommon.prach-Config*/
	#define SIB2_ROOT_SEQUENCE_INDEX_BTS3 0							/*0..837*/	
	#define SIB2_PRACH_CONFIG_INDEX_BTS3 12							/*0..63*/	
	#define SIB2_HIGH_SPEED_FLAG_BTS3 L1S_RELEASE						/*BOOLEAN*/	
	#define SIB2_ZERO_CORRELATION_ZONE_CONFIG_BTS3 0				/*0..15*/	
	#define SIB2_PRACH_FREQ_OFFSET_BTS3 0							/*0..94*/
	
	/*radioResourceConfigCommon.pdsch-ConfigCommon*/
	#define SIB2_REFERENCE_SIGNAL_POWER_BTS3 -50						/*-60..50*/	
	#define SIB2_P_B_BTS3 0												/*0..3*/

	/*radioResourceConfigCommon.pusch-ConfigBasic*/
	#define SIB2_N_SB_BTS3 1											/*1..4*/
	#define SIB2_HOPPING_MODE_BTS3 HOPPING_MODE_interSubFrame	
	#define SIB2_PUSCH_HOPPING_OFFSET_BTS3 2 							/*0..98*/
	#define SIB2_enable64QAM_BTS3 L1S_RELEASE

	/*radioResourceConfigCommon.ul-ReferenceSignalsPUSCH*/
	#define SIB2_GROUP_HOPPING_SETUP_BTS3 L1S_RELEASE				/*BOOLEAN*/	
	#define SIB2_GROUP_ASSIGNMENT_PUSCH_BTS3 0						/*0..29*/	
	#define SIB2_SEQUENCE_HOPPING_ENABLED_BTS3 L1S_RELEASE			/*BOOLEAN*/	
	#define SIB2_CYCLIC_SHIFT_BTS3 0									/*0..7*/

	/*radioResourceConfigCommon.pucch-ConfigCommon*/
	#define SIB2_DELTA_PUCCH_SHIFT_BTS3 DELTA_PUCCH_SHIFT_ds3
	#define SIB2_NRB_CQI_BTS3 1										/*0..98*/	
	#define SIB2_NCS_AN_BTS3 6										/*0..7*/	
	#define SIB2_N1PUCCH_AN_BTS3 2									/*0..2047*/

	/*radioResourceConfigCommon.soundingRS-UL-ConfigCommon*/
	#define SIB2_SOUNDING_RS_UL_CONFIG_COMMON_BTS3 L1S_RELEASE
	#define SIB2_SRS_BANDWIDTH_CONFIG_BTS3 SRS_BANDWIDTH_CONFIG_bw7
	#define SIB2_SRS_SUBFRAME_CONFIG_BTS3 SRS_SUBFRAME_CONFIG_sc0
	#define SIB2_ACK_NACK_SRS_SIMULTANEOUS_TRANSMISSION_BTS3 L1S_RELEASE	
	#define SIB2_SRS_UP_PTS_BTS3 L1S_RELEASE


	/*radioResourceConfigCommon.uplinkPowerControlCommon.p0-NominalPUSCH*/
	#define SIB2_P0_NOMINAL_PUSCH_BTS3 -126						/*-126..24*/
	#define SIB2_ALPHA_BTS3 ALPHA_al0
	#define SIB2_P0_NOMINAL_PUCCH_BTS3 -127						/*-127..-96*/
	#define SIB2_DELTA_PUCCH_FORMAT1_deltaF_BTS3 DELTA_PUCCH_FORMAT1_deltaF_minus2
	#define SIB2_DELTA_PUCCH_FORMAT1B_deltaF_BTS3 DELTA_PUCCH_FORMAT1B_deltaF_1
	#define SIB2_DELTA_PUCCH_FORMAT2_deltaF_BTS3 DELTA_PUCCH_FORMAT2_deltaF_minus2
	#define SIB2_DELTA_PUCCH_FORMAT2A_deltaF_BTS3 DELTA_PUCCH_FORMAT2A_deltaF_minus2
	#define SIB2_DELTA_PUCCH_FORMAT2B_deltaF_BTS3 DELTA_PUCCH_FORMAT2B_deltaF_minus2

	#define SIB2_DELTA_PREAMBLE_MSG3_BTS3 0							/*-1..6*/

	/*radioResourceConfigCommon.ul-CyclicPrefixLength*/
	#define SIB2_UL_CYCLIC_PREFIX_LENGTH_BTS3 UL_CYCLIC_PREFIX_LENGTH_len1

	/*ue-TimersAndConstants*/	
	#define SIB2_T300_BTS3 T300_ms1000
	#define SIB2_T301_BTS3 T301_ms1000
	#define SIB2_T310_BTS3 T310_ms1000
	#define SIB2_N310_BTS3 N310_n1
	#define SIB2_T311_BTS3 T311_ms1000
	#define SIB2_N311_BTS3 N311_n1

	#define SIB2_UL_CARRIER_FREQ_BTS3 18000						/*0..65536*/
	#define SIB2_UL_BANDWIDTH_BTS3 BW_100_RB

	/*mbsfn-SubframeConfigList*/
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_BTS3 L1S_RELEASE /*L1S_RELEASE: list isn't present ; L1S_SETUP: list is present */
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_1_RADIOFRAME_ALLOCATION_PERIOD_BTS3 RADIOFRAME_ALLOCATION_PERIOD_n1 /*{n1, n2, n4, n8, n16, n32}*/ 
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_1_RADIOFRAME_ALLOCATION_OFFSET_BTS3 0
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_1_SUBFRAME_ALLOCATION_LENGTH_BTS3 SUBFRAME_ALLOCATION_LENGTH_ONE_FRAME
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_1_SUBFRAME_ALLOCATION_PATTERN_BTS3 (MBSFN_SF2|MBSFN_SF3|MBSFN_SF7)
//}

/*SIB3*/
#define SIB3_Q_HYST_BTS3 0
#define SIB3_THRESH_SERVING_LOW_BTS3 0                         /*0..31*/ 
#define SIB3_S_INTRA_SEARCH_P_BTS3 0				           /*0..31*/
#define SIB3_S_INTRA_SEARCH_Q_BTS3 0						   /*0..31*/
#define SIB3_S_NON_INTRA_SEARCH_P_BTS3 0					   /*0..31*/
#define SIB3_S_NON_INTRA_SEARCH_Q_BTS3 0					   /*0..31*/
#define SIB3_INTRA_Q_RXLEV_MIN_BTS3 -70                        /*-70..22*/
#define SIB3_INTRA_Q_QUAL_MIN_BTS3 -34                         /*-34..-3*/
#define SIB3_INTRA_P_MAX_BTS3 23                              /*-30..33*/ 
#define SIB3_INTRA_T_RESELECTION_BTS3 0                        /*-0..7*/
	
/*SIB4*/
#define SIB4_INTRA_NEIGHBOR_Q_OFFSET_CELL_BTS3 0
	
/*SIB5*/
#define SIB5_THRESHX_HIGH_BTS3 0                               /*0..31*/ 
#define SIB5_THRESHX_LOW_BTS3 0                                /*0..31*/ 
#define SIB5_INTER_Q_RXLEV_MIN_BTS3 -70                        /*-70..22*/
#define SIB5_INTER_Q_QUAL_MIN_BTS3 -34                         /*-34..-3*/
#define SIB5_INTER_P_MAX_BTS3 23                              /*-30..33*/ 
#define SIB5_INTER_T_RESELECTION_BTS3 0                        /*-0..7*/
#define SIB5_INTER_NEIGHBOR_Q_OFFSET_CELL_BTS3 0                
#define SIB5_INTER_Q_OFFSET_FREQUENCY_BTS3 0

/*SIB13*/
#define SIB13_MBSFN_1_AREA_ID_BTS3 0 //(0..255)
#define SIB13_MBSFN_1_NON_MBSFN_REGION_LENGTH_BTS3 MBSFN_NON_MBSFN_REGION_LENGTH_s1 //s1:0 ; s2:1
#define SIB13_MBSFN_1_NOTIFICATION_INDICATOR_BTS3 0 //(0..7)
#define SIB13_MBSFN_1_MCCH_REPETITION_PERIOD_BTS3 MCCH_REPETITION_PERIOD_rf32 //(0..7)
#define SIB13_MBSFN_1_MCCH_OFFSET_BTS3 0 //(0..10)
#define SIB13_MBSFN_1_MCCH_MODIFICATION_PERIOD_BTS3 MCCH_MODIFICATION_PERIOD_rf512 //(0..7)
#define SIB13_MBSFN_1_MCCH_SF_ALLOC_INFO_BTS3 MBSFN_SF1
#define SIB13_MBSFN_1_MCCH_SIGNALLING_MCS_BTS3 MCCH_SIGNALLING_MCS_n2
#define SIB13_MBMS_NOTIFICATION_REPETITION_COEFF_BTS3 MBMS_NOTIFICATION_REPETITION_COEFF_n2
#define SIB13_MBMS_NOTIFICATION_OFFSET_BTS3 0 //0..10
#define SIB13_MBMS_NOTIFICATION_SF_INDEX_BTS3 1 //1..6


/*rrcConnectionSetup.radioResourceConfigDedicated*/
//{
	/*mac-MainConfig*/
	/*mac-MainConfig.explicitValue.ul-SCH-Config*/
	#define RRC_SETUP_MAX_HARQ_TX_BTS3 MAX_HARQ_TX_n5
	#define RRC_SETUP_PERIODIC_BSR_TIMER_BTS3 PERIODIC_BSR_TIMER_sf5
	#define RRC_SETUP_RETX_BSR_TIMER_BTS3 RETX_BSR_TIMER_sf320
	#define RRC_SETUP_TTI_BUNDLING_BTS3 L1S_RELEASE							/*BOOLEAN*/	
	/*mac-MainConfig.explicitValue.drx-Config*/
	#define RRC_SETUP_DRX_CONFIG_BTS3 L1S_RELEASE							/*BOOLEAN*/
	#define RRC_SETUP_ON_DURATION_TIMER_BTS3 ON_DURATION_TIMER_psf5
	#define RRC_SETUP_DRX_INACTIVITY_TIMER_BTS3 DRX_INACTIVITY_TIMER_psf5
	#define RRC_SETUP_DRX_RETRANSMISSION_TIMER_BTS3 DRX_RETRANSMISSION_TIMER_psf16
	#define RRC_SETUP_LONG_DRX_CYCLE_BTS3 LONG_DRX_CYCLE_sf40
	#define RRC_SETUP_CYCLE_START_OFFSET_BTS3 0				/*0..2559(depends on LONG_DRX_CYCLE)*/
	#define RRC_SETUP_SHORT_DRX_SETUP_BTS3 L1S_RELEASE
	#define RRC_SETUP_SHORT_DRX_CYCLE_BTS3 SHORT_DRX_CYCLE_sf2
	#define RRC_SETUP_DRX_SHORT_CYCLE_TIMER_BTS3 1				/*1..16*/

	/*sps-Config*/
	#define RRC_SETUP_SPS_CONFIG_DL_BTS3 L1S_RELEASE	
	#define RRC_SETUP_SPS_CONFIG_UL_BTS3 L1S_RELEASE	
	#define RRC_SETUP_SEMI_PERSIST_SCHED_C_RNTI_BTS3 0xFFF0

	/*sps-ConfigDL*/
	#define RRC_SETUP_SEMI_PERSIST_SCHED_INTERVAL_DL_BTS3 SEMI_PERSIST_SCHED_INTERVAL_DL_sf20
	#define RRC_SETUP_NUMBER_OF_CONF_SPS_PROCESSES_BTS3 3		/*1..8*/	
	#define RRC_SETUP_N1_PUCCH_AN_PERSISTENT_LIST_SIZE_BTS3 4		/*1..4*/
	#define RRC_SETUP_N1_PUCCH_AN_PERSISTENT_LIST_1_BTS3 3		/*0..2047*/
	#define RRC_SETUP_N1_PUCCH_AN_PERSISTENT_LIST_2_BTS3 4		/*0..2047*/
	#define RRC_SETUP_N1_PUCCH_AN_PERSISTENT_LIST_3_BTS3 5		/*0..2047*/
	#define RRC_SETUP_N1_PUCCH_AN_PERSISTENT_LIST_4_BTS3 6		/*0..2047*/	

	/*sps-ConfigUL*/
	#define RRC_SETUP_SEMI_PERSIST_SCHED_INTERVAL_UL_BTS3 SEMI_PERSIST_SCHED_INTERVAL_UL_sf20
	#define RRC_SETUP_IMPLICIT_RELEASE_AFTER_BTS3 IMPLICIT_RELEASE_AFTER_e8
	#define RRC_SETUP_TWO_INTERVALS_CONFIG_BTS3 L1S_RELEASE
	#define RRC_SETUP_P0_NOMINAL_PUSCH_PERSISTENT_BTS3 -126	/*-126..24*/
	#define RRC_SETUP_P0_UE_PUSCH_PERSISTENT_BTS3 -126			/*-8..7*/
	
	/*physicalConfigDedicated*/
	/*physicalConfigDedicated.pdsch-ConfigDedicated*/
	#define RRC_SETUP_P_A_dB_BTS3 P_A_dB_0

	/*physicalConfigDedicated.pucch-ConfigDedicated*/
	#define RRC_SETUP_ACK_NACK_REPETITION_SETUP_BTS3 L1S_RELEASE
	#define RRC_SETUP_REPETITION_FACTOR_BTS3  REPETITION_FACTOR_n2
	#define RRC_SETUP_N1_PUCCH_ANREP_BTS3 0 								/*0..2047*/
	#define RRC_SETUP_TDD_ACK_NACK_FEEDBACK_MODE_BTS3 TDD_ACK_NACK_FEEDBACK_MODE_bundling

	#define RRC_SETUP_NRB_CQI_BTS3 1									/*0..98*/
	#define RRC_SETUP_NCS_AN_BTS3 6									/*0..7*/
	#define RRC_SETUP_N1PUCCH_AN_BTS3 2								/*0..2047*/	

    /*radioResourceConfigCommon.pucch-ConfigDedicated-v1020*/
    #define RRC_SETUP_PUCCH_FORMAT_BTS3             0xFF            /*0,1,0xFF*/
    #define RRC_SETUP_N3_PUCCH_AN_LIST_0_BTS3       0xFFFF          /*0..549, 0xFFFF*/
    #define RRC_SETUP_N3_PUCCH_AN_LIST_1_BTS3       0xFFFF          /*0..549, 0xFFFF*/
    #define RRC_SETUP_N3_PUCCH_AN_LIST_2_BTS3       0xFFFF          /*0..549, 0xFFFF*/
    #define RRC_SETUP_N3_PUCCH_AN_LIST_3_BTS3       0xFFFF          /*0..549, 0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_0_BTS3  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_1_BTS3  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_2_BTS3  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_0_3_BTS3  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_0_BTS3  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_1_BTS3  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_2_BTS3  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_1_3_BTS3  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_2_0_BTS3  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_2_1_BTS3  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_2_2_BTS3  0xFFFF          /*0..2047,0xFFFF*/
    #define RRC_SETUP_N1_PUCCH_AN_CS_LIST_2_3_BTS3  0xFFFF          /*0..2047,0xFFFF*/

    #define RRC_SETUP_SIMULTANEOUS_PUCCH_PUSCH_BTS3 L1S_RELEASE     /*0,1*/

    /*radioResourceConfigCommon.pucch-ConfigDedicated-v1130*/
    #define RRC_SETUP_N_PUCCH_ID_BTS3               0xFF            /*0..503, 0xFF*/
    #define RRC_SETUP_N1_PUCCH_AN_BTS3              0xFF            /*0..2047, 0xFF*/

	/*physicalConfigDedicated.pusch-ConfigDedicated*/
	#define RRC_SETUP_BETA_OFFSET_ACK_INDEX_BTS3 0
	#define RRC_SETUP_BETA_OFFSET_RI_INDEX_BTS3 0
	#define RRC_SETUP_BETA_OFFSET_CQI_INDEX_BTS3 2

    /*physicalConfigDedicated.pusch-ConfigDedicated-v1130*/
    #define RRC_SETUP_N_PUSCH_ID_BTS3               0xFFFF          /*0..509,0xFFFF*/
    #define RRC_SETUP_N_DMRS_CSH_ID_BTS3            0xFFFF          /*0..509,0xFFFF*/

	/*physicalConfigDedicated.uplinkPowerControlDedicated*/
	#define RRC_SETUP_P0_UE_PUSCH_BTS3 0								/*-8..7*/
	#define RRC_SETUP_DELTA_MCS_SETUP_BTS3 L1S_RELEASE				/*BOOLEAN*/
	#define RRC_SETUP_ACCUMULATION_SETUP_BTS3 L1S_SETUP				/*BOOLEAN*/
	#define RRC_SETUP_P0_UE_PUCCH_BTS3 0								/*-8..7*/
	#define RRC_SETUP_PSRS_OFFSET_BTS3 7								/*0..15*/
	#define RRC_SETUP_FILTER_COEFFICIENT_BTS3 FILTER_COEFFICIENT_fc4

    /*physicalConfigDedicated.uplinkPowerControlDedicated-v1020*/
    #define RRC_SETUP_PSRS_OFFSET_AP_BTS3           0xFF            /*0..31,0xFF*/

	/*physicalConfigDedicated.tpc-PDCCH-ConfigPUCCH*/
	#define RRC_SETUP_TPC_PDCCH_CONFIG_PUCCH_SETUP_BTS3 L1S_RELEASE
	#define RRC_SETUP_TPC_PDCCH_CONFIG_PUCCH_TPC_RNTI_BTS3 0x000B
	#define RRC_SETUP_TPC_PDCCH_CONFIG_PUCCH_TPC_FORMAT_BTS3 TPC_PDCCH_CONFIG_PUCCH_TPC_FORMAT3
	#define RRC_SETUP_TPC_PDCCH_CONFIG_PUCCH_TPC_INDEX_BTS3 1				/*DCI format 3: 1~15, DCI format 3A: 1~30*/

	/*physicalConfigDedicated.tpc-PDCCH-ConfigPUSCH*/
	#define RRC_SETUP_TPC_PDCCH_CONFIG_PUSCH_SETUP_BTS3 L1S_RELEASE
	#define RRC_SETUP_TPC_PDCCH_CONFIG_PUSCH_TPC_RNTI_BTS3 0x000C
	#define RRC_SETUP_TPC_PDCCH_CONFIG_PUSCH_TPC_FORMAT_BTS3 TPC_PDCCH_CONFIG_PUSCH_TPC_FORMAT3
	#define RRC_SETUP_TPC_PDCCH_CONFIG_PUSCH_TPC_INDEX_BTS3 1				/*DCI format 3: 1~15, DCI format 3A: 1~30*/

	/*physicalConfigDedicated.cqi-ReportConfig*/
	#define RRC_SETUP_CQI_REPORT_MODE_APERIODIC_BTS3 CQI_REPORT_MODE_APERIODIC_invalid
	#define RRC_SETUP_NOM_PDSCH_RS_EPRE_OFFSET_BTS3 0						/*-1..6*/
	
	#define RRC_SETUP_CQI_MASK_R9_BTS3 L1S_RELEASE
	#define RRC_SETUP_PMI_RI_REPORT_R9_BTS3 L1S_RELEASE
	
	#define RRC_SETUP_CQI_REPORT_PERIODIC_SETUP_BTS3 L1S_RELEASE
	#define RRC_SETUP_CQI_PUCCH_RESOURCE_INDEX_BTS3 0						/*0..1185*/
	#define RRC_SETUP_CQI_PMI_CONFIG_INDEX_BTS3 0							/*0..1023*/
	#define RRC_SETUP_CQI_FORMAT_INDICATOR_PERIODIC_BTS3  CQI_FORMAT_INDICATOR_PERIODIC_widebandCQI

	#define RRC_SETUP_CQI_SUBBAND_K_BTS3 1									/*1..4*/
	#define RRC_SETUP_RI_CONFIG_INDEX_BTS3 0								/*0..1023*/
	#define RRC_SETUP_SIMULTANEOUS_ACK_NACK_AND_CQI_BTS3 L1S_RELEASE

    #define RRC_SETUP_PERIODICITY_FACTOR_BTS3               2                       /*2,4*/

	/*physicalConfigDedicated.csi-RS-Config-r10*/
	#define RRC_SETUP_CSI_RS_CONFIG_R10_SETUP_BTS3						  L1S_RELEASE
	#define RRC_SETUP_CSI_RS_CONFIG_R10_ANTENNA_PORTS_COUNT_BTS3		  ONE_ANTENNA
	#define RRC_SETUP_CSI_RS_CONFIG_R10_RESOURCE_CONFIG_BTS3			  0
	#define RRC_SETUP_CSI_RS_CONFIG_R10_SUBFRAME_CONFIG_BTS3			  0
	#define RRC_SETUP_CSI_RS_CONFIG_R10_p_C_BTS3						  0
	#define RRC_SETUP_CSI_RS_CONFIG_R10_ZERO_TX_POWER_CSI_RS_SETUP_BTS3   L1S_RELEASE
	#define RRC_SETUP_CSI_RS_CONFIG_R10_ZERO_TX_POWER_CSI_RS_RESOURCE_CONFIG_LIST_BTS3	 0x0000
	#define RRC_SETUP_CSI_RS_CONFIG_R10_ZERO_TX_POWER_CSI_RS_SUBFRAME_CONFIG_BTS3	0

	/*physicalConfigDedicated.soundingRS-UL-ConfigDedicated*/
	#define RRC_SETUP_SOUNDING_RS_CONFIG_DEDICATED_SETUP_BTS3 L1S_RELEASE
	#define RRC_SETUP_SRS_BANDWIDTH_BTS3 SRS_BANDWIDTH_bw0
	#define RRC_SETUP_SRS_HOPPING_BANDWIDTH_BTS3 SRS_HOPPING_BANDWIDTH_hbw0

	#define RRC_SETUP_FREQ_DOMAIN_POSITION_BTS3 0							/*0..1023*/
	#define RRC_SETUP_SRS_DURATION_BTS3 L1S_RELEASE
	#define RRC_SETUP_SRS_CONFIG_INDEX_BTS3 0								/*0..1023*/
	#define RRC_SETUP_SRS_TRANSMISSION_COMB_BTS3 0						/*0..1*/
	#define RRC_SETUP_SRS_CYCLIC_SHIFT_BTS3 0								/*0..7*/

	/*physicalConfigDedicated.antennaInfo*/
	#define RRC_SETUP_TRANSMISSION_MODE_BTS3 TRANSMISSION_MODE_tm1

	#define RRC_SETUP_UE_TRANSMIT_ANTENNA_SELECTION_SETUP_BTS3 L1S_RELEASE
	#define RRC_SETUP_UE_TRANSMIT_ANTENNA_SELECTION_BTS3 UE_TRANSMIT_ANTENNA_SELECTION_closedloop

	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm3_bitstring_BTS3 0x01					/*bit string size: 2, value range: 0x00..0x03*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm3_bitstring_BTS3 0x01					/*bit string size: 4, value range: 0x00..0x0F*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm4_bitstring_BTS3 0x01					/*bit string size: 6, value range: 0x00..0x3F*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm4_bitstring_BTS3 0X0000000000000001		/*bit string size: 64, value range: 0X0000000000000000..0xFFFFFFFFFFFFFFFF*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm5_bitstring_BTS3 0x01					/*bit string size: 4, value range: 0x00..0x0F*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm5_bitstring_BTS3 0x0001					/*bit string size: 16, value range: 0x0000..0xFFFF*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm6_bitstring_BTS3 0x01					/*bit string size: 4, value range: 0x00..0x0F*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm6_bitstring_BTS3 0x0001					/*bit string size: 16, value range: 0x0000..0xFFFF*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm8_bitstring_BTS3 0x01					/*bit string size: 6, value range: 0x00..0x3F*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm8_bitstring_BTS3 0x00000001				/*bit string size: 32, value range: 0x00000000..0xFFFFFFFF*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm9_bitstring_BTS3 0x01					/*bit string size: 6, value range: 0x00..0x3F*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm9_bitstring_BTS3 0x0000000000000001		/*bit string size: 64, value range: 0X0000000000000000..0xFFFFFFFFFFFFFFFF*/
	#define RRC_SETUP_CODEBOOK_SUBSET_RESTRICTION_n8TxAntenna_tm9_bitstring_BTS3 0x0000000000000000000000000001		/*bit string size: 109, value range: 0X0000000000000000000000000000..0xFFFFFFFFFFFFFFFFFFFFFFFFFFF*/

	/*physicalConfigDedicated.schedulingRequestConfig*/
	#define RRC_SETUP_SCHEDULING_REQUEST_CONFIG_SETUP_BTS3 L1S_RELEASE
	#define RRC_SETUP_SR_PUCCH_RESOURCE_INDEX_BTS3 0						/*0..2047*/
	#define RRC_SETUP_SR_CONFIG_INDEX_BTS3 0                         				 /*0..157*/
	#define RRC_SETUP_DSR_TRANS_MAX_BTS3 DSR_TRANS_MAX_n4

	/*physicalConfigDedicated.cif-Presence-r10*/
	#define RRC_SETUP_CIF_PRESENCE_BTS3 KAL_FALSE	
//}

/*rrcConnectionReconfiguration*/
//{
	#define RRC_RECONFIG_REPORT_EVENT_A2_THRESHOLD_BTS3 0
	#define RRC_RECONFIG_REPORT_EVENT_A3_OFFSET_BTS3 0
	#define RRC_RECONFIG_REPORT_EVENT_A6_OFFSET_BTS3 0
	#define RRC_RECONFIG_REPORT_EVENT_HYSTERESIS_BTS3 0
	#define RRC_RECONFIG_REPORT_EVENT_TIME_TO_TRIGGER_BTS3 0 
		
	/*measGapConfig*/
	#define RRC_RECONFIG_GAP_CONFIG_SETUP_BTS3 L1S_RELEASE
	#define RRC_RECONFIG_GAP_PATTERN_BTS3 GAP_PATTERN_gp0
	
	#define RRC_RECONFIG_GAP_OFFSET_gp0_BTS3 0											/*0..39*/
	#define RRC_RECONFIG_GAP_OFFSET_gp1_BTS3 0											/*0..79*/

	/*measConfig.s-Measure*/
	#define RRC_RECONFIG_S_MEASURE_BTS3 0												/*0..97*/

	/*measConfig.quantityConfig*/
	#define RRC_RECONFIG_FILTER_COEFFICIENT_RSRP_BTS3 FILTER_COEFFICIENT_RSRP_fc4 
	#define RRC_RECONFIG_FILTER_COEFFICIENT_RSRQ_BTS3 FILTER_COEFFICIENT_RSRQ_fc4 
	
	/*measConfig.measCycleSCell-r10 = {sf160, sf256, sf320, sf512, sf640, sf1024, sf1280} */
	#define RRC_RECONFIG_MEAS_CYCLE_SCELL_R10_BTS3 MEAS_CYCLE_SCELL_R10_NOCONFIG

	/*measConfig.measSubframePatternNeigh-r10*/
	#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_CONFIG_NEIGH_R10_BTS3 L1S_RELEASE
	#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_CONFIG_NEIGH_R10_PATTERN_BTS3 {0}
	#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_CONFIG_NEIGH_R10_PATTERN_FDD_BTS3 { \
		                                                                             0, 0, 0, 1, 1, 0, 0, 0, 0, 0, /* SFN % 4 = 0, Subframe0..9 */ \
                                                                                 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, /* SFN % 4 = 1, Subframe0..9 */ \
                                                                                 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, /* SFN % 4 = 2, Subframe0..9 */ \
                                                                                 0, 0, 0, 1, 1, 0, 0, 0, 0, 0  /* SFN % 4 = 3, Subframe0..9 */ \
                                                                               }
	#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_CONFIG_NEIGH_R10_PATTERN_TDD_BTS3 { \
		                                                                             0, 0, 0, 1, 1, 0, 0, 0, 0, 0, /* SFN % 2 = 0, Subframe0..9 */ \
                                                                                 0, 0, 0, 1, 1, 0, 0, 0, 0, 0  /* SFN % 2 = 1, Subframe0..9 */ \
                                                                               }
	/*measConfig.measSubframeCellList-r10 / PhysCellIdRange*/
	#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_CONFIG_NEIGH_R10_CELL_1_PCI_START_BTS3 0 /*(0..503)*/
	#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_CONFIG_NEIGH_R10_CELL_1_PCI_RANGE_BTS3 PCI_RANGE_n4 /*n4, n8, n12, n16, n24, n32, n48, n64, n84, n96, n128, n168, n252, n504*/
	
	/*mobilityControlInfo*/
//	#define RRC_RECONFIG_TARGET_PHYS_CELL_ID_BTS3 0										/*0..503*/
	#define RRC_RECONFIG_TARGET_DL_CARRIER_FREQ_BTS3 0									/*0..65535*/
	#define RRC_RECONFIG_TARGET_UL_CARRIER_FREQ_BTS3 0									/*0..65535*/
	
	#define RRC_RECONFIG_TARGET_DL_BANDWIDTH_BTS3 BW_100_RB							/*0..65535*/
	#define RRC_RECONFIG_TARGET_UL_BANDWIDTH_BTS3 BW_100_RB							/*0..65535*/
	#define RRC_RECONFIG_T304_BTS3 T304_ms50

	/*mobilityControlInfo.radioResourceConfigCommon*/
	//{	
		/*rach-ConfigCommon.preambleInfo*/
		#define RRC_RECONFIG_NUMBER_OF_RA_PREAMBLES_BTS3 NUMBER_OF_RA_PREAMBLES_n64
		#define RRC_RECONFIG_SIZE_OF_RA_PREAMBLES_GROUP_A_BTS3 SIZE_OF_RA_PREAMBLES_GROUP_A_n64
		#define RRC_RECONFIG_MESSAGE_POWER_OFFSET_GROUP_B_BTS3 MESSAGE_POWER_OFFSET_GROUP_B_minusinfinity

		/*rach-ConfigCommon.powerRampingParameters*/
		#define RRC_RECONFIG_POWER_RAMPING_STEP_BTS3 POWER_RAMPING_STEP_dB0
		#define RRC_RECONFIG_PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_BTS3 PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_dBm_minus120

		/*rach-ConfigCommon.ra-SupervisionInfo*/
		#define RRC_RECONFIG_PREAMBLE_TRANS_MAX_BTS3 PREAMBLE_TRANS_MAX_n200

		/*rach-ConfigCommon.ra-SupervisionInfo*/
		#define RRC_RECONFIG_RA_RESPONSE_WINDOW_SIZE_BTS3 RA_RESPONSE_WINDOW_SIZE_sf10	
		#define RRC_RECONFIG_MAC_CONTENTION_RESOLUTION_TIMER_BTS3 MAC_CONTENTION_RESOLUTION_TIMER_sf64
		#define RRC_RECONFIG_MAX_HARQ_MSG3TX_BTS3 5							/*1..8*/

		/*prach-Config*/
		#define RRC_RECONFIG_ROOT_SEQUENCE_INDEX_BTS3 0						/*0..837*/
		#define RRC_RECONFIG_PRACH_CONFIG_INDEX_BTS3 12						/*0..63*/
		#define RRC_RECONFIG_HIGH_SPEED_FLAG_BTS3 L1S_RELEASE					/*BOOLEAN*/
		#define RRC_RECONFIG_ZERO_CORRELATION_ZONE_CONFIG_BTS3 0			/*0..15*/
		#define RRC_RECONFIG_PRACH_FREQ_OFFSET_BTS3 0						/*0..94*/

		/*pdsch-ConfigCommon*/
		#define RRC_RECONFIG_REFERENCE_SIGNAL_POWER_BTS3 -50					/*-60..50*/
		#define RRC_RECONFIG_P_B_BTS3 0											/*0..3*/

		/*pusch-ConfigBasic*/
		#define RRC_RECONFIG_N_SB_BTS3 1										/*1..4*/
		#define RRC_RECONFIG_HOPPING_MODE_BTS3 HOPPING_MODE_interSubFrame
		#define RRC_RECONFIG_PUSCH_HOPPING_OFFSET_BTS3 2 						/*0..98*/

		/*ul-ReferenceSignalsPUSCH*/
		#define RRC_RECONFIG_GROUP_HOPPING_SETUP_BTS3 L1S_RELEASE			/*BOOLEAN*/
		#define RRC_RECONFIG_GROUP_ASSIGNMENT_PUSCH_BTS3 0					/*0..29*/
		#define RRC_RECONFIG_SEQUENCE_HOPPING_SETUP_BTS3 L1S_RELEASE			/*BOOLEAN*/
		#define RRC_RECONFIG_CYCLIC_SHIFT_BTS3 0								/*0..7*/

		/*phich-Config*/
		#define RRC_RECONFIG_PHICH_DURATION_BTS3 PHICH_DURATION_NORMAL
		#define RRC_RECONFIG_PHICH_RESOURCE_BTS3 PHICH_RESOURCE_oneSixth

		/*pucch-ConfigCommon*/
		#define RRC_RECONFIG_DELTA_PUCCH_SHIFT_BTS3 DELTA_PUCCH_SHIFT_ds3
		#define RRC_RECONFIG_NRB_CQI_BTS3 1										/*0..98*/
		#define RRC_RECONFIG_NCS_AN_BTS3 6										/*0..7*/
		#define RRC_RECONFIG_N1PUCCH_AN_BTS3 2									/*0..2047*/

		/*soundingRS-UL-ConfigCommon*/
		#define RRC_RECONFIG_SOUNDING_RS_UL_CONFIG_COMMON_BTS3 L1S_RELEASE /*CHOICE*/
		#define RRC_RECONFIG_SRS_BANDWIDTH_CONFIG_BTS3 SRS_BANDWIDTH_CONFIG_bw7
		#define RRC_RECONFIG_SRS_SUBFRAME_CONFIG_BTS3  SRS_SUBFRAME_CONFIG_sc0
		#define RRC_RECONFIG_ACK_NACK_SRS_SIMULTANEOUS_TRANSMISSION_BTS3 L1S_RELEASE /*BOOLEAN*/
		#define RRC_RECONFIG_SRS_UP_PTS_BTS3 L1S_RELEASE


		/*uplinkPowerControlCommon.p0-NominalPUSCH*/
		#define RRC_RECONFIG_P0_NOMINAL_PUSCH_BTS3 -126						/*-126..24*/
		#define RRC_RECONFIG_ALPHA_BTS3 ALPHA_al0
		#define RRC_RECONFIG_DELTA_PUCCH_FORMAT1_deltaF_BTS3 DELTA_PUCCH_FORMAT1_deltaF_minus2
		#define RRC_RECONFIG_DELTA_PUCCH_FORMAT1B_deltaF_BTS3 DELTA_PUCCH_FORMAT1B_deltaF_1
		#define RRC_RECONFIG_DELTA_PUCCH_FORMAT2_deltaF_BTS3 DELTA_PUCCH_FORMAT2_deltaF_minus2	
		#define RRC_RECONFIG_DELTA_PUCCH_FORMAT2A_deltaF_BTS3 DELTA_PUCCH_FORMAT2A_deltaF_minus2	
		#define RRC_RECONFIG_DELTA_PUCCH_FORMAT2B_deltaF_BTS3 DELTA_PUCCH_FORMAT2B_deltaF_minus2

		/*antennaInfoCommon.antennaPortsCount*/
		#define RRC_RECONFIG_ANTENNA_PORTS_COUNT_BTS3 RRC_RECONFIG_ANTENNA_PORTS_COUNT_an1

		/*p-Max*/
		#define RRC_RECONFIG_P_MAX_BTS3 23										/*-30..33*/

		/*tdd-Config*/
		#define RRC_RECONFIG_SUBFRAME_ASSIGNMENT_BTS3 SUBFRAME_ASSIGNMENT_sa1
		#define RRC_RECONFIG_SPECIAL_SUBFRAME_PATTERN_BTS3 SPECIAL_SUBFRAME_PATTERN_ssp4

		/*ul-CyclicPrefixLength*/
		#define RRC_RECONFIG_UL_CYCLIC_PREFIX_LENGTH_BTS3 UL_CYCLIC_PREFIX_LENGTH_len1
		
		/*ue-TimersAndConstants*/	
		#define RRC_RECONFIG_T300_BTS3 T300_ms100
		#define RRC_RECONFIG_T301_BTS3 T301_ms100
		#define RRC_RECONFIG_T310_BTS3 T310_ms0	
		#define RRC_RECONFIG_N310_BTS3 N310_n1
		#define RRC_RECONFIG_T311_BTS3 T311_ms1000	
		#define RRC_RECONFIG_N311_BTS3 N311_n1
		#define RRC_RECONFIG_UL_CARRIER_FREQ_BTS3 18000				/*0..65536*/
		#define RRC_RECONFIG_UL_BANDWIDTH_BTS3 UL_BANDWIDTH_n100
	//}
	/*mobilityControlInfo.rach-ConfigDedicated*/
	#define RRC_RECONFIG_PREAMBLE_INDEX_BTS3 0						/*0..63*/
	#define RRC_RECONFIG_PRACH_MASK_INDEX_BTS3 0						/*0..15*/

	/*radioResourceConfigDedicated*/
	//{
		/*mac-MainConfig*/
		/*mac-MainConfig.explicitValue.ul-SCH-Config*/
		#define RRC_RECONFIG_MAX_HARQ_TX_BTS3 MAX_HARQ_TX_n5
		#define RRC_RECONFIG_PERIODIC_BSR_TIMER_BTS3 PERIODIC_BSR_TIMER_sf5
		#define RRC_RECONFIG_RETX_BSR_TIMER_BTS3 RETX_BSR_TIMER_sf320

		#define RRC_RECONFIG_TTI_BUNDLING_BTS3 L1S_RELEASE 						/*BOOLEAN*/
			
		/*mac-MainConfig.explicitValue.drx-Config*/
		
		#define RRC_RECONFIG_DRX_CONFIG_BTS3 L1S_RELEASE								/*BOOLEAN*/
		#define RRC_RECONFIG_ON_DURATION_TIMER_BTS3 ON_DURATION_TIMER_psf5
		#define RRC_RECONFIG_DRX_INACTIVITY_TIMER_BTS3 DRX_INACTIVITY_TIMER_psf5
		#define RRC_RECONFIG_DRX_RETRANSMISSION_TIMER_BTS3 DRX_RETRANSMISSION_TIMER_psf16
		#define RRC_RECONFIG_LONG_DRX_CYCLE_BTS3 LONG_DRX_CYCLE_sf40
		#define RRC_RECONFIG_CYCLE_START_OFFSET_BTS3 0							/*0..2559(depends on LONG_DRX_CYCLE)*/
		#define RRC_RECONFIG_SHORT_DRX_SETUP_BTS3 L1S_RELEASE
		#define RRC_RECONFIG_SHORT_DRX_CYCLE_BTS3 SHORT_DRX_CYCLE_sf2
		#define RRC_RECONFIG_DRX_SHORT_CYCLE_TIMER_BTS3 1						/*1..16*/

		/*sps-Config*/
		#define RRC_RECONFIG_SPS_CONFIG_DL_BTS3 L1S_RELEASE
		#define RRC_RECONFIG_SPS_CONFIG_UL_BTS3 L1S_RELEASE
		#define RRC_RECONFIG_SEMI_PERSIST_SCHED_C_RNTI_BTS3 0xFFF0

		/*sps-ConfigDL*/
		#define RRC_RECONFIG_SEMI_PERSIST_SCHED_INTERVAL_DL_BTS3 SEMI_PERSIST_SCHED_INTERVAL_DL_sf20

		#define RRC_RECONFIG_NUMBER_OF_CONF_SPS_PROCESSES_BTS3 1 				/*1..8*/
		#define RRC_RECONFIG_N1_PUCCH_AN_PERSISTENT_LIST_SIZE_BTS3 4				/*1..4*/
		#define RRC_RECONFIG_N1_PUCCH_AN_PERSISTENT_LIST_1_BTS3 3				/*0..2047*/
		#define RRC_RECONFIG_N1_PUCCH_AN_PERSISTENT_LIST_2_BTS3 4				/*0..2047*/
		#define RRC_RECONFIG_N1_PUCCH_AN_PERSISTENT_LIST_3_BTS3 5				/*0..2047*/
		#define RRC_RECONFIG_N1_PUCCH_AN_PERSISTENT_LIST_4_BTS3 6				/*0..2047*/
		
		/*sps-ConfigUL*/
		#define RRC_RECONFIG_SEMI_PERSIST_SCHED_INTERVAL_UL_BTS3 SEMI_PERSIST_SCHED_INTERVAL_UL_sf20
		#define RRC_RECONFIG_IMPLICIT_RELEASE_AFTER_BTS3 IMPLICIT_RELEASE_AFTER_e8
		#define RRC_RECONFIG_TWO_INTERVALS_CONFIG_BTS3 L1S_RELEASE
		#define RRC_RECONFIG_P0_NOMINAL_PUSCH_PERSISTENT_BTS3 -126				/*-126..24*/
		#define RRC_RECONFIG_P0_UE_PUSCH_PERSISTENT_BTS3 -126					/*-8..7*/		
			
		/*physicalConfigDedicated*/
		/*physicalConfigDedicated.pdsch-ConfigDedicated*/
		#define RRC_RECONFIG_P_A_dB_BTS3 P_A_dB_0

		/*physicalConfigDedicated.pucch-ConfigDedicated*/
		#define RRC_RECONFIG_ACK_NACK_REPETITION_SETUP_BTS3 L1S_RELEASE
		#define RRC_RECONFIG_REPETITION_FACTOR_BTS3	REPETITION_FACTOR_n2
		#define RRC_RECONFIG_N1_PUCCH_ANREP_BTS3 0								/*0..2047*/
		#define RRC_RECONFIG_TDD_ACK_NACK_FEEDBACK_MODE_BTS3 TDD_ACK_NACK_FEEDBACK_MODE_bundling
		#define RRC_RECONFIG_NRB_CQI_BTS3 1											/*0..98*/
		#define RRC_RECONFIG_NCS_AN_BTS3 6											/*0..7*/
		#define RRC_RECONFIG_N1PUCCH_AN_BTS3 2										/*0..2047*/ 

        /*radioResourceConfigCommon.pucch-ConfigDedicated-v1020*/
        #define RRC_RECONFIG_PUCCH_FORMAT_BTS3             0xFF            /*0,1,0xFF*/
        #define RRC_RECONFIG_N3_PUCCH_AN_LIST_0_BTS3       0xFFFF          /*0..549, 0xFFFF*/
        #define RRC_RECONFIG_N3_PUCCH_AN_LIST_1_BTS3       0xFFFF          /*0..549, 0xFFFF*/
        #define RRC_RECONFIG_N3_PUCCH_AN_LIST_2_BTS3       0xFFFF          /*0..549, 0xFFFF*/
        #define RRC_RECONFIG_N3_PUCCH_AN_LIST_3_BTS3       0xFFFF          /*0..549, 0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_0_BTS3  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_1_BTS3  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_2_BTS3  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_0_3_BTS3  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_0_BTS3  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_1_BTS3  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_2_BTS3  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_1_3_BTS3  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_2_0_BTS3  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_2_1_BTS3  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_2_2_BTS3  0xFFFF          /*0..2047,0xFFFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_CS_LIST_2_3_BTS3  0xFFFF          /*0..2047,0xFFFF*/

        #define RRC_RECONFIG_SIMULTANEOUS_PUCCH_PUSCH_BTS3 L1S_RELEASE     /*0,1*/

        /*radioResourceConfigCommon.pucch-ConfigDedicated-v1130*/
        #define RRC_RECONFIG_N_PUCCH_ID_BTS3               0xFF            /*0..503, 0xFF*/
        #define RRC_RECONFIG_N1_PUCCH_AN_BTS3              0xFF            /*0..2047, 0xFF*/
		
		/*physicalConfigDedicated.pusch-ConfigDedicated*/
		#define RRC_RECONFIG_BETA_OFFSET_ACK_INDEX_BTS3 0
		#define RRC_RECONFIG_BETA_OFFSET_RI_INDEX_BTS3 0
		#define RRC_RECONFIG_BETA_OFFSET_CQI_INDEX_BTS3 2

        /*physicalConfigDedicated.pusch-ConfigDedicated-v1130*/
        #define RRC_RECONFIG_N_PUSCH_ID_BTS3               0xFFFF          /*0..509,0xFFFF*/
        #define RRC_RECONFIG_N_DMRS_CSH_ID_BTS3            0xFFFF          /*0..509,0xFFFF*/

		/*physicalConfigDedicated.uplinkPowerControlDedicated*/
		#define RRC_RECONFIG_P0_UE_PUSCH_BTS3 0									/*-8..7*/
		#define RRC_RECONFIG_DELTA_MCS_SETUP_BTS3 L1S_RELEASE						/*BOOLEAN*/
		#define RRC_RECONFIG_ACCUMULATION_SETUP_BTS3 L1S_SETUP					/*BOOLEAN*/
		#define RRC_RECONFIG_P0_UE_PUCCH_BTS3 0									/*-8..7*/
		#define RRC_RECONFIG_PSRS_OFFSET_BTS3 7									/*0..15*/
		#define RRC_RECONFIG_FILTER_COEFFICIENT_BTS3 FILTER_COEFFICIENT_fc4

        /*physicalConfigDedicated.uplinkPowerControlDedicated-v1020*/
        #define RRC_RECONFIG_PSRS_OFFSET_AP_BTS3           0xFF            /*0..31,0xFF*/

		/*physicalConfigDedicated.tpc-PDCCH-ConfigPUCCH*/
		#define RRC_RECONFIG_TPC_PDCCH_CONFIG_PUCCH_SETUP_BTS3 L1S_RELEASE
		#define RRC_RECONFIG_TPC_PDCCH_CONFIG_PUCCH_TPC_RNTI_BTS3 0x000B	
		#define RRC_RECONFIG_TPC_PDCCH_CONFIG_PUCCH_TPC_FORMAT_BTS3 TPC_PDCCH_CONFIG_PUCCH_TPC_FORMAT3
		#define RRC_RECONFIG_TPC_PDCCH_CONFIG_PUCCH_TPC_INDEX_BTS3 1 			/*DCI format 3: 1~15, DCI format 3A: 1~30*/

		/*physicalConfigDedicated.tpc-PDCCH-ConfigPUSCH*/
		#define RRC_RECONFIG_TPC_PDCCH_CONFIG_PUSCH_SETUP_BTS3 L1S_RELEASE
		#define RRC_RECONFIG_TPC_PDCCH_CONFIG_PUSCH_TPC_RNTI_BTS3 0x000C
		#define RRC_RECONFIG_TPC_PDCCH_CONFIG_PUSCH_TPC_FORMAT_BTS3 TPC_PDCCH_CONFIG_PUSCH_TPC_FORMAT3
		#define RRC_RECONFIG_TPC_PDCCH_CONFIG_PUSCH_TPC_INDEX_BTS3 1 			/*DCI format 3: 1~15, DCI format 3A: 1~30*/

		/*physicalConfigDedicated.cqi-ReportConfig*/
		#define RRC_RECONFIG_CQI_REPORT_MODE_APERIODIC_BTS3 CQI_REPORT_MODE_APERIODIC_invalid
		#define RRC_RECONFIG_NOM_PDSCH_RS_EPRE_OFFSET_BTS3 0 					/*-1..6*/
		#define RRC_RECONFIG_CQI_MASK_R9_BTS3 L1S_RELEASE
		#define RRC_RECONFIG_PMI_RI_REPORT_R9_BTS3 L1S_RELEASE		
		#define RRC_RECONFIG_CQI_REPORT_PERIODIC_SETUP_BTS3 L1S_RELEASE
		#define RRC_RECONFIG_CQI_PUCCH_RESOURCE_INDEX_BTS3 0 					/*0..1185*/
		#define RRC_RECONFIG_CQI_PMI_CONFIG_INDEX_BTS3 0 							/*0..1023*/
		#define RRC_RECONFIG_CQI_FORMAT_INDICATOR_PERIODIC_BTS3 CQI_FORMAT_INDICATOR_PERIODIC_widebandCQI
		#define RRC_RECONFIG_CQI_SUBBAND_K_BTS3 1									/*1..4*/
		#define RRC_RECONFIG_RI_CONFIG_INDEX_BTS3 0								/*0..1023*/
		#define RRC_RECONFIG_SIMULTANEOUS_ACK_NACK_AND_CQI_BTS3 L1S_RELEASE

        #define RRC_RECONFIG_PERIODICITY_FACTOR_BTS3               2                       /*2,4*/

		/*physicalConfigDedicated.csi-RS-Config-r10*/
		#define RRC_RECONFIG_CSI_RS_CONFIG_R10_SETUP_BTS3						  L1S_RELEASE
		#define RRC_RECONFIG_CSI_RS_CONFIG_R10_ANTENNA_PORTS_COUNT_BTS3		  ONE_ANTENNA
		#define RRC_RECONFIG_CSI_RS_CONFIG_R10_RESOURCE_CONFIG_BTS3			  0
		#define RRC_RECONFIG_CSI_RS_CONFIG_R10_SUBFRAME_CONFIG_BTS3			  0
		#define RRC_RECONFIG_CSI_RS_CONFIG_R10_p_C_BTS3						  0
		#define RRC_RECONFIG_CSI_RS_CONFIG_R10_ZERO_TX_POWER_CSI_RS_SETUP_BTS3   L1S_RELEASE
		#define RRC_RECONFIG_CSI_RS_CONFIG_R10_ZERO_TX_POWER_CSI_RS_RESOURCE_CONFIG_LIST_BTS3	 0x0000
		#define RRC_RECONFIG_CSI_RS_CONFIG_R10_ZERO_TX_POWER_CSI_RS_SUBFRAME_CONFIG_BTS3	0

		/*physicalConfigDedicated.soundingRS-UL-ConfigDedicated*/
		#define RRC_RECONFIG_SOUNDING_RS_CONFIG_DEDICATED_SETUP_BTS3 L1S_RELEASE
		#define RRC_RECONFIG_SRS_BANDWIDTH_BTS3 SRS_BANDWIDTH_bw0
		#define RRC_RECONFIG_SRS_HOPPING_BANDWIDTH_BTS3 SRS_HOPPING_BANDWIDTH_hbw0
		#define RRC_RECONFIG_FREQ_DOMAIN_POSITION_BTS3 0 							/*0..1023*/
		#define RRC_RECONFIG_SRS_DURATION_BTS3 L1S_RELEASE
		#define RRC_RECONFIG_SRS_CONFIG_INDEX_BTS3 0 								/*0..1023*/
		#define RRC_RECONFIG_SRS_TRANSMISSION_COMB_BTS3 0							/*0..1*/
		#define RRC_RECONFIG_SRS_CYCLIC_SHIFT_BTS3 0 								/*0..7*/

		/*physicalConfigDedicated.antennaInfo*/
		#define RRC_RECONFIG_TRANSMISSION_MODE_BTS3 TRANSMISSION_MODE_tm1
		#define RRC_RECONFIG_UE_TRANSMIT_ANTENNA_SELECTION_SETUP_BTS3 L1S_RELEASE
		#define RRC_RECONFIG_UE_TRANSMIT_ANTENNA_SELECTION_BTS3 UE_TRANSMIT_ANTENNA_SELECTION_closedloop

		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm3_bitstring_BTS3 0x01					/*bit string size: 2, value range: 0x00..0x03*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm3_bitstring_BTS3 0x01					/*bit string size: 4, value range: 0x00..0x0F*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm4_bitstring_BTS3 0x01					/*bit string size: 6, value range: 0x00..0x3F*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm4_bitstring_BTS3 0X0000000000000001		/*bit string size: 64, value range: 0X0000000000000000..0xFFFFFFFFFFFFFFFF*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm5_bitstring_BTS3 0x01					/*bit string size: 4, value range: 0x00..0x0F*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm5_bitstring_BTS3 0x0001					/*bit string size: 16, value range: 0x0000..0xFFFF*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm6_bitstring_BTS3 0x01					/*bit string size: 4, value range: 0x00..0x0F*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm6_bitstring_BTS3 0x0001					/*bit string size: 16, value range: 0x0000..0xFFFF*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm8_bitstring_BTS3 0x01					/*bit string size: 6, value range: 0x00..0x3F*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm8_bitstring_BTS3 0x00000001				/*bit string size: 32, value range: 0x00000000..0xFFFFFFFF*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n2TxAntenna_tm9_bitstring_BTS1 0x01					/*bit string size: 6, value range: 0x00..0x3F*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n4TxAntenna_tm9_bitstring_BTS1 0x0000000000000001		/*bit string size: 64, value range: 0X0000000000000000..0xFFFFFFFFFFFFFFFF*/
		#define RRC_RECONFIG_CODEBOOK_SUBSET_RESTRICTION_n8TxAntenna_tm9_bitstring_BTS1 0x0000000000000000000000000001		/*bit string size: 109, value range: 0X0000000000000000000000000000..0xFFFFFFFFFFFFFFFFFFFFFFFFFFF*/

		/*physicalConfigDedicated.schedulingRequestConfig*/
		#define RRC_RECONFIG_SCHEDULING_REQUEST_CONFIG_SETUP_BTS3 L1S_RELEASE
		#define RRC_RECONFIG_SR_PUCCH_RESOURCE_INDEX_BTS3 0							/*0..2047*/
		#define RRC_RECONFIG_SR_CONFIG_INDEX_BTS3 0									/*0..157*/
		#define RRC_RECONFIG_DSR_TRANS_MAX_BTS3 DSR_TRANS_MAX_n4

		/*measSubframePatternPCell-r10*/
		#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_PCELL_R10_BTS3 L1S_RELEASE
		#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_PCELL_R10_PATTERN_BTS3 {0}
		#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_PCELL_R10_PATTERN_FDD_BTS3 { \
		                                                                        0, 0, 0, 1, 1, 0, 0, 0, 0, 0, /* SFN % 4 = 0, Subframe0..9 */ \
                                                                            0, 0, 0, 1, 1, 0, 0, 0, 0, 0, /* SFN % 4 = 1, Subframe0..9 */ \
                                                                            0, 0, 0, 1, 1, 0, 0, 0, 0, 0, /* SFN % 4 = 2, Subframe0..9 */ \
                                                                            0, 0, 0, 1, 1, 0, 0, 0, 0, 0  /* SFN % 4 = 3, Subframe0..9 */ \
                                                                          }
		#define RRC_RECONFIG_MEAS_SUBFRAME_PATTERN_PCELL_R10_PATTERN_TDD_BTS3 { \
		                                                                        0, 0, 0, 1, 1, 0, 0, 0, 0, 0, /* SFN % 2 = 0, Subframe0..9 */ \
                                                                            0, 0, 0, 1, 1, 0, 0, 0, 0, 0  /* SFN % 2 = 1, Subframe0..9 */ \
                                                                          }
	//}
	/*securityConfigHO*/
	#define RRC_RECONFIG_HANDOVER_TYPE_BTS3 HANDOVER_TYPE_intraLTE
	#define RRC_RECONFIG_CYPERING_ALGORITHM_BTS3 CYPERING_ALGORITHM_eea0
	#define RRC_RECONFIG_INTEGRITY_PROT_ALGORITHM_BTS3 INTEGRITY_PROT_ALGORITHM_eia0v920

	/*RRCConnectionReconfiguration-v1020-IEs*/
	/*SCellToReleaseList-r10*/
	#define RRC_RECONFIG_SCELL_RELEASE_SCELL_INDEX_BTS3 1
	/*SCellToAddModList-r10*/
	#define RRC_RECONFIG_SCELL_ADD_SCELL_INDEX_BTS3 1


/*Paging*/
#define PAGING_SYSTEM_INFO_MODIFICATION_BTS3 L1S_RELEASE
#define PAGING_ETWS_INDICATION_BTS3 L1S_RELEASE
#define PAGING_CMAS_INDICATION_BTS3 L1S_RELEASE

/* OTDOA */
#define OTDOA_ASSIST_DATA_REF_CELL_PRS_BW_BTS3 BW_100_RB
#define OTDOA_ASSIST_DATA_REF_CELL_PRS_CONFIG_IDX_BTS3 0
#define OTDOA_ASSIST_DATA_REF_CELL_PRS_NO_DL_FRAME_BTS3 PRS_NO_CONSECUTIVE_SUBFRAME_sf1
#define OTDOA_PRS_SUBFRAME_OFFSET_VALID_BTS3 L1S_RELEASE 
#define OTDOA_PRS_SUBFRAME_OFFSET_BTS3 0

/*crossCarrierSchedulingConfig-r10*/
#define RRC_RECONFIG_SCELL_PHYSICAL_CONFIG_DEDICATED_CCS_CONFIG_BTS3 L1S_RELEASE
#define RRC_RECONFIG_SCELL_PHYSICAL_CONFIG_DEDICATED_CCS_CONFIG_OWN_CIF_CONFIG_BTS3 L1S_FALSE //Configures Carrier Indicator Field (CIF)
#define RRC_RECONFIG_SCELL_PHYSICAL_CONFIG_DEDICATED_CCS_CONFIG_OTHER_SCHEDULING_CELLID_BTS3 0 //0..7
#define RRC_RECONFIG_SCELL_PHYSICAL_CONFIG_DEDICATED_CCS_CONFIG_OTHER_PDSCH_START_BTS3 3 //2..4 for 1.4M and 1..3 for other BW

/*==========================RRC Message for BTS4 ==========================*/
#define CFI_VALUE_BTS4 2									/*1..3*/

/* PHY Signal Power */
#define CELL_RS_POWER_BTS4 PWR4 
#define PSS_POWER_BTS4 PWR4
#define SSS_POWER_BTS4 PWR4
#define PCFICH_POWER_BTS4 PWR4
#define PHICH_POWER_BTS4 PWR4
#define PHICH_TOTAL_POWER_BTS4 PWR4
#define PDCCH_POWER_BTS4 PWR4
#define PBCH_POWER_BTS4 PWR4
#define PDSCH_POWER_BTS4 PWR4
#define CSI_RS_POWER_BTS4 PWR4

/*AWGN power*/
#define AWGN_POWER_BTS4 -98

/*OCNG Config*/
#define OCNG_SETUP_BTS4 L1S_SETUP						/*BOOLEAN*/
#define OCNG_POWER_BTS4 PWR4								/*99.0..25.0*/

/*Cell Config*/
#define PHYS_CELL_ID_BTS4 4								/*0..503*/
#define CELL_OFFSET_BTS4 0									/*0..10 ms*/


/*ANTENNA_PORT_NUM */
#if defined(SS_DEF_1TX) || defined(__L1EDPS_ENABLE__)
/* RF */
#define ANTENNA_PORT_NUM_BTS4 ONE_ANTENNA 
#else
/* DIQ/AIQ */
#define ANTENNA_PORT_NUM_BTS4 TWO_ANTENNA 
#endif

#define DL_EARFCN_BTS4 0

/*RNTI value*/
#define C_RNTI_BTS4 0x001									/*0x0001..0xFFF3*/
#define T_C_RNTI_BTS4 0x001									/*0x0001..0xFFF3*/
#define SI_RNTI_BTS4 0xFFFF									/*fixed value*/
#define P_RNTI_BTS4 0xFFFE									/*fixed value*/
//SPS_C_RNTI is defined in RRC Connec. setup

/*DL_BW */
#define MIB_DL_BANDWIDTH_BTS4 BW_100_RB

/*PHICH_DURATION */
#define MIB_PHICH_DURATION_BTS4 PHICH_DURATION_NORMAL	

/*PHICH_RESOURCE value*/
#define MIB_PHICH_RESOURCE_BTS4 PHICH_RESOURCE_oneSixth

/*SIB1*/
//{
	#define SIB1_FREQ_BAND_INDICATOR_BTS4 1				/*1..64*/
	#define SIB1_SERVING_Q_RXLEV_MIN_BTS4 -70			/*-70..-22*/
	#define SIB1_SERVING_Q_QUAL_MIN_BTS4 -34			/*-34..-3*/ 
	#define SIB1_SERVING_P_MAX_BTS4 23					/*-30..33*/

	/*schedulingInfoList*/
	#define SIB1_SI1_PERIODICITY_BTS4 SI_PERIODICITY_rf8
	#define SIB1_SI2_PERIODICITY_BTS4 SI_PERIODICITY_rf8

	#define SIB1_SI_WINDOW_LENGTH_BTS4 SI_WINDOW_LENGTH_ms1		
	#define SIB1_SYSTEM_INFO_VALUE_TAG_BTS4 0			/*0..31*/	

	/*tdd-Config*/
	#define SIB1_SUBFRAME_ASSIGNMENT_BTS4 SUBFRAME_ASSIGNMENT_sa1
	#define SIB1_SPECIAL_SUBFRAME_PATTERN_BTS4 SPECIAL_SUBFRAME_PATTERN_ssp4
//}


/*SIB2*/
//{
	/*radioResourceConfigCommon.preambleInfo*/
	#define SIB2_NUMBER_OF_RA_PREAMBLES_BTS4 NUMBER_OF_RA_PREAMBLES_n64	
	#define SIB2_SIZE_OF_RA_PREAMBLES_GROUP_A_BTS4 SIZE_OF_RA_PREAMBLES_GROUP_A_n64
	#define SIB2_MESSAGE_POWER_OFFSET_GROUP_B_BTS4 MESSAGE_POWER_OFFSET_GROUP_B_minusinfinity			

	/*radioResourceConfigCommon.rach-ConfigCommon.powerRampingParameters*/
	#define SIB2_POWER_RAMPING_STEP_BTS4 POWER_RAMPING_STEP_dB0		
	#define SIB2_PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_BTS4 PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_dBm_minus120	

	/*radioResourceConfigCommon.rach-ConfigCommon.ra-SupervisionInfo*/
	#define SIB2_PREAMBLE_TRANS_MAX_BTS4 PREAMBLE_TRANS_MAX_n200

	/*radioResourceConfigCommon.rach-ConfigCommon.ra-SupervisionInfo*/
	#define SIB2_RA_RESPONSE_WINDOW_SIZE_BTS4 RA_RESPONSE_WINDOW_SIZE_sf10	
	#define SIB2_MAC_CONTENTION_RESOLUTION_TIMER_BTS4 MAC_CONTENTION_RESOLUTION_TIMER_sf64

	#define SIB2_MAX_HARQ_MSG3TX_BTS4 5							/*1..8*/

	/*radioResourceConfigCommon.bcch-Config*/
	#define SIB2_MODIFICATION_PERIOD_COEFF_BTS4 MODIFICATION_PERIOD_COEFF_N2

	/*radioResourceConfigCommon.pcch-Config*/
	#define SIB2_DEFAULT_PAGING_CYCLE_BTS4 DEFAULT_PAGING_CYCLE_RF32
	#define SIB2_NB_BTS4 NB_oneEightT		

	/*radioResourceConfigCommon.prach-Config*/
	#define SIB2_ROOT_SEQUENCE_INDEX_BTS4 0							/*0..837*/	
	#define SIB2_PRACH_CONFIG_INDEX_BTS4 12							/*0..63*/	
	#define SIB2_HIGH_SPEED_FLAG_BTS4 L1S_RELEASE						/*BOOLEAN*/	
	#define SIB2_ZERO_CORRELATION_ZONE_CONFIG_BTS4 0				/*0..15*/	
	#define SIB2_PRACH_FREQ_OFFSET_BTS4 0							/*0..94*/
	
	/*radioResourceConfigCommon.pdsch-ConfigCommon*/
	#define SIB2_REFERENCE_SIGNAL_POWER_BTS4 0						/*-60..50*/	
	#define SIB2_P_B_BTS4 0												/*0..3*/

	/*radioResourceConfigCommon.pusch-ConfigBasic*/
	#define SIB2_N_SB_BTS4 1											/*1..4*/
	#define SIB2_HOPPING_MODE_BTS4 HOPPING_MODE_interSubFrame	
	#define SIB2_PUSCH_HOPPING_OFFSET_BTS4 2 							/*0..98*/
	#define SIB2_enable64QAM_BTS4 L1S_RELEASE

	/*radioResourceConfigCommon.ul-ReferenceSignalsPUSCH*/
	#define SIB2_GROUP_HOPPING_SETUP_BTS4 L1S_RELEASE				/*BOOLEAN*/	
	#define SIB2_GROUP_ASSIGNMENT_PUSCH_BTS4 0						/*0..29*/	
	#define SIB2_SEQUENCE_HOPPING_ENABLED_BTS4 L1S_RELEASE			/*BOOLEAN*/	
	#define SIB2_CYCLIC_SHIFT_BTS4 0									/*0..7*/

	/*radioResourceConfigCommon.pucch-ConfigCommon*/
	#define SIB2_DELTA_PUCCH_SHIFT_BTS4 DELTA_PUCCH_SHIFT_ds3
	#define SIB2_NRB_CQI_BTS4 1										/*0..98*/	
	#define SIB2_NCS_AN_BTS4 6										/*0..7*/	
	#define SIB2_N1PUCCH_AN_BTS4 2									/*0..2047*/

	/*radioResourceConfigCommon.soundingRS-UL-ConfigCommon*/
	#define SIB2_SOUNDING_RS_UL_CONFIG_COMMON_BTS4 L1S_RELEASE
	#define SIB2_SRS_BANDWIDTH_CONFIG_BTS4 SRS_BANDWIDTH_CONFIG_bw7
	#define SIB2_SRS_SUBFRAME_CONFIG_BTS4 SRS_SUBFRAME_CONFIG_sc0
	#define SIB2_ACK_NACK_SRS_SIMULTANEOUS_TRANSMISSION_BTS4 L1S_RELEASE	
	#define SIB2_SRS_UP_PTS_BTS4 L1S_RELEASE


	/*radioResourceConfigCommon.uplinkPowerControlCommon.p0-NominalPUSCH*/
	#define SIB2_P0_NOMINAL_PUSCH_BTS4 -126						/*-126..24*/
	#define SIB2_ALPHA_BTS4 ALPHA_al0
	#define SIB2_P0_NOMINAL_PUCCH_BTS4 -127						/*-127..-96*/
	#define SIB2_DELTA_PUCCH_FORMAT1_deltaF_BTS4 DELTA_PUCCH_FORMAT1_deltaF_minus2
	#define SIB2_DELTA_PUCCH_FORMAT1B_deltaF_BTS4 DELTA_PUCCH_FORMAT1B_deltaF_1
	#define SIB2_DELTA_PUCCH_FORMAT2_deltaF_BTS4 DELTA_PUCCH_FORMAT2_deltaF_minus2
	#define SIB2_DELTA_PUCCH_FORMAT2A_deltaF_BTS4 DELTA_PUCCH_FORMAT2A_deltaF_minus2
	#define SIB2_DELTA_PUCCH_FORMAT2B_deltaF_BTS4 DELTA_PUCCH_FORMAT2B_deltaF_minus2

	#define SIB2_DELTA_PREAMBLE_MSG3_BTS4 0							/*-1..6*/

	/*radioResourceConfigCommon.ul-CyclicPrefixLength*/
	#define SIB2_UL_CYCLIC_PREFIX_LENGTH_BTS4 UL_CYCLIC_PREFIX_LENGTH_len1

	/*ue-TimersAndConstants*/	
	#define SIB2_T300_BTS4 T300_ms1000
	#define SIB2_T301_BTS4 T301_ms1000
	#define SIB2_T310_BTS4 T310_ms1000
	#define SIB2_N310_BTS4 N310_n1
	#define SIB2_T311_BTS4 T311_ms1000
	#define SIB2_N311_BTS4 N311_n1

	#define SIB2_UL_CARRIER_FREQ_BTS4 18000						/*0..65536*/
	#define SIB2_UL_BANDWIDTH_BTS4 BW_100_RB

	/*mbsfn-SubframeConfigList*/
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_BTS4 L1S_RELEASE /*L1S_RELEASE: list isn't present ; L1S_SETUP: list is present */
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_1_RADIOFRAME_ALLOCATION_PERIOD_BTS4 RADIOFRAME_ALLOCATION_PERIOD_n1 /*{n1, n2, n4, n8, n16, n32}*/ 
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_1_RADIOFRAME_ALLOCATION_OFFSET_BTS4 0
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_1_SUBFRAME_ALLOCATION_LENGTH_BTS4 SUBFRAME_ALLOCATION_LENGTH_ONE_FRAME
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_1_SUBFRAME_ALLOCATION_PATTERN_BTS4 (MBSFN_SF2|MBSFN_SF3|MBSFN_SF7)
//}


/*SIB3*/
#define SIB3_Q_HYST_BTS4 0
#define SIB3_THRESH_SERVING_LOW_BTS4 0                         /*0..31*/ 
#define SIB3_S_INTRA_SEARCH_P_BTS4 0				           /*0..31*/
#define SIB3_S_INTRA_SEARCH_Q_BTS4 0						   /*0..31*/
#define SIB3_S_NON_INTRA_SEARCH_P_BTS4 0					   /*0..31*/
#define SIB3_S_NON_INTRA_SEARCH_Q_BTS4 0					   /*0..31*/
#define SIB3_INTRA_Q_RXLEV_MIN_BTS4 -70                        /*-70..22*/
#define SIB3_INTRA_Q_QUAL_MIN_BTS4 -34                         /*-34..-3*/
#define SIB3_INTRA_P_MAX_BTS4 23                              /*-30..33*/ 
#define SIB3_INTRA_T_RESELECTION_BTS4 0                        /*-0..7*/
	
/*SIB4*/
#define SIB4_INTRA_NEIGHBOR_Q_OFFSET_CELL_BTS4 0
	
/*SIB5*/
#define SIB5_THRESHX_HIGH_BTS4 0                               /*0..31*/ 
#define SIB5_THRESHX_LOW_BTS4 0                                /*0..31*/ 
#define SIB5_INTER_Q_RXLEV_MIN_BTS4 -70                        /*-70..22*/
#define SIB5_INTER_Q_QUAL_MIN_BTS4 -34                         /*-34..-3*/
#define SIB5_INTER_P_MAX_BTS4 23                              /*-30..33*/ 
#define SIB5_INTER_T_RESELECTION_BTS4 0                        /*-0..7*/
#define SIB5_INTER_NEIGHBOR_Q_OFFSET_CELL_BTS4 0                
#define SIB5_INTER_Q_OFFSET_FREQUENCY_BTS4 0


/*Paging*/
#define PAGING_SYSTEM_INFO_MODIFICATION_BTS4 L1S_RELEASE
#define PAGING_ETWS_INDICATION_BTS4 L1S_RELEASE
#define PAGING_CMAS_INDICATION_BTS4 L1S_RELEASE

/* OTDOA */
#define OTDOA_ASSIST_DATA_REF_CELL_PRS_BW_BTS4 BW_100_RB
#define OTDOA_ASSIST_DATA_REF_CELL_PRS_CONFIG_IDX_BTS4 0
#define OTDOA_ASSIST_DATA_REF_CELL_PRS_NO_DL_FRAME_BTS4 PRS_NO_CONSECUTIVE_SUBFRAME_sf1
#define OTDOA_PRS_SUBFRAME_OFFSET_VALID_BTS4 L1S_RELEASE 
#define OTDOA_PRS_SUBFRAME_OFFSET_BTS4 0

/*==========================RRC Message for BTS5 ==========================*/
#define CFI_VALUE_BTS5 2									/*1..3*/

/* PHY Signal Power */
#define CELL_RS_POWER_BTS5 -90 
#define PSS_POWER_BTS5 -90
#define SSS_POWER_BTS5 -90
#define PCFICH_POWER_BTS5 -90
#define PHICH_POWER_BTS5 -90
#define PHICH_TOTAL_POWER_BTS5 -90
#define PDCCH_POWER_BTS5 -90
#define PBCH_POWER_BTS5 -90
#define PDSCH_POWER_BTS5 -90

/*AWGN power*/
#define AWGN_POWER_BTS5 -98

/*OCNG Config*/
#define OCNG_SETUP_BTS5 L1S_SETUP						/*BOOLEAN*/
#define OCNG_POWER_BTS5 -90								/*99.0..25.0*/

/*Cell Config*/
#define PHYS_CELL_ID_BTS5 5								/*0..503*/
#define CELL_OFFSET_BTS5 0									/*0..10 ms*/

/*ANTENNA_PORT_NUM */
#if defined(SS_DEF_1TX) || defined(__L1EDPS_ENABLE__)
/* RF */
#define ANTENNA_PORT_NUM_BTS5 ONE_ANTENNA 
#else
/* DIQ/AIQ */
#define ANTENNA_PORT_NUM_BTS5 TWO_ANTENNA 
#endif

#define DL_EARFCN_BTS5 0

/*RNTI value*/
#define C_RNTI_BTS5 0x001									/*0x0001..0xFFF3*/
#define T_C_RNTI_BTS5 0x001									/*0x0001..0xFFF3*/
#define SI_RNTI_BTS5 0xFFFF									/*fixed value*/
#define P_RNTI_BTS5 0xFFFE									/*fixed value*/
//SPS_C_RNTI is defined in RRC Connec. setup

/*DL_BW */
#define MIB_DL_BANDWIDTH_BTS5 BW_100_RB

/*PHICH_DURATION */
#define MIB_PHICH_DURATION_BTS5 PHICH_DURATION_NORMAL	

/*PHICH_RESOURCE value*/
#define MIB_PHICH_RESOURCE_BTS5 PHICH_RESOURCE_oneSixth

/*SIB1*/
//{
	#define SIB1_FREQ_BAND_INDICATOR_BTS5 1				/*1..64*/
	#define SIB1_SERVING_Q_RXLEV_MIN_BTS5 -70			/*-70..-22*/
	#define SIB1_SERVING_Q_QUAL_MIN_BTS5 -34			/*-34..-3*/ 
	#define SIB1_SERVING_P_MAX_BTS5 23					/*-30..33*/

	/*schedulingInfoList*/
	#define SIB1_SI1_PERIODICITY_BTS5 SI_PERIODICITY_rf8
	#define SIB1_SI2_PERIODICITY_BTS5 SI_PERIODICITY_rf8

	#define SIB1_SI_WINDOW_LENGTH_BTS5 SI_WINDOW_LENGTH_ms1		
	#define SIB1_SYSTEM_INFO_VALUE_TAG_BTS5 0			/*0..31*/	

	/*tdd-Config*/
	#define SIB1_SUBFRAME_ASSIGNMENT_BTS5 SUBFRAME_ASSIGNMENT_sa1
	#define SIB1_SPECIAL_SUBFRAME_PATTERN_BTS5 SPECIAL_SUBFRAME_PATTERN_ssp4
//}


/*SIB2*/
//{
	/*radioResourceConfigCommon.preambleInfo*/
	#define SIB2_NUMBER_OF_RA_PREAMBLES_BTS5 NUMBER_OF_RA_PREAMBLES_n64	
	#define SIB2_SIZE_OF_RA_PREAMBLES_GROUP_A_BTS5 SIZE_OF_RA_PREAMBLES_GROUP_A_n64
	#define SIB2_MESSAGE_POWER_OFFSET_GROUP_B_BTS5 MESSAGE_POWER_OFFSET_GROUP_B_minusinfinity			

	/*radioResourceConfigCommon.rach-ConfigCommon.powerRampingParameters*/
	#define SIB2_POWER_RAMPING_STEP_BTS5 POWER_RAMPING_STEP_dB0		
	#define SIB2_PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_BTS5 PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_dBm_minus120	

	/*radioResourceConfigCommon.rach-ConfigCommon.ra-SupervisionInfo*/
	#define SIB2_PREAMBLE_TRANS_MAX_BTS5 PREAMBLE_TRANS_MAX_n200

	/*radioResourceConfigCommon.rach-ConfigCommon.ra-SupervisionInfo*/
	#define SIB2_RA_RESPONSE_WINDOW_SIZE_BTS5 RA_RESPONSE_WINDOW_SIZE_sf10	
	#define SIB2_MAC_CONTENTION_RESOLUTION_TIMER_BTS5 MAC_CONTENTION_RESOLUTION_TIMER_sf64

	#define SIB2_MAX_HARQ_MSG3TX_BTS5 5							/*1..8*/

	/*radioResourceConfigCommon.bcch-Config*/
	#define SIB2_MODIFICATION_PERIOD_COEFF_BTS5 MODIFICATION_PERIOD_COEFF_N2

	/*radioResourceConfigCommon.pcch-Config*/
	#define SIB2_DEFAULT_PAGING_CYCLE_BTS5 DEFAULT_PAGING_CYCLE_RF32
	#define SIB2_NB_BTS5 NB_oneEightT		

	/*radioResourceConfigCommon.prach-Config*/
	#define SIB2_ROOT_SEQUENCE_INDEX_BTS5 0							/*0..837*/	
	#define SIB2_PRACH_CONFIG_INDEX_BTS5 12							/*0..63*/	
	#define SIB2_HIGH_SPEED_FLAG_BTS5 L1S_RELEASE						/*BOOLEAN*/	
	#define SIB2_ZERO_CORRELATION_ZONE_CONFIG_BTS5 0				/*0..15*/	
	#define SIB2_PRACH_FREQ_OFFSET_BTS5 0							/*0..94*/
	
	/*radioResourceConfigCommon.pdsch-ConfigCommon*/
	#define SIB2_REFERENCE_SIGNAL_POWER_BTS5 0						/*-60..50*/	
	#define SIB2_P_B_BTS5 0												/*0..3*/

	/*radioResourceConfigCommon.pusch-ConfigBasic*/
	#define SIB2_N_SB_BTS5 1											/*1..4*/
	#define SIB2_HOPPING_MODE_BTS5 HOPPING_MODE_interSubFrame	
	#define SIB2_PUSCH_HOPPING_OFFSET_BTS5 2 							/*0..98*/
	#define SIB2_enable64QAM_BTS5 L1S_RELEASE

	/*radioResourceConfigCommon.ul-ReferenceSignalsPUSCH*/
	#define SIB2_GROUP_HOPPING_SETUP_BTS5 L1S_RELEASE				/*BOOLEAN*/	
	#define SIB2_GROUP_ASSIGNMENT_PUSCH_BTS5 0						/*0..29*/	
	#define SIB2_SEQUENCE_HOPPING_ENABLED_BTS5 L1S_RELEASE			/*BOOLEAN*/	
	#define SIB2_CYCLIC_SHIFT_BTS5 0									/*0..7*/

	/*radioResourceConfigCommon.pucch-ConfigCommon*/
	#define SIB2_DELTA_PUCCH_SHIFT_BTS5 DELTA_PUCCH_SHIFT_ds3
	#define SIB2_NRB_CQI_BTS5 1										/*0..98*/	
	#define SIB2_NCS_AN_BTS5 6										/*0..7*/	
	#define SIB2_N1PUCCH_AN_BTS5 2									/*0..2047*/

	/*radioResourceConfigCommon.soundingRS-UL-ConfigCommon*/
	#define SIB2_SOUNDING_RS_UL_CONFIG_COMMON_BTS5 L1S_RELEASE
	#define SIB2_SRS_BANDWIDTH_CONFIG_BTS5 SRS_BANDWIDTH_CONFIG_bw7
	#define SIB2_SRS_SUBFRAME_CONFIG_BTS5 SRS_SUBFRAME_CONFIG_sc0
	#define SIB2_ACK_NACK_SRS_SIMULTANEOUS_TRANSMISSION_BTS5 L1S_RELEASE	
	#define SIB2_SRS_UP_PTS_BTS5 L1S_RELEASE


	/*radioResourceConfigCommon.uplinkPowerControlCommon.p0-NominalPUSCH*/
	#define SIB2_P0_NOMINAL_PUSCH_BTS5 -126						/*-126..24*/
	#define SIB2_ALPHA_BTS5 ALPHA_al0
	#define SIB2_P0_NOMINAL_PUCCH_BTS5 -127						/*-127..-96*/
	#define SIB2_DELTA_PUCCH_FORMAT1_deltaF_BTS5 DELTA_PUCCH_FORMAT1_deltaF_minus2
	#define SIB2_DELTA_PUCCH_FORMAT1B_deltaF_BTS5 DELTA_PUCCH_FORMAT1B_deltaF_1
	#define SIB2_DELTA_PUCCH_FORMAT2_deltaF_BTS5 DELTA_PUCCH_FORMAT2_deltaF_minus2
	#define SIB2_DELTA_PUCCH_FORMAT2A_deltaF_BTS5 DELTA_PUCCH_FORMAT2A_deltaF_minus2
	#define SIB2_DELTA_PUCCH_FORMAT2B_deltaF_BTS5 DELTA_PUCCH_FORMAT2B_deltaF_minus2

	#define SIB2_DELTA_PREAMBLE_MSG3_BTS5 0							/*-1..6*/

	/*radioResourceConfigCommon.ul-CyclicPrefixLength*/
	#define SIB2_UL_CYCLIC_PREFIX_LENGTH_BTS5 UL_CYCLIC_PREFIX_LENGTH_len1

	/*ue-TimersAndConstants*/	
	#define SIB2_T300_BTS5 T300_ms1000
	#define SIB2_T301_BTS5 T301_ms1000
	#define SIB2_T310_BTS5 T310_ms1000
	#define SIB2_N310_BTS5 N310_n1
	#define SIB2_T311_BTS5 T311_ms1000
	#define SIB2_N311_BTS5 N311_n1

	#define SIB2_UL_CARRIER_FREQ_BTS5 18000						/*0..65536*/
	#define SIB2_UL_BANDWIDTH_BTS5 BW_100_RB

	/*mbsfn-SubframeConfigList*/
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_BTS5 L1S_RELEASE /*L1S_RELEASE: list isn't present ; L1S_SETUP: list is present */
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_1_RADIOFRAME_ALLOCATION_PERIOD_BTS5 RADIOFRAME_ALLOCATION_PERIOD_n1 /*{n1, n2, n4, n8, n16, n32}*/ 
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_1_RADIOFRAME_ALLOCATION_OFFSET_BTS5 0
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_1_SUBFRAME_ALLOCATION_LENGTH_BTS5 SUBFRAME_ALLOCATION_LENGTH_ONE_FRAME
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_1_SUBFRAME_ALLOCATION_PATTERN_BTS5 (MBSFN_SF2|MBSFN_SF3|MBSFN_SF7)
//}

/*SIB3*/
#define SIB3_Q_HYST_BTS5 0
#define SIB3_THRESH_SERVING_LOW_BTS5 0                         /*0..31*/ 
#define SIB3_S_INTRA_SEARCH_P_BTS5 0				           /*0..31*/
#define SIB3_S_INTRA_SEARCH_Q_BTS5 0						   /*0..31*/
#define SIB3_S_NON_INTRA_SEARCH_P_BTS5 0					   /*0..31*/
#define SIB3_S_NON_INTRA_SEARCH_Q_BTS5 0					   /*0..31*/
#define SIB3_INTRA_Q_RXLEV_MIN_BTS5 -70                        /*-70..22*/
#define SIB3_INTRA_Q_QUAL_MIN_BTS5 -34                         /*-34..-3*/
#define SIB3_INTRA_P_MAX_BTS5 23                              /*-30..33*/ 
#define SIB3_INTRA_T_RESELECTION_BTS5 0                        /*-0..7*/
	
/*SIB4*/
#define SIB4_INTRA_NEIGHBOR_Q_OFFSET_CELL_BTS5 0
	
/*SIB5*/
#define SIB5_THRESHX_HIGH_BTS5 0                               /*0..31*/ 
#define SIB5_THRESHX_LOW_BTS5 0                                /*0..31*/ 
#define SIB5_INTER_Q_RXLEV_MIN_BTS5 -70                        /*-70..22*/
#define SIB5_INTER_Q_QUAL_MIN_BTS5 -34                         /*-34..-3*/
#define SIB5_INTER_P_MAX_BTS5 23                              /*-30..33*/ 
#define SIB5_INTER_T_RESELECTION_BTS5 0                        /*-0..7*/
#define SIB5_INTER_NEIGHBOR_Q_OFFSET_CELL_BTS5 0                
#define SIB5_INTER_Q_OFFSET_FREQUENCY_BTS5 0

/*Paging*/
#define PAGING_SYSTEM_INFO_MODIFICATION_BTS5 L1S_RELEASE
#define PAGING_ETWS_INDICATION_BTS5 L1S_RELEASE
#define PAGING_CMAS_INDICATION_BTS5 L1S_RELEASE
/*==========================RRC Message for BTS6 ==========================*/
#define CFI_VALUE_BTS6 2									/*1..3*/

/* PHY Signal Power */
#define CELL_RS_POWER_BTS6 -90 
#define PSS_POWER_BTS6 -90
#define SSS_POWER_BTS6 -90
#define PCFICH_POWER_BTS6 -90
#define PHICH_POWER_BTS6 -90
#define PHICH_TOTAL_POWER_BTS6 -90
#define PDCCH_POWER_BTS6 -90
#define PBCH_POWER_BTS6 -90
#define PDSCH_POWER_BTS6 -90

/*AWGN power*/
#define AWGN_POWER_BTS6 -98

/*OCNG Config*/
#define OCNG_SETUP_BTS6 L1S_SETUP						/*BOOLEAN*/
#define OCNG_POWER_BTS6 -90								/*99.0..25.0*/

/*Cell Config*/
#define PHYS_CELL_ID_BTS6 6								/*0..503*/
#define CELL_OFFSET_BTS6 0									/*0..10 ms*/

/*ANTENNA_PORT_NUM */
#if defined(SS_DEF_1TX) || defined(__L1EDPS_ENABLE__)
/* RF */
#define ANTENNA_PORT_NUM_BTS6 ONE_ANTENNA 
#else
/* DIQ/AIQ */
#define ANTENNA_PORT_NUM_BTS6 TWO_ANTENNA 
#endif

#define DL_EARFCN_BTS6 0

/*RNTI value*/
#define C_RNTI_BTS6 0x001									/*0x0001..0xFFF3*/
#define T_C_RNTI_BTS6 0x001									/*0x0001..0xFFF3*/
#define SI_RNTI_BTS6 0xFFFF									/*fixed value*/
#define P_RNTI_BTS6 0xFFFE									/*fixed value*/
//SPS_C_RNTI is defined in RRC Connec. setup

/*DL_BW */
#define MIB_DL_BANDWIDTH_BTS6 BW_100_RB

/*PHICH_DURATION */
#define MIB_PHICH_DURATION_BTS6 PHICH_DURATION_NORMAL	

/*PHICH_RESOURCE value*/
#define MIB_PHICH_RESOURCE_BTS6 PHICH_RESOURCE_oneSixth

/*SIB1*/
//{
	#define SIB1_FREQ_BAND_INDICATOR_BTS6 1				/*1..64*/
	#define SIB1_SERVING_Q_RXLEV_MIN_BTS6 -70			/*-70..-22*/
	#define SIB1_SERVING_Q_QUAL_MIN_BTS6 -34			/*-34..-3*/ 
	#define SIB1_SERVING_P_MAX_BTS6 23					/*-30..33*/

	/*schedulingInfoList*/
	#define SIB1_SI1_PERIODICITY_BTS6 SI_PERIODICITY_rf8
	#define SIB1_SI2_PERIODICITY_BTS6 SI_PERIODICITY_rf8

	#define SIB1_SI_WINDOW_LENGTH_BTS6 SI_WINDOW_LENGTH_ms1		
	#define SIB1_SYSTEM_INFO_VALUE_TAG_BTS6 0			/*0..31*/	

	/*tdd-Config*/
	#define SIB1_SUBFRAME_ASSIGNMENT_BTS6 SUBFRAME_ASSIGNMENT_sa1
	#define SIB1_SPECIAL_SUBFRAME_PATTERN_BTS6 SPECIAL_SUBFRAME_PATTERN_ssp4
//}


/*SIB2*/
//{
	/*radioResourceConfigCommon.preambleInfo*/
	#define SIB2_NUMBER_OF_RA_PREAMBLES_BTS6 NUMBER_OF_RA_PREAMBLES_n64	
	#define SIB2_SIZE_OF_RA_PREAMBLES_GROUP_A_BTS6 SIZE_OF_RA_PREAMBLES_GROUP_A_n64
	#define SIB2_MESSAGE_POWER_OFFSET_GROUP_B_BTS6 MESSAGE_POWER_OFFSET_GROUP_B_minusinfinity			

	/*radioResourceConfigCommon.rach-ConfigCommon.powerRampingParameters*/
	#define SIB2_POWER_RAMPING_STEP_BTS6 POWER_RAMPING_STEP_dB0		
	#define SIB2_PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_BTS6 PREAMBLE_INITIAL_RECEIVED_TARGET_POWER_dBm_minus120	

	/*radioResourceConfigCommon.rach-ConfigCommon.ra-SupervisionInfo*/
	#define SIB2_PREAMBLE_TRANS_MAX_BTS6 PREAMBLE_TRANS_MAX_n200

	/*radioResourceConfigCommon.rach-ConfigCommon.ra-SupervisionInfo*/
	#define SIB2_RA_RESPONSE_WINDOW_SIZE_BTS6 RA_RESPONSE_WINDOW_SIZE_sf10	
	#define SIB2_MAC_CONTENTION_RESOLUTION_TIMER_BTS6 MAC_CONTENTION_RESOLUTION_TIMER_sf64

	#define SIB2_MAX_HARQ_MSG3TX_BTS6 5							/*1..8*/

	/*radioResourceConfigCommon.bcch-Config*/
	#define SIB2_MODIFICATION_PERIOD_COEFF_BTS6 MODIFICATION_PERIOD_COEFF_N2

	/*radioResourceConfigCommon.pcch-Config*/
	#define SIB2_DEFAULT_PAGING_CYCLE_BTS6 DEFAULT_PAGING_CYCLE_RF32
	#define SIB2_NB_BTS6 NB_oneEightT		

	/*radioResourceConfigCommon.prach-Config*/
	#define SIB2_ROOT_SEQUENCE_INDEX_BTS6 0							/*0..837*/	
	#define SIB2_PRACH_CONFIG_INDEX_BTS6 12							/*0..63*/	
	#define SIB2_HIGH_SPEED_FLAG_BTS6 L1S_RELEASE						/*BOOLEAN*/	
	#define SIB2_ZERO_CORRELATION_ZONE_CONFIG_BTS6 0				/*0..15*/	
	#define SIB2_PRACH_FREQ_OFFSET_BTS6 0							/*0..94*/
	
	/*radioResourceConfigCommon.pdsch-ConfigCommon*/
	#define SIB2_REFERENCE_SIGNAL_POWER_BTS6 0						/*-60..50*/	
	#define SIB2_P_B_BTS6 0												/*0..3*/

	/*radioResourceConfigCommon.pusch-ConfigBasic*/
	#define SIB2_N_SB_BTS6 1											/*1..4*/
	#define SIB2_HOPPING_MODE_BTS6 HOPPING_MODE_interSubFrame	
	#define SIB2_PUSCH_HOPPING_OFFSET_BTS6 2 							/*0..98*/
	#define SIB2_enable64QAM_BTS6 L1S_RELEASE

	/*radioResourceConfigCommon.ul-ReferenceSignalsPUSCH*/
	#define SIB2_GROUP_HOPPING_SETUP_BTS6 L1S_RELEASE				/*BOOLEAN*/	
	#define SIB2_GROUP_ASSIGNMENT_PUSCH_BTS6 0						/*0..29*/	
	#define SIB2_SEQUENCE_HOPPING_ENABLED_BTS6 L1S_RELEASE			/*BOOLEAN*/	
	#define SIB2_CYCLIC_SHIFT_BTS6 0									/*0..7*/

	/*radioResourceConfigCommon.pucch-ConfigCommon*/
	#define SIB2_DELTA_PUCCH_SHIFT_BTS6 DELTA_PUCCH_SHIFT_ds3
	#define SIB2_NRB_CQI_BTS6 1										/*0..98*/	
	#define SIB2_NCS_AN_BTS6 6										/*0..7*/	
	#define SIB2_N1PUCCH_AN_BTS6 2									/*0..2047*/

	/*radioResourceConfigCommon.soundingRS-UL-ConfigCommon*/
	#define SIB2_SOUNDING_RS_UL_CONFIG_COMMON_BTS6 L1S_RELEASE
	#define SIB2_SRS_BANDWIDTH_CONFIG_BTS6 SRS_BANDWIDTH_CONFIG_bw7
	#define SIB2_SRS_SUBFRAME_CONFIG_BTS6 SRS_SUBFRAME_CONFIG_sc0
	#define SIB2_ACK_NACK_SRS_SIMULTANEOUS_TRANSMISSION_BTS6 L1S_RELEASE	
	#define SIB2_SRS_UP_PTS_BTS6 L1S_RELEASE


	/*radioResourceConfigCommon.uplinkPowerControlCommon.p0-NominalPUSCH*/
	#define SIB2_P0_NOMINAL_PUSCH_BTS6 -126						/*-126..24*/
	#define SIB2_ALPHA_BTS6 ALPHA_al0
	#define SIB2_P0_NOMINAL_PUCCH_BTS6 -127						/*-127..-96*/
	#define SIB2_DELTA_PUCCH_FORMAT1_deltaF_BTS6 DELTA_PUCCH_FORMAT1_deltaF_minus2
	#define SIB2_DELTA_PUCCH_FORMAT1B_deltaF_BTS6 DELTA_PUCCH_FORMAT1B_deltaF_1
	#define SIB2_DELTA_PUCCH_FORMAT2_deltaF_BTS6 DELTA_PUCCH_FORMAT2_deltaF_minus2
	#define SIB2_DELTA_PUCCH_FORMAT2A_deltaF_BTS6 DELTA_PUCCH_FORMAT2A_deltaF_minus2
	#define SIB2_DELTA_PUCCH_FORMAT2B_deltaF_BTS6 DELTA_PUCCH_FORMAT2B_deltaF_minus2

	#define SIB2_DELTA_PREAMBLE_MSG3_BTS6 0							/*-1..6*/

	/*radioResourceConfigCommon.ul-CyclicPrefixLength*/
	#define SIB2_UL_CYCLIC_PREFIX_LENGTH_BTS6 UL_CYCLIC_PREFIX_LENGTH_len1

	/*ue-TimersAndConstants*/	
	#define SIB2_T300_BTS6 T300_ms1000
	#define SIB2_T301_BTS6 T301_ms1000
	#define SIB2_T310_BTS6 T310_ms1000
	#define SIB2_N310_BTS6 N310_n1
	#define SIB2_T311_BTS6 T311_ms1000
	#define SIB2_N311_BTS6 N311_n1

	#define SIB2_UL_CARRIER_FREQ_BTS6 18000						/*0..65536*/
	#define SIB2_UL_BANDWIDTH_BTS6 BW_100_RB

	/*mbsfn-SubframeConfigList*/
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_BTS6 L1S_RELEASE /*L1S_RELEASE: list isn't present ; L1S_SETUP: list is present */
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_1_RADIOFRAME_ALLOCATION_PERIOD_BTS6 RADIOFRAME_ALLOCATION_PERIOD_n1 /*{n1, n2, n4, n8, n16, n32}*/ 
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_1_RADIOFRAME_ALLOCATION_OFFSET_BTS6 0
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_1_SUBFRAME_ALLOCATION_LENGTH_BTS6 SUBFRAME_ALLOCATION_LENGTH_ONE_FRAME
	#define SIB2_MBSFN_SUBFRAME_CONFIG_LIST_1_SUBFRAME_ALLOCATION_PATTERN_BTS6 (MBSFN_SF2|MBSFN_SF3|MBSFN_SF7)
//}

/*SIB3*/
#define SIB3_Q_HYST_BTS6 0
#define SIB3_THRESH_SERVING_LOW_BTS6 0                         /*0..31*/ 
#define SIB3_S_INTRA_SEARCH_P_BTS6 0				           /*0..31*/
#define SIB3_S_INTRA_SEARCH_Q_BTS6 0						   /*0..31*/
#define SIB3_S_NON_INTRA_SEARCH_P_BTS6 0					   /*0..31*/
#define SIB3_S_NON_INTRA_SEARCH_Q_BTS6 0					   /*0..31*/
#define SIB3_INTRA_Q_RXLEV_MIN_BTS6 -70                        /*-70..22*/
#define SIB3_INTRA_Q_QUAL_MIN_BTS6 -34                         /*-34..-3*/
#define SIB3_INTRA_P_MAX_BTS6 23                              /*-30..33*/ 
#define SIB3_INTRA_T_RESELECTION_BTS6 0                        /*-0..7*/
	
/*SIB4*/
#define SIB4_INTRA_NEIGHBOR_Q_OFFSET_CELL_BTS6 0
	
/*SIB5*/
#define SIB5_THRESHX_HIGH_BTS6 0                               /*0..31*/ 
#define SIB5_THRESHX_LOW_BTS6 0                                /*0..31*/ 
#define SIB5_INTER_Q_RXLEV_MIN_BTS6 -70                        /*-70..22*/
#define SIB5_INTER_Q_QUAL_MIN_BTS6 -34                         /*-34..-3*/
#define SIB5_INTER_P_MAX_BTS6 23                              /*-30..33*/ 
#define SIB5_INTER_T_RESELECTION_BTS6 0                        /*-0..7*/
#define SIB5_INTER_NEIGHBOR_Q_OFFSET_CELL_BTS6 0                
#define SIB5_INTER_Q_OFFSET_FREQUENCY_BTS6 0

/*Paging*/												/*0..1023*/
#define PAGING_SYSTEM_INFO_MODIFICATION_BTS6 L1S_RELEASE
#define PAGING_ETWS_INDICATION_BTS6 L1S_RELEASE
#define PAGING_CMAS_INDICATION_BTS6 L1S_RELEASE
#endif

