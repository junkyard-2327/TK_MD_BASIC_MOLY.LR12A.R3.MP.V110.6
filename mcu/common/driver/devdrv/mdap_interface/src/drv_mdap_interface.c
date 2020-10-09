/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 * -----------
 *   drv_mdap_interface.c
 *
 * Project:
 * -----------
 *   UMOLY
 *
 * Description:
 * ------------
 *   MD/AP interface driver related code
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
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#include "drv_mdap_interface.h"
#include "reg_base.h"
#include "elm.h"
#include "sync_data.h"
#include "kal_hrt_api.h"
#include "us_timer.h"
#include "intrCtrl.h"
#include "stdlib.h"

#if defined(__AMIF_TRACE_ENABLE__)
#include "TrcMod.h"		//for L1 Trace API
#define AMIF_PRESET_SCENARIO_LOG L1TRC_AMIF_PRESET_SCENARIO_LOG
#define AMIF_PRESET_STATUS_DUMP L1TRC_AMIF_PRESET_STATUS_DUMP
#define AMIF_POSTSET_SCENARIO_LOG L1TRC_AMIF_POSTSET_SCENARIO_LOG
#define AMIF_POSTSET_STATUS_DUMP L1TRC_AMIF_POSTSET_STATUS_DUMP
#define AMIF_START_SCENARIO_LOG L1TRC_AMIF_START_SCENARIO_LOG
#define AMIF_START_STATUS_DUMP L1TRC_AMIF_START_STATUS_DUMP
#define AMIF_SWITCH_SCENARIO_LOG L1TRC_AMIF_SWITCH_SCENARIO_LOG
#define AMIF_SWITCH_STATUS_DUMP L1TRC_AMIF_SWITCH_STATUS_DUMP
#define AMIF_WAKE_LOG L1TRC_AMIF_WAKE_LOG
#define AMIF_ELM_CFG_DIRECT_LOG L1TRC_AMIF_ELM_CFG_DIRECT_LOG
#define AMIF_ELM_CFG_ACT_ISR_LOG L1TRC_AMIF_ELM_CFG_ACT_ISR_LOG
#define AMIF_BIT_UPDATE_LOG L1TRC_AMIF_BIT_UPDATE_DBG
#define AMIF_NOBIT_DBG L1TRC_NOBIT_DBG
#else
#define AMIF_PRESET_SCENARIO_LOG
#define AMIF_PRESET_STATUS_DUMP
#define AMIF_POSTSET_SCENARIO_LOG
#define AMIF_POSTSET_STATUS_DUMP
#define AMIF_START_SCENARIO_LOG
#define AMIF_START_STATUS_DUMP
#define AMIF_SWITCH_SCENARIO_LOG
#define AMIF_SWITCH_STATUS_DUMP
#define AMIF_WAKE_LOG
#define AMIF_ELM_CFG_DIRECT_LOG
#define AMIF_ELM_CFG_ACT_ISR_LOG
#define AMIF_BIT_UPDATE_LOG
#define AMIF_NOBIT_DBG
#endif

//#define __AMIF_ELM_CFG_HISR__
#define __AMIF_ELM_CFG_LISR__
#define __MDAP_INTERFACE_LOOP_OPT__
#define AMIF_SW_INT_IRQ_CODE    IRQ_SW_LISR42_CODE



typedef struct _MDAP_INTERFACE_INFO {
	kal_uint32	u32MD2AP_InitStatus;
	kal_uint32	u32AP2MD_InitStatus;
	kal_uint32	u32MD2AP_Status;
	kal_uint32	u32AP2MD_Status;
} MDAP_INTERFACE_INFO;



/*******************************************************************************
 * Functions
 *******************************************************************************/
#if defined(ENABLE_MDAPINTERFACE)

#include "intrCtrl.h"


#define MDAP_INTERFACE_PCORE_IRQCODE	0
#define MDAP_INTERFACE_L1CORE_IRQCODE	0

/* define scenario mapping array for easy use */
#undef MDAP_SCENARIO_GROUP_INSTANCE
#undef MDAP_SCENARIO_INSTANCE
#undef MDAP_INSTANCE_BEGING
#undef MDAP_INSTANCE_END
#undef MDAP_BIT_INSTANCE
#undef MDAP_ELM_INSTANCE
#define MDAP_SCENARIO_INSTANCE(SCENARIO,SCENARIO_GROUP,VALUE,BIT_INDEX,MODE) {SCENARIO, BIT_INDEX, SCENARIO_GROUP},
SCENARIO_INFO_T MD2AP_Scenario_Info[E_MD2AP_SCENARIO_END] = {
                                        #include "drv_mdap_interface_config.h"
                                        };


MD2AP_SCENARIO MD2AP_HIGHEST_REQ_SCENARIO = MD2AP_NO_SCENARIO;
MD2AP_BIT_INDEX MD2AP_HIGHEST_REQ_SCENARIO_BIT_INDEX = MD2AP_NOBIT;
MD2AP_ELM_INDEX MD2AP_HIGHEST_REQ_SCENARIO_ELM_INDEX = MD2AP_ELM_CFG_0; 

/* define bit mapping array for easy use */
#undef MDAP_SCENARIO_GROUP_INSTANCE
#undef MDAP_SCENARIO_INSTANCE
#undef MDAP_INSTANCE_BEGING
#undef MDAP_INSTANCE_END
#undef MDAP_BIT_INSTANCE
#undef MDAP_ELM_INSTANCE
#define MDAP_BIT_INSTANCE(BIT_INDEX,VALUE,BIT_SETTING_VAL,ELM_CFG_INDEX) {BIT_INDEX,BIT_SETTING_VAL,ELM_CFG_INDEX},
BIT_INFO_T MD2AP_Bit_Info[E_MD2AP_BIT_INDEX_END] =  {
                                                        #include "drv_mdap_interface_config.h"
                                                    };


/* define ELM configuration array for easy use */
#undef MDAP_SCENARIO_GROUP_INSTANCE
#undef MDAP_SCENARIO_INSTANCE
#undef MDAP_INSTANCE_BEGING
#undef MDAP_INSTANCE_END
#undef MDAP_BIT_INSTANCE
#undef MDAP_ELM_INSTANCE
#define MDAP_ELM_INSTANCE(ELM_INDEX, VALUE, R_LAT_NS, R_WIN_US, W_LAT_NS, W_WIN_US)    {ELM_INDEX, R_LAT_NS, R_WIN_US, W_LAT_NS, W_WIN_US},
ELM_CFG_T MD2AP_ELM_CFG[E_MD2AP_ELM_INDEX_END] =  {
                                                        #include "drv_mdap_interface_config.h"
                                                  };



GROUP_STATUS_T MD2AP_sim_status[E_MD2AP_SIM_COUNT][E_MD2AP_SCENARIO_GROUP_END];

MDAP_INTERFACE_INFO             mdap_interface_info = {0};
kal_uint32                      MD_DVFS_CON_BackupRestore=0;
kal_uint32                      MD_DVFS_CON_BackupTime=0;

#if defined(__MDAP_INTERFACE_LOOP_OPT__)
kal_uint32                      mdap_interface_invoked_bitmask = 0;
kal_uint32                      mdap_interface_invoked_bit_cnt[32];    // Assume 32 bit of EMI DVFS CON in max case.
#endif



/*******************************************************************************
 * Functions Definition
 *******************************************************************************/
#if defined(__AMIF_ELM_CFG_HISR__)
void mdap_interface_elm_cfg_hisr()
{
    ELM_MCU_threshold_change(MD2AP_ELM_CFG[MD2AP_HIGHEST_REQ_SCENARIO_ELM_INDEX].r_lat_ns, \
        MD2AP_ELM_CFG[MD2AP_HIGHEST_REQ_SCENARIO_ELM_INDEX].w_lat_ns, \
        MD2AP_ELM_CFG[MD2AP_HIGHEST_REQ_SCENARIO_ELM_INDEX].r_win_us);
} 
#endif

#if defined(__AMIF_ELM_CFG_LISR__)
void mdap_interface_elm_cfg_lisr()
{
    ELM_MCU_threshold_change(MD2AP_ELM_CFG[MD2AP_HIGHEST_REQ_SCENARIO_ELM_INDEX].r_lat_ns, \
        MD2AP_ELM_CFG[MD2AP_HIGHEST_REQ_SCENARIO_ELM_INDEX].w_lat_ns, \
        MD2AP_ELM_CFG[MD2AP_HIGHEST_REQ_SCENARIO_ELM_INDEX].r_win_us);

    Deactivate_LISR(AMIF_SW_INT_IRQ_CODE);
}
#endif

#if defined(__MDAP_INTERFACE_LOOP_OPT__)
kal_bool MD2AP_ScenarioCheckAndConfig(CHECK_AND_CONFIG_FLAG check_and_cofig_flag)
{
    kal_uint32 highest_bit;
    MD2AP_ELM_INDEX highest_REQ_elm_index;

    /* case that state trans to NOBIT */
    /* Unexpected scenario */
    if (mdap_interface_invoked_bitmask == 0)
    {
        AMIF_NOBIT_DBG();
        highest_bit = 0;
        highest_REQ_elm_index = MD2AP_ELM_CFG_0;
        *MD2SPM_DVFS_CON = 0; 
    }
    else
    {
        highest_bit = 32 - __builtin_clz(mdap_interface_invoked_bitmask) - 1;
        ASSERT(highest_bit < 16);
        ASSERT((1<<highest_bit) == MD2AP_Bit_Info[highest_bit].bit_setting_value);
        highest_REQ_elm_index = MD2AP_Bit_Info[highest_bit].elm_index;

        *MD2SPM_DVFS_CON = (1 << highest_bit);
    }

    MO_Sync();

    if (MD2AP_HIGHEST_REQ_SCENARIO_ELM_INDEX != highest_REQ_elm_index)
    {
#if defined(__AMIF_ELM_CFG_HISR__)
        /* only in HRT LISR do activating HISR to config ELM. */
        if((kal_get_current_vpe_id() & 1) && kal_if_lisr())
        {
            AMIF_ELM_CFG_ACT_ISR_LOG(MD2AP_HIGHEST_REQ_SCENARIO_ELM_INDEX, highest_REQ_elm_index);
            kal_hrt_activate_hisr(MDAP_INTERFACE_ELM_CFG_HISR);
        }
        else
#elif defined(__AMIF_ELM_CFG_LISR__)
        /* only in HRT LISR do activating HISR to config ELM. */
        if((kal_get_current_vpe_id() & 1) && kal_if_lisr())
        {
            AMIF_ELM_CFG_ACT_ISR_LOG(MD2AP_HIGHEST_REQ_SCENARIO_ELM_INDEX, highest_REQ_elm_index);
            Activate_LISR(AMIF_SW_INT_IRQ_CODE);
       }
        else
#endif
        {
            AMIF_ELM_CFG_DIRECT_LOG(MD2AP_HIGHEST_REQ_SCENARIO_ELM_INDEX, highest_REQ_elm_index);
            ELM_MCU_threshold_change(MD2AP_ELM_CFG[highest_REQ_elm_index].r_lat_ns, \
                                     MD2AP_ELM_CFG[highest_REQ_elm_index].w_lat_ns, \
                                     MD2AP_ELM_CFG[highest_REQ_elm_index].r_win_us);
        }
        MD2AP_HIGHEST_REQ_SCENARIO_ELM_INDEX = highest_REQ_elm_index;
    }
    return KAL_TRUE;
}
#else
kal_bool MD2AP_ScenarioCheckAndConfig(CHECK_AND_CONFIG_FLAG check_and_cofig_flag)
{
    kal_uint32 sim_index = 0;
    kal_uint32 group_index = 0;
    MD2AP_SCENARIO highest_REQ_scenario = MD2AP_NO_SCENARIO;
    MD2AP_BIT_INDEX highest_REQ_scenario_bit_index = MD2AP_NOBIT;
    MD2AP_ELM_INDEX highest_REQ_elm_index = MD2AP_ELM_CFG_0;

    for(sim_index = 0; sim_index < E_MD2AP_SIM_COUNT; sim_index++)
    {
        {
            for(group_index = 0; group_index < E_MD2AP_SCENARIO_GROUP_END; group_index++)
            {
                MD2AP_SCENARIO searching_scenario = MD2AP_sim_status[sim_index][group_index].scenario;
                if(MD2AP_Bit_Info[MD2AP_Scenario_Info[searching_scenario].bit_index].bit_setting_value> MD2AP_Bit_Info[MD2AP_Scenario_Info[highest_REQ_scenario].bit_index].bit_setting_value)
                {
                    highest_REQ_scenario = searching_scenario;
                    highest_REQ_scenario_bit_index = MD2AP_Scenario_Info[highest_REQ_scenario].bit_index;
                    highest_REQ_elm_index = MD2AP_Bit_Info[highest_REQ_scenario_bit_index].elm_index;
                }
            }
        }
    }

    if(highest_REQ_scenario != MD2AP_HIGHEST_REQ_SCENARIO)
    {
        MD2AP_HIGHEST_REQ_SCENARIO = highest_REQ_scenario;
        MD2AP_HIGHEST_REQ_SCENARIO_BIT_INDEX = highest_REQ_scenario_bit_index;

       *MD2SPM_DVFS_CON = MD2AP_Bit_Info[highest_REQ_scenario_bit_index].bit_setting_value;
   
       ELM_MCU_threshold_change(MD2AP_ELM_CFG[highest_REQ_elm_index].r_lat_ns, \
                                MD2AP_ELM_CFG[highest_REQ_elm_index].w_lat_ns, \
                                MD2AP_ELM_CFG[highest_REQ_elm_index].r_win_us);
    }

    return KAL_TRUE;
}
#endif

kal_bool _Drv_MD2AP_SetScenario(MD2AP_SCENARIO value)
{
    return KAL_TRUE;
}
kal_bool _Drv_MD2AP_ClearScenario(MD2AP_SCENARIO value)
{
    return KAL_TRUE;
}

static kal_uint32 _Drv_MD2AP_Update_ScenarioBitMask(MD2AP_SCENARIO curr, MD2AP_SCENARIO next)
{
#if defined(__MDAP_INTERFACE_LOOP_OPT__)
    kal_uint32                 orig_bitmask = mdap_interface_invoked_bitmask;
    MD2AP_BIT_INDEX curr_bit = MD2AP_Scenario_Info[curr].bit_index;
    MD2AP_BIT_INDEX next_bit = MD2AP_Scenario_Info[next].bit_index;

    if (curr_bit == next_bit)
        return 0;

    if(curr_bit != MD2AP_NOBIT)
    { 
        mdap_interface_invoked_bit_cnt[curr_bit]--;
        if(mdap_interface_invoked_bit_cnt[curr_bit] == 0)
        {
            mdap_interface_invoked_bitmask &= ~(1 << curr_bit);
        }
    }
    if(next_bit != MD2AP_NOBIT)
    {
        mdap_interface_invoked_bit_cnt[next_bit]++;
        mdap_interface_invoked_bitmask |= (1 << next_bit);
    }

    AMIF_BIT_UPDATE_LOG(curr_bit, next_bit, orig_bitmask, mdap_interface_invoked_bitmask);
#endif

    return 1;
}

kal_bool _Drv_MD2AP_SwitchScenario(MD2AP_SIM_ID sim_id, MD2AP_SCENARIO next_scenario)
{
    MD2AP_SCENARIO_GROUP input_scenario_group;
    MD2AP_SCENARIO       curr_scenario;

    AMIF_SWITCH_SCENARIO_LOG(sim_id, next_scenario);

    /* Error check 1: Check scenario legality */
    if(E_MD2AP_SCENARIO_END <= next_scenario)
    {
        AMIF_ASSERT(0);
        return KAL_FALSE;
    }
    /* Error check 2: Check mapping table */
    if(next_scenario != MD2AP_Scenario_Info[next_scenario].scenario)
    {
        AMIF_ASSERT(0);
        return KAL_FALSE;
    }

    /* Get group information for current scenario */
    input_scenario_group = MD2AP_Scenario_Info[next_scenario].group;

    /* currently, only 4G L1 support switch mode */
    ASSERT(input_scenario_group == scenario_4G_L1);

    /* HRT EI/DI function supports caller from both HRT/normal domain */
    ASSERT(kal_hrt_take_itc_lock(KAL_ITC_ERRC_C2K_AMIF_LOCK ,KAL_INFINITE_WAIT) == KAL_SUCCESS);

    curr_scenario = MD2AP_sim_status[sim_id][input_scenario_group].scenario;

    /* if input scenario equals current scenario in scenario group, nothing need to do */
    /* else, need to do scenario bit switch */
    if (MD2AP_sim_status[sim_id][input_scenario_group].scenario != next_scenario)
    {
        /* update scenario in group to next scenario */
        MD2AP_sim_status[sim_id][input_scenario_group].scenario = next_scenario;
        
        if(_Drv_MD2AP_Update_ScenarioBitMask(curr_scenario, next_scenario))
        {
            MD2AP_ScenarioCheckAndConfig(E_MD2AP_SWITCH);
        }
    }

    kal_hrt_give_itc_lock(KAL_ITC_ERRC_C2K_AMIF_LOCK);

    AMIF_SWITCH_STATUS_DUMP(sim_id, input_scenario_group, next_scenario, *(MD2SPM_DVFS_CON));

    return KAL_TRUE;
}

#define MDAP_INTERFACE_DEBUG_LOG_SIZE    8

/* Debug log for positioning called sequence */
typedef struct drv_mdap_interface_pos_debug_s {
    MD2AP_SIM_ID         sim_id;
    MD2AP_SCENARIO       value;
    MD2AP_SCENARIO_GROUP input_scenario_group;
    MD2AP_SCENARIO       current_scenario;
    kal_uint32           step;
} drv_mdap_interface_pos_debug_t;

drv_mdap_interface_pos_debug_t drv_mdap_interface_pos_log[MDAP_INTERFACE_DEBUG_LOG_SIZE];
kal_uint32                     drv_mdap_interface_pos_log_ptr = 0;

kal_bool _Drv_MD2AP_StartScenario(MD2AP_SIM_ID sim_id,MD2AP_SCENARIO value)
{
    AMIF_START_SCENARIO_LOG(sim_id,value);

    MD2AP_SCENARIO_GROUP input_scenario_group = E_MD2AP_SCENARIO_GROUP_DEFAULT;

    /* Error check 1: Check scenario legality */
    if(E_MD2AP_SCENARIO_END <= value)
    {
        AMIF_ASSERT(0);
        return KAL_FALSE;
    }
    /* Error check 2: Check mapping table */
    if(value != MD2AP_Scenario_Info[value].scenario)
    {
        AMIF_ASSERT(0);
        return KAL_FALSE;
    }
    /* Get group information for current scenario */
    input_scenario_group = MD2AP_Scenario_Info[value].group;

    ASSERT(kal_hrt_take_itc_lock(KAL_ITC_ERRC_C2K_AMIF_LOCK ,KAL_INFINITE_WAIT) == KAL_SUCCESS);

    drv_mdap_interface_pos_log[drv_mdap_interface_pos_log_ptr].sim_id = sim_id;
    drv_mdap_interface_pos_log[drv_mdap_interface_pos_log_ptr].value  = value;
    drv_mdap_interface_pos_log[drv_mdap_interface_pos_log_ptr].input_scenario_group = input_scenario_group;
    drv_mdap_interface_pos_log[drv_mdap_interface_pos_log_ptr].current_scenario = MD2AP_sim_status[sim_id][input_scenario_group].scenario;

    if(value == MD2AP_4G_POSITIONING)
    {
        // Error check 2: Current 4G positioning scenario must be inactivating
        if(MD2AP_4G_NON_POSITIONING != MD2AP_sim_status[sim_id][input_scenario_group].scenario)
        {
            AMIF_ASSERT(0);
            return KAL_FALSE;
        }
        // Do not use else statement here due to keep set value for no assertion mode
    }
    else if(value == MD2AP_4G_NON_POSITIONING)
    {
        //// Error check 1: Current 4G positioning scenario must be activating
        ////if(MD2AP_4G_POSITIONING != MD2AP_sim_status[sim_id][input_scenario_group].scenario)
        ////{
        ////    AMIF_ASSERT(0);
        ////    return KAL_FALSE;
        ////}
        //// Do not use else statement here due to keep set value for no assertion mode
    }
    else
    {
        // Error check. assert for illegal parameter
        AMIF_ASSERT(0);
        return KAL_FALSE;
    }

    drv_mdap_interface_pos_log[drv_mdap_interface_pos_log_ptr].step = 0;
    if(_Drv_MD2AP_Update_ScenarioBitMask(MD2AP_sim_status[sim_id][input_scenario_group].scenario, value))
    {
        /* 1. set positioning scenario */
        MD2AP_sim_status[sim_id][input_scenario_group].scenario = value;
        /* 2.Check highest requirement scenario and set corresponding bit */
        MD2AP_ScenarioCheckAndConfig(E_MD2AP_START);
        
        drv_mdap_interface_pos_log[drv_mdap_interface_pos_log_ptr].step = 1;
    }

    drv_mdap_interface_pos_log_ptr = (drv_mdap_interface_pos_log_ptr + 1) % MDAP_INTERFACE_DEBUG_LOG_SIZE;

    kal_hrt_give_itc_lock(KAL_ITC_ERRC_C2K_AMIF_LOCK);

    AMIF_START_STATUS_DUMP(sim_id, input_scenario_group, value, *(MD2SPM_DVFS_CON));

    return KAL_TRUE;
}

kal_bool _Drv_MD2AP_preSetStartScenario(MD2AP_SIM_ID sim_id,MD2AP_SCENARIO value)
{
    AMIF_PRESET_SCENARIO_LOG(sim_id,value);

    //MD2AP_SCENARIO highest_req_scenario = MD2AP_NO_SCENARIO;
    MD2AP_SCENARIO_GROUP input_scenario_group = E_MD2AP_SCENARIO_GROUP_DEFAULT;
    /* Error check 1: Check mapping table */
    if(value != MD2AP_Scenario_Info[value].scenario)
    {
        AMIF_ASSERT(0);
        return KAL_FALSE;
    }

    input_scenario_group = MD2AP_Scenario_Info[value].group;
    ASSERT(kal_hrt_take_itc_lock(KAL_ITC_ERRC_C2K_AMIF_LOCK ,KAL_INFINITE_WAIT) == KAL_SUCCESS);

    /* Error check 2: Check preSet and postSet pair in same group */
    /* Do not check preset after preset scenario for abort case */
    //if(KAL_TRUE == MD2AP_sim_status[sim_id][input_scenario_group].preSetting)
    //{
    //    AMIF_ASSERT(0);
    //    return KAL_FALSE;
    //}
    // Do not use else statement here due to keep set value for no assertion mode

    MD2AP_sim_status[sim_id][input_scenario_group].preSetting= KAL_TRUE;

    if(value > MD2AP_sim_status[sim_id][input_scenario_group].scenario)
    {
        if(_Drv_MD2AP_Update_ScenarioBitMask(MD2AP_sim_status[sim_id][input_scenario_group].scenario, value))
        {
            MD2AP_sim_status[sim_id][input_scenario_group].scenario = value;
            MD2AP_ScenarioCheckAndConfig(E_MD2AP_PRESET);
        }
    }
    else
    {
        //do nothing
    }

    kal_hrt_give_itc_lock(KAL_ITC_ERRC_C2K_AMIF_LOCK);
    AMIF_PRESET_STATUS_DUMP(sim_id, input_scenario_group, value, *(MD2SPM_DVFS_CON));

    return KAL_TRUE;
}

kal_bool _Drv_MD2AP_postSetStartScenario(MD2AP_SIM_ID sim_id,MD2AP_SCENARIO value)
{
    AMIF_POSTSET_SCENARIO_LOG(sim_id,value);

    //MD2AP_SCENARIO highest_req_scenario = MD2AP_NO_SCENARIO;
    MD2AP_SCENARIO_GROUP input_scenario_group = E_MD2AP_SCENARIO_GROUP_DEFAULT;
    /* Error check 1: Check mapping table */
    if(value != MD2AP_Scenario_Info[value].scenario)
    {
        AMIF_ASSERT(0);
        return KAL_FALSE;
    }

    input_scenario_group = MD2AP_Scenario_Info[value].group;

    ASSERT(kal_hrt_take_itc_lock(KAL_ITC_ERRC_C2K_AMIF_LOCK ,KAL_INFINITE_WAIT) == KAL_SUCCESS);

    /* Error check 2: Check preSet and postSet pair in same group */
    if(KAL_FALSE == MD2AP_sim_status[sim_id][input_scenario_group].preSetting)
    {
        AMIF_ASSERT(0);
        return KAL_FALSE;
    }
    // Do not use else statement here due to keep set value for no assertion mode

    MD2AP_sim_status[sim_id][input_scenario_group].preSetting= KAL_FALSE;

    if(value < MD2AP_sim_status[sim_id][input_scenario_group].scenario)
    {
        if(_Drv_MD2AP_Update_ScenarioBitMask(MD2AP_sim_status[sim_id][input_scenario_group].scenario, value))
        {
            MD2AP_sim_status[sim_id][input_scenario_group].scenario = value;
            MD2AP_ScenarioCheckAndConfig(E_MD2AP_POSTSET);
        }
    }
    else
    {
        //do nothing
    }

    kal_hrt_give_itc_lock(KAL_ITC_ERRC_C2K_AMIF_LOCK);

    AMIF_POSTSET_STATUS_DUMP(sim_id, input_scenario_group, value, *(MD2SPM_DVFS_CON));

    return KAL_TRUE;
}

kal_bool Drv_MDAPInterface_Dump(void)
{
	mdap_interface_info.u32MD2AP_Status = *MD2SPM_DVFS_CON;
	mdap_interface_info.u32AP2MD_Status = *SPM2MD_DVFS_CON;
	return KAL_TRUE;
}

kal_bool Drv_MDAPInterface_Init(void)
{
    /* Initialize the following variables
    **      MD2AP_sim_status:   two dimension array. SIM X Scenario Groups
                                Every initial value of Scenario Group must be no scenario
    ** */
    kal_uint32 loop_index = 0;
    for(loop_index = 0; loop_index<E_MD2AP_SIM_COUNT; loop_index++)
    {
        #undef MDAP_SCENARIO_GROUP_INSTANCE
        #undef MDAP_SCENARIO_INSTANCE
        #undef MDAP_INSTANCE_BEGING
        #undef MDAP_INSTANCE_END
        #undef MDAP_BIT_INSTANCE
        #undef MDAP_ELM_INSTANCE

        #define MDAP_SCENARIO_GROUP_INSTANCE(SCENARIO_GROUP, SCENARIO_GROUP_DEFAULT_SCENARIO,VALUE) \
                MD2AP_sim_status[loop_index][SCENARIO_GROUP].scenario = SCENARIO_GROUP_DEFAULT_SCENARIO;\
                MD2AP_sim_status[loop_index][SCENARIO_GROUP].preSetting= KAL_FALSE;

        #include "drv_mdap_interface_config.h"

    }

	//IRQ_Register_LISR(MDAP_INTERFACE_PCORE_IRQCODE, AP2MD_Pcore_LISR, "MD2AP_LISR_P");
	mdap_interface_info.u32MD2AP_InitStatus = *MD2SPM_DVFS_CON;
	mdap_interface_info.u32AP2MD_InitStatus = *SPM2MD_DVFS_CON;

#if defined(__AMIF_ELM_CFG_LISR__)
        IRQ_Register_LISR(AMIF_SW_INT_IRQ_CODE, mdap_interface_elm_cfg_lisr, "AMIF_ELM_CFG_LISR");
        IRQSensitivity(AMIF_SW_INT_IRQ_CODE, LEVEL_SENSITIVE);
        IRQUnmask(AMIF_SW_INT_IRQ_CODE); 
#endif

	return KAL_TRUE;
}

/* Not called by keep for future sleep time profiling. */
void _Drv_MD2AP_PrintWakeLog()
{
    kal_uint32 current_time = ust_get_current_time_source();
    kal_uint32 duration;
    static kal_uint32 amif_seq = 0;

    duration = (current_time >= MD_DVFS_CON_BackupTime)?(current_time - MD_DVFS_CON_BackupTime):(0xFFFFFFFF - MD_DVFS_CON_BackupTime + current_time);
    L1TRC_AMIF_WAKE_LOG(current_time, duration, amif_seq);
    amif_seq++;
}

#else	//defined(ENABLE_MDAPINTERFACE)

/* declare of AMIF not enable case */
kal_uint32                      MD_DVFS_CON_BackupRestore=0;

kal_bool _Drv_MD2AP_SetScenario(MD2AP_SCENARIO value)
{
	return KAL_TRUE;
}

kal_bool _Drv_MD2AP_ClearScenario(MD2AP_SCENARIO value)
{
	return KAL_TRUE;
}

kal_bool _Drv_MD2AP_StartScenario(MD2AP_SIM_ID sim_id,MD2AP_SCENARIO value)
{
    return KAL_TRUE;
}

kal_bool _Drv_MD2AP_preSetStartScenario(MD2AP_SIM_ID sim_id,MD2AP_SCENARIO value)
{
    return KAL_TRUE;
}

kal_bool _Drv_MD2AP_postSetStartScenario(MD2AP_SIM_ID sim_id,MD2AP_SCENARIO value)
{
    return KAL_TRUE;
}

kal_bool _Drv_MD2AP_SwitchScenario(MD2AP_SIM_ID sim_id,MD2AP_SCENARIO value)
{
    return KAL_TRUE;
}

kal_bool Drv_MDAPInterface_Dump(void)
{
	return KAL_TRUE;
}

kal_bool Drv_MDAPInterface_Init(void)
{
#if defined(__MDAP_INTERFACE_CAMOUFLAGE__)
    *MD2SPM_DVFS_CON = MD2AP_CAMOUFLAGE_VAL;
    MO_Sync();
#endif
	return KAL_TRUE;
}

#endif	//defined(ENABLE_MDAPINTERFACE)

kal_bool Drv_MDAPInterface_Clear(void)
{
    *MD2SPM_DVFS_CON = 0;
    MO_Sync();

    return KAL_TRUE;
}

kal_bool Drv_MDAPInterface_BackupClear(void)
{
    MD_DVFS_CON_BackupRestore = *MD2SPM_DVFS_CON;
    Drv_MDAPInterface_Clear();

    // Reserve for Wakeup Debug
    //MD_DVFS_CON_BackupTime = ust_get_current_time_source();

    return KAL_TRUE;
}

kal_bool Drv_MDAPInterface_Restore(void)
{
    *MD2SPM_DVFS_CON = MD_DVFS_CON_BackupRestore;
    MO_Sync();

    return KAL_TRUE;
}

kal_bool Drv_MDAPInterface_Test(MD2AP_TEST_TYPE_T test_type)
{
    if (MD2AP_TEST_TYPE_DEFAULT == test_type)
    {
        kal_uint32 amif_rand;

        amif_rand = rand() % 16;
        *MD2SPM_DVFS_CON = 1 << amif_rand;
        MO_Sync();
    }

    return KAL_TRUE;
}

