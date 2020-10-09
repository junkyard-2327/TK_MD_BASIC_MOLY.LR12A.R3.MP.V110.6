/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
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
 *   DVFS_drv_md_public.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   This file is for the public access of MIPS DVFS functions
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by ClearCase. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Log$
 *
 * 06 14 2018 jim.chou
 * [MOLY00333255] [MT6761][Merlot][O1][MP3][MTBF][HQ][4GMM][Lab][Ericsson][HCR][ASSERT] file:mcu/l1core/modem/gl1/l1d/m12100.c line:15014
 * Extend more 2G DVFS user at R3
 *
 * 05 10 2018 jim.chou
 * [MOLY00325322] 【子系统mini dump】【正式用户5例】[197:ccci_fsm1][1]filename = mcu/pcore/modem/ul1/ul1d/e_dch_pcore.c line = 1239 assert para0 = 0x00000000, para1 = 0x00000000, para2 = 0x00000000
 * MD DVFS driver user extension for 2G at R3
 *
 * 03 22 2017 ying.hsu
 * [MOLY00236869] [MT6763][DVFS] patch DVFS DVT done code back to OF branch
 * 	
 * 	.
 *
 * 03 15 2017 pei-fei.wu
 * Vmd & Vmodem driver change.
 *
 * 12 13 2016 ying.hsu
 * [MOLY00196193] 93 DVFS driver development
 * Add speech driver scenarios.
 *
 * 12 08 2016 ying.hsu
 * [MOLY00196193] 93 DVFS driver development
 * 1. Support DVFS_md_MIPS_setTrace()
 * 2. Add PTP lock, unlock, and checking lock API
 * 3. Change PLL DFS gear settings for PLL initialized at highest frequency
 *
 * 10 28 2016 ying.hsu
 * [MOLY00196193] 93 DVFS driver development
 * fix build error caused by MD DVFS unit test
 *
 * 10 28 2016 ying.hsu
 * [MOLY00196193] 93 DVFS driver development
 * 1. Allocate a dedicate event DVFS_SW_EL2_EVT for C2K
 * 2. Replace DVFS_MD_MIPS_SCENARIO_URRFDD_CHANNEL_EMPTY with DVFS_MD_MIPS_SCENARIO_DEFAULT
 * 3. Allocate dedicate SW event for Audio driver and change EVS_WB clock requirement to 600 MHz as EL1C will cover 2CC case
 * 4. Allocate dedicate SW events for EL1C and EL2 respectively
 * 5. Use CTRL event for to lock Vmd and Vmodem at their highest gear
 * 6. Add MO_Sync() for SMP consideration
 *
 * 10 06 2016 ying.hsu
 * [MOLY00196193] 93 DVFS driver development
 * 1. revise DVFS public header include sequence for DVFS_FLOW_ONLY
 * 2. review DVFS FPGA initial sequence for DVFS_FLOW_ONLY
 *
 * 09 28 2016 ying.hsu
 * [MOLY00196193] 93 DVFS driver development
 * 1. AT command to dump frequency table and lock state
 * 2. Remove C2K_CHANNEL_EMPTY scenario
 *
 * 09 26 2016 ying.hsu
 * [MOLY00196193] 93 DVFS driver development	
 * 1. MD DVFS drver sw flow integration.
 * 2. Add DVFS_drv_md_ut.[ch] unit tests on MoDIS and FPGA platforms.
 *
 * 08 25 2016 ying.hsu
 * [MOLY00196193] 93 DVFS driver development
 * 	
 * 	1. 93 DVFS init flow.
 * 	2. 93 MD DVFS API modification for EL1C, ERRC, EVS, C2K, and EL2.
 *
 * 08 08 2016 ying.hsu
 * [MOLY00196193] 93 DVFS driver development
 * 	1. 93 DVFS public interface initial version
 * 	2. Sync 92 DVFS AT commands
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by ClearCase. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __DVFS_DRV_MD_PUBLIC_H__
#define __DVFS_DRV_MD_PUBLIC_H__

#include "DVFS_drv_public.h"

/******************************************************************************
* Definition provided by DVFS
******************************************************************************/
/*
 * MD DVFS user ID.
 */
typedef enum
{
    DVFS_MD_MIPS_USER_INVALID    = 0,
    DVFS_MD_MIPS_USER_RRC_SIM1_3GFDD,
    DVFS_MD_MIPS_USER_RRC_SIM2_3GFDD,
    DVFS_MD_MIPS_USER_RRC_SIM3_3GFDD,
    DVFS_MD_MIPS_USER_RRC_SIM4_3GFDD,
    DVFS_MD_MIPS_USER_RRC_SIM1_4G   ,
    DVFS_MD_MIPS_USER_RRC_SIM2_4G   ,
    DVFS_MD_MIPS_USER_RRC_SIM3_4G   ,
    DVFS_MD_MIPS_USER_RRC_SIM4_4G   ,
    DVFS_MD_MIPS_USER_SIM1_C2K      ,
    DVFS_MD_MIPS_USER_SIM2_C2K      ,
    DVFS_MD_MIPS_USER_SIM3_C2K      ,
    DVFS_MD_MIPS_USER_SIM4_C2K      ,
    DVFS_MD_MIPS_USER_SPEECH        ,
    DVFS_MD_MIPS_USER_EL1           ,
    DVFS_MD_MIPS_USER_UL1           ,
#if DVFS_SUPPORT_2G_WAKEUP_IA_SPEEDUP
    DVFS_MD_MIPS_USER_GL1           ,
#endif
#if DVFS_SUPPORT_2G_CT_IA_SPEEDUP
    DVFS_MD_MIPS_USER_GL1_CT        ,
#endif
    DVFS_MD_MIPS_USER_SDF           ,
    DVFS_MD_MIPS_USER_INTERNAL      ,
    DVFS_MD_MIPS_USER_NUM           ,

    DVFS_MD_MIPS_USER_DUMMY          = 0xffffffff /* for 4-byte enum */
} DVFS_MD_MIPS_USER_E;

/*
 * MD DVFS driver user scenarios.
 */
typedef enum
{
    DVFS_MD_MIPS_SCENARIO_INVALID             = 0, /* For Debug Only */
    /* 
     * Inactive, idle, and default scenario.
     */
    DVFS_MD_MIPS_SCENARIO_DEFAULT                , /* No Requirement Usage */
    /* 
     * 3G FDD RRC scenarios.
     */
    DVFS_MD_MIPS_SCENARIO_URRFDD_CHANNEL_NON_HSPA, /* RRC Scenario-Based Usage */
    DVFS_MD_MIPS_SCENARIO_URRFDD_CHANNEL_HSPA    , /* RRC Scenario-Based Usage */
    DVFS_MD_MIPS_SCENARIO_URRFDD_CHANNEL_HSPA_3C , /* For 91 Matching MODEML1 Scenario Enum Only (maybe future use) */
    /* 
     * 4G RRC scenarios.
     */
    DVFS_MD_MIPS_SCENARIO_ERRC_1CC               , /* RRC Scenario-Based Usage: NONCA10 and NONCA20 */
    DVFS_MD_MIPS_SCENARIO_ERRC_2CC               , /* RRC Scenario-Based Usage: CA10, CA20, CA30, CA40 */
    DVFS_MD_MIPS_SCENARIO_ERRC_3CC               , /* RRC Scenario-Based Usage: CA50, CA60, */
    DVFS_MD_MIPS_SCENARIO_ERRC_4CC               , /* RRC Scenario-Based Usage. */
    DVFS_MD_MIPS_SCENARIO_ERRC_5CC               , /* RRC Scenario-Based Usage. */
    /*
     * 2G L1 scenarios.
     */
#if DVFS_SUPPORT_2G_WAKEUP_IA_SPEEDUP
    DVFS_MD_MIPS_SCENARIO_GL1_WAKEUP             , /* GL1 Scenario-Based Usage. */
#endif

    /*
     * 2G L1 CT scenarios.
     */
#if DVFS_SUPPORT_2G_CT_IA_SPEEDUP
    DVFS_MD_MIPS_SCENARIO_GL1_CT                 , /* GL1 CT Scenario-Based Usage. */
#endif
    /* 
     * 3G FDD L1 scenarios. 
     */
    DVFS_MD_MIPS_SCENARIO_UL1_WCDMA              , /* UL1 Scenario-Based Usage */
    DVFS_MD_MIPS_SCENARIO_UL1_HSPA               , /* UL1 Scenario-Based Usage */
    /* 
     * 4G L1 scenarios. 
     */
    DVFS_MD_MIPS_SCENARIO_EL1_1CC                , /* EL1 Scenario-Based Usage */
    DVFS_MD_MIPS_SCENARIO_EL1_2CC                , /* EL1 Scenario-Based Usage */
    DVFS_MD_MIPS_SCENARIO_EL1_3CC                , /* EL1 Scenario-Based Usage */
    DVFS_MD_MIPS_SCENARIO_EL1_4CC                , /* EL1 Scenario-Based Usage */
    DVFS_MD_MIPS_SCENARIO_EL1_5CC                , /* EL1 Scenario-Based Usage */
    /* 
     * C2K scenarios.
     */
    DVFS_MD_MIPS_SCENARIO_C2K_CHANNEL_NON_DO_PS  ,
    DVFS_MD_MIPS_SCENARIO_C2K_CHANNEL_DO_PS      ,
    DVFS_MD_MIPS_SCENARIO_C2K_SHDR               ,
    /* 
     * SIB scnearios.
     */
    DVFS_MD_MIPS_SCENARIO_SDF_HIGH_SPEED_MODE    , /* For SIB debug only and just with voltage requirement */
    /* 
     * Speech driver scenarios.
     */
    DVFS_MD_MIPS_SCENARIO_FR                     , /* 2G Full Rate speech */
    DVFS_MD_MIPS_SCENARIO_HR                     , /* 2G Half Rate speech */
    DVFS_MD_MIPS_SCENARIO_EFR                    , /* 2G Enhanced Full Rate speech */
    DVFS_MD_MIPS_SCENARIO_AMR                    , /* 2/3G Adaptive Multi-Rate speech */
    DVFS_MD_MIPS_SCENARIO_AWB                    , /* 2/3G Adaptive Multi-Rate Wideband */
    DVFS_MD_MIPS_SCENARIO_EVRCA                  , /* C2K Enhanced Variable Rate Codec */
    DVFS_MD_MIPS_SCENARIO_EVRCB                  , /* C2K Enhanced Variable Rate Codec B */
    DVFS_MD_MIPS_SCENARIO_EVS_NB                 , /* VoLTE EVS Narrowband */
    DVFS_MD_MIPS_SCENARIO_EVS_WB                 , /* VoLTE EVS Wideband */
    DVFS_MD_MIPS_SCENARIO_EVS_SWB                , /* VoLTE EVS Super-Windeband */
    DVFS_MD_MIPS_SCENARIO_EVS_FB                 , /* VoLTE EVS Fullband */

    /* 
     * Other scenarios.
     */
    DVFS_MD_MIPS_SCENARIO_MAX                    , /* For Initialization And Debug Only */
    DVFS_MD_MIPS_TOTAL_SCENARIO_NUM              ,

    DVFS_MD_MIPS_SCENARIO_DUMMY                   = 0xffffffff /* for 4-byte enum */
} DVFS_MD_MIPS_SCENARIO_E;

/*
 * MD DVFS user's RAT.
 */
typedef enum {
    DVFS_MD_RAT_INVALID = 0,
    DVFS_MD_RAT_4G,

    DVFS_MD_RAT_DUMMY   = 0xffffffff       /* for 4-byte enum */
} DVFS_MD_RAT_E;

/*******************************************************************************
* Functions provided by DVFS
*******************************************************************************/

/*******************************************************************************
*   Function    : DVFS_md_MIPS_preCtrlSetScenario
*   Description : Specify desired scenario by RRC user before sending 
*                 CPHY_CFG_REQ to change MIPS IA voltage and frequency UP.
*
*   Parameter   : 1. DVFS_MD_MIPS_USER_E user: RRC user enum
*                 2. DVFS_MD_MIPS_SCENARIO_E scenario: user desired scenario
*   Return      : None
*
*   Note        : 1. Before using this API, please check DVFS driver owner 
*                 for appropriate user enum and scneario.
*                 2. Actual voltage and frequency settings are large than or 
*                 equal to desired ones.
*******************************************************************************/
void DVFS_md_MIPS_preCtrlSetScenario(
                DVFS_MD_MIPS_USER_E     user, 
                DVFS_MD_MIPS_SCENARIO_E scenario);

/*******************************************************************************
*   Function    : DVFS_md_MIPS_postCtrlSetScenario
*   Description : Specify desired scenario by RRC user before sending 
*                 CPHY_CFG_REQ to change MIPS IA voltage and frequency DOWN.
*
*   Parameter   : 1. DVFS_MD_MIPS_USER_E user: RRC user ID
*                 2. DVFS_MD_MIPS_SCENARIO_E scenario: user desired scenario
*   Return      : None
*
*   Note        : 1. Before using this API, please check DVFS driver owner 
*                 for appropriate user enum and scneario.
*                 2. Actual voltage and frequency settings are large than or 
*                 equal to desired ones.
*******************************************************************************/
void DVFS_md_MIPS_postCtrlSetScenario(
                DVFS_MD_MIPS_USER_E     user, 
                DVFS_MD_MIPS_SCENARIO_E scenario);

/*******************************************************************************
*   Function    : DVFS_md_MIPS_setScenario
*   Description : Specify desired scenario by non-RRC user to changes MIPS IA 
*                 voltage and frequency.
*
*   Parameter   : 1. DVFS_MD_MIPS_USER_E user: non-RRC user ID
*                 2. DVFS_MD_MIPS_SCENARIO_E scenario: user desired scenario
*   Return      : None
*
*   Note        : 1. Before using this API, please check DVFS driver owner 
*                 for appropriate user enum and scneario.
*                 2. Actual voltage and frequency settings are large than or 
*                 equal to desired ones.
*******************************************************************************/
void DVFS_md_MIPS_setScenario(
                DVFS_MD_MIPS_USER_E     user,
                DVFS_MD_MIPS_SCENARIO_E scenario);

/*******************************************************************************
*   Function    : DVFS_md_MIPS_getScenarioSettingByUser
*   Description : Query user current scenario for MIPS IA DVFS.
*
*   Parameter   : DVFS_MD_*_USER_E user: user ID
*   Return      : DVFS_*_SCENARIO_E: user current scenario
*******************************************************************************/
DVFS_MD_MIPS_SCENARIO_E DVFS_md_MIPS_getScenarioSettingByUser(
                DVFS_MD_MIPS_USER_E     user);

/*******************************************************************************
*   Function    : DVFS_md_MIPS_checkDVFSMeetScenarioRequirement
*   Description : Check if the current MIPS IA voltage and frequency settings 
*                 meet the user scenario requirement or not.
*
*   Parameter   : DVFS_MD_*_USER_E user: user ID
*   Return      : kal_bool: meet (KAL_TRUE) or not (KAL_FALSE)
*
*   Note        : Meet the requirement means the actual voltage and frequency 
*                 settings are large than or equal to desired ones.
*******************************************************************************/
kal_bool DVFS_md_MIPS_checkDVFSMeetScenarioRequirement(
                DVFS_MD_MIPS_USER_E     user,
                DVFS_MD_MIPS_SCENARIO_E scenario);

/*******************************************************************************
*   Function    : DVFS_md_MIPS_setLoggingConnect.
*   Description : Update logging connection state, which might affect DVFS scenarios' gear.
*
*   Parameter   : KAL_TRUE: MDlogger starts logging.
*                 KAL_FALSE: MDlogger stops logging.
*   Return      : None
*
*******************************************************************************/
void DVFS_md_MIPS_setLoggingConnect(
                kal_bool                connected);

/******************************************************************************
*   Function    : DVFS_md_MIPS_checkLoggingConnect.
*   Description : Check if DVFS adjustment for logging connection state changes has been completed.
*
*   Parameter   : None
*   Return      : KAL_TRUE: Completed. 
*                 KAL_FALSE: On-going.
******************************************************************************/
kal_bool DVFS_md_MIPS_checkLoggingConnect(void);

/*******************************************************************************
*   Function : DVFS_md_dumpRequestTableByTrc
*   Description : This API will trigger dumping traces
*
*   Parameter : kal_uint8 dump_scope: dump part of traces
*   Return    : kal_bool: KAL_TRUE
*
*   Note      : - from ATCMD path
*               AT+EGCMD=61, 1, "00" : dump all
*               AT+EGCMD=61, 1, "01" : dump MIPS tables
*               AT+EGCMD=61, 1, "02" : obsolete
*               AT+EGCMD=61, 1, "03" : obsolete
*               AT+EGCMD=61, 1, "04" : obsolete
*               AT+EGCMD=61, 1, "05" : obsolete
*               AT+EGCMD=61, 1, "06" : obsolete
*               AT+EGCMD=61, 1, "07" : dump states
*               AT+EGCMD=61, 1, "08" : obsolete
*******************************************************************************/
kal_bool DVFS_md_dumpRequestTableByTrc(kal_uint8 dump_scope);

/*******************************************************************************
*   Function : DVFS_TPPA_Dump_Current_Info
*   Description : This API will dump all DVFS TPPA information
*
*   Parameter : None
*   Return    : kal_bool: KAL_TRUE if succeeded, KAL_FALSE otherwise.
*
*   Note      : None
*******************************************************************************/
kal_bool DVFS_TPPA_Dump_Current_Info(void);

/*******************************************************************************
*   Function : DVFS_GetMIPSFrequency
*   Description : This API is for EL1 profiling usage.
*
*   Parameter : None
*   Return    : kal_uint32: current MIPS frequency.
*
*   Note      : None
*******************************************************************************/
kal_uint32 DVFS_GetMIPSFrequency(void); 

/*******************************************************************************
*   Function : DVFS_ptpLock2HighGear(void)
*   Description : Lock VMODEM to the highest gear by PTP
*
*   Parameter : None
*   Return    : None
*
*   Note      : None
*******************************************************************************/
void DVFS_ptpLock2HighGear(void);

/*******************************************************************************
*   Function : DVFS_ptpUnlock2HighGear(void)
*   Description : Unlock VMODEM highest gear by PTP
*
*   Parameter : None
*   Return    : None
*
*   Note      : None
*******************************************************************************/
void DVFS_ptpUnlockHighGear(void);

/*******************************************************************************
*   Function : DVFS_ptpLockCompleted(void)
*   Description : Check whether VMODEM is already locked to the highest gear
*
*   Parameter : None
*   Return    : KAL_TRUE: Complete, KAL_FALSE: Not complete yet
*
*   Note      : None
*******************************************************************************/
kal_bool DVFS_ptpLockCompleted(void);

/*******************************************************************************
*   Function : DVFS_md_atcmd_drvtest
*   Description : Enable or disable DVFS MD driver test from ATCMD. 
*
*   Parameter : kal_uint32 data_len: ATCMD input size
*               kal_uint8 *data_str: ATCMD input string
*               AT+EGCMD=67, 1, "01" : enable DVFS MD driver test
*               AT+EGCMD=67, 1, "00" : disable DVFS MD driver test
*   Return    : KAL_TRUE: OK, KAL_FLASE: ERROR
*******************************************************************************/
kal_bool DVFS_md_atcmd_drvtest(
            kal_uint32                  data_len,
            kal_uint8                  *data_str);

/*******************************************************************************
*   Function : DVFS_md_MIPS_getCurrGear
*   Description : Query current MIPS IA DVFS gear.
*
*   Parameter : None
*   Return    : current MIPS IA gear requested by the RAT
*******************************************************************************/
kal_uint32 DVFS_md_MIPS_getCurrGear(void);

/******************************************************************************
*   Function : DVFS_md_MIPS_setDataGear
*   Description : Set MIPS IA DVFS gear for data plane of specified RAT.
*
*   Parameter : DVFS_MD_RAT_E rat: the RAT requeting for MIPS IA DVFS.
*               kal_uint32 gear: MIPS IA DVFS gear index to set (from 0 to 7). 
*                                Higher index stands for higher working frequency.
*   Return    : KAL_TRUE is the gear index to set is valid, KAL_FALSE otherwise.
*******************************************************************************/
kal_bool DVFS_md_MIPS_setDataGear(
        DVFS_MD_RAT_E                   rat,
        kal_uint32                      gear);

#endif /* end of __DVFS_DRV_MD_PUBLIC_H__ */
