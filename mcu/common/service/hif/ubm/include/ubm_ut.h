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
 * ubm_ut.h
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
/*! @file ubm_ut.h
    @author Bo-Kai Huang
    @date 2016/06/01

    @brief The header file of USB buffer definition
*/
/****************************************************************************/
 
#ifndef  _UBM_UT_INC
#define  _UBM_UT_INC

#include "kal_public_api.h"

#ifdef __UBM_UT__
/****************************************************************************
 * Definitions
 ****************************************************************************/
#undef PRB_TYPE_DL_USB
#define PRB_TYPE_DL_USB 1

#undef USBCORE_TASK
#define USBCORE_TASK 1

/* DRB */
#define DRB_FLAG_BIT_DTYP_MSK       0x03
#define DRB_FLAG_BIT_DTYP           0x03
#define DRB_FLAG_DTYP_PL            0x01
#define DRB_FLAG_DTYP_PH            0x02

#define DRB_FLAG_BIT_AH             0x08

#define DRB_FLAG_BIT_XTYP_MSK       0x70
#define DRB_FLAG_BIT_XTYP           0x70
#define DRB_FLAG_BIT_XTYP_RNDIS     0x10
#define DRB_FLAG_BIT_XTYP_ECM       0x20
#define DRB_FLAG_BIT_XTYP_MBIM      0x30
#define DRB_FLAG_BIT_XTYP_NCM       0x40

#define DRB_FLAG_BIT_FHTYP_MSK      0x70
#define DRB_FLAG_BIT_FHTYP          0x70
#define DRB_FLAG_BIT_FHTYP_TYPE1    0x10
#define DRB_FLAG_BIT_FHTYP_TYPE2    0x20
#define DRB_FLAG_BIT_FHTYP_TYPE3    0x30
#define DRB_FLAG_BIT_FHTYP_TYPE4    0x40
#define DRB_FLAG_BIT_FHTYP_TYPE5    0x50
#define DRB_FLAG_BIT_FHTYP_TYPE6    0x60
#define DRB_FLAG_BIT_FHTYP_TYPE7    0x70
#define DRB_FLAG_BIT_EOT            0x80


#define HIFUSB_QMU_GET_START_PD_ADDR(_q)   (void*)ubm_ut_get_drb_base(_q) 
#define USBQ_GET_DRB_PD_PTR(_q,_idx)       ((usbq_dl_pd_drb*)(((usbq_dl_pd_drb*)HIFUSB_QMU_GET_START_PD_ADDR(_q))+(_idx)))   

#define HIFUSB_QMU_GET_START_TD_ADDR(_q)   (void*)ubm_ut_get_drb_base(_q)
#define USBQ_GET_DRB_TD_PTR(_q,_idx)       ((usbq_dl_td_drb*)(((usbq_dl_td_drb*)HIFUSB_QMU_GET_START_TD_ADDR(_q))+(_idx)))

//Payload Descriptor part
#define USBQ_DRB_PD_SET_DTYP(_q,_idx, _v)  (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag &=~ DRB_FLAG_BIT_DTYP_MSK); \
                                           (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag |= (_v))

#define USBQ_DRB_PD_CLR_DTYP(_q,_idx)      (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag &= ~DRB_FLAG_BIT_DTYP_MSK)
    
#define USBQ_DRB_PD_GET_DTYP(_q,_idx)      (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag & DRB_FLAG_BIT_DTYP_MSK)
        
#define USBQ_DRB_PD_SET_AH(_q,_idx)        (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag |= DRB_FLAG_BIT_AH)

#define USBQ_DRB_PD_CLR_AH(_q,_idx)        (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag &=~ DRB_FLAG_BIT_AH)
    
#define USBQ_DRB_PD_GET_AH(_q,_idx)        (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag & DRB_FLAG_BIT_AH)

#define USBQ_DRB_PD_SET_FHTYP(_q,_idx,_v)  (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag &= ~DRB_FLAG_BIT_FHTYP_MSK); \
                                           (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag |= (_v))

#define USBQ_DRB_PD_CLR_FHTYP(_q,_idx)     (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag &= ~DRB_FLAG_BIT_FHTYP_MSK)
    
#define USBQ_DRB_PD_GET_FHTYP(_q,_idx)     (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag & DRB_FLAG_BIT_FHTYP_MSK)

#define USBQ_DRB_PD_SET_EOT(_q,_idx)       (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag |= DRB_FLAG_BIT_EOT)

#define USBQ_DRB_PD_CLR_EOT(_q,_idx)       (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag &=~ DRB_FLAG_BIT_EOT) 
    
#define USBQ_DRB_PD_GET_EOT(_q,_idx)       (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag & DRB_FLAG_BIT_EOT) 

#define USBQ_DRB_PD_GET_PAD_LEN(_q,_idx)   (USBQ_GET_DRB_PD_PTR(_q,_idx)->padding_length)
        
#define USBQ_DRB_PD_SET_PAD_LEN(_q,_idx,_len)           (USBQ_GET_DRB_PD_PTR(_q,_idx)->padding_length = (kal_uint8)(_len))

#define USBQ_DRB_PD_GET_DATA_LEN(_q,_idx)               (USBQ_GET_DRB_PD_PTR(_q,_idx)->dl_data_length)
        
#define USBQ_DRB_PD_SET_DATA_LEN(_q,_idx,_len)          (USBQ_GET_DRB_PD_PTR(_q,_idx)->dl_data_length = (kal_uint16)(_len))

#define USBQ_DRB_PD_GET_DATA_ADDR(_q,_idx)              (USBQ_GET_DRB_PD_PTR(_q,_idx)->p_dl_data_addr)
        
#define USBQ_DRB_PD_SET_DATA_ADDR(_q,_idx,_dp)          (USBQ_GET_DRB_PD_PTR(_q,_idx)->p_dl_data_addr = (kal_uint8*)(_dp))

//Transfer Header Descriptor part
#define USBQ_DRB_TD_SET_DTYP(_q,_idx)      (USBQ_GET_DRB_TD_PTR(_q,_idx)->drb_flag &= ~DRB_FLAG_BIT_DTYP_MSK); \
                                           (USBQ_GET_DRB_TD_PTR(_q,_idx)->drb_flag |= DRB_FLAG_DTYP_PH)

#define USBQ_DRB_TD_CLR_DTYP(_q,_idx)      (USBQ_GET_DRB_TD_PTR(_q,_idx)->drb_flag &= ~DRB_FLAG_BIT_DTYP_MSK)
    
#define USBQ_DRB_TD_GET_DTYP(_q,_idx)      (USBQ_GET_DRB_TD_PTR(_q,_idx)->drb_flag & DRB_FLAG_BIT_DTYP_MSK)

#define USBQ_DRB_TD_SET_AH(_q,_idx)        (USBQ_GET_DRB_TD_PTR(_q,_idx)->drb_flag |= DRB_FLAG_BIT_AH)

#define USBQ_DRB_TD_CLR_AH(_q,_idx)        (USBQ_GET_DRB_TD_PTR(_q,_idx)->drb_flag &= ~DRB_FLAG_BIT_AH)
    
#define USBQ_DRB_TD_GET_AH(_q,_idx)        (USBQ_GET_DRB_TD_PTR(_q,_idx)->drb_flag & DRB_FLAG_BIT_AH)

#define USBQ_DRB_TD_SET_XTYP(_q,_idx,_v)   (USBQ_GET_DRB_TD_PTR(_q,_idx)->drb_flag &= ~DRB_FLAG_BIT_XTYP_MSK); \
                                           (USBQ_GET_DRB_TD_PTR(_q,_idx)->drb_flag |= (_v))

#define USBQ_DRB_TD_CLR_XTYP(_q,_idx)      (USBQ_GET_DRB_TD_PTR(_q,_idx)->drb_flag &= ~DRB_FLAG_BIT_XTYP_MSK)
    
#define USBQ_DRB_TD_GET_XTYP(_q,_idx)      (USBQ_GET_DRB_TD_PTR(_q,_idx)->drb_flag & DRB_FLAG_BIT_XTYP_MSK)

#define USBQ_DRB_TD_GET_XFER_LEN(_q,_idx)  (USBQ_GET_DRB_TD_PTR(_q,_idx)->dl_xfer_length)
        
#define USBQ_DRB_TD_SET_XFER_LEN(_q,_idx,_len)   (USBQ_GET_DRB_TD_PTR(_q,_idx)->dl_xfer_length = (kal_uint16)(_len))

/* XIT */
#undef USB_UL_XIT_MAX_COUNT
#define USB_UL_XIT_MAX_COUNT 1

#define HIFUSB_QMU_GET_CURRENT_XIT_ADDR(_q)           ((void*)ubm_ut_get_xit_base(_q))
#define USBQ_GET_XIT_PTR(_q,_idx)                     ((usbq_ul_xit*)HIFUSB_QMU_GET_CURRENT_XIT_ADDR(_q))   // only 1 XIT entry for reused in UT
#define USBQ_XIT_GET_XFER_LEN(_q,_idx)                (USBQ_GET_XIT_PTR(_q,_idx)->ul_xfer_length)
#define USBQ_XIT_GET_XFER_START_ADDR(_q,_idx)     (USBQ_GET_XIT_PTR(_q,_idx)->p_ul_xfer_start_addr)

/****************************************************************************
 * Type definitions
 ****************************************************************************/
typedef struct{
    kal_uint32 v_addr;
    kal_uint32 p_addr[2];
    kal_uint16 v_len;
    kal_uint16 p_len[2];// use 3 phy len for structure align
    kal_uint16 reserved;
}v2p_addr_t;

typedef enum{
META_ID_4G_DL_CIPHER=0,
META_ID_3G_DL_MAC,
META_ID_UL_RLC_RETX,
META_ID_UL_LHIF,
META_ID_DL_LWA,
META_ID_3G_DL_CIPHER,
META_ID_3G_DL_RLC_BC,
META_ID_4G_DL_LMAC,
META_ID_NUM
}META_TBL_ID;

enum{
VRB_USER_TX_LISR,           // EMAC Module
VRB_USER_ERT_TASK,          // EMAC Module
VRB_USER_EMACDL_TASK,       // EMAC/ERLCUL Module
VRB_USER_EL2H_TASK,         // EL2H Module
VRB_USER_EL2_TASK,          // EL2 Module
VRB_USER_IPCORE_TASK,       // Data Path Module
VRB_USER_ERRC_TASK,         // ERRC Module (for SRB)
VRB_USER_IMC_TASK,          // LTE CSR Module
VRB_USER_LHIF_TASK,         // LHIF Core
VRB_USER_USBCORE_TASK,      // USB Core
VRB_USER_UL2_TASK,          // 3G L2 module, high priority
VRB_USER_UL2D_TASK,         // 3G L2 module, lower priority than UL2 Task
VRB_USER_L1_LISR,           // 3G UL module
VRB_USER_NUM
};

/****************************************************************************
 * Global variables 
 ****************************************************************************/

/****************************************************************************
 * Function prototypes
 ****************************************************************************/
kal_bool hifusbq_set_dl_fh (kal_uint8 dl_fh_num, void* dl_fh_start_ptr, kal_uint8 dl_fh_size);
kal_uint8* prbm_allocate(kal_uint32 allocSize, kal_uint8 prbId);
void prbm_release(void* addr, kal_uint32 relSize, kal_uint8 prbId);
void copro_vrb_release(void* addr, kal_uint16 len, kal_uint8 task_id);
void copro_vrb_to_phy_addr(v2p_addr_t *v2p);
usbq_dl_pd_drb* ubm_ut_get_drb_base(kal_uint8 drbTxQue);
void hifusbq_create_dl_drb(kal_uint8 drbTxQueIdx, kal_uint32* headIdx,kal_uint16* freeDrbCount);
void hifusbq_get_dl_drb_base(kal_uint8 q_num, void** dl_drb_start_ptr, kal_uint32* drbCount, kal_uint32* reservCount);
kal_bool hifusbq_set_dl_drb(kal_uint8 q_num, kal_uint32 dl_drb_start_idx, kal_uint32 dl_drb_count);
kal_bool hifusbq_release_dl_drb(kal_uint8 q_num, kal_uint32 dl_drb_start_idx, kal_uint32 dl_drb_count);
kal_uint32 hifusbq_poll_dl_drb(kal_uint8 q_num, kal_uint32 *dl_drb_start_idx, kal_uint32 *dl_drb_end_idx);
usbq_ul_xit* ubm_ut_get_xit_base(kal_uint8 xitRxQue);
void hifusbq_get_ul_xit_base (kal_uint8 q_num , void **ul_xit_start_ptr,  kal_uint32* ul_xit_count);
kal_uint32 hifusbq_poll_ul_xit(kal_uint8 q_num, kal_uint16* ul_xit_start_idx, kal_uint16* ul_xit_end_idx);
kal_bool hifusbq_ul_xit_release(kal_uint8 q_num, kal_uint32 ul_xit_start_idx, kal_uint32 ul_xit_count);
kal_bool hifusbq_flush_ul_xit(kal_uint8 rxQueNo, kal_uint32* headIdx, kal_uint32* tailIdx, kal_uint32* num);
kal_bool hifusbq_flush_dl_drb(kal_uint8 TxQueNo, kal_uint32* headIdx, kal_uint32* tailIdx, kal_uint32* num);
kal_bool qp_meta_check(META_TBL_ID metaId, kal_uint16* startIdx, kal_uint16* endIdx);



#endif /* __UBM_UT__*/
/****************************************************************************/
#endif /* _UBM_UT_INC */

