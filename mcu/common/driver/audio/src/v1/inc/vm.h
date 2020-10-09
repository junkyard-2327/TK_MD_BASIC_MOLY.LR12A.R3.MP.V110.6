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
 * vm.h
 *
 * Project:
 * --------
 * MAUI
 *
 * Description:
 * ------------
 * VM record related interface using internal
 *
 * Author:
 * -------
 * 
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *
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
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
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
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef _VM_H
#define _VM_H

#if defined(MT6763) || defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)

#define VM_CHIP_ID 0x6293

#else

#define VM_CHIP_ID 0xFFFF

#endif

void VM_Init(void);

//#if defined(__G_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)
typedef struct _vmGCodecULInfo
{
    uint16 drop_info;
    //uint16 system_time;
    uint16 codec;
    uint16 codec_parameters;
}vmGCodecULInfo, *pvmGCodecULInfo;
typedef struct _vmGCodecDLInfo
{
    uint16 drop_info;
    //uint16 system_time;
    uint16 codec;
    uint16 codec_parameters;
    uint16 DL_PCM_size;
}vmGCodecDLInfo, *pvmGCodecDLInfo;

typedef enum {
    EVS_AWB660 = 11,
    EVS_AWB885,
    EVS_AWB1265,
    EVS_AWB1425, 
    EVS_AWB1585, 
    EVS_AWB1825, 
    EVS_AWB1985, 
    EVS_AWB2305, 
    EVS_AWB2385, 
    EVS_PRI590,
    EVS_PRI720,
    EVS_PRI800,
    EVS_PRI960,
    EVS_PRI1320,
    EVS_PRI1640,
    EVS_PRI2440,
    EVS_PRI3200,
    EVS_PRI4800,
    EVS_PRI6400,
    EVS_PRI9600,
    EVS_PRI12800,
    EVS_SID_LOST_NODATA = 98,
    EVS_UNDEF = 99    
}EVS_VM_ID;


#define VM_SPH_FR 0
#define VM_SPH_HR 1
#define VM_SPH_EFR 2
#define VM_SPH_AMR122 3
#define VM_SPH_AMR102 4
#define VM_SPH_AMR795 5
#define VM_SPH_AMR74 6
#define VM_SPH_AMR67 7
#define VM_SPH_AMR59 8
#define VM_SPH_AMR515 9
#define VM_SPH_AMR475 10

#define VM_SPH_AWB660 0x20
#define VM_SPH_AWB885 0x21
#define VM_SPH_AWB1265 0x22
#define VM_SPH_AWB1425 0x23
#define VM_SPH_AWB1585 0x24
#define VM_SPH_AWB1825 0x25
#define VM_SPH_AWB1985 0x26
#define VM_SPH_AWB2305 0x27
#define VM_SPH_AWB2385 0x28
#define VM_SPH_C2K_QCELP8K 0x30
#define VM_SPH_C2K_QCELP13K 0x31
#define VM_SPH_C2K_EVRCA 0x32
#define VM_SPH_C2K_EVRCB 0x33
#define VM_SPH_C2K_EVRCNW_NB 0x34
#define VM_SPH_C2K_EVRCNW_WB 0x35
#define VM_SPH_C2K_UNDEF 0x39

#define VM_SPH_EVS_RATE_MIN  0x80
#define VM_SPH_EVS_RATE_MAX  0xDF


void vmStoreGCodecULStream(vmGCodecULInfo *pstvmGCodecULInfo, kal_uint16 u16StreamSize, kal_uint8 *pu8StreamData);
void vmStoreGCodecDLStream(vmGCodecDLInfo *pstvmGCodecDLInfo, kal_uint16 u16StreamSize, kal_uint8 *pu8StreamData);
//#endif //#if defined(__G_CODEC_SUPPORT__) && defined(__VOLTE_SUPPORT__)

void VMREC_ConfigEpl(void);
void VMREC_Start(void (*vm_hdlr)(void), bool isVoc);
void VMREC_Stop( bool isVoc);


/**
	@buf1: [Output]pointer to pcm buf1, 
	@len1: [Output]length of buf1, unit is word(2byte)
	@buf2: [Output]pointer to pcm buf2
	@len2: [Output]length of buf2. unit is word(2byte)
*/
void VmRec_GetReadBufs(kal_uint32 *add1, kal_uint16 *len1, kal_uint32 *add2, kal_uint16 *len2);
void VmRec_ReadDataDone(uint16 len);

#endif //_VM_H

