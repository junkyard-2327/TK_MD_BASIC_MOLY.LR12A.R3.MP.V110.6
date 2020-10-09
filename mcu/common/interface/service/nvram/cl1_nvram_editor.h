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
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __CL1_NVRAM_EDITOR_H__
#define __CL1_NVRAM_EDITOR_H__

#ifndef NVRAM_NOT_PRESENT
#if defined (__C2K_RAT__)
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#ifdef GEN_FOR_PC
#include "cl1_nvram_def.h"

// Data Structure of Each LID
typedef struct {
   CL1D_RF_MIPI_EVENT_TABLE_T Table[MIPI_RX_EVENT_MAX_NUM];
} NvEditor_CL1D_RF_MIPI_RX_EVENT_TABLE_T;

typedef struct {
   CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T Table[MIPI_RX_DATA_MAX_NUM];
} NvEditor_CL1D_RF_MIPI_RX_DATA_TABLE_T;

typedef struct {
   CL1D_RF_MIPI_EVENT_TABLE_T Table[MIPI_TX_EVENT_MAX_NUM];
} NvEditor_CL1D_RF_MIPI_TX_EVENT_TABLE_T;

typedef struct {
   CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T Table[MIPI_TX_DATA_MAX_NUM];
} NvEditor_CL1D_RF_MIPI_TX_DATA_TABLE_T;

typedef struct {
   CL1D_RF_MIPI_EVENT_TABLE_T Table[MIPI_TPC_EVENT_MAX_NUM];
} NvEditor_CL1D_RF_MIPI_TPC_EVENT_TABLE_T;

typedef struct {
   CL1D_RF_MIPI_DATA_TABLE_T Table[MIPI_TPC_DATA_MAX_NUM];
} NvEditor_CL1D_RF_MIPI_TPC_DATA_TABLE_T;

typedef struct {
   CL1D_RF_TPC_SECTION_TABLE_T Table[MIPI_PA_SECTION_DATA_MAX_NUM];
} NvEditor_CL1D_RF_MIPI_PA_SECTION_DATA_TABLE_T;

typedef struct {
   CL1D_RF_MIPI_EVENT_TABLE_T Table[MIPI_ETM_TX_EVENT_MAX_NUM];
} NvEditor_CL1D_RF_MIPI_ETM_TX_EVENT_TABLE_T;

typedef struct {
   CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T Table[MIPI_ETM_TX_DATA_MAX_NUM];
} NvEditor_CL1D_RF_MIPI_ETM_TX_DATA_TABLE_T;

typedef struct {
   CL1D_RF_MIPI_EVENT_TABLE_T Table[MIPI_ETM_TPC_EVENT_MAX_NUM];
} NvEditor_CL1D_RF_MIPI_ETM_TPC_EVENT_TABLE_T;

typedef struct {
   CL1D_RF_MIPI_DATA_TABLE_T Table[MIPI_ETM_TPC_DATA_MAX_NUM];
} NvEditor_CL1D_RF_MIPI_ETM_TPC_DATA_TABLE_T;

typedef struct {
   CL1D_RF_TPC_SECTION_TABLE_T Table[MIPI_ETM_PA_SECTION_DATA_MAX_NUM];
} NvEditor_CL1D_RF_MIPI_ETM_PA_SECTION_DATA_TABLE_T;

typedef struct {
   CL1D_RF_MIPI_EVENT_TABLE_T Table[MIPI_TAS_EVENT_MAX_NUM];
} NvEditor_CL1D_RF_MIPI_TAS_EVENT_TABLE_T;

typedef struct {
   CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T Table[MIPI_TAS_DATA_MAX_NUM];
} NvEditor_CL1D_RF_MIPI_TAS_DATA_SUBBAND_TABLE_T;

typedef struct {
	CL1D_RF_MIPI_EVENT_TABLE_T Table[MIPI_ELNA_EVENT_MAX_NUM];
}NvEditor_CL1D_RF_MIPI_ELNA_EVENT_TABLE_T;

typedef struct {
	C2K_MIPI_DATA_SUBBAND_TABLE_T Table[MIPI_ELNA_DATA_MAX_NUM];
}NvEditor_CL1D_RF_MIPI_ELNA_DATA_SUBBAND_TABLE_T;

typedef struct {
   CL1D_RF_MIPI_EVENT_TABLE_T Table[MIPI_DAT_EVENT_MAX_NUM];
} NvEditor_CL1D_RF_MIPI_DAT_EVENT_TABLE_T;

typedef struct {
   CL1D_RF_MIPI_DATA_SUBBAND_TABLE_T Table[MIPI_DAT_DATA_MAX_NUM];
} NvEditor_CL1D_RF_MIPI_DAT_DATA_SUBBAND_TABLE_T;
BEGIN_NVRAM_DATA

//add LID_BIT VER_LID here
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_CUST_PARAM_LID
* DESCRIPTION
*      C2K Band support setting, TX/RX/RXD port setting, etc.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_CUST_PARAM_LID)
CL1D_RF_CUST_PARAM_T * NVRAM_EF_CL1_CUST_PARAM_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_CUST_BPI_CFG_LID
* DESCRIPTION
*      The logic state of C2K BPI under all the RF path scenarios.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_CUST_BPI_CFG_LID)
CL1D_RF_CUST_BPI_CFG_T * NVRAM_EF_CL1_CUST_BPI_CFG_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_MIPI_PARAM_LID
* DESCRIPTION
*      MIPI tool version/ MIPI enable switch.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_CL1_MIPI_PARAM_LID)
CL1D_RF_MIPI_PARAM_T * NVRAM_EF_CL1_MIPI_PARAM_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_MIPI_RX_EVENT_LID
* DESCRIPTION
*      C2K MIPI event table for RX events.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_MIPI_RX_EVENT_LID)
NvEditor_CL1D_RF_MIPI_RX_EVENT_TABLE_T * NVRAM_EF_CL1_MIPI_RX_EVENT_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_MIPI_RX_DATA_LID
* DESCRIPTION
*      C2K MIPI data for RX events.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_MIPI_RX_DATA_LID)
NvEditor_CL1D_RF_MIPI_RX_DATA_TABLE_T * NVRAM_EF_CL1_MIPI_RX_DATA_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_MIPI_TX_EVENT_LID
* DESCRIPTION
*      C2K event table for TX events.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_MIPI_TX_EVENT_LID)
NvEditor_CL1D_RF_MIPI_TX_EVENT_TABLE_T * NVRAM_EF_CL1_MIPI_TX_EVENT_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_MIPI_TX_DATA_LID
* DESCRIPTION
*      C2K MIPI data for TX events.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_MIPI_TX_DATA_LID)
NvEditor_CL1D_RF_MIPI_TX_DATA_TABLE_T * NVRAM_EF_CL1_MIPI_TX_DATA_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_MIPI_TPC_EVENT_LID
* DESCRIPTION
*      C2K event table for TPC events.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_MIPI_TPC_EVENT_LID)
NvEditor_CL1D_RF_MIPI_TPC_EVENT_TABLE_T * NVRAM_EF_CL1_MIPI_TPC_EVENT_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_MIPI_TPC_DATA_LID
* DESCRIPTION
*      C2K MIPI data for TPC events.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_MIPI_TPC_DATA_LID)
NvEditor_CL1D_RF_MIPI_TPC_DATA_TABLE_T * NVRAM_EF_CL1_MIPI_TPC_DATA_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_MIPI_PA_SECTION_DATA_1XRTT_LID
* DESCRIPTION
*      C2K MIPI pa section data for TPC events(1xrtt part).
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_MIPI_PA_SECTION_DATA_1XRTT_LID)
NvEditor_CL1D_RF_MIPI_PA_SECTION_DATA_TABLE_T * NVRAM_EF_CL1_MIPI_PA_SECTION_DATA_1XRTT_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_MIPI_PA_SECTION_DATA_EVDO_LID
* DESCRIPTION
*      C2K MIPI pa section data for TPC events(evdo part).
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_MIPI_PA_SECTION_DATA_EVDO_LID)
NvEditor_CL1D_RF_MIPI_PA_SECTION_DATA_TABLE_T * NVRAM_EF_CL1_MIPI_PA_SECTION_DATA_EVDO_TOTAL
{
};

/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1_MIPI_ETM_TX_EVENT_LID
* DESCRIPTION
*	This is Envelope Track Module TX Event  LID.
* INFORMATION
*	Can OTA Reset: Yes
*	Update Scenario: This LID will update once during power on
************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_CL1_MIPI_ETM_TX_EVENT_LID)
NvEditor_CL1D_RF_MIPI_ETM_TX_EVENT_TABLE_T * NVRAM_EF_CL1_MIPI_ETM_TX_EVENT_TOTAL
{
};

/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1_MIPI_ETM_TX_DATA_LID
* DESCRIPTION
*	This is Envelope Track Module TX MIPI Data  LID.
* INFORMATION
*	Can OTA Reset: Yes
*	Update Scenario: This LID will update once during power on
************************************************************************************/


LID_BIT VER_LID(NVRAM_EF_CL1_MIPI_ETM_TX_DATA_LID)
NvEditor_CL1D_RF_MIPI_ETM_TX_DATA_TABLE_T * NVRAM_EF_CL1_MIPI_ETM_TX_DATA_TOTAL
{
};

/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1_MIPI_ETM_TPC_EVENT_LID
* DESCRIPTION
*	This is Envelope Track Module TPC Event LID.
* INFORMATION
*	Can OTA Reset: Yes
*	Update Scenario: This LID will update once during power on
************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_CL1_MIPI_ETM_TPC_EVENT_LID)
NvEditor_CL1D_RF_MIPI_ETM_TPC_EVENT_TABLE_T * NVRAM_EF_CL1_MIPI_ETM_TPC_EVENT_TOTAL
{
};

/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1_MIPI_ETM_TPC_DATA_LID
* DESCRIPTION
*	This is Envelope Track Module TPC Data LID.
* INFORMATION
*	Can OTA Reset: Yes
*	Update Scenario: This LID will update once during power on
************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_CL1_MIPI_ETM_TPC_DATA_LID)
NvEditor_CL1D_RF_MIPI_ETM_TPC_DATA_TABLE_T * NVRAM_EF_CL1_MIPI_ETM_TPC_DATA_TOTAL
{
};
/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1_MIPI_ETM_PA_SECTION_DATA_1XRTT_LID
* DESCRIPTION
*	This is Envelope Track Module 1XRTT TPC PA Section Data LID.
* INFORMATION
*	Can OTA Reset: Yes
*	Update Scenario: This LID will update once during power on
************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_CL1_MIPI_ETM_PA_SECTION_DATA_1XRTT_LID)
NvEditor_CL1D_RF_MIPI_ETM_PA_SECTION_DATA_TABLE_T * NVRAM_EF_CL1_MIPI_ETM_PA_SECTION_DATA_1XRTT_TOTAL
{
};
/***********************************************************************************
* LID_NAME
*	NVRAM_EF_CL1_MIPI_ETM_PA_SECTION_DATA_EVDO_LID
* DESCRIPTION
*	This is Envelope Track Module EVDO TPC PA Section Data LID.
* INFORMATION
*	Can OTA Reset: Yes
*	Update Scenario: This LID will update once during power on
************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_CL1_MIPI_ETM_PA_SECTION_DATA_EVDO_LID)
NvEditor_CL1D_RF_MIPI_ETM_PA_SECTION_DATA_TABLE_T * NVRAM_EF_CL1_MIPI_ETM_PA_SECTION_DATA_EVDO_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_CUST_TAS_FEATURE_LID
* DESCRIPTION
*      TAS By Rat setting.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_CUST_TAS_FEATURE_LID)
C2K_CUSTOM_TAS_FEATURE_BY_RAT_T * NVRAM_EF_CL1_CUST_TAS_FEATURE_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_CUST_TAS_FE_ROUTE_DATABASE_LID
* DESCRIPTION
*      TAS By Band setting.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_CUST_TAS_FE_ROUTE_DATABASE_LID)
C2K_CUSTOM_TAS_FE_ROUTE_DATABASE_T * NVRAM_EF_CL1_CUST_TAS_FE_ROUTE_DATABASE_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_CUST_TAS_FE_CAT_A_LID
* DESCRIPTION
*      TAS catA bpi setting and mipi index.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_CUST_TAS_FE_CAT_A_LID)
C2K_CUSTOM_TAS_FE_CAT_A_T * NVRAM_EF_CL1_CUST_TAS_FE_CAT_A_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_CUST_TAS_FE_CAT_B_LID
* DESCRIPTION
*      TAS catB bpi setting and mipi index.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_CUST_TAS_FE_CAT_B_LID)
C2K_CUSTOM_TAS_FE_CAT_B_T * NVRAM_EF_CL1_CUST_TAS_FE_CAT_B_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_CUST_TAS_FE_CAT_C_LID
* DESCRIPTION
*      TAS catC bpi setting and mipi index.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_CUST_TAS_FE_CAT_C_LID)
C2K_CUSTOM_TAS_FE_CAT_C_T * NVRAM_EF_CL1_CUST_TAS_FE_CAT_C_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_CUST_TUNER_FE_ROUTE_TABLE_LID
* DESCRIPTION
*      TUNER setting by init route and by tas state.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_CUST_TUNER_FE_ROUTE_TABLE_LID)
C2K_CUSTOM_TUNER_FE_ROUTE_TABLE * NVRAM_EF_CL1_CUST_TUNER_FE_ROUTE_TABLE_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_CUST_TUNER_LID
* DESCRIPTION
*      TUNER bpi setting and mipi index setting.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_CUST_TUNER_LID)
C2K_CUSTOM_TUNER_BAND_T * NVRAM_EF_CL1_CUST_TUNER_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_CUST_TUNER_ROUTE_EVENT_LID
* DESCRIPTION
*      C2K event table for TAS TUNER events.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_CUST_TUNER_ROUTE_EVENT_LID)
NvEditor_CL1D_RF_MIPI_TAS_EVENT_TABLE_T * NVRAM_EF_CL1_CUST_TUNER_ROUTE_EVENT_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_CUST_TUNER_ROUTE_DATA_LID
* DESCRIPTION
*      C2K mipi data for TAS TUNER events.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_CUST_TUNER_ROUTE_DATA_LID)
NvEditor_CL1D_RF_MIPI_TAS_DATA_SUBBAND_TABLE_T * NVRAM_EF_CL1_CUST_TUNER_ROUTE_DATA_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_A_LID
* DESCRIPTION
*      C2K event table for TAS CAT_A events.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_A_LID)
NvEditor_CL1D_RF_MIPI_TAS_EVENT_TABLE_T * NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_A_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_CUST_TAS_DATA_CAT_A_LID
* DESCRIPTION
*      C2K mipi data for TAS CAT_A events.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_CUST_TAS_DATA_CAT_A_LID)
NvEditor_CL1D_RF_MIPI_TAS_DATA_SUBBAND_TABLE_T * NVRAM_EF_CL1_CUST_TAS_DATA_CAT_A_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_B_LID
* DESCRIPTION
*      C2K event table for TAS CAT_B events.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_B_LID)
NvEditor_CL1D_RF_MIPI_TAS_EVENT_TABLE_T * NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_B_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_CUST_TAS_DATA_CAT_B_LID
* DESCRIPTION
*      C2K mipi data for TAS CAT_B events.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_CUST_TAS_DATA_CAT_B_LID)
NvEditor_CL1D_RF_MIPI_TAS_DATA_SUBBAND_TABLE_T * NVRAM_EF_CL1_CUST_TAS_DATA_CAT_B_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_C_LID
* DESCRIPTION
*      C2K event table for TAS CAT_C events.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_C_LID)
NvEditor_CL1D_RF_MIPI_TAS_EVENT_TABLE_T * NVRAM_EF_CL1_CUST_TAS_EVENT_CAT_C_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_CUST_TAS_DATA_CAT_C_LID
* DESCRIPTION
*      C2K mipi data for TAS CAT_C events.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_CUST_TAS_DATA_CAT_C_LID)
NvEditor_CL1D_RF_MIPI_TAS_DATA_SUBBAND_TABLE_T * NVRAM_EF_CL1_CUST_TAS_DATA_CAT_C_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_CUST_ELNA_CFG_LID
* DESCRIPTION
*      C2K ELNA control parameter setting. 
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_CUST_ELNA_CFG_LID)
CL1D_RF_CUST_ELNA_CFG_T * NVRAM_EF_CL1_CUST_ELNA_CFG_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_CUST_ELNA_EVENT_LID
* DESCRIPTION
*      C2K event table for ELNA events. (No need to modify)
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_CUST_ELNA_EVENT_LID)
NvEditor_CL1D_RF_MIPI_ELNA_EVENT_TABLE_T * NVRAM_EF_CL1_CUST_ELNA_EVENT_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_CUST_ELNA_DATA_LID
* DESCRIPTION
*      C2K mipi data for ELNA events. (No need to modify)
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_CUST_ELNA_DATA_LID)
NvEditor_CL1D_RF_MIPI_ELNA_DATA_SUBBAND_TABLE_T * NVRAM_EF_CL1_CUST_ELNA_DATA_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_TX_POWER_BACK_OFF_LID
* DESCRIPTION
*      C2K tx power back off value which changes with different temperature.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_TX_POWER_BACK_OFF_LID)
CL1D_RF_TX_POWER_BACK_OFF_T * NVRAM_EF_CL1_TX_POWER_BACK_OFF_TOTAL
{
};
#if defined(__TX_POWER_OFFSET_SUPPORT__)
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_TX_POWER_OFFSET_LID
* DESCRIPTION
*      C2K tx power offset which changes with different channel.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_TX_POWER_OFFSET_LID)
CL1D_RF_SAR_TX_POWER_OFFSET_T * NVRAM_EF_CL1_TX_POWER_OFFSET_TOTAL
{
};
#endif

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_TAS_TST_CONFIG_LID
* DESCRIPTION
*      C2K tas infomation using for tool.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_TAS_TST_CONFIG_LID)
CL1D_RF_TAS_TST_CONFIG_T * NVRAM_EF_CL1_TAS_TST_CFG_TOTAL
{
};

#if IS_C2K_DAT_RFD_CTRL_EN
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_DAT_FE_ROUTE_DATABASE_LID
* DESCRIPTION
*      C2K DAT route table which is used as index of DAT bpi/mipi data base.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_DAT_FE_ROUTE_DATABASE_LID)
CL1D_RF_DAT_FE_ROUTE_DATABASE_T * NVRAM_EF_CL1_DAT_FE_ROUTE_DATABASE_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_DAT_FE_CAT_A_DATABASE_LID
* DESCRIPTION
*      C2K DAT CAT_A bpi/mipi data base.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_DAT_FE_CAT_A_DATABASE_LID)
CL1D_RF_DAT_FE_CAT_A_T * NVRAM_EF_CL1_DAT_FE_CAT_A_DATABASE_TOTAL
{
};	

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_DAT_FE_CAT_B_DATABASE_LID
* DESCRIPTION
*      C2K DAT CAT_B bpi/mipi data base.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_DAT_FE_CAT_B_DATABASE_LID)
CL1D_RF_DAT_FE_CAT_B_T * NVRAM_EF_CL1_DAT_FE_CAT_B_DATABASE_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_DAT_MIPI_EVENT_CAT_A_LID
* DESCRIPTION
*      C2K event table for DAT CAT_A events.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_DAT_MIPI_EVENT_CAT_A_LID)
NvEditor_CL1D_RF_MIPI_DAT_EVENT_TABLE_T * NVRAM_EF_CL1_DAT_MIPI_EVENT_CAT_A_TOTAL
{
};
	
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_DAT_MIPI_DATA_CAT_A_LID
* DESCRIPTION
*      C2K mipi data for DAT CAT_A events.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_DAT_MIPI_DATA_CAT_A_LID)
NvEditor_CL1D_RF_MIPI_DAT_DATA_SUBBAND_TABLE_T * NVRAM_EF_CL1_DAT_MIPI_DATA_CAT_A_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_DAT_MIPI_EVENT_CAT_B_LID
* DESCRIPTION
*      C2K event table for DAT CAT_B events.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_DAT_MIPI_EVENT_CAT_B_LID)
NvEditor_CL1D_RF_MIPI_DAT_EVENT_TABLE_T * NVRAM_EF_CL1_DAT_MIPI_EVENT_CAT_B_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_DAT_MIPI_DATA_CAT_B_LID
* DESCRIPTION
*      C2K mipi data for DAT CAT_B events.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_DAT_MIPI_DATA_CAT_B_LID)
NvEditor_CL1D_RF_MIPI_DAT_DATA_SUBBAND_TABLE_T * NVRAM_EF_CL1_DAT_MIPI_DATA_CAT_B_TOTAL
{
};
#endif
#if defined(__SAR_TX_POWER_BACKOFF_SUPPORT__)
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_SAR_TX_POWER_OFFSET_LID
* DESCRIPTION
*      C2K sar tx power offset table.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_SAR_TX_POWER_OFFSET_LID)
CL1D_RF_SAR_TX_POWER_OFFSET_T * NVRAM_EF_CL1_SAR_TX_POWER_OFFSET_TOTAL
{
};
#endif
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_L1D_TX_POWER_OFFSET_LID
* DESCRIPTION
*      this tx power offset adjustment is set for verizon case
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_L1D_TX_POWER_OFFSET_LID)
CL1_L1D_TX_POWER_OFFSET_T * NVRAM_EF_CL1_L1D_TX_POWER_OFFSET_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_MIPI_PA_SECTION_DPD_DATA_1XRTT_LID
* DESCRIPTION
*      C2K MIPI data for TX PA SECTION in 1xRTT dpd mode events.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_MIPI_PA_SECTION_DPD_DATA_1XRTT_LID)
NvEditor_CL1D_RF_MIPI_PA_SECTION_DATA_TABLE_T * NVRAM_EF_CL1_MIPI_PA_SECTION_DPD_DATA_1XRTT_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_MIPI_PA_SECTION_DPD_DATA_EVDO_LID
* DESCRIPTION
*      C2K MIPI data for TX PA SECTION in EVDO dpd mode events.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_MIPI_PA_SECTION_DPD_DATA_EVDO_LID)
NvEditor_CL1D_RF_MIPI_PA_SECTION_DATA_TABLE_T * NVRAM_EF_CL1_MIPI_PA_SECTION_DPD_DATA_EVDO_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_DPD_COMMON_CTRL_LID
* DESCRIPTION
*      C2K DPD feature enable/disable.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_DPD_COMMON_CTRL_LID)
CL1D_RF_DPD_COMMON_CTRL_T * NVRAM_EF_CL1_DPD_COMMON_CTRL_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CL1_PCFE_DPD_OTFC_CUSTOM_PARA_LID
* DESCRIPTION
*      C2K PA power control threshold between APT and DPD.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CL1_PCFE_DPD_OTFC_CUSTOM_PARA_LID)
CL1D_RF_PCFE_DPD_OTFC_CUSTOM_PARA_T * NVRAM_EF_CL1_PCFE_DPD_OTFC_CUSTOM_PARA_TOTAL
{
};


END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 
#endif /* __C2K_RAT__ */
#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __CL1_NVRAM_EDITOR_H__ */
