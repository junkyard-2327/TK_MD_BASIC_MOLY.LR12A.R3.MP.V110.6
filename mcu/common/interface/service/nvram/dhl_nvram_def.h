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
#ifndef __DHL_NVRAM_DEF_H__
#define __DHL_NVRAM_DEF_H__

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "nvram_defs.h"
#include "nvram_enums.h"
#include "ps_public_enum.h"
//#include "nvram_editor_data_item.h"
#include "device.h"
// LID Enums

typedef enum
{
        NVRAM_EF_TST_FILTER_LID                     = NVRAM_LID_GRP_DHL(0), 
        NVRAM_EF_PORT_SETTING_LID,
        NVRAM_EF_PS_L2COPRO_FILTER_SETTINGS_LID,  //L2Copro filter settings
        NVRAM_EF_DHL_FILTER_LID,        
        NVRAM_EF_DSP_FILTER_LID,
        NVRAM_EF_TST_CONFIG_LID,                    
        
        NVRAM_EF_DHL_LAST_LID                       = NVRAM_LID_GRP_DHL(63)
}nvram_lid_dhl_enum;

// VERNO
#define  NVRAM_EF_TST_FILTER_LID_VERNO                       "003"
#define  NVRAM_EF_DHL_FILTER_LID_VERNO                       "000"
#define  NVRAM_EF_DSP_FILTER_LID_VERNO                       "000"
#define NVRAM_EF_PORT_SETTING_LID_VERNO                      "004"
#define NVRAM_EF_PS_L2COPRO_FILTER_SETTINGS_LID_VERNO        "000"
#define NVRAM_EF_TST_CONFIG_LID_VERNO                        "001"

/**
 * TST Filter
 *   PS filter length + L1 filter length (current max number is TST_L1TRC_FILTER_NUM, exact number should be decided at codegen stage)
 */
//#define NVRAM_EF_TST_FILTER_SIZE         (((END_OF_MOD_ID+7)/8) + (LAST_SAP_CODE+1) + (2*(END_OF_MOD_ID+1)) + NVRAM_DUAL_RECORD*TST_L1TRC_FILTER_NUM*5)
#define NVRAM_EF_TST_FILTER_SIZE NVRAM_EF_TST_FILTER_ALLOCATE_SIZE
#define NVRAM_EF_TST_FILTER_TOTAL        1
#define NVRAM_EF_DHL_FILTER_SIZE NVRAM_EF_DHL_FILTER_ALLOCATE_SIZE
#define NVRAM_EF_DHL_FILTER_TOTAL        1
#define NVRAM_EF_DSP_FILTER_SIZE NVRAM_EF_DSP_FILTER_ALLOCATE_SIZE
#define NVRAM_EF_DSP_FILTER_TOTAL        1

/**
 * Port Setting
 */
#define NVRAM_EF_PORT_SETTING_SIZE         sizeof(port_setting_struct)
#define NVRAM_EF_PORT_SETTING_TOTAL  1

#define NVRAM_EF_TST_CONFIG_SIZE         sizeof(tst_config_struct_t)
#define NVRAM_EF_TST_CONFIG_TOTAL    1

#if defined(__TST_DNT_LOGGING__)
  #define NVRAM_EF_PS_L2COPRO_FILTER_SETTINGS_SIZE 64
  #define NVRAM_EF_PS_L2COPRO_FILTER_SETTINGS_TOTAL 1
#endif  //#if defined(__TST_DNT_LOGGING__)


#ifdef __cplusplus
}
#endif 

#endif /* __ASBAND_NVRAM_DEF_H__ */ 
