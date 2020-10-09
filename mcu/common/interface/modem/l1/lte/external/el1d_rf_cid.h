/******************************************************************************
*  Modification Notice:
*  --------------------------
*  This software is modified by MediaTek Inc. and the information contained
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
*******************************************************************************/

/*==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================*/
/* Doxygen Group Header ****************************************************//**
 * @addtogroup EL1D_RF_CID
 * @{
 ******************************************************************************/
/***************************************************************************//**
 * @file       el1d_rf_cid.h
 * @author     LY Chen (MTK04356)
 * @date       2014.12.16
 * @brief      EL1D RF CID
 * @details    EL1D RF Chip ID and chip compile option
 ******************************************************************************/
  
#ifndef __EL1D_RF_CID_H__
#define __EL1D_RF_CID_H__

/*******************************************************************************
 * #include
 ******************************************************************************/
#include "lte_rf_public.h"  // common define for MCU & DSP 

/*******************************************************************************
 * #define
 ******************************************************************************/

/*******************************************************************************
 ** Define RF chip in use
 ******************************************************************************/
/*------------------------------------------*/
/* Use in EL1D :                            */
/*   ( 1) EL1D_RF_ID_MT6176 (Orion+)        */
/*        ES1, ES1B (with TK6291),          */
/*        and MP (with JADE) version        */
/*------------------------------------------*/
#define EL1D_RF_ID_MT6176                         0x00000001
#define EL1D_RF_ID_MT6179                         0x00000002
#define EL1D_RF_ID_MT6177L                        0x00000004
#define EL1D_RF_ID_MT6177M                        0x00000008

#ifndef EL1D_RF_ID
   #if defined(MT6176_LTE_RF)
#define EL1D_RF_ID                                EL1D_RF_ID_MT6176
//   #elif defined(MT6179_LTE_RF)
//#define EL1D_RF_ID                                EL1D_RF_ID_MT6179
   #elif defined(MT6177M_LTE_RF)
#define EL1D_RF_ID                                EL1D_RF_ID_MT6177M
   #elif defined(MT6177L_LTE_RF)
#define EL1D_RF_ID                                EL1D_RF_ID_MT6177L
   #else
#error "No Valid RF Chip was defined"
   #endif
#else
#error "Unexpected RF Chip was defined"
#endif //EL1D_RF_ID

/*.......................................................*/
#define IS_EL1D_RF_MT6176                        ( EL1D_RF_ID == EL1D_RF_ID_MT6176  )
#define IS_EL1D_RF_MT6179                        ( EL1D_RF_ID == EL1D_RF_ID_MT6179  )
#define IS_EL1D_RF_MT6177L                       ( EL1D_RF_ID == EL1D_RF_ID_MT6177L )
#define IS_EL1D_RF_MT6177M                       ( EL1D_RF_ID == EL1D_RF_ID_MT6177M )

/*.......................................................*/
   
#if defined(__TAS_SUPPORT__)
#define IS_4G_TAS_SUPPORT                             1  /* The 4G TAS is supported                                       */
   #if defined (__TAS_INTERNAL_NVRAM_VISIBLE__)
#define IS_4G_TAS_INTERNAL_NVRAM_VISIBLE              1  /* The 4G TAS internal parameters can be controlled by NVRAM     */
   #else
#define IS_4G_TAS_INTERNAL_NVRAM_VISIBLE              0  /* The 4G TAS internal parameters can NOT be controlled by NVRAM */
   #endif
#else
#define IS_4G_TAS_SUPPORT                             1
#define IS_4G_TAS_INTERNAL_NVRAM_VISIBLE              0  /* The 4G TAS internal parameters can NOT be controlled by NVRAM */
#endif


/*****************************************************
** Dynamic antenna tuning feature
*****************************************************/
#if defined(__DYNAMIC_ANTENNA_TUNING__)
  #define __IS_EL1D_RF_DAT_SUPPORT__                 1
  #define __IS_EL1D_RF_ANT_MERGE_SUPPORT__           1
#else
  #define __IS_EL1D_RF_DAT_SUPPORT__                 0
  #define __IS_EL1D_RF_ANT_MERGE_SUPPORT__           0
#endif
/*****************************************************
** TX Power offset define           
*****************************************************/
#if defined (__TX_POWER_OFFSET_SUPPORT__)
#define IS_4G_TX_POWER_OFFSET_SUPPORT                 1  /* Enable Tx power offset for 4G part */
#else
#define IS_4G_TX_POWER_OFFSET_SUPPORT                 0  /* Disable Tx power offset for 4G part */
#endif /*__TX_POWER_OFFSET_SUPPORT__*/  

/*****************************************************
** SWTP and SAR TX Power Offset Coexistence           
*****************************************************/
#if defined (__TX_POWER_OFFSET_SUPPORT__) && defined (__SAR_TX_POWER_BACKOFF_SUPPORT__)
#define IS_4G_TX_POWER_OFFSET_COEXISTENCE_SUPPORT             1  /* Enable Tx power offset coexistence for 4G part */

#else
#define IS_4G_TX_POWER_OFFSET_COEXISTENCE_SUPPORT             0  /* Disable Tx power offset coexistence for 4G part */

#endif /*__TX_POWER_OFFSET_SUPPORT__ && __SAR_TX_POWER_BACKOFF_SUPPORT__*/  

/*****************************************************
** RX Power offset define           
*****************************************************/
#if defined (__RX_POWER_OFFSET_SUPPORT__)
#define IS_4G_RX_POWER_OFFSET_SUPPORT                 1  /* Enable Rx power offset for 4G part */
#else
#define IS_4G_RX_POWER_OFFSET_SUPPORT                 0  /* Disable Rx power offset for 4G part */
#endif /*__4G_RX_POWER_OFFSET_SUPPORT__*/

/*****************************************************
** SAR TX Max Power offset define           
*****************************************************/
#if defined (__SAR_TX_POWER_BACKOFF_SUPPORT__)
#define IS_4G_SAR_TX_POWER_OFFSET_SUPPORT             1  /* Enable SAR Tx power offset for 4G part */

#else
#define IS_4G_SAR_TX_POWER_OFFSET_SUPPORT             0  /* Disable SAR Tx power offset for 4G part */

#endif /*__SAR_TX_POWER_BACKOFF_SUPPORT__*/  

/*****************************************************
** AFC new CW compile optiondefine           
*****************************************************/
#define IS_4G_AFC_NEW_CW_SUPPORT                      1  /* Enable AFC new CW for 4G part */

/*****************************************************
**  HPUE feature  define
*****************************************************/
#if defined (__HPUE_FEATURE_SUPPORT__)
#define IS_4G_HPUE_FEATURE_SUPPORT                 1  /* Enable HPUE for 4G part */
#else
#define IS_4G_HPUE_FEATURE_SUPPORT                 1  /* Disable HPUE for 4G part */
#endif /*__HPUE_FEATURE_SUPPORT__*/

#if defined (__HPUE_FEATURE_CA_SUPPORT__)
#define IS_4G_HPUE_FEATURE_CA_SUPPORT                 1  /* Enable HPUE for CA part */
#else
#define IS_4G_HPUE_FEATURE_CA_SUPPORT                 1  /* Disable HPUE for CA part */
#endif /*__HPUE_FEATURE_CA_SUPPORT__*/

#if __IS_EL1D_RF_ANT_MERGE_SUPPORT__
// Cat C is not supported for ANT reorg feature
#define IS_4G_TAS_CAT_C_SUPPORT                       0
#else
#define IS_4G_TAS_CAT_C_SUPPORT                       0
#endif

/* To support the 2UL inter-CA cases for the TX module */
#if defined(__LTE_L1SIM__) || defined(__EL1D_COSIM__) || defined(__EL1D_ESL__)
#define IS_4G_RFD_UL_INTER_CA_SUPPORT             (1)
#else
#define IS_4G_RFD_UL_INTER_CA_SUPPORT             (0)
#endif

/*****************************************************
**  SW WA for CCA Dependent DC issue on MT6177M
*****************************************************/
#if IS_EL1D_RF_MT6177M
#define IS_EL1D_RF_DEPDCWA_CCA_SUPPORT     0
#else
#define IS_EL1D_RF_DEPDCWA_CCA_SUPPORT     0
#endif

#if defined (__LTE_PRX_DRX_BETTER_INFO__)
#define IS_4G_PRX_DRX_BETTER_INFO_SUPPORT  1
#else
#define IS_4G_PRX_DRX_BETTER_INFO_SUPPORT  0
#endif

#ifndef __LTE_L1SIM__
  #if defined (__LTE_META_MIPI_PA_TUNING__)
  #define IS_4G_META_MIPI_PA_TUNING_SUPPORT  1
  #else
  #define IS_4G_META_MIPI_PA_TUNING_SUPPORT  0
  #endif
#else
  #define IS_4G_META_MIPI_PA_TUNING_SUPPORT  0
#endif

/*****************************************************
**  ICS Configure in META mode
*****************************************************/
#if defined(__IS_META_MODE_DEFAULT_TAS_STATE_CONFIGURE__)
#define IS_4G_RFD_META_MODE_DEFAULT_TAS_STATE_CONFIGURE_SUPPORT             (1)
#else
#define IS_4G_RFD_META_MODE_DEFAULT_TAS_STATE_CONFIGURE_SUPPORT             (0)
#endif
/*******************************************************************************
 * Typedef
 ******************************************************************************/

/*******************************************************************************
 * Constant
 ******************************************************************************/

/*******************************************************************************
 * Global variables (Extern)
 ******************************************************************************/




/*******************************************************************************
 * Global Functions Prototype (Interface)
 ******************************************************************************/


#endif /*__EL1D_RF_CID_H__*/

/* Doxygen Group End ***************************************************//**@}*/
