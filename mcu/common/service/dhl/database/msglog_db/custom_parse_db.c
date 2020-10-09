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
 * custom_parse_db.c
 *
 * Project:
 * --------
 * MOLY
 *
 * Description:
 * ------------
 * This file collects the customer module/primitve information to be included
 * in the database.
 * The enum id for module type is "customer_module_type".
 *
 * Author:
 * -------
 * -------
 *
 * =============================================================================
 * $Log$
 *
 * 11 04 2019 danny.kuo
 * [MOLY00456947] DMF功能新增??后modem reset
 * 	
 * 	.
 *
 * 02 16 2017 clin.yang
 * [MOLY00229520] [Gen93][EM][CVAL] EM Development of C2K VAL task.
 *
 * 01 23 2017 danny.dai
 * [MOLY00226183] [new feature]C2K EM Develop: EM common header files
 * 	
 * 	C2K EM: common header files
 *
 * 09 23 2016 yu-hsiang.peng
 * [MOLY00185213] [MT6293] DHL MT6292 SW logging migrate to MT6293 & MT6293 ULSP logging development
 * [UMOLYA.TRUNK] remove cgen define
 *
 * 06 09 2014 ken.liu
 * [MOLY00062708] [DHL] enable L1Boxster support.
 * fix syntax error.
 *
 * 06 09 2014 ken.liu
 * [MOLY00062708] [DHL] enable L1Boxster support.
 * re-enable l1 boxster.
 *
 * 04 29 2014 ken.liu
 * [MOLY00062708] [DHL] enable L1Boxster support.
 * rollback L1boxster to align ELT support.
 *
 * 04 16 2014 ken.liu
 * [MOLY00062708] [DHL] enable L1Boxster support.
 * enable l1boxster by default.
 *
 * 04 15 2014 ken.liu
 * [MOLY00062708] [DHL] enable L1Boxster support.
 * Disable l1boxster by default due to incorrect usage of L1 trace API in AST L1 module.
 *
 * 04 15 2014 ken.liu
 * [MOLY00062708] [DHL] enable L1Boxster support.
 * enable L1Boxster support and optimization.
 *
 * 11 11 2013 chun-hao.yeh
 * [MOLY00040834] [MT6290 E2] check in patch for MT6290 E2 bring-up
 * [MT6290 E2][L1S] resolve 嚙踝蕭WCDMA PRACH Tx Temperature Compensation setting嚙踝蕭 upload/download failure in MTEA.
 *
 * 06 20 2013 mojo.lai
 * [MOLY00026719] Support read memory in word access and half word access
 * .
 *
 * 06 03 2013 ken.liu
 * [MOLY00024730] DHL multimode engineering mode and air message logging support
 * add msg id to em_info_enum mapping table.
 *
 * 01 29 2013 chin-chieh.hung
 * [MOLY00008069] MT7208 sleep_drv support
 * fix atest_drv build failed because the multimode code merge
 *
 * 01 29 2013 ken.liu
 * [MOLY00009212] LTE Multimode merge back to MOLY
 * add log header.
 *
 *******************************************************************************/
#ifdef _MODIS_ON_VC9_
#define __w64
#endif


typedef int cgen_use_spare_msg_id;
typedef int cgen_use_spare_sap_id;
typedef int cgen_use_spare_module_id;
typedef unsigned short msg_type;
typedef unsigned short sap_type;
typedef unsigned short module_type;


#ifdef __GNUC__
  typedef struct __va_list { void *__ap; } __builtin_va_list;
  #define INLINE __inline
  #define inline __inline
#endif

#define __declspec(s)

#ifdef __RVCT__
#ifndef __int64
   typedef  long long __int64;
#endif

#define _ARMABI
#endif

#include "kal_public_api.h"
#include "kal_public_defs.h" //MSBB change #include "stack_msgs.h"
#include "sap_info.h"
#include "msg_id_to_em_info_map.h"

#include "stack_ltlcom.h"

#include "l4c2uem_struct.h"

#ifndef NVRAM_NOT_PRESENT
#include "nvram_gen_trc.h"
#endif

// #ifndef __L1_STANDALONE__
#include "nvram_data_items.h"
#include "ex_item.h"

#if defined (__MMI_FMI__)
    #include "nvram_common_defs.h"
    #include "nvram_user_defs.h"
    #include "common_nvram_editor_data_item.h"
    #include "custom_nvram_editor_data_item.h"
#endif

#include "nvram_editor_data_item.h"
#include "nvram_editor.h"
// #endif /* __L1_STANDALONE__ */



#if !defined(__MAUI_BASIC__)&&(defined(__DHL_MODULE__)||defined(__TST_MODULE__))
#include "custom_nvram_database.h"
#endif

/*Add for CustPack*/
#include "resource_audio.h"

//Add here for global enum re-composition
#include "module_msg_range.h"
#include "sap_range.h"

#include "tst_msgid.h"
#include "md_svc_sap.h"

#ifdef __CDMA2000_RAT__
/* Add C2K EM headers */
#include "em_public_struct_evl1.h"
#include "em_public_struct_xl1.h"
#include "em_public_struct_chsc.h"
#include "em_public_struct_evl2.h"
#include "em_public_struct_xl2.h"
#include "em_public_struct_evl3.h"
#include "em_public_struct_xl3.h"
#include "em_public_struct_c2k_hlp.h"
#include "em_public_struct_cval.h"
#endif /* __CDMA2000_RAT__ */

#include "atp_dmf_struct.h"

