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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================*/
/* Doxygen Group Header ****************************************************//**
 * @addtogroup EL1D_RF_CUSTOM_DATA
 * @{
 ******************************************************************************/
/***************************************************************************//**
 * @file       el1d_rf_dpd_custom_data.h
 * @author     Wei-Shou Yang (MTK04495)
 * @date       2017.03.13
 * @brief      EL1D DPD header file
 * @details    Provide DPD data structure and define
 ******************************************************************************/

#ifndef __EL1D_RF_DPD_CUSTOM_DATA_H__
#define __EL1D_RF_DPD_CUSTOM_DATA_H__

/*******************************************************************************
*  Includes
*******************************************************************************/
#include "el1d_rf_custom_data.h"

/*******************************************************************************
*  Defines
*******************************************************************************/
/** Macro to cascade band and variables */

#define LTE_BAND_DPD_RAMP_DATA(bs,s)                   bs##_DPD_RampData_##s
#define LTE_DPD_RAMP_DATA_TEMP(bs,s)                   LTE_BAND_DPD_RAMP_DATA(bs,s)
#define LTE_DPD_RAMP_DATA(b,s)                         LTE_DPD_RAMP_DATA_TEMP(b##_##s,s)
#define LTE_DPD_RAMP_DATA_ROUTE(b,s)                   LTE_BAND_DPD_RAMP_DATA(b,s)   

#define LTE_BAND_DPD_PA_OCT_LEVEL_DATA(bs,s)           bs##_DPD_PaOctLevData_##s
#define LTE_DPD_PA_OCT_LEVEL_DATA_TEMP(bs,s)           LTE_BAND_DPD_PA_OCT_LEVEL_DATA(bs,s)
#define LTE_DPD_PA_OCT_LEVEL_DATA(b,s)                 LTE_DPD_PA_OCT_LEVEL_DATA_TEMP(b##_##s,s)
#define LTE_DPD_PA_OCT_LEVEL_DATA_ROUTE(b,s)           LTE_BAND_DPD_PA_OCT_LEVEL_DATA(b,s)

#define LTE_BAND_DPD_FAC_COMMON_DATA(bs,s)             bs##_DPD_FacCommonData_##s
#define LTE_DPD_FAC_COMMON_DATA_TEMP(bs,s)             LTE_BAND_DPD_FAC_COMMON_DATA(bs,s)
#define LTE_DPD_FAC_COMMON_DATA(b,s)                   LTE_DPD_FAC_COMMON_DATA_TEMP(b##_##s,s)               
#define LTE_DPD_FAC_COMMON_DATA_ROUTE(b,s)             LTE_BAND_DPD_FAC_COMMON_DATA(b,s)

#define LTE_BAND_CCA_DPD_FAC_COMMON_DATA(bs,s)         bs##_CCA_DPD_FacCommonData_##s
#define LTE_CCA_DPD_FAC_COMMON_DATA_TEMP(bs,s)         LTE_BAND_CCA_DPD_FAC_COMMON_DATA(bs,s)
#define LTE_CCA_DPD_FAC_COMMON_DATA(b,s)               LTE_CCA_DPD_FAC_COMMON_DATA_TEMP(b##_##s,s)
#define LTE_CCA_DPD_FAC_COMMON_DATA_ROUTE(b,s)         LTE_BAND_CCA_DPD_FAC_COMMON_DATA(b,s)

#define LTE_BAND_DPD_MIPI_PA_SECTION_DATA(bs,s)        bs##_MIPI_DPD_PA_SECTION_DATA_##s
#define LTE_MIPI_DPD_PA_SECTION_DATA_TEMP(bs,s)        LTE_BAND_DPD_MIPI_PA_SECTION_DATA(bs,s)
#define LTE_MIPI_DPD_PA_SECTION_DATA(b,s)              LTE_MIPI_DPD_PA_SECTION_DATA_TEMP(b##_##s,s)
#define LTE_MIPI_DPD_PA_SECTION_DATA_ROUTE(b,s)        LTE_BAND_DPD_MIPI_PA_SECTION_DATA(b,s)

#define LTE_BAND_DPD_MIPI_PA_CCA_SECTION_DATA(bs,s)    bs##_MIPI_DPD_PA_CCA_SECTION_DATA_##s
#define LTE_MIPI_DPD_PA_CCA_SECTION_DATA_TEMP(bs,s)    LTE_BAND_DPD_MIPI_PA_CCA_SECTION_DATA(bs,s)
#define LTE_MIPI_DPD_PA_CCA_SECTION_DATA(b,s)          LTE_MIPI_DPD_PA_CCA_SECTION_DATA_TEMP(b##_##s,s)
#define LTE_MIPI_DPD_PA_CCA_SECTION_DATA_ROUTE(b,s)    LTE_BAND_DPD_MIPI_PA_CCA_SECTION_DATA(b,s)

/* Filter mode */

#define LTE_BAND_FILTER_DPD_RAMP_DATA(bs,s)            bs##_FILTER_DPD_RampData_##s
#define LTE_FILTER_DPD_RAMP_DATA_TEMP(bs,s)            LTE_BAND_FILTER_DPD_RAMP_DATA(bs,s)
#define LTE_FILTER_DPD_RAMP_DATA(b,s)                  LTE_FILTER_DPD_RAMP_DATA_TEMP(b##_##s,s)

#define LTE_BAND_FILTER_DPD_PA_OCT_LEVEL_DATA(bs,s)    bs##_FILTER_DPD_PaOctLevData_##s
#define LTE_FILTER_DPD_PA_OCT_LEVEL_DATA_TEMP(bs,s)    LTE_BAND_FILTER_DPD_PA_OCT_LEVEL_DATA(bs,s)
#define LTE_FILTER_DPD_PA_OCT_LEVEL_DATA(b,s)          LTE_FILTER_DPD_PA_OCT_LEVEL_DATA_TEMP(b##_##s,s)

#define LTE_BAND_FILTER_DPD_FAC_COMMON_DATA(bs,s)      bs##_FILTER_DPD_FacCommonData_##s
#define LTE_FILTER_DPD_FAC_COMMON_DATA_TEMP(bs,s)      LTE_BAND_FILTER_DPD_FAC_COMMON_DATA(bs,s)
#define LTE_FILTER_DPD_FAC_COMMON_DATA(b,s)            LTE_FILTER_DPD_FAC_COMMON_DATA_TEMP(b##_##s,s)

#define LTE_BAND_FILTER_CCA_DPD_FAC_COMMON_DATA(bs,s)  bs##_FILTER_CCA_DPD_FacCommonData_##s
#define LTE_FILTER_CCA_DPD_FAC_COMMON_DATA_TEMP(bs,s)  LTE_BAND_FILTER_CCA_DPD_FAC_COMMON_DATA(bs,s)
#define LTE_FILTER_CCA_DPD_FAC_COMMON_DATA(b,s)        LTE_FILTER_CCA_DPD_FAC_COMMON_DATA_TEMP(b##_##s,s)

#define LTE_BAND_MIPI_FILTER_DPD_PA_SECTION_DATA(bs,s) bs##_MIPI_FILTER_DPD_PA_SECTION_DATA_##s
#define LTE_MIPI_FILTER_DPD_PA_SECTION_DATA_TEMP(bs,s) LTE_BAND_MIPI_FILTER_DPD_PA_SECTION_DATA(bs,s)
#define LTE_MIPI_FILTER_DPD_PA_SECTION_DATA(b,s)       LTE_MIPI_FILTER_DPD_PA_SECTION_DATA_TEMP(b##_##s,s)

#define LTE_BAND_MIPI_FILTER_DPD_PA_CCA_SECTION_DATA(bs,s) bs##_MIPI_FILTER_DPD_PA_CCA_SECTION_DATA_##s
#define LTE_MIPI_FILTER_DPD_PA_CCA_SECTION_DATA_TEMP(bs,s) LTE_BAND_MIPI_FILTER_DPD_PA_CCA_SECTION_DATA(bs,s)
#define LTE_MIPI_FILTER_DPD_PA_CCA_SECTION_DATA(b,s)       LTE_MIPI_FILTER_DPD_PA_CCA_SECTION_DATA_TEMP(b##_##s,s)

/***********************************************************
 * DPD define
 **********************************************************/
#define LTE_DPD_MAX_CBW_NUM                        (6) /* 6 LTE CBW: 1.4M, 3M, 5M, 10M, 15M, 20M */	  
#define LTE_DPD_MAX_PA_GAIN_NUM                    (8) /* 8-level PA dc2dc for DPD */
#define LTE_DPD_PGA_NUM_PER_PA                     (1)
#define LTE_DPD_AM_LUT_GAIN_NUM_USE                (LTE_DPD_MAX_PA_GAIN_NUM * LTE_DPD_PGA_NUM_PER_PA)	/* The real PA*PGA gain combination used by DPD */
#define LTE_DPD_PM_LUT_GAIN_NUM_USE                (LTE_DPD_AM_LUT_GAIN_NUM_USE) /* The gain combination of PM is equal to AM */
                                                                                                
/*******************************************************************************
 * Enum
 ******************************************************************************/
/* 8-level PA dc2dc for DPD calibration */
typedef enum
{
   DPD_PA_IDX0 = 0,
   DPD_PA_IDX1 = 1,
   DPD_PA_IDX2 = 2,
   DPD_PA_IDX3 = 3,
   DPD_PA_IDX4 = 4,
   DPD_PA_IDX5 = 5,
   DPD_PA_IDX6 = 6,
   DPD_PA_IDX7 = 7,
   DPD_PA_NULL = 8	   
} DPD_PA_IDX_E;
	
/* factory calibration 21 PGA-A idx */
typedef enum
{
   DPD_PGA_IDX0  = 0,
   DPD_PGA_IDX1  = 1,
   DPD_PGA_IDX2  = 2,
   DPD_PGA_IDX3  = 3,
   DPD_PGA_IDX4  = 4,
   DPD_PGA_IDX5  = 5,
   DPD_PGA_IDX6  = 6,
   DPD_PGA_IDX7  = 7,   
   DPD_PGA_IDX8  = 8,
   DPD_PGA_IDX9  = 9,
   DPD_PGA_IDX10 = 10,
   DPD_PGA_IDX11 = 11,
   DPD_PGA_IDX12 = 12,
   DPD_PGA_IDX13 = 13,
   DPD_PGA_IDX14 = 14,
   DPD_PGA_IDX15 = 15,
   DPD_PGA_IDX16 = 16,
   DPD_PGA_IDX17 = 17,
   DPD_PGA_IDX18 = 18,
   DPD_PGA_IDX19 = 19,
   DPD_PGA_IDX20 = 20,
   DPD_PGA_NULL  = 21
} DPD_PGA_IDX_E;

typedef struct
{
   DPD_PA_IDX_E   pa_idx;  
   DPD_PGA_IDX_E  pga_idx; 

} DPD_PA_PGA_IDX_T; 

typedef struct
{
      kal_int16 pa_gain;
      kal_int16 pow_pa_peak_dbm;   
      kal_int16 ptar_th_tmp;
      
}DPD_PA_TABLE;

/*******************************************************************************
 ** Global data for RF customization and META Factory Calibration
 *******************************************************************************/
#if __IS_EL1D_DPD_SUPPORT__
extern LTE_DPD_COMMON_CTRL_DEFAULT        LTE_DPD_FacCommonData_Table_SetDefault[LTE_MAX_TX_COMP_ROUTE_NUM];
extern LTE_DPD_COMMON_CTRL_DEFAULT        LTE_FILTER_DPD_FacCommonData_Table_SetDefault[LTE_FILTER_MAX_SUPPORT_BAND_NUM];
extern LTE_MIPI_TPC_SECTION_TABLE_DEFAULT LTE_MIPI_DPD_PA_TPC_SECTION_DATA_SetDefault[];
extern kal_uint32                         LTE_MIPI_DPD_PA_TPC_SECTION_DATA_SIZE_SetDefault[];
extern LTE_MIPI_TPC_SECTION_TABLE_DEFAULT LTE_MIPI_FILTER_DPD_PA_TPC_SECTION_DATA_SetDefault[];
extern kal_uint32                         LTE_MIPI_FILTER_DPD_PA_TPC_SECTION_DATA_SIZE_SetDefault[];

extern const LTE_MIPI_TPC_SECTION_TABLE_T LTE_BandNone_MIPI_DPD_PA_SECTION_DATA_SetDefault[];
extern const LTE_MIPI_TPC_SECTION_TABLE_T LTE_BandNone_MIPI_DPD_PA_CCA_SECTION_DATA_SetDefault[];
extern const LTE_MIPI_TPC_SECTION_TABLE_T LTE_BandNone_MIPI_FILTER_DPD_PA_SECTION_DATA_SetDefault[];
extern const LTE_MIPI_TPC_SECTION_TABLE_T LTE_BandNone_MIPI_FILTER_DPD_PA_CCA_SECTION_DATA_SetDefault[];


/*PCFE SA fine tune parameters*/
extern const LTE_PCFE_DPD_OTFC_CUSTOM_PARA_T     LTE_PCFE_DPD_OTFC_CUSTOM_PARA_SetDefault;
extern const LTE_PCFE_DPD_OTFC_CUSTOM_PARA_T*    p_LTE_PCFE_DPD_OTFC_CUSTOM_PARA_SetDefault;
extern LTE_PCFE_DPD_OTFC_NONCUSTOM_PARA_T  LTE_PCFE_DPD_OTFC_NONCUSTOM_PARA;
extern LTE_PCFE_DPD_OTFC_NONCUSTOM_PARA_T* p_LTE_PCFE_DPD_OTFC_NONCUSTOM_PARA;
extern const LTE_DPD_BYPASS_DPD_NS_INFO_T     LTE_DPD_BYPASS_DPD_NS_INFO_SetDefault[DPD_BYPASS_DPD_NS_INFO_MAX_TOTAL_NUM];
extern const LTE_DPD_BYPASS_DPD_NS_INFO_T*    p_LTE_DPD_BYPASS_DPD_NS_INFO_SetDefault;
#endif
extern kal_uint16 LTE_DPD_ENABLE;
#endif /*__EL1D_RF_CUSTOM_DATA_H__*/

