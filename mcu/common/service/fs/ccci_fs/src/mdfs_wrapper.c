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
 *	mdfs_wrapper.c
 *
 * Project:
 * --------
 *   Maui
 *
 * Description:
 * ------------
 *    This file is used for supporting CCCI FS
 *
 * Author:
 * -------
 * -------
 *
 ****************************************************************************/
#if defined(__CCCIFS_SUPPORT__)
#include "fs_gprot.h"
#include "kal_trace.h"

#if defined(__FPGA__)
    #define MD_FS_WRAP_CCCI_LIMIT 1024*15
#else
    #define MD_FS_WRAP_CCCI_LIMIT 1024*16
#endif

kal_int32 FS_Read_Wrap(FS_HANDLE FileHandle, void * DataPtr, kal_uint32 Length, kal_uint32 * Read)
{
    int      Result = 0;
    BYTE *ReadPtr;
    kal_uint32 ReadSize, TotalRead = 0;

    ReadPtr = (BYTE *)DataPtr;

    //kal_print_string_trace(MOD_FS, TRACE_FUNC , "[LJ] new FS Read wrap function being called....line:%d\n",__LINE__);//LJ, add log

    while(Length > 0)
    {
        if(Length > MD_FS_WRAP_CCCI_LIMIT)
            ReadSize = MD_FS_WRAP_CCCI_LIMIT;
        else
            ReadSize = Length;

        Result = MD_FS_Read(FileHandle, (void *)ReadPtr, ReadSize, Read);

        if(Result < 0 || *(Read) == 0)
            break;
        
        Length = Length - *(Read);
        ReadPtr = ReadPtr + *(Read);
        TotalRead = TotalRead + *(Read);
		
		if(*(Read) < ReadSize)
            break;
    }

    *(Read) = TotalRead;

    return Result;
}

kal_int32 FS_CMPT_Read_Wrap(const WCHAR * FileName, NVRAM_FS_PARAM_CMPT_T* nvram_param)
{
    kal_int32 Result = 0, TempOffset;
    kal_uint32 TotalLength = 0, TotalRead = 0;
	void *TempDataPtr;

    //kal_print_string_trace(MOD_FS, TRACE_FUNC , "[LJ] new FS CMPT Read wrap function being called....line:%d\n",__LINE__);//LJ, add log
    if((nvram_param->opid_map & (NVRAM_FS_CMPT_READ)) == (NVRAM_FS_CMPT_READ)){
        TotalLength = nvram_param->Length;
        TempDataPtr = nvram_param->DataPtr;
        TempOffset = nvram_param->Offset;

        while(TotalLength > 0)
        {
            if(TotalLength > MD_FS_WRAP_CCCI_LIMIT)
                nvram_param->Length = MD_FS_WRAP_CCCI_LIMIT;
            else
                nvram_param->Length = TotalLength;

            Result = MD_FS_CMPT_Read(FileName, nvram_param);
//            kal_print_string_trace(MOD_FS, TRACE_FUNC , "[LJ] line:%d, Result:%d, TotalLength:%x\n",__LINE__, Result, TotalLength);
            if(Result < 0 || *(nvram_param->Read) == 0)
                break;

            TotalLength -= *(nvram_param->Read);
            nvram_param->DataPtr +=  *(nvram_param->Read);
            nvram_param->Offset += *(nvram_param->Read);
            TotalRead = TotalRead + *(nvram_param->Read);
			
			if(*(nvram_param->Read) < nvram_param->Length)
                break;
        }

        *(nvram_param->Read) = TotalRead;
        nvram_param->Offset = TempOffset;
        nvram_param->DataPtr = TempDataPtr;
    }
    else
        Result = MD_FS_CMPT_Read(FileName, nvram_param);
        

    return Result;
}


kal_int32 FS_Write_Wrap(FS_HANDLE FileHandle, void * DataPtr, kal_uint32 Length, kal_uint32 * Written)
{
    int      Result = 0;
    BYTE *WritePtr;
    kal_uint32 WriteSize, TotalWrite = 0;

    WritePtr = (BYTE *)DataPtr;

//    kal_print_string_trace(MOD_FS, TRACE_FUNC , "[LJ] new FS write wrap function being called....line:%d\n",__LINE__);//LJ, add log

    while(Length > 0)
    {
        if(Length > MD_FS_WRAP_CCCI_LIMIT)
            WriteSize = MD_FS_WRAP_CCCI_LIMIT;
        else
            WriteSize = Length;

        Result = MD_FS_Write(FileHandle, (void *)WritePtr, WriteSize, Written);
//        kal_print_string_trace(MOD_FS, TRACE_FUNC , "[LJ] line:%d, Result:%d, TotalLength:%x\n",__LINE__, Result, Length);
        if(Result < 0 || *(Written) == 0)
            break;
        
        Length = Length - *(Written);
        WritePtr = WritePtr + *(Written);
        TotalWrite = TotalWrite + *(Written);
    }

    *(Written) = TotalWrite;

    return Result;
}

#endif
