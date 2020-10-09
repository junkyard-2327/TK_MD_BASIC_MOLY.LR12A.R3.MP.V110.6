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
 *   lhifcore_if.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   LHIF public API, structure and macro
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 08 03 2017 cs.huang
 * [MOLY00268467] [HMU] Fix build warning
 * fix HMU build warning
 *
 * 06 23 2017 cs.huang
 * [MOLY00258471] [LHIFCore] Enable LHIF HW log interrupt to reduce polling times
 * merge HMU part
 *
 * 03 29 2017 actory.ou
 * [MOLY00233862] check in LHIF SLT and LHIF HW logging api
 * [LHIFCORE] enable LHIF HW logging
 *
 * 03 13 2017 actory.ou
 * [MOLY00233862] check in LHIF SLT and LHIF HW logging api
 * [LHIFCORE] fix build error
 *
 * 03 13 2017 actory.ou
 * [MOLY00233862] check in LHIF SLT and LHIF HW logging api
 * [LHIFCORE] replace LHIF log api with EBS api but wrapped
 * fix build error at DVT and MODIS due to EBS return type
 *
 * 02 23 2017 tj.chang
 * [MOLY00227639] [Bianco Bring-up] RNDIS support DID/DRB
 * [UMOLYA] ring-buffer based support.
 *
 * 01 24 2017 actory.ou
 * [MOLY00220000] merge CSCD into trunk
 * [LHIFCORE IT] add interface API for l2 copro c model
 *
 * 11 10 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF] IF add API
 *
 * 11 10 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF] DHL API modification
 *
 * 09 26 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF] usb callback
 *
 * 09 20 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF Core] modify power API flow
 *
 * 09 08 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF] LHIF Log
 *
 * 09 01 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF] Remove net_type for PDCP LB
 *
 * 08 29 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF] Development
 *
 * 08 19 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF] fix modis build error
 *
 * 08 19 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF] Change lhif_if.h include file
 *
 * 08 16 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF] Change free bit by DID SI
 *
 * 08 16 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF] power on/off API
 *
 * 08 10 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF] Fix Build error
 *
 * 08 08 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF] Change meta format
 *
 * 07 28 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF] Change AP UL queue naming
 *
 * 07 28 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF] DVT issue
 *
 * 07 12 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF] intergration with UPCM
 *
 * 07 12 2016 cs.huang
 * [MOLY00189147] [LHIF] Add LHIFCORE & LHIFDEV
 * [LHIF] Fix build warnings
 *
  ****************************************************************************/
#ifndef _LHIF_IF_H
#define _LHIF_IF_H
#include "kal_public_api.h"

/***********************************************************************
 *  lhif_meta_tbl_t
 *
 *  Auther: CS.Huang (2016/5/4)
 *  Brief: LHIF meta table format
 ***********************************************************************/
typedef struct
{
    kal_uint32 psn:16;
    kal_uint32 protocol_idx:3;
    kal_uint32 pdn:5;
    kal_uint32 net_if:5;
    kal_uint32 net_type:3;
    kal_uint32 length:16;
    kal_uint32 drb:8; // LWA only
    kal_uint32 reserved2:7;
    kal_uint32 ignore:1; // 1: ignore
    kal_uint8* vrb_addr;
}lhif_meta_tbl_t;

/***********************************************************************
 *  meta_tbl_config_t
 *
 *  Auther: CS.Huang (2016/5/4)
 *  Brief: META config format, only for UT code 
 ***********************************************************************/
typedef struct{
    kal_uint32*    tbl_base; // must cache(32 byte) align 
    kal_uint16     entry_num;
    kal_uint8      entry_size;
    kal_uint8      ch_idx;// only use for DL Cipher & 3G DL 
}meta_tbl_config_t;

/***********************************************************************
 *  LHIF_NET_TYPE
 *
 *  Auther: CS.Huang (2016/5/4)
 *  Brief: LHIF network type definition
 ***********************************************************************/
typedef enum{
    LHIF_NET_TYPE_LHIF     = 0,
    LHIF_NET_TYPE_RNDIS    = 1,
    LHIF_NET_TYPE_ECM      = 2,
    LHIF_NET_TYPE_MBIM     = 3,
    LHIF_NET_TYPE_PDCP_LBA = 4,
    LHIF_NET_TYPE_PDCP_LBB = 5,
}LHIF_NET_TYPE;

/***********************************************************************
 *  LHIF_NET_IF
 *
 *  Auther: CS.Huang (2016/5/4)
 *  Brief: LHIF network interface definition
 ***********************************************************************/
typedef enum{
    LHIF_NET_IF_START = 0, 
    /* normal interface */
    LHIF_NET_IF_NORMAL_START = LHIF_NET_IF_START,
    LHIF_NET_IF_0 = LHIF_NET_IF_NORMAL_START, 
    LHIF_NET_IF_1,                     
    LHIF_NET_IF_2,                     
    LHIF_NET_IF_3,                     
    LHIF_NET_IF_4,                     
    LHIF_NET_IF_5,                     
    LHIF_NET_IF_6,                     
    LHIF_NET_IF_7,
    LHIF_NET_IF_8,
    LHIF_NET_IF_9,
    LHIF_NET_IF_10,
    LHIF_NET_IF_11,
    LHIF_NET_IF_12,
    LHIF_NET_IF_13,
    LHIF_NET_IF_14,
    LHIF_NET_IF_15,
    LHIF_NET_IF_16,
    LHIF_NET_IF_17,
    LHIF_NET_IF_18,
    LHIF_NET_IF_19,
    LHIF_NET_IF_20,
    LHIF_NET_IF_21,
    LHIF_NET_IF_22,
    LHIF_NET_IF_23,
    LHIF_NET_IF_24,
    LHIF_NET_IF_25,
    LHIF_NET_IF_26,
    LHIF_NET_IF_27,
    LHIF_NET_IF_28,
    LHIF_NET_IF_29,
    LHIF_NET_IF_NORMAL_MAX = LHIF_NET_IF_29,
    /* Test interface */
    LHIF_NET_IF_TEST_START = LHIF_NET_IF_NORMAL_MAX + 1,
    LHIF_NET_IF_30 = LHIF_NET_IF_TEST_START,                    
    LHIF_NET_PDCP_LBA = LHIF_NET_IF_30,
    LHIF_NET_IF_31,                    
    LHIF_NET_PDCP_LBB = LHIF_NET_IF_31,
    LHIF_NET_IF_TEST_MAX = LHIF_NET_IF_31,
    LHIF_NET_IF_MAX,
}LHIF_NET_IF;

/***********************************************************************
 *  LHIF_QUEUE_TYPE
 *
 *  Auther: CS.Huang (2016/5/4)
 *  Brief: LHIF HW queue type definition
 ***********************************************************************/
typedef enum
{
    LHIF_HWQ_SW_DL =0,
    LHIF_HWQ_SW_UL,
    LHIF_HWQ_AP_UL_Q0,
    LHIF_HWQ_AP_UL_Q1,
    LHIF_HWQ_DIRECT_DL,
    LHIF_HWQ_MAX_NUM,
    LHIF_HWQ_NO_USE = LHIF_HWQ_MAX_NUM,
}LHIF_QUEUE_TYPE;

/***********************************************************************
 *  LHIFCore public function definition
 *
 *  The function description please see the C file
 ***********************************************************************/
#define lhif_send_ul_q(net_type, net_if, data_addr, data_len, psn) lhif_data_send_ul_q_usb(net_type, net_if, data_addr, data_len, psn)
kal_bool lhif_data_send_ul_q_usb(LHIF_NET_TYPE net_type, kal_uint8 net_if, void* data_addr, kal_uint16 data_len, kal_uint16 psn);
#define lhif_meta_read_done(start_idx, end_idx, queue_type) lhif_net_meta_read_done(start_idx, end_idx, queue_type)
kal_bool lhif_net_meta_read_done(kal_uint16 start_idx, kal_uint16 end_idx, LHIF_QUEUE_TYPE queue_type);
#define lhif_query_meta_table(base_addr, size, queue_type) lhif_net_query_meta_table(base_addr, size, queue_type)
kal_bool lhif_net_query_meta_table(kal_uint32 **base_addr, kal_uint16 *size, LHIF_QUEUE_TYPE queue_type);
void lhifcore_hw_init(void);
void lhifcore_hw_restore(void);
void lhifcore_hw_backup(void);
typedef kal_bool (*LHIF_USB_CB)(kal_uint16 start_idx, kal_uint16 end_idx, LHIF_QUEUE_TYPE queue_type);
void lhifcore_sw_ul_enable(kal_bool enable, LHIF_USB_CB usb_cb);
kal_bool lhifcore_task_power_on();
kal_bool lhifcore_task_power_down();
void lhifcore_task_hmu_wake_up(kal_uint32 events);

#ifdef __LHIFCORE_IT_SUPPORT__
typedef void (*LHIFC_IT_CALLBACK)();
void lhifcore_it_reg_l2copro_tick(LHIFC_IT_CALLBACK l2copro_funp);
#endif

#endif // _LHIF_IF_H


