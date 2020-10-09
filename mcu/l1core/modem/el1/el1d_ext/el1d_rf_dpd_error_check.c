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
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 * el1d_rf_dpd_error_check.c
 *
 * Project:
 * --------
 * MT6293
 *
 * Description:
 * ------------
 * Error check assert function
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *----------------------------------------------------------------------------
 *
 *
 *
 *
 *
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================*/
/* Doxygen Group Header ****************************************************//**
 * @addtogroup
 * @{
 ******************************************************************************/
/***************************************************************************//**
 * @file       el1d_rf_dpd_error_check.c
 * @author     Chunyen Wu (MTK04496)
 * @date       2015.05.19
 * @brief      Error check function
 * @details
 ******************************************************************************/

/*******************************************************************************
 * #include
 ******************************************************************************/
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "el1d_rf_dpd_error_check.h"

/*******************************************************************************
 * Global Functions declaration (interface)
 ******************************************************************************/
//[NOTE] Please add the new check from the end of this file!!!
//       => In order to keep the assert line number unchanged
/*===============================================================================*/


/*******************************************************************************
 * #define
 ******************************************************************************/

/*******************************************************************************
 * typedef
 ******************************************************************************/

/*******************************************************************************
 * Constant
 ******************************************************************************/

/*******************************************************************************
 * Global Variables
 ******************************************************************************/


/*******************************************************************************
 * Local Variables
 * Static variables declaration
 ******************************************************************************/

/*******************************************************************************
 * Local Functions
 * Static Functions Prototype
 ******************************************************************************/
void EL1D_DPD_ErrorCheck_Subband_MipiTpcSectionData(kal_uint8 mipi_trx_config1, kal_uint8 mipi_trx_config2, kal_uint16 band)
{
   kal_bool Subband_MipiTpcSectionData = KAL_FALSE;
   EXT_ASSERT(Subband_MipiTpcSectionData, mipi_trx_config1, mipi_trx_config2, band);
}

void EL1D_DPD_ErrorCheck_SubFreq_Lower_Bound(kal_uint16 mipi_trx_config, kal_uint16 Band_indicator, kal_uint16 sub_freq)
{
   kal_bool SubFreq_Lower_Bound = KAL_FALSE;
   EXT_ASSERT(SubFreq_Lower_Bound,mipi_trx_config, Band_indicator, sub_freq);
}

void EL1D_DPD_ErrorCheck_SubFreq_Upper_Bound(kal_uint16 mipi_trx_config, kal_uint16 Band_indicator, kal_uint16 sub_freq)
{
   kal_bool SubFreq_Upper_Bound = KAL_FALSE;
   EXT_ASSERT(SubFreq_Upper_Bound,mipi_trx_config, Band_indicator, sub_freq);
}
/*******************************************************************************
 * Static Functions declaration
 ******************************************************************************/




/* Doxygen Group End ***************************************************//**@}*/
