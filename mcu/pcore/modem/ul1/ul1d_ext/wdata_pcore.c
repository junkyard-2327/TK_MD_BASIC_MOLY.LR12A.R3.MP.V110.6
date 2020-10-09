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
 * wdata.c
 *
 * Project:
 * --------
 * MT6268
 *
 * Description:
 * ------------
 * Variables/Arrays for customer to make their own configurations.
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
 *
 * removed!
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
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
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
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*===============================================================================*/

#include "kal_general_types.h"

#include "mml1_dpd_def.h"

#include "ul1d_custom_rf.h"
#include "wcustomdata.h"

#include "ul1d_rf_public.h"
#include "ul1d_rf_common.h"
#include "ul1d_rf_cid.h"
#include "ul1cal.h"
#if (IS_3G_MIPI_SUPPORT)
#include "ul1d_custom_mipi.h"
#endif

#if defined(L1_SIM)
#include "SymWrap.h"
#endif

#include "ul1d_custom_rf_ca.h"
#if IS_3G_TAS_UL1_CUSTOM_SUPPORT
#include "ul1d_custom_rf_tas.h"
#endif

#if IS_3G_DAT_UL1_CUSTOM_SUPPORT
#include "ul1d_custom_rf_dat.h"
#endif
#include "ul1d_rf_cal_poc_data.h"

#if __IS_UL1D_DPD_SUPPORT__
#include "ul1d_custom_rf_dpd.h"
#endif

/*===============================================================================*/

//TX part
#define UMTS_DET_CDCOC_DEFAULT          0x84210 // Designer David : If you run without POC than use 0x84210 in both of them.  This will not apply any offset correction. 
#if IS_URF_MT6177L
#define UMTS_RC_RCF_DEFAULT             0xE     // MT6177L E2_3wire_Table, #RCF, 16MHz
#define UMTS_RC_LPF_DEFAULT             {172,138}
#elif IS_URF_MT6173
#define UMTS_RC_RCF_DEFAULT             0x10    // MT6173_3wire_Table, #RCF, 16&20MHz
#define UMTS_RC_LPF_DEFAULT             {26,21}
#else
 #error
#endif

#define UMTS_Det_Iq_MG_SC_Comp_Default   {0,0,{{{5,5},{-35,-35},{144,144},{-454,-454},{-350,-350},{312,312},{-218,-218},{127,127},{-59,-59},{19,19},{-3,-3}},9,9}}
#define UMTS_Det_Iq_MG_DC_Comp_Default   {0,0,{{{5,5},{-35,-35},{144,144},{-454,-454},{-350,-350},{312,312},{-218,-218},{127,127},{-59,-59},{19,19},{-3,-3}},9,9}}
#define UMTS_Det_Iq_LG_SC_Comp_Default   {0,0,{{{5,5},{-36,-36},{144,144},{-437,-437},{-371,-371},{316,316},{-215,-215},{123,123},{-56,-56},{18,18},{-3,-3}},9,9}}
#define UMTS_Det_Iq_LG_DC_Comp_Default   {0,0,{{{5,5},{-36,-36},{144,144},{-437,-437},{-371,-371},{316,316},{-215,-215},{123,123},{-56,-56},{18,18},{-3,-3}},9,9}}
#define UMTS_TX_FD_Iq_5Tap_Comp_Default {{0,0,511,0,0,0,0}}
#define UMTS_TX_FD_Iq_7Tap_Comp_Default {{0,0,0,511,0,0,0}}

#define UMTS_TX_GA_5tap_Comp_Default                                                               \
{                                                                                                 \
  {                                                                                               \
    { {0, 0}, {0, 0}, {0x1FF, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0} }, /*tx_ga_filt_lin_1*/         \
    { {0, 0}, {0, 0}, {0x1FF, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0} }, /*tx_ga_filt_lin_2*/         \
  },                                                                                              \
  {                                                                                               \
    {0,0,0,0,0,0,0,0,0},  /*slope : MMRFC_TXGA_MAX_TONES-1 */                                     \
    {0,0,0,0,0,0,0,0,0,0},/*mag_inv_norm : MMRFC_TXGA_MAX_TONES */                                \
  },                                                                                              \
}

#define UMTS_TX_GA_7tap_Comp_Default                                                               \
{                                                                                                 \
  {                                                                                               \
    { {0, 0}, {0, 0}, {0, 0}, {0x1FF, 0}, {0, 0}, {0, 0}, {0, 0} }, /*tx_ga_filt_lin_1*/         \
    { {0, 0}, {0, 0}, {0, 0}, {0x1FF, 0}, {0, 0}, {0, 0}, {0, 0} }, /*tx_ga_filt_lin_2*/         \
  },                                                                                              \
  {                                                                                               \
    {0,0,0,0,0,0,0,0,0},  /*slope : MMRFC_TXGA_MAX_TONES-1 */                                     \
    {0,0,0,0,0,0,0,0,0,0},/*mag_inv_norm : MMRFC_TXGA_MAX_TONES */                                \
  },                                                                                              \
}

#if IS_URF_MT6177L
/* Default value from MT6177L, FXP=s6.5 */
#define UMTS_DET_DNL_Default  \
{                             \
    918, /*   G0*/            \
    822, /*   G1*/            \
    726, /*   G2*/            \
    630, /*   G3*/            \
    534, /*   G4*/            \
    438, /*   G5*/            \
    342, /*   G6*/            \
    342, /*   G7*/            \
    246, /*   G8*/            \
    150, /*   G9*/            \
     54, /*   G10*/           \
    -42, /*   G11*/           \
   -138, /*   G12*/           \
   -234, /*   G13*/           \
   -330, /*   G14*/           \
}

/* Default value from MT6177L, FXP=s6.5 */
#define UMTS_TX_DNL_PGA_A_Default  \
{                                  \
      0, /* G0, 0dB */            \
    -18, /* G1, -0.56dB */         \
    -37, /* G2, -1.16dB */         \
    -58, /* G3, -1.80dB */         \
    -80, /* G4, -2.50dB */         \
   -104, /* G5, -3.25dB */         \
   -131, /* G6, -4.08dB */         \
   -160, /* G7, -5.00dB */         \
   -193, /* G8, -6.02dB */         \
   -230, /* G9, -7.18dB */         \
   -273, /* G10, -8.52dB */         \
   -323, /* G11, -10.10dB */        \
   -385, /* G12a, -12.04dB */       \
   -465, /* G13a, -14.54dB */       \
   -578, /* G14a, -18.06dB */       \
   -615, /* G15a, -19.22dB */       \
   -658, /* G16a, -20.56dB */       \
   -709, /* G17a, -22.14dB */       \
   -771, /* G18a, -24.08dB */       \
   -851, /* G19a, -26.58dB */       \
   -963  /* G20a, -30.10dB */       \
}

/* Default value from MT6177L, FXP=s6.5 */
#define UMTS_TX_DNL_PGA_B_Default  \
{                                  \
       0, /* G1,     0-385 = -12.04dB */         \
     -80, /* G1,   -80-385 = -14.54dB */         \
    -193, /* G1,  -193-385 = -18.06dB */         \
    -230, /* G1,  -230-385 = -19.22dB */         \
    -273, /* G1,  -273-385 = -20.56dB */         \
    -324, /* G1,  -324-385 = -22.14dB */         \
    -386, /* G1,  -386-385 = -24.08dB */         \
    -466, /* G1,  -466-385 = -26.58dB */         \
    -578, /* G1,  -578-385 = -30.10dB */         \
    -771, /* G1,  -771-385 = -36.12dB */         \
    -963, /* G1,  -963-385 = -42.12dB */         \
   -1155, /* G1, -1155-385 = -48.12dB */         \
   -1347, /* G1, -1347-385 = -54.12dB */         \
   -1539, /* G1, -1539-385 = -60.12dB */         \
   -1731, /* G1, -1731-385 = -66.12dB */         \
   -1923, /* G1, -1923-385 = -72.12dB */         \
   -2115  /* G1, -2115-385 = -78.12dB */         \
}

#define TX_FDIQ_5Tap_COMP_DEFAULT      \
{  /* MMRFC_TX_PGA_SLICE_NUM+1 = 8 */ \
   UMTS_TX_FD_Iq_5Tap_Comp_Default, \
   UMTS_TX_FD_Iq_5Tap_Comp_Default, \
   UMTS_TX_FD_Iq_5Tap_Comp_Default, \
   UMTS_TX_FD_Iq_5Tap_Comp_Default, \
   UMTS_TX_FD_Iq_5Tap_Comp_Default, \
   UMTS_TX_FD_Iq_5Tap_Comp_Default, \
   UMTS_TX_FD_Iq_5Tap_Comp_Default, \
   UMTS_TX_FD_Iq_5Tap_Comp_Default, \
 }
#define TX_FDIQ_7Tap_COMP_DEFAULT      \
{  /* MMRFC_TX_PGA_SLICE_NUM+1 = 8 */ \
   UMTS_TX_FD_Iq_7Tap_Comp_Default, \
   UMTS_TX_FD_Iq_7Tap_Comp_Default, \
   UMTS_TX_FD_Iq_7Tap_Comp_Default, \
   UMTS_TX_FD_Iq_7Tap_Comp_Default, \
   UMTS_TX_FD_Iq_7Tap_Comp_Default, \
   UMTS_TX_FD_Iq_7Tap_Comp_Default, \
   UMTS_TX_FD_Iq_7Tap_Comp_Default, \
   UMTS_TX_FD_Iq_7Tap_Comp_Default, \
 }

#elif IS_URF_MT6173
/* Default value from MT6177M, FXP=s6.5 */
#define UMTS_DET_DNL_Default  \
{                             \
    928, /*   G0*/            \
    832, /*   G1*/            \
    736, /*   G2*/            \
    640, /*   G3*/            \
    544, /*   G4*/            \
    448, /*   G5*/            \
    352, /*   G6*/            \
    352, /*   G7*/            \
    256, /*   G8*/            \
    160, /*   G9*/            \
     64, /*   G10*/           \
    -32, /*   G11*/           \
   -128, /*   G12*/           \
   -224, /*   G13*/           \
   -320, /*   G14*/           \
}

#define UMTS_TX_DNL_PGA_A_Default  \
{                                  \
      0, /* G0, 0dB */            \
    -18, /* G1, -0.56dB */         \
    -37, /* G2, -1.16dB */         \
    -58, /* G3, -1.80dB */         \
    -80, /* G4, -2.50dB */         \
   -104, /* G5, -3.25dB */         \
   -131, /* G6, -4.08dB */         \
   -160, /* G7, -5.00dB */         \
   -193, /* G8, -6.02dB */         \
   -230, /* G9, -7.18dB */         \
   -273, /* G10, -8.52dB */         \
   -323, /* G11, -10.10dB */        \
   -385, /* G12, -12.04dB */       \
   -465, /* G13, -14.54dB */       \
   -578, /* G14, -18.06dB */       \
   -615, /* G15, -19.22dB */       \
   -658, /* G16, -20.56dB */       \
   -709, /* G17, -22.14dB */       \
   -771, /* G18, -24.08dB */       \
   -851, /* G19, -26.58dB */       \
   -963, /* G20, -30.10dB */       \
   -1156 /* G21, -36.12dB */       \
}

#define UMTS_TX_DNL_PGA_B_Default  \
{                                  \
   -1188, /* G22, -37.12dB */         \
   -1380, /* G23, -43.12dB */         \
   -1572, /* G24, -49.12dB */         \
   -1764, /* G25, -55.12dB */         \
   -1956, /* G26, -61.12dB */         \
   -2148, /* G27, -67.12dB */         \
   -2340, /* G28, -73.12dB */         \
   -2532, /* G29, -79.12dB */         \
}

#define TX_FDIQ_5Tap_COMP_DEFAULT     \
{  /* MMRFC_TX_PGA_SLICE_NUM+1 = 5 */ \
   UMTS_TX_FD_Iq_5Tap_Comp_Default, \
   UMTS_TX_FD_Iq_5Tap_Comp_Default, \
   UMTS_TX_FD_Iq_5Tap_Comp_Default, \
   UMTS_TX_FD_Iq_5Tap_Comp_Default, \
   UMTS_TX_FD_Iq_5Tap_Comp_Default, \
}
#define TX_FDIQ_7Tap_COMP_DEFAULT     \
{  /* MMRFC_TX_PGA_SLICE_NUM+1 = 5 */ \
   UMTS_TX_FD_Iq_7Tap_Comp_Default, \
   UMTS_TX_FD_Iq_7Tap_Comp_Default, \
   UMTS_TX_FD_Iq_7Tap_Comp_Default, \
   UMTS_TX_FD_Iq_7Tap_Comp_Default, \
   UMTS_TX_FD_Iq_7Tap_Comp_Default, \
}

#else
 #error
#endif

//pga_gain_step[MMRFC_TX_PGA_GAIN_STEP_SUBBAND_NUM/*12*/][MMRFC_TX_PGA_GAIN_STEP_NUM/*10*/]
#define UMTS_TX_PGA_AB_Default                                    \
{                                                                \
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},\
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},\
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},\
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},\
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},\
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},\
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},\
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},\
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},\
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},\
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},\
   {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},\
}

#define UMTS_TX_PGA_PHASE_Default  (0)

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
UMTS_FE_ROUTE_TABLE_T UMTS_FRONT_END_ROUTE_TABLE_PCORE[] =
{
   /* Single Band FE Route Table */
   UMTS_SB_FE_SETTING(RX_BAND_INDICATOR_0, SetDefault),
   UMTS_SB_FE_SETTING(RX_BAND_INDICATOR_1, SetDefault),
   UMTS_SB_FE_SETTING(RX_BAND_INDICATOR_2, SetDefault),
   UMTS_SB_FE_SETTING(RX_BAND_INDICATOR_3, SetDefault),
   UMTS_SB_FE_SETTING(RX_BAND_INDICATOR_4, SetDefault),

   /* CA Band FE Route Table*/
   UMTS_CA_FE_SETTING(RX_CABAND_IND_00, SetDefault),
   UMTS_CA_FE_SETTING(RX_CABAND_IND_01, SetDefault),
   UMTS_CA_FE_SETTING(RX_CABAND_IND_02, SetDefault),
   UMTS_CA_FE_SETTING(RX_CABAND_IND_03, SetDefault),
   UMTS_CA_FE_SETTING(RX_CABAND_IND_04, SetDefault),
};

//kevin phase3 for COSIM RF
/* To fit the case once user who does not use Modem Bin Update tool but modifies makefile/ul1d_custom_rf.h band setting and rebuild */
U_sUl1dRfCustomInputData UMTS_RF_CUSTOM_INPUT_DATA_PCORE =
{
   /* Start Pattern */
   0x1234ABCD,

   /* Structure Version */
   1,

   /* RF Type */
   UMTS_RF_TYPE,

   /* isDataUpdate */
   1,

#if defined (__UL1_HS_PLUS_PLATFORM__)
   /* proityOfNvramInCustomization */
   RF_SETTING_BY_NVRAM,
#endif

   /* umtsRfPaControlTimingOffset */
   {
      MAX_OFFSET,
      VM_OFFSET,
      VBIAS_OFFSET,
      DC2DC_OFFSET,
      VGA_OFFSET
   },

   /* umtsBsiBpiTiming */
   {
      /* RX window end timing */
      -TC_PR1,
      -TC_PR2,
      -TC_PR2B,

      /* RX window end timing */
      TC_PR3,
      TC_PR3A,

      /* TX window start timing */
      -TC_PT1,
      -TC_PT2,
      -TC_PT2B,

      /* TX window end timing */
      TC_PT3,
      TC_PT3A
   },

   /* umtsPdata */
   {
      /* rxBpi */
      {
         /*Band_Ind_0*/
         {
            RX_BAND_INDICATOR_0,
            {
               M_UMTS_PDATA_PR1(RX_BAND_INDICATOR_0),
               M_UMTS_PDATA_PR2(RX_BAND_INDICATOR_0),
               M_UMTS_PDATA_PR2(RX_BAND_INDICATOR_0), /* PR2b */
               M_UMTS_PDATA_PR3(RX_BAND_INDICATOR_0),
               M_UMTS_PDATA_PR3(RX_BAND_INDICATOR_0)  /* PR3a */
            }
            #if IS_3G_RXD_FE_CONTROL_SUPPORT
            ,{
               M_UMTS_PDATA2_PR1(RX_BAND_INDICATOR_0),
               M_UMTS_PDATA2_PR2(RX_BAND_INDICATOR_0),
               M_UMTS_PDATA2_PR2(RX_BAND_INDICATOR_0), /* PR2b */
               M_UMTS_PDATA2_PR3(RX_BAND_INDICATOR_0),
               M_UMTS_PDATA2_PR3(RX_BAND_INDICATOR_0)  /* PR3a */
            }
            #endif
         },
         /*Band_Ind_1*/
         {
            RX_BAND_INDICATOR_1,
            {
               M_UMTS_PDATA_PR1(RX_BAND_INDICATOR_1),
               M_UMTS_PDATA_PR2(RX_BAND_INDICATOR_1),
               M_UMTS_PDATA_PR2(RX_BAND_INDICATOR_1), /* PR2b */
               M_UMTS_PDATA_PR3(RX_BAND_INDICATOR_1),
               M_UMTS_PDATA_PR3(RX_BAND_INDICATOR_1)  /* PR3a */
            }
            #if IS_3G_RXD_FE_CONTROL_SUPPORT
            ,{
               M_UMTS_PDATA2_PR1(RX_BAND_INDICATOR_1),
               M_UMTS_PDATA2_PR2(RX_BAND_INDICATOR_1),
               M_UMTS_PDATA2_PR2(RX_BAND_INDICATOR_1), /* PR2b */
               M_UMTS_PDATA2_PR3(RX_BAND_INDICATOR_1),
               M_UMTS_PDATA2_PR3(RX_BAND_INDICATOR_1)  /* PR3a */
            }
            #endif
         },
         /*Band_Ind_2*/
         {
            RX_BAND_INDICATOR_2,
            {
               M_UMTS_PDATA_PR1(RX_BAND_INDICATOR_2),
               M_UMTS_PDATA_PR2(RX_BAND_INDICATOR_2),
               M_UMTS_PDATA_PR2(RX_BAND_INDICATOR_2), /* PR2b */
               M_UMTS_PDATA_PR3(RX_BAND_INDICATOR_2),
               M_UMTS_PDATA_PR3(RX_BAND_INDICATOR_2)  /* PR3a */
            }
            #if IS_3G_RXD_FE_CONTROL_SUPPORT
            ,{
               M_UMTS_PDATA2_PR1(RX_BAND_INDICATOR_2),
               M_UMTS_PDATA2_PR2(RX_BAND_INDICATOR_2),
               M_UMTS_PDATA2_PR2(RX_BAND_INDICATOR_2), /* PR2b */
               M_UMTS_PDATA2_PR3(RX_BAND_INDICATOR_2),
               M_UMTS_PDATA2_PR3(RX_BAND_INDICATOR_2)  /* PR3a */
            }
            #endif
         },
         /*Band_Ind_3*/
         {
            RX_BAND_INDICATOR_3,
            {
               M_UMTS_PDATA_PR1(RX_BAND_INDICATOR_3),
               M_UMTS_PDATA_PR2(RX_BAND_INDICATOR_3),
               M_UMTS_PDATA_PR2(RX_BAND_INDICATOR_3), /* PR2b */
               M_UMTS_PDATA_PR3(RX_BAND_INDICATOR_3),
               M_UMTS_PDATA_PR3(RX_BAND_INDICATOR_3)  /* PR3a */
            }
            #if IS_3G_RXD_FE_CONTROL_SUPPORT
            ,{
               M_UMTS_PDATA2_PR1(RX_BAND_INDICATOR_3),
               M_UMTS_PDATA2_PR2(RX_BAND_INDICATOR_3),
               M_UMTS_PDATA2_PR2(RX_BAND_INDICATOR_3), /* PR2b */
               M_UMTS_PDATA2_PR3(RX_BAND_INDICATOR_3),
               M_UMTS_PDATA2_PR3(RX_BAND_INDICATOR_3)  /* PR3a */
            }
            #endif
         },
         /*Band_Ind_4*/
         {
            RX_BAND_INDICATOR_4,
            {
               M_UMTS_PDATA_PR1(RX_BAND_INDICATOR_4),
               M_UMTS_PDATA_PR2(RX_BAND_INDICATOR_4),
               M_UMTS_PDATA_PR2(RX_BAND_INDICATOR_4), /* PR2b */
               M_UMTS_PDATA_PR3(RX_BAND_INDICATOR_4),
               M_UMTS_PDATA_PR3(RX_BAND_INDICATOR_4)  /* PR3a */
            }
            #if IS_3G_RXD_FE_CONTROL_SUPPORT
            ,{
               M_UMTS_PDATA2_PR1(RX_BAND_INDICATOR_4),
               M_UMTS_PDATA2_PR2(RX_BAND_INDICATOR_4),
               M_UMTS_PDATA2_PR2(RX_BAND_INDICATOR_4), /* PR2b */
               M_UMTS_PDATA2_PR3(RX_BAND_INDICATOR_4),
               M_UMTS_PDATA2_PR3(RX_BAND_INDICATOR_4)  /* PR3a */
            }
            #endif
         },
         /* CA usage */
         {0}
      }, //RxBpi structure

      /* txBpi */
      {
         /*Band_Ind_0*/
         {
            RX_BAND_INDICATOR_0,
            {
               M_UMTS_PDATA_PT1(RX_BAND_INDICATOR_0),
               M_UMTS_PDATA_PT2(RX_BAND_INDICATOR_0),
               M_UMTS_PDATA_PT2(RX_BAND_INDICATOR_0), /* PT2b */
               M_UMTS_PDATA_PT3(RX_BAND_INDICATOR_0),
               M_UMTS_PDATA_PT3(RX_BAND_INDICATOR_0)  /* PT3a */
            }
         },
         /*Band_Ind_1*/
         {
            RX_BAND_INDICATOR_1,
            {
               M_UMTS_PDATA_PT1(RX_BAND_INDICATOR_1),
               M_UMTS_PDATA_PT2(RX_BAND_INDICATOR_1),
               M_UMTS_PDATA_PT2(RX_BAND_INDICATOR_1), /* PT2b */
               M_UMTS_PDATA_PT3(RX_BAND_INDICATOR_1),
               M_UMTS_PDATA_PT3(RX_BAND_INDICATOR_1)  /* PT3a */
            }
         },
         /*Band_Ind_2*/
         {
            RX_BAND_INDICATOR_2,
            {
               M_UMTS_PDATA_PT1(RX_BAND_INDICATOR_2),
               M_UMTS_PDATA_PT2(RX_BAND_INDICATOR_2),
               M_UMTS_PDATA_PT2(RX_BAND_INDICATOR_2), /* PT2b */
               M_UMTS_PDATA_PT3(RX_BAND_INDICATOR_2),
               M_UMTS_PDATA_PT3(RX_BAND_INDICATOR_2)  /* PT3a */
            }
         },
         /*Band_Ind_3*/
         {
            RX_BAND_INDICATOR_3,
            {
               M_UMTS_PDATA_PT1(RX_BAND_INDICATOR_3),
               M_UMTS_PDATA_PT2(RX_BAND_INDICATOR_3),
               M_UMTS_PDATA_PT2(RX_BAND_INDICATOR_3), /* PT2b */
               M_UMTS_PDATA_PT3(RX_BAND_INDICATOR_3),
               M_UMTS_PDATA_PT3(RX_BAND_INDICATOR_3)  /* PT3a */
            }
         },
         /*Band_Ind_4*/
         {
            RX_BAND_INDICATOR_4,
            {
               M_UMTS_PDATA_PT1(RX_BAND_INDICATOR_4),
               M_UMTS_PDATA_PT2(RX_BAND_INDICATOR_4),
               M_UMTS_PDATA_PT2(RX_BAND_INDICATOR_4), /* PT2b */
               M_UMTS_PDATA_PT3(RX_BAND_INDICATOR_4),
               M_UMTS_PDATA_PT3(RX_BAND_INDICATOR_4)  /* PT3a */
            }
         },
         /* CA usage */
         {0}
      } //TxBpi structure
   },

   /* umtsBandIndicator */
   {
      RX_BAND_INDICATOR_0,
      RX_BAND_INDICATOR_1,
      RX_BAND_INDICATOR_2,
      RX_BAND_INDICATOR_3,
      RX_BAND_INDICATOR_4
   },

   /* sUl1dRfRxLnaPortSel */
   {
    {
      /* Band_ind_0 */
      {
         RX_BAND_INDICATOR_0,
         {M_UMTS_RX_IO(RX_BAND_INDICATOR_0), M_UMTS_RXD_IO(RX_BAND_INDICATOR_0)}
      },
      /* Band_ind_1 */
      {
         RX_BAND_INDICATOR_1,
         {M_UMTS_RX_IO(RX_BAND_INDICATOR_1), M_UMTS_RXD_IO(RX_BAND_INDICATOR_1)}
      },
      /* Band_ind_2 */
      {
         RX_BAND_INDICATOR_2,
         {M_UMTS_RX_IO(RX_BAND_INDICATOR_2), M_UMTS_RXD_IO(RX_BAND_INDICATOR_2)}
      },
      /* Band_ind_3 */
      {
         RX_BAND_INDICATOR_3,
         {M_UMTS_RX_IO(RX_BAND_INDICATOR_3), M_UMTS_RXD_IO(RX_BAND_INDICATOR_3)}
      },
      /* Band_ind_4 */
      {
         RX_BAND_INDICATOR_4,
         {M_UMTS_RX_IO(RX_BAND_INDICATOR_4), M_UMTS_RXD_IO(RX_BAND_INDICATOR_4)}
      },
      /* CA usage */
      {0}
    }
   },

   /* umtsTxPathSel */
   {
    {
      /* Band_ind_0 */
      {
         RX_BAND_INDICATOR_0,
         {M_UMTS_TX_IO(RX_BAND_INDICATOR_0),M_UMTS_TX_DET_IO(RX_BAND_INDICATOR_0)}
      },
      /* Band_ind_1 */
      {
         RX_BAND_INDICATOR_1,
         {M_UMTS_TX_IO(RX_BAND_INDICATOR_1),M_UMTS_TX_DET_IO(RX_BAND_INDICATOR_1)}
      },
      /* Band_ind_2 */
      {
         RX_BAND_INDICATOR_2,
         {M_UMTS_TX_IO(RX_BAND_INDICATOR_2),M_UMTS_TX_DET_IO(RX_BAND_INDICATOR_2)}
      },
      /* Band_ind_3 */
      {
         RX_BAND_INDICATOR_3,
         {M_UMTS_TX_IO(RX_BAND_INDICATOR_3),M_UMTS_TX_DET_IO(RX_BAND_INDICATOR_3)}
      },
      /* Band_ind_4 */
      {
         RX_BAND_INDICATOR_0,
         {M_UMTS_TX_IO(RX_BAND_INDICATOR_4),M_UMTS_TX_DET_IO(RX_BAND_INDICATOR_4)}
      },
      /* CA usage */
      {0}
    }
   },

   /* xPMU_PA_CONTROL */
   PMU_PASETTING,

#if defined (__UL1_HS_PLUS_PLATFORM__)
   /* umtsMprBackOff */
   {
      {
         MPR_BACK_OFF_HSDPA_BAND1 , MPR_BACK_OFF_HSDPA_BAND2 , MPR_BACK_OFF_HSDPA_BAND3 , MPR_BACK_OFF_HSDPA_BAND4 , MPR_BACK_OFF_HSDPA_BAND5 ,
         MPR_BACK_OFF_HSDPA_BAND6 , MPR_BACK_OFF_HSDPA_BAND7 , MPR_BACK_OFF_HSDPA_BAND8 , MPR_BACK_OFF_HSDPA_BAND9 , MPR_BACK_OFF_HSDPA_BAND10,
         MPR_BACK_OFF_HSDPA_BAND11, MPR_BACK_OFF_HSDPA_BAND12, MPR_BACK_OFF_HSDPA_BAND13, MPR_BACK_OFF_HSDPA_BAND14, MPR_BACK_OFF_HSDPA_BAND15,
         MPR_BACK_OFF_HSDPA_BAND16, MPR_BACK_OFF_HSDPA_BAND17, MPR_BACK_OFF_HSDPA_BAND18, MPR_BACK_OFF_HSDPA_BAND19, MPR_BACK_OFF_HSDPA_BAND19
      },
      {
         MPR_BACK_OFF_HSUPA_BAND1 , MPR_BACK_OFF_HSUPA_BAND2 , MPR_BACK_OFF_HSUPA_BAND3 , MPR_BACK_OFF_HSUPA_BAND4 , MPR_BACK_OFF_HSUPA_BAND5 ,
         MPR_BACK_OFF_HSUPA_BAND6 , MPR_BACK_OFF_HSUPA_BAND7 , MPR_BACK_OFF_HSUPA_BAND8 , MPR_BACK_OFF_HSUPA_BAND9 , MPR_BACK_OFF_HSUPA_BAND10,
         MPR_BACK_OFF_HSUPA_BAND11, MPR_BACK_OFF_HSUPA_BAND12, MPR_BACK_OFF_HSUPA_BAND13, MPR_BACK_OFF_HSUPA_BAND14, MPR_BACK_OFF_HSUPA_BAND15,
         MPR_BACK_OFF_HSUPA_BAND16, MPR_BACK_OFF_HSUPA_BAND17, MPR_BACK_OFF_HSUPA_BAND18, MPR_BACK_OFF_HSUPA_BAND19, MPR_BACK_OFF_HSUPA_BAND19
      }
      #if IS_3G_MPR_EXTEND_SUPPORT
      ,{ /*MPR_Setting_SUB HSUPA_MprBackOff_SUB[20][5];*/
         /*00*/{MPR_R6_B1_SUB_1  , MPR_R6_B1_SUB_2  , MPR_R6_B1_SUB_3  , MPR_R6_B1_SUB_4  , MPR_R6_B1_SUB_5 },
         /*01*/{MPR_R6_B2_SUB_1  , MPR_R6_B2_SUB_2  , MPR_R6_B2_SUB_3  , MPR_R6_B2_SUB_4  , MPR_R6_B2_SUB_5 },
         /*02*/{MPR_R6_B3_SUB_1  , MPR_R6_B3_SUB_2  , MPR_R6_B3_SUB_3  , MPR_R6_B3_SUB_4  , MPR_R6_B3_SUB_5 },
         /*03*/{MPR_R6_B4_SUB_1  , MPR_R6_B4_SUB_2  , MPR_R6_B4_SUB_3  , MPR_R6_B4_SUB_4  , MPR_R6_B4_SUB_5 },
         /*04*/{MPR_R6_B5_SUB_1  , MPR_R6_B5_SUB_2  , MPR_R6_B5_SUB_3  , MPR_R6_B5_SUB_4  , MPR_R6_B5_SUB_5 },
         /*05*/{MPR_R6_B6_SUB_1  , MPR_R6_B6_SUB_2  , MPR_R6_B6_SUB_3  , MPR_R6_B6_SUB_4  , MPR_R6_B6_SUB_5 },
         /*06*/{MPR_R6_B7_SUB_1  , MPR_R6_B7_SUB_2  , MPR_R6_B7_SUB_3  , MPR_R6_B7_SUB_4  , MPR_R6_B7_SUB_5 },
         /*07*/{MPR_R6_B8_SUB_1  , MPR_R6_B8_SUB_2  , MPR_R6_B8_SUB_3  , MPR_R6_B8_SUB_4  , MPR_R6_B8_SUB_5 },
         /*08*/{MPR_R6_B9_SUB_1  , MPR_R6_B9_SUB_2  , MPR_R6_B9_SUB_3  , MPR_R6_B9_SUB_4  , MPR_R6_B9_SUB_5 },
         /*09*/{MPR_R6_B10_SUB_1 , MPR_R6_B10_SUB_2 , MPR_R6_B10_SUB_3 , MPR_R6_B10_SUB_4 , MPR_R6_B10_SUB_5},
         /*10*/{MPR_R6_B11_SUB_1 , MPR_R6_B11_SUB_2 , MPR_R6_B11_SUB_3 , MPR_R6_B11_SUB_4 , MPR_R6_B11_SUB_5},
         /*11*/{MPR_R6_B12_SUB_1 , MPR_R6_B12_SUB_2 , MPR_R6_B12_SUB_3 , MPR_R6_B12_SUB_4 , MPR_R6_B12_SUB_5},
         /*12*/{MPR_R6_B13_SUB_1 , MPR_R6_B13_SUB_2 , MPR_R6_B13_SUB_3 , MPR_R6_B13_SUB_4 , MPR_R6_B13_SUB_5},
         /*13*/{MPR_R6_B14_SUB_1 , MPR_R6_B14_SUB_2 , MPR_R6_B14_SUB_3 , MPR_R6_B14_SUB_4 , MPR_R6_B14_SUB_5},
         /*14*/{MPR_R6_B15_SUB_1 , MPR_R6_B15_SUB_2 , MPR_R6_B15_SUB_3 , MPR_R6_B15_SUB_4 , MPR_R6_B15_SUB_5},
         /*15*/{MPR_R6_B16_SUB_1 , MPR_R6_B16_SUB_2 , MPR_R6_B16_SUB_3 , MPR_R6_B16_SUB_4 , MPR_R6_B16_SUB_5},
         /*16*/{MPR_R6_B17_SUB_1 , MPR_R6_B17_SUB_2 , MPR_R6_B17_SUB_3 , MPR_R6_B17_SUB_4 , MPR_R6_B17_SUB_5},
         /*17*/{MPR_R6_B18_SUB_1 , MPR_R6_B18_SUB_2 , MPR_R6_B18_SUB_3 , MPR_R6_B18_SUB_4 , MPR_R6_B18_SUB_5},
         /*18*/{MPR_R6_B19_SUB_1 , MPR_R6_B19_SUB_2 , MPR_R6_B19_SUB_3 , MPR_R6_B19_SUB_4 , MPR_R6_B19_SUB_5},
         /*19*/{MPR_R6_B20_SUB_1 , MPR_R6_B20_SUB_2 , MPR_R6_B20_SUB_3 , MPR_R6_B20_SUB_4 , MPR_R6_B20_SUB_5}
       },
       R6_MPR_SUB_EN,/*R6_MPR_SUB_EN*/
      #endif/*IS_3G_MPR_EXTEND_SUPPORT*/
   },
#endif

   /* RxD support bit map*/
   RX_DIVERSITY_ALWAYS_ON,

   /* Tx PA dirft compensation bit map*/
   PA_DIRFT_COMPENSATION,

   /*At MT6589+MT6320PMIC, Vrf18_1(MD1) can use bulk/LDO mode, this is the switch*/
   ULTRA_LOW_COST_EN,

   /*At MT6589/MT6280+OrionRF, temperature measurement enable switch */
   TEAMPERATURE_MEAS_EN,

   /* Baseband Idle Mode RXD Feature enable Default ON */
#if IS_3G_FORCE_IDLE_MODE_RXD_SUPPORT
   KAL_TRUE,
#else
   KAL_FALSE,
#endif

   /* VPA Mode Setting */
   VPA_FPWM_MODE,

   /* PA Section */
   PA_SECTION,

#if IS_3G_MIPI_SUPPORT
   {
      IS_3G_MIPI_ENABLE,
      MIPI_OFFSET
   },
#endif

   /* umtsCaBandIndicator */
   {
      RX_CABAND_IND_00,
      RX_CABAND_IND_01,
      RX_CABAND_IND_02,
      RX_CABAND_IND_03,
      RX_CABAND_IND_04,
   },

   /* CA RF FE usage table */
   //UMTS_FE_USAGE_T umtsCaFrontEndUsageLut[UMTS_RF_FRONT_END_NUM_MAX];
   {
      {{0,{0,0}},{{0,0},{0}},{{0,0},{0}},{{0,0},{0}}},
      {{0,{0,0}},{{0,0},{0}},{{0,0},{0}},{{0,0},{0}}},
      {{0,{0,0}},{{0,0},{0}},{{0,0},{0}},{{0,0},{0}}},
      {{0,{0,0}},{{0,0},{0}},{{0,0},{0}},{{0,0},{0}}},
      {{0,{0,0}},{{0,0},{0}},{{0,0},{0}},{{0,0},{0}}},
      {{0,{0,0}},{{0,0},{0}},{{0,0},{0}},{{0,0},{0}}},
      {{0,{0,0}},{{0,0},{0}},{{0,0},{0}},{{0,0},{0}}},
      {{0,{0,0}},{{0,0},{0}},{{0,0},{0}},{{0,0},{0}}},
      {{0,{0,0}},{{0,0},{0}},{{0,0},{0}},{{0,0},{0}}},
      {{0,{0,0}},{{0,0},{0}},{{0,0},{0}},{{0,0},{0}}}
   },

#if IS_3G_FDD_RX_PATH_SELECTION_SUPPORT
   {
      KAL_FALSE,
      ANT_RX_BOTH,
   },
#endif

#if IS_3G_ELNA_SUPPORT
      /* eLNA setting */
      {
         {
            UMTSBand1_RX_eLNA,   UMTSBand2_RX_eLNA,   UMTSBand3_RX_eLNA,   UMTSBand4_RX_eLNA,   UMTSBand5_RX_eLNA,
            UMTSBand6_RX_eLNA,   UMTSBand7_RX_eLNA,   UMTSBand8_RX_eLNA,   UMTSBand9_RX_eLNA,   UMTSBand10_RX_eLNA,
            UMTSBand11_RX_eLNA,  UMTSBand12_RX_eLNA,  UMTSBand13_RX_eLNA,  UMTSBand14_RX_eLNA,  UMTSBand15_RX_eLNA,
            UMTSBand16_RX_eLNA,  UMTSBand17_RX_eLNA,  UMTSBand18_RX_eLNA,  UMTSBand19_RX_eLNA,  UMTSBand20_RX_eLNA
         },
         {
            UMTSBand1_RXD_eLNA,   UMTSBand2_RXD_eLNA,   UMTSBand3_RXD_eLNA,   UMTSBand4_RXD_eLNA,   UMTSBand5_RXD_eLNA,
            UMTSBand6_RXD_eLNA,   UMTSBand7_RXD_eLNA,   UMTSBand8_RXD_eLNA,   UMTSBand9_RXD_eLNA,   UMTSBand10_RXD_eLNA,
            UMTSBand11_RXD_eLNA,  UMTSBand12_RXD_eLNA,  UMTSBand13_RXD_eLNA,  UMTSBand14_RXD_eLNA,  UMTSBand15_RXD_eLNA,
            UMTSBand16_RXD_eLNA,  UMTSBand17_RXD_eLNA,  UMTSBand18_RXD_eLNA,  UMTSBand19_RXD_eLNA,  UMTSBand20_RXD_eLNA
         }
      },
#endif

   BAND5_AND_BAND6_INDICATOR,
   
#if IS_3G_B5_AND_B19_INDICATOR_SUPPORT   
   BAND5_AND_BAND19_INDICATOR,
   DISABLE_B5_INDICATOR,
#endif

#if IS_3G_RX_POWER_OFFSET_SUPPORT
                {
                    RPO_3G_ENABLE,
                    RPO_3G_META_ENABLE
                },
#endif
   /* End Pattern */
   0xABCD1234
};

#if __IS_UL1D_DPD_SUPPORT__
U_sUl1dDpdCustomInputData UMTS_DPD_CUSTOM_INPUT_DATA_PCORE =
{
   /*U_Ul1D_PCFE_DPD_OTFC_NONCUSTOM_PARA_T*/
   {
      /*U_DPD_OTFC_NONCUSTOM_PARA_T*/
      {
         1, /*en_dpd_am_track*/
         0, /*en_dpd_pm_track*/
         0, /*en_force_dpd_default_lut*/
         1, /*en_dpd_coarse_tde*/
         1, /*en_dpd_fine_tde*/
      },
      /*U_PCFE_NONCUSTOM_PARA_T*/
      {
         0,  /*op_mode_force_en*/
         0,  /*op_mode_force_mode*/
      },
   },
   {
      /*U_UL1D_PCFE_DPD_OTFC_CUSTOM_PARA_T*/
      //dpd_apt_temperature_th_by_rfic
      {
         { 0x41 , 0x41 }
      },
      /*U_PCFE_CUSTOM_PARA_T*/
      //reserved0
      {0},
      
      /* PCFE power threshold form DPD mode to linear mode */
      0x0A00,
      /* PCFE power threshold form linear mode to DPD mode */
      0x0B00,
   }
};

DPD_ENABLE_E UMTS_DPD_ENABLE_PCORE = IS_WCDMA_DPD_ENABLE_SetDefault;

#endif

#if IS_3G_TAS_UL1_CUSTOM_SUPPORT
UMTS_CUSTOM_TAS_FE_DATABASE_T UMTS_TAS_FE_DATABASE_SetDefault = 
{
   {{{0}}}, {{{0}}}, {{{0}}}
};

UMTS_CUSTOM_TAS_FEATURE_BY_RAT_T UMTS_TAS_FEATURE_BY_RAT_SetDefault = 
{
   UMTS_TAS_VERSION(SetDefault),
   {
    UMTS_TAS_FORCE_ENABLE(SetDefault),
    UMTS_TAS_FORCE_INIT_SETTING(SetDefault)
   },
   UMTS_TAS_ICS_INIT_ANT_STATE(SetDefault),
   UMTS_TAS_ENABLE_ON_REAL_SIM(SetDefault),
   UMTS_TAS_ENABLE_ON_TEST_SIM(SetDefault),
};
#if IS_3G_TAS_TST_SUPPORT
UMTS_CUSTOM_TAS_TST_FE_ROUTE_DATABASE_T UMTS_TAS_TST_FE_ROUTE_DATABASE_PCORE = 
{
   UMTS_TAS_TST_ENABLE_BY_RAT(SetDefault),
   {
   /*Index  1*/ UMTS_SB_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR0_SetDefault  , SetDefault ) ,
   /*Index  2*/ UMTS_SB_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR1_SetDefault  , SetDefault ) ,
   /*Index  3*/ UMTS_SB_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR2_SetDefault  , SetDefault ) ,
   /*Index  4*/ UMTS_SB_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR3_SetDefault  , SetDefault ) ,
   /*Index  5*/ UMTS_SB_TAS_TST_CONFIGURE( BAND_TAS_INDICATOR4_SetDefault  , SetDefault ) ,
   }
};
#endif
#endif

#if IS_3G_DAT_UL1_CUSTOM_SUPPORT
UMTS_CUSTOM_DAT_FE_DATABASE_T UMTS_DAT_FE_DATABASE_SetDefault = 
{
   {{{0}}}, {{{0}}}
};

UMTS_CUSTOM_DAT_FEATURE_BY_RAT_T UMTS_DAT_FEATURE_BY_RAT_SetDefault = 
{
   UMTS_DAT_FEATURE_ENABLE(SetDefault),  
   UMTS_DAT_SCENARIO_DEFAULT
};
#endif

//Power on CAL
const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T UMTSBandNone_PWRON_CAL_DATA =
{
   0, //Verno
   UMTSBandNone,
   {
       /* RX IRR HPM*/
       UMTS_RX_IRR_HPM_Default,
       /* RX IRR LPM*/
       UMTS_RX_IRR_LPM_Default,
       /* RX RF DC HPM*/
       UMTS_RX_DC_RF_HPM_Default,
       /* RX RF DC LPM*/
       UMTS_RX_DC_RF_LPM_Default,
       /* RX DIG DC HPM*/
       UMTS_RX_DC_Dig_HPM_Default,
       /* RX DIG DC LPM*/
       UMTS_RX_DC_Dig_LPM_Default,
       /* RX IIP2 */
       UMTS_RX_IIP2_Default,
   }, //wcdma_rx_comp

   {
    UMTS_DET_CDCOC_DEFAULT, //det_coarse_dcoc_cw807
    UMTS_DET_CDCOC_DEFAULT, //det_coarse_dcoc_cw808
    { /* MMRFC_DET_FE_GAIN_STEPS = 2 */
      {
         UMTS_Det_Iq_MG_SC_Comp_Default,
         UMTS_Det_Iq_MG_DC_Comp_Default,
      },
      {
         UMTS_Det_Iq_LG_SC_Comp_Default,
         UMTS_Det_Iq_LG_DC_Comp_Default,
      },
    },
    {{0,0}}, //det_dc , MMRFC_DET_GAIN_STEPS = 15
    UMTS_DET_DNL_Default,     //det_dnl, MMRFC_DET_GAIN_STEPS = 15
    { /* MMRFC_DET_FE_GAIN_STEPS = 2 */
      {
         UMTS_Det_Iq_MG_SC_Comp_Default,
         UMTS_Det_Iq_MG_DC_Comp_Default,
      },
      {
         UMTS_Det_Iq_LG_SC_Comp_Default,
         UMTS_Det_Iq_LG_DC_Comp_Default,
      },
    },
    {{0,0}}, //det_dc , MMRFC_DET_GAIN_STEPS =15
    UMTS_DET_DNL_Default,//det_dnl, MMRFC_DET_GAIN_STEPS = 15
  },

    {
      0,             //tx_lo: no use
      0,             //tx_lo_ind
      0x2C,          //tx_lo_capcal_peak_cap
      0x0F,          //tx_lo_in_bias_hpm
      0x0F,          //tx_lo_in_bias_lpm
      0,             //stx_delta_duty_cycle
      {160,128},     //tx_rc_lpf
      21,            //tx_rc_rcf
      {{0,0}},       //tx_iq_lin
      {{0,0}},       //tx_dc_lin
      {{0,0}},       //tx_iq_dpd
      {{0,0}},       //tx_dc_dpd
      UMTS_TX_DNL_PGA_A_Default, //tx_dnl_pga_a
      UMTS_TX_DNL_PGA_B_Default, //tx_dnl_pga_b
      { /*MMRFC_UMTS_TX_CBW_NUM = 2*/
         TX_FDIQ_5Tap_COMP_DEFAULT,
         TX_FDIQ_7Tap_COMP_DEFAULT,
      }, //tx_fdiq_lin_1
      {    /*MMRFC_UMTS_TX_CBW_NUM = 2*/
         TX_FDIQ_5Tap_COMP_DEFAULT,
         TX_FDIQ_7Tap_COMP_DEFAULT,
      }, //tx_fdiq_lin_2
      {
        /*tx_ga_w_ET*/
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
      },
      {
        /*tx_ga_wo_ET*/
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
      },
      UMTS_TX_PGA_PHASE_Default,
      UMTS_TX_PGA_AB_Default, //pga_gain_step : MMRFC_TX_PGA_GAIN_STEP_SUBBAND_NUM * MMRFC_TX_PGA_GAIN_STEP_NUM
      5, //cap_tuning_pga_a
      14, //cap_tuning_pga_b
    },
};

const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T UMTSBand1_PWRON_CAL_DATA =
{
   0, //Verno
   UMTSBand1,
   {
       /* RX IRR HPM*/
       UMTS_RX_IRR_HPM_Default,
       /* RX IRR LPM*/
       UMTS_RX_IRR_LPM_Default,
       /* RX RF DC HPM*/
       UMTS_RX_DC_RF_HPM_Default,
       /* RX RF DC LPM*/
       UMTS_RX_DC_RF_LPM_Default,
       /* RX DIG DC HPM*/
       UMTS_RX_DC_Dig_HPM_Default,
       /* RX DIG DC LPM*/
       UMTS_RX_DC_Dig_LPM_Default,
       /* RX IIP2 */
       UMTS_RX_IIP2_Default,
   }, //wcdma_rx_comp

   {
    UMTS_DET_CDCOC_DEFAULT, //det_coarse_dcoc_cw807
    UMTS_DET_CDCOC_DEFAULT, //det_coarse_dcoc_cw808
    { /* MMRFC_DET_FE_GAIN_STEPS = 2 */
      {
         UMTS_Det_Iq_MG_SC_Comp_Default,
         UMTS_Det_Iq_MG_DC_Comp_Default,
      },
      {
         UMTS_Det_Iq_LG_SC_Comp_Default,
         UMTS_Det_Iq_LG_DC_Comp_Default,
      },
    },
    {{0,0}}, //det_dc , MMRFC_DET_GAIN_STEPS = 15
    UMTS_DET_DNL_Default,     //det_dnl, MMRFC_DET_GAIN_STEPS = 15
    { /* MMRFC_DET_FE_GAIN_STEPS = 2 */
      {
         UMTS_Det_Iq_MG_SC_Comp_Default,
         UMTS_Det_Iq_MG_DC_Comp_Default,
      },
      {
         UMTS_Det_Iq_LG_SC_Comp_Default,
         UMTS_Det_Iq_LG_DC_Comp_Default,
      },
    },
    {{0,0}}, //det_dc , MMRFC_DET_GAIN_STEPS =15
    UMTS_DET_DNL_Default,//det_dnl, MMRFC_DET_GAIN_STEPS = 15
  },

    {
#if IS_URF_MT6177L
      0,             //tx_lo: no use
      0,             //tx_lo_ind
      0x24,          //tx_lo_capcal_peak_cap
      0x20,          //tx_lo_in_bias_hpm
      0x20,          //tx_lo_in_bias_lpm
#elif IS_URF_MT6173
      0,             //tx_lo: no use
      1,             //tx_lo_ind
      0xF,           //tx_lo_capcal_peak_cap
      0x8,           //tx_lo_in_bias_hpm
      0x8,           //tx_lo_in_bias_lpm
#else
 #error
#endif
      0,             //stx_delta_duty_cycle
      UMTS_RC_LPF_DEFAULT,            //tx_rc_lpf
      UMTS_RC_RCF_DEFAULT,            //tx_rc_rcf
      {{0,0}},       //tx_iq_lin
      {{0,0}},       //tx_dc_lin
      {{0,0}},       //tx_iq_dpd
      {{0,0}},       //tx_dc_dpd
      UMTS_TX_DNL_PGA_A_Default, //tx_dnl_pga_a
      UMTS_TX_DNL_PGA_B_Default, //tx_dnl_pga_b
      { /*MMRFC_UMTS_TX_CBW_NUM = 2*/
         TX_FDIQ_5Tap_COMP_DEFAULT,
         TX_FDIQ_7Tap_COMP_DEFAULT,
      }, //tx_fdiq_lin_1
      {    /*MMRFC_UMTS_TX_CBW_NUM = 2*/
         TX_FDIQ_5Tap_COMP_DEFAULT,
         TX_FDIQ_7Tap_COMP_DEFAULT,
      }, //tx_fdiq_lin_2
      {
        /*tx_ga_w_ET*/
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
      },
      {
        /*tx_ga_wo_ET*/
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
      },
      UMTS_TX_PGA_PHASE_Default,
      UMTS_TX_PGA_AB_Default, //pga_gain_step : MMRFC_TX_PGA_GAIN_STEP_SUBBAND_NUM * MMRFC_TX_PGA_GAIN_STEP_NUM
#if IS_URF_MT6177L
      0x8, //cap_tuning_pga_a     
      0xB, //cap_tuning_pga_b
#elif IS_URF_MT6173
      0xB, //cap_tuning_pga_a 	
      0xB, //cap_tuning_pga_b
#else
 #error
#endif
    },
};

const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T UMTSBand2_PWRON_CAL_DATA =
{
   0, //Verno
   UMTSBand2,
   {
       /* RX IRR HPM*/
       UMTS_RX_IRR_HPM_Default,
       /* RX IRR LPM*/
       UMTS_RX_IRR_LPM_Default,
       /* RX RF DC HPM*/
       UMTS_RX_DC_RF_HPM_Default,
       /* RX RF DC LPM*/
       UMTS_RX_DC_RF_LPM_Default,
       /* RX DIG DC HPM*/
       UMTS_RX_DC_Dig_HPM_Default,
       /* RX DIG DC LPM*/
       UMTS_RX_DC_Dig_LPM_Default,
       /* RX IIP2 */
       UMTS_RX_IIP2_Default,
   },

  {
    UMTS_DET_CDCOC_DEFAULT, //det_coarse_dcoc_cw807
    UMTS_DET_CDCOC_DEFAULT, //det_coarse_dcoc_cw808
    { /* MMRFC_DET_FE_GAIN_STEPS = 2 */
      {
         UMTS_Det_Iq_MG_SC_Comp_Default,
         UMTS_Det_Iq_MG_DC_Comp_Default,
      },
      {
         UMTS_Det_Iq_LG_SC_Comp_Default,
         UMTS_Det_Iq_LG_DC_Comp_Default,
      },
    },
    {{0,0}}, //det_dc , MMRFC_DET_GAIN_STEPS = 15
    UMTS_DET_DNL_Default,     //det_dnl, MMRFC_DET_GAIN_STEPS = 15
    { /* MMRFC_DET_FE_GAIN_STEPS = 2 */
      {
         UMTS_Det_Iq_MG_SC_Comp_Default,
         UMTS_Det_Iq_MG_DC_Comp_Default,
      },
      {
         UMTS_Det_Iq_LG_SC_Comp_Default,
         UMTS_Det_Iq_LG_DC_Comp_Default,
      },
    },
    {{0,0}}, //det_dc , MMRFC_DET_GAIN_STEPS =15
    UMTS_DET_DNL_Default,//det_dnl, MMRFC_DET_GAIN_STEPS = 15
  },

    {
#if IS_URF_MT6177L
      0,             //tx_lo: no use
      0,             //tx_lo_ind
      0x34,          //tx_lo_capcal_peak_cap
      0x22,          //tx_lo_in_bias_hpm
      0x22,          //tx_lo_in_bias_lpm
#elif IS_URF_MT6173
      0,             //tx_lo: no use
      1,             //tx_lo_ind
      0x17,          //tx_lo_capcal_peak_cap
      0xC,           //tx_lo_in_bias_hpm
      0xC,           //tx_lo_in_bias_lpm
#else
 #error
#endif
      0,             //stx_delta_duty_cycle
      UMTS_RC_LPF_DEFAULT,            //tx_rc_lpf
      UMTS_RC_RCF_DEFAULT,            //tx_rc_rcf
      {{0,0}},       //tx_iq_lin
      {{0,0}},       //tx_dc_lin
      {{0,0}},       //tx_iq_dpd
      {{0,0}},       //tx_dc_dpd
      UMTS_TX_DNL_PGA_A_Default, //tx_dnl_pga_a
      UMTS_TX_DNL_PGA_B_Default, //tx_dnl_pga_b
      { /*MMRFC_UMTS_TX_CBW_NUM = 2*/
         TX_FDIQ_5Tap_COMP_DEFAULT,
         TX_FDIQ_7Tap_COMP_DEFAULT,
      }, //tx_fdiq_lin_1
      {    /*MMRFC_UMTS_TX_CBW_NUM = 2*/
         TX_FDIQ_5Tap_COMP_DEFAULT,
         TX_FDIQ_7Tap_COMP_DEFAULT,
      }, //tx_fdiq_lin_2
      {
        /*tx_ga_w_ET*/
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
      },
      {
        /*tx_ga_wo_ET*/
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
      },
      UMTS_TX_PGA_PHASE_Default,
      UMTS_TX_PGA_AB_Default, //pga_gain_step : MMRFC_TX_PGA_GAIN_STEP_SUBBAND_NUM * MMRFC_TX_PGA_GAIN_STEP_NUM
#if IS_URF_MT6177L
      0xC, //cap_tuning_pga_a
      0xE, //cap_tuning_pga_b
#elif IS_URF_MT6173
      0xF, //cap_tuning_pga_a 	
      0xF, //cap_tuning_pga_b
#else
 #error
#endif
    },
};

const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T UMTSBand3_PWRON_CAL_DATA =
{
   0, //Verno
   UMTSBand3,
   {
       /* RX IRR HPM*/
       UMTS_RX_IRR_HPM_Default,
       /* RX IRR LPM*/
       UMTS_RX_IRR_LPM_Default,
       /* RX RF DC HPM*/
       UMTS_RX_DC_RF_HPM_Default,
       /* RX RF DC LPM*/
       UMTS_RX_DC_RF_LPM_Default,
       /* RX DIG DC HPM*/
       UMTS_RX_DC_Dig_HPM_Default,
       /* RX DIG DC LPM*/
       UMTS_RX_DC_Dig_LPM_Default,
       /* RX IIP2 */
       UMTS_RX_IIP2_Default,
   }, //wcdma_rx_comp

   {
    UMTS_DET_CDCOC_DEFAULT, //det_coarse_dcoc_cw807
    UMTS_DET_CDCOC_DEFAULT, //det_coarse_dcoc_cw808
    { /* MMRFC_DET_FE_GAIN_STEPS = 2 */
      {
         UMTS_Det_Iq_MG_SC_Comp_Default,
         UMTS_Det_Iq_MG_DC_Comp_Default,
      },
      {
         UMTS_Det_Iq_LG_SC_Comp_Default,
         UMTS_Det_Iq_LG_DC_Comp_Default,
      },
    },
    {{0,0}}, //det_dc , MMRFC_DET_GAIN_STEPS = 15
    UMTS_DET_DNL_Default,     //det_dnl, MMRFC_DET_GAIN_STEPS = 15
    { /* MMRFC_DET_FE_GAIN_STEPS = 2 */
      {
         UMTS_Det_Iq_MG_SC_Comp_Default,
         UMTS_Det_Iq_MG_DC_Comp_Default,
      },
      {
         UMTS_Det_Iq_LG_SC_Comp_Default,
         UMTS_Det_Iq_LG_DC_Comp_Default,
      },
    },
    {{0,0}}, //det_dc , MMRFC_DET_GAIN_STEPS =15
    UMTS_DET_DNL_Default,//det_dnl, MMRFC_DET_GAIN_STEPS = 15
  },

    {
#if IS_URF_MT6177L
      0,             //tx_lo: no use
      0,             //tx_lo_ind
      0x51,          //tx_lo_capcal_peak_cap
      0x1D,          //tx_lo_in_bias_hpm
      0x1D,          //tx_lo_in_bias_lpm
#elif IS_URF_MT6173
      0,             //tx_lo: no use
      1,             //tx_lo_ind
      0x29,          //tx_lo_capcal_peak_cap
      0xF,           //tx_lo_in_bias_hpm
      0xF,           //tx_lo_in_bias_lpm
#else
 #error
#endif
      0,             //stx_delta_duty_cycle
      UMTS_RC_LPF_DEFAULT,            //tx_rc_lpf
      UMTS_RC_RCF_DEFAULT,            //tx_rc_rcf
      {{0,0}},       //tx_iq_lin
      {{0,0}},       //tx_dc_lin
      {{0,0}},       //tx_iq_dpd
      {{0,0}},       //tx_dc_dpd
      UMTS_TX_DNL_PGA_A_Default, //tx_dnl_pga_a
      UMTS_TX_DNL_PGA_B_Default, //tx_dnl_pga_b
      { /*MMRFC_UMTS_TX_CBW_NUM = 2*/
         TX_FDIQ_5Tap_COMP_DEFAULT,
         TX_FDIQ_7Tap_COMP_DEFAULT,  
      }, //tx_fdiq_lin_1
      {    /*MMRFC_UMTS_TX_CBW_NUM = 2*/
         TX_FDIQ_5Tap_COMP_DEFAULT,
         TX_FDIQ_7Tap_COMP_DEFAULT, 
      }, //tx_fdiq_lin_2
      {
        /*tx_ga_w_ET*/
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
      },
      {
        /*tx_ga_wo_ET*/
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
      },
      UMTS_TX_PGA_PHASE_Default,
      UMTS_TX_PGA_AB_Default, //pga_gain_step : MMRFC_TX_PGA_GAIN_STEP_SUBBAND_NUM * MMRFC_TX_PGA_GAIN_STEP_NUM
#if IS_URF_MT6177L
      0x13, //cap_tuning_pga_a
      0x15, //cap_tuning_pga_b
#elif IS_URF_MT6173
      0x17, //cap_tuning_pga_a  
      0x17, //cap_tuning_pga_b
#else
 #error
#endif		   
    },
};

const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T UMTSBand4_PWRON_CAL_DATA =
{
   0, //Verno
   UMTSBand4,
   {
       /* RX IRR HPM*/
       UMTS_RX_IRR_HPM_Default,
       /* RX IRR LPM*/
       UMTS_RX_IRR_LPM_Default,
       /* RX RF DC HPM*/
       UMTS_RX_DC_RF_HPM_Default,
       /* RX RF DC LPM*/
       UMTS_RX_DC_RF_LPM_Default,
       /* RX DIG DC HPM*/
       UMTS_RX_DC_Dig_HPM_Default,
       /* RX DIG DC LPM*/
       UMTS_RX_DC_Dig_LPM_Default,
       /* RX IIP2 */
       UMTS_RX_IIP2_Default,
   },
  {
    UMTS_DET_CDCOC_DEFAULT, //det_coarse_dcoc_cw807
    UMTS_DET_CDCOC_DEFAULT, //det_coarse_dcoc_cw808
    { /* MMRFC_DET_FE_GAIN_STEPS = 2 */
      {
         UMTS_Det_Iq_MG_SC_Comp_Default,
         UMTS_Det_Iq_MG_DC_Comp_Default,
      },
      {
         UMTS_Det_Iq_LG_SC_Comp_Default,
         UMTS_Det_Iq_LG_DC_Comp_Default,
      },
    },
    {{0,0}}, //det_dc , MMRFC_DET_GAIN_STEPS = 15
    UMTS_DET_DNL_Default,     //det_dnl, MMRFC_DET_GAIN_STEPS = 15
    { /* MMRFC_DET_FE_GAIN_STEPS = 2 */
      {
         UMTS_Det_Iq_MG_SC_Comp_Default,
         UMTS_Det_Iq_MG_DC_Comp_Default,
      },
      {
         UMTS_Det_Iq_LG_SC_Comp_Default,
         UMTS_Det_Iq_LG_DC_Comp_Default,
      },
    },
    {{0,0}}, //det_dc , MMRFC_DET_GAIN_STEPS =15
    UMTS_DET_DNL_Default,//det_dnl, MMRFC_DET_GAIN_STEPS = 15
  },

    {
#if IS_URF_MT6177L
	  0,             //tx_lo: no use
      0,             //tx_lo_ind
      0x51,          //tx_lo_capcal_peak_cap
      0x1D,          //tx_lo_in_bias_hpm
      0x1D,          //tx_lo_in_bias_lpm
#elif IS_URF_MT6173
      0,             //tx_lo: no use
      1,             //tx_lo_ind
      0x2B,          //tx_lo_capcal_peak_cap
      0xF,           //tx_lo_in_bias_hpm
      0xF,           //tx_lo_in_bias_lpm
#else
 #error
#endif
      0,             //stx_delta_duty_cycle
      UMTS_RC_LPF_DEFAULT,            //tx_rc_lpf
      UMTS_RC_RCF_DEFAULT,            //tx_rc_rcf
      {{0,0}},       //tx_iq_lin
      {{0,0}},       //tx_dc_lin
      {{0,0}},       //tx_iq_dpd
      {{0,0}},       //tx_dc_dpd
      UMTS_TX_DNL_PGA_A_Default, //tx_dnl_pga_a
      UMTS_TX_DNL_PGA_B_Default, //tx_dnl_pga_b
      { /*MMRFC_UMTS_TX_CBW_NUM = 2*/
         TX_FDIQ_5Tap_COMP_DEFAULT,
         TX_FDIQ_7Tap_COMP_DEFAULT, 
      }, //tx_fdiq_lin_1
      {    /*MMRFC_UMTS_TX_CBW_NUM = 2*/
         TX_FDIQ_5Tap_COMP_DEFAULT,
         TX_FDIQ_7Tap_COMP_DEFAULT, 
      }, //tx_fdiq_lin_2
      {
        /*tx_ga_w_ET*/
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
      },
      {
        /*tx_ga_wo_ET*/
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
      },
      UMTS_TX_PGA_PHASE_Default,
      UMTS_TX_PGA_AB_Default, //pga_gain_step : MMRFC_TX_PGA_GAIN_STEP_SUBBAND_NUM * MMRFC_TX_PGA_GAIN_STEP_NUM
#if IS_URF_MT6177L
      0x13, //cap_tuning_pga_a
      0x15, //cap_tuning_pga_b
#elif IS_URF_MT6173
      0x18, //cap_tuning_pga_a 	
      0x18, //cap_tuning_pga_b
#else
 #error
#endif
    },
};

const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T UMTSBand5_PWRON_CAL_DATA =
{
   0, //Verno
   UMTSBand5,
   {
       /* RX IRR HPM*/
       UMTS_RX_IRR_HPM_Default,
       /* RX IRR LPM*/
       UMTS_RX_IRR_LPM_Default,
       /* RX RF DC HPM*/
       UMTS_RX_DC_RF_HPM_Default,
       /* RX RF DC LPM*/
       UMTS_RX_DC_RF_LPM_Default,
       /* RX DIG DC HPM*/
       UMTS_RX_DC_Dig_HPM_Default,
       /* RX DIG DC LPM*/
       UMTS_RX_DC_Dig_LPM_Default,
       /* RX IIP2 */
       UMTS_RX_IIP2_Default,
   },
  {
    UMTS_DET_CDCOC_DEFAULT, //det_coarse_dcoc_cw807
    UMTS_DET_CDCOC_DEFAULT, //det_coarse_dcoc_cw808
    { /* MMRFC_DET_FE_GAIN_STEPS = 2 */
      {
         UMTS_Det_Iq_MG_SC_Comp_Default,
         UMTS_Det_Iq_MG_DC_Comp_Default,
      },
      {
         UMTS_Det_Iq_LG_SC_Comp_Default,
         UMTS_Det_Iq_LG_DC_Comp_Default,
      },
    },
    {{0,0}}, //det_dc , MMRFC_DET_GAIN_STEPS = 15
    UMTS_DET_DNL_Default,     //det_dnl, MMRFC_DET_GAIN_STEPS = 15
    { /* MMRFC_DET_FE_GAIN_STEPS = 2 */
      {
         UMTS_Det_Iq_MG_SC_Comp_Default,
         UMTS_Det_Iq_MG_DC_Comp_Default,
      },
      {
         UMTS_Det_Iq_LG_SC_Comp_Default,
         UMTS_Det_Iq_LG_DC_Comp_Default,
      },
    },
    {{0,0}}, //det_dc , MMRFC_DET_GAIN_STEPS =15
    UMTS_DET_DNL_Default,//det_dnl, MMRFC_DET_GAIN_STEPS = 15
  },

    {
#if IS_URF_MT6177L
      0,             //tx_lo: no use
      0,             //tx_lo_ind
      0x0,           //tx_lo_capcal_peak_cap
      0x0,           //tx_lo_in_bias_hpm
      0x0,           //tx_lo_in_bias_lpm
#elif IS_URF_MT6173
      0,             //tx_lo: no use
      1,             //tx_lo_ind
      0x24,          //tx_lo_capcal_peak_cap
      0xE,           //tx_lo_in_bias_hpm
      0xE,           //tx_lo_in_bias_lpm
#else
 #error
#endif
      0,             //stx_delta_duty_cycle
      UMTS_RC_LPF_DEFAULT,            //tx_rc_lpf
      UMTS_RC_RCF_DEFAULT,            //tx_rc_rcf
      {{0,0}},       //tx_iq_lin
      {{0,0}},       //tx_dc_lin
      {{0,0}},       //tx_iq_dpd
      {{0,0}},       //tx_dc_dpd
      UMTS_TX_DNL_PGA_A_Default, //tx_dnl_pga_a
      UMTS_TX_DNL_PGA_B_Default, //tx_dnl_pga_b
      { /*MMRFC_UMTS_TX_CBW_NUM = 2*/
         TX_FDIQ_5Tap_COMP_DEFAULT,
         TX_FDIQ_7Tap_COMP_DEFAULT, 
      }, //tx_fdiq_lin_1
      {    /*MMRFC_UMTS_TX_CBW_NUM = 2*/
         TX_FDIQ_5Tap_COMP_DEFAULT,
         TX_FDIQ_7Tap_COMP_DEFAULT, 
      }, //tx_fdiq_lin_2
      {
        /*tx_ga_w_ET*/
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
      },
      {
        /*tx_ga_wo_ET*/
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
      },
      UMTS_TX_PGA_PHASE_Default,
      UMTS_TX_PGA_AB_Default, //pga_gain_step : MMRFC_TX_PGA_GAIN_STEP_SUBBAND_NUM * MMRFC_TX_PGA_GAIN_STEP_NUM
#if IS_URF_MT6177L
      0xC, //cap_tuning_pga_a
      0xA, //cap_tuning_pga_b
#elif IS_URF_MT6173
      0x11, //cap_tuning_pga_a 	
      0x11, //cap_tuning_pga_b
#else
 #error
#endif   
    },
};

const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T UMTSBand6_PWRON_CAL_DATA =
{
   0, //Verno
   UMTSBand6,
   {
       /* RX IRR HPM*/
       UMTS_RX_IRR_HPM_Default,
       /* RX IRR LPM*/
       UMTS_RX_IRR_LPM_Default,
       /* RX RF DC HPM*/
       UMTS_RX_DC_RF_HPM_Default,
       /* RX RF DC LPM*/
       UMTS_RX_DC_RF_LPM_Default,
       /* RX DIG DC HPM*/
       UMTS_RX_DC_Dig_HPM_Default,
       /* RX DIG DC LPM*/
       UMTS_RX_DC_Dig_LPM_Default,
       /* RX IIP2 */
       UMTS_RX_IIP2_Default,
   },
  {
    UMTS_DET_CDCOC_DEFAULT, //det_coarse_dcoc_cw807
    UMTS_DET_CDCOC_DEFAULT, //det_coarse_dcoc_cw808
    { /* MMRFC_DET_FE_GAIN_STEPS = 2 */
      {
         UMTS_Det_Iq_MG_SC_Comp_Default,
         UMTS_Det_Iq_MG_DC_Comp_Default,
      },
      {
         UMTS_Det_Iq_LG_SC_Comp_Default,
         UMTS_Det_Iq_LG_DC_Comp_Default,
      },
    },
    {{0,0}}, //det_dc , MMRFC_DET_GAIN_STEPS = 15
    UMTS_DET_DNL_Default,     //det_dnl, MMRFC_DET_GAIN_STEPS = 15
    { /* MMRFC_DET_FE_GAIN_STEPS = 2 */
      {
         UMTS_Det_Iq_MG_SC_Comp_Default,
         UMTS_Det_Iq_MG_DC_Comp_Default,
      },
      {
         UMTS_Det_Iq_LG_SC_Comp_Default,
         UMTS_Det_Iq_LG_DC_Comp_Default,
      },
    },
    {{0,0}}, //det_dc , MMRFC_DET_GAIN_STEPS =15
    UMTS_DET_DNL_Default,//det_dnl, MMRFC_DET_GAIN_STEPS = 15
  },

    {
#if IS_URF_MT6177L
	  0,             //tx_lo: no use
      0,             //tx_lo_ind
      0x0,           //tx_lo_capcal_peak_cap
      0x0,           //tx_lo_in_bias_hpm
      0x0,           //tx_lo_in_bias_lpm
#elif IS_URF_MT6173
      0,             //tx_lo: no use
      1,             //tx_lo_ind
      0x25,          //tx_lo_capcal_peak_cap
      0xE,           //tx_lo_in_bias_hpm
      0xE,           //tx_lo_in_bias_lpm
#else
 #error
#endif
      0,             //stx_delta_duty_cycle
      UMTS_RC_LPF_DEFAULT,            //tx_rc_lpf
      UMTS_RC_RCF_DEFAULT,            //tx_rc_rcf
      {{0,0}},       //tx_iq_lin
      {{0,0}},       //tx_dc_lin
      {{0,0}},       //tx_iq_dpd
      {{0,0}},       //tx_dc_dpd
      UMTS_TX_DNL_PGA_A_Default, //tx_dnl_pga_a
      UMTS_TX_DNL_PGA_B_Default, //tx_dnl_pga_b
      { /*MMRFC_UMTS_TX_CBW_NUM = 2*/
         TX_FDIQ_5Tap_COMP_DEFAULT,
         TX_FDIQ_7Tap_COMP_DEFAULT, 
      }, //tx_fdiq_lin_1
      {    /*MMRFC_UMTS_TX_CBW_NUM = 2*/
         TX_FDIQ_5Tap_COMP_DEFAULT,
         TX_FDIQ_7Tap_COMP_DEFAULT, 
      }, //tx_fdiq_lin_2
      {
        /*tx_ga_w_ET*/
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
      },
      {
        /*tx_ga_wo_ET*/
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
      },
      UMTS_TX_PGA_PHASE_Default,
      UMTS_TX_PGA_AB_Default, //pga_gain_step : MMRFC_TX_PGA_GAIN_STEP_SUBBAND_NUM * MMRFC_TX_PGA_GAIN_STEP_NUM
#if IS_URF_MT6177L
      0xC,  //cap_tuning_pga_a
      0xA,  //cap_tuning_pga_b
#elif IS_URF_MT6173
      0x11, //cap_tuning_pga_a 	
      0x11, //cap_tuning_pga_b
#else
 #error
#endif
    },
};

const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T UMTSBand8_PWRON_CAL_DATA =
{
   0, //Verno
   UMTSBand8,
   {
       /* RX IRR HPM*/
       UMTS_RX_IRR_HPM_Default,
       /* RX IRR LPM*/
       UMTS_RX_IRR_LPM_Default,
       /* RX RF DC HPM*/
       UMTS_RX_DC_RF_HPM_Default,
       /* RX RF DC LPM*/
       UMTS_RX_DC_RF_LPM_Default,
       /* RX DIG DC HPM*/
       UMTS_RX_DC_Dig_HPM_Default,
       /* RX DIG DC LPM*/
       UMTS_RX_DC_Dig_LPM_Default,
       /* RX IIP2 */
       UMTS_RX_IIP2_Default,
   },

  {
    UMTS_DET_CDCOC_DEFAULT, //det_coarse_dcoc_cw807
    UMTS_DET_CDCOC_DEFAULT, //det_coarse_dcoc_cw808
    { /* MMRFC_DET_FE_GAIN_STEPS = 2 */
      {
         UMTS_Det_Iq_MG_SC_Comp_Default,
         UMTS_Det_Iq_MG_DC_Comp_Default,
      },
      {
         UMTS_Det_Iq_LG_SC_Comp_Default,
         UMTS_Det_Iq_LG_DC_Comp_Default,
      },
    },
    {{0,0}}, //det_dc , MMRFC_DET_GAIN_STEPS = 15
    UMTS_DET_DNL_Default,     //det_dnl, MMRFC_DET_GAIN_STEPS = 15
    { /* MMRFC_DET_FE_GAIN_STEPS = 2 */
      {
         UMTS_Det_Iq_MG_SC_Comp_Default,
         UMTS_Det_Iq_MG_DC_Comp_Default,
      },
      {
         UMTS_Det_Iq_LG_SC_Comp_Default,
         UMTS_Det_Iq_LG_DC_Comp_Default,
      },
    },
    {{0,0}}, //det_dc , MMRFC_DET_GAIN_STEPS =15
    UMTS_DET_DNL_Default,//det_dnl, MMRFC_DET_GAIN_STEPS = 15
  },

    {
#if IS_URF_MT6177L
      0,             //tx_lo: no use
      0,             //tx_lo_ind
      0x0,           //tx_lo_capcal_peak_cap
      0x0,           //tx_lo_in_bias_hpm
      0x0,           //tx_lo_in_bias_lpm
#elif IS_URF_MT6173
      0,             //tx_lo: no use
      1,             //tx_lo_ind
      0x14,          //tx_lo_capcal_peak_cap
      0xC,           //tx_lo_in_bias_hpm
      0xC,           //tx_lo_in_bias_lpm
#else
 #error
#endif
      0,             //stx_delta_duty_cycle
      UMTS_RC_LPF_DEFAULT,            //tx_rc_lpf
      UMTS_RC_RCF_DEFAULT,            //tx_rc_rcf
      {{0,0}},       //tx_iq_lin
      {{0,0}},       //tx_dc_lin
      {{0,0}},       //tx_iq_dpd
      {{0,0}},       //tx_dc_dpd
      UMTS_TX_DNL_PGA_A_Default, //tx_dnl_pga_a
      UMTS_TX_DNL_PGA_B_Default, //tx_dnl_pga_b
      { /*MMRFC_UMTS_TX_CBW_NUM = 2*/
         TX_FDIQ_5Tap_COMP_DEFAULT,
         TX_FDIQ_7Tap_COMP_DEFAULT, 
      }, //tx_fdiq_lin_1
      {    /*MMRFC_UMTS_TX_CBW_NUM = 2*/
         TX_FDIQ_5Tap_COMP_DEFAULT,
         TX_FDIQ_7Tap_COMP_DEFAULT, 
      }, //tx_fdiq_lin_2
      {
        /*tx_ga_w_ET*/
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
      },
      {
        /*tx_ga_wo_ET*/
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
      },
      UMTS_TX_PGA_PHASE_Default,
      UMTS_TX_PGA_AB_Default, //pga_gain_step : MMRFC_TX_PGA_GAIN_STEP_SUBBAND_NUM * MMRFC_TX_PGA_GAIN_STEP_NUM
#if IS_URF_MT6177L
      0x9, //cap_tuning_pga_a
      0x8, //cap_tuning_pga_b
#elif IS_URF_MT6173
      0xD, //cap_tuning_pga_a 	
      0xD, //cap_tuning_pga_b
#else
 #error
#endif
    },
};

const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T UMTSBand9_PWRON_CAL_DATA =
{
   0, //Verno
   UMTSBand9,
   {
       /* RX IRR HPM*/
       UMTS_RX_IRR_HPM_Default,
       /* RX IRR LPM*/
       UMTS_RX_IRR_LPM_Default,
       /* RX RF DC HPM*/
       UMTS_RX_DC_RF_HPM_Default,
       /* RX RF DC LPM*/
       UMTS_RX_DC_RF_LPM_Default,
       /* RX DIG DC HPM*/
       UMTS_RX_DC_Dig_HPM_Default,
       /* RX DIG DC LPM*/
       UMTS_RX_DC_Dig_LPM_Default,
       /* RX IIP2 */
       UMTS_RX_IIP2_Default,
   },
  {
    UMTS_DET_CDCOC_DEFAULT, //det_coarse_dcoc_cw807
    UMTS_DET_CDCOC_DEFAULT, //det_coarse_dcoc_cw808
    { /* MMRFC_DET_FE_GAIN_STEPS = 2 */
      {
         UMTS_Det_Iq_MG_SC_Comp_Default,
         UMTS_Det_Iq_MG_DC_Comp_Default,
      },
      {
         UMTS_Det_Iq_LG_SC_Comp_Default,
         UMTS_Det_Iq_LG_DC_Comp_Default,
      },
    },
    {{0,0}}, //det_dc , MMRFC_DET_GAIN_STEPS = 15
    UMTS_DET_DNL_Default,     //det_dnl, MMRFC_DET_GAIN_STEPS = 15
    { /* MMRFC_DET_FE_GAIN_STEPS = 2 */
      {
         UMTS_Det_Iq_MG_SC_Comp_Default,
         UMTS_Det_Iq_MG_DC_Comp_Default,
      },
      {
         UMTS_Det_Iq_LG_SC_Comp_Default,
         UMTS_Det_Iq_LG_DC_Comp_Default,
      },
    },
    {{0,0}}, //det_dc , MMRFC_DET_GAIN_STEPS =15
    UMTS_DET_DNL_Default,//det_dnl, MMRFC_DET_GAIN_STEPS = 15
  },

    {
#if IS_URF_MT6177L
      0,             //tx_lo: no use
      0,             //tx_lo_ind
      0x51,          //tx_lo_capcal_peak_cap
      0x1D,          //tx_lo_in_bias_hpm
      0x1D,          //tx_lo_in_bias_lpm
#elif IS_URF_MT6173
      0,             //tx_lo: no use
      1,             //tx_lo_ind
      0x26,          //tx_lo_capcal_peak_cap
      0xF,           //tx_lo_in_bias_hpm
      0xF,           //tx_lo_in_bias_lpm
#else
 #error
#endif
      0,             //stx_delta_duty_cycle
      UMTS_RC_LPF_DEFAULT,            //tx_rc_lpf
      UMTS_RC_RCF_DEFAULT,            //tx_rc_rcf
      {{0,0}},       //tx_iq_lin
      {{0,0}},       //tx_dc_lin
      {{0,0}},       //tx_iq_dpd
      {{0,0}},       //tx_dc_dpd
      UMTS_TX_DNL_PGA_A_Default, //tx_dnl_pga_a
      UMTS_TX_DNL_PGA_B_Default, //tx_dnl_pga_b
      { /*MMRFC_UMTS_TX_CBW_NUM = 2*/
         TX_FDIQ_5Tap_COMP_DEFAULT,
         TX_FDIQ_7Tap_COMP_DEFAULT,
      }, //tx_fdiq_lin_1
      {    /*MMRFC_UMTS_TX_CBW_NUM = 2*/
         TX_FDIQ_5Tap_COMP_DEFAULT,
         TX_FDIQ_7Tap_COMP_DEFAULT,
      }, //tx_fdiq_lin_2
      {
        /*tx_ga_w_ET*/
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
      },
      {
        /*tx_ga_wo_ET*/
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
      },
      UMTS_TX_PGA_PHASE_Default,
      UMTS_TX_PGA_AB_Default, //pga_gain_step : MMRFC_TX_PGA_GAIN_STEP_SUBBAND_NUM * MMRFC_TX_PGA_GAIN_STEP_NUM
#if IS_URF_MT6177L
      0xF,  //cap_tuning_pga_a
      0x16, //cap_tuning_pga_b
#elif IS_URF_MT6173
      0x16, //cap_tuning_pga_a 	
      0x16, //cap_tuning_pga_b
#else
 #error
#endif
    },
};

const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T UMTSBand11_PWRON_CAL_DATA =
{
   0, //Verno
   UMTSBand11,
   {
       /* RX IRR HPM*/
       UMTS_RX_IRR_HPM_Default,
       /* RX IRR LPM*/
       UMTS_RX_IRR_LPM_Default,
       /* RX RF DC HPM*/
       UMTS_RX_DC_RF_HPM_Default,
       /* RX RF DC LPM*/
       UMTS_RX_DC_RF_LPM_Default,
       /* RX DIG DC HPM*/
       UMTS_RX_DC_Dig_HPM_Default,
       /* RX DIG DC LPM*/
       UMTS_RX_DC_Dig_LPM_Default,
       /* RX IIP2 */
       UMTS_RX_IIP2_Default,
   },
  {
    UMTS_DET_CDCOC_DEFAULT, //det_coarse_dcoc_cw807
    UMTS_DET_CDCOC_DEFAULT, //det_coarse_dcoc_cw808
    { /* MMRFC_DET_FE_GAIN_STEPS = 2 */
      {
         UMTS_Det_Iq_MG_SC_Comp_Default,
         UMTS_Det_Iq_MG_DC_Comp_Default,
      },
      {
         UMTS_Det_Iq_LG_SC_Comp_Default,
         UMTS_Det_Iq_LG_DC_Comp_Default,
      },
    },
    {{0,0}}, //det_dc , MMRFC_DET_GAIN_STEPS = 15
    UMTS_DET_DNL_Default,     //det_dnl, MMRFC_DET_GAIN_STEPS = 15
    { /* MMRFC_DET_FE_GAIN_STEPS = 2 */
      {
         UMTS_Det_Iq_MG_SC_Comp_Default,
         UMTS_Det_Iq_MG_DC_Comp_Default,
      },
      {
         UMTS_Det_Iq_LG_SC_Comp_Default,
         UMTS_Det_Iq_LG_DC_Comp_Default,
      },
    },
    {{0,0}}, //det_dc , MMRFC_DET_GAIN_STEPS =15
    UMTS_DET_DNL_Default,//det_dnl, MMRFC_DET_GAIN_STEPS = 15
  },

    {
#if IS_URF_MT6177L
      0,             //tx_lo: no use
      1,             //tx_lo_ind
      0x52,          //tx_lo_capcal_peak_cap
      0x1B,          //tx_lo_in_bias_hpm
      0x1B,          //tx_lo_in_bias_lpm
#elif IS_URF_MT6173
      0,             //tx_lo: no use
      1,             //tx_lo_ind
      0x65,          //tx_lo_capcal_peak_cap
      0xF,           //tx_lo_in_bias_hpm
      0xF,           //tx_lo_in_bias_lpm
#else
 #error
#endif
      0,             //stx_delta_duty_cycle
      UMTS_RC_LPF_DEFAULT,            //tx_rc_lpf
      UMTS_RC_RCF_DEFAULT,            //tx_rc_rcf
      {{0,0}},       //tx_iq_lin
      {{0,0}},       //tx_dc_lin
      {{0,0}},       //tx_iq_dpd
      {{0,0}},       //tx_dc_dpd
      UMTS_TX_DNL_PGA_A_Default, //tx_dnl_pga_a
      UMTS_TX_DNL_PGA_B_Default, //tx_dnl_pga_b
      { /*MMRFC_UMTS_TX_CBW_NUM = 2*/
         TX_FDIQ_5Tap_COMP_DEFAULT,
         TX_FDIQ_7Tap_COMP_DEFAULT, 
      }, //tx_fdiq_lin_1
      {    /*MMRFC_UMTS_TX_CBW_NUM = 2*/
         TX_FDIQ_5Tap_COMP_DEFAULT,
         TX_FDIQ_7Tap_COMP_DEFAULT, 
      }, //tx_fdiq_lin_2
      {
        /*tx_ga_w_ET*/
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
      },
      {
        /*tx_ga_wo_ET*/
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
      },
      UMTS_TX_PGA_PHASE_Default,
      UMTS_TX_PGA_AB_Default, //pga_gain_step : MMRFC_TX_PGA_GAIN_STEP_SUBBAND_NUM * MMRFC_TX_PGA_GAIN_STEP_NUM
#if IS_URF_MT6177L
      0x27, //cap_tuning_pga_a
      0x2A, //cap_tuning_pga_b
#elif IS_URF_MT6173
      0x3E, //cap_tuning_pga_a 	
      0x3E, //cap_tuning_pga_b
#else
 #error
#endif
    },
};

const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T UMTSBand18_PWRON_CAL_DATA =
{
   0, //Verno
   UMTSBand18,
   {
       /* RX IRR HPM*/
       UMTS_RX_IRR_HPM_Default,
       /* RX IRR LPM*/
       UMTS_RX_IRR_LPM_Default,
       /* RX RF DC HPM*/
       UMTS_RX_DC_RF_HPM_Default,
       /* RX RF DC LPM*/
       UMTS_RX_DC_RF_LPM_Default,
       /* RX DIG DC HPM*/
       UMTS_RX_DC_Dig_HPM_Default,
       /* RX DIG DC LPM*/
       UMTS_RX_DC_Dig_LPM_Default,
       /* RX IIP2 */
       UMTS_RX_IIP2_Default,
   },
  {
    UMTS_DET_CDCOC_DEFAULT, //det_coarse_dcoc_cw807
    UMTS_DET_CDCOC_DEFAULT, //det_coarse_dcoc_cw808
    { /* MMRFC_DET_FE_GAIN_STEPS = 2 */
      {
         UMTS_Det_Iq_MG_SC_Comp_Default,
         UMTS_Det_Iq_MG_DC_Comp_Default,
      },
      {
         UMTS_Det_Iq_LG_SC_Comp_Default,
         UMTS_Det_Iq_LG_DC_Comp_Default,
      },
    },
    {{0,0}}, //det_dc , MMRFC_DET_GAIN_STEPS = 15
    UMTS_DET_DNL_Default,     //det_dnl, MMRFC_DET_GAIN_STEPS = 15
    { /* MMRFC_DET_FE_GAIN_STEPS = 2 */
      {
         UMTS_Det_Iq_MG_SC_Comp_Default,
         UMTS_Det_Iq_MG_DC_Comp_Default,
      },
      {
         UMTS_Det_Iq_LG_SC_Comp_Default,
         UMTS_Det_Iq_LG_DC_Comp_Default,
      },
    },
    {{0,0}}, //det_dc , MMRFC_DET_GAIN_STEPS =15
    UMTS_DET_DNL_Default,//det_dnl, MMRFC_DET_GAIN_STEPS = 15
  },

    {
#if IS_URF_MT6177L
      0,             //tx_lo: no use
      0,             //tx_lo_ind
      0x0,           //tx_lo_capcal_peak_cap
      0x0,           //tx_lo_in_bias_hpm
      0x0,           //tx_lo_in_bias_lpm
#elif IS_URF_MT6173
      0,             //tx_lo: no use
      1,             //tx_lo_ind
      0x28,          //tx_lo_capcal_peak_cap
      0xF,           //tx_lo_in_bias_hpm
      0xF,           //tx_lo_in_bias_lpm
#else
 #error
#endif
      0,             //stx_delta_duty_cycle
      UMTS_RC_LPF_DEFAULT,            //tx_rc_lpf
      UMTS_RC_RCF_DEFAULT,            //tx_rc_rcf
      {{0,0}},       //tx_iq_lin
      {{0,0}},       //tx_dc_lin
      {{0,0}},       //tx_iq_dpd
      {{0,0}},       //tx_dc_dpd
      UMTS_TX_DNL_PGA_A_Default, //tx_dnl_pga_a
      UMTS_TX_DNL_PGA_B_Default, //tx_dnl_pga_b
      { /*MMRFC_UMTS_TX_CBW_NUM = 2*/
         TX_FDIQ_5Tap_COMP_DEFAULT,
         TX_FDIQ_7Tap_COMP_DEFAULT, 
      }, //tx_fdiq_lin_1
      {    /*MMRFC_UMTS_TX_CBW_NUM = 2*/
         TX_FDIQ_5Tap_COMP_DEFAULT,
         TX_FDIQ_7Tap_COMP_DEFAULT,   
      }, //tx_fdiq_lin_2
      {
        /*tx_ga_w_ET*/
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
      },
      {
        /*tx_ga_wo_ET*/
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
      },
      UMTS_TX_PGA_PHASE_Default,
      UMTS_TX_PGA_AB_Default, //pga_gain_step : MMRFC_TX_PGA_GAIN_STEP_SUBBAND_NUM * MMRFC_TX_PGA_GAIN_STEP_NUM
#if IS_URF_MT6177L
      0xF,  //cap_tuning_pga_a
      0xD,  //cap_tuning_pga_b
#elif IS_URF_MT6173
      0x12, //cap_tuning_pga_a 	
      0x12, //cap_tuning_pga_b
#else
 #error
#endif
    },
};

const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T UMTSBand19_PWRON_CAL_DATA =
{
   0, //Verno
   UMTSBand19,
   {
       /* RX IRR HPM*/
       UMTS_RX_IRR_HPM_Default,
       /* RX IRR LPM*/
       UMTS_RX_IRR_LPM_Default,
       /* RX RF DC HPM*/
       UMTS_RX_DC_RF_HPM_Default,
       /* RX RF DC LPM*/
       UMTS_RX_DC_RF_LPM_Default,
       /* RX DIG DC HPM*/
       UMTS_RX_DC_Dig_HPM_Default,
       /* RX DIG DC LPM*/
       UMTS_RX_DC_Dig_LPM_Default,
       /* RX IIP2 */
       UMTS_RX_IIP2_Default,
   },
  {
    UMTS_DET_CDCOC_DEFAULT, //det_coarse_dcoc_cw807
    UMTS_DET_CDCOC_DEFAULT, //det_coarse_dcoc_cw808
    { /* MMRFC_DET_FE_GAIN_STEPS = 2 */
      {
         UMTS_Det_Iq_MG_SC_Comp_Default,
         UMTS_Det_Iq_MG_DC_Comp_Default,
      },
      {
         UMTS_Det_Iq_LG_SC_Comp_Default,
         UMTS_Det_Iq_LG_DC_Comp_Default,
      },
    },
    {{0,0}}, //det_dc , MMRFC_DET_GAIN_STEPS = 15
    UMTS_DET_DNL_Default,     //det_dnl, MMRFC_DET_GAIN_STEPS = 15
    { /* MMRFC_DET_FE_GAIN_STEPS = 2 */
      {
         UMTS_Det_Iq_MG_SC_Comp_Default,
         UMTS_Det_Iq_MG_DC_Comp_Default,
      },
      {
         UMTS_Det_Iq_LG_SC_Comp_Default,
         UMTS_Det_Iq_LG_DC_Comp_Default,
      },
    },
    {{0,0}}, //det_dc , MMRFC_DET_GAIN_STEPS =15
    UMTS_DET_DNL_Default,//det_dnl, MMRFC_DET_GAIN_STEPS = 15
  },

    {
#if IS_URF_MT6177L
      0,             //tx_lo: no use
      0,             //tx_lo_ind
      0x0,           //tx_lo_capcal_peak_cap
      0x0,           //tx_lo_in_bias_hpm
      0x0,           //tx_lo_in_bias_lpm
#elif IS_URF_MT6173
      0,             //tx_lo: no use
      1,             //tx_lo_ind
      0x24,          //tx_lo_capcal_peak_cap
      0xE,           //tx_lo_in_bias_hpm
      0xE,           //tx_lo_in_bias_lpm
#else
 #error
#endif
      0,             //stx_delta_duty_cycle
      UMTS_RC_LPF_DEFAULT,            //tx_rc_lpf
      UMTS_RC_RCF_DEFAULT,            //tx_rc_rcf
      {{0,0}},       //tx_iq_lin
      {{0,0}},       //tx_dc_lin
      {{0,0}},       //tx_iq_dpd
      {{0,0}},       //tx_dc_dpd
      UMTS_TX_DNL_PGA_A_Default, //tx_dnl_pga_a
      UMTS_TX_DNL_PGA_B_Default, //tx_dnl_pga_b
      { /*MMRFC_UMTS_TX_CBW_NUM = 2*/
         TX_FDIQ_5Tap_COMP_DEFAULT,
         TX_FDIQ_7Tap_COMP_DEFAULT, 
      }, //tx_fdiq_lin_1
      {    /*MMRFC_UMTS_TX_CBW_NUM = 2*/
         TX_FDIQ_5Tap_COMP_DEFAULT,
         TX_FDIQ_7Tap_COMP_DEFAULT, 
      }, //tx_fdiq_lin_2
      {
        /*tx_ga_w_ET*/
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
      },
      {
        /*tx_ga_wo_ET*/
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
        {
           UMTS_TX_GA_5tap_Comp_Default,
           UMTS_TX_GA_7tap_Comp_Default,
        },
      },
      UMTS_TX_PGA_PHASE_Default,
      UMTS_TX_PGA_AB_Default, //pga_gain_step : MMRFC_TX_PGA_GAIN_STEP_SUBBAND_NUM * MMRFC_TX_PGA_GAIN_STEP_NUM
#if IS_URF_MT6177L
      0xE, //cap_tuning_pga_a
      0xC, //cap_tuning_pga_b
#elif IS_URF_MT6173
      0x11, //cap_tuning_pga_a 	
      0x11, //cap_tuning_pga_b
#else
 #error
#endif
    },
};


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
#endif
UMTS_FE_USAGE_T  UMTS_FE_USAGE_TBL[UMTS_RF_FRONT_END_NUM_MAX] =
{
   {{0,{0,0}},{{0,0},{0}},{{0,0},{0}},{{0,0},{0}}},
   {{0,{0,0}},{{0,0},{0}},{{0,0},{0}},{{0,0},{0}}},
   {{0,{0,0}},{{0,0},{0}},{{0,0},{0}},{{0,0},{0}}},
   {{0,{0,0}},{{0,0},{0}},{{0,0},{0}},{{0,0},{0}}},
   {{0,{0,0}},{{0,0},{0}},{{0,0},{0}},{{0,0},{0}}},
   {{0,{0,0}},{{0,0},{0}},{{0,0},{0}},{{0,0},{0}}},
   {{0,{0,0}},{{0,0},{0}},{{0,0},{0}},{{0,0},{0}}},
   {{0,{0,0}},{{0,0},{0}},{{0,0},{0}},{{0,0},{0}}},
   {{0,{0,0}},{{0,0},{0}},{{0,0},{0}},{{0,0},{0}}},
   {{0,{0,0}},{{0,0},{0}},{{0,0},{0}},{{0,0},{0}}}
};

/* P-core Table ============================================================================= */
UMTS_RX_PDATABASE_T UMTS_RX_PDATABASE[UMTS_FE_RXBASE_TBL_SIZE_MAX] =
{
   M_UMTS_RF_RX_PDATABASE(RX_BAND_INDICATOR_0),
   M_UMTS_RF_RX_PDATABASE(RX_BAND_INDICATOR_1),
   M_UMTS_RF_RX_PDATABASE(RX_BAND_INDICATOR_2),
   M_UMTS_RF_RX_PDATABASE(RX_BAND_INDICATOR_3),
   M_UMTS_RF_RX_PDATABASE(RX_BAND_INDICATOR_4),
   M_UMTS_RF_RX_PDATABASE(UMTSBandNone),
   M_UMTS_RF_RX_PDATABASE(UMTSBandNone),
   M_UMTS_RF_RX_PDATABASE(UMTSBandNone),
   M_UMTS_RF_RX_PDATABASE(UMTSBandNone),
   M_UMTS_RF_RX_PDATABASE(UMTSBandNone),
   M_UMTS_RF_RX_PDATABASE(UMTSBandNone),
   M_UMTS_RF_RX_PDATABASE(UMTSBandNone),
   M_UMTS_RF_RX_PDATABASE(UMTSBandNone),
   M_UMTS_RF_RX_PDATABASE(UMTSBandNone),
   M_UMTS_RF_RX_PDATABASE(UMTSBandNone),
};

UMTS_TX_PDATABASE_T UMTS_TX_PDATABASE[UMTS_FE_TXBASE_TBL_SIZE_MAX] =
{
   M_UMTS_RF_TX_PDATABASE(RX_BAND_INDICATOR_0),
   M_UMTS_RF_TX_PDATABASE(RX_BAND_INDICATOR_1),
   M_UMTS_RF_TX_PDATABASE(RX_BAND_INDICATOR_2),
   M_UMTS_RF_TX_PDATABASE(RX_BAND_INDICATOR_3),
   M_UMTS_RF_TX_PDATABASE(RX_BAND_INDICATOR_4),
   M_UMTS_RF_TX_PDATABASE(UMTSBandNone),
   M_UMTS_RF_TX_PDATABASE(UMTSBandNone),
   M_UMTS_RF_TX_PDATABASE(UMTSBandNone),
   M_UMTS_RF_TX_PDATABASE(UMTSBandNone),
   M_UMTS_RF_TX_PDATABASE(UMTSBandNone),
};

UMTS_RXIOBASE_T UMTS_RF_RXIOBASE[UMTS_FE_RXBASE_TBL_SIZE_MAX] =
{
   M_UMTS_RF_RXIOBASE(RX_BAND_INDICATOR_0 ),
   M_UMTS_RF_RXIOBASE(RX_BAND_INDICATOR_1 ),
   M_UMTS_RF_RXIOBASE(RX_BAND_INDICATOR_2 ),
   M_UMTS_RF_RXIOBASE(RX_BAND_INDICATOR_3 ),
   M_UMTS_RF_RXIOBASE(RX_BAND_INDICATOR_4 ),
   M_UMTS_RF_RXIOBASE(UMTSBandNone),
   M_UMTS_RF_RXIOBASE(UMTSBandNone),
   M_UMTS_RF_RXIOBASE(UMTSBandNone),
   M_UMTS_RF_RXIOBASE(UMTSBandNone),
   M_UMTS_RF_RXIOBASE(UMTSBandNone),
   M_UMTS_RF_RXIOBASE(UMTSBandNone),
   M_UMTS_RF_RXIOBASE(UMTSBandNone),
   M_UMTS_RF_RXIOBASE(UMTSBandNone),
   M_UMTS_RF_RXIOBASE(UMTSBandNone),
   M_UMTS_RF_RXIOBASE(UMTSBandNone),
};

UMTS_TXIOBASE_T UMTS_RF_TXIOBASE[UMTS_FE_TXBASE_TBL_SIZE_MAX] =
{
   M_UMTS_RF_TXIOBASE(RX_BAND_INDICATOR_0 ),
   M_UMTS_RF_TXIOBASE(RX_BAND_INDICATOR_1 ),
   M_UMTS_RF_TXIOBASE(RX_BAND_INDICATOR_2 ),
   M_UMTS_RF_TXIOBASE(RX_BAND_INDICATOR_3 ),
   M_UMTS_RF_TXIOBASE(RX_BAND_INDICATOR_4 ),
   M_UMTS_RF_TXIOBASE(UMTSBandNone ),
   M_UMTS_RF_TXIOBASE(UMTSBandNone ),
   M_UMTS_RF_TXIOBASE(UMTSBandNone ),
   M_UMTS_RF_TXIOBASE(UMTSBandNone ),
   M_UMTS_RF_TXIOBASE(UMTSBandNone ),
};

const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T* UMTS_PWRON_CAL_DATA_PTR[UL1D_RF_CUSTOM_BAND] =
{
   &UMTS_PWRON_CAL_DATA(UMTSBandNone) ,
   &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_0) ,
   &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_1) ,
   &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_2) ,
   &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_3) ,
   &UMTS_PWRON_CAL_DATA(RX_BAND_INDICATOR_4) ,
};

#if IS_3G_ELNA_IDX_SUPPORT
UMTS_CUSTOM_ELNA_IDX_T UMTS_ELNA_IDX_LUT_PCORE = 
{
 {  /*RxElnaIdx[20]*/
    UMTSBand1_RX_eLNA_IDX,   
    UMTSBand2_RX_eLNA_IDX,   
    UMTSBand3_RX_eLNA_IDX,   
    UMTSBand4_RX_eLNA_IDX,   
    UMTSBand5_RX_eLNA_IDX,
    UMTSBand6_RX_eLNA_IDX,   
    UMTSBand7_RX_eLNA_IDX,   
    UMTSBand8_RX_eLNA_IDX,   
    UMTSBand9_RX_eLNA_IDX,   
    UMTSBand10_RX_eLNA_IDX,
    UMTSBand11_RX_eLNA_IDX,  
    UMTSBand12_RX_eLNA_IDX,  
    UMTSBand13_RX_eLNA_IDX,  
    UMTSBand14_RX_eLNA_IDX,  
    UMTSBand15_RX_eLNA_IDX,
    UMTSBand16_RX_eLNA_IDX,  
    UMTSBand17_RX_eLNA_IDX,  
    UMTSBand18_RX_eLNA_IDX,  
    UMTSBand19_RX_eLNA_IDX,  
    UMTSBand20_RX_eLNA_IDX
 },
 {  /*RxdElnaIdx[20]*/
    UMTSBand1_RXD_eLNA_IDX,   
    UMTSBand2_RXD_eLNA_IDX,   
    UMTSBand3_RXD_eLNA_IDX,   
    UMTSBand4_RXD_eLNA_IDX,   
    UMTSBand5_RXD_eLNA_IDX,
    UMTSBand6_RXD_eLNA_IDX,   
    UMTSBand7_RXD_eLNA_IDX,   
    UMTSBand8_RXD_eLNA_IDX,   
    UMTSBand9_RXD_eLNA_IDX,   
    UMTSBand10_RXD_eLNA_IDX,
    UMTSBand11_RXD_eLNA_IDX,  
    UMTSBand12_RXD_eLNA_IDX,  
    UMTSBand13_RXD_eLNA_IDX,  
    UMTSBand14_RXD_eLNA_IDX,  
    UMTSBand15_RXD_eLNA_IDX,
    UMTSBand16_RXD_eLNA_IDX,  
    UMTSBand17_RXD_eLNA_IDX,  
    UMTSBand18_RXD_eLNA_IDX,  
    UMTSBand19_RXD_eLNA_IDX,  
    UMTSBand20_RXD_eLNA_IDX
 }
};
#endif//IS_3G_ELNA_IDX_SUPPORT

#if IS_3G_FDD_INTERFERENCE_CHECK_SUPPORT
UMTS_RF_INTERFERENCE_FREQUENCY_T UMTS_RF_INTERFERENCE_FREQUENCY_PCORE =
{
   {  /*interference_freq_groupA[8]*/
   	  {0xFFFF,0xFFFF},
      {0xFFFF,0xFFFF},
      {0xFFFF,0xFFFF},
      {0xFFFF,0xFFFF},
      {0xFFFF,0xFFFF},
      {0xFFFF,0xFFFF},
      {0xFFFF,0xFFFF},
      {0xFFFF,0xFFFF}
   },
   {  /*interference_freq_groupB[8]*/
   	  {0xFFFF,0xFFFF},
      {0xFFFF,0xFFFF},
      {0xFFFF,0xFFFF},
      {0xFFFF,0xFFFF},
      {0xFFFF,0xFFFF},
      {0xFFFF,0xFFFF},
      {0xFFFF,0xFFFF},
      {0xFFFF,0xFFFF}
   }
};
#endif


#if UL1CUSTOM_DRDI_ENABLE
   kal_bool isWcdmaDrdiEnable = KAL_TRUE;
#else
   kal_bool isWcdmaDrdiEnable = KAL_FALSE;
#endif
