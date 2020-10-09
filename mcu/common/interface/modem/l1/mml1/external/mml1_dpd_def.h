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

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   mml1_dpd_def.h
 *
 * Project:
 * --------
 *   Elbrus
 *
 * Description:
 * ------------
 *   For the DPD common definition
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
*******************************************************************************/

#ifndef __MML1_DPD_DEF_H__
#define __MML1_DPD_DEF_H__

/*******************************************************************************
*  Includes
*******************************************************************************/
#include "kal_general_types.h"

/*******************************************************************************
*  Prototypes
*******************************************************************************/
void EL1D_DPD_Stop_DPD_OTFC_At_NSFT_Entry(void);
void EL1D_DPD_Enable_DPD_OTFC_After_NSFT(void);

/*******************************************************************************
*  Defines
*******************************************************************************/
#define   __IS_MML1_DPD_SUPPORT__                (1)  /* For multi-RAT DPD compile option */
#define   __IS_3G_DPD_TPC_NORMAL_TEST_MODE__     (0)  /* 3G normal mode target verification */
#define   __IS_3G_DPD_NORMAL_MODE_DBG_TRACE_EN__  (0)  /* 3G normal mode target verification */
#define   __IS_3G_DPD_TPC_DBG_TRACE_EN__          (0)  /* 3G normal mode target verification */
#define   __IS__BYPASS_LDPD_AT_HIGH_LOW_TEMPERATURE__ (1)
#define   __IS__BYPASS_WDPD_AT_HIGH_LOW_TEMPERATURE__ (0)  


#if __IS_MML1_DPD_SUPPORT__ 
   #ifdef      __MEM_SLIM_TF__
      #define __IS_EL1D_DPD_SUPPORT__          (0)  /* For LTE DPD compile option */  
   #else
      #define __IS_EL1D_DPD_SUPPORT__          (1)  /* For LTE DPD compile option */  
   #endif
   #define __IS_UL1D_DPD_SUPPORT__          (1)  /* For WCDMA DPD compile option */
   #define __IS_MML1_DPD_SA_FINE_TUNE__     (0)
#ifdef __MTK_TARGET__ 
   #define __IS_CL1TST_DPD_SUPPORT__ 		(1)  /* For C2K L1 DPD compile option */
#else
   #define __IS_CL1TST_DPD_SUPPORT__ 		(0)  /* For C2K L1 DPD compile option */
#endif
#else
   #define __IS_EL1D_DPD_SUPPORT__          (0)    
   #define __IS_UL1D_DPD_SUPPORT__          (0)
   #define __IS_MML1_DPD_SA_FINE_TUNE__     (0)   
   #define __IS_CL1TST_DPD_SUPPORT__ 		(0)  /* For C2K L1 DPD compile option */	 
#endif

#if __IS_EL1D_DPD_SUPPORT__
   #define __IS_EL1D_DPD_FAC_DBG_TRACE_EN__      (0)          
#endif

#if __IS_UL1D_DPD_SUPPORT__
   #define __IS_UL1D_DPD_FINE_TUNE__             (0)
   #define __IS_UL1D_DPD_FAC_DBG_TRACE_EN__      (0)
#endif                                           
                                                 
#define MMDPD_MAX_GAIN_INDEX_NUM               (8)
#define MMDPD_MAX_AM_LUT_PWR_NUM               (16)
#define MMDPD_MAX_AM_LUT_HW_REG_NUM            (16)
#define MMDPD_MAX_LUT_ENTRY_NUM                (16)
#define MMDPD_MAX_LUT_HW_REG_NUM               (16)
#define MMDPD_MAX_REG_NUM_PER_LUT              (4)

#define MMDPD_OTFC_MAX_AM_LUT_PWR_NUM          (16) /* DPD OTFC power level */
#define MMDPD_OTFC_MAX_AM_LUT_CR_NUM           (MMDPD_OTFC_MAX_AM_LUT_PWR_NUM >> 2)

#define MMDPD_MAX_PM_LUT_PWR_NUM               (MMDPD_MAX_AM_LUT_PWR_NUM)
#define MMDPD_MAX_PM_LUT_HW_REG_NUM            (MMDPD_MAX_AM_LUT_HW_REG_NUM)
#define MMDPD_OTFC_MAX_PM_LUT_PWR_NUM          (MMDPD_OTFC_MAX_AM_LUT_PWR_NUM) /* Align AM */
#define MMDPD_OTFC_MAX_PM_LUT_CR_NUM           (MMDPD_OTFC_MAX_AM_LUT_PWR_NUM >> 2)

#define PGA_TYPE_MAX_NUM                       (2)    /* PGA has two type (type A and type B for Orion+) */
#define PGA_SLICE_MAX_NUM                      (8)    /* PGA has at most 8 slice for Orion+ */
#define DPD_FAC_INT16_MIN_VALUE                (-32768)


/** Defines for 4G LTE **/
#if defined(__LTE_L1SIM__) && __IS_EL1D_DPD_SUPPORT__
#define __DPD_XL1SIM_MIPI_TPC_COMPARE_APT_MODE_TEST__  (0)
#define __IS_DPD_TPC_PA_VCC_IDX_TH_READY__             (1)
#else
#define __DPD_XL1SIM_MIPI_TPC_COMPARE_APT_MODE_TEST__  (0) // should be 0 when share memory ready
#define __IS_DPD_TPC_PA_VCC_IDX_TH_READY__             (1)
#endif
/*Temp compile option*/
#define __IS_EL1D_DPD_TPC_DECIDE_SHUBBANDIDX_AND_SHM_ADD_FOR_OTFC__ (0)
#define __IS_4G_PCFE_SA_TUNE_PARA_SUPPORT__            (1)

#if __DPD_XL1SIM_MIPI_TPC_COMPARE_APT_MODE_TEST__ 
#define LTE_MIPI_DPD_PA_TPC_SECTION_DATA_SetDefault  LTE_MIPI_PA_TPC_SECTION_DATA_SetDefault
#define LTE_MIPI_DPD_PA_TPC_SECTION_DATA_SIZE_SetDefault LTE_MIPI_PA_TPC_SECTION_DATA_SIZE_SetDefault
#define LTE_MIPI_FILTER_DPD_PA_TPC_SECTION_DATA_SetDefault LTE_MIPI_FILTER_PA_TPC_SECTION_DATA_SetDefault
#define LTE_MIPI_FILTER_DPD_PA_TPC_SECTION_DATA_SIZE_SetDefault  LTE_MIPI_FILTER_PA_TPC_SECTION_DATA_SIZE_SetDefault
#endif

/*MT6293 DPD OTFC*/
#define AM_LUT_VALUE_LSB                        (6)
#define AM_DEFAULT_VALUE                        ( ((((UINT32)(1 << AM_LUT_VALUE_LSB)) << DPD_AM_LUT_E3_LUT0_LSB)  & DPD_AM_LUT_E3_LUT0_MASK)|((((UINT32)(1 << AM_LUT_VALUE_LSB)) << DPD_AM_LUT_E2_LUT0_LSB) & DPD_AM_LUT_E2_LUT0_MASK)|((((UINT32)(1 << AM_LUT_VALUE_LSB)) << DPD_AM_LUT_E1_LUT0_LSB) & DPD_AM_LUT_E1_LUT0_MASK)|((((UINT32)(1 << AM_LUT_VALUE_LSB)) << DPD_AM_LUT_E0_LUT0_LSB) & DPD_AM_LUT_E0_LUT0_MASK) )
#define PM_DEFAULT_VALUE                        (0)
#define MAX_DPD_WAIT_FEC_RESULT_SF_CNT          (1024)
#define DPD_AM_LUT_UPDATE_CHECK_PATTERN         (0xF0F0F0FF)
#define DPD_PM_LUT_UPDATE_CHECK_PATTERN         (0x7070707F)
#define DPD_OTFC_WR_BUF_READY                   (0x00000001)
#define DPD_TR_INVALID                          (0x7FFF)

/*MT6293 CUIF*/
#define DPD_OTFC_ALIGN_FIRST_LSB                (0)
#define DPD_OTFC_ALIGN_SECOND_LSB               (8)
#define DPD_OTFC_ALIGN_THIRD_LSB                (16)
#define DPD_OTFC_ALIGN_FOURTH_LSB               (24)
#define DPD_OTFC_FIRST_REGION_MASK              (0x000000FF)
#define DPD_OTFC_SECOND_REGION_MASK             (0x0000FF00)
#define DPD_OTFC_THIRD_REGION_MASK              (0x00FF0000)
#define DPD_OTFC_FOURTH_REGION_MASK             (0xFF000000)

/*******************************************************************************
*  Redefine assert and warning for DPD usage.
    User must also inculde other header file (ex : ltool.h)  for the original assert/warning macro
*******************************************************************************/
/* 3G*/
#define UL1D_ASSERT_DPD_ERR              UL1D_ASSERT       
#define UL1D_EXT_ASSERT_DPD_ERR          UL1D_EXT_ASSERT   
#define ASSERT_bypass_DPD_ERR            ASSERT_reboot     
#define ASSERT_recover_DPD_ERR           ASSERT_reboot    
#define ASSERT_reboot_DPD_ERR            ASSERT_reboot     
#define EXT_ASSERT_bypass_DPD_ERR        EXT_ASSERT_reboot 
#define EXT_ASSERT_recover_DPD_ERR       EXT_ASSERT_reboot
#define EXT_ASSERT_reboot_DPD_ERR        EXT_ASSERT_reboot 

/* 4G L1Core*/  
#define EL1D_WARNING_DPD_ERR             EL1D_WARNING
#define EL1D_ASSERT_DPD_ERR              EL1D_ASSERT
#define EL1D_ASSERT1_DPD_ERR             EL1D_ASSERT1
#define EL1D_ASSERT2_DPD_ERR             EL1D_ASSERT2
#define EL1D_ASSERT3_DPD_ERR             EL1D_ASSERT3

/* 4G Pcore and common*/                
#define EXT_ASSERT3_DPD_ERR              EXT_ASSERT3   
#define EXT_ASSERT2_DPD_ERR              EXT_ASSERT2
#define EXT_ASSERT1_DPD_ERR              EXT_ASSERT1
#define EXT_ASSERT_DPD_ERR               EXT_ASSERT  

/*******************************************************************************
*  Macro
*******************************************************************************/

/*******************************************************************************
*  Enums
*******************************************************************************/
typedef enum
{
   MML1_DPD_AM,
   MML1_DPD_PM
  
} MML1_DPD_AM_PM_E;

typedef enum
{ 
   MML1_DPD_3GFDD,
   MML1_DPD_C2K,  
   MML1_DPD_3GTDD,
   MML1_DPD_LTE,   
   
} MMDPD_TXDFE_TXK_RAT_SEL_E;

typedef enum
{
   MML1_DPD_P0,
   MML1_DPD_P1,
   MML1_DPD_INVALID,
   
} MMDPD_TXDFE_RFPATH_SEL_E;

typedef enum
{
   MML1_DPD_CTRL_FROM_L1  = 0,
   MML1_DPD_CTRL_FROM_TPC = 1
   
}MMDPD_TXDFE_TTG_GAIN_SWTICH_E;

typedef enum
{
   DPD_AM_ALL_DISABLE  = 0x0000,
   DPD_AM_EN_ET_MODE   = 0x0001,
   DPD_AM_EN_DPD_MODE  = 0x0002,
   DPD_AM_EN_APT_MODE  = 0x0004
   
} MMDPD_OP_MODE_AM_SWITCH_E;

typedef enum
{
   DPD_PM_ALL_DISABLE  = 0x0000,
   DPD_PM_EN_ET_MODE   = 0x0001,
   DPD_PM_EN_DPD_MODE  = 0x0002,
   DPD_PM_EN_APT_MODE  = 0x0004
   
} MMDPD_OP_MODE_PM_SWITCH_E;

typedef enum
{
   DPD_AM_SWITCH_OFF = 0,
   DPD_AM_SWITCH_ON  = 1
   
} MMDPD_AM_SWITCH_E;

typedef enum
{
   DPD_PM_SWITCH_OFF = 0,
   DPD_PM_SWITCH_ON  = 1
   
} MMDPD_PM_SWITCH_E;

typedef enum
{
   DPD_PA_MODE_H   = 0,
   DPD_PA_MODE_M   = 1,
   DPD_PA_MODE_L   = 2,
   DPD_PA_MODE_NUM = 3

} MMDPD_PA_MODE_E;

typedef enum
{
   DPD_PGA_A_CODE_G0   = 0,
   DPD_PGA_A_CODE_G1   = 1,
   DPD_PGA_A_CODE_G2   = 2,
   DPD_PGA_A_CODE_G3   = 3,
   DPD_PGA_A_CODE_G4   = 4,
   DPD_PGA_A_CODE_G5   = 5,
   DPD_PGA_A_CODE_G6   = 6,
   DPD_PGA_A_CODE_G7   = 7,
   DPD_PGA_A_CODE_G8   = 8,
   DPD_PGA_A_CODE_G9   = 9,
   DPD_PGA_A_CODE_G10  = 10,
   DPD_PGA_A_CODE_G11  = 11,
   DPD_PGA_A_CODE_G12A = 12,
   DPD_PGA_A_CODE_G13A = 13,
   DPD_PGA_A_CODE_G14A = 14,
   DPD_PGA_A_CODE_G15A = 15,
   DPD_PGA_A_CODE_G16A = 16,
   DPD_PGA_A_CODE_G17A = 17,
   DPD_PGA_A_CODE_G18A = 18,
   DPD_PGA_A_CODE_G19A = 19,
   DPD_PGA_A_CODE_G20A = 20  
                 
} MMDPD_PGA_A_CODE_E;

typedef enum
{
   DPD_PGA_TYPE_A = 0,
   DPD_PGA_TYPE_B = 1

} MMDPD_PGA_TYPE_E;

/* Align the definition of TXDFE_SW_PGA_CFG */
typedef enum
{
   DPD_PGA_INFO_SETA_SLICE8 = 0,
   DPD_PGA_INFO_SETA_SLICE7 = 1,    
   DPD_PGA_INFO_SETA_SLICE4 = 2,
   DPD_PGA_INFO_SETA_SLICE2 = 3,
   DPD_PGA_INFO_SETA_SLICE1 = 4,
   DPD_PGA_INFO_SETB_SLICE2 = 5,
   DPD_PGA_INFO_SETB_SLICE1 = 6,
   DPD_PGA_INFO_SETAUX      = 7,
   DPD_PGA_INFO_INVALID     = 8
   
} MMDPD_PGA_INFO_E;

typedef enum
{
   /* Get TR in *.0 format */
   IS_TR_P0_FMT = 0,
   /* Get TR in *.8 format */   
   IS_TR_P8_FMT = 1   

} MMDPD_TR_FMT_E;

typedef enum
{
   DPD_DISABLE,
   DPD_ENABLE
} DPD_ENABLE_E;

typedef enum
{
   CMIF_IDLE_STATE   = 0,
   FEC_SCHEDULE_OTFC_STATE  = 1,
   L1CORE_SEND_LUT_STATE = 2,
   FEC_POST_PROCESSING_STATE = 3,
   L1CORE_UPDATE_RESULT_STATE = 4
} DPD_OTFC_CMIF_MEAS_STATE_E;

typedef enum
{
   WB_IDLE_STATE     = 0,
   WB_TO_SRAM_STATE  = 1
} DPD_OTFC_WB_STATE_E;

typedef enum
{
   CMIF_ABORT_IDLE_STATE = 0,
   CMIF_ABORT_L1CORE_SET_ABORT_STATE = 1,
   CMIF_ABORT_DSP_ABORT_DONE_STATE = 2
} DPD_OTFC_CMIF_ABORT_STATE_E;


typedef enum
{
   L1C_TEST_MODE_ENTRY,
   L1D_TPC_START_REQUEST_ENTRY,
   DPD_FOR_TPC_STARTREQUEST_ENTRY_NUM,
} DPD_FOR_TPC_STARTREQUEST_ENTRY_E;



/*******************************************************************************
*  Structures
*******************************************************************************/
typedef struct
{
   kal_uint16 pa_idx;
   kal_uint16 pga_idx;
  
} MMDPD_PA_PGA_IDX_T;

typedef struct
{
   kal_uint8         pga_gain_code;
   kal_uint8         pga_slice_num;
   MMDPD_PGA_TYPE_E  pga_type;

} MMDPD_FAC_PGA_PARAM_T;


/* The structure for DPD caliration data */

typedef struct
{
   kal_uint8  lut[MMDPD_MAX_GAIN_INDEX_NUM][MMDPD_MAX_LUT_ENTRY_NUM];
  
} MMDPD_AMLUT_SUBBAND_T;

typedef struct
{
   kal_int8   lut[MMDPD_MAX_GAIN_INDEX_NUM][MMDPD_MAX_LUT_ENTRY_NUM];
  
} MMDPD_PMLUT_SUBBAND_T;

typedef struct
{
   kal_uint32   detadc_en_sw;
   kal_uint32   detadc_ck_div;
   kal_uint32   otf_detadc_trg_tgl;
   kal_uint32   detadc_timer_sel;
   
} MMDPD_TXK_TRG_AD_T;

#if __DPD_XL1SIM_MIPI_TPC_COMPARE_APT_MODE_TEST__ 
typedef enum
{
   DEFAULT_TABLE          = 0,
   FILTER_TABLE           = 1,
   DEFAULT_FILTER_MAX_NUM = 2,
   
} DPD_TPC_DEFAULT_FILTER_TYPE_E;
#endif

/*******************************************************************************
*  Interface Prototypes
*******************************************************************************/

#endif /* #ifndef __MML1_DPD_DEF_H__ */

