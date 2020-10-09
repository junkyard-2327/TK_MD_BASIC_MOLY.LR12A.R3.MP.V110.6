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
 * ubm_export.h
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
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/****************************************************************************/
/*! @file ubm_export.h
    @author Bo-Kai Huang
    @date 2016/06/01

    @brief The header file of USB buffer definition
*/
/****************************************************************************/
 
#ifndef  _UBM_EXPORT_INC
#define  _UBM_EXPORT_INC

#include "ubm_type.h"
#include "usbc_custom.h"

#include "lhif_if.h"

#ifndef __UBM_UT__
#include "hif_common.h"
#include "hifusb_qmu.h"
#endif

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
extern  void ubm_init();

/* FHB */
extern  kal_uint8 ubm_set_fhb(const void* headerPattern, kal_uint8 size, const char* headerName);
extern  kal_bool ubm_update_fhb(const void* headerPattern, kal_uint8 size, const char* headerName);
extern  kal_bool ubm_clean_fhb(const char* headerName);
extern  kal_uint8 ubm_get_fhb_type(const char* headerName);

/* NFHB */
extern  kal_uint8* ubm_allocate_nfhb(kal_uint8 txQueNo, kal_uint16 allocSize);
extern  void ubm_release_nfhb(kal_uint8 txQueNo, void* nfhbAddr, kal_uint16 relSize);

/* VRB address virtual/physical translate */
extern  ubm_vrb_phy_addr ubm_addr_vir2phy_and_save(kal_uint8 txQueNo, kal_uint32 virAddr, kal_uint16 virLen);
extern  kal_uint32 ubm_addr_phy2vir_and_delete(kal_uint8 txQueNo, kal_uint32 phyAddr);

/* VRB release */
extern  void ubm_vrb_virtual_addr_release(void* vrbVirAddr, kal_uint16 relLen);

/* DRB */
extern  void ubm_drb_init_properties();
extern  kal_bool ubm_drb_quest_unused(kal_uint8 txQueNo, kal_uint32 alloCount);
extern  kal_bool ubm_drb_submit(kal_uint8 txQueNo, kal_uint32 submitCount);
extern  void ubm_drb_repay(kal_uint8 txQueNo);
extern  kal_bool ubm_drb_release(kal_uint8 txQueNo, kal_uint32 headIdx, kal_uint32 relCount);
extern  kal_uint32 ubm_drb_poll(kal_uint8 txQueNo, kal_uint32* headIdx, kal_uint32* tailIdx);
extern  void ubm_drb_operate(kal_uint8 txQueNo, kal_uint32 drbIdx, ubm_drb_op opcode, ubm_drb_field field, ubm_drb_field_val* val);
extern  kal_bool ubm_drb_get_one_writable_Idx(kal_uint8 txQueNo, kal_uint32* writeIdx);
extern  kal_bool ubm_drb_revert_one_write(kal_uint8 txQueNo);
extern  usbq_dl_pd_drb* ubm_drb_idx2addr(kal_uint8 txQueNo, kal_uint32 drbIndex);
extern  kal_uint32 ubm_drb_addr2idx(kal_uint8 txQueNo, usbq_dl_pd_drb* drbPtr);
extern  kal_bool ubm_drb_flush(kal_uint8 txQueNo, kal_uint32* headIdx, kal_uint32* tailIdx, kal_uint32* num);

/* XIT */
extern  kal_bool ubm_xit_release(kal_uint8 rxQueNo, kal_uint16 headIdx, kal_uint32 relCount);
extern  kal_uint32 ubm_xit_poll(kal_uint8 rxQueNo, kal_uint16* headIdx, kal_uint16* tailIdx);
extern  void ubm_xit_operate(kal_uint8 rxQueNo, kal_uint32 xitIdx, ubm_xit_op opcode, ubm_xit_field field, ubm_xit_field_val* val);
extern  usbq_ul_xit* ubm_xit_idx2addr(kal_uint8 rxQueNo, kal_uint32 xitIndex);
extern  kal_uint32 ubm_xit_addr2idx(kal_uint8 rxQueNo, usbq_ul_xit* xitPtr);
extern  kal_uint32 ubm_xit_get_next_idx(kal_uint8 rxQueNo, kal_uint32 xitIndex);
extern  kal_bool ubm_xit_flush(kal_uint8 rxQueNo, kal_uint32* headIdx, kal_uint32* tailIdx, kal_uint32* num);

/* UL META */
extern  lhif_meta_tbl_t* ubm_ul_meta_idx2addr(kal_uint8 rxQueNo, kal_uint16 xitIndex);
extern  kal_uint16 ubm_ul_meta_get_next_idx(kal_uint8 rxQueNo, kal_uint16 xitIndex);
extern  void ubm_ul_meta_init_properties();
extern  LHIF_NET_TYPE ubm_ul_meta_get_lhif_net_type(kal_uint8 rxQueNo, usb_class_type_e classType);
extern  kal_bool ubm_ul_meta_enqueue_lhif_ul_queue(kal_uint8 rxQueNo, LHIF_NET_TYPE lhifNetType,kal_uint8 usbclassDevId, void* dataAddr, kal_uint16 dataLen);
extern  kal_bool ubm_ul_meta_check_lhif_ul_queue(kal_uint16* startIdx, kal_uint16* endIdx);
extern  lhif_meta_tbl_t* ubm_ul_meta_get_base();


/* UT */
#ifdef __UBM_UT__
extern  void ubm_ut_test_cases();
#define HIFUSB_QMU_RXQ_UL_PRB_XIT_EN     (0x1 << 9)
#define HIFUSB_QMU_RXQ_DL_PRB_DRB_EN     (0x1 << 10)
#endif

/****************************************************************************/
#endif /* _UBM_EXPORT_INC */

