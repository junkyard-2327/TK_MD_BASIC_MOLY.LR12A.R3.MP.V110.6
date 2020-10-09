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
 *   mddbg_pulbic.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   Modem debugging related implementation
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __MDDBG_PUBLIC_H__
#define __MDDBG_PUBLIC_H__

#if (defined(__MTK_SECURE_PLATFORM__) || defined(__PRODUCTION_RELEASE__) || !defined(__MTK_TARGET__) || !defined(__MIPS_IA__)) 
    #define DISABLE_MDDBG_FUNCTION
#endif


typedef enum MDDBG_HDL_TYPE_e {   
    MDDBG_HT_MEMDUMP,
    MDDBG_HT_LOG,
    MDDBG_HT_MAX,
} MDDBG_HDL_TYPE;

typedef enum MDDBG_WP_ACCESS_TYPE_e {
    MDDBG_WAT_WRITE = 1,
    MDDBG_WAT_READ,  
    MDDBG_WAT_RW,
} MDDBG_WP_ACCESS_TYPE;

typedef enum MDDBG_WP_MONITOR_BYTE_e {
    MDDBG_WMB_1BYTE = 1,
    MDDBG_WMB_2BYTES,
    MDDBG_WMB_3BYTES,
    MDDBG_WMB_4BYTES,
    MDDBG_WMB_MAX,
} MDDBG_WP_MONITOR_BYTE;

typedef enum MDDBG_RESULT_e {
    MDDBG_SUCCESS,
    MDDBG_INVALID_PARAM,
    MDDBG_BP_TOO_MANY,
    MDDBG_BP_ALREADY_ENABLED,
    MDDBG_BP_ALREADY_DISABLED,
    MDDBG_WP_TOO_MANY,
    MDDBG_WP_MON_OUT_OF_RANGE,
    MDDBG_VPE_INDEX_OUT_OF_RANGE,
    MDDBG_BP_INDEX_OUT_OF_RANGE,
    MDDBG_WP_INDEX_OUT_OF_RANGE,
    MDDBG_SHOULD_NOT_CALL_IN_SYSTEMINIT,
} MDDBG_RESULT;

typedef enum MDDBG_BP_NUM_e{
    MDDBG_BP_0,
    MDDBG_BP_1,
}MDDBG_BP_NUM;

typedef enum MDDBG_WP_NUM_e{
    MDDBG_WP_0,
   // MDDBG_WP_1,   // 6292: this one used by stack protection
}MDDBG_WP_NUM;


typedef struct mddbg_bp_info {
    kal_uint32 address;
    kal_bool enable;
} mddbg_bp_info_st;

typedef struct mddbg_wp_info {
    kal_uint32 address;
    kal_uint32 mask;
    MDDBG_WP_ACCESS_TYPE access_type;
    kal_bool enable;
} mddbg_wp_info_st;

typedef struct mddbg_reg_t{
    kal_uint32 ctrl_addr;
    kal_uint32 watchHi;
    kal_uint32 queryNum;
}mddbg_reg_t;

#define CONFIG_TAG_WATCHLO  18  // to configure address
#define CONFIG_TAG_WATCHHI  19  // to configure control fields

#define CONFIG_TAG_BP0  0   // should not be used here, because used as stack protection. Check: KAL_WATCHPOINT_3_SET
#define CONFIG_TAG_BP1  1   
#define CONFIG_TAG_WP0  2
#define CONFIG_TAG_WP1  3

#define CONFIG_ADDRESS(addr)    (addr << 3)
#define CONFIG_EXCEPTION_TYPE_BIT 0X7
#define CONFIG_WRITE 0x1
#define CONFIG_READ 0x2
#define CONFIG_INSTRUCTION 0x4
#define CONFIG_MASK_BIT 0X1FF
#define CONFIG_MASK(mask) (mask << 3)
#define CONFIG_NO_MASK 0
#define CONFIG_NIL_ADDR 0xdead0000

#define CONFIG_VPE0 1
#define CONFIG_VPE1 1 << 1
#define CONFIG_VPE2 1 << 2
#define CONFIG_VPE3 1 << 3
#define CONFIG_VPE_ALL CONFIG_VPE0 | CONFIG_VPE1 | CONFIG_VPE2 | CONFIG_VPE3 
#define CONFIG_MAX_VPE 4


MDDBG_RESULT mddbg_init_public(void);
MDDBG_RESULT mddbg_set_breakpoint(kal_uint32 vpeIndexes, kal_uint32 selectBP, kal_uint32 bp_addr, kal_uint32 addr_mask);
MDDBG_RESULT mddbg_set_watchpoint(kal_uint32 vpeIndexes, kal_uint32 selectWP, kal_uint32 wp_addr, kal_uint32 addr_mask, kal_uint32 type);
MDDBG_RESULT mddbg_remove_watchpoint(kal_uint32 vpeIndexes, kal_uint32 selectWP);
MDDBG_RESULT mddbg_remove_breakpoint(kal_uint32 vpeIndexes, kal_uint32 selectBP);
MDDBG_RESULT mddbg_applyAll(void/*MDDBG_HDL_TYPE*/);
MDDBG_RESULT mddbg_resetAll(void);
MDDBG_RESULT mddbg_query(void);
mddbg_reg_t mddbg_get_queryBPResult(kal_uint32 vpeInd, kal_uint32 selectBP);
mddbg_reg_t mddbg_get_queryWPResult(kal_uint32 vpeInd, kal_uint32 selectWP);



#endif // __MDDBG_PUBLIC_H__
