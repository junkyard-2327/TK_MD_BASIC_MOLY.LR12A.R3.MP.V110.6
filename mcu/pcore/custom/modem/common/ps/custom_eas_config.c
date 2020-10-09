/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
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
 *
 * Filename:
 * ---------
 * custom_eas_config.c
 *
 * Project:
 * --------
 *   MONZA
 *
 * Description:
 * ------------
 *   This file is used to define the EAS configuration.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
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
 *
 * removed!
 * removed!
 *
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
 *
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
 *
 * removed!
 * removed!
 *
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
 *
 * removed!
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
 * removed!
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#include "custom_eas_config.h"

/*4G Background Search interval parameter setting:
  Any modification for these value should according to the defined range.
  Otherwise,MD will use the default value instead of setting value.
  Please noted that the maximum value should greater or equal to the initial value.
  NOTE: You may set the delta value to ZERO for fix interval.
*/  
kal_uint8 lte_bgsrch_intv_para[]={  2,/*Initial value(minutes),range:(2..120),default value:2*/
                                  120,/*Maximum value(minutes),range:(2..120),default value:120*/
                                   10 /*Delta value(minutes),  range:(0..5)  ,default value:1*/
                                  };

/*****************************************************************************
* FUNCTION
*   eas_custom_get_bgsrch_intv_para
* DESCRIPTION
*   The function gives 4G background search interval parameters.
*
* PARAMETERS
*  The output value pointers
* RETURNS
*  void
* GLOBALS AFFECTED
*   None
*****************************************************************************/
void eas_custom_get_bgsrch_intv_para(kal_uint8 *a_intv_init_ptr,
                                     kal_uint8 *a_intv_max_ptr,
                                     kal_uint8 *a_intv_delta_ptr )
{
    if (a_intv_init_ptr)
    {
        *a_intv_init_ptr  = lte_bgsrch_intv_para[0];
    }
    if (a_intv_max_ptr)
    {
        *a_intv_max_ptr   = lte_bgsrch_intv_para[1];
    }
    if (a_intv_delta_ptr)
    {
        *a_intv_delta_ptr = lte_bgsrch_intv_para[2];
    }

}                                                                       

/* CT special mininum RSRP for S-crit*/
#define CUSTOM_CT_CELL_MIN_RSRP    -488
/*****************************************************************************
* FUNCTION
*   eas_custom_get_ct_min_rsrp
* DESCRIPTION
*   The function can be set for CT cell min-RSRP camping criteria
* RETURNS
*  kal_int16
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_int16 eas_custom_get_ct_min_rsrp()
{
	return (kal_int16)CUSTOM_CT_CELL_MIN_RSRP;
}   
                                                 

#if defined (__AS_SPECIFIC_CHANNEL_SRCH__)|| defined(UNIT_TEST)
kal_bool eas_custom_specific_channel_srch = KAL_FALSE;

/**
 * The specific channels
 * How to use:
 * Max number is define in NUM_OF_LTE_SPECIFIC_CHANNELS.
 * If user only want to config EARFCNs less than NUM_OF_LTE_SPECIFIC_CHANNELS in some band, just fill invalid EARFCN.
 * For example, if band 1 only need 3 EARFCNs, just fill {300,301,302,0xFFFFFFFF}
 */

#define NUM_OF_LTE_SPECIFIC_CHANNELS    4
#define NUM_OF_LTE_SPECIFIC_BANDS      25

EARFCN specific_earfcn[NUM_OF_LTE_SPECIFIC_BANDS][NUM_OF_LTE_SPECIFIC_CHANNELS]     = 
{
    {  300,  301,  302,  500}, /* band  1 */
    {  900,  901,  902,  903}, /* band  2 */
    { 1575, 1576, 1577, 1578}, /* band  3 */
    { 2175, 2176, 2177, 2178}, /* band  4 */
    { 2525, 2526, 2527, 2528}, /* band  5 */
    { 2700, 2701, 2702, 2703}, /* band  6 */
    { 3100, 3101, 3102, 3103}, /* band  7 */
    { 3625, 3626, 3627, 3628}, /* band  8 */
    { 3975, 3976, 3977, 3978}, /* band  9 */
    { 4450, 4451, 4452, 4453}, /* band 10 */
    { 4850, 4851, 4852, 4853}, /* band 11 */
    { 5095, 5096, 5097, 5098}, /* band 12 */
    { 5230, 5231, 5232, 5233}, /* band 13 */
    { 5330, 5331, 5332, 5333}, /* band 14 */
    {LTE_SPECIFIC_CHANNELS_INVALID_EARFCN, LTE_SPECIFIC_CHANNELS_INVALID_EARFCN, LTE_SPECIFIC_CHANNELS_INVALID_EARFCN, LTE_SPECIFIC_CHANNELS_INVALID_EARFCN}, /* band 15 */
    {LTE_SPECIFIC_CHANNELS_INVALID_EARFCN, LTE_SPECIFIC_CHANNELS_INVALID_EARFCN, LTE_SPECIFIC_CHANNELS_INVALID_EARFCN, LTE_SPECIFIC_CHANNELS_INVALID_EARFCN}, /* band 16 */
    { 5790, 5791, 5792, LTE_SPECIFIC_CHANNELS_INVALID_EARFCN}, /* band 17 */
    {LTE_SPECIFIC_CHANNELS_INVALID_EARFCN, LTE_SPECIFIC_CHANNELS_INVALID_EARFCN, LTE_SPECIFIC_CHANNELS_INVALID_EARFCN, LTE_SPECIFIC_CHANNELS_INVALID_EARFCN}, /* band 18 */
    { 6075, 6076, 6077, 6078}, /* band 19 */
    { 6300, 6301, 6302, 6303}, /* band 20 */
    { 6525, 6526, 6527, 6528}, /* band 21 */
    {LTE_SPECIFIC_CHANNELS_INVALID_EARFCN, LTE_SPECIFIC_CHANNELS_INVALID_EARFCN, LTE_SPECIFIC_CHANNELS_INVALID_EARFCN, LTE_SPECIFIC_CHANNELS_INVALID_EARFCN}, /* band 22 */
    {LTE_SPECIFIC_CHANNELS_INVALID_EARFCN, LTE_SPECIFIC_CHANNELS_INVALID_EARFCN, LTE_SPECIFIC_CHANNELS_INVALID_EARFCN, LTE_SPECIFIC_CHANNELS_INVALID_EARFCN}, /* band 23 */
    {LTE_SPECIFIC_CHANNELS_INVALID_EARFCN, LTE_SPECIFIC_CHANNELS_INVALID_EARFCN, LTE_SPECIFIC_CHANNELS_INVALID_EARFCN, LTE_SPECIFIC_CHANNELS_INVALID_EARFCN}, /* band 24 */
    { 8365, 8366, 8367, 8368}  /* band 25 */
};

/* get invalid earfcn define*/
/*****************************************************************************
* FUNCTION
*   eas_custom_get_specific_channels_invalid_earfcn
* DESCRIPTION
*   get invalid earfcn define
* RETURNS
*  earfcn
* GLOBALS AFFECTED
*   None
*****************************************************************************/
EARFCN eas_custom_get_specific_channels_invalid_earfcn()
{
	return (EARFCN)LTE_SPECIFIC_CHANNELS_INVALID_EARFCN;
}

 
#endif

#ifdef __LTE_R11__
/* FGI black list. If you want to disable some specific FGI, please set associated bit to 1. */
const eas_custom_fgi_blacklist_plmn_config CUSTOM_FGI_BLACKLIST_PLMN_CFG[] = 
{
    /*PLMN id, fgi-fdd1~32 MSB=fgi1, fgi-tdd1~32 MSB=fgi1, fgifdd33~41 MSB=fgi33, fgitdd33~41 MSB=fgi33, fgifdd101~116 MSB=101, fgitdd101~116 MSB=101 */
    {"46000F", 0x00000000,           0x00000000,           0x00000000,            0x00000000,            0x00000000,            0x00000000 },  // CMCC, China
    {"46002F", 0x00000000,           0x00000000,           0x00000000,            0x00000000,            0x00000000,            0x00000000 },  // CMCC, China
    {"46004F", 0x00000000,           0x00000000,           0x00000000,            0x00000000,            0x00000000,            0x00000000 },  // CMCC, China
    {"46007F", 0x00000000,           0x00000000,           0x00000000,            0x00000000,            0x00000000,            0x00000000 },  // CMCC, China
    {"46008F", 0x00000000,           0x00000000,           0x00000000,            0x00000000,            0x00000000,            0x00000000 },  // CMCC, China

    /* below is an example to disable FGI 8, 22, 27, 33, 114 */
    //{"46601F", 0x01000420,           0x01000420,           0x80000000,            0x80000000,            0x00040000,            0x00040000 },  // FET

    {"FFFFFF", 0x00000000,           0x00000000,           0x00000000,            0x00000000,            0x00000000,            0x00000000 }   // END (don't touch and put your new entry above this line)
};

const kal_uint32 CUSTOM_FGI_BLACKLIST_PLMN_CFG_NUM = sizeof(CUSTOM_FGI_BLACKLIST_PLMN_CFG)/sizeof(eas_custom_fgi_blacklist_plmn_config);


/* FGI black list for HPLMN. If you want to disable some specific FGI, please set associated bit to 1. */
const eas_custom_fgi_blacklist_plmn_config CUSTOM_FGI_BLACKLIST_HPLMN_CFG[] = 
{
    /*PLMN id, fgi-fdd1~32 MSB=fgi1, fgi-tdd1~32 MSB=fgi1, fgifdd33~41 MSB=fgi33, fgitdd33~41 MSB=fgi33, fgifdd101~116 MSB=101, fgitdd101~116 MSB=101 */
    {"46000F", 0x00000000,           0x00000000,           0x00000000,            0x00000000,            0x00000000,            0x00000000 },  // CMCC, China
    {"46002F", 0x00000000,           0x00000000,           0x00000000,            0x00000000,            0x00000000,            0x00000000 },  // CMCC, China
    {"46004F", 0x00000000,           0x00000000,           0x00000000,            0x00000000,            0x00000000,            0x00000000 },  // CMCC, China
    {"46007F", 0x00000000,           0x00000000,           0x00000000,            0x00000000,            0x00000000,            0x00000000 },  // CMCC, China
    {"46008F", 0x00000000,           0x00000000,           0x00000000,            0x00000000,            0x00000000,            0x00000000 },  // CMCC, China

    /* below is an example to disable FGI 8, 22, 27, 33, 114 */
    //{"46601F", 0x01000420,           0x01000420,           0x80000000,            0x80000000,            0x00040000,            0x00040000 },  // FET

    {"FFFFFF", 0x00000000,           0x00000000,           0x00000000,            0x00000000,            0x00000000,            0x00000000 }   // END (don't touch and put your new entry above this line)
};

const kal_uint32 CUSTOM_FGI_BLACKLIST_HPLMN_CFG_NUM = sizeof(CUSTOM_FGI_BLACKLIST_HPLMN_CFG)/sizeof(eas_custom_fgi_blacklist_plmn_config);

/*******************************************************************************
 * Allowed to customize HSR (High Speed Railway) specific PLMN Identities here.
 * By referring to this data, UE decides to start corresponding enhancement 
 * mechanism or not.
 ******************************************************************************/
const custom_hsr_plmn_list CUSTOM_HSR_PLMN_LIST[] = 
{
    {"46000F"}, /*{"46002F"},*/ {"46004F"}, /*{"46007F"}, {"46008F"},*/  // CMCC, China
    {"46001F"}, /*{"46006F"}, {"46009F"},*/                              // CU, China

#ifdef UNIT_TEST
    {"00131F"}, {"00132F"}, {"00133F"}, {"00134F"}, {"00135F"},
    {"00136F"}, {"00137F"}, {"00138F"}, {"00139F"}, {"00140F"},
    {"00141F"}, {"00142F"}, {"00143F"}, {"00144F"}, {"00145F"},
    {"00146F"}, {"00147F"}, {"00148F"}, {"00149F"}, {"00150F"},
    {"00151F"}, {"00152F"}, {"00153F"}, {"00154F"}, {"00155F"},
    {"00156F"}, {"00157F"}, {"00158F"}, {"00159F"}, {"00160F"},
    {"00161F"}, {"00162F"}, {"00163F"}, {"00164F"}, {"00165F"},
    {"00166F"}, {"00167F"}, {"00168F"}, {"00169F"}, {"00170F"},
    {"00171F"}, {"00172F"}, {"00173F"}, {"00174F"}, {"00175F"},
    {"00176F"}, {"00177F"}, {"00178F"}, {"00179F"}, {"00180F"},
#endif

    {"FFFFFF"}   // END (don't touch and put your new entry above this line)
};

const kal_uint32 CUSTOM_HSR_PLMN_LIST_NUM = sizeof(CUSTOM_HSR_PLMN_LIST)/sizeof(custom_hsr_plmn_list);

/*******************************************************************************
 * when encounter the plmn list in this table, UE will report UL64QAM supported 
 * when CA is disabled, otherwise reporting UL64QAM disabled when CA is disabled
 ******************************************************************************/
const custom_ul64qam_plmn_list CUSTOM_UL64QAM_PLMN_LIST[] = 
{
    {"46000F"}, {"46002F"}, {"46004F"}, {"46007F"}, {"46008F"},  // CMCC, China
    {"310053"}, {"310054"}, {"310120"}, {"310830"}, {"311260"}, {"311490"}, {"311870"}, {"311880"}, {"311940"}, {"312190"}, {"312140"}, {"312240"}, {"312250"}, {"312530"}, {"316010"}, // Sprint
    {"310160"}, {"310200"}, {"310210"}, {"310220"}, {"310230"}, {"310240"}, {"310250"}, {"310260"}, {"310270"}, {"310310"}, {"310490"}, {"310660"}, {"310800"}, {"311660"}, // TMO
    {"310030"}, {"310170"}, {"310280"}, {"310380"}, {"310410"}, {"310560"}, {"311180"}, {"310950"}, {"313100"}, {"312670"}, {"313110"}, {"313120"}, {"313130"}, {"313140"}, {"313150"}, // ATT
	{"313390"},   //Altice US

#ifdef UNIT_TEST
    {"00131F"}, {"00132F"}, {"00133F"}, {"00134F"}, {"00135F"},
#endif

    {"FFFFFF"}   // END (don't touch and put your new entry above this line)
};

const kal_uint32 CUSTOM_UL64QAM_PLMN_LIST_NUM = sizeof(CUSTOM_UL64QAM_PLMN_LIST)/sizeof(custom_ul64qam_plmn_list);

/*******************************************************************************
 * This table is used to specify which serving PLMN is allowed to report DL 256QAM.
 * Initial set as CMCC PLMNs.
 * 
 * Use special PLMN Id "FFFFFE" to allow DL 256QAM capability reporting in all PLMNs.
 ******************************************************************************/
const custom_dl256qam_plmn_list CUSTOM_DL256QAM_PLMN_LIST[] = 
{
#if !defined(MT6763)
    {"FFFFFE"},  // Super PLMN (match for any PLMN)
#endif
    {"46000F"}, {"46002F"}, {"46004F"}, {"46007F"}, {"46008F"},  // CMCC, China

    {"FFFFFF"}   // END (don't touch and put your new entry above this line)
};

const kal_uint32 CUSTOM_DL256QAM_PLMN_LIST_NUM = sizeof(CUSTOM_DL256QAM_PLMN_LIST)/sizeof(custom_dl256qam_plmn_list);

/* Dynamic UE cap size adjustment*/
#define CUSTOM_DCSA_TRIGGER_TH  3
#define CUSTOM_DCSA_EXPIRE      48 //hrs

kal_uint8 eas_custom_get_dcsa_trigge_th(void)
{
    return (kal_uint8)CUSTOM_DCSA_TRIGGER_TH;
}

kal_uint8 eas_custom_get_dcsa_expire(void)
{
    return (kal_uint8)CUSTOM_DCSA_EXPIRE;
}


kal_uint8 eas_custom_get_rohc_profile_num(void)
{
    return (kal_uint8)NUM_OF_CUSTOM_ROHC_PROFILE;
}

/*******************************************************************************
* let customer configure the max size of LTE capability according to plmn
 ******************************************************************************/
const eas_custom_eutra_cap_size_config CUSTOM_EUTRA_CAP_SIZE_CFG[] = 
{
    /*PLMN id, MAX EUTRA capability size (byte) */
    {"46000F", 1200 },  // CMCC, China
    {"46002F", 1200 },  // CMCC, China
    {"46004F", 1200 },  // CMCC, China
    {"46007F", 1200 },  // CMCC, China
    {"46008F", 1200 },  // CMCC, China
#ifdef UNIT_TEST
    {"00200F", 300 },  // UT
    {"00201F", 500 },  // UT
    {"00202F", 700 },  // UT
    {"00203F", 900 },  // UT
    {"00204F", 1300 },  // UT
#endif
    {"FFFFFF", 0 }   // END (don't touch and put your new entry above this line)
};

const kal_uint32 CUSTOM_EUTRA_CAP_SIZE_CFG_NUM = sizeof(CUSTOM_EUTRA_CAP_SIZE_CFG)/sizeof(eas_custom_eutra_cap_size_config);

/*******************************************************************************
 * Operator specific white list CA band combination table
 ******************************************************************************/
const eas_custom_white_list_cabc_config CUSTOM_EUTRA_WHITE_LIST_CABC_CFG[] = 
{
    /*         operator,     band_num, {   CC0_BAND,   CC0_BW_CLAS_UL,   CC0_BW_CLAS_DL}, {    CC1_BAND,     CC1_BW_CLAS_UL,     CC1_BW_CLAS_DL} */
    {CUSTOM_EAS_OP_CMCC,            1, {{LTE_Band38,     CA_BW_CLAS_C,     CA_BW_CLAS_C}, {LTE_BandNone,     CA_BW_CLAS_INV,     CA_BW_CLAS_INV}}},
    {CUSTOM_EAS_OP_CMCC,            1, {{LTE_Band39,     CA_BW_CLAS_C,     CA_BW_CLAS_C}, {LTE_BandNone,     CA_BW_CLAS_INV,     CA_BW_CLAS_INV}}},
    {CUSTOM_EAS_OP_CMCC,            1, {{LTE_Band40,     CA_BW_CLAS_C,     CA_BW_CLAS_C}, {LTE_BandNone,     CA_BW_CLAS_INV,     CA_BW_CLAS_INV}}},
    {CUSTOM_EAS_OP_CMCC,            1, {{LTE_Band41,     CA_BW_CLAS_C,     CA_BW_CLAS_C}, {LTE_BandNone,     CA_BW_CLAS_INV,     CA_BW_CLAS_INV}}},
    {CUSTOM_EAS_OP_CMCC,            1, {{LTE_Band38,     CA_BW_CLAS_A,     CA_BW_CLAS_C}, {LTE_BandNone,     CA_BW_CLAS_INV,     CA_BW_CLAS_INV}}},
    {CUSTOM_EAS_OP_CMCC,            1, {{LTE_Band39,     CA_BW_CLAS_A,     CA_BW_CLAS_C}, {LTE_BandNone,     CA_BW_CLAS_INV,     CA_BW_CLAS_INV}}},
    {CUSTOM_EAS_OP_CMCC,            1, {{LTE_Band40,     CA_BW_CLAS_A,     CA_BW_CLAS_C}, {LTE_BandNone,     CA_BW_CLAS_INV,     CA_BW_CLAS_INV}}},
    {CUSTOM_EAS_OP_CMCC,            1, {{LTE_Band41,     CA_BW_CLAS_A,     CA_BW_CLAS_C}, {LTE_BandNone,     CA_BW_CLAS_INV,     CA_BW_CLAS_INV}}},
    {CUSTOM_EAS_OP_CMCC,            2, {{LTE_Band41,     CA_BW_CLAS_A,     CA_BW_CLAS_A}, {LTE_Band41,       CA_BW_CLAS_INV,     CA_BW_CLAS_A}}},
};

const kal_uint32 CUSTOM_EUTRA_WHITE_LIST_CABC_CFG_NUM = sizeof(CUSTOM_EUTRA_WHITE_LIST_CABC_CFG)/sizeof(eas_custom_white_list_cabc_config);

/*******************************************************************************
 * Operator vs. PLMN
 ******************************************************************************/
const eas_custom_operator_plmn_config CUSTOM_EUTRA_OPERATOR_PLMN_CFG[] = 
{
    {CUSTOM_EAS_OP_CMCC, "46000F"},
    {CUSTOM_EAS_OP_CMCC, "46002F"},
    {CUSTOM_EAS_OP_CMCC, "46004F"},
    {CUSTOM_EAS_OP_CMCC, "46007F"},
    {CUSTOM_EAS_OP_CMCC, "46008F"},
};

const kal_uint32 CUSTOM_EUTRA_OPERATOR_PLMN_CFG_NUM = sizeof(CUSTOM_EUTRA_OPERATOR_PLMN_CFG)/sizeof(eas_custom_operator_plmn_config);

/*******************************************************************************
 * Allowed to customize pratial supported band frequency by plmn
 ******************************************************************************/
const eas_custom_partial_band_info_config CUSTOM_PARTIAL_BAND_INFO_TBL[] = 
{    
#ifdef UNIT_TEST
    {"00200F", {41, 39650, 41500, 39650, 41500}},
    {"00200F", {41, 39650, 41589, 39650, 41589}},
    {"00200F", {41, 39650, 41589, 39650, 41589}},
    {"00200F", {41, 39900, 41589, 39900, 41589}},
    {"00200F", {40, 38650, 39649, 38650, 39649}},
#endif

    {"FFFFFF",{255,0,0,0,0}}   // END (don't touch and put your new entry above this line)
};

const kal_uint32 CUSTOM_PARTIAL_BAND_INFO_NUM = sizeof(CUSTOM_PARTIAL_BAND_INFO_TBL)/sizeof(eas_custom_partial_band_info_config);

#endif  /* END of #ifdef __LTE_R11__ */

/**********************************************************************************************************************************************************
 * Allowed to customize coexist operator list to judge whether the SIB1 of this 4G cell carries different operators simultaneously.
 *
 * Note: 
 * The max operator number of each row is 6 because the max number of PLMNs in SIB1 is 6.
 * Each row means that the customer wants to check whether the operator list of SIB1 matches each operator.
 * P.S. If the customer wants to check whether the operator list of SIB1 meatches 2 operators between 3 operators, please list the combination separately.
 * Warning! You should not only set operator1!(because SIB1 carries 1 operator is normal.) You should set 2~6 operators here.
 **********************************************************************************************************************************************************/
eas_custom_operator_enum custom_coexist_operator_table[CUSTOM_COEXIST_OPERATOR_ROW][6]=
{
  /*{operator1,          operator2,        operator3,        operator4,         operator5,         operator6        }*/
    {CUSTOM_EAS_OP_CMCC, CUSTOM_EAS_OP_CU,  CUSTOM_EAS_OP_CT, CUSTOM_EAS_OP_END, CUSTOM_EAS_OP_END, CUSTOM_EAS_OP_END},
  //{CUSTOM_EAS_OP_CMCC, CUSTOM_EAS_OP_CU, CUSTOM_EAS_OP_END, CUSTOM_EAS_OP_END, CUSTOM_EAS_OP_END, CUSTOM_EAS_OP_END},
  //{CUSTOM_EAS_OP_CMCC, CUSTOM_EAS_OP_CT, CUSTOM_EAS_OP_END, CUSTOM_EAS_OP_END, CUSTOM_EAS_OP_END, CUSTOM_EAS_OP_END},
  //{CUSTOM_EAS_OP_CT  , CUSTOM_EAS_OP_CU, CUSTOM_EAS_OP_END, CUSTOM_EAS_OP_END, CUSTOM_EAS_OP_END, CUSTOM_EAS_OP_END},
};

kal_char* custom_plmn_list_of_operator[CUSTOM_OPERATOR_NUM][CUSTOM_PLMN_LIST_NUM]=
{
	{"46000F","46002F","46007F","46020F",  NULL},/*CUSTOM_EAS_OP_CMCC*/
	{"46001F","46006F",    NULL,    NULL,  NULL},/*CUSTOM_EAS_OP_CU*/
	{"46011F","46003F","46005F",    NULL,  NULL},/*CUSTOM_EAS_OP_CT*/
};

/*******************************************************************************
 * ROHC profile custom config
 *if this ROHC file is not supported by UE, the configuration is ignored currently
 ******************************************************************************/
const custom_eas_lte_rohc_profile_config CUSTOM_EUTRA_ROHC_PROFILE_CFG[]=
{
    /*PLMN id,                profile0x0001,         profile0x0002,         profile0x0003,        profile0x0004,         profile0x0006,        profile0x0101,        profile0x0102,         profile0x0103,        profile0x0104  */
    /*UE support:           KAL_TRUE,           KAL_TRUE,             KAL_FALSE,          KAL_TRUE,             KAL_FALSE,          KAL_FALSE,          KAL_FALSE,          KAL_FALSE,          KAL_FALSE*/
#ifdef UNIT_TEST
    {"55555F",{    KAL_FALSE,    KAL_FALSE,    KAL_FALSE,    KAL_FALSE,    KAL_FALSE,    KAL_FALSE,    KAL_FALSE,    KAL_FALSE,    KAL_FALSE}},  //for test purpose
    {"55556F",{    KAL_TRUE,     KAL_FALSE,    KAL_TRUE,     KAL_FALSE,    KAL_TRUE,     KAL_FALSE,    KAL_FALSE,    KAL_FALSE,    KAL_FALSE}},  //for test purpose
#endif
    {"FFFFFF",{    KAL_FALSE,    KAL_FALSE,    KAL_FALSE,    KAL_FALSE,    KAL_FALSE,    KAL_FALSE,    KAL_FALSE,    KAL_FALSE,    KAL_FALSE}}  //END
};

const kal_uint32 CUSTOM_EUTRA_ROHC_PROFILE_NUM = sizeof(CUSTOM_EUTRA_ROHC_PROFILE_CFG)/sizeof(custom_eas_lte_rohc_profile_config);

/*******************************************************************************
 * Allowed to customize 2G/3G AFR enable/disable by HPLMN
 ******************************************************************************/
const custom_hplmn_afr_mapping_record CUSTOM_HPLMN_AFR_MAPPING_TABLE[]=
{
    /*Home PLMN id, 2G AFR, 3G AFR */ /*KAL_TRUE: AFR enable; KAL_FALSE: AFR disable */
#ifdef UNIT_TEST
    {"23099F", KAL_TRUE, KAL_TRUE},  //for test purpose
    {"22210", KAL_TRUE, KAL_FALSE},  //for test purpose
    {"22401", KAL_FALSE, KAL_TRUE},  //for test purpose
    {"26801F", KAL_FALSE, KAL_FALSE},  //for test purpose
#endif
    {"FFFFFF", KAL_FALSE, KAL_FALSE}  //END
};

const kal_uint32 CUSTOM_HPLMN_AFR_MAPPING_RECORD_NUM = sizeof(CUSTOM_HPLMN_AFR_MAPPING_TABLE)/sizeof(custom_hplmn_afr_mapping_record);

/*************************************************************************
* Function
*************************************************************************/

#if defined (__AS_SPECIFIC_CHANNEL_SRCH__)|| defined(UNIT_TEST)
/*****************************************************************************
* FUNCTION
*  eas_custom_set_specific_channel_srch
* DESCRIPTION
*   The function set specific search mode.
*
* PARAMETERS
*   kal_bool
*   TRUE: set specific search mode, FALSE: disable specific search mode.
* RETURNS
*   Void
* GLOBALS AFFECTED
*   None
*****************************************************************************/
void eas_custom_set_specific_channel_srch( kal_bool set_value )
{
    eas_custom_specific_channel_srch = set_value;
}
/*****************************************************************************
* FUNCTION
*  eas_custom_is_specific_channel_srch
* DESCRIPTION
*   The function returns whether UE is in specific channel search mode.
*
* PARAMETERS
*  Void
* RETURNS
*  kal_bool
*  TRUE: specific channel search mode, FALSE: normal search mode
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_bool eas_custom_is_specific_channel_srch(void)
{
    return eas_custom_specific_channel_srch;
}
/*****************************************************************************
* FUNCTION
*  eas_custom_get_specific_earfcn
* DESCRIPTION
*   The function returns custom configured specific earfcn.
*
* PARAMETERS
*   kal_uint8 band: the specific band
*   kal_uint8 earfcn_index: the specific channel index
* RETURNS
*  kal_uint32: earfcn
* GLOBALS AFFECTED
*   None
*****************************************************************************/
EARFCN eas_custom_get_specific_earfcn(kal_uint16 band, kal_uint8 earfcn_index)
{
    return specific_earfcn[band][earfcn_index];
}
/*****************************************************************************
* FUNCTION
*  eas_custom_set_specific_earfcn
* DESCRIPTION
*   The function sets custom configured specific earfcn.
*
* PARAMETERS
*   kal_uint8 band: the specific band
*   kal_uint8 earfcn_index: the specific channel index
*   kal_uint32 earfcn: the specific earfcn
* RETURNS
*   Void
* GLOBALS AFFECTED
*   None
*****************************************************************************/
void eas_custom_set_specific_earfcn(kal_uint16 band, kal_uint8 earfcn_index, EARFCN earfcn)
{
    specific_earfcn[band][earfcn_index] = earfcn;
    return;
}
/*****************************************************************************
* FUNCTION
*  eas_custom_get_lte_specific_band_number
* DESCRIPTION
*   The function returns custom configured the number of specific band.
*
* PARAMETERS
*   void
* RETURNS
*  kal_uint8: NUM_OF_LTE_SPECIFIC_BANDS
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_uint16 eas_custom_get_lte_specific_band_number(void)
{
    return NUM_OF_LTE_SPECIFIC_BANDS;
}
/*****************************************************************************
* FUNCTION
*  eas_custom_get_lte_specific_channel_number
* DESCRIPTION
*   The function returns custom configured the number of specific earfcn.
*
* PARAMETERS
*   void
* RETURNS
*  kal_uint8: NUM_OF_LTE_SPECIFIC_CHANNELS
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_uint8 eas_custom_get_lte_specific_channel_number(void)
{
    return NUM_OF_LTE_SPECIFIC_CHANNELS;
}
#endif

kal_uint8 eas_custom_get_coexist_operator_row(void)
{
    return CUSTOM_COEXIST_OPERATOR_ROW;
}

kal_uint8 eas_custom_get_operator_num(void)
{
    return CUSTOM_OPERATOR_NUM;
}

kal_uint8 eas_custom_get_plmn_list_num(void)
{
    return CUSTOM_PLMN_LIST_NUM;
}

eas_custom_operator_enum eas_custom_get_coexist_operator(kal_uint8 row, kal_uint8 coexist_operator_idx)
{
	return custom_coexist_operator_table[row][coexist_operator_idx];
}

kal_char* eas_custom_get_plmn_list_of_target_operator(kal_uint8 target_operator, kal_uint8 plmn_list_idx)
{
	return custom_plmn_list_of_operator[target_operator][plmn_list_idx];
}

//you can set plmn or mcc
//when 0x123456 or 0x12345f, we would try to match plmn
//when 0x123fff, we would try to match mcc
const kal_uint32 eas_custom_ignore_ims_emerg_sup_plmns[] = {
    0x44050f, //KDDI
    0x44051f, //KDDI
    0x44052f, //KDDI
    0x44053f, //KDDI
    0x44054f, //KDDI
    0x44070f, //KDDI
    0x44071f, //KDDI
    0x44072f, //KDDI
    0x44073f, //KDDI
    0x44074f, //KDDI
    0x44075f, //KDDI
    0x44076f, //KDDI
    0}; //END, DO NOT modify this line and put your new entry above this line

const kal_uint32 * eas_custom_get_ignore_ims_emerg_sup_plmns()
{
    return eas_custom_ignore_ims_emerg_sup_plmns;
}

const kal_uint32 tmo_plmn_id_list[] = {
    0x310160,
    0x310200,
    0x310210,
    0x310220,
    0x310230,
    0x310240,
    0x310250,
    0x310260,
    0x310270,
    0x310310,
    0x310490,
    0x310660,
    0x310880,
    0}; // END, DO NOT modify this line and put your new entry above this line
    
const kal_uint16 tmo_band_list[] = { 
    2,
    4,
    5,
    12,
    66,
    71,
    48,
    25,
    26,
    41,
    13,
    17,
    0};  // END, DO NOT modify this line and put your new entry above this line
    
const kal_uint8 tmo_band_num_pl = 7; /* 2~48 are TMO network bands i.e. number of Home bands is 7
                                        Rest are SPRINT network bands*/

void eas_custom_get_tmo_prefer_band_info(kal_bool* enable, const kal_uint32** plmn_id_list, const kal_uint16** band_list, kal_uint8* band_num_pl)
{
    *enable = KAL_TRUE;
    *plmn_id_list = tmo_plmn_id_list;
    *band_list = tmo_band_list;
    *band_num_pl = tmo_band_num_pl;
}

const kal_uint32 sprint_plmn_id_list[] = {
    0x310053,
    0x310054,
    0x310120,
    0x310830,
    0x311260,
    0x311490,
    0x311870,
    0x311880,
    0x311940,
    0x312190,
    0x312140,
    0x312240,
    0x312250,
    0x312530,
    0x316010,
    0}; // END, DO NOT modify this line and put your new entry above this line


const kal_uint16 sprint_band_list[] = { 
    25,
    26,
    41,
    12,
    2,
    4,
    5,
    13,
    17,
    66,
    71,
    48,
    0}; // END, DO NOT modify this line and put your new entry above this line
    
const kal_uint8 sprint_band_num_pl = 9; /* 25~17 are SPRINT network bands i.e. number of Home bands is 9
                                        Rest are TMO network bands*/

void eas_custom_get_sprint_prefer_band_info(kal_bool* enable, const kal_uint32** plmn_id_list, const kal_uint16** band_list, kal_uint8* band_num_pl)
{
    *enable = KAL_TRUE;
    *plmn_id_list = sprint_plmn_id_list;
    *band_list = sprint_band_list;
    *band_num_pl = sprint_band_num_pl;
}
