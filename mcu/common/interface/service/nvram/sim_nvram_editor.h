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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __SIM_NVRAM_EDITOR_H__
#define __SIM_NVRAM_EDITOR_H__

#ifndef NVRAM_NOT_PRESENT
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "sim_nvram_def.h"

// Data Structure of Each LID
typedef struct
{
    kal_uint32 data[4];
}nvram_ef_sim_assert_struct;

#ifdef GEN_FOR_PC
BEGIN_NVRAM_DATA
/********************************************************************************************
 * LID_NAME
 *      NVRAM_EF_SIM_ASSERT_LID
 * DESCRIPTION
 *      This LID is used to record few SIM abnormal behaviors.
 * INFOMATION
 *      Can OTA Reset: Yes
 *      Update Scenario: This LID will update once during task init.
 * *********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_SIM_ASSERT_LID)
    nvram_ef_sim_assert_struct* NVRAM_EF_SIM_ASSERT_TOTAL
    {
        data:"record few SIM abnormal behavior, line of icc_switchControl_mtk_0.c, data[0], data[1], data[2], and data[3] have same description";
    };

/********************************************************************************************
 * LID_NAME
 *      NVRAM_EF_TEST_SIM_LID
 * DESCRIPTION
 *      This LID is used to override the test SIM settings read fomr EF AD and EF IMSI and retrieve
 *       test sim settings from NVRAM 
 * INFOMATION
 *      Can OTA Reset: Yes
 *      Update Scenario: Manually updated by customer
 * *********************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_TEST_SIM_LID)
    nvram_test_sim_struct * NVRAM_EF_TEST_SIM_TOTAL
    {
        test_sim:"test_sim"
         {
           test_sim:8 "test_sim"
           {
             0x01:"sim setting from EF AD and EF IMSI ";
             0x02:"test sim settings from NVRAM";
           };
         };
    };

/********************************************************************************************
 * LID_NAME
 *      NVRAM_EF_REGISTRATION_MODE_LID
 * DESCRIPTION
 *      This LID is used to store the current registration mode for SKT UICC Korea requirements 
 * INFOMATION
 *      Can OTA Reset: Yes
 *      Update Scenario: This LID is updated when MD received AT+ERMODE = 1/0 from AP
 * *********************************************************************************************/
#ifdef __KOR_CUSTOMIZATION__
LID_BIT VER_LID(NVRAM_EF_REGISTRATION_MODE_LID) 
     nvram_ef_registration_mode_struct * NVRAM_EF_REGISTRATION_MODE_TOTAL
     {
     };
#endif


/********************************************************************************************
* LID_NAME
*      NVRAM_EF_SIM_DISABLE_SLOT_BITMASK_LID
* DESCRIPTION
*      This LID is used to store slot id which is disable in the UE  
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will be updated when MD received AT+ESIMPOWER = 10/11 
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_SIM_DISABLE_SLOT_BITMASK_LID)
    nvram_disable_slot_bitmask_struct * NVRAM_EF_SIM_DISABLE_SLOT_BITMASK_TOTAL
    {
        off_slot_bitmask:"Disabled card slot bitmask, bit 0 to slot 1 and bit 1 to slot 2 and so on."
        {
        };
    };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_SIM_DISABLE_ICCID_LIST_LID
* DESCRIPTION
*      This LID is used to store ICCID list which is disable in the UE  
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will be updated when MD received AT+ESIMPOWER = 10/11 
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_SIM_DISABLE_ICCID_LIST_LID)
    nvram_disable_iccid_list_struct * NVRAM_EF_SIM_DISABLE_ICCID_LIST_TOTAL
    {
        iccid_list:"Disabled ICCID list, each record is 10 bytes"
        {
        };
    };

#ifdef __FAKEID_SUPPORT__
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_SIM_FAKE_IMSI_LID
* DESCRIPTION
*      This LID is used to store fake IMSI
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will be updated when MD received AT+EFAKEID from AP
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_SIM_FAKE_IMSI_LID)
    nvram_fake_imsi_struct * NVRAM_EF_FAKE_IMSI_TOTAL
    {
        fake_mnc_length:"MNC length"
        {
        };
        fake_imsi:"IMSI data"
        {
        };
    };
#endif
END_NVRAM_DATA
#endif  /*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 

#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __SIM_NVRAM_EDITOR_H__ */
