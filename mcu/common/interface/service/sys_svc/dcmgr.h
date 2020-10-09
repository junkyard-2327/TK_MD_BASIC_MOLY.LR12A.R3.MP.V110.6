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
 *
 * Filename:
 * ---------
 *   dcmgr.h
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *   Dynamic Section Manager for dynamic section relocation into TCM(internal SRAM)
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef __DCMGR_H__
#define __DCMGR_H__


/*******************************************************************************
 * Included header files
 *******************************************************************************/



/*******************************************************************************
 * definition
 *******************************************************************************/
typedef enum {
    DYNAMIC_L2CACHE_SECTION_3GW = 0,
    DYNAMIC_L2CACHE_SECTION_3GW_IDLE,
    /* insert id before this line*/
    DYNAMIC_CACHE_SECTION_NUM     /* 2 */
} dcm_section_id;


/* make sure to define TOTAL_DCM_SECTION as valuse of DYNAMIC_CACHE_SECTION_NUM */
#define TOTAL_DCM_SECTION       (1)
#define DCM_MAX_NUM             (32)

    
/* define dcm function return status */
typedef enum {
    DCM_STATUS_SUCCESS,                /* the operation is succeeded */
    DCM_STATUS_LOAD_BEFORE,            /* the section has been load before*/
    DCM_STATUS_UNLOAD_NOTHING,         /* the section has been load before */
} dcm_status;


/* define dcm section status */
typedef enum {
    DCM_SECTION_LOAD,           /* the section is loaded */
    DCM_SECTION_UNLOAD,         /* the section is not loaded */
} dcm_section_status;




/*******************************************************************************
 * External Function Declaration
 *******************************************************************************/
dcm_status DCM_Load(kal_uint32 dynamic_section_id);

dcm_status DCM_Unload(kal_uint32 dynamic_section_id);

dcm_section_status DCM_QuerySectionStatus(dcm_section_id dynamic_section_id);

kal_bool DCM_IsLoad(kal_uint32 dynamic_section_id);



#endif  /* __DCMGR_H__ */
