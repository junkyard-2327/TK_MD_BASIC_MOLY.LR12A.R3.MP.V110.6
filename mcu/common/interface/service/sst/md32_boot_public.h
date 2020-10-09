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
 *   md32_boot.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This Module defines the HW initialization.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *
 *
 *
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*******************************************************************************
 * Include header files.
 *******************************************************************************/
#ifndef MD32_BOOT_PUBLIC_H
#define MD32_BOOT_PUBLIC_H

typedef enum {
	CORE_USIP,
	CORE_RAKE,
	CORE_SCQ16,
	CORE_NUM,
	CORE_MAX = 0xFFFFFFFF,
} MD32_CORE_TYPE;

#ifndef __MD32_PBP__
#define HWITC_START kal_hrt_take_itc_lock(KAL_ITC_DSP_DOWNLOAD , KAL_INFINITE_WAIT)
#define HWITC_END kal_hrt_give_itc_lock(KAL_ITC_DSP_DOWNLOAD)

#include "kal_public_api.h"

#if defined(MT6763)|| defined(MT6739) || defined(MT6771) || defined(MT6295M) || defined(MT6765) || defined(MT6761) || defined(MT6768)
	#define SCQ_PM_CRC32_OFFSET   0x20
	#define SCQ_DM_CRC32_OFFSET   0x24
	#define SCQ_GLOBAL_CON_base   BASE_MADDR_BRAM_SCQ_GLOBAL_CON
	#define SHARE_PM_base         BASE_MADDR_BRAM_SCQ_SHARED_PM
	#define SHARE_DM_base         BASE_MADDR_BRAM_SCQ_SHARED_DM
	#define PRIVATE_DM0_base      BASE_MADDR_BRAM_SCQ0_LOCAL_DM
	#define PRIVATE_DM1_base      BASE_MADDR_BRAM_SCQ1_LOCAL_DM
	#define SCq16_0_CTRLREGS_base BASE_MADDR_BRAM_SCQ0_VU_CR
	#define SCq16_1_CTRLREGS_base BASE_MADDR_BRAM_SCQ1_VU_CR
#else
	#error "need to define address for new chip"
#endif


/****************************/
/*********** Init ***********/
/****************************/
extern kal_int32 MD32_Init();


/****************************/
/********** Loader **********/
/****************************/
typedef enum {
    MD32_LOADER_RAKE_RET_OK,
    MD32_LOADER_USIP_RET_OK,
    MD32_LOADER_RAKE_DDL_RET_OK,
    MD32_LOADER_UNGATE_RET_OK,
    MD32_LOADER_RET_DMA_RUNNING,
    MD32_LOADER_RET_ERR,
} MD32_LOADER_RET;

extern MD32_LOADER_RET RAKE_Load();
extern MD32_LOADER_RET USIP_Load();
extern MD32_LOADER_RET MD32_Ungate(MD32_CORE_TYPE md32_core);
//MD32_LOADER_RET MD32_BootByDMA(MD32_BIN_TYPE *md32_bins, kal_uint32 bin_num);
extern void Init_uSIP_bootuppattern();
extern kal_bool is_rake_user_using_ddl_api();
extern kal_bool can_sleep_flow_active_rake();
extern kal_bool DSP_IsFirstMpuSettingDone(void);
/****************************/
/********** Query ***********/
/****************************/
typedef enum {
   MD32_3G_FDD,
   MD32_3G_TDD,
} MD32_3G_MODE;

typedef struct {
   kal_uint32 pm_com;
   kal_uint32 dm_com;
   kal_uint32 pm_3g;
   kal_uint32 dm_3g;
   kal_uint32 pm_lte;
   kal_uint32 dm_lte;
   kal_uint32 pm_unused;
   kal_uint32 dm_unused;
} MD32_MEM_STATUS;

const MD32_MEM_STATUS *MD32_GetBRPMemStatus(MD32_3G_MODE mode);
const MD32_MEM_STATUS *MD32_GetDFEMemStatus(void);
const MD32_MEM_STATUS *MD32_GetDFE1MemStatus(void);
//kal_bool MD32_IsMD32Running(MD32_BIN_TYPE md32_type);

/****************************/
/********* Version **********/
/****************************/
/*
const kal_char *MD32_GetProject(MD32_BIN_TYPE md32_type);
const kal_char *MD32_GetFlavor(MD32_BIN_TYPE md32_type);
const kal_char *MD32_GetLabel(MD32_BIN_TYPE md32_type);
const kal_char *MD32_GetBuildTime(MD32_BIN_TYPE md32_type);
*/

/****************************/
/********* RTLCOSIM *********/
/****************************/
#define BRP_RTLCOSIM_LTE (0x1)
#define BRP_RTLCOSIM_FDD (0x1<<1)
#define BRP_RTLCOSIM_TDD (0x1<<2)

//void MD32_SetBRPMode_RTLCOSIM(kal_uint32 mode);
//void MD32_Ungate_RTLCOSIM(MD32_BIN_TYPE md32_type);
#endif /* __MD32_PBP__ */

#endif  /* MD32_BOOT_PUBLIC_H */
