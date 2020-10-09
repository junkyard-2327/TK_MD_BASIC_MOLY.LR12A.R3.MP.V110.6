#ifndef DRV_SIM_OFF
#include "kal_public_api.h"
#include "kal_public_defs.h"
#include "drv_comm.h"
#include "dhl_trace.h"
#include "sim_drv_trc.h"
#ifdef __SIM_DRV_MULTI_DRV_ARCH__

#include 	"intrCtrl.h"
#include    "sim_reg_adp.h"

#include "sim_hw.h"
#include "sim_al.h"
#include "sim_sw_comm.h"
#include "multi_icc_custom.h"
#include "dcl.h"
#include "sim_trc.h"
#include "devdrv_ls.h"

#include "kal_trace.h"
#include "dcl_pmu_common_sw.h"

#include "drvpdn.h"
#include "drv_gdma.h"
#include "drv_gpio.h"
#if defined(SIM_DRV_SWITCH_MT6306)
    #include "sim_mt6306.h"
#endif
#if defined(ATEST_DRV_SLEEP_IT)
    #define LPWR_SLIM
#endif
#if defined(__SIM_HOT_SWAP_SUPPORT__)
    #include "eint.h"
    extern SIM_ICC_HOT_PLUG iccHotPlugTable[];
#endif
#include "sleepdrv_interface.h"
#if defined(SIM_LOCK_SRCCLK_FOR_NONE_STOP_CLK_CARD) || defined(LPWR_SLIM)
    #if defined(DRV_SIM_6290_SERIES)
        extern void MD_TOPSM_SRCLK_SW_Control(kal_bool fOn);
    #endif // #if defined(DRV_SIM_6290_SERIES)
#endif // #if defined(SIM_LOCK_SRCCLK_FOR_NONE_STOP_CLK_CARD) || defined(LPWR_SLIM)

#ifdef __CLKG_DEFINE__
    #if (defined(DRVPDN_CON1) || defined(DRVPDN_CON0))
        #error "__CLKG_DEFINE__ & DRVPDN_CON1 are all defined"
    #else /*(defined(DRVPDN_CON1) || defined(DRVPDN_CON0))*/

        #ifdef SIM_PDN_REG_VERSION_3
            #define DRVPDN_CON1		CG_CON0
        #else /*SIM_PDN_REG_VERSION_3*/
            #define DRVPDN_CON1		CG_CON1
        #endif /*SIM_PDN_REG_VERSION_3*/

        #ifdef SIM_PDN_REG_VERSION_3
            /*MT6516 E2 has SIM2 PDN bit on MD side, we have to access CG_CON0 directly*/
            #define DRVPDN_CON0		CG_CON0
        #else /*SIM_PDN_REG_VERSION_3*/
            #define DRVPDN_CON0		CG_CON0
        #endif /*SIM_PDN_REG_VERSION_3*/

    #endif /*(defined(DRVPDN_CON1) || defined(DRVPDN_CON0))*/

    #if (defined(DRVPDN_CON1_SIM) || defined(DRVPDN_CON0_SIM2))
        #error "__CLKG_DEFINE__ & DRVPDN_CON1_SIM are all defined"
    #else /*(defined(DRVPDN_CON1_SIM) || defined(DRVPDN_CON0_SIM2))*/


        #ifdef SIM_PDN_REG_VERSION_3
            #define DRVPDN_CON1_SIM	CG_CON0_SIM
        #else /*SIM_PDN_REG_VERSION_3*/
            #define DRVPDN_CON1_SIM	CG_CON1_SIM
        #endif /*SIM_PDN_REG_VERSION_3*/

        #ifdef SIM_PDN_REG_VERSION_3
            /*MT6516 E2 has SIM2 PDN bit on MD side, we have to access this bit*/
            #define DRVPDN_CON0_SIM2	CG_CON0_SIM2
        #else /*SIM_PDN_REG_VERSION_3*/
            #define DRVPDN_CON0_SIM2	CG_CON0_SIM2
        #endif /*SIM_PDN_REG_VERSION_3*/


    #endif /*(defined(DRVPDN_CON1_SIM) || defined(DRVPDN_CON0_SIM2))*/
#endif /*__CLKG_DEFINE__*/



static Sim_Card SimCard_cb[DRV_SIM_MAX_LOGICAL_INTERFACE];
static usim_dcb_struct usim_cb[DRV_SIM_MAX_LOGICAL_INTERFACE];
sim_HW_cb	simHWCbArray[DRV_SIM_MAX_LOGICAL_INTERFACE];
extern kal_uint32	hwCbArray[];
extern sim_ctrlDriver sim_ctrlDriver_MT6302, sim_ctrlDriver_MTK, sim_ctrlDriver_Single, sim_ctrlDriver_MT6306, sim_ctrlDriver_AW6314;
extern sim_ctrlDriver *sim_driverTable[];
extern kal_bool sim_physicalSlotChanged;

#if defined (__SIM_HOT_SWAP_SUPPORT__) && defined (__SIM_HOT_SWAP_POLL_TIMER__)
extern volatile kal_spinlockid spinlockid_poll_timer;
#endif

#if defined(SIM_DRV_SWITCH_MT6306)
extern volatile kal_spinlockid spinlockid_mt6306_race_protect[SIM_MT6306_MAX_PROTECTION_NUM];
#endif
#if defined(__SIM_DRV_CO_LOAD_MT6306__) && defined(SIM_DRV_SWITCH_MT6306)
    extern kal_bool sim_connectMT6306;
#endif
extern void SIM_SetEvent_MTK(Sim_Card *SIMCARD, kal_uint8 result, sim_HW_cb *hw_cb);
kal_uint32 sim_mtkIf2Logical[SIM_DRV_MTK_INTERFACE_NUM];
void DRV_ICC_CLKSRC_Lock(kal_uint32 hwInterfaceNo, kal_bool fLock);

/*PMU related*/
///MTK04122: TBC
#ifdef __FPGA__
#else
    DCL_HANDLE simPmuHandle;
#endif

#if defined(DRV_SIM_LTE_SERIES)
    #ifdef SIM_CACHED_SUPPORT
        kal_uint32  sim_uncachedTxBuffer0[260] DEVDRV_LS_NONCACHEDZI;
        kal_uint32  sim_uncachedRxBuffer0[260] DEVDRV_LS_NONCACHEDZI;
        kal_uint32  sim_uncachedTxBuffer1[260] DEVDRV_LS_NONCACHEDZI;
        kal_uint32  sim_uncachedRxBuffer1[260] DEVDRV_LS_NONCACHEDZI;
        #if defined(SIM_DRV_IC_USB)
            kal_uint8   uncachedDmaBuffer0[512] DEVDRV_LS_NONCACHEDZI;
            kal_uint8   uncachedDmaBuffer1[512] DEVDRV_LS_NONCACHEDZI;
        #else
            kal_uint8   uncachedDmaBuffer0[260] DEVDRV_LS_NONCACHEDZI;
            kal_uint8   uncachedDmaBuffer1[260] DEVDRV_LS_NONCACHEDZI;
        #endif
    #endif
#else /*DRV_SIM_6290_SERIES*/
    #pragma arm section zidata = "NONCACHEDZI",  rwdata = "NONCACHEDRW"
    #ifdef SIM_CACHED_SUPPORT
        kal_uint32	sim_uncachedTxBuffer0[128], sim_uncachedRxBuffer0[128] ;
        kal_uint32	sim_uncachedTxBuffer1[128], sim_uncachedRxBuffer1[128];
        kal_uint8       uncachedDmaBuffer0[260], uncachedDmaBuffer1[260];
    #endif
    #pragma arm section zidata, rwdata
#endif /*DRV_SIM_6290_SERIES*/


#ifdef SIM_REMOVE_ATR_ASSERT
#define SIM_FATAL_ERROR_REPORT_PERIOD	1000 /*uint is 10ms*/

typedef struct
{
    sim_HW_cb *hw_cb;
    kal_uint32 gptHandle;
} sim_fatalErrorReport;

sim_fatalErrorReport sim_fatalReportArray[DRV_SIM_MAX_LOGICAL_INTERFACE];
#endif

extern kal_uint32 sim_get_logicalNum_from_app(SIM_ICC_APPLICATION application);
extern void sim_MT6306_init(void);
extern void sim_AW6314_init(void);
#if !defined(SIM_DRV_HISR_INIT_CENTRALIZATION)
extern void l1usim_init_hisr(sim_HW_cb *hw_cb);
extern void l1sim_init_hisr(sim_HW_cb *hw_cb);
#endif

#if defined(SIM_DRV_IC_USB)
    typedef kal_uint32(*sim_icusb_Handler)(sim_HW_cb *hw_cb);
    kal_bool usim_icusb_ccci_channel_status = KAL_FALSE;
#endif

/*
	functions here are those the same in single SIM, MT6302 and dual controller solutiions.
	I put them in the same place so that we won't have multiply defined error.
	We should not use solution option here and should do the same thing in different solutions.
*/

#ifdef __SIM_HOT_SWAP_SUPPORT__
void SIM_RegHotPlugCb(SIM_ICC_APPLICATION application, DCL_SIM_PLUG_IN_CALLBACK hotPlugInCb, DCL_SIM_PLUG_OUT_CALLBACK hotPlugOutCb)
{
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
    /* register sim task hot plug call back function to customer files */
    if (sim_physicalSlotChanged == KAL_TRUE)
    {
        application = 1 - application; // need to switch to get correct hwcb and SIMIF number
    }
    sim_reg_hot_plug_cb(application, hotPlugInCb, hotPlugOutCb);
}

#ifdef SIM_HOT_SWAP_V2
void SIM_PlugEvent_Cb(SIM_ICC_APPLICATION app)
{
    Sim_Card *SimCard;
    sim_HW_cb *hw_cb;
    usim_dcb_struct *usim_dcb;

    if (sim_physicalSlotChanged == KAL_TRUE)
    {
        app = 1 - app; // need to switch to get correct hwcb and SIMIF number
    }
    // logical SIM 1 not exactly work on physical SIM1 interface, we only know interrrupt comes from SIM1, have to find its logical
    hw_cb = (sim_HW_cb *)(hwCbArray[sim_get_logicalNum_from_app(app)]);
    SimCard = GET_SIM_CB(hw_cb->simInterface);
    usim_dcb = GET_USIM_CB(hw_cb->simInterface);
#if defined(SIM_DRV_RETRY_3V_WHEN_CMD_FAIL)
    usim_dcb->retry_3v_prefer = KAL_FALSE;
#endif
#if defined(SIM_DRV_RETRY_SPECIAL_MODE_WHEN_CMD_FAIL)
    usim_dcb->retry_special_mode_prefer = KAL_FALSE;
#endif

    SIM_EINT_Mask(hw_cb, KAL_TRUE, __LINE__);

    if (SimCard->sim_nullByteIssueGPT != (kal_uint32) NULL)
    {
        // Stop gpt timer for null byte
        SimCard->sim_nullByteIssueNullCount = 0;
        SimCard->sim_nullByteIssuenonNullCount = 0;
        // must change magic after we confirm GPT won't trigger, since this code run in task context, we can run this code means GPT won't trigger
        SimCard->simMagic1++;
        SimCard->simMagic2 = SimCard->simMagic1;
    }

    // Stop CMD timer
#if defined(SIM_DRV_SWITCH_MT6306)
    sim_MT6306_switchInfo *switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);
#if defined(__SIM_DRV_CO_LOAD_MT6306__)
    if (sim_connectMT6306 == KAL_FALSE)
    {
        USIM_DISABLE_TOUT();
    }
    else
#endif
    {
        if (switch_CB->sim_MT6306_servingInterface == hw_cb->simInterface)
        {
            USIM_DISABLE_TOUT();
        }
    }
#else
    USIM_DISABLE_TOUT();
#endif

    SimCard->timeout = KAL_TRUE;
    usim_dcb->present = KAL_FALSE;
#if defined(SIM_DRV_4_33MHZ_SCLK)
    hw_cb->canUse_4_33_SCLK = KAL_FALSE;
#endif
#if defined(SIM_DRV_IC_USB)
    usim_dcb->forceISO = KAL_FALSE;
    SimCard->forceISO = KAL_FALSE;
    usim_icusb_ccci_channel_status = KAL_FALSE;
    usim_dcb->isIcUsb = KAL_FALSE;
    SimCard->isIcUsb = KAL_FALSE;
#endif
    hw_cb->SlowClock = KAL_FALSE;

    SIM_EINT_Mask(hw_cb, KAL_FALSE, __LINE__);

#if defined(SIM_DRV_SWITCH_MT6306)
#if defined(__SIM_DRV_CO_LOAD_MT6306__)
    if (sim_connectMT6306 == KAL_FALSE)
    {
        if ((void *) SimCard->event != NULL && (void *) SimCard->gpt_handle != NULL && usim_dcb->phy_proto == T0_PROTOCOL)
        {
            SimCard->EvtFlag = 0xFFFF;
            SIM_SetEvent_MTK(SimCard, SIM_CMDTOUT, hw_cb);
        }
        if ((void *) usim_dcb->event != NULL && (void *) usim_dcb->gpt_handle != NULL && usim_dcb->phy_proto == T1_PROTOCOL)
            USIM_SET_EVENT_Multiple(usim_dcb);
    }
    else
#endif
    {
        if (switch_CB->sim_MT6306_servingInterface == hw_cb->simInterface)
        {
            if ((void *) SimCard->event != NULL && (void *) SimCard->gpt_handle != NULL && usim_dcb->phy_proto == T0_PROTOCOL)
            {
                SimCard->EvtFlag = 0xFFFF;
                SIM_SetEvent_MTK(SimCard, SIM_CMDTOUT, hw_cb);
            }
            if ((void *) usim_dcb->event != NULL && (void *) usim_dcb->gpt_handle != NULL && usim_dcb->phy_proto == T1_PROTOCOL)
                USIM_SET_EVENT_Multiple(usim_dcb);
        }
    }
#else
    if ((void *) SimCard->event != NULL && (void *) SimCard->gpt_handle != NULL && usim_dcb->phy_proto == T0_PROTOCOL)
    {
        SimCard->EvtFlag = 0xFFFF;
        SIM_SetEvent_MTK(SimCard, SIM_CMDTOUT, hw_cb);
    }
    if ((void *) usim_dcb->event != NULL && (void *) usim_dcb->gpt_handle != NULL && usim_dcb->phy_proto == T1_PROTOCOL)
        USIM_SET_EVENT_Multiple(usim_dcb);
#endif

    DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC64, app, SimCard->simMagic2, drv_get_current_time(), SimCard->State, SimCard->EvtFlag);

    USIM_low_power_related_setting(hw_cb, USIM_LP_MASK_NORMAL_26M | USIM_LP_MASK_REDUCE_VSIM_CURRENT);
}
#endif
#endif
void SIM_EINT_Mask(sim_HW_cb *hw_cb, kal_bool enable, kal_uint32 line_num)
{
#if defined(__SIM_HOT_SWAP_SUPPORT__)
    if (enable)
    {
#if defined(DRV_SIM_6292_SERIES) || defined(DRV_SIM_6293_SERIES) || defined(DRV_SIM_6295_SERIES)
        kal_take_spinlock(hw_cb->spinlockid_sim_hot_swap, KAL_INFINITE_WAIT);
#else
        IRQMask(IRQ_EIT_CODE);
#endif
        // kal_sprintf(hw_cb->dbgStr, "sim(%d) eint mask @ %d\n\r", hw_cb->simInterface, line_num);
        // DRV_ICC_print_str(hw_cb->dbgStr);
    }
    else
    {
#if defined(DRV_SIM_6292_SERIES) || defined(DRV_SIM_6293_SERIES) || defined(DRV_SIM_6295_SERIES)
        kal_give_spinlock(hw_cb->spinlockid_sim_hot_swap);
#else
        IRQUnmask(IRQ_EIT_CODE);
#endif
        // kal_sprintf(hw_cb->dbgStr, "sim(%d) eint unmask @ %d\n\r", hw_cb->simInterface, line_num);
        // DRV_ICC_print_str(hw_cb->dbgStr);
    }
#endif
    return;
}

#if defined(__SIM_HOT_SWAP_POLL_TIMER__) && defined(__SIM_HOT_SWAP_SUPPORT__)
#include "sim_public_enum.h"
extern void sim_hot_swap_poll_timer_set(kal_uint32 which_sim);
void SIM_PlugEvent_Poll_Timer_Cb(SIM_ICC_APPLICATION app)
{
    //Sim_Card *SimCard;
    sim_HW_cb *hw_cb;
    //usim_dcb_struct *usim_dcb;

    if (sim_physicalSlotChanged == KAL_TRUE)
    {
        hw_cb = (sim_HW_cb *)(hwCbArray[sim_get_logicalNum_from_app(1 - app)]);
    }
    else
    {
        hw_cb = (sim_HW_cb *)(hwCbArray[sim_get_logicalNum_from_app(app)]);
    }
    // logical SIM 1 not exactly work on physical SIM1 interface, we only know interrrupt comes from SIM1, have to find its logical
    //SimCard = GET_SIM_CB(hw_cb->simInterface);
    //usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    //SimCard->poll_sim_2s = KAL_TRUE;
    //usim_dcb->poll_sim_2s = KAL_TRUE;
    hw_cb->PollTimerStart = KAL_TRUE;
    hw_cb->PollTimerPluggedOut = KAL_FALSE;
    hw_cb->PollTimerEnd = KAL_TRUE;
    sim_hot_swap_poll_timer_set(app);
    DRV_ICC_print_str("[SIM DRV]start timer\n\r");

    return;
}
#endif

void DRV_ICC_print(sim_HW_cb *hw_cb, sim_printEnum messageType, kal_uint32 value1, kal_uint32 value2, kal_uint32 value3, kal_uint32 value4, kal_uint32 value5)
{
    kal_char *dbgStr;

    if (kal_if_hisr())
    {
        dbgStr = hw_cb->hisrDbgStr;
    }
    else
    {
        dbgStr = hw_cb->dbgStr;
    }
    kal_sprintf(dbgStr, "[SIM_DRV:%d] %d : %x, %x, %x, %x, %x\n\r", hw_cb->simInterface, messageType, value1, value2, value3, value4, value5);
#ifdef ATEST_DRV_ENABLE
    dbg_print(dbgStr);
#else
    switch (hw_cb->simInterface)
    {
        case 0:
            kal_brief_trace(TRACE_INFO, LOG_SIM_DRV_1, dbgStr);
            break;
        case 1:
            kal_brief_trace(TRACE_INFO, LOG_SIM_DRV_2, dbgStr);
            break;
        case 2:
            kal_brief_trace(TRACE_INFO, LOG_SIM_DRV_3, dbgStr);
            break;
        case 3:
            kal_brief_trace(TRACE_INFO, LOG_SIM_DRV_4, dbgStr);
            break;
        default:
            kal_brief_trace(TRACE_INFO, LOG_SIM_DRV, dbgStr);
            break;
    }
#endif

    return;
}

void DRV_ICC_print_dec(sim_HW_cb *hw_cb, sim_printEnum messageType, kal_uint32 value1, kal_uint32 value2, kal_uint32 value3, kal_uint32 value4, kal_uint32 value5)
{
    kal_char *dbgStr;

    if (kal_if_hisr())
    {
        dbgStr = hw_cb->hisrDbgStr;
    }
    else
    {
        dbgStr = hw_cb->dbgStr;
    }
    kal_sprintf(dbgStr, "[SIM_DRV:%d] %d : %d, %d, %d, %d, %d\n\r", hw_cb->simInterface, messageType, value1, value2, value3, value4, value5);
#ifdef ATEST_DRV_ENABLE
    dbg_print(dbgStr);
#else
    switch (hw_cb->simInterface)
    {
        case 0:
            kal_brief_trace(TRACE_INFO, LOG_SIM_DRV_1, dbgStr);
            break;
        case 1:
            kal_brief_trace(TRACE_INFO, LOG_SIM_DRV_2, dbgStr);
            break;
        case 2:
            kal_brief_trace(TRACE_INFO, LOG_SIM_DRV_3, dbgStr);
            break;
        case 3:
            kal_brief_trace(TRACE_INFO, LOG_SIM_DRV_4, dbgStr);
            break;
        default:
            kal_brief_trace(TRACE_INFO, LOG_SIM_DRV, dbgStr);
            break;
    }
#endif

    return;
}

void DRV_ICC_print_str(kal_char sim_dbg_str[])
{
#ifdef ATEST_DRV_ENABLE
    dbg_print(sim_dbg_str);
#else
    kal_brief_trace(TRACE_INFO, LOG_SIM_DRV, sim_dbg_str);
#endif
}

void DRV_ICC_print_err_msg(sim_HW_cb *hw_cb, kal_char sim_dbg_str[])
{
#ifdef ATEST_DRV_ENABLE
    dbg_print("[SIM_DRV:%d][ERR]%s\n\r", hw_cb->simInterface, sim_dbg_str);
#else
    kal_brief_trace(TRACE_INFO, LOG_SIM_DRV_ERR, hw_cb->simInterface, sim_dbg_str);
#endif
}

void sim_dump_fifo(sim_HW_cb *hw_cb)
{
    Data_Sync_Barrier();
#if !defined(ATEST_DRV_ENABLE) && !defined(__FPGA__)
    kal_uint32 i = 0;
    kal_uint16 tmp_buf[16];

    for (i = 0; i < 16; i++)
    {
        tmp_buf[i] = DRV_Reg(SIM0_BASE_ADDR_MTK + SIM_DBGDATA_MTK);
    }

    kal_sprintf(hw_cb->dbgStr, "%x %x %x %x %x %x %x %x %x %x %x %x %x %x %x %x\n\r",
                tmp_buf[0], tmp_buf[1], tmp_buf[2], tmp_buf[3], tmp_buf[4], tmp_buf[5], tmp_buf[6], tmp_buf[7],
                tmp_buf[8], tmp_buf[9], tmp_buf[10], tmp_buf[11], tmp_buf[12], tmp_buf[13], tmp_buf[14], tmp_buf[15]);
    DRV_ICC_print_str(hw_cb->dbgStr);
#endif
    return;
}

void sim_dump_sim_pins(sim_HW_cb *hw_cb)
{
    kal_brief_trace(TRACE_INFO, LOG_SIM_DRV_SIM_PINS,
                    GPIO_ReadIO(GPIO_SIM1_SIMIO), GPIO_ReadIO(GPIO_SIM1_SIMRST), GPIO_ReadIO(GPIO_SIM1_SIMCLK),
                    GPIO_ReadIO(GPIO_SIM2_SIMIO), GPIO_ReadIO(GPIO_SIM2_SIMRST), GPIO_ReadIO(GPIO_SIM2_SIMCLK));

    return;
}

void sim_dump_reg(kal_uint32 trc_num, sim_HW_cb *hw_cb)
{
    Data_Sync_Barrier();
#if !defined(ATEST_DRV_ENABLE)
    // USIM
    DRV_ICC_print(hw_cb, trc_num, SIM0_BASE_ADDR_MTK, DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_VERSION_MTK),
                  DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_CTRL_MTK), DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_CONF_MTK), DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_CONFSTA_MTK));

    DRV_ICC_print(hw_cb, trc_num, DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_BRR_MTK), DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_IRQEN_MTK),
                  DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_STS_MTK), DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_RETRY_MTK), DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_TIDE_MTK));

    // DRV_ICC_print(trc_num, DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_DATA_MTK), DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_COUNT_MTK),
    DRV_ICC_print(hw_cb, trc_num, 0, DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_COUNT_MTK),
                  DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_ATIME_MTK), DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_DTIME_MTK), DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_TOUT_MTK));

    DRV_ICC_print(hw_cb, trc_num, DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_GTIME_MTK), DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_ETIME_MTK),
                  DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_EXT_TIME_MTK), DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_CGTIME_MTK), DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_COMDCTRL_MTK));

    DRV_ICC_print(hw_cb, trc_num, DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_COMDLEN_MTK), DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_LEFTLEN_MTK),
                  DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_SW1_MTK), DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_SW2_MTK), DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_ATRSTA_MTK));

    DRV_ICC_print(hw_cb, trc_num, DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_STATUS_MTK), DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_DBG_MTK), 0, 0, drv_get_current_time());

    // HDMA
    if (hw_cb->simInterface) // SIM2
    {
        DRV_ICC_print(hw_cb, trc_num, DRV_Reg32(REG_HDMA_HDCSR0), DRV_Reg32(REG_HDMA_HDSR),
                      DRV_Reg32(REG_HDMA_HDCPR), DRV_Reg32(REG_HDMA_HDCTRR1), DRV_Reg32(REG_HDMA_HDC0R1));
        DRV_ICC_print(hw_cb, trc_num, DRV_Reg32(REG_HDMA_HDC1R1), DRV_Reg32(REG_HDMA_HPRGA0R1),
                      DRV_Reg32(REG_HDMA_HPRGA1R1), DRV_Reg32(REG_HDMA_HCCR1), DRV_Reg32(REG_HDMA_HDCPR1));
    }
    else   // SIM1
    {
        DRV_ICC_print(hw_cb, trc_num, DRV_Reg32(REG_HDMA_HDCSR0), DRV_Reg32(REG_HDMA_HDSR),
                      DRV_Reg32(REG_HDMA_HDCPR), DRV_Reg32(REG_HDMA_HDCTRR0), DRV_Reg32(REG_HDMA_HDC0R0));
        DRV_ICC_print(hw_cb, trc_num, DRV_Reg32(REG_HDMA_HDC1R0), DRV_Reg32(REG_HDMA_HPRGA0R0),
                      DRV_Reg32(REG_HDMA_HPRGA1R0), DRV_Reg32(REG_HDMA_HCCR0), DRV_Reg32(REG_HDMA_HDCPR0));
    }

    // GPIO MODE
    sim_dump_gpio(hw_cb);
    sim_dump_eint(hw_cb);

    // PDN
    // low power vsim
    // 26MHz
#endif // #if !defined(ATEST_DRV_ENABLE)
    return;
}
void sim_dump_gpio(sim_HW_cb *hw_cb)
{
    kal_char *dbgStr;

    if (kal_if_hisr())
    {
        dbgStr = hw_cb->hisrDbgStr;
    }
    else
    {
        dbgStr = hw_cb->dbgStr;
    }

    kal_sprintf(dbgStr, "[SIM_DRV][GPIO] : %x, %x, %x, %x, %x, %x\n\r", DRV_Reg32(REG_GPIO_MODE_0_FOR_SIM), DRV_Reg32(REG_GPIO_MODE_1_FOR_SIM),
                DRV_Reg32(REG_GPIO_IES_0_FOR_SIM), DRV_Reg32(REG_GPIO_IES_1_FOR_SIM), DRV_Reg32(REG_GPIO_SMT_0_FOR_SIM), DRV_Reg32(REG_GPIO_SMT_1_FOR_SIM));
    DRV_ICC_print_str(dbgStr);

    kal_sprintf(dbgStr, "[SIM_DRV][GPIO] : %x, %x, %x, %x, %x, %x\n\r", DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM), DRV_Reg32(REG_GPIO_DRV_1_FOR_SIM),
                DRV_Reg32(REG_GPIO_RDSEL_0_FOR_SIM), DRV_Reg32(REG_GPIO_RDSEL_1_FOR_SIM), DRV_Reg32(REG_GPIO_TDSEL_0_FOR_SIM), DRV_Reg32(REG_GPIO_TDSEL_1_FOR_SIM));
    DRV_ICC_print_str(dbgStr);

    kal_sprintf(dbgStr, "[SIM_DRV][GPIO] : %x, %x\n\r", DRV_Reg32(REG_GPIO_PUPD_0_FOR_SIM), DRV_Reg32(REG_GPIO_PUPD_1_FOR_SIM));
    DRV_ICC_print_str(dbgStr);

    return;
}

void sim_dump_eint(sim_HW_cb *hw_cb)
{
#if defined(__SIM_HOT_SWAP_SUPPORT__)
#if defined(ELBRUS)
#define GPIO_FOR_SIM1_EINT	23
#define GPIO_FOR_SIM2_EINT	24
#define GPIO_FOR_SIM3_EINT	9
#define GPIO_FOR_CODEC_EINT	0
#elif defined(MT6799)
#define GPIO_FOR_SIM1_EINT	131
#define GPIO_FOR_SIM2_EINT	130
#define GPIO_FOR_SIM3_EINT	0
#define GPIO_FOR_CODEC_EINT	185
#elif defined(MT6763)
#define GPIO_FOR_SIM1_EINT	47
#define GPIO_FOR_SIM2_EINT	46
#define GPIO_FOR_SIM3_EINT	0
#define GPIO_FOR_CODEC_EINT	20
#elif defined(MT6739)
#define GPIO_FOR_SIM1_EINT	18
#define GPIO_FOR_SIM2_EINT	19
#define GPIO_FOR_SIM3_EINT	0
#define GPIO_FOR_CODEC_EINT	127
#elif defined(MT6771)
#define GPIO_FOR_SIM1_EINT	47
#define GPIO_FOR_SIM2_EINT	46
#define GPIO_FOR_SIM3_EINT	0
#define GPIO_FOR_CODEC_EINT	0
#elif defined(MT6765) || defined(MT6761)|| defined(MT6768)
#define GPIO_FOR_SIM1_EINT	47
#define GPIO_FOR_SIM2_EINT	46
#define GPIO_FOR_SIM3_EINT	0
#define GPIO_FOR_CODEC_EINT	10
#elif defined(MT6295M) || defined(MT3967)
#define GPIO_FOR_SIM1_EINT	0
#define GPIO_FOR_SIM2_EINT	0
#define GPIO_FOR_SIM3_EINT	0
#define GPIO_FOR_CODEC_EINT	0
#else
#define GPIO_FOR_SIM1_EINT	0
#define GPIO_FOR_SIM2_EINT	0
#define GPIO_FOR_SIM3_EINT	0
#define GPIO_FOR_CODEC_EINT	0
#endif

    // IO: sim1, sim2, sim3, codec
    kal_brief_trace(TRACE_INFO, LOG_SIM_DRV_EINT,
                    GPIO_ReadIO(GPIO_FOR_SIM1_EINT), GPIO_ReadIO(GPIO_FOR_SIM2_EINT), GPIO_ReadIO(GPIO_FOR_SIM3_EINT), GPIO_ReadIO(GPIO_FOR_CODEC_EINT));
    // GPIO mode: sim1, sim2, sim3, codec
    kal_sprintf(hw_cb->dbgStr, "[EINT] : %x, %x, %x, %x\n\r",
                GPIO_ReturnMode(GPIO_FOR_SIM1_EINT), GPIO_ReturnMode(GPIO_FOR_SIM2_EINT), GPIO_ReturnMode(GPIO_FOR_SIM3_EINT), GPIO_ReturnMode(GPIO_FOR_CODEC_EINT));
    DRV_ICC_print_str(hw_cb->dbgStr);
#endif
    return;
}

#ifdef SIM_TOUT_REG_V2
#ifdef SIM_TOUT_REG_V3
//TOUT register's unit is 16 etu
void SIM_SetTOUT(kal_uint32 TOUT, sim_HW_cb *hw_cb)
{
    SIM_ClearBits((SIM0_BASE_ADDR_MTK + SIM_CONF_MTK), SIM_CONF_TOUTEN);
    if (TOUT < 0xffffff)
        SIM_WriteReg32((SIM0_BASE_ADDR_MTK + SIM_TOUT_MTK), ((TOUT) / 4));
    else
        SIM_WriteReg32((SIM0_BASE_ADDR_MTK + SIM_TOUT_MTK), 0xffffff);
    //Write clear
    SIM_WriteReg(SIM0_BASE_ADDR_MTK + SIM_STS_MTK, SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_STS_MTK));
    //SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_STS_MTK);
    SIM_SetBits((SIM0_BASE_ADDR_MTK + SIM_CONF_MTK), SIM_CONF_TOUTEN);
}
#else
void SIM_SetTOUT(kal_uint32 TOUT, sim_HW_cb *hw_cb)
{
    kal_uint8 tmp;
    SIM_ClearBits((SIM0_BASE_ADDR_MTK + SIM_CONF_MTK), SIM_CONF_TOUTEN);
    if (TOUT < 0xffffff)
        SIM_WriteReg32((SIM0_BASE_ADDR_MTK + SIM_TOUT_MTK), TOUT);
    else
        SIM_WriteReg32((SIM0_BASE_ADDR_MTK + SIM_TOUT_MTK), 0xffffff);
    //Write clear
    tmp = SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_STS_MTK);
    SIM_WriteReg(SIM0_BASE_ADDR_MTK + SIM_STS_MTK, tmp);
    SIM_SetBits((SIM0_BASE_ADDR_MTK + SIM_CONF_MTK), SIM_CONF_TOUTEN);
}
#endif
#else
void SIM_SetTOUT(kal_uint32 TOUT, sim_HW_cb *hw_cb)
{
    SIM_ClearBits((SIM0_BASE_ADDR_MTK + SIM_CONF_MTK), SIM_CONF_TOUTEN);
    if (TOUT < 0xffff)
        SIM_WriteReg((SIM0_BASE_ADDR_MTK + SIM_TOUT_MTK), TOUT);
    else
        SIM_WriteReg((SIM0_BASE_ADDR_MTK + SIM_TOUT_MTK), 0xffff);
    SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_STS_MTK);
    SIM_SetBits((SIM0_BASE_ADDR_MTK + SIM_CONF_MTK), SIM_CONF_TOUTEN);
}
#endif

#ifdef SIM_REMOVE_ATR_ASSERT
void SIM_fatalErrorReporter(void *param)
{
    extern kal_bool DRV_ICC_GPTI_StartItem(kal_uint32 handle, kal_uint16 tick, void (*gptimer_func)(void *), void *parameter);
    sim_fatalErrorReport *report;
    report = param;

    kal_sprintf(report->hw_cb->hisrDbgStr, "sim fatal error on interface %d, this card is broken", report->hw_cb->simInterface);
    DRV_ICC_print_str(report->hw_cb->hisrDbgStr);
    DRV_ICC_GPTI_StartItem(report->gptHandle, SIM_FATAL_ERROR_REPORT_PERIOD, SIM_fatalErrorReporter, report);
}

void SIM_StartFaltalReport(sim_HW_cb *hw_cb)
{
    extern kal_bool DRV_ICC_GPTI_StartItem(kal_uint32 handle, kal_uint16 tick, void (*gptimer_func)(void *), void *parameter);
    extern void DRV_ICC_GPTI_StopItem(kal_uint32 handle);
    sim_fatalErrorReport *report;
    kal_uint32	gptHandle;
    Sim_Card *SimCard;

    SimCard = GET_SIM_CB(hw_cb->simInterface);

    SimCard->keepAtrFatal = KAL_TRUE;
    drv_trace8(TRACE_GROUP_4, SIM_GEMINI_GEN1, 4, __LINE__, SimCard->keepAtrFatal, SimCard->State, 0, 0, 0, 0);
    /*
    	We trigger a gpt timer to alarm this error periodically. Since this SIM card is abnormal and GPT for null-byte
    	will not be used, we can use it.
    */
    report = &sim_fatalReportArray[hw_cb->simInterface];
    gptHandle = SimCard->sim_nullByteIssueGPT;

    DRV_ICC_GPTI_StopItem(gptHandle);
    report->gptHandle = gptHandle;
    report->hw_cb = hw_cb;
    DRV_ICC_GPTI_StartItem(report->gptHandle, SIM_FATAL_ERROR_REPORT_PERIOD, SIM_fatalErrorReporter, report);

    return;
}
#endif

kal_uint32 SIM_GetCurrentTime(void)
{
    return drv_get_current_time();
}

kal_uint32 SIM_GetDurationTick(kal_uint32 previous_time, kal_uint32 current_time)
{
    return drv_get_duration_tick(previous_time, current_time);
}

void SIM_SetRXTIDE(kal_uint16 RXTIDE, sim_HW_cb *hw_cb)
{
    kal_uint16 TIDE;
    Data_Sync_Barrier();
    TIDE = SIM_Reg((SIM0_BASE_ADDR_MTK + SIM_TIDE_MTK));
    TIDE &= ~SIM_TIDE_RXMASK;
    TIDE |= (RXTIDE - 1);
    SIM_WriteReg((SIM0_BASE_ADDR_MTK + SIM_TIDE_MTK), TIDE);
}

void SIM_SetTXTIDE(kal_uint16 _TXTIDE, sim_HW_cb *hw_cb)
{
    kal_uint16 TIDE;
    Data_Sync_Barrier();
    TIDE = SIM_Reg((SIM0_BASE_ADDR_MTK + SIM_TIDE_MTK));
    TIDE &= ~SIM_TIDE_TXMASK;
    TIDE |= ((_TXTIDE + 1) << 8);
    SIM_WriteReg((SIM0_BASE_ADDR_MTK + SIM_TIDE_MTK), TIDE);
}

/*
* FUNCTION
*	L1sim_Enable_Enhanced_Speed
*
* DESCRIPTION
*   	The function must call before L1sim_Reset. Otherwise, enhance speed is disable.
*     This function can enable enhance speed mode or not.
*
* CALLS
*
* PARAMETERS
*	enable: KAL_TRUE: enable enhanced speed. KAL_FALSE: disable it.
*
* RETURNS
*	NULL
*
* GLOBALS AFFECTED
*   external_global
*/
void L1sim_Enable_Enhanced_Speed(kal_bool enable, sim_HW_cb *hw_cb)
{
    Sim_Card *SimCard;

    SimCard = GET_SIM_CB(hw_cb->simInterface);

    SimCard->PTS_check = enable;
}

/*
* FUNCTION
*	L1sim_Cmd
*
* DESCRIPTION
*   	The function is used to implement re-try command mechanism.
*
* CALLS
*
* PARAMETERS
*	txData: Pointer to the transmitted command and data.
*	txSize:	The size of the transmitted command and data from AL to driver.
*	expSize: The size of expected data from SIM
*	result: Pointer to received data
* 	rcvSize: Pointer to the size of data received
*	parityError: 1 (parity error) or 0(no parity error)
*
* RETURNS
*	status(high byte:sw1 low byte: sw2)
*
* GLOBALS AFFECTED
*   external_global
*/
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif




void *sim_get_sim_cb(kal_uint32 simInterface)
{

    return &SimCard_cb[simInterface];
}


void *sim_get_usim_cb(kal_uint32 simInterface)
{
    return &usim_cb[simInterface];
}

/*below is the adaptation to GPT driver*/
kal_uint8 DRV_ICC_GPTI_GetHandle(kal_uint32 *handle)
{
    *handle = DclSGPT_Open(DCL_GPT_CB, 0);
    return 0;
}

void DRV_ICC_GPTI_StopItem(kal_uint32 handle)
{
    DclSGPT_Control(handle, SGPT_CMD_STOP, 0);
}

kal_bool DRV_ICC_GPTI_StartItem(kal_uint32 handle, kal_uint16 tick, void (*gptimer_func)(void *), void *parameter)
{
    SGPT_CTRL_START_T ctrlVariable;
    DCL_STATUS status;

#if defined(__HAPS_FPGA_CLK_ADJUST__)
    ctrlVariable.u2Tick = kal_milli_secs_to_ticks_real(tick * 10);
#else
    ctrlVariable.u2Tick = tick;
#endif
    ctrlVariable.pfCallback = gptimer_func;
    ctrlVariable.vPara = parameter;
    status = DclSGPT_Control(handle, SGPT_CMD_START, (DCL_CTRL_DATA_T *)&ctrlVariable);
    if (STATUS_OK == status)
        return KAL_TRUE;
    else
        return KAL_FALSE;
}

#ifdef __FPGA__
#else
/*below is the adaptation to PMU driver*/
void DRV_ICC_PMU_INIT()
{
    simPmuHandle = DclPMU_Open(DCL_PMU, FLAGS_NONE);
}

void DRV_ICC_PMU_setVolt(kal_uint32 hwInterfaceNo, usim_power_enum volt)
{
    PMU_CTRL_LDO_BUCK_SET_VOLTAGE_EN val;
    sim_HW_cb *hw_cb = (sim_HW_cb *)(hwCbArray[hwInterfaceNo]);

#ifdef DUAL_MCU_SIM_V1
#else
#if defined(MT6595)
    PMU_CTRL_MISC_GET_HW_VERSION get_version;

    get_version.chip_name = 0x6331;
    DRV_ICC_PMU_INIT();
    DclPMU_Control(simPmuHandle, MISC_GET_HW_VERSION, (DCL_CTRL_DATA_T *) &get_version);
    DclPMU_Close(simPmuHandle);
#endif
#endif


#if defined(MT6595)
    if (get_version.version == PMIC_ECO_E1)
    {
#endif
        switch (volt)
        {
            case CLASS_B_30V:
                val.voltage = PMU_VOLT_03_000000_V;
                kal_sprintf(hw_cb->dbgStr, "vsim%d:3.0V\n\r", hwInterfaceNo);
                DRV_ICC_print_str(hw_cb->dbgStr);
                break;
            case CLASS_C_18V:
                val.voltage = PMU_VOLT_01_800000_V;
                kal_sprintf(hw_cb->dbgStr, "vsim%d:1.8V\n\r", hwInterfaceNo);
                DRV_ICC_print_str(hw_cb->dbgStr);
                break;
            default:
                ASSERT(0);
                break;
        }
#if defined(MT6595)
    }
    else if (get_version.version >= PMIC_ECO_E2)
    {
        switch (volt)
        {
            case CLASS_B_30V:
#if defined(__CGLA__)
                val.voltage = PMU_VOLT_03_100000_V;
                kal_sprintf(hw_cb->dbgStr, "vsim%d:3.1V\n\r", hwInterfaceNo);
#else
                val.voltage = PMU_VOLT_03_000000_V;
                kal_sprintf(hw_cb->dbgStr, "vsim%d:3.0V\n\r", hwInterfaceNo);
#endif
                DRV_ICC_print_str(hw_cb->dbgStr);
                break;
            case CLASS_C_18V:
#if defined(__CGLA__)
                val.voltage = PMU_VOLT_01_860000_V;
                kal_sprintf(hw_cb->dbgStr, "vsim%d:1.86V\n\r", hwInterfaceNo);
#else
                val.voltage = PMU_VOLT_01_800000_V;
                kal_sprintf(hw_cb->dbgStr, "vsim%d:1.8V\n\r", hwInterfaceNo);
#endif
                DRV_ICC_print_str(hw_cb->dbgStr);
                break;
            default:
                ASSERT(0);
                break;
        }
    }
#endif
    /*select corresponding VSIM module according to hwInterfaceNo*/
    if (0 == hwInterfaceNo)
    {
        val.mod = VSIM;
    }
    else if (1 == hwInterfaceNo)
    {
        val.mod = VSIM2;
    }

    /*select corresponding cmd according to platform characteristic*/
#ifdef DUAL_MCU_SIM_V1
    DclPMU_Control(simPmuHandle, LDO_BUCK_SET_VOLTAGE_EN, (DCL_CTRL_DATA_T *) &val);
#else
    DRV_ICC_PMU_INIT();
    DclPMU_Control(simPmuHandle, LDO_BUCK_SET_VOLTAGE, (DCL_CTRL_DATA_T *) &val);
    DclPMU_Close(simPmuHandle);
#endif

}
#endif // __FPGA__

#if defined(SIM_LOCK_SRCCLK_FOR_NONE_STOP_CLK_CARD)
#if !defined(DRV_SIM_6290_SERIES) && defined(DRV_SIM_LTE_SERIES)
    kal_uint8 handleNumSrclkSwCtrl = 0;
#endif
kal_bool simSrcClkLockSts[4] = {KAL_FALSE, KAL_FALSE, KAL_FALSE, KAL_FALSE};
void DRV_ICC_CLKSRC_Lock(kal_uint32 hwInterfaceNo, kal_bool fLock)
{
    kal_bool fShouldLock;

    simSrcClkLockSts[hwInterfaceNo] = fLock;
    fShouldLock = simSrcClkLockSts[0] + simSrcClkLockSts[1] + simSrcClkLockSts[2] + simSrcClkLockSts[3];

#if !defined(DRV_SIM_6290_SERIES) && defined(DRV_SIM_LTE_SERIES)
    if (handleNumSrclkSwCtrl == 0)
    {
        handleNumSrclkSwCtrl = MD_TOPSM_SRCLK_SW_Control_GetHandle("USIM");
    }
#endif
    if (fShouldLock)
    {
        // Lock 26MHz when sleep
#if defined(DRV_SIM_6290_SERIES)
        MD_TOPSM_SRCLK_SW_Control(KAL_TRUE);
#elif !defined(DRV_SIM_6290_SERIES) && defined(DRV_SIM_LTE_SERIES)
        MD_TOPSM_SRCLK_SW_Control(handleNumSrclkSwCtrl, KAL_TRUE);
#endif
    }
    else
    {
        // 26MHz can off when sleep
#if defined(DRV_SIM_6290_SERIES)
        MD_TOPSM_SRCLK_SW_Control(KAL_FALSE);
#elif !defined(DRV_SIM_6290_SERIES) && defined(DRV_SIM_LTE_SERIES)
        MD_TOPSM_SRCLK_SW_Control(handleNumSrclkSwCtrl, KAL_FALSE);
#endif
    }
}
#endif // defined(SIM_LOCK_SRCCLK_FOR_NONE_STOP_CLK_CARD)

#if !defined(__FPGA__)
void DRV_ICC_PMU_switch(kal_uint32 hwInterfaceNo, kal_bool enable)
{
    PMU_CTRL_LDO_BUCK_SET_EN val;
    val.enable = enable;
    sim_HW_cb *hw_cb = (sim_HW_cb *)(hwCbArray[hwInterfaceNo]);

    /*select corresponding VSIM module according to hwInterfaceNo*/
    if (0 == hwInterfaceNo)
    {
        val.mod = VSIM;
    }
    else if (1 == hwInterfaceNo)
    {
        val.mod = VSIM2;
    }

    if (enable)
    {
        sim_custom_setting_before_turning_on_vsim(hwInterfaceNo);
        kal_sprintf(hw_cb->dbgStr, "turn on vsim%d\n\r", hwInterfaceNo);
    }
    else
    {
        kal_sprintf(hw_cb->dbgStr, "turn off vsim%d\n\r", hwInterfaceNo);
    }
    DRV_ICC_print_str(hw_cb->dbgStr);

    /*select corresponding cmd according to platform characteristic*/
#ifdef DUAL_MCU_SIM_V1
    /*in DUAL_MCU_SIM_V1, LDO has been enable when setting voltage, just need to handle switch off case */
    if (KAL_FALSE == enable)
        DclPMU_Control(simPmuHandle, LDO_BUCK_SET_EN, (DCL_CTRL_DATA_T *)&val);
#else
    DRV_ICC_PMU_INIT();
#if defined(MT6290)
    // patch for [ALPS01457816] FTA test 5.1.3: When USIM is deactivating, there are CLK/RST gltiches after VSIM is turned off
    if (!enable)
    {
        PMU_CTRL_LDO_BUCK_SET_VOLTAGE_EN val_106;
        val_106.voltage = PMU_VOLT_01_060000_V;
        if (0 == hwInterfaceNo) val_106.mod = VSIM;
        else if (1 == hwInterfaceNo) val_106.mod = VSIM2;
        DclPMU_Control(simPmuHandle, LDO_BUCK_SET_VOLTAGE, (DCL_CTRL_DATA_T *) &val_106);
        kal_sprintf(hw_cb->dbgStr, "vsim%d:1.06V\n\r", hwInterfaceNo);
        DRV_ICC_print_str(hw_cb->dbgStr);
        kal_sleep_task(KAL_MILLISECS_PER_TICK_REAL);
    }
#endif
    DclPMU_Control(simPmuHandle, LDO_BUCK_SET_EN, (DCL_CTRL_DATA_T *)&val);
    DclPMU_Close(simPmuHandle);
#endif

    if (!enable)
    {
        //kal_sleep_task(KAL_MILLISECS_PER_TICK_REAL); // ansel: useless
        sim_custom_setting_after_turning_off_vsim(hwInterfaceNo);
    }
}
#endif /*__FPGA__*/

void DRV_ICC_PMU_SelSRCLKEN(kal_uint32 hwInterfaceNo, kal_uint16 srcLkEn)
{
#if defined(SIM_DRV_SRCCLK_LOW_POWER)
    PMU_CTRL_LDO_BUCK_SET_SRCLK_MODE_SEL val;

    val.sel = SRCLKEN_IN1_SEL;

    if (0 == hwInterfaceNo)
    {
        val.mod = VSIM;
    }
    else if (1 == hwInterfaceNo)
    {
        val.mod = VSIM2;
    }

    DclPMU_Control(simPmuHandle, LDO_BUCK_SET_SRCLK_MODE_SEL, (DCL_CTRL_DATA_T *)&val);
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
/* under construction !*/
/* under construction !*/
#ifdef DUAL_MCU_SIM_V1
/* under construction !*/
/* under construction !*/
#else
/* under construction !*/
#endif
#endif
#endif
}


void DRV_ICC_PMU_Set_SW_LpMode(kal_uint32 hwInterfaceNo, kal_bool mode)
{
#if defined(__DRV_SIM_LP_MODE__)
    PMU_CTRL_LDO_BUCK_SET_LP_MODE_SET val;

    // select corresponding VSIM module according to hwInterfaceNo
    if (0 == hwInterfaceNo)
    {
        val.mod = VSIM;
    }
    else if (1 == hwInterfaceNo)
    {
        val.mod = VSIM2;
    }

    val.enable = mode;

    // select corresponding cmd according to platform characteristic
    DRV_ICC_PMU_INIT();
    DclPMU_Control(simPmuHandle, LDO_BUCK_SET_LP_MODE_SET, (DCL_CTRL_DATA_T *) &val);
    DclPMU_Close(simPmuHandle);
#endif
    return;
}

void DRV_ICC_PMU_SetLpSel(kal_uint32 hwInterfaceNo, kal_bool mode)
{
#if defined(__DRV_SIM_LP_MODE__)
    PMU_CTRL_LDO_BUCK_SET_LP_SEL val;

    if ((kal_bool) SW_CONTROL == mode)
    {
        val.onSel = SW_CONTROL;
    }
    else
    {
        val.onSel = SRCLKEN_CONTROL;
    }

    // select corresponding VSIM module according to hwInterfaceNo
    if (0 == hwInterfaceNo)
    {
        val.mod = VSIM;
    }
    else if (1 == hwInterfaceNo)
    {
        val.mod = VSIM2;
    }

    // select corresponding cmd according to platform characteristic
#if defined(DUAL_MCU_SIM_V1)
    DclPMU_Control(simPmuHandle, LDO_BUCK_SET_LP_SEL, (DCL_CTRL_DATA_T *) &val);
#else
    DRV_ICC_PMU_INIT();
    DclPMU_Control(simPmuHandle, LDO_BUCK_SET_LP_SEL, (DCL_CTRL_DATA_T *) &val);
    DclPMU_Close(simPmuHandle);
#endif
#endif
    return;
}

#if defined(__DRV_SIM_LP_MODE__)
void DRV_ICC_SetLp(kal_uint32 hwInterfaceNo, kal_bool isOn)
{
    //sim_HW_cb *hw_cb = (sim_HW_cb *)(hwCbArray[hwInterfaceNo]);
#if defined(DRV_SIM_6292_SERIES) || defined(DRV_SIM_6293_SERIES) || defined(DRV_SIM_6295_SERIES)
#if defined(SIM_DRV_SWITCH_MT6306)
#if defined(__SIM_DRV_CO_LOAD_MT6306__)
    if (sim_connectMT6306 == KAL_TRUE)
    {
#endif
        return;
#if defined(__SIM_DRV_CO_LOAD_MT6306__)
    }
#endif
#endif
    //kal_sprintf(hw_cb->dbgStr, "[SIM_DRV:%d] %s, %d\n\r", hwInterfaceNo, __FUNCTION__, isOn);
    if (isOn == KAL_TRUE)
    {
        DRV_ICC_PMU_Set_SW_LpMode(hwInterfaceNo, 1);
    }
    else
    {
        DRV_ICC_PMU_Set_SW_LpMode(hwInterfaceNo, 0);
    }
#else
    if (isOn == KAL_TRUE)
    {
        DRV_ICC_PMU_SelSRCLKEN(hwInterfaceNo, 0);
        DRV_ICC_PMU_Set_SW_LpMode(hwInterfaceNo, 1);
        DRV_ICC_PMU_SetLpSel(hwInterfaceNo, 0);
        //kal_sprintf(hw_cb->dbgStr, "enable Sim LP mode, if:%d pmic:0x0a22=0x%x pmic:0x0a24=0x%x", hwInterfaceNo, dcl_pmic6325_byte_return(0x0a22), dcl_pmic6325_byte_return(0x0a24));
    }
    else
    {
        DRV_ICC_PMU_SelSRCLKEN(hwInterfaceNo, 0);
        DRV_ICC_PMU_Set_SW_LpMode(hwInterfaceNo, 0);
        DRV_ICC_PMU_SetLpSel(hwInterfaceNo, 1);
        //kal_sprintf(hw_cb->dbgStr, "disable Sim LP mode, if:%d pmic:0x0a22=0x%x pmic:0x0a24=0x%x", hwInterfaceNo, dcl_pmic6325_byte_return(0x0a22), dcl_pmic6325_byte_return(0x0a24));
    }
#endif
    //DRV_ICC_print_str(hw_cb->dbgStr);

    return;
}
#endif // #ifdef __DRV_SIM_LP_MODE__

kal_uint8 DRV_ICC_makeCLA(kal_uint8 CLAHighBits, kal_uint8 CLAFromApdu)
{
    /*
    	CLA has different combinations on different spec version, especiaaly from release 7.
    	We should compose different CLA according to the CLA from SIM task APDU.
    	We plan to implement as following, but currently we only implement the part before R7, and assert the case after R7.

    	If(b7 == 0) //before release 7
    	{
    		//CLA of GET RESPONSE could be 0x0X

    		Copy b4~b1 of previous command
    		Bitwise OR with 0x0X to get CLA of GET RESPONSE

    	}
    	Else if(b7 ==1) //release 7 or later
    	{
    		//CLA of GET RESPONSE could be 0x4X, 0x6X

    		Copy b6, b4~b1 of previous command
    		Bitwise OR with 0x4X to get CLA of GET RESPONSE

    	}
    	Else //should not happen in current release
    	{
    		ASSERT(0);
    	}
    */
    if (0 == (CLAFromApdu & 0x40))  //before release 7
    {
        return ((CLAHighBits & 0xf0) | (CLAFromApdu & 0x03)); // for CMCC NFC
    }
    else if (0x40 == (CLAFromApdu & 0x40))   // For Extended AT Command
    {
        return ((CLAHighBits & 0xf0) | (CLAFromApdu & 0x4f));
    }
    /*
    else if (1 == (CLAFromApdu & 0x40))   //release 7 or later
    {
        ASSERT(0);
    }
    */
    else
    {
        ASSERT(0);
    }

    return 0;
}

#if !defined(SIM_DRV_HISR_INIT_CENTRALIZATION)
void DRV_ICC_Interface_init_HISR(SIM_ICC_APPLICATION application)
{
    sim_HW_cb	*hw_cb;
    kal_uint32 simInterface = sim_get_logicalNum_from_app(application);
    hw_cb = &simHWCbArray[simInterface];

    l1usim_init_hisr(hw_cb);
    l1sim_init_hisr(hw_cb);
}
#endif

void DRV_ICC_interface_init(SIM_ICC_APPLICATION application)
{
    sim_HW_cb	*hw_cb;
    kal_uint32 simInterface;
#if defined(SIM_DRV_SWITCH_MT6306) || defined(SIM_DRV_SWITCH_MT6302)
    kal_uint32 peerInterface;
#endif
    kal_uint32 MT6302Info;
    simInterface = sim_get_logicalNum_from_app(application);

    hw_cb = &simHWCbArray[simInterface];
    hwCbArray[simInterface] = (kal_uint32)hw_cb;

    hw_cb->PollTimerStart = KAL_FALSE;
    hw_cb->PollTimerPluggedOut = KAL_FALSE;
    hw_cb->PollTimerEnd = KAL_TRUE;
    hw_cb->sim_task_group = CORE1;

    if (MTK_SIMIF0 == sim_get_hwCtrl_from_logicalNum(simInterface))
    {
        hw_cb->mtk_baseAddr = SIM_base;

#if !defined(DRV_SIM_LTE_SERIES)
#ifdef __OLD_PDN_ARCH__
        hw_cb->mtk_pdnAddr = DRVPDN_CON1;
        hw_cb->mtk_pdnBit = DRVPDN_CON1_SIM;
#endif
        hw_cb->mtk_pdnDevice = PDN_SIM;
        hw_cb->mtk_dmaMaster = DMA_SIM;
#endif /*DRV_SIM_6290_SERIES*/


        hw_cb->mtk_lisrCode = IRQ_USIM0_CODE;
    }
    else if (MTK_SIMIF1 == sim_get_hwCtrl_from_logicalNum(simInterface))
    {
#if (2 == SIM_DRV_MTK_INTERFACE_NUM)
        hw_cb->mtk_baseAddr = SIM2_base;

#if !defined(DRV_SIM_LTE_SERIES)
#ifdef __OLD_PDN_ARCH__
        hw_cb->mtk_pdnAddr = DRVPDN_CON0;
        hw_cb->mtk_pdnBit = DRVPDN_CON0_SIM2;
#endif
        hw_cb->mtk_pdnDevice = PDN_SIM2;
        hw_cb->mtk_dmaMaster = DMA_SIM2;
#endif /*DRV_SIM_6290_SERIES*/

        hw_cb->mtk_lisrCode = IRQ_USIM1_CODE;
#else
        /*for the platform that has single SIM controller, we shouldn't uses MTK_SIMIF1*/
        ASSERT(0);
#endif /*(2 == SIM_DRV_MTK_INTERFACE_NUM)*/

    }
    hw_cb->simInterface = simInterface;
#if defined(SIM_DRV_4_33MHZ_SCLK)
    hw_cb->canUse_4_33_SCLK = KAL_FALSE;
#endif
#if defined(LPWR_SLIM)
    hw_cb->smHandler = SLEEP_CTL_USIM0 + hw_cb->simInterface;
#endif // #if defined(LPWR_SLIM)

    MT6302Info = sim_get_MT6302_from_logicalNum(simInterface);
    if (SIM_ICC_MT6302_NONE == MT6302Info)
    {
        sim_driverTable[simInterface] = &sim_ctrlDriver_MTK;
        hw_cb->MT6302ChipNo = SIM_MT6302_INFO_UDF;
        hw_cb->MT6302PortNo = SIM_MT6302_INFO_UDF;
        hw_cb->MT6302PeerInterfaceCb = 0x0;
        /*
        	this driver need to know which logical interface he is service to, so we have to create a shortcut from hw to logical interface.
        	Since this information will be used in HISR and if we don't create the shortchut, we will take lots time search custom table.
        */
        sim_mtkIf2Logical[sim_get_hwCtrl_from_logicalNum(simInterface)] = simInterface;
    }
    else if ((MT6302Info >> 16) > KAL_TRUE)
    {
        /* Judge if support 6306 or 6314 */
        switch ((MT6302Info >> 16) & 0x000000ff)
        {
            case SIM_SWITCH_6306:
#if defined(SIM_DRV_SWITCH_MT6306)
                sim_driverTable[simInterface] = &sim_ctrlDriver_MT6306;
                hw_cb->simSwitchChipNo = ((MT6302Info >> 8) & 0x000000ff);
                hw_cb->simSwitchPortNo = (MT6302Info & 0x000000ff);
                peerInterface = sim_get_MT6302PeerInterface(hw_cb->simSwitchChipNo, 1 - hw_cb->simSwitchPortNo);
                hw_cb->simSwitchPeerInterfaceCb = &simHWCbArray[peerInterface];
                sim_MT6306_init();
#endif
                break;
#if !defined(DRV_SIM_LTE_SERIES)
            case 3://SIM_SWITCH_6314:
                sim_driverTable[simInterface] = &sim_ctrlDriver_AW6314;
                hw_cb-> simSwitchChipNo = ((MT6302Info >> 8)	& 0x000000ff);
                hw_cb-> simSwitchPortNo = (MT6302Info & 0x000000ff);
                sim_AW6314_init();
                break;
#endif /*DRV_SIM_6290_SERIES*/
            default:
                break;
        }
    }
    else
    {
#ifdef SIM_DRV_SWITCH_MT6302
        sim_driverTable[simInterface] = &sim_ctrlDriver_MT6302;
        hw_cb->MT6302ChipNo = ((MT6302Info >> 8)  & 0x000000ff);
        hw_cb->MT6302PortNo = (MT6302Info & 0x000000ff);
        peerInterface = sim_get_MT6302PeerInterface(MT6302Info >> 8, 1 - (MT6302Info & 0x000000ff));
        hw_cb->MT6302PeerInterfaceCb = &simHWCbArray[peerInterface];

        sim_MT6302_init();
#endif
    }
#if !defined(SIM_DRV_HISR_INIT_CENTRALIZATION)
    DRV_ICC_Interface_init_HISR(application);
#endif
    if (hw_cb->spinlockid == 0)
    {
        if (application == SIM_ICC_APPLICATION_PHONE1)
        {
            hw_cb->spinlockid = kal_create_spinlock("usim1_spin");
        }
        else if (application == SIM_ICC_APPLICATION_PHONE2)
        {
            hw_cb->spinlockid = kal_create_spinlock("usim2_spin");
        }
        else if (application == SIM_ICC_APPLICATION_PHONE3)
        {
            hw_cb->spinlockid = kal_create_spinlock("usim3_spin");
        }
        else if (application == SIM_ICC_APPLICATION_PHONE4)
        {
            hw_cb->spinlockid = kal_create_spinlock("usim4_spin");
        }
        else ASSERT(0);
    }

#if defined(__SIM_HOT_SWAP_SUPPORT__)
    if (hw_cb->spinlockid_sim_hot_swap == 0)
    {
        if (application == SIM_ICC_APPLICATION_PHONE1)
        {
            hw_cb->spinlockid_sim_hot_swap = kal_create_spinlock("slot1_spin");
        }
        else if (application == SIM_ICC_APPLICATION_PHONE2)
        {
            hw_cb->spinlockid_sim_hot_swap = kal_create_spinlock("slot2_spin");
        }
        else if (application == SIM_ICC_APPLICATION_PHONE3)
        {
            hw_cb->spinlockid_sim_hot_swap = kal_create_spinlock("slot3_spin");
        }
        else if (application == SIM_ICC_APPLICATION_PHONE4)
        {
            hw_cb->spinlockid_sim_hot_swap = kal_create_spinlock("slot4_spin");
        }
        else ASSERT(0);
    }
#if defined(__SIM_HOT_SWAP_POLL_TIMER__)
    if (spinlockid_poll_timer == 0)
    {
        spinlockid_poll_timer = kal_create_spinlock("sim_poll_timer");
    }
#endif
#endif

#if (defined(DRV_SIM_6292_SERIES) || defined(DRV_SIM_6293_SERIES) || defined(DRV_SIM_6295_SERIES)) && defined(SIM_DRV_SWITCH_MT6306)
    if (spinlockid_mt6306_race_protect[0] == 0)
    {
        spinlockid_mt6306_race_protect[0] = kal_create_spinlock("mt6306_rp_0");
        spinlockid_mt6306_race_protect[1] = kal_create_spinlock("mt6306_rp_1");
        spinlockid_mt6306_race_protect[2] = kal_create_spinlock("mt6306_rp_2");
        spinlockid_mt6306_race_protect[3] = kal_create_spinlock("mt6306_rp_3");
        spinlockid_mt6306_race_protect[4] = kal_create_spinlock("mt6306_rp_4");
        spinlockid_mt6306_race_protect[5] = kal_create_spinlock("mt6306_rp_5");
        spinlockid_mt6306_race_protect[6] = kal_create_spinlock("mt6306_rp_6");
        spinlockid_mt6306_race_protect[7] = kal_create_spinlock("mt6306_rp_7");
    }
#endif

#if defined(ELBRUS) || defined(MT6799)
    // use 26MHz as SIM clock src
    DRV_WriteReg32(BASE_ADDR_MDPERIMISC + 0xF8, DRV_Reg32(BASE_ADDR_MDPERIMISC + 0xF8) | 0x3);
#elif defined(MT6739)
    // clear R0, Set R1
    DRV_WriteReg32(REG_GPIO_R0_CFG0_CLR_FOR_SIM, 0x3F00);
    DRV_WriteReg32(REG_GPIO_R1_CFG0_SET_FOR_SIM, 0x3F00);
#elif defined(MT6765) || defined(MT6761)
    /* Use default value: Pull UP 5Kohm for SIO */
#elif defined(MT6768)
    // clear R0, Set R1
    DRV_WriteReg32(REG_GPIO_R0_CFG0_CLR, 0xFC0);
    DRV_WriteReg32(REG_GPIO_R1_CFG0_SET, 0xFC0);
    // set SR as 2b'10
    DRV_WriteReg32(REG_GPIO_SR_CFG0_CLR, 0x3FFC0);
    DRV_WriteReg32(REG_GPIO_SR_CFG0_SET, 0x2AA80);
#endif

    Data_Sync_Barrier();
}

kal_uint32 sim_get_logical_from_SIMIF(kal_uint32 HWIf)
{
    return sim_mtkIf2Logical[HWIf];
}

void sim_set_logical_to_SIMIF(kal_uint32 HWIf, kal_uint32 logical)
{
    if (SIM_DRV_MTK_INTERFACE_NUM <= HWIf)
        ASSERT(0);
    if (DRV_SIM_MAX_LOGICAL_INTERFACE <= logical)
        ASSERT(0);

    sim_mtkIf2Logical[HWIf] = logical;
}

sim_HW_cb *sim_get_hwCb(kal_uint32 simInterface)
{
    return &simHWCbArray[simInterface];
}

void sim_init_hwCb()
{
    kal_uint32 loopIndex;
    for (loopIndex = 0; DRV_SIM_MAX_LOGICAL_INTERFACE > loopIndex; loopIndex++)
    {
        simHWCbArray[loopIndex].head = SIM_HW_CB_HEAD;
        simHWCbArray[loopIndex].tail = SIM_HW_CB_TAIL;
    }
}

#ifdef IC_MODULE_TEST
typedef enum
{
    SIM_SLT_UNTEST,
    SIM_SLT_FAIL,
    SIM_SLT_PASS,
} sim_slt_rlt_enum;
sim_slt_rlt_enum sltRlt[DRV_SIM_MAX_LOGICAL_INTERFACE] = {SIM_SLT_UNTEST, SIM_SLT_UNTEST,
                                                          SIM_SLT_UNTEST, SIM_SLT_UNTEST
                                                         };
kal_bool isSimSltFailSet[DRV_SIM_MAX_LOGICAL_INTERFACE] = {KAL_FALSE, KAL_FALSE,
                                                           KAL_FALSE, KAL_FALSE
                                                          };
extern void module_test_print(char *fmt, ...);
void L1sim_Set_Slt_Rlt(kal_bool rlt, SIM_ICC_APPLICATION application)
{
    kal_uint32 simInterface;
    simInterface = sim_get_logicalNum_from_app(application);

    /* If any time slt test result is fail, keep fail result */
    if (isSimSltFailSet[simInterface] == KAL_TRUE)
        return;

    if (rlt == KAL_FALSE)
    {
        sltRlt[simInterface] = SIM_SLT_FAIL;
        isSimSltFailSet[simInterface] = KAL_TRUE;
//		module_test_print("\r\n");
//		module_test_print("MT6256 SLT Test 8 FALSE\r\n");

    }
    else
    {
        sltRlt[simInterface] = SIM_SLT_PASS;
//		module_test_print("\r\n");
//		module_test_print("MT6256 SLT Test 8 TRUE\r\n");

    }
}

kal_bool SIM_ModuleTest_Report(void)
{
    kal_uint8 i;
    kal_bool rlt = KAL_TRUE;

    for (i = 0; i < sim_get_ToalInterfaceCount(); i++)
    {
        /* If any interface slt result is fail, just return fail */
        if (sltRlt[i] != SIM_SLT_PASS)
        {
            rlt = KAL_FALSE;
            break;
        }
    }
    return rlt;
}
#endif

/*
* FUNCTION
*	DRV_ICC_Calc_WWT
*
* DESCRIPTION
*   	The function is used to calc WWT.
*
* CALLS
*
* PARAMETERS
*	Fi: value of the clock rate conversion integer
*	Di: value of baud rate adjustment integer
*	Wi: waiting time integer
*	*WWT: work waiting time
*
* RETURNS
*	void
*
* GLOBALS AFFECTED
*   external_global
*/
void DRV_ICC_Calc_WWT(kal_uint16 Fi, kal_uint8 Di,  kal_uint8 Wi, kal_uint32 *WWT)
{
    switch (Fi)
    {
        case 372:
            /*  400*Wi to cover some slow card, margin: 3% */
            *WWT = (960 * Wi + 400 * Wi) * Di;
            break;
        default:
            /*  40*Wi to cover some slow card, margin: 4% */
            *WWT = (960 * Wi + 40 * Wi) * Di;
            break;
    }
}

#if defined(SIM_DRV_IC_USB)
/*
* FUNCTION
*	DRV_ICC_GetBytes
*
* DESCRIPTION
*   	The function is used to get bytes from AP by CCCI.
*
* CALLS
*
* PARAMETERS
*	Fi: value of the clock rate conversion integer
*	Di: value of baud rate adjustment integer
*	Wi: waiting time integer
*	*WWT: work waiting time
*
* RETURNS
*	void
*
* GLOBALS AFFECTED
*   external_global
*/
kal_uint16 DRV_ICC_GetBytes(kal_uint8 *buffer, kal_uint16 length, sim_HW_cb	*hw_cb)
{
#if defined(__SMART_PHONE_MODEM__)
    kal_uint16 readLen = 0;
    kal_uint8 status;
    UART_CTRL_GET_BYTES_T data;
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);
    if (hw_cb->simInterface != 0)
        ASSERT(0);
    data.u4OwenrId = MOD_SIM;
    data.u2Length = length;
    data.puBuffaddr = buffer;
    data.pustatus = &status;
    DclSerialPort_Control(usim_dcb->uart_sim_ccci_handle, SIO_CMD_GET_BYTES, (DCL_CTRL_DATA_T*)&data);
    readLen = data.u2RetSize;

    return readLen;
#else
    return 0;
#endif /* __SMART_PHONE_MODEM__ */
}

/*
* FUNCTION
*	DRV_ICC_PutBytes
*
* DESCRIPTION
*   	The function is used to get bytes from AP by CCCI.
*
* CALLS
*
* PARAMETERS
*	Fi: value of the clock rate conversion integer
*	Di: value of baud rate adjustment integer
*	Wi: waiting time integer
*	*WWT: work waiting time
*
* RETURNS
*	void
*
* GLOBALS AFFECTED
*   external_global
*/
kal_uint16 SIM_icusb_PutBytes(kal_uint8 *buffer, kal_uint16 length, sim_HW_cb	*hw_cb)
{
#if defined(__SMART_PHONE_MODEM__)
    kal_uint16 writeLen = 0;
    UART_CTRL_PUT_BYTES_T data;
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);
    if (hw_cb->simInterface != 0)
        ASSERT(0);
    data.u4OwenrId = MOD_SIM;
    data.u2Length = length;
    data.puBuffaddr = buffer;
    DclSerialPort_Control(usim_dcb->uart_sim_ccci_handle, SIO_CMD_PUT_BYTES, (DCL_CTRL_DATA_T*)&data);
    writeLen =  data.u2RetSize;
    return writeLen;
#else
    return 0;
#endif
}

void SIM_icusb_Timeout(void *parameter)
{
    kal_int32 SIM_ICUSB_Timeout = 0;
    ASSERT(SIM_ICUSB_Timeout);
}
kal_uint16 SIM_icusb_GetAllBytes(kal_uint8 *buffer, kal_uint16 length, sim_HW_cb *hw_cb)
{
    /* totalLen: amount of readLen
       readLen: one time read length
       expLen: total length we wish to read, set volt is 0x8
       lastLen: how many length we still need to read */
    kal_uint32 totalLen = 0, readLen = 0, expLen = 0, lastLen = 0, endCnt = 0;
    kal_uint8 *buf_ptr;
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    expLen = lastLen = length;
    buf_ptr = buffer;
    while (totalLen != expLen)
    {
        /* use Gpt timer to check if we did not receive bytes larger than 3s*/
        DRV_ICC_GPTI_StartItem(usim_dcb->gpt_handle, 300, SIM_icusb_Timeout, hw_cb);
        readLen = DRV_ICC_GetBytes(buffer, lastLen, hw_cb);
        DRV_ICC_GPTI_StopItem(usim_dcb->gpt_handle);
        lastLen = expLen - readLen;
        totalLen += readLen;
        buffer += readLen;
//		if (readLen != 0)
//		  DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC64, totalLen, readLen, lastLen,expLen,0xaaaaaaa1);
        kal_sleep_task(KAL_MILLISECS_PER_TICK_REAL);
        endCnt ++;
        if (endCnt == usim_dcb->waitingTime)
        {
            DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC74, *buf_ptr, *(buf_ptr + 1), *(buf_ptr + 2), *(buf_ptr + 3), *(buf_ptr + 4));
            DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC74, *(buf_ptr + 5), *(buf_ptr + 6), *(buf_ptr + 7), *(buf_ptr + 8), *(buf_ptr + 9));
            DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC74, totalLen, readLen, lastLen, expLen, endCnt);
            DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC74, usim_dcb->icusb_state, usim_dcb->waitingTime, 0, 0, 0);
            sim_addMsg(0xE013, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
            return SIM_ICUSB_CCCI_TIMEOUT;
            //break;
        }
    }
#if defined	SIM_DRV_IC_USB_DBG
    DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC64, *buf_ptr, *(buf_ptr + 1), *(buf_ptr + 2), *(buf_ptr + 3), *(buf_ptr + 4));
    DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC64, *(buf_ptr + 5), *(buf_ptr + 6), *(buf_ptr + 7), *(buf_ptr + 8), *(buf_ptr + 9));
    DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC64, totalLen, readLen, lastLen, expLen, endCnt);
    DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC64, usim_dcb->icusb_state, 0, 0, 0, 0);
#endif
    return totalLen;
}

kal_uint32 SIM_icusb_errorHandling(kal_uint8 *buffer, kal_uint16 length, sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;
    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    /* just used to print error message */
    /* Set current state */
    usim_dcb->icusb_state = SIM_ICUSB_ERRORHANDLING;
    return 0;
}

kal_uint16 SIM_icusb_control(kal_uint8 *txbuffer, kal_uint16 txlength, kal_uint8 *rxbuffer, kal_uint16 rxlength, sim_HW_cb *hw_cb)
{
    kal_uint32 retry, readLen;
    usim_dcb_struct *usim_dcb;
    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    for (retry = 0; retry < 3; retry++)
    {
        SIM_icusb_PutBytes(txbuffer, txlength, hw_cb);
        readLen = SIM_icusb_GetAllBytes(rxbuffer, rxlength, hw_cb);
        if (readLen == (kal_uint32)SIM_ICUSB_CCCI_TIMEOUT)
        {
            sim_addMsg(0xE014, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
            return SIM_ICUSB_CCCI_TIMEOUT;
        }
        if (readLen == rxlength)
        {
            return 0;
        }
        /* if readlen != 0x8, we just retry */
    }
    /* should not reach here */
    DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC65, rxlength, readLen, usim_dcb->icusb_state, txlength, SIM_ICUSB_CCCI_TIMEOUT);
    ASSERT(0);
    return 0;
}

kal_uint32 SIM_icusb_init(sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);
//   usim_dcb->isIcUsb = KAL_TRUE;
    usim_dcb->isIcUsbRecPPS = KAL_FALSE;
    /* Set current state */
    usim_dcb->icusb_state = SIM_ICUSB_SETVOLT;
    usim_dcb->waitingTime = 9000;
    return 0;
}

kal_uint32 SIM_icusb_setVolt(sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;
    usim_icusb_ackStatus status = SIM_ICUSB_ACK_OK;
    kal_uint16 ctrlStatus = 0;
    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    if (hw_cb->simInterface == 0x0)
    {
        //only SIM1 support ICUSB, other interface bypass
        kal_uint8 setVoltReq[SIM_ICUSB_CONTROL_MESSAGE_LEN] = {0x00, 0x80, 0x00, 0x00, 0x03, 0x00, 0x01, 0x01, 0x01};

        if (usim_dcb->power == CLASS_C_18V)
        {
            setVoltReq[SIM_ICUSB_CONTROL_MESSAGE_LEN - 1] = 0x0;
        }
        ctrlStatus = SIM_icusb_control(setVoltReq, SIM_ICUSB_CONTROL_MESSAGE_LEN, uncachedDmaBuffer1, SIM_ICUSB_CONTROL_MESSAGE_LEN, hw_cb);
        if (ctrlStatus == (kal_uint16) SIM_ICUSB_CCCI_TIMEOUT)
        {
            sim_addMsg(0xE015, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
            return SIM_ICUSB_CCCI_TIMEOUT;
        }

        sim_addMsg(0xE00D, uncachedDmaBuffer1[1], uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 2], uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 1]);
        switch (uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 1])
        {
            case SIM_ICUSB_ACK_OK:
                status = SIM_ICUSB_ACK_OK;
                break;
            case SIM_ICUSB_ACK_PREFER_3V:
            case SIM_ICUSB_ACK_CMD_TYPE_ERROR:
            case SIM_ICUSB_ACK_NEED_RX_TO_ACK:
            case SIM_ICUSB_ACK_CMD_ERROR:
            case SIM_ICUSB_ACK_TIMEOUT:
            case SIM_ICUSB_ACK_NO_CARD:
                DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC65, usim_dcb->icusb_state,
                              uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 4],
                              uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 3],
                              uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 2],
                              uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 1]);
                status = SIM_ICUSB_CCCI_TIMEOUT;
                break;
            default:
                ASSERT(0);
                break;
        }

        /* Set current state */
        usim_dcb->icusb_state = SIM_ICUSB_ENABLESESSION;
    }
    //only SIM1 support ICUSB, other interface bypass
    return status;
}
kal_uint32 SIM_icusb_enableSession(sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;
    usim_icusb_ackStatus status = SIM_ICUSB_ACK_OK;
    kal_uint16 ctrlStatus = 0;
    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    if (hw_cb->simInterface == 0x0)
    {
        //only SIM1 support ICUSB, other interface bypass
        kal_uint8 enableSessionReq[SIM_ICUSB_CONTROL_MESSAGE_LEN] = {0x00, 0x80, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x01};
        usim_dcb->waitingTime = 2000;
        ctrlStatus = SIM_icusb_control(enableSessionReq, SIM_ICUSB_CONTROL_MESSAGE_LEN, uncachedDmaBuffer1, SIM_ICUSB_CONTROL_MESSAGE_LEN, hw_cb);
        if (ctrlStatus == (kal_uint16)SIM_ICUSB_CCCI_TIMEOUT)
        {
            sim_addMsg(0xE016, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
            return SIM_ICUSB_CCCI_TIMEOUT;
        }
        sim_addMsg(0xE00E, uncachedDmaBuffer1[1], uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 2], uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 1]);
        switch (uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 1])
        {
            case SIM_ICUSB_ACK_OK:
                status = SIM_ICUSB_ACK_OK;
                break;
            case SIM_ICUSB_ACK_PREFER_3V:
                status = SIM_ICUSB_ACK_PREFER_3V;
                break;
            case SIM_ICUSB_ACK_CMD_TYPE_ERROR:
            case SIM_ICUSB_ACK_NEED_RX_TO_ACK:
            case SIM_ICUSB_ACK_CMD_ERROR:
            case SIM_ICUSB_ACK_TIMEOUT:
            case SIM_ICUSB_ACK_NO_CARD:
                DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC65, usim_dcb->icusb_state,
                              uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 4],
                              uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 3],
                              uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 2],
                              uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 1]);
                status = SIM_ICUSB_CCCI_TIMEOUT;
                break;
            default:
                ASSERT(0);
                break;
        }
        /* Set current state */
        usim_dcb->icusb_state = SIM_ICUSB_POWERON;
    }
    //only SIM1 support ICUSB, other interface bypass
    return status;
}

kal_uint32 SIM_icusb_powerOn(sim_HW_cb *hw_cb)
{
    kal_uint32 retry;
    kal_uint16 readLen = 0, msglen = 0;
    usim_dcb_struct *usim_dcb;
    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    if (hw_cb->simInterface == 0x0)
    {
        //only SIM1 support ICUSB, other interface bypass
        kal_uint8 powerOnReq[SIM_ICUSB_CONTROL_MESSAGE_LEN] = {0x00, 0x80, 0x00, 0x00, 0x03, 0x00, 0x10, 0x01, 0x00};

        sim_addMsg(0xE010, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
        for (retry = 0; retry < 3; retry++)
        {
            SIM_icusb_PutBytes(powerOnReq, SIM_ICUSB_CONTROL_MESSAGE_LEN, hw_cb);
            readLen = SIM_icusb_GetAllBytes(uncachedDmaBuffer1, SIM_ICUSB_MESSAGE_HEADER_LEN, hw_cb);
            if (readLen == (kal_uint16)SIM_ICUSB_CCCI_TIMEOUT)
            {
                sim_addMsg(0xE017, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
                return SIM_ICUSB_CCCI_TIMEOUT;
            }

            /* check if icusb card broken */
            if (uncachedDmaBuffer1[1] == SIM_ICUSB_CONTROL_MESSAGE_TYPE)
            {
                usim_icusb_ackStatus status = SIM_ICUSB_ACK_OK;
                readLen = SIM_icusb_GetAllBytes(&uncachedDmaBuffer1[SIM_ICUSB_MESSAGE_HEADER_LEN], 0x3, hw_cb);
                if (readLen == (kal_uint32)SIM_ICUSB_CCCI_TIMEOUT)
                {
                    sim_addMsg(0xE020, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
                    return SIM_ICUSB_CCCI_TIMEOUT;
                }
                sim_addMsg(0xE027, uncachedDmaBuffer1[1], uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 2], uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 1]);
                switch (uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 1])
                {
                    case SIM_ICUSB_ACK_OK:
                    case SIM_ICUSB_ACK_PREFER_3V:
                    case SIM_ICUSB_ACK_CMD_TYPE_ERROR:
                    case SIM_ICUSB_ACK_NEED_RX_TO_ACK:
                    case SIM_ICUSB_ACK_NO_CARD:
                    case SIM_ICUSB_ACK_TIMEOUT:
                    case SIM_ICUSB_ACK_CMD_ERROR:
                        DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC65, usim_dcb->icusb_state,
                                      uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 4],
                                      uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 3],
                                      uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 2],
                                      uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 1]);
                        status = SIM_ICUSB_CCCI_TIMEOUT;
                        break;
                    default:
                        ASSERT(0);
                        break;
                }
                return status;
            }

#if defined SIM_DRV_IC_USB_DBG
            DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC72, uncachedDmaBuffer1[0],
                          uncachedDmaBuffer1[1],
                          uncachedDmaBuffer1[2],
                          uncachedDmaBuffer1[3],
                          uncachedDmaBuffer1[4]);
#endif
            msglen = uncachedDmaBuffer1[4] | (uncachedDmaBuffer1[5] << 8);
#if defined SIM_DRV_IC_USB_DBG
            DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC72, uncachedDmaBuffer1[5], msglen, 0, 0, 0);
#endif
            if ((readLen != 0) && (msglen != 0))
            {
                readLen = SIM_icusb_GetAllBytes(&uncachedDmaBuffer1[SIM_ICUSB_MESSAGE_HEADER_LEN], msglen, hw_cb);
                if (readLen == (kal_uint16)SIM_ICUSB_CCCI_TIMEOUT)
                {
                    sim_addMsg(0xE018, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
                    return SIM_ICUSB_CCCI_TIMEOUT;
                }
#if defined SIM_DRV_IC_USB_DBG
                DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC73, uncachedDmaBuffer1[0],
                              uncachedDmaBuffer1[1],
                              uncachedDmaBuffer1[2],
                              uncachedDmaBuffer1[3],
                              uncachedDmaBuffer1[4]);
#endif
                if ((uncachedDmaBuffer1[SIM_ICUSB_MESSAGE_HEADER_LEN] == 0x3B) || (uncachedDmaBuffer1[SIM_ICUSB_MESSAGE_HEADER_LEN] == 0x3F))
                {
                    /* receive all atr, normal return */
                    kal_mem_cpy(usim_dcb->icusb_ATR_data, uncachedDmaBuffer1, msglen);
                    usim_dcb->icusb_ATR_index = msglen;
#if defined SIM_DRV_IC_USB_DBG
                    DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC69, uncachedDmaBuffer1[5],
                                  uncachedDmaBuffer1[6],
                                  uncachedDmaBuffer1[7],
                                  uncachedDmaBuffer1[8],
                                  uncachedDmaBuffer1[9]);
                    DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC69, uncachedDmaBuffer1[10],
                                  uncachedDmaBuffer1[11],
                                  uncachedDmaBuffer1[12],
                                  uncachedDmaBuffer1[13],
                                  uncachedDmaBuffer1[14]);
                    DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC69, uncachedDmaBuffer1[15],
                                  uncachedDmaBuffer1[16],
                                  uncachedDmaBuffer1[17],
                                  uncachedDmaBuffer1[18],
                                  uncachedDmaBuffer1[19]);
                    DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC69, uncachedDmaBuffer1[20],
                                  uncachedDmaBuffer1[21],
                                  uncachedDmaBuffer1[22],
                                  uncachedDmaBuffer1[23],
                                  uncachedDmaBuffer1[24]);
#endif
                    /* Set current state */
                    usim_dcb->icusb_state = SIM_ICUSB_CMD;
#if defined	SIM_DRV_IC_USB_DBG
                    DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC69, uncachedDmaBuffer1[25],
                                  uncachedDmaBuffer1[26],
                                  uncachedDmaBuffer1[27],
                                  uncachedDmaBuffer1[28],
                                  usim_dcb->icusb_ATR_index);
#endif
                    return 0;
                }
                else
                {
                    DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC69, uncachedDmaBuffer1[0],
                                  uncachedDmaBuffer1[1],
                                  uncachedDmaBuffer1[2],
                                  uncachedDmaBuffer1[3],
                                  uncachedDmaBuffer1[4]);
                    DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC69, uncachedDmaBuffer1[5],
                                  uncachedDmaBuffer1[6],
                                  uncachedDmaBuffer1[7],
                                  uncachedDmaBuffer1[8],
                                  uncachedDmaBuffer1[9]);
                    DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC69, uncachedDmaBuffer1[10],
                                  uncachedDmaBuffer1[11],
                                  uncachedDmaBuffer1[12],
                                  uncachedDmaBuffer1[13],
                                  uncachedDmaBuffer1[14]);
                    ASSERT(0);
                }
            }
        }
        /* should not reach here */
        DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC66, readLen, usim_dcb->icusb_state, uncachedDmaBuffer1[4], uncachedDmaBuffer1[5], uncachedDmaBuffer1[6]);
        ASSERT(0);
    }
    //only SIM1 support ICUSB, other interface bypass
    return 0;
}

kal_uint32 SIM_icusb_cmd(sim_HW_cb *hw_cb)
{
    kal_uint32 retry = 0, readLen = 0, SW = 0;
    kal_uint16 msglen = 0;
    Sim_Card *SimCard;
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);
    SimCard = GET_SIM_CB(hw_cb->simInterface);

    if (hw_cb->simInterface == 0x0)
    {
        //only SIM1 support ICUSB, other interface bypass
        uncachedDmaBuffer0[0] = uncachedDmaBuffer0[1] = uncachedDmaBuffer0[2] = uncachedDmaBuffer0[3] = 0x0;
        uncachedDmaBuffer0[4] = SimCard->sim_icusb_T0cmd.txSize;
        uncachedDmaBuffer0[5] = 0x00;
        kal_mem_cpy(&uncachedDmaBuffer0[6], SimCard->sim_icusb_T0cmd.txData, SimCard->sim_icusb_T0cmd.txSize);
#if defined SIM_DRV_IC_USB_DBG
        DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC67, *SimCard->sim_icusb_T0cmd.txData,
                      *(SimCard->sim_icusb_T0cmd.txData + 1),
                      *(SimCard->sim_icusb_T0cmd.txData + 2),
                      *(SimCard->sim_icusb_T0cmd.txData + 3),
                      *(SimCard->sim_icusb_T0cmd.txData + 4));
        DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC67, *(SimCard->sim_icusb_T0cmd.txData + 5),
                      *(SimCard->sim_icusb_T0cmd.txData + 6),
                      *(SimCard->sim_icusb_T0cmd.txData + 7),
                      *(SimCard->sim_icusb_T0cmd.txData + 8),
                      *(SimCard->sim_icusb_T0cmd.txData + 9));
        DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC67, uncachedDmaBuffer0[0],
                      uncachedDmaBuffer0[1],
                      uncachedDmaBuffer0[2],
                      uncachedDmaBuffer0[3],
                      uncachedDmaBuffer0[4]);
        DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC67, uncachedDmaBuffer0[5],
                      uncachedDmaBuffer0[6],
                      uncachedDmaBuffer0[7],
                      uncachedDmaBuffer0[8],
                      uncachedDmaBuffer0[9]);
        DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC67, uncachedDmaBuffer0[10],
                      uncachedDmaBuffer0[11],
                      uncachedDmaBuffer0[12],
                      uncachedDmaBuffer0[13],
                      uncachedDmaBuffer0[14]);
        DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC67, SimCard->sim_icusb_T0cmd.txSize, SimCard->sim_icusb_T0cmd.rcvSize, 0, 0, 0);
#endif
        for (retry = 0; retry < 3; retry++)
        {
            SIM_icusb_PutBytes(uncachedDmaBuffer0, SimCard->sim_icusb_T0cmd.txSize + SIM_ICUSB_MESSAGE_HEADER_LEN, hw_cb);
            /* read header at first */
            readLen = SIM_icusb_GetAllBytes(uncachedDmaBuffer1, SIM_ICUSB_MESSAGE_HEADER_LEN, hw_cb);
            if (readLen == (kal_uint32)SIM_ICUSB_CCCI_TIMEOUT)
            {
                sim_addMsg(0xE019, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
                return SIM_ICUSB_CCCI_TIMEOUT;
            }

            /* check if icusb card broken */
            if (uncachedDmaBuffer1[1] == SIM_ICUSB_CONTROL_MESSAGE_TYPE)
            {
                kal_uint32 status = 0;
                readLen = SIM_icusb_GetAllBytes(&uncachedDmaBuffer1[SIM_ICUSB_MESSAGE_HEADER_LEN], 0x3, hw_cb);
                if (readLen == (kal_uint32)SIM_ICUSB_CCCI_TIMEOUT)
                {
                    sim_addMsg(0xE020, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
                    return SIM_ICUSB_CCCI_TIMEOUT;
                }
                sim_addMsg(0xE028, uncachedDmaBuffer1[1], uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 2], uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 1]);
                switch (uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 1])
                {
                    case SIM_ICUSB_ACK_OK:
                    case SIM_ICUSB_ACK_PREFER_3V:
                    case SIM_ICUSB_ACK_CMD_TYPE_ERROR:
                    case SIM_ICUSB_ACK_NEED_RX_TO_ACK:
                    case SIM_ICUSB_ACK_NO_CARD:
                    case SIM_ICUSB_ACK_TIMEOUT:
                    case SIM_ICUSB_ACK_CMD_ERROR:
                        DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC65, usim_dcb->icusb_state,
                                      uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 4],
                                      uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 3],
                                      uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 2],
                                      uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 1]);
                        status = 0x0000;
                        break;
                    default:
                        ASSERT(0);
                        break;
                }
                return status;
            }

#if defined SIM_DRV_IC_USB_DBG
            DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC85, uncachedDmaBuffer1[0],
                          uncachedDmaBuffer1[1],
                          uncachedDmaBuffer1[2],
                          uncachedDmaBuffer1[3],
                          uncachedDmaBuffer1[4]);
            DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC85, uncachedDmaBuffer1[5],
                          uncachedDmaBuffer1[6],
                          uncachedDmaBuffer1[7],
                          uncachedDmaBuffer1[8],
                          uncachedDmaBuffer1[9]);
#endif
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
            msglen = uncachedDmaBuffer1[4] | (uncachedDmaBuffer1[5] << 8);

            if ((readLen != 0) && (msglen != 0))
            {
                readLen = SIM_icusb_GetAllBytes(&uncachedDmaBuffer1[SIM_ICUSB_MESSAGE_HEADER_LEN], msglen, hw_cb);
                if (readLen == (kal_uint32)SIM_ICUSB_CCCI_TIMEOUT)
                {
                    sim_addMsg(0xE020, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
                    return SIM_ICUSB_CCCI_TIMEOUT;
                }
#if defined	SIM_DRV_IC_USB_DBG
                DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC86, uncachedDmaBuffer1[5],
                              uncachedDmaBuffer1[6],
                              uncachedDmaBuffer1[7],
                              uncachedDmaBuffer1[8],
                              uncachedDmaBuffer1[9]);
                DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC86, uncachedDmaBuffer1[10],
                              uncachedDmaBuffer1[11],
                              uncachedDmaBuffer1[12],
                              uncachedDmaBuffer1[13],
                              uncachedDmaBuffer1[14]);
                DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC86, readLen,
                              uncachedDmaBuffer1[4],
                              msglen,
                              0,
                              0);
#endif
                if (readLen != 0)
                {
                    SW = (uncachedDmaBuffer1[SIM_ICUSB_MESSAGE_HEADER_LEN - 1 + readLen] | (uncachedDmaBuffer1[SIM_ICUSB_MESSAGE_HEADER_LEN - 1  + (readLen - 1)] << 8)); //SW2
#if defined SIM_DRV_IC_USB_DBG
                    DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC76, uncachedDmaBuffer1[SIM_ICUSB_MESSAGE_HEADER_LEN - 1  + readLen],
                                  uncachedDmaBuffer1[SIM_ICUSB_MESSAGE_HEADER_LEN - 1  + (readLen - 1)],
                                  SW,
                                  0,
                                  0);
#endif
                    /* readLen - 2: not need to include SW1/SW2 */
                    if ((readLen - 2) != 0)
                    {
                        kal_mem_cpy(SimCard->sim_icusb_T0cmd.result, &uncachedDmaBuffer1[SIM_ICUSB_MESSAGE_HEADER_LEN], readLen - 2);
#if defined SIM_DRV_IC_USB_DBG
                        DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC75, *SimCard->sim_icusb_T0cmd.result,
                                      *(SimCard->sim_icusb_T0cmd.result + 1),
                                      *(SimCard->sim_icusb_T0cmd.result + 2),
                                      *(SimCard->sim_icusb_T0cmd.result + 3),
                                      *(SimCard->sim_icusb_T0cmd.result + 4));
                        DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC75, uncachedDmaBuffer1[0],
                                      uncachedDmaBuffer1[1],
                                      uncachedDmaBuffer1[2],
                                      uncachedDmaBuffer1[3],
                                      uncachedDmaBuffer1[4]);
                        DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC75, uncachedDmaBuffer1[5],
                                      uncachedDmaBuffer1[6],
                                      uncachedDmaBuffer1[7],
                                      uncachedDmaBuffer1[8],
                                      uncachedDmaBuffer1[9]);
                        DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC75, SimCard->sim_icusb_T0cmd.txSize,
                                      SimCard->sim_icusb_T0cmd.rcvSize,
                                      readLen,
                                      SW,
                                      0);
#endif
                    }

                    /* Set current state */
                    usim_dcb->icusb_state = SIM_ICUSB_CMD;
                    return SW;
                }
            }
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
        }
        /* should not reach here */
        DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC68, 0x8, readLen, usim_dcb->icusb_state, 0, 0);
        ASSERT(0);
    }

    /* Set current state */
    usim_dcb->icusb_state = SIM_ICUSB_CMD;
    return 0;
}
kal_uint32 SIM_icusb_powerOff(sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;
    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    /* Set current state */
    usim_dcb->icusb_state = SIM_ICUSB_DISABLESESSION;
    return 0;
}

kal_uint32 SIM_icusb_disconnectDone(sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;
    usim_icusb_ackStatus status = SIM_ICUSB_ACK_OK;
    kal_uint16 ctrlStatus = 0;
    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    if (hw_cb->simInterface == 0x0)
    {
        //only SIM1 support ICUSB, other interface bypass
        kal_uint8 disconnDoneReq[SIM_ICUSB_CONTROL_MESSAGE_LEN] = {0x00, 0x80, 0x00, 0x00, 0x03, 0x00, 0x02, 0x01, 0x00};
        usim_dcb->waitingTime = 2000;
        ctrlStatus = SIM_icusb_control(disconnDoneReq, SIM_ICUSB_CONTROL_MESSAGE_LEN, uncachedDmaBuffer1, SIM_ICUSB_CONTROL_MESSAGE_LEN, hw_cb);
        if (ctrlStatus == (kal_uint16)SIM_ICUSB_CCCI_TIMEOUT)
        {
            DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC15, 0, 0, 0, drv_get_current_time(), 0xccc4);
            sim_addMsg(0xE021, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
            return SIM_ICUSB_CCCI_TIMEOUT;
        }
        sim_addMsg(0xE011, uncachedDmaBuffer1[1], uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 2], uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 1]);
        switch (uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 1])
        {
            case SIM_ICUSB_ACK_OK:
                status = SIM_ICUSB_ACK_OK;
                break;
            case SIM_ICUSB_ACK_PREFER_3V:
            case SIM_ICUSB_ACK_CMD_TYPE_ERROR:
            case SIM_ICUSB_ACK_NEED_RX_TO_ACK:
            case SIM_ICUSB_ACK_CMD_ERROR:
            case SIM_ICUSB_ACK_TIMEOUT:
            case SIM_ICUSB_ACK_NO_CARD:
                DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC65, usim_dcb->icusb_state,
                              uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 4],
                              uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 3],
                              uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 2],
                              uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 1]);
                status = SIM_ICUSB_CCCI_TIMEOUT;
                break;
            default:
                break;
        }
        /* Set current state */
        usim_dcb->icusb_state = SIM_ICUSB_DEINIT;
    }
    //only SIM1 support ICUSB, other interface bypass
    return status;
}

kal_uint32 SIM_icusb_disableSession(sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;
    usim_icusb_ackStatus status = SIM_ICUSB_ACK_OK;
    kal_uint16 ctrlStatus = 0;
    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    if (hw_cb->simInterface == 0x0)
    {
        //only SIM1 support ICUSB, other interface bypass
        kal_uint8 disableSessionReq[SIM_ICUSB_CONTROL_MESSAGE_LEN] = {0x00, 0x80, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x00};
        if (usim_icusb_ccci_channel_status)
        {
            usim_dcb->waitingTime = 20000;
        }
        else
        {
            usim_dcb->waitingTime = 2000;
        }
        ctrlStatus = SIM_icusb_control(disableSessionReq, SIM_ICUSB_CONTROL_MESSAGE_LEN, uncachedDmaBuffer1, SIM_ICUSB_CONTROL_MESSAGE_LEN, hw_cb);
        if (ctrlStatus == (kal_uint16)SIM_ICUSB_CCCI_TIMEOUT)
        {
            DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC15, 0, 0, 0, drv_get_current_time(), 0xccc5);
            sim_addMsg(0xE022, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
            return SIM_ICUSB_CCCI_TIMEOUT;
        }
        sim_addMsg(0xE006, uncachedDmaBuffer1[1], uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 2], uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 1]);
        switch (uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 1])
        {
            case SIM_ICUSB_ACK_OK:
                status = SIM_ICUSB_ACK_OK;
                break;
            case SIM_ICUSB_ACK_PREFER_3V:
            case SIM_ICUSB_ACK_CMD_TYPE_ERROR:
            case SIM_ICUSB_ACK_NEED_RX_TO_ACK:
            case SIM_ICUSB_ACK_CMD_ERROR:
            case SIM_ICUSB_ACK_TIMEOUT:
            case SIM_ICUSB_ACK_NO_CARD:
                DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC65, usim_dcb->icusb_state,
                              uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 4],
                              uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 3],
                              uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 2],
                              uncachedDmaBuffer1[SIM_ICUSB_CONTROL_MESSAGE_LEN - 1]);
                status = SIM_ICUSB_CCCI_TIMEOUT;
                usim_icusb_ccci_channel_status = KAL_FALSE;
                break;
            default:
                break;
        }
        /* Set current state */
        usim_dcb->icusb_state = SIM_ICUSB_DEINIT;
        usim_icusb_ccci_channel_status = KAL_TRUE;
    }
    //only SIM1 support ICUSB, other interface bypass
    return status;
}

kal_uint32 SIM_icusb_deinit(sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;
    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    /* Set current state */
    usim_dcb->icusb_state = SIM_ICUSB_INIT;
    return 0;
}

#endif

#if defined(DRV_SIM_DBG_LOW_COST_ULC)
    #define	SIM_MSG_NUM	1
#elif defined(DRV_SIM_DBG_LOW_COST_COMMON)
    #define	SIM_MSG_NUM	256
#else
    #define				SIM_MSG_NUM	1024
#endif

sim_msg				sim_msgArray[SIM_MSG_NUM];
kal_uint32			sim_msgIndex;
void sim_addMsg(kal_uint32 tag, kal_uint32 event, kal_uint32 data1, kal_uint32 data2)
{
    sim_msg *msgPtr;
    kal_uint32	savedMask;

    savedMask = SaveAndSetIRQMask();
    msgPtr = &sim_msgArray[sim_msgIndex];
    msgPtr->tag = (sim_msgTag)tag;
    msgPtr->event = event;
    msgPtr->data1 = data1;
    msgPtr->data2 = data2;
    msgPtr->time = drv_get_current_time();
    sim_msgIndex = (sim_msgIndex + 1) & (SIM_MSG_NUM - 1);
    RestoreIRQMask(savedMask);
}

#if defined(DRV_SIM_LTE_SERIES)
void sim_PDNEnable_MTK(sim_HW_cb *hw_cb)
{
    switch (hw_cb->mtk_baseAddr)
    {
        case SIM_base:
            HDMA_PDN_SET(0); // channel 0
#if !defined(DRV_SIM_6290_SERIES) && defined(DRV_SIM_LTE_SERIES)
            if (hw_cb->forceOn26M == KAL_FALSE)
            {
#endif
                PDN_SET(PDN_USIM1);
#if !defined(DRV_SIM_6290_SERIES) && defined(DRV_SIM_LTE_SERIES)
            }
#endif
#if defined(DRV_SIM_6292_SERIES) || defined(DRV_SIM_6293_SERIES) || defined(DRV_SIM_6295_SERIES)
            PDN_SET(PDN_USIM1_BCLK);
#endif
            break;
#if (2 == SIM_DRV_MTK_INTERFACE_NUM)
        case SIM2_base:
            HDMA_PDN_SET(1); // channel 1
#if !defined(DRV_SIM_6290_SERIES) && defined(DRV_SIM_LTE_SERIES)
            if (hw_cb->forceOn26M == KAL_FALSE)
            {
#endif
                PDN_SET(PDN_USIM2);
#if !defined(DRV_SIM_6290_SERIES) && defined(DRV_SIM_LTE_SERIES)
            }
#endif
#if defined(DRV_SIM_6292_SERIES) || defined(DRV_SIM_6293_SERIES) || defined(DRV_SIM_6295_SERIES)
            PDN_SET(PDN_USIM2_BCLK);
#endif
            break;
#endif // #if (2 == SIM_DRV_MTK_INTERFACE_NUM)
        default:
            ASSERT(0);
            break;
    }
}

void sim_PDNDisable_MTK(sim_HW_cb *hw_cb)
{
    switch (hw_cb->mtk_baseAddr)
    {
        case SIM_base:
            HDMA_PDN_CLR(0); // channel 0
#if defined(DRV_SIM_6292_SERIES) || defined(DRV_SIM_6293_SERIES) || defined(DRV_SIM_6295_SERIES)
            PDN_CLR(PDN_USIM1_BCLK);
#endif
            PDN_CLR(PDN_USIM1);
            break;
#if (2 == SIM_DRV_MTK_INTERFACE_NUM)
        case SIM2_base:
            HDMA_PDN_CLR(1); // channel 1
#if defined(DRV_SIM_6292_SERIES) || defined(DRV_SIM_6293_SERIES) || defined(DRV_SIM_6295_SERIES)
            PDN_CLR(PDN_USIM2_BCLK);
#endif
            PDN_CLR(PDN_USIM2);
            break;
#endif // #if (2 == SIM_DRV_MTK_INTERFACE_NUM)
        default:
            ASSERT(0);
            break;
    }
}
#else
// these 2 functions will be used by other files, so we should have different names
void sim_PDNDisable_MTK(sim_HW_cb *hw_cb)
{
#if (2 == SIM_DRV_MTK_INTERFACE_NUM) && !defined(__MEUT__) && defined(__OLD_PDN_ARCH__)
    if (DRVPDN_CON0 != hw_cb->mtk_pdnAddr && DRVPDN_CON1 != hw_cb->mtk_pdnAddr)
        ASSERT(0);
    if (DRVPDN_CON0_SIM2 != hw_cb->mtk_pdnBit && DRVPDN_CON1_SIM != hw_cb->mtk_pdnBit)
        ASSERT(0);
    if (PDN_SIM2 != hw_cb->mtk_pdnDevice && PDN_SIM != hw_cb->mtk_pdnDevice)
        ASSERT(0);
#endif
#ifdef __OLD_PDN_ARCH__
    DRVPDN_Disable(hw_cb->mtk_pdnAddr, hw_cb->mtk_pdnBit, hw_cb->mtk_pdnDevice);
    sim_addMsg(SIM_PDNDIS, hw_cb->simInterface, SIM_Reg(DRVPDN_CON0), SIM_Reg(DRVPDN_CON1));
#else
    DRVPDN_Disable((PDN_DEVICE)hw_cb->mtk_pdnDevice);
    /*use another API to fulfill my debug usage*/
#endif
}

void sim_PDNEnable_MTK(sim_HW_cb *hw_cb)
{

#if (2 == SIM_DRV_MTK_INTERFACE_NUM) && !defined(__MEUT__) && defined(__OLD_PDN_ARCH__)
    if (DRVPDN_CON0 != hw_cb->mtk_pdnAddr && DRVPDN_CON1 != hw_cb->mtk_pdnAddr)
        ASSERT(0);
    if (DRVPDN_CON0_SIM2 != hw_cb->mtk_pdnBit && DRVPDN_CON1_SIM != hw_cb->mtk_pdnBit)
        ASSERT(0);
    if (PDN_SIM2 != hw_cb->mtk_pdnDevice && PDN_SIM != hw_cb->mtk_pdnDevice)
        ASSERT(0);
#endif
#ifdef __OLD_PDN_ARCH__
    /*we use new manner to set pdn bit*/
    DRVPDN_Enable(hw_cb->mtk_pdnAddr, hw_cb->mtk_pdnBit, hw_cb->mtk_pdnDevice);

    sim_addMsg(SIM_PDNEN, hw_cb->simInterface, SIM_Reg(DRVPDN_CON0), SIM_Reg(DRVPDN_CON1));
#else
    DRVPDN_Enable((PDN_DEVICE)hw_cb->mtk_pdnDevice);
    /*use another API to fulfill my debug usage*/
    //sim_addMsg(SIM_PDNEN, hw_cb->simInterface, SIM_Reg(DRVPDN_CON0), SIM_Reg(DRVPDN_CON1));
#endif
}
#endif /*DRV_SIM_6290_SERIES*/

// low power related functions
extern void USIM_WAIT_EVENT_MTK(usim_dcb_struct *usim_dcb);
extern void USIM_SET_EVENT_Multilpe(usim_dcb_struct *usim_dcb);
extern void SIM_SetEvent_MTK(Sim_Card *SIMCARD, kal_uint8 result, sim_HW_cb *hw_cb);
extern void SIM_WaitEvent_MTK(Sim_Card *SIMCARD, kal_uint32 flag, kal_bool unmaskSIMIntr, sim_HW_cb *hw_cb);
#if defined(SIM_DRV_SWITCH_MT6306)
    kal_bool sim_MT6306_noneNeedClk(sim_HW_cb *hw_cb);
#endif
void USIM_low_power_related_setting(sim_HW_cb *hw_cb, kal_uint8 option)
{
    Sim_Card *SimCard;
    usim_dcb_struct *usim_dcb;
    kal_uint32 hwInterfaceNo = hw_cb->simInterface;
    SimCard = GET_SIM_CB(hw_cb->simInterface);
    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    hwInterfaceNo = hwInterfaceNo; // remove build warning

    if ((option & (USIM_LP_DISABLE | USIM_LP_ENABLE)) == (USIM_LP_DISABLE | USIM_LP_ENABLE))
        ASSERT(0);
#if defined(SIM_DRV_SWITCH_MT6306)
    sim_MT6306_switchInfo *switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);
#if defined(LPWR_SLIM)
    sim_HW_cb *peerHWCb = hw_cb->simSwitchPeerInterfaceCb;
#endif
#if defined(__SIM_DRV_CO_LOAD_MT6306__)
    if (sim_connectMT6306 == KAL_TRUE)
    {
#endif
        extern void sim_MT6306_clkStopTimerStop(sim_HW_cb * hw_cb);
        if (option & USIM_LP_DISABLE)
            sim_MT6306_clkStopTimerStop(hw_cb);

        option &= ~(USIM_LP_MASK_START_SCLK | USIM_LP_MASK_STOP_SCLK);
        if (option & USIM_LP_DISABLE)
            switch_CB->sim_MT6306_LPDisabled |= 1 << hw_cb->simSwitchPortNo;
        if (option & USIM_LP_ENABLE)
            switch_CB->sim_MT6306_LPDisabled &= ~(1 << hw_cb->simSwitchPortNo);

        if (sim_MT6306_noneNeedClk(hw_cb) == KAL_FALSE || switch_CB->sim_MT6306_LPDisabled != 0)
            option &= ~(USIM_LP_ENABLE);
        if (MTK_SIMIF0 == sim_get_hwCtrl_from_logicalNum(hw_cb->simInterface))
            hwInterfaceNo = 0;
        else if (MTK_SIMIF1 == sim_get_hwCtrl_from_logicalNum(hw_cb->simInterface))
            hwInterfaceNo = 1;
        else ASSERT(0);

        kal_sprintf(hw_cb->dbgStr, "[LP]:Interface:%d, Option:%x,%x\n\r", hw_cb->simInterface, option, switch_CB->sim_MT6306_LPDisabled);
        DRV_ICC_print_str(hw_cb->dbgStr);
#if defined(__SIM_DRV_CO_LOAD_MT6306__)
    }
#endif
#endif

    if (option & USIM_LP_DISABLE)
    {
        hw_cb->must_not_enable_sleep = KAL_TRUE;
        Data_Sync_Barrier();
        usim_waitISR_with_spinlock(hw_cb->spinlockid);
        IRQClearInt(hw_cb->mtk_lisrCode);
        IRQMask(hw_cb->mtk_lisrCode);
#if defined(LPWR_SLIM)
        SleepDrv_LockSleep(hw_cb->smHandler, hw_cb->sim_task_group);
#endif // #if defined(LPWR_SLIM)
        hw_cb->must_not_enable_sleep = KAL_FALSE;
        sim_PDNDisable_MTK(hw_cb);
#if !defined(SIM_DRV_SWITCH_MT6306) || defined(SIM_DRV_GEMINI_WITH_MT6306)
        SIM_DisAllIntr();
        USIM_DISABLE_TOUT();
        SIM_WriteReg(SIM0_BASE_ADDR_MTK + SIM_STS_MTK, 0xFFFF);
#elif defined(__SIM_DRV_CO_LOAD_MT6306__) && defined(SIM_DRV_SWITCH_MT6306)
        if (sim_connectMT6306 == KAL_FALSE)
        {
            SIM_DisAllIntr();
            USIM_DISABLE_TOUT();
            SIM_WriteReg(SIM0_BASE_ADDR_MTK + SIM_STS_MTK, 0xFFFF);
        }
#endif
        Data_Sync_Barrier();
        IRQClearInt(hw_cb->mtk_lisrCode);
        IRQUnmask(hw_cb->mtk_lisrCode);
#if defined(__DRV_SIM_LP_MODE__)
        if (option & USIM_LP_MASK_NORMAL_VSIM_CURRENT)
        {
            DRV_ICC_SetLp(hwInterfaceNo, KAL_FALSE);
        }
#endif // #if defined(__DRV_SIM_LP_MODE__)
#if defined(SIM_LOCK_SRCCLK_FOR_NONE_STOP_CLK_CARD)
        if (option & USIM_LP_MASK_FORCE_ON_26M)
        {
            DRV_ICC_CLKSRC_Lock(hwInterfaceNo, KAL_TRUE);
            hw_cb->forceOn26M = KAL_TRUE;
        }
#endif // #if defined(SIM_LOCK_SRCCLK_FOR_NONE_STOP_CLK_CARD)
        if (option & USIM_LP_MASK_START_SCLK)
        {
            if ((SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_CTRL_MTK)) & SIM_CTRL_HALT)
            {
                SIM_ActiveClk_MTK(hw_cb);

                if (!(SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_CTRL_MTK) & SIM_CTRL_SIMON)) // activation only
                {
                    // Do not need any delay
                    kal_give_spinlock(hw_cb->spinlockid);
                }
                else   // sim command, deactivation
                {
                    SIM_EINT_Mask(hw_cb, KAL_TRUE, __LINE__);

                    SIM_ClearBits(SIM0_BASE_ADDR_MTK + SIM_CONF_MTK, SIM_CONF_TOUTEN);
                    if (usim_dcb->phy_proto == T0_PROTOCOL)
                    {
                        SimCard->cmdState = SIM_ProcessClk;
                    }
                    else   // T1_PROTOCOL
                    {
                        usim_dcb->main_state = CLK_STOPPED_STATE;
                    }
                    SIM_SetTOUT((700 / (DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_BRR_MTK) >> 2) + 1 + 16) >> 2, hw_cb); // longer than spec
                    SIM_SetBits(SIM0_BASE_ADDR_MTK + SIM_CONF_MTK, SIM_CONF_TOUTEN);
                    SIM_WriteReg(SIM0_BASE_ADDR_MTK + SIM_IRQEN_MTK, SIM_IRQEN_TOUT);

                    SIM_EINT_Mask(hw_cb, KAL_FALSE, __LINE__);

                    if (usim_dcb->phy_proto == T0_PROTOCOL)
                    {
                        kal_give_spinlock(hw_cb->spinlockid);
                        SIM_WaitEvent_MTK(SimCard, CLK_PROC, KAL_FALSE, hw_cb);
                    }
                    else   // T1_PROTOCOL
                    {
                        kal_give_spinlock(hw_cb->spinlockid);
                        USIM_WAIT_EVENT_MTK(usim_dcb);
                    }

                    if (usim_dcb->present == KAL_FALSE)
                    {
                        SIM_WriteReg(SIM0_BASE_ADDR_MTK + SIM_IRQEN_MTK, SIM_IRQEN_ALLOFF);
                        kal_sprintf(hw_cb->dbgStr, "[SIM_DRV:%d] clear IRQEN, previous \"wait event\" is set by SIM_RegHotPlugCb\n\r", hw_cb->simInterface);
                        DRV_ICC_print_str(hw_cb->dbgStr);
                        kal_uint32 div = DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_BRR_MTK) & SIM_BRR_CLKMSK;
                        if (div == 0x800)
                            ust_us_busyloop(190);
                        else if (div == 0x0)
                            ust_us_busyloop(163);
                        else if (div == 0x1)
                            ust_us_busyloop(217);
                        else
                            ust_us_busyloop(432);
                    }

                    SimCard->t_debug[1] = ust_get_current_time_source();
                }
            }
            else
                kal_give_spinlock(hw_cb->spinlockid);
        }
        else
            kal_give_spinlock(hw_cb->spinlockid);
    }
    else if (option & USIM_LP_ENABLE)
    {
#if defined(SIM_LOCK_SRCCLK_FOR_NONE_STOP_CLK_CARD)
        if (option & USIM_LP_MASK_FORCE_ON_26M)
        {
            DRV_ICC_CLKSRC_Lock(hwInterfaceNo, KAL_TRUE);
            hw_cb->forceOn26M = KAL_TRUE;
        }
        else if (option & USIM_LP_MASK_NORMAL_26M)
        {
            DRV_ICC_CLKSRC_Lock(hwInterfaceNo, KAL_FALSE);
            hw_cb->forceOn26M = KAL_FALSE;
        }
#endif // #if defined(SIM_LOCK_SRCCLK_FOR_NONE_STOP_CLK_CARD)
#if defined(__DRV_SIM_LP_MODE__)
        if (option & USIM_LP_MASK_REDUCE_VSIM_CURRENT)
        {
            DRV_ICC_SetLp(hwInterfaceNo, KAL_TRUE);
        }
#endif // #if defined(__DRV_SIM_LP_MODE__)
        sim_PDNEnable_MTK(hw_cb);
#if defined(LPWR_SLIM)
        if (hw_cb->must_not_enable_sleep == KAL_FALSE)
        {
            SleepDrv_UnlockSleep(hw_cb->smHandler, hw_cb->sim_task_group);
        }
#if defined(SIM_DRV_SWITCH_MT6306)
        //Make Sure Peer is not Entered and Don't Need CLK
#if defined(__SIM_DRV_CO_LOAD_MT6306__)
        if (sim_connectMT6306 == KAL_TRUE)
        {
#endif
            if (sim_MT6306_noneNeedClk(hw_cb) == KAL_TRUE && switch_CB->sim_MT6306_LPDisabled == 0)
            {
#if !defined(SIM_DRV_GEMINI_WITH_MT6306)
                SleepDrv_UnlockSleep(peerHWCb->smHandler, hw_cb->sim_task_group);
#endif
            }
#if defined(__SIM_DRV_CO_LOAD_MT6306__)
        }
#endif
#endif
#endif // #if defined(LPWR_SLIM)
    }
    else
    {
        if (option & USIM_LP_MASK_STOP_SCLK)
        {
            if ((SimCard->clkStop == KAL_TRUE && usim_dcb->phy_proto == T0_PROTOCOL)
                    || (usim_dcb->clock_stop_en == KAL_TRUE && usim_dcb->phy_proto == T1_PROTOCOL))
            {
                SIM_DisAllIntr();
                SIM_ClearBits(SIM0_BASE_ADDR_MTK + SIM_CONF_MTK, SIM_CONF_TOUTEN);
                if (usim_dcb->phy_proto == T0_PROTOCOL)
                {
                    SimCard->cmdState = SIM_StopClk;
                }
                else   // T1_PROTOCOL
                {
                    usim_dcb->main_state = CLK_STOPPING_STATE;
                }
                Data_Sync_Barrier();
                if (hw_cb->issueCardStatus == SIM_CLOCK_FETCH__TERMINAL_RESPONSE)
                {
                    SIM_SetTOUT(((1860 / (DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_BRR_MTK) >> 2) + 1 + 16) >> 2) + 100, hw_cb); // longer than spec
                }
                else
                {
                    SIM_SetTOUT((1860 / (DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_BRR_MTK) >> 2) + 1 + 16) >> 2, hw_cb); // longer than spec
                }
                SIM_SetBits(SIM0_BASE_ADDR_MTK + SIM_CONF_MTK, SIM_CONF_TOUTEN);
                SIM_WriteReg(SIM0_BASE_ADDR_MTK + SIM_IRQEN_MTK, SIM_IRQEN_TOUT);
            }
        }
#if defined(__DRV_SIM_LP_MODE__)
        if (option & USIM_LP_MASK_REDUCE_VSIM_CURRENT)
        {
            DRV_ICC_SetLp(hwInterfaceNo, KAL_TRUE);
        }
        else if (option & USIM_LP_MASK_NORMAL_VSIM_CURRENT)
        {
            DRV_ICC_SetLp(hwInterfaceNo, KAL_FALSE);
        }
#endif // #if defined(__DRV_SIM_LP_MODE__)
#if defined(SIM_LOCK_SRCCLK_FOR_NONE_STOP_CLK_CARD)
        if (option & USIM_LP_MASK_FORCE_ON_26M)
        {
            DRV_ICC_CLKSRC_Lock(hwInterfaceNo, KAL_TRUE);
            hw_cb->forceOn26M = KAL_TRUE;
        }
        else if (option & USIM_LP_MASK_NORMAL_26M)
        {
            DRV_ICC_CLKSRC_Lock(hwInterfaceNo, KAL_FALSE);
            hw_cb->forceOn26M = KAL_FALSE;
        }
#endif // #if defined(SIM_LOCK_SRCCLK_FOR_NONE_STOP_CLK_CARD)
    }
}

#if defined(__SIM_DRV_CO_LOAD_MT6306__) && defined(SIM_DRV_SWITCH_MT6306)
void USIM_connect_mt6306(void)
{
    extern void MT6306_GPIO_init(kal_uint8 deviceAddress);
    extern kal_uint8 MT6306_getDeviceAddr(void);
    extern void MT6306_Writer_GPIO(kal_uint8 device_addr, kal_uint8 data_addr, kal_uint8 data_value);
    extern kal_uint8 MT6306_Read_GPIO(kal_uint8 device_addr, kal_uint8 data_addr);
    extern void MT6306_Restore_GPIO_Mode(void);
    kal_uint8 i =0;
    
    // [ELBRUS] for MT6306_SWITCH GPIO60, 61 (Test only)
    //DRV_WriteReg32(BASE_MADDR_AP_GPIOMUX + 0x370, DRV_Reg32(BASE_MADDR_AP_GPIOMUX + 0x370) & ~0xFF0000);
    MT6306_GPIO_init(MT6306_getDeviceAddr());

    sim_connectMT6306 = KAL_TRUE;
 

    for(i=1;i<6;i++)
    {
        MT6306_Writer_GPIO(MT6306_getDeviceAddr(), 8, i);
        if (MT6306_Read_GPIO(0, 8) != i)
        {
            sim_connectMT6306 = KAL_FALSE;
            MT6306_Restore_GPIO_Mode();
            break;
        }
    }
    
    
    return;
}
#endif
#endif //  #ifdef __SIM_DRV_MULTI_DRV_ARCH__
#else // #ifndef DRV_SIM_OFF
/*following is dummy API*/
void sim_init_hwCb(void) {}
void DRV_ICC_interface_init(void) {}
#endif // #ifndef DRV_SIM_OFF
