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
#ifndef MD32_BOOT_H
#define MD32_BOOT_H

#include "md32_boot_public.h"
#include "md32_file.h"
#include "reg_base.h"
#include "dsp_control_public.h"
#define REG_WRITE32(addr, val) do{*((volatile kal_uint32 *)(addr)) = val;}while(0)
#define REG_READ32(var, addr) do{var = *((volatile kal_uint32 *)(addr));}while(0)
#define MD32_LOADER_REG(ptr)  (*(volatile kal_uint32*)(ptr))

/* MD32 core sys */
//#define MD32_RAKE_SYS           (BASE_MADDR_RAKE)
#define MD32_NUM    1	

/* platform dependent setting*/
#if defined(MT6763)|| defined(MT6739) || defined(MT6771)  || defined(MT6295M) || defined(MT6765) || defined(MT6761) || defined(MT6768)
#define MD32_MAGIC_KEY          (0x62930000)
#else
#error "Unknown Platform!!"
#endif

/* MD32 offset */
#define MD32_PM             (0x00380000)
#define MD32_DM             (0x003E0000)
#define MD32_CMIF           (0x00358000)
#define MD32_BTSLV          (0x35100C)
#define MD32_DBG_EN			(0x351010)
#define MD32_DMP_EN 		(0x35101C)
#define MD32_PERI_CTRL  	(0x351000)

#define MD32_RAKE_PM             (0x00380000)
#define MD32_RAKE_DM             (0x003E0000)
#define MD32_RAKE_BTSLV          (0x35100C)
#define MD32_RAKE_POWER  	 (0x351004)
#define MD32_RAKE_PM_CRC         (0x50)
#define MD32_RAKE_DM_CRC         (0x54)
#define MD32_RAKE_PM_CIPHER_EN   (0xB0)
#define MD32_RAKE_PM_CIPHER_LOCK (0xB4)

#define MD32_SCQ_SHARE_PM        (0xA9800000)
#define MD32_SCQ_SHARE_DM        (0xA9A00000)
#define MD32_SCQ_PM_CIPHER_EN    (0xC0)
#define MD32_SCQ_PM_CIPHER_LOCK  (0xC4)

#define MD32_USIP0_TH0_BTSLV     (0x400)
#define MD32_USIP0_TH1_BTSLV     (0x404)
#define MD32_USIP1_TH0_BTSLV     (0x408)
#define MD32_USIP1_TH1_BTSLV     (0x40C)

#if defined(TK6291)
#define BRP_PM_SZ           (0x40000)
#define BRP_DM_SZ           (0x30000)
#define BRP_CMIF_SZ         (0x2000)
#define DFE_PM_SZ           (0x20000)
#define DFE_DM_SZ           (0x10000)
#define DFE_CMIF_SZ         (0x8000)
#define RAKE_PM_SZ           (0x14000)
#define RAKE_DM_SZ           (0xC000)
#define RAKE_CMIF_SZ         (0x1000)
#elif defined(ELBRUS)|| defined(MT6763)|| defined(MT6739) || defined(MT6771)  || defined(MT6295M) || defined(MT6765) || defined(MT6761) || defined(MT6768)
	#define MD32_MDRXAO_MEM_CONFIG  BASE_MADDR_MODEML1_AO_MDRX_P2P_TX
	#define MD32_RAKE_SYS           BASE_MADDR_RAKESYS_RAKE_INST_DEC
	#define MD32_RAKE_GLOBAL_CON    BASE_MADDR_RAKESYS_GLOBAL_CON

	#define MD32_USIP_SYS           BASE_MADDR_MDMCU_USIP_CROSS_CORE_CTRL
	
	#define MD32_KB                  (1024)
	#define RAKE_PM_SZ           (96 * MD32_KB)
	#define RAKE_DM_SZ           (48 * MD32_KB)
	#define RAKE_CMIF_SZ         (8 * MD32_KB)

#else
#error "Unknown Platform!!"
#endif

#if defined(__MD32_PM_PROTECT_SUPPORT__)
#define MD32_PM_PROTECT_EN_OFF       (0x351020)
#define MD32_PM_PROTECT_BNK_OFF      (0x351024)
#define MD32_PM_PROTECT_INSTR_OFF    (0x351028)
#define MD32_UDF_INST_VAL            (0x00F400F4)
#endif /* __MD32_PM_PROTECT_SUPPORT__ */

/* MD32 setting */
#define MD32_PERI_CTRL_MAGIC	(0x80A180A1)
#define MD32_DFE_MEM_BNK_SZ			(16 * 1024)
#define MD32_BRP_MEM_BNK_SZ			( 8 * 1024)
#define MD32_ENABLE		(MD32_MAGIC_KEY | 0x1)
#define MD32_DISABLE	(MD32_MAGIC_KEY | 0x0)

typedef struct {
	unsigned long start;
	unsigned long hwitc_start_end;
	unsigned long who_use_gdma;
	unsigned long who_wait_gdma;
	unsigned long activeate_LISR_before;
	unsigned long activeate_LISR_end;
	unsigned long hwitc_end_before;
	unsigned long hwitc_end_end;
	unsigned long end;
} CB_Time_Info_T;

typedef struct {
	unsigned long start;
	unsigned long who_use_gdma;
	unsigned long check;
	unsigned long config;
	unsigned long ddl;
	unsigned long data_sync;
	unsigned long gdma_set_config;
	unsigned long gdma_start_cmd;
	unsigned long enablc_clk;
	unsigned long send_interrupt;
	unsigned long end;
} CB_DDL_Time_Info_T;

typedef enum
{
    LOADER_SRAM_TYPE_PM  = 0,
    LOADER_SRAM_TYPE_DM  = 1,
} LOADER_SRAM_TYPE;

typedef struct {
	unsigned long dump_en;
	unsigned long gate_status;
	unsigned long golden_pm_crc;
	unsigned long golden_dm_crc;
	unsigned long reg_pm_crc;
	unsigned long reg_dm_crc;
	unsigned long ori_pm_crc;
	unsigned long ori_pm;
	unsigned long ori_dm_crc;
	unsigned long ori_dm;
	unsigned long new_pm_crc;
	unsigned long new_pm;
	unsigned long new_dm_crc;
	unsigned long new_dm;
	unsigned long end_pm;
	unsigned long end_dm;
	DDL_MODE ddl_mode;
	LOADER_SRAM_TYPE sram_type;

} CRC_DBG_Info_T;
#endif  /* MD32_BOOT_H */

