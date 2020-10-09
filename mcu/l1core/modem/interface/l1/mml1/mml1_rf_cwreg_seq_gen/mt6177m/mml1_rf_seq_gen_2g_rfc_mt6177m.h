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
 * Project:MT6763
 * --------
 *
 *
 * Description:MM RFC Code word Gen file for 2g.
 * ------------
 *
 *
 * Author:Umesh Donta
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
 * removed!
 *
 * removed!
 * removed!
 *
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __MML1_RF_SEQ_GEN_GGE_RFC_MT6177M_H__
#define __MML1_RF_SEQ_GEN_GGE_RFC_MT6177M_H__


/************************************************************************************
*  Include 
************************************************************************************/


/************************************************************************************
*  Defines
************************************************************************************/
/** MML1 Part */
#define SEQ_GGE_RFC_CW1_COUNT                             (1)  //CW1
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
#endif
#define SEQ_GGE_RFC_TTG_CALC_COUNT                        (2)  //CW51, CW50
#define SEQ_GGE_RFC_SET_EXTRA_LPF_CW_COUNT                (1)  //CW708
#define SEQ_GGE_RFC_SET_RF_CW_TX_RCF_COUNT                (1)  //CW793
#define SEQ_GGE_RFC_SET_RF_CW_TX_LPF_CONFIG_COUNT         (3)  //CW710,CW826, CW825
#define SEQ_GGE_RFC_SET_RF_CW_TX_RCCAL1_COUNT             (1)  //CW787
#define SEQ_GGE_RFC_TTG_CTRL_COUNT                        (1)  //CW45
#define SEQ_GGE_RFC_SET_TX_LPF_CW710_COUNT                (1)  //CW710
#define SEQ_GGE_RFC_LO_RESULT_WB_COUNT                    (1)  //CW714
#define SEQ_GGE_RFC_SET_TX_GAIN_COUNT                     (1)  //CW706
#define SEQ_GGE_RFC_SET_RF_CAPCODE_AACT_COUNT             (1)  //CW795
#define SEQ_GGE_RFC_SET_RF_CAPCODE_BACT_COUNT             (1)  //CW796
#define SEQ_GGE_RFC_SET_DET_GAIN_COUNT                    (1)  //CW705
#define SEQ_GGE_RFC_SET_EXTRA_CW_FOR_TX_BW_CHANGE_COUNT   (2)  //CW797, CW712
#define SEQ_GGE_RFC_RF_CW_INIT_COUNT                      (1)  //CW704
#define SEQ_GGE_RFC_TX_CW_RESET_COUNT                     (2)  //CW816, CW818
//#define SEQ_LTE_RFC_PRE_CONFIG_SRX1_POFF_COUNT            (4)  //CW134, CW135, CW320, CW617
//#define SEQ_LTE_RFC_PRE_CONFIG_SRX2_POFF_COUNT            (4)  //CW136, CW137, CW327, CW617
#define SEQ_GGE_RFC_SET_TX_LO_CAL_COUNT                   (1)  //CW803
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#define SEQ_GGE_RFC_DPD_CONFIG_BUFFER_COUNT               (1)  //CW799
#define SEQ_GGE_RFC_LIN_CONFIG_BUFFER_COUNT               (1)  //CW797
#define SEQ_GGE_RFC_TX_CONFIG_BUFFER_COUNT                (12) //CW707, CW786, CW794, CW795, CW796, CW814, CW712, CW802, CW803, CW714, CW816, CW818
#define SEQ_GGE_RFC_FDD_TX_SL2W_WO_CW1_COUNT              (23)



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
}SEQ_GGE_RFC_CW1_INFO_T;

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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
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
   CW51_INFO_T cw51_info;
   CW50_INFO_T cw50_info;
}SEQ_GGE_RFC_TTG_CALC_INFO_T;


typedef struct
{
   CW793_INFO_T cw793_info;
}SEQ_GGE_RFC_SET_RF_CW_TX_RCF_INFO_T;

typedef struct
{
   CW710_INFO_T cw710_info;
}SEQ_GGE_RFC_SET_RF_CW_TX_LPF_INFO_T;

typedef struct
{
   CW787_INFO_T cw787_info;
}SEQ_GGE_RFC_SET_RF_CW_TX_RCCAL1_INFO_T;

typedef struct
{
   CW793_INFO_T cw793_info;
}SEQ_GGE_RFC_SET_TX_RCF_FOR_RCK_INFO_T;

typedef struct
{
   CW45_INFO_T cw45_info;
}SEQ_GGE_RFC_TTG_CTRL_INFO_T;

typedef struct
{
   CW710_INFO_T cw710_info;
}SEQ_GGE_RFC_SET_TX_LPF_CW710_INFO_T;

typedef struct
{
   CW714_INFO_T cw714_info;
}SEQ_GGE_RFC_LO_RESULT_WB_INFO_T;

typedef struct
{
   CW706_INFO_T cw706_info;
}SEQ_GGE_RFC_SET_TX_GAIN_INFO_T;

typedef struct
{
   CW795_INFO_T cw795_info;
}SEQ_GGE_RFC_SET_RF_CAPCODE_AACT_INFO_T;

typedef struct
{
   CW796_INFO_T cw796_info;
}SEQ_GGE_RFC_SET_RF_CAPCODE_BACT_INFO_T;

typedef struct
{
   CW705_INFO_T cw705_info;
}SEQ_GGE_RFC_SET_DET_GAIN_INFO_T;

typedef struct
{
   CW797_INFO_T cw797_info;
   CW712_INFO_T cw712_info;
}SEQ_GGE_RFC_SET_EXTRA_CW_FOR_TX_BW_CHANGE_INFO_T;


typedef struct
{
   CW704_INFO_T cw704_info;
   kal_bool     is_set_default;
}SEQ_GGE_RFC_RF_CW_INIT_INFO_T;

typedef struct
{
   CW816_INFO_T cw816_info;
   CW818_INFO_T cw818_info;
   kal_bool     is_set_default;
}SEQ_GGE_RFC_TX_CW_RESET_INFO_T;

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
#endif

typedef struct
{
   CW799_INFO_T cw799_info;
}SEQ_GGE_RFC_DPD_CONFIG_BUFFER_INFO_T;

typedef struct
{
   CW797_INFO_T cw797_info;
}SEQ_GGE_RFC_LIN_CONFIG_BUFFER_INFO_T;

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
}SEQ_GGE_RFC_TX_CONFIG_BUFFER_INFO_T;

typedef struct
{
   CW710_INFO_T cw710_info;
   CW825_INFO_T cw825_info;
   CW826_INFO_T cw826_info;
}SEQ_GGE_RFC_TX_LPF_CONFIG_BUFFER_INFO_T;

typedef struct
{
   CW803_INFO_T cw803_info;
}SEQ_GGE_RFC_SET_TX_LO_CAL_INFO_T;
/************************************************************************************
*  Prototypes
************************************************************************************/
void MMRF_SEQ_GGE_RFC_CW1 ( SEQ_GGE_RFC_CW1_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_RFC_TTG_CALC(SEQ_GGE_RFC_TTG_CALC_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_RFC_SET_RF_CW_TX_RCF(SEQ_GGE_RFC_SET_RF_CW_TX_RCF_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_RFC_SET_RF_CW_TX_LPF(SEQ_GGE_RFC_TX_LPF_CONFIG_BUFFER_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_RFC_SET_TX_RCF_FOR_RCK(SEQ_GGE_RFC_SET_TX_RCF_FOR_RCK_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_RFC_SET_RF_CW_TX_RCCAL1(SEQ_GGE_RFC_SET_RF_CW_TX_RCCAL1_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_RFC_TTG_CTRL(SEQ_GGE_RFC_TTG_CTRL_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_RFC_SET_TX_LPF_CW710(SEQ_GGE_RFC_SET_TX_LPF_CW710_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_RFC_LO_RESULT_WB(SEQ_GGE_RFC_LO_RESULT_WB_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_RFC_SET_TX_GAIN(SEQ_GGE_RFC_SET_TX_GAIN_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_RFC_SET_RF_CAPCODE_AACT(SEQ_GGE_RFC_SET_RF_CAPCODE_AACT_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_RFC_SET_RF_CAPCODE_BACT(SEQ_GGE_RFC_SET_RF_CAPCODE_BACT_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_RFC_SET_DET_GAIN(SEQ_GGE_RFC_SET_DET_GAIN_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_RFC_RF_CW_INIT(SEQ_GGE_RFC_RF_CW_INIT_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_RFC_TX_CW_RESET(SEQ_GGE_RFC_TX_CW_RESET_INFO_T *seq_info, kal_uint32 *bsiData);
void MMRF_SEQ_GGE_RFC_SET_EXTRA_CW_FOR_TX_BW_CHANGE(SEQ_GGE_RFC_SET_EXTRA_CW_FOR_TX_BW_CHANGE_INFO_T *seq_info, kal_uint32 *bsiData);

void MMRF_SEQ_GGE_RFC_SET_TX_LO_CAL(SEQ_GGE_RFC_SET_TX_LO_CAL_INFO_T *seq_info, kal_uint32 *bsiData);

#endif /*__MML1_RF_SEQ_GEN_LTE_RFC_MT6177M_H__*/
