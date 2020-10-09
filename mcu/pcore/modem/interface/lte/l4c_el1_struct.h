/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 * Filename:
 * ---------
 *   l4c_el1_struct.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   message and common structure definition between L4C and EL1 modules.
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 11 08 2018 wade.chen
 * [MOLY00363049] ¦Ñ¤Æ??airplane mode¾Þ§@
 * 	
 * 	[R3][LTE] AT+ERFTX error handling enhancement
 *
 * 06 06 2018 vend_mtb_mobiveil012
 * [MOLY00331681] [CODE SYNC] Looking for TAS AT comamnd while target execte RF test by AT+ERFTX
 * Added two antenna parameters to AT+ERFTX=6 changes to LR12A.R3.MP
 *
 * 12 04 2017 bart.liang
 * [MOLY00293834] [LR12A.R3.MP][Build Error] fix build error
 *
 * 12 01 2017 bart.liang
 * [MOLY00293238] [GEN93] EM Power Detector - error handling
 *
 * 12 01 2017 bart.liang
 * [MOLY00293238] [GEN93] EM Power Detector - error handling
 * Rollback for V-list sync fail
 *
 * 07 10 2017 jung-ching.hsieh
 * [MOLY00262750] [PH1 VZW] Regarding Antenna Testing interface modify
 *
 * 12 19 2016 gary.liu
 * [MOLY00207413] EL1C 6293 development
 * [EL1 CH] change lte band from uint8 to uint16
 *
 * 11 16 2016 popcafa.shih
 * [MOLY00196065] [MT6293][folder structure] Move EL1/EL2 files from LTE domain to SWRD domain
 * modify MOLY00173949 & MOLY00172964 for IS_EL1_ANDROID_M_LCE_REPORT_SUPPORT 0.
 *
 * 01 15 2016 ty.shen
 * [MOLY00159734] TX power detector support on Jade
 * L4C/EL1 Interface.
 *
 * 07 09 2014 yr.chiang
 * [MOLY00071851] [MT6290E2][EL1TX] ROME DSDA support for AT+EB3INFO
 * .
 *
 * 05 20 2014 yr.chiang
 * [MOLY00066106] [MT6290E2][EL1] EL1 support for EM forceTx function
 * .
 *
 ****************************************************************************/


#ifndef  _L4C_EL1_STRUCT_H_
#define  _L4C_EL1_STRUCT_H_

#include "kal_general_types.h"
#include "kal_public_defs.h"


/* MSG_ID_EL1_LTE_MAX_TX_PWR_RED_REQ */
typedef struct
{
    LOCAL_PARA_HDR

    kal_uint8   op;    // 1: for all band, 3,5: only for band, 4: reset
    kal_uint16  band;  // 1~64
    kal_uint8   para1; // 0~255, unit: 1/8 dB, (0~32 dB)
    kal_uint8   para2; // reserved
    kal_uint8   para3; // reserved
} el1_lte_max_tx_pwr_red_req_struct;


typedef enum
{
    EL1_EM_TST_CMD_FORCE_TX_PWR,
    EL1_EM_TST_CMD_END,
    EL1_EM_TST_CMD_TX_REPORT,
} EL1_EM_TSTCmdType;

typedef struct
{
    kal_uint8                   on;
    kal_bool                    duplex_mode;
    kal_uint8                   band;
    kal_uint8                   ul_bandwidth;
    kal_uint16                  ul_freq;
    kal_uint8                   tdd_cfg;
    kal_uint8                   tdd_sp_sf_cfg;
    kal_uint8                   vrb_start;
    kal_uint8                   vrb_len;
    kal_uint8                   mcs;
    kal_int16                   tx_power;
    kal_bool                    tas_en;
    kal_uint8                   ant_state;    
} EL1_EM_TSTCmd_ForceTxPwr_T;

typedef union
{
    EL1_EM_TSTCmd_ForceTxPwr_T  forceTxPwr;
} EL1_EM_TSTCmdParam;


/* MSG_ID_L4C_EL1_EM_TST_CONTROL_REQ */
typedef struct
{
    LOCAL_PARA_HDR

    kal_uint8                   src_id;
    EL1_EM_TSTCmdType           type;
    EL1_EM_TSTCmdParam          param;
} l4c_el1_em_tst_control_req_struct;

typedef enum
{     
    L4C_EL1_ERR_NOT_IN_FLIGHT   =   0x1901,     
    L4C_EL1_ERR_SIM_IN_SLOT     =   0x1902,
    L4C_EL1_ERR_PARA_BAND       =   0x1903,
    L4C_EL1_ERR_PARA_UL_BW      =   0x1904,
    L4C_EL1_ERR_PARA_UL_FREQ    =   0x1905,
    L4C_EL1_ERR_PARA_DUPLEX_MODE=   0x1906,
    L4C_EL1_ERR_PARA_TDD_CFG    =   0x1907,
    L4C_EL1_ERR_PARA_SP_SF_CFG  =   0x1908,
    L4C_EL1_ERR_PARA_VRB        =   0x1909,
    L4C_EL1_ERR_PARA_MCS        =   0x190A,
    L4C_EL1_ERR_ROUTE_VALID     =   0x190B,
    L4C_EL1_ERR_TEST_ONGOING    =   0x190C,
    L4C_EL1_ERR_OTHERS          =   0x194F,
    L4CEL1_ERR_INVALID          =   0x1950 //success=true, error_code is useless
} l4cel1_error_enum       ; //error_code should be larger than 256   

/* MSG_ID_L4C_EL1_EM_TST_CONTROL_CNF */
typedef struct
{
    LOCAL_PARA_HDR

    kal_uint8                   src_id;
    kal_bool                    success;
    l4cel1_error_enum           error_code;
} l4c_el1_em_tst_control_cnf_struct;


/* MSG_ID_L4C_EL1_EM_TX_REPORT_IND */
typedef struct
{
    LOCAL_PARA_HDR

    kal_int32                   tx_power;   // dBm*8
} l4c_el1_em_tx_report_ind_struct;


/* MSG_ID_L4CEL1_B3_INFO_REQ */
typedef struct
{
    LOCAL_PARA_HDR

    kal_uint8                   type;  // 0: Off, 1: TCH, 2: BCCH
    kal_uint8                   index; // frequency index
                                       // 0:1850-1860 
                                       // 1:1860-1870
                                       // 2:1870-1875
                                       // 3:1875-1880
                                       // 4:1845-1850
    kal_uint16                  arfcn; // GSM arfcn
    kal_int16                   rssi;  // GSM rssi
    kal_uint8                   src;   // Sourcd id
} l4cel1_b3_info_req_struct;


/* MSG_ID_L4CEL1_B3_INFO_CNF */
typedef struct
{
    LOCAL_PARA_HDR

    kal_uint8                   result;// 1: success, 0: error
    kal_uint8                   src;   // Sourcd id
} l4cel1_b3_info_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8  srcid;               // srcid is set by request
    kal_uint32 lce_mode;            // Stop:0, Push mode:1, Pull mode:2
    kal_uint32 lce_rpt_interval_ms; // LCE report interval
} l4c_el1_lce_report_start_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 srcid;
} l4c_el1_lce_report_pulldata_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8  srcid;
    kal_uint8  lce_status;          // stop:0, active:1
    kal_uint32 lce_act_interval_ms; // actually reporting interval(ms)
} l4c_el1_lce_report_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8  srcid;
    kal_uint8  lce_suspend;    
    kal_uint32 tput_curr;
    kal_uint32 conf_lv1;
} l4c_el1_lce_report_ind_struct;

typedef enum
{
    ANTENNA_CONFIG_NORMAL_DUAL		=	0x1,	// normal dual receiver operation (default UE behavior)
    ANTENNA_CONFIG_SINGLE_PRIMARY	=	0x2,	// Single receiver operation ' enable primary receiver only (disable secondary/MIMO receiver)
    ANTENNA_CONFIG_SINGLE_SECONDARY	=	0x3	// Single receiver operation ' enable secondary/MIMO receiver only (disable primary receiver)
} l4cel1_antenna_config_enum;

typedef enum
{
    ANTENNA_STATUS_NORMAL_DUAL		=	0x1,	// normal dual receiver operation (default UE behavior)
    ANTENNA_STATUS_SINGLE_PRIMARY	=	0x2,	// Single receiver operation ' enable primary receiver only (disable secondary/MIMO receiver)
    ANTENNA_STATUS_SINGLE_SECONDARY	=	0x3	// Single receiver operation ' enable secondary/MIMO receiver only (disable primary receiver)
} l4cel1_antenna_status_enum;

typedef struct
{
	LOCAL_PARA_HDR
	kal_uint8 src_id;
	kal_bool pri_receiver;
	kal_bool sec_receiver;
} l4cel1_antenna_information_req_struct;

typedef struct
{
	LOCAL_PARA_HDR
	kal_uint8 src_id;
	kal_bool result; //KAL_TRUE if success; otherwise KAL_FALSE
	kal_bool is_pri_receiver_valid;
	kal_uint16 pri_rssi;
	kal_bool is_sec_receiver_valid;
	kal_uint16 sec_rssi;
	kal_bool is_relative_phase_valid;
	kal_uint16 relative_phase;
} l4cel1_antenna_information_cnf_struct;

typedef struct
{
	LOCAL_PARA_HDR
	kal_uint8 src_id;
	l4cel1_antenna_config_enum configuration;
} l4cel1_antenna_config_req_struct;

typedef struct
{
	LOCAL_PARA_HDR
	kal_uint8 src_id;
	kal_bool result; //KAL_TRUE if success; otherwise KAL_FALSE
} l4cel1_antenna_config_cnf_struct;

typedef struct
{
	LOCAL_PARA_HDR
	kal_uint8 src_id;
} l4cel1_antenna_config_status_req_struct;


typedef struct
{
	LOCAL_PARA_HDR
	kal_uint8 src_id;
    kal_bool result; //antenna status result
	l4cel1_antenna_status_enum ue_behavior;
} l4cel1_antenna_config_status_cnf_struct;

#endif


