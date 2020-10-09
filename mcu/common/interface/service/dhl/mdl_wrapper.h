/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 *   mdl_wrapper.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *  Wrapper of MDL Logging
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 04 27 2017 yancy.chien
 * [MOLY00242548] [DHL] Build warning removal
 * 	     Apply A style.
 *
 * 04 27 2017 yancy.chien
 * [MOLY00242548] [DHL] Build warning removal
 *     Apply A style.
 *
 * 10 31 2016 cynthia.sun
 * [MOLY00173325] [MDL] 93 Integration
 * . remove dsp_header_define_csif.h
 *
 * 05 15 2016 cynthia.sun
 * [MOLY00173325] [MDL] 93 Integration
 * . remove L1_BASE_MADDR_xxx_C2CRF
 *
 * 04 08 2016 cynthia.sun
 * [MOLY00173325] [MDL] 93 Integration
 * . remove CSIF part
 *  .
 *
 ****************************************************************************/
#ifndef _MDL_WRAPPER_H_
#define _MDL_WRAPPER_H_

#if defined(__MTK_TARGET__)
/*
    #include "dsp_header_define_csif.h"

    //CMIF (MD32)
    #define CMIF_OFFSET                        (0x00358000)
    #define MDL_XXIF_MDL_INFO_OFFSET           (0x150)      //0x30~0x150: SS Team
    #define MDL_XXIF_MDL_FILTER_OFFSET         (0x150+4*10) //Assume that mdl_info_t is 40 bytes
    #define MDL_XXIF_MDL_FILTER_FLAG_OFFSET    (0x150+4*9)  //For filter flag setting. 4 byte

    //CSIF (CoreSonic)
    #define CSIF_ICC_OFFSET                       (CSIF_ICC_ST_RESERVE) //Word based
    #define MDL_CSIF_ICC_MDL_INFO_OFFSET          (CSIF_ICC_OFFSET)
    #define MDL_CSIF_ICC_MDL_FILTER_OFFSET        (CSIF_ICC_OFFSET+10) //Assume that mdl_info_t is 40 bytes //Word based
    #define MDL_CSIF_ICC_MDL_FILTER_FLAG_OFFSET   (CSIF_ICC_OFFSET+9) //Assume that mdl_info_t is 40 bytes //Word based

    #define CSIF_IMC_OFFSET                       (CSIF_IMC_ST_RESERVE) //Word based
    #define MDL_CSIF_IMC_MDL_INFO_OFFSET          (CSIF_IMC_OFFSET)
    #define MDL_CSIF_IMC_MDL_FILTER_OFFSET        (CSIF_IMC_OFFSET+10) //Assume that mdl_info_t is 40 bytes //Word based
    #define MDL_CSIF_IMC_MDL_FILTER_FLAG_OFFSET   (CSIF_IMC_OFFSET+9) //Assume that mdl_info_t is 40 bytes //Word based

    #define CSIF_MPC_OFFSET                       (CSIF_MPC_ST_RESERVE) //Word based
    #define MDL_CSIF_MPC_MDL_INFO_OFFSET          (CSIF_MPC_OFFSET)
    #define MDL_CSIF_MPC_MDL_FILTER_OFFSET        (CSIF_MPC_OFFSET+10) //Assume that mdl_info_t is 40 bytes //Word based
    #define MDL_CSIF_MPC_MDL_FILTER_FLAG_OFFSET   (CSIF_MPC_OFFSET+9) //Assume that mdl_info_t is 40 bytes //Word based
*/

////////////////////CoreSonic///////////////////////////
//#define L1_BASE_MADDR_MPC_C2CRF           (0xFD600000)
//#define L1_BASE_MADDR_IMC_C2CRF           (0xFDE00000)
//#define L1_BASE_MADDR_ICC_C2CRF           (0xFEE00000)
//#define COSONIC_L1_DBG_EN_OFFSET      (0x120034)
/*
#define COSONIC_MPC_SET_L1_DBG_EN do{ \
                *((volatile kal_uint32*) (L1_BASE_MADDR_MPC_C2CRF+COSONIC_L1_DBG_EN_OFFSET)) = (0x01) ;\
            }while(0)
#define COSONIC_IMC_SET_L1_DBG_EN do{ \
                *((volatile kal_uint32*) (L1_BASE_MADDR_IMC_C2CRF+COSONIC_L1_DBG_EN_OFFSET)) = (0x01) ;\
                }while(0)
#define COSONIC_ICC_SET_L1_DBG_EN do{ \
                *((volatile kal_uint32*) (L1_BASE_MADDR_ICC_C2CRF+COSONIC_L1_DBG_EN_OFFSET)) = (0x01) ;\
            }while(0)
*/
///////////////////////////////////////////////////////////////

#endif //__MTK_TARGET__

#endif //_MDL_WRAPPER_H_
