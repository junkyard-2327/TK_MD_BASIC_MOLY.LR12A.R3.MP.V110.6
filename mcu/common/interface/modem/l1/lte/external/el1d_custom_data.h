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

/*==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================*/
/* Doxygen Group Header ****************************************************//**
 * @addtogroup EL1D_CUSTOM_DATA
 * @{
 ******************************************************************************/
/***************************************************************************//**
 * @file       el1d_custom_data.h
 * @author     JiaHong Shiu (MTK06073)
 * @date       2015.10.21
 * @brief      EL1D data header file
 * @details    Provide EL1D common custom data structure
 ******************************************************************************/

#ifndef __EL1D_CUSTOM_DATA_H__
#define __EL1D_CUSTOM_DATA_H__

/*******************************************************************************
 * #include
 ******************************************************************************/
#include "kal_general_types.h"


/*******************************************************************************
 * #define
 ******************************************************************************/


/*******************************************************************************
 * Typedef struct
 ******************************************************************************/

/** EL1D TX Feature structure */
typedef struct
{
   kal_uint32 tx_feature_0;
   kal_uint32 tx_feature_1;
} LTE_EL1D_TX_FEATURE_T;

/** EL1D RX Feature structure */
/** 
 * @brief   See @ref LTE_EL1D_RX_FEATURE_T
 * @details ntf_dsp:
 *          BIT2 ~BIT31: Reserved.
 *          BIT1 ~BIT1 : Inform BRP about CR2CQI mapping table. TRUE: use GCF table. FALSE: use CMCC table for TM8(implement in BRP)
 *          BIT0 ~BIT0 : Indicate that bit1 is valid ot not
 * @date    2017.01.05
 */
typedef struct
{
   kal_uint32 lp_turn_off;
   kal_uint32 nbif_off_bmp;
   kal_uint32 ntf_dsp;
   kal_uint32 icsp_turn_off;
   kal_uint32 force_tb_mimo_mode;
} LTE_EL1D_RX_FEATURE_T;

/** EL1D CS Feature structure */
typedef struct
{
   kal_uint32 cs_feature_0;
   kal_uint32 cs_feature_1;
} LTE_EL1D_CS_FEATURE_T;

/** EL1D CM Feature structure */
typedef struct
{
   kal_uint32 cm_feature_0;
   kal_uint32 cm_feature_1;
} LTE_EL1D_CM_FEATURE_T;

/** EL1D Common Feature structure */
typedef struct
{
   kal_uint32 common_feature_0_lock_sleep;
   kal_uint32 common_feature_1_force_on_cg_sram;
   kal_uint32 common_feature_2;
   kal_uint32 common_feature_3;
   kal_uint32 common_feature_4;
   kal_uint32 common_feature_5;
   kal_uint32 common_feature_6;
   kal_uint32 common_feature_7;
} LTE_EL1D_COMMON_FEATURE_T;

/** EL1D Feature structure */
typedef struct
{
   LTE_EL1D_TX_FEATURE_T      el1d_tx;
   LTE_EL1D_RX_FEATURE_T      el1d_rx; 
   LTE_EL1D_CS_FEATURE_T      el1d_cs;
   LTE_EL1D_CM_FEATURE_T      el1d_cm;
   LTE_EL1D_COMMON_FEATURE_T  el1d_common;
} LTE_EL1D_FEATURE_NVRAM_T;


/*******************************************************************************
 * Constant
 ******************************************************************************/


/*******************************************************************************
 * Global variables (Extern)
 ******************************************************************************/


/*******************************************************************************
 * Global Functions Prototype (Interface)
 ******************************************************************************/


#endif /*__EL1D_CUSTOM_DATA_H__*/

/* Doxygen Group End ***************************************************//**@}*/
