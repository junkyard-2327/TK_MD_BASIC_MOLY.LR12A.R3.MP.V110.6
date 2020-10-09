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
 * switchControl_al.c(originally named sim_ctrl_al.c)
 *
 * Project:
 * --------
 *   Gemini
 *
 * Description:
 * ------------
 *   this file to handle original SIM task APIs on multiple SIM interface
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
 *
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
 *
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
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef DRV_SIM_OFF
#include  	"drv_comm.h"
#include "sim_drv_trc.h"
#ifdef __SIM_DRV_MULTI_DRV_ARCH__
#include 	"reg_base.h"
#include 	"intrCtrl.h"
#include    "sim_al.h"
#include    "sim_hw_mtk.h"
#include    "sim_sw_comm.h"
#include 	"sync_data.h"

#include    "multi_icc_custom.h"
//#include		"gpt_sw.h"
//#include		"gpio_sw.h"
#include		"drv_hisr.h"

#ifdef MT6318
    #include 	"pmic6318_sw.h"
#endif   /*MT6318*/

#if !defined(DRV_SIM_LTE_SERIES)
    #include	"usim_MT6302.h"
#endif

#if defined(MT6223P)
    #include "pmu_sw.h"
#endif

#include "sim_ctrl_al.h"

#ifdef DCL_SIM_INTERFACE
    #include "dcl.h"
#endif

#include "kal_trace.h"

#include "multi_icc_custom.h"
#if defined(__SIM_HOT_SWAP_SUPPORT__)
    #include "eint.h"
    #if defined(__SIM_HOT_SWAP_POLL_TIMER__)
        #include "sim_public_enum.h"
    #endif
#endif // #if defined(__SIM_HOT_SWAP_SUPPORT__)
#if defined(__SIM_HOT_SWAP_SUPPORT__) || defined(__LOCK_VSIM__)
    #include "ccci_rpc_if.h"
#endif // #if defined(__SIM_HOT_SWAP_SUPPORT__)

#if defined(LPWR_SLIM)
    #include "sleepdrv_interface.h"
    #include "sim_drv_SW_API.h"
#endif

//#ifdef DRV_MULTIPLE_SIM //DRV_2_SIM_CONTROLLER
#if (defined(DRV_SIM_ALL_SOLUTION_BUILT) || defined(DRV_MULTIPLE_SIM))


extern sim_ctrlDriver sim_ctrlDriver_MT6302;
extern sim_ctrlDriver sim_ctrlDriver_MTK;
extern sim_ctrlDriver sim_ctrlDriver_MT6306;

#if defined(__SIM_HOT_SWAP_SUPPORT__)
    extern SIM_ICC_HOT_PLUG iccHotPlugTable[];
    extern const SIM_ICC_HW_SW_MAPPING iccMappingTable[];
    #if defined(SIM_DRV_SWITCH_MT6306)
        #define iccSlotNum 4
    #else
        #define iccSlotNum 2
    #endif
    #if defined(__SIM_HOT_SWAP_POLL_TIMER__)
        extern void sim_hot_swap_poll_timer_rollback(kal_uint32 which_sim);
		extern void sim_hot_swap_poll_timer_rollback_codeck_peer(kal_uint32 which_sim);
    #endif
#endif
//static usim_dcb_struct usim_cb[DRV_SIM_MAX_LOGICAL_INTERFACE];

kal_uint32	hwCbArray[DRV_SIM_MAX_LOGICAL_INTERFACE]; //from logical number to sim_HW_cb

/*default driver used in pre-defined macro, customer can call sim_hookCtrlDriver to relpace what they want*/
#if defined(DRV_2_SIM_MT6302)
sim_ctrlDriver *sim_driverTable[DRV_SIM_MAX_LOGICAL_INTERFACE] = {&sim_ctrlDriver_MT6302, &sim_ctrlDriver_MT6302};
#elif defined(SIM_DRV_SWITCH_MT6306)
sim_ctrlDriver *sim_driverTable[DRV_SIM_MAX_LOGICAL_INTERFACE] = {&sim_ctrlDriver_MT6306, &sim_ctrlDriver_MT6306};
#elif defined(DRV_2_SIM_CONTROLLER)
sim_ctrlDriver *sim_driverTable[DRV_SIM_MAX_LOGICAL_INTERFACE] = {&sim_ctrlDriver_MTK, &sim_ctrlDriver_MTK};
#else
sim_ctrlDriver *sim_driverTable[DRV_SIM_MAX_LOGICAL_INTERFACE] = {&sim_ctrlDriver_MT6302, &sim_ctrlDriver_MT6302};
#endif

kal_bool sim_physicalSlotChanged;
#if defined(__SIM_DRV_CO_LOAD_MT6306__)
    kal_bool sim_connectMT6306 = KAL_FALSE;
#endif

extern kal_uint8 is_HW_VERIFICATION_enabled(void);
//extern kal_taskid kal_get_current_thread_ID(void);

#define	SIM_AL_ACTION_RESET		0x000F0001
#define	SIM_AL_ACTION_POWOFF		0x000F0002
#define	SIM_AL_ACTION_COMMAND	0x000F0003
#define	SIM_AL_ACTION_EOC			0x000F0004


kal_bool sim_switchPhysicalSlotMapping(kal_bool inverse)
{
    kal_uint32 maskValue;

    maskValue = SaveAndSetIRQMask();
    sim_physicalSlotChanged = inverse;
    RestoreIRQMask(maskValue);

    if (KAL_FALSE == maskValue)
    {
        DRV_ICC_print_str("SIM slots mapping is default mapping now\n\r");
    }
    else
    {
        DRV_ICC_print_str("SIM slots mapping is inverse mapping now\n\r");
    }

    return sim_physicalSlotChanged;
}

/*this is just adaption layer, protections, project dependent work arounds should not be implemented here*/
void sim_hookCtrlDriver(kal_uint32 simInterface, sim_ctrlDriver *driver)
{

    if (KAL_TRUE == sim_physicalSlotChanged)
        simInterface = DRV_SIM_MAX_LOGICAL_INTERFACE - simInterface;


    if (0 != simInterface)
        ASSERT(0);
    sim_driverTable[simInterface] = driver;
}

extern const unsigned char USIM1_EINT_NO;
extern const unsigned char USIM2_EINT_NO;
extern kal_uint32 eint_src_map[];
#if (defined(DRV_SIM_6292_SERIES) || defined(DRV_SIM_6293_SERIES) || defined(DRV_SIM_6295_SERIES)) && defined(SIM_DRV_SWITCH_MT6306)
    extern volatile kal_spinlockid spinlockid_mt6306_race_protect[];
#endif
#if defined (__SIM_HOT_SWAP_SUPPORT__) && defined (__DUAL_SIM_HOT_SWAP_CO_DECK_SUPPORT__)
    kal_bool eint_is_registered = KAL_FALSE;
#endif
#if defined (__SIM_HOT_SWAP_SUPPORT__) && defined(__SIM_HOT_SWAP_POLL_TIMER__)
    volatile kal_spinlockid spinlockid_poll_timer = 0;
#endif
usim_status_enum L1sim_Reset_All(sim_power_enum ExpectVolt, sim_power_enum *ResultVolt, kal_bool warm, SIM_ICC_APPLICATION application)
{
    sim_ctrlDriver *simDriver;
    usim_status_enum status;
    kal_uint32 simInterface;
    sim_HW_cb *hw_cb;

#ifdef __SIM_HOT_SWAP_SUPPORT__
    kal_int32 ipcStatus = 0;
#if !defined(MT6290) && !defined(TK_6291)
#if defined (__MD1__) || defined (__SIM_HOT_PLUG_SINGLE_MD_QUERY_STR__)
    kal_uint8 *query, querystring[25] = "MD1_SIM1_HOT_PLUG_EINT";
#ifdef	__SIM_GET_CARD_DETECT_STATUS_SUPPORT__
	kal_uint8 *sim_detect_pin_query, sim_detect_pin_querystring[20] = "GPIO_SIM1_HOT_PLUG";
	sim_detect_pin_query = &sim_detect_pin_querystring[0];
#endif
#elif defined (__MD2__)
    kal_uint8 *query, querystring[25] = "MD2_SIM1_HOT_PLUG_EINT";
#else
    kal_uint8 *query, querystring[20] = "SIM1_HOT_PLUG_EINT";
#endif
#else // #if !defined(MT6290) && !defined(TK_6291)
    kal_uint8 *query, querystring[20] = "USIM1_EINT_NO";
#endif // #if !defined(MT6290) && !defined(TK_6291)
    SIM_ICC_HOT_PLUG iccHotPlug = {KAL_FALSE, KAL_FALSE, KAL_FALSE, KAL_FALSE, 0, 0, 0, 0, 0, 0, NULL, NULL};
    query = &querystring[0];
#endif // __SIM_HOT_SWAP_SUPPORT__
#ifdef SIM_4_CARD_SMT_TEST
    SIM_ICC_APPLICATION anotherApplication;
    kal_uint32 anotherSimInterface;
    sim_power_enum anotherResultVolt;
    sim_ctrlDriver *anotherSimDriver;
    usim_status_enum anotherStatus;
#endif

    simInterface = sim_get_logicalNum_from_app(application);
#ifdef SIM_4_CARD_SMT_TEST
    if (SIM_ICC_APPLICATION_PHONE1 == application)
        anotherApplication = SIM_ICC_APPLICATION_PHONE3;
    else if (SIM_ICC_APPLICATION_PHONE2 == application)
        anotherApplication = SIM_ICC_APPLICATION_PHONE4;
    else
        ASSERT(0);
    anotherSimInterface = sim_get_logicalNum_from_app(anotherApplication);
#endif

    if (DRV_SIM_MAX_LOGICAL_INTERFACE <= simInterface)
        ASSERT(0);
#ifdef SIM_4_CARD_SMT_TEST
    if (DRV_SIM_MAX_LOGICAL_INTERFACE <= anotherSimInterface)
        ASSERT(0);
#endif

    if (KAL_TRUE == sim_physicalSlotChanged)
    {
        DRV_ICC_print_str("sim interface inversed!!\n\r");
        simInterface = 1 - simInterface;
        application = 1 - application; // need to switch to get correct hwcb and SIMIF number
    }

    if (0x0 == ResultVolt)
        ASSERT(0);

    hw_cb = (sim_HW_cb *)(hwCbArray[simInterface]);
    DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC21, ExpectVolt, warm, application, sim_physicalSlotChanged, 0);

#ifdef __CUSTOMER_HW_VERIFICATION__
    simInterface = 0;
    /*find out the hooked function table*/
    simDriver = sim_driverTable[simInterface];
    ASSERT(0 != simDriver);
    sim_MT6302_addMsg(SIM_MT6302_ACTION_RESET, simInterface, 0, 0);

    USIM_low_power_related_setting(hw_cb, USIM_LP_DISABLE | USIM_LP_MASK_NORMAL_VSIM_CURRENT | USIM_LP_MASK_FORCE_ON_26M | USIM_LP_MASK_START_SCLK);

    status = simDriver->reset(ExpectVolt, ResultVolt, warm, (sim_HW_cb *)(hwCbArray[simInterface]));

    if (status == USIM_NO_ERROR)
        USIM_low_power_related_setting(hw_cb, USIM_LP_ENABLE | USIM_LP_MASK_REDUCE_VSIM_CURRENT);
    else
    {
        USIM_low_power_related_setting(hw_cb, USIM_LP_ENABLE | USIM_LP_MASK_NORMAL_26M | USIM_LP_MASK_REDUCE_VSIM_CURRENT);
#if defined(__ABNORMAL_CARD__)
        usim_set_sim_io_special_mode(simInterface, KAL_FALSE);
#endif // #if defined(__ABNORMAL_CARD__)
#if defined(SIM_DRV_4_33MHZ_SCLK)
        hw_cb->canUse_4_33_SCLK = KAL_FALSE;
#endif
    }

    sim_MT6302_addMsg(SIM_MT6302_ACTION_EOC, simInterface, drv_get_current_time(), 0);
    simDriver->EOC((sim_HW_cb *)(hwCbArray[simInterface]));

    simInterface = 1;
    /*find out the hooked function table*/
    simDriver = sim_driverTable[simInterface];
    ASSERT(0 != simDriver);
    sim_MT6302_addMsg(SIM_MT6302_ACTION_RESET, simInterface, 0, 0);
    /*when we release single SIM MMI, we only release SIM1 MMI, cusrtomer won't get SIM2 MMI, SIM1 is what MMI need*/
    //status = simDriver->reset(ExpectVolt, ResultVolt, warm, simInterface);
    sim_MT6302_addMsg(SIM_MT6302_ACTION_EOC, simInterface, drv_get_current_time(), 0);
    simDriver->EOC(simInterface);
#else
    /*find out the hooked function table*/
    simDriver = sim_driverTable[simInterface];
    ASSERT(0 != simDriver);
    simDriver->addMessage(SIM_AL_ACTION_RESET, simInterface, (kal_uint32)kal_get_current_thread_ID(), 0);

    USIM_low_power_related_setting(hw_cb, USIM_LP_DISABLE | USIM_LP_MASK_NORMAL_VSIM_CURRENT | USIM_LP_MASK_FORCE_ON_26M | USIM_LP_MASK_START_SCLK);

#if defined(__LOCK_VSIM__)
    sim_nfc_communication sim_nfc_msg, nfc_sim_msg;
    sim_nfc_msg.lock_vsim = (sim_get_hwCtrl_from_logicalNum(simInterface) << 4) | 1;
    nfc_sim_msg.lock_vsim = 0;
    DRV_ICC_print_str("vsim lock!!\n\r");
    IPC_RPC_General_Query(IPC_RPC_USIM2NFC_OP, (void *) &sim_nfc_msg, sizeof(sim_nfc_msg), (void *) &nfc_sim_msg, sizeof(nfc_sim_msg));
#endif // #if defined(__LOCK_VSIM__)

    sim_custom_setting_before_resetting_sim(simInterface);
    status = simDriver->reset(ExpectVolt, ResultVolt, warm, (sim_HW_cb *)(hwCbArray[simInterface]));

#if defined(__LOCK_VSIM__)
    sim_nfc_msg.lock_vsim = (sim_get_hwCtrl_from_logicalNum(simInterface) << 4) | 0;
    nfc_sim_msg.lock_vsim = 0;
    IPC_RPC_General_Query(IPC_RPC_USIM2NFC_OP, (void *) &sim_nfc_msg, sizeof(sim_nfc_msg), (void *) &nfc_sim_msg, sizeof(nfc_sim_msg));
    DRV_ICC_print_str("vsim unlock!!\n\r");
#endif // #if defined(__LOCK_VSIM__)

    if (status == USIM_NO_ERROR)
        USIM_low_power_related_setting(hw_cb, USIM_LP_ENABLE | USIM_LP_MASK_REDUCE_VSIM_CURRENT);
    else
    {
        USIM_low_power_related_setting(hw_cb, USIM_LP_ENABLE | USIM_LP_MASK_NORMAL_26M | USIM_LP_MASK_REDUCE_VSIM_CURRENT);
#if defined(__ABNORMAL_CARD__)
        usim_set_sim_io_special_mode(simInterface, KAL_FALSE);
#endif // #if defined(__ABNORMAL_CARD__)
    }
#ifdef __SIM_HOT_SWAP_SUPPORT__
#if defined(SIM_DRV_SWITCH_MT6306) && defined(__SIM_DRV_CO_LOAD_MT6306__) && (defined(MT6763))
    // does not support
    extern kal_bool MT6306_disable_SIM_HOT_SWAP_feature(void);
    if (sim_connectMT6306 == KAL_TRUE && MT6306_disable_SIM_HOT_SWAP_feature() == KAL_TRUE)
    {
        DRV_ICC_print_str("does not support SIM HOT SWAP feature\n\r");
        goto LEAVE_REG_EINT;
    }
#endif
#if defined(__DUAL_SIM_HOT_SWAP_CO_DECK_SUPPORT__)
    if (eint_is_registered == KAL_TRUE)
    {
        DRV_ICC_print_str("[SIM_DRV][CO_DECK]EINT is registered\n\r");
        goto HAVE_REG_EINT;
    }
    else
    {
        eint_is_registered = KAL_TRUE;
#if defined (__MD1__) || defined (__MD2__) || defined (__SIM_HOT_PLUG_SINGLE_MD_QUERY_STR__)
        ipcStatus = IPC_RPC_EINT_GetAttribute(query, 23, SIM_HOT_PLUG_EINT_NUMBER, (void *)&iccHotPlug.eintNo, 4);
#else
        ipcStatus = IPC_RPC_EINT_GetAttribute(query, 19, SIM_HOT_PLUG_EINT_NUMBER, (void *)&iccHotPlug.eintNo, 4);
#endif
        if (ipcStatus < 0)
        {
            hw_cb->no_md_eint_settings = KAL_TRUE;
            kal_sprintf(hw_cb->dbgStr, "get eint no fail %d %d\n\r", ipcStatus, iccHotPlug.eintNo);
            DRV_ICC_print_str(hw_cb->dbgStr);
#endif
            // we should always register eint. If we bootup without plugin simcard, status will display NO_CARD. we will never get insert event because eint is not registered
#if !defined(MT6290) && !defined(TK_6291)
#if defined (__MD1__) || defined (__SIM_HOT_PLUG_SINGLE_MD_QUERY_STR__)
            if (application == SIM_ICC_APPLICATION_PHONE2)
                query = (kal_uint8 *)"MD1_SIM2_HOT_PLUG_EINT";
            else if (application == SIM_ICC_APPLICATION_PHONE3)
                query = (kal_uint8 *)"MD1_SIM3_HOT_PLUG_EINT";
#elif defined (__MD2__)
            if (application == SIM_ICC_APPLICATION_PHONE2)
                query = (kal_uint8 *)"MD2_SIM2_HOT_PLUG_EINT";
#else
            if (application == SIM_ICC_APPLICATION_PHONE2)
                query = (kal_uint8 *)"SIM2_HOT_PLUG_EINT";
#endif
#else // !defined(MT6290)
            if (application == SIM_ICC_APPLICATION_PHONE2)
                query = (kal_uint8 *)"USIM2_EINT_NO";
#endif // !defined(MT6290)
#if defined (__DUAL_SIM_HOT_SWAP_CO_DECK_SUPPORT__)
        }
    }
#endif

#if !defined(MT6290) && !defined(TK_6291)
    kal_uint32 i = 0;
    for (i = 0; i < iccSlotNum; i++)
    {
        if (application == iccHotPlugTable[i].application)
        {
            if (iccHotPlugTable[i].registed == KAL_TRUE)
            {
                kal_sprintf(hw_cb->dbgStr, "[registed]EINT: %d, %d %d %d %d %d %d\n\r",
                            application,
                            iccHotPlugTable[i].eintNo,
                            iccHotPlugTable[i].debounceTime,
                            iccHotPlugTable[i].polarity,
                            iccHotPlugTable[i].sensitivity,
                            iccHotPlugTable[i].socketType,
                            eint_src_map[iccHotPlug.eintNo]);
                DRV_ICC_print_str(hw_cb->dbgStr);
                goto HAVE_REG_EINT;
            }
        }
    }

    if (hw_cb->no_md_eint_settings == KAL_TRUE)
    {
        kal_sprintf(hw_cb->dbgStr, "no md eint settings in DWS, LEAVE_REG_EINT");
        DRV_ICC_print_str(hw_cb->dbgStr);
        goto LEAVE_REG_EINT;
    }

    // if any rpc error happens, we should leave register eint
#if defined (__MD1__) || defined (__MD2__) || defined (__SIM_HOT_PLUG_SINGLE_MD_QUERY_STR__)
    ipcStatus = IPC_RPC_EINT_GetAttribute(query, 23, SIM_HOT_PLUG_EINT_NUMBER, (void *)&iccHotPlug.eintNo, 4);
#else
    ipcStatus = IPC_RPC_EINT_GetAttribute(query, 19, SIM_HOT_PLUG_EINT_NUMBER, (void *)&iccHotPlug.eintNo, 4);
#endif
    if (ipcStatus < 0)
    {
        hw_cb->no_md_eint_settings = KAL_TRUE;
        kal_sprintf(hw_cb->dbgStr, "get eint no fail %d %d, please request HW to check ALPS DWS setting.\n\r", ipcStatus, iccHotPlug.eintNo);
        DRV_ICC_print_str(hw_cb->dbgStr);
        goto LEAVE_REG_EINT;
    }

#if defined (__MD1__) || defined (__MD2__) || defined (__SIM_HOT_PLUG_SINGLE_MD_QUERY_STR__)
    ipcStatus = IPC_RPC_EINT_GetAttribute(query, 23, SIM_HOT_PLUG_EINT_DEBOUNCETIME, (void *)&iccHotPlug.debounceTime, 4);
#else
    ipcStatus = IPC_RPC_EINT_GetAttribute(query, 19, SIM_HOT_PLUG_EINT_DEBOUNCETIME, (void *)&iccHotPlug.debounceTime, 4);
#endif
    if (ipcStatus < 0)
    {
        hw_cb->no_md_eint_settings = KAL_TRUE;
        kal_sprintf(hw_cb->dbgStr, "get debounce fail %d %d, please request HW to check ALPS DWS setting.\n\r", ipcStatus, iccHotPlug.debounceTime);
        DRV_ICC_print_str(hw_cb->dbgStr);
        goto LEAVE_REG_EINT;
    }

#if defined (__MD1__) || defined (__MD2__) || defined (__SIM_HOT_PLUG_SINGLE_MD_QUERY_STR__)
    ipcStatus = IPC_RPC_EINT_GetAttribute(query, 23, SIM_HOT_PLUG_EINT_POLARITY, (void *)&iccHotPlug.polarity, 4);
#else
    ipcStatus = IPC_RPC_EINT_GetAttribute(query, 19, SIM_HOT_PLUG_EINT_POLARITY, (void *)&iccHotPlug.polarity, 4);
#endif
    if (ipcStatus < 0)
    {
        hw_cb->no_md_eint_settings = KAL_TRUE;
        kal_sprintf(hw_cb->dbgStr, "get polarity fail %d %d, please request HW to check ALPS DWS setting.\n\r", ipcStatus, iccHotPlug.polarity);
        DRV_ICC_print_str(hw_cb->dbgStr);
        goto LEAVE_REG_EINT;
    }

#if defined (__MD1__) || defined (__MD2__) || defined (__SIM_HOT_PLUG_SINGLE_MD_QUERY_STR__)
    ipcStatus = IPC_RPC_EINT_GetAttribute(query, 23, SIM_HOT_PLUG_EINT_SENSITIVITY, (void *)&iccHotPlug.sensitivity, 4);
#else
    ipcStatus = IPC_RPC_EINT_GetAttribute(query, 19, SIM_HOT_PLUG_EINT_SENSITIVITY, (void *)&iccHotPlug.sensitivity, 4);
#endif
    if (ipcStatus < 0)
    {
        hw_cb->no_md_eint_settings = KAL_TRUE;
        kal_sprintf(hw_cb->dbgStr, "get sensitivity fail %d %d, please request HW to check ALPS DWS setting.\n\r", ipcStatus, iccHotPlug.sensitivity);
        DRV_ICC_print_str(hw_cb->dbgStr);
        goto LEAVE_REG_EINT;
    }

#if defined (__MD1__) || defined (__MD2__) || defined (__SIM_HOT_PLUG_SINGLE_MD_QUERY_STR__)
    ipcStatus = IPC_RPC_EINT_GetAttribute(query, 23, SIM_HOT_PLUG_EINT_SOCKETTYPE, (void *)&iccHotPlug.socketType, 4);
#else
    ipcStatus = IPC_RPC_EINT_GetAttribute(query, 19, SIM_HOT_PLUG_EINT_SOCKETTYPE, (void *)&iccHotPlug.socketType, 4);
#endif
    if (ipcStatus < 0)
    {
        hw_cb->no_md_eint_settings = KAL_TRUE;
        kal_sprintf(hw_cb->dbgStr, "get socket fail %d %d, please request HW to check ALPS DWS setting.\n\r", ipcStatus, iccHotPlug.socketType);
        DRV_ICC_print_str(hw_cb->dbgStr);
        goto LEAVE_REG_EINT;
    }
	
#ifdef	__SIM_GET_CARD_DETECT_STATUS_SUPPORT__	

#if !defined(__DUAL_SIM_HOT_SWAP_CO_DECK_SUPPORT__)
	if (application == SIM_ICC_APPLICATION_PHONE2)
	{
		sim_detect_pin_query = (kal_uint8 *)"GPIO_SIM2_HOT_PLUG";
	}
	
	ipcStatus = IPC_RPC_GPIO_GetPin(sim_detect_pin_query, 19, (void *)&hw_cb->sim_detect_pin_num);
	if (ipcStatus < 0)
	{ 
	
		kal_sprintf(hw_cb->dbgStr, "get SIM%d HOT PLUG pin fail %d, please request HW to check ALPS DWS setting.\n\r", hw_cb->simInterface, ipcStatus);
		DRV_ICC_print_str(hw_cb->dbgStr);
	}
	else
	{
		hw_cb->polarity = iccHotPlug.polarity;	
	}

#else
	ipcStatus = IPC_RPC_GPIO_GetPin(sim_detect_pin_query, 19, (void *)&hw_cb->sim_detect_pin_num);
	if (ipcStatus < 0)
	{ 
		sim_detect_pin_query = (kal_uint8 *)"GPIO_SIM2_HOT_PLUG";
		ipcStatus = IPC_RPC_GPIO_GetPin(sim_detect_pin_query, 19, (void *)&hw_cb->sim_detect_pin_num);
		if (ipcStatus < 0)
		{ 

			kal_sprintf(hw_cb->dbgStr, "get SIM%d HOT PLUG pin fail %d, please request HW to check ALPS DWS setting.\n\r", hw_cb->simInterface, ipcStatus);
			DRV_ICC_print_str(hw_cb->dbgStr);
		}
		else
		{
			hw_cb->polarity = iccHotPlug.polarity;	
			((sim_HW_cb *)(hwCbArray[1 - simInterface]))->polarity = iccHotPlug.polarity;
			((sim_HW_cb *)(hwCbArray[1 - simInterface]))->sim_detect_pin_num = hw_cb->sim_detect_pin_num;
		}
	}
	else
	{
		hw_cb->polarity = iccHotPlug.polarity;
		((sim_HW_cb *)(hwCbArray[1 - simInterface]))->polarity = iccHotPlug.polarity;
		((sim_HW_cb *)(hwCbArray[1 - simInterface]))->sim_detect_pin_num = hw_cb->sim_detect_pin_num;
	}
#endif
#endif

#else // !defined(MT6290)
    switch (application)
    {
        case SIM_ICC_APPLICATION_PHONE1:
            if (USIM1_EINT_NO == EINT_CHANNEL_NOT_EXIST) goto LEAVE_REG_EINT;
            else
            {
                iccHotPlug.eintNo = USIM1_EINT_NO;
                iccHotPlug.debounceTime = EINT1_DEBOUNCE_TIME_DELAY;
            }
            break;
        case SIM_ICC_APPLICATION_PHONE2:
            if (USIM2_EINT_NO == EINT_CHANNEL_NOT_EXIST) goto LEAVE_REG_EINT;
            else
            {
                iccHotPlug.eintNo = USIM2_EINT_NO;
                iccHotPlug.debounceTime = EINT2_DEBOUNCE_TIME_DELAY;
            }
            break;
        case SIM_ICC_APPLICATION_CMMB_SMD:
        case SIM_ICC_APPLICATION_PHONE3:
        case SIM_ICC_APPLICATION_PHONE4:
            goto LEAVE_REG_EINT;
        default:
            ASSERT(0);
            break;
    }

    if (iccHotPlug.debounceTime == 0)
        iccHotPlug.debounceTime = 100;
    iccHotPlug.polarity = KAL_FALSE;
    iccHotPlug.sensitivity = KAL_FALSE;
    iccHotPlug.socketType = SIM_HOT_PLUG_EINT_SOCKETTYPE;
#endif
    sim_reg_hot_plug_eint(application, iccHotPlug.eintNo, iccHotPlug.debounceTime, iccHotPlug.polarity, iccHotPlug.sensitivity, iccHotPlug.socketType);

LEAVE_REG_EINT:
    kal_sprintf(hw_cb->dbgStr, "EINT: %d, %d %d %d %d %d %d %d\n\r", application, ipcStatus, iccHotPlug.eintNo, iccHotPlug.debounceTime, iccHotPlug.polarity, iccHotPlug.sensitivity, iccHotPlug.socketType, eint_src_map[iccHotPlug.eintNo]);
    DRV_ICC_print_str(hw_cb->dbgStr);
    kal_sprintf(hw_cb->dbgStr, "EINT: %s\n\r", query);
    DRV_ICC_print_str(hw_cb->dbgStr);
HAVE_REG_EINT:
    sim_dump_eint(hw_cb);
#endif // End of #ifdef __SIM_HOT_SWAP_SUPPORT__
    simDriver->addMessage(SIM_AL_ACTION_EOC, simInterface, 0, 0);
    simDriver->EOC((sim_HW_cb *)(hwCbArray[simInterface]));

#ifdef SIM_4_CARD_SMT_TEST
    /*find out the hooked function table*/
    anotherSimDriver = sim_driverTable[anotherSimInterface];
    ASSERT(0 != anotherSimDriver);
    anotherSimDriver->addMessage(SIM_AL_ACTION_RESET, anotherSimInterface, (kal_uint32)kal_get_current_thread_ID(), 0);
    anotherStatus = anotherSimDriver->reset(UNKNOWN_POWER_CLASS, &anotherResultVolt, warm, (sim_HW_cb *)(hwCbArray[anotherSimInterface]));
    if (USIM_NO_ERROR == anotherStatus)
    {
        DRV_ICC_print_str("another SIM card found!!\n\r");
    }
    else
    {
        DRV_ICC_print_str("another SIM card not found!!\n\r");
    }

    anotherSimDriver->addMessage(SIM_AL_ACTION_EOC, anotherSimInterface, 0, 0);
    anotherSimDriver->EOC((sim_HW_cb *)(hwCbArray[anotherSimInterface]));
#endif

#endif

    return status;
}

#if 0
#ifndef __MAUI_BASIC__
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
#endif

sim_status L1sim_Cmd_All(kal_uint8  *txData, kal_uint32  *txSize, kal_uint8  *rxData, kal_uint32  *rxSize, SIM_ICC_APPLICATION application, kal_uint8 *bypass6263)
{
    sim_ctrlDriver *simDriver;
    sim_status status;

    kal_uint32 simInterface;
    sim_HW_cb *hw_cb;
    Sim_Card *SimCard;
    usim_dcb_struct *usim_dcb;

    kal_uint32 auth_start = 0, auth_end = 0;

    kal_uint32 status_start = 0, status_end = 0;
    simInterface = sim_get_logicalNum_from_app(application);

#if defined(__SIM_HOT_SWAP_POLL_TIMER__) && defined (__DUAL_SIM_HOT_SWAP_CO_DECK_SUPPORT__)
    sim_HW_cb *peer_hw_cb = (sim_HW_cb *)(hwCbArray[1 - simInterface]);
    Sim_Card * peer_SimCard =  GET_SIM_CB(1 - simInterface);
    usim_dcb_struct *peer_usim_dcb = GET_USIM_CB(1 - simInterface);
#endif
    if (DRV_SIM_MAX_LOGICAL_INTERFACE <= simInterface)
        ASSERT(0);

    if (KAL_TRUE == sim_physicalSlotChanged)
        simInterface = 1 - simInterface;


    if (0x0 == txData || 0x0 == txSize || 0x0 == rxSize)
        ASSERT(0);

    if (txData[1] == 0x88)
        auth_start = ust_get_current_time_source();

    if (txData[1] == 0xF2)
        status_start = ust_get_current_time_source();

    /*find out the hooked function table*/
    simDriver = sim_driverTable[simInterface];
    ASSERT(0 != simDriver);
    simDriver->addMessage(SIM_AL_ACTION_COMMAND, simInterface, (kal_uint32)kal_get_current_thread_ID(), 0);

    hw_cb = (sim_HW_cb *)(hwCbArray[simInterface]);
    SimCard = GET_SIM_CB(simInterface);

    SimCard->bypass6263 = *bypass6263;

    usim_dcb = GET_USIM_CB(simInterface);

    if (SimCard->cmd_duration_count >= 200 || SimCard->cmd_duration_count == 0)
    {
        kal_uint32 avg = (SimCard->cmd_duration_count == 0) ? 0 : SimCard->cmd_duration_sum / SimCard->cmd_duration_count;
#if !defined(__MAUI_BASIC__)

        kal_brief_trace(TRACE_INFO, LOG_SIM_DRV_AVG_CMD_TIME, hw_cb->simInterface, SIM_PRINT_L1SIM_CMD_TRC126,
                        hw_cb->simInterface, SimCard->cmd_duration_count, SimCard->cmd_duration_sum, avg, 0);
        SimCard->cmd_duration_count = 0;
        SimCard->cmd_duration_sum = 0;
#else
        DRV_ICC_print_dec(hw_cb, SIM_PRINT_L1SIM_CMD_TRC126, hw_cb->simInterface, SimCard->cmd_duration_count, SimCard->cmd_duration_sum, avg, 0);
#endif
    }

    DRV_ICC_print_dec(hw_cb, SIM_PRINT_L1SIM_CMD_TRC129,
                      (SimCard->t_debug[1] == 0) ? 0 : ust_get_duration(SimCard->t_debug[0], SimCard->t_debug[1]),
                      ust_get_duration(SimCard->t_debug[0], SimCard->t_debug[4]),
                      (SimCard->t_debug[5] == 0) ? 0 : ust_get_duration(SimCard->t_debug[4], SimCard->t_debug[5]),
                      (SimCard->t_debug[5] == 0) ? ust_get_duration(SimCard->t_debug[0], SimCard->t_debug[4]) : ust_get_duration(SimCard->t_debug[0], SimCard->t_debug[5]),
                      (SimCard->t_debug[5] == 0) ? ust_get_duration(SimCard->t_debug[4], ust_get_current_time_source()) : ust_get_duration(SimCard->t_debug[5], ust_get_current_time_source()));
    SimCard->t_debug[0] = 0;
    SimCard->t_debug[1] = 0;
    SimCard->t_debug[2] = 0;
    SimCard->t_debug[3] = 0;
    SimCard->t_debug[4] = 0;
    SimCard->t_debug[5] = 0;

    SimCard->t_debug[0] = ust_get_current_time_source();
#if defined(__SIM_HOT_SWAP_POLL_TIMER__) && defined(__SIM_HOT_SWAP_SUPPORT__)
    if (hw_cb->PollTimerStart == KAL_TRUE)
    {
        hw_cb->PollTimerStart = KAL_FALSE;
        hw_cb->PollTimerEnd = KAL_FALSE;
        SimCard->poll_sim_2s = KAL_TRUE;
        usim_dcb->poll_sim_2s = KAL_TRUE;
        kal_sprintf(hw_cb->dbgStr, "[SIM_DRV:%d] Start Real Timer", hw_cb->simInterface);
        DRV_ICC_print_str(hw_cb->dbgStr);
    }
#endif
    USIM_low_power_related_setting(hw_cb, USIM_LP_DISABLE | USIM_LP_MASK_NORMAL_VSIM_CURRENT | USIM_LP_MASK_START_SCLK);
    status = simDriver->command(txData, txSize, rxData, rxSize, (sim_HW_cb *)(hwCbArray[simInterface]));

    if (status == SIM_SW_STATUS_FAIL)
    {
        USIM_low_power_related_setting(hw_cb, USIM_LP_ENABLE | USIM_LP_MASK_REDUCE_VSIM_CURRENT | USIM_LP_MASK_NORMAL_26M);
#if defined(SIM_DRV_4_33MHZ_SCLK)
        hw_cb->canUse_4_33_SCLK = KAL_FALSE;
#endif
    }
    else if ((usim_dcb->clock_stop_en == KAL_TRUE && usim_dcb->phy_proto == T1_PROTOCOL)
             || (SimCard->clkStop == KAL_TRUE && usim_dcb->phy_proto == T0_PROTOCOL))
    {
        if (hw_cb->doNotStopSimClock)
            ;
        else
            USIM_low_power_related_setting(hw_cb, USIM_LP_MASK_REDUCE_VSIM_CURRENT | USIM_LP_MASK_STOP_SCLK);
    }
    else
        USIM_low_power_related_setting(hw_cb, USIM_LP_ENABLE | USIM_LP_MASK_REDUCE_VSIM_CURRENT);

    simDriver->addMessage(SIM_AL_ACTION_EOC, simInterface, 0, 0);
    simDriver->EOC((sim_HW_cb *)(hwCbArray[simInterface]));

    SimCard->t_debug[4] = ust_get_current_time_source();

#if defined(__SIM_HOT_SWAP_POLL_TIMER__) && defined(__SIM_HOT_SWAP_SUPPORT__)

    kal_uint32 need_rollback[2] = {0}, need_callBack[2] = {0};
    kal_take_spinlock(spinlockid_poll_timer, KAL_INFINITE_WAIT);

    if (SimCard->poll_sim_2s || usim_dcb->poll_sim_2s)
    {
        SimCard->poll_sim_2s = KAL_FALSE;
        usim_dcb->poll_sim_2s = KAL_FALSE;
        kal_sprintf(hw_cb->dbgStr, "[SIM_DRV:%d] Stop timer", hw_cb->simInterface);
        DRV_ICC_print_str(hw_cb->dbgStr);
        need_rollback[0] = 1;
#if defined (__DUAL_SIM_HOT_SWAP_CO_DECK_SUPPORT__)
        if ((peer_hw_cb->PollTimerStart == KAL_TRUE || peer_SimCard->poll_sim_2s == KAL_TRUE || peer_usim_dcb->poll_sim_2s == KAL_TRUE) && simInterface < 2)
        {
            peer_hw_cb->PollTimerStart = KAL_FALSE;
            peer_SimCard->poll_sim_2s = KAL_FALSE;
            peer_usim_dcb->poll_sim_2s = KAL_FALSE;
            need_rollback[1] = 1;
        }
#endif
    }

    if (hw_cb->PollTimerEnd == KAL_FALSE) // Check SW for Poll Timer STATUS, regardless of the timer state
    {
        hw_cb->PollTimerEnd = KAL_TRUE;
        if (status == 0x0000 && hw_cb->PollTimerPluggedOut == KAL_FALSE)
        {
            kal_sprintf(hw_cb->dbgStr, "[SIM DRV:%d]real hot plug", simInterface);
            DRV_ICC_print_str(hw_cb->dbgStr);
            hw_cb->PollTimerPluggedOut = KAL_TRUE;
            need_callBack[0] = 1;
        }
#if defined (__DUAL_SIM_HOT_SWAP_CO_DECK_SUPPORT__)
        if (status == 0x0000 && peer_hw_cb->PollTimerPluggedOut == KAL_FALSE)
        {
            kal_sprintf(hw_cb->dbgStr, "[SIM DRV:%d]real hot plug", 1 - simInterface);
            DRV_ICC_print_str(hw_cb->dbgStr);
            peer_hw_cb->PollTimerPluggedOut = KAL_TRUE;
            need_callBack[1] = 1;
        }
#endif
    }
    kal_give_spinlock(spinlockid_poll_timer);

    if (need_rollback[0] == 1)
        sim_hot_swap_poll_timer_rollback(application);
    if (need_rollback[1] == 1)
        sim_hot_swap_poll_timer_rollback_codeck_peer(1 - application);

    if (need_callBack[0] == 1 && iccHotPlugTable[simInterface].plugOutcb != NULL)
        iccHotPlugTable[simInterface].plugOutcb(application);
    if (need_callBack[1] == 1 && iccHotPlugTable[1 - simInterface].plugOutcb != NULL)
        iccHotPlugTable[1 - simInterface].plugOutcb(1 - application);
#endif
#if defined(__ABNORMAL_CARD__)
    if (status == 0x0000)
    {
        usim_set_sim_io_special_mode(simInterface, KAL_FALSE);
    }
#endif // #if defined(__ABNORMAL_CARD__)
    if (txData[1] == 0x88)
    {
        auth_end = ust_get_current_time_source();
#if !defined(__MAUI_BASIC__)
        kal_brief_trace(TRACE_INFO, LOG_SIM_DRV_AVG_AUTH_TIME, hw_cb->simInterface, SIM_PRINT_L1SIM_CMD_TRC125, ust_get_duration(auth_start, auth_end));
#else
        DRV_ICC_print_dec(hw_cb, SIM_PRINT_L1SIM_CMD_TRC125, ust_get_duration(auth_start, auth_end), 0, 0, 0, 0);
#endif

    }
    if (txData[1] == 0xF2)
    {
        status_end = ust_get_current_time_source();
        SimCard->status_duration_count++;
        SimCard->status_duration_sum += status_end - status_start;
        if (SimCard->status_duration_count == 10)
        {
            kal_brief_trace(TRACE_INFO, LOG_SIM_DRV_AVG_STATUS_TIME, hw_cb->simInterface, SIM_PRINT_L1SIM_CMD_TRC124, SimCard->status_duration_sum, SimCard->status_duration_count);
            SimCard->status_duration_count = 0;
            SimCard->status_duration_sum = 0;
        }

    }
    return status;
}

void L1sim_PowerOff_All(SIM_ICC_APPLICATION application)
{
    sim_ctrlDriver *simDriver;
    kal_uint32 simInterface;
    sim_HW_cb *hw_cb;

    simInterface = sim_get_logicalNum_from_app(application);

    if (DRV_SIM_MAX_LOGICAL_INTERFACE <= simInterface)
        ASSERT(0);

    if (KAL_TRUE == sim_physicalSlotChanged)
        simInterface = 1 - simInterface;

#if defined(MT6735)
    ////////// Don't reset SIM card, if SIM Pin have been switched to MD3
    kal_uint32 reg_val = DRV_Reg32(REG_GPIO_MODE17);
    if (simInterface == 0)
    {
        if (((reg_val & GPIO_160_MODE_MD_SIMx_MASK) != GPIO_160_MODE_MD_SIM1) && ((reg_val & GPIO_163_MODE_MD_SIMx_MASK) != GPIO_163_MODE_MD_SIM1))
        {
            /* SIM1 not in MD1 */
            DRV_ICC_print_str("sim1 pin mode shows it is not connected to MD1!!\n\r");
            return;
        }
    }
    else
    {
        if (((reg_val & GPIO_160_MODE_MD_SIMx_MASK) != GPIO_160_MODE_MD_SIM2) && ((reg_val & GPIO_163_MODE_MD_SIMx_MASK) != GPIO_163_MODE_MD_SIM2))
        {
            /* SIM2 not in MD1 */
            DRV_ICC_print_str("sim2 pin mode shows it is not connected to MD1!!\n\r");
            return;
        }
    }
#endif

    /*find out the hooked function table*/
    simDriver = sim_driverTable[simInterface];
    ASSERT(0 != simDriver);

    simDriver->addMessage(SIM_AL_ACTION_POWOFF, simInterface, (kal_uint32)kal_get_current_thread_ID(), 0);

    hw_cb = (sim_HW_cb *)(hwCbArray[simInterface]);
    USIM_low_power_related_setting(hw_cb, USIM_LP_DISABLE | USIM_LP_MASK_NORMAL_VSIM_CURRENT | USIM_LP_MASK_START_SCLK);

    // VSIM lock: To prevent NFC open VSIM again
#if defined(__LOCK_VSIM__)
    {
        sim_nfc_communication req, rsp;
        req.lock_vsim = KAL_TRUE;
        rsp.lock_vsim = KAL_FALSE;
        IPC_RPC_General_Query(IPC_RPC_USIM2NFC_OP, (void *) &req, sizeof(sim_nfc_communication), (void *) &rsp, sizeof(sim_nfc_communication));
        kal_sprintf(hw_cb->dbgStr, "[SIM_DRV] vsim lock rsp: %d\n\r", rsp.lock_vsim);
        DRV_ICC_print_str(hw_cb->dbgStr);
    }
#endif // #if defined(__LOCK_VSIM__)

    simDriver->powerOff((sim_HW_cb *)(hwCbArray[simInterface]));

    USIM_low_power_related_setting(hw_cb, USIM_LP_ENABLE | USIM_LP_MASK_NORMAL_26M | USIM_LP_MASK_REDUCE_VSIM_CURRENT);

    // VSIM unlock
#if defined(__LOCK_VSIM__)
    {
        sim_nfc_communication req, rsp;
        req.lock_vsim = KAL_FALSE;
        rsp.lock_vsim = KAL_TRUE;
        IPC_RPC_General_Query(IPC_RPC_USIM2NFC_OP, (void *) &req, sizeof(sim_nfc_communication), (void *) &rsp, sizeof(sim_nfc_communication));
        kal_sprintf(hw_cb->dbgStr, "[SIM_DRV] vsim unlock rsp: %d\n\r", rsp.lock_vsim);
        DRV_ICC_print_str(hw_cb->dbgStr);
    }
#endif // #if defined(__LOCK_VSIM__)

#if defined(__ABNORMAL_CARD__)
    usim_set_sim_io_special_mode(simInterface, KAL_FALSE);
#endif // #if defined(__ABNORMAL_CARD__)

    simDriver->addMessage(SIM_AL_ACTION_EOC, simInterface, 0, 0);
    simDriver->EOC((sim_HW_cb *)(hwCbArray[simInterface]));

    sim_releaseOwner(application);
}

void L1sim_Get_Card_Info_All(sim_info_struct *info, SIM_ICC_APPLICATION application)
{
    sim_ctrlDriver *simDriver;
    kal_uint32 simInterface;

    simInterface = sim_get_logicalNum_from_app(application);


    if (DRV_SIM_MAX_LOGICAL_INTERFACE <= simInterface)
        ASSERT(0);

    if (KAL_TRUE == sim_physicalSlotChanged)
        simInterface = 1 - simInterface;


    /*find out the hooked function table*/
    simDriver = sim_driverTable[simInterface];
    ASSERT(0 != simDriver);
    simDriver->getCardInfo(info, (sim_HW_cb *)(hwCbArray[simInterface]));
}

void L1sim_Enable_Enhanced_Speed_All(kal_bool enable, SIM_ICC_APPLICATION application)
{
    sim_ctrlDriver *simDriver;
    kal_uint32 simInterface;


    ///dbg_print("L1sim_Enable_Enhanced_Speed_All\r\n");
    simInterface = sim_get_logicalNum_from_app(application);

    if (DRV_SIM_MAX_LOGICAL_INTERFACE <= simInterface)
        ASSERT(0);

    if (KAL_TRUE == sim_physicalSlotChanged)
        simInterface = 1 - simInterface;


    /*find out the hooked function table*/
    simDriver = sim_driverTable[simInterface];
    ASSERT(0 != simDriver);
    simDriver->enableEnhancedSpeed(enable, (sim_HW_cb *)(hwCbArray[simInterface]));
}

void L1sim_Select_Prefer_PhyLayer_All(sim_protocol_phy_enum T, SIM_ICC_APPLICATION application)
{
    sim_ctrlDriver *simDriver;
    kal_uint32 simInterface;

    ///dbg_print("L1sim_Select_Prefer_PhyLayer_All\r\n");
    simInterface = sim_get_logicalNum_from_app(application);

    if (DRV_SIM_MAX_LOGICAL_INTERFACE <= simInterface)
        ASSERT(0);

    if (KAL_TRUE == sim_physicalSlotChanged)
        simInterface = 1 - simInterface;


    /*find out the hooked function table*/
    simDriver = sim_driverTable[simInterface];
    ASSERT(0 != simDriver);
    simDriver->selectPreferPhyLayer(T, (sim_HW_cb *)(hwCbArray[simInterface]));
}

kal_bool L1sim_Set_ClockStopMode_All(sim_clock_stop_enum mode, SIM_ICC_APPLICATION application)
{
    sim_ctrlDriver *simDriver;
    kal_bool status;
    kal_uint32 simInterface;
    sim_HW_cb *hw_cb;

    // dbg_print("L1sim_Set_ClockStopMode_All\r\n");
    simInterface = sim_get_logicalNum_from_app(application);

    if (DRV_SIM_MAX_LOGICAL_INTERFACE <= simInterface)
        ASSERT(0);

    if (KAL_TRUE == sim_physicalSlotChanged)
        simInterface = 1 - simInterface;

    // find out the hooked function table
    simDriver = sim_driverTable[simInterface];
    ASSERT(0 != simDriver);

    hw_cb = (sim_HW_cb *)(hwCbArray[simInterface]);
    USIM_low_power_related_setting(hw_cb, USIM_LP_DISABLE);

    status = simDriver->setClockStopMode(mode, (sim_HW_cb *)(hwCbArray[simInterface]));

    if (mode & CLOCK_STOP_MSK)
        USIM_low_power_related_setting(hw_cb, USIM_LP_ENABLE | USIM_LP_MASK_NORMAL_26M);
    else
        USIM_low_power_related_setting(hw_cb, USIM_LP_ENABLE | USIM_LP_MASK_FORCE_ON_26M);

    return status;
}

/*for specific purpose, SIM task should not call this */
void sim_releaseOwner(SIM_ICC_APPLICATION application)
{
    usim_dcb_struct *usim_dcb;
    kal_uint32 simInterface;

    simInterface = sim_get_logicalNum_from_app(application);

    if (DRV_SIM_MAX_LOGICAL_INTERFACE <= simInterface)
        ASSERT(0);

    if (KAL_TRUE == sim_physicalSlotChanged)
        simInterface = 1 - simInterface;

    usim_dcb = GET_USIM_CB(simInterface);
    ASSERT(0 != usim_dcb);

    usim_dcb->ownerTask = 0;
}

/*following are pure SW query, no matter of different driver solutions*/
sim_card_speed_type L1sim_Get_CardSpeedType(SIM_ICC_APPLICATION application)
{
    Sim_Card *SimCard;
    kal_uint32 simInterface;

    //dbg_print("L1sim_Get_CardSpeedType\r\n");
    simInterface = sim_get_logicalNum_from_app(application);

    if (DRV_SIM_MAX_LOGICAL_INTERFACE <= simInterface)
        ASSERT(0);

    if (KAL_TRUE == sim_physicalSlotChanged)
        simInterface = 1 - simInterface;

    SimCard = GET_SIM_CB(simInterface);
    ASSERT(0 != SimCard);

    return SimCard->sim_card_speed;
}

kal_bool sim_queryGet9000WhenSelect(SIM_ICC_APPLICATION application)
{
    Sim_Card *SimCard;
    kal_uint32 simInterface;

    //dbg_print("[DRV] sim_queryGet9000WhenSelect\r\n");
    simInterface = sim_get_logicalNum_from_app(application);

    if (DRV_SIM_MAX_LOGICAL_INTERFACE <= simInterface)
        ASSERT(0);

    if (KAL_TRUE == sim_physicalSlotChanged)
        simInterface = 1 - simInterface;

    SimCard = GET_SIM_CB(simInterface);
    ASSERT(0 != SimCard);

    return SimCard->get9000WhenSelect;
}

void L1sim_Set_Owner_Task(SIM_ICC_APPLICATION application)
{
    usim_dcb_struct *usim_dcb;
    kal_uint32 simInterface;

    ///dbg_print("[DRV] sim_set_owner_task\r\n");
    simInterface = sim_get_logicalNum_from_app(application);

    if (DRV_SIM_MAX_LOGICAL_INTERFACE <= simInterface)
        ASSERT(0);

    if (KAL_TRUE == sim_physicalSlotChanged)
        simInterface = 1 - simInterface;

    usim_dcb = GET_USIM_CB(simInterface);
    ASSERT(0 != usim_dcb);
    usim_dcb->ownerTask = kal_get_current_thread_ID();
}

enum{
	SIM_TRAY_STATUS_UNKOWN,
	SIM_TRAY_ABSENT,
	SIM_TRAY_DETECTED,
};
void L1sim_Get_Card_Detect_Status(sim_info_struct *info, SIM_ICC_APPLICATION application)
{
	kal_uint32 simInterface;
	sim_HW_cb *hw_cb;
	DCL_HANDLE gpio_handle;
	GPIO_CTRL_READ_T readIO;
	kal_uint32  Sim_Detect_Pin_indate;

	simInterface = sim_get_logicalNum_from_app(application);

	if(KAL_TRUE == sim_physicalSlotChanged)
		simInterface = 1-simInterface;
		
	hw_cb = (sim_HW_cb *)(hwCbArray[simInterface]);
	if(DRV_SIM_MAX_LOGICAL_INTERFACE <= simInterface)
		ASSERT(0);

	gpio_handle = DclGPIO_Open(DCL_GPIO, hw_cb->sim_detect_pin_num);	
	DclGPIO_Control(gpio_handle, GPIO_CMD_READ, (DCL_CTRL_DATA_T *)&readIO);
	Sim_Detect_Pin_indate = readIO.u1IOData;
	DclGPIO_Close(gpio_handle);
	
	if(Sim_Detect_Pin_indate == hw_cb->polarity)
	{
		info->sim_tray_status = SIM_TRAY_ABSENT;

	}
	else
	{
		if(Sim_Detect_Pin_indate == !(hw_cb->polarity))
		{
			info->sim_tray_status = SIM_TRAY_DETECTED;

		}
		else
		{
			info->sim_tray_status = SIM_TRAY_STATUS_UNKOWN;

		}
	}
}


void sim_toutTest_al(kal_uint32 toutValue, SIM_ICC_APPLICATION application)
{

    sim_ctrlDriver *simDriver;
    kal_uint32 simInterface;

    ///dbg_print("sim_toutTest_al\r\n");
    simInterface = sim_get_logicalNum_from_app(application);

    if (DRV_SIM_MAX_LOGICAL_INTERFACE <= simInterface)
        ASSERT(0);

    if (KAL_TRUE == sim_physicalSlotChanged)
        simInterface = 1 - simInterface;


    /*find out the hooked function table*/
    simDriver = sim_driverTable[simInterface];
    ASSERT(0 != simDriver);
    simDriver->toutTest(toutValue, (sim_HW_cb *)(hwCbArray[simInterface]));

}
#endif

#ifdef DCL_SIM_INTERFACE
/*dcl add new api : 1. fill table*/
DCL_SIMDriver_t sim_ctrlDriver_All =
{
    (DCL_SIM_RST)L1sim_Reset_All,
    (DCL_SIM_CMD)L1sim_Cmd_All,
    (DCL_SIM_PWOFF)L1sim_PowerOff_All,
    (DCL_SIM_GET_CARD_INFO)L1sim_Get_Card_Info_All,
    (DCL_SIM_SET_MAX_SPEED)L1sim_Enable_Enhanced_Speed_All,
    (DCL_SIM_SET_PREFER_PROTOCOL)L1sim_Select_Prefer_PhyLayer_All,
    (DCL_SIM_SET_CLK_STOP_MODE)L1sim_Set_ClockStopMode_All,
    (DCL_SIM_TOUT_TEST)sim_toutTest_al,
    NULL,
    (DCL_SIM_GAT_CARD_SPEED)L1sim_Get_CardSpeedType,
    (DCL_SIM_QUERY_GET_9000_WHEN_SELECT)sim_queryGet9000WhenSelect,
    (DCL_SIM_SET_OWNER_TASK)L1sim_Set_Owner_Task,
	(DCL_SIM_GET_CARD_DETECT_STATUS)L1sim_Get_Card_Detect_Status
};
#endif //DCL_SIM_INTERFACE

#endif /*__SIM_DRV_MULTI_DRV_ARCH__*/

#else //DRV_SIM_OFF
#include  	"drv_comm.h"

#ifdef DCL_SIM_INTERFACE
#include "dcl.h"
void sim_dummyAPI(void) {}
DCL_SIMDriver_t sim_ctrlDriver_All =
{
    (DCL_SIM_RST)sim_dummyAPI,
    (DCL_SIM_CMD)sim_dummyAPI,
    (DCL_SIM_PWOFF)sim_dummyAPI,
    (DCL_SIM_GET_CARD_INFO)sim_dummyAPI,
    (DCL_SIM_SET_MAX_SPEED)sim_dummyAPI,
    (DCL_SIM_SET_PREFER_PROTOCOL)sim_dummyAPI,
    (DCL_SIM_SET_CLK_STOP_MODE)sim_dummyAPI,
    NULL,
    (DCL_SIM_GAT_CARD_SPEED)sim_dummyAPI,
    (DCL_SIM_QUERY_GET_9000_WHEN_SELECT)sim_dummyAPI
};
#endif //DCL_SIM_INTERFACE

#endif //DRV_SIM_OFF
