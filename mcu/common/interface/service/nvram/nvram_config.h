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
 * nvram_config.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   The file contains nvram configuration default value.
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
 *
 * removed!
 * removed!
 * removed!
 *
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
#ifndef NVRAM_CONFIG_H
#define NVRAM_CONFIG_H

// -- Active recover file from bin region before init all --
//***************************************************************************
#define __NVRAM_INIT_ACTIVE_RECOVER__


//***************************************************************************
// -- Multiple folder configuration --
// Turn on "Multi Folder" when pseudo merge turn off
//***************************************************************************
#ifndef __NVRAM_PSEUDO_MERGE__
#define __NVRAM_MULTI_FOLDERS__
#endif

//***************************************************************************
// -- NVRAM init LID buffer feature --
//***************************************************************************
#ifndef __NVRAM_UT_TEST__
#define __NVRAM_INIT_LID_BUFFER__
#endif

//***************************************************************************
// -- Custom_sensitive category configuration --
//***************************************************************************
#ifdef __TC01__
    #ifdef __NVRAM_MULTI_FOLDERS__
    #define __NVRAM_CUSTOM_SENSITIVE__
        #ifdef __NVRAM_PSEUDO_MERGE__
            #error "cannot open with pseudo merge"
        #endif
    #endif
#endif

//***************************************************************************
// -- Large record size configuration --
//***************************************************************************
#ifdef __TC01__
    #define __NVRAM_LARGE_RECORD_SIZE__
#endif

//***************************************************************************
// -- Write with NVRAM file but not file's record configuration --
//***************************************************************************
#define __NVRAM_WRITE_WITH_FILE_SIZE__

//***************************************************************************
// -- compact the read preocess with one command --
//***************************************************************************
#define __NVRAM_FS_OPERATION_COMPACT__
#if !defined(__MTK_TARGET__)
#define __NVRAM_FS_CMPT_SIMULATION__
#define __NVRAM_BIN_REGION_SIMULATION__
#endif

//***************************************************************************
// -- Custom Disk configuration --
//***************************************************************************
#if defined(__CUSTOMER_TC01_DISK__) && defined (__MTK_TARGET__)
    #define __NVRAM_CUSTOM_DISK__
    #ifdef __NVRAM_PSEUDO_MERGE__
        #error "cannot open with pseudo merge"
    #endif
#endif

//***************************************************************************
// -- Backup Disk configuration --
// __NVRAM_SIMULATE_BACKUP_DISK__ :  simulate backup disk on MODIS
//***************************************************************************
#ifdef __SYSDRV_BACKUP_DISK__
    #define __NVRAM_BACKUP_DISK__

    #ifdef __SYSDRV_BACKUP_DISK_FAT__
        #define __NVRAM_BACKUP_DISK_FAT__
    #endif

    #ifdef __SYSDRV_BACKUP_DISK_RAW__
        /* We simulate the backup disk on MODIS */
        #ifndef __MTK_TARGET__
            #define __NVRAM_SIMULATE_BACKUP_DISK__
        #endif
        #define __NVRAM_BACKUP_DISK_RAW__
    #endif

    #ifdef __NVRAM_PSEUDO_MERGE__
        #error "cannot open with pseudo merge"
    #endif
#endif

//***************************************************************************
// -- Secure Data Storage configuration --
// __NVRAM_SIMULATE_SECURE_DATA_STORAGE__ : simulate on SDS MODIS
//***************************************************************************
#ifdef __SECURE_DATA_STORAGE__
    #define __NVRAM_SECURE_DATA_STORAGE__
    #ifndef __MTK_TARGET__
        #define __NVRAM_SIMULATE_SECURE_DATA_STORAGE__
    #endif

    #ifdef __NVRAM_PSEUDO_MERGE__
        #error "cannot open with pseudo merge"
    #endif
#endif


//***************************************************************************
// -- Unit test configuration --
//***************************************************************************
#define __NVRAM_INIT_TIME_UT__
//#define __NVRAM_UNIT_TEST__
//#define __SLIM__
//#define __NVRAM_DEBUG_READ_DUMP__
//#define __NVRAM_DEBUG_WRITE_DUMP__
#ifdef __NVRAM_DEBUG_READ_DUMP__
    #define NVRAM_DEBUG_DUMP_OTA            KAL_TRUE
    #define NVRAM_DEBUG_DUMP_OTA_DETAIL     KAL_TRUE
    #define NVRAM_DEBUG_DUMP_OTA_DEBUG      KAL_TRUE
#endif

#define __NVRAM_CREATE_FILE_ON_WRITE__
#define __NVRAM_MONITOR_ENABLED__
#define __NVRAM_READ_RESERVED_FILE__
#if !defined(__CCCIFS_SUPPORT__) && defined(__MTK_TARGET__) && !defined(__FS_RAMDISK__)
#define __NVRAM_DISK_SIZE_CHECK__
#endif

#define __NVRAM_MONITOR_ENABLED__
#define __NVRAM_SEC_CHECK_EN__

#define __NVRAM_CHECK_FILE_AND_RECOVER__
#define __NVRAM_IMEI_UNLOCK_DISABLE__
//#define __NVRAM_ACCESS_TIMEOUT_ASSERT__
#endif

