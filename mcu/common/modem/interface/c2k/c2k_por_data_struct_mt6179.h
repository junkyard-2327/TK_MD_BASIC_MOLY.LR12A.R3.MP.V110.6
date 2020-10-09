/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2015
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

#ifndef _C2K_POR_DATA_STRUCT_MT6179_H_
#define _C2K_POR_DATA_STRUCT_MT6179_H_
/*****************************************************************************
* 
* FILE NAME   : c2k_por_data_struct_mt6179.h
*
* DESCRIPTION : Hardware Driver Test Modes Interface. All message structures
*               and Ids are defined in etsicd.doc.
*
* HISTORY     :
*     See Log at end of file
*
*****************************************************************************/
              
/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/


/*******************************************************************************
 * MMRFTST POR shared parameter
 ******************************************************************************/
#if   defined(TK6291)||defined(MT6750)||defined(MT6755)||defined(MT6797)||defined(MT6757)
#define C2K_POR_CA_SUPPORT_NUM                        2
#elif defined(ELBRUS)||defined(MT6763)
#define C2K_POR_CA_SUPPORT_NUM                        4
#else
#error "Unexpected BB Chip was defined in cross core file"
#endif
#define S_CURVE_COEF_NUM                              4
#define TEMPER_SECTION_NUM                            8
#define MAX_RF_CHIP_NUM                               2

#if defined(TK6291)||defined(MT6750)||defined(MT6755)||defined(MT6797)||defined(MT6757)
typedef struct
{  //CCIRQ max 60 bytes : if support 4CA it will exceed this limitation
   kal_uint32          rf_chip_ver;
   kal_uint16          md1_abb_rccal_result;
   kal_uint16          md3_abb_rccal_offset;
   kal_uint16          prx_iq_swap_en[C2K_POR_CA_SUPPORT_NUM];
   kal_uint16          drx_iq_swap_en[C2K_POR_CA_SUPPORT_NUM];
   kal_int32           cload_freq_offset;
   kal_uint16          afcdac;
   kal_uint32          capid;
   kal_int32           slope_inv;
   kal_uint16          drdi_enable;
   kal_uint16          drdi_combined_idx;
   kal_uint32          drdi_set_number;
   kal_uint32          s_curve_coef[S_CURVE_COEF_NUM];
} HwdRfC2kPorInitShareParamT;
#elif defined(ELBRUS)||defined(MT6763)
typedef enum
{
   CCIRQ_RF_HEADER = 0,
   CCIRQ_ABB_HEADER,
   CCIRQ_IQ_HEADER,
   CCIRQ_DCXO_HEADER,
   CCIRQ_DRDI_HEADER,
   CCIRQ_MISC_HEADER,
   CCIRQ_MAX_NUM = 0xFFFF
} CCIRQ_HEADER_E;

typedef struct
{
   CCIRQ_HEADER_E       header;
   kal_uint32           rf_chip_ver;
   kal_uint16           temper_dac[MAX_RF_CHIP_NUM][TEMPER_SECTION_NUM];
   kal_uint16           temper_val[TEMPER_SECTION_NUM];
} CCIRQ_RF_BUFFER_T;

typedef struct
{
   CCIRQ_HEADER_E       header;
   kal_uint16           md1_abb_rccal_result;
   kal_uint16           md3_abb_rccal_offset;
} CCIRQ_ABB_BUFFER_T;

typedef struct
{
   CCIRQ_HEADER_E       header;
   kal_uint16           prx_iq_swap_en[C2K_POR_CA_SUPPORT_NUM];
   kal_uint16           drx_iq_swap_en[C2K_POR_CA_SUPPORT_NUM];
} CCIRQ_IQ_BUFFER_T;

typedef struct
{
   CCIRQ_HEADER_E       header;
   kal_int32            cload_freq_offset;
   kal_uint16           afcdac;
   kal_uint32           capid;
   kal_int32            slope_inv;
   kal_uint32           s_curve_coef[S_CURVE_COEF_NUM];
} CCIRQ_DCXO_BUFFER_T;

typedef struct
{
   CCIRQ_HEADER_E       header;
   kal_uint16           drdi_enable;
   kal_uint16           drdi_combined_idx;
   kal_uint32           drdi_set_number;
} CCIRQ_DRDI_BUFFER_T;

typedef struct
{
   CCIRQ_HEADER_E       header;
} CCIRQ_MISC_BUFFER_T;

typedef struct
{  //CCIRQ max 60 bytes : if support 4CA it will exceed this limitation
   CCIRQ_RF_BUFFER_T    ccirq_rf_buffer;
   CCIRQ_ABB_BUFFER_T   ccirq_abb_buffer;
   CCIRQ_IQ_BUFFER_T    ccirq_iq_buffer;
   CCIRQ_DCXO_BUFFER_T  ccirq_dcxo_buffer;
   CCIRQ_DRDI_BUFFER_T  ccirq_drdi_buffer;
   CCIRQ_MISC_BUFFER_T  ccirq_misc_buffer;
} HwdRfC2kPorInitShareParamT;
#else 
#error "Unexpected BB Chip was defined in cross core file"
#endif

/*=============================================================================
 Global Data
===============================================================================*/


/*****************************************************************************
* End of File
*****************************************************************************/
#endif

