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
 *    fm.h
 *
 * Project:
 * --------
 *    TK6291
 *
 * Description:
 * ------------
 *    Resource Management Central control configuration.
 *
 * Author:
 * -------
 * -------
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/ 

#ifdef __CENTRALIZED_SLEEP_MANAGER__

#ifndef FM_H
#define FM_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "reg_base.h"
#include "mml1_rf_global.h" /* for MML1_RF_VCXO_TYPE_E */

#if defined(MT6763) || defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
#define FREQM_FRC_CON                     ((volatile kal_uint32*)(L1_BASE_MADDR_FREQM+0x00))
#define FREQM_FRC_VAL_R                   ((volatile kal_uint32*)(L1_BASE_MADDR_FREQM+0x10))
#define FREQM_FM_CON                      ((volatile kal_uint32*)(L1_BASE_MADDR_FREQM+0x20))
#define FREQM_FM_CAL                      ((volatile kal_uint32*)(L1_BASE_MADDR_FREQM+0x30))
#define FREQM_FM_T0                       ((volatile kal_uint32*)(L1_BASE_MADDR_FREQM+0x40))
#define FREQM_FM_T1                       ((volatile kal_uint32*)(L1_BASE_MADDR_FREQM+0x50))
#else  /*address definition*/
#error "please check the address definition of frequence management"
#endif /*address definition*/


/******************** MD_TOPSM ASSERT Macro ********************/
#ifdef  __MTK_INTERNAL__
   #define FM_ASSERT_Bypass( st )                    ASSERT( st )
   #define FM_ASSERT_Reboot( st )                    ASSERT( st )
   #define FM_EXT_ASSERT_Bypass( st, d1, d2, d3 )    EXT_ASSERT( st, d1, d2, d3 )
   #define FM_EXT_ASSERT_Reboot( st, d1, d2, d3 )    EXT_ASSERT( st, d1, d2, d3 )
#else
   #define FM_ASSERT_Bypass( st )                    (void)0
   #define FM_ASSERT_Reboot( st )                    ASSERT( st )
   #define FM_EXT_ASSERT_Bypass( st, d1, d2, d3 )    (void)0
   #define FM_EXT_ASSERT_Reboot( st, d1, d2, d3 )    EXT_ASSERT( st, d1, d2, d3 )
#endif

/*Global MD TOPSM data structure*/
typedef struct
{
   kal_bool            calibrating; /* A flag to record if doing SW manual K action. */
   kal_bool            ReK; /* trigger ReCalibration form inject message or at command. */
   kal_uint16          re_K_cnt;
   kal_uint32          curr_FM_DUR;
   kal_uint32          curr_FM_FREQ;
   volatile kal_uint32 fmResult;
   MML1_RF_VCXO_TYPE_E vcxo_type;
   kal_atomic_int32    fm_count;
} FM_Globals;

void FM_Init(void);
void FM_ReCalibration(void);
kal_bool FM_IsCalibrating( void );

#define FM_DURATION_SHORT   (1024)
#define FM_DURATION_LONG    (1024*4)
#define FM_DURATION_DEFAULT FM_DURATION_LONG
#define FM_FREQUENCY        (208000000)

extern void FM_SetCalibrationResult( kal_uint32 fm_dur, kal_uint32 fm_freq, kal_uint32 fmResult );
extern void FM_GetCalibrationResult( kal_uint32 *fm_dur_ptr, kal_uint32 *fm_freq_ptr, kal_uint32 *fmResult_ptr );
extern kal_bool FM_CheckEverCalibrated( void );

#endif /* !MD_TOPSM_PRIVATE_H*/
#endif /*__CENTRALIZED_SLEEP_MANAGER__*/
