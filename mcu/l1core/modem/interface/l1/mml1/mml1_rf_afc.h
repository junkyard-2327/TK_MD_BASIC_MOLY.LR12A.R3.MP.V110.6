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
 *   mml1_rf_afc.h
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   Multi-Mode Multi-RAT Layer1 Multi-mode AFC interface to each RAT
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
 * removed!
 *
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef  _MML1_RF_AFC_H_
#define  _MML1_RF_AFC_H_

#include "l1d_cid.h" /* for NUM_OF_SIM */

/*===============================================================================*/

#define MD1_Multi_RAT_NUM 4 /*MD1 Note: If you modify this number, be sure to change 
                                                   (1) trace msg in "L1_Trc_Multi_AFC_Current_Mode"
                                                   (2) trace in L1_MULTI_AFC_UPDATE_MODE()           */

#if ( defined(__GEMINI_GSM__) || defined(__SGLTE__) )
   #ifdef GEMINI_PLUS_GSM
#define MMRF_NUM_OF_SIM                                 GEMINI_PLUS_GSM
   #else
#define MMRF_NUM_OF_SIM                                 2
   #endif
#else
#define MMRF_NUM_OF_SIM                                 1
#endif

#define MMRF_AFC_INV_SLOPE         (1024)                 //Fix AFC Slope for Dual Loop AFC

typedef struct
{
   kal_uint32  md1_afc_dac;
   kal_uint32  md1_temperature;
   kal_uint32  md1_time_tag;   
   kal_uint32  md1_rat_mode[MD1_Multi_RAT_NUM];
   kal_uint32  md1_afc_update_rat;
   kal_uint32  md3_afc_dac;
   kal_uint32  md3_temperature;
   kal_uint32  md3_time_tag;
   kal_uint32  md3_rat_mode;
   kal_uint32  tag_source;
   kal_uint32  pre_usc;
} Multi_AFC_INFO_SHM;

typedef struct
{
   Multi_AFC_INFO_SHM multi_afc_info_shm[MMRF_NUM_OF_SIM];
} Multi_SIM_AFC_INFO_SHM;

typedef enum /*Note: If you modify this enum, be sure to change trace msg in "L1_Multi_Afc_rat" too*/
{
   rat_2G = 0  ,  /* 0 */
   rat_3G_fd   ,  /* 1 */
   rat_3G_td   ,  /* 1 */   
   rat_4G      ,  /* 3 */
   rat_C2K     ,  /* 4 */
   rat_non     ,  /* 5 */
} afc_rat;

typedef enum /*Note: If you modify this enum, be sure to change trace msg in "L1_Multi_Afc_mode" too*/
{
   flight_mode = 0  ,  /* 0 */
   standby_mode     ,  /* 1 */
   active_idle      ,  /* 2 */
   active_dedicate  ,  /* 3 */
} afc_rat_mode;

typedef enum
{
   afc_md1 = 0  ,  /* 0 */
   afc_md2      ,  /* 1 */
   afc_md3      ,  /* 2 */   
} afc_md;

typedef struct
{
   kal_uint8  rat_mode;     /*0: flight mode, 1: standby mode, 2: active idle, 3: dedicate standby*/
   kal_bool   is_gap_Start;
} afc_rat_state;

typedef struct
{
   afc_rat_state  rat_state[MD1_Multi_RAT_NUM];
   kal_uint8      previous_active_rat;
   kal_uint8      latest_active_rat;
   kal_uint8      latest_afc_owner_rat;
} Multi_AFC_INFO;

#define  SHM_AFC_WRITE(ptr,data)        (*((APBADDR32)ptr) = (data))
#define  SHM_AFC_READ(ptr)              (*((APBADDR32)ptr))

extern Multi_SIM_AFC_INFO_SHM multi_sim_afc_info_dummy_shm;
/* Read temperature from AUXADC API, return temperature u (U0.15), bit16:1 for valid, 0 for invalid */
extern kal_uint32 EL1D_RxAfc_Multi_Tms_Read_Auxadc_Latest_Temperature( void );

kal_uint32* L1_Get_MD1_MD3_Shared_Memory(void);
kal_int32 MML1_MULTI_AFC_QUERY_FREQ_TO_DAC_STEP();

/*===============================================================================*/

#endif /* End of #ifndef _MML1_RF_AFC_H_ */

