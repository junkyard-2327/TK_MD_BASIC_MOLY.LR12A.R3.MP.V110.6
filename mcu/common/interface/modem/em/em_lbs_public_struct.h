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
 * Filename:
 * ---------
 *   em_lbs_public_struct.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   LBS and AGPS related engineer mode public structures
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *              HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#ifndef __EM_LBS_PUBLIC_STRUCT_H__
#define __EM_LBS_PUBLIC_STRUCT_H__

#include "em_public_struct.h"


/* For EM_LBS_GPS_OPEN_STATISTIC */
typedef enum{
    EM_LBS_GPS_STATE_NULL,
    EM_LBS_GPS_STATE_WAIT_OPEN_CNF,
    EM_LBS_GPS_STATE_OPENED,
    EM_LBS_GPS_STATE_WAIT_CLOSE_CNF,
    EM_LBS_GPS_STATE_CLOSED,
    EM_LBS_GPS_STATE_SIZE
} em_lbs_gps_state_enum;

typedef enum
{
    EM_LBS_GPS_OPEN_IND_NILR,
    EM_LBS_GPS_OPEN_IND_MTLR,
    EM_LBS_GPS_OPEN_IND_MOLR,
    EM_LBS_GPS_OPEN_IND_QUERY,
    EM_LBS_GPS_OPEN_IND_MLR,
    EM_LBS_GPS_OPEN_IND_SIZE
} em_lbs_gps_open_type_enum;

typedef enum
{
    EM_LBS_MLR_SRC_EMPTY = 0x00,
    EM_LBS_MLR_SRC_DHL = 0x01,
    EM_LBS_MLR_SRC_WFC = 0x02,
    EM_LBS_MLR_SRC_MDT = 0x04,
    EM_LBS_MLR_SRC_SIZE = 3
} em_lbs_mlr_src_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                em_info;
    em_lbs_gps_state_enum       cur_gps_state;
    em_lbs_gps_open_type_enum   cur_open_ind;
    em_lbs_mlr_src_enum         cur_mlr_src;
    kal_uint8                   open_ind_count_size;
    kal_uint32                  open_ind_count[EM_LBS_GPS_STATE_SIZE];
    kal_uint8                   mlr_src_count_size;
    kal_uint32                  mlr_src_count[EM_LBS_MLR_SRC_SIZE];
} em_lbs_gps_open_statistic_ind_struct;

/* For EM_LBS_LR_STATISTIC */
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum     em_info;
    kal_uint32       ni_lr_success;
    kal_uint32       ni_lr_fail;
    kal_uint32       mo_lr_success;
    kal_uint32       mo_lr_fail;
    kal_uint32       mt_lr_success;
    kal_uint32       mt_lr_fail;
} em_lbs_lr_statistic_ind_struct;

/* For EM_LBS_AP_SETTING */
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum     em_info;
    /* Data part is same as agps_md_sim_info_req */
    kal_uint8        cp_gsm_disabled;
    kal_uint8        cp_umts_disabled;
    kal_uint8        cp_lte_disabled;
    kal_uint8        cp_lppe_enable;
    kal_uint8        lppe_network_location_disable;
    kal_uint8        reject_non911_nilr_enable;
    kal_uint8        battery_percentage;
} em_lbs_ap_setting_ind_struct;
#endif /* __EM_LBS_PUBLIC_STRUCT_H__ */

