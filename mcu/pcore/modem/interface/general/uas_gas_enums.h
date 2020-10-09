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
 *   uas_gas_enums.h
 *
 * Project:
 * --------
 *   MONZA
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *
 * ----------------------------------------------------------------------------
 * $Log:$
 *
 * 10 26 2017 nalin.chovatia
 * [MOLY00284483] [CODE SYNC] 2G -3G??? ?????
 * .prio r3
 *
 * 11 14 2014 yenchih.yang
 * [MOLY00084256] [MEME] sync MT6291 to UMOLY
 * URR/MEME.
 *
 * 11 12 2014 tsung-wei.tu
 * [MOLY00080211] [MT6291_DEV][MT6291_UESIM_DEV] Check in low power to MT6291_DEV, MT6291_UESIM_DEV
 * Merging GISE low power to UMOLY trunk
 *
 * 07 03 2013 ming.lee
 * [MOLY00026501] [GAS_UAS] Cipher status mismatch error handling
 * .
 *
 * 06 25 2013 henry.lai
 * [MOLY00027253] [MT6290] Bug fix for GAS multi-mode development
 * .
 *
 * 03 13 2013 c-hua.yang
 * [MOLY00009184] [URR] Multimode Merge to MOLY
 * .
 *
 * 01 22 2013 c-hua.yang
 * [MOLY00009184] [URR] Multimode Merge to MOLY
 * .
 *
 * 01 11 2013 henry.lai
 * [Henry][Multi-Mode Development] GAS Development and R8 CR Sync
 *
 * 09 09 2012 yong.su
 * [MOLY00003321] [3G TDD][RRCE][InterRAT]modified code for MAX_TARGET_GSM_CELLS_NUM
 * .
 * 
 * 08 14 2012 peter.chien
 * [MOLY00002118] [PS1][GAS] Internal inject message test for MEAS IT
 * .
 * 
 * 08 14 2012 peter.chien
 * [MOLY00002118] [PS1][GAS] Internal inject message test for MEAS IT
 * .
 * 
 * 08 14 2012 peter.chien
 * [MOLY00002118] [PS1][GAS] Internal inject message test for MEAS IT
 * .
 *
 * 05 25 2012 haizhou.liu
 * removed!
 * .
 *
 * 05 17 2012 c-hua.yang
 * removed!
 * .
 *
 * 05 02 2012 adeline.chang
 * removed!
 * .
 *
 * 01 11 2012 shunwen.hsiao
 * removed!
 * Check in TK6280_DVT_DEV to MT6280_DVT_DEV
 *
 * 11 08 2011 junzhen.qin
 * removed!
 * .
 *
 * 10 28 2010 adeline.chang
 * removed!
 * .
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * Supported 3rd criteria for InterRAT cell reselection to UTRAN.
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * Add copyright header.
 ******************************************************************************/

#ifndef _UAS_GAS_ENUMS_H
#define _UAS_GAS_ENUMS_H

#include "irat_common_enums.h"
#include "uas_gas_inter_core_enum.h"

/* MACROS ******************************************************************/
/* MAX Values */
#define MAX_LEN_HO_TO_GSM_MSG (251)  /* Octets */
#define MAX_LEN_TLV_CLASSMARK_2 (5)  /* Octets */
#define MAX_LEN_V_CLASSMARK_3  (32)     /* Octets */
#define MAX_LEN_HO_TO_UTRAN_MSG  (251) /* Octets */
#define MAX_LEN_UTRAN_HANDOVER_INFO_MSG (251) /* Octets*/
#define MAX_NUM_MEASURED_UMTS_FDD_CELL 64


#define UAS_GAS_INVALID_UARFCN (0xffff)

#if defined(__UMTS_TDD128_MODE__)
#define MAX_NUM_MEASURED_UMTS_TDD_CELL (64)
#endif //defined(__UMTS_TDD128_MODE__)

/*Other constants*/
#define INTER_RRC_GSM_CIPHERING_KEY_LENGTH   8  
#define INTER_RRC_UMTS_CIPHERING_KEY_LENGTH 16
#define INTER_RRC_UMTS_INTEGRITY_KEY_LENGTH 16
#define TEMP_FAILURE_PENALTY_TIME 30 /*Haizhou 20100819 Time penalty for convert temp failure to initial_value after resel to ucell fai*/

#define INTER_RRC_LEN_PLMN_IDENTITY 3

/* MAX/MIN values */
#define MAX_UARFCN_RSSI_VAL (-100)
#define MIN_UARFCN_RSSI_VAL (-480)
#define MAX_UCELL_RSCP_VAL (-100)
#define MIN_UCELL_RSCP_VAL (-480)
#define MAX_UCELL_EC_NO_VAL 0
#define MIN_UCELL_EC_NO_VAL (-100)

#define MAX_UMTS_UARFCN 16383
#define MIN_UMTS_UARFCN 0
#if 0
/* under construction !*/
/* under construction !*/
#endif
#define INVALID_NC_MODE (0xFF)

#if defined(__PS_HO__) && defined(__UMTS_R6__)
#define MAX_LEN_V_MS_RADIO_ACCESS_CAPABILITY (64)
#endif

#ifdef __WCDMA_PREFERRED__
#define INTER_DEFAULT_RSCP_THRESHOLD (11) /* -105 dBm */
#define INTER_DEFAULT_EC_N0_THRESHOLD (19) /* -15 dB */
#endif /* __WCDMA_PREFERRED__ */

#ifdef __PREFER_HIGH_PRIO_3G_IN_23G_MODE__
#define INTER_DEFAULT_RSCP_THRESHOLD_PRIO (21) /* -95 dBm */
#endif /* __PREFER_HIGH_PRIO_3G_IN_23G_MODE__ */

/* TYPES DEFINITIONS ********************************************************/

typedef enum 
{
   UMTS_SIGNALLING_KEYS_FOR_CS_DOMAIN,
   UMTS_SIGNALLING_KEYS_FOR_PS_DOMAIN
}te_umts_signalling_connection_keys;

typedef enum {
    L1_AVAILIBILITY_STATUS_VACANT, /* During Cell selection*/
    L1_AVAILIBILITY_STATUS_SHARED, /* IDLE camped,URA_PCH,CELL_PCH */
    L1_AVAILIBILITY_STATUS_OCCUPIED /* PTM,DEDICATED,CELL_FACH,CELL_DCH*/
}te_l1_availibility_status;    

typedef enum {
  IR_CELL_CHANGE_COMPLETE_SUCCESS,
  IR_CELL_CHANGE_COMPLETE_FAIL,
  IR_CELL_CHANGE_COMPLETE_FAIL_BY_NAS_COMMAND
}te_ir_cell_change_complete_status;

typedef enum {
   IR_CELL_RESELECTION_TYPE_NORMAL,
   IR_CELL_RESELECTION_TYPE_LIMITED_SERVICE
}te_ir_cell_reselection_type;

#if 0 //__UMTS_TDD128_MODE__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif //__UMTS_TDD128_MODE__

#endif /* UAS_GAS_ENUMS_H */
