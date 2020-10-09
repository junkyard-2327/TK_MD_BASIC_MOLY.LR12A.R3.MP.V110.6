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
 * Filename:
 * ---------
 *   em_cc_public_struct.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Engineer mode public structures.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *              HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/


#ifndef _EM_CC_PUBLIC_STRUCT_H
#define _EM_CC_PUBLIC_STRUCT_H

#include "em_public_struct.h"


#define EM_CC_ECPI_NUM_LEN  (81) //MAX_CC_ECPI_NUM_LEN
#define EM_CC_MAX_ASSERTED_URI        (512) //IMC_MAX_ASSERTED_URI

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;

   kal_uint8 call_id;
   kal_bool is_ibt;
   kal_bool is_tch;
   kal_bool is_emergency;
   kal_uint8 call_dir;  //ims_call_dir_enum
   kal_uint8 call_mode;   //ims_call_mode_enum
   kal_uint8 msg_type;
   kal_uint8 call_type; //ims_call_type_enum
   kal_uint32 disc_cause; //ims_disc_cause_enum
   kal_uint8 number[EM_CC_ECPI_NUM_LEN];
   kal_uint8 p_assert_uri[EM_CC_MAX_ASSERTED_URI];
} em_call_info_ind_struct;

//--------------------------------------------------

/* CC structure */
typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;
   kal_uint8   cause;   //channel sync cause
   kal_uint8   channel_type;    //channel type
   kal_uint8   channel_mode;    //channel mode
} em_cc_channel_info_ind_struct;

typedef struct
{
  LOCAL_PARA_HDR
  em_info_enum em_info;
	kal_uint8	call_id;	//call id
	kal_uint8	ti;	//transaction identifier
	kal_uint8   state;	//call state - Please refer to cc_call_state_enum in ps_public_enum.h file to decode this field
	kal_uint8	aux_state;	//auxiliary state
   	kal_uint8	pi; //progress indicator
	kal_uint16	cause;	//call disconnect cause - Please refer to ps_cause_enum in ps_public_enum.h file to decode this field
	kal_uint8	cause_location;	//cause originating locatioin

    kal_uint8 dir;
    kal_uint8 call_mode;
    l4_addr_bcd_struct call_num;

} em_cc_call_info_ind_struct;

/* CB structure */
typedef struct
{
    kal_uint16  sn; //serial number
    kal_uint16  mi; //message identifier
    kal_uint8   dcs;    //data code scheme
    kal_uint8   page;   //current number of this page
    kal_uint8   pages;  //total number of pages
} cb_em_info_struct;


#endif /* _EM_CC_PUBLIC_STRUCT_H */

