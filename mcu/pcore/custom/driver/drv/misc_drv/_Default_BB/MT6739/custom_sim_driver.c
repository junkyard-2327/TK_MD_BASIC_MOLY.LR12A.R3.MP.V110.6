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

/*****************************************************************************
 *
 * Filename:
 * ---------
 * custom_sim_driver.C
 *
 * Project:
 * --------
 *   Gemini
 *
 * Description:
 * ------------
 *   this file is custom implementation of SIM driver
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#include "drv_comm.h"
#include "reg_base.h"
#include "intrCtrl.h"
#include "multi_icc_custom.h"
#include "kal_public_api.h"
#include "sim_sw_comm.h"
#include "sim_drv_HW_reg_MTK.h"
#include "sim_drv_trc.h"

#ifdef __SIM_HOT_SWAP_SUPPORT__
#include "eint.h"
#endif
#ifdef DRV_SIM_ALL_SOLUTION_BUILT

extern void sim_init_hwCb(void);
extern void DRV_ICC_interface_init(SIM_ICC_APPLICATION application);
extern kal_bool sim_physicalSlotChanged;
extern void sim_dump_eint(sim_HW_cb *hw_cb);

/*following is the template for dual SIM platform, I test it on TF68*/
/****************************************************
	customer and HW SA please fill from here
*****************************************************/
kal_char sim_dbg_custom_str[200];

#if !defined(__SIM_DRV_CO_LOAD_MT6306__)
#if defined(SIM_DRV_SWITCH_MT6306) || defined(SIM_DRV_GEMINI_WITH_MT6306)
#define iccSlotNum 4
#else
#define iccSlotNum 2
#endif

#ifdef __SIM_HOT_SWAP_SUPPORT__
    SIM_ICC_HOT_PLUG iccHotPlugTable[iccSlotNum];
#endif

const SIM_ICC_HW_SW_MAPPING iccMappingTable[iccSlotNum] =
{
    /*
    logical number, application usage from user's view, do it connect to MT6302, owned by which SIM controller, MT6302 chip #, interface # of this MT6302
    */
#if !defined(SIM_DRV_SWITCH_MT6306)
    {0, SIM_ICC_APPLICATION_PHONE1, MTK_SIMIF0, KAL_FALSE, 0, 1},
    {1, SIM_ICC_APPLICATION_PHONE2, MTK_SIMIF1, KAL_FALSE, 0, 1},
#elif defined (SIM_DRV_GEMINI_WITH_MT6306)
    {0, SIM_ICC_APPLICATION_PHONE1, MTK_SIMIF0, SIM_SWITCH_6306, 0, 0}, //SIM_IF0,switch0, port 0
    {1, SIM_ICC_APPLICATION_PHONE2, MTK_SIMIF1, SIM_SWITCH_6306, 1, 0}, //SIM_IF1,switch1, port 0
    {2, SIM_ICC_APPLICATION_PHONE3, MTK_SIMIF0, SIM_SWITCH_6306, 0, 1},
    {3, SIM_ICC_APPLICATION_PHONE4, MTK_SIMIF1, SIM_SWITCH_6306, 1, 1},
#else
    {0, SIM_ICC_APPLICATION_PHONE1, MTK_SIMIF0, SIM_SWITCH_6306, 0, 0},
    {1, SIM_ICC_APPLICATION_PHONE2, MTK_SIMIF0, SIM_SWITCH_6306, 0, 1},
    {2, SIM_ICC_APPLICATION_PHONE3, MTK_SIMIF1, SIM_SWITCH_6306, 1, 0},
    {3, SIM_ICC_APPLICATION_PHONE4, MTK_SIMIF1, SIM_SWITCH_6306, 1, 1},
#endif
};
#else // #if !defined(__SIM_DRV_CO_LOAD_MT6306__)
extern kal_bool sim_connectMT6306;
kal_uint32 iccSlotNum = 4;

#ifdef __SIM_HOT_SWAP_SUPPORT__
    SIM_ICC_HOT_PLUG iccHotPlugTable[4];
#endif

SIM_ICC_HW_SW_MAPPING *iccMappingTable;

SIM_ICC_HW_SW_MAPPING iccMappingTable_2SIM[2] =
{
    {0, SIM_ICC_APPLICATION_PHONE1, MTK_SIMIF0, KAL_FALSE, 0, 1},
    {1, SIM_ICC_APPLICATION_PHONE2, MTK_SIMIF1, KAL_FALSE, 0, 1},
};

SIM_ICC_HW_SW_MAPPING iccMappingTable_4SIM[4] =
{
#if defined (SIM_DRV_GEMINI_WITH_MT6306)
    {0, SIM_ICC_APPLICATION_PHONE1, MTK_SIMIF0, SIM_SWITCH_6306, 0, 0}, //SIM_IF0,switch0, port 0
    {1, SIM_ICC_APPLICATION_PHONE2, MTK_SIMIF1, SIM_SWITCH_6306, 1, 0}, //SIM_IF1,switch1, port 0
    {2, SIM_ICC_APPLICATION_PHONE3, MTK_SIMIF0, SIM_SWITCH_6306, 0, 1},
    {3, SIM_ICC_APPLICATION_PHONE4, MTK_SIMIF1, SIM_SWITCH_6306, 1, 1},
#else
    {0, SIM_ICC_APPLICATION_PHONE1, MTK_SIMIF0, SIM_SWITCH_6306, 0, 0},
    {1, SIM_ICC_APPLICATION_PHONE2, MTK_SIMIF0, SIM_SWITCH_6306, 0, 1},
    {2, SIM_ICC_APPLICATION_PHONE3, MTK_SIMIF1, SIM_SWITCH_6306, 1, 0},
    {3, SIM_ICC_APPLICATION_PHONE4, MTK_SIMIF1, SIM_SWITCH_6306, 1, 1},
#endif
};
#endif

/****************************************************
	end of custom table
*****************************************************/

/****************************************************
	only SW guys familiar with multiple SIM driver can modify following
*****************************************************/

void sim_init_all_cb(void)
{
    kal_uint32 loopIndex;
#if defined(__SIM_DRV_CO_LOAD_MT6306__) && defined(SIM_DRV_SWITCH_MT6306)
    extern void USIM_connect_mt6306(void);
    USIM_connect_mt6306();

    if (sim_connectMT6306 == KAL_FALSE)
    {
        iccSlotNum = 2;
        iccMappingTable = iccMappingTable_2SIM;
    }
    else
    {
        iccSlotNum = 4;
        iccMappingTable = iccMappingTable_4SIM;
    }
#endif
    sim_init_hwCb();

    for(loopIndex = 0; iccSlotNum > loopIndex; loopIndex++)
    {
        DRV_ICC_interface_init(iccMappingTable[loopIndex].application);
    }
#ifdef SIM_DRV_GEMINI_WITH_MT6306
    sim_MT6306_init_for_GEMINI();
#endif
}

kal_uint32 sim_get_logicalNum_from_app(SIM_ICC_APPLICATION application)
{
    kal_uint32 loopIndex, loopMax = iccSlotNum;

    for(loopIndex = 0; loopIndex < loopMax; loopIndex++)
    {
        if(application == iccMappingTable[loopIndex].application)
        {
            if(iccSlotNum <= iccMappingTable[loopIndex].logicalNum)
                ASSERT(0);
            return iccMappingTable[loopIndex].logicalNum;
        }
    }

    return 0xffffffff;
}
kal_uint32 sim_get_app_from_logicalNum(kal_uint32 logicalNum)
{
    kal_uint32 loopIndex, loopMax = iccSlotNum;
    if(iccSlotNum <= logicalNum)
        ASSERT(0);
    for(loopIndex = 0; loopIndex < loopMax; loopIndex++)
    {
        if(logicalNum == iccMappingTable[loopIndex].logicalNum)
        {
            return iccMappingTable[loopIndex].application;
        }
    }

    return 0xffffffff;
}
kal_uint32 sim_get_MT6302_from_logicalNum(kal_uint32 logicalNum)
{
    kal_uint32 loopIndex, loopMax = iccSlotNum;

    if(iccSlotNum <= logicalNum)
        ASSERT(0);

    for(loopIndex = 0; loopIndex < loopMax; loopIndex++)
    {
        if(logicalNum == iccMappingTable[loopIndex].logicalNum)
        {
            if(SIM_SWITCH_6302 == (SIM_ICC_SWITCHCONTROL) iccMappingTable[loopIndex].needMT6302)
                return (iccMappingTable[loopIndex].MT6302ChipNum << 8) | (iccMappingTable[loopIndex].MT6302PortNum);
            else if(SIM_SWITCH_6306 == (SIM_ICC_SWITCHCONTROL) iccMappingTable[loopIndex].needMT6302)
                return (iccMappingTable[loopIndex].MT6302ChipNum << 8) | (iccMappingTable[loopIndex].MT6302PortNum) | (SIM_SWITCH_6306 << 16);
            else if(SIM_SWITCH_6314 == (SIM_ICC_SWITCHCONTROL) iccMappingTable[loopIndex].needMT6302)
                return(iccMappingTable[loopIndex].MT6302ChipNum << 8) | (iccMappingTable[loopIndex].MT6302PortNum) | (SIM_SWITCH_6314 << 16);
            else
                return SIM_ICC_MT6302_NONE;
        }
    }

    /*there is no this logical number*/
    ASSERT(0);
    return 0;
}

kal_uint32 sim_get_hwCtrl_from_logicalNum(kal_uint32 logicalNum)
{
    kal_uint32 loopIndex, loopMax = iccSlotNum;

    if(iccSlotNum <= logicalNum)
        ASSERT(0);

    for(loopIndex = 0; loopIndex < loopMax; loopIndex++)
    {
        if(logicalNum == iccMappingTable[loopIndex].logicalNum)
        {
            return iccMappingTable[loopIndex].hwCtrl;
        }
    }

    /*there is no this logical number*/
    ASSERT(0);
    return 0;
}

kal_uint32 sim_get_MT6302PeerInterface(kal_uint8 chipNum, kal_uint32 portNum)
{
    kal_uint32 loopIndex, loopMax = iccSlotNum;

    for(loopIndex = 0; loopIndex < loopMax; loopIndex++)
    {
        if(chipNum == iccMappingTable[loopIndex].MT6302ChipNum && portNum == iccMappingTable[loopIndex].MT6302PortNum)
        {
            if(iccSlotNum <= iccMappingTable[loopIndex].logicalNum)
                ASSERT(0);
            return iccMappingTable[loopIndex].logicalNum;
        }
    }

    /*there is no this logical number*/
    return SIM_ICC_MT6302_NONE;
}

#if defined(__MTK_TARGET__)
kal_uint32 sim_get_ToalInterfaceCount()
{
    return iccSlotNum;
}
#endif

kal_uint32 get_CAS_icc_logicalNum()
{
    kal_uint32 loopIndex, loopMax = iccSlotNum;

    for(loopIndex = 0; loopIndex < loopMax; loopIndex++)
    {
        if(SIM_ICC_APPLICATION_CMMB_SMD == iccMappingTable[loopIndex].application)
        {
            if(iccSlotNum <= iccMappingTable[loopIndex].logicalNum)
                ASSERT(0);
            return iccMappingTable[loopIndex].logicalNum;
        }
    }

    /*there is no this logical number*/
    ASSERT(0);
    return 0;
}

kal_uint32 sim_custom_task_2_driver(kal_uint32 taskInterface)
{
    return taskInterface;
}

#ifdef __SIM_HOT_SWAP_SUPPORT__
void sim_reg_hot_plug_cb(SIM_ICC_APPLICATION application,
                         SIM_HOT_PLUG_CALLBACK hotPlugInCb,
                         SIM_HOT_PLUG_CALLBACK hotPlugOutCb)
{
    kal_uint32 loopIndex;

    for(loopIndex = 0; loopIndex < iccSlotNum; loopIndex++)
    {
        if(application == iccMappingTable[loopIndex].application)
        {
            iccHotPlugTable[loopIndex].application = application;
            iccHotPlugTable[loopIndex].plugInCb = hotPlugInCb;
            iccHotPlugTable[loopIndex].plugOutcb = hotPlugOutCb;
            break;
        }
    }
}
#if defined(__SIM_HOT_SWAP_POLL_TIMER__)
extern void sim_hot_swap_poll_timer_rollback(kal_uint32 which_sim);
void sim_rollback_timer(SIM_ICC_APPLICATION app)
{
    if (app <= SIM_ICC_APPLICATION_PHONE2 && app >= SIM_ICC_APPLICATION_PHONE1)
    {
        kal_uint32 simInterface = sim_get_logicalNum_from_app(app);
        sim_HW_cb * hw_cb = (sim_HW_cb *)sim_get_hwCb(simInterface);
        if (hw_cb->PollTimerStart == KAL_TRUE)
        {
            hw_cb->PollTimerStart = KAL_FALSE;
            sim_hot_swap_poll_timer_rollback(app);
            kal_sprintf(sim_dbg_custom_str, "\r\n[SIM_CUS_DRV:%d]: rollback when insert", simInterface);
            DRV_ICC_print_str(sim_dbg_custom_str);
        }
        hw_cb->PollTimerPluggedOut = KAL_FALSE;
        hw_cb->PollTimerEnd = KAL_TRUE;
    }
}
#endif
void sim_get_card_status(kal_uint32 logicalNum, kal_bool *isRemoved)
{
    kal_uint32 loopIndex;

    for(loopIndex = 0; loopIndex < iccSlotNum; loopIndex++)
    {
        if(logicalNum == iccHotPlugTable[loopIndex].logicalNum)
        {
            *isRemoved = iccHotPlugTable[loopIndex].removed;
            break;
        }
    }
}

void sim_hot_plug_handle(SIM_ICC_HOT_PLUG *hotPlugCnf, kal_bool removed)
{
    SIM_ICC_APPLICATION app;
    //ASSERT(hotPlugCnf->removed != removed);
    hotPlugCnf->removed = removed;

    if (sim_physicalSlotChanged == KAL_TRUE) 
        app = 1 - hotPlugCnf->application;
    else
        app = hotPlugCnf->application;
    
    if (removed)
    {
        if (hotPlugCnf->plugOutcb != NULL)
        {
#if defined(__SIM_HOT_SWAP_POLL_TIMER__)
            SIM_PlugEvent_Poll_Timer_Cb(app);
#else
            hotPlugCnf->plugOutcb(app);
            SIM_PlugEvent_Cb(app);
#endif
        }
    }
    else
    {
        if (hotPlugCnf->plugInCb!= NULL)
        {
            hotPlugCnf->plugInCb(app);
#if defined(__SIM_HOT_SWAP_POLL_TIMER__)
            sim_rollback_timer(app);
#endif
        }
    }
}

void sim_hot_plug_eint_cb(SIM_ICC_APPLICATION app)
{
    kal_int32 idx;
    kal_bool removed;

    for (idx = 0; idx < iccSlotNum; idx++)
    {
        if(app == iccHotPlugTable[idx].application)
        break;
    }

    ASSERT(idx != iccSlotNum);

    removed = (iccHotPlugTable[idx].polarity == iccHotPlugTable[idx].remove_polarity);
    
    iccHotPlugTable[idx].polarity = !iccHotPlugTable[idx].polarity;
    EINT_Set_HW_Debounce_Enable(iccHotPlugTable[idx].eintNo, EINT_DISABLE);
    EINT_Set_Polarity(iccHotPlugTable[idx].eintNo, iccHotPlugTable[idx].polarity);
    EINT_Set_HW_Debounce_Enable(iccHotPlugTable[idx].eintNo, EINT_ENABLE);

    sim_hot_plug_handle(&iccHotPlugTable[idx], removed);
#if defined (__DUAL_SIM_HOT_SWAP_CO_DECK_SUPPORT__)
    sim_hot_plug_handle(&iccHotPlugTable[1 - idx], removed);  // 1-idx must be legal, or ASSERT will happen in sim_reg_hot_plug_eint
#endif

    if (removed == KAL_TRUE)
    {
        kal_brief_trace(TRACE_INFO, LOG_SIM_DRV_REMOVE_SIM, __LINE__,
            idx,
            app,
            iccHotPlugTable[idx].polarity,
            iccHotPlugTable[idx].removed,
            iccHotPlugTable[((idx <= SIM_ICC_APPLICATION_PHONE2) ? (1 - idx) : idx)].polarity,
            iccHotPlugTable[((idx <= SIM_ICC_APPLICATION_PHONE2) ? (1 - idx) : idx)].removed,
            drv_get_current_time());
    }
    else
    {
        kal_brief_trace(TRACE_INFO, LOG_SIM_DRV_INSERT_SIM, __LINE__,
            idx,
            app,
            iccHotPlugTable[idx].polarity,
            iccHotPlugTable[idx].removed,
            iccHotPlugTable[((idx <= SIM_ICC_APPLICATION_PHONE2) ? (1 - idx) : idx)].polarity,
            iccHotPlugTable[((idx <= SIM_ICC_APPLICATION_PHONE2) ? (1 - idx) : idx)].removed,
            drv_get_current_time());
    }

    sim_dump_eint(sim_get_hwCb(sim_get_logicalNum_from_app(app)));
}

void sim1_hot_plug_eint_cb(void)
{
    sim_hot_plug_eint_cb(SIM_ICC_APPLICATION_PHONE1);
}

void sim2_hot_plug_eint_cb(void)
{
    sim_hot_plug_eint_cb(SIM_ICC_APPLICATION_PHONE2);
}

#if defined(SIM_DRV_SWITCH_MT6306)
void sim3_hot_plug_eint_cb(void)
{
    sim_hot_plug_eint_cb(SIM_ICC_APPLICATION_PHONE3);
}
#endif

void sim_reg_hot_plug_eint(SIM_ICC_APPLICATION application,
                           kal_uint32 eintNo,
                           kal_uint32 debounceTime,
                           kal_uint32 polarity,
                           kal_uint32 sensitivity,
                           kal_uint32 socketType)
{
    kal_uint32 loopIndex;

    for(loopIndex = 0; loopIndex < iccSlotNum; loopIndex++)
    {
        if(application == iccMappingTable[loopIndex].application)
        {
            if(iccHotPlugTable[loopIndex].registed == KAL_TRUE)
            {
                kal_sprintf(sim_dbg_custom_str, "[SIM_DRV]sim_registed\n\r");
                DRV_ICC_print_str(sim_dbg_custom_str);
                return;
            }
            else
            {
                iccHotPlugTable[loopIndex].logicalNum = iccMappingTable[loopIndex].logicalNum;
                iccHotPlugTable[loopIndex].application = iccMappingTable[loopIndex].application;
                iccHotPlugTable[loopIndex].eintNo = eintNo;
                iccHotPlugTable[loopIndex].debounceTime = debounceTime;
                iccHotPlugTable[loopIndex].polarity = (kal_bool)polarity;
		iccHotPlugTable[loopIndex].remove_polarity = (kal_bool)polarity;
                iccHotPlugTable[loopIndex].sensitivity = sensitivity;
                iccHotPlugTable[loopIndex].socketType = socketType;
                iccHotPlugTable[loopIndex].registed = KAL_TRUE;
#if defined (__DUAL_SIM_HOT_SWAP_CO_DECK_SUPPORT__)
                ASSERT(1-loopIndex >= 0);   // To make it simple
                iccHotPlugTable[1 - loopIndex].logicalNum = iccMappingTable[1 - loopIndex].logicalNum;
                iccHotPlugTable[1 - loopIndex].application = iccMappingTable[1 - loopIndex].application;
                iccHotPlugTable[1 - loopIndex].eintNo = eintNo;
                iccHotPlugTable[1 - loopIndex].debounceTime = debounceTime;
                iccHotPlugTable[1 - loopIndex].polarity = (kal_bool)polarity;
		iccHotPlugTable[1 - loopIndex].remove_polarity = (kal_bool)polarity;
                iccHotPlugTable[1 - loopIndex].sensitivity = sensitivity;
                iccHotPlugTable[1 - loopIndex].socketType = socketType;
                iccHotPlugTable[1 - loopIndex].registed = KAL_TRUE;
#endif
                break;
            }
        }
    }

    // need to set HW debounce & sensitivity before registration
    EINT_Set_HW_Debounce_Enable(eintNo, EINT_DISABLE);
    EINT_SW_Debounce_Modify(eintNo, 0); // unit: 10 ms
    EINT_Set_HW_Debounce(eintNo, debounceTime * 10); // unit: ms
    EINT_Set_Sensitivity(eintNo, sensitivity);

    if(application == SIM_ICC_APPLICATION_PHONE1)
    {
        EINT_Registration(eintNo, KAL_TRUE, (kal_bool)polarity, sim1_hot_plug_eint_cb, KAL_TRUE);
    }
    else if(application == SIM_ICC_APPLICATION_PHONE2)
    {
        EINT_Registration(eintNo, KAL_TRUE, (kal_bool)polarity, sim2_hot_plug_eint_cb, KAL_TRUE);
    }
#if defined(SIM_DRV_SWITCH_MT6306)
    else if(application == SIM_ICC_APPLICATION_PHONE3)
    {
        EINT_Registration(eintNo, KAL_TRUE, (kal_bool)polarity, sim3_hot_plug_eint_cb, KAL_TRUE);
    }
#endif

}
#endif

void sim_custom_setting_before_turning_on_vsim(kal_uint32 hwInterfaceNo)
{
    return;
}

void sim_custom_setting_after_turning_off_vsim(kal_uint32 hwInterfaceNo)
{
    return;
}

void sim_custom_setting_before_resetting_sim(kal_uint32 hwInterfaceNo)
{
    return;
}
#endif
