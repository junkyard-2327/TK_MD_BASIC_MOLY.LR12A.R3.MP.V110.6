/******************************************************************************
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
*******************************************************************************/

/*******************************************************************************
 * Filename:
 * --------------------------------------------------------
 *   ratdm_sit_api.h
 *
 * Project:
 * --------------------------------------------------------
 *
 *
 * Description:
 * --------------------------------------------------------
 *
 *
 * Author:
 * --------------------------------------------------------
 * -------
 *
 * --------------------------------------------------------
 * $Log$
 *
 * 07 10 2018 atheeswari.jeyachandran
 * [MOLY00337944] [R3.MP][UG][MT6761][Merlot][O1][MP3][FT][India][Delhi][VoLTE][RJIO][IDEA][Auto][Android Linux Script][SST] Modem Warning: +EWARNING: [1][643] dpcopro_mmu_drv.c #992; (timestamp: 650294582) VRB:1.ofs:0x107.pv:0x282DFC4 rfail pidx:0x340
 * Ratdm_sit_free_R3_merge
 *
 * 11 09 2017 rajesh.sastry
 * [MOLY00288379] ?CU official test??OPPO??17031??CU??CA NS-IOT?FDD B3,active data session on B3c CA cell, start MO voice call and CSFB  to WCDMA cells, voice and data session continued MO disconnect the call, fast return to LTE network and start CA
 *
 * 10 16 2017 ravitej.ballakur
 * [MOLY00280838] [UMOLYA] PDCP indirect mode corrections
 * misc ccorrection for PDCP indirect mode and UT.
 *
 * 09 12 2017 sean.jheng
 * [MOLY00275212] [RATDM] Fix UT UG cases
 * 	
 * 	.
 *
 * 09 04 2017 tc.chang
 * [MOLY00275212] [RATDM] Fix UT UG cases.
 *
 * 08 29 2017 ravitej.ballakur
 * [MOLY00274506] [BIANCO][MT6763][RDIT][L+L][MTBF][PHONE][Overnight][HQ][Lab][Ericsson][HCR]Fatal error(ADDRESS_ERROR_STORE)] err_code1:0x00000005 err_code2:0x910C7E03 err_code3:0x910C7DEB
 * .
 *
 * 08 23 2017 ravitej.ballakur
 * [MOLY00268053] [Gen93] Miscelleneous changes in RATDM UG
 * .
 *
 * 08 23 2017 ravitej.ballakur
 * [MOLY00268053] [Gen93] Miscelleneous changes in RATDM UG
 * .
 *
 * 08 18 2017 ming.lee
 * [MOLY00271498] [MT6763][Bianco][N1][EIOT-3G][TW][HQ][3GSM][HSDPA][TC-IOT-HS156] throughput not stable ,MAX 17Mb/s down to 600Kb/s
 * .
 *
 * 08 18 2017 ravitej.ballakur
 * [MOLY00271871] [MT6763][Bianco][N1][WW FT][Australia][Sydney][Overnight][Sydney][SIM1:Telstra]Trigger time:[2017-08-11 18:43:45.548535] md1:(MCU_core1.vpe0.tc0(VPE2)) [Fatal error(task)] err_code1:0x00000305 err_code2:0x8888007C err_code3:0xCCCCCCCC MD Offender:UL2
 * .
 *
 * 08 01 2017 ravitej.ballakur
 * [MOLY00268053] [Gen93] Miscelleneous changes in RATDM UG
 * .
 *
 * 07 25 2017 xiaokai.liu
 * [MOLY00266539] [TDD][MD MTBF][10.67 hours] Externel (EE),0,0,99,/data/core/,1,modem,Trigger time:[2017-07-20 01:39:42.970127]md1:(MCU_core0.vpe0.tc0(VPE0))[ASSERT] file:mcu/common/driver/sleep_drv/internal/src/ostd.c line:2224p1:0xa1000302p2:
 * 1. dont set sit information within FLC for TDD3G
 * 2. mark resync 0xff in rat_info
 * 3. strong mapping RATDM buffer type to UPCM buffer type.
 *
 * 07 24 2017 ravitej.ballakur
 * [MOLY00266295] [MT6763][C2K][CNOP][Regression]SIM2(CU card) send MMS fail
 * .
 *
 * 07 06 2017 head.hsu
 * [MOLY00261868] [6293]UL SIT new handling
 * RATDM-UG, RATDM-CMN-SIG part
 *
 * 06 20 2017 timothy.yao
 * [MOLY00257646] [SLIM] SIT enlarges memory size of 1.73MB when bug fix.
 * SIT size reduction in TRUNK.
 * (verified in MP1 local build & SE3 sanity)
 *
 * 06 11 2017 ravitej.ballakur
 * [MOLY00256562] [MT6763][Bianco][N1][MTBF][PHONE][Overnight][HQ][Lab][Ericsson][ASSERT] file:mcu/common/driver/dpcopro/src/dpcopro_mmu_drv.c line:1645
 * .
 *
 * 06 01 2017 ravitej.ballakur
 * [MOLY00253823] [RATDM]code changes with specific RAT combination in CMN_SIG
 * .
 *
 * 05 12 2017 ravitej.ballakur
 * [MOLY00249237] [BIANCO][MT6763][RDIT][FT][SZ][Overnight][FDD][SIM1:CU][SIM2:CU][ASSERT] file:mcu/common/driver/dpcopro/src/dpcopro_mmu_drv.c line:1635
 * cleaning up the upcm queue on pdp deactivation.
 *
 * 05 08 2017 ravitej.ballakur
 * [MOLY00246514] [BIANCO][MT6763][RDIT] Sanity fail in case 6.2 SIM1 FTP DL xMB, SIM2 MT, SIM1 DL finish in 2G
 * dynamic copro switch for GSM.
 *
 * 05 03 2017 ravitej.ballakur
 * [MOLY00246824] [BIANCO][MT6763][RDIT][PHONE][Overnight][HQ][MTBF][Lab][Ericsson][ASSERT] file:mcu/common/driver/dpcopro/src/dpcopro_mmu_drv.c line:1591
 * Fix for ALPS03275341
 *
 * 04 24 2017 ravitej.ballakur
 * [MOLY00244615] [BIANCO][MT6763][RDIT][FT][FDD][CU][SH][SIM1:CU][SIM2:NA][ASSERT] file:mcu/common/driver/dpcopro/src/dpcopro_mmu_drv.c line:1638
 * PDU stored in RABM but PDP deactivated, copro needs to be freed
 *
 * 04 24 2017 ravitej.ballakur
 * [MOLY00244588] [BIANCO][MT6763][RDIT][FT][FDD][CU][SH][SIM1:CU][SIM2:NA]Assert fail: dpcopro_mmu_drv.c 1623 - DPCOPRO
 * Fix resetting RATDM SIT table tail and head on IRAT to LTE
 *
 * 04 23 2017 anurag.pancholi
 * [MOLY00244333] [BIANCO][MT6763] RATDM Target Warning Removal
 * .
 *
 * 04 20 2017 ravitej.ballakur
 * [MOLY00243931] [BIANCO][MT6763][RDIT][PHONE][Overnight][HQ][MTBF][Lab][Ericsson][ASSERT] file:mcu/pcore/modem/nas/ratdm/ug/src/ratdm_sit_api.c line:878
 * Fix for ALPS03258421.
 *
 * 04 18 2017 ravitej.ballakur
 * [MOLY00243205] [6293] Increase the SIT_Socket to hold 2 PS
 * Increase SIT_Socket to hold 2 PS.
 *
 * 01 06 2017 ravitej.ballakur
 * [MOLY00195360] [3G][RATDM][PDCP] - Gen93 3G RATDM and PDCP code modification for new HW and MCU Archi
 * merge changes from FPGA dev branch.
 *
 * 12 28 2016 ravitej.ballakur
 * [MOLY00195360] [3G][RATDM][PDCP] - Gen93 3G RATDM and PDCP code modification for new HW and MCU Archi
 * Fix bug while wraparound SIT.
 *
 * 12 26 2016 ravitej.ballakur
 * [MOLY00195360] [3G][RATDM][PDCP] - Gen93 3G RATDM and PDCP code modification for new HW and MCU Archi
 * Fixing bug in RATDM free SDU for Target and UESIM as well as fixes for PDCP HC..
 *
 * 10 11 2016 ravitej.ballakur
 * [MOLY00195360] [3G][RATDM][PDCP] - Gen93 3G RATDM and PDCP code modification for new HW and MCU Archi
 * Bug fix for UESIM failure 7.1.7.4.
 *
 * 10 04 2016 ravitej.ballakur
 * [MOLY00195360] [3G][RATDM][PDCP] - Gen93 3G RATDM and PDCP code modification for new HW and MCU Archi
 * PDCP loopback bug fix for um mode.
 *
 *
 ******************************************************************************/

#ifndef _RATDM_SIT_API_H
#define _RATDM_SIT_API_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "event_info_utility.h"
#include "mcd_l3_inc_gprs_struct.h"
#include "l3_inc_local.h"
#include "mmi_l3_enums.h"
#include "kal_public_api.h"
#include "ps_ratdm_struct.h"
#include "global_def.h"
#include "flc2_ent_functions.h"
#include "l3_inc_enums.h"
#include "mcd_l3_inc_struct.h"
#include "upcm_ul_sit.h"
#ifdef __GEMINI__
#include "sim_common_enums.h"
#endif

#ifdef __UMTS_RAT__
#include "uas_common_enums.h"
#endif
#include "ratdm_shaq_application_api.h"
#include "ratdm_export_api.h"



/* MACRO DEFINITION */
#ifndef __UMTS_RAT__
#define LAST_EXTENDED_RB_ID (32)  //refer to uas_common_enums.h
#endif // ~ #ifndef __UMTS_RAT__
/* SIT definitions */
#define MAX_SIT_INTERFACE 2 /* To care of 2 active PS connection at the same time */
#define M_SIT_MAX_NSAPI (15)
#define M_SIT_SOCKET_NSAPI_ARRAY_SIZE ((M_SIT_MAX_NSAPI)+((MAX_CS_TM_Q_NUM)+(MAX_CS_UM_Q_NUM))+(1))
#define M_SIT_SOCKET_CID_ARRAY_SIZE ((M_SIT_MAXIMUM_CONTEXT_ID)+(1))
#define M_SIT_SOCKET_RBID_ARRAY_SIZE ((LAST_EXTENDED_RB_ID)+(1))

#define M_SIT_MINIMUM_CONTEXT_ID (1)
#define M_SIT_MAXIMUM_CONTEXT_ID ((PS_TOT_NSAPI_NUM)+((MAX_CS_TM_Q_NUM)+(MAX_CS_UM_Q_NUM)))
#if defined(__MULTIPLE_PS__)
#define RATDM_SIT_MAX_NUM       MAX_SIM_NUM
#else // end of __MULTIPLE_PS__
#define RATDM_SIT_MAX_NUM       1
#endif // end of !__MULTIPLE_PS__

/* RATDM SIT operations */
#define RATDM_IS_SIT_TABLE_EMPTY UPCM_SIT_IS_EMPTY
#define RATDM_IS_SIT_TABLE_FULL UPCM_SIT_IS_FULL
#define RATDM_IS_SIT_FREE UPCM_IS_SDU_FREED
#define RATDM_GET_SIT_ENTRY(_tbl, _idx) (ratdm_ul_sdu_info_t *)((_tbl)->p_addr + (_idx))
#define RATDM_GET_UPCM_SIT_ENTRY(_tbl, _idx) (upcm_ul_sdu_info_t *)((_tbl)->p_addr + (_idx))
#define RATDM_GET_SIT_HEAD_ENTRY(_tbl) RATDM_GET_SIT_ENTRY(_tbl, (_tbl)->head)
#define RATDM_GET_SIT_TAIL_ENTRY(_tbl) RATDM_GET_SIT_ENTRY(_tbl, (_tbl)->tail)
#define RATDM_NEXT_SIT_IDX UPCM_SIT_IDX_NEXT
#define RATDM_NEXT_N_SIT_IDX(_idx, _n, _size) (((_idx) + (_n)) & ((_size) - 1))
#define RATDM_SIT_HEAD_NEXT(_tbl) UPCM_SIT_MV_HEAD((_tbl), 1)
#define RATDM_SIT_TAIL_NEXT(_tbl) UPCM_SIT_MV_TAIL((_tbl), 1)
#define RATDM_SIT_SET_TAIL(_tbl, _tail) \
{\
    (_tbl)->tail = (_tail);\
}
#define RATDM_GET_SDU_BUF_TYPE UPCM_GET_SDU_BUF_TYPE
#define RATDM_SET_SDU_BUF_TYPE UPCM_SET_SDU_BUF_TYPE
#define RATDM_SET_SIT_FREE UPCM_SET_SDU_FREED
#define RATDM_CLR_SIT_FREE UPCM_CLR_SDU_FREED
#define RATDM_SIT_FLAG_BIT_BCONFIRM ((kal_uint8)0x02)
#define RATDM_SIT_SET_BCONFIRM(sdu_info_ptr) (sdu_info_ptr->rat_info |= RATDM_SIT_FLAG_BIT_BCONFIRM)
#define RATDM_SIT_CLR_BCONFIRM(sdu_info_ptr) (sdu_info_ptr->rat_info &= ~RATDM_SIT_FLAG_BIT_BCONFIRM)
#define RATDM_SIT_GET_BCONFIRM(sdu_info_ptr) ((sdu_info_ptr->rat_info & RATDM_SIT_FLAG_BIT_BCONFIRM)>>1)
#define RATDM_SIT_FLAG_BIT_PRIO ((kal_uint8)0x01)
#define RATDM_SIT_SET_PRIO(sdu_info_ptr,x) (sdu_info_ptr->rat_info |= (x & RATDM_SIT_FLAG_BIT_PRIO))
#define RATDM_SIT_GET_PRIO(sdu_info_ptr) ((sdu_info_ptr->rat_info) & (RATDM_SIT_FLAG_BIT_PRIO))

#define RATDM_MRAK_SIT_ENTRY_AS_RESYNC(_sit) \
{\
    (_sit)->rat_info = 0x0;\
}
#define RATDM_SET_MUI_FOR_SIT(is_prio,_idx) ((is_prio <<31)|(_idx))

#ifdef __RATDM_UT__
/* Do not free RATDM UT VRB */
#define RATDM_FREE_SIT_ENTRY UPCM_FREE_SIT_ENTRY_WO_FREE_BUF
#else
#define RATDM_FREE_SIT_ENTRY UPCM_FREE_SIT_ENTRY
#endif

/* SIT enums */
/* Error codes & Return codes */
typedef enum
{
    SIT_OK,
    SIT_GENERAL_ABORT,
    SIT_CONVENTIONAL_TRACK,
    SIT_UPLINK_DATA_GOTO_CONVENTIONAL_TRACK = SIT_CONVENTIONAL_TRACK,
    SIT_KICK_UL2,
    SIT_NOT_INITIATED,
    SIT_CANNOT_FIND_Q,
    SIT_CANNOT_FIND_NSAPI_FROM_CONTEXT_ID,
    SIT_NSAPI_CHECK_FAIL,
    SIT_EXCEPTION,
    SIT_ABORT,
    SIT_NOT_READY,
    SIT_CANNOT_FIND_CID_FROM_RBID
} SIT_retCode;

/**
 *  @brief  buffer type
 */
typedef enum
{
    RATDM_BUF_T_VRB = BUF_T_VRB,
    RATDM_BUF_T_PRB = BUF_T_PRB,
    RATDM_BUF_T_FLCV2 = BUF_T_UNUSED,
    RATDM_BUF_T_CSR = BUF_T_GPD,      // could be FLCv2/GPD/others...
    RATDM_BUF_T_NUM = BUF_T_NUM
} ratdm_ul_sdu_buf_type_e; // refer to ul_sdu_buf_type_e enum

/* SIT Structures */
typedef struct ratdm_ps_vrb_data_req_struct_tag
{
    kal_bool bConfirm;
    kal_bool isVRB; //flag set for either VRB or PRB address
    kal_uint8 TxRbId;
    kal_uint16 bitLength;
    kal_uint32 MUI;
    kal_uint8 *sdu_addr;
    kal_uint32 sit_entry_idx;
} ratdm_ps_vrb_data_req_struct;



typedef struct ratdm_ul_sdu_info_t_tag
{
    kal_int16   len;
    kal_uint8   flags;      // buffer type and free-bit 
    kal_uint8   rat_info;   // priority/normal
    kal_uint32  addr;
	//kal_uint32  npdu_num; npdu num removed to optimize RAM space
} ratdm_ul_sdu_info_t;

typedef struct ratdm_ul_sit_t_tag
{
    ratdm_ul_sdu_info_t *p_addr;     // SIT base address
    kal_uint32          size;       // SIT size (entry #)
    kal_uint32          head;
    kal_uint32          tail;
	kal_uint32          used_size; //currently used size in bytes
} ratdm_ul_sit_t;

typedef struct
{
    kal_uint32 *sdu_addr;
    kal_uint16 pkt_length;
} ratdm_sit_ut_sdu_t;



extern ratdm_ul_sit_t    g_ratdm_sit_pri[RATDM_SIT_MAX_NUM][UPCM_MAX_SIT_GROUP_NUM];
extern ratdm_ul_sit_t    g_ratdm_sit_nml[RATDM_SIT_MAX_NUM][UPCM_MAX_SIT_GROUP_NUM];

/*SIT Get and query API's */
extern void *Get_SDU_Priority_SIT(ExtendedRbId tx_rb_id, kal_uint32 *left_bits, kal_uint8 sim_interface);
extern void *Get_SDU_Normal_SIT(ExtendedRbId tx_rb_id, kal_uint32 *left_bits, kal_uint8 sim_interface);
extern kal_uint32 RlcQuery_Normal_SIT_LeftBits(ExtendedRbId tx_rb_id, kal_uint8 sim_interface);
extern kal_uint32 RlcQuery_Priority_SIT_LeftBits(ExtendedRbId tx_rb_id, kal_uint8 sim_interface);
extern void RlcFree_SIT_SDU(ExtendedRbId tx_rb_id, kal_bool IsPrioSIT, kal_uint16 sit_entry_idx, kal_uint8 sim_interface);
extern void FDD_urlc_vrb_va_shortage_hdlr(kal_uint32 vrb_id, kal_uint32 sim_idx);

/* LoopBack API's */
extern void SIT_LBM_CreateRB(ExtendedRbId rb_id,kal_uint8 sim_interface);
extern void SIT_LBM_ReleaseRB(ExtendedRbId rb_id,kal_uint8 sim_interface);

/*Non LB  RBID RABId mapping  API's*/
extern void SIT_FillRBIdNsapiMapping(ExtendedRbId RBId, kal_uint8 nsapi, kal_uint8 sim_interface);
extern void SIT_EraseRBIdNsapiMapping(ExtendedRbId RBId, kal_uint8 sim_interface);
extern void SIT_psEraseCidNsapiMapping(kal_uint8 nsapi, kal_uint8 sim_interface);
extern void SIT_psLeaveRatUmtsFdd(kal_uint8 sim_interface);
extern void SIT_psFillCidNsapiMapping(kal_uint8 CID, kal_uint8 nsapi, kal_uint8 sim_interface);

extern void SIT_RLC_test_enqueue(ExtendedRbId rb_id,ratdm_sit_ut_sdu_t *sdu_p, kal_bool IsPrioSIT,kal_uint8 sim_interface);
extern void SIT_psEnqueueWithOnePacket(ratdm_ps_data_req_struct *ps_data_req,kal_uint8 sim_interface);
extern void ratdm_SIT_free_vrb(kal_uint8 *FreePdu, kal_uint8 nsapi, kal_uint8 sim_interface);
extern void SIT_psSimUnbind_FreeEnqueuedData(kal_uint8 nsapi, kal_uint8 sim_interface);

extern void ratdm_ratadp_free_ug_epsb_ul_queue(kal_uint8 nsapi, kal_uint8 sim_interface);

extern void ratdm_psEnqueueWithPriorityInfo(kal_uint8 nsapi,ratcmn_ul_sdu_93_t *p_sdus, kal_uint8 enqueue_decision, kal_uint8 sim_interface);
extern void ratdm_sit_resync_head_n_tail(ratdm_ul_sit_t *ratdm_sit_tbl, kal_uint32 start_index);
extern kal_bool ratdm_sit_table_free_bit_check(kal_uint8 sit_tbl_idx, kal_bool is_priority, kal_uint8 sim_interface);
extern kal_uint16 SIT_get_activated_RAB_status(kal_uint8 sim_interface);



#endif /* _RATDM_SIT_API_H */
