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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __FT_NVRAM_EDITOR_H__
#define __FT_NVRAM_EDITOR_H__

#ifndef NVRAM_NOT_PRESENT
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "ft_nvram_def.h"

// Data Structure of Each LID

/************************
 * CAL FLAG & CAL CHECK
 ************************/
typedef struct
{
	 kal_uint8   u1CalFlag;
	 kal_uint8   u1CalDscrpt[30];
}nvram_cal_flag_entry_struct;
typedef struct
{
	 kal_uint8   u1CalAllFlag;
	 kal_uint8   u1CalMarkNumber;
	 nvram_cal_flag_entry_struct CalFlagMarks[10];
}nvram_cal_flag_struct;

#define nvram_cal_data_entry_num 2048
typedef struct
{
	kal_uint16    u2LidEnumVal;
	kal_uint16    u2LidRec;
	kal_uint16    u2CheckVal;

}nvram_cal_data_entry_struct;

typedef struct
{
   kal_uint16  u1ValidNum;
   nvram_cal_data_entry_struct CalDataCheck[nvram_cal_data_entry_num];
}nvram_cal_data_check_struct;


// RF Calibration history NVRAM items
#ifdef __TC01__
typedef struct
{
    kal_uint8 callogicver;
    kal_uint8 nvini;
    kal_uint8 xmlver;
    kal_uint8 xmlsequence;
    kal_uint8 xmlcalsetup;
    kal_uint8 exeTachyon;
    kal_uint8 dllTachyonlogic;
    kal_uint8 dllInstrument;
    kal_uint8 dllPhncmd;
} RfCalVersion;
typedef struct
{
    RfCalVersion rfCalVersion;
    kal_uint8    sgCalSectionPclp[6];
    kal_uint8    CalSection;
    kal_uint32   dwCalDate;
    kal_uint8    Ezlooks;
    kal_uint8    calnTest;
    kal_uint8    Testonly;
    kal_uint8    sgEquipmentSerial[32];
    kal_uint32   dwCalFailcode;
} nvram_ef_rf_cal_env_struct;

typedef struct
{
    kal_int16    loss[20];
} nvram_ef_rf_cal_loss_setting_struct;

typedef struct
{
    kal_uint16   TestPower[4][3];
} nvram_ef_rf_test_power_result_struct;
#endif // #ifdef __TC01__

#ifdef GEN_FOR_PC
BEGIN_NVRAM_DATA
/***********************************************************************
  ***  This is a nvram data item bit level description for meta tools nvram editor
  ***
  ***  Logical Data Item ID : NVRAM_EF_CAL_FLAG_LID
  ***
  ***  Module: FT
  ***
  ***  Description:
  ***
  ***  Maintainer: YH Sung
  ***
  ***********************************************************************/
LID_BIT VER_LID(NVRAM_EF_CAL_FLAG_LID)
     nvram_cal_flag_struct *NVRAM_EF_CAL_FLAG_TOTAL
     {
     	   u1CalAllFlag:"Calibration flag for this phone"
     	   {
     	   };
     	   u1CalMarkNumber:"The number valid element of calibration mark"
     	   {
     	   };
     	   CalFlagMarks:"The 10-element array of calibration flag"
     	   {
     	   };

     };
/***********************************************************************
  ***  This is a nvram data item bit level description for meta tools nvram editor
  ***
  ***  Logical Data Item ID : NVRAM_EF_CAL_DATA_CHECK_LID
  ***
  ***  Module: FT
  ***
  ***  Description:
  ***
  ***  Maintainer: YH Sung
  ***
  ***********************************************************************/
LID_BIT VER_LID(NVRAM_EF_CAL_DATA_CHECK_LID)
     nvram_cal_data_check_struct *NVRAM_EF_CAL_DATA_CHECK_TOTAL
     {
     	   u1ValidNum:"The number valid element of calibration data check"
     	   {
     	   };
     	   CalDataCheck:"The 2048-element array of cal data check"
     	   {
     	   };
     };
	 
// RF Calibration history NVRAM items
#ifdef __TC01__
LID_BIT VER_LID(NVRAM_EF_RF_CAL_ENV_LID)
     nvram_ef_rf_cal_env_struct *NVRAM_EF_RF_CAL_ENV_TOTAL
     {
     };
LID_BIT VER_LID(NVRAM_EF_RF_CAL_LOSS_SETTING_LID)
     nvram_ef_rf_cal_loss_setting_struct *NVRAM_EF_RF_CAL_LOSS_SETTING_TOTAL
     {
     };
LID_BIT VER_LID(NVRAM_EF_RF_TEST_POWER_RESULT_LID)
     nvram_ef_rf_test_power_result_struct *NVRAM_EF_RF_TEST_POWER_RESULT_TOTAL
     {
     };

#endif // #ifdef __TC01__

END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 

#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __CSG_NVRAM_EDITOR_H__ */
