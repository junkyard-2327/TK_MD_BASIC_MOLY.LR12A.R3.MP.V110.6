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

#ifndef __MML1_RF_SEQ_GEN_LTE_RX_MT6177L_H__
#define __MML1_RF_SEQ_GEN_LTE_RX_MT6177L_H__

#define MMRF_CW_ADDR_LSB           (20)
#define MMRF_CW_DATA_MASK          (0x000FFFFF)
#define MMRF_CW_PACK(aDDR, vALUE)  (((aDDR << MMRF_CW_ADDR_LSB)) | (vALUE & MMRF_CW_DATA_MASK))

#define SEQ_LTE_FDD_RX1_B2SL_COUNT (1)

#define SEQ_LTE_FDD_RX1_DCOC_CAL_COUNT (18)

#define SEQ_LTE_FDD_RX1_IRR_CAL_COUNT (33)

#define SEQ_LTE_FDD_RX1_IIP2_CAL_COUNT (34)

#define SEQ_LTE_FDD_RX1_SL2W_COUNT (17)

#define SEQ_LTE_FDD_RX1_W2B_COUNT (3)

#define SEQ_LTE_FDD_RX1_GAIN_CHANGE_COUNT (6)

#define SEQ_LTE_FDD_RX1_PMODE_CHANGE_COUNT (4)

#define SEQ_LTE_FDD_RX1_BW_CHANGE_COUNT (1)

#define SEQ_LTE_FDD_RX1_POFF_COUNT (2)

#define SEQ_LTE_FDD_RX1_GGE_OBB_FLAG_COUNT (1)

#define SEQ_LTE_FDD_RX1_BAND_CHANGE_COUNT (6)

#define SEQ_LTE_FDD_RX1_IIP2C_CODE_COUNT (2)

#define SEQ_LTE_FDD_RX1_SYNTH_ADJ_COUNT (1)

#define SEQ_LTE_FDD_RX1_JCA_B2SL_COUNT (3)

#define SEQ_LTE_FDD_RX1_JCA_DCOC_CAL_COUNT (18)

#define SEQ_LTE_FDD_RX1_JCA_IRR_CAL_COUNT (33)

#define SEQ_LTE_FDD_RX1_JCA_IIP2_CAL_COUNT (34)

#define SEQ_LTE_FDD_RX1_JCA_SL2W_COUNT (19)

#define SEQ_LTE_FDD_RX1_JCA_W2B_COUNT (3)

#define SEQ_LTE_FDD_RX1_JCA_GAIN_CHANGE_COUNT (6)

#define SEQ_LTE_FDD_RX1_JCA_PMODE_CHANGE_COUNT (4)

#define SEQ_LTE_FDD_RX1_JCA_BW_CHANGE_COUNT (1)

#define SEQ_LTE_FDD_RX1_JCA_POFF_COUNT (2)

#define SEQ_LTE_FDD_RX1_JCA_GGE_OBB_FLAG_COUNT (1)

#define SEQ_LTE_FDD_RX1_JCA_BAND_CHANGE_COUNT (6)

#define SEQ_LTE_FDD_RX1_JCA_IIP2C_CODE_COUNT (2)

#define SEQ_LTE_FDD_RX1_JCA_SYNTH_ADJ_COUNT (1)

#define SEQ_LTE_FDD_RX2_B2SL_COUNT (1)

#define SEQ_LTE_FDD_RX2_DCOC_CAL_COUNT (18)

#define SEQ_LTE_FDD_RX2_IRR_CAL_COUNT (33)

#define SEQ_LTE_FDD_RX2_IIP2_CAL_COUNT (34)

#define SEQ_LTE_FDD_RX2_SL2W_COUNT (17)

#define SEQ_LTE_FDD_RX2_W2B_COUNT (3)

#define SEQ_LTE_FDD_RX2_GAIN_CHANGE_COUNT (6)

#define SEQ_LTE_FDD_RX2_PMODE_CHANGE_COUNT (4)

#define SEQ_LTE_FDD_RX2_BW_CHANGE_COUNT (1)

#define SEQ_LTE_FDD_RX2_POFF_COUNT (2)

#define SEQ_LTE_FDD_RX2_BAND_CHANGE_COUNT (6)

#define SEQ_LTE_FDD_RX2_IIP2C_CODE_COUNT (2)

#define SEQ_LTE_FDD_RX2_SYNTH_ADJ_COUNT (1)

#define SEQ_LTE_FDD_RX2_JCA_B2SL_COUNT (1)

#define SEQ_LTE_FDD_RX2_JCA_DCOC_CAL_COUNT (18)

#define SEQ_LTE_FDD_RX2_JCA_IRR_CAL_COUNT (33)

#define SEQ_LTE_FDD_RX2_JCA_IIP2_CAL_COUNT (34)

#define SEQ_LTE_FDD_RX2_JCA_SL2W_COUNT (19)

#define SEQ_LTE_FDD_RX2_JCA_W2B_COUNT (3)

#define SEQ_LTE_FDD_RX2_JCA_GAIN_CHANGE_COUNT (6)

#define SEQ_LTE_FDD_RX2_JCA_PMODE_CHANGE_COUNT (4)

#define SEQ_LTE_FDD_RX2_JCA_BW_CHANGE_COUNT (1)

#define SEQ_LTE_FDD_RX2_JCA_POFF_COUNT (2)

#define SEQ_LTE_FDD_RX2_JCA_BAND_CHANGE_COUNT (6)

#define SEQ_LTE_FDD_RX2_JCA_IIP2C_CODE_COUNT (2)

#define SEQ_LTE_FDD_RX2_JCA_SYNTH_ADJ_COUNT (1)


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_LTE_FDD_RX1_B2SL_INFO_T;


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


typedef struct
{
   CW1_INFO_T cw1_info;
   CW127_INFO_T cw127_info;
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW179_INFO_T cw179_info;
   CW320_INFO_T cw320_info;
   CW322_INFO_T cw322_info;
   CW323_INFO_T cw323_info;
   CW324_INFO_T cw324_info;
   CW325_INFO_T cw325_info;
   CW326_INFO_T cw326_info;
   CW349_INFO_T cw349_info;
   CW399_INFO_T cw399_info;
   CW473_INFO_T cw473_info;
   CW495_INFO_T cw495_info;
   CW617_INFO_T cw617_info;
}SEQ_LTE_FDD_RX1_SL2W_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW320_INFO_T cw320_info;
   CW617_INFO_T cw617_info;
}SEQ_LTE_FDD_RX1_W2B_INFO_T;


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
{
   CW320_INFO_T cw320_info;
   CW617_INFO_T cw617_info;
}SEQ_LTE_FDD_RX1_POFF_INFO_T;


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
   CW127_INFO_T cw127_info;
}SEQ_LTE_FDD_RX1_SYNTH_ADJ_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW370_INFO_T cw370_info;
   CW373_INFO_T cw373_info;
}SEQ_LTE_FDD_RX1_JCA_B2SL_INFO_T;

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

typedef struct
{
   CW1_INFO_T cw1_info;
   CW127_INFO_T cw127_info;
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW179_INFO_T cw179_info;
   CW320_INFO_T cw320_info;
   CW322_INFO_T cw322_info;
   CW323_INFO_T cw323_info;
   CW324_INFO_T cw324_info;
   CW325_INFO_T cw325_info;
   CW326_INFO_T cw326_info;
   CW349_INFO_T cw349_info;
   CW370_INFO_T cw370_info;
   CW373_INFO_T cw373_info;
   CW399_INFO_T cw399_info;
   CW473_INFO_T cw473_info;
   CW495_INFO_T cw495_info;
   CW617_INFO_T cw617_info;
}SEQ_LTE_FDD_RX1_JCA_SL2W_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW320_INFO_T cw320_info;
   CW617_INFO_T cw617_info;
}SEQ_LTE_FDD_RX1_JCA_W2B_INFO_T;

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
{
   CW320_INFO_T cw320_info;
   CW617_INFO_T cw617_info;
}SEQ_LTE_FDD_RX1_JCA_POFF_INFO_T;

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
   CW127_INFO_T cw127_info;
}SEQ_LTE_FDD_RX1_JCA_SYNTH_ADJ_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_LTE_FDD_RX2_B2SL_INFO_T;


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


typedef struct
{
   CW1_INFO_T cw1_info;
   CW126_INFO_T cw126_info;
   CW129_INFO_T cw129_info;
   CW132_INFO_T cw132_info;
   CW133_INFO_T cw133_info;
   CW279_INFO_T cw279_info;
   CW327_INFO_T cw327_info;
   CW329_INFO_T cw329_info;
   CW330_INFO_T cw330_info;
   CW331_INFO_T cw331_info;
   CW332_INFO_T cw332_info;
   CW333_INFO_T cw333_info;
   CW350_INFO_T cw350_info;
   CW400_INFO_T cw400_info;
   CW482_INFO_T cw482_info;
   CW499_INFO_T cw499_info;
   CW617_INFO_T cw617_info;
}SEQ_LTE_FDD_RX2_SL2W_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW327_INFO_T cw327_info;
   CW617_INFO_T cw617_info;
}SEQ_LTE_FDD_RX2_W2B_INFO_T;


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
{
   CW327_INFO_T cw327_info;
   CW617_INFO_T cw617_info;
}SEQ_LTE_FDD_RX2_POFF_INFO_T;


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
/* under construction !*/
/* under construction !*/
#endif


typedef struct
{
   CW126_INFO_T cw126_info;
}SEQ_LTE_FDD_RX2_SYNTH_ADJ_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_LTE_FDD_RX2_JCA_B2SL_INFO_T;

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

typedef struct
{
   CW1_INFO_T cw1_info;
   CW126_INFO_T cw126_info;
   CW129_INFO_T cw129_info;
   CW132_INFO_T cw132_info;
   CW133_INFO_T cw133_info;
   CW279_INFO_T cw279_info;
   CW327_INFO_T cw327_info;
   CW329_INFO_T cw329_info;
   CW330_INFO_T cw330_info;
   CW331_INFO_T cw331_info;
   CW332_INFO_T cw332_info;
   CW333_INFO_T cw333_info;
   CW350_INFO_T cw350_info;
   CW371_INFO_T cw371_info;
   CW374_INFO_T cw374_info;
   CW400_INFO_T cw400_info;
   CW482_INFO_T cw482_info;
   CW499_INFO_T cw499_info;
   CW617_INFO_T cw617_info;
}SEQ_LTE_FDD_RX2_JCA_SL2W_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW327_INFO_T cw327_info;
   CW617_INFO_T cw617_info;
}SEQ_LTE_FDD_RX2_JCA_W2B_INFO_T;

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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

typedef struct
{
   CW333_INFO_T cw333_info;
}SEQ_LTE_FDD_RX2_JCA_BW_CHANGE_INFO_T;


typedef struct
{
   CW327_INFO_T cw327_info;
   CW617_INFO_T cw617_info;
}SEQ_LTE_FDD_RX2_JCA_POFF_INFO_T;

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
/* under construction !*/
/* under construction !*/
#endif

typedef struct
{
   CW126_INFO_T cw126_info;
}SEQ_LTE_FDD_RX2_JCA_SYNTH_ADJ_INFO_T;

void MMRF_SEQ_LTE_FDD_RX1_B2SL ( SEQ_LTE_FDD_RX1_B2SL_INFO_T *seq_lte_fdd_rx1_b2sl_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX1_DCOC_CAL ( SEQ_LTE_FDD_RX1_DCOC_CAL_INFO_T *seq_lte_fdd_rx1_dcoc_cal_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX1_IRR_CAL ( SEQ_LTE_FDD_RX1_IRR_CAL_INFO_T *seq_lte_fdd_rx1_irr_cal_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX1_IIP2_CAL ( SEQ_LTE_FDD_RX1_IIP2_CAL_INFO_T *seq_lte_fdd_rx1_iip2_cal_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_FDD_RX1_SL2W ( SEQ_LTE_FDD_RX1_SL2W_INFO_T *seq_lte_fdd_rx1_sl2w_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_FDD_RX1_W2B ( SEQ_LTE_FDD_RX1_W2B_INFO_T *seq_lte_fdd_rx1_w2b_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX1_GAIN_CHANGE ( SEQ_LTE_FDD_RX1_GAIN_CHANGE_INFO_T *seq_lte_fdd_rx1_gain_change_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX1_PMODE_CHANGE ( SEQ_LTE_FDD_RX1_PMODE_CHANGE_INFO_T *seq_lte_fdd_rx1_pmode_change_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX1_BW_CHANGE ( SEQ_LTE_FDD_RX1_BW_CHANGE_INFO_T *seq_lte_fdd_rx1_bw_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_FDD_RX1_POFF ( SEQ_LTE_FDD_RX1_POFF_INFO_T *seq_lte_fdd_rx1_poff_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX1_GGE_OBB_FLAG ( SEQ_LTE_FDD_RX1_GGE_OBB_FLAG_INFO_T *seq_lte_fdd_rx1_gge_obb_flag_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX1_BAND_CHANGE ( SEQ_LTE_FDD_RX1_BAND_CHANGE_INFO_T *seq_lte_fdd_rx1_band_change_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX1_IIP2C_CODE ( SEQ_LTE_FDD_RX1_IIP2C_CODE_INFO_T *seq_lte_fdd_rx1_iip2c_code_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_FDD_RX1_SYNTH_ADJ ( SEQ_LTE_FDD_RX1_SYNTH_ADJ_INFO_T *seq_lte_fdd_rx1_synth_adj_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_FDD_RX1_JCA_B2SL ( SEQ_LTE_FDD_RX1_JCA_B2SL_INFO_T *seq_lte_fdd_rx1_jca_b2sl_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX1_JCA_DCOC_CAL ( SEQ_LTE_FDD_RX1_JCA_DCOC_CAL_INFO_T *seq_lte_fdd_rx1_jca_dcoc_cal_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX1_JCA_IRR_CAL ( SEQ_LTE_FDD_RX1_JCA_IRR_CAL_INFO_T *seq_lte_fdd_rx1_jca_irr_cal_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX1_JCA_IIP2_CAL ( SEQ_LTE_FDD_RX1_JCA_IIP2_CAL_INFO_T *seq_lte_fdd_rx1_jca_iip2_cal_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_FDD_RX1_JCA_SL2W ( SEQ_LTE_FDD_RX1_JCA_SL2W_INFO_T *seq_lte_fdd_rx1_jca_sl2w_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_FDD_RX1_JCA_W2B ( SEQ_LTE_FDD_RX1_JCA_W2B_INFO_T *seq_lte_fdd_rx1_jca_w2b_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX1_JCA_GAIN_CHANGE ( SEQ_LTE_FDD_RX1_JCA_GAIN_CHANGE_INFO_T *seq_lte_fdd_rx1_jca_gain_change_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX1_JCA_PMODE_CHANGE ( SEQ_LTE_FDD_RX1_JCA_PMODE_CHANGE_INFO_T *seq_lte_fdd_rx1_jca_pmode_change_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX1_JCA_BW_CHANGE ( SEQ_LTE_FDD_RX1_JCA_BW_CHANGE_INFO_T *seq_lte_fdd_rx1_jca_bw_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_FDD_RX1_JCA_POFF ( SEQ_LTE_FDD_RX1_JCA_POFF_INFO_T *seq_lte_fdd_rx1_jca_poff_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX1_JCA_GGE_OBB_FLAG ( SEQ_LTE_FDD_RX1_JCA_GGE_OBB_FLAG_INFO_T *seq_lte_fdd_rx1_jca_gge_obb_flag_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX1_JCA_BAND_CHANGE ( SEQ_LTE_FDD_RX1_JCA_BAND_CHANGE_INFO_T *seq_lte_fdd_rx1_jca_band_change_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX1_JCA_IIP2C_CODE ( SEQ_LTE_FDD_RX1_JCA_IIP2C_CODE_INFO_T *seq_lte_fdd_rx1_jca_iip2c_code_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_FDD_RX1_JCA_SYNTH_ADJ ( SEQ_LTE_FDD_RX1_JCA_SYNTH_ADJ_INFO_T *seq_lte_fdd_rx1_jca_synth_adj_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_FDD_RX2_B2SL ( SEQ_LTE_FDD_RX2_B2SL_INFO_T *seq_lte_fdd_rx2_b2sl_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX2_DCOC_CAL ( SEQ_LTE_FDD_RX2_DCOC_CAL_INFO_T *seq_lte_fdd_rx2_dcoc_cal_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX2_IRR_CAL ( SEQ_LTE_FDD_RX2_IRR_CAL_INFO_T *seq_lte_fdd_rx2_irr_cal_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX2_IIP2_CAL ( SEQ_LTE_FDD_RX2_IIP2_CAL_INFO_T *seq_lte_fdd_rx2_iip2_cal_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_FDD_RX2_SL2W ( SEQ_LTE_FDD_RX2_SL2W_INFO_T *seq_lte_fdd_rx2_sl2w_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_FDD_RX2_W2B ( SEQ_LTE_FDD_RX2_W2B_INFO_T *seq_lte_fdd_rx2_w2b_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX2_GAIN_CHANGE ( SEQ_LTE_FDD_RX2_GAIN_CHANGE_INFO_T *seq_lte_fdd_rx2_gain_change_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX2_PMODE_CHANGE ( SEQ_LTE_FDD_RX2_PMODE_CHANGE_INFO_T *seq_lte_fdd_rx2_pmode_change_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX2_BW_CHANGE ( SEQ_LTE_FDD_RX2_BW_CHANGE_INFO_T *seq_lte_fdd_rx2_bw_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_FDD_RX2_POFF ( SEQ_LTE_FDD_RX2_POFF_INFO_T *seq_lte_fdd_rx2_poff_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX2_BAND_CHANGE ( SEQ_LTE_FDD_RX2_BAND_CHANGE_INFO_T *seq_lte_fdd_rx2_band_change_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX2_IIP2C_CODE ( SEQ_LTE_FDD_RX2_IIP2C_CODE_INFO_T *seq_lte_fdd_rx2_iip2c_code_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_FDD_RX2_SYNTH_ADJ ( SEQ_LTE_FDD_RX2_SYNTH_ADJ_INFO_T *seq_lte_fdd_rx2_synth_adj_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_FDD_RX2_JCA_B2SL ( SEQ_LTE_FDD_RX2_JCA_B2SL_INFO_T *seq_lte_fdd_rx2_jca_b2sl_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX2_JCA_DCOC_CAL ( SEQ_LTE_FDD_RX2_JCA_DCOC_CAL_INFO_T *seq_lte_fdd_rx2_jca_dcoc_cal_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX2_JCA_IRR_CAL ( SEQ_LTE_FDD_RX2_JCA_IRR_CAL_INFO_T *seq_lte_fdd_rx2_jca_irr_cal_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX2_JCA_IIP2_CAL ( SEQ_LTE_FDD_RX2_JCA_IIP2_CAL_INFO_T *seq_lte_fdd_rx2_jca_iip2_cal_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_FDD_RX2_JCA_SL2W ( SEQ_LTE_FDD_RX2_JCA_SL2W_INFO_T *seq_lte_fdd_rx2_jca_sl2w_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_FDD_RX2_JCA_W2B ( SEQ_LTE_FDD_RX2_JCA_W2B_INFO_T *seq_lte_fdd_rx2_jca_w2b_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX2_JCA_GAIN_CHANGE ( SEQ_LTE_FDD_RX2_JCA_GAIN_CHANGE_INFO_T *seq_lte_fdd_rx2_jca_gain_change_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX2_JCA_PMODE_CHANGE ( SEQ_LTE_FDD_RX2_JCA_PMODE_CHANGE_INFO_T *seq_lte_fdd_rx2_jca_pmode_change_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX2_JCA_BW_CHANGE ( SEQ_LTE_FDD_RX2_JCA_BW_CHANGE_INFO_T *seq_lte_fdd_rx2_jca_bw_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_FDD_RX2_JCA_POFF ( SEQ_LTE_FDD_RX2_JCA_POFF_INFO_T *seq_lte_fdd_rx2_jca_poff_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX2_JCA_BAND_CHANGE ( SEQ_LTE_FDD_RX2_JCA_BAND_CHANGE_INFO_T *seq_lte_fdd_rx2_jca_band_change_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_FDD_RX2_JCA_IIP2C_CODE ( SEQ_LTE_FDD_RX2_JCA_IIP2C_CODE_INFO_T *seq_lte_fdd_rx2_jca_iip2c_code_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_FDD_RX2_JCA_SYNTH_ADJ ( SEQ_LTE_FDD_RX2_JCA_SYNTH_ADJ_INFO_T *seq_lte_fdd_rx2_jca_synth_adj_info, kal_uint32 *bsiData);

#endif /*__MML1_RF_SEQ_GEN_LTE_RX_MT6177L_H__*/
