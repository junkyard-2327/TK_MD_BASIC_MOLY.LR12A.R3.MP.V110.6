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

/*****************************************************************************
*
* FILE NAME   : do_slc_msg_struct.h
*
* DESCRIPTION : Message stucture definition for SLC (Session Layer Control) task.
*
* HISTORY     :
*****************************************************************************/
#ifndef _DO_SLC_MSG_STRUCT_H_
#define _DO_SLC_MSG_STRUCT_H_


#include "slcdhkep.h"
#include "do_slapi.h"
#include "do_slcapi.h"
#include "slcamp.h"
#include "do_dsaapi.h"
#ifdef MTK_DEV_C2K_IRAT
#include "iratapi.h"
#include "slcsmp.h"
#include "dscpdefs.h"
#endif
#include "slctimer.h"
#include "tasktimer.h"
#include "do_slc_msgid.h"


/* SLC */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32 TimerId;
} slc_timer_expired_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    DHKepTimerExpiredMsgT msg;
} dhkep_timer_expired_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    DHKepCalRspMsgT msg;
} dhkep_keycal_rsp_msg_struct;

/* SMP */
typedef struct
{
    LOCAL_PARA_HDR
    SmpScpSessionInfoMsgT msg;
} smp_scp_session_info_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    SmpScpActivateCnfMsgT msg;
} smp_scp_activate_cnf_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    SmpScpGAUPPSCnfMsgT msg;
} smp_scp_gaup_prior_session_cnf_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    SmpAmpFailureMsgT msg;
} smp_amp_failure_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    SmpOmpPSGAUPUpdateMsgT msg;
} smp_omp_prior_session_gaup_update_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    Smp1XConnectionStT msg;
} smp_css_1x_connection_st_ind_struct;

/* MSG_ID_SMP_SESSION_CLOSE_ETS_CMD */





/* SCP */
typedef struct
{
    LOCAL_PARA_HDR
    ScpSmpActivateMsgT msg;
} scp_smp_activate_msg_struct;

/*typedef struct
{
    LOCAL_PARA_HDR
    ScpSmpGAUPPSReqMsgT msg;
} scp_smp_gaup_prior_session_req_msg_struct;*/

typedef struct
{
    LOCAL_PARA_HDR
    ScpProtConfigReqMsgT msg;
} scp_prot_config_req_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ScpProtReConfiguredMsgT msg;
} scp_prot_reconfigured_msg_struct;

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

typedef struct
{
    LOCAL_PARA_HDR
    ScpProtConfigFailMsgT msg;
} scp_prot_config_fail_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ScpProtConfigPauseMsgT msg;
} scp_prot_config_pause_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ScpProtConfigResumeMsgT msg;
} scp_prot_config_resume_msg_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ScpEtsConfigCmdT msg;
} scp_config_ets_cmd_struct;

/* AMP */
typedef struct
{
    LOCAL_PARA_HDR
    AmpOmpSectorParamsT msg;
} amp_omp_updated_msg_struct;

/* MSG_ID_AMP_IDP_ASSEMBLE_UATICMPL_AND_HWIDRSP_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    AmpIdpAssembleUATICmplAndHWIdRspT msg;
} amp_idp_assemble_uaticmpl_and_hwidrsp_msg_struct;

/*typedef struct
{
    LOCAL_PARA_HDR
    ScpProtReconfigCnfMsgT msg;
} slc_scp_prot_reconfig_cnf_msg_struct;*/

/* DSAR_REV_MSG
typedef struct
{
    LOCAL_PARA_HDR
    DsaRevMsgT msg;
} dsar_rev_msg_struct;*/

/* CCM_AMP_ATILIST_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    CcmAmpATIListMsgT msg;
} ccm_amp_atilist_msg_struct;

/* RCP_AMP_ATILIST_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    AcmAmpATIListMsgT msg;
} acm_amp_atilist_msg_struct;

/* UT */
#ifdef MTK_PLT_ON_PC_UT
typedef struct
{
    LOCAL_PARA_HDR
    DsaFwdMsgT msg;
    kal_uint8 data[CPBUF_SIZE_FWD];  /* data for the cpbuffer */
} ut_slc_dsaf_fwd_msg_struct;

/* UT_SLC_SET_SBP_ID_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    SlcSetSbpIdMsgT msg;
} ut_slc_set_sbp_id_msg_struct;

/* UT_SLC_CONF_SBP_FEATURE_MSG */
typedef struct
{
    LOCAL_PARA_HDR
    SlcConfSbpFeatureMsgT msg;
} ut_slc_conf_sbp_feature_msg_struct;
#endif

typedef struct
{
    LOCAL_PARA_HDR
    TaskTimerExpiredMsgT msg;
} task_timer_expired_msg_struct;

#endif

