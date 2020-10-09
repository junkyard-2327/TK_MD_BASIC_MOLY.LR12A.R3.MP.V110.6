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
 * Filename:
 * ---------
 *   mrs_as_inter_core_struct.h
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
 *------------------------------------------------------------------------------
 * $Log$
 *
 * 09 03 2018 muneeswaraiah.dama
 * [MOLY00348278] [Operator][Camilo][MPCS][F4L][B71]Patch that enable band locking via AT commands
 * .
 *
 * 11 10 2016 vend_mtb_aricent_05
 * [MOLY00212319] [MT6293] Channel Lock feature porting and enhancement -MRS
 * 	
 * 	.
 *
 *
 ******************************************************************************/

#ifndef __MRS_AS_INTER_CORE_STRUCT_H__
#define __MRS_AS_INTER_CORE_STRUCT_H__

#include "as_inter_core_enum.h"


#include "mrs_as_inter_core_enum.h"
#include "global_type.h"

/*****************************************************************************
 * GSM Inter-Core Definitions
 *****************************************************************************/
/* power_class_struct is used by ERRC */
typedef struct{
    mrs_gsm_power_class_enum  pow_class_band450;
    mrs_gsm_power_class_enum  pow_class_band480;
    mrs_gsm_power_class_enum  pow_class_band710;
    mrs_gsm_power_class_enum  pow_class_band750;
    mrs_gsm_power_class_enum  pow_class_band810;
    mrs_gsm_power_class_enum  pow_class_band850;
    mrs_gsm_power_class_enum  pow_class_band900P;
    mrs_gsm_power_class_enum  pow_class_band900E;
    mrs_gsm_power_class_enum  pow_class_band900R;
    mrs_gsm_power_class_enum  pow_class_band1800;
    mrs_gsm_power_class_enum  pow_class_band1900;
}mrs_gsm_power_class_struct;

/*****************************************************************************
 * UMTS Inter-Core Definitions
 *****************************************************************************/
 
 /*****************************************************************************
 * LTE Inter-Core Definitions
 *****************************************************************************/
 
 /****************************************************************************
 * CHANNEL LOCK FEATURE
 ****************************************************************************/
#ifdef __CHANNEL_LOCK__
typedef struct
{
    EARFCN earfcn;
    kal_uint16 pci;
} mrs_ch_lock_eas_info_struct;

typedef struct
{
    kal_uint16 uarfcn;
    kal_uint16 psc;
} mrs_ch_lock_uas_info_struct;

typedef struct
{
    kal_uint16 arfcn;
    kal_uint8 band_indicator;
} mrs_ch_lock_gas_info_struct;


typedef struct
{
    MRS_CH_LOCK_STATE lock_state;
    mrs_ch_lock_eas_info_struct eas_info;
    mrs_ch_lock_uas_info_struct uas_info;
    mrs_ch_lock_gas_info_struct gas_info;
    kal_uint8 lock_mode;    
} mrs_ch_lock_info_struct;
#endif /*__CHANNEL_LOCK__ */

#endif /* __MRS_AS_INTER_CORE_STRUCT_H__ */
