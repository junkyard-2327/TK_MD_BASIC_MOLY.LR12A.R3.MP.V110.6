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
 * mml1_custom_mipi.c
 *
 * Project:
 * --------
 * MT6290
 *
 * Description:
 * ------------
 * Multi-Mode RF Central Functions
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *----------------------------------------------------------------------------
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
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*===============================================================================*/

#include "kal_general_types.h"
#include "mml1_mipi_public.h"
#include "mml1_custom_mipi.h"
#include "mml1_drdi.h"

/***************************************************************************
 * MML1 MIPI Initial CW Table Data
 ***************************************************************************/
const MML1_MIPI_INITIAL_CW_T MML1_MIPI_INITIAL_CW_Set0[MML1_MIPI_MAX_INITIAL_CW_NUM] =
{
   // elm type    , port_sel       , data_seq  ,    USID          , addr , data  , wait_time(us)
   {MML1_MIPI_PA  , MML1_MIPI_PORT0, MML1_REG_W, MIPI_USID_PA0_Set0    , {0x1C, 0x38} , 0 }, // Specific ID, Standard MIPI, PM_TRIG = normal mode
   {MML1_MIPI_ASM , MML1_MIPI_PORT1, MML1_REG_W, MIPI_USID_ASM0_Set0   , {0x1C, 0x38} , 0 }, // Specific ID, Standard MIPI, PM_TRIG = normal mode
   {MML1_MIPI_ASM , MML1_MIPI_PORT3, MML1_REG_W, MIPI_USID_ASM1_Set0   , {0x1C, 0x38} , 0 }, // Specific ID, Standard MIPI, PM_TRIG = normal mode
   {MML1_MIPI_ASM , MML1_MIPI_PORT1, MML1_REG_W, MIPI_USID_ASM2_Set0   , {0x1C, 0x38} , 0 }, // Specific ID, Standard MIPI, PM_TRIG = normal mode
   {MML1_MIPI_ASM , MML1_MIPI_PORT3, MML1_REG_W, MIPI_USID_ASM3_Set0   , {0x1C, 0x38} , 0 }, // Specific ID, Standard MIPI, PM_TRIG = normal mode
   {MML1_MIPI_ANT , MML1_MIPI_PORT2, MML1_REG_W, MIPI_USID_ANT0_Set0   , {0x1C, 0x38} , 0 }, // Specific ID, Standard MIPI, PM_TRIG = normal mode
   {MML1_MIPI_END_PATTERN,0,0,0,{0,0},0},
   {MML1_MIPI_END_PATTERN,0,0,0,{0,0},0},
   {MML1_MIPI_END_PATTERN,0,0,0,{0,0},0},
};

/***************************************************************************
 * MML1 MIPI Change USDI Table Data
 ***************************************************************************/
const MML1_MIPI_USID_CHANGE_T MML1_MIPI_USID_CHANGE_TABLE_Set0[MML1_MIPI_MAX_USID_CHANGE_NUM] =
{
   // USID change type   , port_sel        , current USID , PRODUCT_ID , MANUFACTORY_ID   new USID
   {USID_NULL,0,0,0,0,0}, 
   {USID_NULL,0,0,0,0,0}, 
   {USID_NULL,0,0,0,0,0}, 
   {USID_NULL,0,0,0,0,0}, 
   {USID_NULL,0,0,0,0,0},
};

/***************************************************************************
 * MML1 MIPI Check HW Table
 ***************************************************************************/
const MML1_MIPI_CHECK_HW_T MML1_MIPI_HW_CHECK_TABLE_Set0[MML1_MIPI_MAX_HW_CHECK_NUM] =
{
   // MIPI element type  , port_sel        , USID , PRODUCT_ID , MANUFACTORY_ID
   //{MML1_MIPI_ASM      , MML1_MIPI_PORT0 , 0xF  , 0x5        , 0x1A5        },
   {MML1_MIPI_NULL,0,0,0,0},
   {MML1_MIPI_NULL,0,0,0,0},
   {MML1_MIPI_NULL,0,0,0,0},
   {MML1_MIPI_NULL,0,0,0,0},
   {MML1_MIPI_NULL,0,0,0,0},
};

/***************************************************************************
 * MML1 MIPI LPM CW Table Data, Sleep(flight) CW for all RFMIPI devices enter LPM
 ***************************************************************************/
const MML1_MIPI_LPM_CW_T MML1_MIPI_LPM_CW_Set0[MML1_MIPI_MAX_LPM_CW_NUM] =
{
   // elm type    , port_sel       , data_seq  ,    USID          , addr , data  , wait_time(us)
   {MML1_MIPI_PA  , MML1_MIPI_PORT0, MML1_REG_W, MIPI_USID_PA0_Set0    , {0x1C, 0xB8} , 0 }, // Specific ID, Standard MIPI, PM_TRIG = normal mode
   {MML1_MIPI_ASM , MML1_MIPI_PORT1, MML1_REG_W, MIPI_USID_ASM0_Set0   , {0x1C, 0xB8} , 0 }, // Specific ID, Standard MIPI, PM_TRIG = normal mode
   {MML1_MIPI_ASM , MML1_MIPI_PORT3, MML1_REG_W, MIPI_USID_ASM1_Set0   , {0x1C, 0xB8} , 0 }, // Specific ID, Standard MIPI, PM_TRIG = normal mode
   {MML1_MIPI_ASM , MML1_MIPI_PORT1, MML1_REG_W, MIPI_USID_ASM2_Set0   , {0x1C, 0xB8} , 0 }, // Specific ID, Standard MIPI, PM_TRIG = normal mode
   {MML1_MIPI_ASM , MML1_MIPI_PORT3, MML1_REG_W, MIPI_USID_ASM3_Set0   , {0x1C, 0xB8} , 0 }, // Specific ID, Standard MIPI, PM_TRIG = normal mode
   {MML1_MIPI_END_PATTERN,0,0,0,{0,0},0},
   {MML1_MIPI_END_PATTERN,0,0,0,{0,0},0},
   {MML1_MIPI_END_PATTERN,0,0,0,{0,0},0},
   {MML1_MIPI_END_PATTERN,0,0,0,{0,0},0},
   {MML1_MIPI_END_PATTERN,0,0,0,{0,0},0},
   {MML1_MIPI_END_PATTERN,0,0,0,{0,0},0},
   {MML1_MIPI_END_PATTERN,0,0,0,{0,0},0},
   {MML1_MIPI_END_PATTERN,0,0,0,{0,0},0},
   {MML1_MIPI_END_PATTERN,0,0,0,{0,0},0},
   {MML1_MIPI_END_PATTERN,0,0,0,{0,0},0},
};

