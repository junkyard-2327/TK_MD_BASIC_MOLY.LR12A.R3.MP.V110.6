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
 *   amms_pos_public.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   Interface for AMMS POS, detail refer to dmmgr_amms_pos.c
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

 #ifndef __AMMS_POS_PUBLIC_H__
#define __AMMS_POS_PUBLIC_H__

typedef enum {
    AMMS_POS_ALLOCATE_STATUS__SUCCESS,
    AMMS_POS_ALLOCATE_STATUS__OUT_OF_MEMORY,
    AMMS_POS_ALLOCATE_STATUS__ALREADY_ALLOCATE,
    AMMS_POS_ALLOCATE_STATUS__NO_ALLOCATE,
    AMMS_POS_ALLOCATE_STATUS__DURING_ALLOCATE,
    AMMS_POS_ALLOCATE_STATUS__TIMEOUT,
} AMMS_POS_ALLOCATE_STATUS;

typedef enum {
    AMMS_POS_DEALLOCATE_STATUS__SUCCESS,
    AMMS_POS_DEALLOCATE_STATUS__INVALID_BUFF,
    AMMS_POS_DEALLOCATE_STATUS__ALREADY_DEALLOCATE,
} AMMS_POS_DEALLOCATE_STATUS;

typedef enum {
    AMMS_POS_BUFF_STATUS__IN_AP = 0,
    AMMS_POS_BUFF_STATUS__DURING_ALLOCATE,
    AMMS_POS_BUFF_STATUS__IN_MD,
    AMMS_POS_BUFF_STATUS__DURING_DEALLOCATE,
} AMMS_POS_BUFF_STATUS;

void amms_pos_init(void);
AMMS_POS_ALLOCATE_STATUS amms_pos_allocate_buffer(kal_uint32 size);
AMMS_POS_ALLOCATE_STATUS amms_pos_allocate_get_buffer_ptr(void ** ptr);
AMMS_POS_DEALLOCATE_STATUS amms_pos_deallocate_buffer(void * ptr);
AMMS_POS_BUFF_STATUS amms_pos_buffer_status(void);
void amms_pos_reset_buffer_status(void);


#endif  //__AMMS_POS_PUBLIC_H__
