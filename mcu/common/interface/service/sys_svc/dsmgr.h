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
 *   dsmgr.h
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *   Dynamic Section Manager for dynamic section relocation into TCM(internal SRAM)
 *
 * Author:
 * -------
 * -------
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
 * removed!
 * removed!
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef __DSMGR_H__
#define __DSMGR_H__


/*******************************************************************************
 * Included header files
 *******************************************************************************/



/*******************************************************************************
 * definition
 *******************************************************************************/
#if defined(__DSM_CONFIGURATION__)

/* If you want to specify a section to be loaded by GDMA or CPU, please add 
    DYNAMIC_SECTION_LOAD_BY_GDMA(section_id) or DYNAMIC_SECTION_LOAD_BY_CPU(section_id) in below, respectively.
*/
        
        DYNAMIC_SECTION_LOAD_BY_CPU(DYNAMIC_SECTION_INTSRAM_UBIN_W_CORE0)
        DYNAMIC_SECTION_LOAD_BY_CPU(DYNAMIC_SECTION_INTSRAM_UBIN_T_CORE0)
        DYNAMIC_SECTION_LOAD_BY_GDMA(DYNAMIC_SECTION_INTSRAM_ADT_W_CORE0)
        DYNAMIC_SECTION_LOAD_BY_GDMA(DYNAMIC_SECTION_INTSRAM_ADT_T_CORE0)
        DYNAMIC_SECTION_LOAD_BY_GDMA(DYNAMIC_SECTION_INTSRAM_ADT_L_CORE0)
        DYNAMIC_SECTION_LOAD_BY_GDMA(DYNAMIC_SECTION_INTSRAM_ADT_W2_CORE0)
#else /* !efined(__DSM_CONFIGURATION__) */

    typedef enum {
        DYNAMIC_SECTION_INTSRAM_UBIN_W_CORE0 = 0,
        DYNAMIC_SECTION_INTSRAM_UBIN_T_CORE0,
        DYNAMIC_SECTION_INTSRAM_ADT_W_CORE0,
        DYNAMIC_SECTION_INTSRAM_ADT_T_CORE0,
        DYNAMIC_SECTION_INTSRAM_ADT_L_CORE0,
        DYNAMIC_SECTION_INTSRAM_ADT_W2_CORE0,
        /* insert id before this line*/
        DYNAMIC_SECTION_NUM     /* 6 = TOTAL_DSM_SECTION */
    } dsm_section_id;

    /* make sure to define TOTAL_DSM_SECTION as valuse of DYNAMIC_SECTION_NUM */
    #define TOTAL_DSM_SECTION (6)

#define DSM_TOTAL_RECORD_COUNT                      20

typedef enum {
    DSM_ACTION_NO_ACTION,
    DSM_ACTION_LOAD_BEFORE,
    DSM_ACTION_LOAD_START,
    DSM_ACTION_LOAD_UNLOAD_OVERLAP_SECTION,
    DSM_ACTION_LOAD_END,
    DSM_ACTION_LOAD_GDMA_LOAD_END,
    DSM_ACTION_LOAD_CANCEL_GDMA_LOAD,
    DSM_ACTION_LOAD_CONFIG_GDMA_LOAD_RO_CODE,
    DSM_ACTION_UNLOAD_START,
    DSM_ACTION_UNLOAD_END,
} DSM_ACTION;

#if defined(__MTK_TARGET__)

#define LOAD_DYNAMIC_SECTION_INTSRAM_UBIN_W         DSM_Load(DYNAMIC_SECTION_INTSRAM_UBIN_W_CORE0);
#define LOAD_DYNAMIC_SECTION_INTSRAM_UBIN_T         DSM_Load(DYNAMIC_SECTION_INTSRAM_UBIN_T_CORE0);
#define LOAD_DYNAMIC_SECTION_INTSRAM_ADT_W          DSM_Load(DYNAMIC_SECTION_INTSRAM_ADT_W_CORE0);
#define LOAD_DYNAMIC_SECTION_INTSRAM_ADT_T          DSM_Load(DYNAMIC_SECTION_INTSRAM_ADT_T_CORE0);
#define LOAD_DYNAMIC_SECTION_INTSRAM_ADT_L          DSM_Load(DYNAMIC_SECTION_INTSRAM_ADT_L_CORE0);
#define LOAD_DYNAMIC_SECTION_INTSRAM_ADT_W2         DSM_Load(DYNAMIC_SECTION_INTSRAM_ADT_W2_CORE0);

#define UNLOAD_DYNAMIC_SECTION_INTSRAM_UBIN_W       DSM_Unload(DYNAMIC_SECTION_INTSRAM_UBIN_W_CORE0);
#define UNLOAD_DYNAMIC_SECTION_INTSRAM_UBIN_T       DSM_Unload(DYNAMIC_SECTION_INTSRAM_UBIN_T_CORE0);
#define UNLOAD_DYNAMIC_SECTION_INTSRAM_ADT_W        DSM_Unload(DYNAMIC_SECTION_INTSRAM_ADT_W_CORE0);
#define UNLOAD_DYNAMIC_SECTION_INTSRAM_ADT_T        DSM_Unload(DYNAMIC_SECTION_INTSRAM_ADT_T_CORE0);
#define UNLOAD_DYNAMIC_SECTION_INTSRAM_ADT_L        DSM_Unload(DYNAMIC_SECTION_INTSRAM_ADT_L_CORE0);
#define UNLOAD_DYNAMIC_SECTION_INTSRAM_ADT_W2       DSM_Unload(DYNAMIC_SECTION_INTSRAM_ADT_W2_CORE0);

#endif

#define DYNAMIC_SECTION_INTSRAM_UBIN_W DYNAMIC_SECTION_INTSRAM_UBIN_W_CORE0
#define DYNAMIC_SECTION_INTSRAM_UBIN_T DYNAMIC_SECTION_INTSRAM_UBIN_T_CORE0

    
/* define dsm function return status */
typedef enum {
    DSM_FAIL,               /* the operation has failed */
    DSM_SUCCESS,            /* the operation is succeeded */
    DSM_LOAD_BEFORE,        /* the section has been load before */
    DSM_FAIL_TO_CANCEL_GDMA_LOADING, /* the section is loaded by CPU or loading by GDMA is done */
    DSM_LOAD_BY_GDMA,       /* the section will be load by GDMA */  
} dsm_status;

/* define dsm section status */
typedef enum {
    DSM_LOAD,           /* the section is loaded */
    DSM_LOADING,        /* the section is during loading */
    DSM_UNLOAD,         /* the section is not loaded */
    DSM_UNLOADING,      /* the section is during unloading */
} dsm_section_status;



typedef void (*DSM_gdma_pcb_f)(void *info);


/*******************************************************************************
 * External Function Declaration
 *******************************************************************************/
 /*******************************************************************************
 * <GROUP Functions>
 *
 * FUNCTION
 *  DSM_Load
 * DESCRIPTION
 *  This function will load specified section to corresponding address which overlaps with other sections. 
 *  There are 2 ways to load a section
 *    1) Load by CPU (default)
 *    2) Load by GDMA
 *  If the section is loaded by CPU, it will return DSM_SUCCESS after the loading is done.
 *  If the section is loaded by GDMA, it will return directly with return value DSM_LOAD_BY_GDMA. You can 
 *  register a callback function by using DSM_RegisterGDMACallback. After the section is loaded by GDMA, 
 *  the callback function will be executed in GDMA LISR.
 *  If the specified section is loaded before, it will return directly with return value DSM_LOAD_BEFORE.
 *  If there is an overlapped section is loaded, 
 *    1) if no data in the overlapped loaded section, system will mark the loaded section to unload status and 
 *        keep loading specified section to overwrite the overlapped section;
 *    2) otherwise, fatal error will happened since there are unloaded data in overlapped section which could 
 *        not be overwritten.
 * PARAMETERS
 *  dynamic_section_id:   [IN] id of specified section to load
 * RETURN VALUES
 *   1) DSM_SUCCESS: load the specified section successfully
 *   2) DSM_LOAD_BEFORE: the specified section has been load before 
 *   3) DSM_LOAD_BY_GDMA: the section will be load by GDMA  
 * NOTE
 *  If the specified section has not been loaded before, the section will be set to initial value which means 
 *  loaded from load view; otherwise, the data will be restored from system.
 * SEE ALSO
 *  DSM_Unload, DSM_IsLoad, DSM_RegisterGDMACallback, DSM_CancelLoadingByGDMA
 ******************************************************************************/
dsm_status DSM_Load(kal_uint32 dynamic_section_id);

/*******************************************************************************
 * <GROUP Functions>
 *
 * FUNCTION
 *  DSM_Unload
 * DESCRIPTION
 *  This function will unload specified section which means the data in the specified section will be backed up 
 *  by system. System backup the data by CPU. 
 *  It will return DSM_SUCCESS after the un-loading is done.
 *  If there is no data to backup, it will return directly with return value DSM_UNLOAD_NOTHING. 
 *  Fatal error will happened if specified section has not been loaded before. 
 * PARAMETERS
 *  dynamic_section_id:   [IN] id of specified section to unload
 * RETURN VALUES
 *   1) DSM_SUCCESS: unload the specified section successfully
 *   2) DSM_UNLOAD_NOTHING.: there is no data to backup  
 * NOTE
 *  N/A
 * SEE ALSO
 *  DSM_Load, DSM_QuerySectionStatus, DSM_IsLoad, DSM_RegisterGDMACallback, DSM_CancelLoadingByGDMA
 ******************************************************************************/
dsm_status DSM_Unload(kal_uint32 dynamic_section_id);

/*******************************************************************************
 * <GROUP Functions>
 *
 * FUNCTION
 *  DSM_QuerySectionStatus
 * DESCRIPTION
 *  This function return the status of specified section
 * PARAMETERS
 *  dynamic_section_id:   [IN] id of specified section to query
 * RETURN VALUES
 *  1) DSM_LOAD: the section is loaded 
 *  2) DSM_LOADING: the section is during loading
 *  3) DSM_UNLOAD: the section is not loaded
 *  4) DSM_UNLOADING: the section is during unloading
 * NOTE
 *  N/A
 * SEE ALSO
 *  DSM_Load, DSM_Unload
 ******************************************************************************/
dsm_section_status DSM_QuerySectionStatus(kal_uint32 dynamic_section_id);



/*******************************************************************************
 * <GROUP Functions>
 *
 * FUNCTION
 *  DSM_IsLoad
 * DESCRIPTION
 *  This function return true if the specified section is loaded. 
 * PARAMETERS
 *  dynamic_section_id:   [IN] id of specified section to query
 * RETURN VALUES
 *   1) KAL_TRUE: the specified section is loaded.
 *   2) KAL_FALSE: the specified section is not loaded.
 * NOTE
 *  N/A
 * SEE ALSO
 *  DSM_Load, DSM_Unload, DSM_QuerySectionStatus
 ******************************************************************************/
kal_bool DSM_IsLoad(kal_uint32 dynamic_section_id);

/*******************************************************************************
 * <GROUP Functions>
 *
 * FUNCTION
 *  DSM_RegisterGDMACallback
 * DESCRIPTION
 *  This function is designed for user to register callback function. If the specified section is loaded by GDMA 
 *  and loading by GDMA is done, the callback function will be called during GDMA LISR.
 * PARAMETERS
 *  dynamic_section_id:   [IN] id of specified section
 *  DSM_gdma_cb:          [IN] callback function. Prototype is "typedef void (*DSM_gdma_pcb_f)(void *info)"
 *  DSM_gdma_param:    [IN] the argument for callback function
 * RETURN VALUES
 *  N/A
 * NOTE
 *  Fatal error is happened if the specified section is not load by GDMA.
 * SEE ALSO
 *  DSM_Load, DSM_IsLoad, DSM_QuerySectionStatus, DSM_CancelLoadingByGDMA
 ******************************************************************************/
void DSM_RegisterGDMACallback(kal_uint32 dynamic_section_id, DSM_gdma_pcb_f DSM_gdma_cb, void * DSM_gdma_param);

/*******************************************************************************
 * <GROUP Functions>
 *
 * FUNCTION
 *  DSM_CancelLoadingByGDMA
 * DESCRIPTION
 *  This function will stop loading target section by GDMA.
 * PARAMETERS
 *  dynamic_section_id:   [IN] id of specified section
 * RETURN VALUES
 *  DSM_FAIL_TO_CANCEL_GDMA_LOADING : if the section not loading GDMA (i.e. loading by CPU)
 *  DSM_SUCCESS : cancel loading successfully
 * NOTE
 *  (1) it may late to stop GDMA and the callback function will be executed in LISR before we stop GDMA.
 *  Make sure to revert the things done by your callback function
 *  (2) Do not cancel your first loading if there are RWZI in your section; Otherwise, we will restore
 *  unexpected value from EMI and cause fatal error (checksum fail)
 *  (3) If cancel your non-first loading with RWZI in your section; we will restore the data which unload
 *  by you last time
 * SEE ALSO
 *  DSM_Load, DSM_IsLoad, DSM_QuerySectionStatus
 ******************************************************************************/
dsm_status DSM_CancelLoadingByGDMA(kal_uint32 dynamic_section_id);


#endif /* end of !efined(__DSM_CONFIGURATION__) */

#endif  /* __DSMGR_H__ */
