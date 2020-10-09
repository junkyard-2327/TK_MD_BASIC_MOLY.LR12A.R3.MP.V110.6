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
 *   el1d_meta_if.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *  LTE test mode specific definitions for synchronizing with HOST tool
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 11 13 2019 wade.chen
 * [MOLY00457350] ??TX干扰RX??需求
 * 	
 * 	[R3] non-sync NSFT
 *
 * 03 13 2019 yu-hsuan.sung
 * [MOLY00389569] [T100] 在信??好地方，插入移?sim卡，?屏待手机休眠后解??亮手机??信??差，稍后自?恢复
 *
 * 11 06 2018 chenghsu.ke
 * [MOLY00362383] GEN 93/95 MIPI PA Tuning
 * 	
 * 	Gen93 meta MIPI PA Tuning DPD part.
 *
 * 09 12 2018 mars.chang
 * [MOLY00347908] [GEN93_R3]MIPI PA Bias Tuning feature
 *
 * 02 12 2018 wade.chen
 * [MOLY00306800] B28??工具控制±0.3dB
 * 	[EL1C] NSFT tx power offset
 *
 * 02 12 2018 wade.chen
 * [MOLY00305372] [  ?急] B3+B7 CA校准??不?，疑似patch引起
 *
 * 	LTE NSFT pseudo TRX in force mode
 *
 * 09 28 2017 wei-shou.yang
 * [MOLY00277821] [MT6293][DPD][SMT] DPD code update
 * Replace LTE and WCDMA DPD assert by cal fail.
 *
 * 09 28 2017 wei-shou.yang
 * [MOLY00277821] [MT6293][DPD][SMT] DPD code update
 * Replace LTE and WCDMA DPD assert by cal fail.
 *
 * 09 26 2017 wei-shou.yang
 * [MOLY00277821][MT6293][DPD][SMT] DPD code update. Replace LTE and WCDMA DPD assert by cal fail
 *
 * 09 18 2017 wei-shou.yang
 * [MOLY00277821] [MT6293][DPD][SMT] DPD code update
 * Replace LTE and WCDMA DPD assert by cal fail
 *
 * 08 08 2017 chenghsu.ke
 * [MOLY00268393] [EL1D][DPD] DPD calibration/norrmal mode/otfc codes.
 *
 * 	[93][UMOLYA][EL1D DPD] mipi/TPC/custom code update.
 *
 * 07 26 2017 yu-hsuan.sung
 * [MOLY00266857] [GEN93][LTE] RX measurement delay for DFE under plan B scenario
 * .
 *
 * 07 21 2017 yungshian.lai
 * [MOLY00266063] [EL1TST] GPS coclock v2.0 Development - 4G Read AuxADC /2G add capability and modify DHL PSTrace - UMOLYA.
 *
 * 07 17 2017 wei-shou.yang
 * [MOLY00263955] [93][DPD] Meta tool capability
 * 1. 3/4G factory cal capability.
 * 2. Traditional cal capability.
 * 3. Fix xL1sim build error.
 *
 * 07 17 2017 wei-shou.yang
 * [MOLY00263955] [93][DPD] Meta tool capability
 * 1. 3/4G factory cal capability.
 * 2. Traditional cal capability.
 * 3. Fix xL1sim build error.
 *
 * 07 17 2017 kai-wei.chou
 * [MOLY00263951] [MT6293][DPD] DPD delay search, update the method to PUSCH and bypass the confirm msg.
 * .
 *
 * 07 07 2017 wei-han.tseng
 * [MOLY00262670] [6293] add CCA compile option for 6177L/6177M
 * - move CA support/route number to common part for MCU & DSP.
 *
 * 06 14 2017 chia-hung.tsai
 * [MOLY00256312] [UMOLYA][EL1TST] Sync from ZION DEV branch
 *
 * 	.
 *
 * 06 13 2017 kai-wei.chou
 * [MOLY00256747] [DPD] new create LTE/WCDMA DPD.
 * .
 *
 * 05 10 2017 johnny.chiang
 * [MOLY00233456] [Bianco_SMT][UMOLYA] 93 TSTM_META Development
 *
 * 	.umolya patch back
 *
 * 04 05 2017 mars.chang
 * [MOLY00198691] [MT6293][EL1TST] Common Modification
 * LTE RF tool Related modify & temperature trace imply
 *
 * 03 30 2017 johnny.chiang
 * [MOLY00202329] [UMOLYA] 93 TSTM_META Development
 *
 * 	.
 *
 * 03 28 2017 johnny.chiang
 * [MOLY00202329] [UMOLYA] 93 TSTM_META Development
 *
 * 	.
 *
 * 03 19 2017 johnny.chiang
 * [MOLY00202329] [UMOLYA] 93 TSTM_META Development
 *
 * 	.
 *
 * 03 16 2017 chia-hung.tsai
 * [MOLY00235233] [MT6293][EL1TST] 1. DDL & TX SYS feature  2. RX RF Tool Simutaneously issue fixed
 *
 * 	.
 *
 * 03 08 2017 johnny.chiang
 * [MOLY00202329] [UMOLYA] 93 TSTM_META Development
 *
 * 	.apply new nsft interface
 *
 * 03 01 2017 chia-hung.tsai
 * [MOLY00231879] [MT6293][EL1TST] TST Common Modify
 *
 * 	.
 *
 * 02 10 2017 mars.chang
 * [MOLY00198691] [MT6293][EL1TST] Common Modification
 * 1.modify RF window off timing
 * 2.modify query LNA mode RSSI issue
 * 3.add RX simutaneously calibration DFE drooping value
 * 4.modify RX LNA mode number
 *
 * 02 04 2017 mars.chang
 * [MOLY00198691] [MT6293][EL1TST] Common Modification
 * modify cont-rx structure member
 *
 * 02 03 2017 mars.chang
 * [MOLY00198691] [MT6293][EL1TST] Common Modification
 * add gp cmd
 *
 * 01 23 2017 mars.chang
 * [MOLY00198691] [MT6293][EL1TST] Common Modification
 * modify RPT memory behavior & simulation case renaming mechanism
 *
 * 01 19 2017 johnny.chiang
 * [MOLY00202329] [UMOLYA] 93 TSTM_META Development
 * .add structure for ERF_TEST_CMD_QUERY_AUXADC_TEMP
 *
 * 01 19 2017 johnny.chiang
 * [MOLY00202329] [UMOLYA] 93 TSTM_META Development
 *
 * 	.
 *
 * 01 18 2017 mars.chang
 * [MOLY00198691] [MT6293][EL1TST] Common Modification
 * Add TST trace & Rptbin create mechanism
 *
 * 01 11 2017 mars.chang
 * [MOLY00198691] [MT6293][EL1TST] Common Modification
 * 1.modify EL1TST ELT log format
 * 2.modify FHC TX window OFF flow
 *
 * 01 04 2017 mars.chang
 * [MOLY00198691] [MT6293][EL1TST] Common Modification
 * modify RX T2 antenna mask bit
 *
 * 01 04 2017 mars.chang
 * [MOLY00198691] [MT6293][EL1TST] Common Modification
 * modify structure type & capability parsing typo
 *
 * 12 30 2016 mars.chang
 * [MOLY00198691] [MT6293][EL1TST] Common Modification
 * 1.hrm structure modify
 * 2.capability modify
 * 3.DFE off behavior modify
 * 4.Power dector API imply
 * 5.modify TX flag operation
 * 6.modify ant idx build warning
 *
 * 12 28 2016 mars.chang
 * [MOLY00198691] [MT6293][EL1TST] Common Modification
 * 1.modify nvram read typo
 * 2.finished FHC auto  parsing mechanism
 * 3.add fhc bin create mechanism
 * 4.modify fhc_pre_task simulation parsing mechanism & nonnecessary XL1SIM parameter
 * 5.create PD fetch & FHC script handling.
 * 6.compliance SE2 coding rule
 * 7.Modify forced route using  2. Use cc_idx for gain assign at partial-on case.
 * 8.add task-pre simulation log parsing mechanism
 * 9.modify el1tst_cmd_q structure naming
 * 10.Fix report memory allocated size
 *
 * 12 25 2016 johnny.chiang
 * [MOLY00202329] [UMOLYA] 93 TSTM_META Development
 *
 * 	.93 tstm_meta patch back
 *
 * 12 20 2016 mars.chang
 * [MOLY00198691] [MT6293][EL1TST] Common Modification
 * 1.add FEC offer nvram idx & capability parsing mechanism
 * 2.modify maximum RX T1 seq num 8->7
 * 3.add RX DFE stable time
 * 4. modify SE2 coding rule warning
 * 5. add DFE OB OFF pair prise matching mechanism
 * 6. add VPE check for lacking function
 *
 * 12 14 2016 mars.chang
 * [MOLY00198691] [MT6293][EL1TST] Common Modification
 * Rollback
 *
 * 12 14 2016 johnny.chiang
 * [MOLY00202329] [UMOLYA] 93 TSTM_META Development
 *
 * 	.add 93 tstm meta cmd struct
 *
 * 12 14 2016 mars.chang
 * [MOLY00198691] [MT6293][EL1TST] Common Modification
 * Shrinking CMD & XL1SIM issure resolved
 *
 * 12 12 2016 johnny.chiang
 * [MOLY00202329] [UMOLYA] 93 TSTM_META Development
 *
 * 	.add 93 meta cmd
 *
 * 12 07 2016 chia-hung.tsai
 * [MOLY00216903] [EL1TST] Create el1tst task and script parser on xl1sim
 *
 * 	.
 *
 * 12 06 2016 chihpin.chu
 * [MOLY00211427] [NSFT]Remove list mode CCA support
 *
 * 	Rollback //UMOLYA/TRUNK/UMOLYA/mcu/common/interface/modem/l1/lte/external/el1d_meta_if.h to revision 1
 *
 * 12 05 2016 mars.chang
 * [MOLY00198691] [MT6293][EL1TST] Common Modification
 * MT6293 EL1TST First huge modification
 *
 *
 ****************************************************************************/

#ifndef LTE_META_TOOL_H
#define LTE_META_TOOL_H

#include "kal_general_types.h"
#include "ft_msg_common.h"
#include "el1d_rf_custom_data.h"
#include "mml1_dpd_def.h"

/******************* General Define ******************/

#define TOOL_NOT_SUPPORT                  2
#define TOOL_CNF_OK                       1
#define TOOL_CNF_FAIL                     0

#define ERF_BAND_MAP_SIZE                 2 //support 2*32 bands at maximum, need to align LTE_BIT_MASK_BUFFER_SIZE
#define ERF_BAND_MAPPING_TBL_SIZE         ERF_BAND_MAP_SIZE*32

#define MAX_TEMP_SECTION_NUM              8

#define MAX_FHC_BAND_NUM                  10
#define MAX_FHC_RX_FREQ_NUM               22
#define MAX_FHC_TX_FREQ_NUM               22
#define MAX_PWR_STEP_NUM                  27
#define MAX_NSFT_LIST_TX_BAND_NUM         10
#define MAX_NSFT_LIST_TX_FREQ_NUM         13

#define MAX_NSFT_LIST_RXTX_BAND_NUM       8
#define MAX_NSFT_LIST_RXTX_FREQ_NUM       8
#define MAX_NSFT_LIST_RX_ROUTE_NUM        8
#define MAX_NSFT_LIST_TX_ROUTE_NUM        8   /* Total 316 SB: 256  CCA: 35  SB bypassed mode: 20  CCA bypassed mode: 5 */
#define MAX_NSFT_LIST_RXTX_PWR_LEVEL_NUM  5


#define MAX_RX_RFTOOL_FERQ_NUM            5

#define MAX_TX_PA_MODE_NUM                3
#define MAX_TX_PA_LEVEL_NUM               8
#define MAX_TX_DET_MODE_NUM               MAX_TX_PA_MODE_NUM
#define ADDITIONAL_PA_LEVEL               2
#define MAX_TX_RPT_NUM                   (MAX_TX_DET_MODE_NUM + MAX_TX_PA_LEVEL_NUM + ADDITIONAL_PA_LEVEL)

#define MAX_EL1TST(m,n)                  (((m)>(n))?(m):(n))

#define TX_PATH_FEATURE_NORMAL_PATH       0x0000
#define TX_PATH_FEATURE_FILTERED_PATH     0x0001
#define TX_PATH_FEATURE_UL_CCA            0x0002

#define LTE_ANT_NONE_MASK                 0x00
#define LTE_ANT_0_MASK                    0x01
#define LTE_ANT_1_MASK                    0x02

#define LTE_PORT_ASCII_ARRAY_SIZE         8

#define ERF_MAX_PEER_BUF_CNF_BYTE_SIZE    51200 //50*1024
#define ERF_MAX_PEER_BUF_CNF_WORD_SIZE    (ERF_MAX_PEER_BUF_CNF_BYTE_SIZE >> 2)


#define MAX_LTE_AFC_USED_CAPID_ARRAY      32

/********************* MT6292 Constant Definitions *********************/

#define ERF_MAX_BAND_NUM_V2               35
#define ERF_MAX_TX_CCA_BAND_NUM_V2        ERF_MAX_BAND_NUM_V2
#define ERF_MAX_TX_BYPASS_BAND_NUM_V2     5

#define MAX_FHC_RX_FREQ_NUM_V2            15
#define MAX_FHC_TX_FREQ_NUM_V2            15

#define MAX_RX_ANT_NUM_V2                 2
#define MAX_RX_CC_NUM_V2                  4
#define MAX_TX_CC_NUM_V2                  2

#define EL1TST_MAX_RX_LNA_TYPE_V2         2 // LNA & ELNA


#define MAX_TX_TYPE1_CATEGORY_NUM_V2      16
#define MAX_TX_CATEGORY_NUM_V2            MAX_TX_TYPE1_CATEGORY_NUM_V2

#define MAX_RX_TYPE1_CATEGORY_NUM_V2      16
#define MAX_RX_TYPE2_CATEGORY_NUM_V2      8
#define MAX_RX_CATEGORY_NUM_V2            MAX_RX_TYPE1_CATEGORY_NUM_V2 + MAX_RX_TYPE2_CATEGORY_NUM_V2

#define MAX_RX_TYPE1_LNA_N_MODE_NUM_V2    8  //for LNA normal mode
#define MAX_RX_TYPE1_LNA_L_MODE_NUM_V2    3  //for LNA low power mode
#define MAX_RX_TYPE1_LNA_MODE_NUM_V2      (MAX_RX_TYPE1_LNA_N_MODE_NUM_V2 + MAX_RX_TYPE1_LNA_L_MODE_NUM_V2)

#define MAX_RX_TYPE2_LNA_N_MODE_NUM_V2    8  //for LNA normal mode
#define MAX_RX_TYPE2_LNA_L_MODE_NUM_V2    3  //for LNA low power mode
#define MAX_RX_TYPE2_LNA_MODE_NUM_V2      (MAX_RX_TYPE2_LNA_N_MODE_NUM_V2 + MAX_RX_TYPE2_LNA_L_MODE_NUM_V2)

#define RX_TYPE2_START_ROUTE_NUM_V2       512
#define MAX_RX_TYPE2_GBG_PATH_NUM_V2      2

#define MAX_FHC_TX_TYPE1_ROUTE_NUM_V2     256
#define MAX_FHC_RX_TYPE1_ROUTE_NUM_V2     512
#define MAX_FHC_RX_TYPE2_ROUTE_NUM_V2     64

#define MAX_TX_ROUTE_NUM_V2               MAX_FHC_TX_TYPE1_ROUTE_NUM_V2
#define MAX_RX_ROUTE_NUM_V2               MAX_FHC_RX_TYPE1_ROUTE_NUM_V2 + MAX_FHC_RX_TYPE2_ROUTE_NUM_V2

#define MAX_FHC_RX_TYPE1_CMD_NUM_V2       16
#define MAX_FHC_RX_TYPE2_CMD_NUM_V2       8
#define MAX_FHC_TX_TYPE1_CMD_NUM_V2       16

#define MAX_FHC_RX_TYPE1_REPORT_NUM_V2    16
#define MAX_FHC_RX_TYPE2_REPORT_NUM_V2    8
#define MAX_FHC_TX_TYPE1_REPORT_NUM_V2    16

#define MAX_FHC_BAND_CMD_NUM_V2             MAX_EL1TST(MAX_EL1TST(MAX_FHC_RX_TYPE1_CMD_NUM_V2,MAX_FHC_RX_TYPE2_CMD_NUM_V2),MAX_FHC_TX_TYPE1_CMD_NUM_V2)


#define MAX_RX_TYPE1_CAL_DATA_ACCESS_NUM_V2  65
#define MAX_RX_TYPE2_CAL_DATA_ACCESS_NUM_V2  5
#define MAX_TX_TYPE1_CAL_DATA_ACCESS_NUM_V2  32

#define LTE_ANT_ALL_MASK_V2    (LTE_ANT_0_MASK | LTE_ANT_1_MASK)

/********************* MT6293 Constant Definitions *********************/

#define ERF_MAX_BAND_NUM_V3                       25
#define ERF_MAX_TX_CCA_BAND_NUM_V3                ERF_MAX_BAND_NUM_V3
#define ERF_MAX_TX_BYPASS_BAND_NUM_V3             5

#define ERF_MAX_FHC_RX_FREQ_NUM_V3                15
#define ERF_MAX_FHC_TX_FREQ_NUM_V3                15

#define ERF_MAX_RX_ANT_NUM_V3                     2
#define ERF_MAX_RX_CC_NUM_V3                      2
#define ERF_MAX_TX_CC_NUM_V3                      2
#define ERF_MAX_RX_CC_NUM_V3M                     1
#define ERF_MAX_TX_CC_NUM_V3M                     1

#define ERF_MAX_RX_ELNA_TYPE_V3                   5

#define ERF_MAX_TX_TYPE1_CATEGORY_NUM_V3          4
#define ERF_MAX_TX_CATEGORY_NUM_V3                ERF_MAX_TX_TYPE1_CATEGORY_NUM_V3

#define ERF_MAX_RX_TYPE1_CATEGORY_NUM_V3          4
#define ERF_MAX_RX_TYPE2_CATEGORY_NUM_V3          2
#define ERF_MAX_RX_CATEGORY_NUM_V3                ERF_MAX_RX_TYPE1_CATEGORY_NUM_V3 + ERF_MAX_RX_TYPE2_CATEGORY_NUM_V3

#define ERF_MAX_RX_LNA_MODE_NUM_V3                7  //for LNA normal mode

#define ERF_MAX_RX_TYPE1_SEQ_NUM_V3               7
#define ERF_MAX_RX_TYPE2_SEQ_NUM_V3               18

#define ERF_RX_TYPE2_START_ROUTE_NUM_V3           96
#define ERF_MAX_RX_TYPE2_GBG_PATH_NUM_V3          2

#define ERF_MAX_FHC_TX_TYPE1_ROUTE_NUM_V3         50
#define ERF_MAX_FHC_RX_TYPE1_ROUTE_NUM_V3         88
#define ERF_MAX_FHC_RX_TYPE2_ROUTE_NUM_V3         22

#define ERF_MAX_TX_ROUTE_NUM_V3                   ERF_MAX_FHC_TX_TYPE1_ROUTE_NUM_V3
#define ERF_MAX_RX_ROUTE_NUM_V3                   ERF_MAX_FHC_RX_TYPE1_ROUTE_NUM_V3 + ERF_MAX_FHC_RX_TYPE2_ROUTE_NUM_V3
#define ERF_MAX_TX_ROUTE_AND_PS_NUM_V3            (ERF_MAX_TX_ROUTE_NUM_V3 * 4) /* Each route could be filter/non filter, cca/non cca, 4 combinations */

#define ERF_LTE_ANT_ALL_MASK_V3                   (LTE_ANT_0_MASK | LTE_ANT_1_MASK)

#define ERF_MAX_FHC_RX_TYPE1_CMD_NUM_V3           12
#define ERF_MAX_FHC_RX_TYPE2_CMD_NUM_V3           6
#define ERF_MAX_FHC_TX_TYPE1_CMD_NUM_V3           12

#define ERF_MAX_FHC_RX_TYPE1_REPORT_NUM_V3        12
#define ERF_MAX_FHC_RX_TYPE2_REPORT_NUM_V3        6
#define ERF_MAX_FHC_TX_TYPE1_REPORT_NUM_V3        12

#define ERF_MAX_FHC_BAND_CMD_NUM_V3               MAX_EL1TST(MAX_EL1TST(ERF_MAX_FHC_RX_TYPE1_CMD_NUM_V3,ERF_MAX_FHC_RX_TYPE2_CMD_NUM_V3),ERF_MAX_FHC_TX_TYPE1_CMD_NUM_V3)



#define ERF_MAX_RX_TYPE1_CAL_DATA_ACCESS_NUM_V3   ( ERF_MAX_PEER_BUF_CNF_BYTE_SIZE/sizeof(ERfRxPathLossTable_Type1_V3_T) )
#define ERF_MAX_RX_TYPE2_CAL_DATA_ACCESS_NUM_V3   ( ERF_MAX_PEER_BUF_CNF_BYTE_SIZE/sizeof(ERfRxPathLossTable_Type2_V3_T) )
#define ERF_MAX_TX_TYPE1_CAL_DATA_ACCESS_NUM_V3   ( ERF_MAX_PEER_BUF_CNF_BYTE_SIZE/sizeof(ERfTxTpcSetting_V3_T) )

#define LTE_DPD_MAX_PA_LEVEL_NUM              8
#define LTE_DPD_MAX_PGA_NUM_PER_PA            1
#define LTE_DPD_MAX_AM_LUT_GAIN_NUM           (LTE_DPD_MAX_PA_LEVEL_NUM * LTE_DPD_MAX_PGA_NUM_PER_PA) /* PA*PGA gain combination */
#define LTE_DPD_MAX_PM_LUT_GAIN_NUM           LTE_DPD_MAX_AM_LUT_GAIN_NUM /* Align AM */
#define LTE_DPD_FDB_NUM                       (ERF_MAX_FHC_TX_FREQ_NUM_V3 * LTE_DPD_MAX_PA_LEVEL_NUM) /* refer ramp_pga_swing_dbv in LTE_DPD_COMMON_CAL_T */
#define LTE_DPD_MAX_PTAR_TH_NUM               (ERF_MAX_FHC_TX_FREQ_NUM_V3 * LTE_DPD_MAX_PA_LEVEL_NUM) /* refer ptar_th_tmp in LTE_DPD_COMMON_CAL_T */
#define LTE_DPD_MAX_IMPLICIT_RSV_NUM          0
#define LTE_DPD_MAX_IMPLICIT_NUM              (LTE_DPD_FDB_NUM + LTE_DPD_MAX_PTAR_TH_NUM + LTE_DPD_MAX_IMPLICIT_RSV_NUM)
#define LTE_DPD_MAX_SET_ALL_DATA_NUM          6 /* floor(MMRF_MAX_TOOL_PEER_SIZE_PER_CMD / sizeof(ERfTestCmd_SetDpdPaAndDpdFacCalAll_OneRoute)) */
#define LTE_DPD_MAX_GET_ALL_DATA_NUM          LTE_DPD_MAX_SET_ALL_DATA_NUM
#define LTE_DPD_MAX_SET_PARTIAL_DATA_NUM      65 /* floor(MMRF_MAX_TOOL_PEER_SIZE_PER_CMD / sizeof(ERfTestCmd_SetDpdPaAndDpdFacCalPartial_OneRoute)) */
#define LTE_MAX_DPD_DELAY_SET_DATA_NUM        210
#define LTE_MAX_DPD_DELAY_GET_DATA_NUM        260
#define MAX_LTE_DPD_DELAY_SEARCH_CA_CBW_NUM   10

/******************* General Enumeration & Union ******************/

typedef enum
{
   ERF_TDD,
   ERF_FDD,
}ERfTestDuplexModeE;

typedef enum
{
   ERF_BW_6RB,   // 1.4 MHz
   ERF_BW_15RB,  //   3 MHz
   ERF_BW_25RB,  //   5 MHz
   ERF_BW_50RB,  //  10 MHz
   ERF_BW_75RB,  //  15 MHz
   ERF_BW_100RB, //  20 MHz
}ERfTestBwE;

typedef enum
{
   ERF_MCS_QPSK,
   ERF_MCS_16QAM,
   ERF_MCS_64QAM,
}ERfTestMcsE;

typedef enum
{
   ERF_TX_CTRL_MODE_POWER_VALUE = 0, // use txPowerValue
   ERF_TX_CTRL_MODE_HW_REGISTER = 1  // use HW register
}ERfTestTxCtrlModeE;

typedef enum
{
   ERF_NW_SEL_NS1  = 0,
   ERF_NW_SEL_NS2  = 1,
   ERF_NW_SEL_NS3  = 2,
   ERF_NW_SEL_NS4  = 3,
   ERF_NW_SEL_NS5  = 4,
   ERF_NW_SEL_NS6  = 5,
   ERF_NW_SEL_NS7  = 6,
   ERF_NW_SEL_NS8  = 7,
   ERF_NW_SEL_NS9  = 8,
   ERF_NW_SEL_NS10 = 9,
   ERF_NW_SEL_NS11 = 10,
   ERF_NW_SEL_NS12 = 11,
   ERF_NW_SEL_NS13 = 12,
   ERF_NW_SEL_NS14 = 13,
   ERF_NW_SEL_NS15 = 14,
   ERF_NW_SEL_NS16 = 15,
   ERF_NW_SEL_NS17 = 16,
   ERF_NW_SEL_NS18 = 17,
   ERF_NW_SEL_NS19 = 18,
   ERF_NW_SEL_NS20 = 19,
   ERF_NW_SEL_NS21 = 20,
   ERF_NW_SEL_NS22 = 21,
   ERF_NW_SEL_NS23 = 22,
   ERF_NW_SEL_NS24 = 23,
   ERF_NW_SEL_NS25 = 24,
   ERF_NW_SEL_NS26 = 25,
   ERF_NW_SEL_NS27 = 26,
   ERF_NW_SEL_NS28 = 27,
   ERF_NW_SEL_NS29 = 28,
   ERF_NW_SEL_NS30 = 29,
   ERF_NW_SEL_NS31 = 30,
   ERF_NW_SEL_NS32 = 31,
}ERfTestNwSelE;

#ifndef __LTE_L1SIM__

typedef enum
{
   ERF_TX_PA_MODE_HIGH = 0,
   ERF_TX_PA_MODE_MID  = 1,
   ERF_TX_PA_MODE_LOW  = 2
}ERfTestTxPaModeE;

#else

typedef kal_uint8 ERfTestTxPaModeE;

#endif


typedef enum
{
   LTE_BAND1_DL_MIN   = 21100, LTE_BAND1_DL_MID   = 21400, LTE_BAND1_DL_MAX   = 21699,
   LTE_BAND2_DL_MIN   = 19300, LTE_BAND2_DL_MID   = 19600, LTE_BAND2_DL_MAX   = 19899,
   LTE_BAND3_DL_MIN   = 18050, LTE_BAND3_DL_MID   = 18425, LTE_BAND3_DL_MAX   = 18799,
   LTE_BAND4_DL_MIN   = 21100, LTE_BAND4_DL_MID   = 21325, LTE_BAND4_DL_MAX   = 21549,
   LTE_BAND5_DL_MIN   =  8690, LTE_BAND5_DL_MID   =  8815, LTE_BAND5_DL_MAX   =  8939,
   LTE_BAND6_DL_MIN   =  8750, LTE_BAND6_DL_MID   =  8800, LTE_BAND6_DL_MAX   =  8849,
   LTE_BAND7_DL_MIN   = 26200, LTE_BAND7_DL_MID   = 26550, LTE_BAND7_DL_MAX   = 26899,
   LTE_BAND8_DL_MIN   =  9250, LTE_BAND8_DL_MID   =  9425, LTE_BAND8_DL_MAX   =  9599,
   LTE_BAND9_DL_MIN   = 18449, LTE_BAND9_DL_MID   = 18624, LTE_BAND9_DL_MAX   = 18798,
   LTE_BAND10_DL_MIN  = 21100, LTE_BAND10_DL_MID  = 21400, LTE_BAND10_DL_MAX  = 21699,
   LTE_BAND11_DL_MIN  = 14759, LTE_BAND11_DL_MID  = 14859, LTE_BAND11_DL_MAX  = 14958,
   LTE_BAND12_DL_MIN  =  7290, LTE_BAND12_DL_MID  =  7375, LTE_BAND12_DL_MAX  =  7459,
   LTE_BAND13_DL_MIN  =  7460, LTE_BAND13_DL_MID  =  7510, LTE_BAND13_DL_MAX  =  7559,
   LTE_BAND14_DL_MIN  =  7580, LTE_BAND14_DL_MID  =  7630, LTE_BAND14_DL_MAX  =  7679,
   LTE_BAND17_DL_MIN  =  7340, LTE_BAND17_DL_MID  =  7400, LTE_BAND17_DL_MAX  =  7459,
   LTE_BAND18_DL_MIN  =  8600, LTE_BAND18_DL_MID  =  8675, LTE_BAND18_DL_MAX  =  8749,
   LTE_BAND19_DL_MIN  =  8750, LTE_BAND19_DL_MID  =  8825, LTE_BAND19_DL_MAX  =  8899,
   LTE_BAND20_DL_MIN  =  7910, LTE_BAND20_DL_MID  =  8060, LTE_BAND20_DL_MAX  =  8209,
   LTE_BAND21_DL_MIN  = 14959, LTE_BAND21_DL_MID  = 15034, LTE_BAND21_DL_MAX  = 15108,
   LTE_BAND22_DL_MIN  = 35100, LTE_BAND22_DL_MID  = 35500, LTE_BAND22_DL_MAX  = 35899,
   LTE_BAND23_DL_MIN  = 21800, LTE_BAND23_DL_MID  = 21900, LTE_BAND23_DL_MAX  = 21999,
   LTE_BAND24_DL_MIN  = 15250, LTE_BAND24_DL_MID  = 15420, LTE_BAND24_DL_MAX  = 15589,
   LTE_BAND25_DL_MIN  = 19300, LTE_BAND25_DL_MID  = 19625, LTE_BAND25_DL_MAX  = 19949,
   LTE_BAND26_DL_MIN  =  8590, LTE_BAND26_DL_MID  =  8765, LTE_BAND26_DL_MAX  =  8939,
   LTE_BAND27_DL_MIN  =  8520, LTE_BAND27_DL_MID  =  8605, LTE_BAND27_DL_MAX  =  8689,
   LTE_BAND28_DL_MIN  =  7580, LTE_BAND28_DL_MID  =  7805, LTE_BAND28_DL_MAX  =  8029,
   LTE_BAND29_DL_MIN  =  7170, LTE_BAND29_DL_MID  =  7225, LTE_BAND29_DL_MAX  =  7279,
   LTE_BAND30_DL_MIN  = 23500, LTE_BAND30_DL_MID  = 23550, LTE_BAND30_DL_MAX  = 23599,
   LTE_BAND31_DL_MIN  =  4625, LTE_BAND31_DL_MID  =  4650, LTE_BAND31_DL_MAX  =  4674,
   LTE_BAND32_DL_MIN  = 14520, LTE_BAND32_DL_MID  = 14740, LTE_BAND32_DL_MAX  = 14959,
   LTE_BAND33_DL_MIN  = 19000, LTE_BAND33_DL_MID  = 19100, LTE_BAND33_DL_MAX  = 19199,
   LTE_BAND34_DL_MIN  = 20100, LTE_BAND34_DL_MID  = 20175, LTE_BAND34_DL_MAX  = 20249,
   LTE_BAND35_DL_MIN  = 18500, LTE_BAND35_DL_MID  = 18800, LTE_BAND35_DL_MAX  = 19099,
   LTE_BAND36_DL_MIN  = 19300, LTE_BAND36_DL_MID  = 19600, LTE_BAND36_DL_MAX  = 19899,
   LTE_BAND37_DL_MIN  = 19100, LTE_BAND37_DL_MID  = 19200, LTE_BAND37_DL_MAX  = 19299,
   LTE_BAND38_DL_MIN  = 25700, LTE_BAND38_DL_MID  = 25950, LTE_BAND38_DL_MAX  = 26199,
   LTE_BAND39_DL_MIN  = 18800, LTE_BAND39_DL_MID  = 19000, LTE_BAND39_DL_MAX  = 19199,
   LTE_BAND40_DL_MIN  = 23000, LTE_BAND40_DL_MID  = 23500, LTE_BAND40_DL_MAX  = 23999,
   LTE_BAND41_DL_MIN  = 24960, LTE_BAND41_DL_MID  = 25930, LTE_BAND41_DL_MAX  = 26899,
   LTE_BAND42_DL_MIN  = 34000, LTE_BAND42_DL_MID  = 35000, LTE_BAND42_DL_MAX  = 35999,
   LTE_BAND43_DL_MIN  = 36000, LTE_BAND43_DL_MID  = 37000, LTE_BAND43_DL_MAX  = 37999,
   LTE_BAND44_DL_MIN  =  7030, LTE_BAND44_DL_MID  =  7530, LTE_BAND44_DL_MAX  =  8029,
   LTE_BAND45_DL_MIN  = 14470, LTE_BAND45_DL_MID  = 14570, LTE_BAND45_DL_MAX  = 14669,
   LTE_BAND46_DL_MIN  = 51500, LTE_BAND46_DL_MID  = 55375, LTE_BAND46_DL_MAX  = 59249,
   LTE_BAND65_DL_MIN  = 21100, LTE_BAND65_DL_MID  = 21550, LTE_BAND65_DL_MAX  = 21999,
   LTE_BAND66_DL_MIN  = 21100, LTE_BAND66_DL_MID  = 21550, LTE_BAND66_DL_MAX  = 21999,
   LTE_BAND67_DL_MIN  =  7380, LTE_BAND67_DL_MID  =  7480, LTE_BAND67_DL_MAX  =  7579,
   LTE_BAND252_DL_MIN = 51500, LTE_BAND252_DL_MID = 52000, LTE_BAND252_DL_MAX = 52499,
   LTE_BAND255_DL_MIN = 57250, LTE_BAND255_DL_MID = 57875, LTE_BAND255_DL_MAX = 58499,
}ERfTestDlFrequency_E;

typedef union
{
   kal_uint16              in_100khz;
   ERfTestDlFrequency_E    in_enum;
}ERfTestDlFrequency_U;

typedef enum
{
   ERF_TEST_RX_HPM            = 0,
   ERF_TEST_RX_LPM            = 1,
   ERF_TEST_RX_POWER_MODE_NUM,
   ERF_TEST_RX_POWER_MODE_MAX =  0xFF
}ERfTestRxPowerMode_E;

/*********************RF calibration structure*********************/

typedef enum
{
   ERF_TEST_CMD_START_PUSCH_TX               =  0, /* phase out */
   ERF_TEST_CMD_START_PUCCH_TX               =  1, /* phase out */
   ERF_TEST_CMD_START_PRACH_TX               =  2, /* phase out */
   ERF_TEST_CMD_START_SRS_TX                 =  3, /* phase out */
   ERF_TEST_CMD_START_MIX_RX                 =  4, /* phase out */
   ERF_TEST_CMD_GET_MIX_RX_RPT               =  5, /* phase out */
   ERF_TEST_CMD_RESET_COUNTER                =  6,
   ERF_TEST_CMD_STOP_TEST_MODE               =  7,
   ERF_TEST_CMD_SET_TX_TPC_SETTING           =  8, /* phase out */
   ERF_TEST_CMD_GET_TX_TPC_SETTING           =  9, /* phase out */
   ERF_TEST_CMD_GET_RF_CAPABILITY            = 10,
   ERF_TEST_CMD_START_AFC_SINGLE_TONE_TX     = 11, /* phase out */
   ERF_TEST_CMD_SET_AFC_SETTING              = 12,
   ERF_TEST_CMD_GET_AFC_SETTING              = 13,
   ERF_TEST_CMD_START_TPC_SINGLE_TONE_TX     = 14, /* phase out */
   ERF_TEST_CMD_SET_TPC_PA_GAIN              = 15, // unused on 92, TX would not implement trad-K
   ERF_TEST_CMD_GET_POWER_DETECTOR_VALUE     = 16,
   ERF_TEST_CMD_START_RSSI                   = 17, /* phase out */
   ERF_TEST_CMD_GET_RSSI_SETTING             = 18, /* phase out */
   ERF_TEST_CMD_SET_RSSI_SETTING             = 19, /* phase out */
   ERF_TEST_CMD_START_FHC                    = 20, /* phase out */
   ERF_TEST_CMD_CHECK_IF_FUNC_EXIST          = 21,
   ERF_TEST_CMD_GET_RF_TEMP                  = 22, /* phase out */
   ERF_TEST_CMD_GET_TADC_SETTING             = 23, /* phase out */
   ERF_TEST_CMD_SET_TADC_SETTING             = 24, /* phase out */
   ERF_TEST_CMD_START_NSFT_LIST              = 25, /* phase out */
   ERF_TEST_CMD_START_CONT_RX                = 26, /* phase out */
   ERF_TEST_CMD_SET_RF_MIPI_CODEWORD         = 27, /* phase out */
   ERF_TEST_CMD_GET_RF_MIPI_CODEWORD         = 28, /* phase out */
   ERF_TEST_CMD_GET_TEMPERATURE_INFO         = 29, /* phase out */
   ERF_TEST_CMD_SET_ET_MODE                  = 30, /* phase out */
   ERF_TEST_CMD_SET_FILTER_PATH_FLAG         = 31, /* phase out */
   ERF_TEST_CMD_START_ETCAL                  = 32, /* phase out */
   ERF_TEST_CMD_GET_ETCAL_SETTING            = 33, /* phase out */
   ERF_TEST_CMD_SET_ETCAL_SETTING            = 34, /* phase out */
   ERF_TEST_CMD_SET_TOOL_USAGE_TO_L1         = 35, /* phase out */
   ERF_TEST_CMD_QUERY_NVRAM_LID              = 36,
   ERF_TEST_CMD_GET_GPS_CO_CLOCK_DATA        = 37,
   ERF_TEST_CMD_SET_GPS_CO_CLOCK_DATA        = 38,
   ERF_TEST_CMD_CHECK_ET_PATH_DELAY_SEARCH   = 39, /* phase out */
   ERF_TEST_CMD_START_ET_PATH_DELAY_SEARCH   = 40, /* phase out */
   ERF_TEST_CMD_SET_LNA_SRX                  = 41, /* phase out */
   ERF_TEST_CMD_START_RSSI_CA_MODE           = 42, /* phase out */
   ERF_TEST_CMD_START_CONT_RX_CA_MODE        = 43, /* phase out */
   ERF_TEST_CMD_GET_RSSI_SETTING_EX          = 44, /* phase out */
   ERF_TEST_CMD_SET_RSSI_SETTING_EX          = 45, /* phase out */
   ERF_TEST_CMD_START_MIX_RX_CA_Mode         = 46, /* phase out */
   ERF_TEST_CMD_GET_MIX_RX_CA_MODE_RPT       = 47, /* phase out */
   ERF_TEST_CMD_QUERY_CA_CONFIG_TABLE        = 48, /* phase out */
   ERF_TEST_CMD_START_FHC_CA_MODE            = 49, /* phase out */
   ERF_TEST_CMD_SET_HRM_FLAG                 = 50, /* phase out */
   ERF_TEST_CMD_SET_FILTER_TX_TPC_SET        = 51, /* phase out */
   ERF_TEST_CMD_GET_FILTER_TX_TPC_SET        = 52, /* phase out */
   ERF_TEST_CMD_SET_HRM_TX_TPC_SET           = 53, /* phase out */
   ERF_TEST_CMD_GET_HRM_TX_TPC_SET           = 54, /* phase out */
   ERF_TEST_CMD_FORCE_TAS                    = 55, /* phase out */
   ERF_TEST_CMD_START_NSFT_HRM_LIST          = 56, /* phase out */
   ERF_TEST_CMD_START_NSFT_RXTX_LIST         = 57, /* phase out */
   ERF_TEST_CMD_QUERY_CA_CONFIG_TABLE_V2     = 58, /* phase out */
   ERF_TEST_CMD_START_FHC_CA_MODE_V2         = 59, /* phase out */
   ERF_TEST_CMD_GET_RX_TX_SETTING_V2         = 60, /* phase out */
   ERF_TEST_CMD_SET_RX_TX_SETTING_V2         = 61, /* phase out */
   //ERF_TEST_CMD_START_AFC_SINGLE_TONE_TX_V2= 62,// Non used
   ERF_TEST_CMD_START_TPC_SINGLE_TONE_TX_V2  = 63,
   ERF_TEST_CMD_START_RSSI_V2                = 64, /* phase out */
   ERF_TEST_CMD_START_CONT_RX_V2             = 65, /* phase out */
   ERF_TEST_CMD_GET_TXRX_ROUTE_INFO          = 66,
   ERF_TEST_CMD_START_PUSCH_TX_CA_V2         = 67, /* phase out */
   ERF_TEST_CMD_START_PUCCH_TX_V2            = 68, /* phase out */
   ERF_TEST_CMD_START_PRACH_TX_V2            = 69, /* phase out */
   ERF_TEST_CMD_START_SRS_TX_CA_V2           = 70, /* phase out */
   ERF_TEST_CMD_START_MIX_RX_CA_V2           = 71, /* phase out */
   ERF_TEST_CMD_GET_MIX_RX_CA_RPT_V2         = 72, /* phase out */
   ERF_TEST_CMD_START_NSFT_TX_RX_LIST_V2     = 73, /* phase out */
   ERF_TEST_CMD_RX_ANT_PATH_SEL              = 74, /* phase out */

   ERF_TEST_CMD_QUERY_CA_CONFIG_TABLE_V3     = 75,
   ERF_TEST_CMD_GET_RX_TX_SETTING_V3         = 76,  // for get type-1 RX, type-2 RX or type-1 TX cal data
   ERF_TEST_CMD_SET_RX_TX_SETTING_V3         = 77,  // for set type-1 RX, type-2 RX or type-1 TX cal data
   ERF_TEST_CMD_START_RSSI_V3                = 78,
   ERF_TEST_CMD_GET_RX_GAIN_INFO_V3          = 79,
   ERF_TEST_CMD_START_CONT_RX_V3             = 80,
   ERF_TEST_CMD_START_FHC_V3                 = 81,
   ERF_TEST_CMD_START_PUSCH_TX_CA_V3         = 82,
   ERF_TEST_CMD_START_PUCCH_TX_V3            = 83,
   ERF_TEST_CMD_START_PRACH_TX_V3            = 84,
   ERF_TEST_CMD_START_SRS_TX_CA_V3           = 85,
   ERF_TEST_CMD_START_MIX_RX_CA_V3           = 86,
   ERF_TEST_CMD_GET_MIX_RX_CA_RPT_V3         = 87,
   ERF_TEST_CMD_START_NSFT_TX_RX_LIST_V3     = 88,
   ERF_TEST_CMD_START_FHC_CA_MODE_ENHANCE    = 89, /*For 91 Titan requierement*/
   ERF_TEST_CMD_GET_PARTIAL_RSSI_SETTING     = 90, /*For 91 Titan requierement*/
   ERF_TEST_CMD_SET_PARTIAL_RSSI_SETTING     = 91, /*For 91 Titan requierement*/
   ERF_TEST_CMD_QUERY_CA_CONFIG_TABLE_EX     = 92, /*For 91 Titan requierement*/
   ERF_TEST_CMD_QUERY_AUXADC_TEMP            = 93,
   ERF_TEST_CMD_UBIN_MODE_SETUP              = 94,
   ERF_TEST_CMD_FHC_AFC_TX_CAL               = 106,
   ERF_TEST_CMD_GET_TX_POWER_OFFSET          = 110,
   ERF_TEST_CMD_SET_TX_POWER_OFFSET          = 111,
   ERF_TEST_CMD_GET_PA_MIPI_DATA             = 113,
   ERF_TEST_CMD_SET_PA_MIPI_DATA             = 114,
   ERF_TEST_CMD_GET_PA_TUNNING_BAND_INFO     = 125,

   /* --------------- please add new command prior to this line --------------- */
   ERF_TEST_CMD_GP_TOOL_COMMAND_START,
   ERF_TEST_CMD_END,
   ERF_TEST_CMD_MAX                        = 0x7FFFFFFF
}ERfTestCmdType;


/*******************************************************************************
 * Default Command Parameters
 ******************************************************************************/
#define DEFAULT_CNF_PARAM   kal_uint32  result;

typedef struct
{
   kal_uint8 void_param;
}ERfTestCmd_NoParam;

typedef struct
{
   DEFAULT_CNF_PARAM
} ERfTestCmd_DefaultCnfParam;

typedef struct
{
    DEFAULT_CNF_PARAM
    kal_uint8  l1cStatus;
    kal_uint32   debugInfo1;
    kal_uint32   debugInfo2;
    kal_uint32   debugInfo3;
} ERfTestResultGeneralResult;

typedef ERfTestResultGeneralResult  ERfTestCmdGeneralResult;  // for backward compatible


/*******************************************************************************
 * ERF_TEST_CMD_START_PUSCH_TX_CA_V2
 ******************************************************************************/

typedef struct
{

    kal_uint8                        band;
    ERfTestDuplexModeE  duplexMode;
    kal_uint8			 tddConfig;
    kal_uint8			 tddSfConfig;
    kal_uint16			 ulFrequency;/* range: 7280~26900 (100KHz unit) */
    kal_uint16			 cellId;
    ERfTestBwE			 ulBandwidth;
    kal_uint8			 vrbStart;
    kal_uint8			 vrbLength;
    ERfTestMcsE 		 mcsMode;
    ERfTestTxCtrlModeE	 txPwrMode;
    kal_int16			 txPowerValue;/*S(8,8)*/
    ERfTestNwSelE		 networkSelection;
    kal_bool			 txCloseLoopDisbl;
    kal_bool			 amprEnbl;
    kal_int16			 bbBackoff;/*S(8,8)*/
    kal_uint8			 rfGain;
    ERfTestTxPaModeE	 paMode;
    kal_uint8			 paVcc;
    kal_uint8			 vm0;
    kal_uint8			 vm1;
    kal_uint16			 txRoute;
    kal_uint8			 enableMultiCluster;
    kal_uint8			 vrbStart2;
    kal_uint8			 vrbLength2;
    kal_bool			 enableCsr;
    kal_uint16			 dlFrequency;
    kal_uint16			 routePathSel;	/* 0: bypass path, 1: filter path */
}ERfTestCmdPuschTxParam;

typedef struct
{
    kal_uint8              ulCCNum;
    kal_int16              afcdac;
    ERfTestCmdPuschTxParam puschTxParam[MAX_TX_CC_NUM_V2];
}ERfTestCmd_StartPuschTxCaV2_ReqParam;

typedef struct
{
    kal_uint8                        band;
    ERfTestDuplexModeE  duplexMode;
    kal_uint8			 tddConfig;
    kal_uint8			 tddSfConfig;
    kal_uint16			 ulFrequency;/* range: 7280~26900 (100KHz unit) */
    kal_uint16			 cellId;
    ERfTestBwE			 ulBandwidth;
    kal_uint8			 vrbStart;
    kal_uint8			 vrbLength;
    ERfTestMcsE 		 mcsMode;
    ERfTestTxCtrlModeE	 txPwrMode;
    kal_int16			 txPowerValue;/*S(8,8)*/
    ERfTestNwSelE		 networkSelection;
    kal_bool			 txCloseLoopDisbl;
    kal_bool			 amprEnbl;
    kal_int16			 bbBackoff;/*S(8,8)*/
    kal_uint8			 rfGain;
    ERfTestTxPaModeE	 paMode;
    kal_uint8			 paVcc;
    kal_uint8			 vm0;
    kal_uint8			 vm1;
    kal_uint16			 txRoute;
    kal_uint8			 enableMultiCluster;
    kal_uint8			 vrbStart2;
    kal_uint8			 vrbLength2;
    kal_bool			 enableCsr;
    kal_uint16			 dlFrequency;
    kal_uint16			 routePathSel;	/* 0: bypass path, 1: filter path */
}ERfTestCmdPuschTxParamV3;

typedef struct
{
    kal_uint8              ulCCNum;
    ERfTestCmdPuschTxParamV3  puschTxParam[MAX_TX_CC_NUM_V2];
}ERfTestCmd_StartPuschTxCaV3_ReqParam;

typedef ERfTestCmd_DefaultCnfParam  ERfTestCmd_StartPuschTxCaV2_CnfParam;
typedef ERfTestResultGeneralResult  ERfTestCmd_StartPuschTxCaV3_CnfParam;


/*******************************************************************************
 * ERF_TEST_CMD_START_PUCCH_TX_V2
 ******************************************************************************/
typedef struct
{
   kal_uint8            band;
   ERfTestDuplexModeE   duplexMode;
   kal_uint8            tddConfig;
   kal_uint8            tddSfConfig;
   kal_uint16           ulFrequency;/* range: 7280~26900 (100KHz unit) */
   kal_uint16           cellId;
   kal_int16            afcdac;
   ERfTestBwE           ulBandwidth;
   kal_uint8            format; /*0:1, 1:1a, 2:1b, 3:2, 4:2_cpack, 5:2a, 6:2b */
   kal_int16            txPowerValue;/*S(8,8)*/
   ERfTestNwSelE        networkSelection;
   kal_bool             txCloseLoopDisbl;
   kal_bool             amprEnbl;
   kal_uint16           txRoute;
   kal_uint16           routePathSel;   /* 0: bypass path, 1: filter path */
}ERfTestCmd_StartPucchTxV2_ReqParam;

typedef ERfTestCmd_DefaultCnfParam  ERfTestCmd_StartPucchTxV2_CnfParam;

typedef struct
{
   kal_uint8            band;
   ERfTestDuplexModeE   duplexMode;
   kal_uint8            tddConfig;
   kal_uint8            tddSfConfig;
   kal_uint16           ulFrequency;/* range: 7280~26900 (100KHz unit) */
   kal_uint16           cellId;
   ERfTestBwE           ulBandwidth;
   kal_uint8            format; /*0:1, 1:1a, 2:1b, 3:2, 4:2_cpack, 5:2a, 6:2b */
   kal_int16            txPowerValue;/*S(8,8)*/
   ERfTestNwSelE        networkSelection;
   kal_bool             txCloseLoopDisbl;
   kal_bool             amprEnbl;
   kal_uint16           txRoute;
   kal_uint16           routePathSel;   /* 0: bypass path, 1: filter path */
}ERfTestCmd_StartPucchTxV3_ReqParam;

typedef ERfTestResultGeneralResult  ERfTestCmd_StartPucchTxV3_CnfParam;


/*******************************************************************************
 * ERF_TEST_CMD_START_PRACH_TX_V2
 ******************************************************************************/
typedef struct
{
   kal_uint8      band;
   kal_uint16     ulFrequency;/* range: 7280~26900 (100KHz unit) */
   kal_uint16     cellId;
   kal_int16      afcdac;
   kal_uint8      configIndex; /* 0:fdd time mask, 1:tdd time mask, 2:fdd evm, 3:tdd evm*/
   kal_int16      txPowerValue;/*S(8,8)*/
   ERfTestNwSelE  networkSelection;
   kal_bool       txCloseLoopDisbl;
   kal_bool       amprEnbl;
   kal_uint16     txRoute;
   kal_uint16     routePathSel;   /* 0: bypass path, 1: filter path */
}ERfTestCmd_StartPrachTxV2_ReqParam;

typedef struct
{
   kal_uint8      band;
   kal_uint16     ulFrequency;/* range: 7280~26900 (100KHz unit) */
   kal_uint16     cellId;
   kal_uint8      configIndex; /* 0:fdd time mask, 1:tdd time mask, 2:fdd evm, 3:tdd evm*/
   kal_int16      txPowerValue;/*S(8,8)*/
   ERfTestNwSelE  networkSelection;
   kal_bool       txCloseLoopDisbl;
   kal_bool       amprEnbl;
   kal_uint16     txRoute;
   kal_uint16     routePathSel;   /* 0: bypass path, 1: filter path */
}ERfTestCmd_StartPrachTxV3_ReqParam;

//typedef ERfTestCmd_StartPrachTxV2_ReqParam  ERfTestCmdPrachTx;

typedef ERfTestCmd_DefaultCnfParam  ERfTestCmd_StartPrachTxV2_CnfParam;

typedef ERfTestResultGeneralResult  ERfTestCmd_StartPrachTxV3_CnfParam;


/*******************************************************************************
 * ERF_TEST_CMD_START_SRS_TX_CA_V2
 ******************************************************************************/
typedef struct
{
   kal_uint8            band;
   ERfTestDuplexModeE   duplexMode;
   kal_uint16           ulFrequency;/* range: 7280~26900 (100KHz unit) */
   kal_uint16           cellId;
   kal_uint8            tddCsSrsBwCfg; /*range: 0, 2, 5, 7*/
   kal_int16            txPowerValue;/*S(8,8)*/
   ERfTestNwSelE        networkSelection;
   kal_bool             txCloseLoopDisbl;
   kal_bool             amprEnbl;
   kal_uint16           txRoute;
   kal_uint16           routePathSel;   /* 0: bypass path, 1: filter path */
}ERfTestCmdSrsTxParam;

typedef struct
{
   kal_uint8            ulCCNum;
   kal_int16            afcdac;
   ERfTestCmdSrsTxParam srsTxParam[MAX_TX_CC_NUM_V2];
}ERfTestCmd_StartSrsTxCaV2_ReqParam;

typedef struct
{
   kal_uint8            ulCCNum;
   ERfTestCmdSrsTxParam srsTxParam[MAX_TX_CC_NUM_V2];
}ERfTestCmd_StartSrsTxCaV3_ReqParam;

typedef ERfTestCmd_DefaultCnfParam  ERfTestCmd_StartSrsTxCaV2_CnfParam;
typedef ERfTestResultGeneralResult  ERfTestCmd_StartSrsTxCaV3_CnfParam;


/*******************************************************************************
 * ERF_TEST_CMD_START_MIX_RX
 ******************************************************************************/
typedef struct
{
   kal_uint8            mode;//0: DL Rx, 1: Tx-Rx, 2: Pseudo Tx-Rx

   /*Common parameters*/
   kal_uint8            measCnt;//range 0~10
   ERfTestBwE           measBandwidth;
   kal_int16            afcdac;
   kal_uint16           dlFrequency;//range: 7280~26900 (100KHz unit)
   kal_uint8            band;//range 1~40
   ERfTestDuplexModeE   duplexMode;
   kal_uint8            tddConfig;//range 0~7
   kal_uint8            tddSfConfig;//range 0~8
   ERfTestBwE           bandwidth;
   kal_uint8            rxPath0Enbl;
   kal_uint8            rxPath1Enbl;

   /*Tx-Rx & Pseudo Tx-Rx only*/
   kal_uint16           ulFrequency;//range: 7280~26900 (100KHz unit)
   kal_int16            txPowerValue;/*S(8,8)*/

   /*Pseudo Tx-Rx only*/
   kal_uint8            vrbStart;
   kal_uint8            vrbLength;
   ERfTestMcsE          mcsMode;

}ERfTestCmd_StartMixRx_ReqParam;

typedef ERfTestCmd_StartMixRx_ReqParam  ERfTestCmdMixRx;
typedef ERfTestResultGeneralResult  ERfTestCmd_StartMixRx_CnfParam;


/*******************************************************************************
 * ERF_TEST_CMD_START_MIX_RX_CA_Mode
 ******************************************************************************/
typedef struct
{
   kal_uint8  mode;//0: DL Rx, 1: Tx-Rx, 2: Pseudo Tx-Rx

   /*Common parameters*/
   kal_uint8            measCnt[MAX_RX_CC_NUM_V2];//range 0~10
   ERfTestBwE           measBandwidth[MAX_RX_CC_NUM_V2];
   kal_int16            afcdac;
   kal_uint16           dlFrequency[MAX_RX_CC_NUM_V2];//range: 7280~26900 (100KHz unit)
   kal_uint8            band[MAX_RX_CC_NUM_V2];//range 1~40
   ERfTestDuplexModeE   duplexMode;
   kal_uint8            tddConfig[MAX_RX_CC_NUM_V2];//range 0~7
   kal_uint8            tddSfConfig[MAX_RX_CC_NUM_V2];//range 0~8
   ERfTestBwE           bandwidth;
   kal_uint8            rxPath0Enbl;
   kal_uint8            rxPath1Enbl;

   /*Tx-Rx & Pseudo Tx-Rx only*/
   kal_uint16           ulFrequency;//range: 7280~26900 (100KHz unit)
   kal_int16            txPowerValue;/*S(8,8)*/

   /*Pseudo Tx-Rx only*/
   kal_uint8            vrbStart;
   kal_uint8            vrbLength;
   ERfTestMcsE          mcsMode;
}ERfTestCmd_StartMixRxCaMode_ReqParam;

typedef ERfTestCmd_StartMixRxCaMode_ReqParam  ERfTestCmdMixRx_CaMode;
typedef ERfTestResultGeneralResult  ERfTestCmd_StartMixRxCaMode_CnfParam;


/*******************************************************************************
 * ERF_TEST_CMD_START_MIX_RX_CA_V2
 ******************************************************************************/
typedef struct
{
   /*Common parameters*/
   kal_uint8            measCnt;//range 0~10
   ERfTestBwE           measBandwidth;
   kal_uint16           dlFrequency;//range: 7280~26900 (100KHz unit)
   kal_uint8            band;//range 1~40
   ERfTestDuplexModeE   duplexMode;
   kal_uint8            tddConfig;//range 0~7
   kal_uint8            tddSfConfig;//range 0~8
   ERfTestBwE           bandwidth;
   kal_uint16           rxRoute;
   kal_uint16           routePathSel;   /* 0: bypass path, 1: filter path */

   /*Pseudo Tx-Rx only*/
   kal_bool             hasUl;
   kal_uint16           ulFrequency;//range: 7280~26900 (100KHz unit)
   kal_int16            txPowerValue;/*S(8,8)*/
   kal_uint8            vrbStart;
   kal_uint8            vrbLength;
   ERfTestMcsE          mcsMode;
   kal_uint16           txRoute;
}Mix_Rx_Dl_Ul_Ca_Normal_Mode_Param;

typedef struct
{
   kal_uint8                           mode;//0: DL Rx, 1: Tx-Rx, 2: force non-sync Rx, 3: force non-sync Tx-Rx
   //kal_int16                           afcdac;
   kal_uint8                           rxPath0Enbl;
   kal_uint8                           rxPath1Enbl;
   kal_uint8                           numOfDlCC;
   kal_uint8                           numOfUlCC;
   Mix_Rx_Dl_Ul_Ca_Normal_Mode_Param   mix_rx_dl_ul_ca_normal_mode_param[MAX_RX_CC_NUM_V2];
}Mix_Rx_Dl_Ul_Ca_Normal_Mode;

typedef struct
{
   kal_uint8            mode;//0: DL Rx, 1: Tx-Rx, 2: Pseudo Tx-Rx
   kal_uint8            measCnt;//range 0~10
   ERfTestBwE           measBandwidth;
   kal_uint16           dlFrequency;//range: 7280~26900 (100KHz unit)
   kal_uint8            band;//range 1~40
   ERfTestDuplexModeE   duplexMode;
   kal_uint8            tddConfig;//range 0~7
   kal_uint8            tddSfConfig;//range 0~8
   ERfTestBwE           bandwidth;
   kal_uint8            rxPath0Enbl;
   kal_uint8            rxPath1Enbl;
   kal_uint8            rxRoute;
   kal_uint16           routePathSel;   /* 0: bypass path, 1: filter path */
   kal_uint16           lpmHpmConf;
}Mix_Rx_Force_Mode;

typedef struct
{
   kal_uint8            measCnt;//range 0~10
   ERfTestBwE           measBandwidth;
   kal_uint16           dlFrequency;//range: 7280~26900 (100KHz unit)
   kal_uint8            band;//range 1~40
   ERfTestDuplexModeE   duplexMode;
   kal_uint8            tddConfig;//range 0~7
   kal_uint8            tddSfConfig;//range 0~8
   ERfTestBwE           bandwidth;
   kal_uint8            rxPath0Enbl;
   kal_uint8            rxPath1Enbl;
   kal_uint16           rxRoute;
   kal_uint16           routePathSel;   /* 0: bypass path, 1: filter path */
   kal_uint16           lpmHpmConf;

   /*Pseudo Tx-Rx only*/
   kal_bool             hasUl;
   kal_uint16           ulFrequency;//range: 7280~26900 (100KHz unit)
   kal_int16            txPowerValue;/*S(8,8)*/
   kal_uint8            vrbStart;
   kal_uint8            vrbLength;
   ERfTestMcsE          mcsMode;
   kal_uint16           txRoute;
} Mix_Rx_Tx_Force_Mode;

typedef struct
{
   kal_uint8 opMode; //0: normal mode, 1: force mode
   union
   {
      Mix_Rx_Dl_Ul_Ca_Normal_Mode   mix_rx_dl_ul_ca_normal_mode;
      Mix_Rx_Force_Mode             mix_rx_force_mode;
   }Mix_Rx_Dl_Ul_Ca_Mode;
}ERfTestCmd_StartMixRxCaV2_ReqParam;

typedef struct
{
   kal_uint8 opMode; //0: normal mode, 1: force Rx mode, 2: force mode for special pseudo Tx-Rx, 3: force non-sync Rx mode, 4: force non-sync Tx-Rx
   union
   {
       Mix_Rx_Dl_Ul_Ca_Normal_Mode   mix_rx_dl_ul_ca_normal_mode; // 0: normal mode
       Mix_Rx_Force_Mode             mix_rx_force_mode;           // 1: force mode
       Mix_Rx_Tx_Force_Mode          mix_rx_tx_force_mode;        // 2: force mode for special pseudo Tx-Rx
   }Mix_Rx_Dl_Ul_Ca_Mode;
}ERfTestCmd_StartMixRxCaV3_ReqParam;



typedef ERfTestResultGeneralResult  ERfTestCmd_StartMixRxCaV2_CnfParam;

typedef ERfTestResultGeneralResult  ERfTestCmd_StartMixRxCaV3_CnfParam;


/*******************************************************************************
 * ERF_TEST_CMD_GET_MIX_RX_RPT
 ******************************************************************************/
typedef ERfTestCmd_NoParam  ERfTestCmd_GetMixRxRpt_ReqParam;

typedef struct
{
   kal_uint8 measRptCnt;//range 0~10
   kal_int16 rssiPath0[10];//final format is TODO
   kal_int16 rssiPath1[10];//final format is TODO
   kal_int16 rsrpPath0[10];//final format is TODO
   kal_int16 rsrpPath1[10];//final format is TODO
   kal_int16 rsrqPath0[10];//final format is TODO
   kal_int16 rsrqPath1[10];//final format is TODO

   kal_uint32 crcOK_cnt;
   kal_uint32 crcNG_cnt;
}ERfTestCmd_GetMixRxRpt_CnfParam;

typedef ERfTestCmd_GetMixRxRpt_CnfParam  ERfTestCmdGetMixRxRpt;  // for backward compatible

/*******************************************************************************
 * ERF_TEST_CMD_GET_MIX_RX_CA_MODE_RPT
 ******************************************************************************/
typedef ERfTestCmd_NoParam  ERfTestCmd_GetMixRxCaModeRpt_ReqParam;

typedef struct
{
   kal_uint8 measRptCnt[MAX_RX_CC_NUM_V2];//range 0~10
   kal_int16 rssiPath0[MAX_RX_CC_NUM_V2][10];//final format is TODO
   kal_int16 rssiPath1[MAX_RX_CC_NUM_V2][10];//final format is TODO
   kal_int16 rsrpPath0[MAX_RX_CC_NUM_V2][10];//final format is TODO
   kal_int16 rsrpPath1[MAX_RX_CC_NUM_V2][10];//final format is TODO
   kal_int16 rsrqPath0[MAX_RX_CC_NUM_V2][10];//final format is TODO
   kal_int16 rsrqPath1[MAX_RX_CC_NUM_V2][10];//final format is TODO

   kal_uint32 crcOK_cnt[MAX_RX_CC_NUM_V2];
   kal_uint32 crcNG_cnt[MAX_RX_CC_NUM_V2];
}ERfTestCmd_GetMixRxCaModeRpt_CnfParam;

typedef ERfTestCmd_GetMixRxCaModeRpt_CnfParam  ERfTestCmdGetMixRxRpt_CaMode;  // for backward compatible
typedef ERfTestCmd_GetMixRxCaModeRpt_CnfParam  ERfTestResultGetMixRxRpt_CaMode;


/*******************************************************************************
 * ERF_TEST_CMD_GET_MIX_RX_CA_RPT_V2
 ******************************************************************************/
typedef ERfTestCmd_NoParam  ERfTestCmd_GetMixRxCaRptV2_ReqParam;

typedef struct
{
   kal_uint8 measRptCnt[MAX_RX_CC_NUM_V2];//range 0~10
   kal_int16 rssiPath0[MAX_RX_CC_NUM_V2][10];//final format is TODO
   kal_int16 rssiPath1[MAX_RX_CC_NUM_V2][10];//final format is TODO
   kal_int16 rsrpPath0[MAX_RX_CC_NUM_V2][10];//final format is TODO
   kal_int16 rsrpPath1[MAX_RX_CC_NUM_V2][10];//final format is TODO
   kal_int16 rsrqPath0[MAX_RX_CC_NUM_V2][10];//final format is TODO
   kal_int16 rsrqPath1[MAX_RX_CC_NUM_V2][10];//final format is TODO

   kal_uint32 crcOK_cnt[MAX_RX_CC_NUM_V2];
   kal_uint32 crcNG_cnt[MAX_RX_CC_NUM_V2];
}ERfTestCmd_GetMixRxCaRptV2_CnfParam;

typedef ERfTestCmd_GetMixRxCaRptV2_CnfParam  ERfTestCmdGetMixRxRpt_CaModeV2;  // for backward compatible
typedef ERfTestCmd_GetMixRxCaRptV2_CnfParam  ERfTestResultGetMixRxRpt_CaModeV2;


/*******************************************************************************
 * ERF_TEST_CMD_RESET_COUNTER
 ******************************************************************************/
typedef ERfTestCmd_NoParam  ERfTestCmd_ResetCounter_ReqParam;
typedef ERfTestCmd_DefaultCnfParam  ERfTestCmd_ResetCounter_CnfParam;


/*******************************************************************************
 * ERF_TEST_CMD_STOP_TEST_MODE
 ******************************************************************************/
typedef ERfTestCmd_NoParam  ERfTestCmd_StopTestMode_ReqParam;
typedef ERfTestCmd_DefaultCnfParam  ERfTestCmd_StopTestMode_CnfParam;

/*******************************************************************************
 * ERF_TEST_CMD_GET_TX_POWER_OFFSET
 ******************************************************************************/
typedef struct
{
   kal_uint16   band;
}ERfTestCmd_GetTxPowerOffset_ReqParam;

typedef struct
{
   kal_uint16   band;
   kal_int16    offsetvalue; /*S(11,5)*/
}ERfTestCmd_GetTxPowerOffset_CnfParam;

typedef ERfTestCmd_GetTxPowerOffset_ReqParam  ERfGetTxPowerOffsetReq;
typedef ERfTestCmd_GetTxPowerOffset_CnfParam  ERfGetTxPowerOffsetCnf;

/*******************************************************************************
 * ERF_TEST_CMD_SET_TX_POWER_OFFSET
 ******************************************************************************/
typedef struct
{
   kal_uint16   band;
   kal_int16    offsetvalue; /*S(11,5)*/
   kal_bool     updatenvram;
}ERfTestCmd_SetTxPowerOffset_ReqParam;

typedef ERfTestCmd_SetTxPowerOffset_ReqParam  ERfSetTxPowerOffsetReq;
typedef ERfTestCmd_DefaultCnfParam  ERfTestCmd_SetTxPowerOffset_CnfParam;

/*******************************************************************************
 * ERF_TEST_CMD_GET_RF_CAPABILITY
 ******************************************************************************/
typedef enum
{
   ERF_TEST_RFID_NULL    = 0,
   ERF_TEST_RFID_MT6169  = 1,
   ERF_TEST_RFID_MT6176  = 2,
   ERF_TEST_RFID_MT6179  = 3,
   ERF_TEST_RFID_MT6177L = 4,
   ERF_TEST_RFID_MT6177M = 5,
   ERF_TEST_RFID_END     = 0xFFFF
}ERfTestRfId_E;

typedef enum
{
   ERF_TEST_MODEM_NULL  =  0,
   ERF_TEST_MODEM_V1    =  1,
   ERF_TEST_MODEM_V2    =  2,
   ERF_TEST_MODEM_V3    =  3,
   ERF_TEST_MODEM_END   =  0xFFFF
}ERfTestLteGeneration_E;

typedef enum
{
   ERF_TEST_PARAMS_TEMP_DAC_SRC_NULL   = 0,
   ERF_TEST_PARAMS_TEMP_DAC_SRC_AUXADC = 1,
   ERF_TEST_PARAMS_TEMP_DAC_SRC_BSI    = 2,
   ERF_TEST_PARAMS_TEMP_DAC_SRC_END    = 0xFFFF
}ERfTestParamsTempDacSrc_E;

typedef enum
{
   ERF_TEST_AFC_TYPE_NULL   = 0,
   ERF_TEST_AFC_TYPE_TCVCXO = 1,
   ERF_TEST_AFC_TYPE_VCXO   = 2,
   ERF_TEST_AFC_TYPE_END    = 0xFFFF
}ERfTestAfcType_E;

typedef enum
{
   ERF_TEST_RX_GAIN_MODE_VERNO_INVALID = 0,
   ERF_TEST_RX_GAIN_MODE_VERNO1        = 1,
   ERF_TEST_RX_GAIN_MODE_VERNO2        = 2,
}ERfTestRxGainModeVerno_E;

typedef enum
{
   ERF_TEST_CA_MODE_UI_VERSION_INVALID = 0,
   ERF_TEST_CA_MODE_UI_VERSION1        = 1,
   ERF_TEST_CA_MODE_UI_VERSION2        = 2,
   ERF_TEST_CA_MODE_UI_VERSION_MAX,
}ERfTestCaModeUiVersion_E;

typedef enum
{
   ERF_TEST_TEMP_RANGE_M10_65 = 0,
   ERF_TEST_TEMP_RANGE_M10_90 = 1,
   ERF_TEST_TEMP_RANGE_INVALID,
}ERfTestTempRangeVersion_E;

typedef enum
{
   ERF_TEST_LTE_DPD_91 = 0,
   ERF_TEST_LTE_DPD_92 = 1,
   ERF_TEST_LTE_DPD_93 = 2
}ERfTestLteDpdGeneration;

typedef enum
{
   ERF_TEST_LTE_DPD_PA_SECTION = 0
}ERfTestLteDpdDataType;

typedef ERfTestCmd_NoParam  ERfTestCmd_GetRfCapability_ReqParam;
typedef ERfTestCmd_NoParam  ERfTestCmd_GetRfCapability_CnfParam;

/* the strict ordering MUST be kept */
typedef struct
{
   /*Struct should be 4 bytes alignment*/
   kal_uint32 supportBandMap[ERF_BAND_MAP_SIZE];            /*eg. Map[1]=0x3, it means we support band33, band34                           */
   kal_uint32 supportMipiBandMap[ERF_BAND_MAP_SIZE];        /*eg. Map[1]=0x3, it means we support MIPI at band33, band34                   */
   kal_uint32 supportCoexistenceBandMap[ERF_BAND_MAP_SIZE]; /*eg. Map[1]=0x3, it means we need to check wifi co-existence at band33, band34*/
   kal_uint32 supportDpdBandMap[ERF_BAND_MAP_SIZE];         /*eg. Map[1]=0x3, it means we support DPD calibration at band33, band34        */
   kal_uint32 supportCim3BandMap[ERF_BAND_MAP_SIZE];        /*eg. Map[1]=0x3, it means we support CIM3 calibration at band33, band34       */
   kal_uint32 supportHRMBandMap[ERF_BAND_MAP_SIZE];         /*eg. Map[1]=0x3, it means we need to check HRM at band33, band34*/
}ErfCapabilityItemSet;

/* DO NOT modify this structure */
typedef struct
{
   kal_uint32 is_capable  : 1;
   kal_uint32 is_mandatory: 1;
   kal_uint32 parameter   :30;
}ErfCalibrationItem;

/* the strict ordering MUST be kept */
typedef struct
{
   /*Struct should be 4 bytes alignment*/
   ErfCalibrationItem tadc_cal;                   /* 0: TADC calibration item                                 */
   ErfCalibrationItem multi_rat_tadc_bitmap;      /* 1: bit map of multi-rat TADC calibration                 */
   ErfCalibrationItem multi_rat_afc_bitmap;       /* 2: bit map of multi-rat AFC calibration                  */
   ErfCalibrationItem pd_temp_comp;               /* 3: Target support PD temperature compensation            */
   ErfCalibrationItem mipi_pa_level_and_cw_num;   /* 4: MIPI PA power level and codeword number for each level*/
   ErfCalibrationItem temperature_info;           /* 5: Temperature info. API                                 */
   ErfCalibrationItem et_module_support;          /* 6: support ET module or not                              */
   ErfCalibrationItem tool_usage_setting_support; /* 7: Support set tool usage or not                         */
   ErfCalibrationItem thermal_sensor_type;        /* 8: Report thermal sensor type (internal or external)     */
   ErfCalibrationItem cap_id_calibration;         /* 9: CAP ID calibration item                               */
   ErfCalibrationItem enable_csr;                 /*10: Enable CSR/MIB in Meta TX PUSCH mode                  */
   ErfCalibrationItem gps_co_tms_support;         /*11: Support GPS CO-TSX interface                          */
   ErfCalibrationItem lte_ca_support;             /*12: support LTE-A CA mode interface or not                */
   ErfCalibrationItem lte_ca_ena;                 /*13: Enable LTE-A CA mode interface or not                 */
   ErfCalibrationItem lte_dpd_support;            /*14: DPD calibration item                                  */
   ErfCalibrationItem lte_cim3_support;           /*15: CIM3 calibration item                                 */
   ErfCalibrationItem lte_Coexistence_support;    /*16: Coexistence calibration item                          */
   ErfCalibrationItem lte_HRM_support;            /*17: HRM         calibration item                          */
   ErfCalibrationItem fhc_sw_time;                /*18: For reporting FHC switch time to META tool            */
   ErfCalibrationItem nsft_extension;             /*19: For reporting NSFT extension support to META tool     */
   ErfCalibrationItem lte_tas_support;            /*20: For reporting LTE  TAS support (Only in MOLY)         */
   ErfCalibrationItem NCCABypassCheck;            /*21: For reporting NCCA Bypass check RX gain mode          */
   ErfCalibrationItem lte_generation_version;     /*22: For reporting generation version control              */
   ErfCalibrationItem lte_rftool_ui_version;      /*23: For reporting RF tool UI version control              */
   ErfCalibrationItem additional_palevel_support; /*24: For Factory cal PGA 12a 12b feature control           */
   ErfCalibrationItem lte_elna_support;           /*25: For lte elna feature support                          */
   ErfCalibrationItem lte_band2bitmap;            /*26: For lte band to bitmap mapping                        */
   ErfCalibrationItem lte_ubin_mode_setup;        /*27: For lte UBIN Mode Setup                               */
   ErfCalibrationItem lte_auxadc_read;            /*28: For lte AuxADC read                                   */
   ErfCalibrationItem lte_fhc_rx_measurement_info;/*29: For lte FHC RSSI measurement information              */
   ErfCalibrationItem lte_fhc_tx_measurement_info;/*30: For lte FHC Sinetone stable measurement information   */
   ErfCalibrationItem lte_ul256qam_support;       /*31: Support LTE ul 256qam or not                          */
   ErfCalibrationItem lte_max_ulcc_support;       /*32: For reporting LTE max ul cc                           */
   ErfCalibrationItem lte_force_mode_rxtx_support;/*33: Indicate whether pseudo TXRX in force mode is supported or not */
   ErfCalibrationItem report_rx_gain_in_mix_mode; /*34: Indicate whether "reporting used RX gain in RSRP/RSRQ mode" is supported or not */
   ErfCalibrationItem lte_afc_fhc;                /*35: Indicate AFC support FHC or not                       */
   ErfCalibrationItem lte_tx_power_modification;  /*36: Indicate LTE power modification supported or not      */
   ErfCalibrationItem lte_mipi_pa_tuning_support; /*37: Indicate MIPI PA Tuning UI supported                  */
   ErfCalibrationItem lte_tx_forward_test;        /*38: Indicate tx forward test is supported or not          */
   ErfCalibrationItem report_partial_band_info;   /*39: Indicate reporting freq range by-comp-route is supported or not */
   ErfCalibrationItem lte_tx_config_updt;         /*40: Indicate whether "tx config updt (route/pwr/vrb/mcs) w.o sync cell" is supported or not.   */
   ErfCalibrationItem lte_pa_bias_lab_tunning_support;  /*41: Indicate whether "PA Parameter tuning' is supported or not. */
   ErfCalibrationItem lte_hpue_route_info;        /*42: Indicate whether hpue route is supported or not.   */
   ErfCalibrationItem lte_rfde_cal_version;       /*43: RF Designer calibration algorithm version*/
   ErfCalibrationItem lte_afc_support_v5;         /*44: indicate lte afc calibraton flow support or not*/
}ErfCalibrationItemSet;

/* the strict ordering MUST be kept calibrationItems & capabilityItems are variable part*/
typedef struct
{
   /*Struct should be 4 bytes alignment*/
   kal_uint32              rfId;                      /*Please use enumeration "ERfId"*/
   kal_uint32              capability_item_offset;    /*Erf capability item offset (byte unit) from structure begin */
   kal_uint32              calibration_item_offset;   /*Erf calibration item offset (byte unit) from structure begin*/
   ErfCapabilityItemSet    capabilityItems;
   ErfCalibrationItemSet   calibrationItems;
}ERfTestCmd_GetRfCapability_CnfPdu;

typedef ERfTestCmd_GetRfCapability_CnfPdu  ERfTestResultRfCapability;


/*******************************************************************************
 * ERF_TEST_CMD_START_AFC_SINGLE_TONE_TX
 ******************************************************************************/
typedef enum
{
   ERF_AFC_DATA_TYPE_USE_CAL_RESULT = 0, // use calibration data
   ERF_AFC_DATA_TYPE_USE_UI_SETTING = 1  // use setting in UI
}ERfTestAfcDataTypeE;

typedef enum
{
   LTE_BAND1_UL_MIN   = 19200, LTE_BAND1_UL_MID   = 19500, LTE_BAND1_UL_MAX   = 19799,
   LTE_BAND2_UL_MIN   = 18500, LTE_BAND2_UL_MID   = 18800, LTE_BAND2_UL_MAX   = 19099,
   LTE_BAND3_UL_MIN   = 17100, LTE_BAND3_UL_MID   = 17475, LTE_BAND3_UL_MAX   = 17849,
   LTE_BAND4_UL_MIN   = 17100, LTE_BAND4_UL_MID   = 17325, LTE_BAND4_UL_MAX   = 17549,
   LTE_BAND5_UL_MIN   =  8240, LTE_BAND5_UL_MID   =  8365, LTE_BAND5_UL_MAX   =  8489,
   LTE_BAND6_UL_MIN   =  8300, LTE_BAND6_UL_MID   =  8350, LTE_BAND6_UL_MAX   =  8399,
   LTE_BAND7_UL_MIN   = 25000, LTE_BAND7_UL_MID   = 25350, LTE_BAND7_UL_MAX   = 25699,
   LTE_BAND8_UL_MIN   =  8800, LTE_BAND8_UL_MID   =  8975, LTE_BAND8_UL_MAX   =  9149,
   LTE_BAND9_UL_MIN   = 17499, LTE_BAND9_UL_MID   = 17674, LTE_BAND9_UL_MAX   = 17848,
   LTE_BAND10_UL_MIN  = 17100, LTE_BAND10_UL_MID  = 17400, LTE_BAND10_UL_MAX  = 17699,
   LTE_BAND11_UL_MIN  = 14279, LTE_BAND11_UL_MID  = 14379, LTE_BAND11_UL_MAX  = 14478,
   LTE_BAND12_UL_MIN  =  6990, LTE_BAND12_UL_MID  =  7075, LTE_BAND12_UL_MAX  =  7159,
   LTE_BAND13_UL_MIN  =  7770, LTE_BAND13_UL_MID  =  7820, LTE_BAND13_UL_MAX  =  7869,
   LTE_BAND14_UL_MIN  =  7880, LTE_BAND14_UL_MID  =  7930, LTE_BAND14_UL_MAX  =  7979,
   LTE_BAND17_UL_MIN  =  7040, LTE_BAND17_UL_MID  =  7100, LTE_BAND17_UL_MAX  =  7159,
   LTE_BAND18_UL_MIN  =  8150, LTE_BAND18_UL_MID  =  8225, LTE_BAND18_UL_MAX  =  8299,
   LTE_BAND19_UL_MIN  =  8300, LTE_BAND19_UL_MID  =  8375, LTE_BAND19_UL_MAX  =  8449,
   LTE_BAND20_UL_MIN  =  8320, LTE_BAND20_UL_MID  =  8470, LTE_BAND20_UL_MAX  =  8619,
   LTE_BAND21_UL_MIN  = 14479, LTE_BAND21_UL_MID  = 14554, LTE_BAND21_UL_MAX  = 14628,
   LTE_BAND22_UL_MIN  = 34100, LTE_BAND22_UL_MID  = 34500, LTE_BAND22_UL_MAX  = 34899,
   LTE_BAND23_UL_MIN  = 20000, LTE_BAND23_UL_MID  = 20100, LTE_BAND23_UL_MAX  = 20199,
   LTE_BAND24_UL_MIN  = 16265, LTE_BAND24_UL_MID  = 16435, LTE_BAND24_UL_MAX  = 16604,
   LTE_BAND25_UL_MIN  = 18500, LTE_BAND25_UL_MID  = 18825, LTE_BAND25_UL_MAX  = 19149,
   LTE_BAND26_UL_MIN  =  8140, LTE_BAND26_UL_MID  =  8315, LTE_BAND26_UL_MAX  =  8489,
   LTE_BAND27_UL_MIN  =  8070, LTE_BAND27_UL_MID  =  8155, LTE_BAND27_UL_MAX  =  8239,
   LTE_BAND28_UL_MIN  =  7030, LTE_BAND28_UL_MID  =  7255, LTE_BAND28_UL_MAX  =  7479,
   LTE_BAND30_UL_MIN  = 23050, LTE_BAND30_UL_MID  = 23100, LTE_BAND30_UL_MAX  = 23149,
   LTE_BAND31_UL_MIN  =  4525, LTE_BAND31_UL_MID  =  4550, LTE_BAND31_UL_MAX  =  4574,
   LTE_BAND33_UL_MIN  = 19000, LTE_BAND33_UL_MID  = 19100, LTE_BAND33_UL_MAX  = 19199,
   LTE_BAND34_UL_MIN  = 20100, LTE_BAND34_UL_MID  = 20175, LTE_BAND34_UL_MAX  = 20249,
   LTE_BAND35_UL_MIN  = 18500, LTE_BAND35_UL_MID  = 18800, LTE_BAND35_UL_MAX  = 19099,
   LTE_BAND36_UL_MIN  = 19300, LTE_BAND36_UL_MID  = 19600, LTE_BAND36_UL_MAX  = 19899,
   LTE_BAND37_UL_MIN  = 19100, LTE_BAND37_UL_MID  = 19200, LTE_BAND37_UL_MAX  = 19299,
   LTE_BAND38_UL_MIN  = 25700, LTE_BAND38_UL_MID  = 25950, LTE_BAND38_UL_MAX  = 26199,
   LTE_BAND39_UL_MIN  = 18800, LTE_BAND39_UL_MID  = 19000, LTE_BAND39_UL_MAX  = 19199,
   LTE_BAND40_UL_MIN  = 23000, LTE_BAND40_UL_MID  = 23500, LTE_BAND40_UL_MAX  = 23999,
   LTE_BAND41_UL_MIN  = 24960, LTE_BAND41_UL_MID  = 25930, LTE_BAND41_UL_MAX  = 26899,
   LTE_BAND42_UL_MIN  = 34000, LTE_BAND42_UL_MID  = 35000, LTE_BAND42_UL_MAX  = 35999,
   LTE_BAND43_UL_MIN  = 36000, LTE_BAND43_UL_MID  = 37000, LTE_BAND43_UL_MAX  = 37999,
   LTE_BAND44_UL_MIN  =  7030, LTE_BAND44_UL_MID  =  7530, LTE_BAND44_UL_MAX  =  8029,
   LTE_BAND45_UL_MIN  = 14470, LTE_BAND45_UL_MID  = 14570, LTE_BAND45_UL_MAX  = 14669,
   LTE_BAND46_UL_MIN  = 51500, LTE_BAND46_UL_MID  = 55375, LTE_BAND46_UL_MAX  = 59249,
   LTE_BAND65_UL_MIN  = 19200, LTE_BAND65_UL_MID  = 19650, LTE_BAND65_UL_MAX  = 20099,
   LTE_BAND66_UL_MIN  = 17100, LTE_BAND66_UL_MID  = 17450, LTE_BAND66_UL_MAX  = 17799,
}ERfTestUlFrequencyE;

typedef union
{
   kal_uint16           in_100khz;
   ERfTestUlFrequencyE  in_enum;
}ERfTestUlFrequencyU;

typedef struct
{
   kal_uint8 duplexMode;/* 0:tdd, 1:fdd */
   kal_uint8 band;
   kal_uint16 ulFrequency;/* range: 0~65535 (100KHz unit) */
   kal_uint8 capid;    /* 0 ~ 255 */
   kal_int16 afcdac;  /* 0 ~ 8191 */
   kal_uint8 afcDataType ; /* 0: calibration data, 1: interface */
   kal_int16 txPowerValue;/*S(8,8),  x dB * 256.0 */
}ERfTestCmd_StartAfcSingleToneTx_ReqParam;

typedef ERfTestCmd_DefaultCnfParam  ERfTestCmd_StartAfcSingleToneTx_CnfParam;


/*******************************************************************************
 * ERF_TEST_CMD_SET_AFC_SETTING
 ******************************************************************************/
typedef ERfTestCmd_NoParam  ERfTestCmd_SetAfcSetting_ReqParam;

typedef struct
{
   kal_uint8     capid;    /* 0 ~ 255 */
   kal_uint16    afcdac;   /* 0 ~ 8191 */
   kal_int32     slopeInv;
}ERfTestCmd_SetAfcSetting_ReqPdu;

typedef ERfTestCmd_SetAfcSetting_ReqPdu  ERfFreqAdjustTable;
typedef ERfTestCmd_DefaultCnfParam  ERfTestCmd_SetAfcSetting_CnfParam;


/*******************************************************************************
 * ERF_TEST_CMD_GET_AFC_SETTING
 ******************************************************************************/
typedef ERfTestCmd_NoParam  ERfTestCmd_GetAfcSetting_ReqParam;
typedef ERfTestCmd_DefaultCnfParam  ERfTestCmd_GetAfcSetting_CnfParam;
typedef ERfTestCmd_SetAfcSetting_ReqPdu  ERfTestCmd_GetAfcSetting_CnfPdu;


/*******************************************************************************
 * ERF_TEST_CMD_GET_POWER_DETECTOR_VALUE
 ******************************************************************************/
typedef ERfTestCmd_NoParam  ERfTestCmd_GetPowerDetectorValue_ReqParam;

typedef struct
{
   kal_int16 value;
}ERfTestCmd_GetPowerDetectorValue_CnfParam;


/*******************************************************************************
 * ERF_TEST_CMD_CHECK_IF_FUNC_EXIST
 ******************************************************************************/
typedef struct
{
   ERfTestCmdType  cmd_tpye;
}ERfTestCmd_CheckIfFuncExist_ReqParam;

typedef struct
{
   DEFAULT_CNF_PARAM
   kal_uint32  query_op_code;  // query op code
}ERfTestCmd_CheckIfFuncExist_CnfParam;

typedef ERfTestCmd_CheckIfFuncExist_CnfParam  ERfCheckIfFuncExist;


/*******************************************************************************
 * ERF_TEST_CMD_START_NSFT_LIST
 ******************************************************************************/
typedef ERfTestCmd_NoParam  ERfTestCmd_StartNsftList_ReqParam;
typedef ERfTestResultGeneralResult  ERfTestCmd_StartNsftList_CnfParam;

typedef struct
{
    kal_int16       rssiPath0;    //Avg.
    kal_int16       rssiPath1;    //Avg.
    kal_int16       rsrpPath0;    //Avg.
    kal_int16       rsrpPath1;    //Avg.
    kal_int16       rsrqPath0;    //Avg.
    kal_int16       rsrqPath1;    //Avg.
    kal_uint16      crcOK_cnt;
    kal_uint16      crcNG_cnt;
} NSFT_List_Rx_Step_Rpt;

typedef struct
{
    kal_uint8               route_idx;
    kal_uint8               rx_step_num;
    NSFT_List_Rx_Step_Rpt   rx_step[MAX_NSFT_LIST_RXTX_PWR_LEVEL_NUM];
} NSFT_List_Rx_Route_Rpt;

typedef struct
{
    kal_uint8               freq_idx;
    kal_uint8               rx_route_num;
    NSFT_List_Rx_Route_Rpt  rx_route[MAX_NSFT_LIST_RX_ROUTE_NUM];
} NSFT_List_Rx_Freq_Rpt;

typedef struct
{
    kal_uint8               band_idx;
    kal_uint8               freq_num;
    NSFT_List_Rx_Freq_Rpt   freq[MAX_NSFT_LIST_RXTX_FREQ_NUM];
} NSFT_List_Rx_Band_Rpt;

typedef struct
{
    kal_uint8               band_num;
    NSFT_List_Rx_Band_Rpt   band[MAX_NSFT_LIST_RXTX_BAND_NUM];
} NSFT_List_RxTx_Rpt;


/*******************************************************************************
 * ERF_TEST_CMD_SET_RF_MIPI_CODEWORD
 ******************************************************************************/
typedef struct
{
    kal_uint16 rf_band_idx;
    kal_uint16 power_level_num;
    kal_uint16 code_word_num;
}ERfTestCmd_SetRfMipiCodeword_ReqParam;

typedef ERfTestCmd_SetRfMipiCodeword_ReqParam  ERfTestCmdSetMIPICodeWord;
typedef ERfTestCmd_DefaultCnfParam  ERfTestCmd_SetRfMipiCodeword_CnfParam;


/*******************************************************************************
 * ERF_TEST_CMD_QUERY_NVRAM_LID
 ******************************************************************************/
typedef struct
{
   kal_uint16  LID;        // Logical data item ID of a EF
   kal_uint16  RID;        // Record ID (the first record is 1)
}ERfGetNVRAMInfo;

typedef struct
{
   kal_uint16  CmdType;
   kal_uint8   BandIndex;
}ERfTestCmd_QueryNvramLid_ReqParam;

typedef ERfTestCmd_QueryNvramLid_ReqParam  ERfNVRAMInfoReq;

typedef struct
{
   kal_uint8   status;     // 0: read ok; others: read failed.
   kal_uint8   lid_count;  // NVRAM information number(s)
}ERfTestCmd_QueryNvramLid_CnfParam;

typedef ERfTestCmd_QueryNvramLid_CnfParam  ERfNVRAMInfoCnf;


/*******************************************************************************
 * ERF_TEST_CMD_GET_GPS_CO_CLOCK_DATA
 ******************************************************************************/
typedef ERfTestCmd_NoParam  ERfTestCmd_GetGpsCoClockData_ReqParam;

typedef struct
{
   kal_int32 C0;
   kal_int32 C1;
   kal_int32 initU;
   kal_int32 lastU;
}ERfTestCmd_GetGpsCoClockData_CnfParam;

typedef ERfTestCmd_GetGpsCoClockData_CnfParam  ERfGpsCoClockData;


/*******************************************************************************
 * ERF_TEST_CMD_SET_GPS_CO_CLOCK_DATA
 ******************************************************************************/
typedef ERfTestCmd_GetGpsCoClockData_CnfParam  ERfTestCmd_SetGpsCoClockData_ReqParam;
typedef ERfTestCmd_DefaultCnfParam  ERfTestCmd_SetGpsCoClockData_CnfParam;


/*******************************************************************************
 * ERF_TEST_CMD_START_TPC_SINGLE_TONE_TX_V2
 ******************************************************************************/
typedef enum
{
   ERF_FREQ_OFFSET_m540KHZ = 0xFFDC, // -36
   ERF_FREQ_OFFSET_m450KHZ = 0xFFE2, // -30
   ERF_FREQ_OFFSET_m360KHZ = 0xFFE8, // -24
   ERF_FREQ_OFFSET_m270KHZ = 0xFFEE, // -18
   ERF_FREQ_OFFSET_m180KHZ = 0xFFF4, // -12
   ERF_FREQ_OFFSET_m90KHZ  = 0xFFFA, // -6
   ERF_FREQ_OFFSET_ZERO    = 0x0000, // 0
   ERF_FREQ_OFFSET_p90KHZ  = 0x0006, // 6
   ERF_FREQ_OFFSET_p180KHZ = 0x000C, // 12
   ERF_FREQ_OFFSET_p270KHZ = 0x0012, // 18
   ERF_FREQ_OFFSET_p360KHZ = 0x0018, // 24
   ERF_FREQ_OFFSET_p450KHZ = 0x001E, // 30
   ERF_FREQ_OFFSET_p540KHZ = 0x0024, // 36
}ERfTestUlFreqOffsetE;

typedef enum
{
   ERF_PGAMODE_NORMAL,
   ERF_PGAMODE_A,
   ERF_PGAMODE_B,
}ERfTestPgaModeE;


typedef union
{
   kal_uint16 in_15khz;
   ERfTestUlFreqOffsetE in_enum;
}ERfTestUlFreqOffsetU;

typedef struct
{
   kal_uint16           band;
   kal_uint16           routeidx;
   kal_uint16           tx_path_sel_bitmap;
   kal_uint8            cc_num;
   ERfTestUlFrequencyU  ulFrequency[MAX_TX_CC_NUM_V2];/* range: 0~65535 (100KHz unit) */
   ERfTestUlFreqOffsetU ulFrequencyOffset;
   kal_int16            afcdac;
   ERfTestBwE           tx_bw[MAX_TX_CC_NUM_V2];
   ERfTestPgaModeE      pga_mode;
   kal_int16            txPowerValue;/*S(8,8), x dB * 256.0 */
   ERfTestAfcDataTypeE  afcDataType;

}ERfTestCmd_StartTpcSingleToneTxV2_ReqParam;

typedef ERfTestCmd_DefaultCnfParam  ERfTestCmd_StartTpcSingleToneTxV2_CnfParam;

/*******************************************************************************
 * ERF_TEST_CMD_GET_TXRX_ROUTE_INFO
 ******************************************************************************/
typedef enum
{
   ERF_TEST_GET_TXRX_ROUTE_INFO_STATUS_INVALID = 0,
   ERF_TEST_GET_TXRX_ROUTE_INFO_STATUS_OK      = 1,  // set success
   ERF_TEST_GET_TXRX_ROUTE_INFO_STATUS_ERR1    = 2,  // ROUTE_INVALID_RX_TX_MISMATCH
   ERF_TEST_GET_TXRX_ROUTE_INFO_STATUS_ERR2    = 3,
   ERF_TEST_GET_TXRX_ROUTE_INFO_STATUS_MAX,
}ERfTestGetTxRxRouteInfoStatus;

typedef struct
{
   kal_uint8   rx_cc_num;
   kal_uint16  rx_freq[MAX_RX_CC_NUM_V2]; //frequency in 100kHz
   kal_uint16  rx_band[MAX_RX_CC_NUM_V2]; //LTE BAND
   ERfTestBwE   rx_bw[MAX_RX_CC_NUM_V2];   //(DL BW) 0: 6 RB, 1: 15 RB, 2: 25 RB, 3: 50 RB, 4: 75 RB, 5: 100 RB
   kal_uint8   tx_cc_num;
   kal_uint16  tx_freq[MAX_TX_CC_NUM_V2]; //frequency in 100kHz
   kal_uint16  tx_band[MAX_TX_CC_NUM_V2]; //LTE BAND
   ERfTestBwE   tx_bw[MAX_TX_CC_NUM_V2];   //(UL BW) 0: 6 RB, 1: 15 RB, 2: 25 RB, 3: 50 RB, 4: 75 RB, 5: 100 RB
} ERfTestCmd_GetTxRxRouteInfo_ReqParam;

typedef struct
{
   DEFAULT_CNF_PARAM
   ERfTestGetTxRxRouteInfoStatus  get_status;
}ERfTestCmd_GetTxRxRouteInfo_CnfParam;

typedef struct
{
   kal_uint16  total_route_idx;
   kal_uint16  comp_route_idx;
   kal_uint16  FE_route_idx;
   kal_uint8   port[LTE_PORT_ASCII_ARRAY_SIZE];
   kal_uint8   stx;
}ERfTestTxRouteInfo;

typedef struct
{
   kal_uint16  total_route_idx;
   kal_uint16  comp_route_idx;
   kal_uint16  FE_route_idx;
   kal_uint8   port[MAX_RX_ANT_NUM_V2][LTE_PORT_ASCII_ARRAY_SIZE];//main & diversity may have different port
   kal_uint8   srx;
}ERfTestRxRouteInfo;

typedef struct
{
   ERfTestTxRouteInfo   tx_route_info[MAX_TX_CC_NUM_V2];
   ERfTestRxRouteInfo   rx_route_info[MAX_RX_CC_NUM_V2];
}ERfTestCmd_GetTxRxRouteInfo_CnfPdu;


/*******************************************************************************
 * ERF_TEST_CMD_START_NSFT_TX_RX_LIST_V2
 ******************************************************************************/
typedef struct
{
   kal_uint8   pwr_step_num;//0~8;
   kal_int16   pwr_step_tx_power[8];//S(8,8)
   kal_uint8   pwr_step_VRB_strt [8];
   kal_uint8   pwr_step_VRB_len [8];
} NSFT_List_Tx_Specify_Pwr_Param;

typedef struct
{
   kal_int16   start_power; //S(8,8)
   kal_int16   pwr_step_value; //S(8,8)
   kal_uint8   pwr_step_num;

   kal_uint8   pwr_step_VRB_strt_p1; //start VRB for the first period
   kal_uint8   pwr_step_VRB_len_p1;
   kal_uint8   pwr_step_VRB_strt_p2; //start VRB for the second period
   kal_uint8   pwr_step_VRB_len_p2;

   kal_uint8   step_for_change_tx_VRB; //0: Tx VRB will be changed to p2 at step 0

} NSFT_List_Tx_Specify_Step_Param;

typedef struct
{
   kal_uint16  ul_freq;//100kHz unit
   ERfTestBwE  ul_bw;
   kal_uint8   pwr_step_MCS_mode; //0:QPSK, 1:16QAM, 2:64QAM
   kal_bool    cmd_type;   //0: NSFT_List_Tx_Specify_Pwr_Param, 1: NSFT_List_Tx_Specify_Step_Param, 0xFF: invalid type
   union
   {
       NSFT_List_Tx_Specify_Pwr_Param  specify_tx_pwr_cmd;
       NSFT_List_Tx_Specify_Step_Param specify_pwr_step_cmd;
   }nsft_list_pwr_step_cmd;
} NSFT_List_Tx_Freq_Param;

typedef struct
{
   kal_uint8               band_index;
   kal_uint8               freq_num;
   kal_uint16              dl_sync_freq;
   NSFT_List_Tx_Freq_Param freq_param[MAX_NSFT_LIST_TX_FREQ_NUM];
} NSFT_List_Tx_Band_Param;

typedef struct
{
   kal_uint8               fdd_tx_step_width;//ms unit
   kal_uint8               tdd_tx_step_width;//ms unit
   kal_uint8               band_num;
   NSFT_List_Tx_Band_Param band_param[MAX_NSFT_LIST_TX_BAND_NUM];
   kal_int16               freq_offst;//range -32768~32767
   kal_int16               afc_dac;
   kal_uint8               afc_data_type;//0: calibration data, 1: from interface value
   kal_uint8               close_loop_disable;
}NSFT_List_Tx_Cfg;

typedef struct NSFT_List_Cmd
{
   kal_uint8         phy_cell_id;//no used for single tone?
   kal_uint8         fdd_band_start_index;//0xFF if there is no FDD band.
   kal_uint8         fdd_band_end_index;//0xFF if there is no FDD band.
   kal_uint8         tdd_band_start_index;//0xFF if there is no TDD band.
   kal_uint8         tdd_band_end_index;//0xFF if there is no TDD band.
   kal_uint8         fdd_to_tdd_switch_time;//ms unit
   kal_uint8         fdd_freq_switch_time;//ms unit
   kal_uint8         tdd_freq_switch_time;//ms unit
   kal_uint8         fdd_band_switch_time;//ms unit
   kal_uint8         tdd_band_switch_time;//ms unit
   kal_uint16        fdd_dl_sync_time;//ms unit
   kal_uint16        tdd_dl_sync_time;//ms unit
   NSFT_List_Tx_Cfg  txCmd;
}NSFT_List_Cmd;

//nsft rx-tx list mode
typedef struct
{
   kal_uint16  ul_freq;             //100kHz unit
   kal_uint16  dl_freq;             //100KHz unit
   kal_uint8   ul_bw;               //0(1.4M)~5(20M)
   kal_uint8   pwr_step_MCS_mode;   //0:QPSK, 1:16QAM, 2:64QAM
   kal_bool    cmd_type;            //0: NSFT_List_Tx_Specify_Pwr_Param,
                                    //1: NSFT_List_Tx_Specify_Step_Param,
                                    //0xFF: invalid type

   union
   {
       NSFT_List_Tx_Specify_Pwr_Param  specify_tx_pwr_cmd;
       NSFT_List_Tx_Specify_Step_Param specify_pwr_step_cmd;
   }nsft_list_pwr_step_cmd;
} NSFT_List_RxTx_Ca_Freq_Param;

typedef struct
{
    kal_uint16 tx_route_idx;
    kal_uint16 routePathSel;
}NSFT_List_RxTx_Tx_Route_Info;

typedef struct
{
   kal_uint16 tx_route;
   kal_uint16 tx_route_num;
   NSFT_List_RxTx_Tx_Route_Info tx_route_path_info[MAX_NSFT_LIST_TX_ROUTE_NUM];
   kal_uint16 rx_route_num;
   kal_uint16 rx_route_idx[MAX_NSFT_LIST_RX_ROUTE_NUM];
   kal_uint16 rx_step_num;
   kal_uint16 rx_step_width[MAX_NSFT_LIST_RXTX_PWR_LEVEL_NUM];
   NSFT_List_RxTx_Ca_Freq_Param rxtx_freq_param[1];
}NSFT_List_RxTx_Ca_Freq;

typedef struct
{
   kal_uint8   band_index;
   kal_uint16  dl_sync_freq;
   kal_uint8   freq_num;
   NSFT_List_RxTx_Ca_Freq freq_param[MAX_NSFT_LIST_RXTX_FREQ_NUM];
} NSFT_List_RxTx_Ca_Band_Param;

typedef struct
{
   kal_uint8   fdd_tx_step_width;   //ms unit
   kal_uint8   tdd_tx_step_width;   //ms unit
   kal_int16   freq_offst;          //range -32768~32767
   kal_int16   afc_dac;
   kal_uint8   afc_data_type;       //0: calibration data, 1: from interface value
   kal_uint8   close_loop_disable;
   kal_uint8   band_num;
   NSFT_List_RxTx_Ca_Band_Param band_param[MAX_NSFT_LIST_RXTX_BAND_NUM];
}NSFT_List_RxTx_Ca_Cfg;

typedef struct
{
   kal_uint16 tx_route_num;
   NSFT_List_RxTx_Tx_Route_Info tx_route_path_info[MAX_NSFT_LIST_TX_ROUTE_NUM];
   kal_uint16 rx_route_num;
   kal_uint16 rx_route_idx[MAX_NSFT_LIST_RX_ROUTE_NUM];
   kal_uint16 rx_step_num;
   kal_uint16 rx_step_width[MAX_NSFT_LIST_RXTX_PWR_LEVEL_NUM];
   NSFT_List_RxTx_Ca_Freq_Param rxtx_freq_param;
}NSFT_List_RxTx_Ca_FreqV3;

typedef struct
{
   kal_uint8   band_index;
   kal_uint16  dl_sync_freq;
   kal_uint8   freq_num;
   NSFT_List_RxTx_Ca_FreqV3 freq_param[MAX_NSFT_LIST_RXTX_FREQ_NUM];
} NSFT_List_RxTx_Ca_Band_ParamV3;


typedef struct
{
    kal_uint16 freq_offst;             //range -32768~32767
    kal_uint8  close_loop_disable;
    kal_uint8  band_num;
    NSFT_List_RxTx_Ca_Band_ParamV3 band_param[MAX_NSFT_LIST_RXTX_BAND_NUM];
}NSFT_List_RxTx_Ca_CfgV3;

typedef struct
{
    kal_uint16 freq_offst;             //range -32768~32767
    kal_uint8  close_loop_disable;
    kal_uint8  band_num;
    NSFT_List_RxTx_Ca_Band_ParamV3 band_param[4];
}NSFT_List_RxTx_Ca_CfgV3_t;

typedef struct NSFT_RxTx_List_Cmd
{
   kal_uint8   op_mode;                 //0: only tx, 1: tx-rx list mode
   kal_uint8   phy_cell_id[1];             //no used for single tone?
   kal_uint8   fdd_band_start_index;    //0xFF if there is no FDD band.
   kal_uint8   fdd_band_end_index;      //0xFF if there is no FDD band.
   kal_uint8   tdd_band_start_index;    //0xFF if there is no TDD band.
   kal_uint8   tdd_band_end_index;      //0xFF if there is no TDD band.
   kal_uint8   fdd_to_tdd_switch_time;  //ms unit
   kal_uint8   fdd_freq_switch_time;    //ms unit
   kal_uint8   tdd_freq_switch_time;    //ms unit
   kal_uint8   fdd_band_switch_time;    //ms unit
   kal_uint8   tdd_band_switch_time;    //ms unit
   kal_uint16  fdd_dl_sync_time;        //ms unit
   kal_uint16  tdd_dl_sync_time;        //ms unit
   NSFT_List_RxTx_Ca_Cfg rxtxCmd;
   }ERfTestCmd_StartNsftTxRxListV2_ReqPdu;


typedef struct
{
    kal_uint8  fdd_band_start_index;
    kal_uint8  fdd_band_end_index;
    kal_uint8  tdd_band_start_index;
    kal_uint8  tdd_band_end_index;
    kal_uint16 fdd_dl_sync_time;        //ms unit
    kal_uint16 tdd_dl_sync_time;        //ms unit
    kal_uint8  fdd_to_tdd_switch_time;  //ms unit
    kal_uint8  fdd_freq_switch_time;    //ms unit
    kal_uint8  tdd_freq_switch_time;    //ms unit
    kal_uint8  fdd_band_switch_time;    //ms unit
    kal_uint8  tdd_band_switch_time;    //ms unit
    kal_uint8  fdd_tx_step_width;       //ms unit
    kal_uint8  tdd_tx_step_width;       //ms unit
    kal_uint8  reserved;
} ERf_NSFT_List_RxTx_V3_scheduling_Setting;

typedef struct NSFT_RxTx_List_CmdV3
{
    kal_uint8                                                                  op_mode;    //0: only tx, 1: tx-rx list mode
    kal_uint8                                                                  phy_cell_id;
    ERf_NSFT_List_RxTx_V3_scheduling_Setting   schdlSetting;
    NSFT_List_RxTx_Ca_CfgV3                                    rxtxCmd;
}ERfTestCmd_StartNsftTxRxListV3_ReqPdu;

typedef struct
{
  kal_int8 type;
} ERfTestCmd_StartNsftTxRxListV3_ReqParam;

typedef struct
{
   kal_int8 type;
} ERfTestCmd_StartNsftTxRxListV2_ReqParam;

typedef ERfTestResultGeneralResult  ERfTestCmd_StartNsftTxRxListV2_CnfParam;
typedef struct
{
    kal_uint8               band_num;
    NSFT_List_Rx_Band_Rpt   band[MAX_NSFT_LIST_RXTX_BAND_NUM];
}ERfTestCmd_StartNsftTxRxListV2_CnfPdu;

typedef ERfTestResultGeneralResult  ERfTestCmd_StartNsftTxRxListV3_CnfParam;
typedef struct
{
    kal_uint8               band_num;
    NSFT_List_Rx_Band_Rpt   band[MAX_NSFT_LIST_RXTX_BAND_NUM];
}ERfTestCmd_StartNsftTxRxListV3_CnfPdu;

typedef struct
{
    kal_uint8                                                                  op_mode;    //0: only tx, 1: tx-rx list mode
    kal_uint8                                                                  phy_cell_id;
    ERf_NSFT_List_RxTx_V3_scheduling_Setting   schdlSetting;
    NSFT_List_RxTx_Ca_CfgV3_t                                    rxtxCmd;
} ERfTestCmd_StartNsftTxRxListV3_ReqParam_t;

/*******************************************************************************
 * ERF_TEST_CMD_QUERY_CA_CONFIG_TABLE_V3
 ******************************************************************************/

typedef ERfTestCmd_NoParam  ERfTestCmd_QueryCaConfigTableV3_ReqParam;
typedef ERfTestCmd_NoParam  ERfTestCmd_QueryCaConfigTableV3_CnfParam;

typedef enum
{
   ERF_TEST_ELNA_OFF_V3  				   = 0,
   ERF_TEST_ELNA_ALWAYS_ON_V3 			= 1,
   ERF_TEST_ELNA_ALWAYS_ON_2ND_SAW_V3 	= 2,
   ERF_TEST_ELNA_BYPASS_V3 			   = 3,
   ERF_TEST_ELNA_BYPASS_2ND_SAW_V3 		= 4,
   ERF_TEST_ELNA_TYPE_NUM_V3,
   ERF_TEST_ELNA_MAX_V3 	            =0xFF
}ERfTestRxELNAType_V3_E;

typedef struct
{
   kal_uint8   total_route_num;
   kal_uint16  band;
   kal_uint8   is_hrm[ERF_MAX_TX_TYPE1_CATEGORY_NUM_V3];
   kal_uint16  total_route_idx[ERF_MAX_TX_TYPE1_CATEGORY_NUM_V3];
   kal_uint16  comp_route_idx[ERF_MAX_TX_TYPE1_CATEGORY_NUM_V3];//take considerate FE route + RFIC route
   kal_uint16  FE_route_idx[ERF_MAX_TX_TYPE1_CATEGORY_NUM_V3];
   kal_uint8   port[ERF_MAX_TX_TYPE1_CATEGORY_NUM_V3][LTE_PORT_ASCII_ARRAY_SIZE];
   kal_uint8   stx[ERF_MAX_TX_TYPE1_CATEGORY_NUM_V3];
}ERfTestTxType1CaInfoV3_T;

typedef struct
{
   kal_uint8   total_route_num;
   kal_uint8   padding;
   kal_uint16  band;
   kal_uint16  total_route_idx[ERF_MAX_RX_TYPE1_CATEGORY_NUM_V3];   //take considerate FE route + RFIC route
   kal_uint16  comp_route_idx[ERF_MAX_RX_TYPE1_CATEGORY_NUM_V3];//take considerate FE route + RFIC route
   kal_uint16  FE_route_idx[ERF_MAX_RX_TYPE1_CATEGORY_NUM_V3];
   kal_uint8   port[ERF_MAX_RX_TYPE1_CATEGORY_NUM_V3][ERF_MAX_RX_ANT_NUM_V3][LTE_PORT_ASCII_ARRAY_SIZE];
   kal_uint8   elna[ERF_MAX_RX_TYPE1_CATEGORY_NUM_V3][ERF_MAX_RX_ANT_NUM_V3];
   kal_uint8   srx[ERF_MAX_RX_TYPE1_CATEGORY_NUM_V3];
}ERfTestRxType1CaInfoV3_T;

typedef struct
{
   kal_uint8   total_route_num;
   kal_uint8   simultaneousl_k[ERF_MAX_RX_TYPE2_CATEGORY_NUM_V3];
   kal_uint16  band;
   kal_uint16  total_route_idx[ERF_MAX_RX_TYPE2_CATEGORY_NUM_V3];//take considerate FE route + RFIC route
   kal_uint16  comp_route_idx[ERF_MAX_RX_TYPE2_CATEGORY_NUM_V3];//take considerate FE route + RFIC route
   kal_uint8   FE_route_idx[ERF_MAX_RX_TYPE2_CATEGORY_NUM_V3];
   kal_uint8   port[ERF_MAX_RX_TYPE2_CATEGORY_NUM_V3][ERF_MAX_RX_ANT_NUM_V3][LTE_PORT_ASCII_ARRAY_SIZE];
   kal_uint8   elna[ERF_MAX_RX_TYPE2_CATEGORY_NUM_V3][ERF_MAX_RX_ANT_NUM_V3];
   kal_uint8   srx[ERF_MAX_RX_TYPE2_CATEGORY_NUM_V3][ERF_MAX_RX_TYPE2_GBG_PATH_NUM_V3];//for SRX path0 & path1
}ERfTestRxType2CaInfoV3_T;

typedef struct
{
   ERfTestTxType1CaInfoV3_T     tx_type1_ca_info[ERF_MAX_BAND_NUM_V3];
   ERfTestRxType1CaInfoV3_T     rx_type1_ca_info[ERF_MAX_BAND_NUM_V3];
   ERfTestRxType2CaInfoV3_T     rx_type2_ca_info[ERF_MAX_BAND_NUM_V3];
}ERfTestTRxCaInfoV3_T;

typedef struct
{
   kal_uint8   total_route_num;
   kal_uint8   padding[3];
   kal_uint16  band;
   kal_uint16  route_idx[ERF_MAX_TX_TYPE1_CATEGORY_NUM_V3];//take considerate FE route + RFIC route
}ERfTestTxCCARouteInfoV3_T;

typedef struct
{
   kal_uint8                    total_band_num;
   ERfTestTxCCARouteInfoV3_T    tx_cca_route_info[ERF_MAX_TX_CCA_BAND_NUM_V3];
}ERfTestTxCCAInfoV3_T;

typedef struct
{
   kal_uint8   total_route_num;
   kal_uint8   padding[3];
   kal_uint16  band;
   kal_uint16  route_idx[ERF_MAX_TX_TYPE1_CATEGORY_NUM_V3];//take considerate FE route + RFIC route
}ERfTestTxFilterRouteInfoV3_T;

typedef struct
{
   kal_uint8                       total_band_num;
   ERfTestTxFilterRouteInfoV3_T    tx_filter_route_info[ERF_MAX_TX_BYPASS_BAND_NUM_V3];
}ERfTestTxFILTERInfoV3_T;

typedef struct
{
   kal_uint8   seq_num[ERF_TEST_RX_POWER_MODE_NUM];
   kal_int16   dlpow_default[ERF_TEST_RX_POWER_MODE_NUM][ERF_MAX_RX_TYPE1_SEQ_NUM_V3];// resolution 1/32
   kal_int16   dlpow_lbound[ERF_TEST_RX_POWER_MODE_NUM][ERF_MAX_RX_TYPE1_SEQ_NUM_V3];// resolution 1/32
   kal_int16   dlpow_hbound[ERF_TEST_RX_POWER_MODE_NUM][ERF_MAX_RX_TYPE1_SEQ_NUM_V3];// resolution 1/32
   kal_uint8   dlpow_lna_mode[ERF_MAX_RX_ANT_NUM_V3][ERF_TEST_RX_POWER_MODE_NUM][ERF_MAX_RX_TYPE1_SEQ_NUM_V3];
   kal_uint8   dlpow_elna_bypass[ERF_MAX_RX_ANT_NUM_V3][ERF_TEST_RX_POWER_MODE_NUM][ERF_MAX_RX_TYPE1_SEQ_NUM_V3];//1:bypass(elna off)
   kal_uint8   nvram_idx[ERF_MAX_RX_ANT_NUM_V3][ERF_TEST_RX_POWER_MODE_NUM][ERF_MAX_RX_TYPE1_SEQ_NUM_V3];
}ERfTestElnaInfoT1V3_T;

typedef struct
{
   kal_uint8   gbg_seq_num[ERF_TEST_RX_POWER_MODE_NUM];
   kal_int16   gbg_dlpow_default[ERF_TEST_RX_POWER_MODE_NUM][ERF_MAX_RX_TYPE2_SEQ_NUM_V3];// resolution 1/32
   kal_int16   gbg_dlpow_lbound[ERF_TEST_RX_POWER_MODE_NUM][ERF_MAX_RX_TYPE2_SEQ_NUM_V3];// resolution 1/32
   kal_int16   gbg_dlpow_hbound[ERF_TEST_RX_POWER_MODE_NUM][ERF_MAX_RX_TYPE2_SEQ_NUM_V3];// resolution 1/32
   kal_uint8   gbg_dlpow_lna_mode[ERF_TEST_RX_POWER_MODE_NUM][ERF_MAX_RX_TYPE2_GBG_PATH_NUM_V3][ERF_MAX_RX_TYPE2_SEQ_NUM_V3];
   kal_uint8   gbg_dlpow_elna_bypass[ERF_TEST_RX_POWER_MODE_NUM][ERF_MAX_RX_TYPE2_GBG_PATH_NUM_V3][ERF_MAX_RX_TYPE2_SEQ_NUM_V3];
   kal_uint8   gbg_nvram_idx[ERF_TEST_RX_POWER_MODE_NUM][ERF_MAX_RX_TYPE2_GBG_PATH_NUM_V3][ERF_MAX_RX_TYPE2_SEQ_NUM_V3];
   kal_uint8   sc_seq_num[ERF_TEST_RX_POWER_MODE_NUM];
   kal_int16   sc_dlpow_default[ERF_TEST_RX_POWER_MODE_NUM][ERF_MAX_RX_TYPE1_SEQ_NUM_V3];// resolution 1/32
   kal_int16   sc_dlpow_lbound[ERF_TEST_RX_POWER_MODE_NUM][ERF_MAX_RX_TYPE1_SEQ_NUM_V3];// resolution 1/32
   kal_int16   sc_dlpow_hbound[ERF_TEST_RX_POWER_MODE_NUM][ERF_MAX_RX_TYPE1_SEQ_NUM_V3];// resolution 1/32
   kal_uint8   sc_dlpow_lna_mode[ERF_TEST_RX_POWER_MODE_NUM][ERF_MAX_RX_TYPE1_SEQ_NUM_V3];
   kal_uint8   sc_dlpow_elna_bypass[ERF_TEST_RX_POWER_MODE_NUM][ERF_MAX_RX_TYPE1_SEQ_NUM_V3];
   kal_uint8   sc_nvram_idx[ERF_TEST_RX_POWER_MODE_NUM][ERF_MAX_RX_TYPE1_SEQ_NUM_V3];
}ERfTestElnaInfoT2V3_T;

typedef struct
{
   ERfTestElnaInfoT1V3_T      elna_info_t1[ERF_MAX_RX_ELNA_TYPE_V3][ERF_MAX_RX_ELNA_TYPE_V3];
   ERfTestElnaInfoT2V3_T      elna_info_t2[ERF_MAX_RX_ELNA_TYPE_V3];// T2 can't use different ELNA type for rx path
}ERfTestElnaCalInfoV3_T;

typedef struct
{
   /*Struct should be 4 bytes alignment*/
   kal_uint16                 band_mapping_info[ERF_BAND_MAPPING_TBL_SIZE];
   ERfTestTRxCaInfoV3_T       trx_ca_info;
   ERfTestTxCCAInfoV3_T       tx_cca_info;
   ERfTestTxFILTERInfoV3_T    tx_filter_info;
   ERfTestElnaCalInfoV3_T     elna_cal_info;
}ERfTestCmd_QueryCaConfigTableV3_CnfPdu;

typedef ERfTestCmd_QueryCaConfigTableV3_CnfPdu  ERfTestCmdCaConfig_V3;

/*******************************************************************************
 * ERF_TEST_CMD_GET_RX_TX_SETTING_V3
 ******************************************************************************/
typedef enum
{
   ERF_TEST_GET_RX_TX_STATUS_INVALID  = 0,
   ERF_TEST_GET_RX_TX_STATUS_OK       = 1,
   ERF_TEST_GET_RX_TX_STATUS_OVERFLOW = 2,  // request parameters exceed 50kB
   ERF_TEST_GET_RX_TX_STATUS_MAX      = 0xFFFF
}ERfTestGetRxTxSettingStatus_E;

typedef struct
{
    kal_uint16  route_index;
    kal_uint16  path_select;
}ERfTestParamRouteInfo_T;

typedef struct
{
    kal_uint16  count;
    kal_uint16  offset;
}ERfTestParamDynamicEntryElm_T;


typedef struct
{
   kal_int16 lna_mode_lpm;
   kal_int16 lna_mode_hpm;
}ERfRxPLRAWData_V3_T;

typedef struct
{
   kal_int16   temp_comp[MAX_TEMP_SECTION_NUM];
}ERfRxTempOffsetTable_V3_T;

typedef struct
{
   ERfRxPLRAWData_V3_T    pathloss_raw[ERF_MAX_RX_LNA_MODE_NUM_V3];
}ERfRxPLSubband_Type1_V3_T;

typedef struct
{
   kal_uint16                    bandIndex;
   kal_uint16                    routeIndex;
   kal_uint16                    subbandFrequency[ERF_MAX_FHC_RX_FREQ_NUM_V3];
   ERfRxPLSubband_Type1_V3_T     pathlossData[ERF_MAX_FHC_RX_FREQ_NUM_V3][ERF_MAX_RX_ANT_NUM_V3/*0: RXM, 1: RXD*/];
   ERfRxTempOffsetTable_V3_T     pathlossTempComp;
}ERfRxPathLossTable_Type1_V3_T;

typedef struct
{
   ERfRxPLRAWData_V3_T           pathloss_raw_sc[MAX_RX_TYPE2_GBG_PATH_NUM_V2][ERF_MAX_RX_LNA_MODE_NUM_V3];
}ERfRxPLSubband_Type2A_V3_T;

typedef struct
{
   ERfRxPLRAWData_V3_T           pathloss_raw_gbg[MAX_RX_TYPE2_GBG_PATH_NUM_V2][ERF_MAX_RX_LNA_MODE_NUM_V3][ERF_MAX_RX_LNA_MODE_NUM_V3];
}ERfRxPLSubband_Type2B_V3_T;

typedef struct
{
   ERfRxPLSubband_Type2A_V3_T    pathlossData_sc;
   ERfRxPLSubband_Type2B_V3_T    pathlossData_gbg;
}ERfRxPLSubband_Type2_V3_T;

typedef struct
{
   kal_uint16                    bandIndex;
   kal_uint16                    routeIndex;
   kal_uint16                    subbandFrequency[ERF_MAX_FHC_RX_FREQ_NUM_V3];
   ERfRxPLSubband_Type2_V3_T     pathlossData[ERF_MAX_FHC_RX_FREQ_NUM_V3][ERF_MAX_RX_ANT_NUM_V3/*0: RXM, 1: RXD*/];
   ERfRxTempOffsetTable_V3_T     pathlossTempComp;
}ERfRxPathLossTable_Type2_V3_T;

typedef struct
{
   kal_uint16        bandIndex;
   kal_uint16        routeIndex;
   kal_uint16        path_select;

   /* PA Control */
   kal_uint8         paControlLevel; /* 2~8 */
   kal_uint8         calRoomTempIdx;
   kal_int16         hysteresisStart0;
   kal_int16         hysteresisEnd0;
   kal_int16         hysteresisStart1;
   kal_int16         hysteresisEnd1;
   ERfTestTxPaModeE  paMode[MAX_TX_PA_LEVEL_NUM];
   kal_int16         pRf[MAX_TX_PA_LEVEL_NUM];
   kal_uint16        paGain[MAX_TX_PA_LEVEL_NUM];
   kal_uint8         dc2dcLevel[MAX_TX_PA_LEVEL_NUM]; /* voltage map by chip, TODO */
   kal_uint16        vBiasDac[MAX_TX_PA_LEVEL_NUM];
   kal_uint16        pa_gain_g12a;
   kal_uint16        pa_gain_g12b;

   /* TX Compensation */
   kal_uint16        ulFrequency[ERF_MAX_FHC_TX_FREQ_NUM_V3];//100kHz unit
   kal_int16         paGainSbWeight[MAX_TX_PA_MODE_NUM][MAX_TEMP_SECTION_NUM][ERF_MAX_FHC_TX_FREQ_NUM_V3];
   kal_int16         couplerLoss[MAX_TX_DET_MODE_NUM];
   kal_int16         powerDetector[MAX_TX_DET_MODE_NUM][MAX_TEMP_SECTION_NUM][ERF_MAX_FHC_TX_FREQ_NUM_V3];
}ERfTxTpcSetting_V3_T;


typedef struct
{
    kal_uint16                rx_type1_route_num;
    kal_uint16                rx_type2_route_num;
    kal_uint16                tx_type1_route_num;
    kal_uint16                rx_type1_route_index[ERF_MAX_RX_TYPE1_CAL_DATA_ACCESS_NUM_V3];
    kal_uint16                rx_type2_route_index[ERF_MAX_RX_TYPE2_CAL_DATA_ACCESS_NUM_V3];
    ERfTestParamRouteInfo_T   tx_type1_route_index[ERF_MAX_TX_TYPE1_CAL_DATA_ACCESS_NUM_V3];
}ERfTestCmd_GetRxTxSettingV3_ReqParam;

typedef struct
{
   DEFAULT_CNF_PARAM
   ERfTestGetRxTxSettingStatus_E  get_status;
   ERfTestParamDynamicEntryElm_T  rx_type1_data;
   ERfTestParamDynamicEntryElm_T  rx_type2_data;
   ERfTestParamDynamicEntryElm_T  tx_type1_data;
}ERfTestCmd_GetRxTxSettingV3_CnfParam;

typedef struct
{
   union
   {
      kal_int32                        raw_data[ERF_MAX_PEER_BUF_CNF_WORD_SIZE];
      ERfRxPathLossTable_Type1_V3_T    rx_type1[ERF_MAX_RX_TYPE1_CAL_DATA_ACCESS_NUM_V3];
      ERfRxPathLossTable_Type2_V3_T    rx_type2[ERF_MAX_RX_TYPE2_CAL_DATA_ACCESS_NUM_V3];
      ERfTxTpcSetting_V3_T             tx_type1[ERF_MAX_TX_TYPE1_CAL_DATA_ACCESS_NUM_V3];
   } confirm;
}ERfTestCmd_GetRxTxSettingV3_CnfPdu;


/*******************************************************************************
 * ERF_TEST_CMD_SET_RX_TX_SETTING_V3
 ******************************************************************************/
typedef enum
{
   ERF_TEST_SET_RX_TX_STATUS_INVALID  = 0,
   ERF_TEST_SET_RX_TX_STATUS_OK       = 1,
   ERF_TEST_SET_RX_TYPE1_PARAM_ERROR  = 2,  // RX type-1 count/offset mismatch
   ERF_TEST_SET_RX_TYPE2_PARAM_ERROR  = 3,  // RX type-2 count/offset mismatch
   ERF_TEST_SET_TX_TYPE1_PARAM_ERROR  = 4,  // TX type-1 count/offset mismatch
   ERF_TEST_SET_RX_TX_STATUS_MAX      = 0xFFFF
}ERfTestSetRxTxSettingStatus_E;

typedef enum
{
   ERF_TEST_RSSI_SET_STATUS_INVALID = 0,
   ERF_TEST_RSSI_SET_STATUS_OK      = 1,  // set success
   ERF_TEST_RSSI_SET_STATUS_ERR1    = 2,  // band mismatch with route
   ERF_TEST_RSSI_SET_STATUS_ERR2    = 3,  // subband frequency out of band region
   ERF_TEST_RSSI_SET_STATUS_MAX,
}ERfTestRSSISetStatus_E;

typedef enum
{
   ERF_TEST_TPC_SET_STATUS_INVALID = 0,
   ERF_TEST_TPC_SET_STATUS_OK      = 1,  // set success
   ERF_TEST_TPC_SET_STATUS_ERR1    = 2,  // Not used, just aligned RX
   ERF_TEST_TPC_SET_STATUS_ERR2    = 3,  // subband frequency out of band region
   ERF_TEST_TPC_SET_STATUS_MAX,
}ERfTestTPCSetStatus_E;

typedef struct
{
    kal_uint16                      update_to_nvram;
    ERfTestParamDynamicEntryElm_T   rx_type1_data;
    ERfTestParamDynamicEntryElm_T   rx_type2_data;
    ERfTestParamDynamicEntryElm_T   tx_type1_data;
}ERfTestCmd_SetRxTxSettingV3_ReqParam;

typedef struct
{
   union
   {
      kal_int32                       raw_data[ERF_MAX_PEER_BUF_CNF_WORD_SIZE];
      ERfRxPathLossTable_Type1_V3_T   rx_type1[ERF_MAX_RX_TYPE1_CAL_DATA_ACCESS_NUM_V3];
      ERfRxPathLossTable_Type2_V3_T   rx_type2[ERF_MAX_RX_TYPE2_CAL_DATA_ACCESS_NUM_V3];
      ERfTxTpcSetting_V3_T            tx_type1[ERF_MAX_TX_TYPE1_CAL_DATA_ACCESS_NUM_V3];
   } request;
}ERfTestCmd_SetRxTxSettingV3_ReqPdu;

typedef struct
{
   DEFAULT_CNF_PARAM
   ERfTestSetRxTxSettingStatus_E    set_status;
   kal_uint16                       rx_type1_result_count;
   kal_uint16                       rx_type2_result_count;
   kal_uint16                       tx_type1_result_count;
   ERfTestRSSISetStatus_E           rx_type1_result[ERF_MAX_RX_TYPE1_CAL_DATA_ACCESS_NUM_V3];
   ERfTestRSSISetStatus_E           rx_type2_result[ERF_MAX_RX_TYPE2_CAL_DATA_ACCESS_NUM_V3];
   ERfTestTPCSetStatus_E            tx_type1_result[ERF_MAX_TX_TYPE1_CAL_DATA_ACCESS_NUM_V3];
}ERfTestCmd_SetRxTxSettingV3_CnfParam;



/*******************************************************************************
 * ERF_TEST_CMD_START_RSSI_V3
 ******************************************************************************/

typedef struct
{
   kal_uint8   elna_bypass[ERF_MAX_RX_ANT_NUM_V3];// 0:No , 1:Yes
   kal_int16   rf_gain[ERF_MAX_RX_ANT_NUM_V3];// 0:No , 1:Yes
   kal_int16   digital_gain[ERF_MAX_RX_ANT_NUM_V3];
}ERfStartRssiV3_Sc_RxInput_T;

typedef struct
{
   kal_uint8   elna_bypass[ERF_MAX_RX_TYPE2_GBG_PATH_NUM_V3][ERF_MAX_RX_ANT_NUM_V3];// 0:No , 1:Yes
   kal_int16   rf_gain[ERF_MAX_RX_TYPE2_GBG_PATH_NUM_V3][ERF_MAX_RX_ANT_NUM_V3];// 0:No , 1:Yes
   kal_int16   digital_gain[ERF_MAX_RX_TYPE2_GBG_PATH_NUM_V3][ERF_MAX_RX_ANT_NUM_V3];
}ERfStartRssiV3_Gbg_RxInput_T;

typedef union
{
   ERfStartRssiV3_Sc_RxInput_T  sc_rxinput;
   ERfStartRssiV3_Gbg_RxInput_T gbg_rxinput;
}ERfStartRssiV3_RxInput_U;

typedef struct
{
   ERfTestRxPowerMode_E    powermode;
   ERfTestDlFrequency_U    dl_freq[MAX_RX_RFTOOL_FERQ_NUM];
   kal_uint8   is_partialon;        // 0:No , 1:Yes
   kal_uint8   num_freq;            // 1~15
   kal_uint8   temperatureIndex;    // 0~7
   kal_uint8   partialon_path;
   kal_uint8   ant_sel;
   kal_uint16  band;
   kal_uint16  routeidx;
   ERfStartRssiV3_RxInput_U  rssi_start_input;
}ERfTestCmd_StartRssiV3_ReqParam;



typedef ERfTestCmd_DefaultCnfParam  ERfTestCmd_StartRssiV3_CnfParam;



typedef struct
{
   kal_int16   rssi[MAX_RX_RFTOOL_FERQ_NUM][ERF_MAX_RX_ANT_NUM_V3];
   kal_uint8   lna_mode[ERF_MAX_RX_ANT_NUM_V3];
}ERfStartRssiV3_Sc_RxOutput_T;

typedef struct
{
   kal_int16   rssi[MAX_RX_RFTOOL_FERQ_NUM][ERF_MAX_RX_TYPE2_GBG_PATH_NUM_V3][ERF_MAX_RX_ANT_NUM_V3];/* resolution 1/32 */
   kal_uint8   lna_mode[ERF_MAX_RX_TYPE2_GBG_PATH_NUM_V3][ERF_MAX_RX_ANT_NUM_V3];
}ERfStartRssiV3_gbg_RxOutput_T;

typedef union
{
   ERfStartRssiV3_Sc_RxOutput_T  sc_rxoutput;
   ERfStartRssiV3_gbg_RxOutput_T gbg_rxoutput;
}ERfStartRssiV3_RxOutput_U;

typedef struct
{
   kal_uint8   num_freq;
   kal_uint16  dl_freq[MAX_RX_RFTOOL_FERQ_NUM];
   ERfStartRssiV3_RxOutput_U  StartRssi_output;
}ERfTestCmd_StartRssiV3_CnfPdu;


/*******************************************************************************
 * ERF_TEST_CMD_GET_RX_GAIN_INFO_V3
 ******************************************************************************/

typedef enum
{
   ERF_TEST_GET_RX_Gain_INFO_STATUS_INVALID = 0,
   ERF_TEST_GET_RX_Gain_INFO_STATUS_OK      = 1,  // get success
   ERF_TEST_GET_RX_Gain_INFO_STATUS_ERR     = 2,  // can not search coverage gain for this combination
   ERF_TEST_GET_RX_Gain_INFO_STATUS_MAX,
}ERfTestGetRxGainInfoV3Status;

typedef struct
{
   kal_uint8   elna_bypass[ERF_MAX_RX_ANT_NUM_V3];// 0:No , 1:Yes
   kal_uint8   lna_mode[ERF_MAX_RX_ANT_NUM_V3];
}ERfTestGetRxGainInfoV3_Sc_RxInput_T;

typedef struct
{
   kal_uint8   elna_bypass[ERF_MAX_RX_TYPE2_GBG_PATH_NUM_V3];// 0:No , 1:Yes
   kal_uint8   lna_mode[ERF_MAX_RX_TYPE2_GBG_PATH_NUM_V3];
}ERfTestGetRxGainInfoV3_Gbg_RxInput_T;

typedef union
{
   ERfTestGetRxGainInfoV3_Sc_RxInput_T  sc_rxinput;
   ERfTestGetRxGainInfoV3_Gbg_RxInput_T gbg_rxinput;
}ERfTestGetRxGainInfoV3_RxInput_U;


typedef struct
{
   ERfTestRxPowerMode_E             powermode;
   kal_uint8                        ant_sel;
   kal_uint16                       routeidx;
   kal_uint8                        is_partialon;     // 0:No , 1:Yes
   ERfTestGetRxGainInfoV3_RxInput_U rxgaininfo_input;
}ERfTestCmd_GetRxGainInfoV3_ReqParam;


typedef struct
{
   DEFAULT_CNF_PARAM
   ERfTestGetRxGainInfoV3Status  get_status;
}ERfTestCmd_GetRxGainInfoV3_CnfParam;


typedef struct
{
   kal_int16   rf_gain[ERF_MAX_RX_ANT_NUM_V3];// 0:No , 1:Yes
   kal_int16   digital_gain[ERF_MAX_RX_ANT_NUM_V3];
}ERfTestGetRxGainInfoV3_Sc_RxOutput_T;


typedef struct
{
   kal_int16   rf_gain[ERF_MAX_RX_TYPE2_GBG_PATH_NUM_V3][ERF_MAX_RX_ANT_NUM_V3];/* resolution 1/32 */
   kal_int16   digital_gain[ERF_MAX_RX_TYPE2_GBG_PATH_NUM_V3][ERF_MAX_RX_ANT_NUM_V3];/* resolution 1/32 */
}ERfTestGetRxGainInfoV3_Gbg_RxOutput_T;


typedef union
{
   ERfTestGetRxGainInfoV3_Sc_RxOutput_T  sc_rxoutput;
   ERfTestGetRxGainInfoV3_Gbg_RxOutput_T gbg_rxoutput;
}ERfTestGetRxGainInfoV3_RxOutput_U;


typedef struct
{
   kal_int16   dl_power;
   ERfTestGetRxGainInfoV3_RxOutput_U rxgaininfo_output;
}ERfTestCmd_GetRxGainInfoV3_CnfPdu;

/*******************************************************************************
 * ERF_TEST_CMD_START_CONT_RX_V3
 ******************************************************************************/


typedef struct
{
   kal_uint8   elna_bypass[ERF_MAX_RX_ANT_NUM_V3];// 0:No , 1:Yes
   kal_int16   rf_gain[ERF_MAX_RX_ANT_NUM_V3];/* resolution 1/32 */
}ERfContRxV3_Sc_RxInput_T;

typedef struct
{
   kal_uint8   elna_bypass[ERF_MAX_RX_TYPE2_GBG_PATH_NUM_V3][ERF_MAX_RX_ANT_NUM_V3];// 0:No , 1:Yes
   kal_int16   rf_gain[ERF_MAX_RX_TYPE2_GBG_PATH_NUM_V3][ERF_MAX_RX_ANT_NUM_V3];/* resolution 1/32 */
}ERfContRxV3_Gbg_RxInput_T;

typedef union
{
   ERfContRxV3_Sc_RxInput_T  sc_rxinput;
   ERfContRxV3_Gbg_RxInput_T gbg_rxinput;
}ERfStartContRxV3_RxInput_U;



typedef struct
{
   ERfTestRxPowerMode_E       powermode;
   kal_uint16                 routeidx;
   kal_uint8                  is_partialon;                 //  0:No , 1:Yes
   kal_uint8                  partialon_path;
   ERfStartContRxV3_RxInput_U cont_rx_input;
   ERfTestDlFrequency_U       rx_freq;                      // frequency in 100kHz
   kal_uint16                 rx_band;
   ERfTestBwE                 rx_bw;
}ErfContRxRfForcedMode_T;

typedef struct
{
   ERfTestRxPowerMode_E powermode;
   kal_uint8            rx_cc_num;
   ERfTestDlFrequency_U rx_freq[ERF_MAX_RX_CC_NUM_V3]; //frequency in 100kHz
   kal_uint16           rx_band[ERF_MAX_RX_CC_NUM_V3]; //LTE BAND
   ERfTestBwE           rx_bw[ERF_MAX_RX_CC_NUM_V3];
}ErfContRxRfNormalMode_T;

typedef union
{
  ErfContRxRfForcedMode_T  forcedmode;
  ErfContRxRfNormalMode_T  normalmode;
} ErfContRx_Rf_Param_U;

typedef struct
{
   kal_uint8            is_forcedmode;       // 0:No , 1:Yes
   ErfContRx_Rf_Param_U contrx_param;
} ERfTestCmd_StartContRxV3_ReqParam;

typedef ERfTestCmd_DefaultCnfParam  ERfTestCmd_StartContRxV3_CnfParam;


/*******************************************************************************
 * ERF_TEST_CMD_START_FHC_V3
 ******************************************************************************/

typedef struct
{
   kal_uint16                    band;
   kal_uint8                     rx_type1_num;
   kal_uint8                     rx_type2_num;
   kal_uint8                     tx_type1_num;
   kal_uint8                     rx_freq_num;
   kal_uint8                     tx_freq_num;
   kal_uint8                     padding;
}FHC_V3_Band_Usage_Param_T;

typedef struct
{
   kal_uint8                     band_num;
   kal_uint8                     padding;
   FHC_V3_Band_Usage_Param_T     band_usage[ERF_MAX_FHC_BAND_CMD_NUM_V3];    // Max band support
}FHC_V3_Band_Info_Param_T;

typedef struct
{
   kal_uint16                    route_idx;
   kal_uint16                    band;
   kal_uint16                    ant_mask;
   kal_uint16                    dl_freq [ERF_MAX_FHC_RX_FREQ_NUM_V3];
   kal_int16                     temp_offset[MAX_TEMP_SECTION_NUM];
   kal_uint8                     rx_cal_step[ERF_TEST_RX_POWER_MODE_NUM];
   kal_int16                     dl_power[ERF_TEST_RX_POWER_MODE_NUM][ERF_MAX_RX_TYPE1_SEQ_NUM_V3];
}FHC_V3_Rx_Type1_Cfg_T;

typedef struct
{
   kal_uint16                    route_idx;
   kal_uint16                    band;
   kal_uint16                    ant_mask;
   kal_uint16                    dl_freq[ERF_MAX_FHC_RX_FREQ_NUM_V3];
   kal_int16                     temp_offset[MAX_TEMP_SECTION_NUM];
   kal_uint8                     sc_rx_cal_step[ERF_TEST_RX_POWER_MODE_NUM];
   kal_int16                     sc_dl_power[ERF_TEST_RX_POWER_MODE_NUM][ERF_MAX_RX_TYPE1_SEQ_NUM_V3];
   kal_uint8                     gbg_rx_cal_step[ERF_TEST_RX_POWER_MODE_NUM];
   kal_int16                     gbg_dl_power[ERF_TEST_RX_POWER_MODE_NUM][ERF_MAX_RX_TYPE2_SEQ_NUM_V3];
}FHC_V3_Rx_Type2_Cfg_T;

typedef struct
{
   kal_uint16                    route_idx;
   kal_uint16                    band;
   kal_uint16                    tx_path_sel_bitmap;
   kal_uint8                     pwr_step_num_at_freq[ERF_MAX_FHC_TX_FREQ_NUM_V3];
   kal_uint8                     pwr_step_pa_mode[MAX_TX_RPT_NUM];
   kal_int16                     pwr_step_value[MAX_TX_RPT_NUM]; //target Power (PRF)
   kal_int16                     pwr_step_pa_gain[MAX_TX_RPT_NUM];
   ERfTxTpcSetting_V3_T          tpc_settings;
}FHC_V3_Tx_Type1_Cfg_T;

typedef struct
{
   kal_uint8                     switch_time;//ms unit
   kal_uint8                     tx_rx_switch_time;//ms unit
   FHC_V3_Band_Info_Param_T      band_info;
   ERfTestParamDynamicEntryElm_T rx_type1_data;
   ERfTestParamDynamicEntryElm_T rx_type2_data;
   ERfTestParamDynamicEntryElm_T tx_type1_data;
   kal_uint16                    rx_instrument_meas_start_offset;
}ERfTestCmd_StartFhcV3_ReqParam;
/*---------------------------------*/

typedef struct
{
   kal_int16                 txPowerDetectorValue[MAX_TX_RPT_NUM];
}FHC_V3_Tx_Type1_Freq_Rpt_T;

typedef struct
{
   kal_uint16                 route_idx;
   kal_uint16                 band;
   kal_uint16                 tx_path_sel_bitmap;
   kal_uint8                  tx_freq_num;
   FHC_V3_Tx_Type1_Freq_Rpt_T tx_freq_rpt[ERF_MAX_FHC_TX_FREQ_NUM_V3];
}FHC_V3_Tx_Type1_Rpt_T;

typedef struct
{
   kal_int16                 sc[ERF_TEST_RX_POWER_MODE_NUM][ERF_MAX_RX_TYPE2_GBG_PATH_NUM_V3][ERF_MAX_RX_TYPE1_SEQ_NUM_V3];
   kal_int16                 gbg[ERF_TEST_RX_POWER_MODE_NUM][ERF_MAX_RX_TYPE2_GBG_PATH_NUM_V3][ERF_MAX_RX_TYPE2_SEQ_NUM_V3];
}FHC_V3_Rx_Type2_NCCA_Rpt_T;

typedef struct
{
   FHC_V3_Rx_Type2_NCCA_Rpt_T   rssi_m;
   FHC_V3_Rx_Type2_NCCA_Rpt_T   rssi_d;
}FHC_V3_Rx_Type2_Freq_Rpt_T;

typedef struct
{
   kal_uint16                 route_idx;
   kal_uint16                 band;
   kal_uint8                  rx_freq_num;
   FHC_V3_Rx_Type2_Freq_Rpt_T rx_freq_rpt[ERF_MAX_FHC_RX_FREQ_NUM_V3];
}FHC_V3_Rx_Type2_Rpt_T;

typedef struct
{
   kal_int16                  rssi_m[ERF_TEST_RX_POWER_MODE_NUM][ERF_MAX_RX_TYPE1_SEQ_NUM_V3];
   kal_int16                  rssi_d[ERF_TEST_RX_POWER_MODE_NUM][ERF_MAX_RX_TYPE1_SEQ_NUM_V3];
}FHC_V3_Rx_Type1_Freq_Rpt_T;

typedef struct
{
   kal_uint16                 route_idx;
   kal_uint16                 band;
   kal_uint8                  rx_freq_num;
   FHC_V3_Rx_Type1_Freq_Rpt_T rx_freq_rpt[ERF_MAX_FHC_RX_FREQ_NUM_V3];
}FHC_V3_Rx_Type1_Rpt_T;
/*---------------------------------*/
typedef struct
{
   DEFAULT_CNF_PARAM
   ERfTestParamDynamicEntryElm_T  rx_type1_data;
   ERfTestParamDynamicEntryElm_T  rx_type2_data;
   ERfTestParamDynamicEntryElm_T  tx_type1_data;
}ERfTestCmd_StartFhcV3_CnfParam;

/*---------------------------------*/


typedef struct
{
   DEFAULT_CNF_PARAM
   kal_uint32  auxadc_temp_result;
}ERfTestCmd_QueryAuxadcTemp_CnfParam;

/*******************************************************************************
 * ERF_TEST_CMD_UBIN_MODE_SETUP
 ******************************************************************************/

typedef struct
{
   kal_uint8 ubin_activate; //1: UBIN mode Init, 0: UBIN mode de-init
}ERfTestCmd_UbinModeSetup_ReqParam;

typedef ERfTestCmd_DefaultCnfParam  ERfTestCmd_UbinModeSetup_CnfParam;

typedef struct
{
   kal_uint8 *fhc_rpt_mem_addr;
}EL1TST_HISR_REQ_PARAM;

typedef struct
{
   #ifdef  __LTE_L1SIM__
   kal_uint8   ref_count;
   kal_uint8   lp_reserved;
   kal_uint16  msg_len;
   #else
   LOCAL_PARA_HDR
   #endif
   EL1TST_HISR_REQ_PARAM  param;
}EL1TST_HISR_REQ;

typedef EL1TST_HISR_REQ  el1task_wakeup_struct;

/*******************************************************************************
 * MMRF_TEST_CMD_START_DPD_FAC_CAL_V3
 ******************************************************************************/
typedef enum
{
   ERF_TEST_START_DPD_INVALID               = 0,
   ERF_TEST_START_DPD_OK                    = 1,
   ERF_TEST_START_DPD_PEER_SIZE_MISMATCH    = 2,
   ERF_TEST_START_DPD_EXCEED_TTG_LIMIT_INIT = 3,
   ERF_TEST_START_DPD_EXCEED_TTG_LIMIT      = 4,
   ERF_TEST_START_DPD_NEGATIVE_PA_GAIN      = 5,
   ERF_TEST_START_DPD_LARGE_PA_GAIN_DIFF    = 6

}ERfTest_StartDpdFacCal_Status;

typedef struct
{
   kal_uint16 num_of_route_and_ps;
   kal_uint16 num_of_band;
   kal_uint16 cal_band[LTE_TARGET_MAX_SUPPORT_BAND_NUM];

}ERfTestCmd_StartDpd_ReqInfo;

typedef struct
{
   kal_uint8  status; /* URfTest_StartDpdPaAndDpdFacCal_Status */
   kal_uint16 curr_band_idx;
   kal_uint32 curr_subband_idx;
   kal_uint32 curr_gain_idx;
   kal_int16  curr_pa_gain;

}ERfTestCmd_StartDpd_CnfInfo;

typedef struct
{
   kal_uint16 comp_route;
   kal_uint16 path_select;
   kal_uint16 apt_ref_channel;
   kal_int16  tpc_wanted_p_offset;

}ERfTest_AptRefChannel_OneRoute;

/* struct for GP tool */
typedef struct
{
   ERfTest_AptRefChannel_OneRoute lte_apt_channel_info[ERF_MAX_TX_ROUTE_AND_PS_NUM_V3];

}ERfTestCmd_StartDpdFacCal_ReqPdu;

/*******************************************************************************
 * MMRF_TEST_CMD_SET_DPD_FAC_RESULT_V3 and MMRF_TEST_CMD_GET_DPD_FAC_RESULT_V3
 ******************************************************************************/
typedef enum
{
   ERF_TEST_SET_DPD_COARSE_INVALID     = 0,
   ERF_TEST_SET_DPD_COARSE_OK          = 1,
   ERF_TEST_SET_DPD_PEER_SIZE_MISMATCH = 2  /* count/offset mismatch */

}ERfTest_SetDpdFacCal_CoarseStatus;

typedef enum
{
   ERF_TEST_SET_DPD_ROUTE_INVALID       = 0,
   ERF_TEST_SET_DPD_ROUTE_OK            = 1,
   ERF_TEST_SET_DPD_ROUTE_BAND_MISMATCH = 2

}ERfTest_SetDpdFacCal_RouteStatus;

typedef enum
{
   ERF_TEST_GET_DPD_INVALID = 0,
   ERF_TEST_GET_DPD_OK      = 1

}ERfTest_GetDpdFacCal_Status;

typedef struct
{
   kal_uint16 num_of_route_and_ps;

}ERfTestCmd_SetDpdAll_ReqInfo;

typedef struct
{
   kal_uint16 num_of_route_and_ps;
   kal_uint8 coarse_status; /* ERfTest_SetDpdFacCal_CoarseStatus */
   kal_uint8 route_status[LTE_DPD_MAX_SET_ALL_DATA_NUM]; /* ERfTest_SetDpdFacCal_RouteStatus */

}ERfTestCmd_SetDpdAll_CnfInfo;

typedef struct
{
   kal_uint16 num_of_route_and_ps;

}ERfTestCmd_SetDpdPartial_ReqInfo;

typedef struct
{
   kal_uint16 num_of_route_and_ps;
   kal_uint8 coarse_status; /* ERfTest_SetDpdFacCal_CoarseStatus */
   kal_uint8 route_status[LTE_DPD_MAX_SET_PARTIAL_DATA_NUM]; /* ERfTest_SetDpdFacCal_RouteStatus */

}ERfTestCmd_SetDpdPartial_CnfInfo;

typedef struct
{
   kal_uint16             band_idx;
   kal_uint16             comp_route;
   kal_uint16             path_select;

   kal_uint8              paControlLevel; /* 2~8 */
   kal_uint8              calRoomTempIdx;
   kal_int16              hysteresisStart0;
   kal_int16              hysteresisEnd0;
   kal_int16              hysteresisStart1;
   kal_int16              hysteresisEnd1;
   kal_uint8              paMode[LTE_DPD_MAX_PA_LEVEL_NUM]; /* ERfTestTxPaModeE */
   kal_int16              pRf[LTE_DPD_MAX_PA_LEVEL_NUM];
   kal_uint16             paGain[LTE_DPD_MAX_PA_LEVEL_NUM];
   kal_uint8              dc2dcLevel[LTE_DPD_MAX_PA_LEVEL_NUM]; /* voltage map by chip, TODO */
   kal_uint16             vBiasDac[LTE_DPD_MAX_PA_LEVEL_NUM];
   kal_uint8              vm0[LTE_DPD_MAX_PA_LEVEL_NUM];
   kal_uint8              vm1[LTE_DPD_MAX_PA_LEVEL_NUM];
   kal_int16              paGainSbWeight[MAX_TX_PA_MODE_NUM][MAX_TEMP_SECTION_NUM][ERF_MAX_FHC_TX_FREQ_NUM_V3];

   /* This flag will be 1 after DPD PA and DPD factory cal done */
   kal_uint8              dpd_cal_done;

   /* This value comes from DPD lab k, and will be applied to the bit field LTXK_REF_DFE_DELAY_TR in LTXK_REF_DFE_DELAY. */
   kal_int16              dpd_tr[ERF_MAX_FHC_TX_FREQ_NUM_V3][LTE_DPD_MAX_CBW_NUM];

}ERfTest_SetGetDpd_TpcPeer;

typedef struct
{
   kal_uint8 lut[LTE_DPD_MAX_AM_LUT_GAIN_NUM][MMDPD_MAX_AM_LUT_PWR_NUM];

} ERfTest_DPDAMLutSubBand;

typedef struct
{
   kal_int8 lut[LTE_DPD_MAX_PM_LUT_GAIN_NUM][MMDPD_MAX_PM_LUT_PWR_NUM];

} ERfTest_DPDPMLutSubBand;

typedef struct
{
   kal_int16               dpdImplicitArray[LTE_DPD_MAX_IMPLICIT_NUM]; /* For the parameters whose name will not be shown in cal file */
   ERfTest_DPDAMLutSubBand am_lut_subband[ERF_MAX_FHC_TX_FREQ_NUM_V3];
   ERfTest_DPDPMLutSubBand pm_lut_subband[ERF_MAX_FHC_TX_FREQ_NUM_V3];

}ERfTest_SetGetDpd_DpdPeer;

typedef struct
{
   ERfTest_SetGetDpd_TpcPeer dpdtpc_peer;
   ERfTest_SetGetDpd_DpdPeer dpd_peer;

}ERfTestCmd_SetDpdFacCalAll_OneRoute, ERfTestCmd_GetDpdFacCalAll_OneRoute;

typedef struct
{
   ERfTest_SetGetDpd_TpcPeer dpdtpc_peer;

}ERfTestCmd_SetDpdFacCalPartial_OneRoute;

typedef struct
{
   kal_uint16  comp_route;
   kal_uint16  path_select;

}ERfTest_RouteInfo;

typedef struct
{
   kal_uint16        num_of_route_and_ps;
   ERfTest_RouteInfo route_info[LTE_DPD_MAX_GET_ALL_DATA_NUM];

}ERfTestCmd_GetDpdAll_ReqInfo;

typedef struct
{
   kal_uint16 num_of_route_and_ps;
   kal_uint8 get_status; /* ERfTest_GetDpdPaAndDpdFacCal_Status */

}ERfTestCmd_GetDpdAll_CnfInfo;

/* struct for GP tool */
typedef struct
{
   ERfTestCmd_SetDpdFacCalAll_OneRoute dpd_one_route[LTE_DPD_MAX_SET_ALL_DATA_NUM];

}ERfTestCmd_SetDpdFacCalAll_ReqPdu;

typedef struct
{
   ERfTestCmd_SetDpdFacCalPartial_OneRoute dpd_one_route[LTE_DPD_MAX_SET_PARTIAL_DATA_NUM];

}ERfTestCmd_SetDpdFacCalPartial_ReqPdu;

typedef struct
{
   ERfTestCmd_GetDpdFacCalAll_OneRoute dpd_one_route_all[LTE_DPD_MAX_GET_ALL_DATA_NUM];

}ERfTestCmd_GetDpdFacCalAll_CnfPdu;

/*******************************************************************************
 * 93 DPD Delay Search Set Command (MMRF_TEST_CMD_SET_DPD_PATH_DELAY_SEARCH_V3)
 ******************************************************************************/
 typedef enum
{
   ERF_TEST_SET_DPD_DELAY_COARSE_INVALID            = 0,
   ERF_TEST_SET_DPD_DELAY_COARSE_VALID              = 1,
   ERF_TEST_SET_DPD_DELAY_COARSE_PEER_SIZE_MISMATCH = 2  /* count/offset mismatch */

}ERfTest_SetDpdPathDelaySearchV3_CoarseStatus;

typedef enum
{
   ERF_TEST_SET_DPD_DELAY_ROUTE_INVALID       = 0,
   ERF_TEST_SET_DPD_DELAY_ROUTE_VALID         = 1,
   ERF_TEST_SET_DPD_DELAY_ROUTE_BAND_MISMATCH = 2

}ERfTest_SetDpdPathDelaySearchV3_RouteStatus;

/* Request */
typedef struct
{
   kal_uint16 route_num;

}ERfTestCmd_SetDpdPathDelaySearchV3_ReqInfo;

typedef struct
{
   kal_uint16   band_num;
   kal_uint16   comp_troute;
   kal_uint16   path_select;
   kal_uint16   subband_freq[ERF_MAX_FHC_TX_FREQ_NUM_V3];
   kal_int16    dpd_tr[ERF_MAX_FHC_TX_FREQ_NUM_V3][LTE_DPD_MAX_CBW_NUM];

}ERfTest_SetDpdPathDelaySearchV3_ReqPeer_OneRoute;

/* struct for GP tool */
typedef struct
{
   ERfTest_SetDpdPathDelaySearchV3_ReqPeer_OneRoute dpd_one_route[LTE_MAX_DPD_DELAY_SET_DATA_NUM];

}ERfTestCmd_SetDpdPathDelaySearchV3_ReqPdu;

/* Confirm */
typedef struct
{
   kal_uint16 route_num;
   kal_uint16 coarse_status;                                 /* ERfTest_SetDpdPathDelaySearchV3_CoarseStatus */
   kal_uint16 route_status[LTE_MAX_DPD_DELAY_SET_DATA_NUM];  /* ERfTest_SetDpdPathDelaySearchV3_RouteStatus  */

}ERfTestCmd_SetDpdPathDelaySearchV3_CnfInfo;

/**********************************************************************************
 * 93 DPD Delay Search Start Command (MMRF_TEST_CMD_START_DPD_PATH_DELAY_SEARCH_V3)
 **********************************************************************************/
typedef enum
{
   ERF_TEST_START_DPD_DELAY_INVALID       = 0,
   ERF_TEST_START_DPD_DELAY_VALID         = 1,
   ERF_TEST_START_DPD_DELAY_TIMEOUT       = 2,
   ERF_TEST_START_DPD_DELAY_SEARCH_FAILED = 3
} ERfTest_StartDpdPathDelaySearchV3_Status;

/* Request */
typedef struct
{
   kal_uint16 test_times;
   kal_uint16 search_band[LTE_TARGET_MAX_SUPPORT_BAND_NUM];
   kal_uint16 search_ca_cbw[MAX_LTE_DPD_DELAY_SEARCH_CA_CBW_NUM];

}ERfTestCmd_StartDpdPathDelaySearchV3_ReqInfo;

/**********************************************************************************
 * 93 DPD Delay Search Get Command (MMRF_TEST_CMD_GET_DPD_PATH_DELAY_SEARCH_V3)
 **********************************************************************************/

/* Request */
typedef struct
{
   kal_uint16        route_num;
   ERfTest_RouteInfo route_info[LTE_MAX_DPD_DELAY_GET_DATA_NUM];

}ERfTestCmd_GetDpdPathDelaySearchV3_ReqInfo;

/* Confirm */
typedef enum
{
   ERF_TEST_GET_DPD_DELAY_INVALID = 0,
   ERF_TEST_GET_DPD_DELAY_VALID   = 1

}ERfTest_GetDpdPathDelaySearchV3_Status;

typedef struct
{
   kal_uint16 route_num;
   kal_uint16 get_status; /* ERfTest_GetDpdPathDelaySearchV3_Status */

}ERfTestCmd_GetDpdPathDelaySearchV3_CnfInfo;

typedef struct
{
   kal_uint16   band_num;
   kal_uint16   comp_troute;
   kal_uint16   path_select;
   kal_int16    dpd_tr[ERF_MAX_FHC_TX_FREQ_NUM_V3][LTE_DPD_MAX_CBW_NUM];

}ERfTest_GetDpdPathDelaySearchV3_CnfPeer_OneRoute;

/* struct for GP tool */
typedef struct
{
   ERfTest_GetDpdPathDelaySearchV3_CnfPeer_OneRoute dpd_delay_one_route[LTE_MAX_DPD_DELAY_GET_DATA_NUM];

}ERfTestCmd_GetDpdPathDelaySearchV3_CnfPdu;

/*******************************************************************************
 * ERF_TEST_CMD_QUERY_AUXADC_TEMP
 ******************************************************************************/
typedef ERfTestCmd_NoParam  ERfTestCmd_AuxDacResult_ReqParam;

typedef struct
{
    kal_uint32    status;
    kal_uint32    result;
} ERfTestCmd_AuxDacResult_CnfParam;



/*******************************************************************************
 * ERF_TEST_CMD_GET_PA_MIPI_DATA = 113
 ******************************************************************************/

#define ERF_MAX_PA_DATA_ACCESS_NUM       ( ERF_MAX_PEER_BUF_CNF_BYTE_SIZE/sizeof(ERF_MIPI_TPC_SECTION_TABLE_DEFAULT_SIZE))
#define ERF_MIPI_SUBBAND_NUM_PER_DATA    (5)
#define ERF_MIPI_TPC_SECTION_DATA_NUM    (5)
#define ERF_MIPI_TPC_SECTION_NUM         (8 + 1)

typedef struct
{
   kal_uint16 mipi_addr;// Port where data to send
   kal_uint16 mipi_data;// mipi data
}ERF_MIPI_ADDA_DATA_EXPAND_TABLE_T;// expanded by sub-freq

typedef struct
{
   ERF_MIPI_ADDA_DATA_EXPAND_TABLE_T mipi_tpc_sec_data[ERF_MIPI_TPC_SECTION_DATA_NUM];
}ERF_MIPI_TPC_SECTION_DATA_T;


typedef struct
{
   kal_uint16 mipi_subband_freq;
   kal_uint16 mipi_usid;
   ERF_MIPI_TPC_SECTION_DATA_T mipi_tpc_section_table[ERF_MIPI_TPC_SECTION_NUM];
}ERF_MIPI_TPC_SECTION_TABLE_T;


typedef struct
{
   ERF_MIPI_TPC_SECTION_TABLE_T    single_carrier[ERF_MIPI_SUBBAND_NUM_PER_DATA];
   ERF_MIPI_TPC_SECTION_TABLE_T    cca[ERF_MIPI_SUBBAND_NUM_PER_DATA];
}ERF_MIPI_TPC_SECTION_TABLE_DEFAULT_SIZE;


typedef enum
{
   ERF_MIPI_TPC_PROC,
   ERF_MIPI_TPC_ET_PROC          = 1,
   ERF_MIPI_TPC_DPD_PROC         = 2,
   ERF_MIPI_TPC_PROC_CONFIG_CNT,
   ERF_MIPI_TPC_PROC_END         = 0xffff
}ERF_TEST_TPC_CONFIG_PROC_E;


/*-------------------------------------------------------------------------*/

typedef struct
{
   kal_uint16                   nbr_routes;
   ERF_TEST_TPC_CONFIG_PROC_E   mipi_config;
   kal_uint16                   mipi_fe_route_idx[ERF_MAX_PA_DATA_ACCESS_NUM];
}ERfTestCmd_GetPaMipiData_ReqParam;


typedef struct
{
   kal_bool get_cnf;
   kal_uint16                   nbr_routes;
   ERF_TEST_TPC_CONFIG_PROC_E   mipi_config;
}ERfTestCmd_GetPaMipiData_CnfParam;


typedef struct
{
   union
   {
     kal_int32                               raw_data[ERF_MAX_PEER_BUF_CNF_WORD_SIZE];
     ERF_MIPI_TPC_SECTION_TABLE_DEFAULT_SIZE lte_mipi_tpc_sec_table[ERF_MAX_PA_DATA_ACCESS_NUM];
   }get_pa_data_cnf;
}ERfTestCmd_GetPaMipiData_CnfPdu;

/*******************************************************************************
 * ERF_TEST_CMD_SET_PA_MIPI_DATA = 114
 ******************************************************************************/

typedef struct
{
   kal_uint16                   nbr_routes;
   ERF_TEST_TPC_CONFIG_PROC_E   mipi_config;
   kal_uint16                   mipi_fe_route_idx[ERF_MAX_PA_DATA_ACCESS_NUM];
}ERfTestCmd_SetPaMipiData_ReqParam;

typedef struct
{
   union
   {
     kal_int32                                  raw_data[ERF_MAX_PEER_BUF_CNF_WORD_SIZE];
     ERF_MIPI_TPC_SECTION_TABLE_DEFAULT_SIZE    lte_mipi_tpc_sec_table[ERF_MAX_PA_DATA_ACCESS_NUM];
   }set_pa_data_cnf;
}ERfTestCmd_SetPaMipiData_ReqPdu;

typedef struct
{
   kal_bool set_cnf;
}ERfTestCmd_SetPaMipiData_CnfParam;


/*******************************************************************************
 * ERF_TEST_CMD_GET_PA_TUNNING_BAND_INFO = 125
 ******************************************************************************/

#define ERF_MAX_TX_CATEGORY_NUM        6


typedef struct
{
  kal_uint16  tx_fe_route;
  kal_uint16  nbr_comp_route;
  kal_uint16  tx_comp_route[ERF_MAX_TX_CATEGORY_NUM];
  kal_uint8   normal_support_bitmap; // bit0:apt bit1:et bit2:dpd
  kal_uint8   cca_support_bitmap; // bit0:apt bit1:et bit2:dpd
}ERF_GET_PA_TUNING_ROUTE_MAP_T;

typedef struct
{
  kal_uint16                     lte_tx_band;
  kal_uint16                     nbr_fe_route;
  ERF_GET_PA_TUNING_ROUTE_MAP_T  fe_route_table[ERF_MAX_TX_CATEGORY_NUM];
}ERF_GET_PA_TUNING_BAND_INFO_T;

/*-------------------------------------------------------------------------*/

typedef ERfTestCmd_NoParam      ERfTestCmd_GetPaTuningRouteInfo_ReqParam;

typedef struct
{
  kal_bool get_cnf;
}ERfTestCmd_GetPaTuningRouteInfo_CnfParam;


typedef struct
{
  kal_uint16                     nbr_tx_band;
  ERF_GET_PA_TUNING_BAND_INFO_T  lte_tx_info[ERF_MAX_BAND_NUM_V3];
}ERfTestCmd_GetPaTuningRouteInfo_CnfPdu;

/*******************************************************************************
 * AFC FHC TX CAL (ERF_TEST_CMD_FHC_AFC_TX_CAL)
 ******************************************************************************/
typedef struct
{
   kal_uint16  band;
   kal_uint16  ulFrequency;/* range: 0~65535 (100KHz unit) */
   kal_int16   txPowerValue;/*S(8,8),  x dB * 256.0 */
}ERfTestCmd_FhcAfcTxCal_ReqParam;

typedef struct
{
   kal_uint16 used_cap_id_array[MAX_LTE_AFC_USED_CAPID_ARRAY];
}ERfTestCmd_FhcAfcTxCal_CnfParam;


/*******************************************************************************
 * LTE RF Tool Command Union
 ******************************************************************************/
typedef union
{
   ERfTestCmd_ResetCounter_ReqParam             resetCounterParam;     // for ERF_TEST_CMD_RESET_COUNTER                = 6
   ERfTestCmd_StopTestMode_ReqParam             stopTestModeParam;     // for ERF_TEST_CMD_STOP_TEST_MODE               = 7
   ERfTestCmd_GetRfCapability_ReqParam          getRfCapabilityParam;  // for ERF_TEST_CMD_GET_RF_CAPABILITY            = 10
   ERfTestCmd_StartAfcSingleToneTx_ReqParam     afcSingleToneTxParam;  // for ERF_TEST_CMD_START_AFC_SINGLE_TONE_TX     = 11
   ERfTestCmd_SetAfcSetting_ReqParam            setAfcSettingParam;    // for ERF_TEST_CMD_SET_AFC_SETTING              = 12
   ERfTestCmd_GetAfcSetting_ReqParam            getAfcSettingParam;    // for ERF_TEST_CMD_GET_AFC_SETTING              = 13
   ERfTestCmd_GetPowerDetectorValue_ReqParam    getPdValueParam;       // for ERF_TEST_CMD_GET_POWER_DETECTOR_VALUE     = 16
   ERfTestCmd_CheckIfFuncExist_ReqParam         CheckIfFuncExist;      // for ERF_TEST_CMD_CHECK_IF_FUNC_EXIST          = 21
   ERfTestCmd_QueryNvramLid_ReqParam            nvramInfoReq;          // for ERF_TEST_CMD_QUERY_NVRAM_LID              = 36
   ERfTestCmd_GetGpsCoClockData_ReqParam        getCoClockDataParam;   // for ERF_TEST_CMD_GET_GPS_CO_CLOCK_DATA        = 37
   ERfTestCmd_SetGpsCoClockData_ReqParam        gpsCoClockData;        // for ERF_TEST_CMD_SET_GPS_CO_CLOCK_DATA        = 38
   ERfTestCmd_StartTpcSingleToneTxV2_ReqParam   tpcSingleToneTxV2Param;// for ERF_TEST_CMD_START_TPC_SINGLE_TONE_TX_V2  = 63
   ERfTestCmd_GetTxRxRouteInfo_ReqParam         getTxRxRouteReqInfo;   // for ERF_TEST_CMD_GET_TXRX_ROUTE_INFO          = 66
   ERfTestCmd_StartPuschTxCaV2_ReqParam         puschTxParam;          // for ERF_TEST_CMD_START_PUSCH_TX_CA_V2         = 67
   ERfTestCmd_StartPucchTxV2_ReqParam           pucchTxParam;          // for ERF_TEST_CMD_START_PUCCH_TX_V2            = 68
   ERfTestCmd_StartPrachTxV2_ReqParam           prachTxParam;          // for ERF_TEST_CMD_START_PRACH_TX_V2            = 69
   ERfTestCmd_StartSrsTxCaV2_ReqParam           srsTxParam;            // for ERF_TEST_CMD_START_SRS_TX_CA_V2           = 70
   ERfTestCmd_StartMixRxCaV3_ReqParam           mixRxParamCaMode;      // for ERF_TEST_CMD_START_MIX_RX_CA_V2           = 71
   ERfTestCmd_GetMixRxCaRptV2_ReqParam          getMixRxCaRptParam;    // for ERF_TEST_CMD_GET_MIX_RX_CA_RPT_V2         = 72
   ERfTestCmd_StartNsftTxRxListV2_ReqParam      startNsftListParam;    // for ERF_TEST_CMD_START_NSFT_TX_RX_LIST_V2     = 73
   ERfTestCmd_QueryCaConfigTableV3_ReqParam     queryCaCfgTableV3Param;// for ERF_TEST_CMD_QUERY_CA_CONFIG_TABLE_V3     = 75
   ERfTestCmd_GetRxTxSettingV3_ReqParam         getRxTxDataV3ReqInfo;  // for ERF_TEST_CMD_GET_RX_TX_SETTING_V3         = 76
   ERfTestCmd_SetRxTxSettingV3_ReqParam         setRxTxDataV3ReqInfo;  // for ERF_TEST_CMD_SET_RX_TX_SETTING_V3         = 77
   ERfTestCmd_StartRssiV3_ReqParam              rssiRxV3Param;         // for ERF_TEST_CMD_START_RSSI_V3                = 78
   ERfTestCmd_GetRxGainInfoV3_ReqParam          getRxGainV3ReqInfo;    // for ERF_TEST_CMD_GET_RX_GAIN_INFO_V3          = 79
   ERfTestCmd_StartContRxV3_ReqParam            contRxV3Param;         // for ERF_TEST_CMD_START_CONT_RX_V3             = 80
   ERfTestCmd_StartFhcV3_ReqParam               fhcV3Param;            // for ERF_TEST_CMD_START_FHC_V3                 = 81
   ERfTestCmd_StartNsftTxRxListV3_ReqParam      startNsftListParamV3;  // for ERF_TEST_CMD_START_NSFT_TX_RX_LIST_V3     = 88
   ERfTestCmd_AuxDacResult_ReqParam             auxadcResult;          // for ERF_TEST_CMD_QUERY_AUXADC_TEMP            = 93
   ERfTestCmd_UbinModeSetup_ReqParam            ubinmodesetupParam;    // for ERF_TEST_CMD_UBIN_MODE_SETUP              = 94
   ERfTestCmd_FhcAfcTxCal_ReqParam              fhcAfcTxCalReqParam;   // for ERF_TEST_CMD_FHC_AFC_TX_CAL               = 106
   ERfTestCmd_GetTxPowerOffset_ReqParam         gettxpoweroffsetReq;   // for ERF_TEST_CMD_GET_TX_POWER_OFFSET          = 110
   ERfTestCmd_SetTxPowerOffset_ReqParam         settxpoweroffsetReq;   // for ERF_TEST_CMD_SET_TX_POWER_OFFSET          = 111
   ERfTestCmd_GetPaMipiData_ReqParam            getpamipidataReq;       // for ERF_TEST_CMD_GET_PA_MIPI_DATA            = 113
   ERfTestCmd_SetPaMipiData_ReqParam            setpamipidataReq;       // for ERF_TEST_CMD_SET_PA_MIPI_DATA            = 114
   ERfTestCmd_GetPaTuningRouteInfo_ReqParam     getpatuningrouteinfoReq;// for ERF_TEST_CMD_GET_PA_TUNNING_BAND_INFO    = 125
}ERfTestCmdParam;

typedef union
{
   DEFAULT_CNF_PARAM
   ERfTestCmd_ResetCounter_CnfParam             resetCounterParam;     // for ERF_TEST_CMD_RESET_COUNTER                = 6
   ERfTestCmd_StopTestMode_CnfParam             stopTestModeParam;     // for ERF_TEST_CMD_STOP_TEST_MODE               = 7
   ERfTestCmd_GetRfCapability_CnfParam          getRfCapabilityParam;  // for ERF_TEST_CMD_GET_RF_CAPABILITY            = 10
   ERfTestCmd_StartAfcSingleToneTx_CnfParam     startAfcToneTxParam;   // for ERF_TEST_CMD_START_AFC_SINGLE_TONE_TX     = 11
   ERfTestCmd_SetAfcSetting_CnfParam            setAfcSettingParam;    // for ERF_TEST_CMD_SET_AFC_SETTING              = 12
   ERfTestCmd_GetAfcSetting_CnfParam            getAfcSettingParam;    // for ERF_TEST_CMD_GET_AFC_SETTING              = 13
   ERfTestCmd_GetPowerDetectorValue_CnfParam    txPowerDetector;       // for ERF_TEST_CMD_GET_POWER_DETECTOR_VALUE     = 16
   ERfTestCmd_CheckIfFuncExist_CnfParam         CheckIfFuncExist;      // for ERF_TEST_CMD_CHECK_IF_FUNC_EXIST          = 21
   ERfTestCmd_QueryNvramLid_CnfParam            nvramInfoCnf;          // for ERF_TEST_CMD_QUERY_NVRAM_LID              = 36
   ERfTestCmd_GetGpsCoClockData_CnfParam        gpsCoClockData;        // for ERF_TEST_CMD_GET_GPS_CO_CLOCK_DATA        = 37
   ERfTestCmd_SetGpsCoClockData_CnfParam        setCoClockData;        // for ERF_TEST_CMD_SET_GPS_CO_CLOCK_DATA        = 38
   ERfTestCmd_StartTpcSingleToneTxV2_CnfParam   startTpcToneTxV2Param; // for ERF_TEST_CMD_START_TPC_SINGLE_TONE_TX_V2  = 63
   ERfTestCmd_GetTxRxRouteInfo_CnfParam         getTxRxRouteCnfInfo;   // for ERF_TEST_CMD_GET_TXRX_ROUTE_INFO          = 66
   ERfTestCmd_StartPuschTxCaV2_CnfParam         startPuschTxParam;     // for ERF_TEST_CMD_START_PUSCH_TX_CA_V2         = 67
   ERfTestCmd_StartPucchTxV2_CnfParam           startPucchTxParam;     // for ERF_TEST_CMD_START_PUCCH_TX_V2            = 68
   ERfTestCmd_StartPrachTxV2_CnfParam           startPrachTxParam;     // for ERF_TEST_CMD_START_PRACH_TX_V2            = 69
   ERfTestCmd_StartSrsTxCaV2_CnfParam           startSrsTxParam;       // for ERF_TEST_CMD_START_SRS_TX_CA_V2           = 70
   ERfTestCmd_StartMixRxCaV2_CnfParam           startMixRxCaModeParam; // for ERF_TEST_CMD_START_MIX_RX_CA_V2           = 71
   ERfTestCmd_GetMixRxCaRptV2_CnfParam          mixRxRptCaMode;        // for ERF_TEST_CMD_GET_MIX_RX_CA_RPT_V2         = 72
   ERfTestCmd_StartNsftTxRxListV2_CnfParam      startNsftListParam;    // for ERF_TEST_CMD_START_NSFT_TX_RX_LIST_V2     = 73
   ERfTestCmd_QueryCaConfigTableV3_CnfParam     queryCaCfgTableV3Param;// for ERF_TEST_CMD_QUERY_CA_CONFIG_TABLE_V3     = 75
   ERfTestCmd_GetRxTxSettingV3_CnfParam         getRxTxDataV3CnfInfo;  // for ERF_TEST_CMD_GET_RX_TX_SETTING_V3         = 76
   ERfTestCmd_SetRxTxSettingV3_CnfParam         setRxTxDataV3CnfInfo;  // for ERF_TEST_CMD_SET_RX_TX_SETTING_V3         = 77
   ERfTestCmd_StartRssiV3_CnfParam              startRssiV3Param;      // for ERF_TEST_CMD_START_RSSI_V3                = 78
   ERfTestCmd_GetRxGainInfoV3_CnfParam          getRxGainV3CnfInfo;    // for ERF_TEST_CMD_GET_RX_GAIN_INFO_V3          = 79
   ERfTestCmd_StartContRxV3_CnfParam            startContRxV3Param;    // for ERF_TEST_CMD_START_CONT_RX_V3             = 80
   ERfTestCmd_StartFhcV3_CnfParam               fhcV3Param;            // for ERF_TEST_CMD_START_FHC_V3                 = 81
   ERfTestCmd_AuxDacResult_CnfParam             auxadcResult;          // for ERF_TEST_CMD_QUERY_AUXADC_TEMP            = 93
   ERfTestCmd_UbinModeSetup_CnfParam            ubinmodesetupParam;    // for ERF_TEST_CMD_UBIN_MODE_SETUP              = 94
   ERfTestCmd_FhcAfcTxCal_CnfParam              fhcAfcTxCalCnfParam;   // for ERF_TEST_CMD_FHC_AFC_TX_CAL               = 106
   ERfTestCmd_GetTxPowerOffset_CnfParam         gettxpoweroffsetCnf;   // for ERF_TEST_CMD_GET_TX_POWER_OFFSET              = 110
   ERfTestCmd_SetTxPowerOffset_CnfParam         settxpoweroffsetCnf;   // for ERF_TEST_CMD_SET_TX_POWER_OFFSET              = 111
   ERfTestCmd_GetPaMipiData_CnfParam            getpamipidataCnf;       // for ERF_TEST_CMD_GET_PA_MIPI_DATA            = 113
   ERfTestCmd_SetPaMipiData_CnfParam            setpamipidataCnf;       // for ERF_TEST_CMD_SET_PA_MIPI_DATA            = 114
   ERfTestCmd_GetPaTuningRouteInfo_CnfParam     getpatuningrouteinfoCnf;// for ERF_TEST_CMD_GET_PA_TUNNING_BAND_INFO    = 125
}ERfTestResultParam;

typedef struct
{
   FT_HDR
   ERfTestCmdType type;
   ERfTestCmdParam param;
}FT_ERF_TEST_REQ;

typedef struct
{
   FT_HDR
   ERfTestCmdType type;
   ERfTestResultParam param;
}FT_ERF_TEST_CNF;

typedef FT_ERF_TEST_REQ dhl_to_el1tst_struct;
typedef FT_ERF_TEST_CNF el1tst_to_dhl_struct;

typedef FT_ERF_TEST_REQ dhl_to_etstm_struct;
typedef FT_ERF_TEST_CNF etstm_to_dhl_struct;

typedef FT_ERF_TEST_REQ ft_erf_test_req_id_struct;
typedef FT_ERF_TEST_CNF ft_erf_test_cnf_id_struct;

typedef ERfTestCmd_SetAfcSetting_ReqPdu pb_pdu_set_afc_struct;
typedef ERfTestCmd_NoParam              pb_pdu_no_param_struct;


#endif
