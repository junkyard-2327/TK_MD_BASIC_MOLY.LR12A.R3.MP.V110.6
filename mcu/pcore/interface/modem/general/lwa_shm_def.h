/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
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
 *	lwa_shm_def.h
 *
 * Project:
 * --------
 *  UMOLY
 *
 * Description:
 * ------------
 *  The share memory definitions of LWA (LTE-WLAN Aggregation)
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *------------------------------------------------------------------------------
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/

#ifndef LWA_SHM_DEF_H
#define LWA_SHM_DEF_H

#define LWA_ALIGN_SIZE (4)
#define LWA_FOUR_BYTE_ALIGN_MASK (LWA_ALIGN_SIZE - 1)
#define LWA_SIZE_FOUR_BYTE_ALIGN(_sz) (((_sz) + LWA_ALIGN_SIZE - 1) & ~LWA_FOUR_BYTE_ALIGN_MASK)

/****************************************************************************
 * LWA Share Memory Layout version 1
 *
 * shm_start_addr
 *     |<-------------------------shm_total_size---------------------->|
 *     |                      |                                        |
 *     |<-----desc_ring------>|<----------data_ring------------->|<-r->| 
 *     |                      |                                  |     | 
 *     |    lwa_dl_desc[N]    |         lwa_dl_buff_t[N]         |     | 
 *     |                      |                                  |     | 
 *
 * 1) N = floor(shm_total_size / (sizeof(lwa_dl_desc)+size(lwa_dl_buff_t)))
 * 2) lwa_dl_desc is 4-byte-aligned
 * 3) lwa_dl_buff_struct is 4-byte-aligned
 * 4) Each element from desc_ring and data_ring is 1-to-1 mapping
 *    ex. lwa_dl_desc[100] decribes lwa_dl_buff_t[100]
 * 5) r is remainder tail from floor()
 *
 ****************************************************************************/
#define LWA_SHM_LAYOUT_VER (1) //rel-13, wifi downlink only


/****************************************************************************
 * Type Definitions
 ****************************************************************************/
typedef struct _lwa_dl_desc lwa_dl_desc;


/****************************************************************************
 * LWA downlink decriptor, complies with
 * 1) l2ce_sod_desc
 * 2) qbm_gpd
 * 3) wifi usage
 ****************************************************************************/
struct _lwa_dl_desc
{
	kal_uint8 	         flag;
	kal_uint8 	         cksum;
	kal_uint16 	         desc_index;
	lwa_dl_desc         *next_ptr;
    lwa_dl_desc         *data_ptr;
    kal_uint16	         data_len;
	kal_uint16	         payload_offset;
    kal_uint8		     pad0;
	kal_uint8		     bearer;
	kal_uint8		     key_index;
	kal_uint8		     sec_func;
    kal_uint32	         count;
    kal_uint8		    *out_ptr;
};


/****************************************************************************
 * WIFI downlink buffer reserved, including
 * 1) HW_MAC_RX_DESC_T:          32 bytes
 * 2) HW_MAC_RX_STS_GROUP_4_T:   32 bytes
 * 3) Ether frame fields:        18 bytes = dst(6)+src(6)+type(2)+fcs(4)
 ****************************************************************************/
#define LWA_WIFI_DL_RSV_LEN     (82)


/****************************************************************************
 * WIFI downlink MTU
 ****************************************************************************/
#define LWA_WIFI_DL_IP_MTU        (1500) 
#define LWA_MAX_HDR_LEN           (4) //3gpp r13: 1
#define LTE_PDCP_MAX_HDR_LEN      (4) //3gpp r13: 1~3
#define LWA_WIFI_DL_PAYLOAD_MTU   (LWA_WIFI_DL_IP_MTU + LWA_MAX_HDR_LEN + LTE_PDCP_MAX_HDR_LEN)


/****************************************************************************
 * LWA downlink buffer
 ****************************************************************************/
#define LWA_DL_BUFF_LEN       (2352) // state of art value of WDRV
#define LWA_DL_BUFF_LEN_IDEAL (LWA_SIZE_FOUR_BYTE_ALIGN(LWA_WIFI_DL_RSV_LEN + LWA_WIFI_DL_PAYLOAD_MTU)) // ideal value

#if (LWA_DL_BUFF_LEN < (LWA_WIFI_DL_RSV_LEN + LWA_WIFI_DL_MTU))
#error LWA_DL_BUFF_LEN
#endif

typedef struct
{
	kal_uint8 	buff[LWA_DL_BUFF_LEN];
} lwa_dl_buff_t;




/****************************************************************************
 * LWA WLAN/EPDCP U-plane Control Message
 *   1. any message change shall keep backward compatibility
 *   2. message length is fixed in 4 bytes
 *   3. the higher 2 bytes are 'command' and the lower 2 bytes are 'value'
 *   
 ****************************************************************************/
#define LWA_UP_CTRL_MSG_CMD_MAX   (0xFFFF)
#define LWA_UP_CTRL_MSG_VALUE_MAX (0xFFFF)
 
typedef enum
{
// [Command enumeration]                                              [Direction]        [Value]
    LWA_UP_CTRL_CMD_DL_SHM_LAYOUT_SUPPORT_LIST                = 0,   //WLAN -> PDCP,      16-bit bitmap: each bit represents 1 layout version
    LWA_UP_CTRL_CMD_DL_SHM_LAYOUT_DESICION                    = 1,   //WLAN <- PDCP,      16-bit bitmap: toggle only 1 bit for runtime layout version
	LWA_UP_CTRL_CMD_DL_SHM_FULL                               = 2,   //WLAN -> PDCP,      value reserved 
	LWA_UP_CTRL_CMD_DL_SHN_NOT_FULL                           = 3,   //WLAN <- PDCP,      value reserved
    LWA_UP_CTRL_CMD_WLAN_DL_PKT_READY_NOTIFY_SETTING          = 4,   //WLAN <- PDCP,      0 means setting 'OFF'; 1 means setting 'ON'; others reserved
	LWA_UP_CTRL_CMD_WLAN_DL_PKT_READY_NOTIFY                  = 5,   //WLAN -> PDCP,      if setting is on, WLAN send it after every packet write to SHM; value is reserved
	LWA_UP_CTRL_CMD_DL_HDR_LOOK_AHEAD_SETTING                 = 6,   //WLAN <- PDCP,      value enum: lwa_dl_hdr_look_ahead_setting_enum

//  add new command from here	
	LWA_UP_CTRL_CMD_INVALID                                   = LWA_UP_CTRL_MSG_CMD_MAX
} lwa_up_ctrl_cmd_enum;

/****************************************************************************
 * LWA downlink header look ahead setting:
 *
 * [usage] LTE send to WIFI at LWA init time, to configure WIFI driver
 *         pre-read payload into descriptor for performance optimization
 *       
 ****************************************************************************/
typedef enum
{
    LWA_DL_HDR_LOOK_AHEAD_0BYTE = 0,
	//look ahead off
	
	LWA_DL_HDR_LOOK_AHEAD_1BYTE = 1,
	//look ahead the first 1 byte of ether frame's payload:
	//    lwa_dl_desc.bearer = (unsigned char) <payload_1st_byte>
	
	LWA_DL_HDR_LOOK_AHEAD_3BYTE = 2,
	//look ahead first 3 bytes of ether frame's payload:
	//    lwa_dl_desc.bearer = (unsigned char) <payload_1st_byte>
	//    lwa_dl_desc.count = (unsigned char) (<payload_2nd_byte> << 8) + (unsigned char) <payload_3rd_byte>
    //default value for 91/92 LWA
	
	LWA_DL_HDR_LOOK_AHEAD_INVALID = LWA_UP_CTRL_MSG_VALUE_MAX
} lwa_dl_hdr_look_ahead_setting_enum;

typedef enum
{
    LWA_WIFI_DL_PKT_READY_NOTIFY_OFF,
	LWA_WIFI_DL_PKT_READY_NOTIFY_ON,
	LWA_WIFI_DL_PKT_READY_NOTIFY_INVALID = LWA_UP_CTRL_MSG_VALUE_MAX
} lwa_wifi_dl_pkt_ready_notify_setting_enum;



#endif /* LWA_SHM_DEF_H */
