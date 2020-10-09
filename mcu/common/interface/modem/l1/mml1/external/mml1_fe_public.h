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
 *   mml1_fe_public.h
 *
 * Project:
 * --------
 *   Elbrus
 *
 * Description:
 * ------------
 *   The structure definition of MML1 FE (Front-End) data
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#ifndef MML1_FE_PUBLIC_H
#define MML1_FE_PUBLIC_H

#include "kal_general_types.h"
#include "mml1_mipi_public.h"

#define  MML1_ELNA_PIN_NONE                             0x1F
#define  MML1_ELNA_PIN_NUM_SUPPORT                      2
#define  MML1_MICROSECOND_TIMES_FACTOR                  5
#define  MML1_MICROSECOND_TRANS(us)                     (us<<MML1_MICROSECOND_TIMES_FACTOR)

#define MML1_RF_ELNA_PDATABASE_SETTING(b,s)                                                        \
{                                                                                                  \
   {                                                                                               \
      b,                                                                                           \
      b##_CATEGORY_##s,                                                                            \
      b##_CONTROL_INTERFACE_##s,                                                                   \
      b##_SETTLING_TIME_##s,                                                                       \
      {                                                                                            \
         {PDATA_##b##_PIN0_##s, {PDATA_##b##_PIN0_ON_DATA_##s, PDATA_##b##_PIN0_BYPASS_DATA_##s}}, \
         {PDATA_##b##_PIN1_##s, {PDATA_##b##_PIN1_ON_DATA_##s, PDATA_##b##_PIN1_BYPASS_DATA_##s}}  \
      },                                                                                           \
   },                                                                                              \
   b##_MIPI_DATA_##s,                                                                              \
}

#define MMRF_FE_ELNA_LIST_RAW_M(sET)                          \
{                                                             \
   MML1_RF_ELNA_PDATABASE_SETTING(MML1_FE_ELNA_NONE, sET),    \
   MML1_RF_ELNA_PDATABASE_SETTING(MML1_FE_ELNA1, sET),        \
   MML1_RF_ELNA_PDATABASE_SETTING(MML1_FE_ELNA2, sET),        \
   MML1_RF_ELNA_PDATABASE_SETTING(MML1_FE_ELNA3, sET),        \
   MML1_RF_ELNA_PDATABASE_SETTING(MML1_FE_ELNA4, sET),        \
   MML1_RF_ELNA_PDATABASE_SETTING(MML1_FE_ELNA5, sET),        \
   MML1_RF_ELNA_PDATABASE_SETTING(MML1_FE_ELNA6, sET),        \
   MML1_RF_ELNA_PDATABASE_SETTING(MML1_FE_ELNA7, sET),        \
   MML1_RF_ELNA_PDATABASE_SETTING(MML1_FE_ELNA8, sET),        \
   MML1_RF_ELNA_PDATABASE_SETTING(MML1_FE_ELNA9, sET),        \
   MML1_RF_ELNA_PDATABASE_SETTING(MML1_FE_ELNA10, sET),       \
   MML1_RF_ELNA_PDATABASE_SETTING(MML1_FE_ELNA11, sET),       \
   MML1_RF_ELNA_PDATABASE_SETTING(MML1_FE_ELNA12, sET),       \
}

typedef enum
{
   MML1_CONTROL_BPI,
   MML1_CONTROL_MIPI,
   MML1_CONTROL_NONE = 0xFF,
}MML1_CONTROL_INTERFACE_E;

typedef enum
{
   MML1_FE_ELNA_NONE,
   MML1_FE_ELNA1,
   MML1_FE_ELNA2,
   MML1_FE_ELNA3,
   MML1_FE_ELNA4,
   MML1_FE_ELNA5,
   MML1_FE_ELNA6,
   MML1_FE_ELNA7,
   MML1_FE_ELNA8,
   MML1_FE_ELNA9,
   MML1_FE_ELNA10,
   MML1_FE_ELNA11,
   MML1_FE_ELNA12,
   MML1_FE_ELNA_NUM,
}MML1_FE_ELNA_ROUTE_E;

typedef enum
{
   MML1_ELNA_MODE_ON,
   MML1_ELNA_MODE_BYPASS,
   MML1_ELNA_MODE_NUM,
   MML1_ELNA_MODE_NULL = 0xFF,
}MMRF_ELNA_TYPE_E;

typedef enum
{
   MML1_ELNA_OFF,
   MML1_ELNA_ALWAYS_ON,
   MML1_ELNA_ALWAYS_ON_2ND_SAW,
   MML1_ELNA_BYPASS,
   MML1_ELNA_BYPASS_2ND_SAW,
   MML1_ELNA_MAX,
}MML1_FE_ELNA_CATEGORY_E;

typedef struct
{
   MMRF_ELNA_TYPE_E mipi_elm_type;                  // mipi element type
   kal_uint16 mipi_port_sel;                        // 0:for Port0, 1:for Port1
   kal_uint16 mipi_data_seq;                        // data write sequence format
   USID_T     mipi_usid;                            // mipi usid
   kal_uint16 mipi_addr;                            // mipi addr
   kal_uint32 mipi_data;                            // mipi data
}MML1_MIPI_DATA_TABLE_T;


// BPI Custom data struct
typedef struct
{
   kal_uint32                 elna_bpi_sel; //BPI pin for elna control
   kal_uint32                 elna_bpi_rawdata[MML1_ELNA_MODE_NUM]; // 0: for on, 1: for bypass
}MML1_FE_ELNA_BPI_DATA_T;

typedef struct
{
   kal_uint32                 elna_bpi_pin_mask; //BPI pin with 32bit format
   kal_uint32                 elna_bpi_data_mask[MML1_ELNA_MODE_NUM]; // 0: for on, 1: for bypass
}MML1_FE_ELNA_BPI_MASK_T;

// parsing MIPI custom data
typedef struct
{
   MMRF_ELNA_TYPE_E       elna_mipi_type;
   kal_uint32             mipi_port_sel;   //NOTICE: need to translate to MML1_RF_BSIMM_PORT_T before allocation
   kal_uint32             data;
   kal_uint32             wlen;
}MML1_FE_MIPI_DATA_T;

typedef struct
{
   MML1_FE_ELNA_ROUTE_E        elna_index;
   MML1_FE_ELNA_CATEGORY_E     elna_category;
   MML1_CONTROL_INTERFACE_E    elna_control_interface;
   kal_uint32                  elna_settling_time;
   MML1_FE_ELNA_BPI_DATA_T     elna_bpi_custom_data[MML1_ELNA_PIN_NUM_SUPPORT]; //BPI RAW data
}MML1_FE_ELNA_CUSTOM_DATA_T;

// eLNA RAW database
typedef struct
{
   MML1_FE_ELNA_CUSTOM_DATA_T      elna_config_data;
   const MML1_MIPI_DATA_TABLE_T    *elna_mipi_custom_table;
}MML1_FE_ELNA_RAW_T;

//data struct for NVRAM
typedef struct
{
   kal_uint32                  elna_settling_time[MML1_FE_ELNA_NUM];
}MML1_FE_ELNA_NVRAM_T;

//each eLNA parsing database
typedef struct
{
   MML1_FE_ELNA_CUSTOM_DATA_T  elna_config_data;
   MML1_FE_ELNA_BPI_MASK_T     elna_bpi_mask_data; // BPI data with 32bit format
   MML1_FE_MIPI_DATA_T         elna_mipi_data[MML1_ELNA_MODE_NUM];
}MML1_FE_ELNA_IND_T;

typedef struct
{
   MML1_FE_ELNA_IND_T   elna_ind_database[MML1_FE_ELNA_NUM];
   kal_uint32           elna_bpi_control_mask;
}MML1_FE_ELNA_T;



typedef struct
{
   MML1_FE_ELNA_RAW_T elna_raw_database[MML1_FE_ELNA_NUM];
}MML1_FE_COMPONENTS_LIST_RAW_T;


typedef struct
{
   MML1_FE_ELNA_T elna_database;

   //add new front-end components below
   //MMRF_FE_ComponentName_T componentName;
}MML1_FE_COMPONENTS_LIST_T;


#endif
