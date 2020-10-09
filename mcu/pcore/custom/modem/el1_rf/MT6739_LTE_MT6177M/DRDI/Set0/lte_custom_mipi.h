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
 * el1_rf_custom.h
 *
 * Project:
 * --------
 * MT6290
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 *
 *
 *============================================================================*/

#ifndef  _LTE_CUSTOM_MIPI_Set0_H_
#define  _LTE_CUSTOM_MIPI_Set0_H_

/*===============================================================================*/
#include "kal_general_types.h"
#include "mml1_custom_mipi.h"
#include "mml1_drdi.h"

/*===============================================================================*/

/////////////////////////
// define MIPI function enable
/////////////////////////
#define  IS_MIPI_FRONT_END_ENABLE_Set0   1   // 1: enable MIPI driver; 0: disable MIPI driver
#define  IS_DPD_FRONT_END_ENABLE    0   // 1: enable DPD driver; 0: disable DPD driver
#define  IS_CIM3_FRONT_END_ENABLE   0

////////////////////////////////////////////////////////////////////
// define ET function enable
//caution: If users enable the ET front-end module capability,
//  it may takes some BSI events/datas resource of Tx/TPC scenario
////////////////////////////////////////////////////////////////////
//#define    IS_ET_FRONT_END_ENABLE       1
//#define    IS_EL1_ET_R2                 1

///////////////////////////////////////////////////////////////////
//define MIPI T/R ON/OFF event timing for build time check
///////////////////////////////////////////////////////////////////
/*MIPI ASM     */
/*FDD RX ON    */
#define  LTE_FDD_MIPI_ASM_RX_ON0_Set0   US2OFFCNT(10)
#define  LTE_FDD_MIPI_ASM_RX_ON1_Set0   US2OFFCNT(0)

/*MIPI ASM     */
/*FDD RX OFF    */
#define  LTE_FDD_MIPI_ASM_RX_OFF0_Set0  US2OFFCNT(5)
#define  LTE_FDD_MIPI_ASM_RX_OFF1_Set0  US2OFFCNT(0)

/*MIPI ASM     */
/*TDD RX ON    */
#define  LTE_TDD_MIPI_ASM_RX_ON0_Set0   US2OFFCNT(10)
#define  LTE_TDD_MIPI_ASM_RX_ON1_Set0   US2OFFCNT(0)

/*MIPI ASM     */
/*TDD RX OFF    */
#define  LTE_TDD_MIPI_ASM_RX_OFF0_Set0  US2OFFCNT(5)
#define  LTE_TDD_MIPI_ASM_RX_OFF1_Set0  US2OFFCNT(0)

/*MIPI ASM     */
/*FDD TX ON    */
#define  LTE_FDD_MIPI_ASM_TX_ON0_Set0   US2OFFCNT(20)
#define  LTE_FDD_MIPI_ASM_TX_ON1_Set0   US2OFFCNT(0)

/*MIPI ASM     */
/*FDD TX OFF    */
// #define  LTE_FDD_MIPI_ASM_TX_OFF0_Set0  US2OFFCNT(5)
// #define  LTE_FDD_MIPI_ASM_TX_OFF1_Set0  US2OFFCNT(0)
// We do not turn off ASM for FDD mode

/*MIPI ASM     */
/*TDD TX ON    */
#define  LTE_TDD_MIPI_ASM_TX_ON0_Set0   US2OFFCNT(20)
#define  LTE_TDD_MIPI_ASM_TX_ON1_Set0   US2OFFCNT(0)

/*MIPI ASM     */
/*TDD TX OFF    */
#define  LTE_TDD_MIPI_ASM_TX_OFF0_Set0  US2OFFCNT(5)
#define  LTE_TDD_MIPI_ASM_TX_OFF1_Set0  US2OFFCNT(0)

/*MIPI PA     */
/*FDD TX ON    */
#define  LTE_FDD_MIPI_PA_TX_ON0_Set0    US2OFFCNT(20)
#define  LTE_FDD_MIPI_PA_TX_ON1_Set0    US2OFFCNT(0)

/*MIPI PA     */
/*FDD TX OFF    */
#define  LTE_FDD_MIPI_PA_TX_OFF0_Set0   US2OFFCNT(20)
#define  LTE_FDD_MIPI_PA_TX_OFF1_Set0   US2OFFCNT(0)

/*MIPI PA     */
/*TDD TX ON    */
#define  LTE_TDD_MIPI_PA_TX_ON0_Set0    US2OFFCNT(20)
#define  LTE_TDD_MIPI_PA_TX_ON1_Set0    US2OFFCNT(0)

/*MIPI PA     */
/*TDD TX OFF    */
#define  LTE_TDD_MIPI_PA_TX_OFF0_Set0   US2OFFCNT(20)
#define  LTE_TDD_MIPI_PA_TX_OFF1_Set0   US2OFFCNT(0)

#define  LTE_FDD_MIPI_ANT_RX_ON0_Set0   US2OFFCNT(15)
#define  LTE_FDD_MIPI_ANT_RX_OFF0_Set0  US2OFFCNT(10)

#define  LTE_TDD_MIPI_ANT_RX_ON0_Set0   US2OFFCNT(15)
#define  LTE_TDD_MIPI_ANT_RX_OFF0_Set0  US2OFFCNT(10)

#define  LTE_FDD_MIPI_ANT_TX_ON0_Set0   US2OFFCNT(15)
#define  LTE_FDD_MIPI_ANT_TX_OFF0_Set0  US2OFFCNT(10)

#define  LTE_TDD_MIPI_ANT_TX_ON0_Set0   US2OFFCNT(15)
#define  LTE_TDD_MIPI_ANT_TX_OFF0_Set0  US2OFFCNT(10)

#define  LTE_MIPI_ANTCA_ON0_Set0        US2OFFCNT(15)
#define  LTE_MIPI_ANTCA_OFF0_Set0       US2OFFCNT(10)

/////////////////////////
//   MIPI Define
/////////////////////////

#define  LTE_MIPI_INITIAL_CW_SIZE_Set0          3
#define  LTE_MIPI_SLEEP_CW_SIZE_Set0            3
#define  LTE_MIPI_ASM_ISOLATION_DATA_SIZE_Set0  2

//MIPI table for not-supported LTE band
#define  LTE_Band29_MIPI_TX_EVENT_Set0          LTE_BandNone_MIPI_TX_EVENT_Set0
#define  LTE_Band29_MIPI_TX_DATA_Set0           LTE_BandNone_MIPI_TX_DATA_Set0
#define  LTE_Band29_MIPI_TPC_EVENT_Set0         LTE_BandNone_MIPI_TPC_EVENT_Set0
#define  LTE_Band29_MIPI_TPC_DATA_Set0          LTE_BandNone_MIPI_TPC_DATA_Set0
#define  LTE_Band29_MIPI_PA_SECTION_DATA_Set0   LTE_BandNone_MIPI_PA_SECTION_DATA_Set0
#define  LTE_Band29_MIPI_PA_CCA_SECTION_DATA_Set0   LTE_BandNone_MIPI_PA_SECTION_DATA_Set0
#define LTE_Band29_DPD_TPC_EVENT          LTE_BandNone_DPD_TPC_EVENT
#define LTE_Band29_DPD_TPC_DATA           LTE_BandNone_DPD_TPC_DATA
#define LTE_Band29_DPD_PA_SECTION_DATA    LTE_BandNone_DPD_PA_SECTION_DATA

#define  LTE_Band32_MIPI_TX_EVENT_Set0          LTE_BandNone_MIPI_TX_EVENT_Set0
#define  LTE_Band32_MIPI_TX_DATA_Set0           LTE_BandNone_MIPI_TX_DATA_Set0
#define  LTE_Band32_MIPI_TPC_EVENT_Set0         LTE_BandNone_MIPI_TPC_EVENT_Set0
#define  LTE_Band32_MIPI_TPC_DATA_Set0          LTE_BandNone_MIPI_TPC_DATA_Set0
#define  LTE_Band32_MIPI_PA_SECTION_DATA_Set0   LTE_BandNone_MIPI_PA_SECTION_DATA_Set0
#define  LTE_Band32_MIPI_PA_CCA_SECTION_DATA_Set0   LTE_BandNone_MIPI_PA_SECTION_DATA_Set0
#define LTE_Band32_DPD_TPC_EVENT          LTE_BandNone_DPD_TPC_EVENT
#define LTE_Band32_DPD_TPC_DATA           LTE_BandNone_DPD_TPC_DATA
#define LTE_Band32_DPD_PA_SECTION_DATA    LTE_BandNone_DPD_PA_SECTION_DATA

//Timing transformation
//#define US2OFFCNT(us)       ((us)*26)
//#define WAITUSCNT(us)       ((us)*52)


/////////////////////////

#endif /* End of #ifndef _LTE_CUSTOM_MIPI_Set0_H_ */
