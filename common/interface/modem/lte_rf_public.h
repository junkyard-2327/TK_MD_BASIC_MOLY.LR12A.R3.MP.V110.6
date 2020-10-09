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
 *
 * removed!
 * removed!
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================*/
/* Doxygen Group Header ****************************************************//**
 * @addtogroup LTE_RF_PUBLIC
 * @{
 ******************************************************************************/
/***************************************************************************//**
 * @file       lte_rf_public.h
 * @author     Chester-WY Chen (MTK09580)
 * @date       2016.09.29
 * @brief      LTE RF common define for DSP and MCU
 * @details    provide public/common information in
 ******************************************************************************/

#ifndef __LTE_RF_PUBLIC_H__
#define __LTE_RF_PUBLIC_H__

/*******************************************************************************
 * #include
 ******************************************************************************/


/*******************************************************************************
 * #define
 ******************************************************************************/

/** LTE Common definition */
//need to find a proper place to put this macro under external folder(ask MMRF)
#define RF_MAX(m,n)                                       (((m)>(n))?(m):(n))
//wilson: to-do, need to review this setting based on the global SKU design
#define LTE_BIT_MASK_BUFFER_SIZE                       (64/32) // support 64 band at max
//#define LTE_SPEC_SUPPORT_BAND_NUM                      (25)
#define LTE_TARGET_MAX_SUPPORT_BAND_NUM                (25)
#define LTE_TARGET_MAX_HPUE_SUPPORT_BAND_NUM           (1)
#define LTE_TARGET_CCA_SUPPORT_COMB_NUM                (LTE_TARGET_MAX_SUPPORT_BAND_NUM*2)   //1 band can have RX_xC_TX_xC, RX_xC_TX_xA(No class D case, RX_xD_TX_xC, RX_xD_TX_xA, )
#define LTE_MAX_SUPPORT_BAND_NUM                       (58 + 1) // LTEBandNone
//wilson:to-do fix it after modifying MIPI freq assert check
//#define LTE_MAX_SUPPORT_BAND_NUM                       (LTE_TARGET_MAX_SUPPORT_BAND_NUM + 1) // LTEBandNone

// Filter Mode Feature
#define LTE_FILTER_MAX_SUPPORT_BAND_NUM                 5

/** RF FE Feature related definition */
// Spilt band Feature
#define LTE_ERF_SPLIT_BAND                              5 //How many bands need to split? Band28/Band41/Reserved
#define LTE_ERF_MAX_SPLIT_PART                          3 //Split to at most 3 parts


//for Zion(6177M)
#if defined(MT6177M_LTE_RF) || defined(__FEC_MT6177M_RF__)
#define LTE_TARGET_MAX_SUPPORT_CA_BAND_NUM             (LTE_TARGET_MAX_SUPPORT_BAND_NUM)
#define LTE_MAX_SUPPORT_RX_FE_ROUTE_NUM                (LTE_TARGET_MAX_SUPPORT_BAND_NUM + (LTE_ERF_MAX_SPLIT_PART-1) * ( LTE_ERF_SPLIT_BAND - 1))
#define LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM                (LTE_TARGET_MAX_SUPPORT_BAND_NUM + LTE_FILTER_MAX_SUPPORT_BAND_NUM + (LTE_ERF_MAX_SPLIT_PART-1) * ( LTE_ERF_SPLIT_BAND - 1))
#define LTE_MAX_RX_TX_LINKAGE_NUM                      (LTE_TARGET_MAX_SUPPORT_BAND_NUM + LTE_TARGET_MAX_SUPPORT_CA_BAND_NUM)

#define LTE_ROUTE_TBL_SIZE_MAX                         ( LTE_TARGET_MAX_SUPPORT_BAND_NUM + 1 ) // single band + B44 alternative route
#define LTE_ROUTE2_TBL_SIZE_MAX                        ( 1 )                                   // no CA support in MT6177M
#define LTE_ROUTE_TX_TBL_SIZE_MAX                      ( LTE_TARGET_MAX_SUPPORT_BAND_NUM + 1 ) // single band + B44 alternative route
#define LTE_USAGE_TBL_SIZE_MAX                         LTE_MAX_RX_TX_LINKAGE_NUM
// Enable DL/UL RF CA support only for Merlot with 6177M
#if (defined(__MT6177M_RFCCA_SUPPORT__) || defined(__FEC_MT6177M_RF__)) && (defined(MT6761) || defined(MT6768))
#define IS_LTE_RF_DL_CA_SUPPORT                       1
#define IS_LTE_RF_UL_CA_SUPPORT                       1
#else
#define IS_LTE_RF_DL_CA_SUPPORT                       0
#define IS_LTE_RF_UL_CA_SUPPORT                       0
#endif

//for Bianco(6177L)
#else
#define LTE_TARGET_MAX_SUPPORT_CA_BAND_NUM             (160) //80*2
#define LTE_MAX_SUPPORT_RX_FE_ROUTE_NUM                (88)
#define LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM                (LTE_TARGET_MAX_SUPPORT_BAND_NUM * 2)
#define LTE_MAX_RX_TX_LINKAGE_NUM                      (LTE_TARGET_MAX_SUPPORT_BAND_NUM + LTE_TARGET_MAX_SUPPORT_CA_BAND_NUM)

#define LTE_ROUTE_TBL_SIZE_MAX                         ( 88 )                    // number of single-band*4(88)
#define LTE_ROUTE2_TBL_SIZE_MAX                        ( 22 )                    // number of single-band*1(22), (Only 11 band support NCCA in 3GPP spec, and NCCA may have TWO RF route.)
#define LTE_ROUTE_TX_TBL_SIZE_MAX                      (LTE_TARGET_MAX_SUPPORT_BAND_NUM * 2) // number of single-band*3(66)
#define LTE_USAGE_TBL_SIZE_MAX                         LTE_MAX_RX_TX_LINKAGE_NUM

#define IS_LTE_RF_DL_CA_SUPPORT                       1
#define IS_LTE_RF_UL_CA_SUPPORT                       1

#endif
#define LTE_MAX_SUPPORT_FE_ROUTE_NUM                   RF_MAX((LTE_MAX_SUPPORT_RX_FE_ROUTE_NUM), (LTE_MAX_SUPPORT_TX_FE_ROUTE_NUM))



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

#endif /*__LTE_RF_PUBLIC_H__*/

/* Doxygen Group End ***************************************************//**@}*/
