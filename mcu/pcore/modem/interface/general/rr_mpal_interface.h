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
 *  permission of MediaTek Inc. (C) 2002
 *
 *******************************************************************************/

 /*******************************************************************************
 * Filename:
 * ---------
 *   rr_mpal_interface.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   MPAL-RR interface definition
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
 * $Log$
 *
 * 01 22 2014 chi-chung.lin
 * [MOLY00049161] [LTE Gemini] GAS code sync from Byron CBr to Dev
 * 	.
 *
 * 11 06 2013 hamann.chang
 * [MOLY00036515] [gas] design change for RLC/ MPAL flush
 * 	.
 *
 * 01 23 2013 henry.lai
 * [MOLY00009222] [GAS][Multi-Mode Development] Merge GAS multi-mode development to MOLY
 * .
 *
 * 01 11 2013 henry.lai
 * [Henry][Multi-Mode Development] GAS Development and R8 CR Sync
 *
 * 12 12 2012 ty.wang
 * [MOLY00006932] Fix MoDIS build warning in WR8/MOLY
 * .
 *
 * 12 03 2012 ty.wang
 * [MOLY00006932] Fix MoDIS build warning in WR8/MOLY
 * .
 *
 * 11 30 2012 ty.wang
 * [MOLY00006932] Fix MoDIS build warning in WR8/MOLY
 * .
 *
 * 11 30 2012 ty.wang
 * [MOLY00006932] Fix MoDIS build warning in WR8/MOLY
 * .
 * 
 * 09 10 2012 ty.wang
 * [MOLY00003373] [MAC/RLC/MPAL] Remove __NEW_TBF_ARCH__ from 2G RR on MOLY
 * .
 *
 * 11 09 2011 stanleyhy.chen
 * removed!
 * .
 *
 * 06 09 2011 peter.chien
 * removed!
 * .
 *
 * 05 12 2011 henry.lai
 * removed!
 * .
 *
 * 03 02 2011 stanleyhy.chen
 * removed!
 * GEMINI2.0] ACS and MEAS parts
 *
 * 12 20 2010 rachel.liu
 * removed!
 * .
 *
 * 12 14 2010 nancy.chang
 * removed!
 * .
 *
 * 12 14 2010 sherry.kuo
 * removed!
 * .
 *
 * 12 02 2010 sherry.kuo
 * removed!
 * .
 *
 * 10 16 2010 nancy.chang
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
 * add to source control recursely
 *
 * removed!
 * removed!
 * Change rr to rr2.
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
 * created by clearfsimport
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

#ifndef _RR_MPAL_INTERFACE_H
#define _RR_MPAL_INTERFACE_H

/* Nancy 20101005: Suggest Add for RHR */
#include "kal_general_types.h"

#ifndef __MTK_TARGET__
#include "kal_public_defs.h"
#endif

//#ifndef _RR_INTERFACE_H
//#error "rr_interface.h should be included first"
//#endif

/******************************************************************************
 * Constant
 ******************************************************************************/
#define ALGORITHM_A5_1  (1)
#define ALGORITHM_A5_2  (2)
#define ALGORITHM_A5_3  (3)
#define ALGORITHM_A5_4  (4)
#define ALGORITHM_A5_5  (5)
#define ALGORITHM_A5_6  (6)
#define ALGORITHM_A5_7  (7)

#define TCH_LOOP_A (0)
#define TCH_LOOP_B (1)
#define TCH_LOOP_C (2)
#define TCH_LOOP_D (3)
#define TCH_LOOP_E (4)
#define TCH_LOOP_F (5)
#define TCH_LOOP_I (6)

#define DAI_TEST_NORMAL          (0)
#define DAI_TEST_SPEECH_DEC_DTX  (1)
#define DAI_TEST_SPEECH_ENC_DTX  (2)
#define DAI_TEST_ACOUTIC_AD_DA   (4)

#define HANDOVER_L1_NO_ERROR        (0)
#define HANDOVER_L1_TA_OUT_OF_RANGE (1)

#define HANDOVER_TYPE_PRE_SYNC      (0)
#define HANDOVER_TYPE_PSEUDO_SYNC   (1)
#define HANDOVER_TYPE_FINELY_SYNC   (2)
#define HANDOVER_TYPE_NON_SYNC      (3)

#define GSM_BLK_SIZE  (23)
#define MAX_NUM_OF_HOPPING_FREQ (64)
#define MAX_BA_LIST_LEN (32)
#define MAX_NEIGHBOR_ACUISITION_LIST_LEN (7)
#define MAX_POWER_SCAN_RESULTS_LEN (200)
#define MANUAL_SEL_SCAN_ID (128)

#define BAND_PGSM900 (0x01)
#define BAND_EGSM900 (0x02)
#define BAND_RGSM900 (0x04)
#define BAND_DCS1800 (0x08)
#define BAND_PCS1900 (0x10)
#define BAND_GSM450  (0x20)
#define BAND_GSM480  (0x40)
#define BAND_GSM850  (0x80)

#define POWER_CLASS_1         (0)
#define POWER_CLASS_2         (1)
#define POWER_CLASS_3         (2)
#define POWER_CLASS_4         (3)
#define POWER_CLASS_5         (4)
#define POWER_CLASS_INVALID   (-1)

#ifdef __PS_SERVICE__
#define MPAL_MAX_UL_SLOTS  (4)
#define MPAL_MAX_DL_SLOTS  (4)
#define MPAL_DATA_Q_SIZE (2*MPAL_MAX_UL_SLOTS)
#define MAX_EXT_MEAS_ARFCNS  (32)
#define MAX_ALLOC_BITMAP_LENGTH  (36)
#define MPAL_INVALID_FRAME_NO  (0xffffffff)
#endif /* __PS_SERVICE__ */

#ifdef __MTBF__
#define MAX_TBF_NUM (5) //support 5 TBFs
#else 
#define MAX_TBF_NUM (1) //support 1 TBFs
#endif /*__MTBF__*/

/******************************************************************************
 * Enum Value
 ******************************************************************************/

/******************************************************************************
 * Functional prototype
 ******************************************************************************/

#ifdef __PS_SERVICE__
/******************************************************************************
 * Function Name:
 *    mpal_rlc_flush_proc
 * DESCRIPTION
 *   This function is provided by MPAL, and RR will call this function when the
 *   flush procedure starts. MPAL will flush the data blocks in its data queue,
 *   and transmit uplink dummy block before new data request is received from RR.
 *  In addition, MPAL will pass the necessary parameters to RR.
*******************************************************************************/
#ifdef __MTK_TARGET__
extern void mpal_rlc_flush_proc(kal_uint8 *no_rts_sent, kal_uint8 *total_blks_sent, kal_uint8 tbf_index, kal_uint16 *frame_no_of_last_txed);
extern void rlc_mpal_rlc_flush_proc(kal_uint8 *no_rts_sent, kal_uint8 *total_blks_sent, kal_uint16 *frame_no_of_last_txed);
#else
extern void mpal_rlc_flush_proc(ilm_struct *ilm_ptr);
#endif


#ifdef __PS_HO__
/******************************************************************************
 * Function Name:
 *    mpal_rlc_flush_ctrl_block_proc
 * DESCRIPTION
 *   This function is provided by MPAL, and RR will call this function before PS handover procedure.
 *   MPAL will flush the control blocks in its control queue.
*******************************************************************************/
extern void mpal_rlc_flush_ctrl_block_proc(void);
#endif /* __PS_HO__ */

#endif /* __PS_SERVICE__ */

/******************************************************************************
 * Structures generated by ASN files
 ******************************************************************************/
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#ifdef TEST_TOOL
#include "tt_defs.h"
#else 
#include "kal_public_api.h"
#endif /* TEST_TOOL */

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* _RR_MPAL_INTERFACE_H */

