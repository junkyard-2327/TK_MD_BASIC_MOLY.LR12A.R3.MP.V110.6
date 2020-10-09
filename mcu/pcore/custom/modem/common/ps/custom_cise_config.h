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
 * custom_cise_config.h
 *
 * Project:
 * --------
 *   MONZA
 *
 * Description:
 * ------------
 *   This file is used to define the CISE configuration.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------

 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef _CUSTOM_CISE_CONFIG_H
#define _CUSTOM_CISE_CONFIG_H

#include "kal_general_types.h"

#include "custom_rrce_config.h"

/* The number of specific channels */
#define NUM_OF_SPECIFIC_CHANNELS    4
#define NUM_OF_UMTS_BANDS           22
#define NUM_OF_UMTS_TDD_BANDS       6

/* predefined stored uarfcn list length for customization */
#define CUSTOM_PREDEFINE_FREQ_LIST_NUM 20

#define BAND_PRIORITY_LENGTH_IN_BYTES (26) 

/*************************************************************************
* Structure definitions
*************************************************************************/
typedef struct custom_plmnid_priority_table_type
{
   custom_plmn_list            custom_plmn_id; 
   kal_uint8 band_priority[BAND_PRIORITY_LENGTH_IN_BYTES];
} custom_plmnid_priority_table_type;

/*************************************************************************
* Function
*************************************************************************/

extern kal_bool CSCE_IsSupportStdFR(void);

extern kal_bool uas_custom_is_specific_channel_srch(void);
extern kal_bool uas_custom_is_34G_pingpong_restrain(void);

#ifdef __AS_SPECIFIC_CHANNEL_SRCH__
extern void uas_custom_set_specific_channel_srch( kal_bool set_value );
#endif /* __AS_SPECIFIC_CHANNEL_SRCH__ */
#ifdef __34G_PINGPONG_RESTRAIN__
extern void uas_custom_set_34G_pingpong_restrain( kal_bool set_value );
#endif /* __AS_SPECIFIC_CHANNEL_SRCH__ */

extern kal_bool uas_custom_get_specific_channel( kal_uint8 band, kal_uint16 *specificChannel);
extern kal_bool uas_custom_set_specific_channel( kal_uint8 band, kal_uint16 *specificChannel);
extern kal_bool tdd_uas_custom_get_specific_channel(kal_uint8 band, kal_uint16 *specificChannel);
extern kal_bool tdd_uas_custom_set_specific_channel(kal_uint8 band, kal_uint16 *specificChannel);

extern kal_uint8 tdd_uas_custom_get_predefined_freq(kal_uint16 *preDefinedFreqList);

extern kal_bool fdd_uas_custom_plmn_for_csfb_combined_search(void* plmn_id);

kal_uint8 * fdd_uas_custom_get_band_priority_for_plmn(void* plmn_id);

#endif /* _CUSTOM_CISE_CONFIG_H */

