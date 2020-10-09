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
 *   em_audio_public_struct.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Engineer mode public structures.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *              HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/


#ifndef _EM_AUDIO_PUBLIC_STRUCT_H
#define _EM_AUDIO_PUBLIC_STRUCT_H

#include "em_public_struct.h"


typedef enum
{

    SPH_CODEC_FR = 0,
    SPH_CODEC_HR,
    SPH_CODEC_EFR,
    SPH_CODEC_AMR_12_20,
    SPH_CODEC_AMR_10_20,
    SPH_CODEC_AMR_7_95,
    SPH_CODEC_AMR_7_40,
    SPH_CODEC_AMR_6_70,
    SPH_CODEC_AMR_5_90,
    SPH_CODEC_AMR_5_15,
    SPH_CODEC_AMR_4_75,
    SPH_CODEC_AMR_SID,
    SPH_CODEC_AMR_NODATA,

    SPH_CODEC_AMRWB_6_60 = 0x20,
    SPH_CODEC_AMRWB_8_85,
    SPH_CODEC_AMRWB_12_65,
    SPH_CODEC_AMRWB_14_25,
    SPH_CODEC_AMRWB_15_85,
    SPH_CODEC_AMRWB_18_25,
    SPH_CODEC_AMRWB_19_85,
    SPH_CODEC_AMRWB_23_05,
    SPH_CODEC_AMRWB_23_85,
    SPH_CODEC_AMRWB_SID,
    SPH_CODEC_LOST_FRAME,

    SPH_CODEC_C2K_SO1=0x30, // c2k
    SPH_CODEC_C2K_SO3,
    SPH_CODEC_C2K_SO17,
    SPH_CODEC_C2K_SO68,
    SPH_CODEC_C2K_SO73,
    SPH_CODEC_C2K_SO73WB,


    SPH_CODEC_G711=0x60,
    SPH_CODEC_G722,
    SPH_CODEC_G723_1,
    SPH_CODEC_G726,
    SPH_CODEC_G729,

    SPH_CODEC_EVS_08K_005_9    =0x80,
    SPH_CODEC_EVS_08K_002_8    =0x80,
    SPH_CODEC_EVS_08K_007_2    =0x81,
    SPH_CODEC_EVS_08K_008_0    =0x82,
    SPH_CODEC_EVS_08K_009_6    =0x83,
    SPH_CODEC_EVS_08K_013_2    =0x84,
    SPH_CODEC_EVS_08K_016_4    =0x85,
    SPH_CODEC_EVS_08K_024_4    =0x86,
    SPH_CODEC_EVS_08K_032_0    =0x87,
    SPH_CODEC_EVS_08K_048_0    =0x88,
    SPH_CODEC_EVS_08K_064_0    =0x89,
    SPH_CODEC_EVS_08K_096_0    =0x8A,
    SPH_CODEC_EVS_08K_128_0    =0x8B,
    SPH_CODEC_EVS_08K_002_4_SID   =0x8C,
    SPH_CODEC_EVS_08K_000_0_REV   =0x8D,
    SPH_CODEC_EVS_08K_000_0_LOST  =0x8E,
    SPH_CODEC_EVS_08K_000_0_NODATA=0x8F,

    SPH_CODEC_EVS_16K_005_9    =0x90,
    SPH_CODEC_EVS_16K_002_8    =0x90,
    SPH_CODEC_EVS_16K_007_2    =0x91,
    SPH_CODEC_EVS_16K_008_0    =0x92,
    SPH_CODEC_EVS_16K_009_6    =0x93,
    SPH_CODEC_EVS_16K_013_2    =0x94,
    SPH_CODEC_EVS_16K_016_4    =0x95,
    SPH_CODEC_EVS_16K_024_4    =0x96,
    SPH_CODEC_EVS_16K_032_0    =0x97,
    SPH_CODEC_EVS_16K_048_0    =0x98,
    SPH_CODEC_EVS_16K_064_0    =0x99,
    SPH_CODEC_EVS_16K_096_0    =0x9A,
    SPH_CODEC_EVS_16K_128_0    =0x9B,
    SPH_CODEC_EVS_16K_002_4_SID   =0x9C,
    SPH_CODEC_EVS_16K_000_0_REV   =0x9D,
    SPH_CODEC_EVS_16K_000_0_LOST  =0x9E,
    SPH_CODEC_EVS_16K_000_0_NODATA=0x9F,

    SPH_CODEC_EVS_32K_005_9    =0xA0,
    SPH_CODEC_EVS_32K_002_8    =0xA0,
    SPH_CODEC_EVS_32K_007_2    =0xA1,
    SPH_CODEC_EVS_32K_008_0    =0xA2,
    SPH_CODEC_EVS_32K_009_6    =0xA3,
    SPH_CODEC_EVS_32K_013_2    =0xA4,
    SPH_CODEC_EVS_32K_016_4    =0xA5,
    SPH_CODEC_EVS_32K_024_4    =0xA6,
    SPH_CODEC_EVS_32K_032_0    =0xA7,
    SPH_CODEC_EVS_32K_048_0    =0xA8,
    SPH_CODEC_EVS_32K_064_0    =0xA9,
    SPH_CODEC_EVS_32K_096_0    =0xAA,
    SPH_CODEC_EVS_32K_128_0    =0xAB,
    SPH_CODEC_EVS_32K_002_4_SID   =0xAC,
    SPH_CODEC_EVS_32K_000_0_REV   =0xAD,
    SPH_CODEC_EVS_32K_000_0_LOST  =0xAE,
    SPH_CODEC_EVS_32K_000_0_NODATA=0xAF,

    SPH_CODEC_EVS_48K_005_9    =0xB0,
    SPH_CODEC_EVS_48K_002_8    =0xB0,
    SPH_CODEC_EVS_48K_007_2    =0xB1,
    SPH_CODEC_EVS_48K_008_0    =0xB2,
    SPH_CODEC_EVS_48K_009_6    =0xB3,
    SPH_CODEC_EVS_48K_013_2    =0xB4,
    SPH_CODEC_EVS_48K_016_4    =0xB5,
    SPH_CODEC_EVS_48K_024_4    =0xB6,
    SPH_CODEC_EVS_48K_032_0    =0xB7,
    SPH_CODEC_EVS_48K_048_0    =0xB8,
    SPH_CODEC_EVS_48K_064_0    =0xB9,
    SPH_CODEC_EVS_48K_096_0    =0xBA,
    SPH_CODEC_EVS_48K_128_0    =0xBB,
    SPH_CODEC_EVS_48K_002_4_SID   =0xBC,
    SPH_CODEC_EVS_48K_000_0_REV   =0xBD,
    SPH_CODEC_EVS_48K_000_0_LOST  =0xBE,
    SPH_CODEC_EVS_48K_000_0_NODATA=0xBF,

    SPH_CODEC_EVS_AWB_06_60    =0xD0,
    SPH_CODEC_EVS_AWB_08_85    =0xD1,
    SPH_CODEC_EVS_AWB_12_65    =0xD2,
    SPH_CODEC_EVS_AWB_14_25    =0xD3,
    SPH_CODEC_EVS_AWB_15_85    =0xD4,
    SPH_CODEC_EVS_AWB_18_25    =0xD5,
    SPH_CODEC_EVS_AWB_19_85    =0xD6,
    SPH_CODEC_EVS_AWB_23_05    =0xD7,
    SPH_CODEC_EVS_AWB_23_85    =0xD8,
    SPH_CODEC_EVS_AWB_02_00_SID   =0xD9,
    SPH_CODEC_EVS_AWB_00_00_REV0  =0xDA,
    SPH_CODEC_EVS_AWB_00_00_REV1  =0xDB,
    SPH_CODEC_EVS_AWB_00_00_REV2  =0xDC,
    SPH_CODEC_EVS_AWB_00_00_REV3  =0xDD,
    SPH_CODEC_EVS_AWB_00_00_LOST  =0xDE,
    SPH_CODEC_EVS_AWB_00_00_NODATA=0xDF,

    SPH_CODEC_CODEC_NONE                 =0xFF,
}em_speech_info_SpeechCodecType;


typedef enum {
   SPH_NETWORK_IDLE = 0,
   SPH_NETWORK_2G_SPEECH_ON,
   SPH_NETWORK_3G_SPEECH_ON,
   SPH_NETWORK_3G324M_SPEECH_ON,
   SPH_NETWORK_3G_SPEECH_CLOSING,
   SPH_NETWORK_4G_SPEECH_ON,
   SPH_NETWORK_4G_SPEECH_CLOSING, 
   SPH_NETWORK_C2K_SPEECH_ON,
   SPH_NETWORK_C2K_SPEECH_CLOSING, 
}em_speech_info_SpeechNetworkType;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum             em_info;
    em_speech_info_SpeechCodecType   ulSphCodec;
    em_speech_info_SpeechCodecType   dlSphCodec;
    em_speech_info_SpeechNetworkType sphNetwork;
} em_speech_info_sph_codec_ind_struct;


#endif /* _EM_AUDIO_PUBLIC_STRUCT_H */

