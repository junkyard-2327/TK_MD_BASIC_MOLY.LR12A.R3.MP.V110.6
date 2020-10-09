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
 *    DVFS_drv_modem_public.h
 *
 * Project:
 * --------
 *    UMOLYA
 *
 * Description:
 * ------------
 *    L1core VModem DVFS driver.
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
 * removed!
 *
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __DVFS_DRV_MODEM_PUBLIC_H__
#define __DVFS_DRV_MODEM_PUBLIC_H__

/************************************************************************************************************************************************************
*   DVFS_LTE_BW_E: LTE Bandwidth category enum, should sync with el1cd_common.h
************************************************************************************************************************************************************/
#include "DVFS_drv_public.h"

typedef enum {
   DVFS_MODEM_3GFDD, 
   DVFS_MODEM_3GTDD, 
   DVFS_MODEM_4G
} DVFS_MODEM_CLIENT_RAT;

typedef enum {
   DVFS_MODEM_NON_USED,
   /* 3G FDD Scenario */
   MODEML1_DVFS_SCENARIO_3G_FDD_HSPA_2CC,
   MODEML1_DVFS_SCENARIO_3G_FDD_HSPA_1CC,
   MODEML1_DVFS_SCENARIO_3G_FDD_WCDMA   , /* paging + talking */
   MODEML1_DVFS_SCENARIO_3G_FDD_IDLE    , /* idle gear of 3G FDD */ 
   /* 3G TDD Scenario */
   MODEML1_DVFS_SCENARIO_3G_TDD_HSPA    , /* HSDPA+HSUPA (>=R5+R7 channel) */
   MODEML1_DVFS_SCENARIO_3G_TDD_NORMAL  , /* Paging+Talking (including td ICS/Meas and all R4 channel) */
   MODEML1_DVFS_SCENARIO_3G_TDD_SLEEP   , /* for TDD does not use INR3F/tdinrys and RxBRP in sleep state */ /* idle gear of 3G TDD */
   /* 3G C2K Scenario */
   MODEML1_DVFS_SCENARIO_3G_C2K1X_CHANNELTX,  /*1X talking*/
   MODEML1_DVFS_SCENARIO_3G_C2K1X_CHANNELRX,  /*1X paging */
   MODEML1_DVFS_SCENARIO_3G_C2K1X_SCHONLY,    /*1X paging with rake/brp/bigram lowest gear */
   MODEML1_DVFS_SCENARIO_3G_C2KDO_CHANNELTX,  /*DO data*/
   MODEML1_DVFS_SCENARIO_3G_C2KDO_CHANNELRX,  /*DO paging */
   MODEML1_DVFS_SCENARIO_3G_C2KDO_SCHONLY,    /*DO paging with rake/brp/bigram lowest gear */
            
   /* 4G LTE Scenario */
   MODEML1_DVFS_SCENARIO_LTE_TX_10M,
   MODEML1_DVFS_SCENARIO_LTE_TX_20M,
   MODEML1_DVFS_SCENARIO_LTE_NOTX,
   
   DVFS_MODEM_SCEN_NUM
} DVFS_MODEM_SCEN_E;

typedef enum {
   DVFS_LTE_BW_10M,
   DVFS_LTE_BW_20M,
   DVFS_LTE_BW_UNKNOWN,   
   DVFS_LTE_BW_MAX = DVFS_LTE_BW_UNKNOWN
} DVFS_LTE_BW_E;

typedef struct
{
   kal_uint8 cc_num;                          //number of valid CC, could be (0, 1) // can be removed
   DVFS_LTE_BW_E bw[2];                   // cc0 and cc1 BW ais independent, it is possible to set cc0_bw unknown, but cc1_bw is known
   kal_bool ocic_en;                          // set to enable when L1D Rx module reports ocic number > 0
   kal_bool multibin_pbch_en;                 // EL1D Rx module reports multibin pbch enable or disable to L1D DVFS
   kal_bool tb_mimo_en;
} DVFS_LTE_GEAR_PARA_T;

typedef enum {
   DVFS_MODEM_VDSPPLL_GEAR_DOWN,         // for user control only bigram or vdsp
   DVFS_MODEM_BRPPLL_VDSPPLL_GEAR_DOWN,  // for user control brp/bigram/vdsp
   DVFS_MODEM_TXPLL_GEAR_DOWN            // for 4G TX only
} DVFS_MODEM_PLL_GEAR_DOWN_COMB_E;

/************************************************************************************************************************************************************
*   Common API
************************************************************************************************************************************************************/
kal_uint32 DVFS_modem_gear_get(DVFS_MODEM_SCEN_E scen);
kal_uint32 DVFS_modem_LTE_gear_get(DVFS_LTE_GEAR_PARA_T* para, kal_uint32 table_idx);
void DVFS_modem_scenario_set(DVFS_EVENT_E evt_num, DVFS_MODEM_SCEN_E scen, kal_int32 delta_time);
void DVFS_modem_gear_set(DVFS_EVENT_E evt_num, kal_uint32 gear, kal_int32 delta_time);
kal_bool DVFS_modem_scenario_check(DVFS_MODEM_SCEN_E scen);
kal_bool DVFS_modem_latch_scenario_check(DVFS_EVENT_E evt_num, DVFS_MODEM_SCEN_E scen);
kal_bool DVFS_modem_latch_gear_check(DVFS_EVENT_E evt_num, kal_uint32 gear);
kal_bool DVFS_modem_gear_check(kal_uint32 gear);
kal_bool DVFS_modem_pll_geardown_check(DVFS_MODEM_PLL_GEAR_DOWN_COMB_E comb);
kal_bool DVFS_modem_DSP_geardown_check(void);
void DVFS_modem_evt_idle_gear_check(kal_uint32 evt_num);

/************************************************************************************************************************************************************
*   LTE API
************************************************************************************************************************************************************/
DVFS_MODEM_SCEN_E DVFS_modem_LTE_getScenIdx ( const kal_uint32 num_cc, const DVFS_LTE_BW_E *bws, const kal_uint32 num_ocic, const kal_bool mbpbch_enabled, const kal_bool tb_mimo_enabled);
kal_uint32 DVFS_modem_LTE_getGearIdx ( const DVFS_MODEM_SCEN_E scen_idx );
void DVFS_modem_LTE_request_sch ( const kal_uint32 gear_idx /* no win_idx since it's fixed to 0 */ );
void DVFS_modem_LTE_request_sch2( const kal_uint32 gear_idx, const kal_uint32 win_idx );
void DVFS_modem_LTE_request_imm ( const kal_uint32 gear_idx );
kal_bool DVFS_modem_atcmd_config_3CC_60M_scenario( kal_uint32 data_len );

/************************************************************************************************************************************************************
*   3G FDD API
************************************************************************************************************************************************************/
kal_uint32 DVFS_modem_FDD_getGearIdx ( const DVFS_MODEM_SCEN_E scen_idx );
void DVFS_modem_FDD_request_sch ( const kal_uint32 gear_idx, const kal_uint32 win_idx );
void DVFS_modem_FDD_request_imm ( const kal_uint32 gear_idx );

/************************************************************************************************************************************************************
*   3G TDD API
************************************************************************************************************************************************************/
kal_uint32 DVFS_modem_TDD_getGearIdx ( const DVFS_MODEM_SCEN_E scen_idx );
void DVFS_modem_TDD_request_sch ( const kal_uint32 gear_idx, const kal_uint32 win_idx );
void DVFS_modem_TDD_request_imm ( const kal_uint32 gear_idx );

/************************************************************************************************************************************************************
*   Others
************************************************************************************************************************************************************/
kal_bool DVFS_modem_get_idle_gear_mutex( const DVFS_MODEM_CLIENT_RAT client );
void DVFS_modem_release_idle_gear_mutex( const DVFS_MODEM_CLIENT_RAT client );
void DVFS_modem_periodicTick ( DVFS_MODEM_CLIENT_RAT client );
extern kal_bool DVFS_modem_atcmd_start_drvtest( kal_uint32 data_len, kal_uint8 *data_str );
extern kal_bool DVFS_modem_atcmd_stop_drvtest( void );

#endif /* __DVFS_DRV_MODEM_PUBLIC_H__ */
