/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 *   sms_eval_struct.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   message and common structure definition between SMS and EVAL module
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 12 11 2019 vishwas.hegde
 * [MOLY00461709] [CODE SYNC][Header files][dependent][MT6762][Cervino][O1][MP3.5][SI2][MPR][China][SH][IMS][FT][MDST][SWIFT][Static][CT+CU][hVoLTE]
 * 	
 * 	.
 *
 * 07 29 2019 vishwas.hegde
 * [MOLY00424666] [SMS][Interface parts][MT6762][Cervino][P0][MP1][AT&T][10776v18_3][ADAPT][simulator][2nd_stage][inhouse][RnS][ENS][LTE-BTR-1-3685] R&S pass,IT3 fail
 * 	
 * 	HPS for MT SMS - [ALPS04326402]Interface parts
 *
 * 01 16 2018 ian-yw.chen
 * [MOLY00302109] [MT6763][Bianco][N1][India FT][Chennai][WW FT][RCOM][TATA DOCOMO][TC_MTK_P1_4G_Gemini_13] [MP1.5] DUT long SMS to sim2 fails (common interface part)
 *  SMS/EVAL
 *
 * 02 03 2016 juan.huang
 * [MOLY00152764][SMS optimization][4G]after SMS send sms data to EVAL, EVAL return the send result to SMS
 * 	Merging
 * 	
 * 	//UMOLY_CBr/jerry-yh.chang/UMOLY_W16.05.LTE.p6/mcu/...
 * 	
 * 	to //UMOLY/TRUNK/UMOLY/mcu/...
 *
 * 01 27 2016 ya.li
 * 01 28 2016 juan.huang
 * [MOLY00152764][SMS optimization][4G]after SMS send sms data to EVAL, EVAL return the send result to SMS
 * 	Merging
 * 	
 * 	//MOLY_CBr/allen.keh/MOLY_MP7.W16.05.p1/mcu/...
 * 	
 * 	to //UMOLY_CBr/jerry-yh.chang/UMOLY_W16.05.LTE.p6/mcu/...
 *
 * 01 28 2016 juan.huang
 * <saved by Perforce>
 *
 * 01 27 2016 ya.li
 * 02 03 2016 ya.li
 * [MOLY00152757] [MT6290][CMCC 2016 new requirement][SMS][Stop Receiving RP-ACK when UE from 4G connected mode to idle mode]
 * .
 *
 * 03 27 2013 benjamin.kuo
 * [MOLY00011934] LTE MM IT CBr merge to MOLY
 * .
 *
 * 03 14 2013 tuan-che.chen
 * [MOLY00009163] LTE Multimode merge back to MOLY
 * merge back to MOLY.
 *
 * 11 06 2012 yu.huang
 * [MOLY00005322] TATAKA merge to MOLY
 * [EVAL] Add EVAL related interfaces and common strust
 ****************************************************************************/


#ifndef  _SMS_EVAL_STRUCT_INC
#define  _SMS_EVAL_STRUCT_INC


#include "sms_eval_enums.h"
#include "l3_inc_enums.h"


/***** message structure definition *****/
typedef struct 
{
    LOCAL_PARA_HDR
    sms_eval_reg_status_enum    state;

} sms_eval_reg_status_ind_struct;


typedef struct 
{
    LOCAL_PARA_HDR
    sms_eval_est_rej_cause_enum cause;
    
} sms_eval_est_rej_struct;

typedef struct 
{
    LOCAL_PARA_HDR
    sms_eval_rel_ind_cause_enum cause;
    
} sms_eval_rel_ind_struct;

typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint16 transaction_id;
    sms_eval_unitdata_cnf_result_enum result;
    
} sms_eval_unitdata_cnf_struct;

typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint16 transaction_id;		
    
} sms_eval_unitdata_req_struct;

typedef struct 
{
    LOCAL_PARA_HDR
    sms_status_enum sms_status;	
	sms_direction_enum sms_direction;
	sms_semaphore_type_enum sms_sem_type;
    
} sms_eval_sms_status_req_struct;

typedef struct 
{
    LOCAL_PARA_HDR
    imcsms_status_enum imcsms_status;	
	imcsms_semaphore_type_enum imcsms_sem_type;
    
} imcsms_eval_mt_sms_over_ims_status_req_struct;


#if 0 /* mark empty primitive message structure */
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* mark empty primitive message structure */


#endif   /* ----- #ifndef _SMS_EVAL_STRUCT_INC ----- */

