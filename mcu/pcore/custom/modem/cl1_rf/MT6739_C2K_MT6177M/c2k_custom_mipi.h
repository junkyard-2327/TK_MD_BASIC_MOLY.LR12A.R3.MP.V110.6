/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
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
 * c2k_custom_mipi.h
 *
 * Project:
 * --------
 * C2K
 *
 * Description:
 * ------------
 * Header file containing typedefs and definitions pertaining
 * to the RF custom files.
 *
 * Author:
 * -------
 * 
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/


#ifndef C2K_CUSTOM_MIPI_SetDefault_H
#define C2K_CUSTOM_MIPI_SetDefault_H

/* =============================================== */
/*   MIPI function enable                            */
/* =============================================== */
#define IS_MIPI_FRONT_END_ENABLE_SetDefault       1   // 1: enable MIPI driver; 0: disable MIPI driver


/* =============================================== */
/*   USID Default Value                            */
/* =============================================== */


/* =============================================== */
/*   MIPI T/R ON/OFF event timing                  */
/* =============================================== */
/*MIPI ASM     */
/* RX ON    */
#define  C2K_MIPI_ASM_RX_ON0_SetDefault               M_US(10)
#define  C2K_MIPI_ASM_RX_ON1_SetDefault               M_US(0)

/*MIPI ASM     */
/* RX OFF    */
#define  C2K_MIPI_ASM_RX_OFF0_SetDefault              M_US(5)
#define  C2K_MIPI_ASM_RX_OFF1_SetDefault              M_US(0)

/*MIPI ASM     */
/* DRX ON    */
#define  C2K_MIPI_ASM_DRX_ON0_SetDefault              M_US(11)
#define  C2K_MIPI_ASM_DRX_ON1_SetDefault              M_US(0)

/*MIPI ASM     */
/* DRX OFF    */
#define  C2K_MIPI_ASM_DRX_OFF0_SetDefault             M_US(6)
#define  C2K_MIPI_ASM_DRX_OFF1_SetDefault             M_US(0)

/*MIPI ASM     */
/* TX ON    */
#define  C2K_MIPI_ASM_TX_ON0_SetDefault               M_US(10)
#define  C2K_MIPI_ASM_TX_ON1_SetDefault               M_US(0)

/*MIPI ASM     */
/* TX OFF    */
// We do not turn off ASM
#define  C2K_MIPI_ASM_TX_OFF0_SetDefault              M_US(5)
#define  C2K_MIPI_ASM_TX_OFF1_SetDefault              M_US(0)

/*MIPI ANT     */
/* RX ON    */
#define  C2K_MIPI_ANT_RX_ON0_SetDefault               M_US(5)
#define  C2K_MIPI_ANT_RX_ON1_SetDefault               M_US(0)

/*MIPI ANT     */
/* RX OFF    */
#define  C2K_MIPI_ANT_RX_OFF0_SetDefault              M_US(10)
#define  C2K_MIPI_ANT_RX_OFF1_SetDefault              M_US(0)


/*MIPI ANT     */
/* DRX ON    */
#define  C2K_MIPI_ANT_DRX_ON0_SetDefault               M_US(6)
#define  C2K_MIPI_ANT_DRX_ON1_SetDefault               M_US(0)

/*MIPI ANT     */
/* DRX OFF    */
#define  C2K_MIPI_ANT_DRX_OFF0_SetDefault              M_US(11)
#define  C2K_MIPI_ANT_DRX_OFF1_SetDefault              M_US(0)

/*MIPI ANT     */
/* TX ON    */
#define  C2K_MIPI_ANT_TX_ON0_SetDefault               M_US(5)
#define  C2K_MIPI_ANT_TX_ON1_SetDefault               M_US(0)

/*MIPI ANT     */
/* TX OFF    */
// We do not turn off ASM
#define  C2K_MIPI_ANT_TX_OFF0_SetDefault              M_US(10)
#define  C2K_MIPI_ANT_TX_OFF1_SetDefault              M_US(0)

/*MIPI PA     */
/* TX ON    */
#define  C2K_MIPI_PA_TX_ON0_SetDefault                M_US(10)
#define  C2K_MIPI_PA_TX_ON1_SetDefault                M_US(0)

/*MIPI PA     */
/* TX OFF    */
#define  C2K_MIPI_PA_TX_OFF0_SetDefault               M_US(10)
#define  C2K_MIPI_PA_TX_OFF1_SetDefault               M_US(0)

/* TX Gate ON    */
#define  C2K_MIPI_PA_TX_GATE_ON0_SetDefault           M_US(5)
#define  C2K_MIPI_PA_TX_GATE_ON1_SetDefault           M_US(0)

/* TX Gate OFF    */
#define  C2K_MIPI_PA_TX_GATE_OFF0_SetDefault          M_US(0)
#define  C2K_MIPI_PA_TX_GATE_OFF1_SetDefault          M_US(0)

/*MIPI ELNA */
/*ELNA Always On */
#define C2K_MIPI_ELNA_RX_ON0_SetDefault				  			M_US(5)

/*ELNA Always On 2nd SAW */
#define C2K_MIPI_ELNA_RX_ON_2ND_SAW0_SetDefault				  	M_US(5)

/*ELNA Bypass */
#define C2K_MIPI_ELNA_RX_BYPASS0_SetDefault				  		M_US(5)

/*ELNA Bypass 2nd SAW */
#define C2K_MIPI_ELNA_RX_BYPASS_2ND_SAW0_SetDefault				M_US(5)

/*ELNA Off */
#define C2K_MIPI_ELNA_RX_OFF0_SetDefault				M_US(5)


/* =============================================== */
/*   MIPI Tool Specific                            */
/* =============================================== */
#define  C2K_MIPI_TOOL_VER_SetDefault      0

#endif /* C2K_CUSTOM_MIPI_SetDefault_H */

