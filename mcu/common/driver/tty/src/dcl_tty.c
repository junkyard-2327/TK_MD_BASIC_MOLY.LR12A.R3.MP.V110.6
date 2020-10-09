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
 * ---------
 *   dcl_tty.c
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   Define how to access COM Port. Provide API for upper-layer applications to access COM Port
 *   It works with enabling compile flag __TTY_UT__.
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 11 27 2019 amit.singh
 * [MOLY00461777] [KAIOS][MT6739_SFP] [TTY] tty_port_mgmt structure rearrange to reduce memory
 * 	
 * 	TTY structure rearrange to reduce memory.
 *
 * 08 21 2019 amit.singh
 * [MOLY00394195] [MH4][Modem Crash] [AT&T][MTBF][IQI] file:mcu/common/driver/tty/src/dcl_tty.c line:1848
 * 	
 * 	Patchback MOLY00394195 from TC01.Sp to MP branch.
 *
 * 03 25 2019 amit.singh
 * [MOLY00394195] [MH4][Modem Crash] [AT&T][MTBF][IQI] file:mcu/common/driver/tty/src/dcl_tty.c line:1848
 * 	
 * 	.
 *
 * 01 10 2019 amit.singh
 * [MOLY00378182] [MT6293] UDC feature patch back to R3
 * 	
 * 	UDC patchback to R3
 *
 * 08 27 2018 amit.singh
 * [MOLY00346381] ???????[ASSERT] file:mcu/common/driver/tty/src/dcl_tty.c line:1789
 * 	
 * 	.
 *
 * 09 18 2017 i-wei.tsai
 * [MOLY00278689] Performance improvement of INT_QueryExceptionStatus
 * 	
 * 	.
 *
 * 07 06 2017 i-wei.tsai
 * [MOLY00262251] [Coverity defect fix] tty coverity fix
 * .
 *
 * 05 09 2017 i-wei.tsai
 * [MOLY00248066] [Gen93] [TTY] Log format refine
 * .
 * 	fix modis build error
 *
 * 05 09 2017 i-wei.tsai
 * [MOLY00248066] [Gen93] [TTY] Log format refine
 * .
 * 	fix modis warning
 *
 * 05 09 2017 i-wei.tsai
 * [MOLY00248066] [Gen93] [TTY] Log format refine
 * .
 * 	remove dummy character
 *
 * 05 09 2017 i-wei.tsai
 * [MOLY00248066] [Gen93] [TTY] Log format refine
 * .
 * 	TTY log refine
 *
 * 06 22 2016 mt.tsai
 * [MOLY00154662] Fix the tty build warning
 * .delete unused variable in TTY
 *
 * 06 22 2016 mt.tsai
 * [MOLY00177032] [Coverity Scanned Code Defect]CID:116560 code defect happened in /mcu/common/driver/tty/src/dcl_tty.c
 * .
 * [Coverity] add spinlock to full fill the protection of some variables
 *
 * 02 26 2016 mt.tsai
 * [MOLY00166612] Remove violation include kal_debug.h
 * The APIs in kal_debug.h is legacy and don't be provided for user
 *
 * 09 30 2015 mt.tsai
 * [MOLY00143135] [UMOLY][LR11] TTYCore Unit Test
 * .modified files for ttycore unit test
 *
 * 09 15 2015 i-wei.tsai
 * [MOLY00141929] [UMOLY][ELBRUS][TTY] Add SMP support
 * 	.
 *
 * 03 02 2015 i-wei.tsai
 * [MOLY00097392] [UMOLY] [TTY] Timer tick macro modification
 * 	.
 *
 * 12 10 2014 i-wei.tsai
 * [MOLY00086663] [TK6291] [TTY] Add new uart port for MTAD
 * 	.
 *
 * 11 14 2014 i-wei.tsai
 * [MOLY00084437] [UMOLY] [TTY] rollback changes
 * 	.
 *
 * 06 16 2014 i-wei.tsai
 * [MOLY00068713] [MT6752] MD2 uart config setting (Buffer mode)
 * 	.
 *
 * 04 25 2014 i-wei.tsai
 * [MOLY00063770] [Rose][KK][Free Test][EE][VT Call]EE about [ASSERT] file:dcl_tty.c line:1367 will pop up after tap "Use touch tone keypad" to enter VT call screen.
 * 	.
 *
 * 03 12 2014 i-wei.tsai
 * [MOLY00059311] [TTY] New Feature for configurable indication mechanism
 *
 * 10 29 2013 i-wei.tsai
 * [MOLY00044179] [TTY] Fixed 82LTE VT issue
 * 	.
 *
 * 09 13 2013 shenghui.shi
 * [MOLY00035078] [MT6290][PDN] Enable GDMA & HDMA related module PDN support
 * move uart pdn_clr from dcl_tty.c to uart.c
 *
 * 08 26 2013 shenghui.shi
 * [MOLY00035212] fix uart build modis error
 * .
 *
 * 08 26 2013 shenghui.shi
 * [MOLY00035078] [MT6290][PDN] Enable GDMA & HDMA related module PDN support
 * add uart PDN feature
 *
 * 06 26 2013 i-wei.tsai
 * [MOLY00027496] [TTYCore] Features check-in
 * 1. add new TTY_CMD_MTU_SIZE support
 * 2. add plug-in/plug-out indication
 * 3. fix issue of flushing rx internal gpd
 *
 * 06 19 2013 i-wei.tsai
 * [MOLY00026667] [TTYCore] Revise ttycore trace log in exception mode
 *
 * 05 29 2013 haoren.kao
 * [MOLY00024108] Support New USB Core
 * Replace with New USB Core.
 * We sync with the following codes from HaoRen MOLY CBr w1322:
 * 1. USB Core
 * 2. USB Class - acm/rndis/mbim
 * 3. ipcore
 * 4. ttycore
 * 5. ethercore
 *
 * 05 15 2013 i-wei.tsai
 * [MOLY00021838] [MT6290 Bring-up] TTY DEV.
 * Turn off aggressive log trace
 *
 * 05 10 2013 i-wei.tsai
 * [MOLY00021838] [MT6290 Bring-up] TTY DEV
 * sync from MT6290E1 First Call Branch
 *
 * 05 10 2013 i-wei.tsai
 * [MOLY00021376] [MT6290 Bring-up] Basic load
 * Check-in support
 *
 * 05 09 2013 i-wei.tsai
 * [MOLY00021838] [MT6290 Bring-up] TTY DEV
 * fix error for setting tx not rdy flag
 *
 * 05 09 2013 i-wei.tsai
 * [MOLY00021838] [MT6290 Bring-up] TTY DEV
 * add sending Ready2Write message when dirver attach
 *
 * 05 08 2013 i-wei.tsai
 * [MOLY00021838] [MT6290 Bring-up] Revise ttycore trace log
 * .
 *
 * 05 03 2013 i-wei.tsai
 * [MOLY00021396] [MT6290 Bring-up] [Basic Load Support] [TTYCore] add option __MAUI_BASIC__
 * basic load support
 *
 * 03 08 2013 i-wei.tsai
 * [MOLY00011358] [TTYCore] TTYCore support
 * Add CCIF UART device type and modify comments
 *
 * 03 01 2013 i-wei.tsai
 * [MOLY00010632] add TTYCore new features
 * fixed typo
 *
 * 02 21 2013 i-wei.tsai
 * [MOLY00010632] add TTYCore new features
 * checkin supporting buffer port features
 *
 * 11 08 2012 haoren.kao
 * [MOLY00005322] TATAKA merge to MOLY
 * 
 * MOLY Migration from TATAKA
 ****************************************************************************/

#include <stdio.h>
#include "dcl.h"

#include "qbm_config_num.h"
#include "qmu_bm.h"
#include "qmu_bm_util.h"
#include "kal_public_api.h"
#include "kal_general_types.h"
#include "stack_ltlcom.h"
#include "hif_ior.h"
#include "kal_internal_api.h"
#include "devdrv_ls.h"
#include "drv_msgid.h"
#include "md_drv_sap.h"
#include "drvpdn.h"
#include "drv_gdma.h"
#include <ex_public.h>
#include "kal_hrt_api.h"

#if __HIF_CCCI_SUPPORT__
#include "cccidev_qbm.h"  /* macros for QBM_TYPE_CCCI_COMM */
#endif

//for reference the vp number
#include "cmux_vp_num.h"

#define TTY_CONSOLE_TRACE_ENABLED 0

#define TTY_AGGRESSIVE_TRACE  0

/*20120724 Ian Modify CCCI_COMM for TTYCore*/
//  #if __HIF_CCCI_SUPPORT__
//  /* using CCCI_COMM type to replace QBM_TYPE_TTY_INT/QBM_TYPE_TTY_TYPE1/QBM_TYPE_TTY_TYPE2 */
//  #define TTY_QBM_DATA_LEN            QBM_CCCI_COMM_DATA_LEN
//  #define TTY_QBM_DATA_TYPE           QBM_TYPE_CCCI_COMM
//  #define TTY_QBM_DES_GET_DATAPTR     CCCIDEV_GET_QBM_DATAPTR
//  #define TTY_QBM_DES_GET_DATALEN     CCCIDEV_GET_QBM_DATALEN
//  #define TTY_QBM_DES_SET_DATALEN     CCCICOMM_SET_QBM_DATALEN
//  #else
//  #define TTY_QBM_DATA_LEN            QBM_TTY_XXX_DATA_LEN
//  #define TTY_QBM_DATA_TYPE           QBM_TYPE_TTY_INT
//  #define TTY_QBM_DES_GET_DATAPTR     QBM_DES_GET_DATAPTR
//  #define TTY_QBM_DES_GET_DATALEN     QBM_DES_GET_DATALEN
//  #define TTY_QBM_DES_SET_DATALEN     QBM_DES_SET_DATALEN
//  #endif

extern void dbg_print(char *fmt,...);

#if TTY_CONSOLE_TRACE_ENABLED==1
    /*
     * Print indexed trace to console.
     */
    #if defined(__MTK_TARGET__)
        //#define tty_console_trace dbg_print
        #define tty_console_trace dbg_print
        #define TTY_NEW_LINE "\r\n"
    #else
        #define tty_console_trace dbg_print
        #define TTY_NEW_LINE "\n"
    #endif

    #define tty_trace_error(...) tty_console_trace(__VA_ARGS__)
    #define tty_trace_info(...)  tty_console_trace(__VA_ARGS__)

    #define BEGIN_TRACE_MAP(_mod)
    #define TRC_MSG(_msg_index, _fmt) static const char _msg_index [] = _fmt TTY_NEW_LINE;
    #define END_TRACE_MAP(_mod)
#else
    /*
     * Use DHL logging.
     */
    #ifndef __MAUI_BASIC__
        #define tty_trace_error(...)                                          \
            do{                                                               \
                if(INT_QueryExceptionStatus() == KAL_FALSE)                   \
                {                                                             \
                    dhl_trace(TRACE_ERROR, DHL_USER_FLAG_NONE, __VA_ARGS__);  \
                }                                                             \
            }while(0)
            
        #define tty_trace_info(...)                                           \
            do{                                                               \
                if(INT_QueryExceptionStatus() == KAL_FALSE)                   \
                {                                                             \
                    dhl_trace(TRACE_INFO, DHL_USER_FLAG_NONE, __VA_ARGS__);   \
                }                                                             \
            }while(0)
            
        #define tty_trace_func(...)                                           \
            do{                                                               \
                if(INT_QueryExceptionStatus() == KAL_FALSE)                   \
                {                                                             \
                    dhl_trace(TRACE_FUNC, DHL_USER_FLAG_NONE, __VA_ARGS__);   \
                }                                                             \
            }while(0)
    #else
        #define tty_trace_error(...)
        #define tty_trace_info(...)
        #define tty_trace_func(...)
    #endif
#endif /* TTY_CONSOLE_TRACE_ENABLED */

#ifndef __MAUI_BASIC__
#include "tty_trace.h"
#endif

/* Macros */
/* ==================================================================================================== */
#ifdef ATEST_SYS_TTYCORE
    extern kal_bool ut_assert_flag;

    #ifdef ASSERT
    #undef ASSERT
    #endif
    //#define ASSERT(x) do{ if (x) ut_assert_flag = KAL_TRUE; }while(0)
    void ASSERT(int x) {
        if (!x) {
            ut_assert_flag = KAL_TRUE;
        }
    }
#endif
#define VAR_MSG_ASSERT(var_msg) do{int var_msg=0; ASSERT(var_msg);} while(0)

#ifdef __TTY_DBG_MODE__
#define DBG_ASSERT(expr)    ASSERT(expr)
#define TTY_CHECK_CONTEXT_ENABLED 1
#else
#define DBG_ASSERT(expr)
#define TTY_CHECK_CONTEXT_ENABLED 0
#endif

#define TTY_HWITC_ENABLE (1)
#if defined(TTY_HWITC_ENABLE)
  #define TTY_SPIN_LOCK(_s) kal_hrt_take_itc_lock(KAL_ITC_TTY, KAL_INFINITE_WAIT)
  #define TTY_SPIN_UNLOCK(_s) kal_hrt_give_itc_lock(KAL_ITC_TTY)
#else
  #define TTY_SPIN_LOCK(_s) kal_take_spinlock(_s, KAL_INFINITE_WAIT)
  #define TTY_SPIN_UNLOCK(_s) kal_give_spinlock(_s)
#endif

#define TTY_CHECK_HANDLE(handle) \
    do{ \
        if (handle == STATUS_INVALID_DEVICE) {return STATUS_FAIL;} \
        if (!DCL_UART_IS_HANDLE_MAGIC(handle)) {tty_trace_error(TTY_TR_INVALID_HANDLE, __LINE__, handle, kal_get_active_module_id());return STATUS_INVALID_DCL_HANDLE;} \
    }while(0)

#define TTY_CHECK_DEV_IS_READY(dev) \
    do{ \
        /* Check if the driver callback is registered */ \
        if (dev >= UART_DEV_CNT || dev < 0 || !tty_mgmt_info[dev].active) \
        { \
            tty_trace_error(TTY_TR_DEV_DRV_NOT_RDY, __LINE__, dev, kal_get_active_module_id()); \
            return STATUS_DEVICE_NOT_EXIST; \
        } \
    }while(0)

#define TTY_CHECK_DEV_VALID(dev) \
            do{ \
                if (dev >= UART_DEV_CNT || dev < 0) {tty_trace_error(TTY_TR_DEV_NOT_VALID, __LINE__, dev, kal_get_active_module_id());return STATUS_INVALID_DEVICE;} \
            }while(0)

#if TTY_CHECK_CONTEXT_ENABLED==1
#define TTY_CHECK_RUN_IN_HISR(dev) do{if (tty_mgmt_info[dev].owner_id != MOD_DRV_DBG/*dbg_print is exception*/ && kal_if_hisr()){VAR_MSG_ASSERT(TTY_it_runs_in_hisr);}} while(0)
#define TTY_CHECK_ACTIVE_MOD(dev) \
    do{ \
        if (tty_mgmt_info[dev].owner_id != MOD_DRV_DBG/*dbg_print is exception*/ \
            && tty_mgmt_info[dev].owner_id != MOD_DHL \
            && tty_mgmt_info[dev].owner_id != MOD_DHL_READER \
            && tty_mgmt_info[dev].opened \
            && tty_mgmt_info[dev].owner_id != kal_get_active_module_id()) { \
            VAR_MSG_ASSERT(TTY_Active_module_id_not_match); \
        } \
    }while(0)
#else
#define TTY_CHECK_RUN_IN_HISR(dev)
#define TTY_CHECK_ACTIVE_MOD(dev)
#endif

#define TTY_CONV_FLUSH_TX(cnt_thre) \
    count = 0; \
    if (TTY_IS_CONVENTIONAL_TX(device)) { \
        while (1) { \
            if (tty_mgmt_info[device].tx_gpd_num_used == 0) { \
                break; \
            } \
            kal_sleep_task(KAL_TICKS_10_MSEC/2); \
            if (++count > cnt_thre) { \
                VAR_MSG_ASSERT(flush_tx_cmd_too_long); \
            } \
        } \
    }

#define TTY_CONV_FLUSH_RX(cnt_thre) \
    count = 0; \
    if (TTY_IS_CONVENTIONAL_RX(device)) { \
        while (1) { \
            if (tty_mgmt_info[device].rx_gpd_num_assigned == 0) { \
                break; \
            } \
            kal_sleep_task(KAL_TICKS_10_MSEC/2); \
            if (++count > cnt_thre) { \
                VAR_MSG_ASSERT(flush_rx_cmd_too_long); \
            } \
        } \
    }



#define TTY_IS_CONVENTIONAL_TX(dev) (!(tty_mgmt_info[dev].flag & TTY_FLAG_NEW_TX))
#define TTY_IS_CONVENTIONAL_RX(dev) (!(tty_mgmt_info[dev].flag & TTY_FLAG_NEW_RX))
#define TTY_DRV_IS_ATTACHED(dev)    (tty_mgmt_info[dev].drv_state == DRV_ST_ATTACHED)

#define DCL_UART_MAGIC_NUM  0x40000000
#define DCL_UART_IS_HANDLE_MAGIC(handl_) ((handl_)& DCL_UART_MAGIC_NUM)
#define DCL_UART_GET_DEV(handle_) ((DCL_DEV)((handle_) & (~DCL_UART_MAGIC_NUM)))

#define UART_DEV_CNT  (uart_max_port - uart_port1 + 1) //subtract uart1, in case uart1 != 0 in future.

#define TTY_BC_TX_GPD_MAX_NUM       2   /* Tx Max GPD number for backward-compatible */
#define GPD_NUM_FOR_TTY     100

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#define TTY_IS_BUFF_PORT(dev) ((tty_mgmt_info[dev].drv_type == BUFF_DRV_TYPE))  
#define TTY_MIN(_a, _b) (((_a) <= (_b)) ? (_a) : (_b))

/* Structure define & Global variable */
/* ==================================================================================================== */
typedef struct _tty_port_mgmt
{
    /* for buffer type driver*/
    DCL_UINT32 drv_type;
    kal_spinlockid spinLock;         // each device has its own lock
    DCL_UINT32 rx_allow_len;         //Indicates downlink mtu size of HIF
    qbm_gpd *rx_gpd;
    DCL_UINT32 rx_gpd_num_assigned;
    DCL_UINT32 tx_gpd_num_used;
    /* for backward-compatible */
    DCL_UART_TX_FUNC conv_tx_cb;
    DCL_UART_RX_FUNC conv_rx_cb;
    DCL_UINT32 dev_type;             //record device type
    DCL_UINT32 qbm_data_len;         //supported GPD type length
    DCL_UINT32 flag;
    tty_drv_state_change_cb drv_state_change_cb;
    DCL_UINT32 qbm_data_type;        //supported GPD type
    tty_rx_cb rx_cb;
    tty_txdone_cb tx_done_cb;
    SeriPort_HANLDER_CB sp_handler_cb;

    module_type pending_owner;
    DCL_UINT16 rx_buf_offset;        // it indicates the buffer offset of rx_gpd (data in rx_gpd before offset has been received)
    DCL_UINT16 chunk_size;
    module_type owner_id;

    tty_drv_state_e drv_state;       // 1: driver attach; 0: driver detach
    /* For legacy USBcore solution: driver attach event may be later than user traffic*/
    DCL_BOOL tx_not_rdy;
    DCL_BOOL opened;                 // opened by upper module
    DCL_BOOL init_by_new_mod;
    DCL_BOOL rx_up_mod_wait;         //add for buffer device
    DCL_BOOL tx_up_mod_wait;
    DCL_BOOL flush_rx;
    DCL_BOOL flush_tx;
    DCL_BOOL no_indication;          //User can set attribute to disable receiving ILM through SIO_SET_INDICATION
    DCL_BOOL active;                 // registered uart handler callback by driver
    /*store flag if user send SIO_CMD_OPEN or register callback before driver register CB*/
    DCL_BOOL early_tx_done_cb_req;
    DCL_BOOL early_open_req;
} tty_port_mgmt;

typedef enum
{
    GPD_DRV_TYPE,
    BUFF_DRV_TYPE,
}tty_driver_type;

typedef struct _tty_dev_info
{
    SIO_TYPE_T dev_type;
    DCL_UINT32 buff_type;
    DCL_UINT32 buff_data_len;
    tty_driver_type drv_type;
}tty_dev_info;

#define NOT_DEFINED_TYPE 0xFFFFFFFF
#define NOT_DEFINED_LENGTH 0xFFFFFFFF

static tty_dev_info tty_dev_info_tbl[DCL_UART_DEV_TYPE_MAX] = {
#if defined(MT6752) && defined(__MD2__)
    {DCL_UART_TYPE,             QBM_TYPE_TTY_INT  ,     QBM_TTY_XXX_DATA_LEN    ,   BUFF_DRV_TYPE},     //6752 MD2 uart only support buffer mode
#else
    {DCL_UART_TYPE,             QBM_TYPE_TTY_INT  ,     QBM_TTY_XXX_DATA_LEN    ,   GPD_DRV_TYPE},
#endif 
    {DCL_UART_USB_TYPE,         QBM_TYPE_TTY_INT  ,     QBM_TTY_XXX_DATA_LEN    ,   GPD_DRV_TYPE},
    {DCL_UART_BLUETOOTH_TYPE,   QBM_TYPE_TTY_INT  ,     QBM_TTY_XXX_DATA_LEN    ,   BUFF_DRV_TYPE},     //not checked
    {DCL_UART_SPPA_TYPE,        QBM_TYPE_TTY_INT  ,     QBM_TTY_XXX_DATA_LEN    ,   BUFF_DRV_TYPE},     //not checked
    {DCL_UART_CMUX_TYPE,        NOT_DEFINED_TYPE  ,     NOT_DEFINED_LENGTH      ,   BUFF_DRV_TYPE},    
    {DCL_UART_CCCI_TYPE,        QBM_TYPE_CCCI_COMM,     QBM_CCCI_COMM_DATA_LEN  ,   GPD_DRV_TYPE},
    {DCL_UART_CCIF_TYPE,        NOT_DEFINED_TYPE,       NOT_DEFINED_LENGTH      ,   BUFF_DRV_TYPE},
    {DCL_UART_DCC_TYPE,         QBM_TYPE_TTY_INT  ,     QBM_TTY_XXX_DATA_LEN    ,   BUFF_DRV_TYPE},     //not checked
    {DCL_UART_LOGACC_TYPE,      QBM_TYPE_TTY_INT  ,     QBM_TTY_XXX_DATA_LEN    ,   BUFF_DRV_TYPE},     //not checked
    {DCL_UART_LMU_TYPE,         QBM_TYPE_TTY_INT  ,     QBM_TTY_XXX_DATA_LEN    ,   BUFF_DRV_TYPE},     //not checked
    {DCL_UART_SP_USB_TYPE,      QBM_TYPE_TTY_INT  ,     QBM_TTY_XXX_DATA_LEN    ,   BUFF_DRV_TYPE},     //not checked
    {DCL_UART_MINI_LOG_TYPE,    QBM_TYPE_TTY_INT  ,     QBM_TTY_XXX_DATA_LEN    ,   BUFF_DRV_TYPE},     //not checked
    {DCL_UART_MTAD_TYPE,        QBM_TYPE_TTY_INT  ,     QBM_TTY_XXX_DATA_LEN    ,   GPD_DRV_TYPE},
};


static tty_port_mgmt tty_mgmt_info[UART_DEV_CNT];

/* Internal used API declaration */
/* ==================================================================================================== */
static DCL_STATUS _DclSerialPort_UpModuleReinit(DCL_DEV device, module_type module_id, int flag);
static DCL_STATUS _DclSerialPort_UpModuleRegisterCb(DCL_DEV device, tty_rx_cb rx_cb, tty_txdone_cb tx_done_cb, tty_drv_state_change_cb drv_state_change_cb);


/* Internal used API */
/* ==================================================================================================== */
static void DEVDRV_LS_DRAM_EX_ROCODE 
TTY_QBM_DES_SET_DATALEN(void* gpd, kal_uint32 data_len)
{
    void* bd = NULL;

    ASSERT(NULL != gpd);
    if(0 != QBM_DES_GET_BDP(gpd))
    {
        //4 <case> GPD->BD->BUFF
        bd = QBM_DES_GET_DATAPTR(gpd);
        ASSERT(NULL!=bd);
        QBM_DES_SET_DATALEN(bd, data_len);
        qbm_cal_set_checksum((kal_uint8 *)bd);
    }

    QBM_DES_SET_DATALEN(gpd, data_len);
    qbm_cal_set_checksum((kal_uint8 *)gpd);
}

static DCL_UINT32 DEVDRV_LS_DRAM_EX_ROCODE 
TTY_QBM_DES_GET_DATALEN(void* gpd)
{
    void* bd = NULL;
    DCL_UINT32 data_len = 0;

    ASSERT(NULL!=gpd);
    if(0 != QBM_DES_GET_BDP(gpd)){
        //4 <case 1> GPD->BD->BUFF
        bd = QBM_DES_GET_DATAPTR(gpd);
        ASSERT(NULL!=bd);
        data_len = QBM_DES_GET_DATALEN(bd);
    }else{
        //4 <case 2> GPD->BUFF
        data_len = QBM_DES_GET_DATALEN(gpd);
    }
    return data_len;
}

static void* DEVDRV_LS_DRAM_EX_ROCODE
TTY_QBM_DES_GET_DATAPTR(void* gpd)
{
    void* bd = NULL;
    void* data_ptr = NULL;
    
    ASSERT(NULL!=gpd);
    if(0 != QBM_DES_GET_BDP(gpd)){
        //4 <case 1> GPD->BD->BUFF
        bd = QBM_DES_GET_DATAPTR(gpd);
        ASSERT(NULL!=bd);
        data_ptr = QBM_DES_GET_DATAPTR(bd);
    }else{
        //4 <case 2> GPD->BUFF        
        data_ptr = QBM_DES_GET_DATAPTR(gpd);
    }

    ASSERT(NULL!=data_ptr);
    return data_ptr;
}

static void DEVDRV_LS_DRAM_EX_ROCODE
_tty_update_buff_info_from_port(DCL_DEV device, SIO_TYPE_T dev_type)
{
    DCL_UINT8 i;

    for( i = 0; i < DCL_UART_DEV_TYPE_MAX; i++)
    {
        if(tty_dev_info_tbl[i].dev_type == dev_type)
        {
            tty_mgmt_info[device].qbm_data_type = tty_dev_info_tbl[i].buff_type;
            tty_mgmt_info[device].qbm_data_len = tty_dev_info_tbl[i].buff_data_len;
            tty_mgmt_info[device].drv_type = tty_dev_info_tbl[i].drv_type;
            return;
        }
    }
    ASSERT(i < DCL_UART_DEV_TYPE_MAX);
    return; 
}

void DEVDRV_LS_DRAM_EX_ROCODE
_tty_send_ilm(
    DCL_DEV             device,
    module_type         source_id,
    msg_type            msg_id)
{
    void *port_ptr = 0;

    /*New feature: some ports may not need ilm indication*/
    if(tty_mgmt_info[device].no_indication == 1)
    {
        return;
    }

    switch(msg_id)
    {
        case MSG_ID_UART_READY_TO_READ_IND:
            {
                uart_ready_to_read_ind_struct *tmp;    
                tmp = (uart_ready_to_read_ind_struct *)
                   construct_local_para(sizeof(uart_ready_to_read_ind_struct),TD_UL);
                tmp->port = device;
                port_ptr = tmp;
            }
            break;
        case MSG_ID_UART_READY_TO_WRITE_IND:
            {
                uart_ready_to_write_ind_struct *tmp;
                tmp = (uart_ready_to_write_ind_struct *)
                construct_local_para(sizeof(uart_ready_to_write_ind_struct),TD_UL);
                tmp->port = device;
                port_ptr = tmp;
            }
            break;
        case MSG_ID_UART_DSR_CHANGE_IND:
            {
                uart_dsr_change_ind_struct *tmp;
                tmp = (uart_dsr_change_ind_struct *)
                construct_local_para(sizeof(uart_dsr_change_ind_struct),TD_UL);
                tmp->port = device;
                port_ptr = tmp;
            }
            break;
        case MSG_ID_UART_ESCAPE_DETECTED_IND:
            {
                uart_escape_detected_ind_struct *tmp;
                tmp = (uart_escape_detected_ind_struct *)
                construct_local_para(sizeof(uart_escape_detected_ind_struct),TD_UL);
                tmp->port = device;
                port_ptr = tmp;
            }
            break;
        case MSG_ID_UART_PLUGOUT_IND:
            {
                uart_plugout_ind_struct *tmp;
                tmp = (uart_plugout_ind_struct *)
                construct_local_para(sizeof(uart_plugout_ind_struct),TD_RESET);
                tmp->port = device;
                port_ptr = tmp;
            }
            break;
        case MSG_ID_UART_PLUGIN_IND:
            {
                uart_plugin_ind_struct *tmp;
                tmp = (uart_plugin_ind_struct *)
                construct_local_para(sizeof(uart_plugin_ind_struct),TD_RESET);
                tmp->port = device;
                port_ptr = tmp;
            }
            break;
        default:
            {
                /* Print error log */
                return;
            }
    }

    msg_send5(source_id,                           // source module ID
                 tty_mgmt_info[device].owner_id,   // destination module ID
                 DRIVER_PS_SAP,                    // sap ID
                 msg_id,                           // msg ID
                 port_ptr                          // local_para_struct *
                 );

}

#ifdef __TTY_DBG_MODE__
/**
 *  @brief      Check if any gpd length is zero
 *  @result     none
 */
static void DEVDRV_LS_DRAM_EX_ROCODE
_tty_gpd_zero_len_check(
    tty_io_request_t    *ior)
{
    tty_io_request_t *ior_tmp = ior;

    do {
        void *gpd = ior_tmp->first_gpd;

        while (gpd != ior_tmp->last_gpd) {
            ASSERT(TTY_QBM_DES_GET_DATALEN(gpd));
            gpd = QBM_DES_GET_NEXT(gpd);
        }
        ASSERT(TTY_QBM_DES_GET_DATALEN(gpd));
    } while ((ior_tmp = ior_tmp->next_request) != NULL);
}
#endif

/**
 *  @brief      Free all gpds of ior
 *  @result     total number of free gpd
 */
static DCL_UINT32 DEVDRV_LS_DRAM_EX_ROCODE
_tty_free_ior(
    tty_io_request_t    *ior)
{
    DCL_UINT32 number = 0;

    if (ior) {
        do {
            number += qbmt_dest_q(ior->first_gpd, ior->last_gpd);
        } while ((ior = ior->next_request) != NULL);
    }

    return number;
}

/*
    _tty_rx_cb is used for backward-compatible.
    In TTY Core design, only one rx ior is prepared for Rx receiving in conventional Rx mode.
    If rx_gpd is callbacked and when conventional upper module send SIO_CMD_GET_BYTES command to receive data, _tty_rx_cb won't be called until the only
    one rx_gpd is re-assigned to driver.
    Thus rx_gpd don't need mutex protection.
*/
DCL_STATUS DEVDRV_LS_DRAM_EX_ROCODE
_tty_rx_cb(
    DCL_HANDLE          handle,
    module_type         source_id,
    tty_io_request_t    *rx_ior)
{
    DCL_DEV device;
    void *gpd_tmp;
    tty_io_request_t *ior_tmp;

    device = DCL_UART_GET_DEV(handle);

    if (!tty_mgmt_info[device].flush_rx) {
        /* global rx gpd must be NULL when rx callback of non-flush command is called */
        ASSERT(!tty_mgmt_info[device].rx_gpd);
    }

    /* 
        The rx callback is called by flush done :
        <1> there is a next request of rx_ior
        <2> there are 2 gpd of rx_ior
    */
    if (rx_ior->next_request)
    {
        ASSERT(tty_mgmt_info[device].flush_rx);
        ASSERT(rx_ior->first_gpd == rx_ior->last_gpd);
        ASSERT(rx_ior->next_request->first_gpd == rx_ior->next_request->last_gpd);
        ior_tmp = rx_ior->next_request;
        rx_ior->next_request = NULL;
        QBM_FREE_ONE(ior_tmp->first_gpd);
        TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
        ASSERT(tty_mgmt_info[device].rx_gpd_num_assigned >= 1);
        tty_mgmt_info[device].rx_gpd_num_assigned --;
        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
    } else if (rx_ior->first_gpd != rx_ior->last_gpd)
    {
        ASSERT(tty_mgmt_info[device].flush_rx);

        // tj.chang, 2011/12/27: We should not promise the length of last_gpd is 0.
//      ASSERT(TTY_QBM_DES_GET_DATALEN(rx_ior->last_gpd) == 0);
        ASSERT(QBM_DES_GET_NEXT(rx_ior->first_gpd) == rx_ior->last_gpd);
        gpd_tmp = rx_ior->last_gpd;
        rx_ior->last_gpd = rx_ior->first_gpd;
        QBM_FREE_ONE(gpd_tmp);
        TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
        ASSERT(tty_mgmt_info[device].rx_gpd_num_assigned >= 1);
        tty_mgmt_info[device].rx_gpd_num_assigned --;
        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
    }
    
    if (!tty_mgmt_info[device].flush_rx && TTY_QBM_DES_GET_DATALEN(rx_ior->first_gpd) > 0)
    {
        TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
        tty_mgmt_info[device].rx_gpd = rx_ior->first_gpd;
        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
        
        //change start for ALPS04065656
        //handling race condition between UL data gpd and clr rx buff. 
        if(tty_mgmt_info[device].flush_rx) {
            void *rx_gpd;
            TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
            if(tty_mgmt_info[device].rx_gpd) {
                rx_gpd = tty_mgmt_info[device].rx_gpd;
                tty_mgmt_info[device].rx_gpd = NULL;
                tty_mgmt_info[device].rx_buf_offset = 0;
                tty_mgmt_info[device].rx_gpd_num_assigned--;
                TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                QBM_FREE_ONE(rx_gpd);
            } else {
                TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
            }
            
        } else {
            //change end for ALPS04065656
            /* Inform upper layer module readyToRead */
            if (tty_mgmt_info[device].conv_rx_cb) {
                tty_mgmt_info[device].conv_rx_cb(device);
            } else {
                _tty_send_ilm(device, source_id, MSG_ID_UART_READY_TO_READ_IND);
            }
        }
    } else
    {   /* The rx callback is called by clear tx/rx buffer (flush) command */
        QBM_FREE_ONE(rx_ior->first_gpd);
        TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
        ASSERT(tty_mgmt_info[device].rx_gpd_num_assigned >= 1);
        tty_mgmt_info[device].rx_gpd_num_assigned --;
        if (tty_mgmt_info[device].rx_gpd_num_assigned == 0) {
            /* clear flush_rx flag if all rx_gpd are free */
            tty_mgmt_info[device].flush_rx = 0;
        }
        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
    }

    return STATUS_OK;
}

/*
    _tty_rx_buff_cb is used for backward-compatible buffer mode driver.
    This callback is only used for conventional user on buffer mode port.
    The main task of this callback is sending ILM to tty user.
    (Flush RX shall not go there.)
*/
DCL_STATUS DEVDRV_LS_DRAM_EX_ROCODE
_tty_rx_buff_cb(
    DCL_HANDLE          handle,
    module_type         source_id,
    tty_io_request_t    *rx_ior)
{
    DCL_DEV device;

    device = DCL_UART_GET_DEV(handle);

    /*Current design does not return data through callback*/
    ASSERT(rx_ior == NULL);

    TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
    if (tty_mgmt_info[device].rx_up_mod_wait)
    { 
        tty_mgmt_info[device].rx_up_mod_wait = 0;
        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
        if (tty_mgmt_info[device].conv_rx_cb) {
            tty_mgmt_info[device].conv_rx_cb(device);
        } else {
            _tty_send_ilm(device, source_id, MSG_ID_UART_READY_TO_READ_IND);
        }
    }
    else
    {
        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
    }
    return STATUS_OK;
}


DCL_STATUS DEVDRV_LS_DRAM_EX_ROCODE
_tty_tx_done_cb(
    DCL_HANDLE          handle,
    module_type         source_id,
    tty_io_request_t    *tx_ior)
{
    DCL_DEV device;
    DCL_UINT32 number;

    device = DCL_UART_GET_DEV(handle);

    if (tx_ior) {
        number = _tty_free_ior(tx_ior);

        TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
        ASSERT(tty_mgmt_info[device].tx_gpd_num_used >= number);
        tty_mgmt_info[device].tx_gpd_num_used -= number;
        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);

        if (!tty_mgmt_info[device].flush_tx)
        {
            TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
            if (tty_mgmt_info[device].tx_up_mod_wait)
            {
                TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                if (tty_mgmt_info[device].conv_tx_cb) {
                    tty_mgmt_info[device].conv_tx_cb(device);
                } else {
                    _tty_send_ilm(device, source_id, MSG_ID_UART_READY_TO_WRITE_IND);
                }
                TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
                tty_mgmt_info[device].tx_up_mod_wait = 0;
                TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
            }
            else
            {
                TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
            }

        } else {
            TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
            if (tty_mgmt_info[device].tx_gpd_num_used == 0) {
                /* clear flush_tx flag if all tx_gpd are free */
                tty_mgmt_info[device].flush_tx = 0;
            }
            TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
        }
    } else {
        /* print error log - tx_ior can't be null */
        tty_trace_error(TTY_TR_TX_IOR_IS_NULL, device, source_id);
        ASSERT(tx_ior);
        return STATUS_FAIL;
    }

    return STATUS_OK;
}

/*
    _tty_tx_buff_done_cb is used for backward-compatible buffer mode driver.
    This callback is only used for conventional user on buffer mode port.
    The main task of this callback is sending ILM to tty user.
    (Flush TX shall not go there.)
*/
DCL_STATUS DEVDRV_LS_DRAM_EX_ROCODE
_tty_tx_buff_done_cb(
    DCL_HANDLE          handle,
    module_type         source_id,
    tty_io_request_t    *tx_ior)
{
    DCL_DEV device;

    device = DCL_UART_GET_DEV(handle);

    /*Current design does not return data through callback*/
    ASSERT(tx_ior == NULL);

     /* 
     * This function is invoked when lower driver finish the TX.
     * check up_mod_wait to send the indication message
     */
    TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
    if (tty_mgmt_info[device].tx_up_mod_wait)
    { 
        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
        if (tty_mgmt_info[device].conv_tx_cb) {
            tty_mgmt_info[device].conv_tx_cb(device);
        } else {
            _tty_send_ilm(device, source_id, MSG_ID_UART_READY_TO_WRITE_IND);
        }
        TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
        tty_mgmt_info[device].tx_up_mod_wait = 0;
        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
    }
    else
    {
        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
    }

    return STATUS_OK;
}

void DEVDRV_LS_DRAM_EX_ROCODE
_cal_and_set_rx_allow_len(
    DCL_DEV      device,
    DCL_UINT16   chunk_size)
{
    DCL_HANDLE handle;
    UART_CTRL_GET_MTU_SIZE_T ur_ctrl_get_mtu_size;
    
    handle = DclSerialPort_Open(device, 0);
    
    if(chunk_size == 1)   //no chunk size restriction
    {
        DclSerialPort_Control(handle, TTY_CMD_GET_MTU_SIZE, (DCL_CTRL_DATA_T*)&ur_ctrl_get_mtu_size);
        tty_mgmt_info[device].rx_allow_len = TTY_MIN(ur_ctrl_get_mtu_size.ulmtu_sz, tty_mgmt_info[device].qbm_data_len);
    }
    else
    {
        tty_mgmt_info[device].rx_allow_len = chunk_size;
    }

    ASSERT(tty_mgmt_info[device].rx_allow_len >= chunk_size);

    tty_trace_info(TTY_TR_DRV_RX_ALLOW_LEN, device, tty_mgmt_info[device].rx_allow_len);
    return;
}


DCL_STATUS DEVDRV_LS_DRAM_EX_ROCODE
_tty_conv_assign_rx_gpd_to_drv(
    DCL_DEV             device)
{
    DCL_STATUS result;
    UART_CTRL_ASSIGN_RX_IOR_T ur_ctrl_assign_rxior;
    tty_io_request_t *rx_ior;
    void *rx_gpd_first, *rx_gpd_last;
    DCL_UINT32 remain_rx_gpd_num;
    DCL_UINT32 alloc_num;

    TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
    if (!tty_mgmt_info[device].flush_rx && tty_mgmt_info[device].rx_gpd_num_assigned < 2 /*one for tailed gpd, another for real data receiving*/)
    {
        remain_rx_gpd_num = 2 - tty_mgmt_info[device].rx_gpd_num_assigned;
        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);

        //alloc_num = qbmt_alloc_q_no_tail(TTY_QBM_DATA_TYPE, remain_rx_gpd_num, &rx_gpd_first, &rx_gpd_last);
        alloc_num = qbmt_alloc_q_no_tail(tty_mgmt_info[device].qbm_data_type, remain_rx_gpd_num, &rx_gpd_first, &rx_gpd_last);
        if (alloc_num != remain_rx_gpd_num)
        {
            tty_trace_error(TTY_TR_GPD_EXHAUST, device, kal_get_active_module_id());
            VAR_MSG_ASSERT(tty_internal_qbm_exhaust);
            return STATUS_FAIL;
        }
        
        //ASSERT(TTY_QBM_DATA_LEN >= tty_mgmt_info[device].chunk_size);
        ASSERT(tty_mgmt_info[device].qbm_data_len >= tty_mgmt_info[device].chunk_size);

        /* First gpd */
        ASSERT(QBM_DES_GET_HWO(rx_gpd_first));
        QBM_DES_SET_ALLOW_LEN(rx_gpd_first, tty_mgmt_info[device].rx_allow_len);
        qbm_cal_set_checksum(rx_gpd_first);
        QBM_CACHE_FLUSH(rx_gpd_first, sizeof(qbm_gpd));

        /* Last gpd */
        if (alloc_num == 2) {
            ASSERT(QBM_DES_GET_HWO(rx_gpd_last));
            QBM_DES_SET_ALLOW_LEN(rx_gpd_last, tty_mgmt_info[device].rx_allow_len);
            qbm_cal_set_checksum(rx_gpd_last);
            QBM_CACHE_FLUSH(rx_gpd_last, sizeof(qbm_gpd));
        }
        
        rx_ior = (tty_io_request_t*)QBM_DES_GET_SW_CTRL_FIELD(rx_gpd_first);
        rx_ior->first_gpd = rx_gpd_first;
        rx_ior->last_gpd = rx_gpd_last;
        rx_ior->next_request = NULL;

        ur_ctrl_assign_rxior.u4OwnerId = tty_mgmt_info[device].owner_id;
        ur_ctrl_assign_rxior.ior = rx_ior;
        result = tty_mgmt_info[device].sp_handler_cb(device, TTY_CMD_ASSIGN_RX_IOR, (DCL_CTRL_DATA_T *)&ur_ctrl_assign_rxior);
        if (result != STATUS_OK) {
            /* command failed */
            _tty_free_ior(rx_ior);
            tty_trace_error(TTY_TR_CMD_ERR_ASSIGN_RX_IOR, device, result, kal_get_active_module_id());
            return result;
        }

        TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
        tty_mgmt_info[device].rx_gpd_num_assigned += remain_rx_gpd_num;
        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
    } else {
        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
    }

    return STATUS_OK;
}

DCL_STATUS DEVDRV_LS_DRAM_EX_ROCODE
_tty_conv_drv_state_change_cb(
    DCL_HANDLE handle, 
    tty_drv_state_e state)
{
    DCL_DEV device;

    device = DCL_UART_GET_DEV(handle);

    switch(state)
    {
        case DRV_ST_DETACHED: 
        {
            _tty_send_ilm(device, MOD_TTY, MSG_ID_UART_PLUGOUT_IND);
            break;
        }
        case DRV_ST_ATTACHED:
        {
            _tty_send_ilm(device, MOD_TTY, MSG_ID_UART_PLUGIN_IND);
            break;
        }
        default:
        {
            ASSERT(0);
            break;
        }
    }

    return STATUS_OK;
}


/* External used API */
/* ==================================================================================================== */

DCL_STATUS DEVDRV_LS_DRAM_EX_ROCODE
DclSerialPort_Initialize(void)
{
#if !defined(TTY_HWITC_ENABLE)
    kal_uint32 i;
    kal_char tty_lock_name[50];
#endif    
    /* QBM number for TTY internal used must be larger than or equal to max possible gpd number for rx data path use */
    /* we dont need to reserve GPD buffer for virtual port, because the driver mode of virtual port is buffer mode*/
    //ASSERT(QBM_NUM_TTY_INT >= ((UART_DEV_CNT-CMUX_VP_NUM)*2/*2 buffer for Rx*/+(UART_DEV_CNT-CMUX_VP_NUM)*TTY_BC_TX_GPD_MAX_NUM/*Tx*/));
    ASSERT(QBM_NUM_TTY_INT >= ((UART_DEV_CNT-CMUX_VP_NUM)*2/*2 buffer for Rx*/));
    
    /*Init tty_mgmt_info instance*/
    kal_mem_set(tty_mgmt_info, 0, sizeof(tty_port_mgmt)*UART_DEV_CNT);

    /* Init lock resource */
#if !defined(TTY_HWITC_ENABLE) 
    /* HW ITC don't need create process, but spinlock needs */
    for(i = 0; i < UART_DEV_CNT; i++)
    {
        sprintf(tty_lock_name, "TTYSPINLOCK_%d", i);
        tty_mgmt_info[i].spinLock = kal_create_spinlock(tty_lock_name);
        if(tty_mgmt_info[i].spinLock == NULL) ASSERT(0);
    }
#endif    
    return STATUS_OK;
}

DCL_HANDLE DEVDRV_LS_DRAM_EX_ROCODE
DclSerialPort_Open(
    DCL_DEV             dev,
    DCL_FLAGS           flags)
{
    
    if ((dev<uart_port1) ||(dev>uart_max_port)) {
        tty_trace_error(TTY_TR_OPEN_ERR, dev, kal_get_active_module_id());
        return STATUS_INVALID_DEVICE;
    }

    if (uart_port_null == dev) {
        tty_trace_error(TTY_TR_OPEN_ERR, dev, kal_get_active_module_id());
        return STATUS_INVALID_DEVICE;
    }

    return (DCL_UART_MAGIC_NUM | dev);
}

DCL_STATUS DEVDRV_LS_DRAM_EX_ROCODE
DclSerialPort_Close(
    DCL_HANDLE          handle)
{
    return STATUS_OK;
}

DCL_STATUS DEVDRV_LS_DRAM_EX_ROCODE
DclSerialPort_Configure(
    DCL_HANDLE          handle,
    DCL_CONFIGURE_T     *configure)
{
    return STATUS_OK;
}


/*!
 *  @brief  If upper layer module execute DclSerialPort_UpModuleInit
 *              ---> New Module Init
 *              ---> In DclSerialPort_UpModuleInit, it will help send SIO_CMD_OPEN command
 *          If upper layer module execute DclSerialPort_Control with SIO_CMD_OPEN command without calling DclSerialPort_UpModuleInit
 *              ---> Old module init (for backward compatible)
 */
DCL_STATUS DEVDRV_LS_DRAM_EX_ROCODE
DclSerialPort_Control(
    DCL_HANDLE          handle,
    DCL_CTRL_CMD        cmd,
    DCL_CTRL_DATA_T     *data)
{ 
    DCL_STATUS result;
    DCL_DEV device;

    TTY_CHECK_HANDLE(handle);   
    device = DCL_UART_GET_DEV(handle);
    

    /*20130313:SIO_CMD_OPEN will not check device exist*/
    if (cmd == SIO_CMD_OPEN)
    {
        TTY_CHECK_DEV_VALID(device);
        
        /*If driver has not register yet, store the request*/
        if(!tty_mgmt_info[device].active)
        {
            UART_CTRL_OPEN_T *ur_ctrl_open = &(data->rUARTCtrlOPEN);
            
            TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
            if (tty_mgmt_info[device].early_open_req) {
                    TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                    tty_trace_info(TTY_TR_CMD_OPEN_ALREADY_OPENED, device, kal_get_active_module_id());
                    return STATUS_ALREADY_OPENED;
            }
            tty_mgmt_info[device].early_open_req = 1;
            tty_mgmt_info[device].pending_owner = (module_type) ur_ctrl_open->u4OwenrId;
            TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
            return STATUS_OK;
        }
    }
    else if(cmd == SIO_CMD_CLOSE)
    {
        TTY_CHECK_DEV_VALID(device);
        /*If driver has not register yet, store the request*/
        if(!tty_mgmt_info[device].active)
        {       
            TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
            if (tty_mgmt_info[device].early_open_req) {
                tty_mgmt_info[device].early_open_req = 0;
                tty_mgmt_info[device].pending_owner = MOD_NIL;
                if (tty_mgmt_info[device].early_tx_done_cb_req) 
                {
                    tty_mgmt_info[device].early_tx_done_cb_req = 0;
                }
                //clean info set by UpmoduleInit
                if(tty_mgmt_info[device].init_by_new_mod)
                {
                    tty_mgmt_info[device].init_by_new_mod = 0;
                    tty_mgmt_info[device].owner_id = MOD_NIL;
                    tty_mgmt_info[device].flag = 0;
                }
                TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
            }
            else
            {
                TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                tty_trace_info(TTY_TR_DEV_IS_NOT_OPENED, device, kal_get_active_module_id());
                return STATUS_NOT_OPENED;
            }
            
            return STATUS_OK;
        }
    }
    else
    {
        TTY_CHECK_DEV_IS_READY(device);
    }
#if TTY_AGGRESSIVE_TRACE
    tty_trace_func(TTY_TR_CMD_DCL_CONTROL, device, cmd, kal_get_active_module_id());
#endif

    /* Pre-command Process */
    switch (cmd)
    {
        case SIO_CMD_OPEN:
            {
                TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
                if (tty_mgmt_info[device].opened) {
                    TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                    tty_trace_info(TTY_TR_CMD_OPEN_ALREADY_OPENED, device, kal_get_active_module_id());
                    return STATUS_ALREADY_OPENED;
                }
                tty_mgmt_info[device].opened = 1;
                TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
            }
            break;

        case SIO_CMD_GET_BYTES:
        case SIO_CMD_GET_UART_BYTE:
            {
                UART_CTRL_GET_BYTES_T ur_ctrl_getbytes;
                UART_CTRL_GET_BYTES_T *p_ur_ctrl_getbytes;
                DCL_UINT16 real_data_len;
                DCL_UINT8 *real_data;
                void *rx_gpd;

                if (!TTY_IS_CONVENTIONAL_RX(device)) {
                    return STATUS_INVALID_OPERATION;
                }

                /* If device is buffer port, bypass cmd to driver*/
                if(TTY_IS_BUFF_PORT(device))
                {
                    // TODO:add support for SIO_CMD_GET_UART_BYTE, which is blocking read. 
                    ASSERT(cmd == SIO_CMD_GET_BYTES);
                    break;
                }
                
                /*
                    This area is for conventional RX - backward compatible
                */
                if (cmd == SIO_CMD_GET_UART_BYTE) {
                    UART_CTRL_GET_UART_BYTE_T *p_ur_ctrl_get_uart_byte;
                    p_ur_ctrl_get_uart_byte = &(data->rUARTCtrlGETUARTBYTE);
                    ur_ctrl_getbytes.puBuffaddr = &p_ur_ctrl_get_uart_byte->uByte;
                    ur_ctrl_getbytes.u2Length = 1;
                    p_ur_ctrl_getbytes = &ur_ctrl_getbytes;
                } else {
                    p_ur_ctrl_getbytes = &(data->rUARTCtrlGETBYTES);
                }

                if (TTY_DRV_IS_ATTACHED(device) && !   tty_mgmt_info[device].flush_rx) {
                    _tty_conv_assign_rx_gpd_to_drv(device);
                } else {
                    p_ur_ctrl_getbytes->u2RetSize = 0;                  
                    tty_trace_info(TTY_TR_WRONG_STATE, device, kal_get_active_module_id());
                    return STATUS_ERROR_WRONG_STATE;
                }

                rx_gpd = tty_mgmt_info[device].rx_gpd;
                if (!rx_gpd) {
                    p_ur_ctrl_getbytes->u2RetSize = 0;
#if TTY_AGGRESSIVE_TRACE                    
                    tty_trace_info(TTY_TR_CMD_CONV_RX_NOT_RDY, device, kal_get_active_module_id());
#endif
                } else {
                    real_data = (DCL_UINT8*)TTY_QBM_DES_GET_DATAPTR(rx_gpd) + tty_mgmt_info[device].rx_buf_offset;
                    real_data_len = TTY_QBM_DES_GET_DATALEN(rx_gpd) - tty_mgmt_info[device].rx_buf_offset;

                    if (real_data_len > p_ur_ctrl_getbytes->u2Length) {
                        kal_mem_cpy(p_ur_ctrl_getbytes->puBuffaddr, real_data, p_ur_ctrl_getbytes->u2Length);
                        p_ur_ctrl_getbytes->u2RetSize = p_ur_ctrl_getbytes->u2Length;
                        tty_mgmt_info[device].rx_buf_offset += p_ur_ctrl_getbytes->u2Length;
                    } else {
                        kal_mem_cpy(p_ur_ctrl_getbytes->puBuffaddr, real_data, real_data_len);
                        p_ur_ctrl_getbytes->u2RetSize = real_data_len;

                        tty_mgmt_info[device].rx_buf_offset = 0;
                        TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
                        tty_mgmt_info[device].rx_gpd = NULL;
                        ASSERT(tty_mgmt_info[device].rx_gpd_num_assigned >= 1);
                        tty_mgmt_info[device].rx_gpd_num_assigned --;
                        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                        QBM_FREE_ONE(rx_gpd);

                        /* Re-aasign rx gpd to driver for data receiveing */
                        _tty_conv_assign_rx_gpd_to_drv(device);
                    }
                }
#if TTY_AGGRESSIVE_TRACE                        
                tty_trace_info(TTY_TR_CMD_CONV_RX, device, p_ur_ctrl_getbytes->u2RetSize);
#endif
                return STATUS_OK;
            }
            break;

        case SIO_CMD_PUT_UART_BYTE:
        case SIO_CMD_PUT_UART_BYTES:
        case SIO_CMD_PUT_BYTES:
        case SIO_CMD_PUT_ISR_BYTES:
            {
                UART_CTRL_PUT_BYTES_T ur_ctrl_putbytes;
                UART_CTRL_PUT_BYTES_T *p_ur_ctrl_putbytes;
                DCL_UINT8 *buf_ptr;
                void *tx_gpd;
                hif_io_request_t *tx_ior;
                UART_CTRL_PUT_BYTES_IOR_T ur_ctrl_putbytes_ior;

                if (!TTY_IS_CONVENTIONAL_TX(device)) {
                    return STATUS_INVALID_OPERATION;
                }

                /* If device is buffer port, bypass cmd to driver*/
                if(TTY_IS_BUFF_PORT(device))
                {
                    // TODO:add support for SIO_CMD_PUT_UART_BYTE(S), which are blocking write. 
                    ASSERT(cmd == SIO_CMD_PUT_BYTES);
                    break;
                }
                
                /*
                    This area is for conventional TX
                */
                if (cmd == SIO_CMD_PUT_UART_BYTE) {
                    UART_CTRL_PUT_UART_BYTE_T *p_ur_ctrl_put_uart_byte;
                    p_ur_ctrl_put_uart_byte = &(data->rUARTCtrlPUTUARTBYTE);
                    ur_ctrl_putbytes.puBuffaddr = &p_ur_ctrl_put_uart_byte->uData;
                    ur_ctrl_putbytes.u2Length = 1;
                    p_ur_ctrl_putbytes = &ur_ctrl_putbytes;
                } else if (cmd == SIO_CMD_PUT_UART_BYTES) {
                    UART_CTRL_PUT_UART_BYTES_T *p_ur_ctrl_put_uart_bytes;
                    p_ur_ctrl_put_uart_bytes = &(data->rUARTCtrlPUTUARTBYTES);
                    ur_ctrl_putbytes.puBuffaddr = p_ur_ctrl_put_uart_bytes->puBuffaddr;
                    ur_ctrl_putbytes.u2Length = p_ur_ctrl_put_uart_bytes->u2Length;
                    p_ur_ctrl_putbytes = &ur_ctrl_putbytes;
                } else {
                    p_ur_ctrl_putbytes = &(data->rUARTCtrlPUTBYTES);
                }

                ASSERT(p_ur_ctrl_putbytes->u2Length);

                if (!TTY_DRV_IS_ATTACHED(device) || tty_mgmt_info[device].flush_tx) {
                    p_ur_ctrl_putbytes->u2RetSize = 0;                   
                    tty_trace_info(TTY_TR_WRONG_STATE, device, kal_get_active_module_id());
                    TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
                    tty_mgmt_info[device].tx_not_rdy = 1;
                    TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                    return STATUS_ERROR_WRONG_STATE;
                }

                TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
                if (tty_mgmt_info[device].tx_gpd_num_used >= TTY_BC_TX_GPD_MAX_NUM) {
                    /* tx ior is not yet retrieved, still in driver */
                    p_ur_ctrl_putbytes->u2RetSize = 0;
                    if (cmd != SIO_CMD_PUT_ISR_BYTES) {
                        tty_mgmt_info[device].tx_up_mod_wait = 1;
                    }
                    TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
#if TTY_AGGRESSIVE_TRACE
                    tty_trace_info(TTY_TR_CMD_CONV_TX_NOT_RDY, device, tty_mgmt_info[device].tx_gpd_num_used, kal_get_active_module_id());
#endif
                } else {
                    TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                    //tx_gpd = QBM_ALLOC_ONE(TTY_QBM_DATA_TYPE);
                    tx_gpd = QBM_ALLOC_ONE(tty_mgmt_info[device].qbm_data_type);

                    if (tx_gpd)
                    {
                        TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
                        tty_mgmt_info[device].tx_gpd_num_used ++;
                        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                        
                        tx_ior = (hif_io_request_t*)QBM_DES_GET_SW_CTRL_FIELD(tx_gpd);
                        tx_ior->next_request = NULL;
                        tx_ior->first_gpd = tx_gpd;
                        tx_ior->last_gpd = tx_gpd;

                        ur_ctrl_putbytes_ior.u4OwnerId = tty_mgmt_info[device].owner_id;
                        ur_ctrl_putbytes_ior.putIor = (void*)tx_ior;
                        
                        buf_ptr = TTY_QBM_DES_GET_DATAPTR(tx_gpd);

                        //if (TTY_QBM_DATA_LEN >= p_ur_ctrl_putbytes->u2Length) {
                        if (tty_mgmt_info[device].qbm_data_len >= p_ur_ctrl_putbytes->u2Length) {
                            kal_mem_cpy(buf_ptr, p_ur_ctrl_putbytes->puBuffaddr, p_ur_ctrl_putbytes->u2Length);
                            p_ur_ctrl_putbytes->u2RetSize = p_ur_ctrl_putbytes->u2Length;
                            if (cmd != SIO_CMD_PUT_ISR_BYTES) {
                                TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
                                tty_mgmt_info[device].tx_up_mod_wait = 0;
                                TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                            }
                        } else {
                            //kal_mem_cpy(buf_ptr, p_ur_ctrl_putbytes->puBuffaddr, TTY_QBM_DATA_LEN);
                            //p_ur_ctrl_putbytes->u2RetSize = TTY_QBM_DATA_LEN;
                            kal_mem_cpy(buf_ptr, p_ur_ctrl_putbytes->puBuffaddr, tty_mgmt_info[device].qbm_data_len);
                            p_ur_ctrl_putbytes->u2RetSize = tty_mgmt_info[device].qbm_data_len;
                            if (cmd != SIO_CMD_PUT_ISR_BYTES) {
                                TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
                                tty_mgmt_info[device].tx_up_mod_wait = 1;
                                TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                            }
                        }

                        TTY_QBM_DES_SET_DATALEN(tx_gpd, p_ur_ctrl_putbytes->u2RetSize); // Set data length

                        //QBM_CACHE_FLUSH(buf_ptr, p_ur_ctrl_putbytes->u2RetSize);   // khr debug, flush data
#if TTY_AGGRESSIVE_TRACE                        
                        tty_trace_info(TTY_TR_CMD_CONV_TX, device, p_ur_ctrl_putbytes->u2RetSize);
#endif
                        result = tty_mgmt_info[device].sp_handler_cb(device, TTY_CMD_PUT_BYTES_IOR, (DCL_CTRL_DATA_T *)&ur_ctrl_putbytes_ior);
                        if (result != STATUS_OK) {
                            /* command failed */
                            QBM_FREE_ONE(tx_gpd);
                            TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
                            tty_mgmt_info[device].tx_gpd_num_used --;
                            if (cmd != SIO_CMD_PUT_ISR_BYTES) {
                                tty_mgmt_info[device].tx_up_mod_wait = 1;
                            }
                            TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                            p_ur_ctrl_putbytes->u2RetSize = 0;
                            tty_trace_error(TTY_TR_CMD_ERR_PUT_BYTES_IOR, device, result, kal_get_active_module_id());
                            return result;
                        }
                    } else {
                        tty_trace_info(TTY_TR_GPD_EXHAUST, device, kal_get_active_module_id());
                        //This case has error handling, so remove assert check here.
                        //VAR_MSG_ASSERT(tty_internal_gpd_exhaust);
                        p_ur_ctrl_putbytes->u2RetSize = 0;
                        if (cmd != SIO_CMD_PUT_ISR_BYTES) {
                            TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
                            tty_mgmt_info[device].tx_up_mod_wait = 1;
                            TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                        }
                    }
                }

                return STATUS_OK;
            }
            break;
            
        case SIO_CMD_GET_RX_AVAIL:
            {           
                UART_CTRL_RX_AVAIL_T *ur_ctrl_rx_avail;
                ur_ctrl_rx_avail = &(data->rUARTCtrlRXAVAIL);

                /* If device is buffer port, bypass cmd to driver*/
                if(TTY_IS_BUFF_PORT(device) && TTY_IS_CONVENTIONAL_RX(device))
                {
                    break;
                }
                
                if (TTY_IS_CONVENTIONAL_RX(device))
                {
                    if (tty_mgmt_info[device].rx_gpd) {
                        ur_ctrl_rx_avail->u2RetSize = TTY_QBM_DES_GET_DATALEN(tty_mgmt_info[device].rx_gpd) - tty_mgmt_info[device].rx_buf_offset;
                    } else {
                        ur_ctrl_rx_avail->u2RetSize = 0;
                    }
                    return STATUS_OK;
                } else
                {
                    return STATUS_FAIL; // This command doesn't be suported in NEW TTY Rx path
                }
            }
            break;
            
        case SIO_CMD_GET_TX_AVAIL:
        case SIO_CMD_GET_ISR_TX_AVAIL:
            {
                UART_CTRL_TX_AVAIL_T *ur_ctrl_tx_avail;
                ur_ctrl_tx_avail = &(data->rUARTCtrlTXAVAIL);
                
                /* If device is buffer port, bypass cmd to driver*/
                if(TTY_IS_BUFF_PORT(device) && TTY_IS_CONVENTIONAL_TX(device))
                {
                    break;
                }

                if (TTY_IS_CONVENTIONAL_TX(device))
                {
                    TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
                    if (tty_mgmt_info[device].tx_gpd_num_used >= TTY_BC_TX_GPD_MAX_NUM) {
                        /* If Tx ior is in driver, return Tx available room = 0 byte */
                        ur_ctrl_tx_avail->u2RetSize = 0;
                    } else {
                        /* If Tx ior is retrieved and available, return Tx available room = TTY_QBM_DATA_LEN byte */
                        //ur_ctrl_tx_avail->u2RetSize = TTY_QBM_DATA_LEN;
                        ur_ctrl_tx_avail->u2RetSize = tty_mgmt_info[device].qbm_data_len;
                    }
                    TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);

                    return STATUS_OK;
                } else
                {
                    return STATUS_FAIL; // This command doesn't be suported in NEW TTY Tx path
                }
            }
            break;

        case TTY_CMD_GET_DRV_STATE:
            {
                UART_CTRL_GET_DRV_STATE_T *ur_ctrl_get_drv_st;
                ur_ctrl_get_drv_st = &(data->rUARTCtrlGetDrvState);

                ur_ctrl_get_drv_st->drv_state = tty_mgmt_info[device].drv_state;

                return STATUS_OK;
            }
            break;

        case SIO_CMD_REG_TX_CB:
            {
                UART_CTRL_REG_TX_CB_T *ur_ctrl_reg_tx_cb;
                ur_ctrl_reg_tx_cb = &(data->rUARTCtrlREGTXCB);

                if (!TTY_IS_CONVENTIONAL_TX(device)) {
                    return STATUS_INVALID_OPERATION;
                }

                tty_mgmt_info[device].conv_tx_cb = ur_ctrl_reg_tx_cb->func;
                
                return STATUS_OK;
            }
            break;
            
        case SIO_CMD_REG_RX_CB:
            {
                UART_CTRL_REG_RX_CB_T *ur_ctrl_reg_rx_cb;
                ur_ctrl_reg_rx_cb = &(data->rUARTCtrlREGRXCB);

                if (!TTY_IS_CONVENTIONAL_RX(device)) {
                    return STATUS_INVALID_OPERATION;
                }

                tty_mgmt_info[device].conv_rx_cb = ur_ctrl_reg_rx_cb->func;

                return STATUS_OK;
            }
            break;

        case SIO_CMD_SET_OWNER:
        case SIO_CMD_CLOSE:
            {
                /* Only GPD port will reference this flag*/
                if(!TTY_IS_BUFF_PORT(device))
                {
                    tty_mgmt_info[device].flush_tx = 1;
                    tty_mgmt_info[device].flush_rx = 1;

                }
                /* Check if there is any rx buff store in tty*/
                if(TTY_IS_CONVENTIONAL_RX(device))
                {
                    void *rx_gpd;
                    TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
                    if (tty_mgmt_info[device].rx_gpd) {
                        rx_gpd = tty_mgmt_info[device].rx_gpd;
                        tty_mgmt_info[device].rx_gpd = NULL;
                        tty_mgmt_info[device].rx_buf_offset = 0;
                        tty_mgmt_info[device].rx_gpd_num_assigned--;
                        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                        QBM_FREE_ONE(rx_gpd);
                    }
                    else
                    {
                        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                    }
                }
            }
            break;
        case SIO_CMD_CLR_TX_BUF:
            {
                /* Only GPD port will reference this flag*/
                if(!TTY_IS_BUFF_PORT(device))
                {
                    tty_mgmt_info[device].flush_tx = 1;

                }
                /*Buffer port need to clear tx_up_mod_wait_flag*/
                if(TTY_IS_BUFF_PORT(device))
                {
                    TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
                    tty_mgmt_info[device].tx_up_mod_wait = 1;
                    TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                }
            }
            break;
        case SIO_CMD_CLR_RX_BUF:
            {
                void *rx_gpd;
                /* Only GPD port will reference this flag*/
                if(!TTY_IS_BUFF_PORT(device))
                {
                    tty_mgmt_info[device].flush_rx = 1;
                }
                /* Check if there is any rx buff store in tty*/
                if (TTY_IS_CONVENTIONAL_RX(device))
                {
                    TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
                    if (tty_mgmt_info[device].rx_gpd) {
                        rx_gpd = tty_mgmt_info[device].rx_gpd;
                        tty_mgmt_info[device].rx_gpd = NULL;
                        tty_mgmt_info[device].rx_buf_offset = 0;
                        tty_mgmt_info[device].rx_gpd_num_assigned--;
                        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                        QBM_FREE_ONE(rx_gpd);
                    }
                    else
                    {
                        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                    }
                }
                /*Buffer port need to clear rx_up_mod_wait_flag*/
                if(TTY_IS_BUFF_PORT(device))
                {
                    TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
                    tty_mgmt_info[device].rx_up_mod_wait = 1;
                    TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                }            
            }
            break;      
        case SIO_CMD_SEND_ISR_DATA:
        case SIO_CMD_SEND_DATA:
            {
                VAR_MSG_ASSERT(not_support_sio_command);
            }
            break;
        case TTY_CMD_SET_INDICATION:
            {
                UART_CTRL_SET_INDICATION_T *ur_ctrl_set_indication;
                ur_ctrl_set_indication = &(data->rUARTCtrlSETINDICATION);

                if(ur_ctrl_set_indication->need_indication == 0)
                {
                    tty_mgmt_info[device].no_indication = 1;
                }
                
            }
            break;
        default:
            break;
    }

    result = tty_mgmt_info[device].sp_handler_cb(device, cmd, data);

    if (result != STATUS_OK) {
        if (cmd == SIO_CMD_OPEN) {
            /* open failed */
            TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
            tty_mgmt_info[device].opened = 0;
            TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
        }
        tty_trace_error(TTY_TR_DCL_CMD_NG, device, cmd, result);
        return result;
    }

    /* Post-command Process */
    switch (cmd)
    {           
        case SIO_CMD_OPEN:
            {
                if (!tty_mgmt_info[device].init_by_new_mod)
                {   /* Conventional Module Init */
                    UART_CTRL_OPEN_T *ur_ctrl_open;

                    tty_trace_info(TTY_TR_CONV_INIT, device, kal_get_active_module_id());
                    
                    tty_mgmt_info[device].rx_gpd = NULL;
                    TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
                    tty_mgmt_info[device].rx_gpd_num_assigned = 0;
                    TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                    tty_mgmt_info[device].rx_buf_offset = 0;
                    tty_mgmt_info[device].flag = 0;
                    tty_mgmt_info[device].no_indication = 0;
                    
                    ur_ctrl_open = &(data->rUARTCtrlOPEN);
                    tty_mgmt_info[device].owner_id = (module_type)ur_ctrl_open->u4OwenrId;

                    /* buffer port shall register different callback*/
                    if(TTY_IS_BUFF_PORT(device))
                    {
                        _DclSerialPort_UpModuleRegisterCb(device, _tty_rx_buff_cb, _tty_tx_buff_done_cb, NULL);
                    }
                    else
                    {
                        /* 20130617: Add drv_state_change callback for supporting plug-in/plug-out indication*/
                        _DclSerialPort_UpModuleRegisterCb(device, _tty_rx_cb, _tty_tx_done_cb, _tty_conv_drv_state_change_cb);
                    }
                }

                /* Init rx_up_mod_wait for buffer port*/
                if(TTY_IS_BUFF_PORT(device))
                {
                    TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
                    tty_mgmt_info[device].rx_up_mod_wait = 1;
                    TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                }
                
                /* If upper module firstly send SIO_CMD_OPEN command & use conventional Rx path, tty will help send TTY_CMD_ASSIGN_RX_IOR to assign RX IOR to driver */
                /* Only takes when GPD ports*/
                if(!TTY_IS_BUFF_PORT(device))
                {
                    if (TTY_IS_CONVENTIONAL_RX(device) && TTY_DRV_IS_ATTACHED(device))
                    {
                        _tty_conv_assign_rx_gpd_to_drv(device);
                    }
                }
            }
            break;
        case SIO_CMD_SET_OWNER:
            {
                UART_CTRL_OWNER_T *ur_ctrl_owner;
                DCL_UINT32 count;
                
                ur_ctrl_owner = &(data->rUARTCtrlOWNER);

                /* Only GPD port needs to check if all GPDs of previous user are returned*/
                if(!TTY_IS_BUFF_PORT(device))
                {
                    TTY_CONV_FLUSH_TX(10);
                    TTY_CONV_FLUSH_RX(10);
                }
                
                /* Reset parameters */
                tty_mgmt_info[device].flag = 0;
                tty_mgmt_info[device].rx_gpd = NULL;
                tty_mgmt_info[device].rx_buf_offset = 0;
                TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
                tty_mgmt_info[device].tx_up_mod_wait = 0;
                TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                tty_mgmt_info[device].conv_tx_cb = NULL;
                tty_mgmt_info[device].conv_rx_cb = NULL;
                tty_mgmt_info[device].flush_tx = 0;
                tty_mgmt_info[device].flush_rx = 0;
                tty_mgmt_info[device].owner_id = (module_type)ur_ctrl_owner->u4OwenrId;
                tty_mgmt_info[device].no_indication= 0;

                if(!TTY_IS_BUFF_PORT(device))
                {
                    /* Pre-assign Rx gpd if conventional Rx path is used */
                    if (TTY_DRV_IS_ATTACHED(device) && TTY_IS_CONVENTIONAL_RX(device))
                    {
                        _tty_conv_assign_rx_gpd_to_drv(device);
                    }

                    /* By default set all callback functions with tty internal handler */
                    _DclSerialPort_UpModuleRegisterCb(device, _tty_rx_cb, _tty_tx_done_cb, NULL);
                }
                else
                {
                    /* buffer port, just register buff port callback*/
                    _DclSerialPort_UpModuleRegisterCb(device, _tty_rx_buff_cb, _tty_tx_buff_done_cb, NULL);
                }
            }
            break;
        case SIO_CMD_CLR_TX_BUF:
            {
                DCL_UINT32 count;
                
                /* Only GPD port needs to check if all GPDs of previous user are returned*/
                if(!TTY_IS_BUFF_PORT(device))
                {
                    TTY_CONV_FLUSH_TX(10);

                    tty_mgmt_info[device].flush_tx = 0;
                }
            }
            break;
        case SIO_CMD_CLR_RX_BUF:
            {
                DCL_UINT32 count;

                /* Only GPD port needs to check if all GPDs of previous user are returned*/
                if(!TTY_IS_BUFF_PORT(device))
                {
                    TTY_CONV_FLUSH_RX(10);

                    tty_mgmt_info[device].flush_rx = 0;

                    if (TTY_DRV_IS_ATTACHED(device) && TTY_IS_CONVENTIONAL_RX(device))
                    {
                        _tty_conv_assign_rx_gpd_to_drv(device);
                    }
                }
            }
            break;
        case SIO_CMD_CLOSE:
            {
                DCL_UINT32 count;

                /* Only GPD port needs to check if all GPDs of previous user are returned*/
                if(!TTY_IS_BUFF_PORT(device))
                {
                    TTY_CONV_FLUSH_TX(10);
                    TTY_CONV_FLUSH_RX(10);
                }
                
                tty_mgmt_info[device].flush_tx = 0;
                tty_mgmt_info[device].flush_rx = 0;
                tty_mgmt_info[device].flag = 0;
                tty_mgmt_info[device].init_by_new_mod = 0;
                TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
                tty_mgmt_info[device].opened = 0;
                tty_mgmt_info[device].rx_gpd_num_assigned = 0;
                tty_mgmt_info[device].tx_gpd_num_used = 0;
                TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                tty_mgmt_info[device].rx_buf_offset = 0;
                tty_mgmt_info[device].conv_tx_cb = NULL;
                tty_mgmt_info[device].conv_rx_cb = NULL;
                tty_mgmt_info[device].no_indication= 0;
            }
            break;
        //case SIO_CMD_PUT_UART_BYTE:             //not support in buffer port currently
        //case SIO_CMD_PUT_UART_BYTES:            //not support in buffer port currently
        //case SIO_CMD_PUT_ISR_BYTES:             //not support in buffer port currently
        case SIO_CMD_PUT_BYTES:    
            {
                UART_CTRL_PUT_BYTES_T *p_ur_ctrl_putbytes;
                UART_CTRL_TX_AVAIL_T ur_ctrl_tx_avail;
                
                //GPD port shall not go here.
                ASSERT(TTY_IS_BUFF_PORT(device));

                /*
                    Only SIO_CMD_PUT_BYTES will return length of transmitted data
                */
                if(cmd == SIO_CMD_PUT_BYTES)
                {
                    p_ur_ctrl_putbytes = &(data->rUARTCtrlPUTBYTES);
                    if(p_ur_ctrl_putbytes->u2Length != p_ur_ctrl_putbytes->u2RetSize)
                    {
                        TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
                        tty_mgmt_info[device].tx_up_mod_wait = 1;
                        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);

                        /*
                         Ready to write message may lost before setting tx_up_mod_wait as 1. 
                         (Due to user task priority may be lower than HIF task priority)
                         so we need to double confirmed with HIF driver if it is really no space to write
                        */
                        ur_ctrl_tx_avail.u2RetSize = 0;
                        tty_mgmt_info[device].sp_handler_cb(device, SIO_CMD_GET_TX_AVAIL, (DCL_CTRL_DATA_T *)&ur_ctrl_tx_avail);
                        if(ur_ctrl_tx_avail.u2RetSize > 0)
                        {
                            TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
                            if( tty_mgmt_info[device].tx_up_mod_wait == 1)
                            {
                                tty_mgmt_info[device].tx_up_mod_wait = 0;
                                TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                                _tty_send_ilm(device, MOD_TTY, MSG_ID_UART_READY_TO_WRITE_IND);
                            }
                            else
                            {
                                TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                            }
                        }
                    }
                }
            }
            break;
        case SIO_CMD_GET_BYTES:
        //case SIO_CMD_GET_UART_BYTE:            //not support in buffer port currently
            {
                UART_CTRL_GET_BYTES_T *p_ur_ctrl_getbytes;
                UART_CTRL_RX_AVAIL_T ur_ctrl_rx_avail;
                
                //GPD port shall not go here.
                ASSERT(TTY_IS_BUFF_PORT(device));

                if(cmd == SIO_CMD_GET_BYTES)
                {
                    p_ur_ctrl_getbytes = &(data->rUARTCtrlGETBYTES);
                    //Last read
                    if(p_ur_ctrl_getbytes->u2Length > p_ur_ctrl_getbytes->u2RetSize)
                    {
                        TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
                        tty_mgmt_info[device].rx_up_mod_wait = 1;
                        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);

                        /*
                         Ready to read message may lost before setting rx_up_mod_wait as 1.
                         (Due to user task priority may be lower than HIF task priority)
                         so we need to double confirmed with HIF driver if it is really no data ready to read
                        */
                        ur_ctrl_rx_avail.u2RetSize = 0;
                        tty_mgmt_info[device].sp_handler_cb(device, SIO_CMD_GET_RX_AVAIL, (DCL_CTRL_DATA_T *)&ur_ctrl_rx_avail);
                        if(ur_ctrl_rx_avail.u2RetSize > 0)
                        {
                            TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
                            if( tty_mgmt_info[device].rx_up_mod_wait == 1)
                            {
                                tty_mgmt_info[device].rx_up_mod_wait = 0;
                                TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                                _tty_send_ilm(device, MOD_TTY, MSG_ID_UART_READY_TO_READ_IND);
                            }
                            else
                            {
                                TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                            }
                        }
                    }
                }
            }
            break;
        default:
            break;
    }

    return result;  
}

DCL_STATUS DEVDRV_LS_DRAM_EX_ROCODE
DclSerialPort_UpModuleInit(
    DCL_HANDLE          handle,
    module_type         module_id,
    int                 flag)
{
    DCL_STATUS status = STATUS_FAIL;
    DCL_DEV device;
    UART_CTRL_OPEN_T uCtlOpen;

    TTY_CHECK_HANDLE(handle);
    device = DCL_UART_GET_DEV(handle);

    /*20130313:remove driver active check, because user may do initial flow before driver in active state*/
    TTY_CHECK_DEV_VALID(device);

    tty_trace_info(TTY_TR_NEW_INIT, device,module_id);

    TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
    if (tty_mgmt_info[device].opened || tty_mgmt_info[device].early_open_req) {
        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
        tty_trace_info(TTY_TR_CMD_OPEN_ALREADY_OPENED, device, module_id);
        return STATUS_ALREADY_OPENED;
    }
    TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
    
    tty_mgmt_info[device].owner_id = module_id;
    tty_mgmt_info[device].flag = flag;
    tty_mgmt_info[device].init_by_new_mod = 1;
    tty_mgmt_info[device].rx_gpd = NULL;
    tty_mgmt_info[device].rx_buf_offset = 0;
    TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
    tty_mgmt_info[device].rx_gpd_num_assigned = 0;
    tty_mgmt_info[device].tx_gpd_num_used = 0;
    tty_mgmt_info[device].tx_up_mod_wait = 0;
    TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
    tty_mgmt_info[device].conv_tx_cb = NULL;
    tty_mgmt_info[device].conv_rx_cb = NULL;    
    tty_mgmt_info[device].flush_tx = 0;
    tty_mgmt_info[device].flush_rx = 0;
    tty_mgmt_info[device].no_indication = 0;

    if (TTY_IS_CONVENTIONAL_TX(device) && TTY_IS_CONVENTIONAL_RX(device)) {
        tty_mgmt_info[device].init_by_new_mod = 0;
    }
    
    /* Send SIO_CMD_OPEN command */
    /* 20130313: If driver is not active, store SIO_CMD_OPEN and then return */
    if(tty_mgmt_info[device].active)
    {
        uCtlOpen.u4OwenrId = module_id;
        status = DclSerialPort_Control(handle, SIO_CMD_OPEN, (DCL_CTRL_DATA_T*)&uCtlOpen);
        if (STATUS_OK != status) {
            return status;
        }
    }
    else
    {
        TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
        tty_mgmt_info[device].early_open_req = 1;
        tty_mgmt_info[device].pending_owner = module_id;
        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
        return STATUS_OK;
    }

    return STATUS_OK;
}

static DCL_STATUS DEVDRV_LS_DRAM_EX_ROCODE
_DclSerialPort_UpModuleReinit(
    DCL_DEV             device,
    module_type         module_id,
    int                 flag)
{
    DCL_STATUS result;
    UART_CTRL_CLR_BUFFER_T ur_ctrl_clr_buf;
    DCL_UINT32 count;

    /*
     * Notes: if device is buffer port, just reset the ttycore internal flag,
     *        because it is impossible to use gpd buffer on buffer port
     */
    if(TTY_IS_BUFF_PORT(device))
    {
        goto _RESET_FLAG;
    }

    /* If primary module uses conventional Rx and new module uses new rx path, flush Rx data path */
    TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
    if (TTY_IS_CONVENTIONAL_RX(device) && 
        tty_mgmt_info[device].rx_gpd_num_assigned > 0 &&
        (flag & TTY_FLAG_NEW_RX)
        )
    {
        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);

        /* -- 1. Send clear rx buffer command -- */
        ur_ctrl_clr_buf.u4OwenrId = tty_mgmt_info[device].owner_id;
        tty_mgmt_info[device].flush_rx = 1;
        result = tty_mgmt_info[device].sp_handler_cb(device, SIO_CMD_CLR_RX_BUF, (DCL_CTRL_DATA_T*)&ur_ctrl_clr_buf);
        if (result != STATUS_OK) {
            /* command failed */
            tty_trace_error(TTY_TR_CMD_ERR_CLR_RX_BUF, device, result, kal_get_active_module_id());
            return result;
        }

        /* -- 2. Wait until all rx gpds are returned back -- */
        TTY_CONV_FLUSH_RX(10);
    } else {
        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
    }

_RESET_FLAG:
    tty_mgmt_info[device].owner_id = module_id;
    tty_mgmt_info[device].flag = flag;
    tty_mgmt_info[device].rx_gpd = NULL;
    tty_mgmt_info[device].rx_buf_offset = 0;
    TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
    tty_mgmt_info[device].tx_gpd_num_used = 0;
    tty_mgmt_info[device].tx_up_mod_wait = 0;
    TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
    tty_mgmt_info[device].conv_tx_cb = NULL;
    tty_mgmt_info[device].conv_rx_cb = NULL;
    tty_mgmt_info[device].flush_tx = 0;
    tty_mgmt_info[device].flush_rx = 0;
    tty_mgmt_info[device].no_indication = 0;

    if (TTY_IS_CONVENTIONAL_TX(device) && TTY_IS_CONVENTIONAL_RX(device)) {
        tty_mgmt_info[device].init_by_new_mod = 0;
    } else {
        tty_mgmt_info[device].init_by_new_mod = 1;
    }

    return STATUS_OK;
}

/* Re-init API is invoked when New upper module change owner -> it need re-set flag and re-register related callback function */
/* This API must be called after SIO_CMD_SET_OWNER command */
DCL_STATUS DEVDRV_LS_DRAM_EX_ROCODE
DclSerialPort_UpModuleReinit(
    DCL_HANDLE          handle,
    module_type         module_id,
    int                 flag)
{
    DCL_DEV device;

    TTY_CHECK_HANDLE(handle);
    device = DCL_UART_GET_DEV(handle);
    TTY_CHECK_DEV_IS_READY(device);

    tty_trace_info(TTY_TR_REINIT, device, module_id);

    if (!tty_mgmt_info[device].opened) {
        return STATUS_NOT_OPENED;
    }

    return _DclSerialPort_UpModuleReinit(device, module_id, flag);
}


DCL_STATUS DEVDRV_LS_DRAM_EX_ROCODE
DclSerialPort_UpModuleDeinit(
    DCL_HANDLE          handle)
{
    DCL_STATUS status = STATUS_FAIL;
    DCL_DEV device;
    UART_CTRL_CLOSE_T data;

    TTY_CHECK_HANDLE(handle);
    device = DCL_UART_GET_DEV(handle);
    
    /*20130313:remove driver active check, because user may do initial flow before driver in active state*/
    TTY_CHECK_DEV_VALID(device);
 
    tty_trace_info(TTY_TR_DEINIT, device, kal_get_active_module_id());

    TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
    if (!tty_mgmt_info[device].opened && !tty_mgmt_info[device].early_open_req) {
        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
        tty_trace_info(TTY_TR_DEV_IS_NOT_OPENED, device, kal_get_active_module_id());
        return STATUS_NOT_OPENED;
    }
    TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);

    /* Send SIO_CMD_CLOSE command */
    data.u4OwenrId = tty_mgmt_info[device].owner_id;
    status = DclSerialPort_Control(handle, SIO_CMD_CLOSE, (DCL_CTRL_DATA_T*)&data);

    return status;
}

static DCL_STATUS DEVDRV_LS_DRAM_EX_ROCODE
_DclSerialPort_UpModuleRegisterCb(
    DCL_DEV             device,
    tty_rx_cb           rx_cb,
    tty_txdone_cb       tx_done_cb,
    tty_drv_state_change_cb drv_state_change_cb)
{
    DCL_STATUS result;

    tty_mgmt_info[device].rx_cb = rx_cb;
    tty_mgmt_info[device].tx_done_cb = tx_done_cb;  
    tty_mgmt_info[device].drv_state_change_cb = drv_state_change_cb;

    TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
    if(!tty_mgmt_info[device].active && tx_done_cb)
    {
        tty_mgmt_info[device].early_tx_done_cb_req = 1;
        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
        return STATUS_OK;
    }
    else
    {
        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
    }

    /* Send TTY_CMD_TX_INFO command */
    if (tx_done_cb)
    {
        UART_CTRL_NEED_TX_DONE_CB_T ur_ctrl_need_tx_done_cb;
        
        ur_ctrl_need_tx_done_cb.u4OwnerId = tty_mgmt_info[device].owner_id;
        ur_ctrl_need_tx_done_cb.needTxDoneCb = 1;
        result = tty_mgmt_info[device].sp_handler_cb(device, TTY_CMD_NEED_TX_DONE_CB, (DCL_CTRL_DATA_T*)&ur_ctrl_need_tx_done_cb);
        if (result != STATUS_OK) {
            /* command failed */
            tty_trace_error(TTY_TR_CMD_ERR_NEED_TX_DONE_CB, device, result, kal_get_active_module_id());
            return result;
        }
    }

    return STATUS_OK;
}

DCL_STATUS DEVDRV_LS_DRAM_EX_ROCODE
DclSerialPort_UpModuleRegisterCb(
    DCL_HANDLE          handle,
    tty_rx_cb           rx_cb,
    tty_txdone_cb       tx_done_cb,
    tty_drv_state_change_cb drv_state_change_cb)
{
    DCL_DEV device;
    DCL_STATUS result;

    TTY_CHECK_HANDLE(handle);
    device = DCL_UART_GET_DEV(handle);

    /*20130313:remove driver active check, because user may do initial flow before driver in active state*/
    TTY_CHECK_DEV_VALID(device);
    tty_trace_func(TTY_TR_CMD_REG_CB, device, kal_get_active_module_id());
 
    /* Check flag & callback correctness */
    if (!TTY_IS_CONVENTIONAL_RX(device) && !rx_cb) {
        tty_trace_error(TTY_TR_NEW_RX_CB_IS_NULL, device, kal_get_active_module_id());
        VAR_MSG_ASSERT(use_new_rx_but_not_register_cb);
    }   
    if (TTY_IS_CONVENTIONAL_RX(device)) {
        ASSERT(!rx_cb);

        /* Buffer port use different internal callback*/
        if(TTY_IS_BUFF_PORT(device))
        {
            rx_cb = _tty_rx_buff_cb;
        }
        else
        {
            rx_cb = _tty_rx_cb;
        }
    }
    if (TTY_IS_CONVENTIONAL_TX(device)) {
        ASSERT(!tx_done_cb);

        /* Buffer port use different internal callback*/
        if(TTY_IS_BUFF_PORT(device))
        {
            tx_done_cb = _tty_tx_buff_done_cb;
        }
        else
        {
            tx_done_cb = _tty_tx_done_cb;
        }
    }
    
    if (TTY_IS_CONVENTIONAL_RX(device) && TTY_IS_CONVENTIONAL_TX(device)) {
        ASSERT(!drv_state_change_cb);
    } else {
        ASSERT(drv_state_change_cb);
    }

    result = _DclSerialPort_UpModuleRegisterCb(device, rx_cb, tx_done_cb, drv_state_change_cb);
    if (result != STATUS_OK) {
        /* command failed */
        tty_trace_error(TTY_TR_CMD_REG_CB_FAIL, device, result, kal_get_active_module_id());
        return result;
    }   

    return STATUS_OK;
}

DCL_STATUS DEVDRV_LS_DRAM_EX_ROCODE
DclSerialPort_UpModuleTransmit(
    DCL_HANDLE          handle,
    tty_io_request_t    *ior)
{
    DCL_DEV device;
    UART_CTRL_PUT_BYTES_IOR_T ur_ctrl_putbytes_ior;

    TTY_CHECK_HANDLE(handle);
    device = DCL_UART_GET_DEV(handle);
    DBG_ASSERT(ior);

    if (!tty_mgmt_info[device].sp_handler_cb) {
        tty_trace_error(TTY_TR_DRV_CB_IS_NULL, device, kal_get_active_module_id());
        return STATUS_FAIL;
    }
    
    ur_ctrl_putbytes_ior.u4OwnerId = tty_mgmt_info[device].owner_id;
    ur_ctrl_putbytes_ior.putIor = (void*)ior;

#ifdef __TTY_DBG_MODE__
    _tty_gpd_zero_len_check(ior);
#endif

    return tty_mgmt_info[device].sp_handler_cb(device, TTY_CMD_PUT_BYTES_IOR, (DCL_CTRL_DATA_T*)&ur_ctrl_putbytes_ior);
}

DCL_STATUS DEVDRV_LS_DRAM_EX_ROCODE
DclSerialPort_UpModuleTransmitLight(
    DCL_HANDLE          handle,
    tty_io_request_t    *ior)
{
    DCL_DEV device;
    UART_CTRL_PUT_BYTES_IOR_T ur_ctrl_putbytes_ior;

    TTY_CHECK_HANDLE(handle);
    device = DCL_UART_GET_DEV(handle);
    DBG_ASSERT(ior);

    if (!tty_mgmt_info[device].sp_handler_cb) {
        tty_trace_error(TTY_TR_DRV_CB_IS_NULL, device, kal_get_active_module_id());
        return STATUS_FAIL;
    }
    
    ur_ctrl_putbytes_ior.u4OwnerId = tty_mgmt_info[device].owner_id;
    ur_ctrl_putbytes_ior.putIor = (void*)ior;

#ifdef __TTY_DBG_MODE__
    _tty_gpd_zero_len_check(ior);
#endif

    return tty_mgmt_info[device].sp_handler_cb(device, TTY_CMD_PUT_BYTES_IOR_LIGHT, (DCL_CTRL_DATA_T*)&ur_ctrl_putbytes_ior);
}

DCL_STATUS DEVDRV_LS_DRAM_EX_ROCODE
DclSerialPort_UpModuleAssignRxIor(
    DCL_HANDLE          handle,
    tty_io_request_t    *rx_ior)
{
    DCL_DEV device;
    UART_CTRL_ASSIGN_RX_IOR_T uartCtlAsnRxIor;

    TTY_CHECK_HANDLE(handle);
    device = DCL_UART_GET_DEV(handle);
    DBG_ASSERT(rx_ior);

    tty_trace_func(TTY_TR_CMD_ASSIGN_RX_IOR, device, kal_get_active_module_id());

    if (!tty_mgmt_info[device].sp_handler_cb) {
        tty_trace_error(TTY_TR_DRV_CB_IS_NULL, device, kal_get_active_module_id());
        return STATUS_FAIL;
    }

    uartCtlAsnRxIor.u4OwnerId = tty_mgmt_info[device].owner_id;
    uartCtlAsnRxIor.ior = (void*)rx_ior;
    
    return tty_mgmt_info[device].sp_handler_cb(device, TTY_CMD_ASSIGN_RX_IOR, (DCL_CTRL_DATA_T*)&uartCtlAsnRxIor);
}


DCL_STATUS DEVDRV_LS_DRAM_EX_ROCODE
DclSerialPort_DrvRegisterCb(
    DCL_HANDLE          handle,
    Seriport_HANDLER_T* seriport_handler)
{
    DCL_DEV device;
    UART_CTRL_OPEN_T uCtlOpen;
    UART_CTRL_NEED_TX_DONE_CB_T ur_ctrl_need_tx_done_cb;
    DCL_STATUS status;

    TTY_CHECK_HANDLE(handle);
    device = DCL_UART_GET_DEV(handle);

    tty_trace_func(TTY_TR_DRV_REGISTER_CB, device, seriport_handler, kal_get_active_module_id());

    if (!seriport_handler->SeriportHandlerCb) {
        tty_trace_error(TTY_TR_DRV_CB_IS_NULL, device, kal_get_active_module_id());
        ASSERT(seriport_handler->SeriportHandlerCb);
        return STATUS_INVALID_ARGUMENT;
    }

    if (tty_mgmt_info[device].active) {
        return STATUS_ALREADY_OPENED;
    }

    tty_mgmt_info[device].sp_handler_cb = seriport_handler->SeriportHandlerCb;

    tty_mgmt_info[device].dev_type = seriport_handler->DevType;
    _tty_update_buff_info_from_port(device, seriport_handler->DevType);

    //Must to put at the end of function.
    tty_mgmt_info[device].active = 1;

    //------------------------------------------------------------------//
    //check if user has opened the port before driver register callback //
    
    TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
    if(tty_mgmt_info[device].early_open_req)
    {
        tty_mgmt_info[device].early_open_req = 0;
        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
        uCtlOpen.u4OwenrId = tty_mgmt_info[device].pending_owner;
        //temp for uart
        //DclSerialPort_Control(handle,SIO_CMD_INIT,(DCL_CTRL_DATA_T*)&uCtlOpen);
        status = DclSerialPort_Control(handle, SIO_CMD_OPEN, (DCL_CTRL_DATA_T*)&uCtlOpen);
        if (STATUS_OK != status) {
            //ASSERT(0);
            return status;
        }
    }
    else
    {
        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
    }
    
    TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
    if(tty_mgmt_info[device].early_tx_done_cb_req)
    {
        tty_mgmt_info[device].early_tx_done_cb_req = 0;
        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
        ur_ctrl_need_tx_done_cb.u4OwnerId = tty_mgmt_info[device].owner_id;
        ur_ctrl_need_tx_done_cb.needTxDoneCb = 1;
        status = tty_mgmt_info[device].sp_handler_cb(device, TTY_CMD_NEED_TX_DONE_CB, (DCL_CTRL_DATA_T*)&ur_ctrl_need_tx_done_cb);
        if (status != STATUS_OK) {
            /* command failed */
            tty_trace_error(TTY_TR_CMD_ERR_NEED_TX_DONE_CB, device, status, kal_get_active_module_id());
            return status;
        }
    }
    else
    {
        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
    }
    return STATUS_OK;
}

DCL_STATUS DEVDRV_LS_DRAM_EX_ROCODE
DclSerialPort_DrvDeRegisterCb(
    DCL_HANDLE          handle)
{
    DCL_DEV device;
    //TTY_THREAD_DECLARE(thread_lock);

    TTY_CHECK_HANDLE(handle);
    device = DCL_UART_GET_DEV(handle);

    tty_trace_func(TTY_TR_DRV_DEREGISTER_CB, device, kal_get_active_module_id());

    if(tty_mgmt_info[device].drv_state == DRV_ST_ATTACHED)
    {
        return STATUS_INVALID_OPERATION;
    }

    if (!tty_mgmt_info[device].active) {
        return STATUS_INVALID_OPERATION;
    }

    /* Clear flags */
    tty_mgmt_info[device].active = 0;
    tty_mgmt_info[device].sp_handler_cb = NULL;

    /***** Add for USB CV test *****/
    /* Check device state */
    /* Here we slient clear opened flag if the device is opened 
       After driver registered the device, tty will re-open the device
    */
    if(tty_mgmt_info[device].opened)
    {
        TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
        tty_mgmt_info[device].opened = 0;
        tty_mgmt_info[device].early_open_req = 1;
        TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
        tty_mgmt_info[device].pending_owner = tty_mgmt_info[device].owner_id;
        if(tty_mgmt_info[device].tx_done_cb)
        {
            tty_mgmt_info[device].early_tx_done_cb_req = 1;
        }
    }
    /***** Add for USB CV test *****/
    
    return STATUS_OK;
}


DCL_STATUS DEVDRV_LS_DRAM_EX_ROCODE
DclSerialPort_DrvAttach(
    DCL_HANDLE          handle)
{
    DCL_DEV device;
    DCL_STATUS result;
    UART_CTRL_GET_CHUNK_SIZE_T ur_ctrl_get_chunk_size;

    TTY_CHECK_HANDLE(handle);
    device = DCL_UART_GET_DEV(handle);
    TTY_CHECK_DEV_IS_READY(device);

    tty_trace_info(TTY_TR_DRV_ATTACH, device, kal_get_active_module_id());

    tty_mgmt_info[device].drv_state = DRV_ST_ATTACHED;

    if(TTY_IS_BUFF_PORT(device))
    {
        /* Set default value align with USB, although buffer port does not reference this value*/
        tty_mgmt_info[device].chunk_size = 512;
        goto _RETURN;
    }

    result = tty_mgmt_info[device].sp_handler_cb(device, TTY_CMD_GET_CHUNK_SIZE, (DCL_CTRL_DATA_T*)&ur_ctrl_get_chunk_size);
    if (result != STATUS_OK) {
        /* command failed */
        tty_trace_error(TTY_TR_CMD_ERR_GET_CHUNK_SIZE, device, result, kal_get_active_module_id());
        ASSERT(0);
        return result;
    }
    
    tty_mgmt_info[device].chunk_size = (DCL_UINT16)ur_ctrl_get_chunk_size.chunkSize;
    //set rx allow len
    _cal_and_set_rx_allow_len(device, tty_mgmt_info[device].chunk_size);

    if (tty_mgmt_info[device].opened)
    {
        /* Notify upper layer the driver status is attached */
        if (tty_mgmt_info[device].drv_state_change_cb) {
            tty_mgmt_info[device].drv_state_change_cb(handle, DRV_ST_ATTACHED);
        }
        
        if (TTY_IS_CONVENTIONAL_RX(device)) {
            _tty_conv_assign_rx_gpd_to_drv(device);
        }

        if (TTY_IS_CONVENTIONAL_TX(device))
        {
            TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
            if(tty_mgmt_info[device].tx_not_rdy == 1)
            {
                tty_mgmt_info[device].tx_not_rdy = 0;
                TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
                _tty_send_ilm(device, MOD_TTY, MSG_ID_UART_READY_TO_WRITE_IND);
            }
            else
            {
                TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
            }
        }
    }
    
_RETURN:
    return STATUS_OK;
}

DCL_STATUS DEVDRV_LS_DRAM_EX_ROCODE
DclSerialPort_DrvDetach(
    DCL_HANDLE          handle)
{
    DCL_DEV device;
    DCL_STATUS result;
    UART_CTRL_CLR_BUFFER_T ur_ctrl_clr_buf;

    TTY_CHECK_HANDLE(handle);
    device = DCL_UART_GET_DEV(handle);
    TTY_CHECK_DEV_IS_READY(device);

    tty_trace_info(TTY_TR_DRV_DETACH, device, kal_get_active_module_id());

    tty_mgmt_info[device].drv_state = DRV_ST_DETACHED;

    /* Notify upper layer the driver status is detached */
    if (tty_mgmt_info[device].opened)
    {
        if (tty_mgmt_info[device].drv_state_change_cb) {
            tty_mgmt_info[device].drv_state_change_cb(handle, DRV_ST_DETACHED);
        }
        
        /* Send clear tx/rx buffer command */
        ur_ctrl_clr_buf.u4OwenrId = tty_mgmt_info[device].owner_id;

        /* Buffer port also needs to do flush when detached */
        TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
        if ((tty_mgmt_info[device].tx_gpd_num_used != 0 && TTY_IS_CONVENTIONAL_TX(device)) 
            || TTY_IS_BUFF_PORT(device) )
        {
            TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);

            /* Only GPD driver needs to toggle this flag*/
            if(!TTY_IS_BUFF_PORT(device))
            {
                tty_mgmt_info[device].flush_tx = 1;
            }
            
            result = tty_mgmt_info[device].sp_handler_cb(device, SIO_CMD_CLR_TX_BUF, (DCL_CTRL_DATA_T*)&ur_ctrl_clr_buf);
            if (result != STATUS_OK) {
                /* command failed */
                tty_trace_error(TTY_TR_CMD_ERR_CLR_TX_BUF, device, result, kal_get_active_module_id());
                return result;
            }
        } else {
            TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
        }

        /* Buffer port also needs to do flush when detached */
        TTY_SPIN_LOCK(tty_mgmt_info[device].spinLock);
        if ((tty_mgmt_info[device].rx_gpd_num_assigned != 0 && TTY_IS_CONVENTIONAL_RX(device))
            || TTY_IS_BUFF_PORT(device) )
        {
            TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
            
            /* Only GPD driver needs to toggle this flag*/
            if(!TTY_IS_BUFF_PORT(device))
            {
                tty_mgmt_info[device].flush_rx = 1;
            }
            
            result = tty_mgmt_info[device].sp_handler_cb(device, SIO_CMD_CLR_RX_BUF, (DCL_CTRL_DATA_T*)&ur_ctrl_clr_buf);
            if (result != STATUS_OK) {
                /* command failed */
                tty_trace_error(TTY_TR_CMD_ERR_CLR_RX_BUF, device, result, kal_get_active_module_id());
                return result;
            }
        } else {
            TTY_SPIN_UNLOCK(tty_mgmt_info[device].spinLock);
        }
    }   

    return STATUS_OK;
}

DCL_STATUS DEVDRV_LS_DRAM_EX_ROCODE
DclSerialPort_DrvRx(
    DCL_HANDLE          handle,
    module_type         source_id,
    void                *rx_ior)
{
    DCL_DEV device;

    TTY_CHECK_HANDLE(handle);
    device = DCL_UART_GET_DEV(handle);

    if (tty_mgmt_info[device].opened && tty_mgmt_info[device].rx_cb) {
        tty_mgmt_info[device].rx_cb(handle, source_id, (tty_io_request_t*)rx_ior);
    } else {
        tty_trace_error(TTY_TR_DRV_RX_NG, device, tty_mgmt_info[device].opened, tty_mgmt_info[device].rx_cb);
        /* Free ior when the device is closed */
        if(!TTY_IS_BUFF_PORT(device))
        {
            _tty_free_ior(rx_ior);
        }   
    }
    return STATUS_OK;
}

DCL_STATUS DEVDRV_LS_DRAM_EX_ROCODE
DclSerialPort_DrvTxDone(
    DCL_HANDLE          handle,
    module_type         source_id,
    void                *tx_ior)
{
    DCL_DEV device;

    TTY_CHECK_HANDLE(handle);
    device = DCL_UART_GET_DEV(handle);

    if (tty_mgmt_info[device].opened && tty_mgmt_info[device].tx_done_cb) {
        tty_mgmt_info[device].tx_done_cb(handle, source_id, (tty_io_request_t*)tx_ior);
    } else {
        /* Free ior when the device is closed */
        if(!TTY_IS_BUFF_PORT(device))
        {
            _tty_free_ior(tx_ior);
        }
    }

    return STATUS_OK;
}


