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
 *   fs_general_api.h
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
 * removed!
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _FS_GENERAL_API_H_
#define _FS_GENERAL_API_H_

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
#include "fs_general_types.h"

/*---------------------------------------------------------------------------
 * File System APIs
 *---------------------------------------------------------------------------*/

#if !(defined(__CCCIFS_SUPPORT__) && defined(__MTK_TARGET__))

// Feature Phone Proto types

/*****************************************************************************
 * <GROUP  FileContent>
 *
 * FUNCTION
 *  FS_Open
 * DESCRIPTION
 *  FS_Open opens and possibly creates a file for subsequent read and/or write access.
 * PARAMETERS
 *  FileName  : [IN]<P>Must point to the name of the file to open/create.
 *                    File names are not case sensitive; they will be converted to
 *                    upper case when file system searches this file, and they should
 *                    be two-byte aligned and UCS2 encoded. The file name can have one
 *                    of the following formats:
 *                    [Drive:][\][Path\]Name[.Ext]  A data file or directory file name with optional drive and path information.
 *                    [Drive:]\                     A root directory.
 *                    \\.\Drive:                    A logical drive.
 *                    \\.\PHYSICALDRIVEx            A physical hard disk. x must be a digit (starting at '0') specifying the desired hard disk.
 *                    \\.\FMapF\[hexstrings]        A virtual file, the whole path name should be generated by the dedicated FS_GenVirtualFileName API.
 *  Flag      : [IN]<P>Can be a combination of the following flags:
 *                      FS_READ_WRITE       FS_READ_ONLY    FS_OPEN_SHARED      FS_OPEN_NO_DIR
 *                      FS_OPEN_DIR         FS_CREATE       FS_CREATE_ALWAYS    FS_COMMITTED
 *                      FS_CACHE_DATA       FS_LAZY_DATA    FS_ATTR_HIDDEN      FS_ATTR_SYSTEM
 *                      FS_ATTR_ARCHIVE     FS_NONBLOCK_MODE    FS_PROTECTION_MODE
 * RETURNS
 *  Please refer to fs_error_enum.
 * NOTE
 *  If the function succeeds, the return value is a file handle for the
 *  opened file and the file pointer of the file is set to 0. If the return
 *  value is less than 0, the function has failed and the return value is the
 *  error code. For data and directory files, the same rules for file name
 *  syntax apply as under MS-DOS. For logical drive and physical disk file
 *  names, the same rules as under Windows NT apply.
 * SEE ALSO
 *  fs_error_enum
 *****************************************************************************/
extern int FS_Open(const WCHAR * FileName, UINT Flag);

/*****************************************************************************
 * <GROUP  Obsolete >
 *
 * FUNCTION
 *  FS_OpenHint
 * DESCRIPTION
 *  Open a file with location hint to reduce the search time.
 * PARAMETERS
 *  FileName  : [IN]<P>refer to FS_Open
 *  Flag      : [IN]<P>refer to FS_Open
 *  DSR_Hint  : [IN]<P>FS_FileOpenHint.
 *      The first time that invoke open hint function, the Cluster and Index
 *      fields of DSR_Hint must be 0. If the file is opened successfully, it
 *      returns the opened file?s location information by the DSR_Hint. Next
 *      time, if the same file needs to be opened, opening file with this
 *      DSR_Hint can reduce the searching time.
 *      It's not allowed to pass arbitrary Cluster and Index value of DSR_Hint
 *      to FS_OpenHint.
 *      If passing NULL as DSR_Hint, this function performs the same as FS_Open.
 * RETURNS
 *  Refer to FS_Open
 * SEE ALSO
 *  FS_Open
 *****************************************************************************/
extern int FS_OpenHint(const WCHAR * FileName, UINT Flag, FS_FileOpenHint * DSR_Hint);

/*****************************************************************************
 * <GROUP  FileContent>
 *
 * FUNCTION
 *  FS_Close
 * DESCRIPTION
 *  To close an open file and return a file handle back.
 * PARAMETERS
 *  FileHandle  : [IN]<P>the handle. Must have been assigned in a previous
 *                      successful call to FS_Open. FS_Close will write
 *                      any un-flushed file data to the disk (except for
 *                      FS_DEVICE_LAZY_WRITE devices) and release all
 *                      resources associated with the file handle.
 * RETURNS
 *  Successful: FS_NO_ERROR
 *  Failed: 	Please refer to fs_error_enum.
 * SEE ALSO
 *  fs_error_enum
 *****************************************************************************/
extern int FS_Close(FS_HANDLE FileHandle);

/*****************************************************************************
 * <GROUP  FileContent>
 *
 * FUNCTION
 *  FS_Read
 * DESCRIPTION
 *  To read data from a opened file.
 * PARAMETERS
 *  FileHandle : [IN] <P>References the open file from which to read.
 *  DataPtr    : [OUT]<P>Specifies the address for the data to be read.
 *  Length     : [IN] <P>Specifies the number of bytes to read
 *  Read       : [OUT]<P>Pointer to an unsigned integer to receive the number of
 *                      bytes actually read. Usually, *Read will contain Length
 *                      after the call. However, in case of an error or if the
 *                      end of file is encountered during the read, the value may
 *                      be less. Read may be set to NULL if this information is
 *                      not required by an application.
 * RETURNS
 *  Successful: FS_NO_ERROR
 *  Failed: 	Please refer to fs_error_enum.
 *              Details -   Reading past the end of file is not regarded as an error.
 *                          If FS_Read returns FS_NO_ERROR, but *Read is less than
 *                          Length, the end of file has been encountered. Reading on
 *                          a virtual file but its mapped file closed somehow,
 *                          FS_VF_MAP_ERROR error code is returned. This function
 *                          advances the file's file pointer by the amount given in
 *                          *Read. In case of an error and if parameter Read is NULL,
 *                          the new file pointer is undefined.
 *****************************************************************************/
extern int FS_Read(FS_HANDLE FileHandle, void * DataPtr, UINT Length, UINT * Read);

/*****************************************************************************
 * <GROUP  FileContent>
 *
 * FUNCTION
 *  FS_Write
 * DESCRIPTION
 *  To write data to a file.
 * PARAMETERS
 *  FileHandle : [IN] <P>References the open file to write to.
 *  DataPtr    : [IN] <P>Specifies the address of the data to be written.
 *  Length     : [IN] <P>Specifies the number of bytes to write.
 *  Written    : [OUT]<P>Pointer to an unsigned integer to receive the number of
 *                      bytes actually been written. Usually, *Written will contain
 *                      Length after the call. However, in case of an error, the
 *                      returned value may be less. Written may be set to NULL if
 *                      this information is not required by an application.
 * RETURNS
 *  Successful: FS_NO_ERROR
 *  Failed: 	Please refer to fs_error_enum.
 *              Details -   Writing past the current end of file will automatically
 *                          extend the file. When the file size exceeds the current
 *                          allocated file size, new clusters are allocated for the
 *                          file. FS will allocate new clusters immediately following
 *                          the current last cluster, if possible. This function
 *                          advances the file's file pointer by the amount given in
 *                          *Written. In case of an error and if parameter Written
 *                          is NULL, the new file pointer is undefined.
 *****************************************************************************/
extern int FS_Write(FS_HANDLE FileHandle, void * DataPtr, UINT Length, UINT * Written);

/*****************************************************************************
 * <GROUP  FileContent>
 *
 * FUNCTION
 *  FS_SetSeekHint
 * DESCRIPTION
 *  This function provides user to specify several check points of file to speedup
 *  the seek function. FS_Seek will start to seek from these places.
 * PARAMETERS
 *  FileHandle : [IN]<P>The file handle to be seeked
 *  HintNum    : [IN]<P>Number of hint
 *  Hint       : [IN]<P>Pointer to user defined hint
 * RETURNS
 *  Success:    The number of hint that is successfully set
 *  Error:      FS_ACCESS_DENIED
 * NOTE
 *     1. User should specify the hint in "bytes".
 *     2. This function only provides hint. One should not call this to extend file.
 *        i.e. Hint in bytes cannot be larger than the file size.
 *     3. User should allocate and free the memory by himself
 *     4. User should sort the hint by himself (small to big), or hint setting will
 *        be stopped by the number not in sequence
 *     5. After processed, "index" in each hint entry is cluster-aligned and is a "absolute"
 *        file offset in bytes. "Cluster" is the corresponding cluster number of each index.
 *****************************************************************************/
extern int FS_SetSeekHint(FS_HANDLE FileHandle, UINT HintNum, FS_FileLocationHint * Hint);

/*****************************************************************************
 * <GROUP  FileContent>
 *
 * FUNCTION
 *  FS_SetSeekHintEx
 * DESCRIPTION
 *  A seek hint is a milestone to remember the physical address of a specified
 *  file offset. With seek hint, FS can seek from an installed milestone to save
 *  the seek time.
 *  This function provides a convenient and efficient way to enable this facility
 *  for a specified file handle. After this API is used for a specified file
 *  handle, FS will install¨seek hints? automatically during any following
 *  FS_Seek, FS_Read and FS_Write operations on the same file handle.
 *  After file is extended or truncated, seek hints will also be adjusted
 *  automatically. Any seek hint operations are transparent to users.
 * PARAMETERS
 *  FileHandle : [IN]<P>The target file handle
 *  HintCount  : [IN]<P>Number of hint
 *  Flag       : [IN]<P>Flag for configuring the behavior of FS_SetSeekHintEx
 *      FS_SEEKHINT_FLAG_INITIALIZE_HINT - Setting the flag will let FS_SetSeekHintEx
 *                                         immediately install all hints.
 *      Otherwise - hints will be installed automatically during following file
 *                  operations, like FS_Write, FS_Read and FS_Seek.
 *  Buffer     : [IN]<P>User should allocate and free a buffer for FS_SetSeekHintEx.
 *                      Buffer address should be 4-byte alignment.
 *  BufferSize : [IN]<P>To have N seek hints, please use
 *                      FS_SEEKHINT_BUFFER_SIZE_FOR_HINT_CNT(N) to get the buffer
 *                      size for N seek hints.
 * RETURNS
 *  Success:    FS_NO_ERROR
 *  Error:      List below
 * RETURN VALUES
 *  FS_INVALID_FILE_HANDLE: File handle is invalid, or target file is not Normal File.
 *      (Only Normal File supports this facility, other file type like Virtual File,
 *      Volume File and Physical Disk does not support currently).
 *  FS_ACCESS_DENIED: Hint is NULL buffer or file system is not initialized
 *  FS_FAIL_GET_MEM:
 *      1. Buffer pointer is NULL or BufferSize is not enough for N seek hints.
 *      2. Buffer has been used by another file handle.
 *  FS_FAT_ALLOC_ERROR: Target file?s cluster chain is broken.
 *  FS_DEVICE_EXPORTED_ERROR: The device on which the target file handle is exported.
 *  FS_MEDIA_CHANGED: The device on which the target file handle is removed or changed.
 * EXAMPLE
 * <code>
 *      #define MY_FILE_PATH    L"E:\\1.mp3"
 *      #define MY_HINT_NUM     5
 *      #define MY_HINT_BUFFER_SIZE (FS_SEEKHINT_BUFFER_SIZE_FOR_HINT_CNT(MY_HINT_NUM))
 *      #define MY_TARGET_BYTE ?
 *
 *      FS_HANDLE MyHandle;
 *      __align(4) char MyHint[MY_HINT_BUFFER_SIZE];
 *      int dRetval;
 *
 *      MyHandle = FS_Open(MY_FILE_PATH, FS_OPEN_NO_DIR);
 *      If (MyHandle > FS_NO_ERROR)
 *      {
 *          dRetval = FS_SetSeekHintEx(MyHandle, MY_HINT_NUM, 0, (void*)MyHint, MY_HINT_BUFFER_SIZE);
 *          if (dRetval > FS_NO_ERROR)
 *      	    dRetval = FS_Seek(MyHandle, MY_TARGET_BYTE, FS_FILE_BEGIN);
 *      }
 * </code>
 * NOTE
 *  1. Hint buffer memory should be allocated and freed by caller himself.
 *  2. Hint buffer memory should be unique for different file handle! Any conflict
 *     usage will get FS_FAIL_GET_MEM error code.
 *  3. Please use FS_SEEKHINT_BUFFER_SIZE_FOR_HINT_CNT(N) to get the buffer size for
 *     N seek hints.
 *  4. User could let seek hint be installed during following file operations (default),
 *     or be installed once this API is called (by set FS_SEEKHINT_FLAG_INITIALIZE_HINT
 *     flag in Flag parameter).
 *****************************************************************************/
extern int FS_SetSeekHintEx(FS_HANDLE FileHandle, UINT HintCount, UINT Flag, void *Buffer, UINT BufferSize);

/*****************************************************************************
 * <GROUP  FileContent>
 *
 * FUNCTION
 *  FS_SeekLargeFile
 * DESCRIPTION
 *  Extended version of FS_Seek.
 * PARAMETERS
 *  FileHandle  : [IN] <P>References the open file for which to reposition the file pointer.
 *  Offset      : [IN] <P>Specifies how far the file pointer should be moved. Please note that Offset is a signed long value.
 *  Whence      : [IN] <P>Specifies Offset's meaning. Please refer to FS_SEEK_POS_ENUM.
 * RETURNS
 *  Please refer to FS_Seek.
 *****************************************************************************/
extern kal_int64 FS_SeekLargeFile(FS_HANDLE FileHandle, kal_int64 Offset, int Whence);

/*****************************************************************************
 * <GROUP  FileContent>
 *
 * FUNCTION
 *  FS_Seek
 * DESCRIPTION
 *  Repositions a file pointer and possibly extends a file.
 * PARAMETERS
 *  FileHandle  : [IN] <P>References the open file for which to reposition the file pointer.
 *  Offset      : [IN] <P>Specifies how far the file pointer should be moved.
 *  Whence      : [IN] <P>Specifies Offset's meaning. Please refer to FS_SEEK_POS_ENUM.
 * RETURNS
 *  If the function succeeds, the return value is the new file pointer value, or,
 *  if the file pointer is larger than 231-1, FS_LONG_FILE_POS is returned.
 *  In this case, the actual file pointer can be queried using function FS_GetFileInfo.
 *  If the function fails, the return value is some other negative error code.
 *  Moving the file pointer before the beginning of the file is an error.
 *  However, moving it beyond the current file size is supported.
 *  In this case, the file is extended. The data between the previous file size
 *  and the new file size is undefined. This method to extend a file is much faster
 *  than actually writing data to it.
 *  Seeking on a virtual file but its mapped file closed somehow, FS_VF_MAP_ERROR error code is returned.
 *****************************************************************************/
extern int FS_Seek(FS_HANDLE FileHandle, int Offset, int Whence);

/*****************************************************************************
 * <GROUP  FileContent>
 *
 * FUNCTION
 *  FS_Commit
 * DESCRIPTION
 *  Immediately flushes all buffers associated with a file to disk.
 * PARAMETERS
 *  FileHandle  : [IN]<P>References the open file from which to read.
 * RETURNS
 *  Successful: FS_NO_ERROR
 *  Failed: 	Please refer to fs_error_enum.
 * Details
 *  FS_Commit guarantees that all of the file's data is flushed. If the file
 *  was opened with flag FS_LAZY_DATA, all dirty buffers of the file's drive
 *  are flushed. Otherwise, the file's data buffer, directory entry, and the
 *  complete FAT are flushed.
 *****************************************************************************/
extern int FS_Commit(FS_HANDLE FileHandle);

/*****************************************************************************
 * <GROUP  AsyncIF>
 *
 * FUNCTION
 *  FS_Abort
 * DESCRIPTION
 *  This function can abort the action on specified file handle right away.
 * PARAMETERS
 *  ActionHandle : [IN]
 *      (1) The action on the specified file handle will be aborted.
 *      (2) FS_ABORT_CHECK_DRIVE (0x12345678): Special file handle to abort drive check
 *      (3) FS_ABORT_XDELETE (0x87654321): Special file handle to abort FS_XDelete
 * RETURNS
 *  Successful: FS_NO_ERROR
 *  Failed: 	Please refer to fs_error_enum.
 *****************************************************************************/
extern int FS_Abort(UINT ActionHandle);

/*****************************************************************************
 * <GROUP  FileOperation>
 *
 * FUNCTION
 *  FS_ParseFH
 * DESCRIPTION
 *  This function parse the file handle to a index between 0 to FS_MAX_FILES
 * PARAMETERS
 *  FileHandle : [IN] <P>File handle to be parsed
 * RETURNS
 *  The zero-based index or fs_error_enum.
 *****************************************************************************/
extern int FS_ParseFH(FS_HANDLE FileHandle);

/*****************************************************************************
 * <GROUP  VirtualOperation>
 *
 * FUNCTION
 *  FS_GenVirtualFileName
 * DESCRIPTION
 *  Some file formats pack multiple objects inside. This API is designed for programmers
 *  who want to process inside objects without copy overhead. Users call this API to
 *  generate a virtual file name (full-path string in fact) first. Then users can
 *  FS_Open(), FS_Read(), and FS_Seek() against virtual file just like a normal file.
 *  The generated virtual filename is a wide-character type, null-terminated string.
 *  The length (in byte unit) is defined as a MACRO named FS_GenVFN_SIZE. For user's
 *  convenience, it is allowed to replace the null-terminated character with a dot
 *  character and append arbitrary extension name such as ¨.jpeg?.
 *  Currently, APIs that support virtual file are FS_Open(), FS_Read(), FS_Seek(),
 *  FS_Close(), FS_GetFileInfo(), FS_GetFileSize(), and FS_GetFilePosition().
 * PARAMETERS
 *  FileHandle  : [IN] <P>The file-handler of the real-file that virtual-file mapped into.
 *  VFileNameBuf: [IN] <P>A pointer of the file name string buffer provided to store generated file name.
 *  BufLength   : [IN] <P>The available buffer length (in byte unit) of VFileNameBuf provided to prevent buffer overflow.
 *  VFBeginOffset:[IN] <P>Specify the segment beginning (in byte unit) in the real-file to be treated as virtual-file content.
 *  VFValidLength:[IN] <P>Specify the segment length (in byte unit) in the real-file to be treated as virtual-file content.
 * RETURNS
 *  Successful  : FS_NO_ERROR
 *  Failed      : Please refer to fs_error_enum.
 * EXAMPLE
 * <code>
 * </code>
 * NOTE
 *  There are 2 major constrictions you should keep in mind while using virtual-file.
 *  (1) The mapped file must be opened before FS_GenVirtualFileName() are called, and
 *      should be closed after all generated virtual file are closed. On the other word,
 *      once user close the mapped file, all virtual file name generated by
 *      FS_GenVirtualFileNmae() call are invalid.
 *  (2) Both mapped file and virtual file must FS_Open() with FS_READ_ONLY flag. User
 *      cannot update virtual file or mapped file by FS_Write().
 *****************************************************************************/
extern int FS_GenVirtualFileName(FS_HANDLE FileHandle, WCHAR * VFileNameBuf, UINT BufLength, UINT VFBeginOffset, UINT VFValidLength);

/*****************************************************************************
 * <GROUP  DirectoryEntry>
 *
 * FUNCTION
 *  FS_GetFileInfo
 * DESCRIPTION
 *  Return file information about an open file.
 * PARAMETERS
 *  FileHandle : [IN]   <P>References the open file from which to read.
 *  FileInfo   : [OUT]  <P>Refer to FS_FileInfo, FS_DOSDataTime and FS_DOSDirEntry
 * RETURNS
 *  Successful  : FS_NO_ERROR
 *  Failed      : Please refer to fs_error_enum.
 *****************************************************************************/
extern int FS_GetFileInfo(FS_HANDLE FileHandle, FS_FileInfo * FileInfo);

/*****************************************************************************
 * <GROUP  DirectoryEntry>
 *
 * FUNCTION
 *  FS_GetFileInfoEx
 * DESCRIPTION
 *  Return file information about an open file.
 * PARAMETERS
 *  FileHandle : [IN]   <P>References the open file from which to read.
 *  FileInfo   : [OUT]  <P>Refer to FS_FileInfo, FS_DOSDataTime and FS_DOSDirEntry
 *  Flags      : [IN]   <P>Refer to fs_fi_enum *
 * RETURNS
 *  Successful  : FS_NO_ERROR
 *  Failed      : Please refer to fs_error_enum.
 *****************************************************************************/
extern int FS_GetFileInfoEx(FS_HANDLE FileHandle, FS_FileInfo *FileInfo, UINT Flags);

/*****************************************************************************
 * <GROUP  DirectoryEntry>
 *
 * FUNCTION
 *  FS_GetFileSize
 * DESCRIPTION
 *  Retrieve the current size of an open file.
 * PARAMETERS
 *  FileHandle : [IN]   <P>References the open file for which to retrieve the file size.
 *  Size       : [OUT]  <P>Must point to the int to receive the file's size.
 * RETURNS
 *  Successful  : FS_NO_ERROR
 *  Failed      : Please refer to fs_error_enum.
 *****************************************************************************/
extern int FS_GetFileSize(FS_HANDLE FileHandle, UINT * Size);

/*****************************************************************************
 * <GROUP  DirectoryEntry>
 *
 * FUNCTION
 *  FS_GetFilePosition
 * DESCRIPTION
 *  Retrieve the current file pointer position of an open file.
 *      Note:   We provide this function to save a lot of time if application just
 *              wants to know the file pointer information. Because FS_GetFileInfo
 *              will cost a lot of to traverse the file allocated cluster chain.
 * PARAMETERS
 *  FileHandle : [IN] <P>File handle to reference the open file for which to retrieve the file pointer.
 *  Position   : [OUT]<P>The current file pointer of the opened file
 * RETURNS
 *  This function always returns FS_NO_ERROR.
 * EXAMPLE
 * <code>
 *      kal_uint32 file_position;
 *
 *      FS_GetFilePosition(myHandle, &file_position);
 * </code>
 *****************************************************************************/
extern int FS_GetFilePosition(FS_HANDLE FileHandle, UINT * Position);

/*****************************************************************************
 * <GROUP  DirectoryEntry>
 *
 * FUNCTION
 *  FS_SetFileTime
 * DESCRIPTION
 *  Set the last modify information in a file's directory entry.
 * PARAMETERS
 *  FileHandle : [IN]  <P>References the open file for which to set the time and date.
 *  Time       : [OUT] <P>the time when this file is modified. Refer to FS_DOSDateTime
 * RETURNS
 *  FS will update the file's date and time on every write access. Thus, function
 *  FS_SetFileTime should not be followed by a call to FS_Write, since this would
 *  overwrite the date and time set by FS_SetFileTime.
 *****************************************************************************/
extern int FS_SetFileTime(FS_HANDLE FileHandle, const FS_DOSDateTime * Time);

/*****************************************************************************
 * <GROUP  DirectoryEntry>
 *
 * FUNCTION
 *  FS_GetAttributes
 * DESCRIPTION
 *  Returns the attributes set for a specific file.
 * PARAMETERS
 *  FileName : [IN]<P>It's the file path for which to retrieve the attributes.
 * RETURNS
 *  The value(s) below
 * RETURN VALUES
 *  FS_ATTR_READ_ONLY
 *  FS_ATTR_HIDDEN
 *  FS_ATTR_SYSTEM
 *  FS_ATTR_VOLUME
 *  FS_ATTR_DIR
 *  FS_ATTR_ARCHIVE
 *****************************************************************************/
extern int FS_GetAttributes(const WCHAR * FileName);

/*****************************************************************************
 * <GROUP  DirectoryEntry>
 *
 * FUNCTION
 *  FS_SetAttributes
 * DESCRIPTION
 *  Returns the attributes set for a specific file.
 * PARAMETERS
 *  FileName    : [IN] <P>It's the file path for which to retrieve the attributes.
 *  Attributes  : [IN] <P>
 *  FS_ATTR_READ_ONLY
 *  FS_ATTR_HIDDEN
 *  FS_ATTR_SYSTEM
 *  FS_ATTR_VOLUME
 *  FS_ATTR_DIR
 *  FS_ATTR_ARCHIVE
 * RETURNS
 *  Please refer to fs_error_enum.
 *****************************************************************************/
extern int FS_SetAttributes(const WCHAR * FileName, BYTE Attributes);

/*****************************************************************************
 * <GROUP  FileOperation>
 *
 * FUNCTION
 *  FS_Delete
 * DESCRIPTION
 *  Delete a file.
 * PARAMETERS
 *  FileName    : [IN] <P>Must point to the name of the file to be deleted and may not contain wildcards. This function cannot delete directories.
 * RETURNS
 *  Please refer to fs_error_enum.
 *****************************************************************************/
extern int FS_Delete(const WCHAR * FileName);

/*****************************************************************************
 * <GROUP  VirtualOperation>
 *
 * FUNCTION
 *  FS_PseudoMerge
 * DESCRIPTION
 *  This function provides facility for Multimedia task to merge audio and video
 *  files.
 * PARAMETERS
 *  FileName1: [IN]<P>File being extended
 *  FileName2: [IN]<P>Append to FileName1, and FileName2 will be deleted
 * RETURNS
 *  Successful  : FS_NO_ERROR
 *  Failed      : List below
 * RETURN VALUES
 *  FS_INVALID_FILENAME(-3): FileName1 or FileName2 are invalid.
 *  FS_ACCESS_DENIED(-16):
 *          1. FileName1 and FileName2 located on different drive
 *          2. FileName1 or FileName2 are opened by others
 *  FS_FILE_NOT_FOUND(-9): FileName1 not found
 *  FS_READ_ONLY_ERROR(-45): FileName1 or FileName2 contain read-only
 *                           or directory file attributes.
 *  FS_FAT_ALLOC_ERROR (-20): The cluster chains of FileName1 or FileName2
 *                            are incorrect.
 * EXAMPLE
 * <code>
 *      int reval;
 *      reval  = FS_PseudoMerge(L"E:\\2.mp3", L"E:\\3.mp3");
 * </code>
 * NOTE
 *  This function will
 *  (1) Check file size and cross link of the input files
 *  (2) Append File2 to File1 without caring the last cluster of
 *      File1 is not cluster alinged. One calling this API should
 *      be aware that FS_COMMITTED is the default setting of this call.
 *****************************************************************************/
extern int FS_PseudoMerge(const WCHAR * FileName1, const WCHAR * FileName2);


/******************************************************************************
 * <GROUP  FileOperation>
 *
 * FUNCTION
 *  FS_CheckFile
 * DESCRIPTION
 *  This function provides facility for user to check a file. It will check
 *  if this exists or not first and then check the cluster chain. If
 *  invalid cluster is allocated (for an example, 0), error code,
 *  FS_CHECKDISK_RETRY (-41), will be returned. Finally, it will check if
 *  the file size fit the allocation size. If not, the file size will be
 *  adjusted.
 * PARAMETERS
 *  FileName: [IN]<P>File to be checked
 * RETURNS
 *  If the function succeeds, the return value is FS_NO_ERROR. If the function fails, the return value is a negative error code. If FS_CHECKDISK_RETRY (-41) is returned, it means the file has allocated an invalid cluster. You should ask for check the whole drive to fix this error.
 * NOTE
 *  This function will adjust the allocated clusters to fit the file size
 *  automatically if needed.
 *
 * <xtable>
 * Allocated Cluster   Original File   FS_PseudoMerge                   FS_CheckFile
 *                      Size (Byte)
 * ------------------  --------------  -------------------------------  -------------------------------
 * 0 ( 0 bytes)        N/A             N/A                              0
 * 1 (1024 bytes)      100             100                              100
 * 1 (1024 bytes)      1024            1024                             1024
 * 2 (2048 bytes)      1024            <color Red><b>2048</b></color>   <color Red><b>1024</b></color>
 * 2 (2048 bytes)      1537            1537                             1537
 * 3 (3072 bytes)      3073            3072                             3072
 * 3 (3072 bytes)      2049            2049                             2049
 * </xtable>
 *****************************************************************************/
extern int FS_CheckFile(const WCHAR * FileName);

/*****************************************************************************
 * <GROUP  FolderOperation>
 *
 * FUNCTION
 *  FS_GetCurrentDir
 * DESCRIPTION
 *  Return the current drive and directory.
 * PARAMETERS
 *  DirName    : [OUT] <P>Must point to a string buffer to receive the full path
 *                        of the current directory.
 *  MaxLength  : [IN]  <P>Specifies the size of the buffer passed in DirName.
 *                        It is recommended to use a buffer with FS_MAX_PATH (520)
 *                        characters length. If the buffer is too small to hold
 *                        the current path, the function fails.
 * RETURNS
 *  If the function succeeds, the return value is FS_NO_ERROR and the current
 *  path has been copied to the specified buffer. If the function fails, the
 *  return value is a negative error code.
 *
 * NOTE
 *  This funciton returns the directory set by the nearest FS_SetCurrentDir(). To get
 *  current directory of a specified drive, please use FS_GetCurrentDirByDrive().
 *****************************************************************************/
extern int FS_GetCurrentDir(WCHAR * DirName, UINT MaxLength);

/*****************************************************************************
 * <GROUP  FolderOperation>
 *
 * FUNCTION
 *  FS_GetCurrentDirByDrive
 * DESCRIPTION
 *  Return the current drive and directory by given path.
 * PARAMETERS
 *  DirName    : [OUT]<P>Must point to a string buffer to receive the full path
 *                      of the current directory, including a drive letter.
 *  MaxLength  : [IN] <P>Specifies the size of the buffer passed in DirName.
 *                      It is recommended to use a buffer with FS_MAX_PATH (520)
 *                      characters length. If the buffer is too small to hold
 *                      the current path, the function fails.
 * RETURNS
 *  Please refer to FS_GetCurrentDir.
 *****************************************************************************/
extern int FS_GetCurrentDirByDrive(WCHAR * DirName, UINT MaxLength);

/*****************************************************************************
 * <GROUP  FolderOperation>
 *
 * FUNCTION
 *  FS_SetCurrentDir
 * DESCRIPTION
 *  Change the current directory and drive.
 * PARAMETERS
 *  DirName   : [IN] <P>DirName must point to the name of the new current directory.
 *                      The new directory can have any legal file name syntax. If
 *                      no drive is given, the current drive is not changed. In
 *                      other cases, both current drive and current directory are
 *                      changed as DirName.
 * RETURNS
 *  Successful: FS_NO_ERROR
 *  Failed: 	Please refer to fs_error_enum.
 * NOTE
 *  FS maintains a default directory for each drive, but only one drive and its
 *  current directory can be active at any one time.
 *****************************************************************************/
extern int FS_SetCurrentDir(const WCHAR * DirName);

/*****************************************************************************
 * <GROUP  FolderOperation>
 *
 * FUNCTION
 *  FS_CreateDir
 * DESCRIPTION
 *  Create a new directory(folder).
 * PARAMETERS
 *  DirName: [IN] <P>It must point to the name of the directory to create. The
 *                  directory can have any legal file name syntax.
 * RETURNS
 *  Successful: FS_NO_ERROR
 *  Failed: 	Please refer to fs_error_enum.
 *****************************************************************************/
extern int FS_CreateDir(const WCHAR * DirName);

/*****************************************************************************
 * <GROUP  FolderOperation>
 *
 * FUNCTION
 *  FS_RemoveDir
 * DESCRIPTION
 *  Removes a directory.
 * PARAMETERS
 *  DirName: [IN] <P>It must point to the name of the directory to be removed.
 *                  The directory can have any legal file name syntax.
 * RETURNS
 *  Successful: FS_NO_ERROR
 *  Failed: 	Please refer to fs_error_enum.
 * NOTE
 *  This function fails on an attempt to remove a current directory, a non-empty
 *  directory, or a root directory.
 *****************************************************************************/
extern int FS_RemoveDir(const WCHAR * DirName);

/*****************************************************************************
 * <GROUP  RecursiveOperation>
 *
 * FUNCTION
 *  FS_GetFolderSize
 * DESCRIPTION
 *  This function provides a facility to get folder size
 * PARAMETERS
 *  DirName        : [IN]<P>Full source path to be counted
 *  Flag           : [IN]<P>FS_COUNT_IN_BYTE, FS_COUNT_IN_CLUSTER
 *  RecursiveStack : [IN]<P>A memory pointer to store deep folder hierarchy recrusive data
 *  StackSize      : [IN]<P>The size of RecursiveStack
 * RETURNS
 *  >0       : Size in byte or cluster
 *  Error    : RTF_PATH_NOT_FOUND, RTF_PARAM_ERROR
 * NOTE
 *     1. The size here counts for FAT allocation, not only data setctor allocation
 *     2. This API leverage the Recursive Class
 *****************************************************************************/
extern int FS_GetFolderSize(const WCHAR *DirName, UINT Flag, BYTE *RecursiveStack, const UINT StackSize);

/*****************************************************************************
 * <GROUP  RecursiveOperation>
 *
 * FUNCTION
 *  FS_GetFolderSizeEx
 * DESCRIPTION
 *  This function provides a facility to get folder size with progress callback support
 * PARAMETERS
 *  DirName        : [IN]<P>Full source path to be counted
 *  Flag           : [IN]<P>FS_COUNT_IN_BYTE, FS_COUNT_IN_CLUSTER
 *  RecursiveStack : [IN]<P>A memory pointer to store deep folder hierarchy recrusive data
 *  StackSize      : [IN]<P>The size of RecursiveStack
 *  Progress       : [IN]<P>User callback. User can get progress of this API or abort this operation by returning a negative integer.
 * RETURNS
 *  >0       : Size in byte or cluster
 *  Error    : RTF_PATH_NOT_FOUND, RTF_PARAM_ERROR
 * NOTE
 *     1. The size here counts for FAT allocation, not only data setctor allocation
 *     2. This API leverage the Recursive Class
 *****************************************************************************/
extern int FS_GetFolderSizeEx(const WCHAR *DirName, UINT Flag, BYTE *RecursiveStack, const UINT StackSize, FS_ProgressCallback Progress);

/*****************************************************************************
 * <GROUP  FileContent>
 *
 * FUNCTION
 *  FS_Extend
 * DESCRIPTION
 *  To extend the allocated file size, but not the current file size of a file.
 * PARAMETERS
 *  FileHandle : [IN] <P>References the open file to be extended.
 *  Length     : [IN] <P>Specifies by how many bytes the file is to be extended relative to the current file pointer.
 * RETURNS
 *  Successful: FS_NO_ERROR
 *  Failed: 	Please refer to fs_error_enum.
 * RETURN VALUES
 *  FS_DISK_FULL (-22): FS cannot find a continuous chain of free clusters
 *                      long enough to satisfy the request. Because disk really
 *                      full and no any available free cluster.
 *  FS_DISK_FRAGMENT (-53): FS cannot find a continuous chain of free clusters
 *                          long enough to satisfy the request. But some fragment
 *                          free clusters found.
 * EXAMPLE
 * <code>
 *      #include "kal_general_types.h"
 *      #include "fs_gprot.h"
 *
 *      #define CHUNK_SIZE (5 * 1024)
 *      kal_uint8 sample_extend_buff[6 * 1024];
 *
 *      static kal_int32 sample_extend_body(kal_uint8 *dirty_buffer_ptr, kal_uint32 dirty_buffer_size)
 *      {
 *          FS_HANDLE fp = FS_Open(L"e:\\temp.txt", FS_READ_WRITE);
 *
 *          if (fp > FS_NO_ERROR)
 *          {
 *              kal_int32 ret = FS_NO_ERROR;
 *
 *              while (dirty_buffer_size > CHUNK_SIZE)
 *              {
 *                  ret = FS_Extend(fp, CHUNK_SIZE);
 *                  if (ret < FS_NO_ERROR)
 *                      break;
 *
 *                  ret = FS_Write(fp, dirty_buffer_ptr, CHUNK_SIZE, &written);
 *                  if (ret < FS_NO_ERROR)
 *                      break;
 *
 *                  dirty_buffer_size -= CHUNK_SIZE;
 *              }
 *              FS_Close(fp);
 *          }
 *      }
 *
 *      void sample_extend_main(void)
 *      {
 *          kal_int32 result = FS_NO_ERROR;
 *
 *          kal_mem_set(sample_extend_buff, 0xFF, sizeof(sample_extend_buff));
 *          result = sample_extend_body(sample_extend_buff, sizeof(sample_extend_buff));
 *          if (result == FS_NO_ERROR)
 *          {
 *              USER_PROMPT("FS_Extend success!");
 *          }
 *          else
 *          {
 *              USER_PROMPT("FS_Extend faile! error code = %d", result);
 *          }
 *      }
 * </code>
 *****************************************************************************/
extern int FS_Extend(FS_HANDLE FileHandle, UINT Length);

/*****************************************************************************
 * <GROUP  FileContent>
 *
 * FUNCTION
 *  FS_Truncate
 * DESCRIPTION
 *  To set the current file size to the current file pointer position.
 * PARAMETERS
 *  FileHandle : [IN] <P>References the open file to be truncated.
 * RETURNS
 *  Successful: FS_NO_ERROR
 *  Failed: 	Please refer to fs_error_enum.
 * NOTE
 *  Users must seek to the "point to trunck" first.
 *****************************************************************************/
extern int FS_Truncate(FS_HANDLE FileHandle);

/*****************************************************************************
 * <GROUP  DirectoryEntry>
 *
 * FUNCTION
 *  FS_MakeFileName
 * DESCRIPTION
 *  This function will provide a facility for user to get a short file name (SFN)
 *  or long file name (LFN) via specified file handle. However, if the length of
 *  file name buffer is not big enough to store the requested LFN, SFN will be
 *  returned.
 * PARAMETERS
 *  FileHandle : [IN]  <P>The file handle from successful FS_Open
 *  Flag       : [IN]  <P>FS_LONGNAME_ATTR: Get LFN from disk to FileName buffer
 *                     <P>0: Get SFN from disk to FileName buffer (default choice)
 *  FileName   : [OUT] <P>User provides wide character buffer for file system to store SFN or LFN
 *  MaxLength  : [IN]  <P>The length of the FileName buffer in ¨byte?
 * RETURNS
 *  If the function succeeds, the return value is FS_NO_ERROR. If the function fails
 *  (EX: file handle is invalid or input buffer is too small that cannot keep a SFN),
 *  the return value is a negative error code.
 *****************************************************************************/
extern int FS_MakeFileName(FS_HANDLE FileHandle, UINT Flag, WCHAR * FileName, UINT MaxLength);

/*****************************************************************************
 * <GROUP  DirectoryEntry>
 *
 * FUNCTION
 *  FS_Rename
 * DESCRIPTION
 *  Rename a file.
 * PARAMETERS
 *  FileName   : [IN]  <P>Must point to the name of the file to be renamed.
 *  NewName    : [OUT] <P>It points to the new name of the file. Both file names
 *                      must not contain wildcards and must reference the same
 *                      logical drive. However, they may reference different
 *                      directories. Data files and directory files (except
 *                      root directories) may be renamed or moved with this
 *                      call.
 * RETURNS
 *  If the function succeeds, the return value is FS_NO_ERROR. If the function
 *  fails, the return value is a negative error code. This function fails if a
 *  file with the name specified by NewName already exists, on an attempt to
 *  rename the current directory or a parent of the current directory, or on
 *  an attempt to rename a volume label.
 *****************************************************************************/
extern int FS_Rename(const WCHAR * FileName, const WCHAR * NewName);

/*****************************************************************************
 * <GROUP  RecursiveOperation>
 *
 * FUNCTION
 *  FS_Move
 * DESCRIPTION
 *  This function provides a facility to move/copy a file or folder
 * PARAMETERS
 *  SrcFullPath    : [IN] <P>Source path to be moved/copied
 *  DstFullPath    : [IN] <P>Destination path
 *  Flag           : [IN]
 *      FS_MOVE_OVERWRITE(4) - Overwrite the destination if it has already existed. This option should combine with FS_MOVE_COPY or FS_MOVE_KILL via ¯|?.
 *      FS_MOVE_COPY (2) - Copy from source to destination and keep the source file/folder. This option cannot combine with FS_MOVE_KILL.
 *      FS_MOVE_KILL (1) - Move from source to destination and do not keep the source file/folder. This option cannot combine with FS_MOVE_COPY.
 *  RecursiveStack : [IN] <P>A memory pointer to store deep folder hierarchy recrusive data
 *                        Before W08.40: If NULL, only 39 levels supported. It?s recommend
 *                        that foreground application should provide 6.6K bytes to support up
 *                        to maximum 128 levels in FAT specification.
 *                        After 08A W08.40 (Included): If NULL, only 39 levels supported.
 *                        To support deeper folders, user should assign the RecursiveStack
 *                        of proper size. The minimum space required for 128 levels is about
 *                        11K bytes. Here is a helper macro to calculate the required buffer
 *                        for different levels. -FS_MOVE_BUFFER_SIZE_FOR_FOLDER_LEVEL(x).
 *  StackSize      : [IN] <P>The size of RecursiveStack
 * RETURNS
 *  Successful: FS_NO_ERROR
 *  Failed: 	As below
 * RETURN VALUES
 *  FS_PARAM_ERROR (-2): Neither FS_MOVE_COPY nor FS_MOVE_KILL is specified in parameter, Flag.
 *  FS_INVALID_FILENAME (-3): Either SrcFullPath or DstFullPath is wrong
 *  FS_PATH_NOT_FOUND (-19): Cannot find SrcFullPath specified in the first parameter.
 *  FS_FILE_EXISTS (-36): DstFullPath exists while FS_MOVE_OVERWRITE is not specified in the third parameter.
 *  FS_FAIL_GET_MEM (-44): Cannot get memory to do the operation
 *  FS_READ_ONLY_ERROR (-45): The SrcFullPath contain READ_ONLY file attribute that cannot be move across drive/partition.
 *  FS_ABORTED_ERROR (-47): This action has been aborted in the user?s callback function.
  * NOTE
 *     1. Original RTFRename does not allow move to different drive
 *     2. Only can file to file or dir to dir
 *     3. This API leverage the Recursive Class
 * EXAMPLE
 * <code>
 *      (1)FS_Move(L"E:\\AUDIO", L"D:\\AUDIO", FS_MOVE_OVERWRITE | FS_MOVE_COPY, YourCallBack, NULL, 0);
 *      (2)FS_Move(L"E:\\AUDIO\test.txt", L"D:\\AUDIO\test.txt", FS_MOVE_COPY, YourCallBack, NULL, 0);
 *      (3)FS_Move(L"E:\\AUDIO\test.txt", L"D:\\AUDIO\test.txt", FS_MOVE_KILL, YourCallBack, NULL, 0);
 *      (4)FS_Move(L"E:\\AUDIO", L"D:\\AUDIO", FS_MOVE_OVERWRITE | FS_MOVE_KILL, YourCallBack, NULL, 0);
 *
 *
 *      int YourCallBack(int Action, UINT Total, UINT Completed, UINT MyHandle)
 *      {
 *          if (Action == FS_MOVE_PGS_PREPARE)
 *          //show preparing image
 *          else if (Action == FS_MOVE_PGS_START)
 *          //show empty progressing bar
 *          else if (Action == FS_MOVE_PGS_FAIL)
 *          //show error message
 *          else if (Action == FS_MOVE_PGS_DONE)
 *          //show full progressing bar and then show ¨Done? image
 *          else if (Action == FS_MOVE_PGS_ING)
 *          {
 *              if (WantStop && (MyHandle > 0))
 *              {
 *                  FS_Abort(MyHandle);
 *              }
 *              else
 *              {
 *                  //show progressing percentage: (Completed/Total) *100%
 *                  //Be careful of the DIV BY ZERO problem here
 *              }
 *          }
 *      }
 * </code>
  *****************************************************************************/
extern int FS_Move(const WCHAR * SrcFullPath, const WCHAR * DstFullPath, UINT Flag, FS_ProgressCallback Progress, BYTE *RecursiveStack, const UINT StackSize);

/*****************************************************************************
 * <GROUP  RecursiveOperation>
 *
 * FUNCTION
 *  FS_Move
 * DESCRIPTION
 *  This function provides a facility to count the number of files
 *  or folders recursively
 * PARAMETERS
 *  FullPath:      : [IN] <P>Source path to be counted
 *  Flag:          : [IN] <P>All the types as following can combine together
 *      FS_FILE_TYPE - Count files
 *      FS_DIR_TYPE - Count folders
 *      FS_RECURSIVE_TYPE - Count recursively including the sub-folder inside
 *                          the source folder. This option works only when
 *                          FS_DIR_TYPE is chosen.
 *      FS_FILTER_SYSTEM_ATTR - Count file/folder without ¨SYSTEM? attribute.
 *      FS_FILTER_HIDDEN_ATTR - Count file/folder without ¨HIDDEN? attribute.
 *  RecursiveStack:: [IN] <P>A memory pointer to store deep folder hierarchy recrusive data
 *  StackSize:     : [IN] <P>The size of RecursiveStack
 * RETURNS
 *  Successful: FS_NO_ERROR
 *  Failed: 	As below
 * RETURN VALUES
 *  FS_PARAM_ERROR(-2): Neither FS_FILE_TYPE nor FS_DIR_TYPE nor FS_RECURSIVE_TYPE
 *                      is specified in parameter, Flag.
 *  FS_INVALID_FILENAME(-3): FullPath is wrong
 *  FS_PATH_NOT_FOUND(-19): Cannot find FullPath specified in the first parameter.
 *  FS_FAIL_GET_MEM(-44): Cannot get memory to do the operation
 * NOTE
 *  This API needs to get control buffer for operation.
 *  If it cannot get memory at that time, error code (-44) will be returned..
 * EXAMPLE
 * <code>
 *      (1) FS_Count(L"D:\\AUDIO", FS_FILE_TYPE | FS_DIR_TYPE | FS_RECURSIVE_TYPE, NULL, 0);
 *      (2) FS_Count(L"D:\\AUDIO", FS_ DIR _TYPE | FS_RECURSIVE_TYPE, NULL, 0);
 *      (3) FS_Count(L"D:\\AUDIO", FS_FILE_TYPE, NULL, 0);
 *      (4) FS_Count(L"D:\\AUDIO", FS_FILE_TYPE | FS_DIR_TYPE, NULL, 0);
 * </code>
 *****************************************************************************/
extern int FS_Count(const WCHAR * FullPath, UINT Flag, BYTE *RecursiveStack, const UINT StackSize);


/*****************************************************************************
 * <GROUP  RecursiveOperation>
 *
 * FUNCTION
 *  FS_XDeleteEx
 * DESCRIPTION
 *  This function provides a facility to delete a file or folder recursively
 * PARAMETERS
 *  FullPath:      : [IN] <P>Source path to be counted
 *  Flag:          : [IN] <P>All the three types as following can combine together
 *          FS_FILE_TYPE(2) - Delete files
 *          FS_DIR_TYPE(4) - Delete folders
 *          FS_RECURSIVE_TYPE(8) -  Delete recursively including the sub-folder
 *                                  inside the source folder. This option works
 *                                  only when FS_DIR_TYPE is chosen.
 *  RecursiveStack:: [IN] <P>An external buffer for deep directory hierarchy processing.
 *                           Before W08.40, if NULL, only 39 levels supported. It's
 *                           recommend that foreground application should provide 6.6K
 *                           bytes to support up to maximum 128 levels in FAT specification.
 *                           After 08A W08.40 (Included), if NULL, only 39 levels supported.
 *                           To support deeper folders, user should assign the RecursiveStack
 *                           of proper size. The minimum space required for 128 levels is about
 *                           8.5K bytes. Here is a helper macro to calculate the required buffer
 *                           for different levels. - FS_XDELETE_BUFFER_SIZE_FOR_FOLDER_LEVEL (x).
 *  StackSize:     : [IN] <P>The size of RecursiveStack
 * RETURNS
 *  Successful: FS_NO_ERROR
 *  Failed: 	As below
 * RETURN VALUES
 *  FS_PARAM_ERROR(-2): Neither FS_FILE_TYPE nor FS_DIR_TYPE nor FS_RECURSIVE_TYPE
 *                      is specified in parameter, Flag.
 *  FS_INVALID_FILENAME(-3): FullPath is wrong
 *  FS_PATH_NOT_FOUND(-19): Cannot find FullPath specified in the first parameter.
 *  FS_FAIL_GET_MEM(-44): Cannot get memory to do the operation
 * NOTE
 *  (1) This API needs to get control buffer for operation. If it cannot get memory
 *      at that time, error code (-44) will be returned..
 *  (2) if the target folder is an empty folder, an error string like ¨[FS ERR]-10#4234@fs> Task(TASK) 65531th FH?
 *      will show up in FS Trace. This is normal. It does NOT mean that FS_XDelete is failed.
 *****************************************************************************/
extern int FS_XDelete(const WCHAR * FullPath, UINT Flag, BYTE *RecursiveStack, const UINT StackSize);

/*****************************************************************************
 * <GROUP  RecursiveOperation>
 *
 * FUNCTION
 *  FS_XDeleteEx
 * DESCRIPTION
 *  This function provides a facility to delete a file or folder recursively
 * PARAMETERS
 *  FullPath      : [IN]<P>Source path to be counted
 *  Flag          : [IN]<P>All the three types as following can combine together
 *          FS_FILE_TYPE(2) - Delete files
 *          FS_DIR_TYPE(4) - Delete folders
 *          FS_RECURSIVE_TYPE(8) -  Delete recursively including the sub-folder
 *                                  inside the source folder. This option works
 *                                  only when FS_DIR_TYPE is chosen.
 *  Progress        : [IN] <P>User callback
 *  RecursiveStack  : [IN] <P>An external buffer for deep directory hierarchy processing.
 *                         Before W08.40, if NULL, only 39 levels supported. It's
 *                         recommend that foreground application should provide 6.6K
 *                         bytes to support up to maximum 128 levels in FAT specification.
 *                         After 08A W08.40 (Included), if NULL, only 39 levels supported.
 *                         To support deeper folders, user should assign the RecursiveStack
 *                         of proper size. The minimum space required for 128 levels is about
 *                         8.5K bytes. Here is a helper macro to calculate the required buffer
 *                         for different levels. - FS_XDELETE_BUFFER_SIZE_FOR_FOLDER_LEVEL (x).
 *  StackSize       : [IN] <P>The size of RecursiveStack
 * RETURNS
 *  Successful: FS_NO_ERROR
 *  Failed: 	As below
 * RETURN VALUES
 *  FS_PARAM_ERROR(-2): Neither FS_FILE_TYPE nor FS_DIR_TYPE nor FS_RECURSIVE_TYPE
 *                      is specified in parameter, Flag.
 *  FS_INVALID_FILENAME(-3): FullPath is wrong
 *  FS_PATH_NOT_FOUND(-19): Cannot find FullPath specified in the first parameter.
 *  FS_FAIL_GET_MEM(-44): Cannot get memory to do the operation
 * NOTE
 *  (1) This API needs to get control buffer for operation. If it cannot get memory
 *      at that time, error code (-44) will be returned..
 *  (2) if the target folder is an empty folder, an error string like ¨[FS ERR]-10#4234@fs> Task(TASK) 65531th FH?
 *      will show up in FS Trace. This is normal. It does NOT mean that FS_XDelete is failed.
 *****************************************************************************/
extern int FS_XDeleteEx(const WCHAR * FullPath, UINT Flag, FS_ProgressCallback Progress, BYTE *RecursiveStack, const UINT StackSize);

/*****************************************************************************
 * <GROUP  DiskManagement>
 *
 * FUNCTION
 *  FS_CompactDir
 * DESCRIPTION
 *  This function provides a facility to release space of a folder which contains "deleted" files/folders.
 * PARAMETERS
 *  DirName : [IN] <P>the folder to compact.
 *  Flags   : [IN] <P> FS_CMPCT_RECURSIVE only
 * RETURNS
 *  Please refer to fs_error_enum.
 *****************************************************************************/
extern int FS_CompactDir(const WCHAR* DirName, UINT Flags);

/*****************************************************************************
 * <GROUP  DirectoryEntry>
 *
 * FUNCTION
 *  FS_CheckVolumeLabel
 * DESCRIPTION
 *  This function provides a facility to check if the volume label is valid.
 * PARAMETERS
 *  Path : [IN] <P>The volume label.
 * RETURNS
 *  If volume label is valid, FS_NO_ERROR is returned.
 *  For error case, please refer to fs_error_enum.
 *****************************************************************************/
extern int FS_CheckVolumeLabel(WCHAR *Label);

/*****************************************************************************
 * <GROUP  DirectoryEntry>
 *
 * FUNCTION
 *  FS_CheckFileName
 * DESCRIPTION
 *  This function provides a facility to check if the specified file name is valid.
 * PARAMETERS
 *  Path : [IN] <P>The file path. Both full path or file name only are acceptible.
 *                 If it is full path, FS will only check the file name, i.e., the last part after '\\'.
 * RETURNS
 *  If file name is valid, FS_NO_ERROR is returned.
 *  For error case, please refer to fs_error_enum.
 *****************************************************************************/
extern int FS_CheckFileName(WCHAR *Path);

/*****************************************************************************
 * <GROUP  Enumerate>
 *
 * FUNCTION
 *  FS_FindFirst
 *
 * DESCRIPTION
 *  Search a directory for a file satisfying certain criteria.
 *
 * PARAMETERS
 *  NamePattern    : [IN]    <P>Pointer to a file name which may contain wildcard characters '*'
 *                              (match zero or more characters) and/or '?' (match exactly one
 *                              character), and can optionally be preceded by a path. If a path
 *                              is present, it must not contain any wildcard characters.
 *                              For compatibility with MS-DOS, Pattern "*.*" is silently converted
 *                              to "*". To search for file names containing one or more periods,
 *                              use "?*.*" or "*.?*".
 *  Attr           : [IN]    <P>Specifies a set of all file attributes a file must have to match
 *                              the request.
 *  AttrMask       : [IN]    <P>Specified the set of attributes, which are matched against Attr.
 *                              Attributes set in Attr are automatically added to AttrMask. Any
 *                              combination of the following flags can be specified for Attr and
 *                              AttrMask:
 *                                  FS_ATTR_READ_ONLY
 *                                  FS_ATTR_HIDDEN
 *                                  FS_ATTR_SYSTEM
 *                                  FS_ATTR_VOLUME
 *                                  FS_ATTR_DIR
 *                                  FS_ATTR_ARCHIVE
 *  FileInfo       : [IN/OUT] <P>It?s a pointer to FS_DOSDirEntry structure. If the function succeeds,
 *                               this structure will be filled with the directory entry of the file
 *                               found. This parameter may be NULL. Refer to FS_FIND_ENUM.
 *  FileName       : [IN]    <P>Pointer to a string buffer to receive the file name without path if
 *                              a file is found.
 *  MaxLength      : [IN]    <P>Size in bytes of the buffer pointed to by FileName. Files with a file
 *                              name length larger than MaxLength-1 will not be found. Be careful that
 *                              it should be the length of wide-characters.
 * RETURNS
 *  If the function succeeds, at least one file satisfies the search criteria. *FileInfo contains the
 *  directory entry of the first file and the function return value is greater than or equal to 0. The
 *  return value is a file handle, which may be passed to subsequent calls to FS_FindNext. If the function
 *  fails, the return value is a negative error code. In this case, no handle is allocated and FS_FindClose
 *  need not be called.
 *  It is important to close the handle using FS_FindClose when no longer needed. Failing to do so will
 *  quickly exhaust the available file handles.
 *****************************************************************************/
extern int FS_FindFirst(const WCHAR * NamePattern, BYTE Attr, BYTE AttrMask, FS_DOSDirEntry * FileInfo, WCHAR * FileName, UINT MaxLength);

/*****************************************************************************
 * <GROUP  Enumerate>
 *
 * FUNCTION
 *  FS_FindNext
 *
 * DESCRIPTION
 *  Find more files with the same search criteria as a preceding call to FS_FindFirst.
 *
 * PARAMETERS
 *  FileHandle     : [IN]    <P>Handle returned by a previous successful call to FS_FindFirst.
 *  FileInfo       : [IN/OUT]<P>It?s a pointer to FS_DOSDirEntry structure (may be NULL).
 *  FileName       : [IN]    <P>It?s a pointer to a string buffer to receive a file name without path.
 *  MaxLength      : [IN]    <P>Size in bytes of the buffer pointed to by FileName. Files with a file
 *                              name length larger than MaxLength-1 will not be found. Be careful that
 *                              it should be the length of wide-characters
 * RETURNS
 *  If the function succeeds, the return value is FS_NO_ERROR. If the function fails or no more files
 *  are found, the return value is a negative error code.If the function succeeds, *FileInfo and
 *  *FileName will be filled with the directory entry and name of the file found.
 *****************************************************************************/
extern int FS_FindNext(FS_HANDLE FileHandle, FS_DOSDirEntry * FileInfo, WCHAR * FileName, UINT MaxLength);

/*****************************************************************************
 * <GROUP  Enumerate>
 *
 * FUNCTION
 *  FS_FindFirstN
 *
 * DESCRIPTION
 *  This function provides a facility to find Nth matching file
 *  and multi-patterns are supported
 *
 * PARAMETERS
 *  NamePattern    : [IN]    <P>Find Pattern (Must have drive name)
 *  PatternArray   : [IN]    <P>Multi-patterns array (should not have drive name)
 *  PatternNum     : [IN]    <P>Indicate how many pattern in PatternArray
 *  ArrayMask      : [IN]    <P>The attributes that match default NamePattern only
 *  Attr           : [IN]    <P>The attributes must have
 *  AttrMask       : [IN]    <P>The attributes must not have
 *  FileInfo       : [IN/OUT]<P>File information
 *  FileName       : [IN]    <P>the long file name
 *  MaxLength      : [IN]    <P>The length of FileName
 *  EntryIndex     : [IN]    <P>Find Nth index
 *
 * RETURNS
 *  Success:       FS_NO_ERROR
 *  Error:         Please refer to fs_error_enum.
 *****************************************************************************/
extern int FS_FindFirstN(const WCHAR * NamePattern, FS_Pattern_Struct * PatternArray, UINT PatternNum, BYTE ArrayMask, BYTE Attr, BYTE AttrMask, FS_DOSDirEntry * FileInfo, WCHAR * FileName, UINT MaxLength, UINT EntryIndex, UINT Flag);

/*****************************************************************************
 * <GROUP  Enumerate>
 *
 * FUNCTION
 *  FS_FindNextN
 * DESCRIPTION
 *  This function provides a facility to find next matching file
 *  and multi-patterns are supported
 * PARAMETERS
 *  Handle         : [IN]    <P>The file handle record the find position
 *  PatternArray   : [IN]    <P>Multi-patterns array (should not have drive name)
 *  PatternNum     : [IN]    <P>Indicate how many pattern in PatternArray
 *  ArrayMask      : [IN]    <P>The attributes that match default NamePattern only
 *  FileInfo       : [IN/OUT]<P>File information
 *  FileName       : [IN]    <P>File name
 *  MaxLength      : [IN]    <P>The length of the file name buffer
 * RETURNS
 *  Success:       FS_NO_ERROR
 *  Error:         Please refer to fs_error_enum.
 *****************************************************************************/
extern int FS_FindNextN(FS_HANDLE Handle, FS_Pattern_Struct * PatternArray, UINT PatternNum, BYTE ArrayMask, FS_DOSDirEntry * FileInfo, WCHAR * FileName, UINT MaxLength, UINT Flag);

/*****************************************************************************
 * <GROUP  Enumerate>
 *
 * FUNCTION
 *  FS_FindClose
 * DESCRIPTION
 *  To close the handle of FS_FindFirst or FS_FindFirstN
 * PARAMETERS
 *  handle  : [IN] <P>the handle of FS_FindFirst or FS_FindFirstN
 * RETURNS
 *  Successful: A non-negative value.
 *  Failed: 	Please refer to fs_error_enum.
 *****************************************************************************/
extern int FS_FindClose(FS_HANDLE FileHandle);

/*****************************************************************************
 * <GROUP  Enumerate>
 *
 * FUNCTION
 *  FS_ListOpen
 * DESCRIPTION
 *  1. To open specific folder and loading file elements with given parameters
 *     into a backgroud list.
 *  2. Similar to opendir of Posix.
 * PARAMETERS
 *  param   : [IN]  <P>parameter set and list buffer; refer to fs_list_param_struct.
 *  handle  : [OUT] <P>special handle of List serial APIs.
 * RETURNS
 *  Successful: FS_NO_ERROR
 *  Failed: 	Please refer to fs_error_enum.
 * NOTE
 *  only one of name_pattern and attr_pattern can be used at the same time
 * EXAMPLE
 * <code>
 *      //Intention:  to list the first 20 file names under e:\\Photos\\
 *      FS_HANDLE list;
 *      kal_int32 result, i = 0;
 *      kal_wchar wfn[10] = {0};
 *      kal_char  fn[10] = {0};
 *      fs_list_param_struct param = {0};
 *
 *      param.path = (kal_wchar *)get_ctrl_buffer(FS_MAX_PATH);
 *      kal_wsprintf(param.path, "E:\\Photos\\*.*");
 *
 *      param.index = 0;
 *      param.buff_size = FS_LIST_SIZE(20);
 *      param.buff = (fs_list_param_struct *)get_ctrl_buffer(param.buff_size);
 *
 *      result = FS_ListOpen(&param, &list);
 *
 *      while (result >= FS_NO_ERROR)
 *      {
 *          result = FS_ListNext(list, NULL, param.path, wfn, 10, i);
 *          if (result <FS_NO_ERROR)
 *              break;
 *
 *          kal_dchar2char(wfn, fn);
 *          kal_prompt_trace(MOD_USER, "%s", fn);
 *      }
 *      FS_ListClose(list);
 *
 *      free_ctrl_buffer(param.buff);
 *      free_ctrl_buffer(param.path);
 * </code>
  *****************************************************************************/
extern kal_int32 FS_ListOpen(fs_list_param_struct *param, FS_HANDLE *handle);

/*****************************************************************************
 * <GROUP  Enumerate>
 *
 * FUNCTION
 *  FS_ListReload
 * DESCRIPTION
 *  Continue to batch enumerate next N files after FS_ListOpen().
 * PARAMETERS
 *  param   : [IN]  <P>parameter set and list buffer; refer to fs_list_param_struct.
 *  handle  : [OUT] <P>special handle of List serial APIs.
 * RETURNS
 *  Successful: FS_NO_ERROR
 *  Failed: 	Please refer to fs_error_enum.
 * NOTE
 *  The param and handle must be identical to those were passed to FS_ListOpen().
 * EXAMPLE
 * <code>
 * </code>
  *****************************************************************************/
extern kal_int32 FS_ListReload(fs_list_param_struct *param, FS_HANDLE *handle);

/*****************************************************************************
 * <GROUP  Enumerate>
 *
 * FUNCTION
 *  FS_ListNext
 * DESCRIPTION
 *  1. To retrive the Nth element of the background list.
 *  2. Similar to readdir of Posix
 *  3. optional parameters could be NULL or 0
 * PARAMETERS
 *  handle        : [IN]      <P>special handle of List serial APIs.
 *  info          : [IN/OUT]  <P>(optional)the DOS style information of an element if found. Such as short file name.
 *  path          : [IN]      <P>working diretory which will be filled into internal hint
 *  lfilename     : [IN/OUT]  <P>the buffer to carry long file name if found.
 *  lfilename_size: [IN]      <P>the buffer size of lfilename with includes null terminator
 *  index         : [IN]      <P>specific zero-based index in the list
 * RETURNS
 *  Successful: FS_NO_ERROR
 *  Failed: 	Please refer to fs_error_enum.
 *****************************************************************************/
extern kal_int32 FS_ListNext(FS_HANDLE handle,
                             FS_DOSDirEntry *info, kal_wchar *path, kal_wchar *lfilename, kal_uint32 lfilename_size,
                             kal_int32 index);

/*****************************************************************************
 * <GROUP  Enumerate>
 *
 * FUNCTION
 *  FS_ListClose
 * DESCRIPTION
 *  1. To close the list.
 *  2. Similar to closedir of Posix.
 * PARAMETERS
 *  handle    : [IN] <P>special handle of List serial APIs.
 * RETURNS
 *  Successful: FS_NO_ERROR
 *  Failed: 	Please refer to fs_error_enum.
 *****************************************************************************/
extern kal_int32 FS_ListClose(FS_HANDLE handle);

extern void FS_Config(fs_config_enum type, void * data);

#ifdef __FS_SORT_SUPPORT__
/*****************************************************************************
 * <GROUP  Sort>
 *
 * FUNCTION
 *  FS_SortCompareFileName
 * DESCRIPTION
 *  The build-in compare function. Compare by name
 * PARAMETERS
 *  FileName1    : [IN] <P>source of the comparison.
 *  FileName2    : [IN] <P>target of the comparison.
 * RETURN VALUES
 *  -1  : char in FileName1 is less than that in FileName2
 *   1  : char in FileName1 is greater than that in FileName2
 *   0  : equal or no difference is found till all char in FileName1 is traversed.
 *****************************************************************************/
extern int FS_SortCompareFileName(WCHAR *FileName1, WCHAR *FileName2);

/*****************************************************************************
 * <GROUP  Sort>
 *
 * FUNCTION
 *  FS_SortCompareFileType
 * DESCRIPTION
 *  The build-in compare function. Compare by type
 * PARAMETERS
 *  FileName1    : [IN] <P>source of the comparison.
 *  FileName2    : [IN] <P>target of the comparison.
 * RETURN VALUES
 *  -1  : char in FileName1 is less than that in FileName2
 *   1  : char in FileName1 is greater than that in FileName2
 *   0  : equal or no difference is found till all char in FileName1 is traversed.
 *****************************************************************************/
extern int FS_SortCompareFileType(WCHAR *FileName1, WCHAR *FileName2);

/*****************************************************************************
 * <GROUP  Sort>
 *
 * FUNCTION
 *  FS_XFindReset
 * DESCRIPTION
 *  This function provides a facility to reset a sort list recursively
 * PARAMETERS
 *  Param   : [IN] <P>Please refer to FS_SortingParam.
 * RETURN VALUES
 *  >= 0: The number of folders/files that had been sorted.
 *  FS_PARAM_ERROR (-2): Some of the parameters are invalid.
 *  FS_NO_MORE_FILES (-6): Cannot find any file that matches the pattern anymore
 *  FS_ACCESS_DENIED (-16):  You didn't get the lock from FS_XFindReset. The passed buffer or data does not belong to this function.
 *  FS_FAIL_GET_MEM: Invalid buffer space or size.
 *  FS_ABORTED_ERROR: The sorting is aborted.
 *  FS_NO_MORE_FILES: No more files to be retrieved.
 *  FS_TOO_MANY_FILES: The sorting buffer or working buffer is too small.
 * NOTE
 *  (1) Please be care of the <b>MaxLength</b> input. If it?s too small that FS cannot make short name for you, the sorting sequence will be corrupted, i.e. make sure your length must be greater than 22 characters (11 wide characters).
 *  (2) If you want to get specific sorting result, just put (index -1) into the input parameter.
 *  (3) If you get the sorted filename by this function with index from 0 to (the sorted file number -1), the result will be in ASC order. If you want to get the filename in DESC order, you can get the sorted filename with index from (the sorted file number -1) to 0.
 *****************************************************************************/
extern int FS_XFindReset(FS_SortingParam *Param);

/*****************************************************************************
 * <GROUP  Sort>
 *
 * FUNCTION
 *  FS_XFindStart
 * DESCRIPTION
 *  This function retrieves entry from the sorting list  got from FS_XFindReset one by one.
 * PARAMETERS
 *  Pattern     : [IN]  <P>Find Pattern
 *  FileInfo    : [OUT] <P>File information
 *  FileName    : [OUT] <P>File name
 *  MaxLength   : [IN]  <P>The length of FileName buffer
 *  Index       : [IN]  <P>Find index
 *  Position    : [IN]  <P>The sorted list
 * RETURN VALUES
 *  Value >= 0: The number of folders/files that had been sorted.
 *  FS_PARAM_ERROR (-2): Given an negative index number
 *  FS_NO_MORE_FILES (-6): Cannot find any file that matches the pattern anymore
 *  FS_ACCESS_DENIED (-16): You didn?t get the lock from FS_XFindReset.
 *****************************************************************************/
extern int FS_XFindStart(const WCHAR * Pattern, FS_DOSDirEntry * FileInfo, WCHAR * FileName, UINT MaxLength, UINT Index, UINT * Position, UINT Flag);

/*****************************************************************************
 * <GROUP  Sort>
 *
 * FUNCTION
 *  FS_XFindClose
 * DESCRIPTION
 *  This function closes the sorting list got from FS_XFindReset.
 * PARAMETERS
 *  Position    : [IN]  <P>The sorted list
 * RETURN VALUES
 *  FS_NO_ERROR: Successful
 *  FS_PARAM_ERROR (-2): Given an negative index number
 *  FS_ACCESS_DENIED (-16): You didn't get the lock from FS_XFindReset.
 *****************************************************************************/
extern int FS_XFindClose(UINT * Position);
#endif

/*****************************************************************************
 * <GROUP  VolumeManagement>
 *
 * FUNCTION
 *  FS_GetDrive
 * DESCRIPTION
 *  Our system support 1 NOR flash + 1 NAND flash + maximum 1 memory card concurrently (Maximum 5 drives). If it acts as a USB slave, we may have the ¨partition? issue: Some private data, like NVRAM or files with digital right, should not be exposed to PC side.
 *  <img name="FlashConfig" />
 *  For the special need, we must create partition on our disk. And in order to reduce driver effort, we have to mark the first primary partition as visible and secondary primary partition as invisible. When system acts as USB slave, driver will fool PC side that the ?whole disk? is just big as the visible partition size.
 *  PS. Memory card should not be partitioned.
 * <xtable>
 *  IDX     DRIVES  NOR     NAND    CARD    NORMAL 1    NORMAL 2    SYS 1   SYS 2   CARD
 *           Num
 * -----    ------  ---     ----    ----    --------    --------    -----   -----   ----
 *  1       5       2       2       1       C           D           E       F       G
 *  2       4       2       1       1       C           D           E               F
 *  3       4       2       2       0       C           D           E       F
 *  4       4       1       2       1       D                       C       E       F
 *  5       3       2       0       1       C                       D               E
 *  6       3       2       1       0       C           D           E
 *  7       3       1       1       1       D                       C               E
 *  8       3       1       2       0       D                       C       E
 *  9       3       0       2       1       C                       D               E
 *  10      2       2       0       0       C                       D
 *  11      2       1       0       1                               C               D
 *  12      2       1       1       0       D                       C
 *  13      2       0       1       1                               C               D
 *  14      2       0       2       0       C                       D
 *  15      1       1       0       0                               C
 *  16      1       0       1       0                               C
 * </xtable>
 *  SYS 1/2: Invisible drive when system acts as USB slave.
 *  Normal 1/2 and memory card: Visible drive when system acts as USB slave
 *
 *  In additional to those fixed and internal drives listed above, USB OTG Host support enable system to connect to external card reader with multiple card slots. File System reserved 1 drive to each slot and start from next drive letter of last internal drive index. The maximum number of external drives is customized configuration.
 * PARAMETERS
 *  Type   : [IN] <P>3 kinds of drive types
 *           <P>FS_DRIVE_I_SYSTEM     0x00000004
 *           <P>FS_DRIVE_V_NORMAL     0x00000008
 *           <P>FS_DRIVE_V_REMOVABLE  0x00000010
 *           <P>FS_DRIVE_V_EXTERNAL   0x00000020
 *  Serial : [IN] <P>drive number (SYSTEM: 1or 2, NORMAL: 1 or 2, REMOVABLE: 1, EXTERNAL: 1~N(customized) )
 *  AltMask: [IN] <P>3 ways to choose alternative drive
 *           <P>FS_NO_ALT_DRIVE       		0x00000001 (Can not combine other type)
 *           <P>FS_ONLY_ALT_SERIAL    		0x00000002 (Can not combine other type)
 *           <P>Combination of 3 types (FS_DRIVE_I_SYSTEM | FS_DRIVE_V_NORMAL | FS_DRIVE_V_REMOVABLE)
 * RETURN VALUES
 *  Capital drive name:
 *      C=67, D=68, E=69, F=70
 *      G=72, H=73, I=74, J=75?
 *  FS_PARAM_ERROR (-2):
 *      Use special type not defined here
 *      Serial number over range
 *      AltMask use FS_NO_ALT_DRIVE | other type
 *      AltMask use FS_ONLY_ALT_SERIAL | other type
 *      AltMask contain FS_DRIVE_V_EXTERNAL
 *  FS_DRIVE_NOT_FOUND (-4):
 *      Cannot find user specified drive
 *      Serial out of pre-configured maximum number of external drives.
 *  Successful: FS_NO_ERROR
 *  Failed: 	Please refer to fs_error_enum.
 * NOTE
 *  (1) We always have a system drive. However, normal drive and removable device are not guaranteed in the customized combination. Task owner should be aware of each case and choose the best suit drive to use.
 *  (2) that FS_GetDrive() API always return consist drive index by given Serial parameter whether the external device present or not present.
 *  (3) the matching sequence of AltMask is:
 *      Normal 2 -> Normal 1 -> Card -> System 2 -> System 1
 *  (4) the external drive NOT included in matching sequence.
 * EXAMPLE
 * <code>
 *      Int         drvLetter;
 *      TCHAR       K_filename[50];
 *      FS_HANDLE   K_hFile;
 *      drvLetter = FS_GetDrive(FS_DRIVE_V_NORMAL, 2, FS_DRIVE_V_REMOVABLE | FS_DRIVE_I_SYSTEM);
 *      if(drvLetter > 0)
 *      {
 *          kal_wsprintf(K_filename, "%c:\\ TestDir", drvLetter);
 *          K_hFile = FS_Open(K_filename, FS_READ_WRITE|FS_CREATE_ALWAYS|FS_OPEN_NO_DIR);
 *      }
 * </code>
 *****************************************************************************/
extern int FS_GetDrive(UINT Type, UINT Serial, UINT AltMask);

/*****************************************************************************
 * <GROUP  VolumeManagement>
 *
 * FUNCTION
 *  FS_GetDriveByHandle
 * DESCRIPTION
 *  Get capital drive letter by file handle.
 * RETURN VALUES
 *  Capital drive letter: Query is successful.
 *      C=67, D=68, E=69, F=70
 *      G=72, H=73, I=74, J=75?
 *  FS_INVALID_FILE_HANDLE (-10):
 *      User specify an invalid file handle.
 * NOTE
 * EXAMPLE
 * <code>
 *      int         drvLetter;
 *      TCHAR       K_filename[50];
 *      FS_HANDLE   K_hFile;
 *
 *      K_hFile = FS_Open(K_filename, FS_CREATE_ALWAYS);
 *
 *      drvLetter = FS_GetDriveByHandle(K_hFile);
 *
 *      if(drvLetter > 0)
 *      {
 *          // ......
 *      }
 * </code>
 *****************************************************************************/
extern int FS_GetDriveByHandle(FS_HANDLE handle);

/*****************************************************************************
 * <GROUP  VolumeManagement>
 *
 * FUNCTION
 *  FS_GeneralFormat
 * DESCRIPTION
 *  This function provides general format facility for File Manager.
 * PARAMETERS
 *  DriveName   : [IN]<P>   The drive that should be formatted (format: "\\\\.X:\\")
 *  Level       : [IN]<P>   FS_FORMAT_LOW (low-level format) or FS_FORMAT_HIGH (high-level format)
 *  Progress    : [IN]<P>   The callback function. Please refer to FS_FormatCallback.
 * RETURN VALUES
 *  12, 16 or 32: If format is successful, a positive integer will be returned. 12/16/32 means the target drive is formatted as FAT12/FAT16/FAT32.
 *  FS_PARAM_ERROR (-2): Use special format level not defined here
 *  FS_UNSUPPORTED_DRIVER_FUNCTION (-12): Call low-level format on removable device
 *  FS_MEDIA_CHANGED (-26): Try to format the removable device, which is not present
 *  FS_DEVICE_BUSY (-46): Only removable device, e.g., memory card, may return this error code. When file system is counting free space on devices in FS_LockFAT or FS_TestMSDC, this error code will be returned.
 *  FS_DEVICE_EXPORTED_ERROR (-52): Try to format an exporting drive. In this case, file handles will not be closed.
 * NOTE
 *  (1) High-level format will just clean up the FAT table of this drive while low-level format will scan the whole disk, re-partition the whole disk and re-build the driver structure. ? Even if you just low level format a drive, the whole disk will be low-level formatted.
 *  (2) Other restriction is that only NOR and NAND flash provide the low-level format function. In most cases, you should call high-level format for cleaning up drive purpose. But if you have ever received ¨FS_SYSTEM_CRASH? error code when accessing that drive (NAND flash only), you should call low-level format to make NAND flash driver re-construct the whole system again.
 *  (3) Format may take a long time. Task should provide callback function for File System to report the format status.
 *  (4) Format function will close all the file handles on this disk automatically.
 *  (5) Low-level format may cost a lot of memory, please be careful of your task stack size.
 * EXAMPLE
 * <code>
 *      int 	drvLetter, reval=0;
 *      TCHAR	K_filename[50];
 *      drvLetter = FS_GetDrive(FS_DRIVE_V_NORMAL, 2, FS_NO_ALT_DRIVE);
 *
 *      if(drvLetter > 0)
 *      {
 *          kal_wsprintf(K_filename, "\\\\.\\%c:", drvLetter); //please be careful of the format here
 *          reval = FS_GeneralFormat (K_filename, FS_FORMAT_HIGH, YourCallBack);
 *      }
 *      else
 *      {
 *           //check your code
 *      }
 *
 *      void YourCallBack(const char * DriveName, int Action, UINT Total, UINT Completed)
 *      {
 *          if (Action == FS_FMT_PGS_DONE)
 *              //show format done
 *          else if (Action == FS_FMT_PGS_FAIL)
 *              //check your error code return from FS_GeneralFormat
 *          else
 *              //show processing percentage: (Completed/Total) *100% //Be careful of the DIV BY ZERO problem here
 *      }
  * </code>
 *****************************************************************************/
extern int FS_GeneralFormat(const WCHAR * DriveName, UINT Level, FS_FormatCallback Progress);

/*****************************************************************************
 * <GROUP  VolumeManagement>
 *
 * FUNCTION
 *  FS_GetClusterSize
 * DESCRIPTION
 *  This function returns the cluster size of the specified drive.
 * PARAMETERS
 *  DriveIdx   : [IN] <P>The drive index ('Z' or 0x43, 0x44, ...etc.)
 * RETURN VALUES
 *  > 0: Cluster size in byte
 *  FS_DRIVE_NOT_FOUND (-4): Cannot get the specified drive
 *****************************************************************************/
extern int FS_GetClusterSize(UINT DriveIdx);

#ifdef __FS_QM_SUPPORT__
/*****************************************************************************
 * <GROUP  VolumeManagement>
 *
 * FUNCTION
 *  FS_QmGetFree
 * DESCRIPTION
 *  This function can query the free space left in QuotaSet (Quota Management only).
 *  User must register target path in QuotaSet, otherwise, FS_PATH_NOT_FOUND will be returned.
 *  If QMax is set as 0 (Infinite), then all free space left in system drive which allows user to use will be returned.
 * PARAMETERS
 *  Path   : [IN] <P>The full path defined in QuotaSet
 * RETURN VALUES
 *  >=0: Free space in bytes counted by (Number Application Free Cluster)*(Cluster Size)
 *  FS_PATH_NOT_FOUND (-19): Cannot find the path in QuotaSet
 *  FS_ACCESS_DENIED (-16): Quota Management is not enabled on this drive
 *  FS_DRIVE_NOT_FOUND (-4): Drive not found or not mounted, this is abnormal case
 *  FS_INVALID_FILE_SYSTEM (-8): Free cluster count of the drive is unknown, it is abnormal case
 * NOTE
 * (1)  Path name should be exactly the same as one in QuotaSet.
 * (2)  To save more resource, we use ¨BYTE? (unsigned char) instead of FS traditional WCHAR here.
 *****************************************************************************/
extern int FS_QmGetFree(const BYTE * Path);
#endif

/*****************************************************************************
 * <GROUP  VolumeManagement>
 *
 * FUNCTION
 *  FS_CommitAll
 * DESCRIPTION
 *  This API will flush all currently dirty buffers to disk according to given drive.
 * PARAMETERS
 *  DriveName   : [IN] <P>Must either be a valid file name (e.g., a root directory name) or NULL. If DriveName is not NULL, only the drive information (possibly the current default drive) is determined. All of that drive's hosting device's dirty buffers are flushed. If the parameter is NULL, the buffers of all devices are flushed.
 * RETURNS
 *  Please refer to fs_error_enum.
 *****************************************************************************/
extern int FS_CommitAll(const WCHAR * DriveName);

/*****************************************************************************
 * <GROUP  VolumeManagement>
 *
 * FUNCTION
 *  FS_SetVolumeLabel
 * DESCRIPTION
 *  This function is used to set the drive labe.
 * PARAMETERS
 *  DriveName   : [IN] <P>The Drive to be set volume label. It should be UCS2 encoded. For example, L¨X:\?
 *  Label       : [IN] <P>The label to be set to the specific drive. This label should be UCS2 encoded. In order to be compatible with windows, the maximum length should not exceed 11 bytes when it is converted to native encoding. The allowed character should follow the DOS 8.3 format.
 * RETURN VALUES
 *  FS_NO_ERROR : Successful
 *  FS_INVALID_FILENAME (-3): The file name is invalid.
 *  FS_INVALID_FILE_SYSTEM (-8): The specific drive doesn?t contain a legal file system.
 *  FS_ROOT_DIR_FULL (-21): Root directory is full. The original name will be restored. (Since W09.35)
 *  FS_DISK_FULL (-22): Disk is full. The original name will be restored. (Since W09.35)
 * NOTE
 *  (1)File system can preserve the capital of volume name by creating LFN entry in FS_SetVolumeLabel(). However, Windows can only show ¨upper case? volume name.
 *  (2)To get volume label, please use FS_GetDiskInfo() with FS_DI_BASIC_INFO and FS_DI_VOLUME_LABEL flags.
 *****************************************************************************/
extern int FS_SetVolumeLabel(const WCHAR * DriveName, const WCHAR * Label);

/*****************************************************************************
 * <GROUP  VolumeManagement>
 *
 * FUNCTION
 *  FS_SwitchDriveMode
 * DESCRIPTION
 *  This function provides formal plug out facility on MSDC (built-in or OTG external) for File Manager
 * PARAMETERS
 *  DriveIdx    : [IN] <P>The Drive to switch the mode
 *  Mode        : [IN] <P> FS_DRIVE_SOFT_UNMOUNT
 *                     <P> FS_DRIVE_SOFT_MOUNT
 * RETURN VALUES
 *  FS_NO_ERROR : success
 *  FS_DRIVE_NOT_FOUND (-4): The specified drive is not found.
 *  FS_INVALID_FILE_SYSTEM (-8): The specific drive doesn?t contain a legal file system.
 *  FS_UNSUPPORTED_DEVICE (-11): It is an unsupported device.
 * HISTORY
 *  Since  W08.36
 * NOTE
 *  1. Only File Manager can call this function.
 *  2. Double lock in this function!
 *****************************************************************************/
extern int FS_SwitchDriveMode(UINT DriveIdx, UINT Mode);

/*****************************************************************************
 * <GROUP  DiskManagement>
 *
 * FUNCTION
 *  FS_CheckDiskFlag
 * DESCRIPTION
 *  This function provides NVRAM to check if last time power off is normal or abnormal. NVRAM can check the disk flag to decide do some action or not. (like advice end user to do sanity check or not)
 * PARAMETERS
 *  N/A
 * RETURNS
 *  0: Power off normally last time
 *  1: Power off abnormally last time
 *****************************************************************************/
extern int FS_CheckDiskFlag(void);

#ifdef __FS_CHECKDRIVE_SUPPORT__
/*****************************************************************************
 * <GROUP  DiskManagement>
 *
 * FUNCTION
 *  FS_CheckDrive
 * DESCRIPTION
 *  This function provides facility for user to check drive
 * PARAMETERS
 *  DriveIdx           : [IN] <P>The drive index ('Z' or 0x43, 0x44, ...etc.)
 *  CheckBuffer        : [IN] <P>The buffer get from caller
 *  CheckBufferLength  : [IN] <P>The buffer length, must > 2048
 * RETURNS
 *  Success: FS_NO_ERROR
 *  Error: list below
 * RETURN VALUES
 *  FS_NO_ERROR (0)
 *  FS_ACCESS_DENIED (-16): There?s opened file in the drive.
 *  FS_FAIL_GET_MEM (-44): User provides a null buffer or smaller than 2048Byte
 *  FS_DRIVE_NOT_FOUND (-4): DriveIdx provide by caller not found
 *  FS_WRITE_PROTECTION (-30): the drive is on a write-protected media
 *  FS_INVALID_FILESYSTEM (-8): the drive not mounted
 *  FS_TOO_MANY_FILES (-5): the folders are too deep.
 * NOTE
 *  (1) This function is wrapped with compile option, __FS_CHECKDRIVE_SUPPORT__
 *  (2) This function requires a buffer as cluster-bit-map to process FAT file system internal data. The full size of cluster-bit-map can be retrieve by FS_GetCheckDrive(). For FAT16 disk, the maximum 8KB buffer size, and at least 16KB for FAT32. To break the growing RAM consumption by larger and larger disk size, this function still works if the check buffer size not fully provide. But the execution duration will longer. In worst case, execution duration will double if half buffer size provide.
 *  (3) File system does not allocate the buffer here. Caller could use ASM (Application Shared Memory) to get/free the memory by himself.
 *       Recommand Check Buffer Size : 128MB Disk Size ===>  8KB
 *                                   for 1GB Size Disk ===> 32KB
 *  (4) This function is non-recursive. However, if there is not enough file handles for file system to record the folders, file system will sweep the folders if they are too deep. Theoretically, file system support 20 levels of folders. In fact, it may be fewer if the some of the file handles are allocated by other application.
 *  (5) In this check function, invalid file/folder will be removed automatically.
 *  (6) Before invoking the FS_CheckDrive, please make sure there?s no module that is initializing itself. FS_CheckDrive will block others task that tries to access the same drive.
 * EXAMPLE
 * <code>
 *      unsigned char *myPtr;
 *      kal_uint32 fullsize, maxsize;
 *      kal_uint32 DriveIdx = FS_GetDrive(FS_DRIVE_V_NORMAL, 1, FS_NO_ALT_DRIVE);
 *      fullsize = FS_ GetCheckBufferSize (DriveIdx);
 *      if (fullsize > FS_NO_ERROR)
 *      {
 *          maxsize = query_max_available_pool();//Caller should use ASM mechanism here
 *          maxsize = (maxsize > fullsize) ? fullsize : maxsize;
 *          myPtr = (unsigned char*)get_appshared_mem(maxsize); //Caller should use ASM mechanism here
 *          FS_CheckDrive(DriveIdx, myPtr, maxsize);
 *          if (myPtr) free_appshared_mem(myPtr); //Caller should use ASM mechanism
 *      }
 * </code>
 *****************************************************************************/
extern int FS_CheckDrive(const UINT DriveIdx, BYTE * CheckBuffer, const UINT CheckBufferSize);
#endif

/*****************************************************************************
 * <GROUP  DiskManagement>
 *
 * FUNCTION
 *  FS_GetDiskInfo
 * DESCRIPTION
 *  Return information about a logical drive
 * PARAMETERS
 *  DriveName   :   [IN] <P>Must be a valid file name, e.g., a root directory name. Only the drive information (possibly the current default drive) is determined.
 *  DiskInfo    :   [OUT]<P>Refer to FS_DiskInfo.
 *  Flags       :   [IN] <P>Refer to fs_di_enum.
 * RETURNS
 *  Please refer to fs_error_enum.
 *****************************************************************************/
extern int FS_GetDiskInfo(const WCHAR * DriveName, FS_DiskInfo * DiskInfo, int Flags);

/*****************************************************************************
 * <GROUP  DiskManagement>
 *
 * FUNCTION
 *  FS_GetDevType
 * DESCRIPTION
 *  This function return the flash type for the corresponding path
 * PARAMETERS
 *  Path   : [IN] <P>The full-path which begin with drive letter
 * RETURN VALUES
 *  FS_DRIVE_NOT_FOUND(-4): Cannot find the drive described by user
 *  FS_DEVICE_TYPE_NOR (1): device type = NOR
 *  FS_DEVICE_TYPE_NAND (2): device type = NAND
 *  FS_DEVICE_TYPE_CARD (3): device type = memory card
 *  FS_DEVICE_TYPE_EXTERNAL (4): device type = OTG
 *****************************************************************************/
extern int FS_GetDevType(const WCHAR * Path);

/*****************************************************************************
 * <GROUP  DiskManagement>
 *
 * FUNCTION
 *  FS_GetDevStatus
 * DESCRIPTION
 *  This function provides a facility to let task looks up the device status.
 * PARAMETERS
 *  QueryTarget: [IN] <P>the index number get from FS_GetDrive, OR the type enum get from FS_GetDevType
 *  Flag       : [IN] <P>plesae refer to FS_GET_DEV_STATUS_ENUM. <color Red><b>Cannot set on simultaneously</b></color>
 * RETURN VALUES
 *  FS_NO_ERROR (0): Success.
 *  FS_PARAM_ERROR (-2): Over the drive range or flag error
 *  FS_DEVICE_BUSY (-46): Device is busy
 *  FS_FLASH_MOUNT_ERROR (-120): Fixed device is in un-mount state
 *  FS_MSDC_MOUNT_ERROR (-100): Removable device is in un-mount state (maybe not present or cannot be mounted)
 *  FS_EXTERNAL_DEVICE_NOT_PRESENT (-106): External device is not connected.
 *  FS_DEVICE_EXPORTED_ERROR (-52): Device is exported and controlled by USB
 * NOTE
 *  (1)This function cannot wait to get any lock!
 *  (2)The error code gives you a hint that the device is mounted, busy or exported now. If device is busy and you keep trying to access this device, you may hang there and wait for the device lock. If device is exported and you try to access this device, you will get FS_DEVICE_EXPORTED_ERROR (-52) again. For external card reader, if the device not connected yet, you will get FS_MSDC_MOUNT_ERROR (-100) return value when query for drive index and FS_EXTERNAL_DEVICE_NOT_PRESENT (-106) when query for device type.
 *  (3)If there are multiple devices with the same type, FS_GetDevStatus will return status of the 1st device matched to the input type.
 *****************************************************************************/
extern int FS_GetDevStatus(UINT DriveIdx, UINT Flag);

/*****************************************************************************
 * <GROUP  DiskManagement>
 *
 * FUNCTION
 *  FS_GetDevPartitions
 * DESCRIPTION
 *  This function provides a facility that user can query the number of partitions on the specific disk, and FS will return the number of partitions.
 * PARAMETERS
 *  QueryTarget: [IN] <P>The drive number (0x43~0x45(depended on customized configuration)) or device type enum (0x01~0x05) needs to lookup. The drive number can be retrieved by FS_GetDrive() API. Device type enum can be retrieved by FS_GetDevType() API.
 * RETURN VALUES
 *  Value > 0: number of partitions, at least 1.
 *  FS_PARAM_ERROR (-2): Over the drive range or device type range
 * NOTE
 *  (1)This function cannot wait to get any lock!
 *****************************************************************************/
extern int FS_GetDevPartitions(UINT QueryTarget);

/*****************************************************************************
 * <GROUP  FileOperation>
 *
 * FUNCTION
 *  FS_CountUsedFH
 * DESCRIPTION
 *  This function provide various kinds of query about number of file handles.
 * PARAMETERS
 *  flag : [IN] <P>indicate the query type for number of file handles
 *      <P>FS_FH_COUNT_CURRENT_TASK -  the number of file handles occupied by current task
 *      <P>FS_FH_COUNT_AVAILABLE -  the number of file handles available now
 *      <P>FS_FH_COUNT_USED -  the number of file handles that already in use.
 *      <P>FS_FH_COUNT_CONFIGURED -  the total number of file handles that static configured.
 * RETURNS
 *  Value >= 0 : the number of file handles queried.
 *  FS_PARAM_ERROR (-2): the input flag is invalid
 *****************************************************************************/
extern int FS_CountUsedFH(int flag);

/*****************************************************************************
 * <GROUP  Notification>
 *
 * FUNCTION
 *  FS_SetDirCache
 * DESCRIPTION
 *  This function provides facility for browsing type application to associate reusable value
 *  on the specific directory. Then get back the value or get miss error later.
 * PARAMETERS
 *  FileHandle : [IN]   <P>It?s the file handle for specific directory. You can get the directory filehandle by FS_Open() with FS_OPEN_DIR flag or FS_FindFirst() API.
 *  NewValue   : [IN]   <P>The reusable value in 32-bit unsigned integer format is to be associated to specific directory. For example, number of files under the specific folder can be cached to speed up browsing application.
 * RETURNS
 *  Success: FS_NO_ERROR
 *  Error: refer to fs_error_enum.
 * HISTORY
 *  This API available since 06A Branch
 * EXAMPLE
 * <code>
 *      #define MY_PATH L?Z:\\Folder1?
 *
 *      FS_HANDLE fh;
 *      FS_DOSDirEntry FilInfo;
 *      kal_int32 result;
 *      kal_uint32 value;
 *      WCHAR FileNameBuf[260];
 *
 *      fh = FS_FindFirst(MY_PATH, 0, 0, &FileInfo, FileNameBuf, 520);
 *      // traverse process? come out a reusable value
 *      // for example, value = count_number_of_files_under_directories(fh);
 *      FS_SetDirCache(fh, value);
 *      FS_FindClose(fh);
 *
 *      ?..
 *
 *      // now we try to reuse the cached value
 *      kal_uint32 last_cached_value;
 *      FS_HANDLE fh;
 *      kal_int32 result;
 *
 *      fh = FS_Open(MY_PATH, FS_OPEN_DIR | FS_READ_ONLY);
 *      result = FS_GetDirCache(fh, &last_cached_value);
 *      FS_Close(fh);
 *
 *      if (result == FS_NO_ERROR)
 *      { // cache hit
 *        // process with last_cached_value is okay
 *      }
 *      else
 *      { // cache miss handling
 *        // sorry, we may have to redo it again.
 *      }
 * </code>
 *****************************************************************************/
extern int FS_SetDirCache(FS_HANDLE FileHandle, UINT NewValue);

/*****************************************************************************
 * <GROUP  Notification>
 *
 * FUNCTION
 *  FS_GetDirCache
 * DESCRIPTION
 *  This function provides facility for browsing type application to associate reusable value on the specific directory. File System will search on RAM to get the cache value set by latest FS_SetDirCache() with specific directory.
 * PARAMETERS
 *  FileHandle : [IN]   <P>It?s the file handle for specific directory. You can get the directory filehandle by FS_Open() with FS_OPEN_DIR flag or FS_FindFirst() API.
 *  CurrValue  : [OUT]  <P>The reusable value in 32-bit unsigned integer format is to be associated to specific directory.
 * RETURNS
 * RETURN VALUES
 *  FS_NO_ERROR: Success
 *  FS_DIRCACHE_EXPIRED: the cached value not found
 *  Otherwise:  refer to fs_error_enum
 * HISTORY
 *  This API available since 06A Branch
 *****************************************************************************/
extern int FS_GetDirCache(FS_HANDLE FileHandle, UINT *CurrValue);

/*****************************************************************************
 * <GROUP  Notification>
 *
 * FUNCTION
 *  FS_ExpireDirCache
 * DESCRIPTION
 *  This function provides facility for browsing type application to associate reusable value on the specific directory. File System will expire the cache value set by latest FS_SetDirCache() with specific directory.
 * PARAMETERS
 *  FileHandle : [IN] <P>It?s the file handle for specific directory. You can get the directory filehandle by FS_Open() with FS_OPEN_DIR flag or FS_FindFirst() API.
 * RETURNS
 * RETURN VALUES
 *  FS_NO_ERROR: Success
 *  FS_INVALID_FILE_HANDLE(-10): File handle invalid
 *  FS_ACCESS_DENIED(-16): File handle not associated to a directory
 *  Otherwise:  refer to fs_error_enum
 * HISTORY
 *  This API available since 06A Branch
 *****************************************************************************/
extern int FS_ExpireDirCache(FS_HANDLE FileHandle);

/*************************************************************************
 * <GROUP  DirectIOCtrl>
 *
 * FUNCTION
 *    FS_IOCtrl
 * DESCRIPTION
 *    Control or configure device, or read physical information of device by drive name
 * PARAMETERS
 *  DriveName   : [IN]      <P>DriveName could be any one drive name of the target memory device. It should be UCS2 encoded, e.g., L¨X:\\?.
 *  CtrlAction  : [IN]      <P>Please refer to fs_ioctrl_action_enum.
 *  CtrlData    : [IN/OUT]  <P>Control data. The usage is depended on the Control Action.
 * RETURN VALUES
 *  FS_NO_ERROR: Success
 *  FS_UNSUPPORTED_DRIVER_FUNCTION: The specified device does not support IOCtrl device driver.
 *  FS_PARAM_ERROR: Incorrect drive name
 *  FS_DRIVE_NOT_READY: Device is not in ready status or not mounted.
 *  FS_UNSUPPORTED_DEVICE: Device does not support the specified IO control action.
 * HISTORY
 *  Since W09.12
 *************************************************************************/
extern int FS_IOCtrl(const WCHAR* DriveName, UINT CtrlAction, void* CtrlData);

/*****************************************************************************
 * <GROUP  DiskManagement>
 *
 * FUNCTION
 *  FS_RecoverDevice
 * DESCRIPTION
 *  This function provides facility for user to recover flash disk,
 * PARAMETERS
 *  devtype     : [IN] <P>FS_DEVICE_TYPE_NOR or FS_DEVICE_TYPE_NAND can be assigned.
 * RETURN VALUES
 *  FS_NO_ERROR : success and finished
 *  FS_PARAM_ERROR (-2): No such device configured
 *****************************************************************************/
extern int FS_RecoverDevice(const int devtype);

#if defined(__MTP_ENABLE__)
/*****************************************************************************
 * <GROUP  MTP>
 *
 * FUNCTION
 *  FS_MakeFilePathByHint
 * DESCRIPTION
 *  Every file has its own directory entry for the file system to maintain the
 *  folder hierarchy. Every directory entry of a file can be located by the
 *  Cluster number of the file system and the offset in the cluster?(Cluster, Index).
 *  The coordinate (Cluster, Index) is called the Hint of the file. If the hint of a
 *  file is available, it can be used to perform some file operations without searching
 *  the file in the disk.
 *  If there is a hint belongs to a folder, this function can be used to get the full
 *  path of the folder. A file hint is not supported by this function. If a file hint
 *  is passed to this function, it returns FS_PATH_NOT_FOUND.
 * PARAMETERS
 *  DriveLetter : [IN] <P>Identify which drive the hint belongs to. E.g. ¯D?, ¯E?
 *  DirCluster  : [IN] <P>The cluster number of the folder hint.
 *  DirIndex    : [IN] <P>The Index of the folder hint.
 *  FileName    : [OUT]<P>The buffer to retrieve the file path
 *  MaxLength   : [IN] <P>The buffer size
 * RETURN VALUES
 *  FS_NO_ERROR : success and finished
 *  FS_PATH_NOT_FOUND (-19): The path doesn?t exist
 *****************************************************************************/
extern int FS_MakeFilePathByHint(WCHAR DriveLetter, UINT DirCluster, UINT DirIndex, WCHAR * FileName, UINT MaxLength);

/*****************************************************************************
 * <GROUP  MTP>
 *
 * FUNCTION
 *  FS_OpenFileByHint
 * DESCRIPTION
 *  If a hint of a file or a folder is available, it can be used to open the file or the folder by the hint.
 * PARAMETERS
 *  DriveLetter : [IN] <P>Identify which drive the hint belongs to. E.g. ¯D?, ¯E?
 *  DirCluster  : [IN] <P>The cluster number of the folder hint.
 *  DirIndex    : [IN] <P>The Index of the folder hint.
 *  Flags       : [IN] <P>Can be a combination of the following flags:
 *          FS_READ_WRITE  FS_READ_ONLY   FS_OPEN_SHARED   FS_OPEN_NO_DIR
 *          FS_OPEN_DIR    FS_COMMITTED   FS_CACHE_DATA    FS_LAZY_DATA
 *          FS_NONBLOCK_MODE  FS_PROTECTION_MODE
 * RETURNS
 *  If the function succeeds, the return value is a file handle for the opened
 *  file and the file pointer of the file is set to 0. If the return value is less
 *  than 0, the function has failed and the return value is the error code.
 *****************************************************************************/
extern int FS_OpenFileByHint(WCHAR DriveLetter, UINT DirCluster, UINT DirIndex, UINT Flags);

/*****************************************************************************
 * <GROUP  MTP>
 *
 * FUNCTION
 *  FS_DeleteByHint
 * DESCRIPTION
 *  This function can be used to delete a file by the file hint. A folder hint
 *  is not supported by this function. If a hint of a folder is passed to this
 *  function, it returns FS_READ_ONLY_ERROR.
 * PARAMETERS
 *  DriveLetter : [IN] <P>Identify which drive the hint belongs to. E.g. ¯D?, ¯E?
 *  DirCluster  : [IN] <P>The cluster number of the folder hint.
 *  DirIndex    : [IN] <P>The Index of the folder hint.
 * RETURN VALUES
 *  FS_NO_ERROR : success
 *  FS_PATH_NOT_FOUND (-19): The path doesn?t exist
 *  FS_READ_ONLY_ERROR (-45): A read-only file can?t be deleted.
 *****************************************************************************/
extern int FS_DeleteByHint(WCHAR DriveLetter, UINT DirCluster, UINT DirIndex);

/*****************************************************************************
 * <GROUP  MTP>
 *
 * FUNCTION
 *  FS_GetAttributesByHint
 * DESCRIPTION
 *  This function can be used to retrieve the attribute of the file via a hint.
 * PARAMETERS
 *  DriveLetter : [IN] <P>Identify which drive the hint belongs to. E.g. ¯D?, ¯E?
 *  DirCluster  : [IN] <P>The cluster number of the folder hint.
 *  DirIndex    : [IN] <P>The Index of the folder hint.
 * RETURN VALUES
 *  FS_ATTR_READ_ONLY
 *  FS_ATTR_HIDDEN
 *  FS_ATTR_SYSTEM
 *  FS_ATTR_VOLUME
 *  FS_ATTR_DIR
 *  FS_ATTR_ARCHIVE
 *****************************************************************************/
extern int FS_GetAttributesByHint(WCHAR DriveLetter, UINT DirCluster, UINT DirIndex);

/*****************************************************************************
 * <GROUP  MTP>
 *
 * FUNCTION
 *  FS_SetAttributesByHint
 * DESCRIPTION
 *  This function can be used to set the attribute of the file via a hint.
 * PARAMETERS
 *  DriveLetter : [IN] <P>Identify which drive the hint belongs to. E.g. ¯D?, ¯E?
 *  DirCluster  : [IN] <P>The cluster number of the folder hint.
 *  DirIndex    : [IN] <P>The Index of the folder hint.
 *  Attributes  : [IN] <P>
 *  FS_ATTR_READ_ONLY
 *  FS_ATTR_HIDDEN
 *  FS_ATTR_SYSTEM
 *  FS_ATTR_VOLUME
 *  FS_ATTR_DIR
 *  FS_ATTR_ARCHIVE
 * RETURNS
 *  Please refer to fs_error_enum.
 * NOTE
 *  If you want to add/remove some attributes of a folder or volume, you should OR the
 *  FS_ATTR_DIR / FS_ATTR_VOLUME, too. Or you will get FS_ACCESS_DENIED failure.
 *****************************************************************************/
extern int FS_SetAttributesByHint(WCHAR DriveLetter, UINT DirCluster, UINT DirIndex, BYTE Attributes);

/*****************************************************************************
 * <GROUP  MTP>
 *
 * FUNCTION
 *  FS_HintGetParent
 * DESCRIPTION
 *  This function can be used to retrieve the parent?s hint of a folder hint.
 * PARAMETERS
 *  DriveLetter   : [IN]  <P>Identify which drive the hint belongs to. E.g. ¯D?, ¯E?
 *  DirCluster    : [IN]  <P>The cluster number of the folder hint.
 *  DirIndex      : [IN]  <P>The Index of the folder hint.
 *  ParentCluster : [OUT] <P>The parent hint cluster of the folder hint
 *  ParentIndex   : [OUT] <P>The parent hint index of the folder hint
 * RETURNS
 *  Please refer to fs_error_enum.
 *****************************************************************************/
extern int FS_HintGetParent(WCHAR DriveLetter, UINT DirCluster, UINT DirIndex, UINT *ParentCluster, UINT *ParentIndex);
#endif /* __MTP_ENABLE__ */

/*****************************************************************************
 * <GROUP InternalUse>
 *
 * FUNCTION
 *  FS_GetSysInfo
 *
 * DESCRIPTION
 *  This function provides facility for user to query file system status.
 *
 * PARAMETERS
 *  options :[IN]   Query options, it should be FS_SI_BASIC_INFO.
 *  info    :[IN]   Pointer to structure fs_sysinfo_struct.
 *
 * RETURNS
 * RETURN VALUES
 *  FS_NO_ERROR     : Success
 *  FS_PARAM_ERROR  : Parameter error
 *
 * HISTORY
 *  This API available since 10A.W10.52
 *****************************************************************************/
extern int FS_GetSysInfo(kal_uint32 options, fs_sysinfo_struct *info);

/*****************************************************************************
 * <GROUP  Notification>
 *
 * FUNCTION
 *  FS_DirCtrl
 * DESCRIPTION
 *  This function provides facility for browsing type application to associate reusable value
 *  on the specific directory. Then get back the value or get miss error later. Lock-down and un-lock features are also provided.
 * PARAMETERS
 *  handle : [IN]   <P>It?s the file handle for specific directory. You can get the directory filehandle by FS_Open() with FS_OPEN_DIR flag or FS_FindFirst() API.
 *  action : [IN]   <P>It can be any of the following flags:
 *                  FS_DIRCTRL_DATA_SET
 *                  FS_DIRCTRL_DATA_GET
 *                  FS_DIRCTRL_DATA_EXPIRE
 *                  FS_DIRCTRL_DATA_LOCK
 *                  FS_DIRCTRL_DATA_UNLOCK
 *                  FS_DIRCTRL_DATA_SET_LOCK (Set and Lock)
 *                  FS_DIRCTRL_DATA_GET_LOCK (Get and Lock)
 *                  FS_DIRCTRL_DATA_GET_UNLOCK (Get and unlock)
 *                  FS_DIRCTRL_DATA_EXPIRE_UNLOCK (Expire and unlock)
 *  value  : [IN]   <P>The reusable value in 32-bit unsigned integer format is to be associated to specific directory. For example, number of files under the specific folder can be cached to speed up browsing application.
 * RETURNS
 *  Success: FS_NO_ERROR
 *  Error: refer to fs_error_enum.
 * HISTORY
 *  This API available since 11A Branch
 * EXAMPLE
 * <code>
 *      #define MY_PATH L?Z:\\Folder1?
 *
 *      FS_HANDLE fh;
 *      FS_DOSDirEntry FilInfo;
 *      kal_int32 result;
 *      kal_uint32 value;
 *      WCHAR FileNameBuf[260];
 *
 *      fh = FS_FindFirst(MY_PATH, 0, 0, &FileInfo, FileNameBuf, 520);
 *      // traverse process? come out a reusable value
 *      // for example, value = count_number_of_files_under_directories(fh);
 *      FS_DirCtrl(fh, FS_DIRCTRL_DATA_SET, value);
 *      FS_FindClose(fh);
 *
 *      ?..
 *
 *      // now we try to reuse the cached value
 *      kal_uint32 last_cached_value;
 *      FS_HANDLE fh;
 *      kal_int32 result;
 *
 *      fh = FS_Open(MY_PATH, FS_OPEN_DIR | FS_READ_ONLY);
 *      result = FS_DirCtrl(fh, FS_DIRCTRL_DATA_GET, value);
 *      FS_Close(fh);
 *
 *      if (result == FS_NO_ERROR)
 *      { // cache hit
 *        // process with last_cached_value is okay
 *      }
 *      else
 *      { // cache miss handling
 *        // sorry, we may have to redo it again.
 *      }
 * </code>
 *****************************************************************************/
extern int FS_DirCtrl(FS_HANDLE handle, kal_uint32 action, void *data);

extern void FS_SetFileTable(void *table);

/*****************************************************************************
 * <GROUP Asynchronous I/F>
 *
 * FUNCTION
 *    fs_aysnc_open
 *
 * DESCRIPTION
 *    Open a file
 *
 * PARAMETERS
 *  filename         :[IN]  Must point to the name of the file to open/create.
 *                          File names are not case sensitive; they will be converted to
 *                          upper case when file system searches this file, and they should
 *                          be two-byte aligned and UCS2 encoded. The file name can have one
 *                          of the following formats:
 *                          [Drive:][\][Path\]Name[.Ext]  A data file or directory file name with optional drive and path information.
 *                          [Drive:]\                     A root directory.
 *                          \\.\Drive:                    A logical drive.
 *                          \\.\PHYSICALDRIVEx            A physical hard disk. x must be a digit (starting at '0') specifying the desired hard disk.
 *                          \\.\FMapF\[hexstrings]        A virtual file, the whole path name should be generated by the dedicated FS_GenVirtualFileName API.
 *                          <Remarks> Absolute path is recommended because current dir may be changed by others before asynchronous API is executed!)
 *  flag             :[IN]  Can be a combination of the following flags:
 *                          FS_READ_WRITE       FS_READ_ONLY        FS_OPEN_SHARED      FS_OPEN_NO_DIR
 *                          FS_OPEN_DIR         FS_CREATE           FS_CREATE_ALWAYS    FS_COMMITTED
 *                          FS_CACHE_DATA       FS_LAZY_DATA        FS_ATTR_HIDDEN      FS_ATTR_SYSTEM
 *                          FS_ATTR_ARCHIVE     FS_NONBLOCK_MODE    FS_PROTECTION_MODE
 *  overlapped       :[IN]  Overlapped structure has 3 members,
 *                          1. callback :[IN]   (Optional) Call back function. This function will be executed just after response message is received by user.
 *                          2. param    :[IN]   (Optional) Parameters for call back function
 *                          3. priority :[IN]   (Deprecated) This function is replaced by KAL priority transfer, and the value will be ignored.
 *                                                           The users have to transfer the priority to the FS task on their own, if they have concerns about priority inversion.
 *                          4. buf      :[IN]   (*Required) Working buffer for FS asynchronous I/F. The buffer size should be at least FS_ASYNC_WORKING_BUFFER_SIZE.
 *                                                          Note that the working buffer should NOT be freed before response message of this FS asynchronous operation!
 *                                                          User could free it in callback function.
 *                          5. buf_size :[IN]   (*Required) Working buffer size. It shoud be at least FS_ASYNC_WORKING_BUFFER_SIZE.
 *                          6. response_flag [IN] (*Required) The response method when job done.
 *
 *                                                  1. FS_RESPONSE_MESSAGE:  Sending ILM when job done, the user must use fs_async_msg_handler() to execute the callback function.
 *
 *                                                                           For MMI task, File Manager Service will help register it. For other tasks, user must register message handler by themselves.
 *                                                  2. FS_RESPONSE_CALLBACK: Invoke callback function directly in the FS task when job done, and NO ILM sending back.
 * RETURNS
 *  Successful  : A positive integer. It is Job ID.
 *  Failed      : A negative integer. Please refer to fs_error_enum for details.
 *
 * NOTE
 *  1. User must assign the response flag in the overlapped structure,
 *  2. Pointer types in the overlapped structure, must be allocated from the memory poll, and freed in the callback function to avoid memory leak.
 *  3. DO NOT use pointer to local variables in overlapped structure, it will lead to memory corruption.
 *
 * EXAMPLE
 * <code>
 *  kal_int32               job_id;
 *  fs_overlapped_struct    overlapped;                     // !overlapped could be local variable
 *  void                    *buf;
 *  kal_wchar               *file_name = L"Z:\\folder\\file"
 *
 *  buf = xxx_malloc(FS_ASYNC_WORKING_BUFFER_SIZE);         // !working buffer should be prepared by users
 *
 *  kal_mem_set(&overlapped, 0, sizeof(fs_overlapped_struct));  // always clear the overlapped structure to zero
 *
 *  overlapped.callback = callback;
 *  overlapped.param    = param;
 *  overlapped.priority = FS_PRIORITY_DEFAULT;              // *Required: priority options
 *  overlapped.buf      = buf;                              // *Required: working buffer address
 *  overlapped.bufsize  = FS_ASYNC_WORKING_BUFFER_SIZE;     // *Required: working buffer size
 *  overlapped.response_flag = FS_RESPONSE_MESSAGE;         // *Required: response flag
 *
 *  job_id = fs_async_open(file_name, FS_CREATE, &overlapped);
 *
 *  if (job_id > FS_NO_ERROR)
 *  {
 *      // job is accepted by FS task.
 *      //
 *      // user could do other things.
 *      // Callback will be called in fs_async_msg_handler() after RSP message is received.
 *  }
 *  else
 *  {
 *      // job is rejected due to errors, and the FS API is not executed.
 *      //
 *      // Callback function will NOT be executed.
 *      // No response message in the future.
 *  }
 * </code>
 *
 * NOTE
 *
 *****************************************************************************/
extern kal_int32 fs_async_open(const kal_wchar *file_name, kal_int32 flag, fs_overlapped_struct *overlapped);

/*****************************************************************************
 * <GROUP Asynchronous I/F>
 *
 * FUNCTION
 *    fs_aysnc_write
 *
 * DESCRIPTION
 *    Write data to a file
 *
 * PARAMETERS
 *  handle          :[IN]   References the open file to write to.
 *  data            :[IN]   Specifies the address of the data to be written.
 *  length          :[IN]   Specifies the number of bytes to write.
 *  written         :[OUT]  Pointer to an unsigned integer to receive the number of
 *                          bytes actually been written. Usually, *Written will contain
 *                          Length after the call. However, in case of an error, the
 *                          returned value may be less. Written may be set to NULL if
 *                          this information is not required by an application.
 *  overlapped      :[IN]   Overlapped structure has 3 members,
 *                          1. callback :[IN]   (Optional) Call back function. This function will be executed just after response message is received by user.
 *                          2. param    :[IN]   (Optional) Parameters for call back function
 *                          3. priority :[IN]   (*Required) Priority of this job, it can be any one of following options,
 *                                                  1. FS_PRIORITY_DEFAULT  : User has no priority concern for this job)
 *                                                  2. FS_PRIORITY_INHERITED: FS task will be raised to a higher priorty to execute this job)
 *                          4. buf      :[IN]   (*Required) Working buffer for FS asynchronous I/F. The buffer size should be at least FS_ASYNC_WORKING_BUFFER_SIZE.
 *                                                          Note that the working buffer should NOT be freed before response message of this FS asynchronous operation!
 *                                                          User could free it in callback function.
 *                          5. buf_size :[IN]   (*Required) Working buffer size. It shoud be at least FS_ASYNC_WORKING_BUFFER_SIZE.
 *
 * RETURNS
 *  Successful  : A positive integer. It is Job ID.
 *  Failed      : A negative integer. Please refer to fs_error_enum for details.
 *
 * EXAMPLE
 * <code>
 * </code>
 *
 * NOTE
 *
 *****************************************************************************/
extern kal_int32 fs_async_write(FS_HANDLE handle, void *data, kal_uint32 length, kal_uint32 *written, fs_overlapped_struct *overlapped);

/*****************************************************************************
 * <GROUP Asynchronous I/F>
 *
 * FUNCTION
 *    fs_async_read
 *
 * DESCRIPTION
 *    Read data from a file
 *
 * PARAMETERS
 *  handle          :[IN]   References the open file to write to.
 *  data            :[IN]   Specifies the address of the data to be written.
 *  length          :[IN]   Specifies the number of bytes to write.
 *  read            :[OUT]  Pointer to an unsigned integer to receive the number of
 *                          bytes actually read. Usually, *Read will contain Length
 *                          after the call. However, in case of an error or if the
 *                          end of file is encountered during the read, the value may
 *                          be less. Read may be set to NULL if this information is
 *                          not required by an application.
 *  overlapped      :[IN]   Overlapped structure has 3 members,
 *                          1. callback :[IN]   (Optional) Call back function. This function will be executed just after response message is received by user.
 *                          2. param    :[IN]   (Optional) Parameters for call back function
 *                          3. priority :[IN]   (*Required) Priority of this job, it can be any one of following options,
 *                                                  1. FS_PRIORITY_DEFAULT  : User has no priority concern for this job)
 *                                                  2. FS_PRIORITY_INHERITED: FS task will be raised to a higher priorty to execute this job)
 *                          4. buf      :[IN]   (*Required) Working buffer for FS asynchronous I/F. The buffer size should be at least FS_ASYNC_WORKING_BUFFER_SIZE.
 *                                                          Note that the working buffer should NOT be freed before response message of this FS asynchronous operation!
 *                                                          User could free it in callback function.
 *                          5. buf_size :[IN]   (*Required) Working buffer size. It shoud be at least FS_ASYNC_WORKING_BUFFER_SIZE.
 *
 * RETURNS
 *  Successful  : A positive integer. It is Job ID.
 *  Failed      : A negative integer. Please refer to fs_error_enum for details.
 *
 * NOTE
 *  DO NOT assign pointer to local vaiable as 'written' in fs_job_write_struct, it will lead to memory corruption.
 *  The 'written' must be allocated from memory poll, or simply assign as NULL.
 *
 * EXAMPLE
 * <code>
 * </code>
 *
 * NOTE
 *
 *****************************************************************************/
extern kal_int32 fs_async_read(FS_HANDLE handle, void *data, kal_uint32 length, kal_uint32 *read, fs_overlapped_struct *overlapped);

/*****************************************************************************
 * <GROUP Asynchronous I/F>
 *
 * FUNCTION
 *    fs_async_read_interleave
 *
 * DESCRIPTION
 *    Read data from a file.
 *    Interleavely read the buffer to shorten the latency time when aborting.
 *
 * PARAMETERS
 *  handle          :[IN]   References the open file to write to.
 *  data            :[IN]   Specifies the address of the data to be written.
 *  length          :[IN]   Specifies the number of bytes to write.
 *  read            :[OUT]  Pointer to an unsigned integer to receive the number of
 *                          bytes actually read. Usually, *Read will contain Length
 *                          after the call. However, in case of an error or if the
 *                          end of file is encountered during the read, the value may
 *                          be less. Read may be set to NULL if this information is
 *                          not required by an application.
 *  chunksize       :[IN]   The buffer chunk size that read at a time, it must less than 'length'.
 *                          If chunksize is less than 32KB, the act of the function is idendical to fs_async_read().
 *  overlapped      :[IN]   Overlapped structure has 3 members,
 *                          1. callback :[IN]   (Optional) Call back function. This function will be executed just after response message is received by user.
 *                          2. param    :[IN]   (Optional) Parameters for call back function
 *                          3. priority :[IN]   (*Required) Priority of this job, it can be any one of following options,
 *                                                  1. FS_PRIORITY_DEFAULT  : User has no priority concern for this job)
 *                                                  2. FS_PRIORITY_INHERITED: FS task will be raised to a higher priorty to execute this job)
 *                          4. buf      :[IN]   (*Required) Working buffer for FS asynchronous I/F. The buffer size should be at least FS_ASYNC_WORKING_BUFFER_SIZE.
 *                                                          Note that the working buffer should NOT be freed before response message of this FS asynchronous operation!
 *                                                          User could free it in callback function.
 *                          5. buf_size :[IN]   (*Required) Working buffer size. It shoud be at least FS_ASYNC_WORKING_BUFFER_SIZE.
 *
 * RETURNS
 *  Successful  : A positive integer. It is Job ID.
 *  Failed      : A negative integer. Please refer to fs_error_enum for details.
 *
 * NOTE
 *  DO NOT assign pointer to local vaiable as 'read' in fs_job_read_struct, it will lead to memory corruption.
 *  The 'read' must be allocated from memory poll, or simply assign as NULL.
 *
 * EXAMPLE
 * <code>
 * </code>
 *
 * NOTE
 *
 *****************************************************************************/
extern kal_int32 fs_async_read_interleave(FS_HANDLE handle, void *data, kal_uint32 length, kal_uint32 *read, kal_uint32 chunksize, fs_overlapped_struct *overlapped);

/*****************************************************************************
 * <GROUP Asynchronous I/F>
 *
 * FUNCTION
 *    fs_async_seek
 *
 * DESCRIPTION
 *    Seek to a specific position of a file
 *
 * PARAMETERS
 *  handle          :[IN]   References the open file to seek to.
 *  offset          :[IN]   Specifies the offset (bytes) of the file to be seeked.
 *  whence          :[IN]   Specifies the method (start address) of the seek.
 *  overlapped      :[IN]   Overlapped structure has 3 members,
 *                          1. callback :[IN]   (Optional) Call back function. This function will be executed just after response message is received by user.
 *                          2. param    :[IN]   (Optional) Parameters for call back function
 *                          3. priority :[IN]   (*Required) Priority of this job, it can be any one of following options,
 *                                                  1. FS_PRIORITY_DEFAULT  : User has no priority concern for this job)
 *                                                  2. FS_PRIORITY_INHERITED: FS task will be raised to a higher priorty to execute this job)
 *                          4. buf      :[IN]   (*Required) Working buffer for FS asynchronous I/F. The buffer size should be at least FS_ASYNC_WORKING_BUFFER_SIZE.
 *                                                          Note that the working buffer should NOT be freed before response message of this FS asynchronous operation!
 *                                                          User could free it in callback function.
 *                          5. buf_size :[IN]   (*Required) Working buffer size. It shoud be at least FS_ASYNC_WORKING_BUFFER_SIZE.
 *
 * RETURNS
 *  Successful  : A positive integer. It is Job ID.
 *  Failed      : A negative integer. Please refer to fs_error_enum for details.
 *
 * EXAMPLE
 * <code>
 * </code>
 *
 * NOTE
 *
 *****************************************************************************/
extern kal_int32 fs_async_seek(FS_HANDLE handle, kal_int64 offset, kal_int32 whence, fs_overlapped_struct *overlapped);

/*****************************************************************************
 * <GROUP Asynchronous I/F>
 *
 * FUNCTION
 *    fs_async_delete
 *
 * DESCRIPTION
 *    Delete a file
 *
 * PARAMETERS
 *  filename        :[IN]   References the open file to seek to.
 *  overlapped      :[IN]   Overlapped structure has 3 members,
 *                          1. callback :[IN]   (Optional) Call back function. This function will be executed just after response message is received by user.
 *                          2. param    :[IN]   (Optional) Parameters for call back function
 *                          3. priority :[IN]   (*Required) Priority of this job, it can be any one of following options,
 *                                                  1. FS_PRIORITY_DEFAULT  : User has no priority concern for this job)
 *                                                  2. FS_PRIORITY_INHERITED: FS task will be raised to a higher priorty to execute this job)
 *                          4. buf      :[IN]   (*Required) Working buffer for FS asynchronous I/F. The buffer size should be at least FS_ASYNC_WORKING_BUFFER_SIZE.
 *                                                          Note that the working buffer should NOT be freed before response message of this FS asynchronous operation!
 *                                                          User could free it in callback function.
 *                          5. buf_size :[IN]   (*Required) Working buffer size. It shoud be at least FS_ASYNC_WORKING_BUFFER_SIZE.
 *
 * RETURNS
 *  Successful  : A positive integer. It is Job ID.
 *  Failed      : A negative integer. Please refer to fs_error_enum for details.
 *
 * EXAMPLE
 * <code>
 * </code>
 *
 * NOTE
 *
 *****************************************************************************/
kal_int32 fs_async_delete(const kal_wchar* filename, fs_overlapped_struct *overlapped);

/*****************************************************************************
 * <GROUP Asynchronous I/F>
 *
 * FUNCTION
 *    fs_async_get_folder_size
 *
 * DESCRIPTION
 *    This function provides a facility to get folder size
 *
 * PARAMETERS
 *  path            :[IN]   Full source path to be counted
 *  flag            :[IN]   FS_COUNT_IN_BYTE, FS_COUNT_IN_CLUSTER
 *  recursive_stack :[IN]   A memory pointer to store deep folder hierarchy recrusive data
 *  stack_size      :[IN]   The size of RecursiveStack
 *  overlapped      :[IN]   Overlapped structure has 3 members,
 *                          1. callback :[IN]   (Optional) Call back function. This function will be executed just after response message is received by user.
 *                          2. param    :[IN]   (Optional) Parameters for call back function
 *                          3. priority :[IN]   (*Required) Priority of this job, it can be any one of following options,
 *                                                  1. FS_PRIORITY_DEFAULT  : User has no priority concern for this job)
 *                                                  2. FS_PRIORITY_INHERITED: FS task will be raised to a higher priorty to execute this job)
 *                          4. buf      :[IN]   (*Required) Working buffer for FS asynchronous I/F. The buffer size should be at least FS_ASYNC_WORKING_BUFFER_SIZE.
 *                                                          Note that the working buffer should NOT be freed before response message of this FS asynchronous operation!
 *                                                          User could free it in callback function.
 *                          5. buf_size :[IN]   (*Required) Working buffer size. It shoud be at least FS_ASYNC_WORKING_BUFFER_SIZE.
 *
 * RETURNS
 *  Successful  : A positive integer. It is Job ID.
 *  Failed      : A negative integer. Please refer to fs_error_enum for details.
 *
 * EXAMPLE
 * <code>
 * </code>
 *
 * NOTE
 *
 *****************************************************************************/
extern kal_int32 fs_async_get_folder_size(const kal_wchar* path, kal_int32 flag, void* recursive_stack, kal_uint32 stack_size, FS_ProgressCallback callback, fs_overlapped_struct *overlapped);

/*****************************************************************************
 * <GROUP Asynchronous I/F>
 *
 * FUNCTION
 *  fs_async_find_first
 *
 * DESCRIPTION
 *  This function provides a facility to find Nth matching file
 *  and multi-patterns are supported
 *
 * PARAMETERS
 *  name_pattern    :[IN]       Find Pattern (Must have drive name. Must NOT use local variable!)
 *  attr            :[IN]       The attributes must have
 *  attr_mask       :[IN]       The attributes must not have
 *  file_info       :[IN/OUT]   File information (Must NOT use local variable!)
 *  file_name       :[IN/OUT]   the long file name (Must NOT use local variable!)
 *  max_length      :[IN]       The length of FileName
 *  overlapped       :[IN]  Overlapped structure has 3 members,
 *                          1. callback :[IN]   (Optional) Call back function. This function will be executed just after response message is received by user.
 *                          2. param    :[IN]   (Optional) Parameters for call back function
 *                          3. priority :[IN]   (*Required) Priority of this job, it can be any one of following options,
 *                                                  1. FS_PRIORITY_DEFAULT  : User has no priority concern for this job)
 *                                                  2. FS_PRIORITY_INHERITED: FS task will be raised to a higher priorty to execute this job)
 *                          4. buf      :[IN]   (*Required) Working buffer for FS asynchronous I/F. The buffer size should be at least FS_ASYNC_WORKING_BUFFER_SIZE.
 *                                                          Note that the working buffer should NOT be freed before response message of this FS asynchronous operation!
 *                                                          User could free it in callback function.
 *                          5. buf_size :[IN]   (*Required) Working buffer size. It shoud be at least FS_ASYNC_WORKING_BUFFER_SIZE.
*
 * RETURNS
 *  Successful  : A positive integer. It is Job ID.
 *  Failed      : A negative integer. Please refer to fs_error_enum for details.
 *
 * EXAMPLE
 * <code>
 * </code>
 *
 * NOTE
 *
 *****************************************************************************/
extern kal_int32 fs_async_find_first(const kal_wchar *name_pattern,
                              kal_uint8 attr, kal_uint8 attr_mask,
                              FS_DOSDirEntry *file_info, kal_wchar *file_name, kal_uint32 max_length,
                              fs_overlapped_struct *overlapped);

/*****************************************************************************
 * <GROUP Asynchronous I/F>
 *
 * FUNCTION
 *  fs_async_find_first_n
 *
 * DESCRIPTION
 *  This function provides a facility to find Nth matching file
 *  and multi-patterns are supported
 *
 * PARAMETERS
 *  name_pattern    :[IN]       Find Pattern (Must have drive name)
 *  pattern_array   :[IN]       Multi-patterns array (should not have drive name)
 *  pattern_num     :[IN]       Indicate how many pattern in PatternArray
 *  array_mask      :[IN]       The attributes that match default NamePattern only
 *  attr            :[IN]       The attributes must have
 *  attr_mask       :[IN]       The attributes must not have
 *  file_info       :[IN/OUT]   File information
 *  file_name       :[IN/OUT]   the long file name
 *  max_length      :[IN]       The length of FileName
 *  entry_index     :[IN]       Find Nth index
 *  overlapped      :[IN]       Overlapped structure has 3 members,
 *                              1. callback :[IN]   (Optional) Call back function. This function will be executed just after response message is received by user.
 *                              2. param    :[IN]   (Optional) Parameters for call back function
 *                              3. priority :[IN]   (*Required) Priority of this job, it can be any one of following options,
 *                                                  1. FS_PRIORITY_DEFAULT  : User has no priority concern for this job)
 *                                                  2. FS_PRIORITY_INHERITED: FS task will be raised to a higher priorty to execute this job)
 *                              4. buf      :[IN]   (*Required) Working buffer for FS asynchronous I/F. The buffer size should be at least FS_ASYNC_WORKING_BUFFER_SIZE.
 *                                                              Note that the working buffer should NOT be freed before response message of this FS asynchronous operation!
 *                                                              User could free it in callback function.
 *                              5. buf_size :[IN]   (*Required) Working buffer size. It shoud be at least FS_ASYNC_WORKING_BUFFER_SIZE.
 *
 * RETURNS
 *  Successful  : A positive integer. It is Job ID.
 *  Failed      : A negative integer. Please refer to fs_error_enum for details.
 *
 * EXAMPLE
 * <code>
 * </code>
 *
 * NOTE
 *
 *****************************************************************************/
extern kal_int32 fs_async_find_first_n(const kal_wchar *name_pattern,
                              FS_Pattern_Struct * pattern_array, kal_uint32 pattern_num,
                              kal_uint8 array_mask, kal_uint8 attr, kal_uint8 attr_mask,
                              FS_DOSDirEntry *file_info, kal_wchar *file_name, kal_uint32 max_length,
                              kal_uint32 entry_index, kal_uint32 flag,
                              fs_overlapped_struct *overlapped);

/*****************************************************************************
 * <GROUP Asynchronous I/F>
 *
 * FUNCTION
 *  fs_async_msg_handler
 *
 * DESCRIPTION
 *  This function provides following facilities,
 *  1. Execute user's callback function
 *  2. Clean FS internal resource for this job.
 *
 * PARAMETERS
 *  local_para  :[IN]   Local parameter of ILM message
 *
 * EXAMPLE
 * <code>
 *  ilm_struct current_ilm;
 *
 *  while (1)
 *  {
 *      receive_msg_ext_q(task_info_g[task_entry_ptr->task_indx].task_ext_qid, &current_ilm);
 *
 *      if (current_ilm.sap_id == FS_SAP)   // User could use SAP ID to identify if this message comes from FS task
 *      {
 *          fs_async_msg_handler(current_ilm.local_para_ptr);   // process FS response message
 *      }
 *      else
 *      {
 *          // not FS response message, do something else ...
 *      }
 *  }
 * </code>
 *
 * NOTE
 *
 *****************************************************************************/
extern void fs_async_msg_handler(local_para_struct *local_para);

/*****************************************************************************
 * <GROUP Asynchronous I/F>
 *
 * FUNCTION
 *  fs_async_abort
 *
 * DESCRIPTION
 *  This function provides the facility to abort a specific job by Job ID
 *
 * PARAMETERS
 *  job_id      :[IN]   Job ID
 *
 * EXAMPLE
 * <code>
 * fs_async_abort(job_id);
 * </code>
 *
 * NOTE
 *    1. This function only abort the asynchronous job in the job list, not the file handle.
 *       Use FS_Abort(), if you want to abort the handle.
 *    2. This function can not abort the job that is not yet recieved by the FS task.
 *       You can use fs_async_abort_ex(), and explicitly assign the buf address to abort non-recived jobs.
 *
 *****************************************************************************/
extern kal_int32 fs_async_abort(fs_job_id job_id);

/*****************************************************************************
 * <GROUP Asynchronous I/F>
 *
 * FUNCTION
 *  fs_async_abort_ex
 *
 * DESCRIPTION
 *  This function provides the facility to abort a specific job, even if it is not recieved by the FS task.
 *
 *
 * PARAMETERS
 *  job_id      :[IN]   Job ID
 *  buf         :[IN]   Pointer to the buffer, it can not be NULL.
 *
 * EXAMPLE
 * <code>
 * fs_async_abort_ex(job_id, overlapped.buf);
 * </code>
 *
 * NOTE
 *    1. This function only abort the asynchronous job in the job list, not the file handle.
 *
 *****************************************************************************/
extern kal_int32 fs_async_abort_ex(fs_job_id job_id, void *buf);

/* DOM-NOT_FOR_SDK-BEGIN */
/*
   NOTE!!!
   Following prototypes are not belong to MAUI SDK, and shall not be used.
*/
/*****************************************************************************
 * <GROUP  Statistics>
 *
 * FUNCTION
 *  FS_StartIOLog
 * DESCRIPTION
 *  Gathering the IO statistics of each task during a time period.
 *  Save current IO status of every task and start logging.
 * PARAMETERS
 *  Statistics  : [IN]<P>The pointer to the user allocated statistic buffer,
 *                       the size of the buffer must queried from FS_GetIOStatisticsSize().
 * RETURNS
 *  Successful: FS_NO_ERROR (0)
 *  Failed: 	FS_PARAM_ERROR (-2)
 *
 * EXAMPLE
 * <code>
 * FS_TaskIOStatistics *iostat=NULL;
 * iostat=(FS_TaskIOStatistics*)get_ctrl_buffer(FS_GetIOStatisticsSize());
 * FS_StartIOLog(fst_iostat);  // Start logging
 *
 * // ... Some File System Opeartion
 *
 * FS_EndIOLog(fst_iostat);  // End logging and print result to MOD_FS TRACE_ERROR
 * free_ctrl_buffer(fst_iostat);
 * </code>
 *
 * SEE ALSO
 *  FS_EndIOLog
 *  FS_GetIOStatisticsSize
 *****************************************************************************/
extern int FS_StartIOLog(FS_TaskIOStatistics *Statistics);

/*****************************************************************************
 * <GROUP  Statistics>
 *
 * FUNCTION
 *  FS_EndIOLog
 * DESCRIPTION
 *  Gathering the IO statistics of each task during a time period.
 *  End logging, caculate IO statistics and print result to MOD_FS TRACE_ERROR.
 * PARAMETERS
 *  Statistics  : [IN/OUT]<P>The pointer to the IO statistics saved by FS_StartIOLog()
 *
 * RETURNS
 *  Successful: FS_NO_ERROR (0)
 *  Failed: 	FS_PARAM_ERROR (-2)
 *
 * EXAMPLE
 * <code>
 * FS_TaskIOStatistics *iostat=NULL;
 * iostat=(FS_TaskIOStatistics*)get_ctrl_buffer(FS_GetIOStatisticsSize());
 * FS_StartIOLog(fst_iostat);
 *
 * // ... Some File System Opeartion
 *
 * FS_EndIOLog(fst_iostat);
 * free_ctrl_buffer(fst_iostat);
 * </code>
 *
 * SEE ALSO
 *  FS_StartIOLog
 *  FS_GetIOStatisticsSize
 *
 * NOTE
 *  FS_StartIOLog and FS_EndIOLog must come in pairs, using the same statistic buffer.
 *****************************************************************************/
extern int FS_EndIOLog(FS_TaskIOStatistics *Statistics);

/*****************************************************************************
 * <GROUP  CardManagement>
 *
 * FUNCTION
 *  FS_TestMSDC
 * DESCRIPTION
 *  This function provides mount/un-mount FS facility on MSDC Card Slots for File Manager
 * PARAMETERS
 *  slot_id    : [IN] <P>DriverData Pointer which points to a device.
 *  drive_list : [IN] <P>A list of DriveData. Applications could specify not only one drive.
 *  drive_num  : [IN] <P>Number of drive_list
 * RETURNS
 * RETURN VALUES
 *  FS_NO_ERROR (0): Card is present, and mount FS successfully.
 *  FS_MSDC_NOT_PRESENT (-105): Card is not present, and un-mount FS successfully.
 *  FS_EXTERNAL_NOT_PRESENT (-106): External card reader not present.
 *  FS_MSDC_MOUNT_ERROR (-100): Disk is formatting or mount driver fail.
 *  FS_UNSUPPORTED_DEVICE (-11): It should be task owner error at development stage.
 *  FS_UNSUPPORTED_DRIVER_FUNCTION (-12): It should be FS error at development stage.
 * NOTE
 *  (1) Only file management task can use this function.
 *  (2) If file system is not in mount state, other task cannot access removable device until file management task mount the device successfully. Actually, this is not the convention in file system. For other fixed devices, the first one accesses file system will trigger file system to mount the device if the status is not ready.
 *****************************************************************************/
int FS_TestMSDC(void * slot_id, BYTE * drive_list, UINT * drive_num);

/*****************************************************************************
 * <GROUP  Obsolete >
 *
 * FUNCTION
 *  FS_CloseMSDC
 * DESCRIPTION
 *  This function provides formal plug out facility on MSDC (built-in or OTG external) for File Manager
 * PARAMETERS
 *  MSDCIndex  : [IN] <P>The drive index (0x43, 0x44, ...etc.)
 *  Mode       : [IN] <P>block or not
 *                 0: block mode (get lock will wait forever)
 *  FS_NONBLOCK_MODE: non-block mode (if someone is taking the lock of FS or device, returns right away)
 * RETURNS
 * RETURN VALUES
 *  FS_PARAM_ERROR (-2): mode parameter error
 *  FS_DRIVE_NOT_FOUND (-4): cannot find the specific Drive Index.
 *  FS_UN SUPPORTED_DEVICE (-11): trying to close non-removable device.
 *  FS_INVALID_FILESYSTEM (-8): Call this function when FS is not initialized, but can remove device safely now
 *  FS_TIMEOUT (-23): Cannot get FS or device lock
 *****************************************************************************/
extern int FS_CloseMSDC(UINT MSDCIndex, UINT Mode);

/*****************************************************************************
 * <GROUP  OTG>
 *
 * FUNCTION
 *  FS_ConfigExtDevice
 * DESCRIPTION
 *  This function is designed to support external device that can contain variance number slots and drives such as card reader. FS_ConfigExtDevice() should be called after the external device cable connected on or plugged out.
 * PARAMETERS
 *  Action         : [IN] <P>accept FS_SETUP_EXT_DEVICE or FS_ RELEASE_EXT_DEVICE only
 *  DrvFuncs       : [IN] <P>The pointer of device driver callback function array, {MountDevice, Shutdown, ... }. Provided by device driver.
 *  Slots          : [IN] <P>Number of independent slots. Number of elements in SlotIdArray
 *  SlotIdArray    : [IN] <P>The DriverData (treat as slot identify) array to be filled on device list.
 *  SlotsConfiged  : [IN] <P>Pointer to an integer to receive the number of bytes actually configured. Usually, *SlotsConfiged will contain Slots after the call. However, in case of an error.
 * RETURNS
 * RETURN VALUES
 *  FS_PARAM_ERROR (-2): NULL DrvFuncs, SlotIdArray or 0 Slots.
 *  FS_UNSUPPORTED_DEVICE (-11): The device try to configure not found in the list.
 *  FS_ UNSUPPORTED_DRIVER_FUNCTION (-12): The device doesn?t support hot plug IO mechanism.
 * NOTE
 *  Currently, No *allocate* operation commited, this API is design to keep FMT/FS/DRV iterface
 *  complete. But not real dynamic yet!
 *****************************************************************************/
extern int FS_ConfigExtDevice(int Action, FS_Driver *DrvFuncs, int Slots, void **SlotIdArray, int *SlotsConfiged);

extern int FS_MountRemovableDevice(void);

/*****************************************************************************
 * <GROUP  DiskManagement>
 *
 * FUNCTION
 *  FS_SanityCheck
 * DESCRIPTION
 *     This function provides a facility to handle the following critical jobs
 *     (1) RUN ONCE
 *         a. file system initialization, fixed device mount, system drive mount
 *         b. make 'Z' drive letter as system drive alias
 *         c. system drive power lose recovery
 *         d. file system trace/debug level default setting
 *         e. system drive quota sweep
 *         f. mount removable card device
 *     (2) RUN AFTER FILE SYSTEM INITIALIZED
 *         g. quota configure check
 * RETURNS
 *  Refer to fs_error_enum.
 * Note
 *  This function cannot wait to get any lock!
 *****************************************************************************/
extern int FS_SanityCheck(void);

/* DOM-NOT_FOR_SDK-END */

#else

// Smart Phone Modem Wrapper
//------------------------------------------------------------

/* DOM-NOT_FOR_SDK-BEGIN */

#include "ccci_fs_if.h"

extern kal_int32 FS_Write_Wrap(FS_HANDLE FileHandle, void * DataPtr, kal_uint32 Length, kal_uint32 * Written);
extern kal_int32 FS_Read_Wrap(FS_HANDLE FileHandle, void * DataPtr, kal_uint32 Length, kal_uint32 * Read);
extern kal_int32 FS_CMPT_Read_Wrap(const WCHAR * FileName, NVRAM_FS_PARAM_CMPT_T* nvram_param);

#define MD_FS_API(n, ...) MD##_##n(__VA_ARGS__)

#define FS_CMPT_Read(...)			FS_CMPT_Read_Wrap(__VA_ARGS__)//MD_FS_API(FS_CMPT_Read, __VA_ARGS__)

// General I/O
#define FS_Open(...)					MD_FS_API(FS_Open, __VA_ARGS__)
#define FS_OpenHint(...)				MD_FS_API(FS_OpenHint, __VA_ARGS__)
#define FS_Close(...)					MD_FS_API(FS_Close, __VA_ARGS__)
#define FS_CloseAll(...)				MD_FS_API(FS_CloseAll, __VA_ARGS__)
#define FS_Read(...)					FS_Read_Wrap(__VA_ARGS__)//MD_FS_API(FS_Read, __VA_ARGS__)
#define FS_Write(...)					FS_Write_Wrap(__VA_ARGS__)//MD_FS_API(FS_Write, __VA_ARGS__)
#define FS_EnableSmartSeek(...)     -255
#define FS_SetSeekHint(...)			-255//MD_FS_API(FS_SetSeekHint, __VA_ARGS__)
#define FS_SetSeekHintEx(...)			-255//MD_FS_API(FS_SetSeekHint, __VA_ARGS__)
#define FS_SeekLargeFile(...)    MD_FS_API(FS_Seek, __VA_ARGS__)
#define FS_Seek(...)					MD_FS_API(FS_Seek, __VA_ARGS__)
#define FS_Commit(...)				-255//MD_FS_API(FS_Commit, __VA_ARGS__)
#define FS_ReleaseFH(...)				-255//MD_FS_API(FS_ReleaseFH, __VA_ARGS__)
#define FS_Abort(...)					-255//MD_FS_API(FS_Abort, __VA_ARGS__)
#define FS_ParseFH(...)				-255//MD_FS_API(FS_ParseFH, __VA_ARGS__)
#define FS_GenVirtualFileName(...)		-255//MD_FS_API(FS_GenVirtualFileName, __VA_ARGS__)

//Information
#define FS_GetFileInfo(...)				-255//MD_FS_API(FS_GetFileInfo, __VA_ARGS__)
#define FS_GetFileInfoEx(...)				-255//MD_FS_API(FS_GetFileInfoEx, __VA_ARGS__)
#define FS_GetFileSize(...)				MD_FS_API(FS_GetFileSize, __VA_ARGS__)
#define FS_GetFilePosition(...)			-255//MD_FS_API(FS_GetFilePosition, __VA_ARGS__)
#define FS_SetFileTime(...)			-255//MD_FS_API(FS_SetFileTime, __VA_ARGS__)
#define FS_GetAttributes(...)			MD_FS_API(FS_GetAttributes, __VA_ARGS__) // Meta tool need this
#define FS_GetFirstCluster(...)			-255//MD_FS_API(FS_GetFirstCluster, __VA_ARGS__)
#define FS_GetSysInfo(...)			-255//MD_FS_API(FS_GetSysInfo, __VA_ARGS__)
#define FS_SetFileTable(...)        -255//MD_FS_API(FS_SetFileTable, __VA_ARGS__)
#define FS_Config(...)			-255//MD_FS_API(FS_Config, __VA_ARGS__)

//File Only Operation
#define FS_SetAttributes(...)			-255//MD_FS_API(FS_SetAttributes, __VA_ARGS__)
#define FS_Delete(...)					MD_FS_API(FS_Delete, __VA_ARGS__)
#define FS_DeleteEx(...)					-255//MD_FS_API(FS_DeleteEx, __VA_ARGS__)
#define FS_PseudoMerge(...)			-255//MD_FS_API(FS_PseudoMerge, __VA_ARGS__)
#define FS_CheckFile(...)				-255//MD_FS_API(FS_CheckFile, __VA_ARGS__)

//Folder Only Operation
#define FS_GetCurrentDir(...)			-255//MD_FS_API(FS_GetCurrentDir, __VA_ARGS__)
#define FS_GetCurrentDirByDrive(...) -255//MD_FS_API(FS_GetCurrentDirByDrive, __VA_ARGS__)
#define FS_SetCurrentDir(...)			-255//MD_FS_API(FS_SetCurrentDir, __VA_ARGS__)
#define FS_CreateDir(...)				MD_FS_API(FS_CreateDir, __VA_ARGS__)
#define FS_RemoveDir(...)				MD_FS_API(FS_RemoveDir, __VA_ARGS__)
#define FS_GetFolderSize(...)			MD_FS_API(FS_GetFolderSize, __VA_ARGS__)
#define FS_GetFolderSizeEx(...)			MD_FS_API(FS_GetFolderSizeEx, __VA_ARGS__)

//File and Folder Operations
#define FS_Extend(...)					-255//MD_FS_API(FS_Extend, __VA_ARGS__)
#define FS_Truncate(...)				-255//MD_FS_API(FS_Truncate, __VA_ARGS__)
#define FS_MakeFileName(...)			-255//MD_FS_API(FS_MakeFileName, __VA_ARGS__)
#define FS_Rename(...)				MD_FS_API(FS_Rename, __VA_ARGS__)

#define FS_Move(...)					MD_FS_API(FS_Move, __VA_ARGS__)

#define FS_Count(...)					MD_FS_API(FS_Count, __VA_ARGS__)
#define FS_XDelete(...)				MD_FS_API(FS_XDelete, __VA_ARGS__)
#define FS_XDeleteEx(...)				-255//MD_FS_API(FS_XDeleteEx, __VA_ARGS__)

#define FS_CompactDir(...)				-255//MD_FS_API(FS_XDeleteEx, __VA_ARGS__)

#define FS_CheckFileName(...)           -255//MD_FS_API(FS_CheckFileName, __VA_ARGS__)
#define FS_CheckVolumeLabel(...)        -255//MD_FS_API(FS_CheckVolumeLabel, __VA_ARGS__)

//Find File
#define FS_FindFirst(...)				MD_FS_API(FS_FindFirst, __VA_ARGS__)
#define FS_FindNext(...)				MD_FS_API(FS_FindNext, __VA_ARGS__)
#define FS_FindFirstN(...)				-255//MD_FS_API(FS_FindFirstN, __VA_ARGS__)
#define FS_FindNextN(...)				-255//MD_FS_API(FS_FindNextN, __VA_ARGS__)
#define FS_FindClose(...)				MD_FS_API(FS_FindClose, __VA_ARGS__)
#define FS_ListOpen(...)                -255
#define FS_ListReload(...)              -255
#define FS_ListNext(...)                -255
#define FS_ListClose(...)               -255

#ifdef __FS_SORT_SUPPORT__
#define FS_SortCompareFileName(...)     -255
#define FS_SortCompareFileType(...)     -255
#define FS_XFindReset(...)				-255//MD_FS_API(FS_XFindReset, __VA_ARGS__)
#define FS_XFindStart(...)				-255//MD_FS_API(FS_XFindStart, __VA_ARGS__)
#define FS_XFindClose(...)				-255//MD_FS_API(FS_XFindClose, __VA_ARGS__)
#endif

//Drive Management
#define FS_GetDrive(...)				MD_FS_API(FS_GetDrive, __VA_ARGS__)
#define FS_GetDriveByHandle(...)		-255//MD_FS_API(FS_GetDriveByHandle, __VA_ARGS__)
#define FS_GeneralFormat(...)			-255//MD_FS_API(FS_GeneralFormat, __VA_ARGS__)
#define FS_GetClusterSize(...)			MD_FS_API(FS_GetClusterSize, __VA_ARGS__)
#ifdef __FS_QM_SUPPORT__
#define FS_QmGetFree(...)				-255//MD_FS_API(FS_QmGetFree, __VA_ARGS__)
#endif
#define FS_CreateBootSector(...)		0//MD_FS_API(FS_CreateBootSector, __VA_ARGS__)
#define FS_GetPartitionInfo(...)		-255//MD_FS_API(FS_GetPartitionInfo, __VA_ARGS__)
#define FS_CommitAll(...)				-255//MD_FS_API(FS_CommitAll, __VA_ARGS__)
#define FS_MappingDrive(...)			-255//MD_FS_API(FS_MappingDrive, __VA_ARGS__)

//Power Lost Detection and Recovery
#define FS_SetDiskFlag(...)			MD_FS_API(FS_SetDiskFlag, __VA_ARGS__)
#define FS_CheckDiskFlag(...)			-255//MD_FS_API(FS_CheckDiskFlag, __VA_ARGS__)
#define FS_ClearDiskFlag(...)			MD_FS_API(FS_ClearDiskFlag, __VA_ARGS__)
#ifdef __FS_CHECKDRIVE_SUPPORT__
#define FS_CheckDrive(...)			-255//MD_FS_API(FS_CheckDrive, __VA_ARGS__)
#endif

//Disk Management
#define FS_CreateMasterBootRecord(...)	0//MD_FS_API(FS_CreateMasterBootRecord, __VA_ARGS__)
#define FS_SplitPartition(...)				0//MD_FS_API(FS_SplitPartition, __VA_ARGS__)
#define FS_GetDiskInfo(...)				MD_FS_API(FS_GetDiskInfo, __VA_ARGS__)
#define FS_GetDevType(...)				-255//MD_FS_API(FS_GetDevType, __VA_ARGS__)
#define FS_GetDevStatus(...)				-255//MD_FS_API(FS_GetDevStatus, __VA_ARGS__)
#define FS_GetDevPartitions(...)			-255//MD_FS_API(FS_GetDevPartitions, __VA_ARGS__)

//Card management
#define FS_TestMSDC(...)				-255//MD_FS_API(FS_TestMSDC, __VA_ARGS__)
#define FS_CloseMSDC(...)				-255//MD_FS_API(FS_CloseMSDC, __VA_ARGS__)
#define FS_MountRemovableDevice(...)	-255//MD_FS_API(FS_MountRemovableDevice, __VA_ARGS__)

//OTG Card Reader Management
#define FS_ConfigExtDevice(...)		-255//MD_FS_API(FS_ConfigExtDevice, __VA_ARGS__)

//File System Run-Time LifeCycle
#define FS_ShutDown(...)				MD_FS_API(FS_ShutDown, __VA_ARGS__)
#define FS_UnlockAll(...)				MD_FS_API(FS_UnlockAll, __VA_ARGS__)
#define FS_SanityCheck(...)			-255//MD_FS_API(FS_SanityCheck, __VA_ARGS__)
#define FS_LockFAT(...)				MD_FS_API(FS_LockFAT, __VA_ARGS__)

//File System Run-Time Debug
#define FS_CountUsedFH(...)			-255//MD_FS_API(FS_CountUsedFH, __VA_ARGS__)
#ifdef __FS_TRACE_SUPPORT__
#define FS_SetTrace(...)				-255//MD_FS_API(FS_SetTrace, __VA_ARGS__)
#define FS_DumpFHTable(...)			-255//MD_FS_API(FS_DumpFHTable, __VA_ARGS__)
#endif

//DirCache
#define FS_SetDirCache(...)			-255//MD_FS_API(FS_SetDirCache, __VA_ARGS__)
#define FS_GetDirCache(...)			-255//MD_FS_API(FS_GetDirCache, __VA_ARGS__)
#define FS_ExpireDirCache(...)			-255//MD_FS_API(FS_ExpireDirCache, __VA_ARGS__)
#define FS_DirCtrl(...)			-255//MD_FS_API(FS_DirCtrl, __VA_ARGS__)

//Flash Device Direct IO
#define FS_OTPWrite(...)		MD_FS_API(FS_OTPWrite, __VA_ARGS__)
#define FS_OTPRead(...)			MD_FS_API(FS_OTPRead, __VA_ARGS__)
#define FS_OTPQueryLength(...)		MD_FS_API(FS_OTPQueryLength, __VA_ARGS__)
#define FS_OTPLock(...)			MD_FS_API(FS_OTPLock, __VA_ARGS__)
#define FS_IOCtrl(...)              -255//MD_FS_API(FS_IOCtrl, __VA_ARGS__)

//Flash Sweep
#define FS_SweepDevice(...)			-255//MD_FS_API(FS_SweepDevice, __VA_ARGS__)

#define FS_StartIOLog(...)          -255
#define FS_EndIOLog(...)            -255

#if defined(__MTP_ENABLE__)
#define FS_MakeFilePathByHint(...)  -255//MD_FS_API(FS_MakeFilePathByHint, __VA_ARGS__)
#define FS_OpenFileByHint(...)      -255//MD_FS_API(FS_OpenFileByHint, __VA_ARGS__)
#define FS_DeleteByHint(...)        -255//MD_FS_API(FS_DeleteByHint, __VA_ARGS__)
#define FS_GetAttributesByHint(...) -255//MD_FS_API(FS_GetAttributesByHint, __VA_ARGS__)
#define FS_SetAttributesByHint(...) -255//MD_FS_API(FS_SetAttributesByHint, __VA_ARGS__)
#define FS_HintGetParent(...)       -255//MD_FS_API(FS_HintGetParent, __VA_ARGS__)
#endif // __MTP_ENABLE__

#define fs_async_abort(...)             -255
#define fs_async_find_first(...)        -255
#define fs_async_find_first_n(...)      -255
#define fs_async_get_folder_size(...)   -255
#define fs_async_open(...)              -255
#define fs_async_read(...)              -255
#define fs_async_read_interleave(...)   -255
#define fs_async_seek(...)              -255
#define fs_async_write(...)             -255

/* DOM-NOT_FOR_SDK-END */

#endif


#ifdef __cplusplus
}
#endif

#endif // _FS_GENERAL_API_H_


