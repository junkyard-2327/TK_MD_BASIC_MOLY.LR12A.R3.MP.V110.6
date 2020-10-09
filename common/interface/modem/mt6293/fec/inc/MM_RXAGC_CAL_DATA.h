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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   MM_RXAGC_CAL_DATA.h
 *
 * Project:
 * --------
 *   MT6293 Project
 *
 * Description:
 * ------------
 *   MT6293 LTE/WCDMA RXAGC Calibration Data Structure
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by Perforce. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by Perforce. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _MM_RXAGC_CAL_DATA_H__
#define _MM_RXAGC_CAL_DATA_H__

/************************************************************************************
*  Includes
************************************************************************************/

#include "kal_general_types.h"
#include "kal_hrt_api.h"

/************************************************************************************
*  Defines
************************************************************************************/
#define SRAM_BYTE_128_ALIGN                    (128)  
#define SRAM_PADDIND_TO_128_ALIGN(x)           ((((x)%SRAM_BYTE_128_ALIGN)==0)?SRAM_BYTE_128_ALIGN:(SRAM_BYTE_128_ALIGN - ((x)%SRAM_BYTE_128_ALIGN)))
#define RXAGC_LNA_MODE_NUM               (7)
#define RXAGC_LNA_MODE_LPM_NUM           (1)
#define RXAGC_CAL_TEMP_SECTION_LTE       (8)  
#define RXAGC_RXDC_TIA_GAIN_STEPS        (2)    /* TIA Gain Step: 1:63.5   2:69.5  */
#define RXAGC_RXDC_IF_GAIN_STEPS         (7)    /* IF Gain Step: 0:0  1:3  2:6  3:9  4:12  5:15  6:18  */
#define RXAGC_LTE_MAX_DL_SRX_NUM         (2)

#define RXAGC_ANT_NUM                    (2)
#define RXAGC_CC_NUM                     (2)

#define RXAGC_CAL_DL_EARFCN_SECTION_LTE  (15)

//DMA burst info
#define RXAGC_MAX_DC_BURST_NUM            (2) //for path0 and path1
#define RXAGC_MAX_PL_BURST_NUM            (2) //for C0, C1
#define RXAGC_MAX_TEMP_OFFSET_BURST_NUM   (2) //for path0 and path1

#ifdef __LTE_L1SIM__
typedef unsigned char            UINT8;
typedef signed char              INT8;
typedef unsigned short int       UINT16;
typedef signed short int         INT16;
typedef unsigned int             UINT32;
typedef signed int               INT32;
typedef unsigned long long       UINT64;
typedef long long                INT64;
typedef unsigned char            BOOL;
typedef unsigned int             BOOL32;
#else
typedef kal_uint8                UINT8;
typedef kal_int8                 INT8;
typedef kal_uint16               UINT16;
typedef kal_int16                INT16;
typedef kal_uint32               UINT32;
typedef kal_int32                INT32;
typedef kal_uint64               UINT64;
typedef kal_int64                INT64;
typedef kal_uint8                BOOL;
typedef kal_uint32               BOOL32;
#endif
/************************************************************************************
*  Structures
************************************************************************************///PATHLOSS STRUCTURE
typedef struct
{
   INT16 lpm_pathloss;       //bit 0~15, format .5 db
   INT16 hpm_pathloss;       //bit 16~31, format .5 db
}MM_RXAGC_PL_RAW_DATA_T;

typedef struct
{
   MM_RXAGC_PL_RAW_DATA_T pathloss_sc_raw[RXAGC_LNA_MODE_NUM];
   MM_RXAGC_PL_RAW_DATA_T pathloss_gbg_raw[RXAGC_LNA_MODE_NUM][RXAGC_LNA_MODE_NUM];
   UINT8 ready_bit;
}MM_RXAGC_PL_TBL_ADD_RDY_T;

typedef struct
{
   MM_RXAGC_PL_TBL_ADD_RDY_T pathloss_rdy;
   UINT8 padding_to_128_bytes[SRAM_PADDIND_TO_128_ALIGN(sizeof(MM_RXAGC_PL_TBL_ADD_RDY_T))];                                                                  
}MM_RXAGC_PL_TBL_PADDING_T;

typedef struct
{
   MM_RXAGC_PL_TBL_PADDING_T pathloss_table[RXAGC_ANT_NUM];
}MM_RXAGC_PL_TBL_L1_EMI_T;

typedef struct
{
   INT16 pl_of_temp[RXAGC_CAL_TEMP_SECTION_LTE];                                                              
}MM_RXAGC_PL_TEMP_DATA_T;

//DC
typedef struct
{
   INT16 dig_dc;       //bit 0~15, format s5.0
   INT16 rf_dc;        //bit 16~31, format s0.14
}MM_RXAGC_DC_COMP_DATA_T;

typedef struct
{
   MM_RXAGC_DC_COMP_DATA_T hpm_dc_i[RXAGC_RXDC_TIA_GAIN_STEPS][RXAGC_RXDC_IF_GAIN_STEPS];
   MM_RXAGC_DC_COMP_DATA_T lpm_dc_i[RXAGC_RXDC_TIA_GAIN_STEPS][RXAGC_RXDC_IF_GAIN_STEPS];

   MM_RXAGC_DC_COMP_DATA_T hpm_dc_q[RXAGC_RXDC_TIA_GAIN_STEPS][RXAGC_RXDC_IF_GAIN_STEPS];
   MM_RXAGC_DC_COMP_DATA_T lpm_dc_q[RXAGC_RXDC_TIA_GAIN_STEPS][RXAGC_RXDC_IF_GAIN_STEPS];

   UINT8 ready_bit;
}MM_RXAGC_RF_DC_TBL_ADD_RDY_T;

typedef struct
{
   MM_RXAGC_RF_DC_TBL_ADD_RDY_T dc_rdy;
   UINT8 padding_to_128_bytes[SRAM_PADDIND_TO_128_ALIGN(sizeof(MM_RXAGC_RF_DC_TBL_ADD_RDY_T))];                                                                  
}MM_RXAGC_RF_DC_TBL_PADDING_T;

typedef struct
{
   MM_RXAGC_RF_DC_TBL_PADDING_T dc_table[RXAGC_ANT_NUM];                                                                
}MM_RXAGC_RF_DC_TBL_L1_EMI_T;


typedef struct
{
   MM_RXAGC_PL_RAW_DATA_T pathloss_raw[RXAGC_LNA_MODE_NUM];
}LTE_RXAGC_PL_SUBBAND_TYPE1_T;

typedef struct
{
   MM_RXAGC_PL_RAW_DATA_T pathloss_raw_sc[RXAGC_LTE_MAX_DL_SRX_NUM][RXAGC_LNA_MODE_NUM]; // SC PL; use case: one srx path is activated, and another path is de-activated
   MM_RXAGC_PL_RAW_DATA_T pathloss_raw_gbg[RXAGC_LTE_MAX_DL_SRX_NUM][RXAGC_LNA_MODE_NUM][RXAGC_LNA_MODE_NUM];// Gain By Gain PL; use case: both srx paths are activated
}LTE_RXAGC_PL_SUBBAND_TYPE2_T;

//reorgnize pathloss at L1EMI
typedef struct
{
   LTE_RXAGC_PL_SUBBAND_TYPE1_T pathloss[RXAGC_CAL_DL_EARFCN_SECTION_LTE][RXAGC_ANT_NUM];
   MM_RXAGC_PL_TEMP_DATA_T pathlossTempData;
}LTE_RXAGC_PL_ROUTE_TYPE1_T;

typedef struct
{
   LTE_RXAGC_PL_SUBBAND_TYPE2_T pathloss[RXAGC_CAL_DL_EARFCN_SECTION_LTE][RXAGC_ANT_NUM];
   MM_RXAGC_PL_TEMP_DATA_T pathlossTempData;
}LTE_RXAGC_PL_ROUTE_TYPE2_T;

typedef struct
{
   MM_RXAGC_PL_TBL_L1_EMI_T pl_11emi[RXAGC_CC_NUM];
   UINT32 comp_route[RXAGC_CC_NUM];
   UINT32 buff_idx;
   UINT8 padding_to_128_bytes[SRAM_PADDIND_TO_128_ALIGN((sizeof(MM_RXAGC_PL_TBL_L1_EMI_T)*RXAGC_CC_NUM) + (sizeof(UINT32)*RXAGC_CC_NUM) + sizeof(UINT32))];
}LTE_RXAGC_PL_TBL_L1_EMI_T;
/************************************************************************************
*  define struct for FEC calibration data burst info @ CUIF 
************************************************************************************/
/************************************************************************************
* Interpolation:
pathloss[subchannel_1]+ (center_freq-freq[subchannel_1])*[PATH_LOSS_INTERPOLATION_FACTOR*(pathloss[subchannel_2]-pathloss[subchannel_1])/(freq[subchannel_2]-freq[subchannel_1])]/PATH_LOSS_INTERPOLATION_FACTOR 

* Patial Interpolation parameters calculated in L1core:
slope_freq_numerator = (center_freq-freq[subchannel_1])
slope_freq_denominator = (freq[subchannel_2]-freq[subchannel_1])
************************************************************************************/

typedef struct
{
   UINT8   itpl_valid; // valid(1): can do interpolation, invalid(0): diretly apply upper/lower subchannel pathloss    
   INT16   slope_freq_denominator; //in 100kHz, used to offload the interpolation calculation in FEC,
   INT16   slope_freq_numerator; //in 100kHz, used to offload the interpolation calculation in FEC,
}LTE_RXAGC_PL_PARTIAL_INTERPOLATION_INFO_T;

typedef struct
{
   UINT8  valid;        //indicator for calibration data valid or not
   UINT32 source_addr;  //cailbration data source address @ L1EMI                                                            
}LTE_RXAGC_CALDATA_GENERAL_BURST_DETAIL_T;

typedef struct
{
   LTE_RXAGC_CALDATA_GENERAL_BURST_DETAIL_T  general;  
   LTE_RXAGC_PL_PARTIAL_INTERPOLATION_INFO_T itpl_para; 
}LTE_RXAGC_CALDATA_PL_BURST_DETAIL_T;

typedef struct
{  
   LTE_RXAGC_CALDATA_GENERAL_BURST_DETAIL_T dc_part[RXAGC_MAX_DC_BURST_NUM];
   LTE_RXAGC_CALDATA_PL_BURST_DETAIL_T pathloss_part[RXAGC_MAX_PL_BURST_NUM]; 
   LTE_RXAGC_CALDATA_GENERAL_BURST_DETAIL_T temp_offset_part[RXAGC_MAX_TEMP_OFFSET_BURST_NUM]; 
}LTE_RXAGC_CALDATA_BURST_INFO_T;


/************************************************************************************
* Global Variables (Interface)
************************************************************************************/

/************************************************************************************
* Global Functions Prototype (Interface)
************************************************************************************/


#endif //_MM_RXAGC_CAL_DATA_H__


