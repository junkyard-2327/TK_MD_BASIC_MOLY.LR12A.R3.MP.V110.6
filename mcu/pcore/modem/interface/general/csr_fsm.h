/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2007
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
 *  csr_fsm.h
 *
 * Project:
 * --------
 *   Monza
 *
 * Description:
 * ------------
 *   This file is intends for CSR FSM.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *              HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
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
 *
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
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
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
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 *******************************************************************************/
/****************************************************************************
 *
 *               Assignment : 3G Protocol Software
 *               CONFIDENTIAL
 *               Copyright (c) 2000-2005, UbiNetics Ltd. All rights reserved.
 *               Cambridge Technology Centre
 *               Melbourn Royston
 *               Herts SG8 6DP UK
 *               Tel: +44 1763 262222
 *
 ****************************************************************************
 *
 * COMPONENT:    CSR
 * MODULE:       $RCSfile: rab.h,v $
 * VERSION:      $Revision: 1.2 $
 * DATED:        2003/06/19 14:37:49 $
 * AUTHOR:       Kathiravan
 *
 * DESCRIPTION:  CSR fsm
 *
 ****************************************************************************/
#if !defined(CSR_FSM_H)
#define CSR_FSM_H

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "ul2d_msgid.h"
#include "as_common.h"
#include "uas_common_struct.h"
#include "ratcm_csr_struct.h"
#include "uas_common_enums.h"
#include "em_struct.h"
#include "l1audio.h"
#ifdef __VIDEO_CALL_SUPPORT__
#include "TVT_callback.h"
#endif

/* MACROS *******************************************************************/
#define MAX_NO_OF_SI 255
#define UNKNOWN_AMR_FRAME_TYPE 0xff /* CSR internal use */
#define MAX_NO_OF_CSR_ENTITY 6
#define MAX_NO_OF_CSR_REACHED (MAX_NO_OF_CSR_ENTITY+1)
#define CSR_ENTITY_NOT_FOUND (MAX_NO_OF_CSR_ENTITY+2)
#define MAX_AMR_CLASS 3
#define GetPos(low, high, pos) (pos = ((low+high)/2))
#define INIT_CODEC_DATA(Codec_DataToSend) \
{ \
   Codec_DataToSend->AMRClass[0] = NULL; \
   Codec_DataToSend->AMRClass[1] = NULL; \
   Codec_DataToSend->AMRClass[2] = NULL; \
}
#define MAX_AMR_FRAME_SIZE 31
#define CSR_CS_FCS_LEN 3
#define CSR_CS_PDU_SIZE 72  /* RLP frame size */
#define CSR_VT_PDU_SIZE 80  /* video call frame size */
#define CSR_CS_TRA_PDU_SIZE 80  /* MAUI_02375911, 3G 64K Transparent CSD, add for sync-hdlc CSD */
#define CSR_ASSERT(x) DEBUG_ASSERT(x)

/* mtk02374 20110801 use CSR_NON_SPEECH_SERVICE to replace checking of services other than speech */
#if defined(__VIDEO_CALL_SUPPORT__) || defined(__CSD_NT__) || defined(__SYNC_HDLC_CSD__)
#define CSR_NON_SPEECH_SERVICE
#endif

#ifdef __EM_MODE__
#define FDD_SET_CSR_EM_NEED_UPDATE() FDD_CSREntityInfo.EmNeedUpdate = KAL_TRUE;
#define FDD_RESET_CSR_EM_NEED_UPDATE() FDD_CSREntityInfo.EmNeedUpdate = KAL_FALSE;
#define FDD_IS_CSR_EM_NEED_UPDATE() (FDD_CSREntityInfo.EmNeedUpdate)
#define FDD_SET_CSR_EM_SRC(em_src) FDD_CSREntityInfo.EmSrc |= em_src;
#define FDD_CLEAR_CSR_EM_SRC(em_src) FDD_CSREntityInfo.EmSrc &= ~em_src;
#define FDD_RESET_CSR_EM_SRC() FDD_CSREntityInfo.EmSrc = CSR_EM_NONE;
#define FDD_IS_CSR_EM_ENABLE() (FDD_CSREntityInfo.EmSrc != CSR_EM_NONE)
#define FDD_IS_CSR_EM_DISABLE() (FDD_CSREntityInfo.EmSrc == CSR_EM_NONE)
#define FDD_IS_CSR_UPDATE_EM_TO_ELT() (FDD_CSREntityInfo.EmSrc & CSR_EM_ELT)
#define FDD_IS_CSR_UPDATE_EM_TO_AP() (FDD_CSREntityInfo.EmSrc & CSR_EM_AP)
#endif

/* FDD MACROS ***************************************************************/
#define FDD_GetSizeofAMRClassA(FrameType,SizeOfClassA) (SizeOfClassA = (FDD_FrameTypeAndDataRate[FrameType].sizeOfClassA))
#define FDD_GetSizeofAMRClassB(FrameType,SizeOfClassB) (SizeOfClassB = (FDD_FrameTypeAndDataRate[FrameType].sizeOfClassB))
#define FDD_GetSizeofAMRClassC(FrameType,SizeOfClassC) (SizeOfClassC = (FDD_FrameTypeAndDataRate[FrameType].sizeOfClassC))
#define FDD_CC_DEFAULT_STREAM_ID 1
#define FDD_CSR_SEND_ILM(src_mod_id, dest_mod_id, msg_id, local_para_ptr, peer_buff_ptr) FDD_CsrSendIlm(src_mod_id, dest_mod_id, msg_id, (local_para_struct *)local_para_ptr, (peer_buff_struct *)peer_buff_ptr);
#define FDD_mSET_SEND_CONFIG_MAPPING_IND(SendCfgReq) SendCfgReq = KAL_TRUE;
#define FDD_mReSET_SEND_CONFIG_MAPPING_IND(SendCfgReq) SendCfgReq = KAL_FALSE;
#define FDD_CSR_STATE_CHANGE(idx, newState) \
    kal_brief_trace(TRACE_STATE, FDD_CSR__CHANGE_STATE, idx, FDD_CSREntityInfo.CSRWorkSpace[idx]->CSRCurrentState, newState); \
    FDD_CSREntityInfo.CSRWorkSpace[idx]->CSRCurrentState = newState;

#define FDD_CSRENTITY_ACTIVE_SIM() (FDD_CSREntityInfo.activeSim)
#define TDD_CSR_ACTIVE_SIM() (0)

#ifdef __CSHSPA_SUPPORT__
#define FDD_CSR_UL_AFM_OPT (AFM_OPT_ALIGN_ALLOC | AFM_OPT_DBG)
#define FDD_CSR_UL_DATA_POOL_SIZE \
    (AFM_POOL_OVERHEAD(FDD_CSR_UL_AFM_OPT , 1 ) \
    + AFM_SUBPOOL_OVERHEAD(FDD_CSR_UL_AFM_OPT, (MAX_CS_DATA_SIZE + sizeof(SHAQ_csr_data_req_struct) + FDD_NUM_DRLC_UM_USER_RB_OFFSET + 4), MAX_CS_UL_MEM_NUM) + 64)
#endif

#ifdef __MTK_TARGET__
#define FDD_CSR_LOG_FILE(a,b,c)
#else
#define FDD_CSR_LOG_FILE(a,b,c) FDD_CsrWriteLog(a,b,c)
#endif

/* TDD MACROS ***************************************************************/
#define TDD_GetSizeofAMRClassA(FrameType,SizeOfClassA) (SizeOfClassA = (TDD_FrameTypeAndDataRate[FrameType].sizeOfClassA))
#define TDD_GetSizeofAMRClassB(FrameType,SizeOfClassB) (SizeOfClassB = (TDD_FrameTypeAndDataRate[FrameType].sizeOfClassB))
#define TDD_GetSizeofAMRClassC(FrameType,SizeOfClassC) (SizeOfClassC = (TDD_FrameTypeAndDataRate[FrameType].sizeOfClassC))
#ifdef __MTK_TARGET__
#define TDD_CSR_LOG_FILE(a,b,c)
#else
#define TDD_CSR_LOG_FILE(a,b,c) TDD_csr_write_log(a,b,c)
#endif

/* TYPES DEFINITIONS ********************************************************/
typedef U8 AMRFrameType;

typedef enum
{
    stCSR_INACTIVE,
    stCSR_ACTIVE,
    stCSR_WAIT_FOR_RAB_ESTABLISH,
    stCSR_WAIT_FOR_RAB_MODIFY_OR_RELEASE,
    stCSR_WAIT_FOR_ROUTING
} tCSR_States;

/* MAUI_02375904 */
typedef enum
{
    RAB_ESTAB_CREATE_CSR_ENTITY_IF_NOT_FOUND,
    SET_ROUTE_CREATE_CSR_ENTITY_IF_NOT_FOUND,
    FIND_CSR_ENTITY_BY_RAB_ID,
    FIND_CSR_ENTITY_BY_STREAM_ID
} tCSR_Action;

/* [MAUI_01663681] Add trace info for Speech Codec Type Reference TS26.103, Table 6.3-1 */
typedef enum
{
    GSM_FR = 0,  /* GSM Full Rate */
    GSM_HR,      /* GSM Half Rate */
    GSM_EFR,     /* GSM Enhanced Full Rate */
    FR_AMR,      /* Full Rate Adaptive Multi-Rate */
    HR_AMR,      /* Half Rate Adaptive Multi-Rate */
    UMTS_AMR,    /* UMTS Adaptive Multi-Rate */
    UMTS_AMR_2,  /* UMTS Adaptive Multi-Rate 2*/
    TDMA_EFR,    /* TDMA Enhanced Full Rate */
    PDC_EFR,     /* PDC Enhanced Full Rate */
    FR_AMR_WB,   /* Full Rate Adaptive Multi-Rate WideBand */
    UMTS_AMR_WB, /* UMTS Adaptive Multi-Rate WideBand */
    OHR_AMR,     /* 8PSK Half Rate Adaptive Multi-Rate */
    OFR_AMR_WB,  /* 8PSK Full Rate Adaptive Multi-Rate WideBand */
    OHR_AMR_WB,  /* 8PSK Half Rate Adaptive Multi-Rate WideBand */
    MuMe = 255   /* Reserved for MuMe dummy Codec Type, shall not to be used*/
} tCSR_SpeechCodecType;

/* MAUI_01966343 Note: Any modification of the enum shall sync with FrameTypeAndDataRate[] */
typedef enum
{
    AMR_FRAME_4_75 = 0,
    AMR_FRAME_5_15,
    AMR_FRAME_5_90,
    AMR_FRAME_6_70,
    AMR_FRAME_7_40,
    AMR_FRAME_7_95,
    AMR_FRAME_10_2,
    AMR_FRAME_12_2,
    AMR_FRAME_SID,
    AMR_FRAME_GSM_EFR_SID,
    AMR_FRAME_TDMA_EFR_SID,
    AMR_FRAME_PDC_EFR_SID,
    RFU_AMR_FRAME_TYPE_12, //reserved for future use
    RFU_AMR_FRAME_TYPE_13, //reserved for future use
    RFU_AMR_FRAME_TYPE_14, //reserved for future use
    AMR_FRAME_NO_DATA = 15,

#ifdef __AMRWB_LINK_SUPPORT__
    AMRWB_FRAME_6_60,
    AMRWB_FRAME_8_85,
    AMRWB_FRAME_12_65,
    AMRWB_FRAME_14_25,
    AMRWB_FRAME_15_85,
    AMRWB_FRAME_18_25,
    AMRWB_FRAME_19_85,
    AMRWB_FRAME_23_05,
    AMRWB_FRAME_23_85,
    AMRWB_FRAME_SID,
    //AMR WB frame type 10, reserved for future use
    //AMR WB frame type 11, reserved for future use
    //AMR WB frame type 12, reserved for future use
    //AMR WB frame type 13, reserved for future use
    //AMR WB frame type 14, speech lost, not used
    //AMR WB frame type 15, No Data, use AMR_FRAME_NO_DATA for both NB and WB
#endif /*__AMRWB_LINK_SUPPORT__ */

    MAX_NO_OF_FRAME_TYPE, // 25
    AMR_FRAME_TYPE_ALL_BARRED = 31
} tAMRWB_FrameType;

typedef enum
{
    stCSR_UNKNOWN_PHASE,
    stCSR_ODD_FRAME,
    stCSR_EVEN_FRAME
} tCSR_CodecPhase;

typedef struct
{
    U8 sizeOfAMRClass[MAX_AMR_CLASS];
} Size_AMRClasses;

#ifdef __AMRWB_LINK_SUPPORT__
/* MAUI_01966343, requested subflow size may exceed 255 */
typedef struct
{
    U16 sizeOfClassA;
    U16 sizeOfClassB;
    U16 sizeOfClassC;
    U16 totalSize;
} FrameType_DataRate;
#else
typedef struct
{
    U8 sizeOfClassA;
    U8 sizeOfClassB;
    U8 sizeOfClassC;
    U8 totalSize;
} FrameType_DataRate;
#endif /* __AMRWB_LINK_SUPPORT__ */

#ifdef __EM_MODE__
typedef enum
{
    /* EM disable */
    CSR_EM_NONE = 0x0,
    /* bit 1: update to ELT */
    CSR_EM_ELT = 0x1,
    /* bit 2: update to AP */
    CSR_EM_AP = 0x2
} tCSR_UpdateEmSource;
#endif

typedef struct
{
    /* RAB id */
    U8 CSREntityId;

    /* Stream id */
    U8 StreamId;
    tCSR_States CSRCurrentState;
    tCSR_TargetEntity CSRTargetEntity;
    U8 CSRRabMode;

    /* MAUI_02375904 */

    /* number of RB */
    U8 NumRBs;
    /* RB IDs */
    U8 RB[MAX_RBS_IN_RAB];
    U8 RBWithStatus;
    /* SDU of each RB */
    U16 ReqSizeOfRBs[MAX_RBS_IN_RAB];

    /* ~MAUI_02375904 */

    U16 dataLength;
    U8* dlPdu;

    /* Current CodecType */
    tCSR_SpeechCodecType CodecType;
    tCSR_CodecPhase CodecPhase; 

    /* Current UL Codec Data Rate */
    AMRFrameType CurCodec;
    U8 maxCsDelay;
    U8 prevRxNWDelay;

    /* RLC TM segment config of each RB */
    kal_bool ulRLCSegment[MAX_RBS_IN_RAB];

    /* Current DL Codec Data Rate */
    AMRFrameType CurDLCodec;
} aCSRContext;

typedef struct
{
    U8 activeSim; /* for L+W GEMINI, 0:SIM1, 1:SIM2; for single SIM, it will be always 0 */
    U8 NoOfCSREntityExist;
    KAL_AFM_ID afm_id;
    aCSRContext *CSRWorkSpace[MAX_NO_OF_CSR_ENTITY];
#ifdef __EM_MODE__
    kal_bool is_EM_activate;
    U8 EmSrc; /* The bitmap whom CSR need to update EM information to */
    kal_bool EmNeedUpdate;
#endif /* __EM_MODE__ */
} aCSREntityInfo;

typedef struct
{
    LOCAL_PARA_HDR
    U8 streamId;
    U8 frameType;
    U8 data[MAX_AMR_FRAME_SIZE];
} csr_amr_data_ind_struct;

typedef enum
{
    CSR_ILM_INVALID, 
    CSR_ILM_ACCEPT, 
    CSR_ILM_IGNORE
} tCSR_GeminiIlmCheck;

typedef enum
{
    stCSR_UL_FRAME,
    stCSR_DL_FRAME
} tCSR_FrameDirect;

/* GLOBAL VARIABLE DECLARATIONS *********************************************/
extern aCSREntityInfo FDD_CSREntityInfo;

/* PUBLIC FUNCTION PROTOTYPES ***********************************************/
/* FDD Functions ************************************************************/
extern void FDD_CsrInitCSREntityInfo(void);
extern void FDD_CsrResetCSREntityInfo(void);
extern void FDD_CsrProcessCCUCSRSetRoutingReq(ilm_struct *RcvMsg);
extern void FDD_CsrProcessCCSRRabEstablishInd(ilm_struct *RcvMsg);
extern void FDD_CsrProcessCCSRRabModifyInd(ilm_struct *RcvMsg);
extern void FDD_CsrProcessCCSRRabReleaseInd(ilm_struct *RcvMsg);
extern void FDD_CsrProcessCSRUmacTfcInd(ilm_struct *RcvMsg);
extern void FDD_CsrProcessCSRStatusInd(ilm_struct *RcvMsg);
extern void FDD_CSR_SP3G_Callback(SP3G_Event event, void *data);
extern void FDD_CsrProcessTstInjectMsg(ilm_struct *RcvMsg);

#ifdef __CSHSPA_SUPPORT__
extern void SP3GHSPA_UL_GetSpeechFrame(kal_uint8 *frame_type, kal_uint8 *rab_byte_array, kal_uint8 *len);
extern void SP3GHSPA_DL_PutSpeechFrame(kal_uint32 CFN, kal_uint8 frame_type, kal_bool crc_status, kal_uint8 *subflow);
extern void SP3GHSPA_DL_SetMaxCsDelay(kal_uint8 max_cs_delay);
#endif

#ifdef __RATDM_UL_SHAQ__
extern void FDD_CsrFreeTmElmt(kal_uint8 *addr);
#ifdef __CSHSPA_SUPPORT__
extern void FDD_CsrFreeUmElmt(kal_uint8 *addr);
#endif
#endif

#if 0
#ifdef __3G_NEW_CS_DL_ARCH__
/* under construction !*/
#else
/* under construction !*/
#endif
#endif

#ifdef __VIDEO_CALL_SUPPORT__
extern void FDD_vt_csr_activate_req(void);
extern void FDD_vt_csr_deactivate_req(void);
#endif

#if defined(__GEMINI__) && defined(__GEMINI_WCDMA__)
extern tCSR_GeminiIlmCheck FDD_CsrGeminiGuardIlm(ilm_struct *ilm_ptr);
#endif

#ifdef __EM_MODE__
extern void FDD_CsrProcessL4CpsEMUpdateReq(ilm_struct *ilm_ptr);
#endif

#ifndef __MTK_TARGET__
extern void FDD_CsrProcessCSRUnitTestMsg(ilm_struct *RcvMsg);
#endif

/* TDD Functions ***********************************************************/
extern void TDD_InitCSREntityInfo(void);
extern void TDD_ResetCSREntityInfo(void);
extern U8 TDD_GetCSRWorkSpace(U8 CSRId, U8 action);
extern void TDD_ProcessCCUCSRSetRoutingReq(ilm_struct *RcvMsg);
extern void TDD_ProcessCCSRRabEstablishInd(ilm_struct *RcvMsg);
extern void TDD_ProcessCCSRRabModifyInd(ilm_struct *RcvMsg);
extern void TDD_ProcessCCSRRabReleaseInd(ilm_struct *RcvMsg);
extern void TDD_ProcessUCSDDataReq(ilm_struct* RcvMsg);
extern void TDD_ProcessCSRUmacTfcInd(ilm_struct *RcvMsg);
extern void TDD_ProcessCSRStatusInd(ilm_struct* RcvMsg);

#ifdef __VIDEO_CALL_SUPPORT__
extern void TDD_vt_csr_activate_req(void);
extern void TDD_vt_csr_deactivate_req(void);
#endif

#ifdef __EM_MODE__
extern void TDD_ProcessL4CpsEMUpdateReq(ilm_struct *ilm_ptr);
#endif

void TDD_UpdateCodecToEmInfo(tCSR_FrameDirect dir, U8 frameType);
extern void TDD_ProcessPLAUUSAUDConfigMappingInd(ilm_struct *RcvMsg);
extern void TDD_ProcessPLAUUSAUDConfigMappingCnf(ilm_struct *RcvMsg);

#if 0
/* under construction !*/
/* under construction !*/
#endif

extern void TDD_ProcessUUSAUDCoderDataCnf(ilm_struct *RcvMsg);

#ifndef __MTK_TARGET__
extern void TDD_ProcessCSRUnitTestMsg(ilm_struct *RcvMsg);
#endif

extern kal_uint8 FDD_CSR_GetActiveSIM(void);


#endif /* CSR_FSM_H */
