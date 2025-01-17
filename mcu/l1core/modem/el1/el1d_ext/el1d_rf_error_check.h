/******************************************************************************
*  Modification Notice:
*  --------------------------
*  This software is modified by MediaTek Inc. and the information contained
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
 * EL1D_rf_custom_error_check.h
 *
 * Project:
 * --------
 * MT6290
 *
 * Description:
 * ------------
 * Error check assert function
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
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================*/
/* Doxygen Group Header ****************************************************//**
 * @addtogroup
 * @{
 ******************************************************************************/
/***************************************************************************//**
 * @file       el1d_rf_error_check.h
 * @author     Chunyen Wu (MTK04496)
 * @date       2015.05.19
 * @brief     Error check (header file)
 * @details
 ******************************************************************************/

#ifndef  _EL1D_RF_ERROR_CHECK_H_
#define  _EL1D_RF_ERROR_CHECK_H_

/*******************************************************************************
 * #include
 ******************************************************************************/
#include "kal_general_types.h"
#include "kal_public_api.h"
/*******************************************************************************
 * #define
 ******************************************************************************/
#define Error_Check_Rx 0
#define Error_Check_Tx 1

#define PRX_Mismatch 0
#define DRX_Mismatch 1

#define MIPI_Event 0
#define MIPI_Data  1

/*******************************************************************************
 * Typedef
 ******************************************************************************/




/*******************************************************************************
 * Constant
 ******************************************************************************/

/*******************************************************************************
 * Global variables (Extern)
 ******************************************************************************/


/*******************************************************************************
 * Global Functions Prototype (Interface)
 ******************************************************************************/
void EL1D_ErrorCheck_SubFreq_Lower_Bound(kal_uint16 mipi_trx_config, kal_uint16 Band_indicator, kal_uint16 sub_freq);
void EL1D_ErrorCheck_SubFreq_Upper_Bound(kal_uint16 mipi_trx_config, kal_uint16 Band_indicator, kal_uint16 sub_freq);
void EL1D_ErrorCheck_SubFreq_Zero(kal_uint16 mipi_trx_config, kal_uint16 Band_indicator);
void EL1D_ErrorCheck_SubFreq_Max(kal_uint16 mipi_trx_config, kal_uint16 Band_indicator, kal_uint16 sub_freq);
void EL1D_ErrorCheck_TPC_Data_Num(kal_uint16 Band_indicator);
void EL1D_ErrorCheck_IMM_Data_Num(void);
void EL1D_ErrorCheck_TPC_ELM_Type(kal_uint16 Band_indicator);
void EL1D_ErrorCheck_TRx_Event_Type(kal_uint16 mipi_trx_config, kal_uint16 Band_indicator,kal_uint16 elm_type);
void EL1D_ErrorCheck_TRx_Event_Data_Num(kal_uint16 mipi_trx_config, kal_uint16 event_over, kal_uint16 data_over);
void EL1D_ErrorCheck_TPC_Event_Data_Num(kal_uint16 event_over, kal_uint16 data_over);
void EL1D_ErrorCheck_MAX_Event_Data_Num(kal_uint16 event_over, kal_uint16 data_over);

void EL1D_ErrorCheck_Subband_MipiDataTable(kal_uint8 mipi_trx_config, kal_uint16 band,kal_uint8 mipi_table_idx);
void EL1D_ErrorCheck_Subband_MipiTpcSectionData(kal_uint8 mipi_trx_config1, kal_uint8 mipi_trx_config2, kal_uint16 band);

void EL1D_ErrorCheck_RFIC_Port_Invalid(kal_uint16 trx,  kal_uint16 trx_io);
void EL1D_ErrorCheck_CC_USAGE_Not_Found(kal_uint16 trx);
void EL1D_ErrorCheck_Multiple_ASM_MIPI_CMD(kal_uint16 port_sel, kal_uint16 usid, kal_uint16 cmd_count);
void EL1D_ErrorCheck_CA_USAGE_Mismatch(void);
void EL1D_ErrorCheck_ANT_Route_BandNone(kal_uint16 route_index);
void EL1D_ErrorCheck_FE_Band_Not_Support( kal_uint16 TRX, kal_uint16 Band);
void EL1D_ErrorCheck_BPI_Overlap(kal_uint32 TAS_MASK, kal_uint32 TAS_BPI);
void EL1D_ErrorCheck_IO_Port_Mismatch(kal_uint16 io_port, kal_uint16 cc0_band, kal_uint16 cc1_band);
void EL1D_ErrorCheck_ELNA_Type_Mismatch(kal_uint16 elna_type, kal_uint16 cc0_band, kal_uint16 cc1_band);
void EL1D_ErrorCheck_HPUE_Enable_But_All_BandNone(void);
void EL1D_ErrorCheck_HPUE_Enable_But_HPUE_Band_Is_Not_RFBand_Subset(const kal_uint32 band1, const kal_uint32 band2,const kal_uint32 band3);
void EL1D_ErrorCheck_Missing_FE_Route_Setting(kal_uint16 trx, kal_uint16 rt_band, kal_uint16 rt_fe_band);
void EL1D_ErrorCheck_FE_BW_Class_Mismatch(kal_uint16 trx, kal_uint16 bw_class);
void EL1D_ErrorCheck_FE_Wrong_RX_MIPI_Element_Type(kal_uint16 band, kal_uint16 type, kal_uint16 rx_mipi_element_type);
void EL1D_ErrorCheck_MIPI_Data_Per_Event_Exceed_Limit(kal_uint32 mipi_data_per_event);
void EL1D_ErrorCheck_Ant_Reorg_Mismatch(kal_uint16 set);
#endif //_EL1D_RF_ERROR_CHECK_H_

/* Doxygen Group End ***************************************************//**@}*/
