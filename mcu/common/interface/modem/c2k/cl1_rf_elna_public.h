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
 * cl1d_rf_elna_public.h
 *
 * Project:
 * --------
 * C2K
 *
 * Description:
 * ------------
 * Header file containing typedefs and definitions pertaining
 * to C2K RF driver external interface.
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
#ifndef CL1_RF_ELNA_PUBLIC_H
#define CL1_RF_ELNA_PUBLIC_H

#include "cl1d_rf_common_defs.h"
extern kal_uint32 elna_hwd_mask;
extern kal_uint32 tpc_hwd_en;

/*ELNA pin control switch */
#define C2K_ELNA_PIN_NONE (-1)
#define ELNA_RF_BAND_MAX_NUM	(5)
typedef enum{
	C2K_ELNA1,
	C2K_ELNA2,
	C2K_ELNA3,
	C2K_ELNA4,
	C2K_ELNA5,
	C2K_ELNA6,
	C2K_ELNA7,
	C2K_ELNA8,
	C2K_ELNA9,
	C2K_ELNA10,
	C2K_ELNA_MAX_NUM,
	C2K_ELNA_NONE=C2K_ELNA_MAX_NUM
}C2K_ELNA_TYPE_E;
typedef struct{
	kal_uint8 pnum_pin0;			/*the 1st BPI pin num for ELNA crl *//*C2K_ELNA_PIN_NONE means not used */
	kal_uint8 pnum_pin1;			/*the 2nd BPI pin num for ELNA ctr *//*C2K_ELNA_PIN_NONE means not used */
	kal_uint32 pdata_on_pin0;
	kal_uint32 pdata_on_pin1;
	kal_uint32 pdata_bypass_pin0;
	kal_uint32 pdata_bypass_pin1;
}C2K_ELNA_BPI_DATA_T;
typedef struct{
	/*ELNA Category *////TODO: use for ?
	kal_uint8 category_elna[C2K_ELNA_MAX_NUM];
	/*ELNA Mapping for RF BNAD */
	kal_uint8 elnaMapping_RX[ELNA_RF_BAND_MAX_NUM];
	kal_uint8 elnaMapping_RXD[ELNA_RF_BAND_MAX_NUM];
	/*ELNA data for specfic elna */
	C2K_ELNA_BPI_DATA_T elna_bpi_data[C2K_ELNA_MAX_NUM];
}CL1D_RF_CUST_ELNA_CFG_T;
#endif