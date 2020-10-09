/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
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
 *   c2k_custom_elna.h
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   C2K  ELNA
 *
 * Author:
 * -------
 *
 *
 *******************************************************************************/
#ifndef C2K_CUSTOM_ELNA_SetDefault_H
#define C2K_CUSTOM_ELNA_SetDefault_H

/*---------------------------------------------------------------------------
ELNA Category Setting
1.C2K_ELNA_OFF						:without ELNA
2.C2K_ELNA_ALWAYS_ON				:ELNA with on mode but without 2nd SAW
3.C2K_ELNA_ALWAYS_ON_2ND_SAW	:ELNA with on mode and 2nd SAW
4.C2K_ELNA_BYPASS					:ELNA with bypass/on mode but without 2nd SAW
5.C2K_ELNA_BYPASS_2ND_SAW		:ELNA with bypass/on mode and with 2nd SAW  
---------------------------------------------------------------------------*/
#define C2K_ELNA1_CATEGORY_SetDefault			MML1_ELNA_OFF
#define C2K_ELNA2_CATEGORY_SetDefault			MML1_ELNA_OFF
#define C2K_ELNA3_CATEGORY_SetDefault			MML1_ELNA_OFF
#define C2K_ELNA4_CATEGORY_SetDefault			MML1_ELNA_OFF
#define C2K_ELNA5_CATEGORY_SetDefault			MML1_ELNA_OFF
#define C2K_ELNA6_CATEGORY_SetDefault			MML1_ELNA_OFF
#define C2K_ELNA7_CATEGORY_SetDefault			MML1_ELNA_OFF
#define C2K_ELNA8_CATEGORY_SetDefault			MML1_ELNA_OFF
#define C2K_ELNA9_CATEGORY_SetDefault			MML1_ELNA_OFF
#define C2K_ELNA10_CATEGORY_SetDefault			MML1_ELNA_OFF

/*---------------------------------------------------------------------------
Set "GAIN MODE" BPI data for the specific ELNA
---------------------------------------------------------------------------*/
//The setting for ELNA1
#define PDATA_C2K_ELNA1_PIN0_SetDefault					(13)		// the 1st BPI pin number for the ELNA control
#define PDATA_C2K_ELNA1_PIN1_SetDefault			C2K_ELNA_PIN_NONE	// the 2nd BPI pin number for the ELNA control
#define PDATA_C2K_ELNA1_PIN0_ON_DATA_SetDefault			(1)			// the ON mode BPI setting (1 or 0) for the 1st BPI pin
#define PDATA_C2K_ELNA1_PIN1_ON_DATA_SetDefault			(0)			// the ON mode BPI setting (1 or 0) for the 2nd BPI pin
#define PDATA_C2K_ELNA1_PIN0_BYPASS_DATA_SetDefault		(0)			// the BYPASS mode BPI setting (1 or 0) for the 1st BPI pin
#define PDATA_C2K_ELNA1_PIN1_BYPASS_DATA_SetDefault		(0)			// the BYPASS mode BPI setting (1 or 0) for the 2nd BPI pin
//The setting for ELNA2
#define PDATA_C2K_ELNA2_PIN0_SetDefault			C2K_ELNA_PIN_NONE
#define PDATA_C2K_ELNA2_PIN1_SetDefault			C2K_ELNA_PIN_NONE
#define PDATA_C2K_ELNA2_PIN0_ON_DATA_SetDefault			(0)
#define PDATA_C2K_ELNA2_PIN1_ON_DATA_SetDefault			(0)
#define PDATA_C2K_ELNA2_PIN0_BYPASS_DATA_SetDefault		(0)
#define PDATA_C2K_ELNA2_PIN1_BYPASS_DATA_SetDefault		(0)
//The setting for ELNA3
#define PDATA_C2K_ELNA3_PIN0_SetDefault			C2K_ELNA_PIN_NONE
#define PDATA_C2K_ELNA3_PIN1_SetDefault			C2K_ELNA_PIN_NONE
#define PDATA_C2K_ELNA3_PIN0_ON_DATA_SetDefault			(0)
#define PDATA_C2K_ELNA3_PIN1_ON_DATA_SetDefault			(0)
#define PDATA_C2K_ELNA3_PIN0_BYPASS_DATA_SetDefault		(0)
#define PDATA_C2K_ELNA3_PIN1_BYPASS_DATA_SetDefault		(0)
//The setting for ELNA4
#define PDATA_C2K_ELNA4_PIN0_SetDefault			C2K_ELNA_PIN_NONE
#define PDATA_C2K_ELNA4_PIN1_SetDefault			C2K_ELNA_PIN_NONE
#define PDATA_C2K_ELNA4_PIN0_ON_DATA_SetDefault			(0)
#define PDATA_C2K_ELNA4_PIN1_ON_DATA_SetDefault			(0)
#define PDATA_C2K_ELNA4_PIN0_BYPASS_DATA_SetDefault		(0)
#define PDATA_C2K_ELNA4_PIN1_BYPASS_DATA_SetDefault		(0)
//The setting for ELNA5
#define PDATA_C2K_ELNA5_PIN0_SetDefault			C2K_ELNA_PIN_NONE
#define PDATA_C2K_ELNA5_PIN1_SetDefault			C2K_ELNA_PIN_NONE
#define PDATA_C2K_ELNA5_PIN0_ON_DATA_SetDefault			(0)
#define PDATA_C2K_ELNA5_PIN1_ON_DATA_SetDefault			(0)
#define PDATA_C2K_ELNA5_PIN0_BYPASS_DATA_SetDefault		(0)
#define PDATA_C2K_ELNA5_PIN1_BYPASS_DATA_SetDefault		(0)
//The setting for ELNA6
#define PDATA_C2K_ELNA6_PIN0_SetDefault			C2K_ELNA_PIN_NONE
#define PDATA_C2K_ELNA6_PIN1_SetDefault			C2K_ELNA_PIN_NONE
#define PDATA_C2K_ELNA6_PIN0_ON_DATA_SetDefault			(0)
#define PDATA_C2K_ELNA6_PIN1_ON_DATA_SetDefault			(0)
#define PDATA_C2K_ELNA6_PIN0_BYPASS_DATA_SetDefault		(0)
#define PDATA_C2K_ELNA6_PIN1_BYPASS_DATA_SetDefault		(0)
//The setting for ELNA7
#define PDATA_C2K_ELNA7_PIN0_SetDefault			C2K_ELNA_PIN_NONE
#define PDATA_C2K_ELNA7_PIN1_SetDefault			C2K_ELNA_PIN_NONE
#define PDATA_C2K_ELNA7_PIN0_ON_DATA_SetDefault			(0)
#define PDATA_C2K_ELNA7_PIN1_ON_DATA_SetDefault			(0)
#define PDATA_C2K_ELNA7_PIN0_BYPASS_DATA_SetDefault		(0)
#define PDATA_C2K_ELNA7_PIN1_BYPASS_DATA_SetDefault		(0)
//The setting for ELNA8
#define PDATA_C2K_ELNA8_PIN0_SetDefault			C2K_ELNA_PIN_NONE
#define PDATA_C2K_ELNA8_PIN1_SetDefault			C2K_ELNA_PIN_NONE
#define PDATA_C2K_ELNA8_PIN0_ON_DATA_SetDefault			(0)
#define PDATA_C2K_ELNA8_PIN1_ON_DATA_SetDefault			(0)
#define PDATA_C2K_ELNA8_PIN0_BYPASS_DATA_SetDefault		(0)
#define PDATA_C2K_ELNA8_PIN1_BYPASS_DATA_SetDefault		(0)
//The setting for ELNA9
#define PDATA_C2K_ELNA9_PIN0_SetDefault			C2K_ELNA_PIN_NONE
#define PDATA_C2K_ELNA9_PIN1_SetDefault			C2K_ELNA_PIN_NONE
#define PDATA_C2K_ELNA9_PIN0_ON_DATA_SetDefault			(0)
#define PDATA_C2K_ELNA9_PIN1_ON_DATA_SetDefault			(0)
#define PDATA_C2K_ELNA9_PIN0_BYPASS_DATA_SetDefault		(0)
#define PDATA_C2K_ELNA9_PIN1_BYPASS_DATA_SetDefault		(0)
//The setting for ELNA10
#define PDATA_C2K_ELNA10_PIN0_SetDefault			C2K_ELNA_PIN_NONE
#define PDATA_C2K_ELNA10_PIN1_SetDefault			C2K_ELNA_PIN_NONE
#define PDATA_C2K_ELNA10_PIN0_ON_DATA_SetDefault			(0)
#define PDATA_C2K_ELNA10_PIN1_ON_DATA_SetDefault			(0)
#define PDATA_C2K_ELNA10_PIN0_BYPASS_DATA_SetDefault		(0)
#define PDATA_C2K_ELNA10_PIN1_BYPASS_DATA_SetDefault		(0)

/*--------------------------------------------------
Fill in "ELNA index" in the RX/RXD path for specific band(BAND_A/B/C/D/E)
C2K_ELNA1:			ELAN1 is selected
C2K_ELNA2:			ELAN2 is selected
...
C2K_ELNA10:			ELAN10 is selected
C2K_ELNA_NONE:		ELNA is unused
--------------------------------------------------*/
#define C2K_BAND_A_RX_ELNA_SetDefault	MML1_FE_ELNA_NONE
#define C2K_BAND_B_RX_ELNA_SetDefault	MML1_FE_ELNA2
#define C2K_BAND_C_RX_ELNA_SetDefault	MML1_FE_ELNA_NONE
#define C2K_BAND_D_RX_ELNA_SetDefault	MML1_FE_ELNA_NONE
#define C2K_BAND_E_RX_ELNA_SetDefault	MML1_FE_ELNA_NONE

#define C2K_BAND_A_RXD_ELNA_SetDefault	MML1_FE_ELNA_NONE
#define C2K_BAND_B_RXD_ELNA_SetDefault	MML1_FE_ELNA6
#define C2K_BAND_C_RXD_ELNA_SetDefault	MML1_FE_ELNA_NONE
#define C2K_BAND_D_RXD_ELNA_SetDefault	MML1_FE_ELNA_NONE
#define C2K_BAND_E_RXD_ELNA_SetDefault	MML1_FE_ELNA_NONE
#endif