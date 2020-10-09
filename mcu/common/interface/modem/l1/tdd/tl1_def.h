/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2009
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

/******************************************************************************
 * Filename:
 * --------------------------------------------------------
 *   tl1_def.h
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
 * 01 14 2016 yanhai.xuan
 * [MOLY00159734] TX power detector support on Jade
 * .
 *
 * 04 17 2015 marco.zhang
 * [MOLY00096053] [TDD] Rx report for test (need turn on __TDS_RX_TEST_SUPPORT__)
 * 	.
 *
 * 04 16 2015 chuansheng.zhang
 * [MOLY00097620] [TK6291][UBin] TL1 Platform Patch
 * TL1: Ubin Phase2 code merge.
 *
 * 01 07 2015 marco.zhang
 * [MOLY00086950] UMOLY TL1 MAINTAIN
 * 	.
 *
 * 01 05 2015 fanzhi.meng
 * [MOLY00086950] UMOLY TL1 MAINTAIN
 * 	.
 *
 * 12 21 2014 marco.zhang
 * [MOLY00086950] UMOLY TL1 MAINTAIN
 * 	prefix.
 *
 * 12 10 2014 rong.yang
 * [MOLY00087194] [3G UMAC] merge 6291 code from MOLY.U3G.90IT.DEV
 * .
 *
 * 05 23 2014 xiaoyun.mao
 * [MOLY00066499] [3G TDD UMAC & L1] DPA & R4 rx memory revise
 * 	.rx data path change
 *
 * 03 06 2014 xiaoyun.mao
 * [MOLY00058570] [MT6290E2][SGLTE][82LTEv2][LT+G][GCF][ETC7310][MM][Band 38][Band A][case 8.4.2.2] fail,终端发送了cell update导致用例失败
 * 	.DMO optimization: ul tick tell mac DMO info
 *
 * 09 26 2013 xiaoyun.mao
 * [MOLY00036017] [MOLY NOT NEED]GEMINI rxtx protect 优化
 * 	.SRB information
 *
 * 05 23 2013 xiaoyun.mao
 * [MOLY00023509] suspend and dm optimization get out of gemini
 * .
 *
 * 05 16 2013 xiaoyun.mao
 * [MOLY00016548] [MT6290 PO admit][MT6290E1][FirstCall][3G TDD]merge code to Trunk and Development branch
 * .add bit14 & bch sib7 modify & fix macro redefinition problem
 *
 * 04 26 2013 fanzhi.meng
 * [MOLY00019723] [MT6290 Bring-up]_SCIF MCU/DSP CODE CHECK IN
 * .WR8 SYNC TO MOLY
 *
 * 04 26 2013 xiaoyun.mao
 * [MOLY00020915] Check in Autonomous gap code
 * .
 *
 * 04 09 2013 ast00029
 * [MOLY00013377] [TDD128][ESL][MOLY]check-in ESL code.
 * for ESL
 *
 * 04 01 2013 shouzhu.zhang
 * [MOLY00013249] MM TL1 Code check in
 * [TL1] Merge lastes WR8 + R9 + MM code to MOLY..
 *
 * 03 01 2013 shun.liu
 * [MOLY00011182] MT6572/6582: RF TX test feature check in MOLY main
 * EM tx test tl1 part.
 *
 * 10 25 2012 ast00029
 * [MOLY00005252] AST3001的TD的失同步fail，出现掉网
 * make c,r ast_l1_ast3001
 * 
 * for MOLY00005252, don't dl init sync when UPCC and LBM2
 * 
 * 10 11 2012 shouzhu.zhang
 * [MOLY00004672] [new feature check in] TDD128 PS Tput optimization about DM gap
 * .
 * 
 * 10 10 2012 shouzhu.zhang
 * [MOLY00004672] [new feature check in] TDD128 PS Tput optimization about DM gap
 * .
 * 
 * 10 10 2012 shouzhu.zhang
 * [MOLY00004672] [new feature check in] TDD128 PS Tput optimization about DM gap
 * .
 * 
 * 09 24 2012 xiaoyun.mao
 * [MOLY00004069] [MOLY]TDD_R9_DEV Patch back to MOLY
 * TDD_R9_DEV patch back to MOLY
 *
 * 05 03 2012 wcpuser_integrator
 * removed!
 * .
 *
 * 05 03 2012 wcpuser_integrator
 * removed!
 * .
 *
 * 03 26 2012 shuyang.yin
 * removed!
 * .
 *
 * 03 21 2012 shuyang.yin
 * removed!
 * .
 *
 * 03 02 2012 shuyang.yin
 * removed!
 * .
 * (TL1 SAP)
 *
 * 02 15 2012 shuyang.yin
 * removed!
 * .
 *
 * 01 13 2012 shuyang.yin
 * removed!
 * .
 *
 * 11 14 2011 shi.dong
 * removed!
 * TL1 code interface fta merge in MAUI.
 *
 * 10 11 2011 shuyang.yin
 * removed!
 * .
 * add compile option to seperate different hardware
 *
 * 04 20 2011 xinqiu.wang
 * removed!
 * Modify some description.
 *
 * 04 19 2011 xinqiu.wang
 * removed!
 * merge code from daily LOAD to MAUI 10A.
 *
 * 01 18 2011 xinqiu.wang
 * removed!
 * Add RHR feature to tl1 interface files.
 *
 * 12 14 2010 xinqiu.wang
 * removed!
 * Modify the struct of phy_post_tx_ind.
 *
 * 12 01 2010 popcafa.shih
 * removed!
 * .
 *
 * 11 29 2010 xinqiu.wang
 * removed!
 * Modify the description of umts_power_class.
 *
 * 11 04 2010 xinqiu.wang
 * removed!
 * 1. Add ul_mac_event to cphy_dch_setup/modify/release_req
 * 2. Add two ticks and structs for mac-tl1 interface.
 * 3. Add two simulation structs according to MAC's requeset.
 *
 * 11 03 2010 xinqiu.wang
 * removed!
 * 1.SLCE-TL1 SAP Modify for R7
 * 2. MAC-TL1 SAP Modify for UPA
 *
 * 08 24 2010 popcafa.shih
 * removed!
 * .
 *
 * removed!
 * removed!
 * 1.In etfc_eval_info_ind_T, modify the description of retx_pdu_timeslots_used[] and retx_pdu_etfci[], to replace MAC-d to MAC-e.
 * 2.Modify the BLER_INVALID to -64 in related description.
 *
 * removed!
 * removed!
 *         1.Modify comments of mac_harq_event in etfc_eval_info_req_T.
 *         2.Modify comments of is_new_tx_required in edch_data_req_T.
 *         3.Modify the comments of tx_power in tx_power_info_T.
 *
 * removed!
 * removed!
 * 1.Add pccpch_tx_power in cell_info_list_T
 * 2.Replace repeat_offset with act_time and subframe_num in edch_non_sched_grant_info_T
 * 3.Modify the comments of mac_event in etfc_eval_info_req_T, which is to change the meaning of bit1 from release to modify.
 * 4.Modify the comments to add range of ts_num in eagch_config_T, num_prach_definition in erucch_info_T,num_ref_qpsk & num_ref_16qam& ref_code_rate_qpsk& ref_beta_qpsk&ref_code_rate_16qam&ref_beta_16qam in edch_etfcs_T
 * 5.Modify comments of sync_ul_bitmap in sync_ul_erucch_info_T
 * 6.Modify range of bler_target in eagch_info_T
 * 7.Modify comments of ss_tpc_symbols in phy_signaling_info_T, retx_pdu_etfci[] in etfc_eval_info_ind_T
 * 8.Add uppch_shift, max_tx_power, umts_power_class in sync_ul_erucch_info_T.
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 1.Delete type definition of meas_control_E
 * 2.Modify range of iscp_timeslot_bitmap from 2~6 to 0~6 in comments
 * 3.Add HSUPA related type definition.
 *
 * removed!
 * removed!
 * 1.Delete pre-declare check of __UMTS_TDD128_MODE__
 * 2.Add AI_PARAMERROR_NO_UPPCH_SUBCHANNEL, AI_PARAMERROR_NO_RACH_DATA and AI_PARAMERROR_NO_RACH_CFG in access_status_E
 *
 * removed!
 * removed!
 * 1.Add comments of BCH_PRIOMEDIUM in bch_priority_T
 * 2.Modify UL1_RAT_FLIGHT/UMTS/GSM to TL1_RAT_FLIGHT/UMTS/GSM
 * 3.Use TL1 to replace UL1 and L1 in comments
 * 4.In ss_tpc_len_E, modify SS_TPC_X_SYMBOLS(X=2,4,8,16) to SS_TPC_16_DIVIDE_SF_SYMBOLS
 * 5.Modify type phy_sigaling_info_T to phy_signaling_info_T and modify phy_signalling to phy_signaling
 *  6.Modify comments of ccode in hssich_info_T, comments of ts_num in hsscch_config_T and comments of is_valid_data in hsdsch_data_T
 * 7.add pre-declare check of __UMTS_TDD128_MODE__
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * Add description of threshold in meas_event_T for internal measurement
 *
 * removed!
 * removed!
 * 1. rename the modulation_E to tdd128_modulation_E
 *
 * removed!
 * removed!
 * 1. remove the last comma in the enum defination, which cause compiling  error
 * 2.change the type of  num_timeslot in dl_dpch_rl_T from "kal_int8" to "kal_uint8"
 *
 * removed!
 * removed!
 * Rename __UMTS_TDD128_RAT__ to __UMTS_TDD128_MODE__
 *
 * removed!
 * removed!
 * add log section for tl1interface header files
 *
*******************************************************************************/

#ifndef _TL1_DEF_H
#define _TL1_DEF_H

#include "kal_public_api.h" //MSBB change #include "kal_release.h"
#include "tl1_cnst.h"
#include "gmss_public.h"  /*Ubin xxx_duplex_mode_type define*/

//MCU and DMA mode switch for TL1 and MAC using
#if (defined(MT6572) || defined(MT6582) || defined(MT6290))
//#define __TL1_BUFFER_CACHE_OPERATION_METHOD__  //DMA mode同时DMA optimization打开.  bring up时使用MCU mode不打开此开关
#endif

/*macro for for constant */
#define CRC_LENGTH_0_BITS 0
#define CRC_LENGTH_8_BITS 8
#define CRC_LENGTH_12_BITS 12
#define CRC_LENGTH_16_BITS 16
#define CRC_LENGTH_24_BITS 24

/*TTI length in subframe*/
#define TTI_5_MS    1
#define TTI_10_MS   2
#define TTI_20_MS   4
#define TTI_40_MS   8
#define TTI_80_MS   16
#define MAX_TTI     TTI_80_MS

/*bit map of channelisation code*/
#define CCODE_16_1      (0x00000001)
#define CCODE_16_2      (0x00000002)
#define CCODE_16_3      (0x00000004)
#define CCODE_16_4      (0x00000008)
#define CCODE_16_5      (0x00000010)
#define CCODE_16_6      (0x00000020)
#define CCODE_16_7      (0x00000040)
#define CCODE_16_8      (0x00000080)
#define CCODE_16_9      (0x00000100)
#define CCODE_16_10     (0x00000200)
#define CCODE_16_11     (0x00000400)
#define CCODE_16_12     (0x00000800)
#define CCODE_16_13     (0x00001000)
#define CCODE_16_14     (0x00002000)
#define CCODE_16_15     (0x00004000)
#define CCODE_16_16     (0x00008000)

#define CCODE_8_1       (0x00010000)
#define CCODE_8_2       (0x00020000)
#define CCODE_8_3       (0x00040000)
#define CCODE_8_4       (0x00080000)
#define CCODE_8_5       (0x00100000)
#define CCODE_8_6       (0x00200000)
#define CCODE_8_7       (0x00400000)
#define CCODE_8_8       (0x00800000)

#define CCODE_4_1       (0x01000000)
#define CCODE_4_2       (0x02000000)
#define CCODE_4_3       (0x04000000)
#define CCODE_4_4       (0x08000000)

#define CCODE_2_1       (0x10000000)
#define CCODE_2_2       (0x20000000)

#define CCODE_1_1       (0x40000000)
#define CCODE_RESERVED  (0x80000000) 

#define CCODE_SF1_MASK  (0x40000000)    
#define CCODE_SF2_MASK  (0x30000000)
#define CCODE_SF4_MASK  (0x0F000000)
#define CCODE_SF8_MASK  (0x00FF0000) 
#define CCODE_SF16_MASK (0x0000FFFF)

#define CCODE_SF1_SHFT  (30)
#define CCODE_SF2_SHFT  (28)
#define CCODE_SF4_SHFT  (24)
#define CCODE_SF8_SHFT  (16)
#define CCODE_SF16_SHFT (0) 

/*timeslot mask*/
#define TIMESLOT_0_MASK (0x01)
#define TIMESLOT_1_MASK (0x02)
#define TIMESLOT_2_MASK (0x04)
#define TIMESLOT_3_MASK (0x08)
#define TIMESLOT_4_MASK (0x10)
#define TIMESLOT_5_MASK (0x20)
#define TIMESLOT_6_MASK (0x40)
#define TIMESLOT_DWPTS_MASK (0x80)      /*for rx */
#define TIMESLOT_UPPCH_MASK (0x100)     /*for tx*/


/*dch modify field mask*/
#define DCH_MODIFY_NONE                 0x00000000
#define DCH_MODIFY_DL_TRCH_PARAM        0x00000001
#define DCH_MODIFY_DL_TFCS_PARAM        0x00000002
#define DCH_MODIFY_UL_TRCH_PARAM        0x00000004
#define DCH_MODIFY_UL_TFCS_PARAM        0x00000008
#define DCH_MODIFY_DL_COMM_RL_PARAM     0x00000010
#define DCH_MODIFY_DL_EACH_RL_PARAM     0x00000020
#define DCH_MODIFY_UL_RL_PARAM          0x00000040
#define DCH_MODIFY_PHY_PARAM            0x00000080
#define DCH_MODIFY_DL_ESTABLISH_PARAM   0x00000100
#define DCH_MODIFY_SBGP                 0x00000200
#define DCH_MODIFY_UL_POWER_INFO      0x00000400
#define DCH_MODIFY_ALL                  0xFFFFFFFF/*when dch-setup-req, set the value.*/

/*bch modify_field bit mask*/
#define BCH_PRIORITY_CAHNGE       0x01 
#define BCH_SIB_SCHEDULE_CAHNGE   0x02

/*AST trace compile option*/
//#ifdef NAND_SUPPORT
//#ifndef __AST_TRACE_TST_ENABLE__ 
//#define __AST_TRACE_TST_ENABLE__
//#endif
//#endif /*NAND_SUPPORT*/


/*MTK80428 UMAC TL1 related definition*/
typedef struct
{
    kal_bool        IsPartOfMinSet;
    kal_uint16      TFCI;
    kal_uint32      CTFC; 
	kal_uint32	    TFI[TDD_MAX_TRCH_NUM];
	kal_int32		aPriorityBits[13];
} TDD_tTFC;


/*-------- PhyCH related definition  ----------------------*/
typedef enum _TDD_access_status_E
{
   TDD_AI_ACK = 0,                               /* Network ACK */
   TDD_AI_NACK,                                  /* Network NACK in AICH,TL1 will not support this item. */
   TDD_AI_NOACK,                                 /* Network sends "NO_ACK"*/
   TDD_AI_ABORT,                                 /* Access transaction has been aborted as result of high layer
                                                                                reconfiguration(from RRC).EX:CPHY_RACH_RELEASE_REQ*/
   TDD_AI_PARAMERROR,                            /*replaced by NO_UPPCH_SUBCHANNEL,NO_RACH_DATA and NO_RACH_CFG*/
   TDD_AI_NESTEDREQUEST,                         /*Not used in TDD128*/
   TDD_AI_PARAMERROR_NO_UPPCH_SUBCHANNEL,        /*uppch subchannel is zero according to asc index*/
   TDD_AI_PARAMERROR_NO_RACH_DATA,               /*no valid rach data in TL1 when receiving PHY_ACCESS_REQ*/
   TDD_AI_PARAMERROR_NO_RACH_CFG                 /*no active rach channel when receiving PHY_ACCESS_REQ*/  
} TDD_access_status_E;



/*-------- TFS related definition  ----------------------*/
typedef enum _TDD_cc_type_T
{
   TDD_CC_NONE = 0,                              /*No coding*/                            
   TDD_CC_CONV12,                                /*Convolution coding with coding rate 1/2*/
   TDD_CC_CONV13,                                /*Convolution coding with coding rate 1/3*/
   TDD_CC_TURBO                                  /*Turbo coding */
} TDD_cc_type_T;

typedef enum
{    
    TDD_GAIN_FACTOR_NONE = 0,                    /*no gian factor applied */
    TDD_GAIN_FACTOR_SIGNAL,                      /*gain factor indicated by signal */ 
    TDD_GAIN_FACTOR_COMPUTE                     /*computed gain factor */
} TDD_gain_factor_E;

typedef struct _TDD_tfs_static_T
{
   kal_uint8         tti;                    /* TTI. 1, 2, 4, 8, 16, in unit of subframe frame.*/
   TDD_cc_type_T         channel_coding;         /* Coding type */
   kal_uint8         rm_attr;                /* RM attribute */
   kal_uint8         crc_size;               /* # of CRC bits. 0,8,12,16,24 */
} TDD_tfs_static_T;

typedef struct _TDD_tfs_dyn_T
{
   kal_uint8         tb_num;                 /* # of TB */
   kal_uint16        tb_size;                /* # of bibts in a TB */
} TDD_tfs_dyn_T;

typedef struct _TDD_tfs_T
{
   kal_uint8         tf_num;                    /* # of TF in this TFS */
   TDD_tfs_dyn_T         tfs_dynamic[TDD_MAXTF];        /* TFS dynamic part */
   TDD_tfs_static_T      tfs_static;                /* TFS static part */
} TDD_tfs_T;


typedef struct _TDD_dl_establish_T
{
   kal_uint8         t312;                      /* T312 */
   kal_uint16        n312;                      /* N312 */
   kal_uint8         n313;                      /* N313 */
   kal_uint8         t313;                      /* T313 */
   kal_uint16        n315;                      /* N315 */
} TDD_dl_establish_T;

/*-------- TFCS related definition  ----------------------*/
typedef struct _TDD_sig_gain_T
{
   kal_uint8         beta_d;                    /* Bd. 0 ~ 15 */
   kal_int8          ref_tfc_id;                /* Reference TFC ID. -1 ~ 3. */
                                                /* 0 ~ 3 : This TFCI is a referenced id for other computed TFC. */
                                                /* -1 : It is an invalid value. Means it will not be referenced by other TFC. */
} TDD_sig_gain_T;

typedef union _TDD_gain_factor_U
{
   kal_int8          computed_gain_id;          /* For computed gain factor using reference TFC id. 0 ~ 3 */
   TDD_sig_gain_T        sig_gain;                  /* The signaled gain factor. */
} TDD_gain_factor_U;


typedef struct _TDD_ul_dpch_tfc_T
{
   kal_uint8         tfi_list[TDD_MAX_TRCH_NUM];    /* The list of TFI for this TFCI for UL DCH TrCH */
   TDD_gain_factor_E     gain_factor_ind;           /* Gain factor enum:TDD_GAIN_FACTOR_NONE,TDD_GAIN_FACTOR_SIGNAL,TDD_GAIN_FACTOR_COMPUTE */
   TDD_gain_factor_U     gain_factor;               /* The union of gain factor for computed and signaled type. */
} TDD_ul_dpch_tfc_T;

typedef struct _TDD_rach_tfc_T
{
   kal_uint8         tfi_list;                  /* The list of TFI for this TFCI. The number of TrCH for PRACH is 1. */
   kal_bool          sig_gain_ind;              /* True: Gain factor is siganled. False: Gain factor is computed from reference TFCI */
   kal_int8          msg_pwr_offset;            /* Power offset between the last preamble and the control part of RACH */
   TDD_gain_factor_U     gain_factor;               /* Gain factor */
} TDD_ul_rach_tfc_T;

typedef struct _TDD_dl_tfc_T
{
   kal_uint8         tfi_list[TDD_MAX_TRCH_NUM];    /* The list of TFI for this TFCI for DL TrCH */
} TDD_dl_tfc_T;

/*-------- TrCH related definition  ----------------------*/

typedef struct _TDD_trch_T
{
   kal_uint8         trch_id;                   /* TrCH ID 1 ~ 32 */
   kal_uint8         bit_offset;                /* Bit offset. 0 ~ 7 ,Bit offset in PHY_DATA_IND*/
   TDD_tfs_T             tfs;                       /* TFS of this TrCH */
   kal_int8          target_bler;               /* [Range]: -63 ~ 0, -64.Dividing the value
                                                                                    of this field to   10 get the real BLER. "target_bler?value  will be: -63 ~ 0
                                                                                   (real BLER:  -6.3~0 = log10 (BLER)).-64 is used for invalid value to inform TL1
                                                                                   that this field is not configured by NW.*/
}  TDD_trch_T, 
   TDD_ul_rach_trch_T, 
   TDD_ul_dch_trch_T, 
   TDD_dl_fachpch_trch_T,
   TDD_dl_dch_trch_T;


/*-------- CCTrCH related definition  ----------------------*/
typedef enum _TDD_cctrch_type_E
{
   TDD_CCTRCH_UL_RACH,                              /* UL RACH CCTrCH */
   TDD_CCTRCH_UL_DCH,                               /* UL DCH CCTrCH */
   TDD_CCTRCH_DL_DCH,                               /* DL DCH CCTrCH */
   TDD_CCTRCH_DL_PCH,                               /* DL PCH CCTrCH */
   TDD_CCTRCH_DL_FACH,                              /* DL FACH CCTrCH */
   TDD_CCTRCH_DL_BCH,                               /* DL BCH CCTrCH */
   TDD_MAX_NUM_CCTRCH_TYPE                          /*2009/07/07 mtk80318: add */
} TDD_cctrch_type_E;

/*-------- BCH related definition  ----------------------*/
typedef struct _TDD_sib_info_T
{
   kal_uint8      seg_count;                    /* SEG_COUNT   1 ~ 16 */
   kal_uint16     sib_rep;                      /* SIB_REP     2^2 ~ 2^12 */
   kal_uint16     sib_pos;                      /* SIB_POS     0 ~ sib_rep-2 */
   kal_uint8      sib_off[TDD_MAX_SIB_SEG_COUNT];   /* SIB_OFF     2 ~ 32 The # of elements of this field is equal to seg_count-1 */
} TDD_sib_info_T;

typedef enum _TDD_bch_priority_T
{
   TDD_BCH_PRIOHIGH,                                /* Priority High */
    TDD_BCH_PRIOMEDIUM,                             /* Priority Medium, not used currrently, just keep for future use*/
   TDD_BCH_PRIOLOW                                  /* Priority Low */
} TDD_bch_priority_T;

/*-------- Data related definition  ----------------------*/
typedef struct _TDD_dlTrchData
{
   kal_uint8         trchId;                    /* TrCH ID */
   kal_uint16        tb_size;                   /* TB size in bit. 0 ~ 4992 */
   kal_uint16        num_tb;                    /* # of TB. 0 ~ 512 */
} TDD_dlTrchData;

typedef struct _TDD_ulTrchData
{
   kal_uint8         trchId;                    /* TrCH ID */
   kal_uint16        tb_size;                   /* TB size in bit. 0 ~ 4992 */
   kal_uint16        num_tb;                    /* # of TB. 0 ~ 512 */
} TDD_ulTrchData;

/*tx enable type*/
typedef enum _TDD_tx_enable_type_E
{
    TDD_TX_ENABLED = 0,
    TDD_TX_DISABLED_TDM_GAP,
    TDD_TX_DISABLED_DCH_RELEASE_ONLY,
    TDD_TX_DISABLED_DM_GAP,
#ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
    TDD_TX_DISABLED_NO_DPCH,
    TDD_TX_DISABLED_GEMINI_GAP,
#else
    TDD_TX_DISABLED_NO_DPCH
#endif
}TDD_tx_enable_type_E;

typedef struct _TDD_uldch_data_req_T 
{ 
   kal_uint8         cfn;
   kal_uint8         ul_mac_event;         /* bit 0: UL DCH setup,   */ 
                                               /* bit 1: UL DCH release, */
                                               /* bit 2: UL DCH modify   */
    TDD_tx_enable_type_E          tx_enable;
   kal_bool          tx_suspend;
   kal_uint8         tfc_status[TDD_MAX_UL_TFC];

	kal_uint8		meas_occasion_ind;

} TDD_uldch_data_req_T;

/* uldch data indication, mac to tl1 */
typedef struct _TDD_uldch_data_ind_T 
{ 
   kal_bool          bTxDataAvailable;   //KAL_FALSE: no data to send; KAL_TRUE: need send data, included SB
   kal_uint8         cfn;
   kal_bool          is_10_srb;
   kal_bool          is_40_srb;
   kal_uint8         num_trch;   
   TDD_ulTrchData        trchInfo[TDD_MAX_TRCH_NUM]; /* TrCH information including number of TB and TB size. Note that only 1 TRCH is included in RACH data. */   
   kal_uint16        tfci;
   kal_uint16        num_data[TDD_MAX_TRCH_NUM]; /* num_data[TDD_MAX_TRCH_NUM]. It means the total TB size on 1 TRCH. Value: 0 ~ TDD_MAX_UL_TB. */
   kal_uint8         *data[TDD_MAX_TRCH_NUM]; /*Point to 每条TRCH data buffer.  Data buff由MAC allocate and buffer指针由MAC填入，由TL1D读取。当TL1D处理完TX data后会发送POST TX DATA IND通知MAC释放。需要system service保证MAC of CR4与TL1D of MD32看到的buffer地址是一样的。*/ 
   TDD_tTFC             *pTFC;     /* Store the chosen TFC structure pointer. Use it  to assign pCCTrCh->pTFCInLastTTI */
} TDD_uldch_data_ind_T;

typedef enum _TDD_measured_type_T
{
   TDD_INTRA_FREQUENCY_MEASURED,                                /*Intra-Frequency measurement.*/
   TDD_INTER_FREQUENCY_MEASURED,                                /*Inter-Frequency measurement.*/
   TDD_FREQ_SCAN_DETECTED,                                      /*The measured cell is detected in the frequency scan procedure.*/
   TDD_SERVING_ONLY                                             /*Serving cell measurement*/
} TDD_measured_type_T;

/*-------- FACH MO related definition  ----------------------*/
typedef struct _TDD_fach_mo_info_T
{
   kal_uint8         n;                                     /* # of frames in max TTI. 1,2,4,8 */
   kal_uint8         k;                                     /* MO cycle length coefficient. M_REP=2^k */
   kal_bool          inter_freq_ind;                        /* Indicate if inter-frequency meas in MO */
   kal_bool          inter_rat_ind;                         /* Indicate if inter-RAT meas in MO */
   kal_uint16        start_off;                             /* C_RNTI % M_REP. 0 ~ 4095 */
} TDD_fach_mo_info_T;

/*-------- Operation-Mode related definition  ----------------------*/

typedef enum _TDD_mode_type_E
{
   TDD_OM_SINGLE,                                   /* Single Mode */
   TDD_OM_MULTI,                                      /* MULTI Mode */
   TDD_OM_DUAL //for build
} TDD_mode_type_E;

typedef enum _TDD_rat_type_E
{
   TDD_TL1_RAT_UMTS_ACTIVE,                            /* UMTS active */
   TDD_TL1_RAT_UMTS_INACTIVE,                          /* UMTS_Inactive*/
   TDD_TL1_RAT_FLIGHT,                                   /* Flight mode */
   TDD_TL1_RAT_UMTS, //for build
   TDD_TL1_RAT_GSM   //for build
} TDD_rat_type_E;

typedef struct _TDD_duplex_mode_info_T
{
   umts_duplex_mode_type  source_umts_duplex_mode;
   umts_duplex_mode_type  target_umts_duplex_mode;
   lte_duplex_mode_type   source_lte_duplex_mode;
   lte_duplex_mode_type   target_lte_duplex_mode;
} TDD_duplex_mode_info_T;


/*-------- Message(Primitive) related definition  ----------------------*/

typedef enum _TDD_dch_modify_msg_type_E
{
   TDD_DCH_RECONFIG = 0,                                /* Used when DCH is reconfigured */
   TDD_DCH_LOOP_MODE_2 = 2,                             /* Used when DCH loop back mode 2 */
   TDD_DCH_UPLINK_PHYSICAL_CHANNEL_CONTROL,             /* Used when Physical channel control message received */
} TDD_dch_modify_msg_type_E;


typedef enum _TDD_msg_container_error_E              /* Error cause of message container, MA only*/
{
   TDD_NONE,
   TDD_DCH_FAIL,
   TDD_COMMON_FAIL
} TDD_msg_container_error_E;


/*
typedef enum _meas_control_E
{
   MEAS_CTRL_INVALID,                               // No meas. control action in current MSG_CONTAINER 
   MEAS_STOP,                                           //TL1 do not need to resume measurement after apply current MSG_CONTAINER 
   MEAS_CONTI                                           // TL1 do need to resume measurement after apply current MSG_CONTAINER 
} meas_control_E;
*/
/*Add for improving full band FS efficiency -- by excluding some UARFCN or some frequency range*/
typedef enum _TDD_full_band_option_E
{
  TDD_FULL_BAND_ONLY,                        /*Normal full band FS*/
  TDD_FULL_BAND_AND_EXCLUDE          /*Full band FS but the indicated frequency list/range will be excluded in the full band FS procedure*/
} TDD_full_band_option_E;




typedef enum 
{
    TDD_CRC_ERROR, 
    TDD_CRC_OK,
    TDD_CRC_NO_CRC
} TDD_crc_status_E;

/*Define tineslot*/
typedef enum
{
    TDD_TIMESLOT_0 = 0,  
    TDD_TIMESLOT_1, 
    TDD_TIMESLOT_2,
    TDD_TIMESLOT_3,
    TDD_TIMESLOT_4,
    TDD_TIMESLOT_5,
    TDD_TIMESLOT_6,    
    TDD_TIMESLOT_DWPTS, 
    TDD_TIMESLOT_UPPCH      /*TDD_MAX_TIMESLOT_PER_SUBFRAME does not inlcude dwpts and uppch*/
} TDD_timeslot_E;

typedef enum 
{
    TDD_DL_DIRECTION =0, 
    TDD_UL_DIRECTION,
    TDD_MAX_NUM_DIRECTION
}TDD_direction_E;

typedef enum _TDD_tfci_len_E
{
    TDD_TFCI_0_BITS=0,
    TDD_TFCI_4_BITS=4,
    TDD_TFCI_8_BITS=8,
    TDD_TFCI_16_BITS=16,
    TDD_TFCI_32_BITS=32
} TDD_tfci_len_E;

typedef enum _TDD_midamble_alloction_mode_E
{
    TDD_MIDAMBLE_ALLOC_DMA=0,
    TDD_MIDAMBLE_ALLOC_CMA=1,
    TDD_MIDAMBLE_ALLOC_SPECIFIC=2
} TDD_midamble_alloction_mode_E;

typedef enum _TDD_ss_tpc_len_E
{
    TDD_SS_TPC_0_SYMBOLS = 0,
    TDD_SS_TPC_1_SYMBOLS,
    TDD_SS_TPC_16_DIVIDE_SF_SYMBOLS
} TDD_ss_tpc_len_E;

typedef enum _TDD_max_retrans_E
{
    TDD_MAX_RETRANS_1 = 1,                   /*max retranmit 1 time*/
    TDD_MAX_RETRANS_2 = 2,                   /*max retranmit 2 times*/  
    TDD_MAX_RETRANS_4 = 4,                   /*max retranmit 4 times*/
    TDD_MAX_RETRANS_8 = 8                    /*max retranmit 8 times*/
} TDD_max_retrans_E;

typedef enum _TDD_tdd128_modulation_E
{
    TDD_TDD128_MODULATION_QPSK = 0,                 /*QPSK*/
    TDD_TDD128_MODULATION_8PSK,                     /*8PSK*/
    TDD_TDD128_MODULATION_16QAM                     /*16QAM*/ 
} TDD_tdd128_modulation_E;

typedef enum _TDD_midamble_config_E
{
    TDD_MIDAMBLE_CONFIG_2 = 2,
    TDD_MIDAMBLE_CONFIG_4 = 4,
    TDD_MIDAMBLE_CONFIG_6 = 6,
    TDD_MIDAMBLE_CONFIG_8 = 8,
    TDD_MIDAMBLE_CONFIG_10 = 10,
    TDD_MIDAMBLE_CONFIG_12 = 12,
    TDD_MIDAMBLE_CONFIG_14 = 14,
    TDD_MIDAMBLE_CONFIG_16 = 16
} TDD_midamble_config_E;

typedef enum _TDD_second_interleave_mode_E
{
    TDD_SECOND_INTERLEAVE_FRAME = 0,          /*frame interleval*/
    TDD_SECOND_INTERLEAVE_TIMESLOT            /*timeslot interleval*/
} TDD_second_interleave_mode_E;

typedef enum _TDD_fpach_wt_E
{
    TDD_FPACH_WT_1 = 1,
    TDD_FPACH_WT_2 = 2,
    TDD_FPACH_WT_3 = 3,
    TDD_FPACH_WT_4 = 4 
} TDD_fpach_wt_E;

typedef enum _TDD_repeat_period_E
{
    TDD_REPEAT_PERIOD_1 = 1,
    TDD_REPEAT_PERIOD_2 = 2,
    TDD_REPEAT_PERIOD_4 = 4,
    TDD_REPEAT_PERIOD_8 = 8,
    TDD_REPEAT_PERIOD_16 = 16,
    TDD_REPEAT_PERIOD_32 = 32,
    TDD_REPEAT_PERIOD_64 = 64      
} TDD_repeat_period_E;


typedef enum _TDD_sib_rep_E
{
    TDD_SIB_REP_2    = 2,
    TDD_SIB_REP_4    = 4,
    TDD_SIB_REP_8    = 8,
    TDD_SIB_REP_16   = 16,
    TDD_SIB_REP_32   = 32,
    TDD_SIB_REP_64   = 64,
    TDD_SIB_REP_128  = 128,  
    TDD_SIB_REP_256  = 256,
    TDD_SIB_REP_512  = 512, 
    TDD_SIB_REP_1024 = 1024,
    TDD_SIB_REP_2048 = 2048,
    TDD_SIB_REP_4096 = 4096
} TDD_sib_rep_E;


typedef struct _TDD_ul_pc_info_T
{
    kal_int8    prx_dpch_des;                                /*-120 - -58 by step 1 in dBm,UL DPCH expected receive power at NodeB */
    kal_uint8   tpc_step;                                    /*1 - 3, in dB,Tx power control step size*/
    kal_uint8   pccpch_tx_power;                             /*6 - 43 by step 1 in dBm,P-CCPCH transmit power*/
    kal_bool    beacon_pl_est;              /*TRUE: UE may take into account pathloss estimated from beacon function physical channels.
                                                                     FALSE: UE shall not take into account pathloss estimation.*/
} TDD_ul_pc_info_T;

typedef struct _TDD_midamble_info_T
{
    TDD_midamble_alloction_mode_E    midamble_allocation_mode;  /*Midamble code allocation mode:DEFAULT,COMMON,UE_SPECIFIC.*/    
    TDD_midamble_config_E            midamble_config;           /*2, 4, 6, 8, 10, 12, 14, 16,Midamble code configuration,*/    
    kal_int8    midamble_shift;                             /*-1 - 15, -1 means invalid midamble shift.  Midamble code shift*/
} TDD_midamble_info_T;

typedef struct _TDD_phy_signaling_info_T
{
    TDD_tfci_len_E    tfci_bits;                     /*tfci bits length*/
    TDD_ss_tpc_len_E  ss_tpc_symbols;                /*Amount of SS and TPC bits sent in this timeslot*/
    kal_uint8    additional_ss_tpc_symbols;      /* 0 -15 , 0 for no additional SS and TPC symbols,The number of additional codes in this timeslot that carry TPC and SS symbols*/    
} TDD_phy_signaling_info_T;

typedef struct _TDD_timeslot_info_T
{
    kal_uint8    timeslot;                       /*0 - 6,Timeslot number, */    
    kal_uint8    num_ccode;                      /*1 - 16,The number of ccode in this timeslot.*/
    kal_uint32   ccode_bitmap;                   /*bit0 is C16-1 
                                                                    `                   bit1 is C16-2 
                                                                                         ...
                                                                                         bit 15 is C16-16 
                                                                                         bit16 is C8-1 
                                                                                                ..
                                                                                         bit23 is C8-8 
                                                                                         bit24 is C4-1 
                                                                                         bit27 is C4-4 
                                                                                         bit28 is C2-1 
                                                                                         bit29 is C2-2 
                                                                                         bit30 is C1-1
                                                                                         bit31 is reserved.*/
    TDD_tdd128_modulation_E modulation;              /*modulation type*/
    TDD_midamble_info_T    midamble;                 /*Midamble information*/
    TDD_phy_signaling_info_T    phy_signaling;       /*Physical signaling information.*/
} TDD_timeslot_info_T;

typedef struct _TDD_fpach_info_T
{  
    TDD_timeslot_info_T    timeslot;                  /*0 - 6,Timeslot number, */  
    TDD_fpach_wt_E    wait_time;                      /*1~4,The number of sub-frames, where UE should monitor FPACH after sending SYNC UL.*/
} TDD_fpach_info_T;

typedef struct _TDD_timeslot_common_T
{
    TDD_second_interleave_mode_E    second_interleave;/*Mode of 2nd interleaving, Enums:FRAME_BASED,TIMESLOT_BASED*/
    kal_uint8    punc_limit;                      /*40~100. This parameter is the puncturing limit. The value is from 40 to 100. The real puncturing limit is the value of this parameter divided by 100. */    
    TDD_repeat_period_E    repeat_period;             /*1, 2, 4, 8, 16, 32, 64, in frames. 1 means continuous allocation.Physical channel resource allocation period*/   
    kal_uint8    repeat_length;                   /*[1, (RepeatPeriod - 1)] in frames.Physical channel resource allocation length*/   
    kal_uint8    repeat_offset;                   /*[0, (RepeatPeriod - 1)],]: Physical channel resource allocation starting point, offset to RepeatPeriod.*/    
} TDD_timeslot_common_T;


typedef struct _TDD_ul_dpch_info_T
{
    kal_uint8    ul_dpch_num;                /*num of ul dpch, only can be 0 or 1;*/
    kal_int16    duration;                        /*0-4096, 0 for infinity.Total number of frames the physical resource will exist*/                     
    TDD_ul_pc_info_T     ul_pc;                      /*UL power control info*/  
    kal_uint8   sync_step;                        /*1 - 8, in 1/8 chip,Uplink synchronization step size.*/  
    kal_uint8   sync_freq;                        /*1 - 8, in sub-frame,Uplink synchronization frequencies, */
    TDD_timeslot_common_T  common;                   /*time slot common info*/
    kal_uint8    num_timeslot;                   /*number of UL timeslots*/
    TDD_timeslot_info_T    timeslot_list[TDD_MAX_TIMESLOT_PER_SUBFRAME];/*info of each timeslot*/
} TDD_ul_dpch_info_T;

typedef struct _TDD_dl_dpch_rla_T
{
    kal_uint8   tpc_step;                        /*1 - 3, in dB,Tx power control step size*/      
    kal_int32   doff;                            /*-1 ~7, -1 means  invalid,Default DPCH offset value*/
} TDD_dl_dpch_rla_T;


typedef struct _TDD_dl_dpch_rl_T
{
    kal_uint16   cell_param_id;                 /*0-127,Cell parameter ID*/   
    kal_int32    tm;                            /*(-1~6400*8-1). 0~(6400*8-1) for a cell whose frame boundary offset has been measured by TL1.
                                                                                          Otherwise, it can be set to “-1” as an unknown tm value.
                                                                                          Case TRHHO/DCH_Setup/BHO/TMHHO: PS needs to guarantee that tm and off is valid.
                                                                                          Case TRHHO_Revert/TMHHO_Revert/IRAT_Revert/BHO_Revert*/
    kal_int16    off;                           /*Sub frame # offset to LST. -1 ~ 8191, -1 means unknown*/
    kal_bool    tstd;                            /*True/False. True: tstd is applied on this cell’s P-CCPCH.*/
    kal_int16    duration;                      /*0-4096, 0 for infinity,Total number of frames the physical resource will exist.*/                 
    TDD_timeslot_common_T    common;                /*common info of timeslots*/
    kal_uint8   num_timeslot;                  /*num of DL timeslot*/
    TDD_timeslot_info_T    timeslot_list[TDD_MAX_TIMESLOT_PER_SUBFRAME];/*timeslot info*/
} TDD_dl_dpch_rl_T;

typedef struct _TDD_sccpch_info_T
{
    TDD_timeslot_common_T    common; /*common timeslot characters on cctrch level*/
    TDD_timeslot_info_T    timeslot; /*info about this timeslot*/
} TDD_sccpch_info_T;


typedef enum _TDD_pi_len_E
{
    TDD_PI_LEN_4_BITS=4,
    TDD_PI_LEN_8_BITS=8,
    TDD_PI_LEN_16_BITS=16
} TDD_pi_len_E;

typedef struct _TDD_pich_drx_T
{
    kal_uint8   pich_drx;       /*[Range]: 3-9
                                  [Meaning]: Max(k, k'), k' is derived from PBP with PBP=2^ k',
                                  so the drx cycle length can be calculated via 2^pich_drx.*/    
    kal_uint16  sfn_po;         /*PICH starting point, offset to RepeatPeriod, in frames.
                                  sfn_po  =  {(IMSI div K) mod (DRX cycle length div PBP)} * PBP + frame_offset;
                                  Indicate the start of the PICH frame in one DRX cycle.*/   
    kal_uint16  pi;             /*The target PI’s position in the paging indicator block.
                                  pi = (IMSI / 8192) mod NP; where NP = NPICH * (352*16/ 8 /2/pi_len).
                                  Indicate the UE’s PI position in the paging indicator block*/ 
    TDD_pi_len_E    pi_len;         /*paging indicator length in bits*/
    kal_uint16  sfn_ro;         /*PCH starting point, offset to the PagingOccasion, in frames.
                                                        sfn_ro = NPICH + NGAP + {(pi mod Npch } *2*/
} TDD_pich_drx_T;

typedef enum _TDD_pich_reconfig_type_E

{

   TDD_PCH_MODIFY,                               /* traditionaly PCH modify */

   TDD_PCH_SMARTPAGE,                            /* to inform UL1 enable/disable SmartPaging*/   

} TDD_pich_reconfig_type_E;

typedef struct _TDD_pich_smartpaging_T

{

   kal_bool          support_repeat;        /* If true: RRCE has detected that current NW can support smart paging (has repeated paging pattern) */

   kal_uint16        sfn_po;                /* DRX parameters for PICH.(when smartpging active) */

   kal_uint16        sfn_ro;                /* DRX parameters for PCH.(when smartpging active) */

} TDD_pich_smartpaging_T;


typedef struct _TDD_pich_info_T
{

    kal_uint8    pccpch_tx_power;   /*[Range]: 6 – 43 by step 1 in dBm
                                      [Meaning]: P-CCPCH transmit power.*/    
    kal_int8    power_offset;       /*[Range]: -10 ~ +5 in dB
                                      [Meaning]: The power offset of PICH to P-CCPCH Tx Power.
                                      TL1 can derive the PICH Tx power using power_offset and pccpch_tx_power. */
    kal_uint8    timeslot;          /*[Range]: 0-6
                                      [Meaning]: The timeslot carring PICH info*/    
    kal_uint32   ccode_bitmap;      /*Bit map of used channelisation code
                                     bit0 is C16-1 
                                     bit1 is C16-2 
                                     ….
                                     bit 15 is C16-16 
                                     bit16 is C8-1 
                                     ..
                                     bit23 is C8-8 
                                     bit24 is C4-1 
                                     bit27 is C4-4 
                                     bit28 is C2-1 
                                     bit29 is C2-2 
                                     bit30 is C1-1
                                     bit31 is reserved.
                                                                    For PICH, only 2 SF=16 codes are used.*/    
    TDD_midamble_info_T    midamble;    /*midamble info for PICH*/
    TDD_pich_drx_T    pich_drx;
	TDD_pich_smartpaging_T  smartpaging_info;
//#ifdef __TDD128_HSPA_PLUS__ 
    TDD_pich_drx_T        pich_drx_cycle2;             /* DRX parameters 2 for PICH. Valid for CELL_PCH and URA_PCH, not valid for IDLE-PCH */
    kal_uint16        drx_cycle2_time;             /* if it's not 0. TL1 shall use pich_drx_2 for PICH receptin, else shall directly use pich_drx for PICH reception.
                                                      Valid value: 0, 80,160,320,640,1280,2560,5120 (Uint: ms) */
//#endif
} TDD_pich_info_T;


typedef struct _TDD_tx_power_info_T
{
    kal_int16    tx_power[TDD_MAX_TIMESLOT_PER_SUBFRAME];       /*Tx power of each ul timeslot. The tx power is measured in both FACH and
                                                              DCH state, "TDD_TX_POWER_INVALID" is used to for non tx slots. 
                                                              Range: -200- 136 means (-50dBm ~ 34dBm ) in 0.25dBm step*/    
} TDD_tx_power_info_T;


typedef struct _TDD_tadv_info_T
{
    kal_int16    tadv;                                      /*[Range]: Range: -1 -8191. 0-8191 means (0 ~ 1023.875 ) chips in 1/8 chip 
                                                              step, -1 means unknown tadv [Meaning]:timing advance*/
    kal_uint16   sfn;                                       /*SFN during which the TADV measurement was performed*/
} TDD_tadv_info_T;

typedef enum _TDD_internal_meas_E
{   
    TDD_MEAS_TX_PWR = 1,                                        /*measure UE transmitted power*/
    TDD_MEAS_RSSI,                                              /*UTRA carrier RSSI*/
    TDD_MEAS_TA                                                 /*Timing Advance*/
} TDD_internal_meas_E;

typedef enum _TDD_internal_meas_event_E
{
    TDD_EVENT_6A = 1,                                           /*Measurement event 6A.*/
    TDD_EVENT_6B,                                               /*Measurement event 6B.*/
    TDD_EVENT_6C,                                               /*Measurement event 6C.*/
    TDD_EVENT_6D,                                               /*Measurement event 6D.*/
    TDD_EVENT_6E,                                               /*Measurement event 6E.*/
    TDD_EVENT_6F                                                /*Measurement event 6F.*/   
} TDD_internal_meas_event_E;

typedef struct _TDD_meas_event_T
{
   TDD_internal_meas_event_E event_id;                          /*indicate internal measurement event ID.*/
   kal_int16         threshold;                             /*used for event6a,6b,6f. For event6f, the range is 0~512, which means 0~63chip in 0.125 chip step. Since UTRAN will configure 
                                                              the value in the range(768~1280) to UE, MEME will convert the value to range (0~512) by decreasing 768*/
   kal_uint16        delay;                                 /*Time to Triggered. [Range]: 0 ~ 500 frames When an event is triggered, the 
                                                                                                          report will be delayed until the time period indicated by this field has elapsed.*/
} TDD_meas_event_T;

typedef struct _TDD_measured_cell_T
{
    kal_bool    sctd;                                       /*True/False. True: sctd is applied on this cell's P-CCPCH. 
                                                                                                          False: sctd is not applied on this cell's P-CCPCH.*/
    kal_int16   rscp;                                       /*RSCP. Range: -500~ -100 means (-125~ -25 )dBm in 0.25 dB step*/
    kal_uint16  cell_param_id;                              /*TS25.123:10.3.6.9*/
    kal_uint16  freq;                                       /*Cell's UARFCN*/   
    kal_int16   off;                                        /*[Range]: (-1~8191).  (0~8191) for a cell whose subframe SFN offset 
                                                                                                          to LST has been measured by TL1.  "-1" for an unknown off value. 
                                                                                                          [Meaning]: sub frame number offset between target cell and LST.*/ 
    kal_int32   tm;                                         /*[Range]: (-1~6400*8-1). (0~6400*8-1) for a cell whose sub-frame 
                                                                                                          boundary offset has been measured by TL1. "-1" for an unknown tm value. 
                                                                                                          [Meaning]: sub frame boundary offset between target cell and LST.*/
    kal_uint8   iscp_timeslot_bitmap;                       /*[Meaning]: the bitmap indicate which slots' iscp have been measured. 
                                                                                                          Bit x represents timeslot x. 0<= x <=6*/
    kal_int16   iscp[TDD_MAX_TIMESLOT_PER_SUBFRAME];            /*ISCP range. -480 ~ -100 means (-120 ~ -25 )dBm in 0.25 dB step*/
} TDD_measured_cell_T;

//#ifdef __UMTS_R9__
typedef enum _TDD_higher_prio_search_support_E
{
    TDD_REGULAR_MEAS_ONLY = 0,                                   /*The cell should be measured according to regular period.*/
    TDD_HIGHER_PRIORITY_ONLY,                                    /*The cell should be measured according to higher priority search period.*/
    TDD_HIGHER_PRIORITY_AND_REGULAR_MEAS                         /*The cell should be measured according to both higher priority search period and regular period.*/ 
} TDD_higher_prio_search_support_E;
//#endif
typedef struct    _TDD_cell_info_list_T 
{
    kal_uint16  freq_uarfcn;                                /*Cell's frequency uarfcn.*/    
    kal_uint16  cell_param_id;                              /*[Range]: 0-127, 0xFF,
                                                                                                          [Meaning]:Cell parameter ID,0xFF means unknown cell parameters id.*/   
//#ifdef __UMTS_R9__
	TDD_higher_prio_search_support_E	prio_search_control;	/*Indicate measurement type*/
//#endif
    kal_bool    sctd;                                       /*True/False. True: sctd is applied on this cell's P-CCPCH.
                                                                                                          False: sctd is not applied on this cell's P-CCPCH.*/
    kal_bool    tstd;                                       /*True/False. True: tstd is applied on this cell's P-CCPCH. 
                                                                                                          False: tstd is not applied on this cell's P-CCPCH.*/  
    kal_int16   ref_timing;                                 /*[Range ]:  -1 ~ 12800-1, -1 means unknown timing 
                                                                                                          [Meaning]: Cell boundary*/
    kal_bool    ref_timing_sib;                             /*Indicate if the reference timing comes from SIB11 or Meas. Control. 
                                                                                                          True: this timing info is from SIB*/   
    kal_int32   tm;                                         /*[Range ]:  -1 ~ 6400*8-1 , -1 means unknown timing 
                                                                                                          [Meaning]: Sub Frame boundary offset between target cell and LST*/
    kal_int16   off;                                        /*[Range]: -1 ~ 8191, -1 means unknown timing 
                                                                                                          [Meaning]: Subframe SFN offset between target cell and LST.*/
    kal_uint8   iscp_timeslot_bitmap;                       /*[Meaning]: Bitmap of timeslot for iscp measurement, valid only for DL slots.
                                                                                                          if bit x is 1, iscp measurement should be carried on slot x. 0<=x <= 6*/
#ifdef __HSUPA_SUPPORT__
    kal_bool    intra_sec_freq_indicator;                   /*True/False. True: this cell has configured a secondary frequency on the same frequency as UE working carrier.
                                                                                                           False: this cell hasn't configured an intra-secondary frequency.*/
    kal_uint8   pccpch_tx_power;                            /*[Range]: 6 ~ 43 by step 1 in dBm
                                                                                                   [Meaning]:P-CCPCH transmit power*/
#endif
}TDD_cell_info_list_T;

typedef enum _TDD_meas_act_E
{
    TDD_STOP_MEAS = 0,                                         /*stop measurement.*/
    TDD_START_MEAS_NEW_CIL = 3,                                /*start measurement if measurement is stopped and update CIL*/
    TDD_START_MEAS_NEW_CIL_NEW_FMO = 7                         /*start measurement if measurement is stopped and 
                                                                                                        update both CIL  and FMO.*/
    ,TDD_START_MEAS_NEW_PRIO_INFO = 9

} TDD_meas_act_E;


typedef struct _TDD_preferred_cell_list_T
{
    kal_uint8    uarfcn_index;    
    kal_uint16   cell_param_id;    
} TDD_preferred_cell_list_T;


typedef struct _TDD_fach_pch_info_T
{
    kal_uint16   cell_param_id;                 /*cell parameter ID, range:0-127*/    
    kal_bool    sctd;                           /*TRUE:sctd is applied on this cell's P-CCPCH,
                                                                                        FALSE:sctd is not applied on this cell's P-CCPCH*/ 
    kal_bool    tstd;                           /*TRUE:tstd is applied on this cell's P-CCPCH,
                                                                                        FALSE:tstd is not applied on this cell's P-CCPCH*/     
    kal_int16   rscp;                           /*serving cell rscp, range:-500 - -100 means (-125 - -25)dBm
                                                                                        in 0.25dB step*/    
    TDD_sccpch_info_T    sccpch_info;               /*physical channel info for PCH/FACH to be carried over*/
    kal_uint16  tfc_num;                        /*number of tfc in attached tfcs[]*/    
    TDD_dl_tfc_T    tfcs[TDD_MAX_DL_TFC];               /*tfcs info for this sccpch*/
    kal_uint8   active_dl_trch_list;            /*To represent active TRCHs by bit string. The MSB represents the
                                                                                      lowest numbered trch index, and so on in descending bit significance
                                                                                      and increasing numerical order.'1' represents for active channel,'0' for inactive
                                                                                      channel which decoding is not required.For CPHY_PCH_SETUP_REQ, the
                                                                                      number of bits which are set to ‘1’ should be equal to 1. 
                                                                                      Namely, only 1 trch is activated. For CPHY_FACH_SETUP_REQ, indicate all 
                                                                                      the trch multiplexed on this S-CCPCH.*/    
    kal_uint8   trch_num;                       /*number of trch in trch_list[TDD_MAXFACHPCH]*/    
    TDD_dl_fachpch_trch_T    trch_list[TDD_MAXFACHPCH];    
    TDD_pich_info_T    pich_info;                   /*pich info*/    
} TDD_fach_pch_info_T;

typedef enum _TDD_num_uppch_subchannel_size_E
{
    TDD_NUM_UPPCH_SUBCH_1 = 1,
    TDD_NUM_UPPCH_SUBCH_2 = 2,
    TDD_NUM_UPPCH_SUBCH_4 = 4,
    TDD_NUM_UPPCH_SUBCH_8 = 8
} TDD_num_uppch_subchannel_size_E;

typedef struct _TDD_asc_info_T
{
    kal_uint8    sync_ul_bitmap;                        /*available sync_ul for this asc*/   
    TDD_num_uppch_subchannel_size_E    num_subchannel_size; /*[Range]: 1,2,4,8
                                                                                                      [Meaning]:Number of uppch subchannel in cell */     
    kal_uint16    subchannel_bitmap;                    /*Bit map of uppch subchannel
                                                                                                  bit0 indicate the first subchannel 
                                                                                                  bit1 indicate the second subchannel 
                                                                                                  bit (num_subchannel -1) indicates num_subchannelth  subchannel.
                                                                                                  At most 8 uppch sub channels defined <3GPP-TS25.331-v7.10.0:10.3.6.6>.
                                                                                                  The low 8 bit will be used.*/       
} TDD_asc_info_T;

typedef enum _TDD_ccode_lcr_E
{
    TDD_cc1_1 = 0,                         /*The index of 1st channelization code of SF=1*/
    TDD_cc2_1,                         /*The index of 1st channelization code of SF=2*/
    TDD_cc2_2,                         /*The index of 2nd channelization code of SF=2*/
    TDD_cc4_1,                         /*The index of 1st channelization code of SF=4*/
    TDD_cc4_2,                         /*The index of 2nd channelization code of SF=4*/
    TDD_cc4_3,                         /*The index of 3rd channelization code of SF=4*/
    TDD_cc4_4,                         /*The index of 4th channelization code of SF=4*/
    TDD_cc8_1,                         /*The index of 1st channelization code of SF=8*/
    TDD_cc8_2,                         /*The index of 2nd channelization code of SF=8*/
    TDD_cc8_3,                         /*The index of 3rd channelization code of SF=8*/
    TDD_cc8_4,                         /*The index of 4th channelization code of SF=8*/
    TDD_cc8_5,                         /*The index of 5th channelization code of SF=8*/
    TDD_cc8_6,                         /*The index of 6th channelization code of SF=8*/
    TDD_cc8_7,                         /*The index of 7th channelization code of SF=8*/
    TDD_cc8_8,                         /*The index of 8th channelization code of SF=8*/    
    TDD_cc16_1,                         /*The index of 1st channelization code of SF=16*/
    TDD_cc16_2,                         /*The index of 2nd channelization code of SF=16*/
    TDD_cc16_3,                         /*The index of 3rd channelization code of SF=16*/
    TDD_cc16_4,                         /*The index of 4th channelization code of SF=16*/
    TDD_cc16_5,                         /*The index of 5th channelization code of SF=16*/
    TDD_cc16_6,                         /*The index of 6th channelization code of SF=16*/
    TDD_cc16_7,                         /*The index of 7th channelization code of SF=16*/
    TDD_cc16_8,                         /*The index of 8th channelization code of SF=16*/
    TDD_cc16_9,                         /*The index of 9th channelization code of SF=16*/
    TDD_cc16_10,                        /*The index of 10th channelization code of SF=16*/
    TDD_cc16_11,                        /*The index of 11th channelization code of SF=16*/
    TDD_cc16_12,                        /*The index of 12th channelization code of SF=16*/
    TDD_cc16_13,                        /*The index of 13th channelization code of SF=16*/
    TDD_cc16_14,                        /*The index of 14th channelization code of SF=16*/
    TDD_cc16_15,                        /*The index of 15th channelization code of SF=16*/
    TDD_cc16_16                         /*The index of 16th channelization code of SF=16*/
}TDD_ccode_lcr_E;


/*prach resource info*/
typedef struct _TDD_prach_resource_info_T 
{
        kal_uint8   timeslot;            /*prach timeslot number*/
        TDD_midamble_info_T  midamble;  /*Midamble information*/
        kal_uint8   code_num;               /*number of prach code*/
        TDD_ccode_lcr_E prach_code_list[4] ;  /*prach channel code list*/

}TDD_prach_resource_info_T ;

typedef enum _TDD_dch_setup_msg_type_E
{
    TDD_DCH_SETUP = 0,                  /* The setup request is used when dch is established in the first time. */
    TDD_DCH_TRHHO,                      /* The setup request is to perform timing-reinitialized hard handover.*/
    TDD_DCH_TRHHO_REVERT,               /* The setup request is to perform timing-reinitialized hard handover revert.*/
    TDD_DCH_TMHHO,                      /* The modify request is to perform timing-maintained hard handover. */
    TDD_DCH_TMHHO_REVERT,               /* The modify request is to perform timing-maintained hard handover revert. */   
    TDD_DCH_IRAT_REVERT,                /* The setup request is to perform inter-RAT hand over revert.*/
    TDD_DCH_TRBHO,                      /*timing-reinitialized baton handover*/
    TDD_DCH_TRBHO_REVERT,               /*The setup request is to perform timing-reinitialized baton handover revert*/
    TDD_DCH_TMBHO,                      /*timing- maintained baton handover*/
    TDD_DCH_TMBHO_REVERT                /*The setup request is to perform timing- maintained baton handover revert.  */
} TDD_dch_setup_msg_type_E;

typedef struct _TDD_hssich_info_T
{ 
    kal_uint8                       ts_num;                 /*[rang]: 0 ~ 6  [meaning]:The number of time slot in which
                                                                                                    HS-SICH is allocated.*/
    TDD_ccode_lcr_E                  ccode;                  /*[range]:15~30,  the channelization code of HS-SICH*/       
    TDD_midamble_info_T                 midamble_info;          /*Midamble info for HS-SICH*/
    
    kal_int8                        ack_nack_power_offset;  /*[Range]: -7~8 [Meaning]:the power offset of HS-SICH when sending ACK. */
    kal_int8                        power_level;            /*[Range]: -120~ -58 [Meaning]:Desired HS-SICH RX power at the cell's receiver in dBm*/
    kal_uint8                       tpc_step;               /*[Rang]: 1,2,3. The transmission power control step size.*/
} TDD_hssich_info_T;

typedef struct _TDD_hsscch_config_T
{
    kal_uint8           ts_num;                             /*The number of time slot in which HS-SCCH is allocated.*/
    TDD_ccode_lcr_E      first_ccode;                        /*The first channelization code of HS-SCCH*/ 
    TDD_ccode_lcr_E      second_ccode;                       /*The second channelization code of HS-SCCH*/
    TDD_midamble_info_T     midamble_info;                      /*Midamble info for HS-SCCH*/    
    TDD_hssich_info_T       hssich_info;                        /*The information of HS_SICH*/
} TDD_hsscch_config_T;

typedef struct _TDD_hsscch_info_T
{
    kal_uint8           num_hsscch;                         /*The number of hs-scch*/
    TDD_hsscch_config_T     hsscch_config[TDD_MAX_HSSCCH_NUM];      /*Physical channel config of HS-SCCH & HS-SICH.*/
    kal_int8            hsscch_bler_target;                 /*[Range]: -63 ~ 0, -64. [Meaning]: multiply the value of this IE with 0.05 to get the real value. 
                                                                                                    (Real BLER: -3.15~0 = log10 (BLER)). -64 is used for invalid value.*/
    kal_uint8           hssich_power_ctrl_gap;              /*[Range]: 1 ~ 255. [default]: 1  [Meaning]: number of subframes as the threshold of 
                                                                                                    hssich gap power control.*/
    kal_bool            path_loss_compensation;             /*TRUE: UE shall perform the pathloss compensation for HS-SICH power control 
                                                                                                    when HS-SICH transmission gap is less than "Power Control GAP".
                                                                                                    FALSE: UE shall not consider the pathloss compensation for HS-SICH power control.
                                                                                                    Default: FALSE.*/
//#ifdef __TDD128_HSPA_PLUS__
    kal_uint8           hs_scch_tpc_size;                   /* [Rang]: 1,2,3 the transmission power control step size.*/
//#endif
} TDD_hsscch_info_T;

typedef struct _TDD_hs_harq_info_T
{
    kal_uint8       process_num;                            /*[Rang]: 1 ~ 8. The number of HARQ process.*/
    kal_bool        explicit_partition;                     /*TRUE indicates explicit memory partition. FALSE indicates implicit memory partition*/
    kal_uint8       process_mem_size[TDD_MAX_HARQ_PROCESS_NUM]; /*[Range] 0~60.  Index of HARQ memory size. range: 0~60. Only valid when memory partition is explicit*/      
} TDD_hs_harq_info_T;

typedef struct _TDD_hs_queue_config_T
{
    kal_uint8       queue_id;                               /*Queue identifier of this MAC-hs PDU*/
    kal_uint8       bit_offset;                             /*Heading bit offset for each TB: 0 or 4 bits*/
    kal_uint8       num_size;                               /*Number of valid size[] and size_index[]*/
    kal_uint16      size[TDD_MAX_HSDSCH_SIZE];                  /*Configured size list*/
    kal_uint8       size_index[TDD_MAX_HSDSCH_SIZE];            /*Configured size index list*/

} TDD_hs_queue_config_T;

typedef struct _TDD_hs_queue_info_T
{
    kal_uint8           num_queue;                          /*Number of configured MAC-hs queues*/
    TDD_hs_queue_config_T   queue_config[TDD_MAX_HSDSCH_QUEUE];     /*MAC-hs Queue Information*/  
} TDD_hs_queue_info_T;

typedef struct _TDD_hsdsch_size_info_T
{
    kal_uint16          tb_size;                            /*Size of each TB in bits*/
    kal_uint8           num_tb;                             /*Number of TB with the same size*/
} TDD_hsdsch_size_info_T;

//#ifdef __TDD128_HSPA_PLUS__
typedef enum 
{
   TDD_DSCH_NO_HRNTI_DETECTED = 0, /*HS-SCCH CRC check is failed*/
   TDD_DSCH_D_HRNTI_DETECTED  = 1, /*HS-PDSCH is indicated by HS-SCCH with dH-RNTI*/
   TDD_DSCH_C_HRNTI_DETECTED  = 2, /*HS-PDSCH is indicated by HS-SCCH with cH-RNTI*/
   TDD_DSCH_B_HRNTI_DETECTED  = 3, /*HS-PDSCH is indicated by HS-SCCH with bH-RNTI*/
   TDD_DSCH_HRNTI_LESS        = 4, /*HS-PDSCH is decoded blindly without HS-SCCH  */
   //DSCH_NOT_RECEIVE       = 5, /*This subframe is not received by HW */

} TDD_hs_dsch_decode_hrnti_E;
//#endif
typedef struct _TDD_hsdsch_data_T
{
    kal_bool            is_valid_data;                      /*Indicate MAC-hs PDU is valid (CRC right) or not.*/ 
    kal_uint8           queue_id;                           /*Queue identifier of this MAC-hs PDU*/
    kal_uint8           tsn;                                /*TSN of this MAC-hs PDU*/
    kal_uint8           num_size_info;                      /*Number of valid size_info*/
    TDD_hsdsch_size_info_T  size_info[TDD_MAX_HSDSCH_SIZE];         /*Decoded combination of SID and N*/    
    kal_uint16          num_data;                           /*The size in byte of the buffer containing the data. It is the exact 
                                                                                                    size of data, including the byte for TB number.*/

    kal_uint16      EMI_buffer_index;

    kal_uint8*          data;                               /*The buffer contains data for each TB received in this MAC-hs PDU. This buffer 
                                                                                                    is allocated by TL1, and freed by PS. The buffer is from ADM. The first byte in the 
                                                                                                    data indicates the number of TB in this data indication.*/
//#ifdef __TDD128_HSPA_PLUS__
    TDD_hs_dsch_decode_hrnti_E  decode_hrnti;                   /*[R8] H-RNTI dectected info*/
    kal_bool                  ndi;                            /*true:new decoded data;  false:old decoded data.*/
    kal_uint16               tb_size;                        /*Indicated the size of each TB*/
//#endif
    kal_int8            pi_repeat_cycle;                    /* -1:invalid, -2:retransmission with CRC pass, 1~20:valid pi_repeat_cyle */
} TDD_hsdsch_data_T;

/*ul_sync/rach/erucch struct*/
typedef struct _TDD_random_access_info_T
{
   kal_uint16              uarfcn;                /*For cphy_dch_setup_req, this is fpach uarfcn for HHO, others, this field is working uarfcn.E  */                                                                                                         
   kal_uint8         pccpch_tx_power;                 /*[Range]: 6 ~ 43 by step 1 in dBm
                                             [Meaning]:P-CCPCH transmit power*/  
   kal_int8        max_tx_power;            /*Range]: -50 ~ 33 dBm
                                          [Meaning]: Max. allowed TX power.*/
   kal_int8       umts_power_class;                  /*UE capability(in dBm)
                                       The value's unit  configured by SLCE is dBm. 
                                       define MAX_OUTPUT_POWER_CLASS_1 33  :+33dBm 
                                       define MAX_OUTPUT_POWER_CLASS_2 24 :  +24dBm 
                                       define MAX_OUTPUT_POWER_CLASS_3 21 : +21dBm 
                                       define MAX_OUTPUT_POWER_CLASS_4 27 : +27dBm */ 
    kal_bool    sync_param_ind;                   /*True: The following parameters exist,False: The following parameter does not exist.
                                       For cphy_dch_setup_req only. In case of HHO, the related fileds must be valid.*/
    kal_uint8   sync_ul_bitmap;                   /*sync ul code bitmap,For cphy_dch_setup_req only.*/     
    kal_uint8  num_asc;                                 /*valid asc number in asc[], 1-8*/
    TDD_asc_info_T asc[TDD_MAX_ASC];
     kal_uint8    num_prach_fpach;             /*[Range]: 1- TDD_MAX_PRACH_FPACH_NUM
                                                                        [Meaning]: number of fpach-PRACH pair.*/
    TDD_prach_resource_info_T prach_list[TDD_MAX_PRACH_FPACH_NUM]; 
    TDD_fpach_info_T fpach_list[TDD_MAX_PRACH_FPACH_NUM];  /*fpach info for this UE*/ 
    kal_int8    prx_uppch_des;                    /*[-120, -58] by step 1 in dBm.UpPCH expected receive power at NodeB, */
    kal_uint8   power_ramp_step;                  /*0 - 3, in dB,power ramp step */    
    TDD_max_retrans_E   max_retrans;                  /*1,2, 4, or 8,max retrans times in one power ramping procedure*/
    kal_uint8   uppch_shift;                      /*0 - 127, Default: 0,UpPCH shifting position in a cell,
                                                                                             UpPCH position = UpPTS position + uppch_shift*16*/                                           
}TDD_random_access_info_T;

#ifdef __HSUPA_SUPPORT__ 

typedef enum _TDD_edch_t_wait_E
{
    TDD_EDCH_T_WAIT_TIMER_EVERY_TTI = 0,
    TDD_EDCH_T_WAIT_TIMER_40MS,
    TDD_EDCH_T_WAIT_TIMER_80MS,
    TDD_EDCH_T_WAIT_TIMER_160MS,
    TDD_EDCH_T_WAIT_TIMER_320MS,
    TDD_EDCH_T_WAIT_TIMER_640MS,
    TDD_EDCH_T_WAIT_TIMER_1000MS,
    TDD_EDCH_T_WAIT_TIMER_2000MS
} TDD_edch_t_wait_E;

typedef enum _TDD_edch_t_rucch_E
{
    TDD_EDCH_T_RUCCH_TIMER_20MS = 0,
    TDD_EDCH_T_RUCCH_TIMER_40MS,
    TDD_EDCH_T_RUCCH_TIMER_60MS,
    TDD_EDCH_T_RUCCH_TIMER_80MS,
    TDD_EDCH_T_RUCCH_TIMER_120MS,
    TDD_EDCH_T_RUCCH_TIMER_160MS,
    TDD_EDCH_T_RUCCH_TIMER_200MS,
    TDD_EDCH_T_RUCCH_TIMER_240MS,
    TDD_EDCH_T_RUCCH_TIMER_280MS,
    TDD_EDCH_T_RUCCH_TIMER_320MS,
    TDD_EDCH_T_RUCCH_TIMER_400MS,
    TDD_EDCH_T_RUCCH_TIMER_500MS,
    TDD_EDCH_T_RUCCH_TIMER_600MS,
    TDD_EDCH_T_RUCCH_TIMER_800MS,
    TDD_EDCH_T_RUCCH_TIMER_1000MS,
    TDD_EDCH_T_RUCCH_TIMER_2000MS
} TDD_edch_t_rucch_E;

/*E-AGCH Physical Channel Configuration, <3GPP-TS25.331:10.3.6.100>*/
typedef struct _TDD_eagch_config_T
{
    kal_uint8                   ts_num;                     /*[Range]: 0 ~ 6.The number of time slot in which E-AGCH is llocated.*/
    TDD_ccode_lcr_E              first_ccode;                /*The first channelization code of E-AGCH.*/ 
    TDD_ccode_lcr_E              second_ccode;               /*The second channelization code of E-AGCH.*/
    TDD_midamble_info_T             midamble_info;              /*Midamble info for E-AGCH.*/
} TDD_eagch_config_T;

/*E-AGCH Informtion, <3GPP-TS25.331:10.3.6.100>*/
typedef struct _TDD_eagch_info_T
{
    kal_bool                    rdi_indicator;              /*TRUE: RDI is present in E-AGCH block.
                                                                                                    FALSE: RDI is absent in E-AGCH block.*/
    kal_uint8                   tpc_step;                   /*[Range]: 1,2,3. The transmission power control step size.*/
    kal_int8                    bler_target;                /*[Range]: -63 ~ 0, -64
                                                                                                    [Meaning]: multiply the value of this IE with 0.05 to get the real value. 
                                                                                                    (Real BLER: -3.15~0 = log10 (BLER)). -64 is used for invalid value.*/
    kal_uint8                   num_eagch;                  /*[Range]: 1 ~ 4
                                                                                                    [Meaning]: The number of configured E-AGCH.*/
    TDD_eagch_config_T              eagch_config[TDD_MAX_EAGCH_NUM];/*Physical channel config of E-AGCH.*/
} TDD_eagch_info_T;

/*E-HICH Physical Channel Configuration, <3GPP-TS25.331:10.3.6.100>*/
typedef struct _TDD_ehich_config_T
{
    kal_uint8                   ei;                         /*[range]: 0~3.
                                                                                                    [meaning]: The E-HICH identifier to match the EI field in E-AGCH.
                                                                                                    [notes]: 255 for non-scheduled E-HICH.*/
    kal_uint8                   ts_num;                     /*[range]: 0 ~ 6.
                                                                                                    [meaning]:The number of time slot in which E-HICH is allocated.*/
    TDD_ccode_lcr_E              ccode;                      /*[range]:15~30.
                                                                                                    [meaning]: the channelization code of E-HICH.*/   
    TDD_midamble_info_T             midamble_info;              /*Midamble info for E-HICH*/
} TDD_ehich_config_T;

/*E-HICH Informtion, <3GPP-TS25.331:10.3.6.101>*/
typedef struct _TDD_ehich_info_T
{
    kal_uint8                   n_e_hich;                   /*[range]: 4~15.
                                                                                                    [meaning]: Minumum number of slots betwen start last active E-DCH TTI and start of ACK/NACK on E-HICH.*/
    kal_uint8                   num_ehich;                  /*[range]: 1~4
                                                                                                    [meaning]: The number of configured E-HICH.*/
    TDD_ehich_config_T              ehich_config[TDD_MAX_EHICH_NUM];/*Physical channel config of E-HICH.*/
} TDD_ehich_info_T;


/*E-DCH Scheduled Informtion, <3GPP-TS25.331:10.3.6.100/101/103>*/
typedef struct _TDD_edch_sched_info_T
{

    TDD_eagch_info_T                eagch_info;                 /*E-AGCH Information*/
    TDD_ehich_info_T                ehich_info;                 /*E-HICH Information*/
    TDD_random_access_info_T erucch_info;                /*E-RUCCH Information*/
    TDD_edch_t_wait_E               t_wait;                     /*E-AGCH monitoring delay after last scheduled grant received*/
    TDD_edch_t_rucch_E              t_rucch;                    /*E-AGCH monitoring duration after successful E-RUCCH performed*/
} TDD_edch_sched_info_T;

/*E-DCH Non-Scheduled Granting Informtion, <3GPP-TS25.331:10.3.6.41c>*/
typedef struct _TDD_edch_non_sched_grant_info_T
{
    kal_uint8                   trri;                       /*Timeslot Resource Related Information, bitmap of assigned timeslots.
                                                                                                    Bit0-TS5, Bit1-TS4, Bit2-TS3, Bit3-TS2,Bit4-TS1.*/
    kal_uint8                   prri;                       /*[range]: 1~32, i.e. -12dB~19dB, in step of 1dB.
                                                                                                    [meaning]: Power Resource Related Information*/
    TDD_ccode_lcr_E                  crri;                       /*Assigned channelisation code*/
    kal_uint8                   repeat_offset;               /*[Meaning]: non-schedule E-PUCH resource allocation starting point in subframe.
                                                               [Range]: [0, (repeat_period - 1)]*/
    TDD_repeat_period_E             repeat_period;              /*[range]: 1, 2, 4, 8, 16, 32, 64, in TTI. 1 means continuous allocation.
                                                                                                    [meaning]: Physical channel resource allocation period.*/
    kal_uint8                   repeat_length;              /*[range]: 1~(RepeatPeriod - 1), in TTI.
                                                                                                    [meaning]: Physical channel resource allocation length.*/
} TDD_edch_non_sched_grant_info_T;

/*E-DCH Non-Scheduled Transmission Informtion, <3GPP-TS25.331:10.3.6.41c>*/
typedef struct _TDD_edch_non_sched_info_T
{
    kal_uint8                   n_e_ucch;                   /*[range]: 1~8.
                                                                                                    [meaning]: Number of E-UCCH and TPC instances within an non-scheduled E-DCH TTI.*/
    kal_uint8                   n_e_hich;                   /*[range]: 4~15.
                                                                                                    [meaning]: Minumum number of slots betwen start last active E-DCH TTI and start of ACN/NACK on E-HICH.*/
    kal_uint8                   ehich_sigature_group_index; /*[range]: 0~19.
                                                                                                    [meaning]: which signature sequence group index to use.*/
    TDD_ehich_config_T              ehich_config;               /*E-HICH Physical Channel Information*/
    TDD_edch_non_sched_grant_info_T edch_non_sched_grant;       /*Non-Scheduled transmission grant information.*/
} TDD_edch_non_sched_info_T;

/*E-DCH E-TFCS Definitions, <3GPP-TS25.331:10.3.6.105>*/
typedef struct _TDD_edch_etfcs_T
{
    kal_uint8                   num_ref_qpsk;                           /*[Range]: 2 ~ 8
                                                                                                                       Number of reference beta information for QPSK.
                                                                                                    [notes]: as CCSA-2009-060Q, 2~8 is correct.*/
    kal_uint8                   ref_code_rate_qpsk[TDD_MAX_REF_BETA_NUM];   /*[Range]: 0 ~ 10, which means 0 ~ 1 in step of 0.1 
                                                                                                                       List of configured reference code rate for QPSK.*/
    kal_int8                    ref_beta_qpsk[TDD_MAX_REF_BETA_NUM];        /*[Range]: -15 ~ 16, whose unit is dB.
                                                                                                                       List of configured reference beta for QPSK.*/
    kal_uint8                   num_ref_16qam;                          /*[Range]: 2 ~ 8
                                                                                                                       Number of reference beta information for 16QAM.
                                                                                                    [notes]: as CCSA-2009-060Q, 2~8 is correct.*/
    kal_uint8                   ref_code_rate_16qam[TDD_MAX_REF_BETA_NUM];  /*[Range]: 0 ~ 10, which means 0 ~ 1 in step of 0.1 
                                                                                                                       List of configured reference code rate for QPSK.*/
    kal_int8                    ref_beta_16qam[TDD_MAX_REF_BETA_NUM];       /*[Range]: -15 ~ 16, whose unit is dB.
                                                                                                                       List of configured reference beta for QPSK.*/

} TDD_edch_etfcs_T;


/*E-PUCH Timeslot Information, <3GPP-TS25.331:10.3.6.104>*/
typedef struct _TDD_epuch_timeslot_info_T
{
    kal_uint8                   ts_num;                     /*[range]: 0 ~ 6.
                                                                                                    [meaning]:The number of time slot in which E-HICH is allocated.*/
    TDD_midamble_info_T             midamble_info;              /*Midamble info for E-HICH*/
} TDD_epuch_timeslot_info_T;

/*SNPL Report Type, <3GPP-TS25.331:10.3.6.104>*/
typedef enum _TDD_snpl_report_type_E
{
        TDD_SNPL_TYPE_1 = 0,
        TDD_SNPL_TYPE_2,
        TDD_SNPL_TYPE_INVALID
} TDD_snpl_report_type_E;

/*E-PUCH Information, <3GPP-TS25.331:10.3.6.104>*/
typedef struct _TDD_epuch_info_T
{
    TDD_snpl_report_type_E          snpl_report_type;           /*SNPL report type.*/
    TDD_edch_etfcs_T                etfcs;                      /*E-TFCS information. <3GPP-TS25.331:10.3.6.105>*/
    kal_int8                    prx_base_des;               /*[range]: -112~-50, in step of 1dBm.
                                                                                                    [meaning]: Expected Pe-base.*/
    kal_bool                    beacon_pl_est;              /*TRUE: UE may take into account pathloss estimated from beacon function physical channels.
                                                                                                    FALSE: UE shall not take into account pathloss estimation.*/
    kal_uint8                   tpc_step;                   /*[range]: 1,2,3. The transmission power control step size.*/
    kal_uint8                   pebase_pc_gap;              /*[range]: 1~255, in sub-frames.
                                                                                                    [meaning]: Gap of open-loop power control during closed-loop entered.*/
    kal_uint8                   sync_step;                  /*1 - 8, in 1/8 chip,Uplink synchronization step size.*/  
    kal_uint8                   sync_freq;                  /*1 - 8, in sub-frame,Uplink synchronization frequencies, */
    kal_uint8                   min_allowed_code_rate;      /*[range]: 0~63, in step of 0.015, i.e. 0.055~1.000.
                                                                                                    [meaning]: Minimum allowed code rate during E-TFC procedure-2.*/
    kal_uint8                   max_allowed_code_rate;      /*[range]: 0~63, in step of 0.015, i.e. 0.055~1.000.
                                                                                                    [meaning]: Maximum allowed code rate during E-TFC procedure-2.*/
    kal_uint8                   num_epuch_timeslot;         /*[range]: 1~5.
                                                                                                    [meaning]: number of E-PUCH timeslots.*/
    TDD_epuch_timeslot_info_T       epuch_timeslot_list[TDD_MAX_UL_TIMESLOT_PER_SUBFRAME];/*E-PUCH timeslot info list*/
    kal_uint8                   pccpch_tx_power;              /*[Range]: 6 ~ 43 by step 1 in dBm
                                                                [Meaning]:P-CCPCH transmit power*/      
    kal_int8                    max_tx_power;                  /*[Range]: -50 ~ 33 dBm
                                                                 [Meaning]: Max. allowed TX power.*/
    kal_int8                    umts_power_class;              /*UE capability(in dBm)
                                                               The value's unit  configured by SLCE is dBm. 
                                                               define MAX_OUTPUT_POWER_CLASS_1 33  :+33dBm 
                                                               define MAX_OUTPUT_POWER_CLASS_2 24 :  +24dBm 
                                                               define MAX_OUTPUT_POWER_CLASS_3 21 : +21dBm 
                                                               define MAX_OUTPUT_POWER_CLASS_4 27 : +27dBm */ 
} TDD_epuch_info_T;

/*E-DCH HARQ RV Configuration, <3GPP-TS25.331:10.3.5.7d>*/
typedef enum _TDD_edch_rv_config_E
{
    TDD_EDCH_RV0 = 0,
    TDD_EDCH_RVTABLE
} TDD_edch_rv_config_E;

/*E-DCH HARQ Information, <3GPP-TS25.331:10.3.5.7d>*/
typedef struct _TDD_edch_harq_info_T
{
    TDD_edch_rv_config_E            edch_rv_config;             /*RV configuration*/
} TDD_edch_harq_info_T;

//#ifdef __TDD128_HSPA_PLUS__

/* [R8] Specify that E-DCH transmission is in dedicated state or common state */
typedef enum _TDD_edch_transmission_type_E
{
   TDD_EDCH_IN_DCH_STATE = 0,                   /* E-DCH allocated in dedicated state */
   TDD_EDCH_IN_COMMON_STATE                     /* E-DCH allocated in common state */
}TDD_edch_transmission_type_E;

/*****common EDCH info*****/
typedef struct _TDD_common_e_rnti_info_T
{
	kal_uint16    starting_e_rnti;           /*indicating the starting ERNTI related to one certain ERUCCH*/
	kal_uint8     number_group;              /*Indicates the number of common E-RNTI groups related to the E-RUCCH*/
	kal_uint8     number_e_rnti_per_group;   /*Indicates the number of common E-RNTIs per group*/
}TDD_common_e_rnti_info_T;

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

typedef struct _TDD_common_edch_info_T
{
   /*ccch_trans_info_T    ccch_trans_info;    CCCH transmission configuration for CELL_FACH on Prim-freq and Secondary-freq*/
	kal_uint8                common_e_rnti_num;
	TDD_common_e_rnti_info_T    common_e_rnti_info[TDD_MAX_ERUCCH];
}TDD_common_edch_info_T;
/*****common EDCH info*****/


/*****DRX related definitions*****/
/*DRX cycle length k, real DRX cycle = 2^k*/
typedef enum _TDD_ctrl_ch_drx_cycle_E
{
	TDD_drx_cycle_1 = 0,
	TDD_drx_cycle_2,
	TDD_drx_cycle_4,
	TDD_drx_cycle_8,
	TDD_drx_cycle_16,
	TDD_drx_cycle_32,
	TDD_drx_cycle_64
}TDD_ctrl_ch_drx_cycle_E;

/*subframe, use as EAGCH inactivity monitor threshold*/
typedef enum _TDD_agch_drx_inact_TrHd_E
{
	TDD_drx_inaTrHd_0 = 0,
	TDD_drx_inaTrHd_1,
	TDD_drx_inaTrHd_2,
	TDD_drx_inaTrHd_4,
	TDD_drx_inaTrHd_8,
	TDD_drx_inaTrHd_16,
	TDD_drx_inaTrHd_32,
	TDD_drx_inaTrHd_64,
	TDD_drx_inaTrHd_128,
	TDD_drx_inaTrHd_256,
	TDD_drx_inaTrHd_512,
	TDD_drx_inaTrHd_spare5,  /*Add spare value*/
	TDD_drx_inaTrHd_spare4,
	TDD_drx_inaTrHd_spare3,
	TDD_drx_inaTrHd_spare2,  /*Add spare value*/
	TDD_drx_inaTrHd_infinity
}TDD_agch_drx_inact_TrHd_E;

typedef struct _TDD_eagch_drx_info_T
{
	TDD_ctrl_ch_drx_cycle_E      eagch_drx_cycle;             /*DRX cycle = 2^k, k=0~6.*/
	//kal_bool                   eagch_inact_TrHd_valid;
	TDD_agch_drx_inact_TrHd_E    eagch_inact_TrHd;           /*subframe, use as EAGCH inactivity monitor threshold*/
	kal_uint8                  eagch_drx_offset;           /*integer[0~63], subframe, offset of E-AGCH DRX cycle*/
}TDD_eagch_drx_info_T;
/*****DRX related definitions*****/


/*****SPS info related definitions*****/
typedef struct _TDD_trans_pattern_info_T
{
	kal_uint8    repet_period;    /*repetition period: 1, 2, 4, 8, 16, 32 subframe*/
	kal_uint8    repet_length;    /*repetition length: 1~repet_period-1*/
}TDD_trans_pattern_info_T;

typedef struct _TDD_init_sps_edch_info_T
{
	kal_uint8    n_eucch;
	TDD_ccode_lcr_E  ccode;                  /*indicating which CH codes used for EDCH on SPS resources*/
	kal_uint8    trri;                   /*Bit1: TS1, Bit2: TS2, ..., Bit5: Ts5.
	                                                                 Bit5 indicating the rightmost bit*/
	kal_uint8    prri;
	kal_uint8    active_time;
	kal_uint8    subframe_num;           /*0, 1; indicating activite on which subframe in one radio frame*/
	kal_uint8    init_tx_pattern_idx;    /*0 ~ maxEDCHTxPattern-TDD128 - 1*/
}TDD_init_sps_edch_info_T;

typedef struct _TDD_edch_sps_info_T
{
	kal_bool                eagch_init_sps_valid;    /*indicating whether init SPS PARAM is configured or not*/
	kal_uint8                ehich_sigature_group_index; /*[range]: 0~19.*/
	TDD_ehich_config_T           sps_ehich_info;
	kal_uint8                trans_pattern_num;
	TDD_trans_pattern_info_T    trans_pattern_list[TDD_maxEDCHTxPattern_TDD128];
	TDD_init_sps_edch_info_T    init_sps_edch_info;      /*EDCH SPS resource info*/
}TDD_edch_sps_info_T;
/*****SPS info related definitions*****/

/*****ERUCCH access type, TL1 trigger UAMC*****/
typedef enum _TDD_erucch_access_type_E
{
	TDD_SCHEDULING_REQUEST= 0,
	TDD_UL_SYNC_ORDER,
	TDD_CELL_RESELECTION_IND
}TDD_erucch_access_type_E;
/*****ERUCCH access type, TL1 trigger UAMC*****/

//#endif /*__TDD128_HSPA_PLUS__*/


/*E-DCH Category Definitions, <3GPP-TS25.306:Table 5.1m>*/
typedef enum _TDD_edch_category_E
{
    TDD_EDCH_CATEGORY_1 = 0,                                    /*Maximum 2 timeslots for QPSK only UE.*/
    TDD_EDCH_CATEGORY_2,                                        /*Maximum 3 timeslots for QPSK only UE.*/
    TDD_EDCH_CATEGORY_3,                                        /*Maximum 2 timeslots for QPSK+16QAM only UE.*/
    TDD_EDCH_CATEGORY_4,                                        /*Maximum 3 timeslots for QPSK+16QAM only UE.*/
    TDD_EDCH_CATEGORY_5,                                        /*Maximum 4 timeslots for QPSK+16QAM only UE.*/
    TDD_EDCH_CATEGORY_6                                         /*Maximum 5 timeslots for QPSK+16QAM only UE.*/
} TDD_edch_category_E;

/*PRACH Access Type, <3GPP-TS25.302:10.1.1>*/
typedef enum _TDD_access_type_E
{
    TDD_ACCESS_TYPE_RACH = 0,                                   /*Access Type is RACH*/
    TDD_ACCESS_TYPE_ERUCCH                                      /*Access Type is E-RUCCH*/
} TDD_access_type_E;

/*E-DCH Transmission Grant Mode*/
typedef enum _TDD_edch_grant_mode_E
{
    TDD_EDCH_GRANT_MODE_SCHEDULED = 0,
    TDD_EDCH_GRANT_MODE_NON_SCHEDULED,
    TDD_EDCH_GRANT_MODE_INVALID 
//#ifdef __TDD128_HSPA_PLUS__
	,TDD_EDCH_GRANT_MODE_SPS
//#endif
} TDD_edch_grant_mode_E;

/*E-HICH Result Code*/
typedef enum _TDD_ehich_result_E
{
    TDD_EHICH_RESULT_NACK = 0,
    TDD_EHICH_RESULT_ACK,
    TDD_EHICH_RESULT_DISCARD,
    TDD_EHICH_RESULT_INVALID
} TDD_ehich_result_E;

typedef enum _TDD_tx_suspend_E
{
    TDD_NO_SUSPEND = 0,
    TDD_SUSPEND_NORMAL_DATA,
    TDD_SUSPEND_DM,
#ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
    TDD_SUSPEND_ALL_DATA,
    TDD_SUSPEND_GEMINI,
#else
    TDD_SUSPEND_ALL_DATA
#endif
} TDD_tx_suspend_E;

typedef struct _TDD_edch_retx_harq_info_T
{
    kal_uint8           harq_id;      /*[range]: 0~7, 255 for invalid*/
    kal_uint8           timeslots;    /*[range]: 1~5, 0 when num_retx_pdu = 0.
                                                                    [meaning]: how many timeslots granted for first transmission of this MAC-e PDU.*/
    kal_uint8           etfci;        /*[Range]: 0~63, 255 for invalid value.
                                                                     [meaning]:  E-TFCI granted for first transmission of this MAC-e PDU.*/
    TDD_tdd128_modulation_E modulation;   /*[meaning]: modulation used for the first transmission of this MAC-e PDU
                                                                     only QPSK and 16QAM supportted */ 
}TDD_edch_retx_harq_info_T;
//#ifdef __TDD128_HSPA_PLUS__
typedef enum _TDD_cedch_status_E
{
	TDD_CEDCH_IDLE = 0 ,
	TDD_CEDCH_START,
	TDD_CEDCH_ONGOING,
	TDD_CEDCH_END
}TDD_cedch_status_E;
//#endif

typedef struct _TDD_etfc_eval_info_req_T
{
    /*Grant Information for this E-DCH TTI*/
    kal_uint16          sub_cfn;                            /*[range]: 0~511.
                                                                                                    [meaning]: sub-frame number.*/
    TDD_edch_grant_mode_E   grant_mode;                         /*[meaning]: invalid grant, scheduled grant, or non-scheduled grant.*/
    kal_bool            is_scheduled_grant_detected;        /*TRUE: shcheduled grant detected, even if preempted by non-scheduled TTI
                                                              FALSE: no scheduled grant detected.
                                                              [notes]Trigger UMAC to start T-WAIT,if running.*/
    kal_bool            is_final_scheduled_grant;                    /*TRUE: this is the final scheduled mode grant.
                                                                                                    FALSE: not the final scheduled mode grant or non-scheduled mode grant.
                                                                                                    [notes]: Trigger UMAC to start T-WAIT.*/
    kal_uint8           num_timeslot_granted;               /*[range]: 1~5, 0 for control signal only case.
                                                                                                    [meaning]: how many timeslot granted for this E-DCH TTI.
                                                                                                    [note]: Considered when evaluate scheduled MAC-e PDU retransmission.*/
   kal_uint8           snpl_index;                         /*[range]: 0~31, and 255 when is_new_tx_required == KAL_FALSE.
                                                                                                    [meaing]: the SNPL index to report when SI to included.*/
    kal_uint8           uph_index;                          /*[range]: 0~31, and 255 when is_new_tx_required == KAL_FALSE.
                                                                                                    [meaing]: the UPH index to report when SI to included.*/

    /*E-HICH results for latest E-DCH TTI*/
    kal_uint8           ehich_harq_id[TDD_MAX_EHICH_RESULT_NUM];                      /*[range]: 0~7, 255 when no E-HICH result.
                                                                                                    [meaning]: Ack/Nack is for which HARQ process.*/
    TDD_ehich_result_E      ehich_result[TDD_MAX_EHICH_RESULT_NUM];                       /*[meaning]: E-HICH result, INVALID when no E-HICH result.*/

    /*Control Signals*/
    kal_uint8           mac_event;                          /*[meaning]: Forwarded MAC-e/es configuration activation signal.
                                                                                                    Bit-mask of configuration:
                                                                                                    * bit0: mac-e/es setup
                                                                                                    * bit1: mac-e/es release
                                                                                                    * bit2: mac-e/es modify.*/
    TDD_tx_suspend_E        tx_suspend;                     
                                                                                                    
    kal_bool            is_working_freq_changed;            /*TRUE: Working frequency is changed, and UMAC shall start E-RUCCH access if TEBS > 0.
                                                                                                    FALSE: Working frequency is the same.
                                                                                                    [note]: <3GPP-TS25.321:11.9.1.5> requires both serving cell change and working frequency change
                                                                                                                leads to E-RUCCH access. TDD128 doesn't support soft-handover, i.e. UMAC clearly knows the 
                                                                                                                handover procedure. As a result, we needn't the serving cell change indication in tick_1().*/
   kal_bool          mac_es_e_reset;           /*KAL_TRUE:      indicates the MAC-e/es entity needs to be reset*/
    kal_uint8           mac_harq_event;                     /*MAC-e HARQ Events.
                                                                                                    Bit-mask:
                                                                                                    * bit0: E-TFC table changed
                                                                                                    * bit1: HARQ RV Re-Configuration.
                                                                                                    * bit2: capability category change.*/

	kal_uint8		meas_occasion;            /*bit0 indicates whether it is in DCH measurement occasion;
											    bit1 indicates whether it is in idle interval for E-UTRA Measurement.
												value 1 means in the measurement occasion, 
												value 0 means not in the measurement occasion*/
//#ifdef __TDD128_HSPA_PLUS__
	kal_bool		is_cedch;
	kal_bool		ernti_modify;
	TDD_cedch_status_E	cedch_status;
//#endif
} TDD_etfc_eval_info_req_T;

typedef struct _TDD_etfc_eval_info_ind_T
{
    /*Grant Information for this E-DCH TTI*/
    kal_uint16          sub_cfn;                            /*[range]: 0~511.
                                                                                                    [meaning]: sub-frame number*/
    TDD_edch_grant_mode_E   grant_mode;                         /*[meaning]: invalid grant, scheduled grant, or non-scheduled grant.*/

    /*E-TFC Evaluation Preparation Information for this E-DCH TTI*/
    kal_bool            tx_enable;                          /*TRUE: TL1 need to call tick_2() and tick_4().
                                                                                                    FALSE: TL1 skip the call on tick_2() and tick_4().
                                                                                                    [meaning]: Currently, UMAC set to FALSE only when is_tx_suspend = TRUE.
                                                                                                    [notes]: Redundant if equal to is_tx_suspend, and keep it for future extension.*/
    kal_bool            is_user_data_avaialble;             /*TRUE: user data is available to transmit, and TL1 perform E-TFC procedure-2.
                                                                                                    FALSE: no user data is available to transmit, and TL1 select SI only E-TFC.*/
    kal_uint8           delta_harq;                         /*[range]: 0~6dB.
                                                                                                    [meaning]: the maximum Power Offset of all the MAC-d flows on scheduled mode or non-scheduled mode.
                                                                                                    [notes]: TL1 ignore delta_harq when is_si_only = TRUE.*/

    /*List of NACKed MAC-e PDU to Evaluate*/
    kal_uint8           num_retx_pdu;                       /*[range]: 0~4, 0 is no HARQ process to retransmit.
                                                                                                    [meaning]: how many NACKed HARQ processes to evaluation.
                                                                                                    [notes]: UMAC will sort the MAC-e PDUs to ReTx from old to new. 
                                                                                                                TL1 can stop the evaluation if one is supported from both data size and power margin.
                                                                                                    [notes]: Power restriction not apply to non-scheduled mode retransmission, <3GPP-TS25.321:11.9.1.4>.
                                                                                                                To align the scheduled and non-schedulded mode, UMAC will return the ReTx MAC-e PDU to TL1,
                                                                                                                while TL1 can jump over the ReTx evaluation procedure for non-scheduled mode.*/
    TDD_edch_retx_harq_info_T retx_harq_info[TDD_MAX_EDCH_HARQ_PROC_PER_MODE];     /* [meaning]: harq releated information for retransmission PDU */ 
//#ifdef __TDD128_HSPA_PLUS__
	kal_uint8    tebs;              /*indicating TEBS is zero or not for EAGCH monitoring*/
//#endif
} TDD_etfc_eval_info_ind_T;

typedef struct _TDD_edch_data_req_T
{
    /*Grant Information for this E-DCH TTI*/
    kal_uint16          sub_cfn;                            /*[range]: 0~511.
                                                                                                    [meaning]: sub-frame number.*/
    TDD_edch_grant_mode_E   grant_mode;                         /*[meaning]: invalid grant, scheduled grant, or non-scheduled grant.*/

    /*Re-transmission information*/
    kal_uint8           selected_retx_harq_id;                  /*[range]: 0~7, 255 if no retx-pdu allowed.
                                                                                                    [meaning]: Harq id of selected ReTx MAC-e PDU in retx_harq_info[].*/

    /*New-transmission information*/
    kal_bool            is_new_tx_required;                 /*TRUE: new transmission required, due to either no ReTx available or allowed.
                                                                                                    FALSE: no new transmission required, and UMAC ignore the following parameters.
                                                                                                    [notes]: UMAC will ASSERT if both selected_retx_pdu == 255 and is_new_tx_required == KAL_FALSE.*/
    kal_uint8           supported_etfci_num ;                        /*[Range]: 0~63
                                                                                               [Meaning]: The supported ETFC number,exclude ETFCI=0.*/
    kal_uint8          supported_etfci_bitmap[TDD_MAX_ETFCI_BITMAP_SIZE] ; /*The bitmap indicates the status of ETFCr,exclude ETFCI=0.
                                                                                                                                Two bits indicate status of one ETFC.
                                                                                                       11: supported, 10: power not support, 01: TB size not support, 00: not support.
                                                                                                      e.g. 2 LSB of supported_etfci_bitmap[0] indicates  the status of ETFC0, 
                                                                                                      and 2 MSB of supported_etfci_bitmap[0] indicates the status of ETFC3.*/
   kal_uint8          max_supported_etfci ;                       /* The max supported ETFCI, exclude ETFCI=0.
                                                                                                 If SI only, this field should be set to 0xff.*/
   kal_uint8          min_supported_etfci ;                       /* The min supported ETFCI, exclude ETFCI=0.
                                                                                                 If SI only, this field should be set to 0xff.*/
//#ifdef __TDD128_HSPA_PLUS__
	kal_bool	cell_reselection;          /*indicating whether to carry SI for TDD_CELL_RESELECTION_IND*/
//#endif
} TDD_edch_data_req_T;

typedef struct _TDD_edch_data_ind_T
{
    /*Grant Information for this E-DCH TTI*/
    kal_uint16          sub_cfn;                            /*[range]: 0~511.
                                                                                                    [meaning]: sub-frame number*/
    TDD_edch_grant_mode_E   grant_mode;                         /*[meaning]: invalid grant, scheduled grant, or non-scheduled grant.*/

    /*E-UCCH information*/
    kal_uint8           harq_id;                            /*[range]: 0~7.
                                                                                                    [meaning]: the HARQ process identifier.*/
    kal_uint8           etfci;                              /*[range]: 0~63.
                                                                                                    [meaning]: the E-TFCI to transmit, with the configured category and granted timeslots.*/
    kal_uint8           rsn;                                /*[range]: 0~3.
                                                                                                    [meaning]: the RSN to use for this MAC-e PDU.*/

    /*MAC-e PDU description*/
    kal_bool            is_new_tx;                          /*TRUE: first transmission of a new MAC-e PDU.
                                                                                                    FALSE: retransmission of a MAC-e PDU.*/
    kal_bool            is_si_only;                         /*TRUE: SI only MAC-e PDU.
                                                                                                    FALSE: a regular MAC-e PDU.*/
    kal_uint16          tb_size;                            /*[range]: 23~11160, in bits, and 0 when is_new_tx_required == KAL_FALSE.
                                                                                                    [meaning]: Bit length of data.*/
    kal_uint32           *data;                              /*Point to MAC-e PDU data buffer.  该buffer指针由MAC填入和释放，由TL1D读取。需要system service保证MAC of CR4与TL1D of MD32看到的buffer地址是一样的*/
} TDD_edch_data_ind_T;

#endif

typedef enum _TDD_dmo_status_E
{
    TDD_ACTIVATE = 0,  /*to activate this dmo pattern*/
    TDD_DEACTIVATE = 1,    /*to deactivate this dmo pattern*/
}TDD_dmo_status_E;
typedef enum _TDD_dmo_purpose_E
{
	TDD_DMO_INTER_FREQ = 1 << 0,
	TDD_DMO_GSM_RSSI   = 1 << 1,
	TDD_DMO_GSM_INITIAL_BSIC = 1 << 2,
	TDD_DMO_GSM_BSIC_RECFN   = 1 << 3,
	TDD_DMO_LTE_MEAS         = 1 << 4,
	TDD_DMO_ALL_PURPOSE      = TDD_DMO_INTER_FREQ|TDD_DMO_GSM_RSSI|TDD_DMO_GSM_INITIAL_BSIC|TDD_DMO_GSM_BSIC_RECFN|TDD_DMO_LTE_MEAS,
}TDD_dmo_purpose_E;
typedef struct _TDD_dch_mo_info_T
{
    kal_uint8          pattern_id;  /* Pattern sequence identifier.
                                                                  [Range]: 0,1,…, dmo_pattern_num-1.*/
	TDD_dmo_status_E       status_flag;
	kal_uint8          purpose;     /*Measurement Purpose. The value 1 of a bit means that the measurement occasion pattern sequence is applicable for the corresponding type of measurement.
                                                                   Bit 0 is for Inter-frequency measurement.
                                                                   Bit 1 is for GSM carrier RSSI measurement.
                                                                   Bit 2 is for Initial BSIC identification.
                                                                   Bit 3 is for BSIC re-confirmation.
                                                                   Bit 4 is for E-UTRA measurement.
                                                                   Note: Bit 0 is the first/leftmost bit of the bit string....*/
	kal_uint8	       k;            /*CELL_DCH measurement occasion cycle length coefficient. [Range]: 0,1,…, 9.
                                                                    The actual measurement occasion period equal to 2^k radio frames. 
                                                                     Value 0 indicates continuous allocation*/
	kal_uint16	       offset;       /*In frames. The measurement occasion position in the measurement period.
                                                                    [Range]: 0,1,…, 2^k-1*/
	kal_uint16	       length;       /*The measurement occasion length in frames starting from the Offset.
                                                                    [Range]: 1,…, 2^k*/
	kal_uint8	       timeslot_bmp; /*Bitmap indicating which of the timeslot(s) is/are allocated for measurement. 
                                                                     Bit 0 is for timeslot 0. 
                                                                     Bit 1 is for timeslot 1. 
                                                                     Bit 2 is for timeslot 2. 
                                                                     Bit 3 is for timeslot 3. 
                                                                     Bit 4 is for timeslot 4. 
                                                                     Bit 5 is for timeslot 5. 
                                                                     Bit 6 is for timeslot 6.
                                                                     
                                                                     The value 0 of a bit means the corresponding timeslot is not used for measurement. 
                                                                     The value 1 of a bit means the corresponding timeslot is used for measurement.
                                                                     Note1: Bit 0 is the first/leftmost bit of the bit string.
                                                                     Note2: all 1 means all the timeslots can be used for measurement.*/
}TDD_dch_mo_info_T;	

/*UL dpch reconfig type*/
typedef enum _TDD_ul_dpch_reconfig_type_E
{
   TDD_UL_DPCH_NONE = 0,   /*Do nothing with ul dpch.*/
   TDD_UL_DPCH_SETUP,       /*Setup ul dpch.*/
   TDD_UL_DPCH_MODIFY,      /*modify ul dpch.*/
   TDD_UL_DPCH_RELEASE     /*Release ul dpch.*/
} TDD_ul_dpch_reconfig_type_E;

//#ifdef __TDD128_HSPA_PLUS__
/*DL dpch reconfig type*/
typedef enum _TDD_dl_dpch_reconfig_type_E
{
   TDD_DL_DPCH_NONE = 0,   /*Do nothing with dl dpch.*/
   TDD_DL_DPCH_SETUP,       /*Setup dl dpch.*/
   TDD_DL_DPCH_MODIFY,      /*modify dl dpch.*/
   TDD_DL_DPCH_RELEASE     /*Release dl dpch.*/
} TDD_dl_dpch_reconfig_type_E;
//#endif
/*post tx type*/
typedef enum _TDD_post_tx_type_E
{
   TDD_POST_TX_RACH = 0,  
   TDD_POST_TX_DCH,
   TDD_POST_TX_ERUCCH
} TDD_post_tx_type_E;

#if defined (__GEMINI_GSM__) && defined (__UMTS_RAT__)
typedef enum TDD_uas_gemini_conflict_cause_enum
{
    TDD_URR_NO_CONFLICT = 0,                    /*UConflictWithNone*/ 
    TDD_URR_CONFLICT_WITH_UMTS_BCH_HIGH = 1,    /*UConflictWithSIB_HIGH*/
    TDD_URR_CONFLICT_WITH_UMTS_PICH = 2,        /*UConflictWithPICH*/
    TDD_URR_CONFLICT_WITH_UMTS_CTCH	= 3,        /*UConflictWithCTCH*/
    TDD_URR_CONFLICT_WITH_UMTS_BCH_LOW = 4,     /*UConflictWithSIB_LOW*/
    TDD_URR_CONFLICT_WITH_GSM_NBCCH = 5,        /*UConflictWithNBCCh*/
    TDD_URR_CONFLICT_WITH_GSM_PCH = 6,          /*UConflictWithPCh*/
    TDD_URR_CONFLICT_WITH_GSM_BCCH = 7,         /*UConflictWithBCCh*/
    TDD_URR_CONFLICT_WITH_GSM_OTHERS = 8,       /*UConflictWithOther*/
} TDD_uas_gemini_conflict_cause_enum;
#endif
/* [R8] Enumeration of hs_dsch transmission type. */
typedef enum _TDD_rrc_state_E
{
   TDD_CELL_DCH = 0,
   TDD_URA_PCH,
   TDD_CELL_PCH,
   TDD_IDLE_FACH,
   TDD_CELL_FACH
} TDD_rrc_state_E;


/* [R8] Enumeration of enabling delay. Uint is radio frame. */
typedef enum _TDD_enabling_delay_E
{
   TDD_ED_0 = 0,
   TDD_ED_1,
   TDD_ED_2,
   TDD_ED_4,
   TDD_ED_8,
   TDD_ED_16,
   TDD_ED_32,
   TDD_ED_64,
   TDD_ED_128,
   TDD_ED_spare7,
   TDD_ED_spare6,
   TDD_ED_spare5,
   TDD_ED_spare4,
   TDD_ED_spare3,
   TDD_ED_spare2,
   TDD_ED_INFINITY
} TDD_enabling_delay_E;

/* [R8] Enumeration of HS-SCCH/E-AGCH DRX cycle. Uint is subframe. */
/*
typedef enum _control_channel_drx_cycle_E
{
   TDD_drx_cycle_1 = 0,
   TDD_drx_cycle_2,
   TDD_drx_cycle_4,
   TDD_drx_cycle_8,
   TDD_drx_cycle_16,
   TDD_drx_cycle_32,
   TDD_drx_cycle_64
} control_channel_drx_cycle_E;
*/
/* [R8] Enumeration of ue_drx_cycle_inactivity_threshold. Uint is subframe. */
typedef enum _TDD_scch_drx_cycle_inactivity_threshold_E
{
   TDD_drx_cycle_inaTrHd_1,
   TDD_drx_cycle_inaTrHd_2,
   TDD_drx_cycle_inaTrHd_4,
   TDD_drx_cycle_inaTrHd_8,
   TDD_drx_cycle_inaTrHd_16,
   TDD_drx_cycle_inaTrHd_32,
   TDD_drx_cycle_inaTrHd_64,
   TDD_drx_cycle_inaTrHd_128,
   TDD_drx_cycle_inaTrHd_256,
   TDD_drx_cycle_inaTrHd_512,
   TDD_drx_cycle_inaTrHd_spare6,
   TDD_drx_cycle_inaTrHd_spare5,
   TDD_drx_cycle_inaTrHd_spare4,
   TDD_drx_cycle_inaTrHd_spare3,
   TDD_drx_cycle_inaTrHd_spare2,
   TDD_drx_cycle_inaTrHd_infinity
} TDD_scch_drx_cycle_inactivity_threshold_E;

/* [R8] Enumeration of out-of-sync window. Uint is ms. */
typedef enum _TDD_out_of_sync_win_E
{
    TDD_out_of_sync_win_40 = 0,
    TDD_out_of_sync_win_80,
    TDD_out_of_sync_win_160,
    TDD_out_of_sync_win_320,
    TDD_out_of_sync_win_640,
} TDD_out_of_sync_win_E;

/* [R8] Enumeration of enhanced CELL_FACH DRX status */
typedef enum _TDD_hs_cell_fach_drx_status_E
{
   TDD_DRX_OFF = 0,                             /* No DRX in CELL_FACH state or ETWS reception is on-going */
   TDD_DRX_ON_NORMAL,                           /* UL1 should start CELL_FACH DRX when the normal criterion is fulfilled */
   TDD_DRX_ON_ETWS_END,                         /* SLCE should set this enum when the ETWS procedure ends */
   TDD_DRX_INVALID                              /* SLCE internal use. Invalid for UL1. */
}TDD_hs_cell_fach_drx_status_E;

typedef struct _TDD_receive_pattern_list_info_T
{
    kal_uint8               repetition_period;             /* Integer (1, 2, 4, 8, 16, 32). Value 1 indicate continuous*/
    kal_uint8               repetition_length;             /* Integer (1.. Repetition period - 1)*/
} TDD_receive_pattern_list_info_T;

typedef struct _TDD_harq_Info_sps_T
{
    kal_uint8               processes_number;               /*Integer (1..8)*/
    kal_uint16              process_memory_size;            /*Integer (800 .. 16000 by step of 800, 17600 .. 32000 by step of 1600, 36000 .. 80000 by step of 4000, 88000 .. 160000 by step of 8000, 176000 .. 304000 by step of 16000)
                                                              Maximum number of soft channel bits available in the virtual IR buffer */
} TDD_harq_Info_sps_T;

typedef struct _TDD_hs_dsch_paging_info_T
{
    kal_uint8               trri;                           /* BitString(6) Timeslot Resource Related Information, bitmap of assigned timeslots.
                                                               Bit0-TS0, Bit1-TS2, Bit2-TS3, ... Bit5-TS6.
                                                               Notes: for TL1, only check Bit1 -- Bit5*/   
    TDD_ccode_lcr_E             start_ccode;                    /*The start channelization code of HS-PDSCH.*/ 
    TDD_ccode_lcr_E             stop_ccode;                     /*The stop channelization code of HS-PDSCH.*/
    TDD_midamble_info_T         hspdsch_midamble_info;          /*Midamble info for HS-PDSCH*/
    kal_uint8               paging_sub_channel_size;        /* [Range] Integer (1..3)  number of frames for a Paging sub-channel*/
    kal_int8                pcch_tb_size_index[2];          /* [Range] Integer (1..32). -1 if this is invalid. Index of value range 1 to 32 of the MAC-ehs transport block size as described in Table9.2.2.3.8 of 3GPP 25.321. */
} TDD_hs_dsch_paging_info_T;


typedef struct _TDD_hs_scch_drx_info_T
{
    TDD_ctrl_ch_drx_cycle_E                       hs_scch_drx_cycle;                              /* [Meaning]: HS-SCCH reception pattern, i.e. how often UE has to monitor HSSCCH. Units of subframes*/
    kal_bool                                    hs_scch_drx_inaTrHd_valid;
    TDD_scch_drx_cycle_inactivity_threshold_E   hs_scch_drx_inaTrHd;         /* [Meaning]: Units of subframes.Five spare values are needed.*/
    kal_uint8                                  hs_scch_drx_offset;                             /*[Range]: Integer (0..63).
                                                                                              [Meaning]:  Units of subframes. Offset of the HS-SCCH DRX cycles*/
} TDD_hs_scch_drx_info_T;

typedef struct _TDD_initial_sps_info_hsdsch_T
{
    kal_uint8                               trri;                                           /*BitStrin(5) indicating which of the timeslots configured for HS-PDSCH are allocated for SPS resource.
																								if ts0 indicator == TRUE, Bit1: TS0, Bit2: TS3, ..., Bit5: Ts6
																								else                            Bit1: TS2, Bit2: TS3, ..., Bit5: Ts6
																								Bit5 indicating the rightmost bit!*/
    TDD_ccode_lcr_E                             start_ccode;                                    /*The start channelization code of HS-PDSCH.*/ 
    TDD_ccode_lcr_E                             stop_ccode;                                     /*The stop channelization code of HS-PDSCH.*/
    kal_uint8                               active_time;                                    /*0~~255, Specifies the HS-PDSCH Offset in Radio Frame level*/
    kal_uint8                               subframe_number;                                /*Integer (0..1),Specifies the HS-PDSCH Offset in subframe level*/
    kal_uint8                               init_tb_size_index;                             /*Integer (0.. maxTbsForHSDSCH-TDD128-1)*/
    kal_uint8                               init_rx_pattern_index;                          /*Integer (0.. maxRxPatternForHSDSCH-TDD128-1)*/
    kal_uint8                               hs_sich_index;                                  /*Integer (0.. maxHSSICH-TDD128-1)*/
    TDD_tdd128_modulation_E                     modulation;                                     /*Enumerated (QPSK, 16QAM)*/
} TDD_initial_sps_info_hsdsch_T;

typedef struct _TDD_hs_cell_fach_drx_T
{
   TDD_hs_cell_fach_drx_status_E hs_cell_fach_drx_status;       /* enhanced CELL_FACH DRX status */
   kal_uint16                   timer_length;               /* inactivity timer to start HS CELL_FACH DRX (100/200/400/800 ms)*/
   kal_uint8                   drx_cycle_length;              /* HS CELL_FACH DRX cycle length (4/8/16/32 frames) */
   kal_uint8                   drx_burst_length;              /* the period within the HS DRX cycle that the UE continuously receive HS-DSCH (1/2/4/8/16 frames) */
}TDD_hs_cell_fach_drx_T;

typedef struct _TDD_hs_dsch_sps_info_T
{
    kal_bool                               hs_dsch_init_sps_valid;                        /*indicating 
    																				whether init SPS PARAM is configured or not*/
    kal_uint8                               tb_size_num;                                    /* maxTbsForHSDSCH-TDD128 = 4*/
    kal_uint8                               tb_size_list[4];                                /* Integer (1..63).
                                                                                                Index of the MAC-hs transport block size.*/
    kal_uint8                               receive_pattern_num;                            /* maxRxPatternForHSDSCH-TDD128 = 4*/
    TDD_receive_pattern_list_info_T           receive_pattern_list[4];
    TDD_harq_Info_sps_T                         harq_Info_sps;
    kal_uint8                                sich_num;                                       /* maxHSSICH-TDD128 = 4*/
    TDD_hssich_info_T                           hs_sich_list[TDD_MAX_HSSCCH_NUM];
    TDD_initial_sps_info_hsdsch_T              initial_sps_info_hsdsch;
} TDD_hs_dsch_sps_info_T;

typedef struct _TDD_hs_cell_pch_state_info_T 
{ 
    TDD_pich_info_T              pich_info;
    kal_uint8                reception_window_size;          /* [Range] Integer (1…16) Number of subframes for UE to detect the HS-SCCH */
    kal_bool                 hs_dsch_paging_info_valid;      /* TRUE: The hs_dsch_paging_info is valid. TRUE also means UE donot have dedicated H-RNTI*/
    TDD_hs_dsch_paging_info_T    hs_dsch_paging_info;            /* HSDSCH Paging info*/
} TDD_hs_cell_pch_state_info_T;

typedef struct _TDD_hs_cell_fach_state_info_T
{
  kal_bool                 ts0_indicator;               /* 1: TS0 used for HSDSCH; 0: TS0 is not used for HSDSCH*/
  TDD_hs_cell_fach_drx_T       fach_drx_info;    
} TDD_hs_cell_fach_state_info_T;

typedef struct _TDD_hs_cell_dch_state_info_T 
{
    kal_uint8                pa_plus_valid_flag;             /* Bit mask:
                                                               Bit 0: control_channel_drx_status en/disable
                                                               Bit 1: sps_status en/disable
                                                               
                                                               Bit 2: drx_param_valid. When Bit0 is "1", but Bit2 is "0", indicating DRX keeps enabled but PARAM not modify 
                                                               Bit 3: hs_dsch_sps_param_valid. Reference Bit2 comments*/
    TDD_hs_scch_drx_info_T      hs_scch_drx_param;              /* HS-SCCH DRX relate parameters*/
    TDD_enabling_delay_E        enabling_delay;
    TDD_hs_dsch_sps_info_T      hs_dsch_sps_info;               /* HS-DSCH SPS Configuration Information*/
    TDD_out_of_sync_win_E       out_of_sync_window;             /* Enumerated (40, 80, 160, 320, 640). Value in milliseconds.*/
    kal_bool                 ts0_indicator;                  /* Absence of this IE means that the enhanced TS0 is not used. The presence of this IE means that the first bit of timeslot information on HS-SCCH is used to indicate TS0.*/
} TDD_hs_cell_dch_state_info_T;

typedef union _TDD_hspdsch_state_info_T
{
   TDD_hs_cell_pch_state_info_T         cell_pch;               /* The parameters in CELL_PCH or URA state. */
   TDD_hs_cell_fach_state_info_T        cell_fach;              
   TDD_hs_cell_dch_state_info_T         cell_dch;               /* The parameters in CELL_DCH state. */
} TDD_hspdsch_state_info_T;

//#endif /*__TDD128_HSPA_PLUS__*/

typedef enum _TDD_tl1_em_tstcmdtype
{
    TDD_TL1_EM_TST_TX_START = 0,
    TDD_TL1_EM_TST_TX_STOP  = 1,
    TDD_TL1_EM_TST_RX_REPORT = 2,
	TDD_TL1_EM_TST_TX_REPORT = 3
}TDD_tl1_em_tstcmdtype;

typedef struct _TDD_tl1_em_tstcmdpara
{
    kal_uint8  band;
    kal_uint16 freq;
    kal_uint8  power;
}TDD_tl1_em_tstcmdpara;
#if   defined(__SIMULATION_PS_TL1_BOTH__) || defined(__TL1_TST_LOG_DSP_RESP__)   
typedef enum
{
    TDD_TL1_TIMER_SYNC = 1,
    TDD_TL1_TIMER_SNIFFER,
    TDD_TL1_TIMER_DSP_CEHCK,
} TDD_tl1_timer_E;
#endif


#endif
