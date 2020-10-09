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
 *   UMOLY
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
#ifndef __D2_NVRAM_EDITOR_H__
#define __D2_NVRAM_EDITOR_H__

#ifndef NVRAM_NOT_PRESENT
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "d2_nvram_def.h"

#ifdef GEN_FOR_PC
BEGIN_NVRAM_DATA

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_D2_DATA_LID
* DESCRIPTION
*      For default data ICCID
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: 
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_D2_DATA_LID) nvram_d2_data_struct* NVRAM_EF_D2_DATA_TOTAL{};
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_D2_APNINFO_LID
* DESCRIPTION
*      internal module use, for speed attach procedure 
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: attach successfully
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_D2_APNINFO_LID) nvram_d2_apninfo_struct* NVRAM_EF_D2_APNINFO_TOTAL{};
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_D2_FOP_LID
* DESCRIPTION
*      FOR EGYTPE = 3
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: for lab test
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_D2_FOP_LID) nvram_d2_fop_struct* NVRAM_EF_D2_FOP_TOTAL{};
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_D2_DEFAULT_PDP_PROFILE_LID
* DESCRIPTION
*      
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario:
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_D2_DEFAULT_PDP_PROFILE_LID) nvram_d2_default_pdp_profile_struct* NVRAM_EF_D2_DEFAULT_PDP_PROFILE_TOTAL{};
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_D2_APNSETTING_LID
* DESCRIPTION
*      
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario:
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_D2_APNSETTING_LID) nvram_d2_apnsetting_struct* NVRAM_EF_D2_APNSETTING_TOTAL{};
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_D2_DDM_QOS_IND_LID
* DESCRIPTION
*      
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario:
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_D2_DDM_QOS_IND_LID) nvram_ddm_qos_enable_struct* NVRAM_EF_D2_DDM_QOS_IND_TOTAL{};

END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 

#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __D2_NVRAM_EDITOR_H__ */
