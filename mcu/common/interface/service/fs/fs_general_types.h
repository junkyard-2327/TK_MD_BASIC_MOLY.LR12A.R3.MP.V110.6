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
 *   fs_general_types.h
 *
 * Project:
 * --------
 *   Maui Software
 *
 * Description:
 * ------------
 *   This file provides the header of MTK file system service.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _FS_GENERAL_TYPES_H_
#define _FS_GENERAL_TYPES_H_

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

/*---------------------------------------------------------------------------
 * Included Header Files
 *---------------------------------------------------------------------------*/

//-- KAL headers
#include "kal_general_types.h"

//-- Extern headers for FS features
#include "kal_public_defs.h"
#include "kal_public_api.h"

/*---------------------------------------------------------------------------
 * Error Codes
 *---------------------------------------------------------------------------*/
typedef enum
{
    FS_NO_ERROR                    =    0,    /* No error */
    FS_ERROR_RESERVED              =   -1,    /* Reserved error, not used currently */
    FS_PARAM_ERROR                 =   -2,    /* User */
    FS_INVALID_FILENAME            =   -3,    /* User */
    FS_DRIVE_NOT_FOUND             =   -4,    /* User or Fatal */
    FS_TOO_MANY_FILES              =   -5,    /* User or Normal: use over max file handle number or more than 256 files in sort */
    FS_NO_MORE_FILES               =   -6,    /* Normal */
    FS_WRONG_MEDIA                 =   -7,    /* Fatal */
    FS_INVALID_FILE_SYSTEM         =   -8,    /* Fatal */
    FS_FILE_NOT_FOUND              =   -9,    /* User or Normal */
    FS_INVALID_FILE_HANDLE         =  -10,    /* User or Normal */
    FS_UNSUPPORTED_DEVICE          =  -11,    /* User */
    FS_UNSUPPORTED_DRIVER_FUNCTION =  -12,    /* User or Fatal */
    FS_CORRUPTED_PARTITION_TABLE   =  -13,    /* fatal */
    FS_TOO_MANY_DRIVES             =  -14,    /* not use so far */
    FS_INVALID_FILE_POS            =  -15,    /* User */
    FS_ACCESS_DENIED               =  -16,    /* User or Normal */
    FS_STRING_BUFFER_TOO_SMALL     =  -17,    /* User */
    FS_GENERAL_FAILURE             =  -18,    /* Normal */
    FS_PATH_NOT_FOUND              =  -19,    /* User */
    FS_FAT_ALLOC_ERROR             =  -20,    /* Fatal: disk crash */
    FS_ROOT_DIR_FULL               =  -21,    /* Normal */
    FS_DISK_FULL                   =  -22,    /* Normal */
    FS_TIMEOUT                     =  -23,    /* Normal: FS_CloseMSDC with nonblock */
    FS_BAD_SECTOR                  =  -24,    /* Normal: NAND flash bad block */
    FS_DATA_ERROR                  =  -25,    /* Normal: NAND flash bad block */
    FS_MEDIA_CHANGED               =  -26,    /* Normal */
    FS_SECTOR_NOT_FOUND            =  -27,    /* Fatal */
    FS_ADDRESS_MARK_NOT_FOUND      =  -28,    /* not use so far */
    FS_DRIVE_NOT_READY             =  -29,    /* Normal */
    FS_WRITE_PROTECTION            =  -30,    /* Normal: only for MSDC */
    FS_DMA_OVERRUN                 =  -31,    /* not use so far */
    FS_CRC_ERROR                   =  -32,    /* not use so far */
    FS_DEVICE_RESOURCE_ERROR       =  -33,    /* Fatal: Device crash */
    FS_INVALID_SECTOR_SIZE         =  -34,    /* Fatal */
    FS_OUT_OF_BUFFERS              =  -35,    /* Fatal */
    FS_FILE_EXISTS                 =  -36,    /* User or Normal */
    FS_LONG_FILE_POS               =  -37,    /* User : FS_Seek new pos over sizeof int */
    FS_FILE_TOO_LARGE              =  -38,    /* User: filesize + pos over sizeof int */
    FS_BAD_DIR_ENTRY               =  -39,    /* Fatal */
    FS_ATTR_CONFLICT               =  -40,    /* User: Can't specify FS_PROTECTION_MODE and FS_NONBLOCK_MOD */
    FS_CHECKDISK_RETRY             =  -41,    /* System: don't care */
    FS_LACK_OF_PROTECTION_SPACE    =  -42,    /* Fatal: Device crash */
    FS_SYSTEM_CRASH                =  -43,    /* Normal */
    FS_FAIL_GET_MEM                =  -44,    /* Normal */
    FS_READ_ONLY_ERROR             =  -45,    /* User or Normal */
    FS_DEVICE_BUSY                 =  -46,    /* Normal */
    FS_ABORTED_ERROR               =  -47,    /* Normal */
    FS_QUOTA_OVER_DISK_SPACE       =  -48,    /* Normal: Configuration Mistake */
    FS_PATH_OVER_LEN_ERROR         =  -49,    /* Normal */
    FS_APP_QUOTA_FULL              =  -50,    /* Normal */
    FS_VF_MAP_ERROR                =  -51,    /* User or Normal */
    FS_DEVICE_EXPORTED_ERROR       =  -52,    /* User or Normal */
    FS_DISK_FRAGMENT               =  -53,    /* Normal */
    FS_DIRCACHE_EXPIRED            =  -54,    /* Normal */
    FS_QUOTA_USAGE_WARNING         =  -55,    /* Normal or Fatal: System Drive Free Space Not Enought */
    FS_ERR_DIRDATA_LOCKED          =  -56,    /* Normal */
    FS_INVALID_OPERATION           =  -57,    /* Normal */
    FS_ERR_VF_PARENT_CLOSED        =  -58,    /* Virtual file's parent is closed */
    FS_ERR_UNSUPPORTED_SERVICE     =  -59,    /* The specified FS service is closed in this project. */

    FS_ERR_INVALID_JOB_ID          =  -81,
    FS_ERR_ASYNC_JOB_NOT_FOUND     =  -82,

    FS_MSDC_MOUNT_ERROR            = -100,    /* Normal */
    FS_MSDC_READ_SECTOR_ERROR      = -101,    /* Normal */
    FS_MSDC_WRITE_SECTOR_ERROR     = -102,    /* Normal */
    FS_MSDC_DISCARD_SECTOR_ERROR   = -103,    /* Normal */
    FS_MSDC_PRESNET_NOT_READY      = -104,    /* System */
    FS_MSDC_NOT_PRESENT            = -105,    /* Normal */

    FS_EXTERNAL_DEVICE_NOT_PRESENT = -106,    /* Normal */
    FS_HIGH_LEVEL_FORMAT_ERROR     = -107,    /* Normal */

    FS_CARD_BATCHCOUNT_NOT_PRESENT = -110,    /* Normal */

    FS_FLASH_MOUNT_ERROR           = -120,    /* Normal */
    FS_FLASH_ERASE_BUSY            = -121,    /* Normal: only for nonblock mode */
    FS_NAND_DEVICE_NOT_SUPPORTED   = -122,    /* Normal: Configuration Mistake */
    FS_FLASH_OTP_UNKNOWERR         = -123,    /* User or Normal */
    FS_FLASH_OTP_OVERSCOPE         = -124,    /* User or Normal */
    FS_FLASH_OTP_WRITEFAIL         = -125,    /* User or Normal */
    FS_FDM_VERSION_MISMATCH        = -126,    /* System */
    FS_FLASH_OTP_LOCK_ALREADY      = -127,    /* User or Normal */
    FS_FDM_FORMAT_ERROR            = -128,    /* The format of the disk content is not correct */

    FS_FDM_USER_DRIVE_BROKEN       = -129,    /*User drive unrecoverable broken*/
    FS_FDM_SYS_DRIVE_BROKEN        = -130,    /*System drive unrecoverable broken*/
    FS_FDM_MULTIPLE_BROKEN         = -131,    /*multiple unrecoverable broken*/

    FS_LOCK_MUTEX_FAIL             = -141,    /* System: don't care */
    FS_NO_NONBLOCKMODE             = -142,    /* User: try to call nonblock mode other than NOR flash */
    FS_NO_PROTECTIONMODE           = -143,    /* User: try to call protection mode other than NOR flash */

    /*
     * If disk size exceeds FS_MAX_DISK_SIZE (unit is KB, defined in makefile),
     * FS_TestMSDC(), FS_GetDevStatus(FS_MOUNT_STATE_ENUM) and all access behaviors will
     * get this error code.
     */
    FS_DISK_SIZE_TOO_LARGE         = (FS_MSDC_MOUNT_ERROR),     /*Normal*/

    FS_MINIMUM_ERROR_CODE          = -65536 /* 0xFFFF0000 */
} fs_error_enum;

/*---------------------------------------------------------------------------
 * Definitions
 *---------------------------------------------------------------------------*/

//-- Type definitions
typedef unsigned short  WORD;
typedef unsigned char   BYTE;

#ifndef KAL_ON_THREADX
typedef unsigned int    UINT;
#endif

typedef void*           HANDLE;
typedef int             FS_HANDLE;

typedef kal_int16       fs_job_id;

//-- Attributes of files or folders
/* The entry is read only. Any attempt to open it with read/write access will return error "access denied". */
#define FS_ATTR_READ_ONLY        0x01

/* The entry is marked as hidden. This attribute has no effect on any FS function. */
#define FS_ATTR_HIDDEN           0x02

/* The entry is marked as being a system file. If a file in system drive brings this flag, file system will fix it if its size is abnormal instead of deleting it (default behavior). */
#define FS_ATTR_SYSTEM           0x04

/* The entry is a volume label. Only a directory entry on a logical drive in the root directory can have this attribute set. */
#define FS_ATTR_VOLUME           0x08

/* The entry is a directory. */
#define FS_ATTR_DIR              0x10

/* The entry is marked as being backed up. This attribute has no effect on any FS function, but it is set on every write operation. */
#define FS_ATTR_ARCHIVE          0x20

/* The entry is a long file name entry */
#define FS_LONGNAME_ATTR         0x0F

//-- Buffer (internal)
#define FS_BUFFER_SIZE           512

//-- Attributes of devices

//---- Device type (customized)
#define FS_DEVICE_REMOVABLE      0x0008     // removable device (e.g., memory card)
#define FS_DEVICE_EMMC           0x0010     // EMMC device
#define FS_DEVICE_RAM            0x0020     // RAM device (e.g., RAM disk)
#define FS_DEVICE_NOR_FLASH      0x0040     // NOR flash device
#define FS_DEVICE_NAND_FLASH     0x0080     // NAND flash device
#define FS_DEVICE_EXTERNAL       0x0800     // External device (e.g., OTG device)
#define FS_DEVICE_SIMPLUS        0x1000     // SIMPlus device
#define FS_DEVICE_MEMORY_STICK   0x4000     // Memory stick device

//---- Device characteristics (customized)
#define FS_DEVICE_WRITE_PROTECT  0x0100     // device is write-protected
#define FS_DEVICE_NO_EXPORT      0x0200     // device is not allowed to be exported
#define FS_DEVICE_AUTO_FORMAT    0x2000     // FS auto-format is supported on this device

//---- Flag for FS_DeviceData.Reserved (internal)
#define FS_DEVICE_ABORT_COUNT_FREE_CLUSTER  0x20    // In certain scenario, abort current BatchCountFreeCluster(). E.g., The device is exporting
#define FS_DEVICE_COUNT_FREE_CLUSTER    0x40    // let MountLogicalDrive count free space when leaving Mass Storage mode or hot-plug-in
#define FS_DEVICE_ENTER_CRITICAL_ERROR  0x80

//-- Drive letters
#define FS_DRV_SYSTEM_DRIVE      ('Z')  // [ram disk]
#define FS_DRV_RAM_DRIVE         ('Y')

//-- FS_Open flags
/* The file is opened for read and write access. */
#define FS_READ_WRITE           0x00000000L

/* The file is opened for read only access. */
#define FS_READ_ONLY            0x00000100L

/*
 * Opening the file multiple times should not generate an "access denied" error.
 * By default, FS will allow the same file to be opened several times only if all instances of the file are opened with
 * read only access.
 * However, if one or more instances also require write access and all instances specify this flag, the call succeeds.
 * Note that a drive file or device file spans one or more logical drives and thus conflicts with any other file on
 * the respective drive or device.
 */
#define FS_OPEN_SHARED          0x00000200L

/* Do not open directories. Use this flag to avoid accidentally opening directories. */
#define FS_OPEN_NO_DIR          0x00000400L

/*
 * Overrides flag FS_OPEN_NO_DIR and forces support for opening a directory.
 * <color red>Directories can only be opened with read only access.</color>
 */
#define FS_OPEN_DIR             0x00000800L
#define FS_CREATE               0x00010000L
#define FS_CREATE_ALWAYS        0x00020000L

/*
 * Specifies that all updates to the file should be written to the physical device immediately.
 * This includes the directory entry for the file as well as the drive's FAT when the file's size changes.
 * Use this flag with care, since the performance penalty can be severe.
 * By default, FS will flush data buffers when the file pointer leaves a sector and it will flush FAT
 * and directory data when the file is closed.
 */
#define FS_COMMITTED            0x01000000L

/*
 * Instructs FS not to discard data buffers for this file.
 * This option is useful during random access where small blocks are read with frequent interleaving seek operations.
 * In this case, FS's internal buffers will serve as a cache for the file.
 * By default, FS assumes that files are read or written sequentially and will therefore discard data buffers when
 * the file pointer leaves a sector. In this way, it is avoided that data sectors displace FAT and directory data in
 * the buffers.
 */
#define FS_CACHE_DATA           0x02000000L

/*
 * Instructs FS not to flush dirty (modified) data buffers when the file pointer leaves a sector.
 * This flag automatically also sets FS_CACHE_DATA. This flag can improve performance when the same data is written
 * several times, since data which would get overwritten will never actually be written to the disk.
 * Such unflushed (lazy) data buffers will be flushed when the file is closed, or when the last file on the same
 * drive is closed on drives with device option FS_DEVICE_LAZY_WRITE.
 */
#define FS_LAZY_DATA            0x04000000L

/*
 * Causes FS_Write and FS_Read unblocked while the driver indicates device busy or obtain Mutex fails.
 * <color red><b>Notes</b></color>: Only valid for those driver with NonBlockWriteSectors interface.
 */
#define FS_NONBLOCK_MODE        0x10000000L
/*
 * Make sure each modification on NOR flash will be atomic, i.e. even if abnormal power off, data should be entirely old or new.
 * <color red><b>Notes</b></color>: Only valid for those driver with RecoverableWriteSectors and ResumeSectorStates interface.
 */
#define FS_PROTECTION_MODE      0x20000000L
#define FS_NOBUSY_CHECK_MODE    0x40000000L

//-- FS_GetDrive parameter options
#define FS_NO_ALT_DRIVE         0x00000001
#define FS_ONLY_ALT_SERIAL      0x00000002
#define FS_DRIVE_I_SYSTEM       0x00000004      // system drive (invisible)
#define FS_DRIVE_I_RAM          0x00000080      // RAM drive (invisible)
#define FS_DRIVE_V_NORMAL       0x00000008      // non-removable drive (visible)
#define FS_DRIVE_V_REMOVABLE    0x00000010      // removable drive (visible)
#define FS_DRIVE_V_EXTERNAL     0x00000020      // external drive (visible)
#define FS_DRIVE_V_SIMPLUS      0x00000040      // SIM plus drive (visible)

//-- FS_GeneralFormat parameter options
#define FS_FORMAT_HIGH          0x00000001
#define FS_FORMAT_LOW           0x00000002

#define FS_FMT_SINGLE_FAT       0x00000100L
#define FS_FMT_FORCE_LOW_LEVEL  0x00000200L
#define FS_FMT_NO_LOW_LEVEL     0x00000400L
#define FS_FMT_GET_DATA_SECTOR  0x00000800L
#define FS_FMT_FAT_12           0x00001000L
#define FS_FMT_FAT_16           0x00002000L
#define FS_FMT_FAT_32           0x00004000L
#define FS_FMT_NO_FAT_32        0x00008000L

#define FS_FLASH_NO_HIGH_FMT     0x20000000L
#define FS_FLASH_NO_LOW_FMT      0x40000000L

//-- FS_Move, FS_Count, FS_GetFolderSize, FS_XDelete, FS_XFindReset (Sorting) Parameter and Flag Passing
#define FS_MOVE_COPY             0x00000001     // FS_Move only, Public
#define FS_MOVE_KILL             0x00000002     // FS_Move only, Public

#define FS_FILE_TYPE             0x00000004     // Recursive Type API Common, Public
#define FS_DIR_TYPE              0x00000008     // Recursive Type API Common, Public
#define FS_RECURSIVE_TYPE        0x00000010     // Recursive Type API Common, Public

#define FS_NO_SORT               0x00000020     // Sort Parameter, Public
#define FS_SORT_NAME             0x00000040     // Sort Parameter, Public
#define FS_SORT_SIZE             0x00000080     // Sort Parameter, Public
#define FS_SORT_ATTR             0x00000100     // Sort Parameter, Public
#define FS_SORT_TYPE             0x00000200     // Sort Parameter, Public
#define FS_SORT_TIME             0x00000400     // Sort Parameter, Public
#define FS_SORT_USER             0x00080000     // Sort Parameter, User

#define FS_COUNT_SIZE            0x00000800     // QM internal for RecFolderAction (DEPARTED)
#define FS_REMOVE_CHECK          0x00001000     // QM internal for RecFolderAction (DEPARTED)
#define FS_FILTER_SYSTEM_ATTR    0x00002000     // FS_Count only, Public
#define FS_REC_COPYRIGHT_DEL     0x00004000     // FS_SweepCopyrightFile only, <Private, APP SHOULD NOT USE>
#define FS_REC_COPYRIGHT_LIST    0x00008000     // FS_GetCopyrightList only, <Private, APP SHOULD NOT USE>
#define FS_MOVE_OVERWRITE        0x00010000     // FS_Move only, Public
#define FS_XDEL_ABORT_WATCH      0x00020000     // FS_XDelete only, <Private, APP SHOULD NOT USE>
#define FS_FILTER_HIDDEN_ATTR    0x00040000     // FS_Count only, Public

//-- FSSetTrace Parameter
#define FS_TRACE_API             0x00000001
#define FS_TRACE_ERROR           0x00000002
#define FS_TRACE_DISABLE         0x00000004
#define FS_TRACE_ALL_TASK        0x00000008

//-- Quota Management
#define FS_QMAX_NO_LIMIT         0xf1f2f3f4 //~3.8GB
#define FS_COUNT_IN_BYTE         0x00000001
#define FS_COUNT_IN_CLUSTER      0x00000002

//-- FS_Abort Parameter
#define FS_ABORT_CHECK_DRIVE     0x12345678
#define FS_ABORT_XDELETE         0x87654321
#define FS_ABORT_MOVE            0xFEDCBA09

//-- FS_ConfigExtDevice Parameter
#define FS_SETUP_EXT_DEVICE      0x02468ACE
#define FS_RELEASE_EXT_DEVICE    0x13579BDF

//-- FS_SwitchDriveMode Parameter
/* Set the device of the drive to read only mode. Before the mode switching, all opened files on this device will be closed and all cached data will be flushed to the device. */
#define FS_DRIVE_SOFT_UNMOUNT    0x00000001

/* set the soft-unmounted device to normal mode. This mode can be only used after the device was set to read only mode. */
#define FS_DRIVE_SOFT_MOUNT      0x00000002

//-- FS_CompactDir Parameter

/* Obsolete: compact without update direntry */
#define FS_CMPCT_READ_ONLY       0x00000001

/* Compact recursively */
#define FS_CMPCT_RECURSIVE       0x00000002

//-- Path and file name length limitation
#if defined(__FS_PATH_LENGTH_LIMITED__)
#define FS_MAX_PATH              64     // Max path length in FAT spec (for ultra-low cost projects)
#define FS_MAX_FILE_NAME_LENGTH (64 - (3 * 2) + 2) // The maximum file name length (minus "X:\\" and plus tailed NULL)
#else
#define FS_MAX_PATH              520    // Max path length in FAT spec (for general projects)
#define FS_MAX_FILE_NAME_LENGTH ((255 + 1) * 2) // The maximum file name length (defined in FAT spec)
#endif

#define FS_MAX_SFN_NATIVE_FILE_NAME_LENGTH_B    (8 + 3 + 1) // "MAJOR_NAMR"."EXTENSION_NAME"
#define FS_MAX_SFN_NATIVE_FILE_NAME_LENGTH_W    (FS_MAX_SFN_NATIVE_FILE_NAME_LENGTH_B * 2)

//-- Size unit
#define FS_KB                   *1024
#define FS_MB                   *1024*1024

//-- Flag option of FS_SetSeekHintEx
#define FS_SEEKHINT_FLAG_INITIALIZE_HINT  (0x00000001)

//-- Sorting
#define FS_SORT_CB_SUCCESS      0
#define FS_SORT_CB_ABORT        (-1)

//-- FS_GetSysInfo options
#define FS_SI_BASIC_INFO        (0x00000001)
#define FS_SI_ALL               (FS_SI_BASIC_INFO)

//-- FS Asynchronous Interface
#define FS_TASK_PRIORITY_CHANGE_DEFAULT     (0x00000000)
#define FS_TASK_PRIORITY_CHANGE_ENFORCE_LOW (0x00000001)

//-- Virtual file
#define FS_GenVFN_SIZE          92 // buffer size for Virtual File (include NULL tail) (MoDIS only)

/*---------------------------------------------------------------------------
 * Enumerations
 *---------------------------------------------------------------------------*/

//-- FS_DirCtrl
typedef enum
{
    FS_DIRCTRL_DATA_SET             = 0x00000001L,
    FS_DIRCTRL_DATA_GET             = 0x00000002L,
    FS_DIRCTRL_DATA_EXPIRE          = 0x00000004L,
    FS_DIRCTRL_DATA_LOCK            = 0x00000010L,
    FS_DIRCTRL_DATA_UNLOCK          = 0x00000020L,
    FS_DIRCTRL_DATA_SET_LOCK        = (FS_DIRCTRL_DATA_SET | FS_DIRCTRL_DATA_LOCK),
    FS_DIRCTRL_DATA_GET_LOCK        = (FS_DIRCTRL_DATA_GET | FS_DIRCTRL_DATA_LOCK),
    FS_DIRCTRL_DATA_GET_UNLOCK      = (FS_DIRCTRL_DATA_GET | FS_DIRCTRL_DATA_UNLOCK),
    FS_DIRCTRL_DATA_EXPIRE_UNLOCK   = (FS_DIRCTRL_DATA_EXPIRE | FS_DIRCTRL_DATA_UNLOCK)
} fs_dirctrl_action_enum;

/* FS_GetDiskInfo Parameter */
typedef enum
{
    /*
     * Returns all fields in structure FS_DiskInfo except FreeClusters, BadClusters, Files, FileChains, FreeChains, LargestFreeChain.
     * <color Red><b>This flag never requires a FAT scan.</b></color>
     */
    FS_DI_BASIC_INFO     =  0x00000001L,

    /*
     * Returns field FreeClusters. This flags may require FS to scan the complete FAT if the amount of free space is not known.
     * In this case, FS_DI_FAT_STATISTICS is returned in addition to FS_DI_FREE_SPACE.
     */
    FS_DI_FREE_SPACE     =  0x00000002L,

    /*
     * Returns fields BadClusters, Files, FileChains, FreeChains, LargestFreeChain.
     * This flag will always cause FS to scan the complete FAT.
     */
    FS_DI_FAT_STATISTICS =  0x00000004L,

    /*
     * Get volume label of the target drive. The maximum length is 11 wide characters.
     * <color Red><b>This option must be used with FS_DI_BASIC_INFO.</b></color>
     */
    FS_DI_VOLUME_LABEL   =  0x00000008L,

    /*
     * Allow read-only file operation (open and read) during long operation like "counting free space"
     */
    FS_DI_OPT_READ_PERMITTED = 0x00000010L,

    FS_DI_INVALID
}fs_di_enum;

typedef enum
{
    FS_CONFIG_UTILITY_FUNC  = 0x00000001L,

    FS_CONFIG_INVALID
} fs_config_enum;

/* FS_GetFileInfo/FS_GetFileInfoEx Parameter */
typedef enum
{
    /* Get *DirEntry, FilePos, VolumeSerialNumber and *FullName. */
    FS_FI_BASIC_INFO        = 0x00000001L,

    /* Get AllocatedSize and ClusterChains.*/
    /* Note: This option may cost lots of time because target file?s cluster chain will be completely parsed. */
    FS_FI_ALLOCATED_SPACE   = 0x00000002L,

    /* Combination of FS_FI_BASIC_INFO and FS_FI_ALLOCATED_SIZE flags. The results is the same as FS_GetFileInfo() */
    FS_FI_ALL               = (FS_FI_BASIC_INFO | FS_FI_ALLOCATED_SPACE)
} fs_fi_enum;

typedef enum
{
    FS_TBL_USR_PTR_NONE,

    FS_TBL_USR_PTR_MILESTONE,
    FS_TBL_USR_PTR_LISTCONTEXT,
    FS_TBL_USR_PTR_FINDATTR,

    FS_TBL_USR_PTR_INVALID

}fs_tbl_usr_ptr_type;

typedef enum
{
    FS_FH_INVALID,
    FS_FH_VALID,
    FS_FH_MEDIACHANGED,
    FS_FH_ABORTED,
    FS_FH_EXPORTED
} fs_fh_status;

typedef enum
{
    FS_NO_WAIT,
    FS_INFINITE
} FS_TIMEOUT_ENUM;

/* FS_Seek Parameter */
typedef enum
{
    FS_FILE_BEGIN,
    FS_FILE_CURRENT,
    FS_FILE_END
} FS_SEEK_POS_ENUM;

/* FS_GeneralFormat Callback Return Value */
typedef enum
{
    FS_FMT_PGS_DONE = -1,
    FS_FMT_PGS_FAIL,
    FS_FMT_PGS_LOW_FMT,
    FS_FMT_PGS_HIGH_FMT
} fs_format_pgs_enum;

/* FS_Move Callback Return Value */
typedef enum
{
   /* <color red>if something wrong, will call once</color>
    * Fail to do the move/copy action. Total and Completed will be zero.
    */
    FS_MOVE_PGS_FAIL = -1,

    /*
     * <color red>Always call once</color>
     * Prepare to do the move/copy action. Parameter checking and remove target will be done at this stage.
     * Total and Completed will be zero.
     */
    FS_MOVE_PGS_PREPARE,

   /*
    * <color red>If pass parameter checking, always call once.</color>
    * Start to do the move/copy action. Total and Completed will be zero.
    */
    FS_MOVE_PGS_START,

   /*
    * <color red>Not always call even if nothing wrong.</color>
    * If you move/copy a folder recursively, Total will be the number of files/folders to be moved/copied.
    * Completed will be the files/folders that had been copied/moved.
    * If you just move/copy a file, Total will be the size of this file and Completed will be the bytes that had been moved/copied.
    * <color red>Note</color> that if move/copy only one file, this callback will be triggered when interval is longer than 100ms around.
    */
    FS_MOVE_PGS_ING,

   /*
    * <color redIf nothing fail, always call once</color>
    * Move/copy action is done. Total and Completed will be zero.
    */
    FS_MOVE_PGS_DONE
} fs_move_pgs_enum;

typedef fs_move_pgs_enum FS_MOVE_PGS_ENUM;

//FS_XDelete Callback Return Value
typedef enum
{
    FS_XDELETE_PGS_FAIL = -1,
    FS_XDELETE_PGS_PREPARE,
    FS_XDELETE_PGS_START,
    FS_XDELETE_PGS_ING,
    FS_XDELETE_PGS_DONE
} FS_XDELETE_PGS_ENUM;

//FS_DeleteEx Callback Return Value
typedef enum
{
    FS_DELETE_PGS_FAIL = -1,
    FS_DELETE_PGS_PREPARE,
    FS_DELETE_PGS_START,
    FS_DELETE_PGS_ING,
    FS_DELETE_PGS_DONE
} FS_DELETE_PGS_ENUM;

//Find Series Return Value
typedef enum
{
    FS_NOT_MATCH,
    FS_LFN_MATCH,
    FS_SFN_MATCH
} FS_FIND_ENUM;

//FS_GetDevType Return Value
//FS_GetDevStatus Paramter, Cannot overlap with 'A'~'Z' 0x41~0x5f
typedef enum
{
    FS_DEVICE_TYPE_UNKNOWN  = 0,
    FS_DEVICE_TYPE_NOR      = 1,
    FS_DEVICE_TYPE_NAND,
    FS_DEVICE_TYPE_CARD,
    FS_DEVICE_TYPE_EXTERNAL,
    FS_DEVICE_TYPE_SIMPLUS,
    FS_DEVICE_TYPE_EMMC,
    FS_DEVICE_TYPE_MAX_VALUE
} FS_DEVICE_TYPE_ENUM;

//FS_XFindStart, FS_FindFirstN, FS_FindNextN Parameter
typedef enum
{
    FS_FIND_DEFAULT,
    FS_FIND_LFN_TRUNC
} FS_GET_NAME_ENUM;

//Quota management
typedef enum
{
    FS_QP_HIG_ENUM,
    FS_QP_MID_ENUM,
    FS_QP_LOW_ENUM,
    FS_QP_DEL_ENUM
} FS_QP_ENUM;

/* FS_GetDevStatus Parameter */
typedef enum
{
    FS_MOUNT_STATE_ENUM,             /* Query of mount state */
    FS_FEATURE_STATE_ENUM,           /* Working or not  */
    FS_EXPORT_STATE_ENUM,            /* Exported to PC or not */
    FS_CARD_BATCHCOUNT_STATE_ENUM,   /* Obsolete: Free cluster numer is ready or not */
    FS_DEVICE_PRESENCE_ENUM          /* Device exists or not */
} FS_GET_DEV_STATUS_ENUM;

/* FS_LockFAT Parameter */
typedef enum
{
    FS_LOCK_USB_ENUM,            /* lock file system for preventing access in USB mode. */
    FS_UNLOCK_USB_ENUM,          /* unlock file system for permitting access in USB mode. */
    FS_LOCK_BLOCK_ENUM,          /* configure file system to do blocking write operations on Single Bank NOR Flash. */
    FS_LOCK_NONBLOCK_ENUM,       /* configure file system to do non-blocking write operations on Single Bank NOR Flash. */
    FS_EXPORT_ENUM,              /* lock partial file system for preventing access on exporting device in Normal mode. */
    FS_PURGE_HANDLE_ENUM,        /* purge (invalidate) all file handles which are not belongs to system drive. When public drive and system drive on the same device, there may be some file handle created concurrency during (A) FS_EXPORT_ENUM to (B) FS_Open(WholePublicDrive). Purge Handle is required to help USB task to clear intruded file handles. */
    FS_REMOUNT_ENUM,             /* unlock partial file system for permitting access on exported device in Normal mode. */
#if defined(__MTP_ENABLE__)
    FS_TASK_EXPORT_ENUM,         /* */
    FS_TASK_PURGE_HANDLE_ENUM,   /* */
    FS_TASK_REMOUNT_ENUM,        /* */
#endif /* __MTP_ENABLE__ */
    FS_CARD_BUSY_NONBLOCK_ENUM,  /* Notify file system do not block FS APIs if card is busy */
    FS_EXPORT_FINISHED_ENUM      /* Notify file system that FS_Open(WholePublicDrive) is done. This is required after (A) FS_EXPORT_ENUM and (B) FS_PURGE_HANDLE_ENUM. */
} FS_LOCK_TYPE_ENUM;

typedef enum
{
    FS_NOT_EXPORTED = 0,
    FS_EXPORTING,
    FS_EXPORTED
} FS_LOCK_EXPORT_STATUS_ENUM;

//FS_CountUsedFH Parameter
typedef enum
{
    FS_FH_COUNT_CURRENT_TASK = 0,
    FS_FH_COUNT_AVAILABLE,
    FS_FH_COUNT_USED,
    FS_FH_COUNT_CONFIGURED
} FS_COUNT_USED_FH_ENUM;

// IO control
typedef enum
{
    FS_IOCTRL_DEVICE_UNKNOWN,
    FS_IOCTRL_DEVICE_CAS_CARD // CMMB CAS full card
} FS_IOCTRL_DEVICE_TYPE_ENUM;

/* IO control action */
typedef enum {
    /* To query device type */
    FS_IOCTRL_QUERY_DEVICE_TYPE,

    /*
     * Query NAND flash device?s physical information,
     * like device ID, block size, page size or device
     * size. For this usage, user must allocate a FS_DeviceInfo
     * structure in advance and pass its pointer by CtrlData
     * for device drivers to fill in the information.
     */
    FS_IOCTRL_QUERY_NAND_INFO,

    /*
     * Query NOR flash device?s physical information.
     */
    FS_IOCTRL_QUERY_NOR_INFO,

    /*
     * Query memory card's physical information.
     */
    FS_IOCTRL_QUERY_CARD_INFO,

    /* Query physical map of a specific file. It's for for Low-Power MP3 */
    FS_IOCTRL_QUERY_PHYSICAL_MAP,

    /* Query physical map of a specific file. It's for for Low-Power MP3 */
    FS_IOCTRL_QUERY_PHYSICAL_MAP_DEV_TYPE_ONLY,

    /*
     * Set the command sector number. Some memory card, like CAS full card,
     * requires a sector as the command sector for host to issue CAS commands.
     * For this usage, CtrlData is ignored and can be NULL.
     */
    FS_IOCTRL_SET_COMMAND_SECTOR,

    /* Control device power. User could switch on/off device power via this action. */
    FS_IOCTRL_CONTROL_DEV_POWER,
} fs_ioctrl_action_enum;

//FDM OTPAccess Parameter
typedef enum
{
    FS_OTP_READ = 1,
    FS_OTP_WRITE,
    FS_OTP_LOCK
} FS_OTPACCESS_TYPE_ENUM;

/* FS_Sort Callback Return Value */
typedef enum
{
    FS_SORT_PGS_FAIL = -1,   /* sorting failed. */
    FS_SORT_PGS_PREPARE,     /* Prepare to sort files. */
    FS_SORT_PGS_START,       /* Start to sort files. */
    FS_SORT_PGS_ING,         /* The sorting is in progress. */
    FS_SORT_PGS_DONE,        /* The sorting finished. */
    FS_SORT_PGS_ABORT        /* The sorting is aborted. */
} fs_sort_pgs_enum;

typedef fs_sort_pgs_enum FS_SORT_PGS_ENUM;

typedef enum
{
    FS_PGS_FAIL = -1,
    FS_PGS_PREPARE,
    FS_PGS_START,
    FS_PGS_ING,
    FS_PGS_DONE,
    FS_PGS_ABORT,

    FS_PGS_MAX
} fs_pgs_enum;

// FS API enumeration
typedef enum
{
    FS_API_OPEN      = 1,        // FS_Open
    FS_API_OPENHINT,
    FS_API_CLOSE,
    FS_API_CLOSEALL,
    FS_API_READ,                 // FS_Read
    FS_API_WRITE,                // FS_Write
    FS_API_SETSEEKHINT,
    FS_API_SEEK,                 // FS_Seek (FS_SeekLargeFile)
    FS_API_COMMIT,
    FS_API_RELEASEFH,
    FS_API_ABORT,
    FS_API_PARSEFH,
    FS_API_GETFILEINFO,
    FS_API_GETFILESIZE,
    FS_API_GETFILEPOSITION,
    FS_API_SETFILETIME,
    FS_API_GETATTRIBUTES,
    FS_API_GETFIRSTCLUSTER,
    FS_API_SETATTRIBUTES,
    FS_API_DELETE,
    FS_API_PSEUDOMERGE,
    FS_API_CHECKFILE,
    FS_API_GETCURRENTDIR,
    FS_API_SETCURRENTDIR,
    FS_API_CREATEDIR,
    FS_API_REMOVEDIR,
    FS_API_GETFOLDERSIZE,        // FS_GetFolderSize (FS_GetFolderSizeEx)
    FS_API_EXTEND,
    FS_API_TRUNCATE,
    FS_API_MAKEFILENAME,
    FS_API_RENAME,
    FS_API_MOVE,
    FS_API_COUNT,
    FS_API_XDELETE,
    FS_API_FINDFIRST,            // FS_FindFirst
    FS_API_FINDNEXT,
    FS_API_FINDFIRSTN,           // FS_FindFirstN
    FS_API_FINDNEXTN,
    FS_API_FINDCLOSE,
    FS_API_XFINDRESET,
    FS_API_XFINDSTART,
    FS_API_XFINDCLOSE,
    FS_API_CREATEBOOTSECTOR,
    FS_API_GETPARTITIONINFO,
    FS_API_COMMITALL,
    FS_API_GETDRIVE,
    FS_API_MAPPINGDRIVE,
    FS_API_GENERALFORMAT,
    FS_API_QMGETFREE,
    FS_API_GETCLUSTERSIZE,
    FS_API_CHECKDRIVE,
    FS_API_CREATEMASTERBOOTRECORD,
    FS_API_SPLITPARTITION,
    FS_API_GETDISKINFO,
    FS_API_SHUTDOWN,
    FS_API_UNLOCKALL,
    FS_API_SANITYCHECK,
    FS_API_SETDISKFLAG,
    FS_API_CHECKDISKFLAG,
    FS_API_CLEARDISKFLAG,
    FS_API_GETDEVTYPE,
    FS_API_GETDEVSTATUS,
    FS_API_LOCKFAT,
    FS_API_TESTMSDC,
    FS_API_CLOSEMSDC,
    FS_API_SETTRACE,
    FS_API_DUMPFHTABLE,
    FS_API_GENVIRTUALFILENAME,
    FS_API_CONFIGEXTDEVICE,
    FS_API_GETDIRCACHE,
    FS_API_SETDIRCACHE,
    FS_API_EXPIREDIRCACHE,
    FS_API_OTPREAD,
    FS_API_OTPWRITE,
    FS_API_OTPLOCK,
    FS_API_OTPQUERYLENGTH,
    FS_API_SWEEPDEVICE,
    FS_API_COUNTUSEDFH,
    FS_API_GETDEVPARTITIONS,
    FS_API_RECOVERDEVICE,
    FS_API_SETVOLUMELABEL,
    FS_API_SWITCHDRIVEMODE,
    FS_API_IOCTRL,
    FS_API_COMPACTDIR,
    FS_API_END
} fs_api_enum;

// Priority configuration of FS async job: (Deprecated)
typedef enum
{
    FS_PRIORITY_DEFAULT         = 0,        // Default: This job will use lower priority to run. Suitable to non-critical jobs.
    FS_PRIORITY_INHERITED       = 1,        // Inherited    : This job will inherites the priority of user. Suitable to critical jobs.
    FS_PRIORITY_ASSIGN          = 2,        // Assign       : This job will use a specific priority to run. Set priority value in overlapped->priority_value.
    FS_PRIORITY_INVALID         = 0xFF
} fs_prioity_enum;

// Response method when asynchronous job is done.
typedef enum
{
    FS_RESPONSE_MESSAGE   = 0,     // (Default): Sending ILM when job done, the user have to use fs_async_msg_handler() to execute the callback function.
    FS_RESPONSE_CALLBACK  = 1,     // Calling Call Back Function directedly without sending ILM, DO NOT call fs_async_msg_handler() when using this flag.
    FS_RESPONSE_INVALID   = 0xFF
} fs_response_enum;

typedef enum
{
    FS_JOB_STATE_NOT_STARTED    = 0,
    FS_JOB_STATE_RUNNING,
    FS_JOB_STATE_PAUSE,
    FS_JOB_STATE_FINISHED,
    FS_JOB_STATE_ABORTING,
    FS_JOB_STATE_INVALID        = 0xFF
} fs_job_state_enum;

/*---------------------------------------------------------------------------
 * Callback functions
 *---------------------------------------------------------------------------*/

/*****************************************************************************
 * <GROUP  CallBackFunctions>
 *
 * FUNCTION
 *  FS_FormatCallback
 * DESCRIPTION
 *  This is the callback function type of FS_GeneralFormat.
 * PARAMETERS
 *  DriveName   : [IN] <P>Drive name
 *  Action      : [IN] <P>Please refer to fs_format_pgs_enu.
 *  Total       : [IN] <P>System total sectors before data sectors
 *  Completed   : [IN] <P>The sectors which had been formatted. <color red>Note:</color> if Action is FS_FMT_PGS_FAIL, Total and Completed will be zero.
 * RETURNS
 *  N/A
 *****************************************************************************/
typedef void (* FS_FormatCallback)(const char * DeviceName, int Action, kal_uint32 Total, kal_uint32 Completed);

/*****************************************************************************
 * <GROUP CallBackFunctions>
 *
 * FUNCTION
 *  FS_ProgressCallback
 * DESCRIPTION
 *  This is the callback function type of FS_GeneralFormat.
 * PARAMETERS
 *  Action      : [IN] <P>Please refer to fs_move_pgs_enum.
 *  Total       : [IN] <P>Total bytes or number of file/folders needs to be moved/copied.
 *  Completed   : [IN] <P>Bytes or number of file/folders that had been moved/copied.
 *  Info        : [IN] <P>In this function, this field will give you a file handle. If you want to abort the action of FS_Move, please call FS_Abort to abort the action via this handle.
 * RETURN VALUES
 *  < 0     : Abort
 *  >= 0    : Continue
 *****************************************************************************/
typedef int FS_ProgressCallback(int Action, kal_uint32 Total, kal_uint32 Completed, kal_uint32 Info);

/*****************************************************************************
 * <GROUP CallBackFunctions>
 *
 * FUNCTION
 *  SortingProgressCallback
 * DESCRIPTION
 *  This is the callback function type during sorting.
 * PARAMETERS
 *  Status        : [IN]    <P>Please refer to fs_sort_pgs_enum.
 *  Total         : [IN]    <P>This field is valid after receiving FS_SORT_PGS_START. It represents the total files and folders that will be sorted.
 *  Completed     : [IN]    <P>This identifies the number of files is sorted.
 *  CallbackParam : [OUT]   <P>The user parameter that is assigned by ProgressCallbackParam.
 * RETURN VALUES
 *  FS_SORT_CB_SUCCESS: Return normally.
 *  FS_SORT_CB_ABORT: This is used to indicate that user wants to abort the sorting operation.
 *****************************************************************************/
typedef int (*SortingProgressCallback)(FS_SORT_PGS_ENUM Status, int Total, kal_uint32 Completed, void *CallbackParam);

/*****************************************************************************
 * <GROUP CallBackFunctions>
 *
 * FUNCTION
 *  SortingCompareFunc
 * DESCRIPTION
 *  This is the customized compare function.
 * PARAMETERS
 *  FileName1   : [IN] <P>This is the first filename that want to be compared to FileName2.
 *  Hint1       : [IN] <P>If Hint1 is not NULL, user can create an kal_uint32 value for FileName1. The sorting procedure will compare the hint value of each filename to speed up the sorting without invoking the CompareFunc. If the hint values of two FileName are the same, CompareFunc will be invoked.
 *  FileName2   : [IN] <P>This is the second filename.
 *  Hint2       : [IN] <P>If Hint2 is not NULL, user can create an kal_uint32 value for FileName2.
 * RETURN VALUES
 *  > 0 :   if FileName1 > FileName2
 *  == 0:  if FileName1 == FileName2
 *  < 0 :    if FileName1 < FileName2
 *****************************************************************************/
typedef int (*SortingCompareFunc)(WCHAR *FileName1, kal_uint32 *Hint1, WCHAR *FileName2, kal_uint32 *Hint2);

/*****************************************************************************
 * <GROUP CallBackFunctions>
 *
 * FUNCTION
 *  fs_progress_callback_func
 * DESCRIPTION
 *  This is the general callback function type.
 * PARAMETERS
 *  status      : [IN]    <P>Please refer to fs_pgs_enum.
 *  total       : [IN]    <P>the total files and folders that will be found.
 *  completed   : [IN]    <P>This identifies how many files are found.
 *  param       : [OUT]   <P>The user data which will pass back to the caller without change.
 * RETURNS
 *  N/A
 *****************************************************************************/
typedef kal_int32 (*fs_progress_callback_func)(FS_HANDLE handle, fs_pgs_enum status, kal_int32 total, kal_uint32 completed, void *param);

// FS async I/F callback function
typedef kal_int32 (*fs_async_callback)(fs_job_id job_id, kal_int64 result, void *data);

typedef kal_int32 (*fs_progress_callback)(kal_int32 action, kal_uint32 total, kal_uint32 completed, kal_uint32 info);

typedef kal_uint16 (*fs_util_ucs_to_wchar_func)(kal_uint16 ucs2);

typedef kal_uint32 (*fs_util_get_default_encoding_length_func)(void);


/*---------------------------------------------------------------------------
 * Structures
 *---------------------------------------------------------------------------*/

//------------------------------------- Compiler Directive Conventions
#if !defined(__MTK_TARGET__) || defined(GEN_FOR_PC) || defined(__RESOURCE_GEN_) || defined(NVRAM_AUTO_GEN)
    #define __fs_packed_prefix
    #define __fs_packed_postfix
    #define __fs_align(x)
#elif defined(__ARMCC_VERSION)
    #define __fs_packed_prefix     __packed
    #define __fs_packed_postfix
    #define __fs_align(x)          __align(x)
#elif defined(__GNUC__)
    #define __fs_packed_prefix
    #define __fs_packed_postfix    __attribute__ ((__packed__))
    #define __fs_align(x)          __attribute__ ((aligned(x)))
#endif
// temporaly avoid build errors
#if defined(__ARMCC_VERSION)
#define ONE_BYTE_ALIGN_ADS __packed
#else
#define ONE_BYTE_ALIGN_ADS
#endif
//------------------------------------- Compiler Directive Conventions

//------------------------------------- Packed Structures
#if defined(WIN32)
#pragma pack(1)
#endif

/* Date/time that the dir entry is created or modified */
typedef __fs_packed_prefix struct
{
    kal_uint32 Second2:5; /* holds the seconds part of the desired time divided by 2. */
    kal_uint32 Minute:6;
    kal_uint32 Hour:5;
    kal_uint32 Day:5;
    kal_uint32 Month:4;
    kal_uint32 Year1980:7; /* holds the year part of the desired date minus 1980. */
} __fs_packed_postfix FS_DOSDateTime;

typedef __fs_packed_prefix struct
{
   char                 FileName[8];
   char                 Extension[3];
   kal_uint8            Attributes;
   kal_uint8            NTReserved;
   kal_uint8            CreateTimeTenthSecond;
   FS_DOSDateTime       CreateDateTime;
   kal_uint16           LastAccessDate;
   kal_uint16           FirstClusterHi;
   FS_DOSDateTime       DateTime ;
   kal_uint16           FirstCluster;
   kal_uint32           FileSize;
   // FS_FileOpenHint members (!Note that RTFDOSDirEntry structure is not changed!)
   kal_uint32           Cluster;
   kal_uint32           Index;
   kal_uint32           Stamp;
   kal_uint32           Drive;
   kal_uint32           SerialNumber;
}__fs_packed_postfix FS_DOSDirEntry;

/* Structure of partition record */
typedef __fs_packed_prefix struct
{
    kal_uint8   BootIndicator, /* 0x80 for bootable, 0 otherwise */
                StartHead,     /* 0 based */
                StartSector,   /* 1 based, bits 0-5 */
                StartTrack,    /* 0 based, bits 0-7, take bits 8,9 from StartSector */
                OSType,        /* FAT-12: 1, FAT-16: 4, 6, 14, FAT-32: 11, 12 */
                EndHead,       /* see StartHead */
                EndSector,     /* see StartSector */
                EndTrack;      /* see StartTrack */

                /*
                 * offset to first sector of partition data
                 * for primary partitions, this is the absolute
                 * LBA of the boot sector
                 */
    kal_uint32  RelativeSector,
                Sectors;       /* number of sectors in partition */
} __fs_packed_postfix FS_PartitionRecord;

typedef __fs_packed_prefix struct
{
    kal_uint8 BootCode[512-4*sizeof(FS_PartitionRecord)-sizeof(kal_uint16)];
    FS_PartitionRecord PTable[4];
    kal_uint16 Signature;
} __fs_packed_postfix FS_MasterBootRecord;

typedef __fs_packed_prefix struct
{
    kal_uint8     PhysicalDiskNumber;
    kal_uint8     CurrentHead;
    kal_uint8     Signature;
    kal_uint32     SerialNumber;
    kal_uint8     Label[11];
    char     SystemID[8];
} __fs_packed_postfix FS_ExtendedBIOSParameter;

typedef __fs_packed_prefix struct
{
    char     OEMName[8];
    kal_uint16     BytesPerSector;
    kal_uint8     SectorsPerCluster;
    kal_uint16     ReservedSectors;
    kal_uint8     NumberOfFATs;
    kal_uint16     DirEntries;
    kal_uint16     SectorsOnDisk;
    kal_uint8     MediaDescriptor;
    kal_uint16     SectorsPerFAT;
    kal_uint16     SectorsPerTrack;
    kal_uint16     NumberOfHeads;
    kal_uint32     NumberOfHiddenSectors;
    kal_uint32     TotalSectors;
    __fs_packed_prefix union
    {
        __fs_packed_prefix struct
        {
            FS_ExtendedBIOSParameter BPB;
        } __fs_packed_postfix _16;
        __fs_packed_prefix struct
        {
            kal_uint32     SectorsPerFAT;
            kal_uint16     Flags;
            kal_uint16     Version;
            kal_uint32     RootDirCluster;
            kal_uint16     FSInfoSector;
            kal_uint16     BackupBootSector;
            kal_uint8     Reserved[12];
            FS_ExtendedBIOSParameter BPB;
        } __fs_packed_postfix _32;
    } __fs_packed_postfix E;
}__fs_packed_postfix FS_BIOSParameter;

typedef __fs_packed_prefix struct
{
    kal_uint8 NearJump[3];
    FS_BIOSParameter BP;
    kal_uint8 BootCode[512-3-sizeof(FS_BIOSParameter)-sizeof(kal_uint16)];
    kal_uint16 Signature;
} __fs_packed_postfix FS_BootRecord;

#if defined(WIN32)
#pragma pack()
#endif
//------------------------------------- Packed Structures

typedef struct
{
    kal_uint32 Cluster;
    kal_uint32 Index;
    kal_uint32 Stamp;
    kal_uint32 Drive;
    kal_uint32 SerialNumber;
} FS_FileOpenHint;

/* Logical location */
typedef struct
{
    kal_uint32 Cluster;
    kal_uint32 Index;
} FS_FileLocationHint;

/* File information */
typedef struct
{
    const FS_DOSDirEntry * DirEntry;
    kal_uint32                  FilePos;
    kal_uint32                  AllocatedSize;
    kal_uint32                  ClusterChains;
    kal_uint32                  VolumeSerialNumber;
    const char           * FullName;
} FS_FileInfo;

/* Disk information */
typedef struct
{
    /* A zero-terminated <color Red><b>Short File Name</b></color> with the volume's label. */
    char            Label[24];

    /* The drive letter in <color Red><b>UPPER</b></color> case. */
    char            DriveLetter;

    /* Indicate the disk is in write protection or not. 1 for protect, 0 for not protect. */
    kal_uint8            WriteProtect;

    /* Reserved fields */
    char            Reserved[2];

    /* The volume's serial number. */
    kal_uint32            SerialNumber;

    /* The LBA address of the logical drive's boot record. For diskettes, this value will be 0. */
    kal_uint32            FirstPhysicalSector;

    /* 2, 16, or 32 for FAT-12, FAT-16, or FAT-32 */
    kal_uint32            FATType;

    /* The number of FATs on the volume. */
    kal_uint32            FATCount;

    /* The number of FATs on the volume. */
    kal_uint32            MaxDirEntries;

    /* The sector size. This value will usually be 512. */
    kal_uint32            BytesPerSector;

    /* Specifies the size of the smallest unit of storage that can be allocated to a file in sectors. */
    kal_uint32            SectorsPerCluster;

    /* Number of clusters for file storage on the volume. */
    kal_uint32            TotalClusters;

    /* The number of clusters, which are marked bad and are unavailable for file storage. */
    kal_uint32            BadClusters;

    /* The number of clusters currently available. */
    kal_uint32            FreeClusters;

    /* The number of files on the volume including directories, but not counting the root directory and files with an allocated file size of 0. */
    kal_uint32            Files;

    /* The number of contiguous cluster chains. On a completely unfragmented volume, this value would be identical to Files. */
    kal_uint32            FileChains;

    /* The number of contiguous cluster chains of free clusters. On a completely unfragmented volume, this value would be 1. */
    kal_uint32            FreeChains;

    /* The maximum allocated file size for a newly allocated contiguous file in clusters. On a completely unfragmented volume, this value would be identical to FreeClusters. */
    kal_uint32            LargestFreeChain;
} FS_DiskInfo;

typedef struct __fsdriver
{
    int  (* MountDevice)    (void * DriveData, int DeviceNumber, int DeviceType, kal_uint32 Flags);
    int  (* ShutDown)       (void * DriveData);
    int  (* ReadSectors)    (void * DriveData, kal_uint32 Sector, kal_uint32 Sectors, void * Buffer);
    int  (* WriteSectors)   (void * DriveData, kal_uint32 Sector, kal_uint32 Sectors, void * Buffer);
    int  (* MediaChanged)   (void * DriveData);
    int  (* DiscardSectors) (void * DriveData, kal_uint32 Sector, kal_uint32 Sectors);
    int  (* GetDiskGeometry)(void * DriveData, FS_PartitionRecord * DiskGeometry, kal_uint8 * MediaDescriptor);
    int  (* LowLevelFormat) (void * DriveData, const char * DeviceName, FS_FormatCallback Progress, kal_uint32 Flags);
    int  (* NonBlockWriteSectors)   (void * DriveData, kal_uint32 Sector, kal_uint32 Sectors, void * Buffer);
    int  (* RecoverableWriteSectors)(void * DriveData, kal_uint32 Sector, kal_uint32 Sectors, void * Buffer);
    int  (* ResumeSectorStates)     (void  * DriveData);
    int  (* HighLevelFormat)(void * DriveData, kal_uint32 BaseSector);
    int  (* RecoverDisk)    (void * DriveData);
    int  (* MessageAck)     (void * DriveData, int AckType);
    int  (* CopySectors)    (void * DriveData, kal_uint32 SrcSector, kal_uint32 DstSector, kal_uint32 Sectors);
    int  (* OTPAccess)      (void * DriveData, int type, kal_uint32 Offset, void * BufferPtr, kal_uint32 Length);
    int  (* OTPQueryLength) (void * DriveData, kal_uint32 *Length);
    int  (* IOCtrl)         (void * DriveData, kal_uint32 CtrlAction, void * CtrlData); // For device IO control
} FS_Driver;

#ifndef MMI_ON_WIN32

typedef struct __fsMutex
{
    kal_semid   mt_sem;
    kal_taskid	mt_sem_owner;
    kal_uint32	mt_lock_count;
    int         DeviceNum_1;
    int         DeviceNum_2;
} FS_Mutex;

#else   // MMI_ON_WIN32

typedef kal_uint32 FS_Mutex;

#endif  // !MMI_ON_WIN32

struct __fsDrive;
struct __fsBuffer;

typedef struct __fsDeviceData
{
    FS_Mutex            * Lock;
    struct __fsDrive    * FirstDrive;
    kal_uint8           MediaPresent;
    kal_uint8           MediaRemovedReported;
    kal_uint8           Reserved;
    kal_uint8           MountState;
    int                 SectorSize;
    FS_PartitionRecord  Geometry;
    kal_uint32          SectorShift;
    kal_uint32          AccessCount;
    struct __fsBuffer   * B;
    struct __fsBuffer   * AltBuffer;
    int                 ErrorCondition;
    int                 PhysicalDiskIndex;
    char                FriendlyName[6];
    kal_uint8           MaxSectorPerBuffer;
    kal_uint8           MediaDescriptor;
} FS_DeviceData;

typedef struct __fsDevice
{
    int                 DeviceType;
    int                 DeviceNumber;
    kal_uint32          DeviceFlags;
    FS_Driver           * Driver;
    void                * DriverData;
    FS_DeviceData       DevData;
} FS_Device;

/* Direntry information */
typedef struct {
    kal_uint32          DirCluster;
    FS_FileLocationHint LongPos;
    FS_FileLocationHint ShortPos;
    FS_DOSDirEntry      Dir;
} FS_DirEntry;

typedef struct __fsDrive
{
    struct __fsDevice   * Dev;
    struct __fsDrive    * NextDrive;
    int                 MountState;
    FS_PartitionRecord  Geometry;
    kal_uint32          Clusters;
    kal_uint32          SectorsPerCluster;
    kal_uint32          ClusterSize;
    kal_uint32          ClusterShift;
    kal_uint32          SPerCShift;
    kal_uint32          FATType;
    kal_uint32          FATCount;
    kal_uint32          SectorsPerFAT;
    kal_uint32          ClusterWatermark;
    kal_uint32          FreeClusterCount;
    kal_uint32          InfoSector;
    kal_uint32          SerialNumber;
    kal_uint32          FirstSector;
    kal_uint32          FirstFATSector;
    kal_uint32          FirstDirSector;
    kal_uint32          FirstDataSector;
    kal_uint32          RootDirEntries;
    FS_DirEntry         CurrDirEntry;
    char                CurrDir[FS_MAX_PATH];
#ifdef __FS_QM_SUPPORT__
    kal_uint8           QuotaMgt;
    kal_uint8           Reserved[3];
#endif
} FS_Drive;

typedef struct __fsBuffer
{
    struct __fsBuffer   * Next;
    struct __fsBuffer   * Prev;
    FS_Device           * Dev;
    kal_uint8           * Data;
    kal_uint32          Sector;
    struct __fsDrive    * FATSectorInfo;
    kal_uint32          Flags;
    kal_uint32          FirstDirtyTime,
                        LastDirtyTime;
    int                 Num;
    kal_uint8           recoverable_flag;
    kal_uint8           SectorCount;
    kal_uint8           SectorOffset;
} FS_Buffer;

typedef struct
{
    WCHAR Pattern[8];
} FS_Pattern_Struct;

typedef struct __fsQuotaStruct
{
    kal_uint8           * Path;
    kal_uint32          Priority;
    kal_uint32          Qmin;
    kal_uint32          Qmax;
    kal_uint32          Uint;
} FS_QuotaStruct;

typedef struct __fsInternQStruct
{
    kal_uint32          Qmin;
    kal_uint32          Qmax;
    kal_uint32          Qnow;
} FS_InternQStruct;

typedef struct
{
    unsigned short      StaticHintCount;
    unsigned short      UsedStaticHintCount; // #static_hint + #classic_hint
    kal_uint32          StaticHintRange;
} FS_SeekHintData;

typedef struct __fsFile
{
    FS_Drive                * Drive;
    FS_Device               * Dev;
    kal_uint16              SpecialKind;
    kal_uint16              PrivateFlags;
    kal_uint32              Unique;
    kal_uint32              Flags;
    FS_DirEntry             DirEntry;
    kal_uint32              FilePointer;
    kal_uint32              LastCluster;
    kal_uint32              Cluster;
    kal_uint32              Offset;
    char                    FullName[FS_MAX_PATH + 2 * sizeof(WCHAR)];
    void                    * Task;
    kal_uint32              HintNum;
    FS_FileLocationHint     * Seek_Hint;
    fs_job_id               Job;
    fs_tbl_usr_ptr_type     usr_ptr_type;
    void                    * usr_ptr;
    kal_uint32              OwnerLR;
    kal_uint8               Lock;
    kal_uint8               Valid;
} FS_File;

// file table
#if   defined(NVRAM_AUTO_GEN)
#define fs_file_tbl_struct FS_File __attribute__((aligned(4))) __attribute__((__section__("_fs_filetable")))
#elif defined(__MTK_TARGET__)
#define fs_file_tbl_struct FS_File __attribute__((section("_fs_filetable")))
#else
#define fs_file_tbl_struct __pragma(section("_fs_filetable_content")) \
                            FS_File __declspec(allocate("_fs_filetable_content"))

#endif

// indirect init function (used for FS Quota structure only currently)
typedef void (*_indirect_init_func)(void);

#if   defined(NVRAM_AUTO_GEN)
#define sys_indirect_init_func _indirect_init_func __attribute__((aligned(4))) __attribute__((__section__("_indirect_init")))
#elif defined(__MTK_TARGET__)
#define sys_indirect_init_func _indirect_init_func __attribute__((section("_indirect_init")))
#else
#ifdef _MSC_VER
#define sys_indirect_init_func __pragma(section("_indirect_init_content")) \
                            _indirect_init_func __declspec(allocate("_indirect_init_content"))
#else
#define sys_indirect_init_func __attribute__((section("_indirect_init_content"))) \
                            _indirect_init_func __declspec(allocate("_indirect_init_content"))
#endif
#endif


typedef struct __fsTables
{
    FS_Drive    * DriveTable;
    FS_File     * FileTable;
    FS_Buffer   * BufferTable;
    kal_uint8   * BufferData;
} FS_Tables;

typedef struct __fsExceptionData
{
    kal_uint32  * Next;
    int         Data[11];
    int         XValue;
    int         State;
    int         IsHandled;
} FS_ExceptionData;

typedef struct __fsTaskIOStatistics
{
    kal_uint32 SectorCount;
    kal_uint32 AccessCount;
    kal_uint32 AccessTime;
} FS_TaskIOStatistics;

#define FS_GetIOStatisticsSize()  (sizeof(FS_TaskIOStatistics)*FS_MAX_THREAD)

/* Structure of FS_XFindReset parameters */
typedef struct
{
    /* The pattern needs to be found (Drive name must be the first word) */
    WCHAR *Pattern;

    /* Pattern array, such as {L".jpg", L".bmp"} or {L"*.*"} */
    FS_Pattern_Struct *PatternArray;

    /* The number of PatternArray */
    kal_uint32 PatternNum;

    /*
     * All the attributes in this mask will not match PatternArray but match default NamePattern.
     * If you don't want to specify it, please assign zero here.
     * Note:
     * 	1. If PatternNum is zero, NamePattern in FS_FindFirstN will be the default matching pattern.
     *  2. Don?t mix this field, ArrayMask, with AttrMask of FS_XFindReset. The parameter in FS_XFindReset
     *     will filter out all the files/folders with such attributes!
     */
    kal_uint8 ArrayMask;

    /* Filter out the files/folders with such attributes */
    kal_uint8 AttrMask;

    /*
     * Choose at least one from Group1 to OR (|) one from Group2
     *      Group1: At Least one of the following two options should be chosen
     *              FS_FILE_TYPE (2): Sort file
     *              FS_DIR_TYPE (4): Sort folder
     *      Group2: Only one of the following six options should be chosen
     *              FS_NO_SORT (16): Do not sort
     *              FS_SORT_NAME (32): Sort by file name
     *              FS_SORT_SIZE (64): Sort by file size
     *              FS_SORT_ATTR (128): Sort by attribute
     *              FS_SORT_TYPE (256): Sort by creation time
     *              FS_SORT_TIME (512): Sort by update time
     *              FS_SORT_USER(1): Sort by user customized order.
     */
    kal_uint32 Flag;

    /*
     * Wait for lock or not (enum type)
     * 1. FS_NO_WAIT (0)
     * 2. FS_INFINITE (1)
     */
    kal_uint32 Timeout;

    /* Pointer to record the sorting result */
    kal_uint32 * Position;

    /* The progress callback that will be invoked during sorting procedure to notify the user the current sorting status. */
    SortingProgressCallback ProgressCallback;

    /* The user parameter that will be the input parameter of ProgressCallback. */
    void *ProgressCallbackParam;

    /* User specific compare function */
    SortingCompareFunc CompareFunc;

    /* The sorting buffer that is used to keep the sorting result. */
    kal_uint8 *SortingBuffer;

    /* This is used to identify the size of the sorting buffer. */
    int SortingBufferSize;

    /* This is the buffer that is used during sorting procedure. */
    kal_uint8 *WorkingBuffer;

    /* This is used to identify the size of the working buffer. */
    int WorkingBufferSize;
} FS_SortingParam;

/* Context of file list */
typedef struct
{
    FS_HANDLE handle;                   /* File Handle. It could be used for memory protection. Must set to 0 first */
    kal_uint8 attr_mask;
    kal_uint8 attr;

    kal_int32 index;                   /* Start index (count from 0) to fill into the list */
    kal_int32 used;                    /* Actual amount in the list */
    kal_int32 total;                   /* Max element amount that the list could carry */

    fs_progress_callback_func callback; /* user callback */
    void *param;                        /* user data */

    FS_FileLocationHint pos_buf[1];     /* Buffer of the list */
} fs_list_cntx_struct;

/* Parameters of FS_ListOpen */
typedef struct
{
    kal_wchar *path;                        /* which folder to list. format: <color Red><b>X:\\....\\ABC\\*.* </b></color>*/
    kal_uint8 attr_mask;                    /* attribute to match, for ex, ATTR_DIR */
    kal_uint8 attr;                         /* status of attr_mask, for ex, ATTR_DIR is on or off */

    /* option 2: select with attr_pattern */
    kal_uint8  attr_pattern;                /* attributes to match */

    /* option 1: select with pattern */
    FS_Pattern_Struct *name_pattern;        /* pattern to match. '*' or '?' are supported. Could be a list */
    kal_uint32 name_pattern_count;          /* count of pattern */

    kal_int32 index;                       /* Start index (count from 0) to fill into the list */

    fs_progress_callback_func callback;     /* user callback */
    void *param;                            /* user data */

    void *buff;                             /* buff for list context. MUST NOT release till FS_ListClose */
    kal_uint32 buff_size;                   /* size = FS_LIST_SIZE(N).  */
} fs_list_param_struct;

/*--------------------------------
 * Device Information (FS_IOCtrl)
 *--------------------------------*/

typedef struct
{
    kal_uint8   DeviceID[8];
    kal_uint32  BlockSize;
    kal_uint32  PageSize;
    kal_uint32  DeviceSize;
    kal_uint32  Flag;
} FS_NANDDeviceInfo;

typedef struct
{
    kal_uint8   DeviceID[8];
    kal_uint32  DeviceSize;
    kal_uint8   BootLocation;
} FS_NORDeviceInfo;

typedef struct
{
    kal_uint32  Flag;
    kal_uint32  PSN;
    kal_uint8   SerialMode;  // 1: 1-bit  0: 4-bits
} FS_CardDeviceInfo;

typedef struct
{
    union
    {
        FS_NANDDeviceInfo NAND;
        FS_NORDeviceInfo  NOR;
        FS_CardDeviceInfo Card;
    } DeviceInfo;
} FS_DeviceInfo;

/*-------------------------------
 * Physical Map Query (FS_IOCtrl)
 *-------------------------------*/

// PST Map Entry
typedef struct
{
    kal_uint32  SN;         // Sector No.
    kal_uint16  SecCnt;     // Number of continuous sectors
    kal_uint16  Reserved;
} FS_CardPMapEntry;

typedef struct
{
    kal_uint32  PPN;        // Physical Page No: 0 ~ 0x7FFFF (8192 Block x 64 Page)
    kal_uint16  SecOfs;     // The offset of starting sector in this page for required data (0 ~ 3)
    kal_uint16  SecCnt;     // Number of sectors in this page (1 ~ 4)
} FS_NANDPMapEntry;

// PST Map Header
typedef struct
{
    kal_uint8   ChipSel;    // Chip select (0 or 1)
    kal_uint8   Reserved[3];
} FS_NANDPMapHeader;

// PST Map
typedef struct
{
    FS_NANDPMapHeader   Header;
    FS_NANDPMapEntry   *Entry;
} FS_NANDPMap;

// for FS_IOCtrl's CtrlData
typedef struct
{
    FS_HANDLE           FH;             // [in]    : File handle of target file
    kal_uint32          Offset;         // [in]    : The beginning of file position for PST Map query
    kal_uint8          *pBuf;           // [in/out]: Please cast pBuf as FS_NANDPMap* for NAND or FS_CardPMapEntry* for memory card
    kal_uint32          BufSize;        // [in]    : Buffer size
    kal_uint16          ValidEntryCnt;  // [out]   : Number of valid PMap entry in pBuf
    kal_uint8           DevType;        // [out]   : Device type
    kal_uint8           Reserved;
} FS_PMapInfo;

// structure between FS and NAND device driver
typedef struct
{
    kal_uint32          LSN;            // [in]: Start sector no.
    kal_uint16          LSCnt;          // [in]: number of continuous sectors
    kal_uint16          ValidEntryCnt;  // [out]: number of buffer entries used by NAND driver
    kal_uint16          XferCnt;        // [out]: number of sectors transformed by NAND driver
    kal_uint8           ChipSel;        // [out]
    kal_uint8           Reserved;
    kal_uint32          BufSize;        // [in]
    FS_NANDPMapEntry   *pBuf;           // [in/out]
} FS_NANDPMapQuery;

typedef struct
{
    kal_uint8 initialized;
} fs_sysinfo_struct;

struct __fsJobApiStruct;
struct __fsJobStruct;
struct __fsAsyncCallbackDataStruct;

/*
 * Essential information of FS async I/F.
 *
 * User could allocate this structure locally and release it after FS async I/F is returned.
 */
typedef struct
{
    fs_prioity_enum         priority;   // priority configuration of this job (Deprecated)
    kal_uint8               priority_value;      // (Deprecated)
    kal_uint8               response_flag;       // refer to fs_response_enum
    fs_async_callback       callback;   // callback function pointer
    void                    *param;     // parameter of callback function
    void                    *buf;       // working buffer for FS aysnc I/F. Working buffer should be prepared by user.
    kal_uint32              buf_size;   // working buffer size. It should be at least <color Red><b>FS_ASYNC_WORKING_BUFFER_SIZE</b></color>.
} fs_overlapped_struct;  /* MUST SYNC */

/*
 * Data belongs to callback function.
 *
 * The address of this structure is exactly the <b>working buffer address</b>.
 * User could release working buffer in callback function.
 */
typedef struct __fsAsyncCallbackDataStruct
{
    fs_api_enum             api;        // The API enumeration of this job
    fs_job_state_enum       reserved1;  // Reserved
    kal_uint8               reserved2;  // Reserved
    kal_uint8               reserved3;  // Reserved
    fs_job_id               id;         // Job ID. It also appears in the 1st parameter of callback function.
    module_type             reserved4;  // Reserved
    kal_int64               result;     // Execution result of FS API. It also appears in the 2nd parameter of callback function.
    fs_async_callback       callback;   // Callback function pointer
    void                    *param;     // Parameter of callback function. It is defined in by user whenever FS async I/F is used.
} fs_async_callback_data_struct;  /* MUST SYNC with FS_JOB_STRUCT_HEADER_INTERNAL and fs_overlapped_struct */

/* DOM-NOT_FOR_SDK-BEGIN */

// fs_job_struct common header (totally 28 bytes)  /* MUST SYNC */
#define FS_JOB_STRUCT_HEADER_INTERNAL\
    fs_api_enum             api;\
    fs_job_state_enum       state;\
    kal_uint8               priority;\
    kal_uint8               response_flag;\
    fs_job_id               id;\
    module_type             mod_id;\
    kal_int64               result;\
    fs_async_callback       callback;\
    void                    * param;\
    struct __fsJobStruct    * next;

typedef struct __fsJobStruct
{
    FS_JOB_STRUCT_HEADER_INTERNAL
} fs_job_struct;

/* DOM-NOT_FOR_SDK-END */

typedef struct
{
    FS_JOB_STRUCT_HEADER_INTERNAL
    fs_job_id   job_id;
    kal_bool    aborted;
} fs_job_abort_struct;

typedef struct
{
    FS_JOB_STRUCT_HEADER_INTERNAL
    kal_wchar*  filename;   // !NOTE: Should we copy filename to our memory? or freed in user's callback?
    kal_uint32  flag;
    kal_uint32  caller_address;
} fs_job_open_struct;

typedef struct
{
    FS_JOB_STRUCT_HEADER_INTERNAL
    FS_HANDLE   handle;
    void        * data;
    kal_uint32  length;
    kal_uint32  * read;
    kal_uint32  chunksize;  // Separate the read operation to multiple small chunks in queue
} fs_job_read_struct;

typedef struct
{
    FS_JOB_STRUCT_HEADER_INTERNAL
    FS_HANDLE   handle;
    void        * data;
    kal_uint32  length;
    kal_uint32  * written;
} fs_job_write_struct;

typedef struct
{
    FS_JOB_STRUCT_HEADER_INTERNAL
    const kal_wchar * filename;
} fs_job_delete_struct;

typedef struct
{
    FS_JOB_STRUCT_HEADER_INTERNAL
    FS_HANDLE   handle;
    kal_int64   offset;
    kal_int32   whence;
} fs_job_seek_struct;

typedef struct
{
    FS_JOB_STRUCT_HEADER_INTERNAL
    const kal_wchar             * path;
    kal_int32                   flag;
    void                        * recursive_stack;
    kal_uint32                  stack_size;
    fs_progress_callback        progress;
} fs_job_get_folder_size_struct;

typedef struct
{
    FS_JOB_STRUCT_HEADER_INTERNAL
    kal_wchar           * name_pattern;
    kal_uint8           attr;
    kal_uint8           attr_mask;
    FS_DOSDirEntry      * file_info;
    kal_wchar           * file_name;
    kal_uint32          max_length;
} fs_job_find_first_struct;

typedef struct
{
    FS_JOB_STRUCT_HEADER_INTERNAL
    kal_wchar           * name_pattern;
    FS_Pattern_Struct   * pattern_array;
    kal_uint32          pattern_num;
    kal_uint8           array_mask;
    kal_uint8           attr;
    kal_uint8           attr_mask;
    FS_DOSDirEntry      * file_info;
    kal_wchar           * file_name;
    kal_uint32          max_length;
    kal_uint32          entry_index;
    kal_uint32          flag;
} fs_job_find_first_n_struct;

typedef struct __fsJobApiStruct
{
    union
    {
        fs_job_open_struct              open_struct;
        fs_job_read_struct              read_struct;
        fs_job_seek_struct              seek_struct;
        fs_job_write_struct             write_struct;
        fs_job_abort_struct             abort_struct;
        fs_job_delete_struct            delete_struct;
        fs_job_find_first_struct        find_first_struct;
        fs_job_find_first_n_struct      find_first_n_struct;
        fs_job_get_folder_size_struct   get_folder_size_struct;
    } api;
} fs_job_api_struct;

typedef enum
{
    FS_JOB_TYPE_ASYNC_API       = 0,
    FS_JOB_TYPE_INVALID         = 0xFF
} fs_job_type_enum;

typedef struct
{
    kal_uint8           ref_count;
    kal_uint16          msg_len;
    fs_job_type_enum    type;
    fs_job_struct       * job;
} fs_job_req_struct;

typedef struct
{
    kal_uint8           ref_count;
    kal_uint16          msg_len;
    fs_job_struct       * job;
} fs_job_rsp_struct;

/*----------------------------------------------------------
 * FS Async I/F Alone Version (internal structures)
 *----------------------------------------------------------*/

typedef struct
{
    kal_uint8                               ref_count;
    kal_uint16                              msg_len;
    fs_async_callback_data_struct           * data;
} fs_job_alone_rsp_struct;

typedef struct
{
    fs_util_ucs_to_wchar_func                   ucs_to_wchar_func;
    fs_util_get_default_encoding_length_func    get_default_encoding_length_func;
} fs_config_encoding_api_struct;

/*---------------------------------------------------------------------------
 * Macros
 *---------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------
 * Retrieve FS_FileOpenHint structure from FS_DOSDirEntry structure
 *
 * Purpose: FS_FindFirst / FS_FindNext series APIs support open hint feature.
 * For minimum modification, we append FS_FileOpenHint members to FS_DOSDirEntry
 * structure.
 *-------------------------------------------------------------------- W09.19 --*/
#define FS_GetOpenHintByDOSDirEntry(DOSDirEntry) ((FS_FileOpenHint*)((kal_uint8*)&(((FS_DOSDirEntry*)(DOSDirEntry))->FileSize) + sizeof(kal_uint32)))

// get file table index from a file handle
#define FS_GetFileTableIdx(FileHandle) ((FileHandle) & ((1 << (4 * sizeof(int))) - 1))

/*-------------------------------
 * FS Smart File Seeker Support
 *-------------------------------*/
// buffer calculation
#define FS_SEEKHINT_BUFFER_SIZE_FOR_HINT_CNT(N) (sizeof(FS_SeekHintData) + (N) * sizeof(FS_FileLocationHint))

#define FS_LIST_ENTRY(X)        (X - 108)/sizeof(FS_FileLocationHint) /* To calculate size of buff with given entry count N. */

#define FS_LIST_SIZE(N)         (108 + N*sizeof(FS_FileLocationHint)) /* To get entry count with given buff_size X */

// The working buffer contains              1. HintList(4) 2. HintList2(4) 3. FileName(520) 4. TmpName1(520) 5. TmpName2(520)
//                                          6. FileInfo(RTFDOSDirEntry)
// The sorting buffer contains              1. Sizeof(FSSortingInternalS) 2. PosList(8)

#define FS_SORT_WORKING_BUFFER_SIZE                 ((FS_SORTING_MAX_FILES*(4+4))+3*(FS_MAX_PATH+4)+sizeof(FS_DOSDirEntry))
#define FS_SORT_SORTING_BUFFER_SIZE                 ((FS_SORTING_MAX_FILES*8)+(21*4) /* sizeof(FSSortingInternalS) */)

#define FS_SORT_WORKING_BUFFER_SIZE_FOR_FILES(x)    (((x+3)*(4+4))+3*(FS_MAX_PATH+4)+sizeof(FS_DOSDirEntry))
#define FS_SORT_SORTING_BUFFER_SIZE_FOR_FILES(x)    (((x+3)*8)+(21*4) /*sizeof(FSSortingInternalS)*/)
#define FS_SORT_FILES_FOR_TOTAL_BUFFER_SIZE(m)      (((m-84-(3*(FS_MAX_PATH+4))-sizeof(FS_DOSDirEntry))/16)-3)

#define FS_MOVE_BUFFER_SIZE_FOR_FOLDER_LEVEL(x)     (72+3*(FS_MAX_PATH+4+sizeof(int))+2048+x*52)
#define FS_XDELETE_BUFFER_SIZE_FOR_FOLDER_LEVEL(x)  (72+3*(FS_MAX_PATH+4+sizeof(int))+x*52)

// provide working buffer size for FS async I/F
#define FS_ASYNC_WORKING_BUFFER_SIZE                (sizeof(fs_job_api_struct))


#ifdef __cplusplus
}
#endif

#endif // _FS_GENERAL_TYPES_H_


