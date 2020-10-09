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

/*****************************************************************************
 *
 * Filename:
 * ---------
 * tl1d_rf_cid.h
 *
 * Project:
 * --------
 *   93m
 *
 * Description:
 * ------------
 *    This file contains TDD RF related compile option id.
 *
 * Author:
 * -------
 * 
 *
 *============================================================================*/


#ifndef __TL1D_RF_CID_H__
#define __TL1D_RF_CID_H__

/************************************************************************************
*  Include 
************************************************************************************/
/*.................................................................*/
/*............Chip ID definition.............................*/
/*.................................................................*/

#define TL1D_COMMON_INNER_RF_ID_MT6173     0x00000001
#define TL1D_COMMON_INNER_RF_ID_MT6179     0x00000002
#define TL1D_COMMON_INNER_RF_ID_MT6177L    0x00000004
#define TL1D_COMMON_INNER_RF_ID_MT6176     0x00000006
#define TL1D_COMMON_INNER_RF_ID_MT6177M    0x00000009   //define same as FTA tl1

#ifndef TL1D_RF_ID
   #if defined(MT6176_RF)
#define TL1D_RF_ID          TL1D_COMMON_INNER_RF_ID_MT6176
   #elif defined(MT6177L_RF)
#define TL1D_RF_ID          TL1D_COMMON_INNER_RF_ID_MT6177L
   #elif defined(MT6177M_RF)
#define TL1D_RF_ID          TL1D_COMMON_INNER_RF_ID_MT6177M
   #else
#error "No Valid RF Chip was defined"
   #endif
#else
#error "Unexpected RF Chip was defined"
#endif

#define IS_TL1D_RF_MT6177L      (TL1D_RF_ID == TL1D_COMMON_INNER_RF_ID_MT6177L)
#define IS_TL1D_RF_MT6176       (TL1D_RF_ID == TL1D_COMMON_INNER_RF_ID_MT6176)
#define IS_TL1D_RF_MT6177M      (TL1D_RF_ID == TL1D_COMMON_INNER_RF_ID_MT6177M)


#endif /* __CL1D_RF_CID_H__ */

