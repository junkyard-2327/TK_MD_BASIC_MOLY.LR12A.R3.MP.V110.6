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
 * c2k_custom_etm.h
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


#ifndef C2K_CUSTOM_ETM_Set0_H
#define C2K_CUSTOM_ETM_Set0_H


#include "c2k_custom_mipi.h"

/* =============================================== */
/*   USID Default Value                            */
/* =============================================== */

#define C2K_MIPI_USID_ETM                       0x000C


/* ETM */

/* TX Gate ON    */
#define  C2K_MIPI_ETM_TX_ON0_SETIME_Set0              M_US(120)
#define  C2K_MIPI_ETM_TX_ON1_SETIME_Set0              M_US(95)
#define  C2K_MIPI_ETM_TX_ON2_SETIME_Set0              M_US(0)
#define  C2K_MIPI_ETM_TX_ON3_SETIME_Set0              M_US(0)



/* TX Gate OFF    */
#define  C2K_MIPI_ETM_TX_OFF0_SETIME_Set0             M_US(0)
#define  C2K_MIPI_ETM_TX_OFF1_SETIME_Set0             M_US(0)

/* TPC    */
#define  C2K_MIPI_ETM_TX_TPC0_SETIME_Set0             M_US(38)


#define ETM_REGISTER_IDX_Set0_00               0x0
#define ETM_REGISTER_IDX_Set0_01               0x1
#define ETM_REGISTER_IDX_Set0_64               0x64
#define ETM_REGISTER_IDX_Set0_08               0x8
#define ETM_REGISTER_IDX_Set0_0F               0xF
#define ETM_REGISTER_IDX_Set0_09               0x9
#define ETM_REGISTER_IDX_Set0_6D               0x6D
#define ETM_REGISTER_IDX_Set0_83               0x83
#define ETM_REGISTER_IDX_Set0_8E               0x8E


#define ETM_REGISTER_00_ON0_DATA_Set0          0x70
#define ETM_REGISTER_64_ON0_DATA_Set0          0x01
#define ETM_REGISTER_01_ON0_DATA_Set0          0x00
#define ETM_REGISTER_08_ON0_DATA_Set0          0x8C
#define ETM_REGISTER_09_ON0_DATA_Set0          0x02

#define ETM_REGISTER_6D_ON0_DATA_Set0          0x07
#define ETM_REGISTER_83_ON0_DATA_Set0          0x03


#define ETM_REGISTER_00_ON1_DATA_Set0          0x74
#define ETM_REGISTER_09_ON1_DATA_Set0          0x22

#define ETM_REGISTER_83_ON1_DATA_Set0          0x00


#define ETM_REGISTER_00_OFF0_DATA0_Set0         0x70
#define ETM_REGISTER_00_OFF0_DATA1_Set0         0x00
#define ETM_REGISTER_09_OFF0_DATA_Set0         0x00
#define ETM_REGISTER_6D_OFF0_DATA_Set0         0x0B


#define ETM_TXON_START_0_IDX_Set0              0
#define ETM_TXON_STOP_0_IDX_Set0               4
#define ETM_TXON_START_1_IDX_Set0              5
#define ETM_TXON_STOP_1_IDX_Set0               5
#define ETM_TXON_START_2_IDX_Set0              0
#define ETM_TXON_STOP_2_IDX_Set0               0
#define ETM_TXON_START_3_IDX_Set0              0
#define ETM_TXON_STOP_3_IDX_Set0               0



#define ETM_TXOFF_START_0_IDX_Set0             6
#define ETM_TXOFF_STOP_0_IDX_Set0              8

#define ETM_TPC_START_0_IDX_Set0                 0   
#define ETM_TPC_STOP_0_IDX_Set0                  3   


#endif /* C2K_CUSTOM_ETM_Set0_H */

