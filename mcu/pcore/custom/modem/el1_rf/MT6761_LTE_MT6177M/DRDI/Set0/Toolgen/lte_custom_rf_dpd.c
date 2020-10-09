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

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   lte_custom_rf_dpd.c
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   MT6177M FDD/TDD DPD
 *
 * Author:
 * -------
 * -------
 *
 *   Tool Version : LTE Parsing Tool Gen93_v0.7_180223
 *   Excel Version : Gen93_6177M_1806_v1.1
 *
 *******************************************************************************/


/* ------------------------------------------------------------------------- */

#include "kal_public_api.h"
#include "lte_custom_rf.h"
#include "lte_custom_rf_dpd.h"
#include "el1d_rf_custom_data.h"
#include "el1d_rf_dpd_custom_data.h"
#include "lte_custom_drdi.h"
const LTE_DPD_COMMON_CTRL_T LTE_BandNone_DPD_FacCommonData_Set0 = 
{
   /*DPD Normal Mode enable Flag*/
   DPD_DISABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};

const LTE_DPD_COMMON_CTRL_T LTE_BandNone_CCA_DPD_FacCommonData_Set0 = 
{
   /*DPD Normal Mode enable Flag*/
   DPD_DISABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};

const LTE_DPD_COMMON_CTRL_T LTE_BandNone_FILTER_DPD_FacCommonData_Set0 = 
{
   /*DPD Normal Mode enable Flag*/
   DPD_DISABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};

const LTE_DPD_COMMON_CTRL_T LTE_BandNone_FILTER_CCA_DPD_FacCommonData_Set0 = 
{
   /*DPD Normal Mode enable Flag*/
   DPD_DISABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};





/* ------------------------------------------------------------------------- */


/* LTE_Band1..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band1_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band2..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band2_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band3..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band3_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band5..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band5_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band7..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band7_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band8..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band8_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band25..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band25_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band26..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band26_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band28..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band28_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band34..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band34_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band38..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band38_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band39..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band39_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band40..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band40_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band41..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band41_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route25..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route25_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route26..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route26_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route27..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route27_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route28..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route28_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route29..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route29_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route30..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route30_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route31..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route31_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route32..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route32_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route33..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route33_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route34..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route34_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route35..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route35_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route36..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route36_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route37..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route37_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route38..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route38_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band1..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band1_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band2..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band2_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band3..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band3_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band5..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band5_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band7..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band7_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band8..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band8_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band25..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band25_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band26..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band26_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band28..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band28_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band34..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band34_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band38..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band38_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band39..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band39_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band40..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band40_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Band41..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Band41_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route25..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route25_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route26..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route26_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route27..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route27_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route28..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route28_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route29..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route29_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route30..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route30_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route31..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route31_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route32..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route32_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route33..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route33_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route34..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route34_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route35..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route35_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route36..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route36_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route37..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route37_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


/* LTE_Route38..............................................................*/
const LTE_DPD_COMMON_CTRL_T LTE_Route38_CCA_DPD_FacCommonData_Set0 =
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE,
   /* DPD power backoff, value from custom file */
   {
      {0,0},{0,0},{0,0},{0,0},{0,0},{0,0}
   },
   /* The delta term add to tab_PA_Vcc_idx_th, value from custom file */
   {0,0,0,0,0,0},
};


#if IS_LTE_DPD_ENABLE_Set0

LTE_DPD_COMMON_CTRL_DEFAULT  LTE_DPD_FacCommonData_Table_Set0[LTE_MAX_TX_COMP_ROUTE_NUM] =
{
   {&LTE_DPD_FAC_COMMON_DATA(BAND_INDICATOR0 ,        Set0), &LTE_CCA_DPD_FAC_COMMON_DATA(BAND_INDICATOR0 ,        Set0), BAND_INDICATOR0_CCA_Support_Set0},
   {&LTE_DPD_FAC_COMMON_DATA(BAND_INDICATOR1 ,        Set0), &LTE_CCA_DPD_FAC_COMMON_DATA(BAND_INDICATOR1 ,        Set0), BAND_INDICATOR1_CCA_Support_Set0},
   {&LTE_DPD_FAC_COMMON_DATA(BAND_INDICATOR2 ,        Set0), &LTE_CCA_DPD_FAC_COMMON_DATA(BAND_INDICATOR2 ,        Set0), BAND_INDICATOR2_CCA_Support_Set0},
   {&LTE_DPD_FAC_COMMON_DATA(BAND_INDICATOR3 ,        Set0), &LTE_CCA_DPD_FAC_COMMON_DATA(BAND_INDICATOR3 ,        Set0), BAND_INDICATOR3_CCA_Support_Set0},
   {&LTE_DPD_FAC_COMMON_DATA(BAND_INDICATOR4 ,        Set0), &LTE_CCA_DPD_FAC_COMMON_DATA(BAND_INDICATOR4 ,        Set0), BAND_INDICATOR4_CCA_Support_Set0},
   {&LTE_DPD_FAC_COMMON_DATA(BAND_INDICATOR5 ,        Set0), &LTE_CCA_DPD_FAC_COMMON_DATA(BAND_INDICATOR5 ,        Set0), BAND_INDICATOR5_CCA_Support_Set0},
   {&LTE_DPD_FAC_COMMON_DATA(BAND_INDICATOR6 ,        Set0), &LTE_CCA_DPD_FAC_COMMON_DATA(BAND_INDICATOR6 ,        Set0), BAND_INDICATOR6_CCA_Support_Set0},
   {&LTE_DPD_FAC_COMMON_DATA(BAND_INDICATOR7 ,        Set0), &LTE_CCA_DPD_FAC_COMMON_DATA(BAND_INDICATOR7 ,        Set0), BAND_INDICATOR7_CCA_Support_Set0},
   {&LTE_DPD_FAC_COMMON_DATA(BAND_INDICATOR8 ,        Set0), &LTE_CCA_DPD_FAC_COMMON_DATA(BAND_INDICATOR8 ,        Set0), BAND_INDICATOR8_CCA_Support_Set0},
   {&LTE_DPD_FAC_COMMON_DATA(BAND_INDICATOR9 ,        Set0), &LTE_CCA_DPD_FAC_COMMON_DATA(BAND_INDICATOR9 ,        Set0), BAND_INDICATOR9_CCA_Support_Set0},
   {&LTE_DPD_FAC_COMMON_DATA(BAND_INDICATOR10,        Set0), &LTE_CCA_DPD_FAC_COMMON_DATA(BAND_INDICATOR10,        Set0), BAND_INDICATOR10_CCA_Support_Set0},
   {&LTE_DPD_FAC_COMMON_DATA(BAND_INDICATOR11,        Set0), &LTE_CCA_DPD_FAC_COMMON_DATA(BAND_INDICATOR11,        Set0), BAND_INDICATOR11_CCA_Support_Set0},
   {&LTE_DPD_FAC_COMMON_DATA(BAND_INDICATOR12,        Set0), &LTE_CCA_DPD_FAC_COMMON_DATA(BAND_INDICATOR12,        Set0), BAND_INDICATOR12_CCA_Support_Set0},
   {&LTE_DPD_FAC_COMMON_DATA(BAND_INDICATOR13,        Set0), &LTE_CCA_DPD_FAC_COMMON_DATA(BAND_INDICATOR13,        Set0), BAND_INDICATOR13_CCA_Support_Set0},
   {&LTE_DPD_FAC_COMMON_DATA(BAND_INDICATOR14,        Set0), &LTE_CCA_DPD_FAC_COMMON_DATA(BAND_INDICATOR14,        Set0), BAND_INDICATOR14_CCA_Support_Set0},
   {&LTE_DPD_FAC_COMMON_DATA(BAND_INDICATOR15,        Set0), &LTE_CCA_DPD_FAC_COMMON_DATA(BAND_INDICATOR15,        Set0), BAND_INDICATOR15_CCA_Support_Set0},
   {&LTE_DPD_FAC_COMMON_DATA(BAND_INDICATOR16,        Set0), &LTE_CCA_DPD_FAC_COMMON_DATA(BAND_INDICATOR16,        Set0), BAND_INDICATOR16_CCA_Support_Set0},
   {&LTE_DPD_FAC_COMMON_DATA(BAND_INDICATOR17,        Set0), &LTE_CCA_DPD_FAC_COMMON_DATA(BAND_INDICATOR17,        Set0), BAND_INDICATOR17_CCA_Support_Set0},
   {&LTE_DPD_FAC_COMMON_DATA(BAND_INDICATOR18,        Set0), &LTE_CCA_DPD_FAC_COMMON_DATA(BAND_INDICATOR18,        Set0), BAND_INDICATOR18_CCA_Support_Set0},
   {&LTE_DPD_FAC_COMMON_DATA(BAND_INDICATOR19,        Set0), &LTE_CCA_DPD_FAC_COMMON_DATA(BAND_INDICATOR19,        Set0), BAND_INDICATOR19_CCA_Support_Set0},
   {&LTE_DPD_FAC_COMMON_DATA(BAND_INDICATOR20,        Set0), &LTE_CCA_DPD_FAC_COMMON_DATA(BAND_INDICATOR20,        Set0), BAND_INDICATOR20_CCA_Support_Set0},
   {&LTE_DPD_FAC_COMMON_DATA(BAND_INDICATOR21,        Set0), &LTE_CCA_DPD_FAC_COMMON_DATA(BAND_INDICATOR21,        Set0), BAND_INDICATOR21_CCA_Support_Set0},
   {&LTE_DPD_FAC_COMMON_DATA(BAND_INDICATOR22,        Set0), &LTE_CCA_DPD_FAC_COMMON_DATA(BAND_INDICATOR22,        Set0), BAND_INDICATOR22_CCA_Support_Set0},
   {&LTE_DPD_FAC_COMMON_DATA(BAND_INDICATOR23,        Set0), &LTE_CCA_DPD_FAC_COMMON_DATA(BAND_INDICATOR23,        Set0), BAND_INDICATOR23_CCA_Support_Set0},
   {&LTE_DPD_FAC_COMMON_DATA(BAND_INDICATOR24,        Set0), &LTE_CCA_DPD_FAC_COMMON_DATA(BAND_INDICATOR24,        Set0), BAND_INDICATOR24_CCA_Support_Set0},
   {&LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route25 ,        Set0), &LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route25 ,        Set0), NO_CCA_SUPPORT},
   {&LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route26 ,        Set0), &LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route26 ,        Set0), NO_CCA_SUPPORT},
   {&LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route27 ,        Set0), &LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route27 ,        Set0), NO_CCA_SUPPORT},
   {&LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route28 ,        Set0), &LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route28 ,        Set0), NO_CCA_SUPPORT},
   {&LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route29 ,        Set0), &LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route29 ,        Set0), NO_CCA_SUPPORT},
   {&LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route30 ,        Set0), &LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route30 ,        Set0), NO_CCA_SUPPORT},
   {&LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route31 ,        Set0), &LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route31 ,        Set0), NO_CCA_SUPPORT},
   {&LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route32 ,        Set0), &LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route32 ,        Set0), NO_CCA_SUPPORT},
   {&LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route33 ,        Set0), &LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route33 ,        Set0), NO_CCA_SUPPORT},
   {&LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route34 ,        Set0), &LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route34 ,        Set0), NO_CCA_SUPPORT},
   {&LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route35 ,        Set0), &LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route35 ,        Set0), NO_CCA_SUPPORT},
   {&LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route36 ,        Set0), &LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route36 ,        Set0), NO_CCA_SUPPORT},
   {&LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route37 ,        Set0), &LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route37 ,        Set0), NO_CCA_SUPPORT},
   {&LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route38 ,        Set0), &LTE_DPD_FAC_COMMON_DATA_ROUTE(LTE_Route38 ,        Set0), NO_CCA_SUPPORT},
};

LTE_DPD_COMMON_CTRL_DEFAULT  LTE_FILTER_DPD_FacCommonData_Table_Set0[LTE_FILTER_MAX_SUPPORT_BAND_NUM] =
{
   {&LTE_FILTER_DPD_FAC_COMMON_DATA(BAND_FILTER_INDICATOR0 ,        Set0), &LTE_FILTER_CCA_DPD_FAC_COMMON_DATA(BAND_FILTER_INDICATOR0 ,        Set0), BAND_FILTER_INDICATOR0_CCA_Support_Set0},
   {&LTE_FILTER_DPD_FAC_COMMON_DATA(BAND_FILTER_INDICATOR1 ,        Set0), &LTE_FILTER_CCA_DPD_FAC_COMMON_DATA(BAND_FILTER_INDICATOR1 ,        Set0), BAND_FILTER_INDICATOR1_CCA_Support_Set0},
   {&LTE_FILTER_DPD_FAC_COMMON_DATA(BAND_FILTER_INDICATOR2 ,        Set0), &LTE_FILTER_CCA_DPD_FAC_COMMON_DATA(BAND_FILTER_INDICATOR2 ,        Set0), BAND_FILTER_INDICATOR2_CCA_Support_Set0},
   {&LTE_FILTER_DPD_FAC_COMMON_DATA(BAND_FILTER_INDICATOR3 ,        Set0), &LTE_FILTER_CCA_DPD_FAC_COMMON_DATA(BAND_FILTER_INDICATOR3 ,        Set0), BAND_FILTER_INDICATOR3_CCA_Support_Set0},
   {&LTE_FILTER_DPD_FAC_COMMON_DATA(BAND_FILTER_INDICATOR4 ,        Set0), &LTE_FILTER_CCA_DPD_FAC_COMMON_DATA(BAND_FILTER_INDICATOR4 ,        Set0), BAND_FILTER_INDICATOR4_CCA_Support_Set0},
};

#else

LTE_DPD_COMMON_CTRL_DEFAULT  LTE_DPD_FacCommonData_Table_Set0[LTE_MAX_TX_COMP_ROUTE_NUM] =
{
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
};

LTE_DPD_COMMON_CTRL_DEFAULT  LTE_FILTER_DPD_FacCommonData_Table_Set0[LTE_FILTER_MAX_SUPPORT_BAND_NUM] =
{
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
   {&LTE_BandNone_DPD_FacCommonData_Set0, &LTE_BandNone_DPD_FacCommonData_Set0, NO_CCA_SUPPORT},
};

#endif
const LTE_PCFE_DPD_OTFC_CUSTOM_PARA_T LTE_PCFE_DPD_OTFC_CUSTOM_PARA_Set0 =
{
   0x0A00,
   0x0B00,
   0x02,
   {
       0x41,0xF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF
   },
   {
       0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF,0xFFFFFFFF
   },
};


const LTE_PCFE_DPD_OTFC_CUSTOM_PARA_T* p_LTE_PCFE_DPD_OTFC_CUSTOM_PARA_Set0 =
{
   &LTE_PCFE_DPD_OTFC_CUSTOM_PARA_Set0,
};


const LTE_DPD_BYPASS_DPD_NS_INFO_T LTE_DPD_BYPASS_DPD_NS_INFO_Set0[DPD_BYPASS_DPD_NS_INFO_MAX_TOTAL_NUM] =
{
	 /*lte_lu_band*/   /*ns_number_bypass_dpd*/	/*bandwidth_bmp_bypass_dpd, bit0:1.4M,  bit1:3M, bit2:5M, bit3:10M, bit4:15M, bit5 :20M, bit6 : CA-NS*/
	 {   LTE_Band1,                          5,    0x7F}, // set 0
	 {LTE_BandNone,                          0,       0}, // set 1
	 {LTE_BandNone,                          0,       0}, // set 2
	 {LTE_BandNone,                          0,       0}, // set 3
	 {LTE_BandNone,                          0,       0}, // set 4
	 {LTE_BandNone,                          0,       0}, // set 5
	 {LTE_BandNone,                          0,       0}, // set 6
	 {LTE_BandNone,                          0,       0}, // set 7
	 {LTE_BandNone,                          0,       0}, // set 8
	 {LTE_BandNone,                          0,       0}, // set 9
	 {LTE_BandNone,                          0,       0}, // set 10
	 {LTE_BandNone,                          0,       0}, // set 11
	 {LTE_BandNone,                          0,       0}, // set 12
	 {LTE_BandNone,                          0,       0}, // set 13
	 {LTE_BandNone,                          0,       0}, // set 14
	 {LTE_BandNone,                          0,       0}, // set 15
	 {LTE_BandNone,                          0,       0}, // set 16
	 {LTE_BandNone,                          0,       0}, // set 17
	 {LTE_BandNone,                          0,       0}, // set 18
	 {LTE_BandNone,                          0,       0}, // set 19
	 {LTE_BandNone,                          0,       0}, // set 20
	 {LTE_BandNone,                          0,       0}, // set 21
	 {LTE_BandNone,                          0,       0}, // set 22
	 {LTE_BandNone,                          0,       0}, // set 23
	 {LTE_BandNone,                          0,       0}, // set 24
	 {LTE_BandNone,                          0,       0}, // set 25
	 {LTE_BandNone,                          0,       0}, // set 26
	 {LTE_BandNone,                          0,       0}, // set 27
	 {LTE_BandNone,                          0,       0}, // set 28
	 {LTE_BandNone,                          0,       0}, // set 29
	 {LTE_BandNone,                          0,       0}, // set 30
	 {LTE_BandNone,                          0,       0}, // set 31
	 {LTE_BandNone,                          0,       0}, // set 32
	 {LTE_BandNone,                          0,       0}, // set 33
	 {LTE_BandNone,                          0,       0}, // set 34
	 {LTE_BandNone,                          0,       0}, // set 35
	 {LTE_BandNone,                          0,       0}, // set 36
	 {LTE_BandNone,                          0,       0}, // set 37
	 {LTE_BandNone,                          0,       0}, // set 38
	 {LTE_BandNone,                          0,       0}, // set 39
	 {LTE_BandNone,                          0,       0}, // set 40
	 {LTE_BandNone,                          0,       0}, // set 41
	 {LTE_BandNone,                          0,       0}, // set 42
	 {LTE_BandNone,                          0,       0}, // set 43
	 {LTE_BandNone,                          0,       0}, // set 44
	 {LTE_BandNone,                          0,       0}, // set 45
	 {LTE_BandNone,                          0,       0}, // set 46
	 {LTE_BandNone,                          0,       0}, // set 47
	 {LTE_BandNone,                          0,       0}, // set 48
	 {LTE_BandNone,                          0,       0}, // set 49
};


const LTE_DPD_BYPASS_DPD_NS_INFO_T* p_LTE_DPD_BYPASS_DPD_NS_INFO_Set0 =
{
	&LTE_DPD_BYPASS_DPD_NS_INFO_Set0[0],
};












