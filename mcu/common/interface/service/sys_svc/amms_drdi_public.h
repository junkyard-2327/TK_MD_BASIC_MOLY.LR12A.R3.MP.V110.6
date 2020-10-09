/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2013
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
 *   amms_public.h
 *
 * Project:
 * --------
 *   Moly
 *
 * Description:
 * ------------
 *   AMMS
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __AMMS_DRDI_PUBLIC_H__
#define __AMMS_DRDI_PUBLIC_H__



/*******************************************************************************
 * Included header files
 *******************************************************************************/



/*******************************************************************************
 * definition
 *******************************************************************************/
#define DRDI_SET_NONE (0xFF)


typedef enum {
    DRDI_2G_SET_NONE = DRDI_SET_NONE,
    DRDI_2G_SET0 = 0,
    DRDI_2G_SET1,
    DRDI_2G_SET2,
    DRDI_2G_SET3,
    DRDI_2G_SET4,
    DRDI_2G_SET5,
    DRDI_2G_SET6,
    DRDI_2G_SET7,
    DRDI_2G_SET8,
    DRDI_2G_SET9,
    DRDI_2G_SET10,
    DRDI_2G_SET11,
    DRDI_2G_SET12,
    DRDI_2G_SET13,
    DRDI_2G_SET14,
    DRDI_2G_SET15,
} DRDI_2G_SET;

typedef enum {
    DRDI_3GFDD_SET_NONE = DRDI_SET_NONE,
    DRDI_3GFDD_SET0 = 0,
    DRDI_3GFDD_SET1,
    DRDI_3GFDD_SET2,
    DRDI_3GFDD_SET3,
    DRDI_3GFDD_SET4,
    DRDI_3GFDD_SET5,
    DRDI_3GFDD_SET6,
    DRDI_3GFDD_SET7,
    DRDI_3GFDD_SET8,
    DRDI_3GFDD_SET9,
    DRDI_3GFDD_SET10,
    DRDI_3GFDD_SET11,
    DRDI_3GFDD_SET12,
    DRDI_3GFDD_SET13,
    DRDI_3GFDD_SET14,
    DRDI_3GFDD_SET15,
} DRDI_3GFDD_SET;

typedef enum {
    DRDI_3GTDD_SET_NONE = DRDI_SET_NONE,
    DRDI_3GTDD_SET0 = 0,
    DRDI_3GTDD_SET1,
    DRDI_3GTDD_SET2,
    DRDI_3GTDD_SET3,
    DRDI_3GTDD_SET4,
    DRDI_3GTDD_SET5,
    DRDI_3GTDD_SET6,
    DRDI_3GTDD_SET7,
    DRDI_3GTDD_SET8,
    DRDI_3GTDD_SET9,
    DRDI_3GTDD_SET10,
    DRDI_3GTDD_SET11,
    DRDI_3GTDD_SET12,
    DRDI_3GTDD_SET13,
    DRDI_3GTDD_SET14,
    DRDI_3GTDD_SET15,
} DRDI_3GTDD_SET;

typedef enum {
    DRDI_MMRF_SET_NONE = DRDI_SET_NONE,
    DRDI_MMRF_SET0 = 0,
    DRDI_MMRF_SET1,
    DRDI_MMRF_SET2,
    DRDI_MMRF_SET3,
    DRDI_MMRF_SET4,
    DRDI_MMRF_SET5,
    DRDI_MMRF_SET6,
    DRDI_MMRF_SET7,
    DRDI_MMRF_SET8,
    DRDI_MMRF_SET9,
    DRDI_MMRF_SET10,
    DRDI_MMRF_SET11,
    DRDI_MMRF_SET12,
    DRDI_MMRF_SET13,
    DRDI_MMRF_SET14,
    DRDI_MMRF_SET15,
} DRDI_MMRF_SET;

typedef enum {
    DRDI_C2K_SET_NONE = DRDI_SET_NONE,
    DRDI_C2K_SET0 = 0,
    DRDI_C2K_SET1,
    DRDI_C2K_SET2,
    DRDI_C2K_SET3,
    DRDI_C2K_SET4,
    DRDI_C2K_SET5,
    DRDI_C2K_SET6,
    DRDI_C2K_SET7,
    DRDI_C2K_SET8,
    DRDI_C2K_SET9,
    DRDI_C2K_SET10,
    DRDI_C2K_SET11,
    DRDI_C2K_SET12,
    DRDI_C2K_SET13,
    DRDI_C2K_SET14,
    DRDI_C2K_SET15,
} DRDI_C2K_SET;

typedef enum {
    DRDI_LTE_SET_NONE = DRDI_SET_NONE,
    DRDI_LTE_SET0 = 0,
    DRDI_LTE_SET1,
    DRDI_LTE_SET2,
    DRDI_LTE_SET3,
    DRDI_LTE_SET4,
    DRDI_LTE_SET5,
    DRDI_LTE_SET6,
    DRDI_LTE_SET7,
    DRDI_LTE_SET8,
    DRDI_LTE_SET9,
    DRDI_LTE_SET10,
    DRDI_LTE_SET11,
    DRDI_LTE_SET12,
    DRDI_LTE_SET13,
    DRDI_LTE_SET14,
    DRDI_LTE_SET15,
} DRDI_LTE_SET;


typedef enum {
    AMMS_DRDI_BUFF_STATUS__FREE_SUCCESS = 0,
    AMMS_DRDI_BUFF_STATUS__ALREADY_RETURN_TO_AP,
    AMMS_DRDI_BUFF_STATUS__NOT_SUPPORT_AMMS_DRDI,
} AMMS_DRDI_BUFF_STATUS;



/*******************************************************************************
 * External Function Declaration
 *******************************************************************************/


/*******************************************************************************
 * FUNCTION
 *  amms_drdi_load_drdi_set
 *
 * DESCRIPTION
 *  Return unused DRDI load view to AP side
 *
 * PARAMETERS
 *  N/A
 *
 * RETURN VALUES
 *  AMMS_DRDI_BUFF_STATUS
 *    (A) AMMS_DRDI_BUFF_STATUS__FREE_SUCCESS
 *      Return to AP in this boot time
 *    (B) AMMS_DRDI_BUFF_STATUS__ALREADY_RETURN_TO_AP
 *      Already return to AP before
 *    (C)  AMMS_DRDI_BUFF_STATUS__NOT_SUPPORT_AMMS_DRDI
 *      Not support AMMS_DRDI in this project
 *
 * NOTE
 *  (1) If this is the first boot time for MD to return memory to AP, calling task may suspend 
 *       (sleep suspend) for waiting GDMA to finish copying. Please aware about this.
 *       The return value is (A) AMMS_DRDI_BUFF_STATUS__FREE_SUCCESS
 *  (2) If this is NOT the first boot time for MD to return memory to AP, this API will return 
 *       immediately.
 *       The return value is (B) AMMS_DRDI_BUFF_STATUS__ALREADY_RETURN_TO_AP
 *
 * SEE ALSO
 *  N/A
 *
 ******************************************************************************/

AMMS_DRDI_BUFF_STATUS amms_drdi_load_drdi_set(
    DRDI_2G_SET    drdi_2g_set,
    DRDI_3GFDD_SET drdi_3gfdd_set,  /* FDD */
    DRDI_3GTDD_SET drdi_3gtdd_set,  /* TDD */
    DRDI_MMRF_SET drdi_mmrf_set,
    DRDI_C2K_SET drdi_c2k_set,
    DRDI_LTE_SET drdi_lte_set
);




#endif /*__AMMS_DRDI_PUBLIC_H__*/

