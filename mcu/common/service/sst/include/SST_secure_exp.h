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
 *   SST_secure_exp.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This is header file for SST_secure_exp.c
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
 *
 * removed!
 * removed!
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/


#ifndef __SST_SECURE_EXP_H__
#define __SST_SECURE_EXP_H__

/*******************************************************************************
 * Included header files
 *******************************************************************************/

#include "kal_general_types.h"
#include "sst_interface.h"

/*************************************************************************
 * External global data declaration
 *************************************************************************/

/*************************************************************************
 * External Function Declaration
 *************************************************************************/

/*************************************************************************
 * Type definitions
 *************************************************************************/
 
/*************************************************************************
 * Export API of SSS and SST
 *************************************************************************/

/*****************************************************************************
 * FUNCTION
 *	SST_Exp_Is_Target_Rooted
 *
 * DESCRIPTION
 *	The function check if the device is rooted.  
 *
 * PARAMETERS
 *	[INPUT] N/A 
 *	[OUTPUT] N/A
 *
 * RETURNS
 *	KAL_TRUE  : Device is rooted
 *	KAL_FALSE : Device is not rooted
 *
 * NOTES
 *  N/A
 *
 *****************************************************************************/
extern kal_bool SST_Exp_Is_Target_Rooted(void);

/*****************************************************************************
 * FUNCTION
 *	SST_Get_Secure_Channel_Key
 *
 * DESCRIPTION
 *	To get an AP/MD shared key.  
 *
 * PARAMETERS
 *	[INPUT/OUTPUT] key
 *	[INPUT] len: counted in byte. Must be 16 bytes now	
 *
 * RETURNS
 *  N/A
 *
 * NOTES
 *  N/A
 *
 *****************************************************************************/
extern void SST_Get_Secure_Channel_Key(kal_uint8 *key, kal_uint32 len);

/*************************************************************************
* FUNCTION
*  SST_AES_Encrypt_MDAP_ByCmnKey
*
* DESCRIPTION
*  Porting from bootrom, encrypt using SW AES with per-derive unique key.
*  The IV is fixed
*  Note that output size would be expand to AES block size since AES is block cipher 
*
* PARAMETERS
*  N/A
* 
*
* RETURNS
*  N/A
*
* NOTES
*  
*************************************************************************/
extern void SST_AES_Encrypt_MDAP_ByCmnKey(unsigned char* src_buf, unsigned char* dst_buf, unsigned int data_len);

/*************************************************************************
* FUNCTION
*  SST_AES_Decrypt_MDAP_ByCmnKey
*
* DESCRIPTION
*  Porting from bootrom, encrypt using SW AES with per-derive unique key.
*  The IV is fixed
*  Note that output size would be expand to AES block size since AES is block cipher
*
* PARAMETERS
*  N/A
* 
*
* RETURNS
*  N/A
*
* NOTES
*  
*************************************************************************/
extern void SST_AES_Decrypt_MDAP_ByCmnKey(unsigned char* src_buf, unsigned char* dst_buf, unsigned int data_len);

#endif //__SST_SECURE_EXP_H__

