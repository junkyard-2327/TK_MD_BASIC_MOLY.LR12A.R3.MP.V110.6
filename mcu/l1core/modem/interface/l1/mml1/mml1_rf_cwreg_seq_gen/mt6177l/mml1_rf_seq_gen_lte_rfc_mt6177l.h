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
 *
 *
 * Project:
 * --------
 *
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 *
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __MML1_RF_SEQ_GEN_LTE_RFC_MT6177L_H__
#define __MML1_RF_SEQ_GEN_LTE_RFC_MT6177L_H__


/************************************************************************************
*  Include 
************************************************************************************/


/************************************************************************************
*  Defines
************************************************************************************/
/** MML1 Part */
#define SEQ_LTE_RFC_CW1_COUNT                             (1)  //CW1
#define SEQ_LTE_RFC_RX_BW_CW_COUNT                        (1)  //RX1:CW326,RX2: CW333
#define SEQ_LTE_RFC_RX_POWER_MODE_CW_COUNT                (2)  //RX1:CW413, CW414 RX2: CW415, CW416
#define SEQ_LTE_RFC_RX_CURR_ABB_CW_COUNT                  (2)  //RX1:CW448, CW456 RX2: CW452, CW460
#define SEQ_LTE_RFC_RX_IIP2_RG_BIAS_CW_COUNT              (2)  //RX1:CW349, CW473 RX2: CW350, CW482
#define SEQ_LTE_RFC_RX_RFDCOC_COMP_CW_COUNT               (2)  //RX1:CW335, CW337 RX2: CW341, CW343
#define SEQ_LTE_RFC_RX_PATH_CTRL_CW_COUNT                 (6)  //RX1:CW320, CW322, CW323, CW324, CW325, CW617 RX2:CW327, CW329, CW330, CW331, CW332, CW617
#define SEQ_LTE_RFC_RX_LO_CTRL_COUNT                      (1)  //RX1:CW495,RX2: CW499
#define SEQ_LTE_RFC_RX_MIXER_GATE_BIAS_COUNT              (1)  //RX1:CW399,RX2: CW400
#define SEQ_LTE_RFC_SRX_SET_COUNT                         (5)  //RX1:CW128, CW130, CW131, CW127 RX2: CW129, CW132, CW133, CW126 TDD:CW181, CW281 FDD:CW179,CW279
#define SEQ_LTE_RFC_TTG_CALC_COUNT                        (2)  //CW51, CW50
#define SEQ_LTE_RFC_SET_RF_CW_TX_RCF_COUNT                (1)  //CW793
#define SEQ_LTE_RFC_SET_TX_RCF_FOR_RCK_COUNT              (1)  //CW793
#define SEQ_LTE_RFC_SET_RF_CW_TX_LPF_COUNT                (1)  //CW710
#define SEQ_LTE_RFC_SET_RF_CW_TX_RCCAL1_COUNT             (1)  //CW787
#define SEQ_LTE_RFC_TTG_CTRL_COUNT                        (1)  //CW45
#define SEQ_LTE_RFC_SET_TX_LPF_CW710_COUNT                (1)  //CW710
#define SEQ_LTE_RFC_LO_RESULT_WB_COUNT                    (1)  //CW714
#define SEQ_LTE_RFC_SET_TX_GAIN_COUNT                     (1)  //CW706
#define SEQ_LTE_RFC_SET_RF_CAPCODE_AACT_COUNT             (1)  //CW795
#define SEQ_LTE_RFC_SET_RF_CAPCODE_BACT_COUNT             (1)  //CW796
#define SEQ_LTE_RFC_SET_DET_GAIN_COUNT                    (1)  //CW705
#define SEQ_LTE_RFC_SET_EXTRA_CW_FOR_TX_BW_CHANGE_COUNT   (2)  //CW797, CW712
#define SEQ_LTE_RFC_RF_CW_INIT_COUNT                      (1)  //CW704
#define SEQ_LTE_RFC_TX_CW_RESET_COUNT                     (2)  //CW816, CW818
#define SEQ_LTE_RFC_PRE_CONFIG_SRX1_POFF_COUNT            (4)  //CW134, CW135, CW320, CW617
#define SEQ_LTE_RFC_PRE_CONFIG_SRX2_POFF_COUNT            (4)  //CW136, CW137, CW327, CW617

/** EL1D Part */
#define SEQ_LTE_RFC_STX_DCC_DELTA_NC_CONFIG_COUNT         (1)  //CW568
#define SEQ_LTE_RFC_STX_DCC_CONFIG_COUNT                  (5)  //CW568, CW511, CW529, CW549, CW550
#define SEQ_LTE_RFC_STX_CONFIG_BUFFER_COUNT               (5)  //CW511, CW529, CW549, CW550, CW582
#define SEQ_LTE_RFC_SRX1_CONFIG_BUFFER_COUNT              (6)  //CW128, CW130, CW131, CW126, CW181, CW495
#define SEQ_LTE_RFC_SRX2_CONFIG_BUFFER_COUNT              (6)  //CW129, CW132, CW133, CW127, CW281, CW499
#define SEQ_LTE_RFC_DPD_CONFIG_BUFFER_COUNT               (1)  //CW799
#define SEQ_LTE_RFC_LIN_CONFIG_BUFFER_COUNT               (1)  //CW797
#define SEQ_LTE_RFC_TX_CONFIG_BUFFER_COUNT                (13) //CW707, CW786, CW794, CW795, CW796, CW814, CW712, CW802, CW803, CW714, CW816, CW818, CW819
#define SEQ_LTE_RFC_FDD_TX_SL2W_WO_CW1_COUNT              (23)


/************************************************************************************
*  Enums
************************************************************************************/


/************************************************************************************
*  Union
************************************************************************************/


/************************************************************************************
*  Structures
************************************************************************************/
typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_LTE_RFC_CW1_INFO_T;

typedef struct
{
   CW326_INFO_T cw326_info;
}SEQ_LTE_RFC_RX1_BW_SETTING_INFO_T;

typedef struct
{
   CW333_INFO_T cw333_info;
}SEQ_LTE_RFC_RX2_BW_SETTING_INFO_T;

typedef struct
{
   CW413_INFO_T cw413_info;
   CW414_INFO_T cw414_info;
}SEQ_LTE_RFC_RX1_POWER_MODE_INFO_T;

typedef struct
{
   CW415_INFO_T cw415_info;
   CW416_INFO_T cw416_info;
}SEQ_LTE_RFC_RX2_POWER_MODE_INFO_T;

typedef struct
{
   CW448_INFO_T cw448_info;
   CW456_INFO_T cw456_info;
}SEQ_LTE_RFC_RX1_CURR_ABB_INFO_T;

typedef struct
{
   CW452_INFO_T cw452_info;
   CW460_INFO_T cw460_info;
}SEQ_LTE_RFC_RX2_CURR_ABB_INFO_T;

typedef struct
{
   CW349_INFO_T cw349_info;
   CW473_INFO_T cw473_info;
}SEQ_LTE_RFC_RX1_IIP2C_RG_BIAS_INFO_T;

typedef struct
{
   CW350_INFO_T cw350_info;
   CW482_INFO_T cw482_info;
}SEQ_LTE_RFC_RX2_IIP2C_RG_BIAS_INFO_T;


typedef struct
{
   CW335_INFO_T cw335_info;
   CW337_INFO_T cw337_info;
}SEQ_LTE_RFC_RX1_RFDCOC_COMP_INFO_T;

typedef struct
{
   CW341_INFO_T cw341_info;
   CW343_INFO_T cw343_info;
}SEQ_LTE_RFC_RX2_RFDCOC_COMP_INFO_T;

typedef struct
{
   CW320_INFO_T cw320_info;
   CW322_INFO_T cw322_info;
   CW323_INFO_T cw323_info;
   CW324_INFO_T cw324_info;
   CW325_INFO_T cw325_info;
   CW617_INFO_T cw617_info;
}SEQ_LTE_RFC_RX1_PATH_CTRL_INFO_T;

typedef struct
{
   CW327_INFO_T cw327_info;
   CW329_INFO_T cw329_info;
   CW330_INFO_T cw330_info;
   CW331_INFO_T cw331_info;
   CW332_INFO_T cw332_info;
   CW617_INFO_T cw617_info;
}SEQ_LTE_RFC_RX2_PATH_CTRL_INFO_T;

typedef struct
{
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW127_INFO_T cw127_info;
   CW179_INFO_T cw179_info;
}SEQ_LTE_RFC_SRX1_FDD_CTRL_INFO_T;

typedef struct
{
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW127_INFO_T cw127_info;
   CW181_INFO_T cw181_info;
}SEQ_LTE_RFC_SRX1_TDD_CTRL_INFO_T;

typedef struct
{
   CW129_INFO_T cw129_info;
   CW132_INFO_T cw132_info;
   CW133_INFO_T cw133_info;
   CW126_INFO_T cw126_info;
   CW279_INFO_T cw279_info;
}SEQ_LTE_RFC_SRX2_FDD_CTRL_INFO_T;

typedef struct
{
   CW129_INFO_T cw129_info;
   CW132_INFO_T cw132_info;
   CW133_INFO_T cw133_info;
   CW126_INFO_T cw126_info;
   CW281_INFO_T cw281_info;
}SEQ_LTE_RFC_SRX2_TDD_CTRL_INFO_T;


typedef struct
{
   CW495_INFO_T cw495_info;
}SEQ_LTE_RFC_RX1_LO_CTRL_INFO_T;

typedef struct
{
   CW499_INFO_T cw499_info;
}SEQ_LTE_RFC_RX2_LO_CTRL_INFO_T;

typedef struct
{
   CW399_INFO_T cw399_info;
}SEQ_LTE_RFC_RX1_MIXER_BIAS_INFO_T;

typedef struct
{
   CW400_INFO_T cw400_info;
}SEQ_LTE_RFC_RX2_MIXER_BIAS_INFO_T;

typedef struct
{
   CW51_INFO_T cw51_info;
   CW50_INFO_T cw50_info;
}SEQ_LTE_RFC_TTG_CALC_INFO_T;

typedef struct
{
   CW793_INFO_T cw793_info;
}SEQ_LTE_RFC_SET_RF_CW_TX_RCF_INFO_T;

typedef struct
{
   CW793_INFO_T cw793_info;
}SEQ_LTE_RFC_SET_TX_RCF_FOR_RCK_INFO_T;

typedef struct
{
   CW710_INFO_T cw710_info;
}SEQ_LTE_RFC_SET_RF_CW_TX_LPF_INFO_T;

typedef struct
{
   CW787_INFO_T cw787_info;
}SEQ_LTE_RFC_SET_RF_CW_TX_RCCAL1_INFO_T;

typedef struct
{
   CW45_INFO_T cw45_info;
}SEQ_LTE_RFC_TTG_CTRL_INFO_T;

typedef struct
{
   CW710_INFO_T cw710_info;
}SEQ_LTE_RFC_SET_TX_LPF_CW710_INFO_T;

typedef struct
{
   CW714_INFO_T cw714_info;
}SEQ_LTE_RFC_LO_RESULT_WB_INFO_T;

typedef struct
{
   CW706_INFO_T cw706_info;
}SEQ_LTE_RFC_SET_TX_GAIN_INFO_T;

typedef struct
{
   CW795_INFO_T cw795_info;
}SEQ_LTE_RFC_SET_RF_CAPCODE_AACT_INFO_T;

typedef struct
{
   CW796_INFO_T cw796_info;
}SEQ_LTE_RFC_SET_RF_CAPCODE_BACT_INFO_T;

typedef struct
{
   CW705_INFO_T cw705_info;
}SEQ_LTE_RFC_SET_DET_GAIN_INFO_T;

typedef struct
{
   CW797_INFO_T cw797_info;
   CW712_INFO_T cw712_info;
}SEQ_LTE_RFC_SET_EXTRA_CW_FOR_TX_BW_CHANGE_INFO_T;

typedef struct
{
   CW704_INFO_T cw704_info;
   kal_bool     is_set_default;
}SEQ_LTE_RFC_RF_CW_INIT_INFO_T;

typedef struct
{
   CW816_INFO_T cw816_info;
   CW818_INFO_T cw818_info;
   kal_bool     is_set_default;
}SEQ_LTE_RFC_TX_CW_RESET_INFO_T;

typedef struct
{
   CW134_INFO_T cw134_info;
   CW135_INFO_T cw135_info;
   CW320_INFO_T cw320_info;
   CW617_INFO_T cw617_info;
}SEQ_LTE_RFC_PRE_CONFIG_SRX1_POFF_INFO_T;

typedef struct
{
   CW136_INFO_T cw136_info;
   CW137_INFO_T cw137_info;
   CW327_INFO_T cw327_info;
   CW617_INFO_T cw617_info;
}SEQ_LTE_RFC_PRE_CONFIG_SRX2_POFF_INFO_T;

typedef struct
{
   CW568_INFO_T cw568_info;
}SEQ_LTE_RFC_STX_DCC_DELTA_NC_CONFIG_INFO_T;

typedef struct
{
   CW568_INFO_T cw568_info;
   CW511_INFO_T cw511_info;
   CW529_INFO_T cw529_info;
   CW549_INFO_T cw549_info;
   CW550_INFO_T cw550_info;
}SEQ_LTE_RFC_STX_DCC_CONFIG_INFO_T;

typedef struct
{
   CW511_INFO_T cw511_info;
   CW529_INFO_T cw529_info;
   CW549_INFO_T cw549_info;
   CW550_INFO_T cw550_info;
   CW582_INFO_T cw582_info;
}SEQ_LTE_RFC_STX_CONFIG_BUFFER_INFO_T;

typedef struct
{
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW127_INFO_T cw127_info;
   CW181_INFO_T cw181_info;
   CW495_INFO_T cw495_info;
}SEQ_LTE_RFC_SRX1_CONFIG_BUFFER_INFO_T;

typedef struct
{
   CW129_INFO_T cw129_info;
   CW132_INFO_T cw132_info;
   CW133_INFO_T cw133_info;
   CW126_INFO_T cw126_info;
   CW281_INFO_T cw281_info;
   CW499_INFO_T cw499_info;
}SEQ_LTE_RFC_SRX2_CONFIG_BUFFER_INFO_T;

typedef struct
{
   CW799_INFO_T cw799_info;
}SEQ_LTE_RFC_DPD_CONFIG_BUFFER_INFO_T;

typedef struct
{
   CW797_INFO_T cw797_info;
}SEQ_LTE_RFC_LIN_CONFIG_BUFFER_INFO_T;

typedef struct
{
   CW707_INFO_T cw707_info;
   CW786_INFO_T cw786_info;
   CW794_INFO_T cw794_info;
   CW795_INFO_T cw795_info;
   CW796_INFO_T cw796_info;
   CW814_INFO_T cw814_info;
   CW712_INFO_T cw712_info;
   CW802_INFO_T cw802_info;
   CW803_INFO_T cw803_info;
   CW714_INFO_T cw714_info;
   CW816_INFO_T cw816_info;
   CW818_INFO_T cw818_info;
   CW819_INFO_T cw819_info;
}SEQ_LTE_RFC_TX_CONFIG_BUFFER_INFO_T;


/************************************************************************************
*  Prototypes
************************************************************************************/
void MMRF_SEQ_LTE_RFC_CW1 ( SEQ_LTE_RFC_CW1_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_RX1_BW_SETTING(SEQ_LTE_RFC_RX1_BW_SETTING_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_RX2_BW_SETTING(SEQ_LTE_RFC_RX2_BW_SETTING_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_RX1_POWER_MODE_SETTING(SEQ_LTE_RFC_RX1_POWER_MODE_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_RX2_POWER_MODE_SETTING(SEQ_LTE_RFC_RX2_POWER_MODE_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_RX1_CURR_ABB_SETTING(SEQ_LTE_RFC_RX1_CURR_ABB_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_RX2_CURR_ABB_SETTING(SEQ_LTE_RFC_RX2_CURR_ABB_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_RX1_IIP2C_RG_BIAS_SETTING(SEQ_LTE_RFC_RX1_IIP2C_RG_BIAS_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_RX2_IIP2C_RG_BIAS_SETTING(SEQ_LTE_RFC_RX2_IIP2C_RG_BIAS_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_RX1_RFDCOC_COMP_SETTING(SEQ_LTE_RFC_RX1_RFDCOC_COMP_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_RX2_RFDCOC_COMP_SETTING(SEQ_LTE_RFC_RX2_RFDCOC_COMP_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_RX1_PATH_CTRL(SEQ_LTE_RFC_RX1_PATH_CTRL_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_RX2_PATH_CTRL(SEQ_LTE_RFC_RX2_PATH_CTRL_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_RX1_LO_CTRL(SEQ_LTE_RFC_RX1_LO_CTRL_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_RX2_LO_CTRL(SEQ_LTE_RFC_RX2_LO_CTRL_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_RX1_MIXER_GATE_BIAS(SEQ_LTE_RFC_RX1_MIXER_BIAS_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_RX2_MIXER_GATE_BIAS(SEQ_LTE_RFC_RX2_MIXER_BIAS_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_SRX1_FDD_CTRL(SEQ_LTE_RFC_SRX1_FDD_CTRL_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_SRX1_TDD_CTRL(SEQ_LTE_RFC_SRX1_TDD_CTRL_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_SRX2_FDD_CTRL(SEQ_LTE_RFC_SRX2_FDD_CTRL_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_SRX2_TDD_CTRL(SEQ_LTE_RFC_SRX2_TDD_CTRL_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_TTG_CALC(SEQ_LTE_RFC_TTG_CALC_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_SET_RF_CW_TX_RCF(SEQ_LTE_RFC_SET_RF_CW_TX_RCF_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_SET_TX_RCF_FOR_RCK(SEQ_LTE_RFC_SET_TX_RCF_FOR_RCK_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_SET_RF_CW_TX_LPF(SEQ_LTE_RFC_SET_RF_CW_TX_LPF_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_SET_RF_CW_TX_RCCAL1(SEQ_LTE_RFC_SET_RF_CW_TX_RCCAL1_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_TTG_CTRL(SEQ_LTE_RFC_TTG_CTRL_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_SET_TX_LPF_CW710(SEQ_LTE_RFC_SET_TX_LPF_CW710_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_LO_RESULT_WB(SEQ_LTE_RFC_LO_RESULT_WB_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_SET_TX_GAIN(SEQ_LTE_RFC_SET_TX_GAIN_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_SET_RF_CAPCODE_AACT(SEQ_LTE_RFC_SET_RF_CAPCODE_AACT_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_SET_RF_CAPCODE_BACT(SEQ_LTE_RFC_SET_RF_CAPCODE_BACT_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_SET_DET_GAIN(SEQ_LTE_RFC_SET_DET_GAIN_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_SET_EXTRA_CW_FOR_TX_BW_CHANGE(SEQ_LTE_RFC_SET_EXTRA_CW_FOR_TX_BW_CHANGE_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_RF_CW_INIT(SEQ_LTE_RFC_RF_CW_INIT_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_TX_CW_RESET(SEQ_LTE_RFC_TX_CW_RESET_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_PRE_CONFIG_SRX1_POFF(SEQ_LTE_RFC_PRE_CONFIG_SRX1_POFF_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_PRE_CONFIG_SRX2_POFF(SEQ_LTE_RFC_PRE_CONFIG_SRX2_POFF_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_STX_DCC_DELTA_NC_CONFIG(SEQ_LTE_RFC_STX_DCC_DELTA_NC_CONFIG_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_STX_DCC_CONFIG(SEQ_LTE_RFC_STX_DCC_CONFIG_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_STX_CONFIG_BUFFER(SEQ_LTE_RFC_STX_CONFIG_BUFFER_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_SRX1_CONFIG_BUFFER(SEQ_LTE_RFC_SRX1_CONFIG_BUFFER_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_SRX2_CONFIG_BUFFER(SEQ_LTE_RFC_SRX2_CONFIG_BUFFER_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_DPD_CONFIG_BUFFER(SEQ_LTE_RFC_DPD_CONFIG_BUFFER_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_LIN_CONFIG_BUFFER(SEQ_LTE_RFC_LIN_CONFIG_BUFFER_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_RFC_TX_CONFIG_BUFFER(SEQ_LTE_RFC_TX_CONFIG_BUFFER_INFO_T *seq_info, kal_uint32 *bsiData);


#endif /*__MML1_RF_SEQ_GEN_LTE_RFC_MT6177L_H__*/
