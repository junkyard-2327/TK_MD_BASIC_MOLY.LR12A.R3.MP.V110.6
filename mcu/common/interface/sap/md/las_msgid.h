/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2014
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
 *   las_msgid.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   P-core and L1-core Protocol Stack related message identity definition
 *
 * Author:
 * -------
 *
 *
 * ==========================================================================
 * $Log$
 *
 * 08 09 2016 maruco.tu
 * [MOLY00196065] [MT6293][folder structure] Move EL1/EL2 files from LTE domain to SWRD domain
 * [LCEL re-arch](CONFIG files) (OA domain)
 * 	1.modify SAP file 
 * 	2.Add new message for dhl/mcddll
 * 	3.disable LCEL in las_create.c
 * 	4.check in el1/errc/las_msgid.h
 * 	5.Remove las/lcel path and add errc/lcel path in lte_def.mak
 *
 * 07 27 2016 jui-chih.chin
 * [MOLY00193618] [6293][LMOB Removel] Code Merge from CBr to UMOLYA TRUNK and UMOLYA PS DEV
 * 	
 * 	LMOB removal (OA)
 *
 * 06 27 2016 jui-chih.chin
 * [MOLY00183642] new task EL1_MPC definition for 6293
 * 	
 * 	.
 *
 * 03 11 2016 yi-han.chung
 * [MOLY00162461] 在Android???Modem??Log的需求
 *
 * 08 06 2015 claud.li
 * [MOLY00125612] [PS1][91plus] core change modification
 * [PS1][91+]no need to set module id for LAS during mode switch
 *
 * 07 23 2015 henry.lai
 * [MOLY00092508] [MT6291][LTE-C2K] AS Inter RAT feature
 * .
 *
 * 07 17 2015 doug.shih
 * [MOLY00126936] [TK6291E1][4G FDD][ATE][8820][1][L1CORE] Assert fail: lcel_paging.c 871 - LAS_PCO
 * [LCEL] add UT message id for L1_LISR preempt simulation.
 *
 * 06 16 2015 henry.lai
 * [MOLY00113082] [MT6291] ERRC CEL development
 * .
 *
 * 06 01 2015 henry.lai
 * [MOLY00092508] [MT6291][LTE-C2K] AS Inter RAT feature
 * .
 *
 * 04 29 2015 cen.chen
 * [MOLY00109047] [UMOLY][new feature] Pich false alarm Optimization.
 * LRRCE & RRCE code change for Paging OPT.
 *
 * 04 28 2015 george.chang
 * [MOLY00109714] [6291] MOB MDT check in to UMOLY TRUNK
 * 	.
 *
 * 04 16 2015 george.chang
 * [MOLY00107870] [6291] LAS UBIN phase 2 check in to UMOLY TRUNK
 * .
 *
 * 03 11 2015 yenchih.yang
 * [MOLY00098473] [LMEME/LMOB/L4C] Power Consumption Enhancement for Signal Bar Reporting
 * .
 *
 * 01 27 2015 dongqing.qi
 * [MOLY00087491] [UMOLY][TDD][UAS][SLCE/RRCE/MEME]sync U-Bin CBr to UMOLY TRUNCK.
 * .Rename MSG_ID to MSG_ID_TDD.
 *
 * 01 26 2015 yenchih.yang
 * [MOLY00084256] [MEME] sync MT6291 to UMOLY
 * Rename MSG_ID to MSG_ID_FDD.
 *
 * 01 16 2015 david.niu
 * [MOLY00087934] [MT6291][LPP OTDOA Development] Inter-freq RSTD measurement indication
 * .
 *
 * 10 16 2014 david.niu
 * [MOLY00080211] [MT6291_DEV][MT6291_UESIM_DEV] Check in low power to MT6291_DEV, MT6291_UESIM_DEV
 * .
 *
 * 09 25 2014 henry.lai
 * [MOLY00079071][MT6291][U4G] Low Power Modification for CEL Paging.
 *
 ****************************************************************************/
#include "module_msg_range.h"

#ifndef _LAS_MSGID_H
#define _LAS_MSGID_H


MODULE_MSG_BEGIN( MSG_ID_LAS_CODE_BEGIN )

MSG_ID_LAS_MESSAGE_BEGIN = MSG_ID_LAS_CODE_BEGIN,
/* MOB to LMOB */
MSG_ID_MOB_LMOB_CONFIG_REQ,
MSG_ID_MOB_LMOB_RADIO_MEASURE_REQ,
MSG_ID_MOB_LMOB_CELL_REJ_INFO_IND,
MSG_ID_MOB_LMOB_PRIORITY_INFO_IND,
MSG_ID_MOB_LMOB_OOS_SCSI_INFO_CNF,
MSG_ID_MOB_LMOB_CONFIG_UCELL_MEAS_CNF,
MSG_ID_MOB_LMOB_CONFIG_UCELL_PRIO_MEAS_CNF,
MSG_ID_MOB_LMOB_UAS_LTE_MEASUREMENT_REQ,
MSG_ID_MOB_LMOB_CONFIG_GCELL_MEAS_CNF,
MSG_ID_MOB_LMOB_CONFIG_GCELL_PRIO_MEAS_CNF,
MSG_ID_MOB_LMOB_GAS_LTE_MEASUREMENT_REQ,
MSG_ID_MOB_LMOB_CONFIG_CCELL_MEAS_CNF,
MSG_ID_MOB_LMOB_CONFIG_CCELL_PRIO_MEAS_CNF,
MSG_ID_MOB_LMOB_CAS_LTE_MEASUREMENT_REQ,
MSG_ID_MOB_LMOB_CAS_LTE_HPS_QUALIFY_CELL_IND,
MSG_ID_MOB_LMOB_IR_MEAS_CTRL_REQ,
MSG_ID_MOB_LMOB_ADJUST_MEAS_REQ,
MSG_ID_MOB_LMOB_SYNCH_STATUS_REQ,
MSG_ID_MOB_LMOB_TST_INJECT_SYNCH_REQ,
MSG_ID_MOB_LMOB_NBR_CELL_INFO_START_REQ,
MSG_ID_MOB_LMOB_NBR_CELL_INFO_STOP_REQ,
MSG_ID_MOB_LMOB_EM_UPDATE_REQ,
MSG_ID_MOB_LMOB_MEAS_LOGGING_REQ,
MSG_ID_MOB_LMOB_ESTFAIL_REPORT_REQ,
/* EL1 to LAS */
#ifdef __LAS_MOB__
MSG_ID_ERRC_EL1MPC_PRS_GAP_IND,
#endif /* __LAS_MOB__ */
/* ERRC to LAS */
/* MPAL to GISE*/
MSG_ID_MPAL_GISE_STANDBY_GSM_MEAS_REQ,
MSG_ID_MPAL_GISE_STANDBY_GSM_PRIO_MEAS_REQ,
/* RRM to GISE*/
MSG_ID_RRM_GISE_SET_CONTEXT_REQ,
MSG_ID_RRM_GISE_GET_GCELL_MEAS_REQ,


MSG_ID_TDD_LURR_DUMP_CONTEXT,
MSG_ID_TDD_LMEME_DUMP_CONTEXT,
MSG_ID_TDD_LMEME_UT_SET_CONTEXT,
MSG_ID_TDD_LMEME_UT_SET_SHM,
MSG_ID_TDD_LRRCE_LURLC_TM_DATA_IND,/*LURLC to LRRCE*/

MSG_ID_FDD_LURR_DUMP_CONTEXT,
MSG_ID_FDD_LMEME_DUMP_CONTEXT,
MSG_ID_FDD_LMEME_UT_SET_CONTEXT,
MSG_ID_FDD_LMEME_UT_SET_SHM,

MSG_ID_L4C_LAS_CELL_POWER_MEAS_ONOFF_REQ,
MSG_ID_L4C_LAS_CELL_POWER_MEAS_ONOFF_CNF,

MSG_ID_LAS_NON_USED_MESSAGE_END,
MSG_ID_LAS_CODE_END = MSG_ID_LAS_NON_USED_MESSAGE_END,
MODULE_MSG_END( MSG_ID_LAS_CODE_TAIL )

#endif /* _LAS_MSGID_H */
