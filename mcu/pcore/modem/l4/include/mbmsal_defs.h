/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2014
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
 * mbmsal_defs.h
 *
 * Project:
 * --------
 * UMOLY
 *
 * Description:
 * ------------
 * The common header files in MBMSAL sub-module.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *----------------------------------------------------------------------------
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
 *
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
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/****************************************************************************/
/*! @file mbmsal_defs.h
    @author Stan Chen
    @date 11 JUL 2014

    @brief The common header file in MBMSAL sub-module.

    The header file is used by all components in MBMSAL, even in l4c_mbms and
    rmmi_mbms. Common macros, constant definitions and structure prototypes
    are placed here.
*/
/****************************************************************************/

#ifndef _MBMSAL_DEFS_H
#define _MBMSAL_DEFS_H
/****************************************************************************/

#include "kal_public_api.h"

#include "mcd_l3_inc_struct.h"
#include "mbmsal_errc_struct.h"
#include "l4c_common_enum.h"
#include "ps_public_utility.h"
#include "l3_inc_enums.h"

/****************************************************************************
 * Definitions
 ****************************************************************************/

#define MBMSAL_ASSERT           ASSERT
#define MBMSAL_DBG_ASSERT       DEBUG_ASSERT

#define MBMSAL_FORCE_OUTPUT     KAL_TRUE

#define MBMSAL_ERRC_NOCHANGE    0xFF

#define MBMSAL_ERRC_INVALID8    0xFF
#define MBMSAL_ERRC_INVALID16   0xFFFF

#define MBMSAL_RMMI_MAX_UART_LEN        (1024)

#define MBMSAL_DEACT_CAUSE_NORMAL       (0)
#define MBMSAL_DEACT_CAUSE_ACTFAIL      (1)
#define MBMSAL_DEACT_CAUSE_SESSIONLOST  (2)
#define MBMSAL_DEACT_CAUSE_NONMBMSAREA  (3)
#define MBMSAL_DEACT_CAUSE_LEAVELTE     (4)

/* Subcause for activation failed */
#define MBMSAL_ACT_FAIL_CAUSE_RESERVED              (0)
#define MBMSAL_ACT_FAIL_CAUSE_UNKNOWN               (1)
#define MBMSAL_ACT_FAIL_CAUSE_ALREADY_DONE          (2)
#define MBMSAL_ACT_FAIL_CAUSE_SERVICE_DISABLED      (3)
#define MBMSAL_ACT_FAIL_CAUSE_MISSING_CONTROL_INFO  (4)
#define MBMSAL_ACT_FAIL_CAUSE_MISSING_TMGI          (5)
#define MBMSAL_ACT_FAIL_CAUSE_MISSING_OOC           (6)
#define MBMSAL_ACT_FAIL_CAUSE_MISSING_OOS           (7)
#define MBMSAL_ACT_FAIL_CAUSE_FREQUENCY_CONFLICT    (8)
#define MBMSAL_ACT_FAIL_CAUSE_MAXIMUM_SESSIONS      (9)

#ifdef MBMS_CONFIG_INFO_SERVICE_NUM
#if MBMS_CONFIG_INFO_SERVICE_NUM > 32
#error MBMSAL cannot handle MBMS_CONFIG_INFO_SERVICE_NUM larger than 32.
#endif
#endif

#define MBMSAL_MAX_LTEBAND  (64)

#define MBMSAL_TST_AUTO_RESUME_MAX_SESSION  (16)

#define MBMSAL_EMSLU_MAX_SESSION_NUM (MBMS_CONFIG_INFO_SERVICE_NUM * 3)

#define MBMSAL_SIM_DEFAULT      (0xFF)

#ifdef __GEMINI_LTE__
#define MBMSAL_MAX_SIM_NUM      (2)
#else
#define MBMSAL_MAX_SIM_NUM      (1)
#endif

#define MBMSAL_PS_DEFAULT      (0xFF)

/****************************************************************************
 * Macro
 ****************************************************************************/

#define MBMSAL_BCD_DECODE(_n)   (((_n) & 0x0F) * 10 + ((_n) >> 4))

/****************************************************************************
 * Type definitions
 ****************************************************************************/

typedef enum
{
    MBMSAL_PCELL,
    MBMSAL_SCELL,
} mbmsal_cell_type;

typedef enum
{
    MBMSAL_ACTION_SEND_EMSAIL_URC,
    MBMSAL_ACTION_SEND_EMFRQ_URC,
    MBMSAL_ACTION_SEND_EMSRV_URC,
    MBMSAL_ACTION_SEND_EMSLU_URC,
    MBMSAL_ACTION_SEND_EMSESS_URC,
} mbmsal_action_type;

typedef enum
{
    MBMSAL_COVERAGE_NO_SERVICE,
    MBMSAL_COVERAGE_IN_LTE,
    MBMSAL_COVERAGE_IN_MBMS,
    MBMSAL_COVERAGE_IN_E911,
    MBMSAL_COVERAGE_IN_SRLTE,
    MBMSAL_COVERAGE_IN_FLIGHT_MODE,
    MBMSAL_COVERAGE_IN_GEMINI_SUSPEND,
    MBMSAL_COVERAGE_IN_GEMINI_VIRTUAL_SUSPEND
} mbmsal_coverage_enum;

typedef enum
{
    MBMSAL_EVENT_SCENARIO_NONE,
    MBMSAL_EVENT_SCENARIO_E911,
    MBMSAL_EVENT_SCENARIO_SRLTE,
} mbmsal_event_scenario_enum;

typedef enum
{
    MBMSAL_EVENT_STATUS_END,
    MBMSAL_EVENT_STATUS_BEGIN,
} mbmsal_event_status_enum;

typedef enum
{
    MBMSAL_EMTSI_TYPE_NONE,
    MBMSAL_EMTSI_TYPE_SIB16,
    MBMSAL_EMTSI_TYPE_NITZ,
} mbmsal_emtsi_type_enum;

typedef enum
{
    MBMSAL_EMSESSCFG_INDEX_NONE = 0,
    MBMSAL_EMSESSCFG_INDEX_TMGI_SEARCH_TIME = 1,
    MBMSAL_EMSESSCFG_INDEX_INVALID,
} mbmsal_emsesscfg_index_enum;

typedef struct _mbmsal_tst_info
{
    struct {
        kal_bool    isEnabled;
        kal_uint8   last_index;
        kal_uint8   num;
        struct mbmsal_tst_resume_servsess_info {
            tmgi_struct tmgi;
            kal_uint16 sess_id; /* 0xffff = invalid */
            kal_bool additional_info_valid;
            struct {
                kal_uint8 num_of_earfcn;
                kal_uint32 earfcn[MBMS_SERVSESS_INFO_EARFCN_NUM];
                kal_uint8 num_of_sai;
                kal_uint16 sai[MBMS_SERVSESS_INFO_SAI_NUM];
            } additional_info;
        } servsess_info[MBMSAL_TST_AUTO_RESUME_MAX_SESSION];
    } auto_resume;
} mbmsal_tst_info;

typedef struct _mbmsal_gtest_fp
{
    kal_bool (*msg_send5)(module_type _src_mod_id, module_type _dest_mod_id,
        sap_type _sap_id, msg_type _msg_id,
        local_para_struct *_local_para_ptr);

    void (*rmmi_write_to_uart)(kal_uint8 *buffer, kal_uint16 length,
        kal_bool stuff);
    void (*rmmi_final_rsp_generator)(kal_bool ret_val, kal_uint8 *buffer,
        kal_uint16 string_length);

    kal_bool (*sbp_query_md_feature)(sbp_md_feature_enum feature);
    kal_uint32 (*kal_get_systicks)(void);
    rat_enum (*get_rat_mode)(void);
    rat_enum (*get_request_rat_mode)(void);

    void (*query_LteBand)(kal_uint32  lte_band[]);

} mbmsal_gtest_fp;

/****************************************************************************/

typedef struct _mbms_config_req_info
{
    kal_bool    isValid;
    mbmsal_errc_mbms_config_req_struct info;
} mbms_config_req_info;

typedef struct _mbms_sib13_servsess_info
{
    tmgi_struct tmgi;
    kal_uint16 sess_id; /* 0xffff = invalid */
    kal_bool status;
} mbms_sib13_servsess_info;

typedef struct _mbms_sib13_mbsfn_mch_info {
    kal_bool isValid;
    kal_uint8 mbsfn_area_id;
    kal_uint16  servsess_count;
    mbms_sib13_servsess_info servsess_info[MBMS_CONFIG_INFO_MCH_NUM * MBMS_CONFIG_INFO_SERVICE_NUM];
} mbms_sib13_mbsfn_mch_info;

typedef struct _mbms_service_info
{
    kal_uint8   validity;

    kal_bool    isEmsrvOn;
    kal_bool    isEmfrqOn;
    kal_bool    isEmsluOn;

    mbmsal_errc_mbms_status_enum coverage_status;
    kal_bool    serving_earfcn_valid[ERRC_MBMS_MAX_CELL_NUM];
    kal_uint32  serving_earfcn[ERRC_MBMS_MAX_CELL_NUM];

    kal_uint8   num_of_mbsfn_area_id[ERRC_MBMS_MAX_CELL_NUM];
    kal_uint8   mbsfn_area_id[ERRC_MBMS_MAX_CELL_NUM][MBMS_SERVICE_STATUS_MBSFN_AREA_NUM];

    mbms_sib13_mbsfn_mch_info mbsfn_mch_info[ERRC_MBMS_MAX_CELL_NUM][MBMS_SERVICE_STATUS_MBSFN_AREA_NUM];
} mbms_sib13_info;

typedef struct _mbms_sib15_info
{
    kal_bool    isValid;
    kal_bool    isEmsailOn;
    mbmsal_errc_mbms_sib15_ind_struct info;

    /* Support to Band 256 */
    kal_uint32  lte_band[8];
} mbms_sib15_info;

typedef struct _mbms_sib16_info
{
    kal_bool    isValid;
    mbmsal_errc_mbms_sib16_ind_struct info;
} mbms_sib16_info;

typedef struct _mbms_nw_time_info
{
    kal_bool    time_zone_valid;
    nw_time_zone_time_struct time_zone;

    kal_bool    daylight_saving_time_valid;
    kal_uint8   daylight_saving_time;
} mbms_nw_time_info;

typedef struct _mbms_servsess_info
{
    kal_bool    isValid;

    kal_bool act_servsess_valid;
    struct {
        kal_bool valid;
        tmgi_struct tmgi;
        kal_uint16 sess_id; /* 0xffff = invalid */
    } act_servsess[MBMS_SERVSESS_STATUS_SERVICE_NUM];

    kal_uint8   report_servsess_total;
    kal_uint8   report_servsess_index;

    kal_bool    report_servsess_activated;
    kal_uint8   report_servsess_cause;
    kal_uint8   report_servsess_subcause;
    struct {
        tmgi_struct tmgi;
        kal_uint16 sess_id; /* 0xffff = invalid */
    } report_servsess;

} mbms_servsess_info;

typedef struct _mbms_binding_info
{
    kal_uint8           embind_src_id;    /*!< store l4c src id under embind
                                                 procedure */
    kal_bool            isEnabled;
    l4c_tcm_l2p_enum    l2p_type;
    kal_uint32          channel_id;
    kal_uint32          netif_id;
    kal_uint8 bind_ps;
} mbms_binding_info;

typedef struct _mbmsal_config_para
{
    kal_uint32  out_mbms_hysteresis_period;
    kal_uint32  out_sess_hysteresis_period;
    kal_uint32  in_mbms_hysteresis_period;

} mbmsal_config_para;

typedef struct _mbmsal_event_para
{
    mbmsal_event_scenario_enum scenario;
    mbmsal_event_status_enum status;
} mbmsal_event_para;

typedef struct _mbmsal_emslu_data
{
    kal_uint32 total_servsess;
    kal_uint8 *p_data;
} mbmsal_emslu_data;

typedef struct _mbmsal_emsesscfg_para
{
    kal_uint32 index;
    kal_uint32 para_1;
} mbmsal_emsesscfg_para;

typedef struct _mbmsal_context
{
    kal_uint8               sim_current;
    kal_uint8               sim_ongoing;

    // MBMSAL configurations
    kal_uint16              id;             /*!< context ID */

    kal_bool                gtest_isOn;     /*!< gtest flag */
    mbmsal_gtest_fp         *gtest_fp;      /*!< gtest function pointers */

    // MBMSAL instances
    mbms_binding_info       info_binding;   /*!< cache hif binding info from
                                                 TE */

    mbms_config_req_info    info_config_req;/*!< cache config request from
                                                 TE */
    mbms_servsess_info      info_servsess;  /*!< cache session status from
                                                 eRRC */
    mbms_sib13_info         info_sib13;     /*!< cache sib13 info from eRRC */
    mbms_sib15_info         info_sib15;     /*!< cache sib15 info from eRRC */
    mbms_sib16_info         info_sib16;     /*!< cache sib16 info from eRRC */
    mbms_nw_time_info       info_nw_time;   /*!< cache NW time info from L4C */

    // VZW: Configuration Parameters
    mbmsal_config_para      para_config;

    // AT+EMEVT related
    mbmsal_event_para       para_event;

    // MBMSAL tst related
    mbmsal_tst_info         info_tst;

    mbmsal_coverage_enum    last_mbms_status;
    kal_uint32              last_frq[ERRC_MBMS_MAX_CELL_NUM + 1];
    mbmsal_emslu_data       last_emslu_data;

    // SIM cfun states updated by L4
    kal_uint8               mbmsal_cfun_state[MBMSAL_MAX_SIM_NUM];

    // For NITZ elapse time calculation 
    kal_uint32              mbmsal_systicks;

} mbmsal_context;

typedef struct _mbmsal_internal_ind
{
    LOCAL_PARA_HDR

    mbmsal_action_type  action;
    mbms_servsess_info  info;
    kal_bool            force_report;
} mbmsal_internal_ind_struct;

/****************************************************************************
 * Macros
 ****************************************************************************/

#define mbmsal_trace(...)       kal_brief_trace(__VA_ARGS__)

#ifndef __GTEST_ENABLE__
#define mbmsal_mem_alloc(size)  get_ctrl_buffer(size)
#define mbmsal_mem_free(ptr)    free_ctrl_buffer(ptr)
#else
#define mbmsal_mem_alloc(size)  mbmsal_tst_mem_alloc(size)
#define mbmsal_mem_free(ptr)    mbmsal_tst_mem_free(ptr)

extern void* mbmsal_tst_mem_alloc(kal_uint32 size);
extern void mbmsal_tst_mem_free(void *buf);
#endif

/****************************************************************************
 * Unit Test
 ****************************************************************************/

#ifdef __GTEST_ENABLE__
#define STATIC
#else
#define STATIC  static
#endif

/****************************************************************************/
#endif /* _MBMSAL_DEFS_H */

