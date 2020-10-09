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
 * mml1_rf_pcore_custom_data.h
 *
 * Project:
 * --------
 * MT6290
 *
 * Description:
 * ------------
 * MML1 RF Custom Data
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
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*===============================================================================*/

#ifndef  _MML1_RF_PCORE_CUSTOM_DATA_H_
#define  _MML1_RF_PCORE_CUSTOM_DATA_H_

#include "kal_general_types.h"
#include "kal_public_api.h"

#include "mmrf_cc_global.h"

#ifndef MML1_CLK1_EN_SetDefault
#define MML1_CLK1_EN_SetDefault                         1
#endif
#ifndef MML1_CLK2_EN_SetDefault
#define MML1_CLK2_EN_SetDefault                         1
#endif
#ifndef MML1_CLK3_EN_SetDefault
#define MML1_CLK3_EN_SetDefault                         1
#endif
#ifndef MML1_CLK4_EN_SetDefault
#define MML1_CLK4_EN_SetDefault                         1
#endif

#ifndef PRX1_IQ_SWAP_EN_SetDefault
#define PRX1_IQ_SWAP_EN_SetDefault                      0
#endif
#ifndef DRX1_IQ_SWAP_EN_SetDefault
#define DRX1_IQ_SWAP_EN_SetDefault                      0
#endif
#ifndef PRX2_IQ_SWAP_EN_SetDefault
#define PRX2_IQ_SWAP_EN_SetDefault                      0
#endif
#ifndef DRX2_IQ_SWAP_EN_SetDefault
#define DRX2_IQ_SWAP_EN_SetDefault                      0
#endif
#ifndef PRX3_IQ_SWAP_EN_SetDefault
#define PRX3_IQ_SWAP_EN_SetDefault                      0
#endif
#ifndef DRX3_IQ_SWAP_EN_SetDefault
#define DRX3_IQ_SWAP_EN_SetDefault                      0
#endif
#ifndef PRX4_IQ_SWAP_EN_SetDefault
#define PRX4_IQ_SWAP_EN_SetDefault                      0
#endif
#ifndef DRX4_IQ_SWAP_EN_SetDefault
#define DRX4_IQ_SWAP_EN_SetDefault                      0
#endif

#ifndef PRX1_I_INV_EN_SetDefault
#define PRX1_I_INV_EN_SetDefault                        0
#endif
#ifndef PRX1_Q_INV_EN_SetDefault
#define PRX1_Q_INV_EN_SetDefault                        0
#endif
#ifndef DRX1_I_INV_EN_SetDefault
#define DRX1_I_INV_EN_SetDefault                        0
#endif
#ifndef DRX1_Q_INV_EN_SetDefault
#define DRX1_Q_INV_EN_SetDefault                        0
#endif
#ifndef PRX2_I_INV_EN_SetDefault
#define PRX2_I_INV_EN_SetDefault                        0
#endif
#ifndef PRX2_Q_INV_EN_SetDefault
#define PRX2_Q_INV_EN_SetDefault                        0
#endif
#ifndef DRX2_I_INV_EN_SetDefault
#define DRX2_I_INV_EN_SetDefault                        0
#endif
#ifndef DRX2_Q_INV_EN_SetDefault
#define DRX2_Q_INV_EN_SetDefault                        0
#endif
#ifndef PRX3_I_INV_EN_SetDefault
#define PRX3_I_INV_EN_SetDefault                        0
#endif
#ifndef PRX3_Q_INV_EN_SetDefault
#define PRX3_Q_INV_EN_SetDefault                        0
#endif
#ifndef DRX3_I_INV_EN_SetDefault
#define DRX3_I_INV_EN_SetDefault                        0
#endif
#ifndef DRX3_Q_INV_EN_SetDefault
#define DRX3_Q_INV_EN_SetDefault                        0
#endif
#ifndef PRX4_I_INV_EN_SetDefault
#define PRX4_I_INV_EN_SetDefault                        0
#endif
#ifndef PRX4_Q_INV_EN_SetDefault
#define PRX4_Q_INV_EN_SetDefault                        0
#endif
#ifndef DRX4_I_INV_EN_SetDefault
#define DRX4_I_INV_EN_SetDefault                        0
#endif
#ifndef DRX4_Q_INV_EN_SetDefault
#define DRX4_Q_INV_EN_SetDefault                        0
#endif

#if defined(__L1_GPS_CO_CLOCK_SUPPORT__) && defined(__L1_LOCK_AFCDAC_AT_STARTUP_SUPPORT__)
#define FIXAFC_EN                            1
#else
#define FIXAFC_EN                            0
#endif

#if defined(AFC_VCXO)
#define VCXO_TYPE                            MML1_RF_VCXO
#else
#define VCXO_TYPE                            MML1_RF_VCTCXO
#endif

#ifndef MML1_CRYSTAL_ON_PMIC_EN
#define MML1_CRYSTAL_ON_PMIC_EN              0
#endif


/*=======================================*/
/* Error check pre-compile processing    */
/*=======================================*/
#if ( (!MML1_CRYSTAL_ON_PMIC_EN)&&(!MML1_CLK1_EN_SetDefault) )
#error "Clock Buffer1 (DBB) must be enable for BB, please check MML1_CLK1_EN_SetDefault this option in mml1_custom_rf.h"
#endif

#if MML1_CRYSTAL_ON_PMIC_EN
   #if MML1_CLK1_EN_SetDefault || MML1_CLK2_EN_SetDefault || MML1_CLK3_EN_SetDefault || MML1_CLK4_EN_SetDefault
#error "Clock Buffer1,2,3,4 must be disable for using crystal in PMIC project. Please check MML1_CLK1_EN_SetDefault,MML1_CLK2_EN_SetDefault,MML1_CLK3_EN_SetDefault,MML1_CLK4_EN_SetDefault those option in mml1_custom_rf.h"
   #endif
#endif

#endif /* End of #ifndef _MML1_RF_PCORE_CUSTOM_DATA_H_ */
/*===============================================================================*/

