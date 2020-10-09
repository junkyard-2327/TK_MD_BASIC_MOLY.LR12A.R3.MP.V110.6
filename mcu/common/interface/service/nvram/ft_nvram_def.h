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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __FT_NVRAM_DEF_H__
#define __FT_NVRAM_DEF_H__

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 


#include "nvram_defs.h"
#include "nvram_enums.h"
#include "ps_public_enum.h"
#include "device.h"
// LID Enums

typedef enum
{
        NVRAM_EF_CAL_FLAG_LID               = NVRAM_LID_GRP_FT(0),  
        NVRAM_EF_CAL_DATA_CHECK_LID,
        NVRAM_EF_RF_CAL_ENV_LID,
        NVRAM_EF_RF_CAL_LOSS_SETTING_LID,
        NVRAM_EF_RF_TEST_POWER_RESULT_LID,
        NVRAM_EF_FT_LAST_LID                = NVRAM_LID_GRP_FT(63)
}nvram_lid_ft_enum;

// VERNO
#define NVRAM_EF_CAL_FLAG_LID_VERNO                         "000"
#define NVRAM_EF_CAL_DATA_CHECK_LID_VERNO                   "000"
// RF Calibration history NVRAM items
#ifdef __TC01__
#define NVRAM_EF_RF_CAL_ENV_LID_VERNO                        "000"
#define NVRAM_EF_RF_CAL_LOSS_SETTING_LID_VERNO               "000"
#define NVRAM_EF_RF_TEST_POWER_RESULT_LID_VERNO              "000"
#endif // #ifdef __TC01__

// Size and Total 
#define NVRAM_EF_CAL_FLAG_SIZE    sizeof(nvram_cal_flag_struct)
#define NVRAM_EF_CAL_FLAG_TOTAL  1

#define NVRAM_EF_CAL_DATA_CHECK_SIZE   sizeof(nvram_cal_data_check_struct)
#define NVRAM_EF_CAL_DATA_CHECK_TOTAL 1   // don't change the record number!

// RF calibration history NVRAM items
#ifdef __TC01__
#define NVRAM_EF_RF_CAL_ENV_SIZE            sizeof(nvram_ef_rf_cal_env_struct)
#define NVRAM_EF_RF_CAL_ENV_TOTAL           1
#define NVRAM_EF_RF_CAL_LOSS_SETTING_SIZE   sizeof(nvram_ef_rf_cal_loss_setting_struct)
#define NVRAM_EF_RF_CAL_LOSS_SETTING_TOTAL  1
#define NVRAM_EF_RF_TEST_POWER_RESULT_SIZE  sizeof(nvram_ef_rf_test_power_result_struct)
#define NVRAM_EF_RF_TEST_POWER_RESULT_TOTAL 1
#endif // #ifdef __TC01__


#ifdef __cplusplus
}
#endif 

#endif /* __FT_NVRAM_DEF_H__ */ 
