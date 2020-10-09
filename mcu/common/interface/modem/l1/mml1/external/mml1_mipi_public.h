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
 *   mml1_mipi_public.h
 *
 * Project:
 * --------
 *   TK6291
 *
 * Description:
 * ------------
 *   The structure definition of MML1 MIPI data
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
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#ifndef MML1_MIPI_PUBLIC_H
#define MML1_MIPI_PUBLIC_H

#include "kal_general_types.h"

typedef kal_uint8  USID_T;             //4 bits valid
typedef kal_uint8  PRODUCT_ID_T;       //8 bits valid
typedef kal_uint16 MANUFACTORY_ID_T;   //10 bits valid
typedef kal_uint8  MIPI_PORT_T;

/* =============================================== */
#define MML1_MIPI_MAX_INITIAL_CW_NUM       10
#define MML1_MIPI_MAX_USID_CHANGE_NUM       5
#define MML1_MIPI_PER_USID_CHANGE_NUM       3
#define MML1_MIPI_MAX_HW_CHECK_NUM         10
#define MML1_MIPI_MAX_LPM_CW_NUM           16

#define USID_NULL                      0x0000
#define USID_REG_W                     0x0001
#define USID_REG_W_EXT                 0x0002

#define MML1_REG_0_W                   0x0001
#define MML1_REG_W                     0x0002
#define MML1_REG_R                     0x0003
#define MML1_REG_W_EXT_1ST             0x0004
#define MML1_REG_W_EXT_BYTE            0x0005
#define MML1_REG_W_EXT_END             0x0006
#define MML1_IMM_BSI_WAIT              0x0007
#define MML1_REG_W_EXT                 0x0008

//port select
#if defined(__ELBRUS_PARTIAL_DFE__)
/* BSI MIPI0 -> FPGA MIPI clk/data -> 6179 MIPI0 clk/data */
/* BSI MIPI1 -> FPGA BPI12/13      -> 6179 MIPI3 clk/data */
#define MML1_MIPI_PORT0                0x0000
#define MML1_MIPI_PORT1                0x0001 //not use
#define MML1_MIPI_PORT2                0x0002 //not use
#define MML1_MIPI_PORT3                0x0001
#define MML1_MIPI_PORT4                0x0004 //not use
#define MML1_MIPI_PORT5                0x0005 //not use
#define MML1_MIPI_PORT6                0x0006 //not use
#define MML1_MIPI_PORT7                0x0007 //not use
#else
#define MML1_MIPI_PORT0                0x0000
#define MML1_MIPI_PORT1                0x0001
#define MML1_MIPI_PORT2                0x0002
#define MML1_MIPI_PORT3                0x0003
#define MML1_MIPI_PORT4                0x0004
#define MML1_MIPI_PORT5                0x0005
#define MML1_MIPI_PORT6                0x0006
#define MML1_MIPI_PORT7                0x0007
#endif

//element type
#define MML1_MIPI_NULL                 0x0000
#define MML1_MIPI_ASM                  0x0001
#define MML1_MIPI_ANT                  0x0002
#define MML1_MIPI_PA                   0x0003
#define MML1_MIPI_PA_SEC               0x0004
#define MML1_MIPI_END_PATTERN          0xFFFF

#define US2OFFCNT(us)               ((us)*6144/100)
#define WAITUSCNT(us)               ((us)*52)

//EXT VPA INIT data number
#define MML1_EXT_VPA_INITIAL_CW_NUM    20
#define MML1_EXT_VPA_CW_END            0xFFFF
//EXT VPA element type
#define MML1_EXT_VPA_NULL              0x0000
#define MML1_EXT_VPA_QM81050           0x0001

#define MML1_QM81050_VDAC_CW           0x2
#define MML1_QM81050_DCM_MODE_CW       0xA
#define MML1_QM81050_DCM_MODE_DATA     0x91
#define MML1_QM81050_DCM_MODE_DISABLE_DATA 0x0

/* =============================================== */
typedef struct
{
   kal_uint16            mipi_addr;      // Port where data to send
   kal_uint32            mipi_data;      // mipi data
}MML1_MIPI_ADDR_DATA_T;   

typedef struct
{
   kal_uint16            mipi_elm_type;  // mipi element type
   MIPI_PORT_T           mipi_port_sel;  // 0:for Port0, 1:for Port1 
   kal_uint16            mipi_data_seq;  // data write sequence format
   USID_T                mipi_usid;      // usid
   MML1_MIPI_ADDR_DATA_T mipi_addr_data; // mipi address & data
   kal_uint32            mipi_wait_time; // mipi wait time
}MML1_MIPI_INITIAL_CW_T;

typedef struct
{
   kal_uint16            usid_procedure;
   MIPI_PORT_T           mipi_port_sel;
   USID_T                current_usid;
   PRODUCT_ID_T          product_id;
   MANUFACTORY_ID_T      manufactory_id;
   USID_T                new_usid;
}MML1_MIPI_USID_CHANGE_T;

typedef struct
{
   kal_uint16            mipi_elm_type;
   MIPI_PORT_T           mipi_port_sel;
   USID_T                usid;
   PRODUCT_ID_T          product_id;
   MANUFACTORY_ID_T      manufactory_id;
}MML1_MIPI_CHECK_HW_T;

typedef struct
{
   kal_uint16            mipi_elm_type;  // mipi element type
   MIPI_PORT_T           mipi_port_sel;  // 0:for Port0, 1:for Port1 
   kal_uint16            mipi_data_seq;  // data write sequence format
   USID_T                mipi_usid;      // usid
   MML1_MIPI_ADDR_DATA_T mipi_addr_data; // mipi address & data
   kal_uint32            mipi_wait_time; // mipi wait time
}MML1_MIPI_LPM_CW_T;

typedef struct
{
   kal_uint16            mipi_data_seq;
   MML1_MIPI_ADDR_DATA_T mipi_addr_data;
}MML1_EXT_VPA_INITIAL_CW_T;

typedef struct
{
   kal_uint16                 vpa_elm_type;
   MIPI_PORT_T                mipi_port_sel;
   USID_T                     mipi_usid;
   MML1_EXT_VPA_INITIAL_CW_T  vpa_initial_cw[MML1_EXT_VPA_INITIAL_CW_NUM];
}MML1_EXT_VPA_CW_T;

typedef enum
{
   HPUE_INFO_OK = 0,
   HPUE_INFO_IS_EMPTY,
   HPUE_INFO_IS_WRONG,
   HPUE_INFO_NUM
}MMRF_HPUE_INFO_RESULT_E;

typedef struct
{
   MMRF_HPUE_INFO_RESULT_E result;
   kal_uint32              mipi_port;
   kal_uint32              mipi_lock;
   kal_uint32              mipi_wLength;
}MMRF_HPUE_EXT_VPA_MIPI_PARAM_T;

typedef enum
{
   HPUE_DCM_MODE_EN = 0,
   HPUE_DCM_MODE_DISABLE,
   HPUE_DCM_MODE_NUM
}MMRF_HPUE_DCM_MODE_E;

#endif
