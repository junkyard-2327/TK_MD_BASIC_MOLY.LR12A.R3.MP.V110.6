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
 * Filename:
 * ---------
 *   rr_spare_bit.h
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
 * -------
 *
 *------------------------------------------------------------------------------
 * $Log$
 *
 * 11 13 2014 ming.lee
 * [MOLY00080211] [MT6291_DEV][MT6291_UESIM_DEV] Check in low power to MT6291_DEV, MT6291_UESIM_DEV
 * GISE Paging.
 *
 * 12 14 2010 nancy.chang
 * removed!
 * .
 *
 * 10 16 2010 nancy.chang
 * removed!
 * .
 *
 * 08 03 2010 nancy.chang
 * removed!
 * .
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * add to source control recursely
 *
 * removed!
 * removed!
 * Change rr to rr2.
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * 
 *
 ******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

#ifndef _RR_SPARE_BIT_H
#define _RR_SPARE_BIT_H

/* Nancy 20101005: Suggest Add for RHR */
#include "bitstream.h"
#include "kal_general_types.h"
#include "gas_gise_def.h"

/************************
Macros Without Parameters
*************************/

/*
 * Description: The padding sequence is the repetition of octet 00101011,
 * starting on an octet boundary.
 * 
 * 3G TS 24.007 V3.3.1 sec: B.1.2.2
 */

/*****************
Enums Without Tags
******************/

/*********************
Macros With Parameters
**********************/

/* Macros used by pack and unpack functions */
#define RR_SPARE_BIT_H_VALUE( bit_offset) \
                       (( ~S_RR_SPARE_OCTET_CNST >> (7-bit_offset)) & 0x01)
#define RR_SPARE_BIT_L_VALUE( bit_offset) \
                       (( S_RR_SPARE_OCTET_CNST >> (7-bit_offset)) & 0x01)

/***************************
Exported Function Prototypes
****************************/

/* Functions to be used in code where pack and unpack is not used */
extern kal_uint8 rr_get_spare_bit(bit_stream *bit_stream_ptr);

#endif /* _RR_SPARE_BIT_H */ 

