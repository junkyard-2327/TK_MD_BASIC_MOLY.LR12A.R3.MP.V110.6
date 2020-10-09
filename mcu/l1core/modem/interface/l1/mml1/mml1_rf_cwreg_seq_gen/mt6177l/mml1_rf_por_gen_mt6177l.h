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
 *   mml1_rf_por_gen_mt6177l.h
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   MMRF POR gen definition
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
 *
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
 
 #ifndef __MMRFSEQGEN_POR_H__
#define __MMRFSEQGEN_POR_H__
#include "kal_general_types.h"
typedef union
{
   kal_uint32 cw;
   struct
   {
      kal_uint32 data       : 20;
      kal_uint32 addr       : 10;
      kal_uint32 reserved   : 2;
   }field;
}RF_CW_T;

#if defined(L1_SIM)
#define MMRF_CW_T(_addr,_data)          ((kal_uint32)((((kal_uint32)(_addr)&0x3FF)<<20)|((kal_uint32)(_data)&0xFFFFF)))
#else
#define MMRF_CW_T(_addr,_data)          ((RF_CW_T)((((kal_uint32)(_addr)&0x3FF)<<20)|((kal_uint32)(_data)&0xFFFFF)))
#endif

typedef struct
{
   RF_CW_T       POR_CW;
}MML1_RF_POR_T;


/* POR data num */
#define  MMRF_POR_ORION_SLEEP_DCXO_DATA_NUM             1
#define  MMRF_POR_POWER_UP_MACRO_BG_EVT0_DATA_NUM       1
#define  MMRF_POR_POWER_UP_MACRO_BG_EVT1_DATA_NUM       2
#define  MMRF_POR_POWER_UP_MACRO_BG_EVT2_DATA_NUM       1
#define  MMRF_POR_POWER_UP_MACRO_BG_EVT3_DATA_NUM       1
#define  MMRF_POR_REVISED_POR_DATA_NUM                 35

/* POR event settling time */
#define  MMRF_POR_TRIGGER_SETTLING_TIME                     250
#define  MMRF_POR_ORION_SLEEP_DCXO_SETTLING_TIME              0
#define  MMRF_POR_POWER_UP_MACRO_BG_EVT0_SETTLING_TIME       10
#define  MMRF_POR_POWER_UP_MACRO_BG_EVT1_SETTLING_TIME       10
#define  MMRF_POR_POWER_UP_MACRO_BG_EVT2_SETTLING_TIME       10
#define  MMRF_POR_POWER_UP_MACRO_BG_EVT3_SETTLING_TIME      110

extern const MML1_RF_POR_T MMRF_POR_ORION_SLEEP_DCXO_DATA_TABLE[];
extern const MML1_RF_POR_T MMRF_POR_POWER_UP_MACRO_BG_EVT0_DATA_TABLE[];
extern const MML1_RF_POR_T MMRF_POR_POWER_UP_MACRO_BG_EVT1_DATA_TABLE[];
extern const MML1_RF_POR_T MMRF_POR_POWER_UP_MACRO_BG_EVT2_DATA_TABLE[];
extern const MML1_RF_POR_T MMRF_POR_POWER_UP_MACRO_BG_EVT3_DATA_TABLE[];
extern const MML1_RF_POR_T MMRF_POR_REVISED_POR_DATA_TABLE[];
#endif

