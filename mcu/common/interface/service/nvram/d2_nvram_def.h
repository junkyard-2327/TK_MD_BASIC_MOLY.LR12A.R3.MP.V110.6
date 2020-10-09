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
 * 
 *
 * Project:
 * --------
 *   MAUI
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __D2_NVRAM_DEF_H__
#define __D2_NVRAM_DEF_H__

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 


#include "nvram_defs.h"
#include "nvram_enums.h"
#include "ps_public_enum.h"
#include "device.h"
// LID Enums


typedef enum
{
        NVRAM_EF_D2_START_LID           = NVRAM_LID_GRP_D2(0),
        NVRAM_EF_D2_DATA_LID           = NVRAM_LID_GRP_D2(1),
        NVRAM_EF_D2_APNINFO_LID   = NVRAM_LID_GRP_D2(2),
        NVRAM_EF_D2_FOP_LID              = NVRAM_LID_GRP_D2(3),
        NVRAM_EF_D2_DEFAULT_PDP_PROFILE_LID              = NVRAM_LID_GRP_D2(4),
        NVRAM_EF_D2_APNSETTING_LID              = NVRAM_LID_GRP_D2(5),
        NVRAM_EF_D2_DDM_QOS_IND_LID              = NVRAM_LID_GRP_D2(6),
        NVRAM_EF_D2_LAST_LID           = NVRAM_LID_GRP_D2(63)
} nvram_lid_d2m_enum;

// VERNO
#define NVRAM_EF_D2_DATA_LID_VERNO                          "000"
#define NVRAM_EF_D2_APNINFO_LID_VERNO                  "000"
#define NVRAM_EF_D2_FOP_LID_VERNO                  "000"
#define NVRAM_EF_D2_DEFAULT_PDP_PROFILE_LID_VERNO                  "000"
#define NVRAM_EF_D2_APNSETTING_LID_VERNO   "000"
#define NVRAM_EF_D2_DDM_QOS_IND_LID_VERNO   "000"

// Data Structure of Each LID
typedef struct
{
    kal_uint8 iccid[128];
} nvram_d2_data_struct;

typedef struct
{
    kal_uint8 iccid[128];
    kal_uint8 apn[128];
    kal_uint8 apn_type[128];
    kal_uint8 pdp_type[128];
    kal_uint8 roam_prot[128];
    kal_uint8 auth_type;
    kal_uint8 username[128];
    kal_uint8 passwd[128];
    kal_uint8 p_cscf_discovery;
    kal_uint8 im_cn_signalling_flag;
    kal_uint8 emergency_flag;
} nvram_d2_apninfo_struct;

typedef struct
{
    kal_uint32 fop;
} nvram_d2_fop_struct;

// 1 for each SIM
typedef struct
{
    kal_uint8 qos_enabled_value;
    kal_uint8 qos_data_string[255];
} nvram_ddm_qos_enable_struct;

typedef struct
{
    kal_uint8 context_id;
    kal_uint8 pdp_type[10];
    kal_uint8 apn_len;
    kal_uint8 apn[100];
    kal_uint8 p_cscf_discovery;
    kal_uint8 im_cn_signalling_flag;
    kal_uint8 request_type;
    kal_uint8 emergency_flag;
    kal_uint8 auth_type;
    kal_uint8 username[128];
    kal_uint8 passwd[128];
} nvram_d2_default_pdp_profile_struct;

typedef struct
{    
    kal_uint32  wapn;
    kal_uint8 apn[128];
    kal_uint8 pdp_type[128];
    kal_uint8 roam_prot[128];
    kal_uint8 auth_type;
    kal_uint8 username[128];
    kal_uint8 passwd[128];
    kal_uint8 carrier_enabled;
    kal_uint32  apncl;
    kal_uint8 apnni[128];
    kal_uint8 apn_type[128];
    kal_uint8 apnbear[128];
    kal_uint8 apnenable[128];
    kal_uint32  apntime;
    kal_uint32  max_conn;
    kal_uint32  max_conn_t;
    kal_uint32  wait_time;
    kal_uint32  throttle_time;
} nvram_d2_apnsetting_struct;

// Size and Total 
#define NVRAM_EF_D2_DATA_SIZE      sizeof(nvram_d2_data_struct)
#define NVRAM_EF_D2_DATA_TOTAL     1
#define NVRAM_EF_D2_APNINFO_SIZE      sizeof(nvram_d2_apninfo_struct)
#define NVRAM_EF_D2_APNINFO_TOTAL     (1*MAX_SIM_NUM)
#define NVRAM_EF_D2_FOP_SIZE      sizeof(nvram_d2_fop_struct)
#define NVRAM_EF_D2_FOP_TOTAL     1
#define NVRAM_EF_D2_DEFAULT_PDP_PROFILE_SIZE sizeof(nvram_d2_default_pdp_profile_struct)
#define NVRAM_EF_D2_DEFAULT_PDP_PROFILE_TOTAL (1*MAX_SIM_NUM)
#define NVRAM_EF_D2_APNSETTING_SIZE sizeof(nvram_d2_apnsetting_struct)
#define NVRAM_EF_D2_APNSETTING_TOTAL  (8*MAX_SIM_NUM)
#define NVRAM_EF_D2_DDM_QOS_IND_SIZE sizeof(nvram_ddm_qos_enable_struct)
#define NVRAM_EF_D2_DDM_QOS_IND_TOTAL (1*MAX_SIM_NUM)

#ifdef __cplusplus
}
#endif 

#endif /* __D2_NVRAM_DEF_H__ */ 
