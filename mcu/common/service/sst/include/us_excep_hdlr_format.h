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
 *   usip_excep_hdlr_format.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   This file provides typedefs and definiton for .
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
 
#ifndef __USIP_EXCEP_HDLR_FORMAT_H__
#define __USIP_EXCEP_HDLR_FORMAT_H__

// ----------------- macro definition ---------------
#define USIP_CORE_NUMBER            (2)
#define USIP_THREAD_NUMBER          (2)
#define USIP_TOTAL_THREAD_NUMBER    (USIP_CORE_NUMBER * USIP_THREAD_NUMBER)
#define SCQ16_CORE_NUMBER           (2)
#define USIP_SCQ16_TOTAL_THREAD_NUM (USIP_CORE_NUMBER*USIP_THREAD_NUMBER+SCQ16_CORE_NUMBER)
// ----------------- data type Definition -------------------
typedef enum {
  USIP_SCQ16_EXCEPTION_ASSERTION = 0x45584300,
  USIP_SCQ16_EXCEPTION_FATAL_ERROR,
  USIP_SCQ16_EXCEPTION_CTI_EVENT,
  USIP_SCQ16_EXCEPTION_UNKNOWN
} USIP_SCQ16_EXCEPTION_TYPE_T;

#if defined(__GNUC__)
typedef struct __attribute__((packed)) {
#else
#pragma pack(1)
typedef struct {
#endif // __GNUC__
  unsigned int line_num;
  unsigned int para1;
  unsigned int para2;
  unsigned int para3;
  unsigned char file_name[64];
} ASSERTION_INFO_T;
#if !defined(__GNUC__)
#pragma pack()
#endif // __GNUC__

#if defined(__GNUC__)
typedef struct __attribute__((packed)) {
#else
#pragma pack(1)
typedef struct {
#endif // __GNUC__
  unsigned int error_status;
  unsigned int error_pc;
  unsigned int error_lr;
  unsigned int error_address;
  unsigned int error_code1;
  unsigned int error_code2;
  unsigned char error_section;
} FATAL_ERROR_INFO_T;
#if !defined(__GNUC__)
#pragma pack()
#endif // __GNUC__

#if defined(__GNUC__)
typedef struct __attribute__((packed)) {
#else
#pragma pack(1)
typedef struct {
#endif
  USIP_SCQ16_EXCEPTION_TYPE_T except_type;
  unsigned int except_stat;
  union {
    ASSERTION_INFO_T   assert;
    FATAL_ERROR_INFO_T fatal;
  }except_content;
} USIP_SCQ_EXCEPTION_INFO_T;
#if !defined(__GNUC__)
#pragma pack()
#endif // __GNUC__

typedef struct {
    unsigned int              core_num;
    USIP_SCQ_EXCEPTION_INFO_T core_error[USIP_SCQ16_TOTAL_THREAD_NUM]; 
} USIP_SCQ_EXCEPTION_RECORD_T;


#endif /* __USIP_EXCEP_HDLR_FORMAT_H__ */

