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
 *   em_public_struct_xl2.h
 *
 * Project:
 * --------
 *   Gen93
 *
 * Description:
 * ------------
 *   Engineer mode public structures for C2K XL2 module.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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


#ifndef _EM_PUBLIC_STRUCT_XL2_H
#define _EM_PUBLIC_STRUCT_XL2_H

#include "em_struct.h"
#include "em_msgid.h"


/********************* begin of XL2 definition ****************************/

#define MAX_FRAME_COUNT_IN_500MS 25

/**xl2_rev_state***/
typedef enum
{
	EM_UNINITIALIZED = 0,
	EM_INITIALIZED,
	EM_ACCESS,
	EM_EACH_STATE,
	EM_TRAFFIC,
	EM_TEST_STATE,
	EM_NULL_STATE,
	EM_WAIT_2_FRAME_STATE
}em_lmd_rev_state_type_enum;

typedef enum
{
	EM_ENG_SRBP_NULL = 0,
	EM_ENG_SRBP_INIT,
	EM_ENG_SRBP_WAIT,
	EM_ENG_SRBP_ACCESS_HO,
	EM_ENG_SRBP_ACCESS_PROBE_HO,
	EM_ENG_SRBP_SUPERVISION_SUSPEND,
	EM_ENG_SRBP_IDLE
}em_srbp_access_state_enum;

typedef struct
{
	em_lmd_rev_state_type_enum lmd_rev_state;
	em_srbp_access_state_enum  srbp_access_state;
}em_rev_state_struct;

typedef struct
{
	LOCAL_PARA_HDR
	em_info_enum em_info;
	em_rev_state_struct rev_state_info;
}em_xl2_rev_state_ind_struct;

/*******srbp_ach_probe*******/
typedef struct
{
	kal_uint8 probe_num;
	kal_uint8 seq_num;
	kal_int16 power_correction;
	kal_uint8 max_probe_seq;
}em_ach_probe_struct;

typedef struct
{
	LOCAL_PARA_HDR
	em_info_enum em_info;
	em_ach_probe_struct ach_probe_info;
}em_xl2_ach_probe_info_ind_struct;

/****xl2_voice_rate*******/
typedef enum
{
	EM_IPC_SPCH_BLANK = 0,
	EM_IPC_SPCH_EIGHTH = 1,
	EM_IPC_SPCH_QUARTER = 2,
	EM_IPC_SPCH_HALF = 3,
	EM_IPC_SPCH_FULL = 4,
	EM_IPC_SPCH_ENCRYPT_BLK	= 5,	 /*used only for SO32944*/
    EM_IPC_SPCH_ENCRYPT_FULL = 6,	/*used only for SO32944*/
	EM_IPC_SPCH_NON_CRITICAL= 0xC,/*change to 0xc since there's a definition in other Branches which already used 0X5*/
	EM_IPC_SPCH_ERASURE	 = 0xE,
	EM_IPC_SPCH_FULL_LIKELY = 0xF	  /* used only for SSO's 1&3 */
}em_lmd_voice_rate_enum;

typedef struct
{
    kal_uint32              em_systime;
    em_lmd_voice_rate_enum  lmd_voice_rate;
}em_voice_rate_struct;

typedef struct
{
	LOCAL_PARA_HDR
	em_info_enum em_info;
	em_voice_rate_struct rev_voice_rate_info[MAX_FRAME_COUNT_IN_500MS];
	em_voice_rate_struct fwd_voice_rate_info[MAX_FRAME_COUNT_IN_500MS];
}em_xl2_voice_rate_info_ind_struct;

/******xl2_rlp_info********/
typedef enum
{
   NAK_TYPE_00 = 0,
   NAK_TYPE_01 = 1,
   NAK_TYPE_10 = 2,
   NAK_TYPE_11 = 3
}em_nak_type_enum;


typedef struct
{
  kal_uint8  nak_gap_counts;
  kal_uint16 nak_first[4];
  kal_uint16 nak_last[4];
}em_nak_type_00_struct;

typedef struct
{
  kal_uint8  nak_map_counts;
  kal_uint16 nak_map_seq[4];
  kal_uint16 nak_map[4];
}em_nak_type_01_struct;

typedef struct
{
  kal_uint8  nak_seg_counts;
  kal_uint16 nak_first_s_seq[4];
  kal_uint16 nak_last_s_seq[4];
  kal_uint16 nak_frame_seq[4];
}em_nak_type_10_struct;

typedef struct
{
  kal_uint8  nak_seg_counts;
  kal_uint16 nak_first_s_seq[4];
  kal_uint16 length_s_seq[4];
  kal_uint16 nak_frame_seq[4];
}em_nak_type_11_struct;

typedef enum
{
	Fill_frame_ev = 0,
	Nak_frame_ev = 1,
	Reset_frame_ev = 2,
	Rlp_Close_ev = 3,
	Data_frame_ev = 4
}em_event_type_enum;
typedef struct
{
    em_nak_type_enum  nak_type_id;
    kal_uint8         nak_counts;/*for gap,map,seg counts*/
    kal_uint16        first_seq[4];
    kal_uint16        last_seq[4];
    kal_uint16        for_type34[4];/*nak_frame_seq*/
}em_rlp_fwd_nak_list_struct;

typedef struct
{
    kal_uint32 rlp_vs;
	kal_uint16 rlp_vnp;
	kal_uint16 rlp_vr;
	kal_uint16 rlp_vn;
    em_event_type_enum event_type;
}em_rlp_general_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    em_rlp_general_info_struct rlp_general_info;
    em_rlp_fwd_nak_list_struct rlp_fwd_nak_list;
}em_xl2_rlp_info_ind_struct;

/******xl2_ps_throughput_info********/
typedef struct
{
    kal_uint32 rev_1x_ps_throuput;
    kal_uint32 fwd_1x_ps_throuput;
}em_ps_throuput_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    em_ps_throuput_struct ps_throuput_info;
}em_xl2_ps_rate_info_ind_struct;

typedef enum
{
   em_fwdChnl = 0,
   em_revChnl = 1
}em_channel_enum;

/****xl2_sch_assigned_rate*****/
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum     em_info;
    em_channel_enum  channel;
    kal_uint8        sch_assigned_rate;
}em_xl2_sch_assigned_rate_ind_struct;


#endif /* ~_EM_PUBLIC_STRUCT_XL2_H */

