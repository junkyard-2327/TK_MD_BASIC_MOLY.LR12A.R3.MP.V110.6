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
 *   ubm_fhb.cpp
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *   
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
/**
 *  @file   ubm_fhb.cpp
 *  @brief  UBM internal function implementation.
 *
 *  @author Bo-Kai Huang, 
 *  @date   2016/06/01
 *
 **/

#include "ubm.h"
#include "ubm_fhb.h"

#if !defined(__MAUI_BASIC__)
#include "TrcMod.h"
#endif // __MAUI_BASIC__

/*---------------------------------------------------------------------------
 * structure, constants, macro definitions
 *---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------
 * global variable declarations
 *---------------------------------------------------------------------------*/
static ubm_fhb ubm_fhb_inst;

/*---------------------------------------------------------------------------
 * UBM internal methods implementation
 *---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------
 * public methods implementation
 *---------------------------------------------------------------------------*/
/* class: ubm_fhb */
ubm_fhb::ubm_fhb()
{
    kal_mem_set(fhb, 0, sizeof(fhb));
}

kal_uint8 ubm_fhb::set_fhb(const void* headerPattern, kal_uint8 size, const char* aliasName)
{
    kal_uint8 i;

    ASSERT((strlen(aliasName) < UBM_FH_ALIAS_LEN));

    for(i = 0; i < UBM_FH_NUM; i++) {
        if(!fhb[i].isUsed) {
            fhb[i].headerSize = size;
            kal_mem_cpy(fhb[i].fh, headerPattern, size);
            QBM_CACHE_FLUSH(fhb[i].fh, size);
            strncpy(fhb[i].alias, aliasName, strlen(aliasName));
            fhb[i].isUsed = KAL_TRUE;
            // use USBDRV API to set FHB
            hifusbq_set_dl_fh((i + 1), fhb[i].fh, fhb[i].headerSize);
            break;
        }
    }

    return (i == UBM_FH_NUM)? 0:(++i);
}


/* 
 * Request by TJ: UCBCLASS may want to change fixed header contents, but doesn't want to use clean and set API
 */
kal_bool ubm_fhb::update_fhb(const void* headerPattern, kal_uint8 size, const char* aliasName)
{
    kal_bool result = KAL_FALSE;
    kal_uint8 typeId = get_fh_type(aliasName);

    if((typeId != 0) && (fhb[typeId - 1].isUsed)) {
        // TODO: check DRB queue Tx done by driver API
        fhb[typeId - 1].headerSize = size;
        kal_mem_cpy(fhb[typeId - 1].fh, headerPattern, size);
        QBM_CACHE_FLUSH(fhb[typeId - 1].fh, size);
        strncpy(fhb[typeId - 1].alias, aliasName, strlen(aliasName));
        
        result = KAL_TRUE;
    }

    ASSERT(result);
    return result;
}

kal_bool ubm_fhb::clean_fhb(const char* aliasName)
{
    kal_bool result = KAL_FALSE;
    kal_uint8 typeId = get_fh_type(aliasName);

    if( (0 != typeId) && (fhb[typeId - 1].isUsed)) {
        fhb[typeId - 1].headerSize = 0;
        kal_mem_set(fhb[typeId - 1].fh, 0, UBM_FH_SIZE);
        kal_mem_set(fhb[typeId - 1].alias, 0, UBM_FH_ALIAS_LEN);
        fhb[typeId - 1].isUsed = KAL_FALSE;

        result = KAL_TRUE;
    }

    ASSERT(result);
    return result;
}

kal_uint8 ubm_fhb::get_fh_type(const char* aliasName)
{
    kal_uint8 i;
    char* alias;

    for(i = 0; i < UBM_FH_NUM; i++) {
        alias = fhb[i].alias;

        if(  fhb[i].isUsed && (0 == strncmp(alias, aliasName, strlen(aliasName)))) {
            break;
        }
    }

    return (i == UBM_FH_NUM)? 0:(++i);
}

ubm_fhb* ubm_get_fhb_instance()
{
    return &ubm_fhb_inst;
}

/*---------------------------------------------------------------------------
 * export methods implementation
 *---------------------------------------------------------------------------*/
/* FHB */
kal_uint8 ubm_set_fhb(const void* headerPattern, kal_uint8 size, const char* headerName)
{
    return ubm_fhb_inst.set_fhb(headerPattern, size, headerName);
}

kal_bool ubm_update_fhb(const void* headerPattern, kal_uint8 size, const char* headerName)
{
    return ubm_fhb_inst.update_fhb(headerPattern, size, headerName);
}

kal_bool ubm_clean_fhb(const char* headerName)
{
    return ubm_fhb_inst.clean_fhb(headerName);
}

kal_uint8 ubm_get_fhb_type(const char* headerName)
{
    return ubm_fhb_inst.get_fh_type(headerName);
}

