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
 *
 * removed!
 * removed!
 * removed!
 *
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

#ifndef __MML1_RF_SEQ_GEN_LTE_TRX_MT6177L_H__
#define __MML1_RF_SEQ_GEN_LTE_TRX_MT6177L_H__

#define MMRF_CW_ADDR_LSB           (20)
#define MMRF_CW_DATA_MASK          (0x000FFFFF)
#define MMRF_CW_PACK(aDDR, vALUE)  (((aDDR << MMRF_CW_ADDR_LSB)) | (vALUE & MMRF_CW_DATA_MASK))

#define SEQ_LTE_TDD_RX1_TRX_B2SL_COUNT (1)

#define SEQ_LTE_TDD_RX1_TRX_SL2W_COUNT (39)

#define SEQ_LTE_TDD_RX1_TX_W2B_COUNT (2)

#define SEQ_LTE_TDD_RX1_RX_W2B_COUNT (6)

#define SEQ_LTE_TDD_RX1_RX_PF0_COUNT (1)

#define SEQ_LTE_TDD_RX1_PMODE_CHANGE_COUNT (4)

#define SEQ_LTE_TDD_RX1_SYNTH_ADJ_COUNT (1)

#define SEQ_LTE_TDD_RX1_RXONLY_RX_SL2W_COUNT (21)

#define SEQ_LTE_TDD_RX1_RXONLY_RX_W2B_COUNT (6)

#define SEQ_LTE_TDD_RX1_RXONLY_RX_B2SL_COUNT (1)

#define SEQ_LTE_TDD_RX1_RXONLY_RX_PF0_COUNT (1)

#define SEQ_LTE_TDD_RX1_RXONLY_PMODE_CHANGE_COUNT (4)

#define SEQ_LTE_TDD_RX1_RXONLY_SYNTH_ADJ_COUNT (1)

#define SEQ_LTE_TDD_RX1_RXONLY_JCA_RX_SL2W_COUNT (23)

#define SEQ_LTE_TDD_RX1_RXONLY_JCA_RX_W2B_COUNT (6)

#define SEQ_LTE_TDD_RX1_RXONLY_JCA_RX_B2SL_COUNT (1)

#define SEQ_LTE_TDD_RX1_RXONLY_JCA_RX_PF0_COUNT (1)

#define SEQ_LTE_TDD_RX1_RXONLY_JCA_PMODE_CHANGE_COUNT (4)

#define SEQ_LTE_TDD_RX1_RXONLY_JCA_SYNTH_ADJ_COUNT (1)

#define SEQ_LTE_TDD_RX1_RXONLY_JCA_LNA_MANUAL_DISALBLE_COUNT (2)

#define SEQ_LTE_TDD_RX2_TRX_B2SL_COUNT (1)

#define SEQ_LTE_TDD_RX2_TRX_SL2W_COUNT (38)

#define SEQ_LTE_TDD_RX2_TX_W2B_COUNT (2)

#define SEQ_LTE_TDD_RX2_RX_W2B_COUNT (4)

#define SEQ_LTE_TDD_RX2_RX_PF0_COUNT (1)

#define SEQ_LTE_TDD_RX2_PMODE_CHANGE_COUNT (4)

#define SEQ_LTE_TDD_RX2_SYNTH_ADJ_COUNT (1)

#define SEQ_LTE_TDD_RX2_JCA_TRX_B2SL_COUNT (1)

#define SEQ_LTE_TDD_RX2_JCA_TRX_SL2W_COUNT (40)

#define SEQ_LTE_TDD_RX2_JCA_TX_W2B_COUNT (2)

#define SEQ_LTE_TDD_RX2_JCA_RX_W2B_COUNT (4)

#define SEQ_LTE_TDD_RX2_JCA_RX_PF0_COUNT (1)

#define SEQ_LTE_TDD_RX2_JCA_PMODE_CHANGE_COUNT (4)

#define SEQ_LTE_TDD_RX2_JCA_SYNTH_ADJ_COUNT (1)

#define SEQ_LTE_TDD_RX2_RXONLY_RX_SL2W_COUNT (20)

#define SEQ_LTE_TDD_RX2_RXONLY_RX_W2B_COUNT (4)

#define SEQ_LTE_TDD_RX2_RXONLY_RX_B2SL_COUNT (1)

#define SEQ_LTE_TDD_RX2_RXONLY_RX_PF0_COUNT (1)

#define SEQ_LTE_TDD_RX2_RXONLY_PMODE_CHANGE_COUNT (4)

#define SEQ_LTE_TDD_RX2_RXONLY_SYNTH_ADJ_COUNT (1)

#define SEQ_LTE_TDD_RX2_RXONLY_JCA_RX_SL2W_COUNT (22)

#define SEQ_LTE_TDD_RX2_RXONLY_JCA_RX_W2B_COUNT (4)

#define SEQ_LTE_TDD_RX2_RXONLY_JCA_RX_B2SL_COUNT (1)

#define SEQ_LTE_TDD_RX2_RXONLY_JCA_RX_PF0_COUNT (1)

#define SEQ_LTE_TDD_RX2_RXONLY_JCA_PMODE_CHANGE_COUNT (4)

#define SEQ_LTE_TDD_RX2_RXONLY_JCA_SYNTH_ADJ_COUNT (1)


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_LTE_TDD_RX1_TRX_B2SL_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW127_INFO_T cw127_info;
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW134_INFO_T cw134_info;
   CW135_INFO_T cw135_info;
   CW179_INFO_T cw179_info;
   CW181_INFO_T cw181_info;
   CW320_INFO_T cw320_info;
   CW322_INFO_T cw322_info;
   CW323_INFO_T cw323_info;
   CW324_INFO_T cw324_info;
   CW325_INFO_T cw325_info;
   CW326_INFO_T cw326_info;
   CW349_INFO_T cw349_info;
   CW399_INFO_T cw399_info;
   CW473_INFO_T cw473_info;
   CW490_INFO_T cw490_info;
   CW495_INFO_T cw495_info;
   CW617_INFO_T cw617_info;
   CW707_INFO_T cw707_info;
   CW710_INFO_T cw710_info;
   CW711_INFO_T cw711_info;
   CW712_INFO_T cw712_info;
   CW714_INFO_T cw714_info;
   CW786_INFO_T cw786_info;
   CW787_INFO_T cw787_info;
   CW793_INFO_T cw793_info;
   CW795_INFO_T cw795_info;
   CW796_INFO_T cw796_info;
   CW797_INFO_T cw797_info;
   CW799_INFO_T cw799_info;
   //CW806_INFO_T cw806_info;
   CW807_INFO_T cw807_info;
   CW808_INFO_T cw808_info;
   CW814_INFO_T cw814_info;
   CW816_INFO_T cw816_info;
   CW819_INFO_T cw819_info;
}SEQ_LTE_TDD_RX1_TRX_SL2W_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW704_INFO_T cw704_info;
}SEQ_LTE_TDD_RX1_TX_W2B_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW1_INFO_T cw1_1_info;
   CW320_INFO_T cw320_info;
   //CW464_INFO_T cw464_info;
   CW490_INFO_T cw490_info;
   CW617_INFO_T cw617_info;
}SEQ_LTE_TDD_RX1_RX_W2B_INFO_T;


typedef struct
{
   CW617_INFO_T cw617_info;
}SEQ_LTE_TDD_RX1_RX_PF0_INFO_T;


#if 0
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
}SEQ_LTE_TDD_RX1_SYNTH_ADJ_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW127_INFO_T cw127_info;
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW134_INFO_T cw134_info;
   CW135_INFO_T cw135_info;
   CW179_INFO_T cw179_info;
   CW181_INFO_T cw181_info;
   CW320_INFO_T cw320_info;
   CW322_INFO_T cw322_info;
   CW323_INFO_T cw323_info;
   CW324_INFO_T cw324_info;
   CW325_INFO_T cw325_info;
   CW326_INFO_T cw326_info;
   CW349_INFO_T cw349_info;
   CW399_INFO_T cw399_info;
   CW473_INFO_T cw473_info;
   CW490_INFO_T cw490_info;
   CW495_INFO_T cw495_info;
   CW617_INFO_T cw617_info;
}SEQ_LTE_TDD_RX1_RXONLY_RX_SL2W_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW320_INFO_T cw320_info;
   //CW464_INFO_T cw464_info;
   CW490_INFO_T cw490_info;
   CW617_INFO_T cw617_info;
}SEQ_LTE_TDD_RX1_RXONLY_RX_W2B_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_LTE_TDD_RX1_RXONLY_RX_B2SL_INFO_T;


typedef struct
{
   //CW617_INFO_T cw617_info;
   kal_uint32 for_build_pass_v;
}SEQ_LTE_TDD_RX1_RXONLY_RX_PF0_INFO_T;


#if 0
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
}SEQ_LTE_TDD_RX1_RXONLY_SYNTH_ADJ_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW127_INFO_T cw127_info;
   CW128_INFO_T cw128_info;
   CW130_INFO_T cw130_info;
   CW131_INFO_T cw131_info;
   CW134_INFO_T cw134_info;
   CW135_INFO_T cw135_info;
   CW179_INFO_T cw179_info;
   CW181_INFO_T cw181_info;
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
   CW490_INFO_T cw490_info;
   CW495_INFO_T cw495_info;
   CW617_INFO_T cw617_info;
}SEQ_LTE_TDD_RX1_RXONLY_JCA_RX_SL2W_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW320_INFO_T cw320_info;
   //CW464_INFO_T cw464_info;
   CW490_INFO_T cw490_info;
   CW617_INFO_T cw617_info;
}SEQ_LTE_TDD_RX1_RXONLY_JCA_RX_W2B_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_LTE_TDD_RX1_RXONLY_JCA_RX_B2SL_INFO_T;


typedef struct
{
   //CW617_INFO_T cw617_info;
   kal_uint32 for_build_pass_v;
}SEQ_LTE_TDD_RX1_RXONLY_JCA_RX_PF0_INFO_T;


typedef struct
{
   CW413_INFO_T cw413_info;
   CW414_INFO_T cw414_info;
   CW448_INFO_T cw448_info;
   CW456_INFO_T cw456_info;
}SEQ_LTE_TDD_RX1_RXONLY_JCA_PMODE_CHANGE_INFO_T;


typedef struct
{
   CW127_INFO_T cw127_info;
}SEQ_LTE_TDD_RX1_RXONLY_JCA_SYNTH_ADJ_INFO_T;


typedef struct
{
   CW370_INFO_T cw370_info;
   CW373_INFO_T cw373_info;
}SEQ_LTE_TDD_RX1_RXONLY_JCA_LNA_MANUAL_DISALBLE_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_LTE_TDD_RX2_TRX_B2SL_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW126_INFO_T cw126_info;
   CW129_INFO_T cw129_info;
   CW132_INFO_T cw132_info;
   CW133_INFO_T cw133_info;
   CW136_INFO_T cw136_info;
   CW137_INFO_T cw137_info;
   CW279_INFO_T cw279_info;
   CW281_INFO_T cw281_info;
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
   CW707_INFO_T cw707_info;
   CW710_INFO_T cw710_info;
   CW711_INFO_T cw711_info;
   CW712_INFO_T cw712_info;
   CW714_INFO_T cw714_info;
   CW786_INFO_T cw786_info;
   CW787_INFO_T cw787_info;
   CW793_INFO_T cw793_info;
   CW795_INFO_T cw795_info;
   CW796_INFO_T cw796_info;
   CW797_INFO_T cw797_info;
   CW799_INFO_T cw799_info;
   //CW806_INFO_T cw806_info;
   CW807_INFO_T cw807_info;
   CW808_INFO_T cw808_info;
   CW814_INFO_T cw814_info;
   CW816_INFO_T cw816_info;
   CW819_INFO_T cw819_info;
}SEQ_LTE_TDD_RX2_TRX_SL2W_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW704_INFO_T cw704_info;
}SEQ_LTE_TDD_RX2_TX_W2B_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW1_INFO_T cw1_1_info;
   CW327_INFO_T cw327_info;
   CW617_INFO_T cw617_info;
}SEQ_LTE_TDD_RX2_RX_W2B_INFO_T;


typedef struct
{
   CW617_INFO_T cw617_info;
}SEQ_LTE_TDD_RX2_RX_PF0_INFO_T;


#if 0
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
}SEQ_LTE_TDD_RX2_SYNTH_ADJ_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_LTE_TDD_RX2_JCA_TRX_B2SL_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW126_INFO_T cw126_info;
   CW129_INFO_T cw129_info;
   CW132_INFO_T cw132_info;
   CW133_INFO_T cw133_info;
   CW136_INFO_T cw136_info;
   CW137_INFO_T cw137_info;
   CW279_INFO_T cw279_info;
   CW281_INFO_T cw281_info;
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
   CW707_INFO_T cw707_info;
   CW710_INFO_T cw710_info;
   CW711_INFO_T cw711_info;
   CW712_INFO_T cw712_info;
   CW714_INFO_T cw714_info;
   CW786_INFO_T cw786_info;
   CW787_INFO_T cw787_info;
   CW793_INFO_T cw793_info;
   CW795_INFO_T cw795_info;
   CW796_INFO_T cw796_info;
   CW797_INFO_T cw797_info;
   CW799_INFO_T cw799_info;
   //CW806_INFO_T cw806_info;
   CW807_INFO_T cw807_info;
   CW808_INFO_T cw808_info;
   CW814_INFO_T cw814_info;
   CW816_INFO_T cw816_info;
   CW819_INFO_T cw819_info;
}SEQ_LTE_TDD_RX2_JCA_TRX_SL2W_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   //CW704_INFO_T cw704_info;
}SEQ_LTE_TDD_RX2_JCA_TX_W2B_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW327_INFO_T cw327_info;
   CW617_INFO_T cw617_info;
}SEQ_LTE_TDD_RX2_JCA_RX_W2B_INFO_T;


typedef struct
{
   CW617_INFO_T cw617_info;
}SEQ_LTE_TDD_RX2_JCA_RX_PF0_INFO_T;


typedef struct
{
   CW415_INFO_T cw415_info;
   CW416_INFO_T cw416_info;
   CW452_INFO_T cw452_info;
   CW460_INFO_T cw460_info;
}SEQ_LTE_TDD_RX2_JCA_PMODE_CHANGE_INFO_T;


typedef struct
{
   CW126_INFO_T cw126_info;
}SEQ_LTE_TDD_RX2_JCA_SYNTH_ADJ_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW126_INFO_T cw126_info;
   CW129_INFO_T cw129_info;
   CW132_INFO_T cw132_info;
   CW133_INFO_T cw133_info;
   CW136_INFO_T cw136_info;
   CW137_INFO_T cw137_info;
   CW279_INFO_T cw279_info;
   CW281_INFO_T cw281_info;
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
}SEQ_LTE_TDD_RX2_RXONLY_RX_SL2W_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW327_INFO_T cw327_info;
   CW617_INFO_T cw617_info;
}SEQ_LTE_TDD_RX2_RXONLY_RX_W2B_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_LTE_TDD_RX2_RXONLY_RX_B2SL_INFO_T;


typedef struct
{
   //CW617_INFO_T cw617_info;
   kal_uint32 for_build_pass_v;
}SEQ_LTE_TDD_RX2_RXONLY_RX_PF0_INFO_T;


#if 0
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
}SEQ_LTE_TDD_RX2_RXONLY_SYNTH_ADJ_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW126_INFO_T cw126_info;
   CW129_INFO_T cw129_info;
   CW132_INFO_T cw132_info;
   CW133_INFO_T cw133_info;
   CW136_INFO_T cw136_info;
   CW137_INFO_T cw137_info;
   CW279_INFO_T cw279_info;
   CW281_INFO_T cw281_info;
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
}SEQ_LTE_TDD_RX2_RXONLY_JCA_RX_SL2W_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
   CW327_INFO_T cw327_info;
   CW617_INFO_T cw617_info;
}SEQ_LTE_TDD_RX2_RXONLY_JCA_RX_W2B_INFO_T;


typedef struct
{
   CW1_INFO_T cw1_info;
}SEQ_LTE_TDD_RX2_RXONLY_JCA_RX_B2SL_INFO_T;


typedef struct
{
   //CW617_INFO_T cw617_info;
   kal_uint32 for_build_pass_v;
}SEQ_LTE_TDD_RX2_RXONLY_JCA_RX_PF0_INFO_T;


typedef struct
{
   CW415_INFO_T cw415_info;
   CW416_INFO_T cw416_info;
   CW452_INFO_T cw452_info;
   CW460_INFO_T cw460_info;
}SEQ_LTE_TDD_RX2_RXONLY_JCA_PMODE_CHANGE_INFO_T;


typedef struct
{
   CW126_INFO_T cw126_info;
}SEQ_LTE_TDD_RX2_RXONLY_JCA_SYNTH_ADJ_INFO_T;

void MMRF_SEQ_LTE_TDD_RX1_TRX_B2SL ( SEQ_LTE_TDD_RX1_TRX_B2SL_INFO_T *seq_lte_tdd_rx1_trx_b2sl_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX1_TRX_SL2W ( SEQ_LTE_TDD_RX1_TRX_SL2W_INFO_T *seq_lte_tdd_rx1_trx_sl2w_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX1_TX_W2B ( SEQ_LTE_TDD_RX1_TX_W2B_INFO_T *seq_lte_tdd_rx1_tx_w2b_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX1_RX_W2B ( SEQ_LTE_TDD_RX1_RX_W2B_INFO_T *seq_lte_tdd_rx1_rx_w2b_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX1_RX_PF0 ( SEQ_LTE_TDD_RX1_RX_PF0_INFO_T *seq_lte_tdd_rx1_rx_pf0_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_TDD_RX1_PMODE_CHANGE ( SEQ_LTE_TDD_RX1_PMODE_CHANGE_INFO_T *seq_lte_tdd_rx1_pmode_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX1_SYNTH_ADJ ( SEQ_LTE_TDD_RX1_SYNTH_ADJ_INFO_T *seq_lte_tdd_rx1_synth_adj_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX1_RXONLY_RX_SL2W ( SEQ_LTE_TDD_RX1_RXONLY_RX_SL2W_INFO_T *seq_lte_tdd_rx1_rxonly_rx_sl2w_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX1_RXONLY_RX_W2B ( SEQ_LTE_TDD_RX1_RXONLY_RX_W2B_INFO_T *seq_lte_tdd_rx1_rxonly_rx_w2b_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX1_RXONLY_RX_B2SL ( SEQ_LTE_TDD_RX1_RXONLY_RX_B2SL_INFO_T *seq_lte_tdd_rx1_rxonly_rx_b2sl_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX1_RXONLY_RX_PF0 ( SEQ_LTE_TDD_RX1_RXONLY_RX_PF0_INFO_T *seq_lte_tdd_rx1_rxonly_rx_pf0_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_TDD_RX1_RXONLY_PMODE_CHANGE ( SEQ_LTE_TDD_RX1_RXONLY_PMODE_CHANGE_INFO_T *seq_lte_tdd_rx1_rxonly_pmode_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX1_RXONLY_SYNTH_ADJ ( SEQ_LTE_TDD_RX1_RXONLY_SYNTH_ADJ_INFO_T *seq_lte_tdd_rx1_rxonly_synth_adj_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX1_RXONLY_JCA_RX_SL2W ( SEQ_LTE_TDD_RX1_RXONLY_JCA_RX_SL2W_INFO_T *seq_lte_tdd_rx1_rxonly_jca_rx_sl2w_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX1_RXONLY_JCA_RX_W2B ( SEQ_LTE_TDD_RX1_RXONLY_JCA_RX_W2B_INFO_T *seq_lte_tdd_rx1_rxonly_jca_rx_w2b_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX1_RXONLY_JCA_RX_B2SL ( SEQ_LTE_TDD_RX1_RXONLY_JCA_RX_B2SL_INFO_T *seq_lte_tdd_rx1_rxonly_jca_rx_b2sl_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX1_RXONLY_JCA_RX_PF0 ( SEQ_LTE_TDD_RX1_RXONLY_JCA_RX_PF0_INFO_T *seq_lte_tdd_rx1_rxonly_jca_rx_pf0_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_TDD_RX1_RXONLY_JCA_PMODE_CHANGE ( SEQ_LTE_TDD_RX1_RXONLY_JCA_PMODE_CHANGE_INFO_T *seq_lte_tdd_rx1_rxonly_jca_pmode_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX1_RXONLY_JCA_SYNTH_ADJ ( SEQ_LTE_TDD_RX1_RXONLY_JCA_SYNTH_ADJ_INFO_T *seq_lte_tdd_rx1_rxonly_jca_synth_adj_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX1_RXONLY_JCA_LNA_MANUAL_DISALBLE ( SEQ_LTE_TDD_RX1_RXONLY_JCA_LNA_MANUAL_DISALBLE_INFO_T *seq_lte_tdd_rx1_rxonly_jca_lna_manual_disalble_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX2_TRX_B2SL ( SEQ_LTE_TDD_RX2_TRX_B2SL_INFO_T *seq_lte_tdd_rx2_trx_b2sl_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX2_TRX_SL2W ( SEQ_LTE_TDD_RX2_TRX_SL2W_INFO_T *seq_lte_tdd_rx2_trx_sl2w_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX2_TX_W2B ( SEQ_LTE_TDD_RX2_TX_W2B_INFO_T *seq_lte_tdd_rx2_tx_w2b_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX2_RX_W2B ( SEQ_LTE_TDD_RX2_RX_W2B_INFO_T *seq_lte_tdd_rx2_rx_w2b_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX2_RX_PF0 ( SEQ_LTE_TDD_RX2_RX_PF0_INFO_T *seq_lte_tdd_rx2_rx_pf0_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_TDD_RX2_PMODE_CHANGE ( SEQ_LTE_TDD_RX2_PMODE_CHANGE_INFO_T *seq_lte_tdd_rx2_pmode_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX2_SYNTH_ADJ ( SEQ_LTE_TDD_RX2_SYNTH_ADJ_INFO_T *seq_lte_tdd_rx2_synth_adj_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX2_JCA_TRX_B2SL ( SEQ_LTE_TDD_RX2_JCA_TRX_B2SL_INFO_T *seq_lte_tdd_rx2_jca_trx_b2sl_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX2_JCA_TRX_SL2W ( SEQ_LTE_TDD_RX2_JCA_TRX_SL2W_INFO_T *seq_lte_tdd_rx2_jca_trx_sl2w_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX2_JCA_TX_W2B ( SEQ_LTE_TDD_RX2_JCA_TX_W2B_INFO_T *seq_lte_tdd_rx2_jca_tx_w2b_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX2_JCA_RX_W2B ( SEQ_LTE_TDD_RX2_JCA_RX_W2B_INFO_T *seq_lte_tdd_rx2_jca_rx_w2b_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX2_JCA_RX_PF0 ( SEQ_LTE_TDD_RX2_JCA_RX_PF0_INFO_T *seq_lte_tdd_rx2_jca_rx_pf0_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_TDD_RX2_JCA_PMODE_CHANGE ( SEQ_LTE_TDD_RX2_JCA_PMODE_CHANGE_INFO_T *seq_lte_tdd_rx2_jca_pmode_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX2_JCA_SYNTH_ADJ ( SEQ_LTE_TDD_RX2_JCA_SYNTH_ADJ_INFO_T *seq_lte_tdd_rx2_jca_synth_adj_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX2_RXONLY_RX_SL2W ( SEQ_LTE_TDD_RX2_RXONLY_RX_SL2W_INFO_T *seq_lte_tdd_rx2_rxonly_rx_sl2w_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX2_RXONLY_RX_W2B ( SEQ_LTE_TDD_RX2_RXONLY_RX_W2B_INFO_T *seq_lte_tdd_rx2_rxonly_rx_w2b_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX2_RXONLY_RX_B2SL ( SEQ_LTE_TDD_RX2_RXONLY_RX_B2SL_INFO_T *seq_lte_tdd_rx2_rxonly_rx_b2sl_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX2_RXONLY_RX_PF0 ( SEQ_LTE_TDD_RX2_RXONLY_RX_PF0_INFO_T *seq_lte_tdd_rx2_rxonly_rx_pf0_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_TDD_RX2_RXONLY_PMODE_CHANGE ( SEQ_LTE_TDD_RX2_RXONLY_PMODE_CHANGE_INFO_T *seq_lte_tdd_rx2_rxonly_pmode_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX2_RXONLY_SYNTH_ADJ ( SEQ_LTE_TDD_RX2_RXONLY_SYNTH_ADJ_INFO_T *seq_lte_tdd_rx2_rxonly_synth_adj_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX2_RXONLY_JCA_RX_SL2W ( SEQ_LTE_TDD_RX2_RXONLY_JCA_RX_SL2W_INFO_T *seq_lte_tdd_rx2_rxonly_jca_rx_sl2w_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX2_RXONLY_JCA_RX_W2B ( SEQ_LTE_TDD_RX2_RXONLY_JCA_RX_W2B_INFO_T *seq_lte_tdd_rx2_rxonly_jca_rx_w2b_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX2_RXONLY_JCA_RX_B2SL ( SEQ_LTE_TDD_RX2_RXONLY_JCA_RX_B2SL_INFO_T *seq_lte_tdd_rx2_rxonly_jca_rx_b2sl_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX2_RXONLY_JCA_RX_PF0 ( SEQ_LTE_TDD_RX2_RXONLY_JCA_RX_PF0_INFO_T *seq_lte_tdd_rx2_rxonly_jca_rx_pf0_info, kal_uint32 *bsiData);
//void MMRF_SEQ_LTE_TDD_RX2_RXONLY_JCA_PMODE_CHANGE ( SEQ_LTE_TDD_RX2_RXONLY_JCA_PMODE_CHANGE_INFO_T *seq_lte_tdd_rx2_rxonly_jca_pmode_change_info, kal_uint32 *bsiData);
void MMRF_SEQ_LTE_TDD_RX2_RXONLY_JCA_SYNTH_ADJ ( SEQ_LTE_TDD_RX2_RXONLY_JCA_SYNTH_ADJ_INFO_T *seq_lte_tdd_rx2_rxonly_jca_synth_adj_info, kal_uint32 *bsiData);

#endif /*__MML1_RF_SEQ_GEN_LTE_TRX_MT6177L_H__*/
