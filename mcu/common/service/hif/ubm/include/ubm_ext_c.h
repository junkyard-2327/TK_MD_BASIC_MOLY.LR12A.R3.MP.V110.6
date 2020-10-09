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

/*****************************************************************************
 *
 * Filename:
 * ---------
 * ubm_ext_c.h
 *
 * Project:
 * --------
 * MOLY
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *----------------------------------------------------------------------------
 * removed!
 * removed!
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/****************************************************************************/
/*! @file ubm_ext_c.h
    @author Bo-Kai Huang
    @date 2016/06/01

    @brief The header file of USB buffer definition
*/
/****************************************************************************/
 
#ifndef  _UBM_EXT_C_INC
#define  _UBM_EXT_C_INC


/****************************************************************************
 * Definitions
 ****************************************************************************/

/****************************************************************************
 * Type definitions
 ****************************************************************************/

/****************************************************************************
 * Global variables 
 ****************************************************************************/

/****************************************************************************
 * Function prototypes
 ****************************************************************************/

/* Init */
extern "C" void ubm_init();

/* FHB */
extern "C" kal_uint8 ubm_set_fhb(const void* headerPattern, kal_uint32 headerSize, const char* aliasName);
extern "C" kal_bool ubm_clean_fhb(const char* aliasName);
extern "C" kal_uint8 ubm_get_fhb_type(const char* aliasName);

/* NFHB */
extern "C" kal_uint8* ubm_allocate_nfhb(kal_uint8 txQueNo, kal_uint16 allocSize);
extern "C" void ubm_release_nfhb(kal_uint8 txQueNo, void* nfhbAddr, kal_uint16 relSize);

/* VRB address translate */
extern "C" ubm_vrb_phy_addr ubm_addr_vir2phy_and_save(kal_uint8 txQueNo, kal_uint32 virAddr, kal_uint16 virLen);
extern "C" kal_uint32 ubm_addr_phy2vir_and_delete(kal_uint8 txQueNo, kal_uint32 phyAddr);

/* VRB release */
extern "C" void ubm_vrb_virtual_addr_release(void* vrbVirAddr, kal_uint16 relLen);

/* DRB */
extern "C" kal_bool ubm_drb_quest_unused(kal_uint8 txQueNo, kal_uint32 alloCount);
extern "C" kal_bool ubm_drb_submit(kal_uint8 txQueNo, kal_uint32 submitCount);
extern "C" void ubm_drb_repay(kal_uint8 txQueNo);
extern "C" kal_bool ubm_drb_release(kal_uint8 txQueNo, kal_uint32 headIdx, kal_uint32 relCount);
extern "C" kal_uint32 ubm_drb_poll(kal_uint8 txQueNo, kal_uint32* headIdx, kal_uint32* tailIdx);
extern "C" void ubm_drb_operate(kal_uint8 txQueNo, kal_uint32 drbIdx, ubm_drb_op opcode, ubm_drb_field field, ubm_drb_field_val* val);
extern "C" kal_bool ubm_drb_get_one_writable_Idx(kal_uint8 txQueNo, kal_uint32* writeIdx);
extern "C" kal_bool ubm_drb_revert_one_write(kal_uint8 txQueNo);
extern "C" usb_dl_drb* ubm_drb_idx2addr(kal_uint8 txQueNo, kal_uint32 drbIndex);
extern "C" kal_uint32 ubm_drb_addr2idx(kal_uint8 txQueNo, usb_dl_drb* drbPtr);

/* XIT */
extern "C" kal_bool ubm_xit_release(kal_uint8 rxQueNo, kal_uint32 headIdx, kal_uint32 relCount);
extern "C" kal_uint32 ubm_xit_poll(kal_uint8 rxQueNo, kal_uint32* headIdx, kal_uint32* tailIdx);
extern "C" void ubm_xit_operate(kal_uint8 rxQueNo, kal_uint32 xitIdx, ubm_xit_op opcode, ubm_xit_field field, ubm_xit_field_val* val);
extern "C" usb_ul_xit* ubm_xit_idx2addr(kal_uint8 rxQueNo, kal_uint32 xitIndex);
extern "C" kal_uint32 ubm_xit_addr2idx(kal_uint8 rxQueNo, usb_ul_xit* xitPtr);
extern "C" kal_uint32 ubm_xit_get_next_idx(kal_uint8 rxQueNo, kal_uint32 xitIndex);

/****************************************************************************/
#endif /* _UBM_EXT_C_INC */

