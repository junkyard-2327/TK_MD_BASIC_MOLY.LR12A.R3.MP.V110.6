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
 *   ratcm_uas_struct.h
 *
 * Project:
 * --------
 *   MONZA
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log:$
 *
 * 02 02 2017 rajesh.sastry
 * [MOLY00227557] [3G] RSIM code check-in
 *
 * 06 28 2016 sherry.kuo
 * [MOLY00187005] [MM/RATCM] UMOLY sync to UMOLYA
 * sync CL2304944.
 *
 * 04 26 2016 sherry.kuo
 * [MOLY00175925] sync LR11 to UMOLY
 * .
 *
 * 05 19 2015 kun-lin.wu
 * [MOLY00037371] [A10] PSC更新很快但是cell id更新很慢
 *
 * 12 17 2014 james-chi-ju.chang
 * [MOLY00078264] [UMOLY][R10][R11] NAS check-in from CBr to 6291_DEV
 * 	.
 *
 * 12 15 2014 kun-lin.wu
 * [MOLY00078268] [UMOLY][R10][R11][MOLY CR] PS5 NAS check-in 6291_DEV and 6291_UESIM_DEV
 * 	.
 *
 * 11 20 2014 mark.ng
 * [MOLY00084978] [MT6752][K2][H3G_IOT][HSPA_0020_SHO]DUT on HSPA Call to R99 Cell the display icon is wrong
 * clear cell capability in CELL_DCH
 *
 * 11 17 2014 kun-lin.wu
 * [MOLY00078268] [UMOLY][R10][R11][MOLY CR] PS5 NAS check-in 6291_DEV and 6291_UESIM_DEV
 *
 * 11 13 2014 ming.shen
 * [MOLY00084356] [RRCE] sync MT6291 to UMOLY
 * 	 - reconstrut SYS_INFO_IND
 *
 * 09 24 2014 wenlong.an
 * [MOLY00079317] [3G TDD][CSCE][CSE][U3G][universal bin] - compile option part
 * compile options remove&rename
 * 	fix missing files,
 * 	__PPACR_SUPPORT__ -> __TDD_PPACR_SUPPORT__
 * 	struct interface remain unchanged.
 *
 * 09 24 2014 wenlong.an
 * [MOLY00079317] [3G TDD][CSCE][CSE][U3G][universal bin] - compile option part
 * compile options remove&rename
 * 	remove __PLMN_LIST_PREF_SUPPORT
 * 	remove __MTK_UL1_FDD__
 * 	__UAGPS_CP_SUPPORT__ -> __TDD__UAGPS_CP_SUPPORT__
 * 	__3G_AUTO_BAND_MECHANISM__ -> __TDD_3G_AUTO_BAND_MECHANISM__ 
 * 	__CSHSPA_SUPPORT__ -> __TDD_CSHSPA_SUPPORT__
 * 	__AGPS_CP_SIB15__ -> __TDD_AGPS_CP_SIB15__
 * 	__TD_NETWORK_SHARING__ -> items in interface with NAS always exit 
 * 	__COMMON_EDCH_SUPPORT__ -> __TDD_COMMON_EDCH_SUPPORT__
 * 	__ENHANCED_COMMON_STATE_SUPPORT__ -> __TDD_ENHANCED_COMMON_STATE_SUPPORT__ 
 * 	__HSDSCH_DRX_CELL_FACH_SUPPORT__ -> __TDD_HSDSCH_DRX_CELL_FACH_SUPPORT__
 * 	__PPACR_SUPPORT__ -> _TDD_PPACR_SUPPORT__
 *
 * 07 31 2014 kun-lin.wu
 * [MOLY00074118] [IR] Use mapped_rai delivered by NAS to extract plmn id using in 4G
 *
 * 07 29 2014 ming.shen
 * [MOLY00073841] [IR] gibi_tag sync between AS and NAS after interRAT procedure - interface
 * 	.
 *
 * 07 28 2014 kun-lin.wu
 * [MOLY00073289] [WW FT][Ireland-Dublin][MT6595][4G Gemini][LWG][3][O2][Assert] file:m11301.c line:1554
 *
 * 07 01 2014 wonder.lee
 * [MOLY00070766] [MT6595][SQC1][KK][Case fail][Keyguard][EE][Externel (EE),0,0,99,/data/core/,1,modem,md0:]Device report EE when hot-plug SIM card(0/5)
 * .
 *
 * 09 03 2013 zhiguo.chen
 * [MOLY00036257] [RRCE] Remove inactive code that use PLMN_Identity strcture to prevent definition conflicted
 * Remove inactive code that use PLMN_Identity strcture to prevent definition conflicted
 *
 * 07 18 2013 rachel.liu
 * [MOLY00028232] [MT6290] Select same LA in advance for 4G2 CSFB redirection with GERAN SI
 * .
 *
 * 05 31 2013 ye.yuan
 * [MOLY00024492] [Change Feature] CISE CSG code optimization
 * <saved by Perforce>
 *
 * 03 27 2013 c-hua.yang
 * [MOLY00009184] [URR] Multimode Merge to MOLY
 * .
 *
 * 03 13 2013 c-hua.yang
 * [MOLY00009184] [URR] Multimode Merge to MOLY
 * .
 *
 * 01 24 2013 c-hua.yang
 * [MOLY00009184] [URR] Multimode Merge to MOLY
 * .
 * 
 * 09 27 2012 yenchih.yang
 * [MOLY00004236] [interface][service][kal]remove stack_ltlcom.h
 * .
 * 
 * 08 28 2012 yenchih.yang
 * [MOLY00002604] [Change Feature] support RAT mode invalid SIM recovery procedure
 * .
 *
 * 01 06 2012 chi-chung.lin
 * removed!
 * .
 *
 * 11 14 2011 shaojun.luo
 * removed!
 * recover "the missing modification of [MAUI_03037536] inter-RAT revision "in MSBB merger in
 *
 * 11 11 2011 shaojun.luo
 * removed!
 * Remove the private header files
 *
 * 11 09 2011 shaojun.luo
 * removed!
 * .mege MSBB's "dbme, tools, uas_tdd 128 common" modification  into maui branch
 *
 * 10 13 2011 shaojun.luo
 * removed!
 * aligned ratcm_uas_sys_info_ind_struct's field order to FDD implementation
 *
 * 10 13 2011 shaojun.luo
 * removed!
 * add the ratcm_uas_struct.h to modem\interface
 *
 * 09 23 2011 evelyn.wang
 * removed!
 * .
 *
 * 12 28 2010 yongjiao.yu
 * removed!
 * Check in RHR for build error.
 *
 * 12 27 2010 yongjiao.yu
 * removed!
 * RHR according to TK's suggestion table.
 *
 * 12 22 2010 yongjiao.yu
 * removed!
 * RHR for interface with RRCE and RATCM.
 *
 * 11 30 2010 yongjiao.yu
 * removed!
 * Code back to MAUI from 10A32MP_ASTRO.W1048.Tue.
 *
 * 11 02 2010 yongjiao.yu
 * removed!
 * fix build error
 *
 * 10 27 2010 zhiwei.wang
 * removed!
 * .
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
 * Code Synch to MAUI, 09A, A-GPS, 3G Gemini for W09.29
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
 * Add copyright header.
 ******************************************************************************/

#ifndef _RATCM_UAS_STRUCT_H
#define _RATCM_UAS_STRUCT_H

/* MAUI_02828210, redundant header removal */
#include "ratcm_uas_enums.h"
#include "mcd_l3_inc_struct.h"
#include "kal_general_types.h"
#include "l3_inc_enums.h"
#include "kal_public_api.h"
#include "ps_public_enum.h"
#include "l3_inc_local.h"
#include "ps_public_struct.h"
#include "irat_common_struct.h"

typedef kal_uint16 LAC;
typedef kal_uint16 gibi_tag_type;
/*typedef kal_uint8 PLMN_Identity[MAX_PLMN_ID_DIGIT];*/
typedef kal_uint32 cell_identity_type;

typedef struct nas_sys_info_gsm_map_struct
{
   kal_uint8 numOctets;
   kal_uint8 stringData[8];
} nas_sys_info_gsm_map_struct;

typedef struct CN_DomainSysInfo
{
   /* Description: Identifies the type of core network domain. This an
      enumerated type (RRC_CN_DomainIdentity_cs_domain, RRC_CN_DomainIdentity_ps_domain). */
   domain_id_enum                cn_DomainIdentity;
   /* Description: NAS system information (GSM-MAP) This information
      element contains system information that belongs to the
      non-access stratum for a GSM-MAP type of PLMN. This information
      is transparent to RRC. It may contain either information
      specific to one CN domain (CS or PS) or information common for
      both CN domains (Ref: [25.331;10.3.1.9]).
      RRC_NAS_SystemInformationGSM_MAP information element description:
       - length   - Number of bytes
       - value[8] - Array of bytes (maximum is 8). */
   nas_sys_info_gsm_map_struct   cn_specificGSM_MAP_NAS_SysInfo;
} CN_DomainSysInfo;

typedef struct CN_DomainSysInfoList
{
   kal_uint8        count;
   CN_DomainSysInfo value[MAX_CN_DOMAIN];
} CN_DomainSysInfoList;

/* UMTS security keys data structure originally used by RATCM and RRCE.
 * Now it's reused in multimode development.
 */
typedef struct {
    domain_id_enum  cnDomainID;
    kal_uint8       umts_cipheringKey[CK_LEN];
    kal_uint8       umts_integrityKey[IK_LEN];
} umts_security_key;

typedef struct{
    kal_bool       is_valid;
    gibi_tag_type  gibi_tag; 
} gibiTag_info;

/****************************/
/* UGC_INFORMATION_BROADCAST */
/****************************/
/* Description: this operation consists in the broadcast from IF
 * toward User Equipment of some information in some geographical
 * area.
 *
 * a GC Information broadcast indication primitive is issued to the
 * NAS entity UE over the General Control (GC) SAP when the RRC layer
 * finds out that the non-access part of the system information has
 * been changed.
 *
 * This information is to be used by the User Equipment for instance
 * to choose among access points or to be taken into account during
 * initial access. The information can also be destinated to an
 * application.
 *
 * UGC Information broadcast is sent to the NAS whenever the UE, in idle mode,
 * has started camping on a cell, and has sufficient SIBs for a connection, or 
 * if the NAS data in SIB 1 changes.In addition NAS updates optionally contained
 * in Radio Bearer Setup, Active Set Update, etc. shall be reported using this 
 * primitive. The primitive is also used subsequently to an Inter-RAT cell re-
 * selection / change over or Inter-RAT handover to UMTS. In that case, the 
 * primitive may be issued with "additional info flag= FALSE" to indicate that 
 * no CN information is included.
 *
 * Note 1: GSM-MAP NAS contains LAC & RAC with the PLMN id and UTRAN cell id.
 * The NAS should be able to map UTRAN cell id and Location Area/Routing Area.
 *
 * Note 2: In connected mode, e.g. subsequently to a cell reselection, CN Common
 * GSM_MAP NAS SysInfo is not forwarded to upper layer.
 * Ref: [23.110-340;6.2.2.1.1] & [25.304;10.1,10.2].
 */
typedef struct
{
    LOCAL_PARA_HDR

    gibi_tag_type                gibi_tag;
    cell_identity_type           cell_id;

    kal_uint16                   update_bitmask;
    
    #define INFO_BITMASK_CN_INFO 0x0001
    #define INFO_BITMASK_DATA_SPEED_SUPPORT 0x0002
    #define INFO_BITMASK_AC 0x0004
    #define INFO_BITMASK_DSAC 0x0008
    #define INFO_BITMASK_PPACR 0x0010
    #define INFO_BITMASK_CSG_INFO 0x0020
    #define INFO_BITMASK_BAND_INFO 0x0040
    
    /* CN_INFO */
    kal_uint8 cn_info_validity;

    #define CN_Info_plmn_cellType_valid 0x01
    #define CN_Info_cn_CommonGSM_MAP_NAS_SysInfo_valid 0x02
    #define CN_Info_cn_DomainInformationList_valid 0x04

    kal_uint8                    multi_plmn_count;           
    /* Range: 1 to MAX_NUM_MULTI_PLMN. */
    plmn_id_struct               multi_plmn_id[MAX_NUM_MULTI_PLMN];
    as_cell_type_enum            multi_plmn_cell_type[MAX_NUM_MULTI_PLMN];
    as_cell_type_enum            cell_type;  /* Reserved for before R6 compatible */
    plmn_id_struct               plmn_id;  /* Reserved for before R6 compatible */
    
    nas_sys_info_gsm_map_struct  cn_CommonGSM_MAP_NAS_SysInfo;
    CN_DomainSysInfoList         cn_DomainSysInfoList;
    /* END CN_INFO */
    
    data_speed_support_enum      data_speed_support; /* MAUI_02361221: H-icon display */
    
    kal_uint16                   access_class;
    
#ifdef __R6_DSAC__    
    kal_uint8                    dsac_plmn_bitmask;
    /* "1" in LSB bit for 1st PLMN CS/PS domain DSAC valid */
    kal_uint16                   cs_dsac[MAX_NUM_MULTI_PLMN];
    kal_uint16                   ps_dsac[MAX_NUM_MULTI_PLMN];    
#endif
    
#ifdef __PPACR_SUPPORT__
    kal_uint8                    ppacr_plmn_bitmask;
    ppacr_info_struct            ppacr_info_plmn_list[MAX_NUM_MULTI_PLMN];
#endif
    
    csg_access_mode_enum        csg_access_mode;
    csg_info_struct             csg_info;
    kal_uint8                   band;
} ratcm_uas_sys_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR 

    cell_identity_type              cell_id;
    
    kal_uint8                       multi_plmn_count;           
    /* Range: 1 to MAX_NUM_MULTI_PLMN. */
    plmn_id_struct                  multi_plmn_id[MAX_NUM_MULTI_PLMN];
    
    kal_bool                        cn_CommonGSM_MAP_NAS_SysInfo_present;
    nas_sys_info_gsm_map_struct     cn_CommonGSM_MAP_NAS_SysInfo;
    CN_DomainSysInfoList            cn_DomainSysInfoList;
} ratcm_uas_cell_global_identity_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR 

   data_speed_support_enum data_speed_support;
} ratcm_uas_update_capability_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR 

    kal_bool is_usim_inserted;
    kal_bool is_delete_pending;
} ratcm_uas_usim_info_reset_req_struct;

typedef struct
{
    LOCAL_PARA_HDR 
    domain_id_enum connection_domain;
    rat_type_enum  active_rat;

    /* 20140715 Ming: Add this field in CELL_CHANGE_FINISH_IND and RAT_CHANGE_CNF
     * to sync the gibi_tag value between NAS and AS after interRAT procedure.
     * (Avoid NAS sends previous rat's gibi_tag to current rat)
     * 
     * Related issues: MOLY00051065, ALPS01461467 and ALPS01537397
     *
     * Note that since only problems may happen after xG3HO now, only RRCE carries this field.
     */
    gibiTag_info  gibiTag_sync;
} ratcm_rrce_cell_change_finish_ind_struct;

#ifdef __GEMINI__
typedef struct
{
    LOCAL_PARA_HDR 
} ratcm_rrce_no_ir_sig_proc_req_struct;
#endif

#ifdef __LTE_RAT__
/* RATCM -> RRCE */
/* CSCE and RRCE uses ratcm_uas_rat_change_req_struct jointly */
typedef struct {
    LOCAL_PARA_HDR
    irat_type_enum       irat_type;
    rat_type_enum        source_rat;
    rat_type_enum        target_rat;
    void                *as_info_ptr;
    umts_security_key    security_key[2];
    csfb_indicator_enum  csfb_indicator;
    kal_bool             is_lai_valid;  //CSFB enhancement
    lai_struct           lai;           //CSFB enhancement
    kal_bool             is_mapped_rai_valid; // For 4G3 HO, AS may not have valid plmn id. AS will derive plmn id from mapped rai.
    rai_struct           mapped_rai;
} ratcm_uas_rat_change_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    irat_type_enum    irat_type;
    rat_type_enum     source_rat;
    rat_type_enum     target_rat;
    irat_result_enum  irat_result;
    irat_reject_cause_enum irat_reject_cause; //Reject cause when irat_result is equal to IR_RESULT_REJECT.
    void             *as_info_ptr;
} ratcm_uas_rat_change_res_struct;

/* RRCE -> RATCM */
typedef struct {
    LOCAL_PARA_HDR
    irat_type_enum  irat_type;
    rat_type_enum   source_rat;
    rat_type_enum   target_rat;
    void           *as_info_ptr;
    kal_uint8       nas_sec_param_to_eutra[NAS_SECURITY_PARAM_LEN];
} ratcm_uas_rat_change_ind_struct;

/* CSCE and RRCE uses ratcm_uas_rat_change_cnf_struct jointly */
typedef struct {
    LOCAL_PARA_HDR
    irat_type_enum    irat_type;
    rat_type_enum     source_rat;
    rat_type_enum     target_rat;
    irat_result_enum  irat_result;
    void             *as_info_ptr;
    domain_id_enum    connection_domain;

    /* 20140715 Ming: Add this field in CELL_CHANGE_FINISH_IND and RAT_CHANGE_CNF
     * to sync the gibi_tag value between NAS and AS after interRAT procedure.
     * (Avoid NAS sends previous rat's gibi_tag to current rat)
     * 
     * Related issues: MOLY00051065, ALPS01461467 and ALPS01537397
     *
     * Note that since only problems may happen after xG3HO now, only RRCE carries this field.
     */
    gibiTag_info      gibiTag_sync;
} ratcm_uas_rat_change_cnf_struct;
#endif

#ifdef __REMOTE_SIM__
#ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
/* MAUI_02865693 */
typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_in_virtual;
#ifdef __MULTIPLE_PS__
    kal_bool is_peer_ps_high;
#endif /* __MULTIPLE_PS__ */
    kal_bool is_in_connected;
} ratcm_uas_virtual_mode_ind_struct;
#endif
#endif /* __REMOTE_SIM__ */

#endif /* _RATCM_UAS_STRUCT_H */
