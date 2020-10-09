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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __SIM_NVRAM_DEF_H__
#define __SIM_NVRAM_DEF_H__

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
        NVRAM_EF_SIM_ASSERT_LID                 = NVRAM_LID_GRP_SIM(0), // __REL10__: t3346     
        NVRAM_EF_TEST_SIM_LID                   = NVRAM_LID_GRP_SIM(1),
        NVRAM_EF_REGISTRATION_MODE_LID          = NVRAM_LID_GRP_SIM(2), /* ERMODE */
        NVRAM_EF_SIM_DISABLE_SLOT_BITMASK_LID   = NVRAM_LID_GRP_SIM(4),
        NVRAM_EF_SIM_DISABLE_ICCID_LIST_LID     = NVRAM_LID_GRP_SIM(5),
        NVRAM_EF_SIM_FAKE_IMSI_LID              = NVRAM_LID_GRP_SIM(6),
        NVRAM_EF_SIM_LAST_LID                   = NVRAM_LID_GRP_SIM(63)
}nvram_lid_sim_enum;

// VERNO
#define NVRAM_EF_SIM_ASSERT_LID_VERNO                        "000"
#define NVRAM_EF_TEST_SIM_LID_VERNO                          "000"
#define NVRAM_EF_SIM_DISABLE_SLOT_BITMASK_LID_VERNO          "000"
#define NVRAM_EF_SIM_DISABLE_ICCID_LIST_LID_VERNO            "000"
#ifdef __KOR_CUSTOMIZATION__
#define NVRAM_EF_REGISTRATION_MODE_LID_VERNO                 "000"
#endif
#ifdef __FAKEID_SUPPORT__
#define NVRAM_EF_SIM_FAKE_IMSI_LID_VERNO                     "000"
#endif
// Size and Total 
/*
 * SIM log
 */
#define NVRAM_EF_SIM_ASSERT_SIZE  16
#if defined(LOW_COST_SUPPORT)
#define NVRAM_EF_SIM_ASSERT_TOTAL 10
#else
#define NVRAM_EF_SIM_ASSERT_TOTAL 80
#endif

typedef struct{
    kal_uint8   test_sim;
}nvram_test_sim_struct;

#define NVRAM_EF_TEST_SIM_TOTAL  1
#define NVRAM_EF_TEST_SIM_SIZE   sizeof(nvram_test_sim_struct)

typedef struct{
    kal_uint8   off_slot_bitmask;
}nvram_disable_slot_bitmask_struct;

#define NVRAM_EF_SIM_DISABLE_SLOT_BITMASK_TOTAL    1
#define NVRAM_EF_SIM_DISABLE_SLOT_BITMASK_SIZE     sizeof(nvram_disable_slot_bitmask_struct)

#define SIM_MAX_DISABLED_ICCID_REC_NUM    20

typedef struct{
    kal_uint8   iccid_list[10*SIM_MAX_DISABLED_ICCID_REC_NUM]; /* ciphered ICCID */
} nvram_disable_iccid_list_struct;

#define NVRAM_EF_SIM_DISABLE_ICCID_LIST_TOTAL      1
#define NVRAM_EF_SIM_DISABLE_ICCID_LIST_SIZE       sizeof(nvram_disable_iccid_list_struct)

#ifdef __KOR_CUSTOMIZATION__
/* ERMODE */
typedef struct
{
    kal_uint8 registration_mode;
} nvram_ef_registration_mode_struct;

#define NVRAM_EF_REGISTRATION_MODE_TOTAL      (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_REGISTRATION_MODE_SIZE       sizeof(nvram_ef_registration_mode_struct)
#endif

#ifdef __FAKEID_SUPPORT__
typedef struct
{
    kal_uint8 fake_mnc_length;
    kal_uint8 fake_imsi[9];
} nvram_fake_imsi_struct;

#define NVRAM_EF_FAKE_IMSI_TOTAL      (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_FAKE_IMSI_SIZE       sizeof(nvram_fake_imsi_struct)
#endif

#ifdef __cplusplus
}
#endif 

#endif /* __SIM_NVRAM_DEF_H__ */ 
