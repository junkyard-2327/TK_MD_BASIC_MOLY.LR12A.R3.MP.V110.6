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
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __MMRFSEQGEN_LTE_TX_MT6173_H__
#define __MMRFSEQGEN_LTE_TX_MT6173_H__
#define MMRF_CW_ADDR_LSB           (20)
#define MMRF_CW_DATA_MASK          (0x000FFFFF)
#define MMRF_CW_PACK(aDDR, vALUE)  (((aDDR << MMRF_CW_ADDR_LSB)) | (vALUE & MMRF_CW_DATA_MASK))

#define SEQ_LTE_FDD_TX_SL2W_COUNT (24)

#define SEQ_LTE_FDD_TX_W2B_COUNT (2)

#define SEQ_LTE_FDD_TX_GAIN_CHANGE_COUNT (2)

#define SEQ_LTE_FDD_TX_B2SL_COUNT (1)

#define SEQ_LTE_FDD_TX_SYNTH_ADJ_COUNT (1)

#define SEQ_LTE_TDD_TX_SL2W_SRX1_COUNT (28)

#define SEQ_LTE_TDD_TX_W2B_SRX1_COUNT (2)

#define SEQ_LTE_TDD_TX_GAIN_CHANGE_COUNT (2)

#define SEQ_LTE_TDD_TX_B2SL_SRX1_COUNT (1)

#define SEQ_LTE_TDD_TX_PF1_COUNT (1)

#define SEQ_LTE_TDD_TX_PF0_COUNT (1)

#define SEQ_LTE_TDD_TX_SYNTH_ADJ_SRX1_COUNT (1)


typedef struct
{
   CW1_INFO_T cw1_info;
   CW511_INFO_T cw511_info;
   CW529_INFO_T cw529_info;
   CW549_INFO_T cw549_info;
   CW550_INFO_T cw550_info;
   CW568_INFO_T cw568_info;
   CW582_INFO_T cw582_info;
   CW707_INFO_T cw707_info;
   CW710_INFO_T cw710_info;
   CW712_INFO_T cw712_info;
   CW714_INFO_T cw714_info;
   CW786_INFO_T cw786_info;
   CW793_INFO_T cw793_info;
   CW795_INFO_T cw795_info;
   CW796_INFO_T cw796_info;
   CW797_INFO_T cw797_info;
   CW798_INFO_T cw798_info;
   CW799_INFO_T cw799_info;
   //CW806_INFO_T cw806_info;
   CW807_INFO_T cw807_info;
   CW808_INFO_T cw808_info;
   CW814_INFO_T cw814_info;
   CW825_INFO_T cw825_info;
   CW826_INFO_T cw826_info;
}SEQ_LTE_FDD_TX_SL2W_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW704_INFO_T cw704_info;
}SEQ_LTE_FDD_TX_W2B_INFO_T;


typedef struct
{
   CW705_INFO_T cw705_info;
   CW706_INFO_T cw706_info;
}SEQ_LTE_FDD_TX_GAIN_CHANGE_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_LTE_FDD_TX_B2SL_INFO_T;


typedef struct
{
   CW582_INFO_T cw582_info;
}SEQ_LTE_FDD_TX_SYNTH_ADJ_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW127_INFO_T cw127_info;
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW134_INFO_T cw134_info;
   CW135_INFO_T cw135_info;
   CW181_INFO_T cw181_info;
   //CW320_INFO_T cw320_info;
   //CW321_INFO_T cw321_info;
   CW495_INFO_T cw495_info;
   CW707_INFO_T cw707_info;
   CW710_INFO_T cw710_info;
   CW712_INFO_T cw712_info;
   CW714_INFO_T cw714_info;
   CW786_INFO_T cw786_info;
   CW793_INFO_T cw793_info;
   CW795_INFO_T cw795_info;
   CW796_INFO_T cw796_info;
   CW797_INFO_T cw797_info;
   CW798_INFO_T cw798_info;
   CW799_INFO_T cw799_info;
   //CW806_INFO_T cw806_info;
   CW807_INFO_T cw807_info;
   CW808_INFO_T cw808_info;
   CW814_INFO_T cw814_info;
   CW825_INFO_T cw825_info;
   CW826_INFO_T cw826_info;
}SEQ_LTE_TDD_TX_SL2W_SRX1_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW704_INFO_T cw704_info;
}SEQ_LTE_TDD_TX_W2B_SRX1_INFO_T;


typedef struct
{
   CW705_INFO_T cw705_info;
   CW706_INFO_T cw706_info;
}SEQ_LTE_TDD_TX_GAIN_CHANGE_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_LTE_TDD_TX_B2SL_SRX1_INFO_T;


typedef struct
{
   //CW704_INFO_T cw704_info;
   kal_uint32 for_build_pass_v;
}SEQ_LTE_TDD_TX_PF1_INFO_T;


typedef struct
{
   //CW704_INFO_T cw704_info;
   kal_uint32 for_build_pass_v;
}SEQ_LTE_TDD_TX_PF0_INFO_T;


typedef struct
{
   CW127_INFO_T cw127_info;
}SEQ_LTE_TDD_TX_SYNTH_ADJ_SRX1_INFO_T;

void MMRF_SEQ_LTE_FDD_TX_SL2W ( SEQ_LTE_FDD_TX_SL2W_INFO_T *seq_lte_fdd_tx_sl2w_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_FDD_TX_W2B ( SEQ_LTE_FDD_TX_W2B_INFO_T *seq_lte_fdd_tx_w2b_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_FDD_TX_GAIN_CHANGE ( SEQ_LTE_FDD_TX_GAIN_CHANGE_INFO_T *seq_lte_fdd_tx_gain_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_FDD_TX_B2SL ( SEQ_LTE_FDD_TX_B2SL_INFO_T *seq_lte_fdd_tx_b2sl_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_FDD_TX_SYNTH_ADJ ( SEQ_LTE_FDD_TX_SYNTH_ADJ_INFO_T *seq_lte_fdd_tx_synth_adj_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_TX_SL2W_SRX1 ( SEQ_LTE_TDD_TX_SL2W_SRX1_INFO_T *seq_lte_tdd_tx_sl2w_srx1_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_TX_W2B_SRX1 ( SEQ_LTE_TDD_TX_W2B_SRX1_INFO_T *seq_lte_tdd_tx_w2b_srx1_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_TX_GAIN_CHANGE ( SEQ_LTE_TDD_TX_GAIN_CHANGE_INFO_T *seq_lte_tdd_tx_gain_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_TX_B2SL_SRX1 ( SEQ_LTE_TDD_TX_B2SL_SRX1_INFO_T *seq_lte_tdd_tx_b2sl_srx1_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_TX_PF1 ( SEQ_LTE_TDD_TX_PF1_INFO_T *seq_lte_tdd_tx_pf1_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_TX_PF0 ( SEQ_LTE_TDD_TX_PF0_INFO_T *seq_lte_tdd_tx_pf0_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_TX_SYNTH_ADJ_SRX1 ( SEQ_LTE_TDD_TX_SYNTH_ADJ_SRX1_INFO_T *seq_lte_tdd_tx_synth_adj_srx1_info, kal_uint32 *bsiData);

#endif /*__MMRFSEQGEN_LTE_TX_MT6173_H__*/
