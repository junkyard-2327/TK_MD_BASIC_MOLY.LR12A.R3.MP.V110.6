/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2007
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
 *   mrs_as_inter_core_def.h
 *
 * Project:
 * --------
 *   UMOLY
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
 *------------------------------------------------------------------------------
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ******************************************************************************/

#ifndef __MRS_AS_INTER_CORE_DEF_H__
#define __MRS_AS_INTER_CORE_DEF_H__

#include "as_inter_core_enum.h"

/*****************************************************************************
 * GSM Inter-Core Definitions
 *****************************************************************************/

/*****************************************************************************
 * UMTS Inter-Core Definitions
 *****************************************************************************/
 
 /*****************************************************************************
 * LTE Inter-Core Definitions
 *****************************************************************************/
#define LTE_BAND_NUM         SIZE_LTE_BAND * 8
#define LTE_BAND_NUM_EXTENDED ( SIZE_LTE_BAND_MASK_TABLE_EXTENDED * 8 )

#define EAS_BAND_INFO_SHIFT  5
#define EAS_POWER_CLASS_MASK 0x0c
#define LTE_BAND_INVALID     0xffff
#define LTE_FREQ_INVALID     0xffffffff  
#define LTE_EARFCN_INVALID   0xffffffff
#define EAS_EF_ERRC_PARTIAL_BAND_NUM 10
#define IRAT_EUTRA_CAPA_MAX_LEN 1000 //should be smaller than "URR MAX_L2_EXTERNAL_SDU_SIZE(1800) - other RAT self capability size"

#ifdef __CHANNEL_LOCK__
#define MRS_CH_LOCK_PCI_INVALID 0xFFFF
#define MRS_CH_LOCK_PSC_INVALID 0xFFFF
#define MRS_CH_LOCK_PCI_MAX 503
#define MRS_CH_LOCK_PSC_MAX 511
#define MRS_CH_LOCK_BAND_INDICATOR_DCS1800 0
#define MRS_CH_LOCK_BAND_INDICATOR_PCS1900 1

/* LOCK MODE */
#define MRS_CH_LOCK_IDLE_ONLY 0x0
#define MRS_CH_LOCK_IDLE_MR 0x1
#define MRS_CH_LOCK_IDLE_HOCCO 0x2
#define MRS_CH_LOCK_IDLE_CONNECTED 0x3
#define MRS_CH_LOCK_MODE_UNCHANGED 0xFF

/* Procedures on Locked Channel */
#define MRS_CH_LOCK_MR_LOCK_BIT 0x01
#define MRS_CH_LOCK_HO_CCO_LOCK_BIT 0x02
#endif /* __CHANNEL_LOCK__ */
#endif /* __MRS_AS_INTER_CORE_DEF_H__ */
