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
* Copyright (c) 2006-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/

/*****************************************************************************

 FILE NAME:  valphbapi.h

 DESCRIPTION:

This file contains all api of val phone book for upper layer

*****************************************************************************/
#ifndef VAL_PHB_API_H
#define VAL_PHB_API_H
#ifdef  __cplusplus
extern "C" {
#endif

/*===========================================================================

                     INCLUDE FILES FOR MODULE

===========================================================================*/
#include "sysdefs.h"
#include "valapi.h"

/*===========================================================================

                      MARCO DEFINES

===========================================================================*/

/*remote uicc,needn't access phonebook */
#if defined(SYS_OPTION_REMOTE_UICC) && !defined(MTK_DEV_C2K_IRAT)
#define VAL_PHB_MAX_REC_NUMBER 1
#define VAL_PHB_MAX_FLASH_REC_NUMBER 1
#define VAL_PHB_MAX_UIM_REC_NUMBER 1
#else

#ifdef MTK_CBP
#define VAL_PHB_MAX_FLASH_REC_NUMBER 5
#define VAL_PHB_MAX_UIM_REC_NUMBER 300
#define VAL_PHB_MAX_UIM_FDN_REC_NUMBER 40
#define VAL_PHB_MAX_UIM_FLASH_REC_NUMBER (VAL_PHB_MAX_FLASH_REC_NUMBER + VAL_PHB_MAX_UIM_REC_NUMBER)
#define VAL_PHB_MAX_REC_NUMBER (VAL_PHB_MAX_FLASH_REC_NUMBER + VAL_PHB_MAX_UIM_REC_NUMBER + VAL_PHB_MAX_UIM_FDN_REC_NUMBER)
#else
#define VAL_PHB_MAX_REC_NUMBER 450
#define VAL_PHB_MAX_FLASH_REC_NUMBER 200
#define VAL_PHB_MAX_UIM_REC_NUMBER 250
#endif
#endif

#define EOL 0xFFFF    /* stands for End Of List */

/* Field struct data length defined */
#define PHB_FIELD_ID_LEN  FIELD_SIZE(ValPhbFieldT,FieldId)
#define PHB_FIELD_TYPE_LEN  FIELD_SIZE(ValPhbFieldT,FieldType)
#define PHB_FIELD_DATALEN_LEN  FIELD_SIZE(ValPhbFieldT,DataLength)
#define PHB_FIELD_HEADER_LEN  FIELD_OFFSET(ValPhbFieldT,Data)


#define VAL_PHB_DEV_NONE 0x00
#define VAL_PHB_MAX_REGISTERED_IDS            5      /*!< Max registered app */
#define VAL_PHB_TELESRVID_COUNT              20      /*!< Max registered teleservice id */

#define VAL_PHB_GROUP_STATE 0xF0 /* the start value of group id for record state */

#define VAL_PHB_MAX_REC_BUFFER_CNT 4

//don't modify following Macro, brew has referred to it
#define VAL_PHB_MAX_FLASH_REC_CNT  500  /* Phb Flash Record counts */

//don't modify following Macro, brew has referred to it
#ifdef FEATURE_ADVANCED_CONTACT
#define VAL_PHB_MAX_REC_SIZE  1312  /* max contact size in bytes */

#define VAL_PHB_MAX_ALPHA_LENGTH 65
#define VAL_PHB_MAX_PHONE_LENGTH 66  /* string type */
#else
#define VAL_PHB_MAX_REC_SIZE  196  /* max contact size in bytes */

#ifdef MTK_CBP
#define VAL_PHB_MAX_ALPHA_LENGTH 40
#else
#define VAL_PHB_MAX_ALPHA_LENGTH 33
#endif
#define VAL_PHB_MAX_PHONE_LENGTH 33  /* string type */
#endif

#ifdef MTK_CBP
#define PHB_MAX_ALPHA_LENGTH 40
#else
#define PHB_MAX_ALPHA_LENGTH 15  
#endif

#ifdef MTK_CBP
#define PHB_MAX_PHONE_LENGTH 41  /*string type*/
#define PHB_MAX_PHONE_ADN_LENGTH 21  /*string type*/
#else
#define PHB_MAX_PHONE_LENGTH 21  /*string type*/
#endif

#define PHB_MAX_UIM_UPDATE_RETRY_NUMBER 2  
/* It is external PHB contact structure,
   it is used to interface with UI task or other tasks,
   It's PhoneNumber is string type
 */
typedef  struct 
{
  kal_uint8  Ton;
  kal_uint8  Npi;
  kal_uint8  AlphaIdentifier[PHB_MAX_ALPHA_LENGTH+1];  /*Alpha Identifier*/
  kal_uint8  PhoneNumber[PHB_MAX_PHONE_LENGTH+1];	   /*Dialing Number/SSC String*/
  kal_uint16 RecID;				               /*Record ID*/
  kal_bool   HasExtension;
  kal_uint8  spdial_index;      /* speed dial index, 0 if nothing */
  kal_uint8  category;          /* personal or business */
  kal_uint8  telcategory;       /* category of this phone # */
  kal_uint8  restricted;        /* is it restricted */
  kal_uint8  Secret;
  kal_uint32 offset;            /* phone extension offset */
} ValPhbContactFullT;

/* buffer state */
typedef enum
{
  VAL_PHB_BUF_FREE = 0x00,
  VAL_PHB_BUF_USED,
  VAL_PHB_BUF_MODIFIED,
  VAL_PHB_BUF_MAX_STATE
}ValPhbBufferStateT;

typedef struct 
{
  kal_uint8   BufState; /* The buffer state*/
  kal_uint8   DeviceId; /* The device id for buffer contact */
  kal_uint16 RecId; /* The record id for  the contact in val db */
  kal_uint16 DataLen; /* The actual length of the contact data segment */
  kal_uint8   Data; /* The buffer for data */
}ValPhbRecordBufferT;

/* Val phb error */
typedef enum
{ 
  VAL_PHB_ERR_NONE  = 0, /* Operating success */
  VAL_PHB_ERR_PARMETER = 1,    /* Inputting invalid parameter */
  VAL_PHB_ERR_NOT_PARA_INIT, /* val phb parameters not init(ValPhbInit has not been called) */

  VAL_PHB_ERR_DEV_UNSUPPORT, /* unsupport phb device,error device id */
  VAL_PHB_ERR_DEV_REG, /* phb device register error, register device is full */
  VAL_PHB_ERR_DEV_ALREADY_REG, /* phb device already register */
  VAL_PHB_ERR_DEV_NOT_REG, /* phb device not register */
  VAL_PHB_ERR_DEV_NOT_OPEN, /* phb device not open */
  VAL_PHB_ERR_DEV_ALREADY_OPEN,  /* phb device already open */
  VAL_PHB_ERR_DEV_OPEN,  /* error when open phb device open */
  VAL_PHB_ERR_DEV_CLOSE,  /* error when close phb device failure */
  VAL_PHB_ERR_DEV_INIT_BUSY, /* phb device initial busy */

  VAL_PHB_ERR_REC_EMPTY, /* empty record of phb device */
  VAL_PHB_ERR_REC_READ, /* read record  of phb device failure */
  VAL_PHB_ERR_REC_WRITE,  /* write record of phb device failure */
  VAL_PHB_ERR_REC_DELETE, /* delete record of phb device failure */

  VAL_PHB_ERR_NO_VAL_MEMORY, /* val malloc failure */
  VAL_PHB_ERR_NO_MEMORY, /* no memory for new phb record */
  VAL_PHB_ERR_NO_ENOUGH_MEMORY,	/* no enough memory for new phb record */
  VAL_PHB_ERR_NO_BUFFER, /* no record buffer for field operating */

  VAL_PHB_ERR_MAX_REC_SIZE, /* no more space of the record for this field */
  VAL_PHB_ERR_FIELD_NONEXISTENCE  /* no such phb field */

}ValPhbResultT;

typedef enum                                    /* Return values 	*/
{
  CONTACT_SUCCESS,                    /* success            */
  CONTACT_FULL,                           /* contact phonebook or item is full  */
  CONTACT_FAIL,                           /* fail in the PHONE file */  
  CONTACT_EXTEN_FAIL,               /* fail in the EXTEN file   */
  CONTACT_SUCCESS_AND_COMPRESS,      /* contact EXTEN file request to compress and success. */
  CONTACT_EXTEN_RECOVER         /* contact EXTEN file request to recover  */
} ContactResultT;


typedef struct
{
  kal_uint16 PhbUimRecNum;
  kal_uint16 PhbFlashRecNum;
  kal_uint16 PhbUimFreeNum;
#ifdef MTK_CBP
  kal_uint8  FdnRecNum;
  kal_uint8  FdnFreeNum;
#endif
} ValPhbCountT;

//don't modify following Enum, brew has referred to it
/* Val phb field type */
typedef enum
{
  VAL_PHB_FIELD_TYPE_NAME_INTER= 0x00,
  VAL_PHB_FIELD_TYPE_NUMBER_INTER= 0x01,
  VAL_PHB_FIELD_TYPE_GROUP_INTER  = 0x03,
  VAL_PHB_FIELD_TYPE_MAX_INTER
}ValPhbFieldTypeInterT;

typedef struct
{
  kal_uint8 ValPhbAlphaLength;  /* max name length */
  kal_uint8 ValPhbPhoneLength; /* max string type phone number length */
  kal_uint8   ValPhbMaxDevCount; /* max phb storage device count */
  kal_uint16  ValPhbMaxRecSize; /* max record size */
  kal_uint16  ValPhbMaxRecCount; /* max record count */
  kal_uint16  ValPhbMaxRecBufCount; /* max record buffer count */
  kal_uint16  ValPhbMaxPhoneNumberCnt; /* max count of phone number in phone */
  kal_uint16  ValPhbMaxFieldType; /* max record field type */
  kal_uint16  ValPhbMaxFieldId; /* max record field id */

  kal_uint16 ValPhbRecBufSize; /* size of ValPhbRecordBufferCustT */

  void*  ValPhbRecBufAddress;/* record buffer address */
}ValPhbCustParaT;

/* init state */
typedef enum
{
  VAL_PHB_INIT_INVALID = 0x00, /* the phb dev initial invalid */
  VAL_PHB_INIT_VALID,  /* the phb dev initial valid */
  VAL_PHB_INIT_NOT_COMPLETE,  /* the phb init not complete */
  VAL_PHB_INIT_COMPLETE  /* the phb init complete */
}ValPhbInitStateT;


//don't modify following Enum, brew has referred to it
/* Val phb device type */
/* DON'T add item value to 0, it has been define to VAL_PHB_DEV_NONE in valphbapi.c */
typedef enum
{
  VAL_PHB_DEV_UIM         = 0x01,
  VAL_PHB_DEV_FLASH       = 0x02,
  VAL_PHB_DEV_MAX
} ValPhbDeviceT;

typedef struct buff_struct
{
  kal_uint8 unicodehead;
  kal_uint8 str[PHB_MAX_ALPHA_LENGTH - 1 + 2];
} buff;

typedef union search_name_union
{
  buff  buf;
  kal_uint8 data[PHB_MAX_ALPHA_LENGTH + 2];
} searchname_str;

#ifdef MTK_CBP
#define PHB_MAX_VAL_PHONE_LENGTH 20
#else
#define PHB_MAX_VAL_PHONE_LENGTH 10
#endif

//don't modify following Enum, brew has referred to it
/* Val phb field type */
typedef enum
{
  VAL_PHB_FIELD_TYPE_NAME  = VAL_PHB_FIELD_TYPE_NAME_INTER,
  VAL_PHB_FIELD_TYPE_NUMBER  = VAL_PHB_FIELD_TYPE_NUMBER_INTER,
  VAL_PHB_FIELD_TYPE_GROUP = VAL_PHB_FIELD_TYPE_GROUP_INTER,
  VAL_PHB_FIELD_TYPE_NUMBER_INFO,
  VAL_PHB_FIELD_TYPE_MAX = 0xF0
}ValPhbFieldTypeT;

typedef  struct 
{
  kal_uint8  Ton;
  kal_uint8  Npi;
  kal_uint8  AlphaIdentifier[PHB_MAX_ALPHA_LENGTH+1]; /*Alpha Identifier*/
  kal_uint8  PhoneNumber[PHB_MAX_VAL_PHONE_LENGTH+1]; /*Dialing Number/SSC String*/
  kal_uint16 RecID;                                 /*Record ID*/
  kal_bool   HasExtension;                          /*if have extension info*/
} ValPhbContactSummaryT;

//don't modify following Enum, brew has referred to it
/* Val phb field id */
typedef enum
{
  VAL_PHB_FIELD_ID_PRIMARY_NAME 	= 0x00,
  VAL_PHB_FIELD_ID_PRIMARY_NUMBER = 0x01,
  VAL_PHB_FIELD_ID_PRIMARY_NUMBER_INFO = 0x10,
  VAL_PHB_FIELD_ID_MAX = 0xF0
}ValPhbFieldIdT;

typedef enum
{
  PHB_NODE_CLEAN              = 0x00,
  PHB_NODE_USED               = 0x01,
  PHB_NODE_WRITING            = 0x02,
  PHB_NODE_WAITING_FOR_WRITE  = 0x03,
  PHB_NODE_DELETING           = 0x04,
  PHB_NODE_WAITING_FOR_DELETE = 0x05,
  PHB_NODE_STATUS_NUM
} ValNodeStatus;
/* for customer */
typedef struct 
{
  kal_uint8   BufState;  /* The buffer state*/
  kal_uint8   DeviceId;  /* The device id for buffer contact */
  kal_uint16 RecId;  /* The record id for  the contact in val db */
  kal_uint16 DataLen; /* The actual length of the contact data segment */
  kal_uint8   Data[VAL_PHB_MAX_REC_SIZE]; /* The buffer for data */
}ValPhbRecordBufferCustT;

typedef struct
{
  kal_uint16                NextAddress;
  ValNodeStatus         NodeState;
  ValPhbContactSummaryT ValPhbContact;
} ValPhbNodeType;

typedef struct 
{
  kal_uint16 index;       // id of the contact
  kal_uint16 size;        // size of the record data
} ValContactExtenRecHeaderT;

#ifdef MTK_CBP
#define VAL_PHB_FDN_NUMBER_LEN 40

typedef struct
{
  kal_uint8  Ton;
  kal_uint8  Npi;
  kal_uint8  AlphaIdentifier[PHB_MAX_ALPHA_LENGTH+1]; /*Alpha Identifier*/
  kal_uint8  PhoneNumber[VAL_PHB_FDN_NUMBER_LEN+1]; /*Dialing Number/SSC String*/
  kal_uint8  RecID;                                 /*Record ID*/
}ValFdnContactInfoT;

typedef struct
{
  kal_bool    FdnInitOk;
  kal_bool    FdnEnabled;
  kal_uint8   FdnRecCount;
  kal_uint8   FdnRecSize;
}ValFdnContextT;
#endif

/* marco define for link list */
#define VAL_PHB_EOL 0xFFFF /* end of link list */


typedef kal_uint32 ValPhbEventIdT;
typedef void (*ValPhbEventFunc) ( RegIdT RegId, kal_uint32 Event, void *MsgP );


/*! Contact Event register table structure */
typedef struct
{
  kal_bool            IsUse;            /*!< if this entry is in use */
  kal_uint8           NumTeleSrvId;     /*!< Teleservice Id count */
  kal_uint16          TeleSrvId[VAL_PHB_TELESRVID_COUNT]; /*!< Teleservice id */
  ValPhbEventFunc CallBack;         /*!< Function to call back */
} ValPhbRegTableT;

//don't modify following Struct, brew has referred to it
/* VAL phb filed type */
typedef  struct
{
  kal_uint8  FieldId;
  kal_uint8  FieldType;
  kal_uint16 DataLength;
  void * Data;
}  ValPhbFieldT;

/* val phb device init msg */
typedef   struct 
{
  ValPhbInitStateT PhbInitState;

}   ValPhbInitStateMsgT;

void ValPhbInit(void);
void ValPhbUnInit(void);
RegIdT ValPhbRegister(ValPhbEventFunc CallBack);
ValPhbResultT ValPhbUnRegister(RegIdT RegId);
kal_bool IsPhbUimInitOk(void);
kal_bool IsPhbFlashInitOk(void);
#ifdef SYS_OPTION_NO_UI
kal_bool ValPhbProcessMsg( kal_uint32 MsgId, void*  MsgBufP, kal_uint32 MsgLen );
#endif
/*flash*/
kal_uint32 ValPhbOpenFlashFile(void);
kal_uint32 ValPhbCloseFlashFile(void);
kal_bool ValPhbDeleteFlashData(void);
kal_uint32 ValPhbDbFlush(void);

ValPhbResultT  ValPhbGetFlashRecord(kal_uint16 RecId, void *BufferP, kal_uint32 *LengthP);
ValPhbResultT  ValPhbEraseFlashRecord(kal_uint16 RecId);
ValPhbResultT  ValPhbUpdateFlashRecord(kal_uint16 RecId, void *BufferP, kal_uint32 Length);
/*Field */
ValPhbResultT  ValPhbSetField(kal_uint16 DevId, kal_uint16 RecId, ValPhbFieldT  Field);
ValPhbResultT ValPhbGetField(kal_uint8 DeviceId, kal_uint16 RecordId,ValPhbFieldT *FieldP);
ValPhbResultT ValPhbClearField(kal_uint8 DeviceId, kal_uint16 RecordId,kal_uint8 FieldId);
ValPhbResultT ValPhbFlushRecord(kal_uint8 DeviceId, kal_uint16 RecordId);

/*Uim*/
ValPhbResultT  ValPhbGetUimRecParams(void);
ValPhbResultT  ValPhbGetUimRecord(kal_uint16 RecId);
ValPhbResultT  ValPhbEraseUimRecord(kal_uint16 RecId);
ValPhbResultT  ValPhbUpdateUimRecord(kal_uint16 RecId, kal_uint8 * NameP, kal_uint8 * PhNumP, kal_uint8 TON, kal_uint8 NPI);

#ifdef MTK_CBP
kal_uint8 ValGetPhbAlphaLen(kal_uint8 *pAlpha);
kal_uint8 PhbGetAlphaIdLenByAddress(kal_uint16 nAddress);
#endif

/*-------------------------------------*/

void ValPhbInitAllContact( void );


/*****************************************************************************

  FUNCTION NAME: ValPhbFindContactByNumber 

  DESCRIPTION:
    update a phone book contact info  
 
  PARAMETERS:
	pPhbContact:  A pointer to a phone book  Contact.
	
  RETURNED VALUES:
	KAL_TRUE is success, and KAL_FALSE is error
	
*****************************************************************************/
kal_bool ValPhbFindContactByNumber( ValPhbContactFullT* pPhbContact,
                                kal_uint8*              pNumber );
#ifdef MTK_CBP
extern kal_bool ValGetFdnStatus(void);
#endif

#ifdef __cplusplus

}
#endif /* __cplusplus */
#endif 




