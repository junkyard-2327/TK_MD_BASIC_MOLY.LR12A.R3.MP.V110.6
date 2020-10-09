/******************************************************************************
*  Modification Notice:
*  --------------------------
*  This software is modified by MediaTek Inc. and the information contained
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
*******************************************************************************/

/******************************************************************************
 *
 * Filename:
 * ---------
 *   mml1_tx_init.h
 *
 * Project:
 * --------
 *   MT6293 Project
 *
 * Description:
 * ------------
 *   Header file of mml1_tx_init.c
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 *******************************************************************************/
/* Doxygen Group Header *****************************************************//**  
 *
 * @file       mml1_tx_init.h
 * @brief      
 * @author     Cheng-Long Wu
 * @date       2017.06.02
 * @ingroup    MML1_TX_TXSYS_INIT
 * @{
 *//***************************************************************************/  
#ifndef __MML1_TX_TXSYS_INIT_H__
#define __MML1_TX_TXSYS_INIT_H__

/************************************************************************************
*  Includes
************************************************************************************/
#include "kal_general_types.h"
#include "kal_public_defs.h" 

/************************************************************************************
*  Defines
************************************************************************************/

/*****************************************************************************//**
*  @brief    4G LTE has two HW block in register map definition. 
*******************************************************************************/
#define MML1_TX_HW_LTE_NUM_OF_BLOCKS    (2)

/*****************************************************************************//**
*  @brief    TXSYS TXBRP has six SRAM group.
*******************************************************************************/
#define MML1_TX_SRAM_GROUP_NUM    (6)

/*****************************************************************************//**
*  @brief    TXSYS TXBRP fix SRAM group SW type pre-define pattern, 6'b01101. 
*******************************************************************************/
#define MML1_TX_TXBRP_SRAM_TYPE    (0x1B)

/************************************************************************************
*  Enums
************************************************************************************/

/************************************************************************************
*  Structures
************************************************************************************/

/************************************************************************************
*  Interface Prototypes
************************************************************************************/
void MML1_TXSYS_Init(void);
kal_uint32 MML1_TXSYS_Query_TXBRP_Reset_Ptr0();
kal_uint32 MML1_TXSYS_Query_TXBRP_Reset_Ptr1();
kal_uint32 MML1_TXSYS_Query_GLB_CON0_Ptr();
kal_uint32* MML1_TXSYS_Query_Access_Bitmap_Ptr();
kal_uint8* MML1_TXSYS_Query_SRAM_Group_SW_Type_Bitmap_Ptr();

#endif /*__MML1_TX_TXSYS_INIT_H__*/

/* Doxygene end of defgroup header!!! **********************************//**@}*/
