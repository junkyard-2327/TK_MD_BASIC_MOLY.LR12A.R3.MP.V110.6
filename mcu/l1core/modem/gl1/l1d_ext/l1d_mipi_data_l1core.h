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

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   l1d_mipi_data_l1core.h
 *
 * Project:
 * --------
 *   MT6290
 *
 * Description:
 * ------------
 *   Definition of global data & tables used in L1D
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
 * $Revision:
 * $Modtime:
 * $Log:
 *
 *******************************************************************************/

#ifndef  _L1D_MIPI_DATA_H_
#define  _L1D_MIPI_DATA_H_

#include "l1d_cid.h"
#include "l1d_rf_l1core.h"
#include "l1d_data_l1core.h"

/*---------------------------------------------------------------------------*/

#if IS_MIPI_SUPPORT

/* --------------------------------------- */
#if IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
#define GGE_MIPI_RF_EVENT_COUNT        0
#define GGE_MIPI_RF_DATA_COUNT         0
#define GGE_MIPI_BSI_TDMA_EVT_OFFSET   BSI_RFIC_EVENT_COUNT
#else
#define GGE_MIPI_RF_EVENT_COUNT        (CWIN_BSI_EVENT_COUNT*CWIN_COUNT+RIDX_COUNT)
#define GGE_MIPI_RF_DATA_COUNT         (BSI_DATA_OFFSET+(SX0_DATA_COUNT+SX1_DATA_COUNT+SX3_DATA_COUNT)*CWIN_COUNT)
#define GGE_MIPI_BSI_TDMA_EVT_OFFSET   GGE_MIPI_RF_EVENT_COUNT
#endif

/* MIPI Resoure Plan */
#define GGE_MIPI_RTX_EVIDX(m,n)        (GGE_MIPI_RF_EVENT_COUNT+GGE_MIPI_RTX_EVENT_NUM*(m)+(n))
#define GGE_MIPI_TXMID_EVIDX(m,n)      (GGE_MIPI_RF_EVENT_COUNT+GGE_MIPI_RTX_EVENT_NUM*GGE_MIPI_RTX_EVENT_COUNT+GGE_MIPI_TXMID_EVENT_NUM*(m)+(n))

#define GGE_MIPI_RTX_TDMA_EVIDX(m,n)   (GGE_MIPI_BSI_TDMA_EVT_OFFSET+GGE_MIPI_RTX_EVENT_NUM*(m)+(n))
#define GGE_MIPI_TXMID_TDMA_EVIDX(m,n) (GGE_MIPI_BSI_TDMA_EVT_OFFSET+GGE_MIPI_RTX_EVENT_NUM*GGE_MIPI_RTX_EVENT_COUNT+GGE_MIPI_TXMID_EVENT_NUM*(m)+(n))

#define GGE_MIPI_RTX_DTIDX(m,n)        (GGE_MIPI_RF_DATA_COUNT+GGE_MIPI_RTX_DATA_NUM*(m)+(n))
#define GGE_MIPI_TXMID_DTIDX(m,n)      (GGE_MIPI_RF_DATA_COUNT+GGE_MIPI_RTX_DATA_NUM*GGE_MIPI_RTX_EVENT_COUNT+GGE_MIPI_TXMID_DATA_NUM*(m)+(n))

extern const  volatile unsigned short*  GGE_MIPI_RTX_REG_TABLE[GGE_MIPI_RTX_EVENT_COUNT][GGE_MIPI_RTX_EVENT_NUM];
extern const  volatile unsigned short*  GGE_MIPI_TXMID_REG_TABLE[GGE_MIPI_TXMID_EVENT_COUNT][GGE_MIPI_TXMID_EVENT_NUM];
extern const sGGE_MIPIEVENT L1D_TAS_MIPI_EVENT_NULL;
extern const sGGE_MIPIDATA_SUBBAND L1D_TAS_MIPI_DATA_NULL;
extern const sGGE_MIPIEVENT L1D_DAT_MIPI_EVENT_NULL;
extern const sGGE_MIPIDATA_SUBBAND L1D_DAT_MIPI_DATA_NULL;

#endif /* IS_MIPI_SUPPORT */

/*---------------------------------------------------------------------------*/
#endif /*End of "#ifndef _L1D_MIPI_DATA_H_" */

