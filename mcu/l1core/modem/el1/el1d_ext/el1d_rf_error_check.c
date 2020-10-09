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
 * el1d_rf_custom_error_check.c
 *
 * Project:
 * --------
 * MT6291
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
 *
 *
 *
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
 * @file       el1d_rf_custom_error_check.c
 * @author     Chunyen Wu (MTK04496)
 * @date       2015.05.19
 * @brief      Error check function
 * @details
 ******************************************************************************/

/*******************************************************************************
 * #include
 ******************************************************************************/
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "el1d_rf_error_check.h"

/*******************************************************************************
 * Global Functions declaration (interface)
 ******************************************************************************/
//[NOTE] Please add the new check from the end of this file!!!
//       => In order to keep the assert line number unchanged
/*===============================================================================*/
void EL1D_ErrorCheck_SubFreq_Lower_Bound(kal_uint16 mipi_trx_config, kal_uint16 Band_indicator, kal_uint16 sub_freq)
{
   kal_bool SubFreq_Lower_Bound = KAL_FALSE;
   EXT_ASSERT(SubFreq_Lower_Bound,mipi_trx_config, Band_indicator, sub_freq);
}

void EL1D_ErrorCheck_SubFreq_Upper_Bound(kal_uint16 mipi_trx_config, kal_uint16 Band_indicator, kal_uint16 sub_freq)
{
   kal_bool SubFreq_Upper_Bound = KAL_FALSE;
   EXT_ASSERT(SubFreq_Upper_Bound,mipi_trx_config, Band_indicator, sub_freq);
}

void EL1D_ErrorCheck_SubFreq_Zero(kal_uint16 mipi_trx_config, kal_uint16 Band_indicator)
{
   kal_bool SubFreq_Zero = KAL_FALSE;
   EXT_ASSERT(SubFreq_Zero, mipi_trx_config, Band_indicator,0);
}

void EL1D_ErrorCheck_SubFreq_Max(kal_uint16 mipi_trx_config, kal_uint16 Band_indicator, kal_uint16 sub_freq)
{
   kal_bool SubFreq_Max = KAL_FALSE;
   EXT_ASSERT(SubFreq_Max, mipi_trx_config, Band_indicator, sub_freq);
}

void EL1D_ErrorCheck_TPC_Data_Num(kal_uint16 Band_indicator)
{
   kal_bool TPC_Data_Num = KAL_FALSE;
   EXT_ASSERT(TPC_Data_Num, Band_indicator,0,0);
}

void EL1D_ErrorCheck_IMM_Data_Num( void )
{
   kal_bool IMM_Data_Num = KAL_FALSE;
   EXT_ASSERT(IMM_Data_Num,0,0,0);
}

void EL1D_ErrorCheck_TPC_ELM_Type(kal_uint16 Band_indicator)
{
   kal_bool TPC_ELM_Type = KAL_FALSE;
   EXT_ASSERT(TPC_ELM_Type, Band_indicator,0,0);
}

void EL1D_ErrorCheck_TRx_Event_Type(kal_uint16 mipi_trx_config, kal_uint16 Band_indicator,kal_uint16 elm_type)
{
   kal_bool TRx_Event_Type = KAL_FALSE;
   EXT_ASSERT(TRx_Event_Type, mipi_trx_config, Band_indicator,elm_type); //
}

void EL1D_ErrorCheck_TRx_Event_Data_Num(kal_uint16 mipi_trx_config, kal_uint16 event_over, kal_uint16 data_over)
{
   kal_bool TRx_Event_Data_Num = KAL_FALSE;
   EXT_ASSERT(TRx_Event_Data_Num, mipi_trx_config, event_over, data_over);
}

void EL1D_ErrorCheck_TPC_Event_Data_Num(kal_uint16 event_over, kal_uint16 data_over)
{
   kal_bool TPC_Event_Data_Num = KAL_FALSE;
   EXT_ASSERT(TPC_Event_Data_Num, event_over, data_over,0);
}

void EL1D_ErrorCheck_MAX_Event_Data_Num(kal_uint16 event_over, kal_uint16 data_over)
{
   kal_bool MAX_Event_Data_Num = KAL_FALSE;
   EXT_ASSERT(MAX_Event_Data_Num, event_over, data_over,0);
}

void EL1D_ErrorCheck_Subband_MipiDataTable(kal_uint8 mipi_trx_config, kal_uint16 band,kal_uint8 mipi_table_idx)
{
   kal_bool Subband_MipiDataTable = KAL_FALSE;
   EXT_ASSERT(Subband_MipiDataTable, mipi_trx_config, band, mipi_table_idx);
}

void EL1D_ErrorCheck_Subband_MipiTpcSectionData(kal_uint8 mipi_trx_config1, kal_uint8 mipi_trx_config2, kal_uint16 band)
{
   kal_bool Subband_MipiTpcSectionData = KAL_FALSE;
   EXT_ASSERT(Subband_MipiTpcSectionData, mipi_trx_config1, mipi_trx_config2, band);
}

void EL1D_ErrorCheck_RFIC_Port_Invalid(kal_uint16 trx,  kal_uint16 trx_io)
{
   kal_bool RFIC_Port = KAL_FALSE;
   EXT_ASSERT( RFIC_Port, trx, trx_io, 0);//RX:0, TX:1
}

void EL1D_ErrorCheck_CC_USAGE_Not_Found(kal_uint16 trx )
{
   kal_bool USAGE_Not_Found = KAL_FALSE;
   EXT_ASSERT( USAGE_Not_Found, trx, 0, 0);//RX:0, TX:1
}

void EL1D_ErrorCheck_Multiple_ASM_MIPI_CMD(kal_uint16 port_sel, kal_uint16 usid, kal_uint16 cmd_count)
{
   kal_bool multiple_mipi_cmd = KAL_FALSE;
   EXT_ASSERT( multiple_mipi_cmd, port_sel, usid, cmd_count);
}

void EL1D_ErrorCheck_CA_USAGE_Mismatch(void)
{
   kal_bool CA_Usage_Mismatch = KAL_FALSE;
   EXT_ASSERT( CA_Usage_Mismatch, 0, 0, 0);
}

void EL1D_ErrorCheck_ANT_Route_BandNone(kal_uint16 route_index)
{
   kal_bool ANT_Route_BandNone = KAL_FALSE;
   EXT_ASSERT( ANT_Route_BandNone, route_index, 0, 0);
}

void EL1D_ErrorCheck_FE_Band_Not_Support( kal_uint16 TRX, kal_uint16 Band )
{
   kal_bool FE_Band_Not_Found = KAL_FALSE;
   EXT_ASSERT( FE_Band_Not_Found, TRX, Band, 0); 
}

void EL1D_ErrorCheck_BPI_Overlap( kal_uint32 TAS_MASK, kal_uint32 TAS_BPI)
{
   kal_bool BPI_Overlap = KAL_FALSE;
   EXT_ASSERT( BPI_Overlap, TAS_MASK, TAS_BPI,0);
}

void EL1D_ErrorCheck_IO_Port_Mismatch(kal_uint16 io_port, kal_uint16 cc0_band, kal_uint16 cc1_band)
{
   kal_bool IO_Port_Mismatch = KAL_FALSE;
   EXT_ASSERT( IO_Port_Mismatch, io_port, cc0_band, cc1_band);//PRX:0, DRX:1
}

void EL1D_ErrorCheck_ELNA_Type_Mismatch(kal_uint16 elna_type, kal_uint16 cc0_band, kal_uint16 cc1_band)
{
   kal_bool ELNA_Type_Mismatch = KAL_FALSE;
   EXT_ASSERT( ELNA_Type_Mismatch, elna_type, cc0_band, cc1_band);//PRX:0, DRX:1
}

void EL1D_ErrorCheck_HPUE_Enable_But_All_BandNone(void)
{
   kal_bool HPUE_Enable_But_All_BandNone = KAL_FALSE;
   EXT_ASSERT(HPUE_Enable_But_All_BandNone, 0, 0, 0);
}

void EL1D_ErrorCheck_HPUE_Enable_But_HPUE_Band_Is_Not_RFBand_Subset(const kal_uint32 band1, const kal_uint32 band2,const kal_uint32 band3)
{
   kal_bool HPUE_Enable_But_HPUE_Band_Is_Not_RFBand_Subset = KAL_FALSE;
   EXT_ASSERT(HPUE_Enable_But_HPUE_Band_Is_Not_RFBand_Subset, band1, band2, band3);
}

void EL1D_ErrorCheck_Missing_FE_Route_Setting(kal_uint16 trx, kal_uint16 rt_band, kal_uint16 rt_fe_band)
{
   kal_bool FE_Band_Not_Found = KAL_FALSE;
   EXT_ASSERT( FE_Band_Not_Found, trx, rt_band, rt_fe_band);//RX:0, TX:1
}

void EL1D_ErrorCheck_FE_BW_Class_Mismatch(kal_uint16 trx, kal_uint16 bw_class)
{
   kal_bool FE_BW_Class_Mismatch = KAL_FALSE;
   EXT_ASSERT( FE_BW_Class_Mismatch, trx, bw_class, 0);//RX:0, TX:1
}

void EL1D_ErrorCheck_FE_Wrong_RX_MIPI_Element_Type(kal_uint16 band, kal_uint16 type, kal_uint16 rx_mipi_element_type)
{
   kal_bool FE_Wrong_RX_MIPI_Element_Type = KAL_FALSE;
   EXT_ASSERT( FE_Wrong_RX_MIPI_Element_Type, band, type, rx_mipi_element_type);
}

void EL1D_ErrorCheck_MIPI_Data_Per_Event_Exceed_Limit(kal_uint32 mipi_data_per_event)
{
   kal_bool MIPI_Data_Exceed_12 = KAL_FALSE;
   EXT_ASSERT( MIPI_Data_Exceed_12, mipi_data_per_event, 0, 0);
}

void EL1D_ErrorCheck_Ant_Reorg_Mismatch(kal_uint16 set)
{
   kal_bool Ant_Reorg_option = KAL_FALSE;
   EXT_ASSERT( Ant_Reorg_option, set, 0, 0);
}

/*******************************************************************************
 * #define
 ******************************************************************************/

/*******************************************************************************
 * typedef
 ******************************************************************************/

/*******************************************************************************
 * Constant
 ******************************************************************************/

/*******************************************************************************
 * Global Variables
 ******************************************************************************/


/*******************************************************************************
 * Local Variables
 * Static variables declaration
 ******************************************************************************/

/*******************************************************************************
 * Local Functions
 * Static Functions Prototype
 ******************************************************************************/


/*******************************************************************************
 * Static Functions declaration
 ******************************************************************************/




/* Doxygen Group End ***************************************************//**@}*/
