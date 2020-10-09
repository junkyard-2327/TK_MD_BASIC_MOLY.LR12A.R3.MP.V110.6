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
 *   mml1_rf_calpocseq_buffer.h
 *
 * Project:
 * --------
 *   TK6291
 *
 * Description:
 * ------------
 *   Multi-Mode Multi-RAT RF - Power-on calibration sequencer engine buffer definitions
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
 * removed!
 * removed!
 *
 * removed!
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
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/************************************************************************************
*  Include 
************************************************************************************/



/* This file defines buffers that will be used in power-on calibration procedure.
 * The buffer types must not changed based on conditional compile options. If conditional
 * compile options are used you have to correct the ID order when the compile option is
 * not on */

/************************************************************************************
*  Defines
************************************************************************************/

#if !defined (MMPOC_BUFFER_DEF)
#define MMPOC_BUFFER_DEF(bUFiD, tYPE, pORT, mIPIcWtYPE)
#endif

/** Turn on TX PA in low gain mode */
MMPOC_BUFFER_DEF (TXPA_ON_LOWGAIN_BUFFER_TYPE,            TXPA_ON_LOWGAIN_BUFFER_T,           MML1_RF_MIPI0, MML1_MIPI_EXTRW_1BYTE   )

/** Turn off TX PA */
MMPOC_BUFFER_DEF (TXPA_OFF_BUFFER_TYPE,                   TXPA_OFF_BUFFER_T,                  MML1_RF_MIPI0, MML1_MIPI_EXTRW_1BYTE   )

/** Turn ON TX PA with BPI component */
MMPOC_BUFFER_DEF (TX_ON_BPI_CTRL_BUFFER_TYPE,             TX_ON_BPI_CTRL_BUFFER_T,            MML1_RF_MIPI0/*temp fill MIPI port but not use*/, MML1_MIPI_EXTRW_1BYTE   )

/** Turn off TX PA with BPI component */
MMPOC_BUFFER_DEF (TX_OFF_BPI_CTRL_BUFFER_TYPE,            TX_OFF_BPI_CTRL_BUFFER_T,           MML1_RF_MIPI0/*temp fill MIPI port but not use*/, MML1_MIPI_EXTRW_1BYTE   )

/** Set RF STX settings, including DCO/NMMD */
MMPOC_BUFFER_DEF (RF_STX_CONFIG_BUFFER_TYPE,              RF_STX_CONFIG_BUFFER_T,             MML1_RF_RFIC1, MML1_MIPI_SUPPORT_RW_CNT)

/** Set RF TX output modulator mode (HRM, NHRM), TX o/p port, TX balun cap., TX PGA driver */
MMPOC_BUFFER_DEF (RF_TX_CONFIG_BUFFER_TYPE,               RF_TX_CONFIG_BUFFER_T,              MML1_RF_RFIC1, MML1_MIPI_SUPPORT_RW_CNT)

/** Set TX PGA AB gain step cal subband setting  */
MMPOC_BUFFER_DEF (RF_TX_PGA_AB_SUBBAND_CONFIG_BUFFER_TYPE, RF_TX_PGA_AB_SUBBAND_CONFIG_BUFFER_T, MML1_RF_RFIC1, MML1_MIPI_SUPPORT_RW_CNT)

/** Set RF TX PGA driver bias current for Linear mode */
MMPOC_BUFFER_DEF (RF_TX_DRV_BIAS_LIN_CONFIG_BUFFER_TYPE,  RF_TX_DRV_BIAS_LIN_CONFIG_BUFFER_T, MML1_RF_RFIC1, MML1_MIPI_SUPPORT_RW_CNT)

/** Set RF TX PGA driver bias current for DPD mode */
MMPOC_BUFFER_DEF (RF_TX_DRV_BIAS_DPD_CONFIG_BUFFER_TYPE,  RF_TX_DRV_BIAS_DPD_CONFIG_BUFFER_T, MML1_RF_RFIC1, MML1_MIPI_SUPPORT_RW_CNT)

/** Set Rx path control */
MMPOC_BUFFER_DEF (RF_RX_PATH_CTRL_BUFFER_TYPE,            RF_RX_PATH_CTRL_BUFFER_T,           MML1_RF_RFIC1, MML1_MIPI_SUPPORT_RW_CNT)

/** Set Rx mixer gate bias control */
MMPOC_BUFFER_DEF (RF_RX_MIXER_GATE_BIAS_BUFFER_TYPE,      RF_RX_MIXER_GATE_BIAS_BUFFER_T,     MML1_RF_RFIC1, MML1_MIPI_SUPPORT_RW_CNT)

/** Set Rx LO control */
MMPOC_BUFFER_DEF (RF_RX_LO_CTRL_BUFFER_TYPE,              RF_RX_LO_CTRL_BUFFER_T,             MML1_RF_RFIC1, MML1_MIPI_SUPPORT_RW_CNT)

/** Set Rx SRX config */
MMPOC_BUFFER_DEF (RF_SRX_CONFIG_BUFFER_TYPE,              RF_SRX_CONFIG_BUFFER_T,             MML1_RF_RFIC1, MML1_MIPI_SUPPORT_RW_CNT)



