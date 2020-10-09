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
 * 
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 * 
 *
 * Author:
 * -------
 * 
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __ASBAND_NVRAM_EDITOR_H__
#define __ASBAND_NVRAM_EDITOR_H__

#ifndef NVRAM_NOT_PRESENT
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "asband_nvram_def.h"

typedef struct
{
    kal_uint8 gsm_band[NVRAM_EF_AS_GSM_BAND_SETTING_SIZE];
    kal_uint8 fdd_umts_band[NVRAM_EF_AS_FDD_UMTS_BAND_SETTING_SIZE];
    kal_uint8 lte_band[NVRAM_EF_AS_LTE_BAND_SETTING_SIZE];
    kal_uint8 tdd_umts_band[NVRAM_EF_AS_TDD_UMTS_BAND_SETTING_SIZE];
} nvram_ef_as_band_setting_struct;

#ifdef GEN_FOR_PC
BEGIN_NVRAM_DATA
 
 #ifndef __L1_STANDALONE__
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AS_BAND_SETTING_LID
* DESCRIPTION
*      This LID is used to set the supported bands.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update when supported bands changed by EM.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_AS_BAND_SETTING_LID) nvram_ef_as_band_setting_struct * NVRAM_EF_AS_BAND_SETTING_TOTAL
{
	gsm_band: "GSM band settings";
		gsm_band[0]
		{
		    none: 1 "none" {};
			EGSM900: 1 "EGSM900" {};
			none: 1 "none" {};
			DCS1800: 1 "DCS1800" {};
			PCS1900: 1 "PCS1900" {};
			none: 1 "none" {};
			none: 1 "none" {};
			GSM850: 1 "GSM850" {};	
		};
	fdd_umts_band: "WCDMA band settings";
		fdd_umts_band[0]
		{
			Support_UMTS_BAND_I: 1 "Support_UMTS_BAND_I" {};
			Support_UMTS_BAND_II: 1 "Support_UMTS_BAND_II" {};
			Support_UMTS_BAND_III: 1 "Support_UMTS_BAND_III" {};
			Support_UMTS_BAND_IV: 1 "Support_UMTS_BAND_IV" {};
			Support_UMTS_BAND_V: 1 "Support_UMTS_BAND_V" {};
			Support_UMTS_BAND_VI: 1 "Support_UMTS_BAND_VI" {};
			Support_UMTS_BAND_VII: 1 "Support_UMTS_BAND_VII" {};
		    Support_UMTS_BAND_VIII: 1 "Support_UMTS_BAND_VIII" {};			
		};
		fdd_umts_band[1]
		{
		    Support_UMTS_BAND_IX: 1 "Support_UMTS_BAND_IX" {};
			Support_UMTS_BAND_X: 1 "Support_UMTS_BAND_X" {};
			Support_UMTS_BAND_XI: 1 "Support_UMTS_BAND_XI" {};
			Support_UMTS_BAND_XII: 1 "Support_UMTS_BAND_XII" {};
			Support_UMTS_BAND_XIII: 1 "Support_UMTS_BAND_XIII" {};
			Support_UMTS_BAND_XIV: 1 "Support_UMTS_BAND_XIV" {};
			Support_UMTS_BAND_XV: 1 "Support_UMTS_BAND_XV" {};
			Support_UMTS_BAND_XVI: 1 "Support_UMTS_BAND_XVI" {};
		};
		fdd_umts_band[2]
		{
		    Support_UMTS_BAND_XVII: 1 "Support_UMTS_BAND_XVII" {};
			Support_UMTS_BAND_XVIII: 1 "Support_UMTS_BAND_XVIII" {};
			Support_UMTS_BAND_XIX: 1 "Support_UMTS_BAND_XIX" {};
			Support_UMTS_BAND_XX: 1 "Support_UMTS_BAND_XX" {};
			Support_UMTS_BAND_XXI: 1 "Support_UMTS_BAND_XXI" {};
			Support_UMTS_BAND_XXII: 1 "Support_UMTS_BAND_XXII" {};
			Support_UMTS_BAND_XXIII: 1 "Support_UMTS_BAND_XXIII" {};
			Support_UMTS_BAND_XXIV: 1 "Support_UMTS_BAND_XXIV" {};			
		};
		fdd_umts_band[3]
		{
		    Support_UMTS_BAND_XXV: 1 "Support_UMTS_BAND_XXV" {};
			Support_UMTS_BAND_XXVI: 1 "Support_UMTS_BAND_XXVI" {};
			Support_UMTS_BAND_XXVII: 1 "Support_UMTS_BAND_XXVII" {};
			Support_UMTS_BAND_XXVIII: 1 "Support_UMTS_BAND_XXVIII" {};
			Support_UMTS_BAND_XXIX: 1 "Support_UMTS_BAND_XXIX" {};
			Support_UMTS_BAND_XXX: 1 "Support_UMTS_BAND_XXX" {};
			Support_UMTS_BAND_XXXI: 1 "Support_UMTS_BAND_XXXI" {};
			Support_UMTS_BAND_XXXII: 1 "Support_UMTS_BAND_XXXII" {};			
		};
	lte_band: "LTE band settings: bit j(LSB) in lte_band[i] is 1, means band (i*8+j+1) is supported.";
		
	tdd_umts_band: "TDSCDMA band settings";
		tdd_umts_band[0]
		{
			Support_UMTS_BAND_A: 1 "Support_UMTS_BAND_A" {};
			Support_UMTS_BAND_B: 1 "Support_UMTS_BAND_B" {};
			Support_UMTS_BAND_C: 1 "Support_UMTS_BAND_C" {};
			Support_UMTS_BAND_D: 1 "Support_UMTS_BAND_D" {};
			Support_UMTS_BAND_E: 1 "Support_UMTS_BAND_E" {};
			Support_UMTS_BAND_F: 1 "Support_UMTS_BAND_F" {};
		    none: 1 "none" {};
			none: 1 "none" {};
		};
		tdd_umts_band[1]{ 
			none: 8 "none" {}; 
		};
		tdd_umts_band[2]{ 
			none: 8 "none" {}; 
		};
		tdd_umts_band[3]{ 
			none: 8 "none" {}; 
		};
};
 
 #endif
END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 

#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __ASBAND_NVRAM_EDITOR_H__ */
