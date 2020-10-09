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
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2001
 *
 *******************************************************************************/

 /*******************************************************************************
 * Filename:
 * ---------
 *   global_def.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *  global parameters definition
 *
 * Author:
 * -------
 * 
 *
 *==============================================================================
 * 				HISTORY
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
 *
 * removed!
 * removed!
 *
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
 * removed!
 *
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
 *
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
 *
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
 * removed!
 *
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef _GLBOAL_DEF_H
#define _GLBOAL_DEF_H

#include "kal_public_defs.h"

/***** global constant *****/

/* MAX_SIM_NUM */
#ifdef __GEMINI__
#ifdef GEMINI_PLUS
#define MAX_SIM_NUM (GEMINI_PLUS)
#else
#define MAX_SIM_NUM (2)
#endif /* GEMINI_PLUS */
#else
#define MAX_SIM_NUM (1)
#endif /* __GEMINI__ */

/* MAX_GSM_NUM */
#ifdef __GEMINI_GSM__
#ifdef GEMINI_PLUS_GSM
#define MAX_GSM_NUM (GEMINI_PLUS_GSM)
#else
#define MAX_GSM_NUM (2)
#endif /* GEMINI_PLUS_GSM */
#else
#ifdef __SGLTE__
#define MAX_GSM_NUM (2)
#else
#define MAX_GSM_NUM (1)
#endif /* __SGLTE__ */
#endif /* __GEMINI_GSM__ */

/* MAX_UMTS_NUM */
#ifdef __GEMINI_WCDMA__
#ifdef GEMINI_PLUS_WCDMA
#define MAX_UMTS_NUM (GEMINI_PLUS_WCDMA)
#else
#define MAX_UMTS_NUM (2)
#endif /* GEMINI_PLUS_WCDMA */
#else
#define MAX_UMTS_NUM (1)
#endif /* __GEMINI_WCDMA__ */

/* MAX_LTE_NUM */
#ifdef __LTE_RAT__
#ifdef __GEMINI_LTE__
#ifdef GEMINI_PLUS_LTE
#define MAX_LTE_NUM (GEMINI_PLUS_LTE)
#else
#define MAX_LTE_NUM (2)
#endif /* GEMINI_PLUS_LTE */
#else
#define MAX_LTE_NUM (1)
#endif /* __GEMINI_LTE__ */
#endif /* __LTE_RAT__ */

// TDD only support max 3 GSM
#if MAX_GSM_NUM > 3
#define MAX_GSM_TDD_NUM 3
#else
#define MAX_GSM_TDD_NUM (MAX_GSM_NUM)
#endif

// TDD only support max 1 UMTS
#ifdef __UMTS_RAT__
#define MAX_UMTS_TDD_NUM 1
#endif

// The following macros are for general handling of tdd/fdd module count in compile time
// TDD only support max 2 GSM
#define get_max_gsm_num(is_fdd_mode) ((KAL_TRUE == is_fdd_mode)? (MAX_GSM_NUM):(MAX_GSM_TDD_NUM))

// TDD only support max 1 UMTS
#ifdef __UMTS_RAT__
#define get_max_umts_num(is_fdd_mode) ((KAL_TRUE == is_fdd_mode)? (MAX_UMTS_NUM):(MAX_UMTS_TDD_NUM))
#endif

#ifdef __LTE_RAT
#define get_max_lte_num MAX_LTE_NUM
#endif

/* T+W mode switch code */
typedef enum {
    /* Pcore GAS */
#if !(defined(DUMMY_PROTOCOL) && defined(__GSM_RAT__))
    MOD_RRM_DEST,
    MOD_RLC_DEST,
    MOD_MPAL_DEST,
    MOD_MAC_DEST,
    MOD_LAPDM_DEST,
    MOD_AS_DEST,
    MOD_GAS_DEST,
    MOD_RMPC_DEST,
    MOD_REASM_DEST,
#endif

    /* Pcore UAS */
#ifdef  __UMTS_RAT__
    MOD_DUMMY_UL2_DEST,
    MOD_URLC_DEST,
    MOD_UMAC_DEST,
    MOD_UL2_DEST,
    MOD_DUMMY_UL2D_DEST,
    MOD_DRLC_DEST,
    MOD_BMC_DEST,
    MOD_UL2D_DEST,
    MOD_PDCP_DEST,
    MOD_RABM_DEST,
    MOD_CSR_DEST,
    MOD_DUMMY_URR_DEST,
    MOD_MEME_DEST,
    MOD_CSE_DEST,
    MOD_CSCE_DEST,
    MOD_SIBE_DEST,
    MOD_USIME_DEST,
    MOD_RRCE_DEST,
    MOD_SLCE_DEST,
    MOD_ADR_DEST,
    MOD_URR_DEST,
    MOD_DB_DEST,
#endif

    /* LAS part */
#ifdef  __GSM_RAT__
    MOD_GISE_DEST,
#endif
#ifdef  __UMTS_RAT__
    MOD_LMEME_DEST,
    MOD_LCSCE_DEST,
    MOD_LURR_DEST,
    MOD_LRRCE_DEST,
    MOD_LURLC_DEST,
    MOD_LUMAC_DEST,
#endif

    MAX_MODE_DUPLEX_MOD_NUM
} mode_duplex_mod_id;

typedef enum {
   GL_SIM1,
#if defined(__GEMINI__) || defined(__SGLTE__)
   GL_SIM2,
#if (GEMINI_PLUS >= 3)
   GL_SIM3,
#if (GEMINI_PLUS >= 4)
   GL_SIM4,
#endif /* GEMINI_PLUS >= 4 */
#endif /* GEMINI_PLUS >= 3 */
#endif
   MAX_GL_SIM_NUM
} GL_SIM_INDEX;

extern void set_AS_to_FDD(GL_SIM_INDEX sim_index);
extern void set_AS_to_TDD(GL_SIM_INDEX sim_index);
extern void set_AS_to_activated(GL_SIM_INDEX sim_index);

extern module_type query_real_module(mode_duplex_mod_id dest_module, GL_SIM_INDEX sim_index);

/* T+W mode switch code */

/*weitang:only for SIM editor requested by moja*/
#ifdef __SGLTE_DSDS__
typedef enum{
	SIM_CARD_NUM = 2,
	SIM_CARD_1 = 1,
	SIM_CARD_2 = 3,
}sim_card_module_mapping;
#endif

/***** global structure *****/


#endif

