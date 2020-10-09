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
 *   tl1_struct.h
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
 * 03 13 2019 xiaochi.zhang
 * [MOLY00391129] [Feature Porting Request] RF desense +ERFSCAN to LR12A.R3.MP - TL1 part
 * 	
 * 	.
 *
 * 11 08 2018 xiaochi.zhang
 * [MOLY00363582] 老化测试airplane mode操作
 * 	
 * 	.
 *
 * 08 03 2017 fanzhi.meng
 * [MOLY00268223] 在AP侧打开或关闭某个Band的TAS功能及获取某个Band是否支持TAS
 * 	
 * 	.TAS new requirement TDS SW update.
 *
 * 06 21 2017 fanzhi.meng
 * [MOLY00258592] Titan_DAT_SAR_feature patch back and Add DRDI custom paramter "RO" property in MT6293 project
 * 	
 * 	1. titan DAT and SAR feature patch back.
 * 	2. custom data change to "RO".
 *
 * 04 12 2017 weimin.zeng
 * [MOLY00240270] [6293][Gemini][T+W] Phase 1: Common Interface Changes Check in
 * 	
 * 	, 3G TDD UMAC PCH buffer.
 *
 * 02 09 2017 xiaochi.zhang
 * [MOLY00204784] [Android N]TL1 add Tx Rx active time for Android N
 * 	
 * 	.
 *
 * 01 17 2017 fanzhi.meng
 * [MOLY00214807] MT6292/UMOLY_MT6293/UMOLYA TL1 CODE maintain
 * .
 *
 * 01 17 2017 yanhai.xuan
 * [MOLY00168027] check in code to MT6293_TL1SIM_DEV
 * 	
 * 	new caseman over elt
 *
 * 11 02 2016 ting.xu
 * [MOLY00208907] [TAS]remove __TAS_MAX_TXPWR_REDUCTION__&modify customer version
 * 	
 * 	delete marco TAS_MAX_TXPWR_REDUCTION.
 *
 * 10 14 2016 ting.xu
 * [MOLY00203409] [MT6292&6293][TAS2.0]code check in
 * 	
 * 	align 3GTDSCDMA mt6292 tas2.0.TO mt6293
 *
 * 06 28 2016 zheng.zou
 * [MOLY00179446] TAS切换到上天线降功率
 * sync TAS patches from UMOLY.
 *
 * 06 18 2016 fanzhi.meng
 * [MOLY00184438] 6293 TL1 CODE MAINTAIN
 * 	
 * 	tl1 code sync from 93 SIM DEV.
 *
 * 06 18 2016 fanzhi.meng
 * [MOLY00184438] 6293 TL1 CODE MAINTAIN
 * 	
 * 	tl1 code sync from 93 SIM DEV.
 *
 * 01 14 2016 yanhai.xuan
 * [MOLY00159734] TX power detector support on Jade
 * .
 *
 * 12 22 2015 xuejing.chen
 * [MOLY00152614] RSSI edBm support on LR11
 * +ERSSI report value in 1/8 dBm (exclude 4G).
 *
 * 12 09 2015 fanzhi.meng
 * [MOLY00119767] Jade TL1 code maintain
 * 	
 * 	.
 *
 * 11 04 2015 yunlong.li
 * [MOLY00139750] [MT6755][TDD]
 * .remove l1core pcore
 *
 * 10 22 2015 yunlong.li
 * [MOLY00139750] [MT6755][TDD]
 * .add tl1_l1adt_enter_tdd_mode_ind
 *
 * 10 18 2015 chuansheng.zhang
 * [MOLY00145677] [91+][TL1] Platform patch check in
 * (1) LR11 until patch CL1745309 merge to UMOLY;
 * (2) 91+ for MIPS: l1core->__SMP_ARCH__ modify, and build error clr;
 * (3) TL1 IRQ code part modify
 *
 * 08 27 2015 yunlong.li
 * [MOLY00135310] [TK6291][E1EVB] [ADT]add adt feature
 * Rollback //UMOLY/TRUNK/UMOLY/mcu/common/interface/modem/l1/tdd/tl1_struct.h to revision 20
 *
 * 08 24 2015 yunlong.li
 * [MOLY00135310] [TK6291][E1EVB] [ADT]add adt feature
 * .fix 6291+ build error
 *
 * 08 04 2015 yunlong.li
 * [MOLY00135310] [TK6291][E1EVB] [ADT]add adt feature
 * 	.add adt feature
 *
 * 07 28 2015 chuansheng.zhang
 * [MOLY00132771] [MT6755][TDD3G][SLT] Dev
 * Jade: TDSCDMA SLT code check in.
 *
 * 05 21 2015 yanhai.xuan
 * [MOLY00115289] [TK6291E1][RMPU][Pre-Sanity][3G][Blocking][TDD] CMCC network 23G DM 做数据业务会出现不明原因死机
 * 	.
 *
 * 05 19 2015 qianli.li
 * [MOLY00114091] [MT6291][TAS feature] Add TDD_TAS feature
 * 	.
 *
 * 05 19 2015 qianli.li
 * [MOLY00114091] [UMOLY][tas feature] TAS for 6291
 * .
 * 
 * 04 29 2015 rong.yang
 * [MOLY00109047] [UMOLY][new feature] Pich false alarm Optimization
 * .
 *
 * 04 27 2015 chengwei.liu
 * [MOLY00109507] [UMOLY][TDD] [Memory Access Permission] UMAC Share buffer code change check in
 * .
 *
 * 04 19 2015 chuansheng.zhang
 * [MOLY00097620] [TK6291][UBin] TL1 Platform Patch
 * fix ubin duplex struct issue.
 *
 * 04 17 2015 marco.zhang
 * [MOLY00096053] [TDD] Rx report for test (need turn on __TDS_RX_TEST_SUPPORT__)
 * 	.
 *
 * 04 16 2015 chuansheng.zhang
 * [MOLY00097620] [TK6291][UBin] TL1 Platform Patch
 * TL1: Ubin Phase2 code merge.
 *
 * 02 10 2015 fanzhi.meng
 * [MOLY00086950] UMOLY TL1 MAINTAIN
 * .code sync
 *
 * 01 07 2015 marco.zhang
 * [MOLY00086950] UMOLY TL1 MAINTAIN
 * .
 *
 * 01 07 2015 fanzhi.meng
 * [MOLY00086950] UMOLY TL1 MAINTAIN
 * 	.
 *
 * 01 05 2015 marco.zhang
 * [MOLY00086950] UMOLY TL1 MAINTAIN
 * 	.
 *
 * 01 05 2015 fanzhi.meng
 * [MOLY00086950] UMOLY TL1 MAINTAIN
 * 	.
 *
 * 12 29 2014 marco.zhang
 * [MOLY00086950] UMOLY TL1 MAINTAIN
 * 	.
 *
 * 12 21 2014 marco.zhang
 * [MOLY00086950] UMOLY TL1 MAINTAIN
 * 	prefix.
 *
 * 12 11 2014 rong.yang
 * [MOLY00086950] UMOLY TL1 MAINTAIN
 * .revise umac part about shared memory on tl1_ps_shared_mem.h/.c
 *
 * 12 10 2014 rong.yang
 * [MOLY00087194] [3G UMAC] merge 6291 code from MOLY.U3G.90IT.DEV
 * .
 *
 * 08 27 2014 marco.zhang
 * [MOLY00077352] [MT6291]TAS cross core dev
 * 	.
 *
 * 05 23 2014 xiaoyun.mao
 * [MOLY00066499] [3G TDD UMAC & L1] DPA & R4 rx memory revise
 * 	.rx data path change
 *
 * 05 22 2014 shouzhu.zhang
 * [MOLY00066398] [Known Issue][MT6592TDD][SGLTE][LTTG][KK][Thermal] The tsPA didn't report temperature information in downloading/call (always -127 degreeC)
 * report thermal.
 *
 * 05 13 2014 jt.tan
 * [MOLY00064338] [MT6592TDD][CSFB][CMCC Case][FT][GZ][Regression 3][5.4.6] Ping suspend time larger than CMCC criteria (20seconds) [FOCUS ISSUE]
 * 	patch for CMCC 5.4.6
 *
 * 03 11 2014 xiaoyun.mao
 * [MOLY00059209] [Blocking][Critical][CMCC MTBF][CMCC Case][EE][MT6582QHD512][SGLTE]登陆邮箱不成功
 * 	.add mac ut struct with meas_occasion_ind
 *
 * 03 06 2014 xiaoyun.mao
 * [MOLY00058570] [MT6290E2][SGLTE][82LTEv2][LT+G][GCF][ETC7310][MM][Band 38][Band A][case 8.4.2.2] fail,终端发送了cell update导致用例失败
 * 	.DMO optimization: ul tick tell mac DMO info
 *
 * 03 06 2014 xiaoyun.mao
 * [MOLY00058505] [check in]B3B39 co-existence code
 * 	.TL1 check in
 *
 * 12 31 2013 shouzhu.zhang
 * [MOLY00048478] [MT6290E1][LTG][GCF][CMW500][MM][Pre-Test][case 9.2.3.3.4][Band 38] Fail
 * 4G OOS Measurement change.
 *
 * 12 17 2013 shouzhu.zhang
 * [MOLY00050653] [TL1][Check in]Remove TL1 MCU needless compile option
 * .
 *
 * 10 18 2013 hongwei.zhang
 * [MOLY00042501] [TDD][MMDC EM Dev]SINR & SupportBand Info
 * MMDC EM Dev: Report SINR Info to Uplayer.
 *
 * 09 18 2013 ast00029
 * [MOLY00032095] [3G TDD][RxCFN] Activation time and RRC message RX CFN record
 * for cr:MOLY00032095,Record this situation: Calculate active_sfn with current_cfn and last rx_cfn, if the result is different, trace it.
 *
 * 08 19 2013 shouzhu.zhang
 * [MOLY00031436] [FDD2TDD][MT6290E1][NAS RTD][MM][FDD] Could not receive SIB-3 so 4G3 evaluation fails
 * Report bch ind with standby no gap when no gap to rx bch.
 *
 * 08 09 2013 fanzhi.meng
 * [MOLY00033092] MT6592/MT6290 MCU code update
 * .add dsp changelist trace
 *
 * 08 02 2013 ast00029
 * [MOLY00032095] [3G TDD][RxCFN] Activation time and RRC message RX CFN record
 * for cr:MOLY00032095,Record this situation: Calculate active_sfn with current_cfn and last rx_cfn, if the result is different, trace the it.
 *
 * 08 02 2013 ast00029
 * [MOLY00032095] [3G TDD][RxCFN] Activation time and RRC message RX CFN record
 * for cr:MOLY00032095,Record this situation: Calculate active_sfn with current_cfn and last rx_cfn, if the result is different, trace the it.
 *
 *
 * 08 02 2013 ast00029
 * [MOLY00032095][3G TDD][RxCFN] Activation time and RRC message RX CFN record
 * Record this situation: Calculate active_sfn with current_cfn and last rx_cfn, if the result is different, trace the it.
 *
 * 07 23 2013 shouzhu.zhang
 * [MOLY00023935] [MT6290E1][W/G][Target IT] Meas result is received so frequently when priority measurement and drx measurement are on-going
 * MEME control trigger short period measurement immediatly or not.
 *
 * 05 30 2013 ast00033
 * [MOLY00024285] [MT6572][CMCC Case  FT][LCA_GEMINI][Beijing][Regression-7th time][C6.3 卡槽1双PDP和卡槽2语音并发 ]8th_11:38:34_暂时无法接通_三元西桥
 * .
 *
 * 05 15 2013 xiaoyun.mao
 * [MOLY00007737] [WR8][UMAC]3G speech UL delay improve phase 2
 * .remove __PREPARE_TX_AHEAD__
 *
 * 04 17 2013 shouzhu.zhang
 * [MOLY00013948] [MT6290 PO admit] Check in AST3002 & protocol code for 6290 MULTI_MODE_TDS project
 * add auto gap interface.
 *
 * 04 01 2013 shouzhu.zhang
 * [MOLY00013249] MM TL1 Code check in
 * [TL1] Merge lastes WR8 + R9 + MM code to MOLY..
 *
 * 03 01 2013 shun.liu
 * [MOLY00011182] MT6572/6582: RF TX test feature check in MOLY main
 * EM tx test tl1 part.
 *
 * 12 07 2012 xiaoyun.mao
 * [MOLY00007252] [MOLY][UMAC]fixing build error
 * add parameter of ul_inform_MAC
 *
 * 11 02 2012 shouzhu.zhang
 * [MOLY00005657] Thermal function implementation
 * .
 * 
 * 10 12 2012 jingjing.ma
 * [MOLY00004752] add new variable
 * remove option for islongperiodin3gstandby.
 * 
 * 10 10 2012 shouzhu.zhang
 * 
 * [MOLY00004236] [interface][service][kal]remove stack_ltlcom.h
 * <saved by Perforce>
 * 
 * 09 26 2012 xiaoyun.mao
 * [MOLY00004157] [TDD_R9_DEV]change of interface with MEME
 * .
 * 
 * 09 24 2012 xiaoyun.mao
 * [MOLY00004069] [MOLY]TDD_R9_DEV Patch back to MOLY
 * TDD_R9_DEV patch back to MOLY
 * 
 * 09 12 2012 xiaoyun.mao
 * [MOLY00002766] rremove __UMAC_DCH_LISR__
 * 
 * 09 11 2012 xiaoyun.mao
 * [MOLY00002766] warning removal
 * .
 * remove __UMAC_DCH_LISR__
 * 
 * 09 11 2012 willie.pan
 * [MOLY00000302] [TST] MOLY Branch check-in
 * Rollback //MOLY/TRUNK/MOLY/mcu/interface/modem/tl1interface/tl1_struct.h to revision 2
 * 
 * 08 06 2012 riley.ou
 * [MOLY00001452] CTCH L2 schedule improvement
 * .
 *
 * 05 03 2012 wcpuser_integrator
 * removed!
 * .
 *
 * 05 03 2012 wcpuser_integrator
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
 * 02 28 2012 shuyang.yin
 * removed!
 * .
 *
 * 12 06 2011 shuyang.yin
 * removed!
 * .
 *
 * 11 14 2011 shi.dong
 * removed!
 * TL1 code interface fta merge in MAUI.
 *
 * 09 13 2011 shuyang.yin
 * removed!
 * .
 *
 * 09 07 2011 shuyang.yin
 * 
 * removed!
 * <saved by Perforce>
 *
 * 07 21 2011 qing.zhang
 * removed!
 * Update SAP according to UMAC requirement
 *
 * 06 13 2011 popcafa.shih
 * removed!
 * Help vendor_ast to merge PS_RESTRUCT_DEV
 *
 * 04 20 2011 xinqiu.wang
 * removed!
 * Modify some description.
 *
 * 04 19 2011 xinqiu.wang
 * removed!
 * merge code from daily LOAD to MAUI 10A.
 *
 * 04 19 2011 xinqiu.wang
 * removed!
 * Remove LOCAL_PARA_HDR define.
 *
 * 01 18 2011 xinqiu.wang
 * removed!
 * Add RHR feature to tl1 interface files.
 *
 * 12 28 2010 bo.lu
 * removed!
 * .
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
 * Add tx_enable in phy_simulate_dch_ul_cctrch_hisr_rsp_struct according to the discussion result with UMAC
 *
 * removed!
 * removed!
 * 1.Add tx_enable in ul_dpch_cctrch_task(), ul_dpch_cctrch_HISR(), phy_simulate_dch_ul_cctrch_task_struct and phy_simulate_dch_ul_cctrch_hisr_struct
 * 2.Add access_type in phy_access_ind_struct with HSUPA compile option
 *
 * removed!
 * removed!
 * Modify dpch_SIR_lta to dpdch_SIR_lta in L1_info_struct
 *
 * removed!
 * removed!
 * 1.In tl1_info, modify the struct name of tl1_speech_info_T to L1_info_struct to use the same interface to FDD according to l1audio team’s requirement.
 * 2.In L1_info_struct, modify the parameter name and type to use the same interface to FDD according to l1audio team’s requirement.
 *
 * removed!
 * removed!
 *         1.Add rssi and rscp in PHY_BCH_DATA_IND, and add comments of the parameters in PHY_BCH_DATA_IND
 *         2.Add PHY_END_EDCH_TX_IND 
 *         3.Modify comments of sfn in phy_dch_setup_ind_struct, phy_dch_release_ind_struct
 *         4.Modify the comments of TL1_GetCurrentTime. 
 *
 * removed!
 * removed!
 * 1.Add cphy_hsdsch_setup/modify/release_req and cphy_edch_setup/modify/release_req into local_para_unpack_T
 * 2.Add midamble_shift_detection_result, max_value_of_midamble_correlation_result and noise_of_midamble_correlation_result in tl1_speech_info_struct_T
 * 3.seperate rscp to dpch_rscp and pccpch_rscp in tl1_speech_info_struct_T
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 1.Add type definition of cphy_edch_setup/modify/release_req_struct.
 * 2.Delete meas_control and idx_intra_freq in cphy_msg_container_req_struct and cphy_msg_container_req_unpack_struct
 * 3.Add access_type in tdd_phy_rach_data_req_struct and tdd_phy_access_req_struct
 * 4.Add HSDPA and HSUPA related callback function declaration
 *
 * removed!
 * removed!
 * 1.Delete pre-declare check of __UMTS_TDD128_MODE__
 *
 * removed!
 * removed!
 * 1.add check of __UMTS_TDD128_MODE__
 * 2.delete the parameter of act_time in cphy_bch_setup/modify_req
 * 3.delete strcut of cphy_measurement_config_fmo_req_struct
 * 4.Use TL1 to replace UL1 and L1 in comments
 * 5.Modify comments of mac_event in cphy_hsdsch_setup/modify/release_req to sync with TL1 SAP doc
 * 6.add comments of cfn in phy_end_dch_tx_ind_struct
 * 7.Modify type of sub_cfn in phy_hsdsch_data_ind_struct from kal_uint8 to kal_uint16, and modify type of mac_hs_reset in phy_hsdsch_data_ind_struct from kal_uint8 to kal_bool
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
 * Add meas_id in cphy_measurement_internal_result_ind according to discussion conclusion with MEME module owner
 *
 * removed!
 * removed!
 * Modify type of event_id in CPHY_MEASUREMENT_INTERNAL_EVENT_IND from kal_uint8 to internal_meas_event_E
 *
 * removed!
 * removed!
 * 1 rename "dpdch_SIR_lta" in phy_data_ind_struct to "dpch_SIR_lta"
 *
 * removed!
 * removed!
 * 1. change the type of sib7_factor from "kal_int8" to "kal_uint8" to compiance with SLCE 
 * 2. add h_msg and e_msg for DPA and UPA
 * 3. change the type of off in cphy_sfn_ind_struct from kal_uint16 to kal_int16
 *
 * removed!
 * removed!
 * remove typo error "ul1_def"
 *
 * removed!
 * removed!
 * modify phy_data_ind_struct for UT test 
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


#ifndef _TL1_STRUCT_H
#define _TL1_STRUCT_H

#include "kal_public_api.h"
#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "tl1_def.h"
#ifdef __SGLTE__
#include "gas_b3_general_struct.h"  //mcu\interface\modem\general\gas_b3_general_struct.h
#endif
#include "global_type.h"   /* [UBin] For inclusion of erac_rat_enum */

#ifdef __ATERFTX_ERROR_HANDLE_ENHANCE__
#include "ps_public_enum.h"
#endif

/*****************************************************************************
Request from SLCE/MEME  to TL1 
*****************************************************************************/

/*bch*/
typedef struct _TDD_cphy_bch_setup_req_struct
{
    LOCAL_PARA_HDR
    kal_int16    rx_sfn;                                /*[Range]: (-1~4095). (0-4095) for frame number type, and "-1" for immediate type.
                                                          [Meaning]: This is the SFN to start to setup BCH channel, and receive SIB */  
    kal_int32    tm;                                    /*[Range]: -1 ~ (6400*8-1). -1 for unknown timing.
                                                          [Meaning]:Sub Frame boundary offset between target cell and LST
                                                           For a cell with unknown tm value, it can not be issued to TL1. */                                                                                               
    kal_int16    off;                                   /*[Range]: -1~8191, (0-8191) for a cell whose Sub SFN offset to LST has been measured by TL1. -1 means off unknown.
                                                          [Meaning]: Sub frame number offset between target cell and LST.
                                                           For a cell with unknown off value, it can not be issued to TL1. */
    kal_bool     sfn_only;                              /*True/False. True: The BCH setup request is only for the SFN reading, 
                                                          and TL1 will only send CPHY_SFN_IND to RRC,                                                                                     
                                                           False: The BCH setup request is for the BCH data reading.*/
    kal_uint16   uarfcn;                                /*uarfcn*/                                              
    kal_uint16   cell_param_id;                          /*[Range]: 0-127, TDD_CPID_INVALID
                                                           [Meaning]:Cell parameter ID*/ 
    kal_bool     sctd;                                   /*True: sctd is applied on this cell's P-CCPCH. 
                                                          False: sctd is not applied on this cell's P-CCPCH.*/
    kal_bool     tstd;                                   /*True: tstd is applied on this cell's P-CCPCH. 
                                                           False: tstd is not applied on this cell's P-CCPCH.*/                                                            
    kal_int8     sib7_index;                              /*[Range]: -1 ~ (sibnum-1) 
                                                            [Meaning]: Indicate which SIB Info in sib_list[] is SIB7,-1 means there is no SIB7 in the list*/
    kal_uint16    sib7_rep_cycle;                          /* 2~256 .The meaning of sib7_rp_cycle becomes "SIB7 expiration timer/ SIB_REP" */
                                                                                                                                      
    TDD_bch_priority_T    bch_priority;                       /*Enum:TDD_BCH_PRIOHIGH,TDD_BCH_PRIOMEDIUM(not used in TDD18), TDD_BCH_PRIOLOW  */
    kal_uint8    sib_num;                                 /*[Range]: 0~ TDD_MAX_SIB_PATTERN.
                                                            [Meaning]: the number of sib in sib list.
                                                            0 means all SIBs reception.0 is not used in current implementation.*/ 
    TDD_sib_info_T   sib_list[TDD_MAX_SIB_PATTERN];    /*SIB information*/
#if defined( __GEMINI_GSM__ ) && defined ( __UMTS_RAT__ )
    kal_uint16                   priority_index;                     /*Priority_index for same priority channel in 3G Gemini project*/   
#endif
    kal_bool	 is_auto_gap_support;		   /*This BCH req is for report CGI*/

} tdd_cphy_bch_setup_req_struct;

typedef struct _TDD_cphy_bch_modify_req_struct
{
    LOCAL_PARA_HDR
    kal_int16    rx_sfn;                                  /*[Range]: (-1~4095). (0-4095) for frame number type, and "-1" for immediate type.
                                                            [Meaning]: This is the SFN to start to setup BCH channel, and receive SIB */ 
    kal_uint8    modify_flag;                           /*A flag to indicate the field to be modified.
                                                          0x01 "bch_priority" is changed
                                                           0x02: "sib_num", "sib_list", sib7_index, sib7_factor are changed.
                                                            0x03: both above item are changed*/
    kal_int8     sib7_index;                      /*[Range]: -1 ~ (sibnum-1) 
                                                     [Meaning]: Indicate which SIB Info in sib_list[] is SIB7,-1 means there is no SIB7 in the list*/
    kal_uint16    sib7_rep_cycle;                 /* 2~256 .The meaning of sib7_rp_cycle becomes "SIB7 expiration timer/ SIB_REP" */
                                                                                             
    TDD_bch_priority_T    bch_priority;               /*Enum:TDD_BCH_PRIOHIGH,TDD_BCH_PRIOMEDIUM(not used in TDD18), TDD_BCH_PRIOLOW  */ 
    kal_uint8    sib_num;                         /*[Range]: 0~ TDD_MAX_SIB_PATTERN.
                                                    [Meaning]: the number of sib in sib list.
                                                     0 means all SIBs reception.0 is not used in current implementation.*/     
    TDD_sib_info_T   sib_list[TDD_MAX_SIB_PATTERN]; /*SIB information*/
#if defined( __GEMINI_GSM__ ) && defined ( __UMTS_RAT__ )
    TDD_uas_gemini_conflict_cause_enum conflict_cause;   /*Channel conflict casue with peer channel*/
   kal_uint16                   priority_index;                     /*Priority_index for same priority channel in 3G Gemini project*/   
#endif
} tdd_cphy_bch_modify_req_struct;


typedef struct _TDD_cphy_bch_release_req_struct
{
    LOCAL_PARA_HDR
} tdd_cphy_bch_release_req_struct;
    

/*pch*/
typedef struct _TDD_cphy_pch_setup_req_struct
{
    LOCAL_PARA_HDR
    kal_int16    act_time;              /* activation time. -1 ~ 255. -1 means immediate */
    kal_uint16   uarfcn;                                /*uarfcn*/      
    kal_int32    tm;                                    /*[Range]: -1 ~ (6400*8-1). -1 for unknown timing.
                                                          [Meaning]:Sub Frame boundary offset between target cell and LST
                                                          For a cell with unknown tm value, it can not be issued to TL1. */
    kal_int16        off;                               /*[Range]: -1~8191, (0-8191) for a cell whose Sub SFN offset to LST has been measured by TL1. -1 means off unknown.
                                                          [Meaning]: Sub frame number offset between target cell and LST.
                                                          For a cell with unknown off value, it can not be issued to TL1. */
    TDD_fach_pch_info_T    fach_pch_info;   /*FACH/PCH channel information*/
} tdd_cphy_pch_setup_req_struct;

typedef struct _TDD_cphy_pch_modify_req_struct
{
    LOCAL_PARA_HDR
    kal_int16    act_time;              /* activation time. -1 ~ 255. -1 means immediate */
    TDD_pich_drx_T   pich_drx;              /*new drx info of PCH/PICH*/

	TDD_pich_reconfig_type_E          reconfig_type;
	TDD_pich_smartpaging_T            smartpaging_info;
} tdd_cphy_pch_modify_req_struct;

typedef struct _TDD_cphy_pch_release_req_struct
{
    LOCAL_PARA_HDR
    kal_int16    act_time;              /* activation time. -1 ~ 255. -1 means immediate */
} tdd_cphy_pch_release_req_struct;


/*fach*/
typedef struct _TDD_cphy_fach_setup_req_struct
{
    LOCAL_PARA_HDR            
    kal_int16    act_time;              /* activation time. -1 ~ 255. -1 means immediate */
    kal_uint16   uarfcn;                               /*uarfcn*/      
    kal_int32    tm;                                    /*[Range]: -1 ~ (6400*8-1). -1 for unknown timing.
                                                         [Meaning]:Sub Frame boundary offset between target cell and LST
                                                           For a cell with unknown tm value, it can not be issued to TL1. */
    kal_int16    off;                                   /*[Range]: -1~8191, (0-8191) for a cell whose Sub SFN offset to LST has been measured by TL1. -1 means off unknown.
                                                          [Meaning]: Sub frame number offset between target cell and LST.
                                                           For a cell with unknown off value, it can not be issued to TL1. */
    TDD_fach_pch_info_T    fach_pch_info;  /*FACH/PCH channel information*/
} tdd_cphy_fach_setup_req_struct;

typedef struct _TDD_cphy_fach_release_req_struct
{
    LOCAL_PARA_HDR
    kal_int16    act_time;              /* activation time. -1 ~ 255. -1 means immediate */
} tdd_cphy_fach_release_req_struct;


/*rach*/
typedef struct _TDD_cphy_rach_setup_req_struct
{
    LOCAL_PARA_HDR
    kal_int16    act_time;              /* activation time. -1 ~ 255. -1 means immediate */
    TDD_random_access_info_T  prach_info;            /*prach related info for this UE*/
    TDD_ul_rach_trch_T      trch_list[1];   /*SLCE will select one rach trch for TL1*/
} tdd_cphy_rach_setup_req_struct;

typedef struct _TDD_cphy_rach_release_req_struct
{
    LOCAL_PARA_HDR
    kal_int16    act_time;              /* activation time. -1 ~ 255. -1 means immediate */
} tdd_cphy_rach_release_req_struct;


/*dch*/
typedef  struct _TDD_cphy_dch_setup_req_struct
{
    LOCAL_PARA_HDR
    kal_int16    act_time;                      /*(-1~255). (0~255) for CFN type, "-1" for immediate type.*/
    TDD_dch_setup_msg_type_E    setup_type;         /*DCH setup type,setup,HHO,baton HO,revert,etc.*/

    kal_bool    is_ul_dch_setup;     /*Indicate whether UL dch will be set up. */
    kal_bool is_dl_dch_setup;        /*Indicate whether DL dch will be set up. 
                                                Before R8， this field should always be set to KAL_TRUE*/
    kal_int16    rscp;                          /* -500 ~ -100 means (-125 ~ -25 )dBm in 0.25 dB step,serving cell rscp*/
    kal_uint8    tid;                           /*Transaction id*/
    kal_uint8    dl_crc_ind;                    /* For those TrCHs whose CRC data should be sent to MAC, 
                                                                                    their corresponding bit will be set to 1.
                                                                                    The MSB represents the lowest numbered TrCH ID.*/
    kal_uint16      prim_uarfcn;                /*Primary uarfcn of the cell*/
    kal_uint16      work_uarfcn;                /*Working uarfcn of the  UE  */
    kal_uint16      ul_tfc_num;                 /*Number of TFC for UL DPCH*/
    TDD_ul_dpch_tfc_T   ul_tfcs[TDD_MAX_UL_TFC];        /*ul TFCS*/
    kal_uint8       ul_trch_num;                /*Number of UL TrCH*/
    TDD_ul_dch_trch_T   ul_trch_list[TDD_MAX_UL_TRCH];  /*UL TrCH Info*/
    TDD_ul_dpch_info_T  ul_dpch_info;               /*UL DPCH info*/
    kal_uint16      dl_tfc_num;                 /*Number of DL TFCS*/
    TDD_dl_tfc_T        dl_tfcs[TDD_MAX_DL_TFC];        /*DL TFCS*/
    kal_uint8       dl_trch_num;                /*Number of DL TrCH*/
    TDD_dl_dch_trch_T   dl_trch_list[TDD_MAX_DL_TRCH];  /*DL Trch Info*/
    kal_int8        max_tx_power;               /*50 ~ 33 dBm,Max. allowed TX power. */
    kal_int8        umts_power_class;           /*UE capability(in dBm)*/   
    TDD_dl_dpch_rla_T   dl_dpch_rla;                /*DL Info & DL DPCH Info common for all RLs*/
    TDD_dl_dpch_rl_T    dl_dpch_rl[TDD_MAX_RL];         /*DL Info & DL DPCH Info. for each RL*/    
    TDD_dl_establish_T  dl_establish_info;          /*DL DPCH establishment criterion*/  
    kal_uint8       sbgp;                       /*Value represents number of radio frames
                                                                                       0 = 2 frames, 1 = 4 frames,
                                                                                       2 = 8 frames, 3 = 16 frames,
                                                                                       4 = 32 frames, 5 = 64 frames,
                                                                                       6 = 128 frames, 7 =256 frames.*/
     TDD_random_access_info_T   ul_sync;                    /*UL  sync parameter for enter DCH to another cell, handover or handover revert.*/      
    kal_uint8       ul_mac_event;                       /* Indicate if UMAC need setup/modify/release event 
                                                           Bit 0 : Setup; Bit 1 : Release ; Bit 2 : Modify
                                                           And in this primitive, only Bit 0 can be set to 1*/
}tdd_cphy_dch_setup_req_struct;

typedef struct _TDD_cphy_dch_modify_req_struct
{
    LOCAL_PARA_HDR            
    kal_int16    act_time;                     /*(-1~255). (0~255) for CFN type, "-1" for immediate type.*/
    kal_uint16   work_uarfcn;                  /*Working uarfcn of the cell  */             
    TDD_dch_modify_msg_type_E    modify_type;      /*Enums:TDD_DCH_RECONFIG,TDD_DCH_LOOP_MODE_2*/
    kal_uint8    tid;                          /*Transaction id*/                  
   TDD_ul_dpch_reconfig_type_E ul_dpch_reconfig_type   ;/*   0: Do nothing with ul dpch.
                                                1: Setup ul dpch.
                                                2: modify ul dpch
                                                3.Release ul dpch*/   
//#ifdef __TDD128_HSPA_PLUS__
	TDD_dl_dpch_reconfig_type_E dl_dpch_reconfig_type	;/*   0: Do nothing with dl dpch.
											 1: Setup dl dpch.
											 2: modify dl dpch
											 3.Release dl dpch*/ 
//#endif
    kal_bool     ul_mod_ind;                   /*Indicate whether UL modify indication should be sent to MAC*/
    kal_bool     dl_mod_ind;                   /*Indicate whether DL modify indication should be sent to MAC*/
    kal_uint8    dl_crc_ind;                    /*For those TrCHs whose CRC data should be sent to MAC.
                                                                      their corresponding bit will be set to 1. 
                                                                                       The MSB represents the lowest numbered TrCH ID.*/
    kal_uint16    modify_field;                /*Bit field to represent for the parameters that should be modified 
                                                                Bit0: DL TrCH parameter
                                                                Bit1: DL TFCS parameter 
                                                                Bit2: UL TrCH parameter
                                                                Bit3: UL TFCS parameter
                                                                Bit4: downlink common RL parameters
                                                                Bit5: downlink each RL parameters. 
                                                                Bit 6 : UL RL parameter 
                                                                Bit 7 : Physical parameters such as working_uarfcn 
                                                                Bit8: dl_establish_info
                                                                Bit9: SBGP
                                                                Bit10: uplink power control related parameters, such as max _tx_power,  umts_power_class. */
    kal_uint16   ul_tfc_num;                   /*Number of TFC for UL DPCH*/    
    TDD_ul_dpch_tfc_T    ul_tfcs[TDD_MAX_UL_TFC];      /*ul TFCS*/
    kal_uint8    ul_trch_num;                  /*Number of UL TrCH*/
    TDD_ul_dch_trch_T    ul_trch_list[TDD_MAX_UL_TRCH];/*UL TrCH Info*/
    kal_uint16    dl_tfc_num;                   /*Number of DL TFCS*/
    TDD_dl_tfc_T     dl_tfcs[TDD_MAX_DL_TFC];          /*DL TFCS*/
    kal_uint8    dl_trch_num;                  /*Number of DL TrCH*/
    TDD_dl_dch_trch_T    dl_trch_list[TDD_MAX_DL_TRCH];/*DL Trch Info*/
    TDD_dl_dpch_rla_T    dl_dpch_rla;              /*DL Info & DL DPCH Info common for all RLs*/              
    TDD_ul_dpch_info_T    ul_dpch_info;            /*UL DPCH info*/        
    kal_int8     max_tx_power;                 /*50 ~ 33 dBm,Max. allowed TX power. */                
    kal_int8     umts_power_class;             /*UE capability(in dBm)*/ 
    TDD_dl_dpch_rl_T    dl_dpch_rl[TDD_MAX_RL];        /*DL Info & DL DPCH Info. for each RL*/
    TDD_dl_establish_T  dl_establish_info;         /*DL DPCH establishment criterion*/
    kal_uint8         sbgp;                    /*Value represents number of radio frames
                                                                                       0 = 2 frames, 1 = 4 frames,
                                                                                       2 = 8 frames, 3 = 16 frames,
                                                                                       4 = 32 frames, 5 = 64 frames,
                                                                                       6 = 128 frames, 7 =256 frames.*/
    kal_uint8       ul_mac_event;                       /* Indicate if UMAC need setup/modify/release event
                                                            Bit 0 : Setup; Bit 1 : Release ; Bit 2 : Modify
                                                            And in this primitive, only Bit 2 can be set to 1*/
}tdd_cphy_dch_modify_req_struct;

typedef struct _TDD_cphy_dch_release_req_struct
{
    LOCAL_PARA_HDR            
    kal_int16    act_time;                    /*(-1~255). (0~255) for CFN type, "-1" for immediate type.*/
    kal_bool    isStopLoopTestM2First;        /*TRUE: Stop Loop Mode 2 before releasing DCH.*/
    kal_uint8   ul_mac_event;                       /* Indicate if UMAC need setup/modify/release event    
                                                       Bit 0 : Setup; Bit 1 : Release ; Bit 2 : Modify
                                                       And in this primitive, only Bit 1 can be set to 1*/
} tdd_cphy_dch_release_req_struct;


/*fs*/
typedef struct _TDD_cphy_frequency_scan_req_struct
{
    LOCAL_PARA_HDR
    kal_uint8     max_num_cell;                    /*Maximum number of cells reported in 1 frequency during scan. 
                                             MIN(max_num_cell, num_found_cell) cells to MEME
                                             it shall halt the frequency scan procedure.*/   
    kal_uint16    timeout;                         /*Maximum time spent to do cell search on 1 frequency. 
                                             If TL1 has spent so much time to do cell search on 1 frequency,
                                             it will send an indication to MEME and halt the frequency scan procedure.
                                             [Unit]: ms.*/  
    kal_uint8     num_freq_range;                  /*Number of range list*/ 
    kal_uint16    uarfcn_begin[TDD_MAX_FREQ_RANGE];       /*Begin of UARFCN for range cell search*/    
    kal_uint16    uarfcn_end[TDD_MAX_FREQ_RANGE];         /*End of UARFCN for range cell search */ 
    kal_uint8     num_freq_list;                   /*Number of freq for preferred freq list */
    kal_uint16    uarfcn_list[TDD_MAX_FREQ_LIST];         /*List of UARFCN */ 
    kal_uint8     num_preferred_cell;              /*Number of preferred cells. */
    TDD_preferred_cell_list_T    preferred_cell_list[TDD_MAX_PREFERRED_CELL];    /*Preferred cell list. */
    kal_bool    full_band_search;                  /*True/False. True: Perform full band scan. */
    kal_bool    freq_correct;                      /*True/False. True: TL1 need to do frequency correction. */
    kal_bool    resume;                            /*True/False. True:TL1 should resume previous freq scan,
                                               TL1 didn't care the other fields in this msg,
                                               False: TL1 should start a new freq scan according to this msg */
   TDD_full_band_option_E    full_band_option;         /*- TDD_FULL_BAND_ONLY: Normal full band FS
                                                - TDD_FULL_BAND_AND_EXCLUDE: Full band FS but the indicated frequency list/range will be excluded */
   #if defined( __GEMINI_GSM__ ) && defined ( __UMTS_RAT__ )    
   kal_uint16                    priority_index;   
   #endif
   #ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
   kal_uint8                     priority_level;    /*[Range: 0-2] Indicate which gap pattern shoud be used for this freq scan in Virtual mode*/
                                                    /*0=highest priority; 1=2nd priority; 2=lowest priority*/
   #endif
   kal_bool     is_auto_gap_support;          /*This FS req is for report CGI*/
#if defined(__LTE_RAT__) && defined (__UMTS_TDD128_MODE__) && !defined (__SGLTE__)
   kal_bool                            trigger_by_4g_plmn_loss;
#endif
/*Yajiang 20150114 :add for TL1 to differ manual plmn search or autonmous*/
   kal_bool    is_plmn_list;
} tdd_cphy_frequency_scan_req_struct;

typedef struct _TDD_cphy_frequency_scan_suspend_req_struct
{
    LOCAL_PARA_HDR 
} tdd_cphy_frequency_scan_suspend_req_struct;


typedef struct _TDD_cphy_frequency_scan_continue_req_struct
{
   LOCAL_PARA_HDR
   kal_bool              continue_cell;                             /*True if MEME want TL1 to do continue cell search on current frequency
                                                                        instead of jumping to next specified frequency. */
} tdd_cphy_frequency_scan_continue_req_struct;


/*meas*/
typedef struct _TDD_cphy_measurement_config_cell_req_struct
{
    LOCAL_PARA_HDR 
    kal_uint8    tid;                                               /*Transaction ID to sync between request and indication*/
    TDD_meas_act_E   action;                                            /*[Range]: TDD_STOP_MEAS,
                                                                                                                          TDD_START_MEAS_NEW_CIL,
                                                                                                                          TDD_START_MEAS_NEW_CIL_NEW_FMO*/    
    kal_bool     ds_meas;                                           /*True: Indicate that TL1 shall make detected cell measure.*/
    kal_uint16   intra_uarfcn;                                      /*Intra-frequency uarfcn, TL1 has knowledge about intra_uarfcn,
                                                                                                                          just double check the value. MEME shall send the primitive after 
                                                                                                                          channel enters stable state to guarantee the value is the same 
                                                                                                                          with TL1. But it is possible different with TL1 when channel transition.*/
    kal_uint8    num_cell;                                          /*[Range]:0-64,[Meaning]: Number of cells in the following 
                                                                                                                          cell_info_list[]. Must be greater than 0 if bit1 of 'action' is set.*/
    TDD_cell_info_list_T    cell_info_list[TDD_MAX_NUM_MEASURED_CELL];      /*List of all monitor cells to be measured indicated by network. It 
                                                                                                                          is ascending sort by cell's uarfcn and cell_param_id. Cells on the 
                                                                                                                          same frequency will be collected together. The cells on different 
                                                                                                                          frequencies will not be interleaved.*/
    TDD_fach_mo_info_T      fach_mo_info;                               /*The structure is used to express the FACH measurement occasion 
                                                                                                                          parameters. It is valid when bit2 of 'action' is set*/
    kal_bool     intra_rscp_meas_period_valid;                      /*Configure Intra-freq. RSCP meas. period in DCH/FACH.*/
    kal_uint8    intra_rscp_period_N;                               /*Num. of 50/40 ms.*/
    kal_bool     inter_rscp_meas_period_valid;                      /*Configure Inter-freq. RSCP meas. period in DCH/FACH*/                 
    kal_uint8    inter_rscp_period_N;                               /*Num. of 50/40 ms.*/
    kal_bool     intra_iscp_meas_period_valid;                      /*Configure Intra-freq. ISCP meas. period in DCH/FACH.*/
    kal_uint8    intra_iscp_period_N;                               /*Num. of 50/40 ms.*/
//#ifdef __UMTS_R9__
    kal_int16	 T_higher_prio_search;                                /*Higher priority search period (s) when use priority based cell reselection, -1 means use regular period.*/
	kal_bool	 is_meas_period_reset_standby;
	kal_bool	 prohibit_apply_n_layer_standby; 						     /* [R8][MM] Due to 4G OOS, MEME notifies TL1 not to apply n_layer factor to accelerate meas frequency */

//#endif
} tdd_cphy_measurement_config_cell_req_struct;


#ifdef __TAS_SUPPORT__
typedef struct _TDD_cphy_tas_custom_config_param_T
{
    kal_uint16 tas_ver;
    kal_uint16 tas_state_number;    
    kal_uint16 is_test_sim; 
	kal_uint16 tas_enable_flag; //1/0: enable/disable TAS
    
    kal_uint16 tas_ics_init_state;          //reserve for future or align 32bit
    kal_uint16 tas_force_ant_enable;
    kal_uint16 tas_force_ant_state;
    kal_uint16 tas_force_tx_band_state;
    kal_uint16 tas_real_sim_enable; //1/0: enable/disable realSIM 

    kal_uint16 tas_test_sim_enable; //1/0: enable/disable testSIM 
    kal_uint16 tds_with_b34_real_sim_tas_status;  //1/0: enable/disable realSIM 
    kal_uint16 tds_with_b34_real_sim_init_state;    //ant state realSIM 
    kal_uint16 tds_with_b39_real_sim_tas_status;  //1/0: enable/disable realSIM 

    kal_uint16 tds_with_b39_real_sim_init_state;    //ant state realSIM 
    kal_uint16 tds_with_b34_test_sim_tas_status;  //1/0: enable/disable testSIM 
    kal_uint16 tds_with_b34_test_sim_init_state;    //ant state  testSIM 
    kal_uint16 tds_with_b39_test_sim_tas_status;  //1/0: enable/disable testSIM 

    kal_uint16 tds_with_b39_test_sim_init_state;    //ant state  testSIM 
    kal_uint16 reserve;    
}tdd_cphy_tas_custom_config_param_T;

typedef struct _TDD_cphy_tas_algorithm_param_T
{
	//TAS period
	kal_int16 period_N;//TAS period in connected mode,DCH n*200ms,default=1;
	kal_int16 drx_period_N;//TAS period in DRX: drx_period_n * drx; 

	//TAS antenna offset
	kal_int16 diff_ant_oft0;
	kal_int16 diff_ant_oft1;
	kal_int16 diff_ant_oft2;
	kal_int16 diff_ant_oft3;
	
	kal_int16 diff_htp;
	kal_int16 htp_oft;
	kal_int16 max_htp_tx_pwr;
	kal_int16 threshold_htp;

	kal_int16 diff_drx_ant_oft0;
	kal_int16 diff_drx_ant_oft1;
	kal_int16 diff_drx_ant_oft2;
	kal_int16 diff_drx_ant_oft3;

	//TAS threshold
	kal_int16 threshold_diff_rscp;
	kal_int16 threshold_diff_snr;
	kal_int16 snr_good;
	
	kal_int16 threshold_drx_diff_rscp;
	kal_int16 threshold_drx_diff_snr;
	kal_int16 drx_snr_good;
	
	kal_int16 threshold_drx_rscp_low;
	kal_int16 threshold_drx_snr_low;
	
	//TAS fall back algorithm
	kal_int16 diff_fall_back;
	kal_int16 diff_drx_fall_back;
	
    kal_int16 diff_htp_backup_n;
    kal_int16 htp_oft_backup_n;
    kal_int16 threshold_diff_rscp_backup_n;   
    kal_int16 tds_tp_oft_backup_n;	

    //TAS SAR new fall back algorithm param
    kal_int16 tds_sar_ant_oft0;
    kal_int16 tds_sar_ant_oft1;
    kal_int16 tds_sar_ant_oft2;
    kal_int16 tds_sar_ant_oft3;	
	
	kal_int16 tds_sar_diff_htp;
	kal_int16 tds_sar_htp_oft;
	
	kal_int16 tds_sar_threshold_diff_rscp;
	kal_int16 tds_sar_tp_oft;

	kal_int16 tds_sar_reserve1;
	kal_int16 tds_sar_reserve2;	
}tdd_cphy_tas_algorithm_param_T;
#endif

/*specific cell search*/
typedef struct _TDD_cphy_specific_cell_search_req_struct                  /*RRCE->TL1*/
{
    LOCAL_PARA_HDR
    kal_uint16  uarfcn;                                             /*uarfcn*/
    kal_uint16  cell_param_id;                                      /*[Range]: 0-127 [Meaning]:Cell parameter ID*/
    kal_bool    sctd;                                               /*True/False. True: sctd is applied on this cell's P-CCPCH.  
                                                                                                                          False: sctd is not applied on this cell's P-CCPCH.*/
    kal_bool    tstd;                                               /*True/False. True: tstd is applied on this cell's P-CCPCH.  
                                                                                                                          False: tstd is not applied on this cell's P-CCPCH.*/
} tdd_cphy_specific_cell_search_req_struct;

typedef struct _TDD_cphy_specific_cell_search_stop_req_struct
{
    LOCAL_PARA_HDR 
} tdd_cphy_specific_cell_search_stop_req_struct;

/*reset and set rat*/
typedef struct _TDD_cphy_reset_req_struct
{
    LOCAL_PARA_HDR 
} tdd_cphy_reset_req_struct;

typedef struct _TDD_cphy_rf_on_req_struct
{
    LOCAL_PARA_HDR 
    kal_uint8    working_UMTS_band[2]; 
} tdd_cphy_rf_on_req_struct;

typedef struct _TDD_cphy_rf_off_req_struct
{
    LOCAL_PARA_HDR  
} tdd_cphy_rf_off_req_struct;

typedef struct _TDD_cphy_set_active_rat_req_struct
{
    LOCAL_PARA_HDR
    TDD_mode_type_E mode;                               /* Curernt mode setting (Single, Dual) */
    TDD_rat_type_E  rat;                                /* Current active RAT setting (Flight, UMTS, GSM) */
    erac_rat_enum   full_rat_info;                      /* Full RAT info */
} tdd_cphy_set_active_rat_req_struct;

/*internal meas*/
typedef struct _TDD_cphy_measurement_internal_config_req_struct  /*MEME->TL1*/
{
    LOCAL_PARA_HDR      
    kal_uint8    meas_id;                                           /*[Range] 0-16,  0 is INVALID_MEAS_ID and is forbidden use here.
                                                                                                                          [Meaning] <TS25.331:10.3.7.48>, it is 'Measurement Identity' 
                                                                                                                          in the 'MEASUREMENT CONTROL', follow fields are all derived from the message.*/
    TDD_internal_meas_E meas_quantity;                                  /*[Range] TDD_MEAS_TX_PWR, TDD_MEAS_RSSI, TDD_MEAS_TA 
                                                                                                                          [Meaning] Indicates internal measurement type in the primitive.*/
    kal_bool     periodic_ind;                                      /*[Range]True/False.  
                                                                                                                          [Meaning] Indicates whether TL1 report result of 'meas_type' periodically. 
                                                                                                                          When 'meas_type' is TDD_MEAS_RSSI, always set with 'False'.*/
    kal_uint8    report_num;                                        /*[Range]: 0 ~ 64. Number of periodic reports to be reported. TL1 will ignore 
                                                                                                                          this value if periodic_ind=False. If the value is 0, it means infinity.*/
    kal_uint16   period;                                            /*[Range]: 250 ~ 6400 frames. The reporting interval of periodic measurement.
                                                                                                                          TL1 will ignore this value if periodic_ind=False.*/
    kal_uint8    event_num;                                         /*Number of events in the below event[] list.*/
    TDD_meas_event_T event[TDD_MAX_MEAS_EVENT];                             /*The list of event.*/
    kal_uint8    filter;                                            /*[Range] 0-14.(fc0,fc1,fc2,fc3,fc4,fc5,fc6,fc7,fc8,fc9,fc11,fc13,fc15,fc17,fc19),
                                                                                                                          L3 filtering, apply for UTRA carrier RSSI and UE transmitted power.*/
}tdd_cphy_measurement_internal_config_req_struct;


typedef struct _TDD_cphy_measurement_internal_result_req_struct
{
    LOCAL_PARA_HDR
    kal_uint8 meas_id;                                              /*[Range] 0-16,  0 is INVALID_MEAS_ID 
                                                                                                                          [Meaning] Measurement Identity<TS25.331:10.3.7.48>; Indicate  
                                                                                                                          TL1 return Tx-Pwr results with filter coefficient in 'MEASUREMENT  
                                                                                                                          CONTROL' indicated by meas_id. If meas_id is 0, it means TL1  
                                                                                                                          return Tx-Pwr value without filter.*/   
}tdd_cphy_measurement_internal_result_req_struct;


typedef struct _TDD_cphy_measurement_internal_stop_req_struct
{
    LOCAL_PARA_HDR
    kal_uint8 num_meas_id;                                          /*[Range] 1-TDD_MAX_NUM_MEAS_ID 
                                                                                                                          [Meaning] The number of valid 'meas_id' in 'meas_id[]'.*/
    kal_uint8 meas_id[TDD_MAX_NUM_MEAS_ID];                             /*[Range] 1-16 [Meaning] <TS25.331:10.3.7.48>, it is 'Measurement 
                                                                                                                          Identity' in the 'MEASUREMENT CONTROL', TL1 shall stop internal 
                                                                                                                          measurement configured by these message.*/   
}tdd_cphy_measurement_internal_stop_req_struct;



/*sniffer  */
typedef struct _TDD_cphy_rssi_sniffer_start_req_struct
{
    LOCAL_PARA_HDR
    kal_uint8   num_freq_list;                                   /* Num of of freq for scan list of RSSI sniffer */
    kal_uint16  uarfcn_list[TDD_MAX_RSSI_SNIFFER_SCAN_LIST];         /* Array of UARFCNs for RSSI sniffer*/
} tdd_cphy_rssi_sniffer_start_req_struct;

typedef struct _TDD_cphy_rssi_sniffer_stop_req_struct
{
    LOCAL_PARA_HDR
} tdd_cphy_rssi_sniffer_stop_req_struct;


/*HSPDA*/
typedef struct _TDD_cphy_hsdsch_setup_req_struct
{
    
    LOCAL_PARA_HDR
    kal_int16               act_time;                               /*[meaning]: The activation time for this message. 
                                                                     TL1 will schedule the activation time to the TTI boundary. 
                                                                                         [Range]: (-1~255). (0-255) for CFN type, "-1" for immediate type.*/
//#ifdef __TDD128_HSPA_PLUS__
    kal_bool                h_rnti_valid;                           /*if H_RNTI valid*/
//#endif    
    kal_uint16              h_rnti;                                 /*H-RNTI assigned to UE*/
//#ifdef __TDD128_HSPA_PLUS__
    kal_uint16              prim_uarfcn;                           /*if H_RNTI valid*/
//#endif
    kal_uint16              work_uarfcn;                    /*Working uarfcn of the  UE  */                                                                                                                
    kal_uint16              cell_param_id;                 /*0-127,Cell parameter ID*/     
    TDD_hsscch_info_T           hsscch_info;                            /*HS-SCCH Information*/     
    TDD_midamble_info_T         hspdsch_midamble_info;                  /*HS-PDSCH Midamble Configuration*/     
    TDD_hs_harq_info_T          harq_info;                              /*Harq process & IR buffer information*/        
    kal_bool                mac_hs_reset;                           /*TRUE indicates the MAC-hs entity needs to be reset*/
    kal_uint8               mac_event;                              /*Indicate whether HS-DSCH events indication should be sent to MAC:
                                                                                                               Bit 0 : Setup; Bit 1 : Release ; Bit 2 : Modify
                                                                                                               And in this primitive, only Bit 0 can be set to 1*/
    TDD_hs_queue_info_T         queue_info;                             /*MAC-hs Queue Information*/    
   kal_uint8            pccpch_tx_power;                 /*[Range]: 6 ~ 43 by step 1 in dBm
                                                            [Meaning]:P-CCPCH transmit power*/  
   kal_int8          max_tx_power;                       /*[Range]: -50 ~ 33 dBm
                                                           [Meaning]: Max. allowed TX power.*/
   kal_int8          umts_power_class;                  /*UE capability(in dBm)
                                                           The value's unit  configured by SLCE is dBm. 
                                                           define MAX_OUTPUT_POWER_CLASS_1 33  :+33dBm 
                                                           define MAX_OUTPUT_POWER_CLASS_2 24 :  +24dBm 
                                                           define MAX_OUTPUT_POWER_CLASS_3 21 : +21dBm 
                                                           define MAX_OUTPUT_POWER_CLASS_4 27 : +27dBm */
//#ifdef __TDD128_HSPA_PLUS__
    kal_int16                           rscp;                           /* -500 ~ -100 means (-125 ~ -25 )dBm in 0.25 dB step,serving cell rscp*/
    kal_uint8                           capability_category;            /*[Meaning]: indicate TL1 to usewhich category (1,9,24)*/
	kal_uint8							tid;	/*Transation ID, used for reporting DL INIT SYNC*/
	TDD_rrc_state_E 	                     rrc_status;			/* Indicate the RRC current status */
    TDD_hspdsch_state_info_T               hspdsch_state_info;      
    kal_int32                           Tm;
	kal_int16                           Off;
	kal_uint8                           doff;
    TDD_dl_establish_T                     dl_sync_info;                   /*Downlink establishment criterion*/
    kal_bool                            c_h_rnti_valid;                 /*Indicate if common H-RNTI is valid for UL1. This field shall be set to FALSE when rrc_status is equal to CELL_DCH.*/
    kal_uint16                          c_h_rnti;                       /*Common H-RNTI assigned to UE, Never use in CELL_PCH/URA_PCH*/
    kal_bool                            b_h_rnti_valid;                     /* [R7] Indicate if bcch-specific H-RNTI is valid for UL1 */
    kal_uint16                          b_h_rnti;                           /* [R7] bcch-specific H-RNTI assigned to UE. UL1 should not refer to this field if b_h_rnti_valid = KAL_FALSE. */
//#endif
} tdd_cphy_hsdsch_setup_req_struct;

typedef struct _TDD_cphy_hsdsch_modify_req_struct
{
    LOCAL_PARA_HDR      
    kal_int16               act_time;                               /*[meaning]: The activation time for this message. TL1 will schedule 
                                                                                                                the activation time to the TTI boundary. [Range]: (-1~255). 
                                                                                                                (0-255) for CFN type, "-1" for immediate type.*/
//#ifndef __TDD128_HSPA_PLUS__
    /*kal_uint8               modify_field;*/                          
//#else  /*R8*/
    kal_uint16              modify_field;                       /*Bit field to represent for the parameters that should be modified
                                                                                          Bit 0 : H-RNTI, including D/B-HRNTI type; 
                                                                                          Bit 1 : HS-SCCH Info;
                                                                                          Bit 2 : HSPDSCH_midamble_info                                           
                                                                                          Bit 3 : HARQ Info; 
                                                                                          Bit 4 : Queue Info. 
                                                                                          Bit 5 : Uplink power control related parameters,such as
                                                                                                     "pccpch_tx_power", "max_tx_power" and "umts_power_class"  
                                                                                          Bit 6 : work_uarfcn
                                                                                          Bit 7 : capability_category
                                                                                          Bit 8 : hspdsch_state_info
                                                                                          Bit 9 : hs_cell_fach_drx_info
                                                                                          Bit 10: Tm,   NO USE now
                                                                                          Bit 11: Off,   NO USE now
                                                                                          Bit 12: doff,  NO USE now
                                                                                          Bit 13: dl_sync_info
                                                                                          Bit 14: cHrnti
                                                                                          Note: modify_field can be "0" only when mac_hs_reset = true. */  
                                                                                                                                                      
//#endif                                                        
    kal_uint16              h_rnti;                                 /*H-RNTI assigned to UE*/
    kal_uint16              work_uarfcn;                /*Working uarfcn of the  UE  */   
    TDD_hsscch_info_T           hsscch_info;                            /*HS-SCCH Information*/      
    TDD_midamble_info_T         hspdsch_midamble_info;                  /*HS-PDSCH Midamble Configuration*/     
    TDD_hs_harq_info_T          harq_info;                              /*Harq process & IR buffer information*/     
    kal_bool                mac_hs_reset;                           /*TRUE indicates the MAC-hs entity needs to be reset*/
    kal_uint8               mac_event;                              /*Indicate whether HS-DSCH events indication should be sent to MAC:
                                                                     Bit 0 : Setup; Bit 1 : Release ; Bit 2 : Modify
                                                                     And in this primitive, only Bit 2 can be set to 1*/
    TDD_hs_queue_info_T         queue_info;                             /*MAC-hs Queue Information*/
   kal_uint8            pccpch_tx_power;                  /*[Range]: 6 ~ 43 by step 1 in dBm
                                                            [Meaning]:P-CCPCH transmit power*/  
   kal_int8          max_tx_power;                        /*Range]: -50 ~ 33 dBm
                                                           [Meaning]: Max. allowed TX power.*/
   kal_int8          umts_power_class;                  /*UE capability(in dBm)
                                                           The value's unit  configured by SLCE is dBm. 
                                                           define MAX_OUTPUT_POWER_CLASS_1 33  :+33dBm 
                                                           define MAX_OUTPUT_POWER_CLASS_2 24 :  +24dBm 
                                                           define MAX_OUTPUT_POWER_CLASS_3 21 : +21dBm 
                                                           define MAX_OUTPUT_POWER_CLASS_4 27 :  +27dBm */ 
//#ifdef __TDD128_HSPA_PLUS__
    kal_uint8                           capability_category;            /*[Meaning]: indicate TL1 to usewhich category (1,9,24)*/
	kal_uint8							tid;	/*Transation ID, used for reporting DL INIT SYNC*/
    TDD_rrc_state_E 	                    rrc_status;              /*[R8] Specify that HS-DCH transmission type*/ 
    TDD_hspdsch_state_info_T                hspdsch_state_info;      
	kal_int32					Tm;
	kal_int16					Off;
	kal_uint8					doff;
	kal_int16					rscp;
    TDD_dl_establish_T                      dl_sync_info;                   /*Downlink establishment criterion*/
    kal_bool                            h_rnti_valid;                       /* Indicate if h_rnti field is valid for UL1. H-RNTI shall be always valid for CELL_DCH, CELL_FACH, TDD_IDLE_FACH, and shall be always invalid for URA_PCH. */
    kal_bool                            b_h_rnti_valid;                     /* [R7] Indicate if bcch-specific H-RNTI is valid for UL1 */
    kal_uint16                          b_h_rnti;                           /* [R7] bcch-specific H-RNTI assigned to UE. UL1 should not refer to this field if b_h_rnti_valid = KAL_FALSE. */
    kal_bool                            c_h_rnti_valid;                 /*Indicate if common H-RNTI is valid for UL1. This field shall be set to FALSE when rrc_status is equal to CELL_DCH.*/
    kal_uint16                          c_h_rnti;                       /*Common H-RNTI assigned to UE, Never use in CELL_PCH/URA_PCH*/
//#endif
} tdd_cphy_hsdsch_modify_req_struct;

typedef struct _TDD_cphy_hsdsch_release_req_struct
{
    LOCAL_PARA_HDR      
    kal_int16               act_time;                               /*[meaning]: The activation time for this message. TL1 will schedule the activation time to the
                                                                                                                TTI boundary. [Range]: (-1~255). (0-255) for CFN type, "-1" for immediate type.*/
    kal_bool                mac_hs_reset;                           /*TRUE indicates the MAC-hs entity needs to be reset*/
    kal_uint8               mac_event;                               /*Indicate whether HS-DSCH events indication should be sent to MAC:
                                                                      Bit 0 : Setup; Bit 1 : Release ; Bit 2 : Modify
                                                                      And in this primitive, only Bit 1 can be set to 1*/
} tdd_cphy_hsdsch_release_req_struct;

#ifdef __HSUPA_SUPPORT__ 
typedef struct _TDD_cphy_edch_setup_req_struct
{
    
    LOCAL_PARA_HDR
    kal_int16               act_time;                               /*[meaning]: The activation time for this message. L1 will schedule the activation time 
                                                                                                                to the TTI boundary. [Range]: (-1~255). (0-255) for CFN type, "-1" for immediate type.*/
//#ifdef __TDD128_HSPA_PLUS__ 
	kal_bool                e_rnti_valid;
//#endif
    kal_uint16              e_rnti;                                 /*E-RNTI assigned to UE.*/
//#ifdef __TDD128_HSPA_PLUS__
    kal_uint8            capability_category;                /*indicating which category [1,15] TL1 to use*/
//#else
   kal_bool             is_lowest_capability_category;      /*[Meaning]: indicate TL1 to use whether the lowest category or not.*/
//#endif
   kal_uint16              work_uarfcn;                /*Working uarfcn of the  UE  */                                                                                                              
       kal_uint16              cell_param_id;                 /*0-127,Cell parameter ID*/    
    kal_bool                edch_sched_info_valid;                  /*The following edch_sched_info valid or not.*/
    TDD_edch_sched_info_T       edch_sched_info;                        /*Scheduled Transmission Information.*/
    kal_bool                edch_non_sched_info_valid;              /*The following edch_sched_info valid or not.*/
    TDD_edch_non_sched_info_T   edch_non_sched_info;                    /*Non-Scheduled Transmission Information.*/
    TDD_epuch_info_T            epuch_info;                             /*E-PUCH Information, common to both scheduled and non-scheduled E-DCH transmission.*/
    TDD_edch_harq_info_T        edch_harq_info;                         /*Harq Configuration Information.*/
    kal_bool                mac_es_e_reset;                         /*TRUE indicates the MAC-es/e entity needs to be reset.*/
    kal_uint8               mac_event;                              /*Indicate whether E-DCH events indication should be sent to MAC:
                                                                                                               Bit 0 : Setup; Bit 1 : Release ; Bit 2 : Modify
                                                                                                               And in this primitive, only Bit 0 can be set to 1*/
//#ifdef __TDD128_HSPA_PLUS__
    TDD_edch_transmission_type_E    transmission_type;          /*[R8] specify that EDCH is allocated in dedicated state or common state*/
    TDD_common_edch_info_T           common_edch_info;           /*[R8]This field is only valid when transmission_type == TDD_EDCH_IN_COMMON_STATE*/
    kal_uint8                     pa_plus_valid_flag;         /*bitmask   bit0: eagch_drx_info_valid
                                                                                                                      bit1: edch_sps_info_valid*/
    TDD_eagch_drx_info_T             eagch_drx_param;            /*EAGCH DRX related param*/ 
    TDD_edch_sps_info_T              edch_sps_info;              /*EDCH SPS related param*/     
	kal_bool					ul_sync_flag;
	kal_uint16					t321;                  /*100, 200, 400, 800 ms*/
//#endif
} tdd_cphy_edch_setup_req_struct;

typedef struct _TDD_cphy_edch_modify_req_struct
{
    LOCAL_PARA_HDR      
    kal_int16               act_time;                               /*[meaning]: The activation time for this message. L1 will schedule 
                                                                                                                the activation time to the TTI boundary. [Range]: (-1~255). 
                                                                                                                (0-255) for CFN type, "-1" for immediate type.*/
//#ifdef __TDD128_HSPA_PLUS__
    kal_uint16              modify_field;             /*Bit0 ~ Bit6: refer to the below comments
                                                                                            Bit7 ~ Bit9: new added for PA+
                                                                                            Bit7: common edch info
                                                                                            Bit8: EAGCH DRX info
                                                                                            Bit9: EDCH SPS info*/
//#else
    //kal_uint8               modify_field;                           
                                                     /*Bit field to represent for the parameters that should be modified
                                                                                        Bit0: E-RNTI;
                                                                                        Bit1: scheduled mode information;
                                                                                        Bit2: non-scheduled mode information;
                                                                                        Bit3: e-puch information;
                                                                                        Bit4: HARQ information; 
                                                                                        Bit 5:  is_lowest_capablility_category .
                                                                                        Bit6: work_uarfcn
                                                                                        Note: modify_field can be "0" only when mac_e_es_reset = true. */
//#endif
    kal_uint16              e_rnti;                                 /*E-RNTI assigned to UE.*/
//#ifdef __TDD128_HSPA_PLUS__
	kal_uint8                capability_category;                /*indicating which category [1,15] TL1 to use*/
//#else
    kal_bool                 is_lowest_capability_category;     /*[Meaning]: indicate TL1 to use whether the lowest category or not.*/
//#endif
   kal_uint16              work_uarfcn;                /*Working uarfcn of the  UE  */    
        kal_bool                edch_sched_info_valid;                  /*Schedule EPUCH is valid or not after this msg.*/
    TDD_edch_sched_info_T       edch_sched_info;                        /*Scheduled Transmission Information.*/
        kal_bool                edch_non_sched_info_valid;              /*Non-schedule EPUCH isalid or notafter this msg.*/
    TDD_edch_non_sched_info_T   edch_non_sched_info;                    /*Non-Scheduled Transmission Information.*/
    TDD_epuch_info_T            epuch_info;                             /*E-PUCH Information, common to both scheduled and non-scheduled E-DCH transmission.*/
    TDD_edch_harq_info_T        edch_harq_info;                         /*Harq Configuration Information.*/
    kal_bool                mac_es_e_reset;                         /*TRUE indicates the MAC-es/e entity needs to be reset.*/
    kal_uint8               mac_event;                              /*Indicate whether E-DCH events indication should be sent to MAC:
                                                                                                               Bit 0 : Setup; Bit 1 : Release ; Bit 2 : Modify
                                                                                                               And in this primitive, only Bit 2 can be set to 1*/
//#ifdef __TDD128_HSPA_PLUS__
	TDD_edch_transmission_type_E    transmission_type;		 /*[R8] specify that EDCH is allocated in dedicated state or common state*/
	TDD_common_edch_info_T		   common_edch_info;		 /*[R8]This field is only valid when transmission_type == TDD_EDCH_IN_COMMON_STATE*/
	kal_uint8					pa_plus_valid_flag;			/*Bit0: DRX en/disable; Bit1: SPS en/disable*/
    TDD_eagch_drx_info_T             eagch_drx_param; 		 /*EAGCH DRX related param*/ 
	TDD_edch_sps_info_T	           edch_sps_info;			 /*EDCH SPS related param*/ 																				   
	kal_bool						e_rnti_valid;
//#endif

} tdd_cphy_edch_modify_req_struct;

typedef struct _TDD_cphy_edch_release_req_struct
{
    LOCAL_PARA_HDR      
    kal_int16               act_time;                               /*[meaning]: The activation time for this message. L1 will schedule the activation time to the
                                                                                                                TTI boundary. [Range]: (-1~255). (0-255) for CFN type, "-1" for immediate type.*/
    kal_bool      mac_es_e_reset;           /*TRUE indicates the MAC-es/e entity needs to be reset.*/
    kal_uint8               mac_event;                              /*Indicate whether EDCH events indication should be sent to MAC:
                                                                                                                  Bit 0 : Setup; Bit 1 : Release ; Bit 2 : Modify
                                                                                                               And in this primitive, only Bit 1 can be set to 1*/
} tdd_cphy_edch_release_req_struct;
#endif

//#if defined( __UMTS_R9__ ) && defined ( __AST3002__ )
typedef struct _TDD_cphy_measurement_config_dmo_req_struct
{
    LOCAL_PARA_HDR
    kal_int16              act_time;
	
    kal_uint8              dmo_bitmap;    
    TDD_dch_mo_info_T          dmo_pattern[TDD_MAX_DMO_PATTERN_NUM];    
}tdd_cphy_measurement_config_dmo_req_struct;
//#endif

typedef struct _TDD_cphy_measurement_config_idle_interval_req_struct
{
    LOCAL_PARA_HDR
    kal_uint8              k;
    kal_uint8              Offset;       
}tdd_cphy_measurement_config_idle_interval_req_struct;

/*****************************************************************************
 container request 
*****************************************************************************/

/*-------- Message(Primitive) related definition  ----------------------*/

typedef struct _TDD_msg_buf_T                          /* Buffer of message container */
{
   kal_uint8            channel_id;                   /* Channel ID */
   msg_type             msg_id;                       /* Message ID */
   kal_uint16           buff_size;                    /* Buffer size */
   local_para_struct*   buffer;                       /* Channel configuration message buffer */
} TDD_msg_buf_T;


typedef struct _TDD_cphy_msg_container_req_struct
{
    LOCAL_PARA_HDR 
    kal_uint8       at_ref;              /* Reference channge of activation time.
                                                                        0 : Ref channel is the released channel.
                                                                            There should be ch to be released
                                                                        1 : Ref channel is the setup channel.
                                                                            There should be ch to be setup. */
   /*
     meas_control_E   meas_control;                 // Indicate whether TL1 need to not to resume meas. after apply corresponding buffer's config. 
     kal_int8         idx_intra_freq;                     // [Range]: 0 ~ 2. Indicate which frequency in the array uarfcn[TDD_MAX_UMTS_FREQ] is intra-frequency, -1 means invalid  
   */                                                                
   kal_uint8        rab_domain_field;  /* BIT0: CS present, 
                                          BIT1: PS present */

   kal_int16        rx_cfn;            /* Indicate peer message receive cfn. Ex: tti = 4, receive frame number : 0,1,2,3.  rx_cfn = 3 (set by tl1)
                                                                        [Range]: -1 ~ 255.    
                                                                        -1 : Means upper layer internal control
                                                                      */
                                          
   kal_uint8        msg_num;            /* # of included msg. 1 ~ 4 */
   TDD_msg_buf_T        msg_buffer[4];      /* List of msg buffer for included channel msg */
   /* [R5R6] For HS-DSCH and E-DCH */
   kal_uint8        h_msg_num;          /* # of included H-msg. 0~2 */
   TDD_msg_buf_T        h_msg_buffer[2];    /* List of msg buffer for included channel msg */
   kal_uint8        e_msg_num;          /* # of included E-msg. 0~2 */
   TDD_msg_buf_T        e_msg_buffer[2];    /* List of msg buffer for included channel msg */

// #if defined (__UMTS_R9__) && defined (__AST3002__)
   kal_uint8        dmo_msg_num;        /* # of included dmo-msg. 0~1 */
   TDD_msg_buf_T        dmo_msg_buffer[1];  /* List of msg buffer for included channel msg */
//#endif   

} tdd_cphy_msg_container_req_struct;

typedef struct _TDD_cphy_abort_req_struct
{
    LOCAL_PARA_HDR
} tdd_cphy_abort_req_struct;

typedef struct _TDD_cphy_abort_bch_setup_req_struct
{
    LOCAL_PARA_HDR
} tdd_cphy_abort_bch_setup_req_struct;

#if defined (__GEMINI_GSM__) && defined (__UMTS_RAT__)
typedef struct _TDD_rsvas_tl1_suspend_req_struct
{
    LOCAL_PARA_HDR
} tdd_rsvas_tl1_suspend_req_struct;
typedef struct _TDD_rsvas_tl1_resume_req_struct
{
    LOCAL_PARA_HDR
} tdd_rsvas_tl1_resume_req_struct;
#endif

#ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
typedef struct _TDD_cphy_channel_priority_adjustment_req_struct
{
    LOCAL_PARA_HDR
    kal_bool channel_priority_high;     /*TRUE: TL1 channel priority is set to high;*/
                                        /*FALSE: TL1 channel priority is set to normal */
	kal_int16 act_time;                  /*-1:active immediately,usually is -1 */
	                                      /*only dch modify and handover(R+S),the value is the real AT*/
} tdd_cphy_channel_priority_adjustment_req_struct;
typedef struct _TDD_urr_tl1_switch_gemini_mode_req_struct
{
    LOCAL_PARA_HDR
    kal_bool is_virtual_mode;       /*TRUE: TL1 will switch from normal mode to virtual mode;*/
                                    /*FALSE: TL1 will switch from virtual mode to normal mode */
} tdd_urr_tl1_switch_gemini_mode_req_struct;
typedef struct _TDD_rsvas_tl1_virtual_resume_req_struct
{
    LOCAL_PARA_HDR
} tdd_rsvas_tl1_virtual_resume_req_struct;
typedef struct _TDD_phy_channel_priority_adjustment_req_struct
{
    LOCAL_PARA_HDR
    kal_bool channel_priority_high;     /*TRUE: TL1 channel priority is set to high;*/
                                        /*FALSE: TL1 channel priority is set to normal */
} tdd_phy_channel_priority_adjustment_req_struct;

#endif

typedef struct _l4ctl1_get_rf_temperature_req_struct
{
   LOCAL_PARA_HDR
} l4ctl1_get_rf_temperature_req_struct;

typedef struct _l4ctl1_get_rf_temperature_cnf_struct
{
   LOCAL_PARA_HDR
   kal_int16 modem_temperature;
} l4ctl1_get_rf_temperature_cnf_struct;

typedef struct _l4ctl1a_txrx_active_time_req_struct
{
   LOCAL_PARA_HDR   
   kal_uint8 src_id;
   
} l4ctl1a_txrx_active_time_req_struct;


typedef struct _l4ctl1a_txrx_active_time_cnf_struct
{
   LOCAL_PARA_HDR
   kal_uint8                             src_id;                                                                   // just piggyback the src_id sent by l4cel1_txrx_active_time_req_struct from L4C.
   kal_uint32        tx_mode_time_ms[5];
   kal_uint32        rx_mode_time_ms;
   kal_uint32        txrx_mode_union_time_ms;                    
   
} l4ctl1a_txrx_active_time_cnf_struct;

typedef struct _l4ctl1_em_tst_control_req_struct
{
    LOCAL_PARA_HDR
    kal_uint8 src_id;     
    TDD_tl1_em_tstcmdtype type;
    TDD_tl1_em_tstcmdpara param;
} l4ctl1_em_tst_control_req_struct;

#if defined (__MML1_ADT_ENABLE__)
/*****************************************************************************
  TL1 req for ADT Task
*****************************************************************************/
typedef struct _TDD_tl1_l1adt_enter_connected_req_struct
{
    LOCAL_PARA_HDR    
} tdd_tl1_l1adt_enter_connected_req_struct;

typedef struct _TDD_tl1_l1adt_leave_connected_req_struct
{
    LOCAL_PARA_HDR   
} tdd_tl1_l1adt_leave_connected_req_struct;

typedef struct _TDD_tl1_l1adt_enter_tdd_mode_req_struct
{
    LOCAL_PARA_HDR   
} tdd_tl1_l1adt_enter_tdd_mode_req_struct;



/*****************************************************************************
  confirm from ADT Task to TL1
*****************************************************************************/
typedef struct _TDD_tl1_l1adt_enter_connected_cnf_struct
{
    LOCAL_PARA_HDR    
    kal_int32 adt_dl_result;
/*
{//PASS_DL_(UN)COMPLETE_xxx -> xxx means the current RAT mode
   FAIL_OTHER_RAT_IS_CONN,
   PASS_DL_COMPLETE_CONN,
   PASS_DL_NOT_YET_FINISHED_CONN,
   PASS_DL_COMPLETE_IDLE,
   PASS_DL_NOT_YET_FINISHED_IDLE,
   PASS_STOP_N_RESTART_DL_IDLE,
   PASS_START_DL_IDLE
}
*/
} tdd_tl1_l1adt_enter_connected_cnf_struct;

typedef struct _TDD_tl1_l1adt_leave_connected_cnf_struct
{
    LOCAL_PARA_HDR   
    kal_int32 idle_result;
/*
{
   NORMAL,
   ABNORMAL_IDLE,
   ABNORMAL_OTHER_CONN
}
*/
} tdd_tl1_l1adt_leave_connected_cnf_struct;

typedef struct _TDD_tl1_l1adt_enter_tdd_mode_cnf_struct
{
    LOCAL_PARA_HDR
} tdd_tl1_l1adt_enter_tdd_mode_cnf_struct;

/*****************************************************************************
  TL1 ind for ADT Task
*****************************************************************************/
typedef struct _TDD_tl1_l1adt_enter_tdd_mode_ind_struct
{
    LOCAL_PARA_HDR
} tdd_tl1_l1adt_enter_tdd_mode_ind_struct;



#endif

/*****************************************************************************
 confirm & indication from TL1 to L4C 
*****************************************************************************/
typedef struct _l4ctl1_em_tst_control_cnf_struct
{
    LOCAL_PARA_HDR 
    kal_uint8 src_id;
    kal_bool success;
#ifdef __ATERFTX_ERROR_HANDLE_ENHANCE__	
    ps_cause_enum err_cause;
#endif
}l4ctl1_em_tst_control_cnf_struct;
typedef struct _l4ctl1_em_tx_report_ind_struct
{
    LOCAL_PARA_HDR 
    kal_int32 tx_power; //1/8db
}l4ctl1_em_tx_report_ind_struct;

/*****************************************************************************
 confirm & indication from TL1 to SLCE 
*****************************************************************************/
typedef struct _TDD_cphy_bch_setup_cnf_struct
{
    LOCAL_PARA_HDR 
} tdd_cphy_bch_setup_cnf_struct;

typedef struct _TDD_cphy_bch_setup_ind_struct
{
    LOCAL_PARA_HDR 
    kal_bool    success;                            /* Indicate if BCH setup success.  For current TL1, it always return true.   */
} tdd_cphy_bch_setup_ind_struct;

typedef struct _TDD_cphy_bch_modify_cnf_struct
{
    LOCAL_PARA_HDR 
} tdd_cphy_bch_modify_cnf_struct;

typedef struct _TDD_cphy_bch_modify_ind_struct
{
    LOCAL_PARA_HDR 
} tdd_cphy_bch_modify_ind_struct;

typedef struct _TDD_cphy_bch_release_cnf_struct
{
    LOCAL_PARA_HDR 
} tdd_cphy_bch_release_cnf_struct;

typedef struct _TDD_cphy_bch_release_ind_struct
{
    LOCAL_PARA_HDR 
} tdd_cphy_bch_release_ind_struct;


typedef struct _TDD_cphy_sfn_ind_struct
{
    LOCAL_PARA_HDR
    kal_bool    success;            /*True/False. True: The SFN result is success. The SFN is in the following (tm, off).
                              False: The SFN reading is failed. The SFN in the following (tm, off) will be ignored.*/
    kal_int32   tm;                 /*[Range]: -1 ~ (6400*8-1). -1 for unknown timing.
                                 [Meaning]:Sub Frame boundary offset between target cell and LST
                                 For a cell with unknown tm value, it can not be issued to TL1. */
    kal_int16   off;             /*[Range]: -1~8191, (0-8191) for a cell whose Sub SFN offset to LST has been measured by TL1. -1 means off unknown.
                                 [Meaning]: Sub frame number offset between target cell and LST.
                                 For a cell with unknown off value, it can not be issued to TL1. */    
    kal_uint16  uarfcn;             /*uarfcn*/                                
    kal_uint16  cell_param_id;         /*[Range]: 0-127, TDD_CPID_INVALID
                              [Meaning]:Cell parameter ID*/
#if defined (__GEMINI_GSM__) && defined (__UMTS_RAT__)
    TDD_uas_gemini_conflict_cause_enum conflict_cause;   /*Channel conflict casue with peer channel*/
    kal_uint16 peer_priority_index;                  /* Channel conflict priority index with peer channel*/
#endif
} tdd_cphy_sfn_ind_struct;


typedef struct _TDD_cphy_t312_expiry_ind_struct
{
    LOCAL_PARA_HDR    
    kal_uint8   tid;                         /* Transaction id */       
 
} tdd_cphy_t312_expiry_ind_struct;

typedef struct _TDD_cphy_dl_init_sync_ind_struct
{
    LOCAL_PARA_HDR
    kal_uint8   tid;                        /* Transaction id */   
    kal_int32   dpch_tm;                    /* For CFN-SFN TD */
    kal_int16   dpch_off;                   /* For CFN-SFN TD */
} tdd_cphy_dl_init_sync_ind_struct;
 
typedef struct _TDD_cphy_rl_failure_ind_struct
{
    LOCAL_PARA_HDR 
    kal_bool   intrafreq_interference_flag;     /* TRUE: Indicate Radio Link Failure is caused by Intra-freq interference */
} tdd_cphy_rl_failure_ind_struct;

typedef struct _TDD_cphy_frequency_scan_cnf_struct
{
    LOCAL_PARA_HDR 
} tdd_cphy_frequency_scan_cnf_struct;

typedef struct _TDD_cphy_frequency_scan_ind_struct
{
    LOCAL_PARA_HDR 
} tdd_cphy_frequency_scan_ind_struct;

typedef struct _TDD_cphy_frequency_scan_suspend_cnf_struct
{
    LOCAL_PARA_HDR 
} tdd_cphy_frequency_scan_suspend_cnf_struct;

typedef struct _TDD_cphy_frequency_scan_suspend_ind_struct
{
    LOCAL_PARA_HDR 
 } tdd_cphy_frequency_scan_suspend_ind_struct;

typedef struct _TDD_cphy_frequency_scan_continue_cnf_struct
{
    LOCAL_PARA_HDR 
} tdd_cphy_frequency_scan_continue_cnf_struct;


typedef struct _TDD_cphy_measurement_config_cell_cnf_struct
{
    LOCAL_PARA_HDR 
} tdd_cphy_measurement_config_cell_cnf_struct;



typedef struct _TDD_cphy_measurement_cell_ind_struct
{
    LOCAL_PARA_HDR        
    kal_uint8    tid;                                               /*Transaction ID to synchronize between request and indication. 
                                                                                                                          Its value will be the same as the 'tid' field used in 
                                                                                                                          CPHY_MEASUREMENT_CONFIG_CELL_REQ. This field is unused for 
                                                                                                                          the frequency scan report.*/
    TDD_measured_type_T    measured_type;                               /*Measurement report type: TDD_INTRA_FREQUENCY_MEASURED, 
                                                                                                                          TDD_INTER_FREQUENCY_MEASURED,FREQ _SCAN_DETECTED,TDD_SERVING_ONLY
                                                                                                                          If UE works in the primary freq, the serving cell measurement is included 
                                                                                                                          in intra-freq measurement report. If it works in the second freq, the serving 
                                                                                                                          cell measurement is included in the inter-freq measurement report.*/ 
    kal_bool    iscp_included;                                      /*True: Indicate this message contains the iscp measurement result. 
                                                                                                                          This field is only used for INTRA-FREQUENCY report.*/
    kal_bool    fs_halt;                                            /*True: Frequency scan procedure is temporary halt. TL1 will wait for 
                                                                                                                          CPHY_FREQSCAN_CONTINUE_REQ. False: Frequency scan procedure 
                                                                                                                          is in progress. It can be set with 'TRUE' when report cell scan result. 
                                                                                                                          This field is only used for frequency scan report. This field is un-used 
                                                                                                                          for the cell measurement report.*/ 
    kal_int16   rssi[TDD_MAX_UMTS_FREQ];                                /*indicate the TS0's RSSI of each frequency  included in 'measured_cell[]'. 
                                                                                                                          Range: -400 ~ -100 means (-100 ~ -25) dBm 0.25 dB step. The sequence 
                                                                                                                          of frequency RSSI is same with 'measured_cell[]'*/
    kal_uint8   num_cell;                                           /*[range]: 0- TDD_MAX_NUM_REPORT_CELL Number of cells reported in this message*/                              
    TDD_measured_cell_T    measured_cell[TDD_MAX_NUM_REPORT_CELL];          /*List of measured cells' measurement result. TL1 may report multi-frequency's
                                                                                                                          measurement result in the same list, It is ascending sort by cell's uarfcn and
                                                                                                                          cell_param_id. Cells on the same frequency will be collected together. 
                                                                                                                          The cells on different frequencies will not be interleaved.*/
    kal_uint8   sinr;
    kal_bool    evaluate_req;
    kal_int8   tx_power;
    kal_bool                      isLongPeriodIn3GStandby;            /* [Rel8][ABPCR] For RR, Indicate if it is prio search peiorid*/                                                                                                                    
} tdd_cphy_measurement_cell_ind_struct;



typedef struct _TDD_cphy_specific_cell_search_ind_struct 
{ 
    LOCAL_PARA_HDR 
    kal_bool        success;                                        /* Indicate if search success */
    TDD_measured_cell_T measured_cell;                                  /* The found(1) cell */
} tdd_cphy_specific_cell_search_ind_struct;

typedef struct _TDD_cphy_specific_cell_search_stop_ind_struct
{
    LOCAL_PARA_HDR 
} tdd_cphy_specific_cell_search_stop_ind_struct;


/*reset&set rat*/
typedef struct _TDD_cphy_reset_cnf_struct
{
    LOCAL_PARA_HDR 
    kal_bool    success;                            /* Indicate whether the TL1 initialization sucess or fail 
                                       'True' - L1 successfully initialize itself.
                                       'False' - L1 fail to initialize itself.
                                       */
} tdd_cphy_reset_cnf_struct;


typedef struct _TDD_cphy_rf_on_cnf_struct
{
    LOCAL_PARA_HDR 
 } tdd_cphy_rf_on_cnf_struct;

typedef struct _TDD_cphy_rf_off_cnf_struct
{
    LOCAL_PARA_HDR  
} tdd_cphy_rf_off_cnf_struct;

typedef struct _TDD_cphy_set_active_rat_cnf_struct
{
    LOCAL_PARA_HDR 
} tdd_cphy_set_active_rat_cnf_struct;

/*tx status*/
typedef struct _TDD_cphy_tx_status_ind_struct
{
    LOCAL_PARA_HDR 
    kal_bool    is_tx_allow;              /* the current TX status
                                                                        TRUE : Currentlly, TX is available in TL1.
                                                                        FALSE : Currentlly, TX is not available in TL1. */
} tdd_cphy_tx_status_ind_struct;

/*gap status*/
typedef struct _TDD_cphy_gsm_gap_status_ind_struct
{
    LOCAL_PARA_HDR
    kal_bool is_bsic_gap_valid;
    
} tdd_cphy_gsm_gap_status_ind_struct;

/*internal measu*/
typedef struct _TDD_cphy_measurement_internal_config_cnf_struct
{
    LOCAL_PARA_HDR      
}tdd_cphy_measurement_internal_config_cnf_struct;

typedef struct _TDD_cphy_measurement_internal_event_ind_struct
{
    LOCAL_PARA_HDR
    kal_uint8   meas_id;                                            /*[Range] 1-16 Measurement Identity<TS25.331:10.3.7.48>*/
    TDD_internal_meas_event_E event_id;                                 /*indicate internal measurement event id*/
    TDD_tx_power_info_T tx_power_info;                                  /*The averaged TX power measurement result. It is a filter value with filter  
                                                                                                                      coefficient in 'MEASUREMENT CONTROL' indicated by meas_id.*/
    TDD_tadv_info_T tadv_info;                                          /*time advance */
} tdd_cphy_measurement_internal_event_ind_struct;

typedef struct _TDD_cphy_measurement_internal_periodic_ind_struct
{
    LOCAL_PARA_HDR
    kal_uint8 meas_id;                                              /*[Range] 1-16, Measurement Identity<TS25.331:10.3.7.48>*/
    kal_bool last_report;                                           /*True/False. True: Indicate that the 'report_num' is reached, 
                                                                                                                          and no more periodic report will be returned to RRC.*/
    TDD_tadv_info_T tadv_info;                                          /*time advance*/
    TDD_tx_power_info_T tx_power_info;                                  /*The averaged TX power measurement result.It is a filter value with filter 
                                                                                                                          coefficient in 'MEASUREMENT CONTROL' indicated by meas_id.*/
    
} tdd_cphy_measurement_internal_periodic_ind_struct;


typedef struct _TDD_cphy_measurement_internal_result_ind_struct
{
    LOCAL_PARA_HDR
    
    kal_uint8 meas_id;                                              /*[Range] 0-16, 0 is TDD_MEAS_ID_INVALID.
                                                                      [Meaning] it is the ‘Measurement Identity’ same as the request 
                                                                      meas_id in related tdd_cphy_measurement_internal_result_req_struct primitive.
                                                                      If Tl1 doesn’t contain the meas_id as in tdd_cphy_measurement_internal_result_req_struct, 
                                                                      it will treat the meas_id as 0, and return Tx-Pwr value without filter.*/
    kal_int16 sir[TDD_MAX_TIMESLOT_PER_SUBFRAME];                       /*[Range]: -28 ...40 means(-14dB - 20dB ) in 0.5 dB step*/  
    TDD_tx_power_info_T tx_power_info;                                  /*The averaged TX power measurement result.*/
    TDD_tadv_info_T tadv_info;                                          /*time advance*/
    
} tdd_cphy_measurement_internal_result_ind_struct;


typedef struct _TDD_cphy_measurement_internal_stop_cnf_struct
{
    LOCAL_PARA_HDR    
} tdd_cphy_measurement_internal_stop_cnf_struct;
    



/*sniffer*/
typedef struct _TDD_cphy_rssi_sniffer_start_cnf_struct
{
    LOCAL_PARA_HDR    
} tdd_cphy_rssi_sniffer_start_cnf_struct;


typedef struct _TDD_cphy_rssi_sniffer_stop_cnf_struct
{
    LOCAL_PARA_HDR    

} tdd_cphy_rssi_sniffer_stop_cnf_struct;



typedef struct _TDD_cphy_rssi_sniffer_signal_appear_ind_struct
{
    LOCAL_PARA_HDR    
    kal_uint8   num_freq_list;                                   /*Number of freq for scan list of RSSI sniffer */
    kal_uint16  uarfcn_list[TDD_MAX_RSSI_SNIFFER_SCAN_LIST];         /* Array of UARFCNs on which cells are found */

} tdd_cphy_rssi_sniffer_signal_appear_ind_struct;


typedef struct _TDD_cphy_msg_container_cnf_struct
{
    LOCAL_PARA_HDR    

} tdd_cphy_msg_container_cnf_struct;

typedef struct _TDD_cphy_msg_container_ind_struct
{
    LOCAL_PARA_HDR
    kal_bool    success_flag;         
} tdd_cphy_msg_container_ind_struct;


typedef struct _TDD_cphy_abort_cnf_struct
{
    LOCAL_PARA_HDR 
    kal_bool    success;                 /* Indicate if abort request success
                                                                           TRUE : TL1 will back to the old channel configure.
                                                                           FALSE : TL1 will go forward to the new channel configure.*/                                                                     
} tdd_cphy_abort_cnf_struct;

#if defined (__GEMINI_GSM__) && defined (__UMTS_RAT__)
typedef struct _TDD_rsvas_tl1_suspend_cnf_struct
{
    LOCAL_PARA_HDR
} tdd_rsvas_tl1_suspend_cnf_struct;
#endif


/*****************************************************************************
 request from MAC to TL1 
*****************************************************************************/
typedef struct _TDD_phy_rach_data_req_struct
{
   LOCAL_PARA_HDR 
   kal_uint16   tfci;                               /* TFCI. 0 ~ 1023 */
   TDD_ulTrchData   TrchInfo;                           /* UL TrCH information */
   kal_uint16   size_data;                          /*  This parameter represents the number of bytes of the buffer. This number will be equal to the size of allocated buffer plus 4 bytes. */
   kal_uint8    *data[TDD_MAX_UL_TB];                   /* data for each TB. PS shoul allocate the buffer */
#ifdef __HSUPA_SUPPORT__
   TDD_access_type_E    access_type;                    /*Type of random access, RACH or E-RUCCH.
                                                                                       [Notes]:
                                                                                       #1. Fixed parameters for E-RUCCH:
                                                                                             TrchInfo.trchId = 0, TrchInfo.tb_size = 39(23 + 16), TrchInfo.num_tb = 1,
                                                                                             tfci = 0, size_data = 9(5 + 4).
                                                                                       #2. Data layout:
                                                                                             Padding(1bit) + SNPL(5bits) + UPH(5bits) + TEBS(5bits) + HLBS(4bits) + HLID(4bits) + E-RNTI(16bits)
                                                                                       #3. TL1 shall fill the following parameters:
                                                                                             SNPL, bit6/byte0 ~ bit2/byte0;
                                                                                             UPH, bit1/byte0 ~ bit5/byte1.*/
#endif
} tdd_phy_rach_data_req_struct;

typedef struct _TDD_phy_access_req_struct
{
    LOCAL_PARA_HDR
    kal_bool    retry;                              /*True: RACH transmission failed in the last access procedure,
                                                                                              and TL1 will use the same RACH data and ASC as in the last access procedure.
                                                                                              False: It’s a new RACH procedure. TL1 will apply new RACH data and ASC from MAC.*/    
    kal_uint8   asc;                                /*The index value of configured asc array.*/
#ifdef __HSUPA_SUPPORT__
    TDD_access_type_E   access_type;                    /*Type of random access, RACH or E-RUCCH.*/
#endif

//#ifdef __TDD128_HSPA_PLUS__
	TDD_erucch_access_type_E	erucch_type;    /*ERUCCH type: CELL RESELECTION IND, UL SYNC ORDER, or SI REQUEST*/
//#endif
} tdd_phy_access_req_struct;

/*****************************************************************************
 indication from TL1 to MAC  
*****************************************************************************/

typedef struct _TDD_phy_pch_setup_ind_struct
{
    LOCAL_PARA_HDR 
} tdd_phy_pch_setup_ind_struct;

typedef struct _TDD_phy_pch_release_ind_struct
{
    LOCAL_PARA_HDR  
} tdd_phy_pch_release_ind_struct;

typedef struct _TDD_phy_fach_setup_ind_struct
{
    LOCAL_PARA_HDR  
} tdd_phy_fach_setup_ind_struct;


typedef struct _TDD_phy_fach_release_ind_struct
{
    LOCAL_PARA_HDR  
} tdd_phy_fach_release_ind_struct;

typedef struct _TDD_phy_rach_setup_ind_struct
{
    LOCAL_PARA_HDR  
} tdd_phy_rach_setup_ind_struct;

typedef struct _TDD_phy_rach_release_ind_struct
{
    LOCAL_PARA_HDR  
} tdd_phy_rach_release_ind_struct;

typedef struct _TDD_phy_dch_setup_ind_struct
{
    LOCAL_PARA_HDR 
    TDD_direction_E     direction;                      /* Indicate UL or DL is being setup, 0 : DL , 1 : UL*/
    kal_uint16      sfn;                            /* [Range]: 0 ~4095
                                                                                        [Meaning]: when DL DCH is setup. (Only used for downlink).*/
} tdd_phy_dch_setup_ind_struct;

typedef struct _TDD_phy_dch_modify_ind_struct
{
    LOCAL_PARA_HDR
    TDD_direction_E       direction;                    /* Indicate UL or DL is being setup, 0 : DL , 1 : UL*/                        
} tdd_phy_dch_modify_ind_struct;

typedef struct _TDD_phy_dch_release_ind_struct
{
    LOCAL_PARA_HDR
    TDD_direction_E     direction;                      /* Indicate UL or DL is being setup, 0 : DL , 1 : UL*/
    kal_uint16      sfn;                            /* [Range]: 0 ~4095
                                                                                        [Meaning]: when DL DCH is released. (Only used for downlink).*/
} tdd_phy_dch_release_ind_struct;

typedef struct _TDD_phy_config_abort_ind_struct
{
    LOCAL_PARA_HDR 
    kal_bool    success;                            /* Indicate if abort request success
                                                                                        TRUE : TL1 will back to old channel configure
                                                                                        FALSE : TL1 will go forward to new channel configure*/
} tdd_phy_config_abort_ind_struct;

typedef struct _TDD_phy_dl_init_sync_ind_struct
{
    LOCAL_PARA_HDR

} tdd_phy_dl_init_sync_ind_struct;


typedef struct _TDD_phy_bch_data_ind_struct
{
    LOCAL_PARA_HDR
    kal_uint8   *data;                              /*  Used by PS only. TL1 would assign it as “NULL”*/
    kal_bool    no_path;                            /* True/False. True:  it means TL1 could not find the cell 
                                                                                        other parameter should be ignored and protocol should release this BCH channel.
                                                                                        False: This cell has been found */
    kal_int32   tm;                                 /* [Range ]:  -1 ~ 6400*8-1 , -1 means unknown timing
                                                                                        [Meaning]: Sub Frame boundary offset between target cell and LST*/
    kal_int16   off;                                /* [Range]: -1~8191, -1 for off unknown cell.
                                                                                        [Meaning]: Sub frame number offset between target cell and LST.*/
    kal_int16   rx_sfn;                             /* [Range]: 0 ~4095  
                                                                                        [Meaning]: The sfn where the SIB/MIB is received.*/
    kal_uint16  uarfcn;                             /* uarfcn*/
    kal_uint16  cell_param_id;                      /* [Range]: 0-127, TDD_CPID_INVALID
                                                                                        [Meaning]:Cell parameter ID*/   
    kal_uint8   crc_status;                         /* 0: crc_error, 1: crc_ok, 2: no_crc*/
    kal_int16   rssi;                               /* [Range]: -400 ~ -100 means (-100 ~ -25) dBm 0.25 dB step.
                                                                                        [Meaning]: TS0’s RSSI.*/
    kal_int16   rscp;                               /* [Range]: -500 ~ -100 means (-125 ~ -25 )dBm in 0.25 dB step
                                                                                        [Meaning]: Serving cell RSCP.*/
    kal_bool    standby_no_gap;        /* True: L1 has no enough gap time for SIB reception */

                                                                                 
#if defined (__GEMINI_GSM__) && defined (__UMTS_RAT__)
    TDD_uas_gemini_conflict_cause_enum conflict_cause;   /*Channel conflict casue with peer channel*/
    kal_uint16 peer_priority_index;                  /* Channel conflict priority index with peer channel*/
#endif
} tdd_phy_bch_data_ind_struct;


typedef struct _TDD_phy_data_ind_struct
{
    LOCAL_PARA_HDR
    TDD_cctrch_type_E    dl_cctrch;                       /*For PCH, FACH or DCH CCTRCH.*/   
    kal_uint8    rx_fn;                               /*0-255.This is the FN of the last frame in the TTI that was received. 
                                                                                               When DCH channel is activated, the reported FN is the true DCH CFN. 
                                                                                               When DCH channel is not activated, FN is the value of (SFN%256).*/   
    kal_uint16   rx_sfn;                                                                                              
    kal_uint16   uarfcn;                              /*uarfcn*/    
    kal_uint16   cell_param_id;                       /*0-127,Cell parameter ID*/
    kal_uint8    num_trch;                            /*Number of Trch*/   
    TDD_dlTrchData   TrchInfo[TDD_MAX_TRCH_NUM];              /*Downlink TRCH information. When TL1 is configured in Loopback mode 2, 
                                                                                                  the tb_size specifies the total of data bits and crc bits.*/
    kal_uint32   crc;                                 /*The crc result (Pass/Fail) for each TB. A bit 1 represents for "Pass', and 0 for"Fail"*/
    kal_uint16   num_data;                            /*The size in byte of the buffer containing the data. It is the exact size of data, 
                                                                                                including the byte for TB number.*/

    kal_uint16    EMI_buffer_index;                   /*MAC allocate this buffer and free this EMI buffer,TL1D provide the buffer index where data stored,and MAC read it and free it*/



/*mtk80854,  here we do not if 0 *data, because in mac internal code, many *data are used*/
/*to  convinient coding, we keep *data in 6291, but only used by mac.*/
/*need to confirm with L1!!!*/
    #ifndef __TL1_UT_TEST__
	/*for MT6291, we also use *data pointing to share buffer address*/
    kal_uint8    *data;                               /*The buffer contains data for each TB received in this min TTI. This buffer is allocated
                                                                                                by TL1,and freed by PS. The buffer is from ADM. The first byte in the data indicates the number 
                                                                                                of TB in this data indication*/   
    #else
    kal_uint8    data[1000];
    #endif
    kal_uint32   raw_crc;                             /*Unmodified CRC for speech decoder */   
    kal_uint32   s_value[TDD_MAX_TRCH_NUM];               /*Viterbi decoder output S value for speech decoder */  
    kal_int16    tpc_SIR_lta;                         /*The measured SIR value of DPCH TPC field. It is TL1D debugging information for speech quality.*/
    kal_int16    dpch_SIR_lta;                        /*The measured SIR value of DPCH pilot field. It is TL1D debugging information for speech quality.*/
    kal_int16    TFCI_max_corr;                       /*The measured correlation value of DPCH TFCI field from TFCI decoder.
                                                                                          It is TL1D debugging information for speech quality.*/
#if defined (__GEMINI_GSM__) && defined (__UMTS_RAT__)
    TDD_uas_gemini_conflict_cause_enum conflict_cause;   /*Channel conflict casue with peer channel*/
#endif
#ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
    kal_uint8   rx_suspend;                          /*It is a bitmap to indicate if some TrCH is conflicted with SIM2 gap.*/
                                                    /* The bit is set to "1" only when the TrCH TTI ends in this frame and SIM2 gap exists in this TTI.*/
                                                    /* LSB bit is mapped to trchInfo[0].*/
#endif
//#if defined( __UMTS_R9__ ) && defined ( __AST3002__ )
    kal_uint8		meas_occasion_ind;
//#endif
    kal_int8    pi_repeat_cycle;/* -1:invalid, -2:retransmission with CRC pass, 1~20:valid pi_repeat_cyle */

   /* serving cell information for speech debug. */
   /* These values are valid only when DCH state and RL exists, otherwise, the value will be "0". */
    kal_uint8                     RSSI;
    kal_uint8                     RSCP;
    kal_uint8                     ECIO;
    kal_uint8                     HHO_SHO;

} tdd_phy_data_ind_struct;

typedef struct _tdd_phy_pch_data_ind_struct
{
    LOCAL_PARA_HDR
    TDD_cctrch_type_E    dl_cctrch;                       /*For PCH, FACH or DCH CCTRCH.*/   
    kal_uint8    rx_fn;                               /*0-255.This is the FN of the last frame in the TTI that was received. 
                                                                                               When DCH channel is activated, the reported FN is the true DCH CFN. 
                                                                                               When DCH channel is not activated, FN is the value of (SFN%256).*/   
    kal_uint16   rx_sfn;                                                                                              
    kal_uint16   uarfcn;                              /*uarfcn*/    
    kal_uint16   cell_param_id;                       /*0-127,Cell parameter ID*/
    kal_uint8    num_trch;                            /*Number of Trch*/   
    TDD_dlTrchData   TrchInfo[TDD_MAX_TRCH_NUM];              /*Downlink TRCH information. When TL1 is configured in Loopback mode 2, 
                                                                                                  the tb_size specifies the total of data bits and crc bits.*/
    kal_uint32   crc;                                 /*The crc result (Pass/Fail) for each TB. A bit 1 represents for "Pass', and 0 for"Fail"*/
    kal_uint16   num_data;                            /*The size in byte of the buffer containing the data. It is the exact size of data, 
                                                                                                including the byte for TB number.*/
																									
    kal_uint16    EMI_buffer_index;                   /*LUMAC allocate this buffer and LURLC free this EMI buffer,TL1D provide the buffer index where data stored,and MAC read it and handle it*/

	#ifndef __TL1_UT_TEST__
    kal_uint8    *data;                               /*The buffer contains data for each TB received in this min TTI. This buffer is allocated
                                                                                                by TL1,and freed by PS. The buffer is from ADM. The first byte in the data indicates the number 
                                                                                                of TB in this data indication*/   
    #else
    kal_uint8    data[1000];
    #endif
    kal_uint32   raw_crc;                             /*Unmodified CRC for speech decoder */   
    kal_uint32   s_value[TDD_MAX_TRCH_NUM];               /*Viterbi decoder output S value for speech decoder */  
    kal_int16    tpc_SIR_lta;                         /*The measured SIR value of DPCH TPC field. It is TL1D debugging information for speech quality.*/
    kal_int16    dpch_SIR_lta;                        /*The measured SIR value of DPCH pilot field. It is TL1D debugging information for speech quality.*/
    kal_int16    TFCI_max_corr;                       /*The measured correlation value of DPCH TFCI field from TFCI decoder.
                                                                                          It is TL1D debugging information for speech quality.*/
#if defined (__GEMINI_GSM__) && defined (__UMTS_RAT__)
    TDD_uas_gemini_conflict_cause_enum conflict_cause;   /*Channel conflict casue with peer channel*/
#endif
#ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
    kal_uint8   rx_suspend;                          /*It is a bitmap to indicate if some TrCH is conflicted with SIM2 gap.*/
                                                    /* The bit is set to "1" only when the TrCH TTI ends in this frame and SIM2 gap exists in this TTI.*/
                                                    /* LSB bit is mapped to trchInfo[0].*/
#endif
//#if defined( __UMTS_R9__ ) && defined ( __AST3002__ )
    kal_uint8		meas_occasion_ind;
//#endif
    kal_int8    pi_repeat_cycle;/* -1:invalid, -2:retransmission with CRC pass, 1~20:valid pi_repeat_cyle */

   /* serving cell information for speech debug. */
   /* These values are valid only when DCH state and RL exists, otherwise, the value will be "0". */
   kal_uint8                     RSSI;
   kal_uint8                     RSCP;
   kal_uint8                     ECIO;
   kal_uint8                     HHO_SHO;
}tdd_phy_pch_data_ind_struct;
typedef struct _TDD_phy_access_ind_struct
{
    LOCAL_PARA_HDR
    TDD_access_status_E access_status;                      /* The result of RACH access */
#ifdef __HSUPA_SUPPORT__
    TDD_access_type_E   access_type;                        /*Type of random access, RACH or E-RUCCH.*/
#endif

//#ifdef __TDD128_HSPA_PLUS__
	TDD_erucch_access_type_E	erucch_type;        /*ERUCCH type: CELL RESELECTION IND, UL SYNC ORDER, or SI REQUEST*/
//#endif
} tdd_phy_access_ind_struct;


typedef struct _TDD_phy_post_tx_ind_struct
{
    LOCAL_PARA_HDR

    TDD_post_tx_type_E  post_tx_type;
    kal_uint8   cfn;     
#ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
    kal_bool    is_tx_suspend;                      /*It indicates if there is SIM2 gap in the minTTI period of the released ul data. For RACH, this flag is always false*/
#endif
} tdd_phy_post_tx_ind_struct;


typedef struct _TDD_phy_end_dch_tx_ind_struct
{
    LOCAL_PARA_HDR
    
    kal_uint8  cfn;                                     /*When MAC receives PHY_END_DCH_TX_IND, it's possible that time has
                                                                                             passed more than one TTI. So give this cfn value for MAC to handle 
                                                                                             remaining things at the right CFN*/
    
} tdd_phy_end_dch_tx_ind_struct;


typedef struct _TDD_cphy_measurement_config_idle_interval_cnf_struct
{
    LOCAL_PARA_HDR  
} tdd_cphy_measurement_config_idle_interval_cnf_struct;


//#ifdef __TDD128_HSPA_PLUS__
typedef struct _TDD_phy_erucch_access_ind_struct
{
	LOCAL_PARA_HDR
	TDD_erucch_access_type_E    access_type;		/*the type of TL1 triggerring ERUCCH Procedure,
                                                                                TDD_UL_SYNC_ORDER or TDD_CELL_RESELECTION_IND*/
}tdd_phy_erucch_access_ind_struct;
//#endif

typedef struct _TDD_phy_hsdsch_data_ind_struct
{
    LOCAL_PARA_HDR      
    kal_uint16          sub_cfn;                        /*[Range]: 0-511.*/
    kal_uint8           config_operation;               /*Bit 0: HS-DSCH setup; Bit1: HS-DSCH release; Bit 2: HS-DSCH modify*/
    kal_bool            mac_hs_reset;                   /*When TL1 does MAC-hs reset , the flag is set to tell MAC (it is also needed in 
                                                                                             setup and release cases, not only for modify indication)*/  
    kal_uint8           size_info_modified;             /*Bitmask of maximum 8 MAC-hs queues, with size info list modified
                                                                                             Bit 0: queue_id = 0; Bit 1: queue_id = 1; …;Bit 7: quque_id = 7*/
    TDD_hsdsch_data_T       hsdsch_data;                    /*The received MAC-hs data descriptor*/
#ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
    kal_bool            is_rx_suspend;                  /*It indicates if there is SIM2 gap in the TTI receiving dsch data*/
#endif
//#if defined( __UMTS_R9__ ) && defined ( __AST3002__ )
    kal_uint8           meas_occasion_ind;              /*bit0 indicates whether it is in DCH measurement occasion;
                                                          bit1 indicates whether it is in idle interval for E-UTRA Measurement.*/
//#endif
} tdd_phy_hsdsch_data_ind_struct;

#ifdef __HSUPA_SUPPORT__

typedef struct _TDD_phy_end_edch_tx_ind_struct
{
    LOCAL_PARA_HDR      
    kal_uint16          sub_cfn;                        /*[Range]: 0-511.*/
    
    
    kal_uint8           harq_id;                        /*[Range]: 0~7 [Meaning]: Harq process id.*/
} tdd_phy_end_edch_tx_ind_struct;
#endif

#if defined(TL1_SIM)
kal_bool tl1_active_time_difference();

/*------------------- Function prototype -----------------------------*/
/* TL1 provides this function to other entities to get current CFN & SFN 
   CFN : -1 ~ 255. 0 ~ 255 if UE in DCH/FACH mode otherwise -1
   SFN : -1 ~ 4095. 0 ~ 4095 for the base station frame number. -1 for an invalid value.*/
void TL1_GetCurrentTime(kal_int16 *cfn, kal_int16 *sfn);
#endif

//extern kal_bool Tl1_FreeDataBuf(kal_uint8 type, kal_uint8* rel_buffer_ptr);

typedef struct _TDD_tl1_data_buf_info_T
{
    kal_uint8  min_left_data_buffers;
    kal_uint8  min_left_hsdsch_buffers;
}TDD_tl1_data_buf_info_T;

//extern void     TL1_GetDataBufInfo(tl1_data_buf_info_T *tl1_data_buf_info_ptr);

#if 0  //no used in U3G
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

//#if defined (__UMAC_DCH_LISR__) || defined (__HSUPA_SUPPORT__)
typedef void (*TDD_pul_inform_MAC)(void *data);
//#endif


//#ifndef __UMAC_DCH_LISR__
//extern void UMAC_UL_DCH_Tick(TDD_uldch_data_req_T * uldch_data_req);
//extern void UMAC_UL_DCH_Tick_End(kal_bool tx_suspend,TDD_tx_enable_type_E tx_enable,TDD_uldch_data_ind_T * uldch_data_ind);
//#else
//extern void TDD_TL1D_L2PutHISRDCHQueue(TDD_pul_inform_MAC func, void *data);
//#endif

//extern void TDD_ul_inform_MAC(kal_uint8 cfn);

//extern void TDD_ul_dpch_power(kal_uint8 cfn, kal_uint8 tfc_status[TDD_MAX_UL_TFC]);

//extern TDD_uldch_data_ind_T* TDD_UMAC_UL_DCH_Tick_Low_Lisr(TDD_uldch_data_req_T * uldch_data_req);
//extern void TL1_OTD_Calculation(kal_int16 off_s, kal_int16 off_n, 
//                                       kal_int32 tm_ec_s, kal_int32 tm_ec_n, 
//                                       kal_int16 *off_opt, kal_int32 *tm_ec_opt);

//extern kal_int8 TL1_SelectSyncUlFpach(kal_uint8 *sync_ul_bitmap, kal_int8 num_fpach);   /*Return index of FPACH in FPACH set.*/

//extern void TDD_mac_hs_get_pdu_buffer(kal_uint8 **buffer_ptr, kal_uint16 size);

//extern void TDD_try_to_trigger_CSR_STATUS_IND_LISR(kal_uint8 cfn);
//extern void TDD_TL1D_L2PutHISRCsrQueue(TDD_pul_inform_MAC func, void *data);


//extern void mac_hs_get_variable_pdu_buffer(kal_uint8   **buffer_ptr, kal_uint32 num);
/*hs pdu buffer free shall only be invoked by UMAC, so no extern here	*/
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

//extern void mac_r4_get_variable_pdu_buffer(kal_uint8   **buffer_ptr, kal_uint32 num);
extern void lumac_pch_get_variable_pdu_buffer(kal_uint8 **ppBuffer, kal_uint32 num);//interface to L1


#ifdef __HSUPA_SUPPORT__
/* Data path interface from TL1D, LISR / HISR / Task not decided yet */
//extern etfc_eval_info_ind_T* umac_e_dch_tick_1(etfc_eval_info_req_T *etfc_eval_input);

//extern edch_data_ind_T* umac_e_dch_tick_2(edch_data_req_T *edch_data_input);

//extern void umac_e_dch_tick_3(kal_uint8 harq_id, tdd128_modulation_E modulation);

//extern void umac_e_dch_tick_4(void);  /*for MTK in-hourse project only*/

//extern void ul_inform_Edch_MAC(void  *data);

//extern void TL1D_L2PutHISRQueue(pul_inform_MAC func, void *data);

/*TL1 return the Non-Scheduled Tx TTIs in the specified extended estimation window.*/
//extern kal_uint8 tl1_eval_ext_est_wnd(kal_uint8 ext_est_wnd);
#endif

/*****************************************************************************
 UMAC UT SIMULATE MESSAGE
*****************************************************************************/

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

typedef struct 
{
    kal_uint8		  ref_count;
    kal_uint16		  msg_len;

    kal_uint8         cfn;
    kal_uint8         ul_mac_event;     /* bit 0: UL DCH setup,   */ 
                                                   /* bit 1: UL DCH release, */
                                                  /* bit 2: UL DCH modify   */
    TDD_tx_enable_type_E  tx_enable;         /* set true if TX data could be sent (min TTI) */
    kal_bool          tx_suspend;
    kal_uint8         tfc_status[TDD_MAX_UL_TFC];
  	kal_uint8		meas_occasion_ind;
}tdd_phy_simulate_dch_ul_cctrch_lisr_struct;

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
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

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
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

typedef struct 
/*UMAC*/{
/*UMAC*/    kal_uint8							ref_count;
/*UMAC*/    kal_uint16							msg_len;
/*UMAC*/
/*UMAC*/    kal_uint8 cfn;
/*UMAC*/   kal_uint8         num_trch;   
/*UMAC*/   TDD_ulTrchData        trchInfo[TDD_MAX_TRCH_NUM]; 
/*UMAC*/   kal_uint16        tfci;
/*UMAC*/   kal_uint16        num_data[TDD_MAX_TRCH_NUM]; 
/*UMAC*/   kal_uint8         *data[TDD_MAX_TRCH_NUM];
}tdd_phy_simulate_dch_ul_cctrch_lisr_rsp_struct;

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
/* under construction !*/
/* under construction !*/
#endif

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

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
/* under construction !*/
/* under construction !*/
#endif

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

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
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#ifdef __HSUPA_SUPPORT__
typedef struct
{
    kal_uint8   ref_count;
    kal_uint16  msg_len;

    TDD_etfc_eval_info_req_T etfc_eval_input;
}tdd_phy_simulate_umac_e_dch_tick_1_struct;


typedef struct
{
    kal_uint8   ref_count;
    kal_uint16  msg_len;

    TDD_etfc_eval_info_ind_T  etfc_eval_info_ind;
}tdd_phy_simulate_umac_e_dch_tick_1_rsp_struct;


typedef struct
{
    kal_uint8   ref_count;
    kal_uint16  msg_len;

    TDD_edch_data_req_T  edch_data_input;
}tdd_phy_simulate_umac_e_dch_tick_2_struct;


typedef struct
{
    kal_uint8   ref_count;
    kal_uint16  msg_len;

    TDD_edch_data_ind_T  edch_data_ind;
}tdd_phy_simulate_umac_e_dch_tick_2_rsp_struct;

typedef struct
{
    kal_uint8   ref_count;
    kal_uint16  msg_len;

    kal_uint8   harq_id;
    TDD_tdd128_modulation_E modulation;
}tdd_phy_simulate_umac_e_dch_tick_3_struct;
#endif

/*****************************************************************************
 MSC Composer
*****************************************************************************/
/* The following definition is used only for MSC composer.      */
typedef union _TDD_local_para_unpack_T
{
   tdd_cphy_pch_setup_req_struct     cphy_pch_setup_req;
   tdd_cphy_pch_modify_req_struct    cphy_pch_modify_req;
   tdd_cphy_pch_release_req_struct   cphy_pch_release_req;
   tdd_cphy_fach_setup_req_struct    cphy_fach_setup_req;
   tdd_cphy_fach_release_req_struct  cphy_fach_release_req;
   tdd_cphy_dch_setup_req_struct     cphy_dch_setup_req;
   tdd_cphy_dch_modify_req_struct    cphy_dch_modify_req;
   tdd_cphy_dch_release_req_struct   cphy_dch_release_req;
   tdd_cphy_rach_setup_req_struct    cphy_rach_setup_req;
   tdd_cphy_rach_release_req_struct  cphy_rach_release_req;
   tdd_cphy_hsdsch_setup_req_struct     cphy_hsdsch_setup_req;
   tdd_cphy_hsdsch_modify_req_struct    cphy_hsdsch_modify_req;
   tdd_cphy_hsdsch_release_req_struct   cphy_hsdsch_release_req;
#ifdef __HSUPA_SUPPORT__
   tdd_cphy_edch_setup_req_struct       cphy_edch_setup_req;
   tdd_cphy_edch_modify_req_struct      cphy_edch_modify_req;
   tdd_cphy_edch_release_req_struct     cphy_edch_release_req;  
#endif
   tdd_cphy_measurement_config_dmo_req_struct cphy_measurement_config_dmo_req;
} TDD_local_para_unpack_T;

typedef struct _TDD_msg_buf_unpack_T                /* Buffer of message container */
{
   kal_uint8         channel_id;                   /* Channel ID */
   msg_type          msg_id;                       /* Message ID */
   kal_uint16        buff_size;                    /* Buffer size */
   TDD_local_para_unpack_T         buffer;             /* Channel configuration message buffer */
} TDD_msg_buf_unpack_T;

typedef struct _TDD_cphy_msg_container_req_unpack_struct
{
    LOCAL_PARA_HDR  
    kal_uint8           at_ref;                     /* Reference channge of activation time.
                                                                                                0 : Ref channel is the released channel.
                                                                                                    There should be ch to be released
                                                                                                1 : Ref channel is the setup channel.
                                                                                        There should be ch to be setup.*/

    /*
    meas_control_E      meas_control;               // Indicate whether TL1 need to not to resume meas. after apply corresponding buffer's config. 
    kal_int8            idx_intra_freq;             // [Range]: 0 ~ 2. Indicate which frequency in the array uarfcn[TDD_MAX_UMTS_FREQ] is intra-frequency, -1 means invalid    
    */                                                                      
    kal_uint8           rab_domain_field;           /* BIT0: CS present, 
                                                       BIT1: PS present */

    kal_int16        rx_cfn;            /* Indicate peer message receive cfn. Ex: tti = 4, receive frame number : 0,1,2,3.  rx_cfn = 3 (set by tl1)
                                                                        [Range]: -1 ~ 255.    
                                                                        -1 : Means upper layer internal control
                                                                      */

    kal_uint8           msg_num;                    /* # of included msg. 1 ~ 4 */
    TDD_msg_buf_unpack_T    msg_buffer[4];              /* List of msg buffer for included channel msg */

    /* [R5R6] For HS-DSCH and E-DCH */
    kal_uint8                     h_msg_num;                            /* # of included H-msg. 0~2 */
    TDD_msg_buf_unpack_T              h_msg_buffer[2];                      /* List of msg buffer for included channel msg */
    kal_uint8                     e_msg_num;                            /* # of included E-msg. 0~2 */
    TDD_msg_buf_unpack_T              e_msg_buffer[2];                      /* List of msg buffer for included channel msg */
//#if defined( __UMTS_R9__ ) && defined ( __AST3002__ )
    kal_uint8                     dmo_msg_num;          /* # of included dmo-msg. 0~1 */
    TDD_msg_buf_unpack_T              dmo_msg_buffer[1];    /* List of msg buffer for included channel msg */
    //#endif

} tdd_cphy_msg_container_req_unpack_struct;

typedef struct _TDD_cphy_channel_quality_status_ind_struct
{
	LOCAL_PARA_HDR
	kal_bool is_triggered;
} tdd_cphy_channel_quality_status_ind_struct;

//add for TDD SAR
#if 1 //__TDD_TX_PWR_REDUCE__
typedef struct _tl1_umts_max_tx_pwr_red_req_struct
{
    LOCAL_PARA_HDR
    kal_bool   valid;
    kal_uint8  umts_power_reduction_in_edb[20][2];
         /*SAR_BAND_UMTS_TDSCDMA_A_BAND_2010 = 21; [0][0],[0][1] (first for no upa or dpa, second for upa or dpa)
                  SAR_BAND_UMTS_TDSCDMA_F_BAND_1880 = 22;   [1][0],[1][1]
                  SAR_BAND_UMTS_TDSCDMA_E_BAND_2300 = 23;   [2][0],[2][1]
                  SAR_BAND_UMTS_TDSCDMA_A_BAND_1900 = 24;   [3][0],[3][1]
                  SAR_BAND_UMTS_TDSCDMA_B_BAND_1850 = 25;   [4][0],[4][1]
                  SAR_BAND_UMTS_TDSCDMA_C_BAND_1910 = 27;   [5][0],[5][1]
                  SAR_BAND_UMTS_TDSCDMA_D_BAND_2570 = 28;   [6][0],[6][1]*/

/* add power reduction value for ANT1 (op=9/10). 
* when user only specify one set of values by using op=1/3, L4C help copy parameters from umts_power_reduction_in_edb[] to umts_power_reduction_in_edb_ANT1[]*/
   kal_uint8         umts_power_reduction_in_edb_tas[20][2/*Service*/];

}tl1_umts_max_tx_pwr_red_req_struct;
#endif

#ifdef __RF_SCAN_FOR_DESENSE_TEST__

typedef struct _l4ctl1_rssi_measurement_ind_struct
{
    LOCAL_PARA_HDR
    kal_int32      rssi1;
    kal_int32      rssi0;
}l4ctl1_rssi_measurement_ind_struct;




#else
typedef struct _l4ctl1_rssi_measurement_ind_struct
{
    LOCAL_PARA_HDR
    kal_int32      rssi_edBm;
}l4ctl1_rssi_measurement_ind_struct;


#endif
#ifdef __SGLTE__
/*add for b3 and b39 feature*/
typedef struct _TDD_gas_tl1_disable_b39_tx_req_struct
{
    LOCAL_PARA_HDR
    kal_bool is_disable_valid;   /* TRUE: use tx suspend, FALSE:use reduce tx power */
	kal_uint8 list_len;          /* b3_info_list valid num*/
    gl1_b3_info_struct b3_info_list[MULTIPLE_B3_INFO_NUM]; /*2g b3 high band info,contain:is_working_freq,index,arfcn,rssi
                                                             but now is only use index and rssi*/
}tdd_gas_tl1_disable_b39_tx_req_struct;
#endif

typedef struct _tdd_cphy_duplex_mode_change_req_struct
{
   LOCAL_PARA_HDR
   TDD_duplex_mode_info_T duplex_mode_info;
} tdd_cphy_duplex_mode_change_req_struct;

typedef struct _tdd_cphy_duplex_mode_change_cnf_struct
{
   LOCAL_PARA_HDR
   kal_bool result;
} tdd_cphy_duplex_mode_change_cnf_struct;

//251  = 63360*4 +128+64+2*128 BYTE=32128 *8(MAX HARE)=251K
//126  =253440*4+8*2*16*64=1030144bit/8=128768byte/1024=125.8K ALIGN 128 BYTE
//#define HARQ_BUFFER_MAX_SIZE_DEFINE      (69632)  //move to td_dpa.h

//TL1 AND MAC SHARE RX data buffer define

/*Weimin. Same as TDD_gRxPchBuffQueueSize, TDD_MAX_MAC_PCH_PDU_NUM in tl1_cnst.h*/
#define   DL_PCH_DATA_BUF_NUM          2
#define   DL_DCH_DATA_BUF_NUM          8
#define   HSDSCH_DATA_BUF_NUM         12
#define   DL_DCH_BUF_SIZE           1472  //10240/8+32*2+32*4=1472
#define   HSDSCH_DATA_BUF_SIZE      1860  //14043/8+45*2=1846

/*//////////////////////////////////////below -  interface for MT6291////////////////////////*/
typedef struct __MAC_TO_TL1_RX_BUF_T_
{
  kal_uint32 EmiBufFlag; //when MAC fill one avaliable EMI buf,  set to true, and TL1 can configure this buffer to RXBRP
                     //when TL1 configure this buffer to RXBRP, set to false
  //kal_uint32 EmiBufIndex; //MAC use,  no need any more
  kal_uint32 EmiBufAdress; //TL1 use
  kal_uint32 padding; //reserved
}MAC_TO_TL1_RX_BUF_T;

//TDSCDMA SLT Status
#if defined(__IC_SLT__)
#define TDSCDMA_SLT_DONE_PATTERN      0x3535
#define TDSCDMA_SLT_SUCCESS_PATTERN   0xF7F7
typedef struct _TL1_SLT_CC_INFO_T_
{
    kal_uint16  tl1SltDonePattern;
    kal_uint16  tl1SltResult;

    kal_uint8   rxFinalStatus;
    kal_uint8   txResult;
    kal_uint16  duration; //ms

}TL1_SLT_CC_INFO_T;
#endif

/*move to tl1_cnst.h*/
#if 0
/* under construction !*/
/* under construction !*/
#endif

/*add include file to share a defined varialbe -- dose not work*/
//@2014/12/11, set tick2_output->data non-shared memory
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
typedef struct __MAC_TO_TL1_EDCH_BUF_T__
{
  kal_uint32  TDD_gMACeiPDU[TDD_MAX_NUM_OF_EDCH_HARQ_PROCESS][TDD_MAC_E_PDU_MEMORY_SIZE / 4];
}MAC_TO_TL1_EDCH_BUF_T;


/*move to tl1_cnst.h*/
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
/* under construction !*/
/* under construction !*/
#endif

typedef struct _MAC_HS_Pdu_Buf_T_
{
   kal_uint8 tMacHsPduBufferArray[TDD_MAX_MAC_HS_PDU_NUM][TDD_mBYTE_SIZE_TO_32_BYTE_ALIGN_INC(TDD_MAX_HS_PDU_SIZE_IN_BYTES + TDD_DL_ADR_OFFSET)];
}MAC_HS_Pdu_Buf_T;

/*move to tl1_cnst.h*/
#if 0
/* under construction !*/
/* under construction !*/
#endif

typedef struct _MAC_R4_Pdu_Buf_T
{
  kal_uint8 tMacR4PduBufferArray[TDD_MAX_MAC_DCH_PDU_NUM][TDD_MAX_MAC_DCH_PDU_SIZE];
}MAC_R4_Pdu_Buf_T;

typedef struct _MAC_Pch_Pdu_Buf_T
{
  kal_uint8 tMacPchPduBufferArray[TDD_MAX_MAC_PCH_PDU_NUM][TDD_MAX_MAC_PCH_PDU_SIZE];
}MAC_Pch_Pdu_Buf_T;

typedef struct _MAC_Pch_Pdus_Buf_T
{
  kal_uint8 tMacPchPdusBufferArray[TDD_MAX_MAC_PCH_PDU_NUM*TDD_MAX_MAC_PCH_PDU_SIZE];
}MAC_Pch_Pdus_Buf_T;


//TL1 and MAC cross core IRQ trigger Type define
typedef enum _TL1_and_MAC_IRQ_TYPE_T
{
    //TL1_TO_MAC_IRQ_TYPE
    TL1_EDCH_TICK1_START_TRIGGER = 0x1000,
    TL1_EDCH_TICK2_START_TRIGGER,
    TL1_UL_DCH_TICK_START_TRIGGER,
    TL1_UL_DCH_PREPARE_TX_AHEAD_TRIGGER,
    TL1_PHY_HSDSCH_DATA_IND_TRIGGER,
    //MAC_TO_TL1_IRQ_TYPE
    MAC_EDCH_TICK1_END_TRIGGER = 0x2000,
    MAC_EDCH_TICK2_END_TRIGGER,
    MAC_UL_DCH_TICK_END_TRIGGER
} TL1_and_MAC_IRQ_TYPE_T;
//****************interface for 6291 between UMAC & TL1 END**********************//

typedef struct _cphy_list_mode_cnf_struct
{
    LOCAL_PARA_HDR 
} cphy_list_mode_cnf_struct;


typedef struct _T_L1CASE_TX_CHECKSUM_IND
{
    kal_uint32 CrpChkSum[16];
    kal_uint32 BrpRU1ChkSum[16];
    kal_uint32 BrpRU2ChkSum[16];
}T_L1CASE_TX_CHECKSUM_IND;
typedef struct _T_L1CASE_TXTFCI
{
	kal_uint16 tfci[16];
}T_L1CASE_TXTFCI;
#ifdef __HSUPA_SUPPORT__
typedef struct _fta_edch_tick_1_output_para_T
{
	kal_bool is_user_data_available;
}fta_edch_tick_1_output_para_T;

typedef struct _fta_edch_tick_retx_set_T
{
	kal_uint8 sched_retx_harq_num;
	kal_uint8 sched_retx_harq_id[4];
	kal_uint8 non_sched_retx_harq_num;
	kal_uint8 non_sched_retx_harq_id[4];
}fta_edch_tick_retx_set_T;

typedef struct _fta_edch_tick_newtx_set_T
{
	kal_uint8 sched_newtx_harq_num;
	kal_uint8 sched_newtx_harq_id[4];
	kal_uint8 non_sched_newtx_harq_num;
	kal_uint8 non_sched_newtx_harq_id[4];
}fta_edch_tick_newtx_set_T;

typedef struct _fta_edch_case_ctrl_para_T
{
	kal_bool stub_use_case_set;
	kal_bool use_case_set;
	kal_uint8 twait_timeout;
	kal_uint8 etfci;
	kal_uint16 data_size; 
	TDD_tdd128_modulation_E modulation;
	fta_edch_tick_1_output_para_T tick_1_output;
	fta_edch_tick_retx_set_T tick_retx_set;
	fta_edch_tick_newtx_set_T tick_newtx_set;
}fta_edch_case_ctrl_para_T;
#endif

typedef struct _tl1test_init_req_struct
{
    LOCAL_PARA_HDR 
}tl1test_init_req_struct;

typedef enum _tl1test_ul_msgid_T
{
	TL1TEST_SET_TFCI,
	TL1TEST_GET_CHECKSUM,
	TL1TEST_EDCH_PARAM,
}tl1test_ul_msgid_T;
typedef struct _tl1test_ul_param_req_struct
{
    LOCAL_PARA_HDR 
    tl1test_ul_msgid_T msgid;
    T_L1CASE_TXTFCI tfci;
#ifdef __HSUPA_SUPPORT__
    fta_edch_case_ctrl_para_T edch_param;
#endif
}tl1test_ul_param_req_struct;
typedef struct _tl1test_ul_info_ind_struct
{
    LOCAL_PARA_HDR 
	tl1test_ul_msgid_T msgid;
	
    T_L1CASE_TX_CHECKSUM_IND checksum;
}tl1test_ul_info_ind_struct;

#endif
