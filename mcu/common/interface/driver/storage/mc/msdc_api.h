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
 *   msdc_api.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   Header file of memory card host driver
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================ 
 ****************************************************************************/
#ifndef _MSDC_API_H
#define _MSDC_API_H

// enum
typedef enum {
	MS_CARD = 0,
	SD_CARD = 1,
	MMC_CARD = 2,
	MSPRO_CARD = 3,
	MMC40_CARD = 4,
	SD20_LCS_CARD = 5,	// SD 2.0 compliant but with byte access mode. (<=2G)
	SD20_HCS_CARD = 6,	// SD 2.0 compliant but with block access mode. (>2G)
	MMC42_CARD = 7,		// MMC 4.2 compliant with block access mode
	MMC_CARD_SIMPLUS = 8,
	SD30_CARD,
	MSDC_CARD_TYPE_MAX,
	UNKNOWN_CARD = 0xF3
} T_MSDC_CARD;

typedef struct 
{
	//LOCAL_PARA_HDR
	kal_uint8 media_size;
	kal_uint8 media_index;
        #if defined(__MSDC_DUAL_CARD_SWITCH__) && !defined(__MSDC_NOT_SUPPORT_HOT_PLUG__)
	kal_uint8 media_status;
	kal_uint16 media_array_size;
	#endif
	void *media_array;
}msdc_card_detect_ind_struct; 

/*+++++++++++++++++++++++++++++++++++++++++++++++++++*/
/*define for custom ,need check  ----begin*/
/*+++++++++++++++++++++++++++++++++++++++++++++++++++*/
typedef struct
{
	kal_uint32 (*Init)(void);
	kal_bool (*IsCardInd)(void);
	void (*PowerCtrl)(kal_bool on);
} MSDC_Custom_Handle;

typedef struct
{
	kal_uint8 cmd_clk_odc;
	kal_uint8 dat_odc;
	kal_uint8 cmd_clk_slew;
	kal_uint8 dat_slew;
}msdc_io_ctrl_struct;

typedef enum
{
	MSDC_HOT_PLUG = 		0x1,	// MSDC support hot plugging
	MSDC2_HOT_PLUG = 		0x2,	// MSDC2 support hot plugging
	MSDC_WP = 				0x4,	//  MSDC support write protecton detection
	MSDC2_WP = 				0x8,	// MSDC2 support write protection detection
	MSDC_SD4_SDIO1 =		0x10,	// SD/MMC use MSDC1(4-bits) and SDIO use MSDC2(1-bits)
	MSDC_SDIO4_SD1	= 		0x20	// vice versa
	//MSDC_SDIO4_SDIO1,  // not support now
}msdc_custom_enum;

#if !defined(DRV_MSDC_MT6225_SERIES) && !defined(MT6276) && !defined(MT6573) && !defined(MT6251) && !defined(MT6256) && !defined(MT6255) && !defined(MT6280)
// configure the output driving capacity and slew rate
#define MSDC_ODC_2MA		0x0
#define MSDC_ODC_4MA		0x1
#define MSDC_ODC_6MA		0x2
#define MSDC_ODC_8MA		0x3
// only MT6227, MT6217 and MT6218B can support following driving capacity
//#if defined(MT6228)||defined(MT6229) || defined(MT6227)|| defined(MT6226)|| defined(MT6226M)
#define MSDC_ODC_10MA		0x4
#define MSDC_ODC_12MA		0x5
#define MSDC_ODC_14MA		0x6
#define MSDC_ODC_16MA		0x7
//#endif
#elif defined(__DRV_MSDC_DRIVING_53_SERIES__)
#define MSDC_ODC_4MA		0x0
#define MSDC_ODC_8MA		0x4
#define MSDC_ODC_12MA		0x2
#define MSDC_ODC_16MA		0x6
#elif defined(DRV_MSDC_DRIVING_36_SERIES)
#define MSDC_ODC_4MA		0x0
#define MSDC_ODC_12MA		0x1
#define MSDC_ODC_8MA		0x2
#define MSDC_ODC_16MA		0x3
#elif defined(DRV_MSDC_DRIVING_6255_SERIES)
#define MSDC_ODC_4MA		0x0
#define MSDC_ODC_8MA		0x1
#define MSDC_ODC_12MA		0x2
#define MSDC_ODC_16MA		0x3
#else
#define MSDC_ODC_4MA		0x0
#define MSDC_ODC_8MA		0x2
#define MSDC_ODC_12MA		0x4
#define MSDC_ODC_16MA		0x6
#endif

#ifndef DRV_MSDC_IOCON_CORRECT_SLEW_RATE
#define MSDC_ODC_SLEW_FAST		1
#define MSDC_ODC_SLEW_SLOW		0
#else
#define MSDC_ODC_SLEW_FAST		0
#define MSDC_ODC_SLEW_SLOW		1
#endif

/*+++++++++++++++++++++++++++++++++++++++++++++++++++*/
/*define for custom ,need check   -----finish*/
/*+++++++++++++++++++++++++++++++++++++++++++++++++++*/

#endif//_MSDC_API_H
