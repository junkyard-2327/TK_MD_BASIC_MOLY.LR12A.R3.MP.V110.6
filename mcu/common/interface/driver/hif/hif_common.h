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

/*******************************************************************************
 * Filename:
 * ---------
 *   hif_common.h
 *
 * Project:
 * --------
 *   TATAKA
 *
 * Description:
 * ------------
 *	This is the HIF data path driver API head file for both USB2.0/USB3.0/SDIO.
 *
 * Author:
 * -------
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 03 28 2017 shenghui.shi
 * [MOLY00236724] update USB DLQ driver
 * update usb driver for merge UMOLY to UMOLYA
 *
 * 03 22 2017 gang.lei
 * [MOLY00223010] UMOLYA USB Driver Checkin
 * for ULQ type MACRO remove
 *
 * 03 06 2017 shenghui.shi
 * [MOLY00233213] [SE2 Internal Test][93][BRINGUP.DEV][Sanity][20170302][1][core0,vpe0,tc0(vpe0)] Fatal Error (0x1d, 0x95c00170, 0x90221344) - USB_HIS
 * fix DLQ flush API bug
 *
 * 02 21 2017 shenghui.shi
 * [MOLY00226854] UMOLYA USB driver update
 * drb cache align
 *
 * 02 21 2017 shenghui.shi
 * [MOLY00226854] UMOLYA USB driver update
 * udpate usb DRB flush API and add debug log
 *
 * 02 08 2017 gang.lei
 * [MOLY00223010] UMOLYA USB Driver Checkin
 * 1.fix dlq cs err issue
 * 2.fix ulq cache flush issue
 *
 * 02 06 2017 gang.lei
 * [MOLY00223010] UMOLYA USB Driver Checkin
 * fix UDLQ Driver issue
 *
 * 02 15 2017 gang.lei
 * [MOLY00223010] UMOLYA USB Driver Checkin
 * Merge from Bringup DEV to Trunk
 *
 * 02 07 2017 shenghui.shi
 * [MOLY00226854] UMOLYA USB driver update
 * update MUSB DRB driver for cache flush issue.
 *
 * 01 05 2017 gang.lei
 * [MOLY00223010] UMOLYA USB Driver Checkin
 * <saved by Perforce>
 ****************************************************************************/



#ifndef __HIF_COMMON_H__
#define __HIF_COMMON_H__

#include "qmu_bm.h"
//#include "kal_internal_api.h"

typedef enum _hif_flush_type{
	/*
	 *	@brief	set entire queue hwo=0 and return the head/tail/number
	*/
	HIFQ_FLUSH_DEQ = 0,
	/*
	 *	@brief	directly destroy whole queue and return the head/tail/number
	*/
	HIFQ_FLUSH_FREE,
}hif_flush_type_e;

typedef enum _hif_queue_type{
	HIFQ_TYPE_MIN = 0,
	HIFQ_TYPE_TX,	//default use the BPS
	HIFQ_TYPE_RX,	//default don't use BPS
	HIFQ_TYPE_TX_WO_BPS, 	// for test only
	HIFQ_TYPE_RX_W_BPS,		// for test only	
	HIFQ_TYPE_TX_NO_FLUSH,	//conjunction with HIF_QCFG_BM_TX_EMPTY_ENQ, it transmits GPD's without checksum calcuation and cache flush operations
	HIFQ_TYPE_MAX,
}hif_queue_type_e;

typedef enum _hif_deq_type{
	HIFQ_DEQ = 0,
	HIFQ_FREEQ,
	HIFQ_DEQ_TYPE2,
#ifdef SDIO_TST
    HIFQ_SDIO_TEST_FREEQ,
#endif
}hif_deq_type_e;

typedef struct _hif_deq_info{
	hif_queue_type_e 	q_type;
	kal_uint8			que_no;
	hif_deq_type_e		deq_type;
	kal_uint8			reserve[1];
}hif_deq_info_t;

/****************************************************************************
                                                    93 ULDL XIT/DRB Format
 ****************************************************************************/
 
/****************************************************************************
 * Structure of UL XIT
 ****************************************************************************/
typedef struct _usbq_ul_xit usbq_ul_xit;

struct _usbq_ul_xit 
{
	kal_uint16	ul_xfer_length;
	kal_uint16	reserved;
	void		 *p_ul_xfer_start_addr;
};


#define HIFUSB_QMU_GET_CURRENT_XIT_ADDR(_q) 		hifusbq_get_xit_start_address(_q)
#define USBQ_GET_XIT_PTR(_q,_idx)                  ((usbq_ul_xit *)(HIFUSB_QMU_GET_CURRENT_XIT_ADDR(_q) ) + _idx)

#define USBQ_XIT_GET_XFER_LEN(_q,_idx) 				USBQ_GET_XIT_PTR(_q,_idx) -> ul_xfer_length
#define USBQ_XIT_GET_XFER_START_ADDR(_q,_idx)		USBQ_GET_XIT_PTR(_q,_idx) -> p_ul_xfer_start_addr

#define USB_UL_XIT_ENTRY_SIZE 512
#define USB_UL_XIT_SIZE (USB_UL_XIT_ENTRY_SIZE*8)
/****************************************************************************
 * Structure of DL DRB
 ****************************************************************************/
typedef struct _usbq_dl_pd_drb usbq_dl_pd_drb;

struct _usbq_dl_pd_drb
{
	kal_uint8	drb_flag;
	kal_uint8	padding_length;
	kal_uint16  dl_data_length;
	void		*p_dl_data_addr;	
};

typedef struct _usbq_dl_td_drb usbq_dl_td_drb;

struct _usbq_dl_td_drb
{
	kal_uint8	drb_flag;
	kal_uint8	reserved1;
	kal_uint16  dl_xfer_length;
	kal_uint32	reserved2;	
};

typedef struct _usbq_dl_fh_drb usbq_dl_fh_drb;

struct _usbq_dl_fh_drb
{
	kal_uint16	fh_index;
	kal_uint16  	dl_fh_length;
	void		*p_dl_fh_addr;	
};

#define HIFUSBQ_QBM_BPS_BUF_SZ	QBM_QUEUE_GET_MEM_SIZE(QBM_SIZE_TGPD_BPS, HIFUSBQ_QBM_BPS_NUM)

#define USB_DL_DRB_REV_SIZE		1024
#define USB_DL_DRB_SIZE			4096
#define USB_DL_DRB_TOTAL_SIZE	(USB_DL_DRB_SIZE + USB_DL_DRB_REV_SIZE)*8

#define USB_DL_DRB_ENTRY_SIZE		4096
#define USB_DL_DRB_MAX_COUNT		4096
#define USB_DL_DLQ_FH_MAX_SIZE 256
extern kal_uint8 hifusb_dlq_drb[USB_DL_DRB_TOTAL_SIZE];
extern kal_uint8 hifusb_dlq_sw_drb[USB_DL_DRB_TOTAL_SIZE];

#define HIFUSB_QMU_GET_START_PD_ADDR(_q)   hifusbq_get_drb_start_address(_q)
#define USBQ_GET_DRB_PD_PTR(_q,_idx)       ((usbq_dl_pd_drb*)(HIFUSB_QMU_GET_START_PD_ADDR(_q))+(_idx))   

#define HIFUSB_QMU_GET_START_TD_ADDR(_q)   hifusbq_get_drb_start_address(_q)
#define USBQ_GET_DRB_TD_PTR(_q,_idx)       ((usbq_dl_td_drb*)(HIFUSB_QMU_GET_START_TD_ADDR(_q))+(_idx))   

#define HIFUSB_QMU_GET_RELEASE_TYPE_ADDR(_q)   hifusbq_get_sw_drb_start_address(_q)
#define USBQ_GET_DRB_REL_TYPE(_q,_idx)       ((usbq_dl_pd_drb*)(HIFUSB_QMU_GET_RELEASE_TYPE_ADDR(_q))+(_idx))   

//DRB Flag
#define DRB_FLAG_BIT_DTYP_MSK     0x03
#define DRB_FLAG_DTYP_TH      0x00
#define DRB_FLAG_DTYP_PL      0x01
#define DRB_FLAG_DTYP_PH      0x02
#define DRB_FLAG_BIT_AH       0x08

#define DRB_FLAG_BIT_TYPE_MSK     0xFF

#define DRB_FLAG_BIT_FHTYP_MSK    0x70
#define DRB_FLAG_FHTYP_NONE   0x00
#define DRB_FLAG_FHTYP_TYPE1  0x10
#define DRB_FLAG_FHTYP_TYPE2  0x20
#define DRB_FLAG_FHTYP_TYPE3  0x30
#define DRB_FLAG_FHTYP_TYPE4  0x40
#define DRB_FLAG_FHTYP_TYPE5  0x50
#define DRB_FLAG_FHTYP_TYPE6  0x60
#define DRB_FLAG_FHTYP_TYPE7  0x70

#define DRB_FLAG_BIT_EOT      0x80

#define DRB_FLAG_BIT_XTYP_MSK    0x70
#define DRB_FLAG_XTYP_NONE    0x00
#define DRB_FLAG_XTYP_RNDIS   0x10
#define DRB_FLAG_XTYP_ECM     0x20
#define DRB_FLAG_XTYP_MBIM    0x30
#define DRB_FLAG_XTYP_NCM     0x40

#define DRB_FLAG_BTYP_PRB     0x01
#define DRB_FLAG_BTYP_VRB     0x02

//Payload Descriptor part
#define USBQ_DRB_PD_RESET(_q,_idx) \
	       kal_mem_set(USBQ_GET_DRB_PD_PTR(_q,_idx), 0, sizeof(usbq_dl_pd_drb))


//Payload Descriptor part
#define USBQ_DRB_PD_SET_BTYP(_q,_idx,_v) \
	       (USBQ_GET_DRB_REL_TYPE(_q,_idx)->drb_flag &=~ DRB_FLAG_BIT_TYPE_MSK); \
	       (USBQ_GET_DRB_REL_TYPE(_q,_idx)->drb_flag |= (_v))

#define USBQ_DRB_PD_CLR_BTYP(_q,_idx) \
	       (USBQ_GET_DRB_REL_TYPE(_q,_idx)->drb_flag &=~ DRB_FLAG_BIT_TYPE_MSK)
	
#define USBQ_DRB_PD_GET_BTYP(_q,_idx) \
		   (USBQ_GET_DRB_REL_TYPE(_q,_idx)->drb_flag & DRB_FLAG_BIT_TYPE_MSK)

#define USBQ_DRB_PD_SET_DTYP(_q,_idx,_v) \
	       (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag &=~ DRB_FLAG_BIT_DTYP_MSK); \
	       (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag |= (_v))

#define USBQ_DRB_PD_CLR_DTYP(_q,_idx) \
	       (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag &=~ DRB_FLAG_BIT_DTYP_MSK)
	
#define USBQ_DRB_PD_GET_DTYP(_q,_idx) \
		   (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag & DRB_FLAG_BIT_DTYP_MSK)
		
#define USBQ_DRB_PD_SET_AH(_q,_idx) \
	       (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag |= DRB_FLAG_BIT_AH)

#define USBQ_DRB_PD_CLR_AH(_q,_idx) \
	       (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag &=~ DRB_FLAG_BIT_AH)
	
#define USBQ_DRB_PD_GET_AH(_q,_idx) \
		   (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag & DRB_FLAG_BIT_AH)

#define USBQ_DRB_PD_SET_FHTYP(_q,_idx,_v) \
	       (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag &=~ DRB_FLAG_BIT_FHTYP_MSK); \
	       (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag |= (_v))

#define USBQ_DRB_PD_CLR_FHTYP(_q,_idx) \
	       (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag &=~ DRB_FLAG_BIT_FHTYP_MSK)
	
#define USBQ_DRB_PD_GET_FHTYP(_q,_idx) \
		   (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag & DRB_FLAG_BIT_FHTYP_MSK)

#define USBQ_DRB_PD_SET_EOT(_q,_idx) \
	       (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag |= DRB_FLAG_BIT_EOT)

#define USBQ_DRB_PD_CLR_EOT(_q,_idx) \
	       (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag &=~ DRB_FLAG_BIT_EOT) 
	
#define USBQ_DRB_PD_GET_EOT(_q,_idx) \
		   (USBQ_GET_DRB_PD_PTR(_q,_idx)->drb_flag & DRB_FLAG_BIT_EOT) 

#define USBQ_DRB_PD_GET_PAD_LEN(_q,_idx) \
		   (USBQ_GET_DRB_PD_PTR(_q,_idx)->padding_length)
		
#define USBQ_DRB_PD_SET_PAD_LEN(_q,_idx,_len) \
	       (USBQ_GET_DRB_PD_PTR(_q,_idx)->padding_length = (kal_uint8)(_len))

#define USBQ_DRB_PD_GET_DATA_LEN(_q,_idx) \
		   (USBQ_GET_DRB_PD_PTR(_q,_idx)->dl_data_length)
		
#define USBQ_DRB_PD_SET_DATA_LEN(_q,_idx,_len) \
	       (USBQ_GET_DRB_PD_PTR(_q,_idx)->dl_data_length = (kal_uint16)(_len))

#define USBQ_DRB_PD_GET_DATA_ADDR(_q,_idx) \
		   (USBQ_GET_DRB_PD_PTR(_q,_idx)->p_dl_data_addr)
		
#define USBQ_DRB_PD_SET_DATA_ADDR(_q,_idx,_dp) \
	       (USBQ_GET_DRB_PD_PTR(_q,_idx)->p_dl_data_addr = (kal_uint32*)(_dp))

//Transfer Header Descriptor part
#define USBQ_DRB_TD_SET_DTYP(_q,_idx,_v) \
	       (USBQ_GET_DRB_TD_PTR(_q,_idx)->drb_flag &=~ DRB_FLAG_BIT_DTYP_MSK); \
	       (USBQ_GET_DRB_TD_PTR(_q,_idx)->drb_flag |= (_v))

#define USBQ_DRB_TD_CLR_DTYP(_q,_idx) \
	       (USBQ_GET_DRB_TD_PTR(_q,_idx)->drb_flag &=~ DRB_FLAG_BIT_DTYP_MSK)
	
#define USBQ_DRB_TD_GET_DTYP(_q,_idx) \
		   (USBQ_GET_DRB_TD_PTR(_q,_idx)->drb_flag & DRB_FLAG_BIT_DTYP_MSK)

#define USBQ_DRB_TD_SET_AH(_q,_idx) \
	       (USBQ_GET_DRB_TD_PTR(_q,_idx)->drb_flag |= DRB_FLAG_BIT_AH)

#define USBQ_DRB_TD_CLR_AH(_q,_idx) \
	       (USBQ_GET_DRB_TD_PTR(_q,_idx)->drb_flag &=~ DRB_FLAG_BIT_AH)
	
#define USBQ_DRB_TD_GET_AH(_q,_idx) \
		   (USBQ_GET_DRB_TD_PTR(_q,_idx)->drb_flag & DRB_FLAG_BIT_AH)

#define USBQ_DRB_TD_SET_XTYP(_q,_idx,_v) \
	       (USBQ_GET_DRB_TD_PTR(_q,_idx)->drb_flag &=~ DRB_FLAG_BIT_XTYP_MSK); \
	       (USBQ_GET_DRB_TD_PTR(_q,_idx)->drb_flag |= (_v))

#define USBQ_DRB_TD_CLR_XTYP(_q,_idx) \
	       (USBQ_GET_DRB_TD_PTR(_q,_idx)->drb_flag &=~ DRB_FLAG_BIT_XTYP_MSK)
	
#define USBQ_DRB_TD_GET_XTYP(_q,_idx) \
		   (USBQ_GET_DRB_TD_PTR(_q,_idx)->drb_flag & DRB_FLAG_BIT_XTYP_MSK)

#define USBQ_DRB_TD_GET_XFER_LEN(_q,_idx) \
		   (USBQ_GET_DRB_TD_PTR(_q,_idx)->dl_xfer_length)
		
#define USBQ_DRB_TD_SET_XFER_LEN(_q,_idx,_len) \
	       (USBQ_GET_DRB_TD_PTR(_q,_idx)->dl_xfer_length = (kal_uint16)(_len))

//Transfer Header Descriptor part
#define USBQ_DRB_TD_RESET(_q,_idx) \
	       kal_mem_set(USBQ_GET_DRB_TD_PTR(_q,_idx), 0, sizeof(usbq_dl_td_drb))

	       
/*!
 *  @brief  the queue configuration bit-map
 *  @param  HIF_QCFG_BM_TX_EMPTY_ENQ , set one and the set_gpd flow would follow non-bps enq flow
 */
#define HIF_QCFG_BM_TX_EMPTY_ENQ	(0x1 << 0)


/*!
 *  @brief  ask hif driver to set GPD buffer into QMU
 *  @param  q_type        	the queue type
 *  @param  queue_no        QMU queue no
 *  @param  first_gpd       first GPD of a single GPD or GPD list
 *  @param  last_gpd        last GPD of a single GPD or GPD list
 *	@return KAL_TRUE : set gpd success, 
 			KAL_FALSE : set gpd fail and upper module should re-submit or free the queue list
 */
kal_bool hif_set_gpd(hif_queue_type_e q_type, kal_uint8 queue_no, qbm_gpd* first_gpd, qbm_gpd* last_gpd);


/*!
 *  @brief  ask hif driver to flush all GPD buffer from QMU
 *  @param  q_type        	the queue type
 *  @param  queue_no        QMU queue no
 *  @param  flush type    	the flush type wished
 *  @param  pp_head        	the head pointer of flush list
 *  @param  pp_tail        	the tail pointer of flush list
 *  @return	return total flushed gpd number
 */
kal_uint32 hif_flush_gpd(hif_queue_type_e q_type, kal_uint8 queue_no, hif_flush_type_e flush_type , void **pp_head, void **pp_tail);


/*!
 *  @brief  poll specified QMU queue to see if any GPD complete
 *			deq_type == HIFQ_FREEQ, (use qbmt_free_q_hwo())
 *				would free the used queue after this function and return the deq number
 *			deq_type == HIF_DEQ, 	
 *				would just deq and return the deq list and the deq number
 *				use use qbmt_de_q() if generic buffer type
 *				use deqmt_deq_hif_ul_type1() if QBM_TYPE_HIF_UL_TYPE1				
 *				use deqmt_deq_hif_ul_type2() if QBM_TYPE_HIF_UL_TYPE2
 *  @param  deq_info        the que number , que type and deq type
 *  @param  first_gpd       first GPD of a single GPD or GPD list
 *  @param  last_gpd        last GPD of a single GPD or GPD list
 *	@return	return the deq number
 */
kal_uint32 hif_poll_queue(hif_deq_info_t deq_info, void **first_gpd, void **last_gpd);

/*!
 *  @brief  initial hif_common.c private structure and variable
 *	@return	return KAL_TRUE if success , KAL_FALSE if failure
 */
kal_bool hif_common_qmu_init(void);

/*!
 *  @brief  get currently que list
 *	@param	is_tx, KAL_TRUE for txq , KAL_FALSE for rxq
 *	@param q_no , the queue number form 0~n
 *	@param pp_head , return the currently queue head
 *	@param pp_tail , return the currently queue tail
 */
void hif_get_que_list(kal_bool is_tx , kal_uint8 q_no, void **pp_head, void **pp_tail);

/*!
 *  @brief  configure specific queue operation option with bit-map config
 *	@param	is_tx, KAL_TRUE for txq , KAL_FALSE for rxq
 *	@param q_no , the queue number form 0~n
 *	@param que_cfg , the bit-map configuration , ex. HIF_QCFG_BM_TX_EMPTY_ENQ
 *	@return KAL_TRUE if success, KAL_FALSE if configure not valid
 */
kal_bool hif_set_que_cfg(kal_bool is_tx , kal_uint8 q_no, kal_uint16 que_cfg);

#endif
