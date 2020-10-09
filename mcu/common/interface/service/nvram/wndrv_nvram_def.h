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
 * 
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 * 
 *
 * Author:
 * -------
 * 
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __WNDRV_NVRAM_DEF_H__
#define __WNDRV_NVRAM_DEF_H__

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 


#include "nvram_defs.h"
#include "nvram_enums.h"
#include "ps_public_enum.h"
#include "device.h"




// LID Enums

typedef enum
{
        NVRAM_EF_WNDRV_START            = NVRAM_LID_GRP_WNDRV(0), 
        NVRAM_EF_WNDRV_MAC_ADDRESS_LID = NVRAM_EF_WNDRV_START,
        NVRAM_EF_WNDRV_TX_POWER_2400M_LID,
        NVRAM_EF_WNDRV_TX_POWER_5000M_LID,
        NVRAM_EF_WNDRV_DAC_DC_OFFSET_LID,
        NVRAM_EF_WNDRV_TX_ALC_POWER_LID,
        NVRAM_EF_WNDRV_EXT_SETTING_TRIMVAL_THERMOVAL_LID,
        NVRAM_EF_WNDRV_ALC_SLOPE_LID,
        /* For WNDRV Tx Power Calibration Free Flow */
        NVRAM_EF_WNDRV_TPCFF_LID, 
        NVRAM_EF_WNDRV_END = NVRAM_EF_WNDRV_ALC_SLOPE_LID,      
        NVRAM_EF_WNDRV_LAST_LID         = NVRAM_LID_GRP_WNDRV(63)
}nvram_lid_wndrv_enum;

// VERNO
#define  NVRAM_EF_WNDRV_MAC_ADDRESS_LID_VERNO                "000"
#define  NVRAM_EF_WNDRV_TX_POWER_2400M_LID_VERNO             "010"
#define  NVRAM_EF_WNDRV_TX_POWER_5000M_LID_VERNO             "020"
#define  NVRAM_EF_WNDRV_DAC_DC_OFFSET_LID_VERNO              "030"
#define  NVRAM_EF_WNDRV_TX_ALC_POWER_LID_VERNO               "040"
#define  NVRAM_EF_WNDRV_ALC_SLOPE_LID_VERNO                  "050"
#define  NVRAM_EF_WNDRV_EXT_SETTING_TRIMVAL_THERMOVAL_LID_VERNO    "060"
#define  NVRAM_EF_WNDRV_TPCFF_LID_VERNO      "000"
// Size and Total 

/************************************************************
 * Start of WNDRV Calibration data
 ************************************************************/
 /**
 * Total number of WNDRV Calibration data items
 */
#define NVRAM_WNDRV_CAL_ELEMENT_TOTAL NVRAM_EF_WNDRV_END - NVRAM_EF_WNDRV_START + 1

/**
 * WNDRV Permanent MAC Address
 */
#define NVRAM_EF_WNDRV_MAC_ADDRESS_SIZE     sizeof(wndrv_cal_mac_addr_struct)
#define NVRAM_EF_WNDRV_MAC_ADDRESS_TOTAL    1

/**
 * WNDRV 2.4G TX Power Table
 */
#define NVRAM_EF_WNDRV_TX_POWER_2400M_SIZE    sizeof(wndrv_cal_txpwr_2400M_struct)
#define NVRAM_EF_WNDRV_TX_POWER_2400M_TOTAL   1

/**
 * WNDRV 5.0G TX Power Table
 */
#define NVRAM_EF_WNDRV_TX_POWER_5000M_SIZE    sizeof(wndrv_cal_txpwr_5000M_struct)
#define NVRAM_EF_WNDRV_TX_POWER_5000M_TOTAL   1

/**
 * WNDRV DAC DC OFFSET
 */
#define NVRAM_EF_WNDRV_DAC_DC_OFFSET_SIZE    sizeof(wndrv_cal_dac_dc_offset_struct)
#define NVRAM_EF_WNDRV_DAC_DC_OFFSET_TOTAL   1


#define NVRAM_EF_WNDRV_TX_ALC_POWER_SIZE    sizeof(wndrv_cal_tx_ALC_2400M_struct)
#define NVRAM_EF_WNDRV_TX_ALC_POWER_TOTAL   1

#define NVRAM_EF_WNDRV_EXT_SETTING_TRIMVAL_THERMOVAL_SIZE    sizeof(wndrv_cal_setting_trim_thermo_struct)
#define NVRAM_EF_WNDRV_EXT_SETTING_TRIMVAL_THERMOVAL_TOTAL   1

#define NVRAM_EF_WNDRV_ALC_SLOPE_SIZE    sizeof(wndrv_cal_ALC_Slope_2400M_struct)
#define NVRAM_EF_WNDRV_ALC_SLOPE_TOTAL   1

#define NVRAM_EF_WNDRV_TPCFF_SIZE    sizeof(wndrv_cal_txpwr_cal_free_flow_struct)
#define NVRAM_EF_WNDRV_TPCFF_TOTAL    1
/************************************************************
 * End of WNDRV Calibration data
 ************************************************************/






// Data Structure of Each LID



#ifdef __cplusplus
}
#endif 

#endif /* __WNDRV_NVRAM_DEF_H__ */ 
