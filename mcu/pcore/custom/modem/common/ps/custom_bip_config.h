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
 *   bip_custom.h 
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 *   
 *
 * ==========================================================================
 * $Log$
 *
 * 12 17 2019 vend_mti_wspsd_011
 * [MOLY00466367] [URGENT][Cervino][MT6762][Q0][MP2][Sprint][Sprint Lab Test][DVTC][UICC] Device takes too long to respond to UICC and does not attach to EvDO
 * 	
 * 	SPRINT default RETRY COUNT set to '0'
 *
****************************************************************************/
#ifndef _BIP_CUSTOM_H
#define _BIP_CUSTOM_H

#define BIP_DS_DEFAULT_RETRY_COUNT 0 // will not retry
#ifdef __BIP_UT_TEST_CASE__
    #define BIP_DS_SPRINT_RETRY_COUNT BIP_DS_DEFAULT_RETRY_COUNT
#else
	#define BIP_DS_SPRINT_RETRY_COUNT BIP_DS_DEFAULT_RETRY_COUNT
#endif

/***********************************************************************
 *  custom_bip_get_default_connect_retry_count
 *
 *  Auther: 
 *  Brief: set DS connect retry count  
 ***********************************************************************/
int custom_bip_get_default_connect_retry_count(void);

/***********************************************************************
 *  custom_bip_get_sprint_connect_retry_count
 *
 *  Auther: 
 *  Brief: set DS connect retry count  
 ***********************************************************************/
int custom_bip_get_sprint_connect_retry_count(void);


#endif // _BIP_CUSTOM_H


