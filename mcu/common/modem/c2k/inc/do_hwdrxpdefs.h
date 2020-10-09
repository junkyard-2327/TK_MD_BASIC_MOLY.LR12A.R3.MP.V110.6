/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS (""MEDIATEK SOFTWARE"")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN ""AS-IS"" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
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
/*************************************************************
*
* This Software is the property of VIA Telecom, Inc. and may only be used pursuant to a license from VIA Telecom, Inc.  
* 
* Any unauthorized use inconsistent with the terms of such license is strictly prohibited.
* 
* Copyright (c) 2007-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
#ifndef _DO_HWDRXPDEFS_H_
#define _DO_HWDRXPDEFS_H_
/*****************************************************************************
* 
* FILE NAME   : do_hwdrxpdefs.h
*
* DESCRIPTION : DO RxPath register defines
*               It include preamble detector, Harq, Turbo decoder, Rx Controller.
*
* HISTORY     :
*     See Log at end of file
*
*****************************************************************************/

#define HWD_CP_TD_MODE_SHIFT                0
#define HWD_CP_TD_DEC_TYPE_SHIFT            1
#define HWD_CP_TD_LC_SCALE_SHIFT            2
#define HWD_CP_TD_ITER_OTHERS_SHIFT         5
#define HWD_CP_TD_ITER_5120_SHIFT           9

#define HWD_CP_TD_MODE_DO                   (0x00000000 << HWD_CP_TD_MODE_SHIFT)
#define HWD_CP_TD_MODE_1X_SCH               (0x00000001 << HWD_CP_TD_MODE_SHIFT)

#define HWD_CP_TD_DEC_TYPE_MAX_LOG_MAP      (0x00000000 << HWD_CP_TD_DEC_TYPE_SHIFT)
#define HWD_CP_TD_DEC_TYPE_MAX_STAR         (0x00000001 << HWD_CP_TD_DEC_TYPE_SHIFT)


/* HWD_DMA_MDM_RX_CTL */
#define DMA_MDM_RX_RST_N_SHIFT          24     /* [24]   */
#define DMA_MDM_RX_RST_N                (0x00000001 << DMA_MDM_RX_RST_N_SHIFT)        
#define DMA_MDM_RX_RST                  (0x00000000 << DMA_MDM_RX_RST_N_SHIFT) 

#define DMA_MDM_RX_ENABLE_SHIFT         16     /* [16]   */
#define DMA_MDM_RX_ENABLE               (0x00000001 << DMA_MDM_RX_ENABLE_SHIFT)        
#define DMA_MDM_RX_DISABLE              (0x00000000 << DMA_MDM_RX_ENABLE_SHIFT)

#define DMA_MDM_RX_CHANNEL_SHIFT        8     /* [10:8]   */
#define DMA_MDM_RX_CHANNEL_MASK         (0x00000007 << DMA_MDM_RX_CHANNEL_SHIFT)        
#define DMA_MDM_RX_CHANNEL_0            (0x00000000 << DMA_MDM_RX_CHANNEL_SHIFT)        
#define DMA_MDM_RX_CHANNEL_1            (0x00000001 << DMA_MDM_RX_CHANNEL_SHIFT)
#define DMA_MDM_RX_CHANNEL_2            (0x00000002 << DMA_MDM_RX_CHANNEL_SHIFT)        
#define DMA_MDM_RX_CHANNEL_3            (0x00000003 << DMA_MDM_RX_CHANNEL_SHIFT)
#define DMA_MDM_RX_CHANNEL_4            (0x00000004 << DMA_MDM_RX_CHANNEL_SHIFT)        
#define DMA_MDM_RX_CHANNEL_5            (0x00000005 << DMA_MDM_RX_CHANNEL_SHIFT)
#define DMA_MDM_RX_CHANNEL_6            (0x00000006 << DMA_MDM_RX_CHANNEL_SHIFT)        
#define DMA_MDM_RX_CHANNEL_7            (0x00000007 << DMA_MDM_RX_CHANNEL_SHIFT)


#define DMA_MDM_RX_CHANNEL				DMA_MDM_RX_CHANNEL_6

#define DMA_MDM_RX_SW_SOF_SHIFT         4     /* [4]   */
#define DMA_MDM_RX_SW_SOF               (0x00000001 << DMA_MDM_RX_SW_SOF_SHIFT)

#define DMA_MDM_RX_DEST_TYPE_SHIFT      3     /* [3]   */
#define DMA_MDM_RX_DEST_INC             (0x00000001 << DMA_MDM_RX_DEST_TYPE_SHIFT)        
#define DMA_MDM_RX_DEST_FIX             (0x00000000 << DMA_MDM_RX_DEST_TYPE_SHIFT)

#define DMA_MDM_RX_TD_DEBUG_SHIFT      2     /* [2]   */
#define DMA_MDM_RX_TD_DEBUG_EN             (0x00000001 << DMA_MDM_RX_TD_DEBUG_SHIFT)        
#define DMA_MDM_RX_TD_DEBUG_NO             (0x00000000 << DMA_MDM_RX_TD_DEBUG_SHIFT)         
  
#define DMA_MDM_RX_INT_INTERVAL_SHIFT       0     /* [1:0]   */
#define DMA_MDM_RX_INT_1_SLOT               (0x00000000 << DMA_MDM_RX_INT_INTERVAL_SHIFT) 
#define DMA_MDM_RX_INT_2_SLOT               (0x00000001 << DMA_MDM_RX_INT_INTERVAL_SHIFT)        
#define DMA_MDM_RX_INT_4_SLOT               (0x00000002 << DMA_MDM_RX_INT_INTERVAL_SHIFT)        
#define DMA_MDM_RX_INT_8_SLOT               (0x00000003 << DMA_MDM_RX_INT_INTERVAL_SHIFT)       

#define DMA_MDM_RX_ERROR_CLR_SHIFT 25
#define DMA_MDM_RX_ERROR_CLR_MASK (0x00000001 << DMA_MDM_RX_ERROR_CLR_SHIFT)

/* Bit defines for PacketRecord/HWD_DMA_MDM_RX_PRMx*/              
/* #define PACKET_REC_VALID_SHIFT		        31  Bit[31]		*/
#define PACKET_REC_GOOD_SHIFT		        30 /* Bit[30]*/
#define PACKET_REC_BCMCS_SHIFT		        29 /* Bit[29]*/
#define PACKET_REC_MAC_IDX_SHIFT	        22 /* Bits[28:22]*/
#define PACKET_REC_DRC_SHIFT		        18 /* Bit[21:18]*/
#define PACKET_REC_EP_SIZE_SHIFT	        15 /* Bit[17:15]*/
#define PACKET_REC_RATE_DET_SHIFT	        14 /* Bit[14]*/ 
#define PACKET_REC_SLOT_COUNT_SHIFT	        10 /* Bit[13:10]*/
#define PACKET_REC_TIME_STAMP_SHIFT	        4 /* Bit[9:4]*/
#define PACKET_REC_CRC_SHIFT		        3 /* Bit[3]*/
#define PACKET_REC_FIXED_NAK_FIX_SHIFT		2 /* Bit[2]*/  /* no defined by HW, SW defined value*/
#define PACKET_REC_START_OF_PKT_SHIFT		1 /* Bit[1]*/
#define PACKET_REC_COMPLETE_SHIFT	        0 /* Bit[0]*/

/* the commented define causes compiler warnings, replaced with a direct bitfield define 
#define PACKET_REC_VALID_MASK		        (0x00000001 << PACKET_REC_VALID_SHIFT		 )
*/
#define PACKET_REC_VALID_MASK				0x80000000
#define PACKET_REC_GOOD_MASK		        (0x00000001 << PACKET_REC_GOOD_SHIFT		 )
#define PACKET_REC_BCMCS_MASK		        (0x00000001 << PACKET_REC_BCMCS_SHIFT		 )
#define PACKET_REC_MAC_IDX_MASK	            (0x0000007F << PACKET_REC_MAC_IDX_SHIFT	     )
#define PACKET_REC_DRC_MASK		            (0x0000000F << PACKET_REC_DRC_SHIFT		     )
#define PACKET_REC_EP_SIZE_MASK	            (0x00000007 << PACKET_REC_EP_SIZE_SHIFT	     )
#define PACKET_REC_RATE_DET_MASK	        (0x00000001 << PACKET_REC_RATE_DET_SHIFT	 )
#define PACKET_REC_SLOT_COUNT_MASK	        (0x0000000F << PACKET_REC_SLOT_COUNT_SHIFT	 )
#define PACKET_REC_TIME_STAMP_MASK	        (0x0000003F << PACKET_REC_TIME_STAMP_SHIFT	 )
#define PACKET_REC_CRC_MASK		            (0x00000001 << PACKET_REC_CRC_SHIFT		     )
#define PACKET_REC_FIXED_NAK_FIX_MASK       (0x00000001 << PACKET_REC_FIXED_NAK_FIX_SHIFT )  /* no defined by HW, SW defined value*/
#define PACKET_REC_START_OF_PKT_MASK		(0x00000001 << PACKET_REC_START_OF_PKT_SHIFT  )
#define PACKET_REC_COMPLETE_MASK	        (0x00000001 << PACKET_REC_COMPLETE_SHIFT	 )

/* HWD_DMA_MDM_RX_STAT */
#define DMA_RX_ERROR_SHIFT 24
#define DMA_RX_ERROR_MASK (0xf << DMA_RX_ERROR_SHIFT)

     
/*************************
* DMA's view of memory address*
**************************/
/* Note HWD_DMA_IRAMx_BASE and HWD_CP_IRAMx_BASE share the same memory*/

/* DO turbo decoder buffer access */
#define HWD_DO_TD_OUTPUT         0x0B480000  /*DMA TD IF  */

/*************************
* Defines                *
**************************/

#define DO_FWD_MAX_PKT_SIZE         640
#define RX_MDM_INT_INTERVAL_CFG     DMA_MDM_RX_INT_4_SLOT
#define RX_MDM_INT_INTERVAL         (0x01 << RX_MDM_INT_INTERVAL_CFG) /* in slots*/
#define RX_MDM_SPY_INTERVAL         4 /* count by INT interval*/
    
/*****************************************************************************
* $Log:  $
*****************************************************************************/
#endif

