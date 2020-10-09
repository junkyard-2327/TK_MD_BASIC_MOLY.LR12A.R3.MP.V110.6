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
 *    DVFS_drv_modem.h
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __DVFS_DRV_MODEM_H__
#define __DVFS_DRV_MODEM_H__

#include "kal_public_api.h"
#include "DVFS_drv_modem_public.h"
// #include "error_code.h"

#if defined(DVFS_ENABLE)

#ifdef __MTK_INTERNAL__
   #undef  DVFS_MODEM_ASSERT_Bypass
   #undef  DVFS_MODEM_ASSERT_Reboot
   #undef  DVFS_MODEM_EXT_ASSERT_Bypass
   #define DVFS_MODEM_ASSERT_Bypass( st )                    if(!(st)) ASSERT( 0 )
   #define DVFS_MODEM_ASSERT_Reboot( st )                    if(!(st)) ASSERT( 0 )   
   #define DVFS_MODEM_EXT_ASSERT_Bypass( st, d1, d2, d3 )    if(!(st)) EXT_ASSERT( 0, d1, d2, d3 )
#endif

#ifdef L1_SIM
   #undef  DVFS_MODEM_ASSERT_Bypass
   #undef  DVFS_MODEM_EXT_ASSERT_Bypass
   #define DVFS_MODEM_ASSERT_Bypass( st )                    if(!(st)) ASSERT( 0 )
   #define DVFS_MODEM_EXT_ASSERT_Bypass( st, d1, d2, d3 )    if(!(st)) EXT_ASSERT( 0, d1, d2, d3 )
#endif

#ifndef L1_SIM // Call each rat assert API
   #define DVFS_MODEM_LTE_ASSERT_Bypass( error_code, d1, d2 )     EL1D_DVFS_EXT_ASSERT_Bypass_Trace( error_code, d1, d2 )
   #define DVFS_MODEM_FDD_ASSERT_Bypass( error_code, d1, d2 )     UL1D_DVFS_EXT_ASSERT_Bypass_Trace( error_code, d1, d2 )
   #define DVFS_MODEM_TDD_ASSERT_Bypass( error_code, d1, d2 )     TL1D_DVFS_EXT_ASSERT_Bypass_Trace( error_code, d1, d2 )
#else // Use DVFS original assert function
   #define DVFS_MODEM_LTE_ASSERT_Bypass( error_code, d1, d2 )     DVFS_MODEM_EXT_ASSERT_Bypass( 0, error_code, d1, d2 )
   #define DVFS_MODEM_FDD_ASSERT_Bypass( error_code, d1, d2 )     DVFS_MODEM_EXT_ASSERT_Bypass( 0, error_code, d1, d2 )
   #define DVFS_MODEM_TDD_ASSERT_Bypass( error_code, d1, d2 )     DVFS_MODEM_EXT_ASSERT_Bypass( 0, error_code, d1, d2 )
#endif

// UPB can be different for different projects.
#define DVFS_MODEM_LTE_UPB 0x00
#define DVFS_MODEM_FDD_UPB 0x56
#define DVFS_MODEM_TDD_UPB 0x7A

#define DVFS_MODEM_FREQ_GEAR_NUM    8
#define DVFS_MODEM_FREQ_PLL_NUM     8

#define DVFS_MODEM_CKSEL_POS_IMCICC 7
#define DVFS_MODEM_GET_FREQ_GEAR(gear_idx) (gear_idx & 0xf)
#define DVFS_MODEM_GET_VOLT_GEAR(gear_idx) ((gear_idx & 0xf0) >> 4)

#define DVFS_MODEM_GET_VOLT_REAL_VALUE(gear_idx)   (DVFS_modem_RealVoltConvert(DVFS_modem_volt_table_curr[DVFS_MODEM_GET_VOLT_GEAR(gear_idx)]))
#define DVFS_MODEM_GET_VOLT_PMIC_STEP(gear_idx)    (DVFS_modem_volt_table_curr [DVFS_MODEM_GET_VOLT_GEAR(gear_idx)])
#define DVFS_MODEM_GET_VMODEM_PMIC_STEP(volt_idx)  (DVFS_modem_volt_table_curr [volt_idx])
#define DVFS_MODEM_GET_VSRAM_PMIC_STEP(volt_idx)   (DVFS_modem_sram_volt_table_curr [volt_idx])
#define DVFS_MODEM_GET_VMODEM_REAL_VALUE(volt_idx) (DVFS_modem_RealVoltConvert(DVFS_modem_volt_table_curr [volt_idx]))
#define DVFS_MODEM_GET_VSRAM_REAL_VALUE(volt_idx)  (DVFS_modem_RealVoltConvert(DVFS_modem_sram_volt_table_curr [volt_idx]))

typedef enum {
   DVFS_MODEM_IMCPLL,
   DVFS_MODEM_ICCPLL,
   DVFS_MODEM_BRPPLL,
   DVFS_MODEM_INTFPLL,
   DVFS_MODEM_EQPLL,
   DVFS_MODEM_RAKEPLL,
   DVFS_MODEM_DFEPLL,
   DVFS_MODEM_MDINFRAPLL
} DVFS_MODEM_PLL_NAME;

typedef enum {
   DVFS_MODEM_D_DVFS_INIT_NONE,       
   DVFS_MODEM_D_DVFS_INIT_START,      
   DVFS_MODEM_D_DVFS_INIT_DONE,       
   DVFS_MODEM_D_PTP_INIT_START,       
   DVFS_MODEM_D_PTP_INIT_SET_TABLE,   
   DVFS_MODEM_D_PTP_INIT_DONE,        
   DVFS_MODEM_D_PTP_MONITOR_START,    
   DVFS_MODEM_D_PTP_MONITOR_SET_TABLE,
   DVFS_MODEM_D_PTP_MONITOR_DONE
} DVFS_MODEM_D_PTP_STATE;

//should be modified together with DVFS_modem_LTE_Gear_Mapping_Table
typedef enum {
  MODEML1_DVFS_SCENARIO_LTE_2CC_10M_10_NOOCIC,
  MODEML1_DVFS_SCENARIO_LTE_2CC_10M_10_OCIC,    
  MODEML1_DVFS_SCENARIO_LTE_2CC_10M_20_NOOCIC,
  MODEML1_DVFS_SCENARIO_LTE_2CC_10M_20_OCIC,    
  MODEML1_DVFS_SCENARIO_LTE_1CC_10M_NOOCIC,      
  MODEML1_DVFS_SCENARIO_LTE_1CC_10M_OCIC,       
  MODEML1_DVFS_SCENARIO_LTE_2CC_20M_20_NOOCIC,
  MODEML1_DVFS_SCENARIO_LTE_2CC_20M_20_OCIC,    
  MODEML1_DVFS_SCENARIO_LTE_1CC_20M_NOOCIC,      
  MODEML1_DVFS_SCENARIO_LTE_1CC_20M_OCIC,       
  MODEML1_DVFS_SCENARIO_LTE_0CC_Invalid_NOOCIC,
  MODEML1_DVFS_SCENARIO_LTE_0CC_Invalid_OCIC,
  MODEML1_DVFS_SCENARIO_LTE_MBPBCH,
  MODEML1_DVFS_SCENARIO_LTE_TBMIMO
} DVFS_MODEM_LTE_SCEN_E;

typedef struct /* DVFS VMODEM global data structure */
{
/* Global Info. */
   kal_bool    LockDvfs;
   kal_bool    LockPtp;
   kal_bool    LockPll;
   
   kal_uint8   PtpState;                   /* PTP state */

/* For pllmixed info */
   kal_uint32  imcpll_freq;
   kal_uint32  iccpll_freq;
   kal_uint32  rakepll_freq;
   kal_uint32  buspll_freq;
   
   kal_uint32 err_flag;
   kal_uint32 gear_down_chk_err_code;
   kal_uint32 gear_down_chk_usr_code;
   kal_uint32 max_hwmode_latch_gear;
     
   kal_uint32 latch_gear_ckeck_time[DVFS_EVT_NUM];
   kal_uint32 pll_geardown_check_time;
   kal_uint32 scen_set;
   kal_uint32 scen_check;
} DVFS_modem_globals;

kal_uint32 DVFS_modem_RealVoltConvert( const kal_uint32 pmic_volt_step ); 
kal_uint32 DVFS_modem_PMICVoltConvert( const kal_uint32 real_volt );
kal_uint32 DVFS_modem_ReadPllFreq( const DVFS_MODEM_PLL_NAME pll );

void DVFS_modem_checkDVFSVolt ( const DVFS_MODEM_CLIENT_RAT client );
void DVFS_modem_checkDVFSFreq ( const DVFS_MODEM_CLIENT_RAT client );
void DVFS_modem_checkDVFS ( const DVFS_MODEM_CLIENT_RAT client );

void DVFS_modem_pre_init ( void );
void DVFS_modem_post_init ( void );
void DVFS_modem_statusTick ( void );
void DVFS_modem_ptpupdate ( const kal_bool init_mode );
void DVFS_modem_errorHandler ( const kal_uint32 debugArray[9] );
void DVFS_modem_lock ( const kal_bool lock );
#ifdef L1_SIM /* UT case */
void DVFS_ut_modem_map_test ( void );
#endif

#endif // DVFS_ENABLE 
#endif // __DVFS_DRV_MODEM_H__
