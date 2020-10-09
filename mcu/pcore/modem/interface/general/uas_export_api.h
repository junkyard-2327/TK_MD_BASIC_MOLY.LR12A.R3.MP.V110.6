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
 *   uas_export_api.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 *
 *
 * ==========================================================================
 * $Log:$
 *
 * 04 26 2017 mengmeng.sun
 * [MOLY00244013] [Gen93][TDD 3G] RATDM Code SMP
 * TL2D part
 *
 * 04 12 2017 chi-chung.lin
 * [MOLY00240270] [6293][Gemini][T+W] Phase 1: Common Interface Changes Check in
 * 	
 * 	.
 *
 * 04 12 2017 chi-chung.lin
 * [MOLY00240270] [6293][Gemini][T+W] Phase 1: Common Interface Changes Check in
 * 	
 * 	.
 *
 * 01 12 2016 charlescm.wu
 * [MOLY00156239] [UMOLY][LR11] 3G FDD/TDD L2 big size memory union
 * [FDD|TDD common]  UBin 3G L2 memory reduction by union
 *
 * 05 20 2015 jen-de.lai
 * [MOLY00089131] [MT6291 Gemini] L+W+W+W code revision check in
 * 	L+W
 *
 * 05 20 2015 tereasa.huang
 * [MOLY00089131] [MT6291 Gemini] L+W+W+W code revision check in
 * [RRCE]L+W+W+W development.
 *
 * 04 16 2015 head.hsu
 * [MOLY00087434] [Universal Bin] Check in
 * 	;[UBIN][Phase 2] RATDM and CSR
 *
 * 01 20 2015 tc.chang
 * [MOLY00087434] [Universal Bin] Check in.
 *
 * 12 30 2014 tc.chang
 * [MOLY00087434] [Universal Bin] Check in.
 *
 * 12 30 2014 charlescm.wu
 * [MOLY00087679] [UMOLY][FDD][UAS COMMON][UL2 COMMON/URLC/BMC/SEQ]U-Bin CBr to UMOLY TRUNCK.
 *
 * 12 29 2014 tc.chang
 * [MOLY00087434] [Universal Bin] Check in.
 *
 * 12 24 2014 tc.chang
 * [MOLY00087434] [Universal Bin] Check in.
 *
 * 12 16 2014 tc.chang
 * [MOLY00087434] [Universal Bin] Check in.
 *
 * 12 15 2014 charlescm.wu
 * [MOLY00087679] [UMOLY][FDD][UAS COMMON][UL2 COMMON/URLC/BMC/SEQ]U-Bin CBr to UMOLY TRUNCK.
 *
 * 12 12 2014 tc.chang
 * [MOLY00087434] [Universal Bin] Check in.
 * PDCP and CSR exported APIs.
 *
 * 11 13 2013 ethan.han
 * [MOLY00046258] [LGE smart phone project] 2G protocol release package survey, handle the dependancy for MM
 * 	.
 *
 * 11 13 2013 derek.cho
 * [MOLY00046228] [SHAQ]Uas related header split
 * <saved by Perforce>
 *
 * 11 05 2013 johnson.liu
 * [MOLY00042658] [SHAQ] UAS related header split
 * .
 *
 * 11 05 2013 andrew.wu
 * [MOLY00042658] [SHAQ] UAS related header split
 * <saved by Perforce>
 * 
 * 10 02 2012 ij.liao
 * [MOLY00004236] [interface][service][kal]remove stack_ltlcom.h
 *
 * 05 23 2012 ij.liao
 * removed!
 * .
 *
 * 04 17 2012 yiting.cheng
 * removed!
 * .
 *
 * 04 16 2012 yiting.cheng
 * removed!
 * .
 *
 * 04 11 2012 yiting.cheng
 * removed!
 * .
 *
 * 11 08 2011 yuting.chen
 * removed!
 * .
 *
 * 10 15 2011 mengsung.wu
 * removed!
 * .
 *
 * 09 27 2011 yuting.chen
 * removed!
 * .
 *
 * Add copyright header.
 ****************************************************************************/

#ifndef _UAS_EXPORT_API_H
#define _UAS_EXPORT_API_H

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_public_defs.h"

#include "uas_common_enums.h"
#include "ratdm_shaq_api.h"

#include "l1audio.h"

#include "gmss_public.h"

#if defined(__SYNC_HDLC_CSD__) || defined(__CSD_NT__)
#include "ratcm_csd_interface.h"
#endif

#include "sim_exported_enum.h" //[LG+WG] protocol_id_enum

#ifdef __UMTS_FDD_MODE__

/* For Gemini T+W feature, PDU in RRC IDLE state will use this pool, */
#define FDD_UAS_DL_IDLE_ADM_ALLOC(mem_ptr, alloc_size)    \
do{   \
    mem_ptr = FDD_UAS_DL_ADM_ALLOC_int(UAS_DL_IDLE_ADM, alloc_size, __FILE__, __LINE__);    \
}while(0)

/* for DL ADM pool, the users shall be in the same task! */
#define FDD_UAS_DL_ADM_ALLOC(mem_ptr, alloc_size)    \
do{   \
    mem_ptr = FDD_UAS_DL_ADM_ALLOC_int(UAS_DL_ADM, alloc_size, __FILE__, __LINE__);    \
}while(0)

#define FDD_UAS_DL_ADM_FREE(mem_ptr)    FDD_UAS_DL_ADM_FREE_int(UAS_DL_ADM, mem_ptr, __FILE__, __LINE__)



/* For 2G RLC DL block first half memory use */
#define GRLC_DL_ADM_ALLOC_FIRST_PART(mem_ptr, alloc_size)    \
do{   \
    mem_ptr = FDD_UAS_DL_ADM_ALLOC_int(GRLC_DL_ADM_FIRST_PART, alloc_size, __FILE__, __LINE__);	  \
}while(0)

#define GRLC_DL_ADM_FREE_FIRST_PART(mem_ptr)        FDD_UAS_DL_ADM_FREE_int(GRLC_DL_ADM_FIRST_PART, mem_ptr, __FILE__, __LINE__)


/* For 2G RLC DL block second half memory use */
#define GRLC_DL_ADM_ALLOC_SECOND_PART(mem_ptr, alloc_size)    \
do{   \
    mem_ptr = FDD_UAS_DL_ADM_ALLOC_int(GRLC_DL_ADM_SECOND_PART, alloc_size, __FILE__, __LINE__);	  \
}while(0)

#define GRLC_DL_ADM_FREE_SECOND_PART(mem_ptr)        FDD_UAS_DL_ADM_FREE_int(GRLC_DL_ADM_SECOND_PART, mem_ptr, __FILE__, __LINE__)

#define FDD_CSR_ACTIVE_SIM() (FDD_CSR_GetActiveSIM ())
#define TDD_CSR_ACTIVE_SIM() (0)


extern kal_uint8 FDD_CSR_GetActiveSIM();

extern void* FDD_UAS_DL_ADM_ALLOC_int(uas_dl_adm_index_enum alloc_idx, kal_uint32 alloc_size, char* filename, kal_uint32 line);
extern void FDD_UAS_DL_ADM_FREE_int(uas_dl_adm_index_enum free_idx, void* mem_ptr, char* filename, kal_uint32 line);
#endif /* __UMTS_FDD_MODE__ */

#if defined(__RATDM_UL_SHAQ__) || defined(__UMTS_TDD128_MODE__)
extern kal_bool urlc_realtime_shaq_query_if_need_kick_urlc(ExtendedRbId RbId, SHAQ_LLQUEUE_IDX packet_type, UAS_CURRENT_CNTX_PTR_enum curr_idx);
#endif /* defined(__RATDM_UL_SHAQ__) || defined(__UMTS_TDD128_MODE__) */

#ifdef __RATDM_UL_SHAQ__
extern kal_bool PdcpCheckShaqStatus(kal_uint8 nsapi, ExtendedRbId *RbId, kal_uint16 npdu_num, UAS_CURRENT_CNTX_PTR_enum SimIdx);
extern void PdcpUpdateSendSN(ExtendedRbId RbId, kal_uint16 npdu_num, UAS_CURRENT_CNTX_PTR_enum SimIdx);
extern kal_bool mMacIsTickAvailable(UAS_CURRENT_CNTX_PTR_enum sim_idx);
#endif /* __RATDM_UL_SHAQ__ */

#if defined(__SYNC_HDLC_CSD__) || defined(__CSD_NT__)
extern void ratcm_csr_activate_req(CSD_MODE_ENUM csd_mode,CSD_USER_RATE_ENUM user_rate, UAS_CURRENT_CNTX_PTR_enum sim_idx);
extern void ratcm_csr_deactivate_req(UAS_CURRENT_CNTX_PTR_enum sim_idx);
extern void ratcm_csr_csd_put_uplinkdata(kal_uint8 *data, kal_uint16 length, CSD_V24_STATUS_STRUCT csd_v24status, UAS_CURRENT_CNTX_PTR_enum sim_idx);
extern kal_uint16 ratcm_csr_csd_get_downlinkdata(kal_uint16 sduLength, kal_uint8 *data, CSD_V24_STATUS_STRUCT *csd_v24status, UAS_CURRENT_CNTX_PTR_enum sim_idx);
#endif /* defined(__SYNC_HDLC_CSD__) || defined(__CSD_NT__) */

extern void UAS_CSR_SP3G_Callback(SP3G_Event event, void *data, UAS_CURRENT_CNTX_PTR_enum sim_idx);

typedef void (*fp_CSR_SP3G_Callback)(SP3G_Event, void *);

extern fp_CSR_SP3G_Callback pfn_csr_sp3g_callback;

INLINE_MODIFIER INLINE
fp_CSR_SP3G_Callback csr_get_fp_CSR_SP3G_Callback(void)
{
    return pfn_csr_sp3g_callback;
}

/****************************************************************************
 * RRCE Call Back Function (Provide to NAS/L4):
 *
 * - Assign UAS index :
 *    protocol_id_enum protocol_id ( mcu\common\interface\modem\sim\sim_exported_enum.h)
 *
 * - Function list :
 *    1. FDD_RRC_CPCSupport            : Return TRUE if UE supports CPC.
 *    2. FDD_RRC_NW_R8_FD_Support      : Return TRUE if NW supports T323.
 *    3. FDD_RRC_IsConnectedState      : Return TRUE if RRC is connected state.
 *    4. FDD_RRCE_Is_Capability_Enable : Return TRUE if the query capability bit is ON.
 *****************************************************************************/

#if defined(__FAST_DORMANCY__) || defined(__NO_PSDATA_SEND_SCRI__)
/****************************************************************************
 * Function:    FDD_RRC_CPCSupport
 *
 * Description: Return TRUE if UE supports CPC.
 *****************************************************************************/
extern kal_bool FDD_RRC_CPCSupport(protocol_id_enum protocol_id);

#ifdef __FAST_DORMANCY__
/****************************************************************************
 * Function:    FDD_RRC_NW_R8_FD_Support
 *
 * Description: Return TRUE if NW supports T323.
 *****************************************************************************/
extern kal_bool FDD_RRC_NW_R8_FD_Support(protocol_id_enum protocol_id);
#endif /* __FAST_DORMANCY__ */
#endif /* __FAST_DORMANCY__ || __NO_PSDATA_SEND_SCRI__ */

#if defined(__LTE_RAT__) || defined(__PPACR_SUPPORT__)
/****************************************************************************
* Function:    FDD_RRC_IsConnectedState
*
* Description: Called by NAS to check if currently RRCE is in connected state.
*                    If the RRC Connection Release procedure is ongoing, this function will
*                    return KAL_FALSE
*****************************************************************************/
extern kal_bool FDD_RRC_IsConnectedState(protocol_id_enum protocol_id);
#endif

/****************************************************************************
 * Function:    FDD_RRCE_Is_Capability_Enable
 *
 * Description: Return TRUE if the query capability bit is ON.
 *****************************************************************************/
#define ENABLE_MT_NO_RESTRICT  0x01   /* [ALPS00289798][Softbank IOT][RAN-13-01-04] Allow MT call while all AC blocked. */
extern kal_bool FDD_RRCE_Is_Capability_Enable(kal_uint8 capability_bit, protocol_id_enum protocol_id);

// TDD RRCE Function
extern kal_bool TDD_RRC_CPCSupport();
extern kal_bool TDD_RRC_NW_R8_FD_Support();

/*****************************************************************************/

/****************************************************************************
 * Function:    FDD_uas_adm_deinit
 *
 * Description: UL2 UBIN FDD/TDD memory union together. When FDD mode switch
 *              to TDD, this function will be invoked.
 *****************************************************************************/
extern void FDD_uas_adm_deinit(void);

/****************************************************************************
 * Function:    TDD_uas_adm_deinit
 *
 * Description: UL2 UBIN FDD/TDD memory union together. When TDD mode switch
 *              to FDD, this function will be invoked.
 *****************************************************************************/
extern void TDD_uas_adm_deinit(void);

#endif /* _UAS_EXPORT_API_H */

