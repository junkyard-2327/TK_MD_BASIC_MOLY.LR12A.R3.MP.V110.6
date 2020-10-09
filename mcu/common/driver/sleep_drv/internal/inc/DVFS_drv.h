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
 *
 * Filename:
 * ---------
 *    DVFS_drv.h
 *
 * Project:
 * --------
 *    UMOLYA
 *
 * Description:
 * ------------
 *    L1core DVFS driver.
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __DVFS_DRV_H__
#define __DVFS_DRV_H__

#if defined(DVFS_ENABLE)

#include "DVFS_drv_public.h"
#include "DVFS_drv_common.h"

/*
 * DVFS driver initialization state.
 */
typedef enum _dvfs_init_state_e {
    DVFS_INIT_YET           = 0,
    DVFS_INIT_SW            = 1,
    DVFS_INIT_MODEM         = 2,
    DVFS_INIT_MD            = 3,
    DVFS_INIT_AP_DVFSRC     = 4,
    DVFS_INIT_PLLMIXED      = 5,
    DVFS_INIT_MD_DVFSRC     = 6,
    DVFS_INIT_PLL_DFS       = 7,
    DVFS_INIT_DVFS_CON      = 8,
    DVFS_INIT_ISR           = 9,

    DVFS_INIT_DUMMY         = 0xffffffff /* for 4-byte enum */
} dvfs_init_state_e;

/*
 * PLL frequency to 13-bit PCW value.
 */
typedef struct _dvfs_pll_pcw_t {
    kal_uint32      freq;       /* frequency in MHz */
    kal_uint32      pcw13;      /* 13-bit PCW */
} dvfs_pll_pcw_t;

/*
 * PLL context information.
 */
typedef struct _dvfs_pll_dfs_t {
    char            name[16];   /* symbolic name of the PLL */
    kal_uint32      id;         /* ID used in mapping between md_dvfs_con and pllmixed sys */
    kal_uint32      div;        /* divider */
    dvfs_pll_pcw_t  gears[DVFS_GEAR_COUNT]; /* settings for each DVFS gear */
} dvfs_pll_dfs_t;

/*
 * PLL related registers.
 */
typedef struct _dvfs_pll_reg_t {
    kal_uint32      fhctl;
    kal_uint32      gear_set0;
    kal_uint32      ctl0;
    kal_uint32      sts;
    kal_uint32      da;
    kal_uint32      sw_gear;
    kal_uint32      irq_rdy;
    kal_uint32      min_gear;
    kal_uint32      max_gear;
} dvfs_pll_reg_t;

/*
 * Buck related registers.
 */
typedef struct _dvfs_buck_reg_t {
    kal_uint32      min_gear;
    kal_uint32      max_gear;
} dvfs_buck_reg_t;

/*
 * DVFS SW information, such as internal states and error happend.
 */
typedef struct _dvfs_sw_info_t {
    dvfs_init_state_e   init;           /* initialization state */
    kal_uint32          error;          /* error happens last time, 0 otherwise */
} dvfs_sw_info_t;

typedef struct _dvfs_spm_dump_t {
    kal_uint32 last_served_level;         /* Before Cervino: SPM_SW_RSV_5, Otherwise: SPM_SW_RSV_9 */
    kal_uint32 dvfs_event_sta;            /* SPM_DVFS_EVENT_STA */
    kal_uint32 dfs_level;                 /* SPM_DFS_LEVEL */
    kal_uint32 dvs_level;                 /* SPM_DVS_LEVEL */
    kal_uint32 pcm_reg_data[16];          /* PCM_REG0_DATA ~ PCM_REG15_DATA */
    #if DVFS_DUMP_MORE_AP_REG_INFO
    kal_uint32 pcm_reg12_mask_b_sta;      /* PCM_REG12_MASK_B_STA */
    kal_uint32 pcm_reg12_ext_data;        /* PCM_REG12_EXT_DATA */
    kal_uint32 pcm_reg12_ext_mask_b_data; /* PCM_REG12_EXT_MASK_B_DATA */
    kal_uint32 ap_sema;                   /* SPM_AP_SEMA */
    kal_uint32 dfs_sema;                  /* SPM_DFS_SEMA */
    kal_uint32 pc_trace[8];               /* SPM_PC_TRACE_G0 ~ SPM_PC_TRACE_G7 */
    kal_uint32 spm_int_cnt;               /* SPM_SW_RSV_3 */
    #endif
} dvfs_spm_dump_t;

typedef struct _dvfs_rc_dump_t {
    kal_uint32  record_count;                                     /* DVFSRC_RECORD_COUNT */
    kal_uint32  record_md[DVFS_MD_REC_CNT];                       /* DVFSRC_RECORD_MD_0 ~ DVFSRC_RECORD_MD_7 */
    kal_uint32  level;                                            /* DVFSRC_LEVEL */
    kal_uint32  basic_control;                                    /* DVFSRC_BASIC_CONTROL */
    kal_uint32  md_sw_control;                                    /* DVFSRC_MD_SW_CONTROL */
    kal_uint32  intr;                                             /* DVFSRC_INT */
    kal_uint32  last;                                             /* DVFSRC_LAST*/
    kal_uint32  record_ap[DVFS_AP_REC_CNT][DVFS_WORD_PER_AP_REC]; /* DVFSRC_RECORD_X_Y */
} dvfs_rc_dump_t;

typedef struct _dvfs_ex_dump_t {
    kal_uint32  state;        /* MD_DVFS_STATE */
    kal_uint32  err_flag;     /* MD_DVFS_ERR_FLAG */
    kal_uint32  spare;        /* MD_DVFS_SPARE */
    kal_uint32  lat_cur_pll;  /* MD_DVFS_LAT_CUR_PLL_VAL */
    kal_uint32  lat_cur_buk;  /* MD_DVFS_LAT_CUR_BUK_VAL */
    kal_uint32  cur_pll;      /* MD_DVFS_CUR_PLL_VAL */
    kal_uint32  cur_buk;      /* MD_DVFS_CUR_BUK_VAL */
    
    dvfs_rc_dump_t  rc_dump;  /* DVFSRC register dump */
    dvfs_spm_dump_t spm_dump; /* SPM register dump */
} dvfs_ex_dump_t;

/*
 * DVFS HW information, such as version and ISR status.
 */
typedef struct _dvfs_hw_info_t {
    kal_uint32          hw_ver;         /* HW version */
    kal_uint32          pll_irq_status; /* last PLL HP ready interrupt status */
    kal_bool            with_spm_dvs;   /* KAL_TRUE if SPM DVS function is available. */
    kal_bool            with_dummy_ap;  /* KAL_TRUE if it's on a dummy AP load SPM */
    kal_bool            rc_enabled;     /* KAL_TRUE if DVFSRC is enabled. */
    kal_uint8           rsvd[1];
    kal_uint32          max_capable_vmd;/* Maximal Vmd gear allowed by DVFSRC */

    kal_uint32          pll_lisr_check_time[2];
    kal_uint32          buck_check_time[2];
    kal_uint32          pmic_check_time[2];
    kal_uint32          pll_sts[2][DVFS_PLL_COUNT];

    dvfs_ex_dump_t      ex_dump;
} dvfs_hw_info_t;

/*
 * DVFS configuration.
 */
typedef struct _dvfs_config_t {
    kal_uint32          ignore_timeout; /* 1 for md_dvfs_con to ignore VOLT and FREQ timeout error, 0 otherwise. */
} dvfs_config_t;

/*
 * DVFS per HW event PLL and Buck gear settings.
 */
typedef struct _dvfs_gear_t {
    kal_uint32     pll;
    kal_uint32     buk;
    kal_uint32     time;    
} dvfs_gear_t;

/*
 * DVFS trace ID.
 */
typedef enum _dvfs_trace_id_e {
    DVFS_TRACE_ID_MIPS_GET_FREQ,
    DVFS_TRACE_ID_MIPS_GET_GEAR,
    DVFS_TRACE_C1A_CNT,

    DVFS_TRACE_ID_DUMMY = 0xffffffff /* for 4-byte enum */
} dvfs_trace_id_e;

/*
 * DVFS trace cache common information. 
 */
typedef struct _dvfs_trace_info_t {
    kal_bool            valid;
    kal_uint8           rsvd[3];
    kal_uint32          time;
} dvfs_trace_info_t;

/*
 * DVFS trace 1-data cache line.
 */
typedef struct _dvfs_trace_c1a_t {
    dvfs_trace_info_t   info;
    kal_uint32          arg;
} dvfs_trace_c1a_t;

/*
 * DVFS driver global context.
 */
typedef struct {
    dvfs_sw_info_t      sw_info;        /* DVFS SW information */
    dvfs_hw_info_t      hw_info;        /* DVFS HW information */
    dvfs_config_t       config;         /* Configuration */

    dvfs_pll_dfs_t     *dfs_table;      /* DFS gear and PCW tables for each PLL */
    dvfs_pll_reg_t     *pll_regs;       /* PLL registers */
    dvfs_buck_reg_t    *buck_regs;      /* Buck registers */

    dvfs_gear_t         dvfs_gear[DVFS_EVT_NUM];
    kal_uint32          set_gear_time[DVFS_EVT_NUM];
    kal_uint32          cur_pll[DVFS_EVT_NUM];
    kal_uint32          cur_buk[DVFS_EVT_NUM];
    kal_uint32          set_check_gearup_time;
    kal_uint32          pll_da;
    kal_uint32          lat_cur_pll_val;
    dvfs_trace_c1a_t    cache_1a[DVFS_TRACE_C1A_CNT];
} DVFS_globals;

/*------------------------------------------------------------------------------
 * Helper utilites shared inside DVFS driver.
 *----------------------------------------------------------------------------*/
/*******************************************************************************
*   Function : DVFS_get_gear
*   Description : Common API to read PLL gear setting for specified event from DVFS HW.
*
*   Parameter : DVFS_EVENT_E evt_num
*   Return    : Current PLL gear setting 
*******************************************************************************/
kal_uint32 DVFS_get_gear(
        DVFS_EVENT_E                    evt_num);

/*******************************************************************************
*   Function : DVFS_set_gear
*   Description : Common API to write PLL and Buck settings for specified event to DVFS HW.
*
*   Parameter : DVFS_EVENT_E evt_num, dvfs_gear_t gear, kal_uint32 time
*               kal_bool do_trace: KAL_TRUE if it's allowed output trace in current context, 
*                                  KAL_FALSE otherwise (e.g. holding a ITC lock).
*   Return    : None
*******************************************************************************/
void DVFS_set_gear(
        DVFS_EVENT_E                    evt_num,
        kal_uint32                      gear,
        kal_uint32                      time,
        kal_bool                        do_trace);

/*******************************************************************************
*   Function : DVFS_check_gearup
*   Description : API to check if pll gear meet requirement.
*
*   Parameter : kal_uint32 gear
*   Return    : KAL_TRUE if meet requirement, else return KAL_FALSE
*******************************************************************************/
kal_bool DVFS_check_gearup(
        kal_uint32                      gear);

/*******************************************************************************
*   Function : DVFS_get_global
*   Description : Getter of DVFS driver global context object.
*
*   Parameter : None
*   Return    : Pointer to the DVFS_globals instance.
*******************************************************************************/
DVFS_globals *DVFS_get_global(void);

/*******************************************************************************
*   Function : DVFS_get_pll_reg
*   Description : Getter of DVFS PLL related registers and settings.
*
*   Parameter : None
*   Return    : Pointer to the dvfs_pll_reg_t instance.
*******************************************************************************/
dvfs_pll_reg_t *DVFS_get_pll_reg(
        kal_uint32                      pll_id);

/*******************************************************************************
*   Function : DVFS_pll_gear2freq
*   Description : Convert PLL gear to frequency.
*
*   Parameter : kal_uin32 pll_id: 0~3 
*   Parameter : kal_uin32 gear  : 0~7 
*   Return    : PLL current frequency in MHz.
*******************************************************************************/
kal_uint32 DVFS_pll_gear2freq(
        kal_uint32                      pll_id,
        kal_uint32                      gear);

/*******************************************************************************
*   Function : DVFS_get_buck_reg
*   Description : Getter of DVFS buck related registers and settings.
*   Parameter : None
*   Return    : Pointer to the dvfs_buck_reg_t instance.
*******************************************************************************/
dvfs_buck_reg_t *DVFS_get_buck_reg(
        kal_uint32                      buck_id);

/*******************************************************************************
*   Function : DVFS_get_buk_mapping
*   Description : Query minimal buck gears requred for specified PLL gears.
*   Parameter : None
*   Return    : Buck gears.
*******************************************************************************/
kal_uint32 DVFS_get_buck_mapping(
        kal_uint32                      pll_gear);

/*******************************************************************************
*   Function : DVFS_epof
*   Description : Do DVFS operation when modem is going to power off (EPOF).
*   Parameter : None
*   Return    : None
*******************************************************************************/
void DVFS_epof(void);

/*******************************************************************************
*   Function : DVFS_check_err_flag
*   Description : check error flag when set gear & check gear up.
*   Parameter : None
*   Return    : None
*******************************************************************************/
void DVFS_check_err_flag(void);

/*******************************************************************************
*   Function : DVFS_is_dup_trace_1a
*   Description : Tell if the trace with its argument has been existed recently.
*   Parameter : id          ID to identify the trace file.
*               now         Current time.
*               arg         Argument of the trace.
*   Return    : KAL_TRUE if the trace is duplicated.
*******************************************************************************/
kal_bool DVFS_is_dup_trace_1a(
        dvfs_trace_id_e                 id,
        kal_uint32                      now,
        kal_uint32                      arg);

#define DVFS_IS_DUP_TRACE(_id, _arg) \
        DVFS_is_dup_trace_1a(DVFS_TRACE_ID_ ## _id, DVFS_US_GET_CURRENT_TIME(), _arg)
            
#define TRACE_C1A_LIVE_TIME 6000000

#endif /* defined(DVFS_ENABLE) */
#endif /* __DVFS_DRV_H__ */
