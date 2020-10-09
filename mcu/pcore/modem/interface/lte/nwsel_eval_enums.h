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
 *   nwsel_eval_enums.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   common enum definition between NWSEL and EVAL module
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 06 24 2016 mw.hsu
 * [MOLY00186459] [MT6293] [NWSEL] UMOLY merge to UMOLYA.
 *
 * 04 26 2016 sherry.kuo
 * [MOLY00175925] sync LR11 to UMOLY
 * .
 *
 * 03 31 2016 justin.li
 * [MOLY00172070] Gen92 cross core interface migration
 * .
 *
 * 10 05 2015 panu.peisa
 * [MOLY00142657] [VzW][VZ_REQ_e911_30203] RAL and MRU cell band info update implementation to 6291
 * 	Integrated CLs 1690397 and 1690428 from LR11_VzW.
 *
 * 09 30 2015 marko.akselin
 * [MOLY00142657][VzW] VZ_REQ_e911_30203 - Add band information into NWSEL - EVAL interface.
 * 	.
 *
 * 04 16 2015 james-chi-ju.chang
 * [MOLY00078264] [UMOLY][R10][R11] NAS check-in from CBr to 6291_DEV
 * 	.
 *
 * 03 27 2013 benjamin.kuo
 * [MOLY00011934] LTE MM IT CBr merge to MOLY
 * .
 *
 * 01 23 2013 sherry.kuo
 * [MOLY00009250] [LTE Multimode] NWSEL check in
 * nwsel related files check in.
 *
 * 11 06 2012 yu.huang
 * [MOLY00005322] TATAKA merge to MOLY
 * [EVAL] Add EVAL related interfaces and common strust
 ****************************************************************************/


#ifndef  _NWSEL_EVAL_ENUMS_INC
#define  _NWSEL_EVAL_ENUMS_INC

/***** common enum definition *****/
typedef enum
{
    EPS_ATTACH_UPDATE_RESULT_NONE = 0x00,
	EPS_ONLY                      = 0x01,
	COMBINED_EPS_IMSI_ATTACH      = 0x02,
	TA_UPDATED                    = 0x10,
	COMBINED_TA_LA_UPDATED        = 0x11,
	TA_UPDATED_ISR_ACTIVATED      = 0x14,
	COMBINED_TA_LA_UPDATED_ISR_ACTIVATED = 0x15
}  eps_attach_update_result_enum;

/* move to l3_inc_enum_public.h */
#if 0
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
#endif
#endif   /* ----- #ifndef _NWSEL_EVAL_ENUMS_INC ----- */

