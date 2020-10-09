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
 * lte_custom_mipi_dpd.h
 *
 * Project:
 * --------
 * MT6290
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 *
 *
 *============================================================================*/

#ifndef  _LTE_DPD_CUSTOM_MIPI_Set1_H_
#define  _LTE_DPD_CUSTOM_MIPI_Set1_H_

/*===============================================================================*/
#include "kal_general_types.h"
#include "mml1_custom_mipi.h"
#include "el1d_rf_custom_data.h"
#include "el1d_rf_dpd_custom_data.h"

/*===============================================================================*/

//MIPI table for not-supported LTE band
#define  LTE_Band29_MIPI_DPD_PA_SECTION_DATA_Set1   LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1
#define  LTE_Band32_MIPI_DPD_PA_SECTION_DATA_Set1   LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1

#define  LTE_Band29_MIPI_DPD_PA_CCA_SECTION_DATA_Set1   LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1
#define  LTE_Band32_MIPI_DPD_PA_CCA_SECTION_DATA_Set1   LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_Set1

//Timing transformation
//#define US2OFFCNT(us)       ((us)*26)
//#define WAITUSCNT(us)       ((us)*52)


/////////////////////////

#endif /* End of #ifndef _LTE_DPD_CUSTOM_MIPI_Set1_H_ */
