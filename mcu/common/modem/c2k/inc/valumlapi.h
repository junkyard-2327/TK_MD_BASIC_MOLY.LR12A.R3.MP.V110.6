/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
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
 *   valumlapi.h
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * 
 *
 *==============================================================================*/

#ifndef _VALUMLAPI_H
#define _VALUMLAPI_H

#ifdef __CARRIER_RESTRICTION__
/*carrier match type*/
typedef enum {
    VAL_UML_CAT_NET,        /* restrict by mcc/mnc */
    VAL_UML_CAT_SPN,        /* mcc/mnc and SPN */
    VAL_UML_CAT_IMSI_PREFIX,    /* mcc/mnc and 67 digits of IMSI */
    VAL_UML_CAT_GID1,       /* mcc/mnc and GID1 */
    VAL_UML_CAT_GID2,       /* mcc/mnc and GID2 */
    VAL_UML_CAT_SIZE
} ValUmlCatT;

typedef enum{
    VAL_UML_NONE,           /* Default state:not received pin, or no need to check uml */
    VAL_UML_PASSED,         /* checked and passed */
    VAL_UML_BUSY,           /* request UIM/UML data and checking */
    VAL_UML_RESTRICTED,     /* restricted in black or not in white */
    VAL_UML_REBOOT          /* locked->unlocked or unlocked->locked need AP to reset card */
} ValUmlStatusT;

typedef enum{
    VAL_UML_MD1_STATUS_NOT_RECEIVED,    /* not received */
    VAL_UML_MD1_STATUS_READY,           /* checked and passed */
    VAL_UML_MD1_STATUS_RESTRICTED,      /* restricted in black or not in white */
    VAL_UML_MD1_STATUS_REBOOT           /* locked->unlocked or unlocked->locked need AP to reset card */
} ValUmlMd1StatusT;

typedef enum{
    VAL_UML_STATUS_SYNC_READY,              /* card ready */
    VAL_UML_STATUS_SYNC_CARD_RESTRICTED,    /* card locked */
    VAL_UML_STATUS_SYNC_CARD_REBOOT         /* status changed */
} ValUmlStatusSyncT;

/* the basic unit of categories */
#define VAL_UML_SIZE_OF_CAT_NET     3 /* MCC/MNC 5 digits */
#define VAL_UML_SIZE_OF_CAT_SPN     23 /* MCC/MNC + SPN(20bytes) from MD1 different from MD3 32 bytes */
#define VAL_UML_SIZE_OF_CAT_IMSI_PREFIX 4 /* MCC/MNC + IMSI digits 6 and 7 */
#define VAL_UML_SIZE_OF_CAT_GID1    4 /* MCC/MNC + GID1 */
#define VAL_UML_SIZE_OF_CAT_GID2    4 /* MCC/MNC + GID2 */

/* Define the maximum suppot elements of each category */
#define VAL_UML_MAX_SUPPORT_CAT_NUM     5

/* Define the size of each category */
#define VAL_UML_CFG_CAT_NET_SIZE            (VAL_UML_MAX_SUPPORT_CAT_NUM * VAL_UML_SIZE_OF_CAT_NET)
#define VAL_UML_CFG_CAT_SPN_SIZE            (VAL_UML_MAX_SUPPORT_CAT_NUM * VAL_UML_SIZE_OF_CAT_SPN)
#define VAL_UML_CFG_CAT_INSI_PREFIX_SIZE    (VAL_UML_MAX_SUPPORT_CAT_NUM * VAL_UML_SIZE_OF_CAT_IMSI_PREFIX)
#define VAL_UML_CFG_CAT_GID1_SIZE           (VAL_UML_MAX_SUPPORT_CAT_NUM * VAL_UML_SIZE_OF_CAT_GID1)
#define VAL_UML_CFG_CAT_GID2_SIZE           (VAL_UML_MAX_SUPPORT_CAT_NUM * VAL_UML_SIZE_OF_CAT_GID2)

/* Define the support category size */
#define VAL_UML_SUPPORT_CAT_SIZE    VAL_UML_CAT_SIZE 

#define UIM_SPN_OFFSET  3 /* get spn from EFspn */

#define VAL_UML_PRIORITY_CHECK_WHITE_LIST 1 /* allowed_carriers_prioritized, 0 - Allow All except Black, 1 - Allow White except Black */
#define VAL_UML_MUTIL_SIM_POLICY          1 /* allowed_carriers_prioritized, 0 - Allow All except Black, 1 - Allow White except Black */

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif


typedef smu_cval_carrier_match_category_meta_struct ValUmlCategoryMetaT;

typedef smu_cval_carrier_restriction_list_struct ValUmlCategoryListT;


typedef struct
{
    kal_bool        is_stored;  /* has received from MD1 */
    smu_cval_carrier_restriction_list_struct   black_list;
    smu_cval_carrier_restriction_list_struct   white_list;
    kal_uint8   allow_all;  /* 0 - Not allow all, 1 - Allow all sim*/
    kal_uint8   carrier_rest_state; /* 0 - Enabled 1 - Disabled */
    kal_uint8   multi_sim_policy;
    kal_uint8   allowed_carriers_prioritized; /* 0 - Allow All except Black, 1 - Allow White except Black */
}ValUmlContextT;    /* 393 bytes */

/* data of UML in UIM */
typedef PACKED struct
{
    kal_bool        IMSI_M_Valid;   /* IMSI_M    */
    IMSIType        IMSI_Mp;
    kal_bool        IMSI_T_Valid;   /* IMSI_T    */
    IMSIType        IMSI_Tp;
    kal_bool        spn_valid;
    kal_uint8       spn[UIM_EF_SPN_LENGTH];
    kal_uint8       len_of_gid1;
    kal_uint8       gid1[MAX_NUM_OF_GID];
    kal_uint8       len_of_gid2;
    kal_uint8       gid2[MAX_NUM_OF_GID];  
}UimUmlDataT;

typedef struct
{
    kal_bool        notifyMsgReceived;     /* has read from uim */
    kal_bool        isCdmaOnlyCard;
    kal_uint8       slotId;
    UimUmlDataT     UimUmlData;     /* uim data record for uml */
}ValUimUmlDataT;    /* 393 bytes */

typedef struct
{
    kal_bool        checkByMd3;       /* UIM card need check by MD3 */
    kal_bool        sentCrrstStatusToMD1;  /* has sent the status to MD1 */
    ValUmlStatusT   ValUmlCurStatus;  /* current status */
    ValUmlStatusT   ValUmlMd3Status;  /* the resule checked by MD3 */
    ValUmlMd1StatusT    ValRecUmlMd1Status[2];     /* status received from MD1, [0] : slot1 [1] : slot2  */
}ValUmlResultsT;

void ValUmlInit(void);
kal_bool ValUmlCheck(void);
void ValUmlGetUimData(UimNotifyMsgT *DataMsgP);
void ValUmlDeliverMsg( kal_uint32 MsgId,
                           void*  MsgP);
kal_bool ValUmlNeedCheckCarrier(kal_uint8 slot_id);
void ValUmlSendCarrierStatus(kal_uint8 slot_id);
void ValUmlSaveNotifyMsg(UimNotifyMsgT *DataMsgP);
ValUmlStatusT ValUmlCalFinStatus(kal_uint8 slotId);
void ValUmlGetFinStatus(CardStatusT *CardStatus);
kal_bool ValUmlCheckNull(void);
void ValUmlStatusResetBySlot(kal_uint8 slot_id);
#endif
#endif

