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
 *	ul1d_custom_mipi.h
 *
 * Project:
 * --------
 * TK6291
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * -------
 *
 ****************************************************************************/

#ifndef  _UL1D_MIPI_DATA_Set0_H_
#define  _UL1D_MIPI_DATA_Set0_H_

/*===============================================================================*/
#include "kal_general_types.h"
#include "ul1d_rf_cid.h"
#include "ul1d_mipi_public.h"

/*===============================================================================*/
#if (IS_3G_MIPI_SUPPORT)
#define MIPI_OFFSET_Set0         (77)   //~20us, 77 chips

/*Enable/Disable 3G FDD MIPI function*/
#define IS_3G_MIPI_ENABLE_Set0  1


extern UL1_MIPI_DATA_TABLE_T          UMTS_MIPI_INITIAL_CW_Set0[UL1_MIPI_INIT_DATA_NUM];
extern UL1_MIPI_DATA_TABLE_T          UMTS_MIPI_SLEEP_CW_Set0[];
extern const UL1_MIPI_EVENT_TABLE_T*        const UMTS_MIPI_RX_EVENT_TABLE_Set0[];
extern const UL1_MIPI_DATA_SUBBAND_TABLE_T* const UMTS_MIPI_RX_DATA_TABLE_Set0[];
extern const UL1_MIPI_EVENT_TABLE_T*        const UMTS_MIPI_TX_EVENT_TABLE_Set0[];
extern const UL1_MIPI_DATA_SUBBAND_TABLE_T* const UMTS_MIPI_TX_DATA_TABLE_Set0[];
extern const UL1_MIPI_DATA_TABLE_T*         const UMTS_MIPI_ASM_ISOLATION_DATA_TABLE_Set0[];

extern const UL1_UMTS_MIPI_TPC_T*           const UMTS_MIPI_TPC_TABLE_Set0[];

#endif

#endif /* End of #ifndef _UL1D_MIPI_DATA_H_ */
