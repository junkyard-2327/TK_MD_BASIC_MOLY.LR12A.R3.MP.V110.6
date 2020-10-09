/*******************************************************************************
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
 ******************************************************************************/

/*******************************************************************************
 * Filename:
 * ---------
 *   scc.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *   SCC External Header File
 *
 * Author:
 * -------
 * -------
 *
 * ============================================================================
 * $Log$
 *
 * 04 01 2019 chwanhung.wang
 * [MOLY00394548] [SIB_DRV][PCC] Add function scc_pcc_stop_1shot
 * Request from Chunglun Yuan
 *   - Provide a simple version of scc_pcc_stop
 *   - scc_pcc_stop take too much execution time
 *   - that causes HRT fails
 *
 * 10 12 2017 sen.chang
 * [MOLY00197455][MT6771][SIB_DRV] Update SCC Module for SIB official Release - Support SCC for ET callibration usage
 *
 * 03 30 2017 sen.chang
 * [MOLY00197455][MT6763][SIB_DRV] Update SCC Module for SIB official Release - Remove SDF_CLOCK setting for FPGA
 *
 * 02 15 2017 sen.chang
 * [MOLY00197455][MT6763][SIB_DRV] Update SCC Module for SIB official Release - Update SCC for scc_sdf_to_sib usage
 *
 * 12 22 2016 sen.chang
 * [MOLY00197455][MT6763][SIB_DRV] Update SCC Module for SIB official Release - Fix the typo
 *
 * 12 22 2016 sen.chang
 * [MOLY00197455][MT6763][SIB_DRV] Update SCC Module for SIB official Release - Export the SCC capture dump region info
 *
 * 11 30 2016 sen.chang
 * [MOLY00197455][MT6763][SIB_DRV] Update SCC Module for SIB official Release - Remove API Call restriction, add scc_sdf_start/stop_internal(), and support re-capture when IP start
 *
 * 11 30 2016 sen.chang
 * [MOLY00197455][MT6763][SIB_DRV] Update SCC Module for SIB official Release - Fix naming from STP to Trace_top
 *
 * 11 30 2016 sen.chang
 * [MOLY00197455][MT6763][SIB_DRV] Update SCC Module for SIB official Release - SCC support SIBLA for target trigger mode
 *
 * 10 31 2016 sen.chang
 * [MOLY00197455][MT6763][SIB_DRV] Update SCC Module for SIB official Release - Fix for init 64K dram  tracetop, wrapper tracetop_stop feature, and disable funnel control for PCC
 *
 * 10 31 2016 sen.chang
 * [MOLY00197455][MT6763][SIB_DRV] Update SCC Module for SIB official Release - Enable and integrate the PCC feature
 *
 * 09 01 2016 sen.chang
 * [MOLY00197455][MT6763][SIB_DRV] Update SCC Module for SIB official Release - Support SIBLA on 93 FPGA UMOLYA
 *
 * 06 27 2016 sen.chang
 * [MOLY00167811][MT6763][SIB_DRV] Update SCC Module for SIB official Release - Sync from //UMOLY/TRUNK/UMOLY/ to //UMOLYA/TRUNK/UMOLYA/ with CL2504057
 *
 * 05 25 2016 sen.chang
 * [MOLY00167811][ELBRUS][SIB_DRV] Update SCC Module for SIB official Release - Fix the scc_exception_flow function prototype to void function
 *
 * 05 24 2016 sen.chang
 * [MOLY00167811][ELBRUS][SIB_DRV] Update SCC Module for SIB official Release - Fix the function proto for void arguments
 *
 * 05 18 2016 sen.chang
 * [MOLY00167811][ELBRUS][SIB_DRV] Update SCC Module for SIB official Release - Support scc_force_mu_on_ind() for EL1D
 *
 * 05 10 2016 sen.chang
 * [MOLY00167811][ELBRUS][SIB_DRV] Update SCC Module for SIB official Release - Add misuse prevention for SCC external API. (When STP Link and build option ready, the API can be used)
 *
 * 04 25 2016 sen.chang
 * [MOLY00167811][ELBRUS][SIB_DRV] Update SCC Module for SIB official Release - Add scc_sdf_get_config and scc_sdf_set_config
 *
 * 04 14 2016 sen.chang
 * [MOLY00167811][ELBRUS][SIB_DRV] Update SCC Module for SIB official Release - Wrap PCC API interface under SCC, and remove pcc/inc in makefile by following the MSBB rule
 *
 * 04 12 2016 zeke.chang
 * [MOLY00172338] [UMOLY][Elbrus][PCC]
 * Update PCC driver. Add new API in SCC for EL1D.
 *
 * 03 31 2016 sen.chang
 * [MOLY00167811][ELBRUS][SIB_DRV] Update SCC Module for SIB official Release - Support SCC_SDF_32BIT_WIDTH
 *
 * 03 30 2016 sen.chang
 * [MOLY00167811][ELBRUS][SIB_DRV] Update SCC Module for SIB official Release - Support for ELBRUS SCC driver
 *
 * 10 30 2015 gh.huang
 * [MOLY00126218] [TK6291][SIB_DRV] Update SCC/SDF Module for SIB Official Release - Remove Inhibited PCORE/L1CORE Options
 *
 * 04 22 2015 gh.huang
 * [MOLY00098317] [TK6291][SIB_DRV] Add SDF Module and Migrate SCC to UMOLY Trunk - Change API/MSG names for PCC/PPC
 *
 * 04 21 2015 gh.huang
 * [MOLY00098317] [TK6291][SIB_DRV] Add SDF Module and Migrate SCC to UMOLY Trunk - Add PCC/BWL APIs and Messages
 *
 * 03 10 2015 gh.huang
 * [MOLY00098317] [TK6291][SIB_DRV] Add SDF Module and Migrate SCC to UMOLY Trunk
 *
 * 02 03 2015 gh.huang
 * [MOLY00093777] [TK6291][SIB_DRV] Add SCC Module Related Sources - Add Resource Lock and Enanble Option
 *
 *
 ****************************************************************************/

#ifndef __SCC_H__
#define __SCC_H__

/*******************************************************************************
 * Define exported macro
 ******************************************************************************/
#define SCC_ON_PCORE    1
#define SCC_ON_L1CORE   0

/*******************************************************************************
 * Include header files
 ******************************************************************************/
#include "kal_general_types.h"
#include "reg_base.h"

/*******************************************************************************
 * Define data structure
 ******************************************************************************/
typedef enum {
   SCC_OK = 0,
   SCC_FAIL,
   SCC_DISABLED,
   SCC_RES_LOCKED,
   SCC_SDF_STARTED,
   SCC_FEATURE_NOT_SUPPORTED,
   SCC_TRACE_TOP_LINK_NOT_READY,
   SCC_SIB_NOT_DETECTED
} SCC_RESULT;

typedef enum {
   SCC_TRACE_TOP_READY = 0,
   SCC_TRACE_TOP_NOT_READY
} SCC_TRACE_TOP_STATUS;

typedef enum {
   SCC_CAPTURE_NOT_RUNNING = 0,
   SCC_CAPTURE_RUNNING
} SCC_CAPTURE_STATUS;

typedef enum {
   MODEM_L1_PORT = 0,
   MTAD_PORT,
   C2K_PORT,
   LTEL2_PORT,
   PTRNGEN1_PORT,
   HSPAL2_PORT,
   SDF_PORT,
   FLUSH_MSTR_PORT,
   TOTAL_PORT_NUM
} CSTF_PORT;

typedef enum {
    SCC_SDF_OPERATION_MODE_STANDALONE /*        */= 0,
    SCC_SDF_OPERATION_MODE_TARGET_CAN_CONFIG /* */= SCC_SDF_OPERATION_MODE_STANDALONE,

    SCC_SDF_OPERATION_MODE_AUTO /*              */= 1,
    SCC_SDF_OPERATION_MODE_SIB_CAN_CONFIG /*    */= SCC_SDF_OPERATION_MODE_AUTO,
    SCC_SDF_OPERATION_MODE_TARGET_CAN_START /*  */= SCC_SDF_OPERATION_MODE_AUTO,

    SCC_SDF_OPERATION_MODE_SEMI_AUTO /*         */= 2,
    SCC_SDF_OPERATION_MODE_SIB_CAN_START /*     */= SCC_SDF_OPERATION_MODE_SEMI_AUTO,
    SCC_SDF_OPERATION_MODE_TARGET_CAN_STOP /*   */= SCC_SDF_OPERATION_MODE_SEMI_AUTO,

    SCC_SDF_OPERATION_MODE_MANUAL /*            */= 3,
    SCC_SDF_OPERATION_MODE_SIB_CAN_STOP /*      */= SCC_SDF_OPERATION_MODE_MANUAL,
} SCC_SDF_OPERATION_MODE;

typedef enum {
    SCC_SDF_DISABLE_EN = 0,
    SCC_SDF_ENABLE_EN  = 1,
} SCC_SDF_EN_SEL;

typedef enum {
   SCC_SDF_CONT_MODE = 0,
   SCC_SDF_DIFF_MODE = 1,
} SCC_SDF_MODE_SEL;

typedef enum {
   SCC_SDF_8BIT_WIDTH  = 0,
   SCC_SDF_16BIT_WIDTH = 1,
   SCC_SDF_32BIT_WIDTH = 2
} SCC_SDF_WIDTH_SEL;

typedef enum {
    SCC_SDF_600MHZ_CLOCK = 0,
    SCC_SDF_300MHZ_CLOCK = 1,
    SCC_SDF_150MHZ_CLOCK = 2,
    SCC_SDF_75MHZ_CLOCK  = 3
} SCC_SDF_CLOCK_SEL;

typedef struct {
   kal_bool in_progress;
   kal_bool overflowed;
} SCC_SDF_STATUS;

typedef enum {
   SCC_SDF_SIB_TRIGGER = 0,
   SCC_SDF_TARGET_TRIGGER = 1,
} SCC_SDF_TRIGGER_MODE;
typedef enum {
   SCC_SDF_DBGMON_BYTE0_MUX = 0,
   SCC_SDF_DBGMON_BYTE1_MUX = 1,
   SCC_SDF_DBGMON_BYTE2_MUX = 2,
   SCC_SDF_DBGMON_BYTE3_MUX = 3,
   SCC_SDF_SWGPIO_BYTE0_MUX = 4,
   SCC_SDF_SWGPIO_BYTE1_MUX = 5,
   SCC_SDF_SWGPIO_BYTE2_MUX = 6,
   SCC_SDF_SWGPIO_BYTE3_MUX = 7
} SCC_SDF_MUX_SEL;

typedef enum {
    SCC_SDF_ASSERT_STOP_NOTHING = 0,
    SCC_SDF_ASSERT_STOP_ASSERT  = 1,
} SCC_SDF_ASSERT_STOP_SEL;

typedef struct {
    SCC_SDF_OPERATION_MODE      operation;
    SCC_SDF_EN_SEL              en; //for sdf_get_config only
    SCC_SDF_MODE_SEL            mode;
    SCC_SDF_WIDTH_SEL           width;
    kal_uint32                  enBitmap;
    SCC_SDF_CLOCK_SEL           clock;
    SCC_SDF_MUX_SEL             mux0;
    SCC_SDF_MUX_SEL             mux1;
    SCC_SDF_MUX_SEL             mux2;
    SCC_SDF_MUX_SEL             mux3;
    kal_uint32                  swGpio;
    SCC_SDF_ASSERT_STOP_SEL     assert;
} SCC_SDF_CONFIG_PARAM;

typedef enum {
   SCC_MCULOG = 0,
   SCC_DSPLOG_MDL,
   SCC_DSPLOG_MDP,
   SCC_DSPLOG_MTOL,
   SCC_LOG_PATH_NUM
} SCC_LOG_PATH;

typedef struct {
	kal_bool b8ATBFull;
	kal_uint8 u8FifoDepthAT1;
	kal_uint8 u8FifoDepthAT2;
} SCC_ST_PCC_FIFO_STATUS;

typedef enum {
	SCC_EN_PCC_CAPMODE_TDD_ADC_BYPASS = 0,
	SCC_EN_PCC_CAPMODE_C2K_ADC_BYPASS = 1,
	SCC_EN_PCC_CAPMODE_LTE_INTP = 2,
	SCC_EN_PCC_CAPMODE_FDD_INTP = 3,
	SCC_EN_PCC_CAPMODE_TDD_INTP = 4,
	SCC_EN_PCC_CAPMODE_C2K_INTP = 5,
	SCC_EN_PCC_CAPMODE_LTE_CS = 6,
	SCC_EN_PCC_CAPMODE_LTE_INTP_CS_C0 = 7,
	SCC_EN_PCC_CAPMODE_LTE_INTP_CS_C1 = 8,
	SCC_EN_PCC_CAPMODE_TDD_IQC = 9,
	SCC_EN_PCC_CAPMODE_C2K_IQC =10,
	SCC_EN_PCC_CAPMODE_TXDFE_DET_REF_DIST = 11,
	SCC_EN_PCC_CAPMODE_TXDFE_DET_REF_COMB = 12,
	SCC_EN_PCC_CAPMODE_MAX
}SCC_EN_PCC_CAPTURE_MODE;

typedef struct _SCC_ST_ATB_PATH_SEL {
	kal_bool b8P11Enable;
	kal_bool b8P12Enable;
	kal_bool b8AdjEnable;
} SCC_ST_ATB_PATH_SEL;

typedef struct
{
    kal_uint32 addr;
    kal_uint32 length;
} SCC_TRACETOP_RUNTIME_MEMORY_INFO_T;

typedef enum {
    ET_PASS             = 0,
    TRACETOP_START_FAIL = 1,
    PCC_CONFIG          = 2,
    PCC_FSM_STA         = 3,
    PCC_OVERFLOW        = 4,
    TRACETOP_STOP       = 5,
    PCC_SOFT_RESET      = 6          
} SCC_ET_ERROR_CODE;

typedef enum { 
	SCC_ET_EN_TXDFE_DET     = 0, //only det
	SCC_ET_EN_TXDFE_REF     = 1, //only ref
	SCC_ET_EN_TXDFE_DET_REF = 2  //det and ref
} SCC_ET_EN_TX_CAPTURE_NODE;


/*******************************************************************************
 * Define exported function prototype
 ******************************************************************************/

/*
 * [FUNCTION]
 *      Initialize SCC required resources
 *
 * [PARAMETERS]
 *      N/A
 *
 * [RETURN]
 *      SCC_RESULT enum:
 *          SCC_OK - init operation succeeded
 *          SCC_FAIL - init operation failed
 */
SCC_RESULT scc_init(void);

/*
 * [FUNCTION]
 *      Get SIB's Trace top status
 *
 * [PARAMETERS]
 *      *status:
 *          SCC_TRACE_TOP_STATUS enum as a return value to indicate link ready or not ready
 *
 * [RETURN]
 *      SCC_RESULT enum:
 *          SCC_OK - status has been got successfully
 *          SCC_FAIL - API operation failed due to SCC channel issue, and therefore need users to re-call API again
 *          SCC_DISABLED - SCC corresponding feature option not enabled
 *          SCC_RES_LOCKED - other thread is calling SCC API and using SCC resource
 */
SCC_RESULT scc_tracetop_status(SCC_TRACE_TOP_STATUS *status);
#ifndef MT6763
/*
 * [FUNCTION]
 *      Allocate bandwidth for specified CSTF port
 *
 * [PARAMETERS]
 *      port:
 *          CSTF_PORT enum to specify CSTF port
 *
 *      MBps:
 *          Specified bandwidth in MBps
 *
 * [RETURN]
 *      SCC_RESULT enum:
 *          SCC_OK - bandwidth allocation operation succeeded
 *          SCC_FAIL - API operation failed due to SCC channel issue, and therefore need users to re-call API again
 *          SCC_DISABLED - SCC corresponding feature option not enabled
 *          SCC_RES_LOCKED - other thread is calling SCC API and using SCC resource 
 */
SCC_RESULT scc_bandwidth_alloc(CSTF_PORT port, kal_uint16 MBps);

/*
 * [FUNCTION]
 *      Get bandwidth allocation status for specified CSTF port
 *
 * [PARAMETERS]
 *      port:
 *          CSTF_PORT enum to specify CSTF port
 *
 *      *MBps:
 *          As a return value to indicate allocated bandwidth in MBps
 *
 *      *pct:
 *          As a return value to indicate allocated bandwidth percentage
 *
 * [RETURN]
 *      SCC_RESULT enum:
 *          SCC_OK - status has been got successfully
 *          SCC_FAIL - API operation failed due to SCC channel issue, and therefore need users to re-call API again
 *          SCC_DISABLED - SCC corresponding feature option not enabled
 *          SCC_RES_LOCKED - other thread is calling SCC API and using SCC resource 
 */
SCC_RESULT scc_bandwidth_status(CSTF_PORT port, kal_uint16 *MBps, kal_uint8 *pct);
#endif
/*
 * [FUNCTION]
 *      Set PCC config and start PCC capture
 *
 * [PARAMETERS]
 *      enCapMode:
 *          EN_PCC_CAPTURE_MODE enum to specify capture mode
 *
 *      *pstPathSel:
 *          As an input to specify selected  path for capture
 *
 *
 * [RETURN]
 *      SCC_RESULT enum:
 *          SCC_OK - config&stop operation succeeded
 *          SCC_FAIL - API operation failed due to SCC channel issue, and therefore need users to re-call API again
 *          SCC_DISABLED - SCC corresponding feature option not enabled
 *          SCC_RES_LOCKED - other thread is calling SCC API and using SCC resource
 */
SCC_RESULT scc_pcc_config_and_start(SCC_EN_PCC_CAPTURE_MODE enCapMode,SCC_ST_ATB_PATH_SEL* pstPathSel);

/*
 * [FUNCTION]
 *      Stop PCC capture only for one shot
 *      Simple version of scc_pcc_stop to reduce the stop operation time
 *
 * [PARAMETERS]
  *     N/A
 *
 * [RETURN]
 *      SCC_RESULT enum:
 *          SCC_OK - stop operation succeeded
 *          SCC_DISABLED - SCC corresponding feature option not enabled
 */
SCC_RESULT scc_pcc_stop_1shot(void);

/*
 * [FUNCTION]
 *      Stop PCC capture
 *
 * [PARAMETERS]
  *     N/A
 *
 * [RETURN]
 *      SCC_RESULT enum:
 *          SCC_OK - stop operation succeeded
 *          SCC_FAIL - API operation failed due to SCC channel issue, and therefore need users to re-call API again
 *          SCC_DISABLED - SCC corresponding feature option not enabled
 *          SCC_RES_LOCKED - other thread is calling SCC API and using SCC resource
 */
SCC_RESULT scc_pcc_stop(void);

/*
 * [FUNCTION]
 *      Get PCC capture status
 *
 * [PARAMETERS]
 *      *status:
 *          As a return value to indicate PCC capture running or not running
 *
 * [RETURN]
 *      SCC_RESULT enum:
 *          SCC_OK - status has been got successfully
 *          SCC_FAIL - API operation failed due to SCC channel issue, and therefore need users to re-call API again
 *          SCC_DISABLED - SCC corresponding feature option not enabled
 *          SCC_RES_LOCKED - other thread is calling SCC API and using SCC resource
 */
SCC_RESULT scc_pcc_status(SCC_CAPTURE_STATUS *status);


/*
 * [FUNCTION]
 *      Get PCC FIFO status
 *
 * [PARAMETERS]
 *      *pstFIFOStatus:
 *          As a return value to indicate PCC FIFO status
 *
 * [RETURN]
 *      SCC_RESULT enum:
 *          SCC_OK - status has been got successfully
 *          SCC_FAIL - API operation failed due to SCC channel issue, and therefore need users to re-call API again
 *          SCC_DISABLED - SCC corresponding feature option not enabled
 *          SCC_RES_LOCKED - other thread is calling SCC API and using SCC resource
 */
SCC_RESULT scc_pcc_fifo_status(SCC_ST_PCC_FIFO_STATUS *pstFIFOStatus);


SCC_RESULT scc_ppc_start(void);
SCC_RESULT scc_ppc_stop(void);
SCC_RESULT scc_ppc_config(void);
SCC_RESULT scc_ppc_status(void);

/*
 * [FUNCTION]
 *      Set SDF all config
 *
 * [PARAMETERS]
 *      config.width:
 *          SCC_SDF_WIDTH_SEL enum to specify selected SDF signal width
 *
 *      config.en_bitmap:
 *          bitmap to specify enabled signals for SDF monitoringa
 *          (bit as 1 - enable monitoring, bit as 0 - disable monitoring)
 *
 *      config.mode:
 *          SCC_SDF_MODE_SEL enum to specify selected traffic mode
 *
 *      config.mux0:
 *          SCC_SDF_MUX_SEL enum to specify selected mux0
 *
 *      config.mux1:
 *          SCC_SDF_MUX_SEL enum to specify selected mux1
 *
 *      config.mux2:
 *          SCC_SDF_MUX_SEL enum to specify selected mux2
 *
 *      config.mux3:
 *          SCC_SDF_MUX_SEL enum to specify selected mux3
 *
 *      config.clock:
 *          SCC_SDF_CLOCK_SEL enum to specify selected clock frequency
 *
 * [RETURN]
 *      SCC_RESULT enum:
 *          SCC_OK - config has been set successfully
 *          SCC_FAIL - API operation failed due to SCC channel issue, and therefore need users to re-call API again
 *          SCC_DISABLED - SCC corresponding feature option not enabled
 *          SCC_RES_LOCKED - other thread is calling SCC API and using SCC resource
 *          SCC_SDF_STARTED - SDF is already in running state, and therefore could not be configured
 */
SCC_RESULT scc_sdf_set_config(SCC_SDF_CONFIG_PARAM *config);

/*
 * [FUNCTION]
 *      Get SDF status
 *
 * [PARAMETERS]
 *      *status:
 *          As a return value to indicate SDF's status
 *          - Whether running or not
 *          - Ever occurred overflow or not
 *
 * [RETURN]
 *      SCC_RESULT enum:
 *          SCC_OK - status has been got successfully
 *          SCC_FAIL - API operation failed due to SCC channel issue, and therefore need users to re-call API again
 *          SCC_DISABLED - SCC corresponding feature option not enabled
 *          SCC_RES_LOCKED - other thread is calling SCC API and using SCC resource
 */
SCC_RESULT scc_sdf_status(SCC_SDF_STATUS *status);

/*
 * [FUNCTION]
 *      Set SDF SW GPIO
 *
 * [PARAMETERS]
 *      gpio_val:
 *          SW Program GPIO for debug flag
 *
 * [RETURN]
 *      SCC_RESULT enum:
 *          SCC_OK - status has been got successfully
 *          SCC_FAIL - API operation failed due to SCC channel issue, and therefore need users to re-call API again
 *          SCC_DISABLED - SCC corresponding feature option not enabled
 *          SCC_RES_LOCKED - other thread is calling SCC API and using SCC resource
 */
SCC_RESULT scc_sdf_set_sw_gpio(kal_uint32 gpio_val);

/*
 * [FUNCTION]
 *      Start SDF
 *
 * [PARAMETERS]
 *      N/A:
 *
 * [RETURN]
 *      SCC_RESULT enum:
 *          SCC_OK - SDF has been started successfully
 *          SCC_FAIL - API operation failed due to SCC channel issue, and therefore need users to re-call API again
 *          SCC_DISABLED - SCC corresponding feature option not enabled
 *          SCC_RES_LOCKED - other thread is calling SCC API and using SCC resource
 */
SCC_RESULT scc_sdf_start(void);

/*
 * [FUNCTION]
 *      Stop SDF
 *
 * [PARAMETERS]
 *      N/A:
 *
 * [RETURN]
 *      SCC_RESULT enum:
 *          SCC_OK - SDF has been stopped successfully
 *          SCC_FAIL - API operation failed due to SCC channel issue, and therefore need users to re-call API again
 *          SCC_DISABLED - SCC corresponding feature option not enabled
 *          SCC_RES_LOCKED - other thread is calling SCC API and using SCC resource
 */
SCC_RESULT scc_sdf_stop(void);

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
#endif

/*
 * [FUNCTION]
 *      Get SDF all config
 *
 * [PARAMETERS]
 *      config.width:
 *          Get selected SDF signal width setting config
 *
 *      config.en_bitmap:
 *          Get bitmap config for SDF monitoring
 *          (bit as 1 - enable monitoring, bit as 0 - disable monitoring)
 *
 *      config.mode:
 *          Get traffic mode config
 *
 *      config.mux0:
 *          Get mux0 config
 *
 *      config.mux1:
 *          Get mux1 config
 *
 *      config.mux2:
 *          Get mux2 config
 *
 *      config.mux3:
 *          Get mux3 config
 *
 *      config.clock:
 *          Get clock frequency config
 *
 * [RETURN]
 *      SCC_RESULT enum:
 *          SCC_OK - config has been set successfully
 *          SCC_FAIL - API operation failed due to SCC channel issue, and therefore need users to re-call API again
 *          SCC_DISABLED - SCC corresponding feature option not enabled
 *          SCC_RES_LOCKED - other thread is calling SCC API and using SCC resource
*/
SCC_RESULT scc_sdf_get_config(SCC_SDF_CONFIG_PARAM *config);

/*
 * [FUNCTION]
 *      Stop SDF
 *
 * [PARAMETERS]
 *      N/A:
 *
 * [RETURN]
 *      SCC_RESULT enum:
 *          SCC_OK - SDF has been stopped successfully
 *          SCC_FAIL - API operation failed due to SCC channel issue, and therefore need users to re-call API again
 *          SCC_DISABLED - SCC corresponding feature option not enabled
 *          SCC_RES_LOCKED - other thread is calling SCC API and using SCC resource
 */
SCC_RESULT scc_tracetop_stop(void);

/*
 * [FUNCTION]
 *      Return if selected log path output is set to SIB or not
 *
 * [PARAMETERS]
 *      path:
 *          SCC_LOG_PATH enum to specify selected log path
 *
 * [RETURN]
 *      kal_bool:
 *          KAL_TRUE - log path is to SIB
 *          KAL_FLASE - log path is to EMI
 */
kal_bool scc_is_log_path_to_sib(SCC_LOG_PATH path);

/*
 * [FUNCTION]
 *      Let EL1D get PCC current status
 *
 * [PARAMETERS]
 *      N/A
 *
 * [RETURN]
 *      kal_bool:
 *          KAL_TRUE  - The PCC current status is running
 *          KAL_FLASE - The PCC current status is not running
 *                      or not support SCC_SIB_SUPPORT option 
 */
kal_bool scc_force_mu_on_ind(void);

/*
 * [FUNCTION]
 *      SCC exception flow
 *
 * [PARAMETERS]
 *      N/A
 *
 * [RETURN]
 *      N/A
 *      
 */
void scc_exception_flow(void);

/*
 * [FUNCTION]
 *      SCC capture dump region info
 *
 * [PARAMETERS]
 *      *start_address:
 *          Get the capture dump region address
 *      *size:
 *          Get the cpature dump region size 
 *
 * [RETURN]
 *      N/A
 *      
 */
void scc_dump_region_info(kal_uint32 *start_address, kal_uint32 *size);

/*
 * [FUNCTION]
 *      Do ET Calibration on Sylvia
 *
 * [PARAMETERS]
 *      base_addr:
 *          ET EMI base_address
 *      length:
 *          ET EMI length
 *      ET_CaptureNode
 *          ET txdfe node
 * [RETURN]
 *      SCC_RESULT enum:
 *          SCC_OK - status has been got successfully
 *          SCC_FAIL - API operation failed due to SCC channel issue, and therefore need users to re-call API again
 */
SCC_RESULT scc_et_calibration_start(kal_uint32 base_addr, kal_uint32 length,SCC_ET_EN_TX_CAPTURE_NODE ET_CaptureNode);


/*
 * [FUNCTION]
 *      Do ET Calibration on Sylvia
 *
 * [PARAMETERS]
 *      info:
 *          Return structure to indicate IQ data info
 *              addr: IQ data start address
 *              size: IQ data length
 *
 * [RETURN]
 *      SCC_RESULT enum:
 *          SCC_OK - status has been got successfully
 *          SCC_FAIL - API operation failed due to SCC channel issue, and therefore need users to re-call API again
 */

SCC_RESULT scc_et_calibration_stop(SCC_TRACETOP_RUNTIME_MEMORY_INFO_T *info);
#endif  /* !__SCC_H__ */
