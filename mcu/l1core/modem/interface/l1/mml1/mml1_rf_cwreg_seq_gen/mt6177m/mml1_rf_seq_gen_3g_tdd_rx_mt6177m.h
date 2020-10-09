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
 *   mml1_rf_seq_gen_3g_tdd_rx_mt6177m.h
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   MMRF POR gen table
 *
 * Author:
 * -------
 * -------
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
 * removed!
 *
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/


#ifndef __MMRFSEQGEN_3G_TDD_RX_MT6177M_H__
#define __MMRFSEQGEN_3G_TDD_RX_MT6177M_H__
#define MMRF_CW_ADDR_LSB           (20)
#define MMRF_CW_DATA_MASK          (0x000FFFFF)
#define MMRF_CW_PACK(aDDR, vALUE)  (((aDDR << MMRF_CW_ADDR_LSB)) | (vALUE & MMRF_CW_DATA_MASK))

#define SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_B2SL_COUNT (1)

#define SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_SL2W_COUNT (17)

#define SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_W2B_COUNT (4)

#define SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_DCOC_CAL_COUNT (20)

#define SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_IRR_CAL_COUNT (31)

#define SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_IIP2_CAL_COUNT (28)

#define SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_PMODE_CHANGE_COUNT (8)

#define SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_GAIN_CHANGE_COUNT (4)

#define SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_BW_CHANGE_COUNT (3)

#define SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_POFF_COUNT (2)


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_B2SL_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW127_INFO_T cw127_info;
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW181_INFO_T cw181_info;
   CW320_INFO_T cw320_info;
   CW321_INFO_T cw321_info;
   CW322_INFO_T cw322_info;
   CW324_INFO_T cw324_info;
   CW326_INFO_T cw326_info;
   CW348_INFO_T cw348_info;
   CW399_INFO_T cw399_info;
   CW473_INFO_T cw473_info;
   CW495_INFO_T cw495_info;
   CW500_INFO_T cw500_info;
   CW501_INFO_T cw501_info;
}SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_SL2W_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW320_INFO_T cw320_info;
   CW321_INFO_T cw321_info;
   //CW464_INFO_T cw464_info;
}SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_W2B_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW127_INFO_T cw127_info;
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW181_INFO_T cw181_info;
   //CW320_INFO_T cw320_info;
   //CW321_INFO_T cw321_info;
   CW322_INFO_T cw322_info;
   CW324_INFO_T cw324_info;
   //CW326_INFO_T cw326_info;
   CW399_INFO_T cw399_info;
   CW413_INFO_T cw413_info;
   CW414_INFO_T cw414_info;
   CW473_INFO_T cw473_info;
   CW495_INFO_T cw495_info;
   CW500_INFO_T cw500_info;
   CW501_INFO_T cw501_info;
}SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_DCOC_CAL_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW127_INFO_T cw127_info;
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW181_INFO_T cw181_info;
   CW320_INFO_T cw320_info;
   CW321_INFO_T cw321_info;
   CW322_INFO_T cw322_info;
   CW324_INFO_T cw324_info;
   CW326_INFO_T cw326_info;
   CW334_INFO_T cw334_info;
   CW335_INFO_T cw335_info;
   CW336_INFO_T cw336_info;
   CW337_INFO_T cw337_info;
   //CW353_INFO_T cw353_info;
   //CW356_INFO_T cw356_info;
   CW399_INFO_T cw399_info;
   CW413_INFO_T cw413_info;
   CW414_INFO_T cw414_info;
   CW45_INFO_T cw45_info;
   CW495_INFO_T cw495_info;
   CW500_INFO_T cw500_info;
   CW501_INFO_T cw501_info;
   CW52_INFO_T cw52_info;
   CW53_INFO_T cw53_info;
}SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_IRR_CAL_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW127_INFO_T cw127_info;
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW181_INFO_T cw181_info;
   CW320_INFO_T cw320_info;
   //CW321_INFO_T cw321_info;
   CW322_INFO_T cw322_info;
   CW324_INFO_T cw324_info;
   CW326_INFO_T cw326_info;
   CW334_INFO_T cw334_info;
   CW335_INFO_T cw335_info;
   CW336_INFO_T cw336_info;
   CW337_INFO_T cw337_info;
   //CW353_INFO_T cw353_info;
   //CW356_INFO_T cw356_info;
   CW399_INFO_T cw399_info;
   CW413_INFO_T cw413_info;
   CW414_INFO_T cw414_info;
   CW473_INFO_T cw473_info;
   CW495_INFO_T cw495_info;
   CW500_INFO_T cw500_info;
   CW501_INFO_T cw501_info;
}SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_IIP2_CAL_INFO_T;


typedef struct
{
   CW334_INFO_T cw334_info;
   CW335_INFO_T cw335_info;
   CW336_INFO_T cw336_info;
   CW337_INFO_T cw337_info;
   //CW353_INFO_T cw353_info;
   //CW356_INFO_T cw356_info;
   CW413_INFO_T cw413_info;
   CW414_INFO_T cw414_info;
}SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_PMODE_CHANGE_INFO_T;


typedef struct
{
   CW334_INFO_T cw334_info;
   CW335_INFO_T cw335_info;
   CW336_INFO_T cw336_info;
   CW337_INFO_T cw337_info;
}SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_GAIN_CHANGE_INFO_T;


typedef struct
{
   CW326_INFO_T cw326_info;
   //CW353_INFO_T cw353_info;
   //CW356_INFO_T cw356_info;
}SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_BW_CHANGE_INFO_T;


typedef struct
{
   CW320_INFO_T cw320_info;
   CW321_INFO_T cw321_info;
}SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_POFF_INFO_T;

void MMRF_SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_B2SL ( SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_B2SL_INFO_T *seq_tdscdma_3g_tddsawless_rx1_b2sl_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_SL2W ( SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_SL2W_INFO_T *seq_tdscdma_3g_tddsawless_rx1_sl2w_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_W2B ( SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_W2B_INFO_T *seq_tdscdma_3g_tddsawless_rx1_w2b_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_DCOC_CAL ( SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_DCOC_CAL_INFO_T *seq_tdscdma_3g_tddsawless_rx1_dcoc_cal_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_IRR_CAL ( SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_IRR_CAL_INFO_T *seq_tdscdma_3g_tddsawless_rx1_irr_cal_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_IIP2_CAL ( SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_IIP2_CAL_INFO_T *seq_tdscdma_3g_tddsawless_rx1_iip2_cal_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_PMODE_CHANGE ( SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_PMODE_CHANGE_INFO_T *seq_tdscdma_3g_tddsawless_rx1_pmode_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_GAIN_CHANGE ( SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_GAIN_CHANGE_INFO_T *seq_tdscdma_3g_tddsawless_rx1_gain_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_BW_CHANGE ( SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_BW_CHANGE_INFO_T *seq_tdscdma_3g_tddsawless_rx1_bw_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_POFF ( SEQ_TDSCDMA_3G_TDDSAWLESS_RX1_POFF_INFO_T *seq_tdscdma_3g_tddsawless_rx1_poff_info, kal_uint32 *bsiData);

#endif /*__MMRFSEQGEN_3G_TDD_RX_MT6177M_H__*/
