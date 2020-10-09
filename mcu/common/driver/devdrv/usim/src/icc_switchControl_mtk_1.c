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
 *   switchControl_mtk_1.c
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   USIM driver functions on for MTK multiple SIM controllers.
 *
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef DRV_SIM_OFF
#include  	"drv_comm.h"
#include  	"dhl_trace.h"
#ifdef __SIM_DRV_MULTI_DRV_ARCH__
#include 	"reg_base.h"
#include	"sim_drv_trc.h"

#include 	"intrCtrl.h"

#include "drv_gdma.h"
#ifdef MTK_SLEEP_ENABLE
    #include "sleepdrv_interface.h"
#endif

#include    "sim_reg_adp.h"

#include    "sim_al.h"
#include    "sim_hw_mtk.h"


#include    "sim_sw_comm.h"
//#include		"gpt_sw.h"
//RHR#include		"gpio_sw.h"
#include		"sim_mtk.h"

//#ifdef DRV_MULTIPLE_SIM
#if  (defined(DRV_SIM_ALL_SOLUTION_BUILT) || (defined(DRV_MULTIPLE_SIM) && defined(DRV_2_SIM_CONTROLLER)))
//#ifdef MT6318
//#include 	"pmic6318_sw.h"
//#endif   /*MT6318*/

#if defined(__SIM_PLUS__)
    #include "msdc_def.h"
#endif

#if defined(__USIM_DRV__)

#if !defined(DRV_SIM_LTE_SERIES)
    #include		"usim_MT6302.h"
#endif

//#include "pwic.h"

//#if defined(MT6223PMU)
//#include "pmu_sw.h"
//#endif
//#ifdef DRV_2_SIM_CONTROLLER
#include "sim_ctrl_al.h"
#include "sync_data.h"


//#endif
#ifdef SIM_CACHED_SUPPORT
    //RHR#include    "init.h"
    #include "cache_sw.h"
#endif

//#ifdef DUAL_MCU_SIM_V1
//#include "pmic6326_ccci_sw.h"
//#endif

/*RHR*/
#include "drv_features.h"
//#include "kal_non_specific_general_types.h"
#include "kal_public_api.h"
#include "kal_public_defs.h"
#include "kal_trace.h"
#include "stack_config.h"
#include "stdio.h"
#include "string.h"
/*RHR*/

#include "us_timer.h" //for ust_get_current_time()

#if defined(SIM_DRV_HISR_INIT_CENTRALIZATION)
#include "hisr_config.h"
#else
static kal_hisrid usim_hisrid = NULL;
static kal_hisrid usim2_hisrid = NULL;
#endif

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


/*following decalration were moved from gpt_sw.h*, we should change them to dcl form eventually*/
//extern kal_uint8 GPTI_GetHandle(kal_uint8 *handle);
//extern kal_bool GPTI_StartItem(kal_uint8 module,kal_uint16 tick,void (*gptimer_func)(void *),void *parameter);
//extern void GPTI_StopItem(kal_uint8 module);

extern kal_uint32 SIM_GetCurrentTime(void);
extern void pmic6326_ccci_lock(kal_bool lock);

static void L1usim_PowerOff(sim_HW_cb *hw_cb);
extern void SIM_SetRXTIDE(kal_uint16 RXTIDE, sim_HW_cb *hw_cb);
extern void SIM_SetTXTIDE(kal_uint16 _TXTIDE, sim_HW_cb *hw_cb);
#if defined(SIM_DRV_SWITCH_MT6306)
    extern void usim_hisr_MT6306(void);
    extern void usim_hisr2_MT6306(void);
    #if defined(__SIM_DRV_CO_LOAD_MT6306__)
        extern kal_bool sim_connectMT6306;
    #endif
#endif
extern Sim_Card *SimCard;
//extern 	kal_bool  TS_HSK_ENABLE;

#define FILE_SWITCHCONTROL1	2

extern kal_uint32	hwCbArray[];
//static usim_dcb_struct usim_cb[DRV_SIM_MAX_LOGICAL_INTERFACE];
//static  Sim_Card SimCard_cb[DRV_SIM_MAX_LOGICAL_INTERFACE];

//usim_dcb_struct	*usim_dcb = &usim_cb[0];
#ifndef DRV_SIM_HIGH_SPEED
static kal_uint8 BWT_Factor[3] = {1, 6, 12}; // 372/64 = 6, 372/32 = 12
#else
static kal_uint8 BWT_Factor[5] = {1, 6, 12, 24, 48}; // 372/64 = 6, 372/32 = 12, 23< 372/16 < 24
#endif


#if defined(USIM_DEBUG)
#define BUF_COUNT		1024
kal_uint16 int_buffer[BUF_COUNT];
kal_uint32 buf_index;
#define PUSH_INT(a)	int_buffer[(buf_index&(BUF_COUNT-1))] = a;\
    buf_index++;
#else
#define PUSH_INT(a)
#endif

// have been modified since MT6290
#if !defined(DRV_SIM_LTE_SERIES)
    #pragma arm section zidata = "NONCACHEDZI",  rwdata = "NONCACHEDRW"
#endif
#ifdef SIM_CACHED_SUPPORT
    extern kal_uint32	sim_uncachedTxBuffer0[], sim_uncachedRxBuffer0[], sim_uncachedTxBuffer1[], sim_uncachedRxBuffer1[];
    #define GET_NCACHEDTX_P(p, a) {if(0==a) p=(kal_uint8 *)sim_uncachedTxBuffer0; else p=(kal_uint8 *)sim_uncachedTxBuffer1;}
    #define GET_NCACHEDRX_P(p, a) {if(0==a) p=(kal_uint8 *)sim_uncachedRxBuffer0; else p=(kal_uint8 *)sim_uncachedRxBuffer1;}
    extern kal_uint8 uncachedDmaBuffer0[], uncachedDmaBuffer1[];//the instance is declared in icc_sim_common_mtk.c
    #define GET_NCACHED_USIM_DMA_BUF_P(p, a) {if(0==a) p=(kal_uint8 *)uncachedDmaBuffer0; else p=(kal_uint8 *)uncachedDmaBuffer1;}
    #define GET_NCACHED_USIM_DMA_BUF_INT(p, a) {if(0==a) p=(kal_uint32)uncachedDmaBuffer0; else p=(kal_uint32)uncachedDmaBuffer1;}
#endif
#if !defined(DRV_SIM_LTE_SERIES)
    #pragma arm section zidata, rwdata
#endif

#if defined(USIM_DEBUG)
extern void dbg_print(char * fmt, ...);
static kal_uint32 start, end;
kal_uint32 get_current_time(void)
{
    return (SIM_Reg32(0x80200230));
}
kal_uint32 get_duration_tick(kal_uint32 previous_time)
{
    kal_uint32 result, current_time;

    current_time = SIM_Reg32(0x80200230);
    if (previous_time > current_time)
    {
        result = 0x80000 - previous_time + current_time;
    }
    else
    {
        result = current_time - previous_time;
    }
    return result;
}
#endif

// proto type
static kal_bool usim_check_input_volt(usim_power_enum  volt, sim_HW_cb *hw_cb);
static usim_status_enum usim_process_ATR(sim_HW_cb *hw_cb);
static void usim_process_TA1(kal_uint8 TA1, sim_HW_cb *hw_cb);
static kal_bool usim_process_PTS(sim_HW_cb *hw_cb);
static kal_uint32 usim_process_HISTORICAL(sim_HW_cb *hw_cb);
static void usim_set_speed(usim_speed_enum speed, sim_HW_cb *hw_cb);
static void usim_set_protocol(usim_protocol_enum T, sim_HW_cb *hw_cb);
static void usim_set_timeout(kal_uint32 timeout, sim_HW_cb *hw_cb);
static kal_bool usim_select_power(usim_power_enum ExpectVolt, sim_HW_cb *hw_cb);
static void usim_activation(sim_HW_cb *hw_cb);
//void usim_lisr_Multiple(void);
void usim_lisr_Multiple(kal_uint32 v);
static void usim_deactivation(sim_HW_cb *hw_cb) ;
static void usim_t1end_handler(sim_HW_cb *hw_cb);
void usim_hisr(void);

extern void SIM_HISR_Multiple(void);
extern void SIM_HISR2_Multiple(void);

static void usim_rx_handler(kal_uint32 int_status, sim_HW_cb *hw_cb);
static void usim_send_block(kal_uint8 *adrs, sim_HW_cb *hw_cb);
static kal_bool usim_rx_block_handler(kal_uint32 *adrs, sim_HW_cb *hw_cb);
static sim_status usim_send_i_block(kal_uint8  *txData, kal_uint32  *txSize, kal_uint8  *rxData, kal_uint32  *rxSize, sim_HW_cb *hw_cb);
void sim_PDNDisable_MTK(sim_HW_cb *hw_cb);
void sim_PDNEnable_MTK(sim_HW_cb *hw_cb);
//kal_taskid kal_get_current_thread_ID(void);

extern sim_env SIM_GetCurrentEnv(kal_uint32 simInterface);
extern void L1sim_Init_MTK(sim_HW_cb *hw_cb);
extern kal_uint8 sim_Reset_MTK(kal_uint8 resetVolt, kal_uint8 *resultVolt, AtrStruct *Info, sim_HW_cb *hw_cb);
extern void L1sim_Configure_MTK(kal_uint8 clockMode, sim_HW_cb *hw_cb);
extern void sim_addMsg(kal_uint32 tag, kal_uint32 event, kal_uint32 data1, kal_uint32 data2);

/*defines here since these functions will be called in sim_drv_SW_function.h*/
static void usim_gpt_timeout_handler(void *parameter);
extern void sim_PowerOff_MTK(sim_HW_cb *hw_cb);
extern sim_status L1sim_Cmd_Layer_MTK(kal_uint8  *txData, kal_uint32  *txSize, kal_uint8  *rxData, kal_uint32  *rxSize, sim_HW_cb *hw_cb, kal_bool *isSW6263);
//kal_bool				sim_workingTaskWaiting; //this is used in Gemini projects, but sim_sw_comm.h used this, so we declared it


#if defined(__CHAINING_TEST__)
    kal_bool Send_IFS_REQ(kal_uint8 ifs, kal_uint8 interface);
    void Set_IFSC(kal_uint8 ifs, kal_uint8 interface);
#endif

#if defined(__SPEED_TEST__)
    usim_speed_enum speed_test;
    kal_bool speed_test_enable = KAL_FALSE;
    void Set_Speed(kal_uint8 select_speed);
#endif

sim_HW_cb *usim_get_hw_cb_from_usim_cb(usim_dcb_struct *usim_dcb)
{
    kal_uint32 idx;

    for (idx = 0; idx < DRV_SIM_MAX_LOGICAL_INTERFACE; idx ++)
    {
        if (GET_USIM_CB(idx) == usim_dcb)
        {
            return (sim_HW_cb *)(hwCbArray[idx]);
        }
    }

    return NULL;
}

void USIM_WAIT_EVENT_MTK(usim_dcb_struct *usim_dcb)
{
    DRV_ICC_GPTI_StartItem(usim_dcb->gpt_handle, USIM_GPT_TIMEOUT_PERIOD, usim_gpt_timeout_handler, usim_dcb);
    if (KAL_FALSE == kal_if_hisr() && KAL_FALSE == kal_query_systemInit())
    {
        kal_retrieve_eg_events(usim_dcb->event, USIM_EVENT, KAL_AND_CONSUME, &usim_dcb->ev_flag, KAL_SUSPEND);
    }
    else
    {
        kal_retrieve_eg_events(usim_dcb->event, USIM_EVENT, KAL_AND_CONSUME, &usim_dcb->ev_flag, 0);
    }
    if (usim_dcb->status != USIM_GPT_TIMEOUT)
    {
        DRV_ICC_GPTI_StopItem(usim_dcb->gpt_handle);
    }
    else
    {
        // Abnormal case, should dump registers for further anaysis
        sim_HW_cb *hw_cb = usim_get_hw_cb_from_usim_cb(usim_dcb);

        if (hw_cb != NULL)
        {
            DRV_ICC_print_err_msg(hw_cb, "GPT TIMEOUT !!!");

            kal_sprintf(hw_cb->dbgStr, "[SIM_DRV:%d] %x, %x, %x, %x, %x, %x\n\r", hw_cb->simInterface,
                        SIM_Reg32(SIM0_BASE_ADDR_MTK + SIM_CTRL_MTK),  SIM_Reg32(SIM0_BASE_ADDR_MTK + SIM_CONF_MTK),
                        SIM_Reg32(SIM0_BASE_ADDR_MTK + SIM_IRQEN_MTK),  SIM_Reg32(SIM0_BASE_ADDR_MTK + SIM_STS_MTK),
                        SIM_Reg32(SIM0_BASE_ADDR_MTK + SIM_TOUT_MTK),  SIM_Reg32(SIM0_BASE_ADDR_MTK + SIM_COUNT_MTK));
            DRV_ICC_print_str(hw_cb->dbgStr);
        }
    }
}

void USIM_SET_EVENT_Multiple(usim_dcb_struct *usim_dcb)
{
    DRV_ICC_GPTI_StopItem(usim_dcb->gpt_handle);
    kal_set_eg_events(usim_dcb->event, USIM_EVENT, KAL_OR);
}

/*************************************************************************
* FUNCTION
*  usim_check_input_volt
*
* DESCRIPTION
*	 check if the input volt is supported by the interface device
*
* PARAMETERS
*	volt: voltage used by SIM card
*
* RETURNS
*	KAL_TRUE: it is supported
*	KAL_FALSE: not supported
*
* GLOBALS AFFECTED
*
*
*************************************************************************/
static kal_bool usim_check_input_volt(usim_power_enum  volt, sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);
    if (usim_dcb->sim_env == ME_18V_30V)
        return KAL_TRUE;
    if (usim_dcb->sim_env == ME_30V_ONLY && volt == CLASS_B_30V)
        return KAL_TRUE;
    if (usim_dcb->sim_env == ME_18V_ONLY && volt == CLASS_C_18V)
        return KAL_TRUE;

    return KAL_FALSE;
}

/*************************************************************************
* FUNCTION
*  usim_check_TCK
*
* DESCRIPTION
*	 check if TCK present and the checksum of ATR is correct
*
* PARAMETERS
*
* RETURNS
*	KAL_TRUE: TCK is not present or chekcsum is correct
*	KAL_FALSE: Chekcsum is incorrect
*
* GLOBALS AFFECTED
*
*************************************************************************/
static kal_bool usim_check_TCK(sim_HW_cb *hw_cb)
{
    kal_uint32 i = 0;
    kal_uint8 ck = 0;
    kal_uint8 *ptr;
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);
    ptr = usim_dcb->ATR_data;

    DRV_ICC_print(hw_cb, SIM_PRINT_CHECK_TCK, 0, 0, 0, 0, 0);

    while (SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_COUNT_MTK) == 0 && i++ <= 22) // 9600 etu
    {
        kal_sleep_task(KAL_TICKS_50_MSEC_REAL);
    }

    if (i >= 23)
    {
        DRV_ICC_print(hw_cb, SIM_PRINT_TCK_NOT_PRESENT, 0, 0, 0, 0, 0);
        return KAL_TRUE;
    }

    if (usim_dcb->ATR_index >= 33)
    {
        DRV_ICC_print(hw_cb, SIM_PRINT_TCK_CHECKSUM_ERR, 0, 0, 0, 0, 0);
        return KAL_FALSE;
    }

    ptr[usim_dcb->ATR_index++] = SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_DATA_MTK);
    for (i = 1; i < usim_dcb->ATR_index; i++) ck ^= ptr[i];
    if (ck != 0)
    {
        DRV_ICC_print(hw_cb, SIM_PRINT_TCK_CHECKSUM_ERR, 0, 0, 0, 0, 0);
        return KAL_FALSE;
    }

    DRV_ICC_print(hw_cb, SIM_PRINT_TCK_CHECKSUM_OK, 0, 0, 0, 0, 0);

    return KAL_TRUE;
}

static kal_bool usim_if_atr_valid(usim_dcb_struct *usim_dcb)
{
    /* ATR format: TS T0 ...  Hist [TCK] */
    kal_uint32 atr_len = 1; /* Init to be index to T0  */
    kal_uint8 tdi, count;
    kal_uint8 hist_count = usim_dcb->ATR_data[1] & 0xF;

    if (usim_dcb->ATR_index < 2) {
        // TS, T0 is not success fully received
        return KAL_FALSE;
    }

    do
    {
        tdi = usim_dcb->ATR_data[atr_len];

        /* use to calc index offset to next TDi */
        count = 1;

        /* check if next TAi,TBi, TCi exist */
        USIM_CAL_TD_COUNT(tdi, count);

        /* update atr_len, it's index to T0, TDi, first Hist, TCK */
        atr_len += count;

        if (!(tdi & TDMask))
        {
            // TDi not exist, atr_len is index to first hist byte
            atr_len += hist_count;
            // Then, atr_len should be index to TCK
            break;
        }
    }
    while (atr_len < usim_dcb->ATR_index);

    if (usim_dcb->ATR_index >= atr_len)
    {
        // Actually usim_dcb->ATR_index should be atr_len (no TCK) or atr_len+1 (with TCK)
        return KAL_TRUE;
    }
    else
    {
        // Less ATR Data
        return KAL_FALSE;
    }
}

/*************************************************************************
* FUNCTION
*  usim_process_ATR
*
* DESCRIPTION
*	1. wait all ATR characters received at HISR and put into usim_dcb->ATR_data
*	2. Get parameters from ATR, Fi, Di, T0_support, T1_support, reset mode, WWT(T0)
*		IFSC(T1), CWI, BWI, X, U
*
* PARAMETERS
*	None
* RETURNS
*  KAL_TRUE: Valid TS is received
*  KAL_FALSE: Valid TS is not received, card is not present or not supported
*
* GLOBALS AFFECTED
*	usim_dcb
*
*************************************************************************/
static usim_status_enum usim_process_ATR(sim_HW_cb *hw_cb)
{
    kal_uint8 data, TD;
    kal_bool T15;
    kal_uint8 *ptr;
    kal_uint32 index = 1;	// skip the first TS byte
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);
    ptr = usim_dcb->ATR_data;

    if (usim_if_atr_valid(usim_dcb) == KAL_FALSE) {
        kal_uint32 i;
        kal_char *p;

        p = hw_cb->dbgStr;
        kal_sprintf(p, "[SIM_DRV:%d]Invalid SIM ATR= ", hw_cb->simInterface);
        p += strlen(p);
        for (i = 0; i < usim_dcb->ATR_index; i++)
        {
            kal_sprintf(p, "%02X", usim_dcb->ATR_data[i]);
            p += 2;
        }
        kal_brief_trace(TRACE_INFO, LOG_SIM_DRV_ATR, hw_cb->dbgStr);
        
        return USIM_INVALID_ATR;
    }

    // get the application protocol of the sim card
    if ((ptr[index] & 0x0f) == 0)
    {
        usim_dcb->app_proto = SIM_PROTOCOL; // no historical char imply SIM_PROTOCOL
    }
    else
    {
        do
        {
            data = ptr[index++];
            USIM_CAL_TD_COUNT(data, index);
        }
        while (data & TDMask);
        usim_dcb->hist_index = index;

        if (ptr[index] == HIST_FIRST_USIM && ptr[index + 1] == HIST_SEC_USIM && ptr[index + 3] == HIST_FOUR_USIM)
        {
            usim_dcb->app_proto = USIM_PROTOCOL;
        }
        else if (ptr[index] == HIST_FIRST_USIM && ptr[index + 1] == HIST_SEC_USIM && ptr[index + 3] == 0x51 && ptr[index + 5] == HIST_FOUR_USIM)
        {
            //dbg_print("historycal byte error");
            DRV_ICC_print(hw_cb, SIM_PRINT_HISTORICAL_BYTE_ERR, 0, 0, 0, 0, 0);
            usim_dcb->app_proto = USIM_PROTOCOL;
        }
        else
            usim_dcb->app_proto = SIM_PROTOCOL;
    }

    // parse the content of ATR
    T15 = KAL_FALSE;
    index = 1;
    TD = ptr[index++];	//T0
    if (TD & TAMask)
    {
        // TA1 (FI, DI)
        data = ptr[index++];
        usim_process_TA1(data, hw_cb);
        //usim_dcb->WWT = INIT_WWT_T0*usim_dcb->Di;
        DRV_ICC_Calc_WWT(usim_dcb->Fi, usim_dcb->Di, 10, &usim_dcb->WWT);
    }
    if (TD & TBMask)
    {
        // TB1 (PI, II) (neglect it)
        //data = ptr[index++];
        index++;
    }
    if (TD & TCMask)
    {
        // TC1 (N: extra guard time) (neglect it)
        data = ptr[index++];
        if (data != 0 && data != 255)
            return USIM_INVALID_ATR;
    }
    if (!(TD & TDMask))
    {
        usim_dcb->T0_support = KAL_TRUE;
        return USIM_NO_ERROR;
    }

    TD = ptr[index++]; // TD1
    if ((TD & 0x0f) == 0)
        usim_dcb->T0_support = KAL_TRUE;
    else if ((TD & 0x0f) == 1)
        usim_dcb->T1_support = KAL_TRUE;
    else if ((TD & 0x0f) == 0x0f)
    {
        // T = 15 is forbidden in TD1
        return USIM_INVALID_ATR;
    }

    if (TD & TAMask)
    {
        //TA2 (specific mode)
        usim_dcb->TA2 = ptr[index++];
        usim_dcb->reset_mode = USIM_RESET_SPECIFIC;
        // chage the clock to the one before reset.
    }
    if (TD & TBMask)
    {
        // TB2 (PI2)(neglect it)
        index++;
        //data = ptr[index++];
    }
    if (TD & TCMask)
    {
        // TC2 (work waiting time = 960xWIxDi etu)(T0)
        data = ptr[index++];
        //usim_dcb->WWT = 960*data*usim_dcb->Di;
        DRV_ICC_Calc_WWT(usim_dcb->Fi, usim_dcb->Di, data, &usim_dcb->WWT);
    }

    //dbg_print("WWT: %d \r\n",usim_dcb->WWT);

    if (!(TD & TDMask))
    {
        if (usim_dcb->T0_support && !usim_dcb->T1_support && !T15)
        {
            return USIM_NO_ERROR;
        }
        else
        {
            if (usim_check_TCK(hw_cb) == KAL_FALSE)
                return USIM_INVALID_ATR;
            else
                return USIM_NO_ERROR;
        }
    }

    TD = ptr[index++]; // TD2
    if ((TD & 0x0f) == 1)
    {
        usim_dcb->T1_support = KAL_TRUE;
    }
    else if ((TD & 0x0f) == 0x0f)
    {
        T15 = KAL_TRUE;
        goto global_interface;
    }
    if (TD & TAMask)
    {
        //TA3 (ISFC)
        data = ptr[index++];
        usim_dcb->ifsc = data;
        //dbg_print("IFSC: %d \r\n",data);
    }
    if (TD & TBMask)
    {
        kal_uint8 cwi, bwi;

        // TB3 (PI2)
        data = ptr[index++];
        cwi = data & 0xf; // range from 0~5
        bwi = (data & 0xf0) >> 4;
        if (cwi > MAX_CWI)
            return USIM_INVALID_ATR;
        if (bwi > MAX_BWI)
            return USIM_INVALID_ATR;
        usim_dcb->CWT = (1 << cwi) + 11;
        usim_dcb->BWT = (1 << bwi) * 960;
        //usim_dcb->BWT = (1<<bwi)*960 + 11;
    }
    else
    {
        usim_dcb->CWT = USIM_CWT_DEFAULT;
        usim_dcb->BWT = USIM_BWT_DEFAULT;
    }

    //dbg_print("BWT: %d \r\n",usim_dcb->BWT);
    if (TD & TCMask)
    {
        // TC3 (neglect)
        index++;
        //data = ptr[index++];
    }
    if (!(TD & TDMask))
    {
        if (usim_dcb->T0_support && !usim_dcb->T1_support && !T15)
            return USIM_NO_ERROR;
        else
        {
            if (usim_check_TCK(hw_cb) == KAL_FALSE)
                return USIM_INVALID_ATR;
            else
                return USIM_NO_ERROR;
        }
    }
    TD = ptr[index++]; // TD3
    if ((TD & 0x0f) != 0x0f)
    {
        if (usim_dcb->T0_support && !usim_dcb->T1_support && !T15)
            return USIM_NO_ERROR;
        else
        {
            if (usim_check_TCK(hw_cb) == KAL_FALSE)
                return USIM_INVALID_ATR;
            else
                return USIM_NO_ERROR;
        }
    }

global_interface:

    if (usim_check_TCK(hw_cb) == KAL_FALSE)
        return USIM_INVALID_ATR;

    if (TD & TAMask)
    {
        //TAi (clock stop(X) and power class(U))
        data = ptr[index++];
        usim_dcb->clock_stop_type = (usim_clock_stop_enum)(data & CLOCK_STOP_MSK);
        usim_power_enum PowerClass = (usim_power_enum) (data & USIM_POW_CLASS_MSK);
        usim_dcb->hasPowerClass = KAL_TRUE;
        usim_dcb->PowerClass = PowerClass;
        if (usim_dcb->app_proto == SIM_PROTOCOL)
            /*[ALPS00378979]
              fix BJ TMC NFC fail 5_5_4_2 TC1 Power provided in full power mode (Class B)
            */
        {
            if (PowerClass == CLASS_C_18V)
                usim_dcb->power_class = CLASS_C_18V;
            else if (PowerClass == CLASS_B_30V)
                usim_dcb->power_class = CLASS_B_30V;
            else
                usim_dcb->power_class = CLASS_ALLSUPPORT;
        }
        else
        {
            usim_dcb->power_class = (usim_power_enum)(data & USIM_POW_CLASS_MSK);
        }
        //dbg_print("clock stop[7:8]|power class[1:6]: %x \r\n",data);

        /*SIM task need following information for UICC identification*/
        usim_dcb->TAiExist = KAL_TRUE;
        DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC50, data, usim_dcb->clock_stop_type, usim_dcb->power_class, usim_dcb->TAiExist, 0);
        DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC50, usim_dcb->app_proto, usim_dcb->sim_env, usim_dcb->power, usim_dcb->power_in, usim_dcb->power_class);
    }
    else
    {
        //from latest 7816-3, if ATR is valid without class indicator, host should continue normal operation
        return USIM_NO_ERROR;
    }

    if (TD & TBMask)
    {
        data = ptr[index];
        usim_dcb->TB15 = data;
    }

#if defined(SIM_DRV_IC_USB)
    if (TD & TBMask && usim_dcb->forceISO == KAL_FALSE)
    {
        // TBi indicate supporting IC-USB interface
        data = ptr[index++];
        if ((data & TB15_ICUSB_MASK) == TB15_ICUSB_MASK)
        {
            usim_dcb->isIcUsb = KAL_TRUE;
            usim_dcb->TB15 = data;
        }
        DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC51, data, usim_dcb->clock_stop_type, usim_dcb->power_class, usim_dcb->TAiExist, usim_dcb->isIcUsb);
    }
    else
    {
        usim_dcb->isIcUsb = KAL_FALSE;
    }
#endif

    // check if used power is supported by the UICC
    if ((usim_dcb->power & usim_dcb->power_class) == 0)
    {
        if (usim_dcb->sim_env == ME_18V_30V)
        {
            if (usim_dcb->power == CLASS_C_18V)
                usim_dcb->power = CLASS_B_30V;
            else if (usim_dcb->power == CLASS_B_30V)
                usim_dcb->power = CLASS_C_18V;
            //dbg_print("USIM_VOLT_NOT_SUPPORT\r\n");
            return USIM_VOLT_NOT_SUPPORT;
        }
    }
    else if (usim_dcb->app_proto == SIM_PROTOCOL)
        return USIM_NO_ERROR;

    return USIM_NO_ERROR;
}
/*************************************************************************
* FUNCTION
*  usim_process_TA1
*
* DESCRIPTION
	1.
Get Di and Fi from TA1
*
* PARAMETERS
	TA1: first interface character used to indicate the Fi and Di

* RETURNS
*	None
*
* GLOBALS AFFECTED
*	usim_dcb->Fi, usim_dcb->Di
*
*************************************************************************/
static void usim_process_TA1(kal_uint8 TA1, sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);
    if (TA1 == ATR_TA1_64)
    {
        //dbg_print("SPEED64 \r\n");
        usim_dcb->Fi = 512;
        usim_dcb->Di = 8;
        usim_dcb->card_speed = SPEED_64;
    }
    else if (TA1 == ATR_TA1_32)
    {
        //dbg_print("SPEED32 \r\n");
        usim_dcb->Fi = 512;
        usim_dcb->Di = 16;
        usim_dcb->card_speed = SPEED_32;
    }
    else if (TA1 == ATR_TA1_16)
    {
        // only support speed32 even encounter a speed16 card
        //dbg_print("SPEED16 \r\n");
        usim_dcb->Fi = 512;
#ifndef DRV_SIM_HIGH_SPEED
        usim_dcb->Di = 16;
        usim_dcb->card_speed = SPEED_32;
#else
        usim_dcb->Di = 32;
        usim_dcb->card_speed = SPEED_16;
#endif
    }
    else if (TA1 == ATR_TA1_8)
    {
        //dbg_print("SPEED8 \r\n");
        usim_dcb->Fi = 512;
#ifndef DRV_SIM_HIGH_SPEED
        usim_dcb->Di = 16;
        usim_dcb->card_speed = SPEED_32;
#else
        usim_dcb->Di = 64;
        usim_dcb->card_speed = SPEED_8;
#endif
    }
    else
    {
        //dbg_print("SPEED372 \r\n");
        usim_dcb->Fi = 372;
        usim_dcb->Di = 1;
        usim_dcb->card_speed = SPEED_372;
    }

}

/*************************************************************************
* FUNCTION
*  usim_process_PTS
*
* DESCRIPTION
*	1. Perform the PTS to select the protocol and enhanced speed parameter(Fn,Dn).
		T1 has higher priority than T0
*	2. Change the clock rate according to the PTS response
*	3. Enable the T0 or T1 controller according to the PTS response
*
* PARAMETERS
	None

* RETURNS
*	None
*
* GLOBALS AFFECTED
*	usim_dcb->speed
*
*************************************************************************/
static kal_bool usim_process_PTS(sim_HW_cb *hw_cb)
{
    kal_uint32 i;
    kal_uint8 pts[PPS_LEN] = {0}, pts_r[PPS_LEN] = {0}, pck;
    usim_speed_enum speed;
    kal_bool echoed = KAL_TRUE;
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    //dbg_print("usim_process_PTS \r\n");
    if (usim_dcb->app_proto == SIM_PROTOCOL)
    {
        //dbg_print("PTS not performed (SIM_PROTOCOL) \r\n");
        echoed = KAL_FALSE;

        // move codes from exit:
        usim_dcb->phy_proto = T0_PROTOCOL;
        SIM_SetRXRetry(7);
        SIM_SetTXRetry(7);
        USIM_ENABLE_TXRX_HANSHAKE();
        return KAL_TRUE;
    }

    if (usim_dcb->reset_mode == USIM_RESET_SPECIFIC)
    {
        //dbg_print("not performed (specific mode)\r\n");
        echoed = KAL_TRUE;
        if (usim_dcb->TA2 & 0x10)
        {
            goto exit;
        }
    }

    if (usim_dcb->high_speed_en)
    {
        if (usim_dcb->Di == 1)
            speed = SPEED_372;
        else if (usim_dcb->Di == 8)
            speed = SPEED_64;
        else if (usim_dcb->Di == 16)
            speed = SPEED_32;
#ifdef DRV_SIM_HIGH_SPEED
        else if (usim_dcb->Di == 32)
            speed = SPEED_16;
        else if (usim_dcb->Di == 64)
            speed = SPEED_8;
#endif
        else
            speed = SPEED_372;
    }
    else
    {
        speed = SPEED_372;
    }

    if (usim_dcb->reset_mode == USIM_RESET_SPECIFIC)
    {
        usim_set_speed(speed, hw_cb);
        goto exit;
    }

#if defined(__SPEED_TEST__)
    if (KAL_TRUE == speed_test_enable)
    {
        speed = speed_test;
        speed_test_enable = KAL_FALSE;
    }
#endif
    //dbg_print("select speed %d(372:64:32, 0:1:2)\r\n", speed);

    // generate PTS packet
    pts[PPSS] = 0xff;
    pck = 0xff;
    pts[PPS0] = USIM_PTS_PS1_MSK;

    /*******************************************************************************************/
//mtk04122: due to the stability considerations, we use T1 physical protocol when card only supports T1
//                However, in test mode, we still need to verify T1 functionailiy. Hence, we add a compiler flag
//                only used in test mode for T1 testing.
    /*******************************************************************************************/
#if !defined(__T1_HIGT_PRIORITY__)
    if (usim_dcb->T1_support && usim_dcb->app_proto == USIM_PROTOCOL && !usim_dcb->T0_support) // priority T1 > T0
#else
    if (usim_dcb->T1_support && usim_dcb->app_proto == USIM_PROTOCOL) //modified by MTK04122
#endif
    {
        // T1 only usim card will go to here
        //dbg_print("select T=1\r\n");
        pts[PPS0] |= USIM_PTS_PS0_T1;
    }
    else
    {
        //dbg_print("select T=0\r\n");
    }

#if defined(SIM_DRV_IC_USB)
    if ((usim_dcb->isIcUsb == KAL_TRUE) && (hw_cb->simInterface == 0x0) && (FACTORY_BOOT != kal_query_boot_mode()) && usim_dcb->forceISO == KAL_FALSE)
    {
        pts[PPS0] = 0x2F;
    }
#endif

    pck ^= pts[PPS0];
    if (speed == SPEED_372)
        pts[PPS1] = ATR_TA1_372_5;
    else if (speed == SPEED_64)
        pts[PPS1] = ATR_TA1_64;
    else if (speed == SPEED_32) 	// SPEED_32
        pts[PPS1] = ATR_TA1_32;
#ifdef DRV_SIM_HIGH_SPEED
    else if (speed == SPEED_16) 	// SPEED_16
        pts[PPS1] = ATR_TA1_16;
    else if (speed == SPEED_8) 	// SPEED_8
        pts[PPS1] = ATR_TA1_8;
#endif

#if defined(SIM_DRV_IC_USB)
    if ((usim_dcb->isIcUsb == KAL_TRUE) && (hw_cb->simInterface == 0x0) && (FACTORY_BOOT != kal_query_boot_mode()) && usim_dcb->forceISO == KAL_FALSE)
    {
        pts[PPS1] = 0xC0;
    }
#endif

    pck ^= pts[PPS1];

    // send PTS packet
    usim_dcb->main_state = PTS_STATE;
    pts[PCK] = pck;
    SIM_FIFO_Flush();

    SIM_SetRXTIDE(PPS_LEN, hw_cb);
    for (i = 0; i < PPS_LEN; i++)
    {
        SIM_WriteReg((SIM0_BASE_ADDR_MTK + SIM_DATA_MTK), pts[i]);
        ////dbg_print("%d: %x\r\n",i,pts[i]);
    }
    kal_set_eg_events(usim_dcb->event, 0, KAL_AND);

    SIM_EINT_Mask(hw_cb, KAL_TRUE, __LINE__);

    DRV_ICC_GPTI_StopItem(usim_dcb->gpt_handle);
    usim_set_timeout(INIT_WWT_T0, hw_cb);

    SIM_EINT_Mask(hw_cb, KAL_FALSE, __LINE__);

    USIM_WAIT_EVENT_MTK(usim_dcb);

    SIM_EINT_Mask(hw_cb, KAL_TRUE, __LINE__);

    usim_set_timeout(0, hw_cb);

    SIM_EINT_Mask(hw_cb, KAL_FALSE, __LINE__);

    if (usim_dcb->ev_status != USIM_NO_ERROR)
        echoed = KAL_FALSE;
    // read the response
    if (echoed)
    {
        for (i = 0; i < PPS_LEN; i++)
        {
            pts_r[i] = SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_DATA_MTK);
            if (pts[i] != pts_r[i])
                echoed = KAL_FALSE;
        }
    }
#if defined(SIM_DRV_IC_USB)
    DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC71, usim_dcb->isIcUsbRecPPS, echoed, usim_dcb->ev_status, usim_dcb->isIcUsb, 0);
#endif
    DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC71, pts[0], pts[1], pts[2], pts[3], 0);
    DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC71, pts_r[0], pts_r[1], pts_r[2], pts_r[3], 0);

    if (echoed)
    {
        //dbg_print("PTS OK!\r\n");
        usim_set_speed(speed, hw_cb);
        // Some high speed SIM card after clock rate change have to wait a while to
        // to receive the first command.
        if (pts[1] != 0x00)
            kal_sleep_task(KAL_TICKS_50_MSEC_REAL);
    }
    else
    {
        DRV_ICC_print_err_msg(hw_cb, "PPS exchange fail");
        usim_set_speed(SPEED_372, hw_cb);
    }

exit:
    // GSM will only use T=0, no matter t=1 is supported.
#if !defined(__T1_HIGT_PRIORITY__)
    if (usim_dcb->T1_support && !usim_dcb->T0_support &&
            (usim_dcb->app_proto == USIM_PROTOCOL) && echoed)
#else
    if (usim_dcb->T1_support  &&
            (usim_dcb->app_proto == USIM_PROTOCOL) && echoed)
#endif
    {
        // T1 only usim card will go to here
        usim_dcb->phy_proto = T1_PROTOCOL;
        usim_set_protocol(T1_PROTOCOL, hw_cb);
        USIM_DISABLE_TXRX_HANSHAKE();
        SIM_SetRXRetry(0);
        SIM_SetTXRetry(0);
    }
    else
    {
        usim_dcb->phy_proto = T0_PROTOCOL;
        if (usim_dcb->app_proto == USIM_PROTOCOL && echoed)
            usim_set_protocol(T0_PROTOCOL, hw_cb); // SIM_PROTOCOL is enabled at simd.c
        SIM_SetRXRetry(7);
        SIM_SetTXRetry(7);
        USIM_ENABLE_TXRX_HANSHAKE();
    }
#if defined(__DBG_MSG__)
    //dbg_print("phy_proto = %d\r\n",usim_dcb->phy_proto);
#endif

    return echoed;
}

/*************************************************************************
* FUNCTION
*  usim_set_timeout
*
* DESCRIPTION
*	 setup the timeout value in the unit of etu
*
* PARAMETERS
*	timeout: timeout value in the unit of etu , 0 means disabling timeout
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/
static void usim_set_timeout(kal_uint32 timeout, sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    if (timeout)
    {
        //timeout >>= 4;   //the unit of mt6290 is 16 etu (use TOUT_REG_V2)
        timeout >>= 2;     //(use TOUT_REG_V3)
        SIM_SetTOUT(timeout + TOUT_OFFSET, hw_cb);
        usim_dcb->timeout = timeout + TOUT_OFFSET;
    }
    else
    {
        USIM_DISABLE_TOUT();
    }
}
/*************************************************************************
* FUNCTION
*  usim_set_speed
*
* DESCRIPTION
*	 setup the baudrate of the SIM card, only support 372, 64 and 32.
*	 speed 16 is not supported, use speed32 insteadly.
*
* PARAMETERS
*	timeout: timeout value in the unit of etu , 0 means disabling timeout
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/
static void usim_set_speed(usim_speed_enum speed, sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;
#if defined(SIM_DRV_3_71MHZ_SCLK)
    kal_uint32 clk_div = SIM_BRR_CLK_Div7;
#elif defined(DRV_SIM_6292_SERIES) || defined(DRV_SIM_6293_SERIES)
    kal_uint32 clk_div = SIM_BRR_CLK_Div8;
#else
    kal_uint32 clk_div = SIM_BRR_CLK_Div4;
#endif

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

#if defined(SIM_DRV_4_33MHZ_SCLK)
    if(hw_cb->canUse_4_33_SCLK == KAL_TRUE)
    {
        clk_div = SIM_BRR_CLK_Div6;
        kal_sprintf(hw_cb->dbgStr, "[SIM_DRV]Set SIM clock to 4.33MHz\n\r");
        DRV_ICC_print_str(hw_cb->dbgStr);
    }
#endif

    if (hw_cb->SlowClock == KAL_TRUE)
    {
#if defined(DRV_SIM_6292_SERIES) || defined(DRV_SIM_6293_SERIES) || defined(DRV_SIM_6295_SERIES)
        clk_div = SIM_BRR_CLK_Div16;
#else
        clk_div = SIM_BRR_CLK_Div8;
#endif
        kal_sprintf(hw_cb->dbgStr, "[SIM_DRV]Set Slow CLK speed!!!!\n\r");
        DRV_ICC_print_str(hw_cb->dbgStr);
    }

    if (SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_CTRL_MTK) & SIM_CTRL_SIMON) // use origianl frequency for warm reset, PPS Exchange
    {
        clk_div = DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_BRR_MTK) & ~SIM_BRR_ETUMSK;
    }

    switch (speed)
    {
        case SPEED_372:
            // clock: 13/4 = 3.25M, with default etu F/372
            SIM_WriteReg(SIM0_BASE_ADDR_MTK + SIM_BRR_MTK, (clk_div | SIM_BRR_BAUD_Div372));
            break;
        case SPEED_64:
            SIM_WriteReg(SIM0_BASE_ADDR_MTK + SIM_BRR_MTK, (clk_div | SIM_BRR_BAUD_Div64));
            break;
        case SPEED_32:
            SIM_WriteReg(SIM0_BASE_ADDR_MTK + SIM_BRR_MTK, (clk_div | SIM_BRR_BAUD_Div32));
            break;
#ifdef DRV_SIM_HIGH_SPEED
        case SPEED_16:
            SIM_WriteReg(SIM0_BASE_ADDR_MTK + SIM_BRR_MTK, (clk_div | SIM_BRR_BAUD_Div16));
            break;
        case SPEED_8:
            SIM_WriteReg(SIM0_BASE_ADDR_MTK + SIM_BRR_MTK, (clk_div | SIM_BRR_BAUD_Div8));
            break;
#endif
        default:
            ASSERT(0);
    }
    usim_dcb->speed = speed;
    usim_dcb->BWT = usim_dcb->BWT * BWT_Factor[speed] + 11;
}
/*************************************************************************
* FUNCTION
*  usim_set_protocol
*
* DESCRIPTION
*	 setup the physical protocol layer including T=0 and T=1.
*
* PARAMETERS
*	T: physical protocol layer including T=0 and T=1.
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/
static void usim_set_protocol(usim_protocol_enum T, sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    if (T == T1_PROTOCOL)
    {
        USIM_ENABLE_T1();
    }
    else
    {
        USIM_ENABLE_T0();
    }
    usim_dcb->phy_proto = T;
}
/*************************************************************************
* FUNCTION
*  usim_select_power
*
* DESCRIPTION
	1. Try the input voltage from application layer if availabe.
	2. Try the possible voltage which the ME can support.
	3. Get the valid TS
*
* PARAMETERS
	1. ExpectVolt: application layer give a expected power class

* RETURNS
*  KAL_TRUE: Valid TS is received
*  KAL_FALSE: Valid TS is not received, card is not present or not supported
*
* GLOBALS AFFECTED
*	usim_dcb
*
*************************************************************************/
static kal_bool usim_select_power(usim_power_enum ExpectVolt, sim_HW_cb *hw_cb)
{
    kal_uint32 retry;
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    // dbg_print("usim_select_power with power: %d \r\n", ExpectVolt);

    SIM_FIFO_Flush();
    if (usim_dcb->warm_rst == KAL_FALSE)
    {
#if defined(SIM_DRV_IC_USB)
        sim_addMsg(0xE004, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
#endif
        usim_deactivation(hw_cb);
        // decide the initial power class
        usim_dcb->power_in = ExpectVolt;
        if (ExpectVolt != UNKNOWN_POWER_CLASS)
        {
            usim_dcb->power = ExpectVolt;
        }
        else
        {
            if (usim_dcb->sim_env == ME_30V_ONLY)
            {
                usim_dcb->power = CLASS_B_30V;
            }
            else // ME_18_ONLY, ME_18V_30V
            {
                usim_dcb->power = CLASS_C_18V;
            }
        }
    }
    // start from low power class to high, if no ATR received, try another power class
    // if the an invalid TS byte is received, change the convention with the same power class
    retry = 0;
    while (retry++ < 3)
    {
        //2007_04_12, some 3G card will give wrong ATR in the first time, and we should reset it twice
        //If we don't reset these 2 variables, former wrong path will affect next time we process ATR
        usim_set_speed(SPEED_372, hw_cb);
        usim_dcb->abort = usim_dcb->resync = KAL_FALSE;
        usim_activation(hw_cb);
        //dbg_print("Enter wait event...\r\n");
#if defined(__SIM_HOT_SWAP_SUPPORT__)
        if (usim_dcb->present == KAL_FALSE)
        {
            SIM_WriteReg(SIM0_BASE_ADDR_MTK + SIM_IRQEN_MTK, SIM_IRQEN_ALLOFF);
            DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC130, hw_cb->simInterface, __LINE__, 0, 0, 0);
        }
        if (usim_dcb->present == KAL_FALSE) return KAL_FALSE;
#endif // #if defined(__SIM_HOT_SWAP_SUPPORT__)
        USIM_WAIT_EVENT_MTK(usim_dcb);
#if defined(SIM_DRV_IC_USB)
        sim_addMsg(0xE009, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
#endif
        if (usim_dcb->ev_status == USIM_NO_ERROR)
        {
            // a correct TS byte is received
            //dbg_print("Correct TS byte is received\r\nEnter wait event...\r\n");
#if defined(__SIM_HOT_SWAP_SUPPORT__)
            if (usim_dcb->present == KAL_FALSE)
            {
                SIM_WriteReg(SIM0_BASE_ADDR_MTK + SIM_IRQEN_MTK, SIM_IRQEN_ALLOFF);
                DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC130, hw_cb->simInterface, __LINE__, 0, 0, 0);
            }
            if (usim_dcb->present == KAL_FALSE) return KAL_FALSE;
#endif // #if defined(__SIM_HOT_SWAP_SUPPORT__)
            USIM_WAIT_EVENT_MTK(usim_dcb);
            // all ATR characters are received
            if (usim_dcb->ev_status != USIM_ATR_REC)
            {
                return KAL_FALSE;
            }
            else
            {
                return KAL_TRUE;
            }
        }
        else if (usim_dcb->ev_status == USIM_ATR_REC)
        {
            // all ATR characters are received
            return KAL_TRUE;
        }
        else if (usim_dcb->warm_rst == KAL_TRUE)
        {
            //dbg_print("warm reset fail!!\r\n");
            usim_deactivation(hw_cb);
            return KAL_FALSE;
        }
        else if ((usim_dcb->ev_status == USIM_TS_INVALID || usim_dcb->ev_status == USIM_RX_INVALID)
                 && (usim_dcb->dir == USIM_DIRECT))
        {
            // try another convention
            usim_dcb->dir = (USIM_INVERSE == usim_dcb->dir) ? USIM_DIRECT : USIM_INVERSE;
            usim_deactivation(hw_cb);
#if defined(SIM_DRV_IC_USB)
            sim_addMsg(0xE00A, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
#endif
            //dbg_print("change another convention %d !!\r\n", usim_dcb->dir);
        }
        else if (usim_dcb->ev_status == USIM_NO_ATR || usim_dcb->ev_status == USIM_BWT_TIMEOUT ||
                 usim_dcb->ev_status == USIM_GPT_TIMEOUT ||
                 (usim_dcb->ev_status == USIM_TS_INVALID || usim_dcb->ev_status == USIM_RX_INVALID))
        {
#if defined(__DBG_MSG__)
            //dbg_print("some error...!!\r\n");
#endif
            retry = 0;
            usim_dcb->dir = USIM_DIRECT;
            // deactivate and delay
            usim_deactivation(hw_cb);
#if defined(SIM_DRV_IC_USB)
            sim_addMsg(0xE00B, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
#endif
            // change another power class if availabe, no retry with the same power class
            if (usim_dcb->sim_env == ME_18V_30V)
            {
                if (usim_dcb->power_in == UNKNOWN_POWER_CLASS && usim_dcb->power == CLASS_C_18V)
                {
                    usim_dcb->power = CLASS_B_30V;
                }
                else if (usim_dcb->power_in != UNKNOWN_POWER_CLASS && usim_dcb->power_in == usim_dcb->power)
                {
                    if (usim_dcb->power_in == CLASS_C_18V)
                        usim_dcb->power = CLASS_B_30V;
                    else
                        usim_dcb->power = CLASS_C_18V;
                }
                else
                {
                    return KAL_FALSE;
                }
            }
            else
            {
                return KAL_FALSE;
            }
            ////dbg_print("continue select power loop...!!\r\n");
        }
        else
        {
            ASSERT(0);
        }
    }
    return KAL_FALSE;
}
/*************************************************************************
* FUNCTION
*  usim_activation
*
* DESCRIPTION
* Perform the activation of USIM
* It is a cold reset
* select the power according to usim_dcb->power (input)
* select the convention according to usim_dcb->dir (input)
* the clock rate adopted is SPEED_372
* set the default timeout value
*
* PARAMETERS
	None

* RETURNS
	None

* GLOBALS AFFECTED
*	usim_dcb
*
*************************************************************************/
static void usim_activation(sim_HW_cb *hw_cb)
{
    kal_uint16 reg = 0;
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    // dbg_print("usim_activation, pow = %d, dir: %d \r\n",usim_dcb->power, usim_dcb->dir);



#if !defined(DRV_SIM_LTE_SERIES)
#if defined(__DRV_SIM_NEED_CUSTOM_CONTROL__)
    /*old method, just copy here and will change it when necessary*/
    if (0 == simInterface)
    {
        if (usim_dcb->power == CLASS_B_30V)
            SIM_custom_SetVdd(0, PMIC_VSIM_3_0);
        else
            SIM_custom_SetVdd(0, PMIC_VSIM_1_8);
    }
    else
    {
        if (usim_dcb->power == CLASS_B_30V)
            SIM_custom_SetVdd(1, PMIC_VSIM_3_0);
        else
            SIM_custom_SetVdd(1, PMIC_VSIM_1_8);
    }
#elif (!defined(__DRV_SIM_SIMIF_CONTROL_VSIM__))

    /*use PMU API*/
    if (SIM_base == hw_cb->mtk_baseAddr)
    {
        DRV_ICC_PMU_setVolt(0, usim_dcb->power);
    }
#if (2 == SIM_DRV_MTK_INTERFACE_NUM)
    else if (SIM2_base == hw_cb->mtk_baseAddr)
    {
        DRV_ICC_PMU_setVolt(1, usim_dcb->power);
    }
#endif


#else //configure through SIMIF setting
    if (usim_dcb->power == CLASS_B_30V)
    {
        reg = SIM_CONF_SIMSEL;
    }
#ifdef DRV_SIM_VSIM2_ISSUE_76_SERIES
    if (SIM2_base == hw_cb->mtk_baseAddr)
    {
        DRV_ICC_PMU_setVolt(1, usim_dcb->power);
    }
#endif //DRV_SIM_VSIM2_ISSUE_76_SERIES

#endif   //configure through SIMIF setting

#else /*DRV_SIM_6290_SERIES*/
    /*extract from above*/
    if (usim_dcb->power == CLASS_B_30V)
    {
        reg = SIM_CONF_SIMSEL;
#ifdef __FPGA__
#else
        if (SIM_base == hw_cb->mtk_baseAddr)
        {
            DRV_ICC_PMU_setVolt(0, CLASS_B_30V);
            //dbg_print("VSIM0 select 3.0V\n\r");
        }
        else
        {
            DRV_ICC_PMU_setVolt(1, CLASS_B_30V);
            //dbg_print("VSIM1 select 3.0V\n\r");
        }
#endif
    }
    else
    {
        reg &= ~SIM_CONF_SIMSEL;
#ifdef __FPGA__
#else
        if (SIM_base == hw_cb->mtk_baseAddr)
        {
            DRV_ICC_PMU_setVolt(0, CLASS_C_18V);
            //dbg_print("VSIM0 select 1.8V\n\r");
        }
        else
        {
            DRV_ICC_PMU_setVolt(1, CLASS_C_18V);
            //dbg_print("VSIM1 select 1.8V\n\r");
        }
#endif
    }
#endif

    if (usim_dcb->dir == USIM_DIRECT)
    {
        //reg |= SIM_CONF_Direct;
        reg &= ~(SIM_CONF_CONV);
    }
    else
    {
        //reg |= SIM_CONF_InDirect;
        reg |= SIM_CONF_CONV;
    }

    if (KAL_TRUE == usim_dcb->ts_hsk_en)
    {
        reg |= (SIM_CONF_TXHSK | SIM_CONF_RXHSK);
        SIM_SetRXRetry(1);
        SIM_SetTXRetry(1);
    }
    else
    {
        SIM_SetRXRetry(0);
        SIM_SetTXRetry(0);
    }
    SIM_WriteReg(SIM0_BASE_ADDR_MTK + SIM_CONF_MTK, reg);

    SIM_FIFO_Flush();
    SIM_SetRXTIDE(2, hw_cb);	// generate a interrupt while TS byte and T0 is received
    //Clear IRQ STS
    reg = SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_STS_MTK);
    SIM_WriteReg(SIM0_BASE_ADDR_MTK + SIM_STS_MTK, reg);

    kal_set_eg_events(usim_dcb->event, 0, KAL_AND);

    SIM_EINT_Mask(hw_cb, KAL_TRUE, __LINE__);

    usim_set_timeout(INIT_WWT_T0, hw_cb);		/* In case of card only response 1 byte, we need TOUT here */

    // Enable IRQ
    SIM_WriteReg(SIM0_BASE_ADDR_MTK + SIM_IRQEN_MTK, USIM_IRQEN_ATR | SIM_IRQEN_RXERR | SIM_IRQEN_TOUT);
    SIM_CLR_OE_BIT() ;
    usim_dcb->main_state = ACTIVATION_STATE;
    usim_dcb->ev_status = USIM_NO_ERROR;
    if (usim_dcb->warm_rst == KAL_FALSE)
    {
#if defined(__SIM_ACTIVATION_V2__)
        if (usim_dcb->activation_v2 == KAL_TRUE)
        {
            DclGPIO_Control(usim_dcb->gpio_handle_for_SIO, GPIO_CMD_SET_MODE_0, NULL);
            MO_Sync();
        }
#endif

        SIM_EINT_Mask(hw_cb, KAL_FALSE, __LINE__);

#if !defined(ATEST_DRV_ENABLE)
        sim_dump_sim_pins(hw_cb);
#endif
#if !defined( __FPGA__)
        if (SIM_base == hw_cb->mtk_baseAddr)
        {
            DRV_ICC_PMU_switch(0, KAL_TRUE);
        }
        else
        {
            DRV_ICC_PMU_switch(1, KAL_TRUE);
        }
#endif
        sim_addMsg(SIM_DRIVER_ACT, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
#if defined(SIM_DRV_GEMINI_WITH_MT6306)
        sim_MT6306_VCCCtrl(hw_cb, 1);
#endif
        USIM_POW_ON();
#if defined(__SIM_ACTIVATION_V2__)
        if (usim_dcb->activation_v2 == KAL_TRUE)
        {
            DRV_ICC_GPTI_StopItem(usim_dcb->gpt_handle_for_SIM_activation);
            DRV_ICC_GPTI_StartItem(usim_dcb->gpt_handle_for_SIM_activation, 1, usim_gpt_timeout_handler_for_SIM_activation, hw_cb);
        }
#endif
    }
    else
    {
        USIM_WRST();

        SIM_EINT_Mask(hw_cb, KAL_FALSE, __LINE__);

        kal_sleep_task(KAL_TICKS_50_MSEC_REAL);
    }
    // go to usim_hisr of case RXTIDE, ATRERR, RXERR(parity error)
}

//void usim_lisr_Multiple(void)
void usim_lisr_Multiple(kal_uint32 v)
{
    sim_HW_cb *hw_cb;

    hw_cb = (sim_HW_cb *)(hwCbArray[sim_get_logical_from_SIMIF(0)]);
    IRQMask(hw_cb->mtk_lisrCode);
#if defined(SIM_DRV_HISR_INIT_CENTRALIZATION)
    kal_activate_hisr_index(USIM_HISR);
#else
    kal_activate_hisr(usim_hisrid);
#endif

}

//void usim_lisr2_Multiple(void)
void usim_lisr2_Multiple(kal_uint32 v)
{
    sim_HW_cb *hw_cb;

    hw_cb = (sim_HW_cb *)(hwCbArray[sim_get_logical_from_SIMIF(1)]);
    IRQMask(hw_cb->mtk_lisrCode);
#if defined(SIM_DRV_HISR_INIT_CENTRALIZATION)
    kal_activate_hisr_index(USIM2_HISR);
#else
    kal_activate_hisr(usim2_hisrid);
#endif
}
/*************************************************************************
* FUNCTION
*  usim_deactivation
*
* DESCRIPTION
*	1. deactivate the UICC card
*	2. wait util the the deactivation is complete
*
* PARAMETERS
	None

* RETURNS
	None

* GLOBALS AFFECTED
*	usim_dcb->main_state
*
*************************************************************************/
static void usim_deactivation(sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    // dbg_print("usim_deactivation\r\n");

    Data_Sync_Barrier();
    if (SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_CTRL_MTK) & SIM_CTRL_SIMON)
    {
        sim_addMsg(SIM_DRIVER_DEACT, hw_cb->simInterface, hw_cb->mtk_baseAddr, 0);
        // before deactivate the SIM interface, turn on the clock first.
        kal_set_eg_events(usim_dcb->event, 0, KAL_AND);

        SIM_EINT_Mask(hw_cb, KAL_TRUE, __LINE__);

        //kal_set_eg_events(usim_dcb->event, USIM_EVENT,KAL_OR);
        sim_addMsg(SIM_DEACTIVATE_1, hw_cb->simInterface, usim_dcb->main_state, usim_dcb->ev_status);
        DRV_WriteReg32((SIM0_BASE_ADDR_MTK + SIM_IRQEN_MTK), SIM_IRQEN_SIMOFF);
        SIM_Deactive();

        SIM_EINT_Mask(hw_cb, KAL_FALSE, __LINE__);

        USIM_WAIT_EVENT_MTK(usim_dcb);
        //usim_dcb->ev_status = USIM_POWER_OFF;

        SIM_EINT_Mask(hw_cb, KAL_TRUE, __LINE__);

        USIM_CLR_FIFO();
        //SIM_DisAllIntr(); // disable SIMOFF INT

        SIM_EINT_Mask(hw_cb, KAL_FALSE, __LINE__);

#if defined(SIM_DRV_IC_USB)
        if ((usim_dcb->isIcUsb == KAL_TRUE) && (hw_cb->simInterface == 0x0) && (FACTORY_BOOT != kal_query_boot_mode()))
        {
            // tell USB to reset MAC & PHY
            SIM_icusb_disableSession(hw_cb);
            sim_addMsg(0xE005, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
        }
#endif // #if defined(SIM_DRV_IC_USB)

        // turn off LDO
#if defined(__FPGA__)
#else // #if defined(__FPGA__)
        Data_Sync_Barrier();
        while (!(DRV_Reg32(hw_cb->mtk_baseAddr + SIM_ATRSTA_MTK) & 0x0001));
        if (SIM_base == hw_cb->mtk_baseAddr)
        {
            DRV_ICC_PMU_switch(0, KAL_FALSE);
        }
        else
        {
            DRV_ICC_PMU_switch(1, KAL_FALSE);
        }
#endif // #if defined(__FPGA__)

        // Need delay of at least 10ms before next activate operation
        kal_sleep_task(KAL_TICKS_50_MSEC_REAL);
#if defined(SIM_DRV_IC_USB)
        if ((usim_dcb->isIcUsb == KAL_TRUE) && (hw_cb->simInterface == 0x0) && (FACTORY_BOOT != kal_query_boot_mode()))
        {
            // tell USB to reset MAC & PHY
            SIM_icusb_disconnectDone(hw_cb);
            sim_addMsg(0xE007, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
        }
#endif // #if defined(SIM_DRV_IC_USB)

        sim_addMsg(SIM_DEACTIVATE_2, hw_cb->simInterface, usim_dcb->main_state, usim_dcb->ev_status);

        usim_dcb->main_state = DEACTIVATION_STATE;
        if (usim_dcb->ev_status == USIM_POWER_OFF)
            usim_dcb->main_state = DEACTIVATION_STATE;
        else
        {
            DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC20, SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_ATIME_MTK), 0, 0, usim_dcb->ev_status, 0x1116);
            sim_dump_reg(SIM_PRINT_L1SIM_CMD_TRC20, hw_cb);

        }
        // else
        // ASSERT(0);
    }
#if defined(SIM_DRV_IC_USB)
    else
    {
        sim_addMsg(0xE008, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
    }
#endif
}
/*************************************************************************
* FUNCTION
*  usim_t1end_handler
*
* DESCRIPTION
*	1. it is called while t1end interrupt is generated.
*	2. there are two different states in this function:
		CMD_TX_STATE: a complete block is sent to UICC
		CMD_RX_INF_STATE: a complete block is received from UICC
*
* PARAMETERS
	None

* RETURNS
	None

* GLOBALS AFFECTED
*	usim_dcb->main_state
*
*************************************************************************/
static void usim_t1end_handler(sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    switch (usim_dcb->main_state)
    {
        case (volatile usim_main_state_enum) CMD_TX_STATE:
            USIM_DMA_RX_TIDE();
#if !defined(DRV_SIM_LTE_SERIES)

#ifdef SIM_CACHED_SUPPORT
            GET_NCACHED_USIM_DMA_BUF_INT(usim_dcb->dma_menu.addr, sim_get_hwCtrl_from_logicalNum(hw_cb->simInterface));
#else
            usim_dcb->dma_menu.addr = (kal_uint32)usim_dcb->dma_buffer;  // (kal_uint32)usim_dcb.rx_buf+usim_dcb->rx_index;
#endif
            usim_dcb->dma_input.type = DMA_HWRX;
            usim_dcb->dma_input.count = USIM_DMA_MAX_SIZE;
            DMA_Config(usim_dcb->dma_port, &usim_dcb->dma_input, KAL_TRUE);
#endif /*DRV_SIM_6290_SERIES*/

            if (usim_dcb->wtx == KAL_TRUE)
            {
                usim_dcb->wtx = KAL_FALSE;
                usim_set_timeout(usim_dcb->BWT * usim_dcb->wtx_m, hw_cb);
            }
            else
                usim_set_timeout(usim_dcb->BWT, hw_cb);
            usim_dcb->ev_status = USIM_NO_ERROR;
            usim_dcb->main_state = CMD_RX_STATE;
            SIM_WriteReg(SIM0_BASE_ADDR_MTK + SIM_IRQEN_MTK, (SIM_STS_EDCERR | SIM_STS_RXERR | SIM_STS_T1END | SIM_STS_OV | SIM_STS_TOUT));
            break;
        case (volatile usim_main_state_enum) CMD_RX_STATE:
        {
            kal_uint8 len, pcb;
#ifdef SIM_CACHED_SUPPORT
            kal_uint8 *dma_buffer;
            GET_NCACHED_USIM_DMA_BUF_P(dma_buffer, sim_get_hwCtrl_from_logicalNum(hw_cb->simInterface));
#else
            kal_uint8 *dma_buffer = usim_dcb->dma_buffer;
#endif	/*SIM_CACHED_SUPPORT*/



            usim_set_timeout(0, hw_cb);
#if defined(DRV_SIM_LTE_SERIES)
            SIM_DMA_STOP(usim_dcb->dma_config.channel);
#else //DRV_SIM_6290_SERIES
#ifdef DRV_SIM_DMA_V2
#ifdef SIM_ADDDMA
            DMA_Flush(usim_dcb->dma_port);
#endif
            /*For short packets those haven't trigger DMA transfer, the 1st byte, NAD, havn't been updated in EMI.
            we need to wait enought time before EMI updated so that it is valid to latch NAD later.
            */
            {
                kal_uint32 delayTime1;

                delayTime1 = drv_get_current_time();
                while (delayTime1 == drv_get_current_time());
            }
#else
            DMA_Stop(usim_dcb->dma_port);
#endif //DRV_SIM_DMA_V2
#endif //DRV_SIM_6290_SERIES

            if (usim_dcb->ev_status == USIM_RX_INVALID)
            {
                // comes from EDC or parity error
                USIM_SET_EVENT_Multiple(usim_dcb);
                kal_sprintf(hw_cb->hisrDbgStr, "usim_dcb->ev_status Status:%x\n\r", usim_dcb->ev_status);
                DRV_ICC_print_str(hw_cb->hisrDbgStr);

                return;
            }
            // receive a complete block, except a S-block received, there still is one
            // parameter byte in the fifo

            usim_dcb->header_rx[T1_NAD_INDEX] = dma_buffer[T1_NAD_INDEX]; // NAD
            pcb = usim_dcb->header_rx[T1_PCB_INDEX] = dma_buffer[T1_PCB_INDEX]; // PCB
            len = usim_dcb->header_rx[T1_LEN_INDEX] = dma_buffer[T1_LEN_INDEX]; // LEN

#if defined(SIM_DEBUG_INFO)
            kal_sprintf(hw_cb->hisrDbgStr, "CMD_RX_STATE (reveive a block!! len: %d)\n\r", len);
            DRV_ICC_print_str(hw_cb->hisrDbgStr);
#endif

#if defined (__SIM_DVT__)
            kal_sprintf(hw_cb->hisrDbgStr, "CMD_RX_STATE (reveive a block!! len: %d)\n\r", len);
            DRV_ICC_print_str(hw_cb->hisrDbgStr);
#endif /* End of #if defined (__SIM_DVT__) */

            if (len)
            {
                if (len == 1 && USIM_IS_SBLOCK(pcb))
                {
                    usim_dcb->header_rx[T1_INF_INDEX] = dma_buffer[T1_INF_INDEX];
                }
                else
                {
                    kal_mem_cpy(usim_dcb->rx_buf + usim_dcb->rx_index, &dma_buffer[T1_INF_INDEX], len);
                }
            }
            usim_dcb->ev_status = USIM_NO_ERROR;
            USIM_SET_EVENT_Multiple(usim_dcb);
        }
        break;
        default: // MTK04122: add default for handling error state
            SIM_ASSERT(0);
            break;
    }
#if defined(SIM_DEBUG_INFO)
    DRV_ICC_print_str("\n\r");
#endif
}
static void usim_timeout_handler(sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    switch (usim_dcb->main_state)
    {
        case (volatile usim_main_state_enum) ATR_STATE:
            // may be optimized by parsing the content instead of using timeout.
            // read the remaining bytes of ATR
        {
            kal_uint32 count;

            count = SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_COUNT_MTK);
            while (count--)
            {
                if (usim_dcb->ATR_index >= 33)
                {
                    USIM_CLR_FIFO();
                    /* maybe the atr is correct??? */
                    usim_dcb->ev_status = USIM_RX_INVALID;
                    USIM_SET_EVENT_Multiple(usim_dcb);
                    return;
                }
                usim_dcb->ATR_data[usim_dcb->ATR_index++] = (kal_uint8)SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_DATA_MTK);
            }
            usim_dcb->ev_status = USIM_ATR_REC;
            USIM_SET_EVENT_Multiple(usim_dcb);
            kal_sprintf(hw_cb->hisrDbgStr, "ATR TOUT, usim_dcb->ev_status:%x", usim_dcb->ev_status);
            DRV_ICC_print_err_msg(hw_cb, hw_cb->hisrDbgStr);
        }
        break;
        case (volatile usim_main_state_enum) CLK_STOPPING_STATE:
        {
            kal_bool level;

            usim_set_timeout(0, hw_cb);
            usim_dcb->main_state = CLK_STOPPED_STATE;
            if (usim_dcb->clock_stop_type == CLOCK_STOP_HIGH)
                level = KAL_TRUE;
            else
                level = KAL_FALSE;
            SIM_Idle_MTK(level, hw_cb);
            USIM_SET_EVENT_Multiple(usim_dcb);
#ifndef __DRV_SIM_REG_ON_PDN_V2__
            /*controller's clock must now stopped, verify it*/
            if ((SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_CTRL_MTK) & 0x2) != 0x2)
                ASSERT(0);
#endif
            SIM_DisAllIntr();
#if defined(USIM_DEBUG)
            end = get_duration_tick(start);
#endif
            USIM_low_power_related_setting(hw_cb, USIM_LP_ENABLE);
        }
        break;
        case CLK_STOPPED_STATE:
        {
            usim_dcb->main_state = MAIN_CMD_READY_STATE;
            usim_dcb->ev_status = USIM_NO_ERROR;
            USIM_SET_EVENT_Multiple(usim_dcb);
        }
        break;
        default:
#if defined(DRV_SIM_LTE_SERIES)
            SIM_DMA_STOP(usim_dcb->dma_config.channel);
#else
            DMA_Stop(usim_dcb->dma_port);
#endif

            usim_dcb->ev_status = USIM_BWT_TIMEOUT;
            USIM_SET_EVENT_Multiple(usim_dcb);
    }
}
void usim_hisr(void)
{
    kal_uint32 int_status;
    sim_HW_cb *hw_cb;
    usim_dcb_struct *usim_dcb;

    /*logical SIM 1 not exactly work on physical SIM1 interface, we only know interrrupt comes from SIM1, have to find its logical */
    hw_cb = (sim_HW_cb *)(hwCbArray[sim_get_logical_from_SIMIF(0)]);

    kal_take_spinlock(hw_cb->spinlockid, KAL_INFINITE_WAIT);
    hw_cb->waitISR = KAL_TRUE;
    Data_Sync_Barrier();
    kal_give_spinlock(hw_cb->spinlockid);

#if defined(SIM_DRV_SWITCH_MT6306)
#if defined(__SIM_DRV_CO_LOAD_MT6306__)
    if (sim_connectMT6306)
    {
#endif
        usim_hisr_MT6306();
        hw_cb->waitISR = KAL_FALSE;
        Data_Sync_Barrier();
        return;
#if defined(__SIM_DRV_CO_LOAD_MT6306__)
    }
#endif
#endif

    //not like Gemini project, in dual controller solution, we need 2 individual HISR and thus every HISR mapping fixed interface
    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    Data_Sync_Barrier();
    int_status = SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_STS_MTK);
#if !defined(ATEST_DRV_ENABLE)
    kal_brief_trace(TRACE_INFO, LOG_SIM_DRV_HISR, hw_cb->simInterface, int_status, DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_IRQEN_MTK));
#endif
    /*In mt6290, INT status is write clear*/
    SIM_WriteReg(SIM0_BASE_ADDR_MTK + SIM_STS_MTK, int_status);
    sim_addMsg(SIM_INT_USIM, 0, int_status, usim_dcb->ev_status);
    usim_dcb->int_status = int_status;
    PUSH_INT(int_status);
    if (usim_dcb->previous_state == ACTIVATION_STATE || usim_dcb->previous_state == ATR_STATE)
    {
        usim_dcb->previous_state = usim_dcb->main_state;
        usim_dcb->atr_count++;
        if (usim_dcb->atr_count > 40)
        {
            SIM_DisAllIntr(); // disable SIMOFF INT
            usim_dcb->ev_status = USIM_NO_ATR;
            USIM_SET_EVENT_Multiple(usim_dcb);
            usim_dcb->atr_count = 0;
            kal_sprintf(hw_cb->hisrDbgStr, "[SIM_DRV:%d]SIM1 card send too many ATR data\n\r", hw_cb->simInterface);
            DRV_ICC_print_str(hw_cb->hisrDbgStr);
            goto end_of_hisr;
        }
    }
    else
    {
        usim_dcb->previous_state = usim_dcb->main_state;
        usim_dcb->atr_count = 0;
    }
#if !defined(ATEST_DRV_ENABLE)
    if(int_status == 0xa)
    {
        sim_dump_sim_pins(hw_cb);
        sim_dump_fifo(hw_cb);
    }
#endif
#if defined(__DBG_MSG__)
    //dbg_print("[DRV] usim_hisr int:%x, FIFO count = %d\r\n",int_status, SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_COUNT_MTK));
#endif
    if (int_status & SIM_STS_RXERR)
    {
#if defined(__DBG_MSG__)
        //dbg_print("[DRV] parity error \r\n");
#endif
        usim_set_timeout(0, hw_cb);
        usim_dcb->ev_status = USIM_RX_INVALID;
        kal_sprintf(hw_cb->hisrDbgStr, "RXERR, usim_dcb->ev_status:%x, int_status:%x", usim_dcb->ev_status, int_status);
        DRV_ICC_print_err_msg(hw_cb, hw_cb->hisrDbgStr);
        if (usim_dcb->main_state ==  ACTIVATION_STATE)
        {
            SIM_DisAllIntr();
            USIM_SET_EVENT_Multiple(usim_dcb);
            goto end_of_hisr;
        }
        // wait t1end interrupt
    }

    if (int_status & SIM_STS_EDCERR)
    {
#if defined(__DBG_MSG__)
        //dbg_print("[DRV] EDC error \r\n");
#endif
        usim_set_timeout(0, hw_cb);
        usim_dcb->ev_status = USIM_RX_INVALID;
    }
    if (int_status & SIM_STS_TOUT)
    {
        usim_timeout_handler(hw_cb);
        goto end_of_hisr;
    }
    if (int_status & SIM_STS_T1END)
    {
        usim_t1end_handler(hw_cb);
    }
    if (int_status & SIM_STS_RX)
    {
        usim_rx_handler(int_status, hw_cb);
    }
    if (int_status & SIM_STS_SIMOFF)
    {
#if defined(__DBG_MSG__)
        //dbg_print("[DRV] Power off \r\n");
#endif
        usim_dcb->ev_status = USIM_POWER_OFF;
        SIM_DisAllIntr(); // disable SIMOFF INT
        USIM_SET_EVENT_Multiple(usim_dcb);
        goto end_of_hisr;
    }
    if (int_status & SIM_STS_TXERR || int_status & SIM_STS_OV)
    {
        // ASSERT(0); [ALPS00426103]not need assert
        usim_set_timeout(0, hw_cb);
        usim_dcb->ev_status = USIM_RX_INVALID;
        kal_sprintf(hw_cb->hisrDbgStr, "TXERR, usim_dcb->ev_status:%x, int_status:%x", usim_dcb->ev_status, int_status);
        DRV_ICC_print_err_msg(hw_cb, hw_cb->hisrDbgStr);
    }
    if (int_status & SIM_STS_NATR)
    {
        usim_set_timeout(0, hw_cb);
        SIM_DisAllIntr();
        usim_dcb->ev_status = USIM_NO_ATR;
        DRV_ICC_print_err_msg(hw_cb, "No ATR");
#if !defined(ATEST_DRV_ENABLE)
        sim_dump_sim_pins(hw_cb);
        sim_dump_gpio(hw_cb);
        sim_dump_eint(hw_cb);
#endif
        USIM_SET_EVENT_Multiple(usim_dcb);
    }

end_of_hisr:

    IRQClearInt(IRQ_USIM0_CODE);
#if !defined(__UNIFIED_ISR_LEVEL__)
    IRQUnmask(hw_cb->mtk_lisrCode);
#endif
    hw_cb->waitISR = KAL_FALSE;
    Data_Sync_Barrier();
}


void usim_hisr2(void)
{
    kal_uint32 int_status;
    sim_HW_cb *hw_cb;
    usim_dcb_struct *usim_dcb;

    hw_cb = (sim_HW_cb *)(hwCbArray[sim_get_logical_from_SIMIF(1)]);

    kal_take_spinlock(hw_cb->spinlockid, KAL_INFINITE_WAIT);
    hw_cb->waitISR = KAL_TRUE;
    Data_Sync_Barrier();
    kal_give_spinlock(hw_cb->spinlockid);

#if defined(SIM_DRV_SWITCH_MT6306)
#if defined(__SIM_DRV_CO_LOAD_MT6306__)
    if (sim_connectMT6306)
    {
#endif
        usim_hisr2_MT6306();
        hw_cb->waitISR = KAL_FALSE;
        Data_Sync_Barrier();
        return;
#if defined(__SIM_DRV_CO_LOAD_MT6306__)
    }
#endif
#endif
    //not like Gemini project, in dual controller solution, we need 2 individual HISR and thus every HISR mapping fixed interface
    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    Data_Sync_Barrier();
    int_status = SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_STS_MTK);
#if !defined(ATEST_DRV_ENABLE)
    kal_brief_trace(TRACE_INFO, LOG_SIM_DRV_HISR, hw_cb->simInterface, int_status, DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_IRQEN_MTK));
#endif
    /*In mt6290, INT status is write clear*/
    SIM_WriteReg(SIM0_BASE_ADDR_MTK + SIM_STS_MTK, int_status);

    sim_addMsg(SIM_INT_USIM, 1, int_status, usim_dcb->ev_status);
    usim_dcb->int_status = int_status;
    PUSH_INT(int_status);
    if (usim_dcb->previous_state == ACTIVATION_STATE || usim_dcb->previous_state == ATR_STATE)
    {
        usim_dcb->previous_state = usim_dcb->main_state;
        usim_dcb->atr_count++;
        if (usim_dcb->atr_count > 40)
        {
            SIM_DisAllIntr(); // disable SIMOFF INT
            usim_dcb->ev_status = USIM_NO_ATR;
            USIM_SET_EVENT_Multiple(usim_dcb);
            usim_dcb->atr_count = 0;
            kal_sprintf(hw_cb->hisrDbgStr, "[SIM_DRV:%d]SIM2 card send too many ATR data\n\r", hw_cb->simInterface);
            DRV_ICC_print_str(hw_cb->hisrDbgStr);
            goto end_of_hisr;
        }
    }
    else
    {
        usim_dcb->previous_state = usim_dcb->main_state;
        usim_dcb->atr_count = 0;
    }

#if !defined(ATEST_DRV_ENABLE)
    if(int_status == 0xa)
    {
        sim_dump_sim_pins(hw_cb);
        sim_dump_fifo(hw_cb);
    }
#endif
    if (int_status & SIM_STS_RXERR)
    {
        // dbg_print("parity error \r\n");
        usim_set_timeout(0, hw_cb);
        usim_dcb->ev_status = USIM_RX_INVALID;

        kal_sprintf(hw_cb->hisrDbgStr, "RXERR, usim_dcb->ev_status:%x, int_status:%x", usim_dcb->ev_status, int_status);
        DRV_ICC_print_err_msg(hw_cb, hw_cb->hisrDbgStr);

        if (usim_dcb->main_state ==  ACTIVATION_STATE)
        {
            SIM_DisAllIntr();
            USIM_SET_EVENT_Multiple(usim_dcb);
            goto end_of_hisr;
        }
        // wait t1end interrupt
    }

    if (int_status & SIM_STS_EDCERR)
    {
        ////dbg_print("EDC error \r\n");
        usim_set_timeout(0, hw_cb);
        usim_dcb->ev_status = USIM_RX_INVALID;
    }
    if (int_status & SIM_STS_TOUT)
    {
        usim_timeout_handler(hw_cb);
        goto end_of_hisr;
    }
    if (int_status & SIM_STS_T1END)
    {
        usim_t1end_handler(hw_cb);
    }
    if (int_status & SIM_STS_RX)
    {
        usim_rx_handler(int_status, hw_cb);
    }
    if (int_status & SIM_STS_SIMOFF)
    {
        ////dbg_print("Power off \r\n");
        usim_dcb->ev_status = USIM_POWER_OFF;
        SIM_DisAllIntr(); // disable SIMOFF INT
        USIM_SET_EVENT_Multiple(usim_dcb);
        goto end_of_hisr;
    }
    if (int_status & SIM_STS_TXERR || int_status & SIM_STS_OV)
    {
        // ASSERT(0); [ALPS00426103]not need assert
        usim_set_timeout(0, hw_cb);
        usim_dcb->ev_status = USIM_RX_INVALID;
        kal_sprintf(hw_cb->hisrDbgStr, "TXERR, usim_dcb->ev_status:%x, int_status:%x", usim_dcb->ev_status, int_status);
        DRV_ICC_print_err_msg(hw_cb, hw_cb->hisrDbgStr);
    }
    if (int_status & SIM_STS_NATR)
    {
        usim_set_timeout(0, hw_cb);
        SIM_DisAllIntr();
        usim_dcb->ev_status = USIM_NO_ATR;
        DRV_ICC_print_err_msg(hw_cb, "No ATR");
#if !defined(ATEST_DRV_ENABLE)
        sim_dump_sim_pins(hw_cb);
        sim_dump_gpio(hw_cb);
        sim_dump_eint(hw_cb);
#endif
        USIM_SET_EVENT_Multiple(usim_dcb);
    }

end_of_hisr:

    IRQClearInt(hw_cb->mtk_lisrCode);
#if !defined(__UNIFIED_ISR_LEVEL__)
    IRQUnmask(hw_cb->mtk_lisrCode);
#endif
    hw_cb->waitISR = KAL_FALSE;
    Data_Sync_Barrier();
}



/*************************************************************************
* FUNCTION
*  usim_rx_handler
*
* DESCRIPTION
*	1. It is called byt usim_hisr
*	2. It is called while RXTIDE interrupt is triggerred
*
* PARAMETERS
	None

* RETURNS
	None

* GLOBALS AFFECTED
*	usim_dcb
*
*************************************************************************/
static void usim_rx_handler(kal_uint32 int_status, sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    // dbg_print("[DRV] usim_rx_handler \r\n");

    Data_Sync_Barrier();
    switch (usim_dcb->main_state)
    {
        case (volatile usim_main_state_enum) ACTIVATION_STATE:
            // dbg_print("ACTIVATION_STATE \r\n");
        {
            kal_uint8 TS = 0, T0 = 0, count = 0;

            TS = SIM_Reg((SIM0_BASE_ADDR_MTK + SIM_DATA_MTK));
            // dbg_print("TS = %x \r\n", TS);
            if (TS == 0x3B || TS == 0x3F)
            {
                usim_set_timeout(INIT_WWT_T0, hw_cb);
                USIM_ENABLE_TXRX_HANSHAKE();
                SIM_SetRXRetry(USIM_RETRY);
                SIM_SetTXRetry(USIM_RETRY);
                count = 0;
                T0 = SIM_Reg((SIM0_BASE_ADDR_MTK + SIM_DATA_MTK));
                usim_dcb->hist_index = T0 & 0xf; // use to contain the length of historical char (temperary)
                USIM_CAL_TD_COUNT(T0, count);
                //if((T0 & TDMask) == NULL)
                if (!(T0 & TDMask))
                {
                    count += usim_dcb->hist_index;
                    if (count >= SIM_TOTAL_FIFO_LEN)
                    {
                        usim_dcb->abort = KAL_TRUE;	// for temp usage (separate two times)
                        count -= 6;
                    }
                    usim_dcb->resync = KAL_TRUE; // for temp usage (last time)
                }
                else
                    count++;
                if (count == 0)
                {
                    usim_dcb->ev_status = USIM_ATR_REC;
                    USIM_SET_EVENT_Multiple(usim_dcb);
                }
                else
                {
                    usim_dcb->rx_size = count + 1;	// for temp usage (index to TD byte)
                    SIM_SetRXTIDE(count, hw_cb);
                    SIM_WriteReg((SIM0_BASE_ADDR_MTK + SIM_IRQEN_MTK), USIM_IRQEN_NORMAL);
                    usim_dcb->ev_status = USIM_NO_ERROR;
                }

                usim_dcb->main_state = ATR_STATE;
                usim_dcb->ATR_index = 0;
                usim_dcb->ATR_data[usim_dcb->ATR_index++] = TS;
                usim_dcb->ATR_data[usim_dcb->ATR_index++] = T0;
            }
            else
            {
                usim_dcb->ev_status = USIM_TS_INVALID;
                SIM_DisAllIntr(); // prevent the following ATR bytes trigger RX interrupt
                SIM_WriteReg((SIM0_BASE_ADDR_MTK + SIM_STS_MTK), SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_STS_MTK));
                DRV_ICC_print_str("[SIM_DRV]Card Error, Enter find Card Process.\n\r");
                kal_sprintf(hw_cb->hisrDbgStr, "Check HW Waveform for HW issue. TS:%x T0:%x usim_dcb->ev_status:%x, int_status:%x", TS, T0, usim_dcb->ev_status, int_status);
                DRV_ICC_print_err_msg(hw_cb, hw_cb->hisrDbgStr);
#if !defined(ATEST_DRV_ENABLE)
                sim_dump_sim_pins(hw_cb);
                sim_dump_gpio(hw_cb);
                sim_dump_eint(hw_cb);
#endif
            }
            USIM_SET_EVENT_Multiple(usim_dcb);
        }
        break;
        case (volatile usim_main_state_enum) ATR_STATE:
        {
            // receive all ATR data without timeout to indicate
            kal_uint32 count;
            kal_uint8 TD;

            count = SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_COUNT_MTK);
            // dbg_print("ATR_STATE : %d ",count);
            while (count--)
            {
                if (usim_dcb->ATR_index >= 33)
                {
                    USIM_CLR_FIFO();
                    /* maybe the atr is correct??? */
                    usim_dcb->ev_status = USIM_RX_INVALID;
                    USIM_SET_EVENT_Multiple(usim_dcb);
                    return;
                }
                usim_dcb->ATR_data[usim_dcb->ATR_index++] = (kal_uint8)SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_DATA_MTK);
            }
            if (usim_dcb->abort == KAL_TRUE)
            {
                usim_dcb->abort = KAL_FALSE;
                SIM_SetRXTIDE(6, hw_cb);
                usim_dcb->resync = KAL_TRUE;
                break;
            }
            if (usim_dcb->resync == KAL_FALSE)
            {
                TD = usim_dcb->ATR_data[usim_dcb->rx_size];
                // dbg_print(", TD = %x ,%d ", TD,usim_dcb->rx_size);
                count = 0;
                USIM_CAL_TD_COUNT(TD, count);

                //if((TD & TDMask) == NULL)
                if (!(TD & TDMask))
                {
                    count += usim_dcb->hist_index;
                    if (count >= SIM_TOTAL_FIFO_LEN)
                    {
                        // usim_dcb->rx_index = count; // for temp usage (total ATR len)
                        usim_dcb->abort = KAL_TRUE;	// for temp usage (separate two times)
                        count -= 6;
                    }
                    usim_dcb->resync = KAL_TRUE; // for temp usage (last time)
                }
                else
                    count++;
                usim_dcb->rx_size += (count);	// for temp usage (index to TD byte)
                SIM_SetRXTIDE(count, hw_cb);
            }
            else
            {
                usim_set_timeout(0, hw_cb);
                // dbg_print("\r\n!! all ATR received \r\n");
                usim_dcb->hist_index = 0;
                usim_dcb->rx_size = 0;
                usim_dcb->resync = KAL_FALSE;
                usim_dcb->abort = KAL_FALSE;
                usim_dcb->ev_status = USIM_ATR_REC;
                USIM_SET_EVENT_Multiple(usim_dcb);
            }
        }
        break;
        case (volatile usim_main_state_enum) PTS_STATE:
            SIM_DisAllIntr();
            usim_dcb->ev_status = USIM_NO_ERROR;
            USIM_SET_EVENT_Multiple(usim_dcb);
            break;
        default:
#if defined(__MSG_DBG__)
            //dbg_print("[DRV] other state.....\r\n");
#endif
            //MTK04122: other states shall not invoke rx_handler
            SIM_ASSERT(0);
            break;
    }
}

/*************************************************************************
* FUNCTION
*  usim_send_block
*
* DESCRIPTION
*	1. sending a block to UICC, with header in usim_dcb->header_tx
*	2. if len > 0 then using DMA to transfer data from tx buffer to the fifo of sim
		interface.
	3. after a complete block is sent, T1END is generated
	4. after that, three bytes of received block header will come into rx fifo
*
* PARAMETERS
	adrs: tx buffer address

* RETURNS
	None

* GLOBALS AFFECTED
*	usim_dcb
*
*************************************************************************/
static void usim_send_block(kal_uint8 *adrs, sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;
    kal_uint32 len, pcb;
    kal_uint8 *header;
    kal_uint32 pNoncachedRx;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    //usim_dcb_struct *dcb = usim_dcb;

    header = usim_dcb->header_tx;
    usim_dcb->main_state = CMD_TX_STATE;
    USIM_CLR_FIFO();

    // some old USIM cards need more time to send next SIM command
    kal_sleep_task(KAL_MILLISECS_PER_TICK_REAL);

    // write header into fifo
    len = header[T1_LEN_INDEX];
    pcb = header[T1_PCB_INDEX];
#if defined(USIM_DEBUG)
    {
        dbg_print("usim_send_block [00][%x][%x]\r\n", pcb, len);
        kal_uint32 i;
        dbg_print("tx:");
        if (USIM_IS_SBLOCK(pcb) && len == 1)
        {
            dbg_print(" %x", header[T1_INF_INDEX]);
        }
        else
        {
            for (i = 0; i < len; i++)
            {
                dbg_print(" %x", adrs[i]);
            }
        }
        dbg_print("\r\n");
    }
#endif

    SIM_WriteReg((SIM0_BASE_ADDR_MTK + SIM_DATA_MTK), header[T1_NAD_INDEX]);
    SIM_WriteReg((SIM0_BASE_ADDR_MTK + SIM_DATA_MTK), pcb);
    SIM_WriteReg((SIM0_BASE_ADDR_MTK + SIM_DATA_MTK), len);
#if !defined(DRV_SIM_LTE_SERIES)
    SIM_WriteReg((SIM0_BASE_ADDR_MTK + SIM_IMP3_MTK), len);
#else
    SIM_WriteReg((SIM0_BASE_ADDR_MTK + SIM_COMDLEN_MTK), len);
#endif
    kal_set_eg_events(usim_dcb->event, 0, KAL_AND);

    SIM_EINT_Mask(hw_cb, KAL_TRUE, __LINE__);

    // transfer by DMA if the count > 12, otherwise by MCU
    SIM_SetTXTIDE(1, hw_cb);
    if (len > 12)
    {
        //dbg_print("[DRV] LEN > 12, do dma autoTx2Rx...\r\n");
        SIM_SetRXTIDE(1, hw_cb); //set rxtide = 0

#if defined(DRV_SIM_LTE_SERIES)

        //enable autoTX2RX
        SIM_SetBits32((SIM0_BASE_ADDR_MTK + SIM_CONF_MTK), SIM_CONF_T1TX2RXEN);
        GET_NCACHED_USIM_DMA_BUF_INT(pNoncachedRx, sim_get_hwCtrl_from_logicalNum(hw_cb->simInterface));
        Data_Sync_Barrier();
        SIM_WriteReg32(usim_dcb->dma_config.ADDR_HDMA_HPRGA0Rx, (kal_uint32)adrs);    //TX buf 0
        SIM_WriteReg32(usim_dcb->dma_config.ADDR_HDMA_HPRGA1Rx, pNoncachedRx);        //RX buf 1
        SIM_WriteReg32(usim_dcb->dma_config.ADDR_HDMA_HDCTRRx, (HDCTRR_RX_SEL0(0) | HDCTRR_RX_SEL1(1) |
                       HDCTRR_BST_SIZE(HDCTRR_BST_SIZE_16) |
                       HDCTRR_DEV_BUS_WIDTH(HDCTRR_BUS_WIDTH_8) |
                       HDCTRR_MEM_BUS_WIDTH(HDCTRR_BUS_WIDTH_32)));
        SIM_WriteReg32(usim_dcb->dma_config.ADDR_HDMA_HDC0Rx, HDCR_XFER_SIZE0(len) | HDCR_START1); //TX
        SIM_WriteReg32(usim_dcb->dma_config.ADDR_HDMA_HDC1Rx, HDCR_XFER_SIZE0(USIM_DMA_MAX_SIZE) | HDCR_START1); //RX
        Data_Sync_Barrier();

#else
        usim_dcb->dma_menu.addr = (kal_uint32)adrs;
        usim_dcb->dma_input.type = DMA_HWTX;
        usim_dcb->dma_input.count = (kal_uint16)len;
#endif

        USIM_TX_START_T1();
#if !defined(DRV_SIM_LTE_SERIES)
        DMA_Config(usim_dcb->dma_port, &usim_dcb->dma_input, KAL_TRUE);
#endif

    }
    else if (USIM_IS_SBLOCK(pcb) && len == 1)
    {
        SIM_WriteReg((SIM0_BASE_ADDR_MTK + SIM_DATA_MTK), header[T1_INF_INDEX]);

        /********************/
        //dma config is moved from t1endhandler to here...
        USIM_DMA_RX_TIDE();
#if defined(DRV_SIM_LTE_SERIES)
        GET_NCACHED_USIM_DMA_BUF_INT(pNoncachedRx, sim_get_hwCtrl_from_logicalNum(hw_cb->simInterface));
        Data_Sync_Barrier();
        SIM_WriteReg32(usim_dcb->dma_config.ADDR_HDMA_HPRGA0Rx, (kal_uint32)pNoncachedRx);
        SIM_WriteReg32(usim_dcb->dma_config.ADDR_HDMA_HDCTRRx, (HDCTRR_RX_SEL0(1) |
                       HDCTRR_BST_SIZE(HDCTRR_BST_SIZE_16) |
                       HDCTRR_DEV_BUS_WIDTH(HDCTRR_BUS_WIDTH_8) |
                       HDCTRR_MEM_BUS_WIDTH(HDCTRR_BUS_WIDTH_32)));
        //SIM_WriteReg32(usim_dcb->dma_config.ADDR_HDMA_HDC0Rx, (HDCR_XFER_SIZE0(4) | HDCR_START1));
        SIM_WriteReg32(usim_dcb->dma_config.ADDR_HDMA_HDC0Rx, HDCR_XFER_SIZE0(USIM_DMA_MAX_SIZE) | HDCR_START1);
        Data_Sync_Barrier();
#endif
        /********************/
        USIM_TX_START_T1();
    }
    else
    {
        kal_uint32 i;
#if defined(__DBG_MSG__)
        //dbg_print("[DRV] LEN < 12, only do dma Rx...\r\n");
#endif
        for (i = 0; i < len; i++)
            SIM_WriteReg((SIM0_BASE_ADDR_MTK + SIM_DATA_MTK), adrs[i]);

        /********************/
        //dma config is moved from t1endhandler to here...
        USIM_DMA_RX_TIDE();
#if defined(DRV_SIM_LTE_SERIES)
        GET_NCACHED_USIM_DMA_BUF_INT(pNoncachedRx, sim_get_hwCtrl_from_logicalNum(hw_cb->simInterface));
        Data_Sync_Barrier();
        SIM_WriteReg32(usim_dcb->dma_config.ADDR_HDMA_HPRGA0Rx, pNoncachedRx);
        SIM_WriteReg32(usim_dcb->dma_config.ADDR_HDMA_HDCTRRx, (HDCTRR_RX_SEL0(1) |
                       HDCTRR_BST_SIZE(HDCTRR_BST_SIZE_16) |
                       HDCTRR_DEV_BUS_WIDTH(HDCTRR_BUS_WIDTH_8) |
                       HDCTRR_MEM_BUS_WIDTH(HDCTRR_BUS_WIDTH_32)));
        SIM_WriteReg32(usim_dcb->dma_config.ADDR_HDMA_HDC0Rx, (HDCR_XFER_SIZE0(USIM_DMA_MAX_SIZE) | HDCR_START1));
        Data_Sync_Barrier();
#endif
        /*********************/
        USIM_TX_START_T1();
    }
    SIM_WriteReg((SIM0_BASE_ADDR_MTK + SIM_IRQEN_MTK), SIM_STS_T1END);

    SIM_EINT_Mask(hw_cb, KAL_FALSE, __LINE__);
}
/*
1. send S blocks of request or response.
2. if sending request, check if the response is correct.
3. if sending response,
4. EDC will be generated(tx) and removed(rx) by T1 controller

id: PCB of the S block
param: parameter of the S-block

*/
static usim_status_enum usim_send_s_block(usim_s_block_id_enum id, kal_uint8 param, sim_HW_cb *hw_cb)
{
    kal_uint8 *tx_buf, *rx_buf, len, t;
    kal_bool is_resp;
    kal_uint32 i;
    //usim_dcb_struct *dcb = usim_dcb;
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);


    //dbg_print("usim_send_s_block id:%x, param:%d \r\n", id, param);
    tx_buf = usim_dcb->header_tx;
    rx_buf = usim_dcb->header_rx;
    tx_buf[T1_NAD_INDEX] = USIM_NAD_DEFAULT;
    tx_buf[T1_PCB_INDEX] = id;
    //is_resp = ((id & PCB_S_RESP) != 0);
    is_resp = (((kal_uint32)id & PCB_S_RESP) != 0) ? KAL_TRUE : KAL_FALSE;
    usim_dcb->cmd_state = (is_resp) ? (S_BlOCK_RESP_TX) : (S_BlOCK_REQ_TX);
    if (id == IFS_REQ || id == WTX_REQ || id == IFS_RESP || id == WTX_RESP)
    {
        len = 4;
        tx_buf[T1_LEN_INDEX] = 1;
    }
    else
    {
        len = 3;
        tx_buf[T1_LEN_INDEX] = 0;
    }
    tx_buf[T1_INF_INDEX] = param;
    usim_dcb->retry = 0;

    while (usim_dcb->retry++ < 3)
    {
        usim_send_block(&param, hw_cb);
        USIM_WAIT_EVENT_MTK(usim_dcb);
        if (usim_dcb->ev_status == USIM_NO_ERROR)
        {
            if (!is_resp)
            {
                for (t = 0, i = 0; i < len; i++)
                    t += rx_buf[i] ^ tx_buf[i];
                if (t != PCB_S_RESP)
                    continue;
            }
            break;
        }
//		sim_dump_fifo(hw_cb);
    }
    if (usim_dcb->retry == 4)
    {
//	sim_dump_fifo(hw_cb);
        usim_deactivation(hw_cb);
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
#endif

    return USIM_NO_ERROR;

}

/*************************************************************************
* FUNCTION
*  usim_rx_block_handler
*
* DESCRIPTION
*	1. process the received block including I, R, and S blocks
*	2. prepare the next sending block header in the usim_dcb->header_tx
*
* PARAMETERS
	adrs: address of the data buffer

* RETURNS
	KAL_TRUE: a valid block is received
	KAL_FALSE: an invalid block is received

* GLOBALS AFFECTED
*	usim_dcb
*
*************************************************************************/
static kal_bool usim_rx_block_handler(kal_uint32 *adrs, sim_HW_cb *hw_cb)
{
    kal_uint8 pcb, len;
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);


    if (usim_dcb->header_rx[T1_NAD_INDEX] != 0)
    {
        //dbg_print("(invlid block) invalid NAD\r\n");
        return KAL_FALSE;
    }
    pcb = usim_dcb->header_rx[T1_PCB_INDEX];
    len = usim_dcb->header_rx[T1_LEN_INDEX];
    if (len > usim_dcb->ifsd) // 0 <= len <= IFSC (max 254)
        return KAL_FALSE;
#if defined(USIM_DEBUG)
    {
        kal_sprintf(hw_cb->dbgStr, "rx:%x %x %x", usim_dcb->header_rx[0], usim_dcb->header_rx[1], usim_dcb->header_rx[2]);
        DRV_ICC_print_str(hw_cb->dbgStr);
        if (USIM_IS_SBLOCK(usim_dcb->header_rx[1]))
        {
            kal_sprintf(hw_cb->dbgStr, " %x\r\n", usim_dcb->rx_buf[3]);
            DRV_ICC_print_str(hw_cb->dbgStr);
        }

    }
#endif
    // USIM_INV_N(usim_dcb->ns);
    if (USIM_IS_IBLOCK(pcb))
    {
        // I-block
        //dbg_print("received a I-block\r\n");
        if (pcb & PCB_I_RFU)
        {
            //dbg_print("(invlid block) error PCB \r\n");
            return KAL_FALSE;
        }
#if defined(USIM_DEBUG)
        {
            kal_uint32 i;
            for (i = 0; i < len; i++)
            {
                kal_sprintf(hw_cb->dbgStr, " %x", usim_dcb->rx_buf[usim_dcb->rx_index + i]);
                DRV_ICC_print_str(hw_cb->dbgStr);
            }
            DRV_ICC_print_str("\r\n");
        }
#endif
        if ((pcb & PCB_I_SEQ) != usim_dcb->nr)
        {
            //dbg_print("(invlid block) receive sequence err\r\n");
            return KAL_FALSE;
        }
        if (usim_dcb->header_rx[T1_LEN_INDEX] > usim_dcb->ifsd)
        {
            //dbg_print("(invalid block) receive lenght > IFSD \r\n");
            return KAL_FALSE;
        }
        if (usim_dcb->header_tx[T1_PCB_INDEX] == RESYNC_REQ)
        {
            // must receive a S RESP not any other block
            //dbg_print("(invalid block) must receive a S RESP not any other block \r\n");
            return KAL_FALSE;
        }

        usim_dcb->tx_chain = KAL_FALSE;
        USIM_INV_N(usim_dcb->nr);
        usim_dcb->retry = 0;
        usim_dcb->tx_size -= usim_dcb->header_tx[T1_LEN_INDEX];
        usim_dcb->tx_index += usim_dcb->header_tx[T1_LEN_INDEX];
        usim_dcb->rx_size  -= usim_dcb->header_rx[T1_LEN_INDEX];
        usim_dcb->rx_index += usim_dcb->header_rx[T1_LEN_INDEX];
        if (pcb & PCB_I_M)
        {
            // a chaining I-block received send a R-block
            usim_dcb->rx_chain = KAL_TRUE;
            //dbg_print("chaining...\r\n");
            USIM_MAKE_R_BLOCK_Multiple(PCB_R_STATUS_OK);
        }
        else
        {
            // command complete
            //dbg_print("command complete!!\r\n");
            usim_dcb->rx_chain = KAL_FALSE;
            usim_dcb->retry = 0;
            usim_dcb->main_state = MAIN_CMD_READY_STATE;
        }
    }
    else if (USIM_IS_RBLOCK(pcb))
    {
        // R-block
        //dbg_print("received a R-block\r\n");
        if (usim_dcb->header_tx[T1_PCB_INDEX] == RESYNC_REQ)
        {
            // must receive a S RESP not any other block
            //dbg_print("(invalid block) must receive a S RESP not any other block \r\n");
            return KAL_FALSE;
        }
        if (len)
        {
            //dbg_print("(invalid block) R block of len = %d \r\n", len);
            return KAL_FALSE;
        }
        if (usim_dcb->tx_chain && (pcb & PCB_R_STATUS) == 0)
        {
            // receive a err free R block
            if (((pcb & PCB_R_SEQ) << 2) == usim_dcb->ns)
            {
                // send next chaining block
                if (usim_dcb->abort == KAL_TRUE)
                {
                    /* clear abort flag */
                    usim_dcb->abort = KAL_FALSE;

                    /* should re-send cmd */
                    usim_dcb->tx_size += usim_dcb->tx_index;
                    usim_dcb->tx_index = 0;
                    *adrs = (kal_uint32)(usim_dcb->tx_buf + usim_dcb->tx_index);

                    pcb = PCB_I_M;
                    len = usim_dcb->ifsc;
                    usim_dcb->cmd_state = I_BLOCK_M1_TX;

                    if (usim_dcb->ns)
                        pcb |= PCB_I_SEQ;
                    usim_dcb->header_tx[T1_PCB_INDEX] = pcb;
                    usim_dcb->header_tx[T1_LEN_INDEX] = len;
                    usim_dcb->header_tx_bak[T1_PCB_INDEX] = pcb;
                    usim_dcb->header_tx_bak[T1_LEN_INDEX] = len;
                    USIM_INV_N(usim_dcb->ns);

                    //usim_dcb->main_state = MAIN_CMD_READY_STATE;
                }
                else if (usim_dcb->tx_size != 0)
                {
                    // normal chaining case
                    usim_dcb->retry = 0;
                    usim_dcb->tx_size -= usim_dcb->ifsc;
                    usim_dcb->tx_index += usim_dcb->ifsc;
                    *adrs = (kal_uint32)(usim_dcb->tx_buf + usim_dcb->tx_index);
                    if (usim_dcb->tx_size <= usim_dcb->ifsc)
                    {
                        pcb = 0;
                        len = usim_dcb->tx_size;
                        usim_dcb->cmd_state = I_BLOCK_M0_TX;
                    }
                    else	// txSize > IFSC
                    {
                        pcb = PCB_I_M;
                        len = usim_dcb->ifsc;
                        usim_dcb->cmd_state = I_BLOCK_M1_TX;
                    }
                    if (usim_dcb->ns)
                        pcb |= PCB_I_SEQ;
                    usim_dcb->header_tx[T1_PCB_INDEX] = pcb;
                    usim_dcb->header_tx[T1_LEN_INDEX] = len;
                    usim_dcb->header_tx_bak[T1_PCB_INDEX] = pcb;
                    usim_dcb->header_tx_bak[T1_LEN_INDEX] = len;
                    USIM_INV_N(usim_dcb->ns);
                }
            }
            else
            {
                // sending the previous I block again
                usim_dcb->retry++;
                usim_dcb->cmd_state = usim_dcb->cmd_state_bak;
                usim_dcb->header_tx[T1_PCB_INDEX] = usim_dcb->header_tx_bak[T1_PCB_INDEX];
                usim_dcb->header_tx[T1_LEN_INDEX] = usim_dcb->header_tx_bak[T1_LEN_INDEX];
            }
        }
        else
        {
            // error handling R-Block received
            if ((pcb & PCB_R_SEQ) << 2 != (usim_dcb->ns))
            {
                // previous sending sequence
                usim_dcb->retry++;
                usim_dcb->cmd_state = usim_dcb->cmd_state_bak;
                usim_dcb->header_tx[T1_PCB_INDEX] = usim_dcb->header_tx_bak[T1_PCB_INDEX];
                usim_dcb->header_tx[T1_LEN_INDEX] = usim_dcb->header_tx_bak[T1_LEN_INDEX];
            }
            else
            {
                // next sending sequence
                // send the previous R-block again
                usim_dcb->retry = 0;
                return KAL_FALSE;
            }
        }
    }
    else if (USIM_IS_SBLOCK(pcb))
    {
        // S-block(REQ)
        //dbg_print("receive S-block(%x)\r\n",pcb);
        if (USIM_IS_RESP(pcb))
        {
            // response (only resync response block will be received.)
            //dbg_print("receive RESP block!\r\n");
            if (pcb == RESYNC_RESP && usim_dcb->header_tx[T1_PCB_INDEX] == RESYNC_REQ)
            {
                if (len != 0)
                {
                    //dbg_print("Invalid len of RESYNC");
                    return KAL_FALSE;
                }
                // resync complete (the card is reset to the initial state)
                usim_dcb->main_state = MAIN_CMD_READY_STATE;
                usim_dcb->ns = 0;
                usim_dcb->nr = 0;
                usim_dcb->resync = KAL_TRUE;
                usim_dcb->retry = 0;
                // usim_dcb->ifsc = USIM_IFSC_DEFAULT;
            }
            else
            {
                //dbg_print("receive a error S RESP,[%x]\r\n", pcb);
                return KAL_FALSE;
            }
        }
        else
        {
            // receiving a S-block of request
            if (usim_dcb->header_tx[T1_PCB_INDEX] == RESYNC_REQ)
            {
                // must receive a S RESP not any other block
                //dbg_print("(invalid block) must receive a S RESP not any other block \r\n");
                return KAL_FALSE;
            }

            usim_dcb->cmd_state = S_BlOCK_RESP_TX;
            usim_dcb->header_tx[T1_PCB_INDEX] = pcb | PCB_S_RESP;
            usim_dcb->header_tx[T1_LEN_INDEX] = len;
            if (len)
            {
                usim_dcb->header_tx[T1_INF_INDEX] = usim_dcb->header_rx[T1_INF_INDEX];
            }
            switch (pcb)
            {
                case RESYNC_REQ:
                    //dbg_print("(ERR) receive RESYNC_REQ\r\n");
                    return KAL_FALSE;
                //break; //remove for for RVCT warning
                case IFS_REQ:
                    //dbg_print("receive IFS_REQ\r\n");
                    if (len != 1)
                        return KAL_FALSE;
                    usim_dcb->ifsc = usim_dcb->header_rx[T1_INF_INDEX];
                    break;
                case ABORT_REQ:
                    //dbg_print("receive ABORT_REQ\r\n");
                    if (len != 0)
                        return KAL_FALSE;
                    usim_dcb->retry = 0;
                    usim_dcb->abort = KAL_TRUE;
                    /*in the FTA test 7.3.11, after the abbort request, card will resend data, so we should reset rx_index to zero*/
                    usim_dcb->rx_index = 0;
                    DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC38, usim_dcb->tx_size, usim_dcb->tx_index, usim_dcb->rx_size, usim_dcb->rx_index, pcb);

                    break;
                case WTX_REQ:
                    if (len != 1)
                        return KAL_FALSE;
                    usim_dcb->retry = 0;
                    // re-start the BWT( according to the spec, the timer should be restart after
                    // the WTX response has been sent.
                    usim_dcb->wtx = KAL_TRUE;
                    usim_dcb->wtx_m = usim_dcb->header_rx[T1_INF_INDEX];;
                    break;
                default:
                    return KAL_FALSE;
            }
        }
    }
    else
    {
        //dbg_print("Invalid PCB \r\n");
        return KAL_FALSE;
    }

    return KAL_TRUE;
}
/*************************************************************************
* FUNCTION
*  usim_err_handler
*
* DESCRIPTION
*	1. send R block to UICC to indicate the previous block is error at previous two retry.
*	2. send S(RESYN) to UICC to recover the errors.
*	3. deactivate the UICC
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*	usim_dcb->retry
*
*************************************************************************/
static void usim_err_handler(sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    // send R block
    usim_dcb->retry++;
    //dbg_print("usim_err_handler %d \r\n",usim_dcb->retry);
    USIM_CLR_FIFO();
    if (usim_dcb->retry < 3)
    {
        //dbg_print("send R block!\r\n");
        {
            if (usim_dcb->ev_status == USIM_RX_INVALID)
            {
                USIM_MAKE_R_BLOCK_Multiple(PCB_R_STATUS_EDC_ERR);
            }
            else
            {
                USIM_MAKE_R_BLOCK_Multiple(PCB_R_STATUS_OTHER_ERR);
            }
        }
    }
    else if (usim_dcb->retry <  6)
    {
        // next level error handling => resync
        //dbg_print("send RESYNC REQ !\r\n");
        USIM_MAKE_S_RESYNC_Multiple();
    }
    else
    {
        // deactivate
        usim_deactivation(hw_cb);
    }
}

/*************************************************************************
* FUNCTION
*  usim_send_i_block
*
* DESCRIPTION
*	1. send I block to UICC with length of ifsc including case 1~4.
*
* PARAMETERS
*	1. txData: tx buffer containing command header optional with tx data.
*	2. txSize: length of the tx data
*	3. rxData: rx buffer (must inluding two extra one for sw1 and sw2)
*	4. rxSize: length of the rx data except sw1|sw2
*
* RETURNS
*	status bytes(SW1|SW2), 0 means a physical error.
*
* GLOBALS AFFECTED
*	usim_dcb
*
*************************************************************************/
static sim_status usim_send_i_block(kal_uint8  *txData, kal_uint32  *txSize, kal_uint8  *rxData, kal_uint32  *rxSize, sim_HW_cb *hw_cb)
{
    kal_uint8 pcb, len;
    kal_uint32 count, adrs;
    usim_status_enum status;
    kal_uint16 sw;
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);
    usim_set_timeout(0, hw_cb);

    //dbg_print("\r\n\r\n @@@@ usim_send_i_block @@@@\r\n");
    do
    {
        status = USIM_NO_ERROR;
        usim_dcb->tx_index = 0;
        usim_dcb->rx_index = 0;
        usim_dcb->tx_buf = txData;
        if (rxData == NULL)
            usim_dcb->rx_buf = usim_dcb->sw;
        else
            usim_dcb->rx_buf = rxData;
        usim_dcb->tx_size = *txSize;
        usim_dcb->rx_size = *rxSize + 2; // include SW1, SW2
        usim_dcb->retry = 0;
        usim_dcb->abort = KAL_FALSE;
        usim_dcb->resync = KAL_FALSE;
        usim_dcb->rx_chain = KAL_FALSE;

        count = *txSize;
        adrs = (kal_uint32)usim_dcb->tx_buf;
        if (count <= usim_dcb->ifsc)
        {
            pcb = 0;
            len = count;
            usim_dcb->tx_chain = KAL_FALSE;
            usim_dcb->cmd_state = I_BLOCK_M0_TX;
        }
        else	// txSize > IFSC
        {
            pcb = PCB_I_M;
            len = usim_dcb->ifsc;
            usim_dcb->tx_chain = KAL_TRUE;
            usim_dcb->cmd_state = I_BLOCK_M1_TX;
        }
        if (usim_dcb->ns)
            pcb |= PCB_I_SEQ;

        usim_dcb->cmd_state_bak = usim_dcb->cmd_state;
        usim_dcb->header_tx[T1_NAD_INDEX] = USIM_NAD_DEFAULT;
        usim_dcb->header_tx[T1_PCB_INDEX] = pcb;
        usim_dcb->header_tx_bak[T1_PCB_INDEX] = pcb;
        usim_dcb->header_tx[T1_LEN_INDEX] = len;
        usim_dcb->header_tx_bak[T1_LEN_INDEX] = len;
        USIM_INV_N(usim_dcb->ns);

        while (1)
        {
            usim_send_block((kal_uint8*)adrs, hw_cb);
            USIM_WAIT_EVENT_MTK(usim_dcb);
            if (usim_dcb->ev_status == USIM_NO_ERROR)
            {
                // a complete block is received
                if (usim_rx_block_handler(&adrs, hw_cb) == KAL_FALSE)
                    usim_err_handler(hw_cb);
            }
            else
            {
                usim_err_handler(hw_cb);
            }
            if (usim_dcb->main_state == MAIN_CMD_READY_STATE)
            {
                // command complete
                *rxSize = usim_dcb->rx_index;
                break;
            }
            if (DEACTIVATION_STATE == usim_dcb->main_state)
            {
                status =  USIM_DEACTIVATED;
                break;
            }

        }

        /*    [ALPS00411009][MT6589][in-house FTA][UICC] 7.3.11(UICC)
              receive s-abort request and reply s-abort resp is defined by spec. it is not error
        		if(usim_dcb->abort == KAL_TRUE)
        		{
        			status = USIM_DATA_ABORT;
        			DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC42, sw, txSize, *rxSize,status,usim_dcb->resync);
        			break;
        		}
        */
        if (usim_dcb->main_state == DEACTIVATION_STATE)
        {
            status =  USIM_DEACTIVATED;
            break;
        }
    }
    while (usim_dcb->resync == KAL_TRUE);

    usim_dcb->status = status;
    if (status != USIM_NO_ERROR)
        return SIM_SW_STATUS_FAIL;
    // the *rxsize include the sw1 and sw1, the upper layer should prepare it.
    *rxSize -= 2;
    if (rxData == NULL)
    {
        sw = (kal_uint16)((usim_dcb->sw[0] << 8) | (usim_dcb->sw[1]));
        DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC34, sw, *txSize, *rxSize, usim_dcb->sw[0], usim_dcb->sw[1]);
        *rxSize = 0;

        return sw;
    }
    sw = (rxData[*rxSize] << 8) | (rxData[*rxSize + 1]);
    DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC30, sw, *txSize, *rxSize, 0, 0);

    return sw;
}

/*************************************************************************
* FUNCTION
*  usim_InterfaceCheck
*
* DESCRIPTION
*	do platform sim interface support check, mainly on checking whether this platform support second sim interface
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/
void static usim_InterfaceCheck(sim_HW_cb *hw_cb)
{
    if (hw_cb->simInterface > 2)
        ASSERT(0);
}

/*************************************************************************
* FUNCTION
*  usim_update_sim_to_ready
*
* DESCRIPTION
*	1. update the ATR informations from usim_dcb into SimCard
*		to make sim(t=0) driver work..
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*	SimCard
*	TOUTValue
*
*************************************************************************/
void static usim_update_sim_to_ready(sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;
    Sim_Card *SimCard;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);
    SimCard = GET_SIM_CB(hw_cb->simInterface);

    SimCard->app_proto = usim_dcb->app_proto;
    SimCard->State = SIM_PROCESSCMD;
    SimCard->Data_format = usim_dcb->dir;
    if (usim_dcb->power == CLASS_B_30V)
        SimCard->Power = SIM_30V;
    else if (usim_dcb->power == CLASS_C_18V)
        SimCard->Power = SIM_18V;
    SimCard->SIM_ENV = usim_dcb->sim_env;
    SimCard->Speed = usim_dcb->speed;
    SimCard->clkStop = usim_dcb->clock_stop_en;
    if (usim_dcb->clock_stop_type == CLOCK_STOP_HIGH)
        SimCard->clkStopLevel = KAL_TRUE;
    else if (usim_dcb->clock_stop_type == CLOCK_STOP_LOW)
        SimCard->clkStopLevel = KAL_FALSE;
    SimCard->sim_card_speed = (sim_card_speed_type)usim_dcb->card_speed;
    // dbg_print("[DRV] usim_dcb->WWT = %d\r\n",usim_dcb->WWT);
    SimCard->TOUTValue = usim_dcb->WWT >> 2;	// SIM_TOUT_REG_V3
    //SimCard->TOUTValue = usim_dcb->WWT >> 4;	// SIM_TOUT_REG_V2
    SimCard->TOUT_Factor = usim_dcb->Di;
#if defined(DRV_SIM_LTE_SERIES)
    SimCard->Fi = usim_dcb->Fi;
#endif
    SimCard->power_class = usim_dcb->power_class;
#if defined(SIM_DRV_IC_USB)
    SimCard->isIcUsb = usim_dcb->isIcUsb;
    SimCard->isIcUsbRecPPS = usim_dcb->isIcUsbRecPPS;
    SimCard->uart_sim_ccci_handle = usim_dcb->uart_sim_ccci_handle;
    SimCard->isPrefer3V = usim_dcb->isPrefer3V;
    SimCard->forceISO = usim_dcb->forceISO;
#endif
    SimCard->TB15 = usim_dcb->TB15;
    SimCard->previous_state = usim_dcb->previous_state;
    SimCard->atr_count = usim_dcb->atr_count;
#if defined(__SIM_HOT_SWAP_POLL_TIMER__) && defined(__SIM_HOT_SWAP_SUPPORT__)
    SimCard->poll_sim_2s = usim_dcb->poll_sim_2s;
#endif
#if defined(__SIM_ACTIVATION_V2__)
    SimCard->activation_v2 = usim_dcb->activation_v2;
#endif
}
/*************************************************************************
* FUNCTION
*  L1usim_Init
*
* DESCRIPTION
*	1. It is the initialization function of usim driver
*	2. It shall be called only once.
*	3. It gets the customization data of borad-supported voltage.
*	4. It initialize the structure of usim control block .
*	5. It get a GPT handler, a dma port,and register lisr, hisr, a event groug
*
* PARAMETERS
	None

* RETURNS
	None

* GLOBALS AFFECTED
*	usim_dcb
*
*************************************************************************/
static void L1usim_Init(sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;
    kal_uint32 hwCtrl;
#if defined(SIM_DRV_IC_USB)
    UART_CTRL_OPEN_T data;
    kal_uint8 status;
#endif
    kal_uint8 DMA_channel = 0;


    usim_dcb = GET_USIM_CB(hw_cb->simInterface);
    sim_addMsg(SIM_INIT_USIM, hw_cb->simInterface, 0, 0);
    hwCtrl = sim_get_hwCtrl_from_logicalNum(hw_cb->simInterface);

    hw_cb->forceOn26M = KAL_TRUE;

    if (usim_dcb->warm_rst == KAL_FALSE)
    {
        usim_dcb->sim_env = SIM_GetCurrentEnv(hw_cb->simInterface);
        usim_dcb->dir = USIM_DIRECT;
        usim_dcb->speed = SPEED_372;
        usim_dcb->clock_stop_en = KAL_FALSE;
        usim_dcb->clock_stop_type = CLOCK_STOP_UNKONW;
        usim_dcb->phy_proto = T1_PROTOCOL;
        usim_dcb->warm_rst = KAL_FALSE;
        usim_dcb->rx_size = 0;
        usim_dcb->rx_buf = NULL;
        usim_dcb->tx_size = 0;
        usim_dcb->tx_buf = NULL;
        usim_dcb->Fi = FI_DEFAULT;
        usim_dcb->Di = DI_DEFAULT;
        usim_dcb->header_tx[0] = NAD;
        usim_dcb->ts_hsk_en = KAL_TRUE;
#if defined(__SIM_ACTIVATION_V2__)
        usim_dcb->activation_v2 = KAL_FALSE;
#endif
        usim_dcb->WWT = INIT_WWT_T0;
        usim_dcb->etu_of_1860 = (1860 / 32);
        usim_dcb->etu_of_700 = (700 / 32);
        usim_dcb->present = KAL_TRUE;
        usim_dcb->power_class = UNKNOWN_POWER_CLASS;
        usim_dcb->T0_support = KAL_FALSE;
        usim_dcb->T1_support = KAL_FALSE;
        usim_dcb->reset_mode = USIM_RESET_NEGOTIABLE;
        usim_dcb->TB15 = 0;
        usim_dcb->hasPowerClass = KAL_FALSE;
#if defined(SIM_DRV_IC_USB)
        usim_dcb->icusb_state = SIM_ICUSB_INIT;
        SIM_icusb_init(hw_cb);
#endif
        usim_dcb->previous_state = 0;
        usim_dcb->atr_count = 0;
        /*there will be no enable enhanced_speed function, we should set this myself*/
        usim_dcb->high_speed_en = KAL_TRUE;

#if defined(DRV_SIM_LTE_SERIES)
        // Set GDMA to MD Side. USIM0, USIM1 two bits
#if defined(MT6290)
        DRV_WriteReg32(0xBF40800C, 0x0000FFFC);
#endif
        usim_dcb->dma_config.BURST_SIZE = HDCTRR_BST_SIZE_16;
        usim_dcb->dma_config.DEV_BUS_WIDTH = HDCTRR_BUS_WIDTH_8;
        usim_dcb->dma_config.MEM_BUS_WIDTH = HDCTRR_BUS_WIDTH_32;
        DMA_channel = (MTK_SIMIF0 == hwCtrl) ? 0 : 1;
        usim_dcb->dma_config.channel = DMA_channel;
        usim_dcb->dma_config.ADDR_HDMA_HPRGA0Rx = (DMA_channel == 0) ? REG_HDMA_HPRGA0R0 : REG_HDMA_HPRGA0R1;
        usim_dcb->dma_config.ADDR_HDMA_HPRGA1Rx = (DMA_channel == 0) ? REG_HDMA_HPRGA1R0 : REG_HDMA_HPRGA1R1;
        usim_dcb->dma_config.ADDR_HDMA_HDCTRRx = (DMA_channel == 0) ? REG_HDMA_HDCTRR0 : REG_HDMA_HDCTRR1;
        usim_dcb->dma_config.ADDR_HDMA_HDC0Rx = (DMA_channel == 0) ? REG_HDMA_HDC0R0 : REG_HDMA_HDC0R1;
        usim_dcb->dma_config.ADDR_HDMA_HDC1Rx = (DMA_channel == 0) ? REG_HDMA_HDC1R0 : REG_HDMA_HDC1R1;
#else
        // note: MT6218B half channel can't work, use full channel insteadly.
#if !defined(MT6218B) && !defined(MT6218)
        if (usim_dcb->dma_port == 0)
            usim_dcb->dma_port = DMA_GetChannel((DMA_Master)hw_cb->mtk_dmaMaster);
        usim_dcb->dma_menu.TMOD.burst_mode = KAL_FALSE;
        usim_dcb->dma_menu.master = (DMA_Master)hw_cb->mtk_dmaMaster;
        usim_dcb->dma_menu.addr = NULL;
        usim_dcb->dma_input.type = DMA_HWTX;
        usim_dcb->dma_input.size = DMA_BYTE;
        usim_dcb->dma_input.callback = NULL;
        usim_dcb->dma_input.menu = &usim_dcb->dma_menu;
#endif
#endif
        usim_dcb->CWT = USIM_CWT_DEFAULT;
        usim_dcb->BWT = USIM_BWT_DEFAULT;
        #ifdef SIM_DRV_EXTENDED_APDU
        usim_dcb->Support_Extended_Length = KAL_FALSE;
        #endif
        if (usim_dcb->event == NULL)
        {
            if (MTK_SIMIF0 == hwCtrl)
            {
                usim_dcb->event = kal_create_event_group("USIM_EV");
            }
            else if (MTK_SIMIF1 == hwCtrl)
            {
                usim_dcb->event = kal_create_event_group("USIM_EV2");
            }
            else
                ASSERT(0);
        }

        if (SIM_base == hw_cb->mtk_baseAddr)
        {
            if ((kal_uint32)hw_cb != hwCbArray[hw_cb->simInterface])
                ASSERT(0);
            if (IRQ_USIM0_CODE != hw_cb->mtk_lisrCode)
                ASSERT(0);
#if !defined(SIM_DRV_HISR_INIT_CENTRALIZATION)
            if (usim_hisrid == NULL)
            {
                usim_hisrid = kal_init_hisr(USIM_HISR);
            }
#endif
            if ((void *)usim_dcb->gpt_handle == NULL)
                DRV_ICC_GPTI_GetHandle(&usim_dcb->gpt_handle);
#if defined(__SIM_ACTIVATION_V2__)
            if ((void *)usim_dcb->gpt_handle_for_SIM_activation == NULL)
                DRV_ICC_GPTI_GetHandle(&usim_dcb->gpt_handle_for_SIM_activation);
            if ((void *)usim_dcb->gpio_handle_for_SIO == NULL)
            {
                usim_dcb->gpio_handle_for_SIO = DclGPIO_Open(DCL_GPIO, GPIO_SIM1_SIMIO);
            }
#endif
            IRQSensitivity(hw_cb->mtk_lisrCode, LEVEL_SENSITIVE);
#if defined(SIM_DRV_IC_USB)
            // only SIM1 support ICUSB
            if (usim_dcb->uart_sim_ccci_handle == (kal_uint32)NULL)
            {
                usim_dcb->forceISO = KAL_FALSE;
                data.u4OwenrId = MOD_SIM;
                usim_dcb->uart_sim_ccci_handle = DclSerialPort_Open(uart_port_sim_ccci, 0);
                status = DclSerialPort_Control(usim_dcb->uart_sim_ccci_handle, SIO_CMD_OPEN, (DCL_CTRL_DATA_T*)&data);
                if (status != STATUS_OK)
                    ASSERT(0);
                kal_bool indication = KAL_FALSE;
                DclSerialPort_Control(usim_dcb->uart_sim_ccci_handle, TTY_CMD_SET_INDICATION, (DCL_CTRL_DATA_T*) &indication);
            }
#endif
#if defined(__SIM_HOT_SWAP_POLL_TIMER__) && defined(__SIM_HOT_SWAP_SUPPORT__)
            usim_dcb->poll_sim_2s = KAL_FALSE;
#endif
        }
#if (2 == SIM_DRV_MTK_INTERFACE_NUM)
        else if (SIM2_base == hw_cb->mtk_baseAddr)
        {
            if ((kal_uint32)hw_cb != hwCbArray[hw_cb->simInterface])
                ASSERT(0);
            if (IRQ_USIM1_CODE != hw_cb->mtk_lisrCode)
                ASSERT(0);
#if !defined(SIM_DRV_HISR_INIT_CENTRALIZATION)
            if (usim2_hisrid == NULL)
            {
                usim2_hisrid = kal_init_hisr(USIM2_HISR);
            }
#endif
            if ((void *)usim_dcb->gpt_handle == NULL)
                DRV_ICC_GPTI_GetHandle(&usim_dcb->gpt_handle);
#if defined(__SIM_ACTIVATION_V2__)
            if ((void *)usim_dcb->gpt_handle_for_SIM_activation == NULL)
                DRV_ICC_GPTI_GetHandle(&usim_dcb->gpt_handle_for_SIM_activation);
            if ((void *)usim_dcb->gpio_handle_for_SIO == NULL)
            {
                usim_dcb->gpio_handle_for_SIO = DclGPIO_Open(DCL_GPIO, GPIO_SIM2_SIMIO);
            }
#endif
            IRQSensitivity(hw_cb->mtk_lisrCode, LEVEL_SENSITIVE);
        }
#endif
        else
            ASSERT(0);
    }

    // reset these value no matter cold or warm reset
    usim_dcb->main_state = ACTIVATION_STATE;
    usim_dcb->ifsc = USIM_IFSC_DEFAULT;
    usim_dcb->ifsd = USIM_IFSD_DEFAULT;
    usim_dcb->ns = 0;
    usim_dcb->nr = 0;

    if (SIM_base == hw_cb->mtk_baseAddr)
    {
#if defined(__UNIFIED_ISR_LEVEL__)
        DRV_Register_HISR(DRV_USIM_HSIR_ID, usim_hisr);
#endif
        IRQ_Register_LISR(hw_cb->mtk_lisrCode, usim_lisr_Multiple, "USIM_Lisr");
        if (usim_dcb->warm_rst == KAL_FALSE)
            IRQUnmask(hw_cb->mtk_lisrCode);
    }
#if (2 == SIM_DRV_MTK_INTERFACE_NUM)
    else if (SIM2_base == hw_cb->mtk_baseAddr)
    {
#if defined(__UNIFIED_ISR_LEVEL__)
        DRV_Register_HISR(DRV_USIM2_HSIR_ID, usim_hisr2);
#endif
        IRQ_Register_LISR(hw_cb->mtk_lisrCode, usim_lisr2_Multiple, "USIM2_Lisr");
        if (usim_dcb->warm_rst == KAL_FALSE)
            IRQUnmask(hw_cb->mtk_lisrCode);
    }
#endif
    else
        ASSERT(0);
}

#if defined(__ABNORMAL_CARD__)
void usim_set_sim_io_special_mode(kal_int32 simIF, kal_bool enable)
{
    Data_Sync_Barrier();
    /*
    	For some abnormal cards, SIM IO's low voltage is relative high, for example @ 1.2V
    	the special mode is used to make sim controller can sample data from SIM IO correctly
    */
    if (enable)
    {
        ENABLE_ABNORMAL_SIM(simIF);
    }
    else
    {
        DISABLE_ABNORMAL_SIM(simIF);
    }
    Data_Sync_Barrier();

    return;
}
#endif

/*************************************************************************
* FUNCTION
*  L1sim_Reset
*
* DESCRIPTION
* 1. Reset the sim card and parse the ATR and perform the PTS(optional) and
		enter the command ready mode
* 2. First time it is a cold reset, second it's a warm reset
* 3. If the ExpectVolt equal to the current volt, perform a warm reset.
		Otherwise perform a cold reset.
* 4. Finally, S-block of IFS request is sent the UICC to configure the IFSD
*
* PARAMETERS
	1. ExpectVolt: application layer give a expected power class

* RETURNS
*  USIM_VOLT_NOT_SUPPORT: Valid TS is received
*  KAL_FALSE: Valid TS is not received, card is not present or not supported
*
* GLOBALS AFFECTED
*	usim_dcb
*
*************************************************************************/
static usim_status_enum L1usim_Reset(usim_power_enum ExpectVolt, usim_power_enum *ResultVolt, sim_HW_cb *hw_cb)
{
    kal_uint32 retry;
    kal_uint32 ori_ExpectVolt = (kal_uint32) ExpectVolt;
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);
    usim_dcb->isPrefer3V = KAL_FALSE;
#if defined(SIM_DRV_RETRY_3V_WHEN_CMD_FAIL)
    if (usim_dcb->retry_3v_prefer)
    {
        ExpectVolt = CLASS_B_30V;
    }
#endif
PREFER_3V:
    if (usim_dcb->isPrefer3V == KAL_TRUE)
    {
        sim_addMsg(0xE002, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
        ExpectVolt = CLASS_B_30V;
    }
#if defined(SIM_DRV_IC_USB)
PREFER_ORI:
#endif  // #if defined(SIM_DRV_IC_USB)
restart_new_clock:
    //dbg_print("L1usim_Reset\r\n");
    L1usim_Init(hw_cb);
    if (usim_check_input_volt(ExpectVolt, hw_cb) == KAL_FALSE)
        return USIM_VOLT_NOT_SUPPORT;
    // 1. Activate the USIM interface
    SIM_DisAllIntr();
#if defined(DRV_SIM_LTE_SERIES)
    SIM_DMA_STOP(usim_dcb->dma_config.channel);
#else
    DMA_Stop(usim_dcb->dma_port);
#endif

    usim_set_timeout(INIT_WWT_T0, hw_cb);

    // dbg_print("BRR = %x \r\n", SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_BRR_MTK));
    // dbg_print("TOUT = %d \r\n", SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_TOUT_MTK));
    /*
    if(TS_HSK_ENABLE)
    {
    	SIM_SetRXRetry(7);
    	SIM_SetTXRetry(7);
    	USIM_ENABLE_TXRX_HANSHAKE();
    }
    */
    // if corrupted ATRs are received, retry 3 times
#if defined(__ABNORMAL_CARD__)
#if defined(SIM_DRV_RETRY_SPECIAL_MODE_WHEN_CMD_FAIL)
    if(usim_dcb->retry_special_mode_prefer == KAL_TRUE)
    {
        kal_sprintf(hw_cb->dbgStr, "[SIM_DRV:%d] Prefer reset with Abnormal mode \r\n",hw_cb->simInterface);
        DRV_ICC_print_str(hw_cb->dbgStr);
        usim_set_sim_io_special_mode(hw_cb->simInterface, KAL_TRUE);       
    }
    else
    {
#endif
    usim_set_sim_io_special_mode(hw_cb->simInterface, KAL_FALSE);
#if defined(SIM_DRV_RETRY_SPECIAL_MODE_WHEN_CMD_FAIL)
    }
#endif
#endif // #if defined(__ABNORMAL_CARD__)
    for (retry = 0; retry < ATR_RETRY; retry++)
    {
#if defined(SIM_DRV_IC_USB)
        sim_addMsg(0xE003, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
#endif // #if defined(SIM_DRV_IC_USB)
        if (usim_select_power(ExpectVolt, hw_cb) == KAL_FALSE)
        {
            kal_sprintf(hw_cb->dbgStr, "[%s,%d] retry %d, ori_ExpectVolt:%d\n\r", __FUNCTION__, __LINE__, retry, ori_ExpectVolt);
            DRV_ICC_print_str(hw_cb->dbgStr);
            if (usim_dcb->warm_rst == KAL_TRUE)
            {
                return USIM_ATR_ERR;
            }
            if (usim_dcb->ts_hsk_en == KAL_TRUE)
            {
                usim_dcb->ts_hsk_en = KAL_FALSE;
            }
            else
            {
#if defined(__SIM_ACTIVATION_V2__)
                usim_dcb->activation_v2 = KAL_TRUE;
                kal_sprintf(hw_cb->dbgStr, "[SIM_DRV:%d]try SIM activation v2\n\r", hw_cb->simInterface);
                DRV_ICC_print_str(hw_cb->dbgStr);
                if (usim_select_power((usim_power_enum) ori_ExpectVolt, hw_cb) == KAL_FALSE)
                {
                    if (usim_dcb->warm_rst == KAL_TRUE)
                    {
                        return USIM_ATR_ERR;
                    }
                }
                else if (usim_process_ATR(hw_cb) == USIM_NO_ERROR)
                {
                    break;
                }

                usim_dcb->activation_v2 = KAL_FALSE;
#endif
#if defined(__ABNORMAL_CARD__)

                usim_set_sim_io_special_mode(hw_cb->simInterface, KAL_TRUE);
                kal_sprintf(hw_cb->dbgStr, "[SIM_DRV:%d]try special mode\n\r", hw_cb->simInterface);
                DRV_ICC_print_str(hw_cb->dbgStr);
                if (usim_select_power((usim_power_enum) ori_ExpectVolt, hw_cb) == KAL_FALSE)
                {
                    if (usim_dcb->warm_rst == KAL_TRUE)
                    {
                        return USIM_ATR_ERR;
                    }
                }
                else if (usim_process_ATR(hw_cb) == USIM_NO_ERROR)
                {
                    kal_brief_trace(TRACE_INFO, LOG_SIM_DRV_ABNORMAL_CARD, hw_cb->simInterface);
#if defined(SIM_DRV_RETRY_SPECIAL_MODE_WHEN_CMD_FAIL)
                    usim_dcb->retry_special_mode_prefer = KAL_TRUE;
#endif
                    break;
                }
#endif // #if defined(__ABNORMAL_CARD__)
                return USIM_NO_INSERT;
            }
            //continue;
        }
        else if (usim_process_ATR(hw_cb) == USIM_NO_ERROR)
        {
            break;
        }

        ExpectVolt = usim_dcb->power;
    }

    if (retry == ATR_RETRY)
        return USIM_ATR_ERR;

    hw_cb->issueCardStatus = usim_process_HISTORICAL(hw_cb);
    if (hw_cb->SlowClock == KAL_FALSE && hw_cb->issueCardStatus == SIM_SLOW_CLOCK)
    {
        goto restart_new_clock;
    }
    else if (usim_dcb->power == CLASS_C_18V && hw_cb->issueCardStatus == SIM_FORCE_3V)
    {
        goto PREFER_3V;
    }

    *ResultVolt = usim_dcb->power;
    // 3. Process PTS
    //if(usim_dcb->reset_mode == USIM_RESET_NEGOTIABLE)
    {
        if (usim_process_PTS(hw_cb) == KAL_FALSE)
        {
            for (retry = 0; retry < 3; retry++)
            {
#if !defined(ATEST_DRV_ENABLE)
		kal_sprintf(hw_cb->dbgStr, "[SIM_DRV:%d] retry PTS %d\n\r", hw_cb->simInterface, retry);
                DRV_ICC_print_str(hw_cb->dbgStr);
#endif
                if (usim_select_power(ori_ExpectVolt, hw_cb) == KAL_FALSE) continue;
                if (usim_process_ATR(hw_cb) != USIM_NO_ERROR) continue;
                if (usim_process_PTS(hw_cb) == KAL_TRUE) break;
            }
            if (retry == 3) return USIM_PTS_FAIL;
        }
        // 4. Configure the IFSD
        if (usim_dcb->phy_proto == T1_PROTOCOL)
        {
            if (usim_send_s_block(IFS_REQ, USIM_IFSD_MAX, hw_cb) == USIM_NO_ERROR)
            {
                // if we failed to send S block when negotiating IFSD and deactivate the card, we should report the reset status correctly
                if (DEACTIVATION_STATE == usim_dcb->main_state)
                    return USIM_S_BLOCK_FAIL;

                usim_dcb->ifsd = USIM_IFSD_MAX;
            }
        }
#if defined(SIM_DRV_4_33MHZ_SCLK)
        // after usim_process_PTS only
        if(usim_dcb->app_proto == USIM_PROTOCOL && hw_cb->issueCardStatus == SIM_NORMAL)
        {
            hw_cb->canUse_4_33_SCLK = KAL_TRUE;
        }
        else
        {
            hw_cb->canUse_4_33_SCLK = KAL_FALSE;
        }
#endif
    }
    // NOTE: can't turn off the PDN bit of SIM interface over, it will cause
    // the SIM behavior abnormal.
    usim_dcb->main_state = MAIN_CMD_READY_STATE;
    usim_dcb->cmd_state = USIM_CMD_READY;
    kal_set_eg_events(usim_dcb->event, 0, KAL_AND);
#if defined(SIM_DRV_IC_USB)
    if ((usim_dcb->isIcUsb == KAL_TRUE) && (hw_cb->simInterface == 0x0) && (FACTORY_BOOT != kal_query_boot_mode()) && usim_dcb->forceISO == KAL_FALSE)
    {
        kal_uint32 icusbStatus = 0;
        sim_addMsg(0xE00C, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);

        // power off ISO mode
        if (SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_CTRL_MTK)&SIM_CTRL_SIMON)
        {
            SIM_SetBits((SIM0_BASE_ADDR_MTK + SIM_CTRL_MTK), SIM_CTRL_HALT);
            USIM_CLR_FIFO();

            // tell USB to reset MAC & PHY
            icusbStatus = SIM_icusb_disableSession(hw_cb);
            if (icusbStatus == SIM_ICUSB_CCCI_TIMEOUT)
            {
                sim_addMsg(0xE005, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
                goto LEAVE_ICUSB_INIT;
            }

            // Need delay of at least 10ms before next activate operation
            kal_sleep_task(KAL_TICKS_50_MSEC_REAL);

            // tell USB to reset MAC & PHY
            icusbStatus = SIM_icusb_disconnectDone(hw_cb);
            if (icusbStatus == SIM_ICUSB_CCCI_TIMEOUT)
            {
                sim_addMsg(0xE007, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
                goto LEAVE_ICUSB_INIT;
            }
        }
        usim_dcb->isPrefer3V = KAL_FALSE;
        //notify AP libusb
        if (SIM_icusb_setVolt(hw_cb) == (kal_uint32)SIM_ICUSB_CCCI_TIMEOUT)
        {
            DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC15, 0, 0, 0, drv_get_current_time(), 0xccc0);
            sim_addMsg(0xE024, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
            goto LEAVE_ICUSB_INIT;
        }

        icusbStatus = SIM_icusb_enableSession(hw_cb);
        if (icusbStatus == SIM_ICUSB_ACK_PREFER_3V)
        {
            DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC15, 0, 0, 0, drv_get_current_time(), 0xccc1);
            L1usim_PowerOff(hw_cb);
            usim_dcb->isPrefer3V = KAL_TRUE;
            sim_addMsg(0xE00F, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
            goto PREFER_3V;
        }
        else if (icusbStatus == (kal_uint32)SIM_ICUSB_CCCI_TIMEOUT)
        {
            DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC15, 0, 0, 0, drv_get_current_time(), 0xccc2);
            sim_addMsg(0xE025, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
            goto LEAVE_ICUSB_INIT;
        }
        if (SIM_icusb_powerOn(hw_cb) == (kal_uint32)SIM_ICUSB_CCCI_TIMEOUT)
        {
            DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC15, 0, 0, 0, drv_get_current_time(), 0xccc3);
            sim_addMsg(0xE026, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
            goto LEAVE_ICUSB_INIT;
        }
        DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC66, usim_dcb->isIcUsbRecPPS, usim_dcb->main_state, usim_dcb->isIcUsb, usim_dcb->icusb_state, 0);
    }
#if defined SIM_DRV_IC_USB_DBG_2
    DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC15, 0, 0, 0, drv_get_current_time(), 0xaaad);
#endif // #if defined SIM_DRV_IC_USB_DBG_2
#endif // #if defined(SIM_DRV_IC_USB)	
    return USIM_NO_ERROR;

#if defined(SIM_DRV_IC_USB)
LEAVE_ICUSB_INIT:
    SIM_ClearBits((SIM0_BASE_ADDR_MTK + SIM_CTRL_MTK), SIM_CTRL_HALT);
    kal_sleep_task(KAL_MILLISECS_PER_TICK_REAL);
    usim_deactivation(hw_cb);
    usim_dcb->forceISO = KAL_TRUE;
    usim_dcb->isIcUsb = KAL_FALSE;
    DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC15, 0, 0, 0, drv_get_current_time(), 0xaaae);
    if (usim_dcb->isPrefer3V == KAL_TRUE || usim_dcb->power == CLASS_B_30V) goto PREFER_3V;
    else goto PREFER_ORI;
#endif // #if defined(SIM_DRV_IC_USB)
}

/*************************************************************************
* FUNCTION
*  L1usim_PowerOff
*
* DESCRIPTION
*	1. perform the deactivation to UICC
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/
static void L1usim_PowerOff(sim_HW_cb *hw_cb)
{
#if defined(SIM_DRV_IC_USB)
    usim_dcb_struct *usim_dcb;
    usim_dcb = GET_USIM_CB(hw_cb->simInterface);
    sim_addMsg(0xE012, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
#endif // #if defined(SIM_DRV_IC_USB)
    // DRVPDN_Disable(DRVPDN_CON1,DRVPDN_CON1_SIM,PDN_SIM);
    usim_deactivation(hw_cb);
    // DRVPDN_Enable(DRVPDN_CON1,DRVPDN_CON1_SIM,PDN_SIM);
}
/*************************************************************************
* FUNCTION
*  L1usim_Get_Card_Info
*
* DESCRIPTION
*	get the card informations
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/
static void L1usim_Get_Card_Info(sim_info_struct *info, sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    ASSERT(usim_dcb->main_state >= ATR_STATE);
    info->power = usim_dcb->power;
    info->speed = usim_dcb->speed;
    info->clock_stop = usim_dcb->clock_stop_type;
    info->app_proto = usim_dcb->app_proto;
    info->phy_proto = usim_dcb->phy_proto;
    info->T0_support = usim_dcb->T0_support;
    info->T1_support = usim_dcb->T1_support;
    info->hist_index = usim_dcb->hist_index;
    info->ATR = usim_dcb->ATR_data;
    info->TAiExist = usim_dcb->TAiExist;
    info->ATR_length = usim_dcb->ATR_index;
    info->isSW6263 = usim_dcb->isSW6263;
    info->TB15 = usim_dcb->TB15;
    info->hasPowerClass = usim_dcb->hasPowerClass;
    info->PowerClass = usim_dcb->PowerClass;
    #ifdef SIM_DRV_EXTENDED_APDU
    info->SupportExtendedLength = usim_dcb->Support_Extended_Length;
    #endif
    
}

/*************************************************************************
* FUNCTION
*  L1usim_Enable_Enhanced_Speed
*
* DESCRIPTION
*	1. enable the enhance speed mode if UICC supports
*	2. shall be called before reset after init
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/
static void L1usim_Enable_Enhanced_Speed(kal_bool enable, sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);
    //ASSERT(usim_dcb->main_state == IDLE_STATE);
    usim_dcb->high_speed_en = enable;
}
/*************************************************************************
* FUNCTION
*  L1usim_Set_ClockStopMode
*
* DESCRIPTION
*	setup the clock stop mode according to the ATR information.
*
* PARAMETERS
*	mode:	clock stop mode
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/
static void L1usim_Set_ClockStopMode(usim_clock_stop_enum mode, sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;
    kal_uint32 t1 = 0;
    //kal_bool level = KAL_FALSE;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);
    if (mode & CLOCK_STOP_MSK)
    {
        // calculate the clock to etu for 1860 and 700
        usim_dcb->etu_of_1860 = (1860 / (usim_dcb->Fi / usim_dcb->Di)) + 10; // longer than spec.
        usim_dcb->etu_of_700 = (700 / (usim_dcb->Fi / usim_dcb->Di)) + 5;
        usim_dcb->clock_stop_en = KAL_TRUE;
        if (mode == CLOCK_STOP_ANY)
        {
            usim_dcb->clock_stop_type = CLOCK_STOP_LOW;
            //level = KAL_FALSE;
        }
        else
        {
            usim_dcb->clock_stop_type = mode;
            //level = KAL_TRUE;
        }

        t1 = SIM_GetCurrentTime();
        while ((SIM_GetCurrentTime() - t1) < 20); // delay 600 clock cycles (600us)
        //SIM_Idle_MTK(level, hw_cb);
        kal_sprintf(hw_cb->dbgStr, "[SIM_DRV:%d]stop SIM clock\n\r", hw_cb->simInterface);
        DRV_ICC_print_str(hw_cb->dbgStr);
    }
    else
    {
        usim_dcb->clock_stop_en = KAL_FALSE;
    }
}
/*************************************************************************
* FUNCTION
*  L1usim_Cmd
*
* DESCRIPTION
*	usim T=1 command
*
* PARAMETERS
*	1. txData: tx buffer containing command header optional with tx data.
*	2. txSize: length of the tx data
*	3. rxData: rx buffer (must inluding two extra one for sw1 and sw2)
*	4. rxSize: length of the rx data except sw1|sw2
*
* RETURNS
*	status bytes(SW1|SW2), 0 means a physical error.

* GLOBALS AFFECTED
*
*************************************************************************/
static sim_status L1usim_Cmd(kal_uint8  *txData, kal_uint32  *txSize, kal_uint8  *rxData, kal_uint32  *rxSize, sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;
#ifdef SIM_CACHED_SUPPORT
    sim_status	SW;
    kal_uint8	*pNoncachedTx, *pNoncachedRx;
#endif

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    kal_sprintf(hw_cb->dbgStr, "%s(%d) P3=%d txSize=%d, rxData%s=NULL, *rxSize=%d\n\r",
                __FUNCTION__, hw_cb->simInterface, txData[4], *txSize, (rxData == NULL) ? "=" : "!", (rxData != NULL) ? *rxSize : 0);
    DRV_ICC_print_str(hw_cb->dbgStr);

    /*
    if(usim_dcb->main_state != MAIN_CMD_READY_STATE && usim_dcb->main_state != CLK_STOPPED_STATE)
    {
    	kal_prompt_trace(MOD_SIM,"[SIM_DRV]:L1usim_Cmd is called at err state");
    	return SIM_SW_STATUS_FAIL;
    }
    */
    if (rxData == NULL && *rxSize != 0)
        ASSERT(0);
    if (usim_dcb->cmd_case == usim_case_1)
    {
        // for case1, only 4 bytes need to be transfer
        *txSize = 4;
        *rxSize = 0;
    }

#ifdef SIM_CACHED_SUPPORT
    if (INT_QueryIsCachedRAM(txData, *txSize))
    {
        GET_NCACHEDTX_P(pNoncachedTx, sim_get_hwCtrl_from_logicalNum(hw_cb->simInterface));
        kal_mem_cpy(pNoncachedTx, txData, *txSize);
    }
    else
    {
        pNoncachedTx = txData;
    }

    if (rxData != NULL && INT_QueryIsCachedRAM(rxData, 512))
    {
        GET_NCACHEDRX_P(pNoncachedRx, sim_get_hwCtrl_from_logicalNum(hw_cb->simInterface));
    }
    else
    {
        pNoncachedRx = rxData;
    }

    SW = usim_send_i_block((kal_uint8 *)pNoncachedTx, txSize, (kal_uint8 *)pNoncachedRx, rxSize, hw_cb);

    if (rxData != NULL && INT_QueryIsCachedRAM(rxData, 512))
    {
        if (0 != *rxSize)
        {
            if (512 < *rxSize)
            {
                ASSERT(0);
            }
            kal_mem_cpy(rxData, pNoncachedRx, *rxSize);
        }
    }

    return SW;
#endif

#ifdef SIM_CACHED_SUPPORT_WRITE_THROUGH_SERIES
    invalidate_wt_cache((kal_uint32)rxData, *rxSize);
#endif

#ifndef SIM_CACHED_SUPPORT
    return usim_send_i_block(txData, txSize, rxData, rxSize, hw_cb);
#endif
}
/*************************************************************************
* FUNCTION
*  usim_TimeOutHandler
*
* DESCRIPTION
*	Callback function of gpt timer, and launched while MSDC busy for a while

*
* PARAMETERS
*
*
* RETURNS
*
* GLOBALS AFFECTED
*
*
*************************************************************************/
static void usim_gpt_timeout_handler(void *parameter)
{
    usim_dcb_struct *usim_dcb;

    usim_dcb = (usim_dcb_struct *)parameter;

    /*
    	kal_prompt_trace(MOD_SIM,"[SIM_DRV]: usim gpt timeout !");
    */
    usim_dcb->status  = USIM_GPT_TIMEOUT;
    usim_dcb->ev_status = USIM_GPT_TIMEOUT;
    USIM_SET_EVENT_Multiple(usim_dcb);
}

#if defined(__SIM_ACTIVATION_V2__)
void usim_gpt_timeout_handler_for_SIM_activation(void *parameter)
{
    sim_HW_cb *hw_cb;
    usim_dcb_struct *usim_dcb;

    hw_cb = (sim_HW_cb *) parameter;
    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

#if defined(__SIM_SAME_GPIO_MODE__)
    DclGPIO_Control(usim_dcb->gpio_handle_for_SIO, GPIO_CMD_SET_MODE_1, NULL);
#else
#if defined(MT6755)
    DclGPIO_Control(usim_dcb->gpio_handle_for_SIO, GPIO_CMD_SET_MODE_3, NULL);
#else
    DclGPIO_Control(usim_dcb->gpio_handle_for_SIO, GPIO_CMD_SET_MODE_2, NULL);
#endif
#endif
    MO_Sync();
}
#endif

//------------------------------------------------------------------------//
// General interfaces of sim driver
//------------------------------------------------------------------------//
/*************************************************************************
* FUNCTION
*  L1sim_Reset_All
*
* DESCRIPTION
*	1. general interface of sim reset for T=0 and T=1
*	2. it support warm reset for UICC
*	3. first enable error repeat handling process to cover parity error at ATR, if not
*		success, disable it.
*	4. for SIM protocol with T=0, additional reset will be perfromed.
*
* PARAMETERS
*	ExpectVolt: expected input voltage for the SIM card.
*	ResultVolt: finally used power voltage.
*	warm: specify warm reset for UICC
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/
usim_status_enum L1sim_Reset_MTK(sim_power_enum ExpectVolt, sim_power_enum *ResultVolt, kal_bool warm, sim_HW_cb *hw_cb)
{
    usim_status_enum status;
    usim_dcb_struct *usim_dcb;
    Sim_Card *SimCard;

#ifdef DUAL_MCU_SIM_V1
    pmic6326_ccci_lock(KAL_TRUE);

    if (1 == sim_get_hwCtrl_from_logicalNum(hw_cb->simInterface))
    {
        /*AP side may be sleep, polling until we got non-zero value from this register*/
        while (0 == SIM_Reg(0xF0001020));
        if (0 == (SIM_Reg(0xF0001020) & 0x80))
            ASSERT(0);
    }
#endif

#if defined(__DUAL_SIM_HOT_SWAP_CO_DECK_SUPPORT__)&& defined(__SIM_HOT_SWAP_POLL_TIMER__)   
    if(hw_cb->PollTimerStart==KAL_TRUE)
    {
        kal_sprintf(hw_cb->dbgStr, "[SIM_DRV:%d]: Skip reset while PollTimerStart!\n\r",hw_cb->simInterface);
	    DRV_ICC_print_str(hw_cb->dbgStr);
        return USIM_NO_INSERT;
    }
#endif
    usim_dcb = GET_USIM_CB(hw_cb->simInterface);
    /*we should do platform check here, not allow to access interface 2 on one-SIM platform*/
    usim_InterfaceCheck(hw_cb);

    /*we should additionally check whether this interface has owner or not*/
    if (0 != usim_dcb->ownerTask  &&  kal_get_current_thread_ID() != usim_dcb->ownerTask)
        ASSERT(0);

#if defined(SIM_DRV_IC_USB)
#if defined(SIM_DRV_IC_USB_DBG_2)
    DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC15, 0, 0, 0, drv_get_current_time(), 0xaaac);
#endif
    sim_addMsg(0xE001, hw_cb->simInterface, usim_dcb->power_in, usim_dcb->power);
#endif

#if 0 //defined(SIM_DRV_IC_USB)
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

    if (warm == KAL_FALSE)
    {
        //dbg_print("cold reset \r\n");
        //TS_HSK_ENABLE = KAL_TRUE;
        status = L1usim_Reset(ExpectVolt, ResultVolt, hw_cb);
        usim_dcb->ownerTask = kal_get_current_thread_ID();
        if (status < 0)
        {
            //these string should cross over sometimes, fix when we meet
            //kal_sprintf(hw_cb->dbgStr, "L1usim_Reset failed!(%d, %d)", status, hw_cb->simInterface);
            //dbg_print(hw_cb->dbgStr);
            DRV_ICC_print(hw_cb, SIM_PRINT_L1USIM_RESET_FAIL, status, hw_cb->simInterface, (kal_uint32)usim_dcb->ev_status, (kal_uint32)ExpectVolt, (kal_uint32)ResultVolt);
            DRV_ICC_print(hw_cb, SIM_PRINT_L1USIM_RESET_FAIL, SIM_Reg(SIM0_BASE_ADDR_MTK + 0x08), SIM_Reg(SIM0_BASE_ADDR_MTK + 0x20), SIM_Reg(SIM0_BASE_ADDR_MTK + 0x24), SIM_Reg(SIM0_BASE_ADDR_MTK + 0x34), SIM_Reg(SIM0_BASE_ADDR_MTK + 0x60));
            DRV_ICC_print(hw_cb, SIM_PRINT_L1USIM_RESET_FAIL, SIM_Reg(SIM0_BASE_ADDR_MTK + 0x74), SIM_Reg(SIM0_BASE_ADDR_MTK + 0x90), SIM_Reg(SIM0_BASE_ADDR_MTK + 0x70), SIM_Reg(SIM0_BASE_ADDR_MTK + 0x00), 0);
            //L1sim_PowerOff_All(simInterface);
            L1usim_PowerOff(hw_cb);
            if (status == USIM_NO_INSERT)
                usim_dcb->present = KAL_FALSE;

#if 0
#ifdef DUAL_MCU_SIM_V1
/* under construction !*/
#endif
#endif

            return status;
            /*
            TS_HSK_ENABLE = KAL_FALSE;
            status = L1usim_Reset(ExpectVolt, ResultVolt);
            if(status <0)
            {
            	L1sim_PowerOff_All();
            	MT6302_RACE_RELEASE(sim_MT6302_protectionRst);
            	return status;
            }
            */
        }
        else
        {
            kal_uint32 i;
            kal_char *p;


            if (USIM_DIRECT != usim_dcb->dir)
            {
                //dbg_print("indirect card!!!!");
            }

            p = hw_cb->dbgStr;
            kal_sprintf(p, "[SIM_DRV:%d]SIM ATR= ", hw_cb->simInterface);
            p += strlen(p);
            for (i = 0; i < usim_dcb->ATR_index; i++)
            {
                kal_sprintf(p, "%02X", usim_dcb->ATR_data[i]);
                p += 2;
            }
#ifdef ATEST_DRV_ENABLE
            DRV_ICC_print_str(hw_cb->dbgStr);
#else
            kal_brief_trace(TRACE_INFO, LOG_SIM_DRV_ATR, hw_cb->dbgStr);
#endif

            DRV_ICC_print(hw_cb, SIM_PRINT_L1USIM_RST_OK, usim_dcb->power, usim_dcb->phy_proto, usim_dcb->app_proto, usim_dcb->card_speed, 0);
#ifdef ATEST_DRV_ENABLE
            kal_sprintf(hw_cb->dbgStr, "[SIM_DRV:%d]L1usim_Reset OK voltage: %d, T: %d, app: %d, speed:%d\n\r", hw_cb->simInterface, usim_dcb->power, usim_dcb->phy_proto, usim_dcb->app_proto, usim_dcb->card_speed);
            DRV_ICC_print_str(hw_cb->dbgStr);
#else
            kal_brief_trace(TRACE_INFO, LOG_SIM_DRV_BASIC_SIM_INFO, hw_cb->simInterface, usim_dcb->power, usim_dcb->phy_proto, usim_dcb->app_proto, usim_dcb->card_speed);
#endif

            Data_Sync_Barrier();
            // reset successfully, record its IR or AL state
            if (DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_ATRSTA_MTK) & SIM_ATRSTA_AL)
            {
                kal_sprintf(hw_cb->dbgStr, "AL card, convention: %x\n\r", usim_dcb->ATR_data[0]);
                DRV_ICC_print_str(hw_cb->dbgStr);
            }
            else if (DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_ATRSTA_MTK) & SIM_ATRSTA_IR)
            {
                kal_sprintf(hw_cb->dbgStr, "IR card, convention: %x\n\r", usim_dcb->ATR_data[0]);
                DRV_ICC_print_str(hw_cb->dbgStr);
            }
            else
                ASSERT(0);
        }
        if (usim_dcb->phy_proto == T0_PROTOCOL)
        {

            kal_uint8 s;
            kal_uint8 power;

#if !defined(MT6218B) && !defined(MT6218)
            SimCard = GET_SIM_CB(hw_cb->simInterface);

#if !defined(DRV_SIM_LTE_SERIES)
            SimCard->sim_dmaport = usim_dcb->dma_port;
#endif
#endif
            L1sim_Init_MTK(hw_cb);
            if (usim_dcb->power == CLASS_C_18V)
                power = SIM_18V;
            else
                power = SIM_30V;
            if (usim_dcb->app_proto == SIM_PROTOCOL)
            {
                s = sim_Reset_MTK(power, NULL, NULL, hw_cb);
#ifdef SIM_REMOVE_ATR_ASSERT
                if (SIM_NO_ERROR != s)
                {
                    usim_dcb->present = KAL_FALSE;
                    status = USIM_NO_INSERT;
                    return status;
                }
#endif
                ASSERT(s == SIM_NO_ERROR);
#ifdef DRV_SIM_RETRY_3V_ON_PTS_ERROR
                {
                    /* For [MAUI_01321659] begin */
                    if (SimCard->Power == SIM_18V)
                        *ResultVolt = CLASS_C_18V;
                    else if (SimCard->Power == SIM_30V)
                        *ResultVolt = CLASS_B_30V;
                    else
                        ASSERT(0);
                } /* For [MAUI_01321659] end */
#endif
            }
            else
                usim_update_sim_to_ready(hw_cb);

            SimCard->mod_id = kal_get_active_module_id();
            SimCard->mod_extq_cap = msg_get_task_extq_capacity(SimCard->mod_id);
            kal_sprintf(hw_cb->dbgStr, "[SIM_DRV:%d]MOD id:%d MOD extq cap:%d\r\n", hw_cb->simInterface, SimCard->mod_id, SimCard->mod_extq_cap);
            DRV_ICC_print_str(hw_cb->dbgStr);

        }
    }
    else
    {
        if (usim_dcb->app_proto == USIM_PROTOCOL)
        {
            usim_dcb->warm_rst = KAL_TRUE;
            status = L1usim_Reset(usim_dcb->power, ResultVolt, hw_cb);
            usim_dcb->warm_rst = KAL_FALSE;
            if (status < 0)
            {
                //L1sim_PowerOff_All(simInterface);
                L1usim_PowerOff(hw_cb);
#ifdef DUAL_MCU_SIM_V1
                pmic6326_ccci_lock(KAL_FALSE);
#endif
                return status;
            }
            if (usim_dcb->phy_proto == T0_PROTOCOL)
            {
                kal_uint8 power = 0;

                SimCard = GET_SIM_CB(hw_cb->simInterface);
#if !defined(DRV_SIM_LTE_SERIES)
                SimCard->sim_dmaport = usim_dcb->dma_port;
#endif

                L1sim_Init_MTK(hw_cb);
                if (usim_dcb->power == CLASS_C_18V)
                    power = SIM_18V;
                else
                    power = SIM_30V;
                if (usim_dcb->app_proto == SIM_PROTOCOL)
                {
                    sim_Reset_MTK(power, NULL, NULL, hw_cb);
#ifdef DRV_SIM_RETRY_3V_ON_PTS_ERROR
                    {
                        /* For [MAUI_01321659] begin */
                        if (SimCard->Power == SIM_18V)
                            *ResultVolt = CLASS_C_18V;
                        else if (SimCard->Power == SIM_30V)
                            *ResultVolt = CLASS_B_30V;
                        else
                            ASSERT(0);
                    } /* For [MAUI_01321659] end */
#endif
                }
                else
                    usim_update_sim_to_ready(hw_cb);

                SimCard->mod_id = kal_get_active_module_id();
                SimCard->mod_extq_cap = msg_get_task_extq_capacity(SimCard->mod_id);
                kal_sprintf(hw_cb->dbgStr, "[SIM_DRV:%d]MOD id:%d MOD extq cap:%d\r\n", hw_cb->simInterface, SimCard->mod_id, SimCard->mod_extq_cap);
                DRV_ICC_print_str(hw_cb->dbgStr);
            }
        }
        else
        {
            //mtk04122: have confirmed with original owner that warm reset is not supported for sim
            status = USIM_INVALID_WRST;
        }
    }

#ifdef DUAL_MCU_SIM_V1
    pmic6326_ccci_lock(KAL_FALSE);
#endif

    return status;
}
/*************************************************************************
* FUNCTION
*  L1sim_Enable_Enhanced_Speed_All
*
* DESCRIPTION
*	enable the enhance speed
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/

void L1sim_Enable_Enhanced_Speed_MTK(kal_bool enable, sim_HW_cb *hw_cb)
{
#if defined(__DBG_MSG__)
    //dbg_print("L1sim_Enable_Enhanced_Speed_MTK\r\n");
#endif
    L1sim_Enable_Enhanced_Speed(enable, hw_cb);
    L1usim_Enable_Enhanced_Speed(enable, hw_cb);

}
/*************************************************************************
* FUNCTION
*  L1sim_Select_Prefer_PhyLayer_All
*
* DESCRIPTION
*	select the prefer physical layer protocol, the selected one has higher priority
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/

void L1sim_Select_Prefer_PhyLayer_MTK(sim_protocol_phy_enum T, sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);
    usim_dcb->perfer_phy_proto = T;
}
/*************************************************************************
* FUNCTION
*  L1sim_Set_ClockStopMode_All
*
* DESCRIPTION
*	configure the clock stop mode.
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/

kal_bool L1sim_Set_ClockStopMode_MTK(sim_clock_stop_enum mode, sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

    if (usim_dcb->phy_proto == T0_PROTOCOL)
    {
        if (mode == CLOCK_STOP_HIGH)
            L1sim_Configure_MTK(CLOCK_STOP_AT_HIGH, hw_cb);
        else if (mode == CLOCK_STOP_LOW || mode == CLOCK_STOP_ANY)
            L1sim_Configure_MTK(CLOCK_STOP_AT_LOW, hw_cb);
        else
            L1sim_Configure_MTK(CLOCK_STOP_NOT_ALLOW, hw_cb);
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

    }
    else
    {
        L1usim_Set_ClockStopMode(mode, hw_cb);
    }

    return KAL_TRUE;
}
/*************************************************************************
* FUNCTION
*  L1sim_PowerOff_All
*
* DESCRIPTION
*	turn off the SIM card.
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/

void L1sim_PowerOff_MTK(sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);

#if 0
#ifdef DUAL_MCU_SIM_V1
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#endif

    /*we should additionally check whether this interface has owner or not*/
    if (0 != usim_dcb->ownerTask  &&  kal_get_current_thread_ID() != usim_dcb->ownerTask)
        ASSERT(0);



    if (usim_dcb->phy_proto == T0_PROTOCOL)
    {
        /*#ifdef DUAL_MCU_SIM_V1
        		sim_addMsg(0x11111803, hw_cb->simInterface, 0, 0);
        		kal_sleep_task((KAL_TICKS_500_MSEC_REAL) >> 1);
        #endif*/
        sim_PowerOff_MTK(hw_cb);
        /*#ifdef DUAL_MCU_SIM_V1
        		kal_sleep_task(KAL_TICKS_500_MSEC_REAL);
        		sim_addMsg(0x11111804, hw_cb->simInterface, 0, 0);
        #endif*/
    }
    else
    {
        /*#ifdef DUAL_MCU_SIM_V1
        		sim_addMsg(0x11111805, hw_cb->simInterface, 0, 0);
        		kal_sleep_task((KAL_TICKS_500_MSEC_REAL) >> 1);
        #endif*/
        L1usim_PowerOff(hw_cb);
        /*#ifdef DUAL_MCU_SIM_V1
        		kal_sleep_task(KAL_TICKS_500_MSEC_REAL);
        		sim_addMsg(0x11111806, hw_cb->simInterface, 0, 0);
        #endif*/
    }

    /*#ifdef DUAL_MCU_SIM_V1
    	sim_addMsg(0x11111807, hw_cb->simInterface, 0, 0);
    #if !defined(__L1_STANDALONE__)
    	drv_trace8(TRACE_GROUP_4, SIM_GEMINI_GEN1, FILE_SWITCHCONTROL1, __LINE__, hw_cb->simInterface, 0, 0, 0, 0, drv_get_current_time());
    #endif
    	pmic6326_ccci_lock(KAL_FALSE);
    	sim_addMsg(0x11111808, hw_cb->simInterface, 0, 0);
    #endif*/

    usim_dcb->present = KAL_FALSE;
}
/*************************************************************************
* FUNCTION
*  L1sim_Get_Card_Info_All
*
* DESCRIPTION
*	get the card information
*
* PARAMETERS
*
* RETURNS
*
* GLOBALS AFFECTED
*
*************************************************************************/

void L1sim_Get_Card_Info_MTK(sim_info_struct *info, sim_HW_cb *hw_cb)
{
    L1usim_Get_Card_Info(info, hw_cb);
}
/*************************************************************************
* FUNCTION
*  L1sim_Cmd_All
*
* DESCRIPTION
*	1. check which case the command belongs to.
*	2. direct the command into T=0 or T=1 protocol layer.
*
* PARAMETERS
*	1. txData: tx buffer containing command header optional with tx data.
*	2. txSize: length of the tx data
*	3. rxData: rx buffer (for T=1, must inluding two extra one for sw1 and sw2)
*	4. rxSize: length of the rx data except sw1|sw2
*
* RETURNS
*	status bytes(SW1|SW2), 0 means a physical error.
*
* GLOBALS AFFECTED
*
*************************************************************************/
sim_status L1sim_Cmd_MTK(kal_uint8  *txData, kal_uint32 *txSize, kal_uint8 *rxData, kal_uint32 *rxSize, sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usimCard;
    sim_status result;
    Sim_Card *SimCard;

    SimCard = GET_SIM_CB(hw_cb->simInterface);
    usimCard = GET_USIM_CB(hw_cb->simInterface);
    /*we should do platform check here, not allow to access interface 2 on one-SIM platform*/
    usim_InterfaceCheck(hw_cb);

    /*we should additionally check whether this interface has owner or not*/
    if (0 != usimCard->ownerTask  &&  kal_get_current_thread_ID() != usimCard->ownerTask)
	{
		kal_sprintf(hw_cb->dbgStr, "[SIM_OwnerTask:%d] owner Task value = %x, thread ID = %x\n",hw_cb->simInterface,(kal_uint32)(usimCard->ownerTask),(kal_uint32)kal_get_current_thread_ID());
		DRV_ICC_print_str(hw_cb->dbgStr); 
		ASSERT(0);
	}

    // SIM card is plugout || SIM card is not activated
    if (usimCard->present == KAL_FALSE || (DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_CTRL_MTK) & SIM_CTRL_SIMON) == 0x0)
    {
        kal_sprintf(hw_cb->dbgStr, "usimCard->present:%x, SIMON:%x\n\r", usimCard->present, DRV_Reg32(SIM0_BASE_ADDR_MTK + SIM_CTRL_MTK) & SIM_CTRL_SIMON);
        DRV_ICC_print_str(hw_cb->dbgStr);
        return SIM_SW_STATUS_FAIL;
    }

    // check cmd cases
    if (*txSize == 5 && rxData == NULL)
    {
        usimCard->cmd_case = usim_case_1;
        ////dbg_print("usim_case_1 \r\n");
    }
    else if (*txSize == 5 && rxData != NULL)
    {
        usimCard->cmd_case = usim_case_2;
        if ((0 == txData[LEN_INDEX] && 256 > *rxSize) || (*rxSize < txData[LEN_INDEX]))
        {
            return 0x0000;
        }
        ////dbg_print("usim_case_2 \r\n");
    }
#ifndef SIM_DRV_EXTENDED_APDU
    else if (*txSize != 5 && rxData == NULL)
    {
        usimCard->cmd_case = usim_case_3;
        ////dbg_print("usim_case_3 \r\n");
    }
    else if (*txSize != 5 && rxData != NULL)
    {
        usimCard->cmd_case = usim_case_4;
        ////dbg_print("usim_case_4 \r\n");
    }	
#else
	else
	{
        if(usimCard->Support_Extended_Length == KAL_TRUE)
        {
            if (*txSize == 7 && rxData != NULL &&  txData[LEN_INDEX]==0) //2E, p3 is 0
                usimCard->cmd_case = usim_case_2E;
            
            else if (rxData == NULL && txData[LEN_INDEX]!=0) // 3S
                usimCard->cmd_case = usim_case_3;            
            else if (rxData == NULL && txData[LEN_INDEX]==0) // 3E
                usimCard->cmd_case = usim_case_3E; 
            else if (rxData != NULL && txData[LEN_INDEX]!=0) // 4S
                usimCard->cmd_case = usim_case_4;      
            else if (rxData != NULL && txData[LEN_INDEX]==0) // 4E
                usimCard->cmd_case = usim_case_4E; 
        }
        else
        {        
            if (*txSize != 5 && rxData == NULL)
            {
                usimCard->cmd_case = usim_case_3;
            }
            else if (*txSize != 5 && rxData != NULL)
            {
                usimCard->cmd_case = usim_case_4;
            }
        }
    }   
	kal_sprintf(hw_cb->dbgStr, "[SIM_DRV:%d]: Case:%d, txSize:%d",hw_cb->simInterface,usimCard->cmd_case,*txSize);
    DRV_ICC_print_str(hw_cb->dbgStr);  
#endif
    SimCard->cmd_case = usimCard->cmd_case;
#if defined(SIM_DEBUG_INFO)
    DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC1, *txData, *(txData + 1), *(txData + 2), *(txData + 3), drv_get_current_time());
    DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC1, *txSize, *rxSize, hw_cb->simInterface, *rxData, SimCard->cmd_case);
#endif

    if (usimCard->phy_proto == T0_PROTOCOL)
    {
        result = L1sim_Cmd_Layer_MTK(txData, txSize,  rxData, rxSize, hw_cb, &usimCard->isSW6263);
#if defined(SIM_DEBUG_INFO)
        DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC19, drv_get_current_time(), *(txData + 1), *(txData + 2), *(txData + 3), *(txData + 4));
        DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC19, *rxData, *(rxData + 1), *(rxData + 2), *(rxData + 3), *(rxData + 4));
        DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC19, *txSize, *rxSize, result, usimCard->isSW6263, SimCard->cmd_case);
#endif        
    }
    else
    {
        result = L1usim_Cmd(txData, txSize,  rxData, rxSize, hw_cb);
#if defined(SIM_DEBUG_INFO)
        DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC41, drv_get_current_time(), *(txData + 1), *(txData + 2), *(txData + 3), *(txData + 4));
        DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC41, *rxData, *(rxData + 1), *(rxData + 2), *(rxData + 3), *(rxData + 4));
        DRV_ICC_print(hw_cb, SIM_PRINT_L1SIM_CMD_TRC14, *txSize, *rxSize, result, usimCard->isSW6263, SimCard->cmd_case);
#endif
    }
    
#if defined(SIM_DRV_RETRY_3V_WHEN_CMD_FAIL)
    if (result == SIM_SW_STATUS_FAIL && usimCard->present)
    {
        if (usimCard->hasPowerClass && usimCard->PowerClass != CLASS_C_18V)
            usimCard->retry_3v_prefer = KAL_TRUE;
    }
#endif
#if defined(SIM_DRV_RETRY_SPECIAL_MODE_WHEN_CMD_FAIL)
    if (result == SIM_SW_STATUS_FAIL && usimCard->present)
    {
        usimCard->retry_special_mode_prefer = KAL_TRUE;
    }
#endif

    return result;
}

void L1sim_EOC_MTK(sim_HW_cb *hw_cb)
{
    /*there should be nothing to do in EOC in dual controller solution*/
}

static kal_uint32 usim_process_HISTORICAL(sim_HW_cb *hw_cb)
{
    usim_dcb_struct *usim_dcb;
    kal_uint8 *ptr;
    kal_uint8 hist_length = 0, i = 1;
    kal_uint8 tag, len;

    usim_dcb = GET_USIM_CB(hw_cb->simInterface);
    ptr = usim_dcb->ATR_data + usim_dcb->hist_index;

    hist_length = usim_dcb->ATR_index - usim_dcb->hist_index - 1;
    kal_uint8 pre_issuing_data[6] = {0x86, 0x88, 0xC6, 0x18, 0x1E, 0x10};
    kal_uint8 pre_issuing_data_2[6] = {0xd0, 0x01, 0xa4, 0x10, 0x71, 0xcf};
    kal_uint8 pre_issuing_data_3[7] = {0x37, 0x86, 0x60, 0xa6, 0x00, 0x80, 0x12};
    kal_uint8 pre_issuing_data_4[22]={0x3B, 0x9F, 0x94, 0x80, 0x1F, 0xC7, 0x80, 0x31, 0xE0, 0x73, 0xFE, 0x21, 0x13, 0x57, 0x86, 0x8C, 0x02, 0x86, 0x98, 0xE0, 0x43, 0x5F};
    	
    if(usim_dcb->ATR_index == 22)
    {
        if(0 == kal_mem_cmp(usim_dcb->ATR_data, pre_issuing_data_4, 22))
        {
            kal_sprintf(hw_cb->dbgStr, "\r\n[SIM_DRV:%d]: GOT SPECIAL ATR(%d)!!!", hw_cb->simInterface, SIM_3_25MHZ_ONLY);
            DRV_ICC_print_str(hw_cb->dbgStr);
            return SIM_3_25MHZ_ONLY;
        }
    }

    //dbg_print("\r\nATR_LENGTH:%d hist_index:%d ptr:%x\r\n", usim_dcb->ATR_index,usim_dcb->hist_index,*ptr);
    if (usim_dcb->hist_index == 0 || hist_length <= 0 || hist_length > 15 || *ptr != 0x80) /*Category indicator byte*/
    {
        return SIM_NORMAL;
    }

    while (i < hist_length)
    {
        tag = ptr[i++];
        len = tag & 0xf;
        if (tag == 0x66)
        {
            /*Special pre-issuing data for some c2k card*/
            if (0 == kal_mem_cmp(ptr + i, pre_issuing_data, 6))
            {
                hw_cb->SlowClock = KAL_TRUE;
                kal_sprintf(hw_cb->dbgStr, "\r\n[SIM_DRV:%d]: GOT SPECIAL HISTORICAL(%d)!!!", hw_cb->simInterface, SIM_SLOW_CLOCK);
                DRV_ICC_print_str(hw_cb->dbgStr);
                return SIM_SLOW_CLOCK;
            }
        }
        if (tag == 0x65)
        {
            if (0 == kal_mem_cmp(ptr + i, pre_issuing_data_2, 6))
            {
                if ((usim_dcb->power_class != CLASS_C_18V && usim_dcb->app_proto == SIM_PROTOCOL)
                        || ((usim_dcb->power_class & 0x2) && usim_dcb->app_proto == USIM_PROTOCOL))
                {
                    usim_dcb->isPrefer3V = KAL_TRUE;
                    kal_sprintf(hw_cb->dbgStr, "\r\n[SIM_DRV:%d]: GOT SPECIAL HISTORICAL(%d)!!!", hw_cb->simInterface, SIM_FORCE_3V);
                    DRV_ICC_print_str(hw_cb->dbgStr);
                    return SIM_FORCE_3V;
                }
            }
        }

        if (tag == 0x57)
        {
            if (0 == kal_mem_cmp(ptr + i, pre_issuing_data_3, 7))
            {
                kal_sprintf(hw_cb->dbgStr, "\r\n[SIM_DRV:%d]: GOT SPECIAL HISTORICAL(%d)!!!", hw_cb->simInterface, SIM_CLOCK_FETCH__TERMINAL_RESPONSE);
                DRV_ICC_print_str(hw_cb->dbgStr);
                return SIM_CLOCK_FETCH__TERMINAL_RESPONSE;
            }
        }
#ifdef SIM_DRV_EXTENDED_APDU
        if (tag == 0x73) //Card Capabilities
        {
            kal_uint8 sw_table3=ptr[i+2];//3rd byte
            if ((sw_table3&0x40)==0x40)
            {
                usim_dcb->Support_Extended_Length=KAL_TRUE;
                kal_sprintf(hw_cb->dbgStr, "\r\n[SIM_DRV:%d]:Support Extended Length(%x) !!!", hw_cb->simInterface,sw_table3);
                DRV_ICC_print_str(hw_cb->dbgStr);
            }
        }
#endif
        i += len;
    }

    return SIM_NORMAL;
}

void sim_toutTest(kal_uint32 toutValue, sim_HW_cb *hw_cb)
{
#ifdef SIM_HW_TEST
    kal_uint32 time2, time1;
    kal_uint16 tmp;

#if defined(SIM_DEBUG_INFO)
    kal_sprintf(hw_cb->dbgStr, "tout test with value : %d\n\r", toutValue);
    DRV_ICC_print_str(hw_cb->dbgStr);
#endif
    IRQMask(hw_cb->mtk_lisrCode);

    // set speed 8
    SIM_WriteReg((SIM0_BASE_ADDR_MTK + SIM_BRR_MTK), 0x21);

    // make sure SIM_IRQEN TOUT is set
    SIM_WriteReg((SIM0_BASE_ADDR_MTK + SIM_IRQEN_MTK), 0x8);

    // set WTIME
    DRV_WriteReg32((SIM0_BASE_ADDR_MTK + SIM_TOUT_MTK), toutValue);

    // write clear IRQ
    tmp = SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_STS_MTK);
    SIM_WriteReg((SIM0_BASE_ADDR_MTK + SIM_STS_MTK), tmp);

    SIM_ClearBits((SIM0_BASE_ADDR_MTK + SIM_CONF_MTK), 0x80);

    // mtk04122: may be replaced by ust_get_current_time();
    time1 = ust_get_current_time();
    DRV_SetBits((SIM0_BASE_ADDR_MTK + SIM_CONF_MTK), 0x80);
    while (0x8 != SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_STS_MTK));

    time2 = ust_get_duration(time1);
    time2 = time2;
    IRQUnmask(hw_cb->mtk_lisrCode);

#if defined(SIM_DEBUG_INFO)
    kal_sprintf(hw_cb->dbgStr, "tout test done with period : %d ms\n\r", time2);
    DRV_ICC_print_str(hw_cb->dbgStr);
#endif

#endif // SIM_HW_TEST
}

#if defined(__CHAINING_TEST__)
kal_bool Send_IFS_REQ(kal_uint8 ifs, kal_uint8 interface)
{
    usim_dcb_struct *usim_dcb;
    usim_dcb = GET_USIM_CB(interface);

    sim_PDNDisable_MTK((sim_HW_cb *) hwCbArray[interface]);
    if (usim_send_s_block(IFS_REQ, ifs, (sim_HW_cb *) hwCbArray[interface]) == USIM_NO_ERROR)
    {
        usim_dcb->ifsd = ifs;
//		sim_PDNEnable_MTK((sim_HW_cb *) hwCbArray[interface]);
        return KAL_TRUE;
    }
    else
    {
//		sim_PDNEnable_MTK((sim_HW_cb *) hwCbArray[interface]);
        return KAL_FALSE;
    }
}

void Set_IFSC(kal_uint8 ifs, kal_uint8 interface)
{
    usim_dcb_struct *usim_dcb;

    usim_dcb = GET_USIM_CB(interface);
    usim_dcb->ifsc = ifs;
}
#endif

#if defined(__SPEED_TEST__)
void Set_Speed(kal_uint8 select_speed)
{
    speed_test = select_speed;
    speed_test_enable = KAL_TRUE;
}
#endif

#if !defined(SIM_DRV_HISR_INIT_CENTRALIZATION)
void l1usim_init_hisr(sim_HW_cb *hw_cb)
{
    if (SIM_base == hw_cb->mtk_baseAddr)
    {       
        if (usim_hisrid == NULL)
        {
            usim_hisrid = kal_init_hisr(USIM_HISR);
        }
    }
    else if(SIM2_base == hw_cb->mtk_baseAddr)
    {
        if (usim2_hisrid == NULL)
        {
            usim2_hisrid = kal_init_hisr(USIM2_HISR);
        }
    }
    else
        ASSERT(0);
  
}
#endif

sim_ctrlDriver sim_ctrlDriver_MTK =
{
    L1sim_Reset_MTK,
    L1sim_Cmd_MTK,
    L1sim_PowerOff_MTK,
    L1sim_Get_Card_Info_MTK,
    L1sim_Enable_Enhanced_Speed_MTK,
    L1sim_Select_Prefer_PhyLayer_MTK,
    L1sim_Set_ClockStopMode_MTK,
    L1sim_EOC_MTK,
    sim_addMsg,
    sim_toutTest
};


//--------------------------------------------------------------------------//
// usim driver unit test code
//--------------------------------------------------------------------------//
/*
The behavior of the T1 controller
1. enable T1 controller
2. write NAD, PCB, LEN  into SIM_DATA
3. write LEN into SIMP3
4. configure the DMA for data transfer (INF field)
5. write any value into SIM_INS (trigger to start)
6. generate the T1END interrupt.
7. if a response block is received, T1END is generated again
8. The received block is in the data buffer, the EDC is checked and removed.
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef PINCODE_TEST
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
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if 0
#ifdef GEMINI_UNIT_TEST_ON_2_TASK
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#endif
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
#else	// USIM_DEBUG
void usim_ut_main(void)
{
}
#endif // USIM_DEBUG
#endif // __USIM_DRV__
#endif //DRV_MULTIPLE_SIM
#endif /*__SIM_DRV_MULTI_DRV_ARCH__*/

#endif //DRV_SIM_OFF
