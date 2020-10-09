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
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __RR_NVRAM_EDITOR_H__
#define __RR_NVRAM_EDITOR_H__

#ifndef NVRAM_NOT_PRESENT
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "rr_nvram_def.h"
#include "nas_nvram_editor.h"

// Data Structure of Each LID
typedef struct
{
    kal_uint8 raw_data[NVRAM_EF_BAND_INFO_SIZE];
} nvram_ef_band_info_struct;

typedef struct
{
    kal_uint8 raw_data[NVRAM_EF_GAS_WORKING_BAND_INFO_SIZE];
} nvram_ef_gas_workung_band_info_struct;

#ifdef __BAND_BLOCK__

typedef  struct
{
    kal_uint8 data[52]; /* 1 byte for length plus 5 bytes data x 10 sets */
} nvram_band_block_struct;

#endif /* __BAND_BLOCK__ */

typedef struct {
    kal_uint8 la_code[2];
    kal_uint16 cell_id;
}gas_csg_fingerprint_cell_struct;

typedef struct {
    nvram_plmn_id_struct csg_plmn;
    kal_uint16 csg_frequency;
    kal_uint16 csg_physical_cell_id;
    kal_uint32 csg_id;
    kal_uint32 csg_cell_id;
    kal_uint32 systick;
    kal_uint8 rat; /* rat_type_enum */
    kal_uint8 num_fingerprint_cell;
    gas_csg_fingerprint_cell_struct fingerprint_cell[NUM_GAS_STORE_CSG_FINGERPRINT_CELL];
}gas_umts_lte_csg_cell_struct;

typedef struct 
{
    kal_uint8 num_csg_cell;
    gas_umts_lte_csg_cell_struct csg_cell[NUM_CSG_CELL_TO_COLLECT_FINGERPRINT];
} nvram_ef_gas_csg_fingerprint_struct;

#ifdef GEN_FOR_PC
BEGIN_NVRAM_DATA
#ifndef __L1_STANDALONE__
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_BAND_INFO_LID
* DESCRIPTION
*      This SBP store information related to working Band, learnered Band/MCC, Band Priority.
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: When a GSM Cell is detected.
*********************************************************************************************/
    LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_BAND_INFO_LID)
    nvram_ef_band_info_struct *NVRAM_EF_BAND_INFO_TOTAL
    {
    	raw_data:"Contains information releated to working/learned Band and MCC";
    		raw_data[0]
    		{
    			val:8"Learned MCC1"{};
    		};
    		raw_data[1]
    		{
    			val:8"Learned MCC2"{};
    		};
    		raw_data[2]
    		{
    			val:8"Learned MCC3"{};
    		};
    		raw_data[3]
    		{
    			val:8"Recorded MCC Count or learned Band"{};
    		};
    		raw_data[4]
    		{
    			val:8"Working Band"{};
    		};
    		raw_data[5]
    		{
    			val:8"Band Priority"{};
    		};
    };
    
#ifdef __BAND_BLOCK__
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_BAND_BLOCK_LID
* DESCRIPTION
*      
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: .
*********************************************************************************************/
    LID_BIT VER_LID(NVRAM_EF_BAND_BLOCK_LID) nvram_band_block_struct * NVRAM_EF_BAND_BLOCK_TOTAL{};
#endif

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_GAS_CSG_FINGERPRINT_LID
* DESCRIPTION
*      
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: This is updated each time CSG search is completed in GSM.
*********************************************************************************************/
     LID_BIT VER_LID(NVRAM_EF_GAS_CSG_FINGERPRINT_LID)
     nvram_ef_gas_csg_fingerprint_struct *NVRAM_EF_GAS_CSG_FINGERPRINT_TOTAL
     {
     	  num_csg_cell:"Number of CGS cell information stored.Range [0..NUM_CSG_CELL_TO_COLLECT_FINGERPRINT-8]"{};
     	  	
     	  csg_cell:"Stored CSG Cell information."{};
     	  	csg_cell.csg_plmn:"PLMN ID of CSG Cell when perform fingerprint scan."
     	  	{
     	  	};
     	  	csg_cell.csg_frequency:"Frequency of CSG Cell when perform fingerprint scan."
     	  	{
     	  	};
     	  	csg_cell.csg_physical_cell_id:"PCI of CSG Cell when perform fingerprint scan."
     	  	{
     	  	};
     	  	csg_cell.csg_id:"CSG ID of CSG cell when perform fingerprint scan."
     	  	{
     	  	};
     	  	csg_cell.csg_cell_id:"Cell ID of CSG cell when perform fingerprint scan."
     	  	{
     	  	};
     	  	csg_cell.systick:"Time at which CSG information was updated."
     	  	{
     	  	};
     	  	csg_cell.rat:"The RAT(0:LTE/1:UMTS/2:GSM/3:NONE) of CSG cell when perform fingerprint scan."
     	  	{
     	  	};
     	  	csg_cell.num_fingerprint_cell:"The number of GSM cells stored in this frequency's record.Range [0..NUM_GAS_STORE_CSG_FINGERPRINT_CELL-50]"
     	  	{
     	  	};
     	  	csg_cell.fingerprint_cell:"GSM cell information for this frequency"{};
     	  	    csg_cell.fingerprint_cell.la_code:"LA Code of GSM Cell."
     	  	    	{
     	  	    	};
     	  	    csg_cell.fingerprint_cell.cell_id:"Cell ID of GSM Cell."
     	  	    	{
     	  	    	};
     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_GAS_WORKING_BAND_INFO_LID
* DESCRIPTION
*      GAS use this table to find recodded mcc/working band.
* INFORMATION
*      Can OTA Reset: Yes
*      Update Scenario: When a GSM Cell is detected..
*********************************************************************************************/
     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_GAS_WORKING_BAND_INFO_LID)
     nvram_ef_gas_workung_band_info_struct *NVRAM_EF_GAS_WORKING_BAND_INFO_TOTAL
     {
     	 raw_data:"Contains information releated to working/learned Band and MCC information, Byte [0 to 124] MCC info table, Byte [125 to 249] Band info table";
     };
#endif /* __L1_STANDALONE__ */
END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 

#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __RR_NVRAM_EDITOR_H__ */
