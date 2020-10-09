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
 *   mml1_rf_interface.h
 *
 * Project:
 * --------
 *   TK6291
 *
 * Description:
 * ------------
 *   Multi-Mode Multi-RAT Layer1 RF interface to each RAT
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
 * removed!
 *
 * removed!
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
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 *
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
 *
 * removed!
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
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef  _MML1_RF_INTERFACE_H_
#define  _MML1_RF_INTERFACE_H_

/*===============================================================================*/

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_public_defs.h"

#include "mml1_rf_global.h"
#include "mmrf_cc_global.h"
#include "mml1_mipi_public.h"
#include "mml1_fe_public.h"
#include "mml1_rf_cc_interface.h"
#include "mmrf_common_cid.h"

/*===============================================================================*/

#define  MMRF_NVSRV_NVW_BACKUP_DATA     (0)
#define  MMRF_NVSRV_NVW_BACKUP_PTR      (1)
#define  MMRF_NVSRV_NVW_BACKUP_INFO     (2)

#define  MMRF_FRE_SW_CHECK_ENABLE       (1)

/*===============================================================================*/

#ifdef __MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT__

   #if IS_MML1_CHIP_MT6293 || IS_MML1_FPGA_MT6293 || IS_MML1_CHIP_MT6739 || IS_MML1_CHIP_MT6771 || IS_MML1_CHIP_MT6765 || IS_MML1_CHIP_MT6761 || IS_MML1_CHIP_MT6768
#define  GSM_EVT_TIME_FRAME_CNT_LSB    (15)
#define  GSM_EVT_TIME_FRAME_CNT_WIDTH  (3)
#define  GSM_EVT_TIME_FRAME_CNT_MASK   (0x00038000)
#define  GSM_EVT_TIME_TQ_CNT_LSB       (0)
#define  GSM_EVT_TIME_TQ_CNT_WIDTH     (15)
#define  GSM_EVT_TIME_TQ_CNT_MASK      (0x00007FFF)
   #endif
      
#define  MMRF_GSM_TIME( fRAMEcNT, tQcNT )                                        \
   (( ((fRAMEcNT) << GSM_EVT_TIME_FRAME_CNT_LSB) & GSM_EVT_TIME_FRAME_CNT_MASK ) |  \
    ( ((tQcNT)    << GSM_EVT_TIME_TQ_CNT_LSB   ) & GSM_EVT_TIME_TQ_CNT_MASK    ))
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#define  MMRF_MAX_WAITTING_TIME_FOR_FLAG          (1000)
#define  MMRF_UINT32_ENDMARK                      (0x7FFFFFFF)
#define  MMRF_POINTER_ENDMARK                     NULL
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/* definition for LTE LPM */
#define  MMRF_LTELPM_BSIDATA_NUM                  (MMRF_ANT_NUM* MMRF_SRX_NUM*2) 
#define  MMRF_LTELPM_RXWIN_EVT_NUM                (8)  /* 4 RX windows * 2 win_state (on/off) = 8 */

#define  MMRF_LTELPM_BUFFER_NUM                   (2)  /* sw double buffer (buf0=0 / buf1=1) */


#define  LTELPM_EVENT_BUF_OFFSET                  (8)  /* event 0~7/16~23 for buffer_indx=0, event 8~15/24~31 for buffer_indx=1 */ 
#define  LTELPM_EVENT_ANT_OFFSET                  (16) /* event 0~15 for main ant, event 16~31 for diversity ant */
#define  LTELPM_DATA_ANT_OFFSET                   (4)  /* data 0~3 for main ant, data 4~7 for diversity ant */ 
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

   #if IS_MML1_FPGA_MT6293 || IS_MML1_CHIP_MT6293 || IS_MML1_CHIP_MT6771 || IS_MML1_CHIP_MT6765 || IS_MML1_CHIP_MT6761 || IS_MML1_CHIP_MT6768
#define  MMRF_BSIRS_MAX_PORT_ENUM  MML1_RF_MIPI4
   #elif IS_MML1_CHIP_MT6739
#define  MMRF_BSIRS_MAX_PORT_ENUM  MML1_RF_MIPI3
   #else
#warning "Please set MMRF_BSIRS_MAX_PORT_ENUM for new project."
   #endif
#endif

#define  MMRF_TEMPER_LEVEL                        (8)

#if defined(__LTE_L1SIM_SM__)
#define __MMRF_ELNA_IN_LTE_L1SIM_SM__                         0
#endif

typedef enum
{
#if IS_MML1_RF_MT6179 || IS_MML1_RF_MT6177L || IS_MML1_RF_MT6177M
   MML1_RF_IS_E1   = 0x0000,
   MML1_RF_IS_E2   = 0x0001,
   MML1_RF_IS_E3   = 0x0002,
   MML1_RF_IS_E4   = 0x0003,
#else
   MML1_RF_IS_E1   = 0x0001,
   MML1_RF_IS_E2   = 0x0002,
   MML1_RF_IS_E3   = 0x0003,
#endif
}MML1_RF_RFECO_E;

typedef enum
{
   MML1_RF_IS_RFIC1   = 0x0001,
   MML1_RF_IS_RFIC2   = 0x0002,
}MML1_RF_RFIC_INFO_T;

typedef enum
{
   MML1_RF_MD1     = 0x0000,
   MML1_RF_MD2     = 0x0001,
   MML1_RF_MD3     = 0x0002,
   MML1_RF_MD_CNT,
}MML1_RF_MD_T;

typedef enum
{  /* following number are according to HWPOR port select */
#if IS_MML1_CHIP_MT6292_AND_LATTER_VERSION
   MML1_RF_RFIC1   = 0x0000,
   MML1_RF_RFIC2   = 0x0001,
   MML1_RF_PMIC    = 0x0002,
   MML1_RF_MIPI0   = 0x0003,
   MML1_RF_MIPI1   = 0x0004,
   MML1_RF_MIPI2   = 0x0005,
   MML1_RF_MIPI3   = 0x0006,
   MML1_RF_MIPI4   = 0x0007,
   MML1_RF_MIPI5   = 0x0008,
   MML1_RF_MIPI6   = 0x0009,
   MML1_RF_MIPI7   = 0x000A,
#elif IS_MML1_CHIP_MT6293_AND_LATTER_VERSION
   MML1_RF_RFIC1   = 0x0000,
   MML1_RF_RFIC2   = 0x0001,
   MML1_RF_PMIC    = 0x0002,
   MML1_RF_MIPI0   = 0x0003,
   MML1_RF_MIPI1   = 0x0004,
   MML1_RF_MIPI2   = 0x0005,
   MML1_RF_MIPI3   = 0x0006,
   #if IS_MML1_FPGA_MT6293 || IS_MML1_CHIP_MT6293 || IS_MML1_CHIP_MT6771 || IS_MML1_CHIP_MT6765 || IS_MML1_CHIP_MT6761 || IS_MML1_CHIP_MT6768
   MML1_RF_MIPI4   = 0x0007,
   #endif
#endif
   MML1_RF_MIPI_PORT_MAX,
   MML1_RF_PORT_CNT = MML1_RF_MIPI_PORT_MAX,
#ifdef __MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT__
   MML1_RF_PORT_ENDMARK,
#endif
}MML1_RF_BSIMM_PORT_T;

typedef enum
{
   MML1_RF_CORE0    = 0x0000,
   MML1_RF_CORE1    = 0x0001,
   MML1_RF_CORE_CNT = 0x0002,
}MML1_RF_CORE_T;

typedef enum
{
   MML1_MIPI_RW          = 0x0000,
   MML1_MIPI_EXTRW_1BYTE = 0x0001,
   MML1_MIPI_EXTRW_2BYTE = 0x0002,
   MML1_MIPI_EXTRW_3BYTE = 0x0003,
   MML1_MIPI_EXTRW_4BYTE = 0x0004,
   MML1_MIPI_SUPPORT_RW_CNT,
}MML1_MIPI_REG_RW_T;

typedef enum
{
   MML1_ABB_RATE_4P33M  = 0x001,
   MML1_ABB_RATE_8P66M  = 0x002,
   MML1_ABB_RATE_17P33M = 0x004,
   MML1_ABB_RATE_3P25M  = 0x008,
   MML1_ABB_RATE_6P5M   = 0x010,
   MML1_ABB_RATE_13M    = 0x020,
   MML1_ABB_RATE_26M    = 0x040,
   MML1_ABB_RATE_52M    = 0x080,
   MML1_ABB_RATE_104M   = 0x100,
   MML1_ABB_RATE_208M   = 0x200,
   MML1_ABB_RATE_416M   = 0x400,
   MML1_ABB_RATE_832M   = 0x800,
   MML1_ABB_RATE_NUM    = 0xFFF,
}MML1_ABB_DATA_RATE_E;

typedef enum
{
   MML1_ABB_MODE_FDD    = 0x000,
   MML1_ABB_MODE_TDD    = 0x001,
   MML1_ABB_MODE_LTE    = 0x002,
}MML1_ABB_DATA_MODE_E;

// RF Temperature Info status
typedef enum
{
   MML1_RF_GTI_STATUS_INVALID        = 0, // Invalid RF Chip
   MML1_RF_GTI_STATUS_INTERPO_FAIL   = 1, // 8-lev DAC error; unable to do interpolation
   MML1_RF_GTI_STATUS_TEMP_OVERFLOW  = 2, // Interpolated temp. < -40 degree Celsius
   MML1_RF_GTI_STATUS_TEMP_UNDERFLOW = 3, // Interpolated temp. > 120 degree Celsius
   MML1_RF_GTI_STATUS_SUCCESS        = 4, // Interpolation success
}MML1_RF_GTI_STATUS_E;


typedef struct
{
   MML1_RF_RAT_T        rat;       //2G=1, 3G FDD=2, 3G TDD=4, LTE=8
   MML1_ABB_DATA_MODE_E mode;      //mode sel : FDD/TDD/LTE
   MML1_ABB_DATA_RATE_E adc_rate;
   MML1_ABB_DATA_RATE_E cic_rate;
   kal_uint16           set;       //s_idx : group0/group1/group2
   kal_uint16           ant;       //a_idx : main/diversity
   kal_uint16           path;      //path index [0-3]
   kal_uint16           fdd_r;     //rounding
   kal_uint16           fdd_c;     //clipping
   kal_uint16           lte_zp;    //zero padding
   kal_uint16           adc;       //ADC number [0-3]
}MMRF_ABB_BBRX_CTRL_T;

typedef enum
{
   MMRF_ADC0 = 0,
   MMRF_ADC1,
   MMRF_ADC2,
   MMRF_ADC3,
   MMRF_ADC_COUNT,
   MMRF_ADC_INVALID
}MMRF_ABB_SWAP_ADC_SEL_E;

typedef enum
{
   MMRF_DAC0 = 0,
   MMRF_DAC1,
   MMRF_DAC_COUNT,
   MMRF_DAC_INVALID
}MMRF_TXDFE_SWAP_DAC_SEL_E;

typedef enum
{
   MMRF_TXDFE0 = 0,
   MMRF_TXDFE1,
   MMRF_TXDFE_COUNT,
}MMRF_TXDFE_E;

typedef enum
{
   MMRF_ANT0 = 0x01, //Pbb
   MMRF_ANT1 = 0x02, //Dbb
}MMRF_ANT_BIT_MASK_E;

typedef enum
{
   MMRF_DFE0 = 0x0,
   MMRF_DFE1 = 0x1,
}MMRF_DFE2APC_SEL_E;

typedef struct
{
   MML1_RF_RAT_T             rat;
   kal_uint16                antBitMap;                //bit0:ANT0 Pbb, bit1:ANT1 Dbb. 0:OFF, 1:ON.        
   MMRF_ABB_SWAP_ADC_SEL_E   dfePath[MMRF_ADC_COUNT];  //ADC-DFE path mapping: C0/C1/C2/C3 -> ADC0/ADC1/ADC2/ADC3
}MMRF_ABB_SWAP_CTRL_T;

typedef enum
{
   MMRF_PMIC_VPA1 = 0,
   MMRF_PMIC_VPA2,
   MMRF_PMIC_VPA_COUNT,
   MMRF_HPUE_EXT_VPA,
   MMRF_PMIC_VPA_INVALID = 0xFFFF
}MMRF_PMIC_VPA_NUM_E;

/* low cost HPUE PMIC CW */
#define PMIC_HPUE_MAX_CW_NUM    1  //maximum low cost hpue cw num of all PMIC, this num can only add, can not be reduced

typedef struct
{
   kal_bool   cw_used;         // is this cw used
   kal_uint32 vol_over_34_cw;  // over 3.4v cw value
   kal_uint32 vol_lower_34_cw; // lower 3.4v cw value
}MMRF_PMIC_HPUE_CW_T;

typedef struct
{
   MMRF_PMIC_HPUE_CW_T pmic_hpue_cw[PMIC_HPUE_MAX_CW_NUM];
}MMRF_PMIC_HPUE_CTRL_T;
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

typedef struct
{
   MML1_RF_RAT_T             rat;
   MMRF_TXDFE_E              master_txdfe;                 //select the master txdfe
   MMRF_TXDFE_SWAP_DAC_SEL_E txdfePath[MMRF_TXDFE_COUNT];  //TXDFE->DAC path mapping
   kal_bool                  imm_enable;                   //immediate mode enable/disable
}MMRF_TXDFE_SWAP_CTRL_T;


typedef struct
{
   kal_uint16           file_index;
   kal_uint16           record_index;
}MMRF_CDDC_LID_T;

typedef enum
{
   DCXO_FPM   = 0,
   DCXO_LPM   = 1,
   DCXO_BBLPM = 2,
}MMRF_DCXO_MODE_E;

typedef struct
{
   kal_uint32  lid;
   kal_uint32  recordIdx;
   kal_uint8  *srcBufPtr;
   kal_uint32  nvSize;
   kal_uint32  opType;
   void       *opParam;
   void      (*callback)(void *);
}MMRF_WRITE_NVRAM_SERVICE_T;

#if defined(__TX_POWER_OFFSET_SUPPORT__) || defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)
typedef enum
{
   SWTP_GSM = 0,
   SWTP_WCDMA,
   SWTP_TDSCDMA,
   SWTP_LTE,
   SWTP_C2K,
   SWTP_RAT_NUM
}SWTP_RAT;

typedef struct
{
   SWTP_RAT     rat;
   kal_uint16   table_idx;
}sSWTP_GetTableIdx;
#endif

typedef enum
{
   MMRF_AP_SENSOR_RELATIVE_GSM = 0,
   MMRF_AP_SENSOR_RELATIVE_WCDMA,
   MMRF_AP_SENSOR_RELATIVE_LTE,
   MMRF_AP_SENSOR_RELATIVE_TDSCDMA,
   MMRF_AP_SENSOR_RELATIVE_C2K,
   MMRF_AP_SENSOR_RELATIVE_RAT_NUM
}MMRF_AP_SENSOR_RELATIVE_RAT_E;

typedef enum
{
   OP_CODE_DAT = 0,
   OP_CODE_SAR = 1,
   OP_CODE_NUM
}MMRF_AP_SENSOR_RELATIVE_OP_CODE_E;

typedef struct
{
   kal_int16     OPcode_0_scenario;
   kal_uint16    OPcode_1_scenario;
}MMRF_AP_SENSOR_RELATIVE_RECORD_T;

typedef enum
{
   MMRF_MODE_LTE = 0x0, /* according to BSI/BPI HW definition: 0x0 = 3'b000 */ /* mapping to idx of logger string structure in tmd file */
   MMRF_MODE_FDD = 0x1, /* according to BSI/BPI HW definition: 0x1 = 3'b001 */ /* mapping to idx of logger string structure in tmd file */
   MMRF_MODE_GSM = 0x2, /* according to BSI/BPI HW definition: 0x2 = 3'b010 */ /* mapping to idx of logger string structure in tmd file */  
   MMRF_MODE_MM  = 0x3,
   MMRF_MODE_C1X = 0x4, /* according to BSI/BPI HW definition: 0x4 = 3'b100 */ /* mapping to idx of logger string structure in tmd file */
   MMRF_MODE_CDO = 0x5, /* according to BSI/BPI HW definition: 0x5 = 3'b101 */ /* mapping to idx of logger string structure in tmd file */
   MMRF_MODE_TDD = 0x6, /* according to BSI/BPI HW definition: 0x6 = 3'b110 */ /* mapping to idx of logger string structure in tmd file */

   MMRF_MODE_MAX
} MMRF_MODE_E;

/* for BPI_MM, BPI buffer config */
typedef enum
{
   GSM_EVT_BUF       = 0x0,  /* 0x0 = 4'b0000 */ /* mapping to idx of logger string structure in tmd file */
   FDD_TX1_EVT_BUF   = 0x1,  /* 0x1 = 4'b0001 */ /* mapping to idx of logger string structure in tmd file */
   FDD_RX1_EVT_BUF   = 0x2,  /* 0x2 = 4'b0010 */ /* mapping to idx of logger string structure in tmd file */
   FDD_RX2_EVT_BUF   = 0x3,  /* 0x3 = 4'b0011 */ /* mapping to idx of logger string structure in tmd file */
   TDD_EVT_BUF       = 0x4,  /* 0x4 = 4'b0100 */ /* mapping to idx of logger string structure in tmd file */
   LTE_TX1_EVT_BUF   = 0x5,  /* 0x5 = 4'b0101 */ /* mapping to idx of logger string structure in tmd file */
   LTE_RX1_EVT_BUF   = 0x6,  /* 0x6 = 4'b0110 */ /* mapping to idx of logger string structure in tmd file */
   LTE_RX2_EVT_BUF   = 0x7,  /* 0x7 = 4'b0111 */ /* mapping to idx of logger string structure in tmd file */
   C2K1X_TX1_EVT_BUF = 0x8,  /* 0x8 = 4'b1000 */ /* mapping to idx of logger string structure in tmd file */
   C2K1X_RX1_EVT_BUF = 0x9,  /* 0x9 = 4'b1001 */ /* mapping to idx of logger string structure in tmd file */
   C2K1X_RX2_EVT_BUF = 0xA,  /* 0xA = 4'b1010 */ /* mapping to idx of logger string structure in tmd file */
   C2KDP_TX1_EVT_BUF = 0xB,  /* 0xB = 4'b1011 */ /* mapping to idx of logger string structure in tmd file */
   C2KDP_RX1_EVT_BUF = 0xC,  /* 0xC = 4'b1100 */ /* mapping to idx of logger string structure in tmd file */
   C2KDP_RX2_EVT_BUF = 0xD,  /* 0xD = 4'b1101 */ /* mapping to idx of logger string structure in tmd file */
#if IS_MML1_CHIP_MT6771 || IS_MML1_CHIP_MT6765 || IS_MML1_CHIP_MT6761 || IS_MML1_CHIP_MT6768
   LTE_TX2_EVT_BUF   = 0xE,  /* 0xE = 4'b1110 */ /* mapping to idx of logger string structure in tmd file */
#endif

   MMRF_BPIMM_BUF_CFG_NUM
} MMRF_BPIMM_BUF_CFG_E;

typedef enum
{
   BPISTR_RESYNC_REG0,  /* BPI resynced strobe part0 --  event 31~ 0   */
   BPISTR_RESYNC_REG1,  /* BPI resynced strobe part0 --  event 63~32   */
   BPISTR_RESYNC_REG2,  /* BPI resynced strobe part0 --  event 95~64   */
   BPISTR_RESYNC_REG3,  /* BPI resynced strobe part0 --  event 127~96  */
   BPISTR_RESYNC_REG4,  /* BPI resynced strobe part0 --  event 143~128 */

   BPISTR_RESYNC_NUM
} MMRF_RESYNC_STR_REG;

// BPI conflict pin number definition
typedef enum                            
{                                       
   MMRF_BPI_CONFLICT_PIN_31,
   MMRF_BPI_CONFLICT_PIN_30,
   MMRF_BPI_CONFLICT_PIN_NUM,
} MMRF_BPI_CONFLICT_PIN_E; 

typedef struct
{
   kal_uint32 frcval_start_p0; //conflcit start frc[31: 0]
   kal_uint32 frcval_start_p1; //conflcit start frc[39:32]
   kal_uint32 frcval_end_p0;   //conflcit end frc[31: 0]
   kal_uint32 frcval_end_p1;   //conflcit end frc[39:32]
}BPI_CONFLICT_FRC_OUTPUT_T;

typedef enum                            
{                                       
   MMRF_RXDFE_TQ_NORMAL, //tq index: 0~9                 
   MMRF_RXDFE_TQ_LORX,   //tq index: 10~11         
   MMRF_RXDFE_TQ_TYPE_NUM,
   MMRF_RXDFE_TQ_TYPE_NONE = 3,   //tq index: 10~11
} MMRF_RXDFE_TIMEQ_TYPE_E;                   

//per timeQ set query                                                                                             
typedef struct                                                                                                    
{                                                                                                                 
   MMRF_RXDFE_TIMEQ_TYPE_E tq_type;  // normal/ 3G TDD/ LoRX                                                           
   kal_bool                need_fc_set; //TRUE: need to write Wbuf; FALSE: no need to write Wbuf                       
   kal_uint32              tq_memory_size; //timeQ memory size in number of words < MAX_TQ_MEMORY_SIZE                 
}MMRF_RXDFE_TIMEQ_QUERY_T;                                                                                             
                                                                                                                 
//per timeQ set memory allocation                                                                                 
typedef struct                                                                                                    
{                                                                                                                 
   kal_uint8  tq_set_idx; //0~11                                                                                      
   kal_uint8  fc_set_idx; //0~7, if no required fc set, fill invalid fc set number 0xFF                               
   kal_uint32 tq_start_addr;                                                                                          
   kal_uint32 tq_end_addr;                                                                                            
}MMRF_RXDFE_TIMEQ_FC_SET_T;                                                                                            
                                                                                                                 
//per timeQ set usage status                                                                                      
typedef struct                                                                                                    
{                                                                                                                 
   kal_bool                     tq_set_in_use; //TRUE: in use; FALSE: not in use                                           
   kal_bool                     sw_update_flag;//TRUE: in sw update; FALSE: not in sw update                               
   kal_uint8                    fc_set_idx;    //related fc set index, if none, just fill the magic number                 
   MMRF_RXDFE_TIMEQ_QUERY_T     query_status; //check if in use                                                            
   MMRF_MODE_E                  rat_type; //LWTCC                                                                          
}MMRF_RXDFE_TIMEQ_SET_STA_T;                                                                                           
                                                                                                                 
//per FC set usage status                                                                                         
typedef struct                                                                                                    
{                                                                                                                 
   kal_uint8                    fc_set_in_use; //0: no timeq will use this FC set(Wbuf); >0: fc set is in use by some timeqs
}MMRF_RXDFE_FC_SET_STA_T;

#if IS_MML1_CHIP_MT6293_AND_LATTER_VERSION
typedef enum
{
   MMRF_RXDFE_SRX1     =  0,
   MMRF_RXDFE_SRX2     =  1,
   MMRF_RXDFE_SRX_CNT  =  2
}MMRF_RXDFE_SRX_PATH_E;

typedef enum
{
  MMRF_RXDFE_A_PATH_MAIN      =  0,
  MMRF_RXDFE_A_PATH_DIVERSITY =  1,
  MMRF_RXDFE_A_PATH_CNT       =  2
}MMRF_RXDFE_A_PATH_E;

typedef struct
{
   kal_uint16 iq_swap_en;
   kal_uint16 i_inv_en;
   kal_uint16 q_inv_en;
}MMRF_RXDFE_IQ_CON_A_T;

typedef struct
{
   MMRF_RXDFE_IQ_CON_A_T rxdfe_iq_info[MMRF_RXDFE_SRX_CNT][MMRF_RXDFE_A_PATH_CNT];
}MMRF_RXDFE_IQ_CON_T;
#elif IS_MML1_CHIP_MT6292_AND_LATTER_VERSION
typedef enum
{
   MMRF_RXDFE0_SRX1    =  0,
   MMRF_RXDFE0_SRX2    =  1,
   MMRF_RXDFE1_SRX1    =  2,
   MMRF_RXDFE1_SRX2    =  3
}MMRF_RXDFE_SRX_PATH_E;

typedef struct
{
   kal_uint16 prx_iq_swap_en;
   kal_uint16 drx_iq_swap_en;
   kal_uint16 prx_i_inv_en;
   kal_uint16 prx_q_inv_en;
   kal_uint16 drx_i_inv_en;
   kal_uint16 drx_q_inv_en;
}MMRF_RXDFE_IQ_CON_T;
#else
typedef enum
{
   MMRF_RXDFE_SRX1     =  0,
   MMRF_RXDFE_SRX2     =  1
}MMRF_RXDFE_SRX_PATH_E;

typedef struct
{
   kal_uint16 prx_iq_swap_en;
   kal_uint16 drx_iq_swap_en;
   kal_uint16 prx_i_inv_en;
   kal_uint16 prx_q_inv_en;
   kal_uint16 drx_i_inv_en;
   kal_uint16 drx_q_inv_en;
}MMRF_RXDFE_IQ_CON_T;
#endif

/* for BSISPI ARB PRIORITY config*/
typedef enum
{
   BSISPI_ARB_PRIORITY_1     = 0x00000001,
   BSISPI_ARB_PRIORITY_2     = 0x00000002,
   BSISPI_ARB_PRIORITY_3     = 0x00000004,
   BSISPI_ARB_PRIORITY_4     = 0x00000008,
   BSISPI_ARB_PRIORITY_5     = 0x00000010,
   BSISPI_ARB_PRIORITY_6     = 0x00000020,
   BSISPI_ARB_PRIORITY_7     = 0x00000040,
   BSISPI_ARB_PRIORITY_8     = 0x00000080,
   BSISPI_ARB_PRIORITY_9     = 0x00000100,
} MMRF_BSISPI_ARB_PRIORITY_E;

typedef enum
{
   MMRF_MUX_USER_LTE,
   MMRF_MUX_USER_FDD,
   MMRF_MUX_USER_C2K,

   MMRF_MUX_USER_CNT
} MMRF_BPI_AGC_AND_MUX_USER_E;


#ifdef __MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT__

/* for LTE LPM */
typedef enum
{
   MMRF_LPM_WIN_ON,
   MMRF_LPM_WIN_OFF,

   MMRF_LPM_WIN_STATE_NUM
} MMRF_LPM_WIN_STATE_E;

typedef enum
{
   MMRF_SRX1 = 0x1,
   MMRF_SRX2 = 0x2,
   MMRF_SRX_NUM = 2
} MMRF_LPM_SRX_STATE_E;
typedef enum
{
   MMRF_MAIN_ANT,
   MMRF_DIV_ANT,

   MMRF_ANT_NUM
} MMRF_ANT_E;

typedef enum
{
   MMRF_LTELPM_TAS_IDX0,   /* not switch */
   MMRF_LTELPM_TAS_IDX1,   /* switch */

   MMRF_LTELPM_TAS_IDX_NUM
} MMRF_LTELPM_TAS_IDX_E;
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

typedef enum
{
   BSIBPIRS_OK,         /* Only zero is ok, all non-zeros are all fail reason. */
   BSIBPIRS_FAIL,                     /* general error */
   BSIBPIRS_FAIL_INVALID_INPUT,       /* User input variables are invalid.      */
   BSIBPIRS_FAIL_RAT_MISMATCH,        /* RAT check fail for modified APIs.      */
   BSIBPIRS_FAIL_TIME_OUT,            /* Wait flag too long. */

   BSIBPIRS_RESULT_NUM
} MMRF_BSIBPIRS_RESULT_E;
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/* for TPC cancel: design as bit mask operation for FDD  */
/* the event for preamble may be canceled as receiving ACK and NACK */
/* the event for message may be canceled as receiving NACK and NOACK */
typedef enum
{
   MMRF_TPC_ACK_STATUS_NOACK  = 0x1, /*4'b0001*/
   MMRF_TPC_ACK_STATUS_ACK    = 0x2, /*4'b0010*/
   MMRF_TPC_ACK_STATUS_NACK   = 0x4, /*4'b0100*/
   MMRF_TPC_ACK_STATUS_NONE   = 0x8, /*4'b1000*/

   MMRF_TPC_ACK_STATUS_ENDMAK =0xFFFFFFFF,
} MMRF_TPC_ACK_STATUS_E;
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

typedef struct
{
   MMRF_MODE_E              mode;            /* used to recognize API caller user */
   kal_int32                event_time;      /* timer counter of each RAT unit    */
                                             /* --------------------------------------------------------------------
                                                 mode          unit                  note
                                                --------------------------------------------------------------------
                                                  LTE  [19:0]  1/61.44MHz            [1:0]don't care
                                                  FDD  [15:0]  chip
                                                  TDD  [15:0]  echip, 1/(8*1.28MHz)  [1:0]don't care
                                                  C1X  [19:0]  1/(8*1.2288) us       [1:0]don't care
                                                  CDO  [19:0]  1/(8*1.2288) us       [1:0]don't care
                                                  GSM  [17:15] frame count           driver owner can use macro 
                                                       [14]    sign bit              MMRF_GSM_TIME( fRAMEcNT, tQcNT )
                                                       [13:0]  TQ count              to compose kal_uint32 format
                                                -------------------------------------------------------------------- */
   kal_uint32               bsi_data_num;    /* How many BSI datas need to be allocated mapping to one BSI event? (0~MMRF_BSIRS_MAX_DATA_OF_ONE_EVT) */
   kal_uint32              *bsi_data_buf_p;  /* memory buffer to show context of each data */
   MML1_RF_BSIMM_PORT_T    *bsi_data_port_p; /* memory buffer to show port setting of each data */
   kal_uint8                lpm_mode_ena;    /* lpm enable (1) / disable (0) */
   kal_uint8                lpm_imm_ena;     /* lpm imm enable (1) / disable (0) */
} MMRF_BSIRS_RFIC_INPUT_T;

typedef struct
{
   MMRF_MODE_E              mode;            /* used to recognize API caller user */
   kal_int32                event_time;      /* timer counter of each RAT unit    */
                                             /* --------------------------------------------------------------------
                                                 mode          unit                  note
                                                --------------------------------------------------------------------
                                                  LTE  [19:0]  1/61.44MHz            [1:0]don't care
                                                  FDD  [15:0]  chip
                                                  TDD  [15:0]  echip, 1/(8*1.28MHz)  [1:0]don't care
                                                  C1X  [19:0]  1/(8*1.2288) us       [1:0]don't care
                                                  CDO  [19:0]  1/(8*1.2288) us       [1:0]don't care
                                                  GSM  [17:15] frame count           driver owner can use macro 
                                                       [14]    sign bit              MMRF_GSM_TIME( fRAMEcNT, tQcNT )
                                                       [13:0]  TQ count              to compose kal_uint32 format
                                                -------------------------------------------------------------------- */   
   kal_uint32               bsi_data_num;    /* How many BSI datas need to be allocated mapping to one BSI event? (0~MMRF_BSIRS_MAX_DATA_OF_ONE_EVT) */
   kal_uint32              *bsi_data_buf_p;  /* memory buffer to show context of each data */
   MML1_RF_BSIMM_PORT_T    *bsi_data_port_p; /* memory buffer to show port setting of each data */
   kal_uint32              *mipi_lock_p;     /* mipi_lock setting for each data */
   kal_uint32              *mipi_wlen_p;     /* mipi_wlen setting for each data */
} MMRF_BSIRS_MIPI_INPUT_T;

typedef struct
{
   MMRF_BSIBPIRS_RESULT_E   result;         /* OK or Err Msg */
   kal_uint32               event_id;       /* BSI event ID which allocated */
                                            /* range for RFIC = 0 ~ MMRF_BSIRS_SCH_EVT_NUM_RFIC */
                                            /* range for MIPI = 0 ~ MMRF_BSIRS_SCH_EVT_NUM_MIPI */
   kal_uint32               data_start_idx; /* the first BSI data ID which allocated */
                                            /* range for RFIC = 0 ~ MMRS_BSIRS_SCH_DAT_NUM_RFIC */
                                            /* range for MIPI = 0 ~ MMRS_BSIRS_SCH_DAT_NUM_MIPI */
   kal_uint32               data_end_idx;   /* the last BSI data ID which allocated */
                                            /* range for RFIC = data_start_idx ~ MMRS_BSIRS_SCH_DAT_NUM_RFIC */
                                            /* range for MIPI = data_start_idx ~ MMRS_BSIRS_SCH_DAT_NUM_MIPI */
} MMRF_BSIRS_OUTPUT_T;

typedef struct
{
  MMRF_LPM_WIN_STATE_E      win_state;      /* on / off */
  kal_uint8                 lpm_mode_ena;   /* lpm enable (1) / disable (0) */
  kal_uint8                 lpm_imm_ena;    /* imm enable (1) / disable (0) */
  MMRF_LPM_SRX_STATE_E      srx_state;      /* MMRF_SRX1 / MMRF_SRX2 / MMRF_SRX1+MMRF_SRX2 */
} MMRF_BSIRS_LPM_EVENT_T;

typedef struct
{
  MMRF_ANT_E                ant;            /* main / div ant */
  kal_uint8                 buf_idx;        /* sw double buffer (buf0=0 / buf1=1) */
  kal_uint32                event_num;      /* 0 ~ (MMRF_LTELPM_RXWIN_EVT_NUM-1) */
  MMRF_LTELPM_TAS_IDX_E     tas_idx;        /* TAS no switch (0), TAS switch (1) */
  kal_int32                 event_time[MMRF_LTELPM_RXWIN_EVT_NUM];
  MMRF_BSIRS_LPM_EVENT_T    lpm_evt_info_p[MMRF_LTELPM_RXWIN_EVT_NUM];
 } MMRF_BSIRS_LTELPM_INPUT_T;
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
typedef struct
{
   MMRF_MODE_E              mode;            /* used to recognize API caller user */
   kal_int32                event_time;      /* timer counter of each RAT unit    */
                                             /* --------------------------------------------------------------------
                                                 mode          unit                  note
                                                --------------------------------------------------------------------
                                                  LTE  [19:0]  1/61.44MHz            [1:0]don't care
                                                  FDD  [15:0]  chip
                                                  TDD  [15:0]  echip, 1/(8*1.28MHz)  [1:0]don't care
                                                  C1X  [19:0]  1/(8*1.2288) us       [1:0]don't care
                                                  CDO  [19:0]  1/(8*1.2288) us       [1:0]don't care
                                                  GSM  [17:15] frame count           driver owner can use macro 
                                                       [14]    sign bit              MMRF_GSM_TIME( fRAMEcNT, tQcNT )
                                                       [13:0]  TQ count              to compose kal_uint32 format
                                                -------------------------------------------------------------------- */   
   kal_uint32               bpi_data;        /* BPI data context                  */
   MMRF_BPIMM_BUF_CFG_E     bpi_buf_cfg;     /* BPI data buffer config            */
} MMRF_BPIRS_INPUT_T;

typedef struct
{
   MMRF_BSIBPIRS_RESULT_E   result;         /* OK or Err Msg */
   kal_uint32               event_id;       /* BSI event ID which allocated (range = 0 ~ MMRF_BPIRS_SCH_EVT_NUM) */
} MMRF_BPIRS_OUTPUT_T;

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#endif

/***** VS1 low power feature *****/
typedef enum
{
  MML1_RF_VS1_LOW_VOLT  = 0, /*1.86V*/
  MML1_RF_VS1_HIGH_VOLT = 1, /*   2V*/
  MML1_RF_VS1_VOLT_CNT,
}MML1_RF_VS1_VOLT_E;

typedef enum
{
  MML1_RF_WIN_RX = 0,
  MML1_RF_WIN_TX = 1,
  MML1_RF_WIN_TYPE_CNT,
}MML1_RF_WIN_TYPE_E;

typedef enum
{
  MML1_RF_WIN_OFF  = 0,
  MML1_RF_WIN_ON   = 1,
  MML1_RF_WIN_OP_CNT,
}MML1_RF_WIN_OP_E;

typedef struct
{  
  MML1_RF_RAT_T        rat_type;            /* input */
  MML1_RF_WIN_TYPE_E   win_type;            /* input */
  MML1_RF_WIN_OP_E     win_op;              /* input */
  MML1_RF_VS1_VOLT_E   vs1_volt;            /* input */
  kal_uint32           pmic_vs1_cw;         /* output */
}MML1_RF_VS1_CTRL_T;

typedef struct
{  
  MML1_RF_RAT_T        rat_type;
  MML1_RF_WIN_TYPE_E   win_type;
  MML1_RF_VS1_VOLT_E   vs1_volt;
}MML1_RF_VS1_IMM_CTRL_T;


#if IS_MML1_CHIP_MT6293_AND_LATTER_VERSION
typedef enum
{
   MMRF_BSIMM_IDCON       = 0,
   MMRF_BSIMM_IDCOFF      = 1,
   MMRF_RXAGC             = 2,
   MMRF_TXUPC             = 3,
   MMRF_BFE               = 4,
   MMRF_BSIMM_IMM         = 5,
   MMRF_BSIMM_RFPOR_TRIG1 = 6,
   MMRF_SCH_WR            = 8,
   MMRF_SCH_WD            = 9,
}MML1_RF_BSILOGGER_MODE_E;

typedef enum
{
   MMRF_WRITE             = 0,
   MMRF_READ              = 1,
}MML1_RF_BSILOGGER_RW_E;

typedef struct
{
   MML1_RF_BSIMM_PORT_T       port;
   MML1_RF_BSILOGGER_RW_E     rw;
   MML1_RF_BSILOGGER_MODE_E   mode;
   MMRF_MODE_E                rat;
   kal_uint32                 cw;
   kal_uint32                 timing;
} MMRF_BSILOGGER_DBG_INFO_T;

typedef enum
{
   MMRF_RFCW_ABNORMAL,   
   MMRF_MIPICW_ABNORMAL,
   MMRF_CW1_REPEAT_ABMORMAL,

   MMRF_ABNORMAL_IDX_NUM
} MMRF_DBG_OP_E;

typedef struct
{
   MMRF_BSILOGGER_DBG_INFO_T   bsi_dbg_info;
}MMRF_DBG_INFO_T;
#else
typedef enum
{
   MMRF_MD1_LTE           = 0,
   MMRF_MD1_3GFDD         = 1,
   MMRF_MD1_3GTDD         = 2,
   MMRF_MD1_2G            = 3,
   #if IS_MML1_CHIP_MT6292_AND_LATTER_VERSION
   MMRF_MD1_LTE1          = 4,
   #else
   MMRF_MD2_3GFDD         = 4,
   #endif
   MMRF_MD2_2G            = 5,
   MMRF_MD3_C2K           = 6,
   MMRF_BSIMM_Pcore       = 7,
   MMRF_BSIMM_MD1_IMM     = 8,
   MMRF_BSIMM_MD2_IMM     = 9,
   MMRF_BSIMM_MD3_IMM     = 10,
   MMRF_BSIMM_RFPOR_TRIG1 = 11,
   MMRF_BSIMM_RFPOR_TRIG2 = 12,
   MMRF_BSIMM_AP2RFIC     = 13,
   MMRF_BSIMM_IDCON       = 14,
   MMRF_BSIMM_IDCOFF      = 15,
}MML1_RF_BSILOGGER_RAT_E;
#endif

typedef struct 
{
   LOCAL_PARA_HDR
} MMRF_REGULAR_MSG_T;

#if defined(__MTK_TARGET__) && MMRF_FRE_SW_CHECK_ENABLE
typedef struct
{
   kal_char timer_id[16];         //length of timerID is fixed as 16 bytes
   void (*efuseCallBack)(void);
}MML1_RF_EFUSE_CHECK_T;
#endif

typedef struct
{
   kal_int16 temp_eight_level[MMRF_TEMPER_LEVEL];
}MML1_RF_TEMPERATURE_INFO_T;
#if defined(__SAR_SENSOR_TX_DETECTION_SUPPORT__)
typedef enum
{
   MMRF_TX_POWER_LOW_INDICATION  = 0,
   MMRF_TX_POWER_HIGH_INDICATION = 1,
}MMRF_TX_POWER_INDICATION_E;
typedef enum
{
   MMRF_TX_POWER_INDICATION_STATE_NULL = -1,
   MMRF_TX_POWER_INDICATION_HIGH_POWER = 0,
   MMRF_TX_POWER_INDICATION_LOW_POWER = 1,
   MMRF_TX_POWER_INDICATION_MIDDLE_POWER = 2,
   MMRF_TX_POWER_INDICATION_STATE_NUM
}eMMRF_TX_POWER_INDICATION_STATE_T;

typedef enum
{
   MMRF_TX_PWR_DETECTION_GGE_LOW_BAND = 0,
   MMRF_TX_PWR_DETECTION_GGE_HIGH_BAND = 1,
   MMRF_TX_PWR_DETECTION_GGE_BAND_MAX_NUM,
}eMMRF_TX_PWR_DETECTION_GGE_BAND_INFO;
#endif//__SAR_SENSOR_TX_DETECTION_SUPPORT__


//Refine init flow for Ubin TCM optimized
void MML1_TL1D_L1CoreSHMUpdate2Local(void);
void MML1_GL1D_L1CoreSHMUpdate2Local(void);
void MML1_UL1D_L1CoreSHMUpdate2Local(void);
void MML1_EL1D_L1CoreSHMUpdate2Local(void);
void MML1_CL1D_L1CoreSHMUpdate2Local(void);

//BSI TOP Immediate Mode API for All RAT
void MML1_RF_IMM_SEND_BSI(MML1_RF_BSIMM_PORT_T port, kal_uint32 bsidata);
void MML1_RF_IMM_READ_BSI(MML1_RF_BSIMM_PORT_T port, kal_uint32 bsiaddr, kal_uint32 *bsidata);
void MML1_MIPI_IMM_SEND_BSI(MML1_RF_BSIMM_PORT_T port, MML1_MIPI_REG_RW_T rw_type, kal_uint32 bsidata1, kal_uint32 bsidata2);
void MML1_MIPI_IMM_READ_BSI(MML1_RF_BSIMM_PORT_T port, MML1_MIPI_REG_RW_T rw_type, kal_uint32 bsiaddr, kal_uint32 *bsidata1, kal_uint32 *bsidata2);

//change BSI MM ARB priority for TPC and AGC
#if defined(MT6763) || defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
void MML1_RF_BSISPI_DFE_ARB_Priority_Change(MML1_RF_RAT_T mode);
#endif

//BPI TOP Immediate Mode API for All RAT
#if defined(MT6763) || defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
void MML1_RF_IMM_SEND_BPI(kal_uint32 bpidata);
void MML1_RF_IMM_SEND_BPI_BUFF(kal_uint32 bpidata, MMRF_BPIMM_BUF_CFG_E bpi_buf_cfg);
void MML1_RF_IMM_READ_BPI(MMRF_MODE_E rat_mode, kal_uint32 *bpidata);
void MML1_RF_IMM_READ_BPI_OUT(kal_uint32 *bpidata);
void MML1_RF_IMM_READ_BPI_CONFLICT(MMRF_MODE_E rat_mode, kal_uint32 *bpidata1,kal_uint32 *bpidata2 );
void MML1_RF_IMM_SEND_BPI_MASK(MMRF_MODE_E rat_mode, kal_uint32 bpimask);
void MML1_RF_IMM_READ_BPI_MASK(MMRF_MODE_E rat_mode, kal_uint32 *bpimask);
void MML1_RF_Read_BPI_From_AGC_TPC( kal_uint32 *agc_data, kal_uint32 *upc_data );
kal_uint32 MML1_RF_BPI_CONFLICT_RAT_CHECK(void);
kal_bool MML1_RF_BPI_CONFLICT_CHECK(MMRF_MODE_E rat);
void MML1_RF_Read_BPI_Conflcit_Frc_Value( void );
void MML1_RF_Output_BPI_Conflcit_Frc_Value(MMRF_BPI_CONFLICT_PIN_E pin, BPI_CONFLICT_FRC_OUTPUT_T *frc_output_p );
void MML1_RF_BPISTR_Logger( MMRF_MODE_E rat_mode, kal_uint32 *str_data);
void MML1_RF_Read_Resync_Str( MMRF_RESYNC_STR_REG str_reg, kal_uint32 *str_data);
void MMRF_BPITOP_TPC_AGC_AND_Mux_Force_Switch2RFD(kal_bool enable);
#else
void MML1_RF_IMM_SEND_BPI(kal_uint32 bpidata1, kal_uint32 bpidata2);
void MML1_RF_IMM_READ_BPI(MML1_RF_MD_T md, MML1_RF_RAT_T rat, kal_uint32 *bpidata1, kal_uint32 *bpidata2);
void MML1_RF_IMM_READ_BPI_OUT(kal_uint32 *bpidata1, kal_uint32 *bpidata2);
void MML1_RF_IMM_READ_BPI_CONFLICT(MML1_RF_MD_T md, MML1_RF_RAT_T rat, kal_uint32 *bpidata1, kal_uint32 *bpidata2);
void MML1_RF_IMM_SEND_BPI_MASK(MML1_RF_MD_T md, MML1_RF_RAT_T rat, kal_uint32 bpimask1, kal_uint32 bpimask2);
void MML1_RF_IMM_READ_BPI_MASK(MML1_RF_MD_T md, MML1_RF_RAT_T rat, kal_uint32 *bpimask1, kal_uint32 *bpimask2);
kal_uint32 MML1_RF_BPI_CONFLICT_RAT_CHECK(MML1_RF_MD_T md);
kal_bool MML1_RF_BPI_CONFLICT_CHECK(MML1_RF_MD_T md,  MML1_RF_RAT_T rat);
void MML1_RF_IMM_READ_LTE1_BPI(kal_uint32 *bpidata1, kal_uint32 *bpidata2);
void MML1_RF_IMM_READ_LTE1_BPI_CONFLICT(kal_uint32 *bpidata1, kal_uint32 *bpidata2);

#endif
void MML1_RF_RFIC_Port_Switch(MML1_RF_BSIMM_PORT_T rf_port);
kal_bool MML1_RF_MIPI_USID_CHECK(MML1_RF_RAT_T rat, MML1_RF_BSIMM_PORT_T port, kal_uint32 USID);

//RF
void MML1_RF_POWER_ON(kal_uint32 is_wake_up, MML1_RF_RAT_T rat_type);
void MML1_RF_POWER_OFF(MML1_RF_RAT_T rat_type);
void MML1_RF_NOTIFY_POC_DONE(MML1_RF_RAT_T rat_type);
kal_uint32 MML1_RF_QUERY_POC_PENDING_LIST(MML1_RF_RAT_T rat_type);
void MML1_RF_SET_SHM_UPDATE_EG(MML1_RF_RAT_T rat_type);
kal_uint32 MML1_RF_RETRIEVE_SHM_UPDATE_EG(MML1_RF_RAT_T rat_type);
void MML1_RF_ENTER_FLIGHTMODE_ENTRYPOINT(void);
kal_uint32 MML1_RF_Query_Eco_Version(void);
kal_uint32 MML1_RF_Query_Chip_Version(void);
//Redefine for lagacy API naming
#define MML1_RF_QUERY_CHIP_VERSION()      MML1_RF_Query_Eco_Version()

//PMIC API for all RAT
void MML1_RFC_PMIC_Init(void);
void MML1_RFC_PMIC_Sleep(void);
void MML1_RF_PMIC_VPA_Status_Check(void);
void MML1_RF_PMIC_VPA_Status_PRINT_Check(void);
void MML1_RF_VRF18_FPWMSwitched_ByRAT(MML1_RF_RAT_T rat_type, kal_bool isFPWM); //Not support, only for 3G FDD link pass.

//VPA
void MML1_RF_VPA_VOSEL_CWGen( kal_uint8 dc2dc_lvl, kal_uint32 *dc2dc_cw, MMRF_PMIC_VPA_NUM_E vpaIdx);
void MML1_RF_VPA_VOSEL(kal_uint32 volt, MMRF_PMIC_VPA_NUM_E vpaIdx);
void MML1_RF_VPA_FPWMSwitch(kal_bool isFPWM, MMRF_PMIC_VPA_NUM_E vpaIdx);
void MML1_RF_VPA_Enable(MML1_RF_RAT_T rat_type, kal_bool vpa_en, MMRF_PMIC_VPA_NUM_E vpaIdx);
void MML1_RF_VPA_Enable_LTE(MML1_RF_RAT_T rat_type, kal_bool vpa_en, MMRF_PMIC_VPA_NUM_E vpaIdx);
void MML1_RF_VPA_CLR_OC_SDN(void);
void MML1_RF_VPA_GET_OC_SDN(kal_uint16* data);
void MML1_RF_Low_Cost_HPUE_CW_Query(MMRF_PMIC_HPUE_CTRL_T *mmrf_pmic_hpue_ctrl_ptr);

//MIPI
void MML1_MIPI_POWER_ON(MML1_RF_RAT_T rat_type);
void MML1_MIPI_POWER_OFF(MML1_RF_RAT_T rat_type);

//Debug Trace
void MML1_RF_DUMP_BSILOGGER(MML1_RF_RAT_T rat_type);
void MML1_RF_DUMP_RFCW(MML1_RF_RAT_T rat_type);
kal_bool MML1_RF_DUMP_BSILOGGER_FILTER_ENABLE(void);

//MMRF-TST
#if defined(__MTK_TARGET__) || defined(__LTE_L1SIM__)
void MMRFTST_Handler(ilm_struct *ilm_ptr);
void MMRFTST_CalDataAddRecordCnfHandler(ilm_struct *ilm_ptr);
kal_uint8 MMRFTST_Trc_Debug(kal_char *info);
void MMRFTST_UpdateRuntimeHandler(ilm_struct* ilm_ptr);
#else
#define MMRFTST_Handler(x)                     (void)(x)
#define MMRFTST_CalDataAddRecordCnfHandler(x)  (void)(x)
#define MMRFTST_Trc_Debug(x)              (0); (void)(x)
#define MMRFTST_UpdateRuntimeHandler(x)        (void)(x)
#endif

//API for Mixedsys setting
void MML1_RF_Mixedsys_BBRX_Setting(MMRF_ABB_BBRX_CTRL_T const *bbrx_ctrl_p);
void MML1_RF_Mixedsys_Swap_Set(MMRF_ABB_SWAP_CTRL_T const *abbSwapCtrl_p);
void MML1_RF_Mixedsys_Swap_Mode_Set(MML1_RF_RAT_T rat, /* 2G=1, 3G FDD=2, 3G TDD=4, LTE=8 */
                                    unsigned int mode); /* 0-1 */
void MML1_RF_Mixedsys_DPDADC_26MCLK_Enable(MML1_RF_RAT_T rat_type, kal_bool dpdadc_26m_en);
void MML1_RF_Mixedsys_ADCOnOff_Random_Fail_Check(MML1_RF_RAT_T rat_type);
void MML1_RF_Mixedsys_DFE2APC_Sel(MML1_RF_RAT_T rat_type, MMRF_DFE2APC_SEL_E dfe2apc_sel);

//API for DFE setting
void MML1_RF_Query_IQ_Swap_Info(sMML1_RF_IQ_SWAP_VARIABLE *iq_swap_info);
void MML1_RF_Query_IQ_Inverse_Info(sMML1_RF_IQ_INV_VARIABLE *iq_inv_info);
kal_bool MML1_RF_Is_RFBB_IQ_Swap_InDesign(void);
void MML1_RF_TXDFE_DAC_Swap_Set(MMRF_TXDFE_SWAP_CTRL_T const *txdfeSwapCtrl_p);
void MML1_RF_Query_DFE_RXIQ_Con(MML1_RF_RAT_T rat_type, MMRF_RXDFE_IQ_CON_T *rxdfe_iq_con);

//fix AFC related API
void MML1_RF_SetDCXOFreqFPM(MML1_RF_RAT_T rat_type, kal_uint32 fpm_div);
kal_int8 MML1_RF_Get_FixAFC_Status(MML1_RF_RAT_T rat_type);

/*  API for return Crystal on PMIC enable or disable flag */
/*  TRUE:  Crystal on PMIC is enable                      */
/*  FALSE: Crystal on PMIC is disable                     */
kal_bool MML1_RF_Is_Crystal_On_PMIC_Enable(MML1_RF_RAT_T rat_type);
void MML1_RF_Get_CoTMS_Config(MML1_RF_RAT_T rat_type, MML1_CO_TMS_CONFIG_T* cotms_config);
void MML1_RF_Set_CoTMS_Config(MML1_RF_RAT_T rat_type, MML1_CO_TMS_CONFIG_T* cotms_config);
kal_uint16 MML1_RF_Get_AFCDAC(MML1_RF_RAT_T rat_type);

//Query RF temperature API
void MML1_RF_MEASURE_TEMPER_DAC( MMRF_TempDac_T *temp_dac );
void MML1_RF_CALCULATE_TEMPER_INFO( MMRF_TempDac_T *temp_dac, MMRF_TemperatureInfo_T *result );
void MML1_RF_QUERY_TEMPER_EIGHT_LEVEL( MML1_RF_TEMPERATURE_INFO_T *temp_info );

//AFCDAC & CapID API
void MML1_RF_SetCapID(kal_uint32 capid);
void MML1_RF_SetAFCDAC(kal_uint32 afcdac);

// For speech qury RF path
kal_uint16 MML1_RF_Get_RFIC_Info(MML1_RF_RAT_T rat_type);

//Check Calibration Data Download
#if defined(__MTK_TARGET__)
kal_bool MML1_RF_REPORT_CALDATA_DOWNLOAD_STATUS(void);
kal_bool MML1_RF_REPORT_MISSING_CALDATA_ITEM(void *cnf);
#else
#define  MML1_RF_REPORT_CALDATA_DOWNLOAD_STATUS()       (1)
#define  MML1_RF_REPORT_MISSING_CALDATA_ITEM(cnf)       (void*)cnf; (1)
#endif

// MMRF FE related API
// API for querying eLNA database
void MML1_FE_QUERY_ELNA_DATABASE(MML1_RF_RAT_T rat, MML1_FE_ELNA_ROUTE_E elna_index, MML1_FE_ELNA_IND_T **elna_database);

// API for querying PA TPC pin mask
kal_uint32 MML1_FE_PA_TPC_PIN_MASK( void );

// MMRF Apply API for TXDET_ALWAYS_ON when it is not in RF sequence 
void MML1_RF_TX_DET_ALWAYS_ON_Set( const kal_bool enable );
   
// NVRAM API

/*===============================================================================*/
/*   MMRF_L1CORE_ReadNvram                                                     */
/*   For Meta mode NVRAM read in L1core, as NVRAM run time activate, read/write factory/POC data.*/
/*===============================================================================*/
kal_bool MMRF_L1CORE_ReadNvram(kal_uint32 lid, kal_uint16 recordIdx, kal_uint8* dstBuf_p, kal_uint32 nvSize);

/*===============================================================================*/
/*   MMRF_L1CORE_WriteNvram                                                     */
/*   For Meta mode NVRAM write in L1core, as NVRAM run time activate, read/write factory/POC data.*/
/*===============================================================================*/
kal_bool MMRF_L1CORE_WriteNvram(kal_uint32 lid, kal_uint16 recordIdx, kal_uint8* srcBuf_p, kal_uint32 nvSize);
#define  MMRF_L1CORE_WriteNvram_DirectSendMsg   MMRF_L1CORE_WriteNvram

/*===============================================================================*/
/*   MMRF_L1CORE_SendNvReadMsg                                                     */
/*   For Normal mode NVRAM read in L1core, send NVRAM read request to NVRAM task in Pcore*/
/*===============================================================================*/
void MMRF_L1CORE_SendNvReadMsg(kal_uint32 LID, kal_uint16 recordIdx, module_type src_mod_id);

/*===============================================================================*/
/*   MMRF_L1CORE_SendNvWriteMsg                                                     */
/*   For Normal mode NVRAM write in L1core, send NVRAM write request to NVRAM task in Pcore*/
/*===============================================================================*/
void MMRF_L1CORE_SendNvWriteMsg(kal_uint32 LID, kal_uint16 recordIdx, kal_uint32 size, kal_uint8* nvData_ptr, module_type src_mod_id);

/*===============================================================================*/
/*   MMRF_L1CORE_ReadNvCnfHandler                                                     */
/*   For Normal mode NVRAM read in L1core, handle NVRAM read confirm from NVRAM task in Pcore*/
/*===============================================================================*/
kal_bool MMRF_L1CORE_ReadNvCnfHandler(kal_uint32 lid, local_para_struct *local_para_ptr
                                      , peer_buff_struct *peer_buff_ptr, kal_uint8 *dst_ptr, kal_uint32 bufSize);
/*===============================================================================*/
/*   MMRF_L1CORE_WriteNvCnfHandler                                                     */
/*   For Normal mode NVRAM write in L1core, handle NVRAM write confirm from NVRAM task in Pcore*/
/*===============================================================================*/
kal_bool MMRF_L1CORE_WriteNvCnfHandler(kal_uint32 lid, local_para_struct *local_para_ptr);

// Update run-time handler
kal_uint32 MML1_MMRF_UpdateRuntimeHandler( kal_uint32 nvram_lid, kal_uint32 record_idx, kal_uint8 *data, kal_uint16 nvram_size );

// Update CDDC Info
void MMRF_NVRAM_UpdateCddcInfoToShm(kal_uint16 file_idx, kal_uint16 para);
void MMRF_NVRAM_UpdateCddcInfoToNvram(void);
void MMRF_NVRAM_ConfigCddcInfoToNvramFlag(kal_bool is_bypass);

// MMRF-xl1tst hander for MMRF
#if defined(__MTK_TARGET__) || defined(__LTE_L1SIM__)
void MMRF_HOLD_AND_SEND_MSG_TO_XL1TST( ilm_struct* ilm_src );
void MMRF_HOLD_AND_SEND_MSG_TO_FT( ilm_struct* ilm_src );
#else
#define MMRF_HOLD_AND_SEND_MSG_TO_XL1TST(x)    (void)(x)
#define MMRF_HOLD_AND_SEND_MSG_TO_FT(x)        (void)(x)
#endif

kal_bool MML1_RF_IsRecordTxPowerEnable(void);
void MML1_RF_RecordTxPower(MMRF_TxPowerRecord_RAT_T rat, kal_int8 txPower);

// Increase VS1 voltage and mode set
void MML1_RF_VS1_SW_MODE_VOSEL(kal_uint16 volt);
void MML1_RF_VS1_HW_MODE_VOSEL(kal_uint16 volt);

//switch DCXO operating mode
void MML1_DCXO_Operating_Mode_Switch( MMRF_DCXO_MODE_E mode );
void MML1_DCXO_Operating_Mode_Switch_Debug(void);

// Return LPM Capid value to TST for Cload Calibration
kal_uint32 MML1_MMRF_Get_CDAC_LPM_Value( void );

//Read AUXADC from PMIC
unsigned long MML1_PMU_AUXADCRead( void );


#if defined(__TX_POWER_OFFSET_SUPPORT__) || defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)
void MML1_SWTP_GetTableIdx(sSWTP_GetTableIdx *swtp_param);
void MML1_RF_Update_TxPowerOffsetTableIdxToC2K( kal_uint32 tableIdx );
void MML1_RF_SWTP_Init(void);
#endif

#if IS_MMRF_MIPI_HW_CHECK_SUPPORT
void MML1_MIPI_check_HW_device(ilm_struct *ilm_ptr);
#endif

void MML1_RF_UpdateTemperature( ilm_struct *ilm_ptr );

//RXDFE TIMEQ FC Wbuf Set Query  
void MML1_RF_RXDFE_Tq_Fc_Set_Query(MMRF_RXDFE_TIMEQ_FC_SET_T* tq_fc_set, const MMRF_MODE_E rat, const kal_uint32 num_tq_req, const MMRF_RXDFE_TIMEQ_QUERY_T tq_req[]);
//RXDFE Clear TIMEQ Sw Update flag 
void MML1_RF_RXDFE_Tq_Sw_Update_Release(const kal_uint32 tq_set_idx[], const kal_uint32 num_tq_set, const MMRF_MODE_E rat);  
//RXDFE TIMEQ Start Address Mapping  
void MML1_RF_RXDFE_Tq_Fc_Set_Init(void); 
//RXDFE ATIMER INIT 
void MML1_RF_RXDFE_Atimer_Init(void);
// RXDFE init static register
void MML1_RF_RXDFE_Static_Register_Init(void);
// RXDFE Switch Active Buffer to APB input
void MML1_RF_DFE_SWITCH_ACTBUFF_APB(void);
// RXDFE Wait TQ Status on 
void MML1_RF_RXDFE_WAIT_TQ_STATUS(const kal_uint32 tq_set_idx);
// RFD Init Handshake
void MML1_RF_Send_RFD_Init_Done(kal_uint16 src_mod_id, MML1_RF_RAT_T src_rat);
void MML1_RF_RFD_Init_Done_Handler(ilm_struct *ilm_ptr);
void MML1_RF_BootUp_RFC_Finish_Handler(ilm_struct *ilm_ptr);

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#ifdef __MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT__

void  MMRF_SET_BSIBIAS_LTE(kal_uint32 bias);
void  MMRF_SET_BSIBIAS_FDD(kal_uint32 bias);
void  MMRF_SET_BSIBIAS_GSM(kal_uint32 bias);
void  MMRF_SET_MIPIBIAS_LTE(kal_uint32 bias);
void  MMRF_SET_MIPIBIAS_FDD(kal_uint32 bias);
void  MMRF_SET_MIPIBIAS_GSM(kal_uint32 bias);
void  MMRF_SET_BPIBIAS_LTE(kal_uint32 bias);
void  MMRF_SET_BPIBIAS_FDD(kal_uint32 bias);
void  MMRF_SET_BPIBIAS_GSM(kal_uint32 bias);

void  MMRF_BSIBPIRS_Init( void );
#if defined(__MMRF_ELNA_IN_LTE_L1SIM_SM__)
void  MML1_RF_GeneralUpdateforAllRAT_ByDefaultCustom( void );
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_BSIRFIC_EventData_Allocate
 *
 * DESCRIPTION
 *  Used to BSI HW resource (RFIC event and data) dynamical allocation.
 *------------------------------------------------------------------------------
 *  This API users should define structures are type of MMRF_BSIRS_RFIC_INPUT_T and MMRF_BSIRS_OUTPUT_T first by themself.                               
 *  For example: MMRF_BSIRS_RFIC_INPUT_T   input  = {0};
 *               MMRF_BSIRS_OUTPUT_T       output = {0};
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *  bsi_rs_info_input_p  : [IN]  pointer of a structure of input variables
 *                               [NOTE]: (xL1SIM only) bsi_rs_info_input_p->bsi_data_buf_p[(bsi_rs_info_input_p->bsi_data_num)] should be MMRF_UINT32_ENDMARK.
 *                               [NOTE]: (xL1SIM only) bsi_rs_info_input_p->bsi_data_port_p[(bsi_rs_info_input_p->bsi_data_num)] should be MML1_RF_PORT_ENDMARK. 
 *  bsi_rs_info_output_p : [OUT] pointer of a structure of output variables
 *
 * RETURN VALUES (bsi_rs_info_output_p->result)
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
void  MMRF_BSIRFIC_EventData_Allocate( MMRF_BSIRS_RFIC_INPUT_T *bsi_rs_info_input_p, MMRF_BSIRS_OUTPUT_T *bsi_rs_info_output_p );
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_BSIRFIC_EventData_Allocate_SingleConfig
 *
 * DESCRIPTION
 *  Used to BSI HW resource (RFIC event and data) dynamical allocation.
 *------------------------------------------------------------------------------
 *  This API users should define structures are type of MMRF_BSIRS_RFIC_INPUT_T and MMRF_BSIRS_OUTPUT_T first by themself.                               
 *  For example: MMRF_BSIRS_RFIC_INPUT_T   input  = {0};
 *               MMRF_BSIRS_OUTPUT_T       output = {0};
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *  bsi_rs_info_input_p  : [IN]  pointer of a structure of input variables
 *                               Use bsi_data_port_p[0] to apply to all the BSI data. (No need ENDMARK)
 *                               [NOTE]: (xL1SIM only) bsi_rs_info_input_p->bsi_data_buf_p[(bsi_rs_info_input_p->bsi_data_num)] should be MMRF_UINT32_ENDMARK.
 *  bsi_rs_info_output_p : [OUT] pointer of a structure of output variables
 *
 * RETURN VALUES (bsi_rs_info_output_p->result)
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
void  MMRF_BSIRFIC_EventData_Allocate_SingleConfig( MMRF_BSIRS_RFIC_INPUT_T *bsi_rs_info_input_p, MMRF_BSIRS_OUTPUT_T *bsi_rs_info_output_p );
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_BSIMIPI_EventData_Allocate
 *
 * DESCRIPTION
 *  Used to BSI HW resource (MIPI event and data) dynamical allocation.
 *------------------------------------------------------------------------------
 *  This API users should define structures are type of MMRF_BSIRS_MIPI_INPUT_T and MMRF_BSIRS_OUTPUT_T first by themself.                               
 *  For example: MMRF_BSIRS_MIPI_INPUT_T         input  = {0};
 *               MMRF_BSIRS_OUTPUT_T             output = {0};
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *  bsi_rs_info_input_p  : [IN]  pointer of a structure of input variables
 *                               [NOTE]: (xL1SIM only) bsi_rs_info_input_p->bsi_data_buf_p[(bsi_rs_info_input_p->bsi_data_num)] should be MMRF_UINT32_ENDMARK.
 *                               [NOTE]: (xL1SIM only) bsi_rs_info_input_p->bsi_data_port_p[(bsi_rs_info_input_p->bsi_data_num)] should be MML1_RF_PORT_ENDMARK. 
 *                               [NOTE]: (xL1SIM only) bsi_rs_info_input_p->mipi_lock_p[(bsi_rs_info_input_p->bsi_data_num)] should be MMRF_UINT32_ENDMARK.
 *                               [NOTE]: (xL1SIM only) bsi_rs_info_input_p->mipi_wlen_p[(bsi_rs_info_input_p->bsi_data_num)] should be MMRF_UINT32_ENDMARK. 
 *  bsi_rs_info_output_p : [OUT] pointer of a structure of output variables
 *
 * RETURN VALUES (bsi_rs_info_output_p->result)
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
void  MMRF_BSIMIPI_EventData_Allocate( MMRF_BSIRS_MIPI_INPUT_T *bsi_rs_info_input_p, MMRF_BSIRS_OUTPUT_T *bsi_rs_info_output_p );
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_BSIMIPI_EventData_Allocate_SingleConfig
 *
 * DESCRIPTION
 *  Used to BSI HW resource (MIPI event and data) dynamical allocation.
 *------------------------------------------------------------------------------
 *  This API users should define structures are type of MMRF_BSIRS_MIPI_INPUT_T and MMRF_BSIRS_OUTPUT_T first by themself.                               
 *  For example: MMRF_BSIRS_MIPI_INPUT_T         input  = {0};
 *               MMRF_BSIRS_OUTPUT_T             output = {0};
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *  bsi_rs_info_input_p  : [IN]  pointer of a structure of input variables
 *                               Use bsi_data_port_p[0], mipi_lock_p[0], and mipi_wlen_p[0] to apply to all the BSI data. (No need ENDMARK)
 *                               [NOTE]: (xL1SIM only) bsi_rs_info_input_p->bsi_data_buf_p[(bsi_rs_info_input_p->bsi_data_num)] should be MMRF_UINT32_ENDMARK.
 *  bsi_rs_info_output_p : [OUT] pointer of a structure of output variables
 *
 * RETURN VALUES (bsi_rs_info_output_p->result)
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
void  MMRF_BSIMIPI_EventData_Allocate_SingleConfig( MMRF_BSIRS_MIPI_INPUT_T *bsi_rs_info_input_p, MMRF_BSIRS_OUTPUT_T *bsi_rs_info_output_p );
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_BPI_EventData_Allocate
 *
 * DESCRIPTION
 *  Used to BPI HW resource (event and data) dynamical allocation.
 *------------------------------------------------------------------------------
 *  This API users should define structures are type of MMRF_BPIRS_INPUT_T and MMRF_BPIRS_OUTPUT_T first by themself.                               
 *  For example: MMRF_BPIRS_INPUT_T   input  = {0};
 *               MMRF_BPIRS_OUTPUT_T  output = {0};
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *  bpi_rs_info_input_p  : [IN]  pointer of a structure of input variables
 *  bpi_rs_info_output_p : [OUT] pointer of a structure of output variables
 *
 * RETURN VALUES (bsi_rs_info_output_p->result)
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
void  MMRF_BPI_EventData_Allocate( MMRF_BPIRS_INPUT_T *bpi_rs_info_input_p, MMRF_BPIRS_OUTPUT_T *bpi_rs_info_output_p );
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_BSIRFIC_EventData_LPM_Allocate
 *
 * DESCRIPTION
 *  Used to FDD LPM BSI HW resource (event and data) dynamical allocation.
 *  FDD LPM use event_idx 0~31, and dynamic data allocation (use data idx 8~ MMRF_BSIRS_SCH_DAT_NUM_RFIC-1)            
 *------------------------------------------------------------------------------
 *  This API users should define structures are type of MMRF_BSIRS_RFIC_INPUT_T and MMRF_BSIRS_OUTPUT_T first by themself.                               
 *  For example: MMRF_BSIRS_RFIC_INPUT_T   input  = {0};
 *               MMRF_BSIRS_OUTPUT_T       output = {0};
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *  bsi_rs_info_input_p  : [IN]  pointer of a structure of input variables
 *                               [NOTE]: (xL1SIM only) bsi_rs_info_input_p->bsi_data_buf_p[(bsi_rs_info_input_p->bsi_data_num)] should be MMRF_UINT32_ENDMARK.
 *                               [NOTE]: (xL1SIM only) bsi_rs_info_input_p->bsi_data_port_p[(bsi_rs_info_input_p->bsi_data_num)] should be MML1_RF_PORT_ENDMARK. 
 *  bsi_rs_info_output_p : [OUT] pointer of a structure of output variables
 *
 * RETURN VALUES (bsi_rs_info_input_p->result)
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
void MMRF_BSIRFIC_EventData_LPM_Allocate(MMRF_BSIRS_RFIC_INPUT_T *bsi_rs_info_lpm_input_p, MMRF_BSIRS_OUTPUT_T *bsi_rs_info_output_p );
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_BSIRFIC_EventData_LPM_Allocate_SingleConfig
 *
 * DESCRIPTION
 *  Used to FDD LPM BSI HW resource (event and data) dynamical allocation.
 *  FDD LPM use event_idx 0~31, and dynamic data allocation (use data idx 8~ MMRF_BSIRS_SCH_DAT_NUM_RFIC-1)            
 *------------------------------------------------------------------------------
 *  This API users should define structures are type of MMRF_BSIRS_RFIC_INPUT_T and MMRF_BSIRS_OUTPUT_T first by themself.                               
 *  For example: MMRF_BSIRS_RFIC_INPUT_T   input  = {0};
 *               MMRF_BSIRS_OUTPUT_T       output = {0};
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *  bsi_rs_info_input_p  : [IN]  pointer of a structure of input variables
 *                                Use bsi_data_port_p[0] to apply to all the BSI data. (No need ENDMARK)
 *                               [NOTE]: (xL1SIM only) bsi_rs_info_input_p->bsi_data_buf_p[(bsi_rs_info_input_p->bsi_data_num)] should be MMRF_UINT32_ENDMARK.
 *  bsi_rs_info_output_p : [OUT] pointer of a structure of output variables
 *
 * RETURN VALUES (bsi_rs_info_input_p->result)
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
void MMRF_BSIRFIC_EventData_LPM_Allocate_SingleConfig( MMRF_BSIRS_RFIC_INPUT_T *bsi_rs_info_lpm_input_p, MMRF_BSIRS_OUTPUT_T *bsi_rs_info_output_p );
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_BSIRFIC_EventData_FDDTPC_Allocate
 *
 * DESCRIPTION
 *  Used to FDD TPC cancel BSI HW resource (event and data) dynamical allocation.
 *  FDD TPC CLR for RFIC use event_idx 32~39, and dynamic data allocation (use data idx 8~ MMRF_BSIRS_SCH_DAT_NUM_RFIC-1) 
 *------------------------------------------------------------------------------
 *  This API users should define structures are type of MMRF_BSIRS_RFIC_INPUT_T and MMRF_BSIRS_OUTPUT_T first by themself.                               
 *  For example: MMRF_BSIRS_RFIC_INPUT_T   input  = {0};
 *               MMRF_BSIRS_OUTPUT_T       output = {0};
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *  bsi_rs_info_rach_input_p  : [IN]  pointer of a structure of input variables
 *                               [NOTE]: (xL1SIM only) bsi_rs_info_input_p->bsi_data_buf_p[(bsi_rs_info_input_p->bsi_data_num)] should be MMRF_UINT32_ENDMARK.
 *                               [NOTE]: (xL1SIM only) bsi_rs_info_input_p->bsi_data_port_p[(bsi_rs_info_input_p->bsi_data_num)] should be MML1_RF_PORT_ENDMARK. 
 *  bsi_rs_info_output_p :      [OUT] pointer of a structure of output variables
 *
 * RETURN VALUES (bsi_rs_info_input_p->result)
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
void MMRF_BSIRFIC_EventData_FDDTPC_Allocate(MMRF_BSIRS_RFIC_INPUT_T *bsi_rs_info_rach_input_p, MMRF_BSIRS_OUTPUT_T *bsi_rs_info_output_p );
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_BSIRFIC_EventData_FDDTPC_Allocate_SingleConfig
 *
 * DESCRIPTION
 *  Used to FDD TPC cancel BSI HW resource (event and data) dynamical allocation.
 *  FDD TPC CLR for RFIC use event_idx 32~39, and dynamic data allocation (use data idx 8~ MMRF_BSIRS_SCH_DAT_NUM_RFIC-1) 
 *------------------------------------------------------------------------------
 *  This API users should define structures are type of MMRF_BSIRS_RFIC_INPUT_T and MMRF_BSIRS_OUTPUT_T first by themself.                               
 *  For example: MMRF_BSIRS_RFIC_INPUT_T   input  = {0};
 *               MMRF_BSIRS_OUTPUT_T       output = {0};
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *  bsi_rs_info_rach_input_p  : [IN]  pointer of a structure of input variables
 *                              Use bsi_data_port_p[0] to apply to all the BSI data. (No need ENDMARK)
 *                              [NOTE]: (xL1SIM only) bsi_rs_info_input_p->bsi_data_buf_p[(bsi_rs_info_input_p->bsi_data_num)] should be MMRF_UINT32_ENDMARK.
 *  bsi_rs_info_output_p :      [OUT] pointer of a structure of output variables
 *
 * RETURN VALUES (bsi_rs_info_input_p->result)
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
void MMRF_BSIRFIC_EventData_FDDTPC_Allocate_SingleConfig(MMRF_BSIRS_RFIC_INPUT_T *bsi_rs_info_rach_input_p, MMRF_BSIRS_OUTPUT_T *bsi_rs_info_output_p );
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_BSIMIPI_EventData_FDDTPC_Allocate
 *
 * DESCRIPTION
 *  Used to FDD TPC cancel MIPI HW resource (MIPI event and data) dynamical allocation.
 *  FDD TPC CLR for MIPI use event_idx 0~14, and dynamic data allocation (use data idx 0~ MMRF_BSIRS_SCH_EVT_NUM_MIPI_TPC-1)
 *------------------------------------------------------------------------------
 *  This API users should define structures are type of MMRF_BSIRS_MIPI_INPUT_T and MMRF_BSIRS_OUTPUT_T first by themself.                               
 *  For example: MMRF_BSIRS_MIPI_INPUT_T         input  = {0};
 *               MMRF_BSIRS_OUTPUT_T             output = {0};
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *  bsi_rs_info_rach_input_p  : [IN]  pointer of a structure of input variables
 *                               [NOTE]: (xL1SIM only) bsi_rs_info_input_p->bsi_data_buf_p[(bsi_rs_info_input_p->bsi_data_num)] should be MMRF_UINT32_ENDMARK.
 *                               [NOTE]: (xL1SIM only) bsi_rs_info_input_p->bsi_data_port_p[(bsi_rs_info_input_p->bsi_data_num)] should be MML1_RF_PORT_ENDMARK.
 *                               [NOTE]: (xL1SIM only) bsi_rs_info_input_p->mipi_lock_p[(bsi_rs_info_input_p->bsi_data_num)] should be MMRF_UINT32_ENDMARK.
 *                               [NOTE]: (xL1SIM only) bsi_rs_info_input_p->mipi_wlen_p[(bsi_rs_info_input_p->bsi_data_num)] should be MMRF_UINT32_ENDMARK.
 *  bsi_rs_info_output_p :      [OUT] pointer of a structure of output variables
 *
 * RETURN VALUES (bsi_rs_info_output_p->result)
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
void MMRF_BSIMIPI_EventData_FDDTPC_Allocate(MMRF_BSIRS_MIPI_INPUT_T *bsi_rs_info_rach_input_p, MMRF_BSIRS_OUTPUT_T *bsi_rs_info_output_p );
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_BSIMIPI_EventData_FDDTPC_Allocate_SingleConfig
 *
 * DESCRIPTION
 *  Used to FDD TPC cancel MIPI HW resource (MIPI event and data) dynamical allocation.
 *  FDD TPC CLR for MIPI use event_idx 0~14, and dynamic data allocation (use data idx 0~ MMRF_BSIRS_SCH_EVT_NUM_MIPI_TPC-1)
 *------------------------------------------------------------------------------
 *  This API users should define structures are type of MMRF_BSIRS_MIPI_INPUT_T and MMRF_BSIRS_OUTPUT_T first by themself.                               
 *  For example: MMRF_BSIRS_MIPI_INPUT_T         input  = {0};
 *               MMRF_BSIRS_OUTPUT_T             output = {0};
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *  bsi_rs_info_rach_input_p  : [IN]  pointer of a structure of input variables
 *                              Use bsi_data_port_p[0], mipi_lock_p[0], and mipi_wlen_p[0] to apply to all the BSI data. (No need ENDMARK)
 *                              [NOTE]: (xL1SIM only) bsi_rs_info_input_p->bsi_data_buf_p[(bsi_rs_info_input_p->bsi_data_num)] should be MMRF_UINT32_ENDMARK.
 *  bsi_rs_info_output_p :      [OUT] pointer of a structure of output variables
 *
 * RETURN VALUES (bsi_rs_info_output_p->result)
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
void MMRF_BSIMIPI_EventData_FDDTPC_Allocate_SingleConfig(MMRF_BSIRS_MIPI_INPUT_T *bsi_rs_info_rach_input_p, MMRF_BSIRS_OUTPUT_T *bsi_rs_info_output_p );
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_BPI_EventData_FDDTPC_Allocate
 *
 * DESCRIPTION
 *  Used to FDD TPC cancel BPI HW resource (event and data) dynamical allocation.
 *  FDD TPC CLR for BPI use event and data buf idx 0~9,
 *------------------------------------------------------------------------------
 *  This API users should define structures are type of MMRF_BPIRS_INPUT_T and MMRF_BPIRS_OUTPUT_T first by themself.                               
 *  For example: MMRF_BPIRS_INPUT_T   input  = {0};
 *               MMRF_BPIRS_OUTPUT_T  output = {0};
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *  bpi_rs_info_rach_input_p  : [IN]  pointer of a structure of input variables
 *  bpi_rs_info_output_p :      [OUT] pointer of a structure of output variables
 *
 * RETURN VALUES (bpi_rs_info_input_p->result)
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
void MMRF_BPI_EventData_FDDTPC_Allocate(MMRF_BPIRS_INPUT_T *bpi_rs_info_rach_input_p, MMRF_BPIRS_OUTPUT_T *bpi_rs_info_output_p );
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_BSIRFIC_LTELPM_DataInit
 *
 * DESCRIPTION
 *  Used to initialize LTE LPM BSI data.
 *  LTE LPM data are fixed location:
 *  data_idx= 0~7 are main RX1 on, main RX2 on, main RX1 off, main RX2 off, div RX1 on, div RX2 on, div RX1 off, div RX2 off 
 *------------------------------------------------------------------------------
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *  bsi_rs_ltelpm_data_p: [IN] pointer to the start of data buffer
 *                             [NOTE]: (xL1SIM only) bsi_rs_ltelpm_data_p[MMRF_LTELPM_BSIDATA_NUM] should be MMRF_UINT32_ENDMARK.
 *  bsi_data_port_p     : [IN] pointer to the start of port buffer
 *                             [NOTE]: (xL1SIM only) bsi_data_port_p[MMRF_LTELPM_BSIDATA_NUM] should be MML1_RF_PORT_ENDMARK. 
 *                        [OUT] N/A
 *
 * RETURN VALUES
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
MMRF_BSIBPIRS_RESULT_E MMRF_BSIRFIC_LTELPM_DataInit( kal_uint32 *bsi_rs_ltelpm_data_p, MML1_RF_BSIMM_PORT_T *bsi_data_port_p );
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_BSIRFIC_EventData_LTELPM_Allocate
 *
 * DESCRIPTION
 *  Used to LTE LPM BSI event/data allocation.
 *  LTE LPM use event_idx 0~31:
 *  event_idx: 0~7 for buf0/main ant, 8~15 for buf1/main ant
 *  event_idx: 16~23 for buf0/div ant, 24~31 for buf1/div ant
 *------------------------------------------------------------------------------
 *  This API users should define structure is type of MMRF_BSIRS_LTELPM_INPUT_T first by themself.                               
 *  For example: MMRF_BSIRS_LTELPM_INPUT_T  input  = {0};
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *  bsi_rs_info_lpm_input_p: [IN] pointer of a structure of input variables
 *                                [NOTE]: (xL1SIM only) bsi_rs_info_lpm_input_p->event_time[MMRF_LTELPM_RXWIN_EVT_NUM] should be MMRF_UINT32_ENDMARK.
 *                                [NOTE]: (xL1SIM only) bsi_rs_info_lpm_input_p->lpm_evt_info_p[MMRF_LTELPM_RXWIN_EVT_NUM] should be MMRF_POINTER_ENDMARK.
 * RETURN VALUES
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
MMRF_BSIBPIRS_RESULT_E MMRF_BSIRFIC_EventData_LTELPM_Allocate( MMRF_BSIRS_LTELPM_INPUT_T *bsi_rs_info_lpm_input_p );
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_BSIRFIC_LTELPM_DataInit
 *
 * DESCRIPTION
 * use to modify the BSI RFIC DATA ( only allow to modify the data belonging to own RAT ) 
 *------------------------------------------------------------------------------
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *  mode                  : [IN] one of RAT mode in MMRF_MODE_E
 *  bsi_data_buf_p        : [IN] pointer to the start of new data buffer
 *                               [NOTE]: (xL1SIM only) bsi_data_buf_p[(data_end_idx - data_start_idx+1)] should be MMRF_UINT32_ENDMARK.
 *  data_start_idx        : [IN]  the start index of BSI data that you want to modify 
 *  data_end_idx          : [IN]  the end index of BSI data that you want to modify
 *                          [OUT] N/A
 *
 * RETURN VALUES
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
MMRF_BSIBPIRS_RESULT_E MMRF_BSIRFIC_Modify_Data( MMRF_MODE_E mode, kal_uint32* bsi_data_buf_p, kal_uint32 data_start_idx,  kal_uint32 data_end_idx );
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_BSIMIPI_Modify_Data
 *
 * DESCRIPTION
 * use to modify the BSI MIPI DATA ( only allow to modify the data belonging to own RAT ) 
 *------------------------------------------------------------------------------
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *  mode                      : [IN] one of RAT mode in MMRF_MODE_E
 *  bsi_data_buf_p            : [IN] pointer to the start of new data buffer
 *                                   [NOTE]: (xL1SIM only) bsi_data_buf_p[(data_end_idx - data_start_idx+1)] should be MMRF_UINT32_ENDMARK.
 *  data_start_idx            : [IN]  the start index of BSI data that you want to modify 
 *  data_end_idx              : [IN]  the end index of BSI data that you want to modify
 *                              [OUT] N/A
 *
 * RETURN VALUES
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
 MMRF_BSIBPIRS_RESULT_E MMRF_BSIMIPI_Modify_Data( MMRF_MODE_E mode, kal_uint32* bsi_data_buf_p, kal_uint32 data_start_idx,  kal_uint32 data_end_idx );
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_BPI_Modify_EventBuf
 *
 * DESCRIPTION
 * use to modify the BPI buffer DATA and buffer config  ( only allow to modify the data belonging to own RAT ) 
 *------------------------------------------------------------------------------
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *  mode                    : [IN] one of RAT mode in MMRF_MODE_E
 *  bpi_evt_buf             : [IN] new BPI buffer data
 *  bpi_buf_cfg             : [IN] new BPI buffer config in MMRF_BPIMM_BUF_CFG_E
 *  event_idx               : [IN]  the event index of BPI event that you want to modify
 *                            [OUT] N/A
 *
 * RETURN VALUES
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
MMRF_BSIBPIRS_RESULT_E MMRF_BPI_Modify_EventBuf( MMRF_MODE_E mode, kal_uint32 bpi_evt_buf, MMRF_BPIMM_BUF_CFG_E bpi_buf_cfg, kal_uint32 event_idx  );
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_Stop_BSI_Event
 *
 * DESCRIPTION
 * use to stop the RFIC event before evet trigger ( only allow to stop the event belonging to own RAT )     
 *------------------------------------------------------------------------------
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *  mode                     : [IN] one of RAT mode in MMRF_MODE_E
 *  event_idx                : [IN] the event index of event that you want to stop
 *                             [OUT] N/A
 *
 * RETURN VALUES
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
MMRF_BSIBPIRS_RESULT_E MMRF_Stop_BSI_Event( MMRF_MODE_E mode, kal_uint32 event_id );
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_Stop_MIPI_Event
 *
 * DESCRIPTION
 * use to stop the MIPI event before evet trigger ( only allow to stop the event belonging to own RAT )     
 *------------------------------------------------------------------------------
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *  mode                     : [IN] one of RAT mode in MMRF_MODE_E
 *  event_idx                : [IN] the event index of event that you want to stop
 *                             [OUT] N/A
 *
 * RETURN VALUES
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
MMRF_BSIBPIRS_RESULT_E MMRF_Stop_MIPI_Event( MMRF_MODE_E mode, kal_uint32 event_id );
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_Stop_BPI_Event
 *
 * DESCRIPTION
 * use to stop the BPI event before evet trigger ( only allow to stop the event belonging to own RAT )     
 *------------------------------------------------------------------------------
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *  mode                     : [IN] one of RAT mode in MMRF_MODE_E
 *  event_idx                : [IN] the event index of event that you want to stop
 *                             [OUT] N/A
 *
 * RETURN VALUES
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
MMRF_BSIBPIRS_RESULT_E MMRF_Stop_BPI_Event( MMRF_MODE_E mode, kal_uint32 event_id );
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_BSIRFIC_FDDTPC_Clr_CancelEvent
 *
 * DESCRIPTION
 * use to enable the FDD RFIC TPC cancel event    
 *------------------------------------------------------------------------------
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *  event_num              : [IN] total event number for enabling the TPC cancel event
 *  event_idx_p            : [IN] pointer to the start of event index buffer
 *                                [NOTE]: (xL1SIM only) event_idx_p[event_num] should be MMRF_UINT32_ENDMARK. 
 *  ack_status_p           : [IN] pointer to the start of ack/nack/noack state buffer
 *                                [NOTE]: (xL1SIM only) ack_status_p[event_num] should be MMRF_TPC_ACK_STATUS_ENDMAK. 
 *                           [OUT] N/A
 *
 * RETURN VALUES
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
MMRF_BSIBPIRS_RESULT_E MMRF_BSIRFIC_FDDTPC_Clr_CancelEvent(kal_uint32 event_num, kal_uint32 *event_idx_p, MMRF_TPC_ACK_STATUS_E *ack_status_p);
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_BSIMIPI_FDDTPC_Clr_CancelEvent
 *
 * DESCRIPTION
 * use to enable the FDD MIPI TPC cancel event 
 *------------------------------------------------------------------------------
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *  event_num              : [IN] total event number for enabling the TPC cancel event
 *  event_idx_p            : [IN] pointer to the start of event index buffer
 *                                [NOTE]: (xL1SIM only) event_idx_p[event_num] should be MMRF_UINT32_ENDMARK. 
 *  ack_status_p           : [IN] pointer to the start of ack/nack/noack state buffer
 *                                [NOTE]: (xL1SIM only) ack_status_p[event_num] should be MMRF_TPC_ACK_STATUS_ENDMAK. 
 *                           [OUT] N/A
 *
 * RETURN VALUES
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
MMRF_BSIBPIRS_RESULT_E MMRF_BSIMIPI_FDDTPC_Clr_CancelEvent(kal_uint32 event_num, kal_uint32 *event_idx_p, MMRF_TPC_ACK_STATUS_E *ack_status_p);
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_BPI_FDDTPC_Clr_CancelEvent
 *
 * DESCRIPTION
 * use to enable the FDD BPI TPC cancel event    
 *------------------------------------------------------------------------------
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *  event_num              : [IN] total event number for enabling the TPC cancel event
 *  event_idx_p            : [IN] pointer to the start of event index buffer
 *                                [NOTE]: (xL1SIM only) event_idx_p[event_num] should be MMRF_UINT32_ENDMARK. 
 *  ack_status_p           : [IN] pointer to the start of ack/nack/noack state buffer
 *                                [NOTE]: (xL1SIM only) ack_status_p[event_num] should be MMRF_TPC_ACK_STATUS_ENDMAK. 
 *                           [OUT] N/A
 *
 * RETURN VALUES
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
MMRF_BSIBPIRS_RESULT_E MMRF_BPI_FDDTPC_Clr_CancelEvent(kal_uint32 event_num, kal_uint32 *event_idx_p, MMRF_TPC_ACK_STATUS_E *ack_status_p);
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_BPI_FDDTPC_Clr_CancelEvent
 *
 * DESCRIPTION
 * use to get the FDD RFIC TPC cancel event  status, for debugging usage
 *------------------------------------------------------------------------------
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *                            [IN] N/A
 *  tpc_clr_status_p        : [OUT] the latest tpc clr status ACK, NACK or NOACK
 *  tpc_clr_status_toggle_p : [OUT] This status bit is a toggle signal, every time when "TPC_RACH_AI" is updated, this signal will toggle once
 *  tpc_clr_update_cnt_p    : [OUT] This counter(0~15,4bits) will count every time when AI is updated
 *
 * RETURN VALUES
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
void MMRF_BSIRFIC_Get_FDDTPC_Clr_Info(MMRF_TPC_ACK_STATUS_E *tpc_clr_status_p, kal_uint32 *tpc_clr_status_toggle_p, kal_uint32 *tpc_clr_update_cnt_p);
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_BSIMIPI_Get_FDDTPC_Clr_Info
 *
 * DESCRIPTION
 * use to get the FDD MIPI TPC cancel event  status, for debugging usage
 *------------------------------------------------------------------------------
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *                            [IN] N/A
 *  tpc_clr_status_p        : [OUT] the latest tpc clr status ACK, NACK or NOACK
 *  tpc_clr_status_toggle_p : [OUT] This status bit is a toggle signal, every time when "TPC_RACH_AI" is updated, this signal will toggle once
 *  tpc_clr_update_cnt_p    : [OUT] This counter(0~15,4bits) will count every time when AI is updated
 *
 * RETURN VALUES
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
void MMRF_BSIMIPI_Get_FDDTPC_Clr_Info(MMRF_TPC_ACK_STATUS_E *tpc_clr_status_p, kal_uint32 *tpc_clr_status_toggle_p, kal_uint32 *tpc_clr_update_cnt_p);
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_BPI_Get_FDDTPC_Clr_Info
 *
 * DESCRIPTION
 * use to get the FDD BPI TPC cancel event  status, for debugging usage
 *------------------------------------------------------------------------------
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *                            [IN] N/A
 *  tpc_clr_status_p        : [OUT] the latest tpc clr status ACK, NACK or NOACK
 *  tpc_clr_status_toggle_p : [OUT] This status bit is a toggle signal, every time when "TPC_RACH_AI" is updated, this signal will toggle once
 *  tpc_clr_update_cnt_p    : [OUT] This counter(0~15,4bits) will count every time when AI is updated
 *
 * RETURN VALUES
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
void MMRF_BPI_Get_FDDTPC_Clr_Info(MMRF_TPC_ACK_STATUS_E *tpc_clr_status_p, kal_uint32 *tpc_clr_status_toggle_p, kal_uint32 *tpc_clr_update_cnt_p);
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_BSIRFIC_SCHRead_SetEvent
 *
 * DESCRIPTION
 * use to set the RFIC SCH read event 
 * Fixed SCH RD resource:
 * LTE: 0~7(HW resource 0~7), FDD: 0~2(HW resource 8~10), TDD: 0~1(HW resource 11~12), C2K: 0~2(HW resource 13~15),GSM: 0~1(HW resource 16~17)
 *------------------------------------------------------------------------------
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *  mode                     : [IN] one of RAT mode in MMRF_MODE_E
 *  bsi_data_port            : [IN] one of port in MML1_RF_BSIMM_PORT_T, only RFIC SCH RD is supported 
 *  event_time               : [IN] time to trigger the SCH RD event
 *  set                      : [IN] LTE: 0~7, FDD: 0~2, TDD: 0~1, C2K: 0~2,GSM: 0~1
 *  cw_addr                  : [IN] CW address that you want to read
 *                             [OUT] N/A
 *
 * RETURN VALUES
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
MMRF_BSIBPIRS_RESULT_E MMRF_BSIRFIC_SCHRead_SetEvent( MMRF_MODE_E mode, MML1_RF_BSIMM_PORT_T bsi_data_port, kal_int32 event_time, kal_uint32 set, kal_uint32 cw_addr);
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_Stop_BSIRFIC_SCHRead_Event
 *
 * DESCRIPTION
 * use to stop the RFIC schedule read event before evet trigger
 *------------------------------------------------------------------------------
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *  mode                     : [IN] one of RAT mode in MMRF_MODE_E
 *  set                      : [IN] LTE: 0~7, FDD: 0~2, TDD: 0~1, C2K: 0~2,GSM: 0~1
 *                             [OUT] N/A
 *
 * RETURN VALUES
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
MMRF_BSIBPIRS_RESULT_E MMRF_Stop_BSIRFIC_SCHRead_Event( MMRF_MODE_E mode, kal_uint32 set );
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/*******************************************************************************
 * <GROUP HW_Allocation>
 *
 * FUNCTION
 *  MMRF_BSIRFIC_SCHRead_GetData
 *
 * DESCRIPTION
 * use to get the RFIC SCH read result 
 * Fixed SCH RD resource:
 * LTE: 0~7(HW resource 0~7), FDD: 0~2(HW resource 8~10), TDD: 0~1(HW resource 11~12), C2K: 0~2(HW resource 13~15),GSM: 0~1(HW resource 16~17)
 *------------------------------------------------------------------------------
 *  [IMPORTANT!!!] Please make sure to assign ALL ZERO default value when structure declaration. 
 *                 If users do that, this API can help to check if all pointers are assigned suitably
 *                 and avoid the risk a data abort and memory corruption.
 *------------------------------------------------------------------------------
 *
 * PARAMETERS
 *  mode            : [IN] one of RAT mode in MMRF_MODE_E
 *  set             : [IN] LTE: 0~7, FDD: 0~2, TDD: 0~1, C2K: 0~2,GSM: 0~1
 *  data_L          : [OUT] readback result
 *
 * RETURN VALUES
 *  BSIBPIRS_OK  : The operation is done successfully.
 *  OTHERS       : Some error happened, please refer to return error code.
 *
 * SEE ALSO
 *  N/A
 ******************************************************************************/
MMRF_BSIBPIRS_RESULT_E MMRF_BSIRFIC_SCHRead_GetData(  MMRF_MODE_E mode, kal_uint32 set, kal_uint32 *data_L );
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void MMRF_RFIC_RS_Allocation_Logging( MMRF_MODE_E mode );
void MMRF_MIPI_RS_Allocation_Logging( MMRF_MODE_E mode );
void MMRF_BPI_RS_Allocation_Logging( MMRF_MODE_E mode );

void MMRF_BPIRS_Allocation_UsageMonitor( MMRF_MODE_E mode );
void MMRF_BSIRS_RFIC_Allocation_UsageMonitor( MMRF_MODE_E mode );
void MMRF_BSIRS_MIPI_Allocation_UsageMonitor( MMRF_MODE_E mode );

/* LTE LPM */
#define MMRF_CLEAR_BSI_RXDFE_LOWPWR_MODE()       {HW_WRITE(BSI_RXDFE_LOWPWR_MODE_CLR, 0xFFFFFFFF);}
#define MMRF_CLEAR_BSI_RXDFE_LOWPWR_IMM()        {HW_WRITE(BSI_RXDFE_LOWPWR_IMM_CLR,  0xFFFFFFFF);}

#define MMRF_SET_BSI_RXDFE_LOWPWR_MODE()         {HW_WRITE(BSI_RXDFE_LOWPWR_MODE_SET, 0xFFFFFFFF);}

#endif /* __MMRF_BSIBPIRS_DYNAMIC_ALLOCATION_SUPPORT__ */

//Meta start ABB cal API
void MML1_RF_Start_ABB_Calibration(void);
//Meta Set ABB cal data API
kal_uint16 MML1_RF_Set_ABB_Cal_Result(kal_uint16 lid_index, kal_uint16 lid_size, kal_uint8 *src_p);
kal_uint16 MML1_RF_Get_ABB_Cal_Result_Size(kal_uint16 lid_index);
kal_uint16 MML1_RF_Get_ABB_Cal_Result(kal_uint16 lid_index, kal_uint16 lid_size, kal_uint8 *dst);
kal_uint16 MML1_RF_Get_ABB_Cal_String( kal_uint16 lid_index, kal_char *string_dst );
kal_uint16 MML1_RF_ABB_Cal_NVRAM_Lid_Total_Num_InUse( void );

void MML1_RF_BSISCH_API_DVT_CHECK( void );
void MML1_RF_BPISCH_API_DVT_CHECK( void );

kal_bool MML1_RF_QUERY_RF_BYPASS(void);

//VS1 low power feature API for all RAT
void MML1_RF_VS1_VOTER_CWGen(MML1_RF_VS1_CTRL_T *mml1_rf_vs1_ctrl_ptr);
void MML1_RF_VS1_VOTER_ImmSent(MML1_RF_VS1_IMM_CTRL_T *mml1_rf_vs1_imm_ctrl_ptr);


void MML1_RF_regular_dump_trace_dbg(void);

void MML1_RF_Get_AFC_Cal_Result(kal_uint16 lid_size, kal_uint8 *dst);
void MML1_RF_Set_AFC_Cal_AFCDAC_Result(kal_uint16 afcdac, kal_int32 slope_inv);
void MML1_RF_Set_AFC_Cal_CPAID_Result(kal_uint32 capid);


kal_int16  MMRF_AP_Sensor_Relative_Feature_Query_Status(MMRF_AP_SENSOR_RELATIVE_OP_CODE_E OP_code, MMRF_AP_SENSOR_RELATIVE_RAT_E rat);
kal_bool   MMRF_AP_Sensor_Relative_Feature_IS_Need_L1C_GAP(MMRF_AP_SENSOR_RELATIVE_OP_CODE_E OP_code, kal_int16 scenario, MMRF_AP_SENSOR_RELATIVE_RAT_E rat);
   #ifdef __MTK_TARGET__
void       MMRF_AP_Sensor_Relative_Feature_Handler(ilm_struct *ilm_ptr);
   #else
#define MMRF_AP_Sensor_Relative_Feature_Handler()
   #endif
void MMRFTST_BootUp_RFC_Handler( ilm_struct *ilm_ptr );
kal_bool MMRFC_BootUp_RFC_Query_Execute(void);

void MML1_RF_HPUE_EXT_VPA_MIPI_CtrlParams(MMRF_HPUE_EXT_VPA_MIPI_PARAM_T *mipi_ptr);
void MML1_EXT_VPA_Init(void);
void MML1_RF_HPUE_EXT_VPA_DCM_MODE_CWGen(kal_uint32 *dcm_cw, MMRF_HPUE_DCM_MODE_E dcm_mode_state);

/* efuse check */
#if defined(__MTK_TARGET__) && MMRF_FRE_SW_CHECK_ENABLE
void MML1_RF_Efuse_Int_Fre_Sw_Callback(void);
void MML1_RF_Efuse_Check(MML1_RF_EFUSE_CHECK_T* table_p);
#endif

/*Xtal setting change*/
kal_bool MML1_RF_DCXO_Internal_Offset_Cap_Enable(void);

/*query mipi port number in meta */
   #ifdef __META_MODE_MIPI_RW_SUPPORT__
kal_uint8 MML1_RF_Query_MIPI_Port_Num_In_Meta(void);
   #endif

   #if defined(__MTK_TARGET__)
void MMRFTST_L4C_GMC_Query_Handler( ilm_struct *ilm_ptr );
   #endif
   
/*query default tas idx in meta */
kal_uint8 MML1_RF_Query_TAS_Index_In_Meta(void);

kal_bool MML1_RF_SWTP_Query_Status(MMRF_AP_SENSOR_RELATIVE_RAT_E rat);
#if defined(__SAR_SENSOR_TX_DETECTION_SUPPORT__)
void MML1_RF_Set_Band_Info(MMRF_TxPowerRecord_RAT_T rat,kal_int8 band_idx);
void MML1_RF_TX_Power_Indication_Trigger_Sensor(kal_bool isActive);
void MML1_RF_TX_Power_Indication_Off(MMRF_TxPowerRecord_RAT_T rat);
void MML1_RF_TX_Power_Indication_Reset_Timer(sMML1_TX_POWER_INDICATION_TIMER_PARAM_T *timer_need_reset);
void MML1_RF_TX_Power_Indication_Start_Timer(sMML1_TX_POWER_INDICATION_TIMER_PARAM_T *timer_need_start);
kal_bool MML1_RF_TX_Power_Indication_Condition_Check(sMML1_TX_POWER_INDICATION_TIMER_PARAM_T *timer_need_check,sMML1_TX_POWER_INDICATION_TIMER_PARAM_T *timer_need_reset,kal_uint32 timer_duration,kal_uint32 tforget_duration);
void MML1_RF_TX_Power_Indication_Start(MMRF_TxPowerRecord_RAT_T rat, kal_int8 txPower);
void MML1_RF_TX_Power_Indication_Error_Check(void);
void MMRF_Tx_Power_Indication_Tx_Level_Report(MMRF_TX_POWER_INDICATION_E tx_level);
#endif//__SAR_SENSOR_TX_DETECTION_SUPPORT__

#endif /* End of #ifndef _MML1_RF_INTERFACE_H_ */

