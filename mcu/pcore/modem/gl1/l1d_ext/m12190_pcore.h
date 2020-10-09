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

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   m12190_pcore.h
 *
 * Project:
 * --------
 *   TK6291
 *
 * Description:
 * ------------
 *   Setup RF
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
 *------------------------------------------------------------------------------
 * $Revision: $
 * $Modtime:  $
 * $Log:      $
 *
 * 07 11 2017 aman.singh
 * [MOLY00260414] [L1D][Modify][93] Feature porting to UMOLYA from 91
 *
 * 07 10 2017 aman.singh
 * [MOLY00260414] [L1D][Modify][93] Feature porting to UMOLYA from 91
 *
 * 01 24 2017 yw.lee
 * [MOLY00226505] [Bianco Bring-up][L1D][Modify] custom file, capID, revert tmep code for .mak
 * .
 *
 *
 *******************************************************************************/


#ifndef  _M12190_PCORE_H_
#define  _M12190_PCORE_H_
/*---------------------------------------------------------------------------*/
#include "l1_types_public.h"
#include "l1cal.h"
#include "l1d_rf_common.h"
#include "l1d_public.h"
#include "l1d_custom_rf.h"

typedef enum
{
   BandSupportFromDefaultCustom,
   BandSupportFromPcoreNvram,
   BandSupportFromNull
} BandSupportSource;

void L1D_RF_GetAFCData( void *data_buffer );

#if IS_TXPC_CL_AUXADC_SUPPORT || IS_TXPC_CL_BSI_SUPPORT
#define L1D_RF_TXPC_CL_GET_ALL_ADC( buff, is_EPSK )                                                \
{  L1D_RF_TXPC_CL_GetAllADC( buff, is_EPSK );                                                      \
}

#define L1D_RF_TXPC_CL_GET_ALL_TEMP( buff, is_EPSK )                                               \
{  L1D_RF_TXPC_CL_GetAllTEMP( buff, is_EPSK );                                                     \
}
#else
#define L1D_RF_TXPC_CL_GET_ALL_ADC( buff, is_EPSK )                                                {;}
#define L1D_RF_TXPC_CL_GET_ALL_TEMP( buff, is_EPSK )                                               {;}
#endif

#if IS_TXPC_OL_BSI_SUPPORT || IS_TXPC_OL_AUXADC_SUPPORT
#define L1D_RF_TXPC_OL_GET_TEMPERATURE( buff )                                                     \
{  (buff)->temperature = ref_temperature;                                                          \
}
#else
#define L1D_RF_TXPC_OL_GET_TEMPERATURE( buff )                                                     {;}
#endif

#if IS_TX_POWER_CONTROL_SUPPORT
#define L1D_RF_TXPC_GET_FLAG( buff )                                                               \
{  (buff)->is_calibrated = is_txpc_calibrated;                                                     \
}
#else
#define L1D_RF_TXPC_GET_FLAG( buff )                                                               {;}
#endif

#if IS_TX_GAIN_RF_CALIBRATION_SUPPORT
void L1D_RF_GetGainRF( l1cal_gainrf_T *buff );
#endif

void L1D_PcoreNvramUpdate2SHM( kal_uint32 );

#if IS_RX_POWER_OFFSET_SUPPORT
void L1D_RF_SetPathLoss_Offset_Table_Pcore( int rf_band, void *table );
#endif/*IS_RX_POWER_OFFSET_SUPPORT*/
#endif /*End of _M12190_PCORE_H_ */
