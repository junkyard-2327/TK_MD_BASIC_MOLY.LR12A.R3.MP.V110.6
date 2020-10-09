/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS (""MEDIATEK SOFTWARE"")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN ""AS-IS"" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
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
/*************************************************************
*
* This Software is the property of VIA Telecom, Inc. and may only be used pursuant to a license from VIA Telecom, Inc.  
* 
* Any unauthorized use inconsistent with the terms of such license is strictly prohibited.
* 
* Copyright (c) 2003-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
/**************************************************************************************************
* %version: 3 %  %instance: HZPT_2 %   %date_created: Mon Apr  9 17:19:02 2007 %  %created_by: rli %  %derived_by: rli %
**************************************************************************************************/

#ifndef VAL_SMS_CUST_H
#define VAL_SMS_CUST_H
/******************************************************************************
* 
* FILE NAME   : valsmscust.h
*
*
* DESCRIPTION :
*        user dependence variable define.
*
* HISTORY     :
*   
*
* 
******************************************************************************/

#ifdef __cplusplus
extern "C"
{
#endif 

//don't modify following macro, brew has referred to it
////////////////////////////////////////////////////////
/* max record count for sms in flash db file */
#define VAL_SMS_MAX_FLASH_REC_CNT 500
/* sms flash record size */
#define VAL_SMS_FLASH_REC_SIZE 	sizeof(ValSmsRecordT)

#define VAL_SMS_MAX_FLASH_BC_REC_CNT 0

#define VAL_SMS_MAX_UIM_REC_CNT 255
#define VAL_SMS_MAX_UIM_REC_SIZE   sizeof(ValSmsRecordT)

#define VAL_SMS_MAX_RAM_REC_CNT 10 //!< max ram record count

/* for sms flash db file,include one voice mail */
#define VAL_SMS_MAX_FLASH_FILE_REC_CNT   VAL_SMS_MAX_FLASH_REC_CNT + 1

#define VAL_SMS_MAX_REC_CNT  (VAL_SMS_MAX_UIM_REC_CNT + VAL_SMS_MAX_FLASH_REC_CNT)

/* extra recor for all record in flash( sms + one voic mail ) */
#define VAL_SMS_EXTRA_REC_CNT  VAL_SMS_MAX_FLASH_REC_CNT

/*the voice mail position in flash db file ,the last one*/
#define VAL_SMS_VMN_ADDRESS	VAL_SMS_MAX_FLASH_REC_CNT

#define VAL_SMS_MAX_ADDRESS_LEN              32
#define VAL_SMS_MAX_SUBADDR_LEN              30
#define VAL_SMS_MAX_USER_DATA_LEN           255 /* changed from 200 to 255 in attempt to fix Bug 1007 (F.Hou) */
#define VAL_SMS_CALLBACK_NUMBER_MAX_DIGITS   30
#define VAL_SMS_MAX_CATEGORIES               10
#define VAL_SMS_MAX_CHAR_IN_CATEGORY         20
#define VAL_SMS_TL_MAX_MSG_LENGTH           255   /* teleservice layer pdu max len */
#define VAL_SMS_MAX_NUM_DATA_MSGS             2
/////////////////////////////////////////////////////

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif

/*****************************************************************************
* $Log: valsmscust.h $
* Revision 1.1  2007/10/29 11:53:09  binye
* Initial revision
* Revision 1.1  2007/10/12 14:05:33  yjin
* Initial revision
* Revision 1.1  2006/12/25 11:10:18  yjin
* Initial revision
* Revision 1.1  2006/12/04 20:30:56  xuhua
* Initial revision
* Revision 1.1  2006/11/29 18:49:00  rli
* Initial revision
*****************************************************************************/
/**Log information: D:\projects\vtui2_5x\gzhu_view\HZREF\cp\inc\valsmscust.h@@\main\vtui2_5x\2 2008-05-14 09:04:36 GMT gzhu
** HREF#178**/
/**Log information: \main\vtui2_5x\3 2008-06-03 06:27:28 GMT pchen
** HREF#32**/
/**Log information: \main\vtui2_5x\sms_contact_refactory\1 2008-08-12 06:39:08 GMT pchen
** HREF#1445**/
/**Log information: \main\vtui2_5x\sms_contact_refactory\2 2008-10-23 05:56:26 GMT pchen
** HREF#1445**/
/**Log information: \main\vtui2_5x\sms_contact_refactory\3 2009-03-04 11:41:13 GMT pchen
** HREF#1445**/
/**Log information: \main\vtui2_5x\sms_contact_refactory\4 2009-03-06 08:03:56 GMT pchen
** HREF#1445**/
/**Log information: \main\vtui2_5x\sms_contact_refactory_1\1 2009-03-19 08:08:06 GMT yfan
** HREF#1580**/
/**Log information: \main\helios_dev\touchflow\1 2009-06-05 05:57:31 GMT yfan
** HREF#1580**/
/**Log information: \main\CBP7FeaturePhone\CBP7FeaturePhone_nicholaszhao_href17384\1 2011-07-04 08:32:13 GMT nicholaszhao
** HREF#17384**/
/**Log information: \main\CBP7FeaturePhone\3 2011-07-12 09:41:56 GMT marszhang
** HREF#17384**/
/**Log information: \main\2 2012-04-09 02:56:12 GMT pchen
** HREF#  change sms record to 500**/

