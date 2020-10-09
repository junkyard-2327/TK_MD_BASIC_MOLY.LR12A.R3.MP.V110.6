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
 * ssds_nvram_def.h
 *
 * Project:
 * --------
 *   Bianco
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * 
 ****************************************************************************/


#ifndef __SSDS_NVRAM_DEF_H__

#define __SSDS_NVRAM_DEF_H__



#ifdef __cplusplus

extern "C"

{

#endif  /*__cplusplus */



//head files



#include "nvram_defs.h"

#include "nvram_enums.h"

#include "ps_public_enum.h"

#include "device.h"

#include "custom_ssds.h"




// LID Enums
typedef enum
{
        NVRAM_EF_SSDS_BEGIN_LID            = NVRAM_LID_GRP_SSDS(0), 
        NVRAM_EF_SSDS_REQUEST_PROFILE_LID,
        NVRAM_EF_SSDS_RESPONSE_PROFILE_LID,
        NVRAM_EF_SSDS_PDN_PROFILE_LID,
        NVRAM_EF_SSDS_PDN_FAIL_PROFILE_LID,
        NVRAM_EF_SSDS_LAST_LID               = NVRAM_LID_GRP_SSDS(63)
        
}nvram_lid_ssds_enum;




// VERNO
#define NVRAM_EF_SSDS_REQUEST_PROFILE_LID_VERNO         					"001"
#define NVRAM_EF_SSDS_RESPONSE_PROFILE_LID_VERNO                         	"001"
#define NVRAM_EF_SSDS_PDN_PROFILE_LID_VERNO                         		"002"
#define NVRAM_EF_SSDS_PDN_FAIL_PROFILE_LID_VERNO                         	"001"


// Data Structure of Each LID
#if 1
#define	NVRAM_EF_SSDS_REQUEST_PROFILE_MAX_ENTRY_NUM		32
typedef struct
{
	kal_bool	check_atcmd_type;	
	
	kal_bool	check_opid;
	kal_bool	check_mccmnc;
	kal_bool	check_sim_type;
	
	kal_bool	check_ims_registered;
	kal_bool	check_ims_domain;
	kal_bool	check_roaming_type;
	kal_bool	check_reserved[8];

}nvram_ef_ssds_request_profile_mask_struct;

typedef struct
{
	custom_ssds_atcmd_type		atcmd_type;

	kal_uint32					op_id;
	kal_char					mccmnc[7];
	kal_uint8					sim_type;
	
	kal_bool					ims_registered;
	custom_ssds_ims_domain_type	ims_domain;
	custom_ssds_roaming_type	roaming_type;
	
	kal_uint8					reserved[16];	

}nvram_ef_ssds_request_profile_value_struct;

typedef struct
{
	/*response*/
	custom_ssds_path_type	req_path;

}nvram_ef_ssds_request_profile_action_struct;


 typedef struct
{
	kal_bool		is_valid;
	nvram_ef_ssds_request_profile_mask_struct		mask;
	nvram_ef_ssds_request_profile_value_struct 		value;
	nvram_ef_ssds_request_profile_action_struct		action;
	
} nvram_ef_ssds_request_profile_entry_struct;


typedef struct
{
	nvram_ef_ssds_request_profile_entry_struct	req_path_entry[NVRAM_EF_SSDS_REQUEST_PROFILE_MAX_ENTRY_NUM];	
	
} nvram_ef_ssds_request_profile_struct;

// Size and Total 
#define NVRAM_EF_SSDS_REQUEST_PROFILE_TOTAL    	(1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_SSDS_REQUEST_PROFILE_SIZE   	sizeof(nvram_ef_ssds_request_profile_struct)    // Size of each record

#endif


#if 1
#define	NVRAM_EF_SSDS_RESPONSE_PROFILE_MAX_ENTRY_NUM	16

typedef struct
{
	kal_bool	check_atcmd_type;	
	kal_bool	check_rsp_id;

	kal_bool	check_opid;
	kal_bool	check_mccmnc;
	kal_bool	check_sim_type;
	
	kal_bool	check_ims_registered;
	kal_bool	check_ims_domain;
	kal_bool	check_roaming_type;
	kal_bool	check_reserved[8];

}nvram_ef_ssds_response_profile_mask_struct;

typedef struct
{
	custom_ssds_atcmd_type		atcmd_type;
	kal_uint32					rsp_id;

	kal_uint32					op_id;
	kal_char					mccmnc[7];
	kal_uint8					sim_type;

	
	kal_bool					ims_registered;
	custom_ssds_ims_domain_type	ims_domain;
	custom_ssds_roaming_type	roaming_type;
	
	kal_uint32					reserved[8];	

}nvram_ef_ssds_response_profile_value_struct;

typedef struct
{
	/*response*/
	custom_ssds_csfb_type	rsp_path;

}nvram_ef_ssds_response_profile_action_struct;

typedef struct
{
	kal_bool		is_valid;
	nvram_ef_ssds_response_profile_mask_struct		mask;
	nvram_ef_ssds_response_profile_value_struct 	value;
	nvram_ef_ssds_response_profile_action_struct	action;
	
} nvram_ef_ssds_response_profile_entry_struct;


typedef struct
{
	nvram_ef_ssds_response_profile_entry_struct	response_path_entry[NVRAM_EF_SSDS_RESPONSE_PROFILE_MAX_ENTRY_NUM];	
} nvram_ef_ssds_response_profile_struct;

// Size and Total 
#define NVRAM_EF_SSDS_RESPONSE_PROFILE_TOTAL    (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_SSDS_RESPONSE_PROFILE_SIZE   	sizeof(nvram_ef_ssds_response_profile_struct)    // Size of each record

#endif

#if 1
#define	NVRAM_EF_SSDS_PDN_PROFILE_MAX_ENTRY_NUM		16
typedef struct
{
	kal_bool	check_atcmd_type;	

	kal_bool	check_opid;
	kal_bool	check_mccmnc;
	kal_bool	check_sim_type;
	
	kal_bool	check_ims_registered;
	kal_bool	check_ims_domain;
	kal_bool	check_roaming_type;
	
	kal_bool	check_roaming_setting;
	kal_bool	check_data_setting;
	kal_bool	check_reserved[8];	

}nvram_ef_ssds_pdn_profile_mask_struct;

typedef struct
{
	custom_ssds_atcmd_type		atcmd_type;

	kal_uint32					op_id;
	kal_char					mccmnc[7];
	kal_uint8					sim_type;
	
	kal_bool					ims_registered;
	custom_ssds_ims_domain_type	ims_domain;
	custom_ssds_roaming_type	roaming_type;
	
	kal_bool					roaming_setting;
	kal_bool					data_setting;
	
	kal_uint8					reserved[16];	

}nvram_ef_ssds_pdn_profile_value_struct;

typedef struct
{
	/*response*/
	custom_ssds_pdn_type	 pdn_path;
    custom_ssds_pdn_rat_type pdn_rat_type;
}nvram_ef_ssds_pdn_profile_action_struct;

typedef struct
{
	kal_bool		is_valid;
	nvram_ef_ssds_pdn_profile_mask_struct		mask;
	nvram_ef_ssds_pdn_profile_value_struct 		value;
	nvram_ef_ssds_pdn_profile_action_struct		action;
	
} nvram_ef_ssds_pdn_profile_entry_struct;


typedef struct
{
	nvram_ef_ssds_pdn_profile_entry_struct	pdn_path_entry[NVRAM_EF_SSDS_PDN_PROFILE_MAX_ENTRY_NUM];	
} nvram_ef_ssds_pdn_profile_struct;

// Size and Total 
#define NVRAM_EF_SSDS_PDN_PROFILE_TOTAL    (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_SSDS_PDN_PROFILE_SIZE   	sizeof(nvram_ef_ssds_pdn_profile_struct)    // Size of each record

#endif

#if 1
#define	NVRAM_EF_SSDS_PDN_FAIL_PROFILE_MAX_ENTRY_NUM	16

typedef struct
{
	kal_bool	check_esm_cause;

	kal_bool	check_opid;
	kal_bool	check_mccmnc;
	kal_bool	check_sim_type;
	
	kal_bool	check_ims_registered;
	kal_bool	check_ims_domain;
	kal_bool	check_roaming_type;
	kal_bool	check_reserved[8];

}nvram_ef_ssds_pdn_fail_profile_mask_struct;

typedef struct
{
	kal_uint32					esm_cause;

	kal_uint32					op_id;
	kal_char					mccmnc[7];
	kal_uint8					sim_type;
	
	kal_bool					ims_registered;
	custom_ssds_ims_domain_type	ims_domain;
	custom_ssds_roaming_type	roaming_type;

	kal_uint8					reserved[16];	

}nvram_ef_ssds_pdn_fail_profile_value_struct;

typedef struct
{
	/*response*/
	custom_ssds_pdn_type	pdn_fail_path;

}nvram_ef_ssds_pdn_fail_profile_action_struct;

typedef struct
{
	kal_bool		is_valid;
	nvram_ef_ssds_pdn_fail_profile_mask_struct			mask;
	nvram_ef_ssds_pdn_fail_profile_value_struct 		value;
	nvram_ef_ssds_pdn_fail_profile_action_struct		action;
	
} nvram_ef_ssds_pdn_fail_profile_entry_struct;


typedef struct
{
	nvram_ef_ssds_pdn_fail_profile_entry_struct	pdn_fail_entry[NVRAM_EF_SSDS_PDN_FAIL_PROFILE_MAX_ENTRY_NUM];	
} nvram_ef_ssds_pdn_fail_profile_struct;

// Size and Total 
#define NVRAM_EF_SSDS_PDN_FAIL_PROFILE_TOTAL    (1 * NVRAM_DUAL_RECORD)
#define NVRAM_EF_SSDS_PDN_FAIL_PROFILE_SIZE   	sizeof(nvram_ef_ssds_pdn_fail_profile_struct)    // Size of each record

#endif


#ifdef __cplusplus

}

#endif  /*__cplusplus */



#endif
