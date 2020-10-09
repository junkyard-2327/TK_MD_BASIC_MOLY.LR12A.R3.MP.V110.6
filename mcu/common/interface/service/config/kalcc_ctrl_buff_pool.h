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
 *   cc_ctrl_buff_pool.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 *   
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _CC_CTRL_BUFF_POOL_H
#define _CC_CTRL_BUFF_POOL_H

#include "kal_general_types.h"

typedef enum {
   NUM_CUSTOM_CC_CTRL_BUFF_POOL_SIZE32     = 0,
   NUM_CUSTOM_CC_CTRL_BUFF_POOL_SIZE64     = 0,
   NUM_CUSTOM_CC_CTRL_BUFF_POOL_SIZE128    = 0,
   NUM_CUSTOM_CC_CTRL_BUFF_POOL_SIZE256    = 0,
   NUM_CUSTOM_CC_CTRL_BUFF_POOL_SIZE512    = 0,
   NUM_CUSTOM_CC_CTRL_BUFF_POOL_SIZE1024   = 0,
   NUM_CUSTOM_CC_CTRL_BUFF_POOL_SIZE2048   = 0,
   NUM_CUSTOM_CC_CTRL_BUFF_POOL_SIZE4096   = 0,
#ifdef  __UMTS_RAT__
   NUM_CUSTOM_CC_CTRL_BUFF_POOL_SIZE8192   = 0,
   NUM_CUSTOM_CC_CTRL_BUFF_POOL_SIZE16384  = 0,
   NUM_CUSTOM_CC_CTRL_BUFF_POOL_SIZE32768  = 0,
   NUM_CUSTOM_CC_CTRL_BUFF_POOL_SIZE65536  = 0,
   NUM_CUSTOM_CC_CTRL_BUFF_POOL_SIZE100000 = 0,
#endif
} custom_cc_ctrl_num_buff_pool_size;

/*************************KAL private memory config stuff*******************/

#ifdef  __UMTS_RAT__
#define RPS_CREATED_CC_CTRL_BUFF_POOLS 13
#else   /* __UMTS_RAT__ */
#define RPS_CREATED_CC_CTRL_BUFF_POOLS 8
#endif  /* __UMTS_RAT__ */


/*************************************************************************
 * Type Definitions
 *************************************************************************/
/* For performance reason, general buffer pool is allocated for 2^n size */
typedef enum {
   CC_CTRL_BUFF_POOL_SIZE32      = 32,
   CC_CTRL_BUFF_POOL_SIZE64      = 64,
   CC_CTRL_BUFF_POOL_SIZE128     = 128,
   CC_CTRL_BUFF_POOL_SIZE256     = 256,
   CC_CTRL_BUFF_POOL_SIZE512     = 512,
   CC_CTRL_BUFF_POOL_SIZE1024    = 1024,
   CC_CTRL_BUFF_POOL_SIZE2048    = 2048,
   CC_CTRL_BUFF_POOL_SIZE4096    = 4096,
#ifdef  __UMTS_RAT__
   CC_CTRL_BUFF_POOL_SIZE8192    = 8192,
   CC_CTRL_BUFF_POOL_SIZE16384   = 16384,
   CC_CTRL_BUFF_POOL_SIZE32768   = 32768,
   CC_CTRL_BUFF_POOL_SIZE65536   = 65536,
   CC_CTRL_BUFF_POOL_SIZE100000  = 100000,
   CC_CTRL_BUFF_POOL_MAX_BUFF_SIZE = CC_CTRL_BUFF_POOL_SIZE100000
#else   /* __UMTS_RAT__ */
   CC_CTRL_BUFF_POOL_MAX_BUFF_SIZE = CC_CTRL_BUFF_POOL_SIZE4096
#endif  /* __UMTS_RAT__ */
} cc_ctrl_buff_pool_size;


#if defined(_SIMULATION)
typedef enum {
#if defined (__ESL_COSIM_LTE__)
   NUM_CC_CTRL_BUFF_POOL_SIZE32     = 3,
   NUM_CC_CTRL_BUFF_POOL_SIZE64     = 3,
   NUM_CC_CTRL_BUFF_POOL_SIZE128    = 3,
   NUM_CC_CTRL_BUFF_POOL_SIZE256    = 3,
   NUM_CC_CTRL_BUFF_POOL_SIZE512    = 3,
   NUM_CC_CTRL_BUFF_POOL_SIZE1024   = 3,
   NUM_CC_CTRL_BUFF_POOL_SIZE2048   = 3,
#else /* __ESL_COSIM_LTE__ */
   NUM_CC_CTRL_BUFF_POOL_SIZE32     = 20,
   NUM_CC_CTRL_BUFF_POOL_SIZE64     = 10,
   NUM_CC_CTRL_BUFF_POOL_SIZE128    = 10,
   NUM_CC_CTRL_BUFF_POOL_SIZE256    = 10,
   NUM_CC_CTRL_BUFF_POOL_SIZE512    = 10,
   NUM_CC_CTRL_BUFF_POOL_SIZE1024   = 10,
   NUM_CC_CTRL_BUFF_POOL_SIZE2048   = 8,
#endif /* __ESL_COSIM_LTE__ */
   NUM_CC_CTRL_BUFF_POOL_SIZE4096   = 0,
   NUM_CC_CTRL_BUFF_POOL_SIZE8192   = 0,
   NUM_CC_CTRL_BUFF_POOL_SIZE16384  = 0,
   NUM_CC_CTRL_BUFF_POOL_SIZE32768  = 0,
   NUM_CC_CTRL_BUFF_POOL_SIZE65536  = 0,
   NUM_CC_CTRL_BUFF_POOL_SIZE100000 = 0
} cc_ctrl_num_buff_pool_size;
#elif defined(__KTEST__) &&  !defined(_DYN_KTEST_)
typedef enum {
   NUM_CC_CTRL_BUFF_POOL_SIZE32     = 20,
   NUM_CC_CTRL_BUFF_POOL_SIZE64     = 10,
   NUM_CC_CTRL_BUFF_POOL_SIZE128    = 10,
   NUM_CC_CTRL_BUFF_POOL_SIZE256    = 10,
   NUM_CC_CTRL_BUFF_POOL_SIZE512    = 10,
   NUM_CC_CTRL_BUFF_POOL_SIZE1024   = 10,
   NUM_CC_CTRL_BUFF_POOL_SIZE2048   = 8,
   NUM_CC_CTRL_BUFF_POOL_SIZE4096   = 5,
   NUM_CC_CTRL_BUFF_POOL_SIZE8192   = 5,
   NUM_CC_CTRL_BUFF_POOL_SIZE16384  = 5,
   NUM_CC_CTRL_BUFF_POOL_SIZE32768  = 5,
   NUM_CC_CTRL_BUFF_POOL_SIZE65536  = 5,
   NUM_CC_CTRL_BUFF_POOL_SIZE100000 = 5
} cc_ctrl_num_buff_pool_size;
#else
typedef enum {
   NUM_CC_CTRL_BUFF_POOL_SIZE32     = 310,
   NUM_CC_CTRL_BUFF_POOL_SIZE64     = 130,
   NUM_CC_CTRL_BUFF_POOL_SIZE128    = 80,
   NUM_CC_CTRL_BUFF_POOL_SIZE256    = 70,
   NUM_CC_CTRL_BUFF_POOL_SIZE512    = 30,
   NUM_CC_CTRL_BUFF_POOL_SIZE1024   = 20,
   NUM_CC_CTRL_BUFF_POOL_SIZE2048   = 17,  
 #if !defined(__UMTS_RAT__)
   NUM_CC_CTRL_BUFF_POOL_SIZE4096   = 5
 #else
   NUM_CC_CTRL_BUFF_POOL_SIZE4096   = 5,
   NUM_CC_CTRL_BUFF_POOL_SIZE8192   = 4,
   NUM_CC_CTRL_BUFF_POOL_SIZE16384  = 3,
   NUM_CC_CTRL_BUFF_POOL_SIZE32768  = 2,
   NUM_CC_CTRL_BUFF_POOL_SIZE65536  = 2,
   NUM_CC_CTRL_BUFF_POOL_SIZE100000 = 0
 #endif
 
} cc_ctrl_num_buff_pool_size;

#endif

/*************************************************************************
 * Exported Global Variables
 *************************************************************************/


/*************************************************************************
 * Exported Function Prototypes
 *************************************************************************/
extern void init_shared_ctrl_buff_pool();

#endif /* _CC_CTRL_BUFF_POOL_H */


