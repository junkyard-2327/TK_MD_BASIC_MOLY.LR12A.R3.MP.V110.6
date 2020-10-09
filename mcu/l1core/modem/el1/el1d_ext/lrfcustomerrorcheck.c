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
 * lrfcustomerrorcheck.c
 *
 * Project:
 * --------
 * MT6290
 *
 * Description:
 * ------------
 * EL1 RF Custom Data
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
 *
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

/*******************************************************************************
 * #include
 ******************************************************************************/
#include "kal_public_api.h"
#include "lrfcustomdata.h"
#include "lte_custom_mipi.h"
#include "lte_custom_rf.h"

/*******************************************************************************
 * #define
 ******************************************************************************/

#define MAX(X,Y) (((X) < (Y)) ? (Y) : (X))

#define LTE_TDD_T2R_MARGIN US2OFFCNT(20)

#if (defined(LTE_FDD_MIPI_ASM_TX_OFF0) || defined(LTE_FDD_MIPI_ASM_TX_OFF1))
   #error"FDD mode should not turn off TX ASM"
#endif

#define LTE_TDD_ASM_MAX_RXON_OFFSET   MAX(LTE_TDD_MIPI_ASM_RX_ON0,LTE_TDD_MIPI_ASM_RX_ON1)
#define LTE_TDD_ASM_MAX_TXOFF_OFFSET  MAX(LTE_TDD_MIPI_ASM_TX_OFF0,LTE_TDD_MIPI_ASM_TX_OFF1)

#if ((LTE_TDD_ASM_MAX_RXON_OFFSET + LTE_TDD_ASM_MAX_TXOFF_OFFSET) > LTE_TDD_T2R_MARGIN)
   #error"TDD ASM Rx ON may overlap with Tx ON"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR0_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR0_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR0_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR0_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR1_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR1_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR1_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR1_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR2_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR2_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR2_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR2_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR3_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR3_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR3_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR3_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR4_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR4_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR4_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR4_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR5_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR5_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR5_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR5_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR6_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR6_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR6_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR6_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR7_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR7_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR7_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR7_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR8_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR8_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR8_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR8_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR9_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR9_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR9_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR9_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR10_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR10_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR10_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR10_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR11_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR11_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR11_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR11_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR12_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR12_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR12_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR12_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR13_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR13_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR13_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR13_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR14_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR14_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR14_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR14_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR15_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR15_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR15_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR15_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR16_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR16_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR16_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR16_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR17_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR17_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR17_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR17_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR18_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR18_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR18_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR18_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR19_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR19_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR19_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR19_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR20_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR20_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR20_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR20_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR21_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR21_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR21_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR21_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR22_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR22_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR22_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR22_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR23_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR23_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR23_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR23_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR24_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR24_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR24_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR24_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR25_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR25_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR25_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR25_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR26_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR26_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR26_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR26_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR27_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR27_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR27_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR27_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR28_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR28_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR28_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR28_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR29_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR29_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR29_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR29_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR30_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR30_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR30_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR30_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR31_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR31_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR31_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR31_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR32_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR32_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR32_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR32_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR33_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR33_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR33_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR33_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PT3(BAND_INDICATOR34_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PT3(BAND_INDICATOR31_SetDefault, SetDefault)) should be zero!"
#endif

#if  ( (LTE_PDATA_PR3(BAND_INDICATOR34_SetDefault, SetDefault)) != 0)
   #error"LTE_PDATA_PR3(BAND_INDICATOR31_SetDefault, SetDefault)) should be zero!"
#endif

/*===============================================================================*/
