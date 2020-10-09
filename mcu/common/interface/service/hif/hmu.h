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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   hmu.c
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   This file is the header file of Host Interface Management Unit.
 *
 * Author:
 * -------
 * -------
 *
 *
 * ==========================================================================
 * $Log$
 *
 * 08 07 2017 cs.huang
 * [MOLY00268551] Task batch scheduling for LTE Low power
 * HMU for TG change
 *
 * 08 07 2017 cs.huang
 * [MOLY00268551] Task batch scheduling for LTE Low power
 * HMU for TG change
 *
 * 02 06 2017 steve.kao
 * [MOLY00195563] [6293][EL2][UPCM][RATDM][EPDCP] Initial feature integrations
 * 	
 * 	[UMOLYA][TRUNK][HMU] Set HMU_GPTIMER_PRIODIC_INTERVAL as 1 ms for UESIM only
 *
 * 09 26 2016 cammie.yang
 * [MOLY00195563] [6293][EL2][UPCM][RATDM][EPDCP] Initial feature integrations
 * [TRUNK] UPCM/RATDM/EPDCP feature integrations from PS.DEV
 *
 * 09 19 2016 cammie.yang
 * [MOLY00195563] [6293][EL2][UPCM][RATDM][EPDCP] Initial feature integrations
 * [PS.DEV][HMU] modify tick uint of HMU_GPTIMER_PRIODIC_INTERVAL in modis environment for NWSIM TC_7_3_6_1
 *
 * 11 11 2015 ap.wang
 * [MOLY00148947] [HMU] Change PALLADIUM GPT timer to 1ms
 * .
 *
 * 11 10 2015 ap.wang
 * [MOLY00148746] [HMU] Check timer feature
 * .
 *
 * 11 10 2015 ap.wang
 * [MOLY00148746] [HMU] Check timer feature
 *
 * 03 02 2015 ap.wang
 * [MOLY00097320] [HMU] Rollback HMU 10ms patch for FPGA to 1ms
 * Rollback HMU 10ms patch for FPGA
 *
 * 12 31 2014 ap.wang
 * [MOLY00089916] [HMU] HIF ON/OFF for power saving
 * .
 *
 * 11 13 2014 cs.huang
 * [MOLY00071215] [HMU] Modify HMU tick to 10ms for 6291 FPGA freqency too slow
 * Merging
 * 	
 * 	//UMOLY/DEV/MT6291_DEV/mcu/pcore/interface/service/hif/hmu.h
 * 	
 * 	to //UMOLY/TRUNK/UMOLY/mcu/pcore/interface/service/hif/hmu.h
 *
 * 07 04 2014 ap.wang
 * [MOLY00071481] [HMU] Add HIF boot init to Application init
 * .
 *
 *
 * 06 10 2014 ap.wang
 * [MOLY00067367] [HMU] Modify GPT timer to MS callback for R8 on MOLY
 * .
 *
 * 04 28 2014 ap.wang
 * [MOLY00063912] [HMU] HMU temp solution for K2 MD2
 * HMU temp solution for K2 MD2
 *
 * 03 11 2013 ap.wang
 * [MOLY00011696] [HMU] HMU code refine and compile warning fix
 * [HMU] Add copyright header and change ipc_reload condition
 ****************************************************************************/

/*******************************************************************************
 * Include header files
 *******************************************************************************/

#ifndef __HMU_H__
#define __HMU_H__

#include "hmu_conf_data.h"
/*************************************************************************
 * Type Definitions
 *************************************************************************/

//#if defined(__MTK_TARGET__)
//#define hmu_printf               dbg_print
//#else
//#define hmu_printf               	kal_printf
//#endif
#define hmu_printf

#define HMU_GPTIMER_INIT_INTERVAL	(100U)  //100 ms 

#if defined(__MTK_TARGET__)
    #if defined(__PALLADIUM__)
        #define HMU_GPTIMER_PRIODIC_INTERVAL (1U)	// 1ms 
    #elif defined(__FPGA__)
        #define HMU_GPTIMER_PRIODIC_INTERVAL (10U)	// 10ms 
    #else
        #define HMU_GPTIMER_PRIODIC_INTERVAL (1U)	// 1ms 
    #endif
#elif defined(__U4G_ADAPTOR__)
        #define HMU_GPTIMER_PRIODIC_INTERVAL (1U)	// 1ms. to ensure that GCF TC_7_3_6_1 will pass in NWSIM
#else
        #define HMU_GPTIMER_PRIODIC_INTERVAL (10U)	// 10ms
#endif

/** 
 * @brief enumeration for HMU API return codes 
 */
typedef enum
{
	HMU_OK							= 0,	

	HMU_INIT_NOFUNC					= (-1),
	HMU_NOT_INIT					= (-2),
	HMU_ALREADY_INIT				= (-3),
	
	HMU_QUERY_FAIL					= (-10),
	HMU_QUERY_OUTOFBUF 				= (-11),
	HMU_QUERY_NVRAMFAIL				= (-12),
	HMU_QUERY_NOMATCHING			= (-13),

}hmuReturnCode_enum;

typedef enum
{
	HMU_PRE_FUNC					= 0,	
	HMU_MAIN_FUNC					= 1,	
	HMU_POST_FUNC					= 2,	
}hmuFuncType_enum;

/** 
 * @brief hmu_check_timer() return value 
 */
typedef enum
{
        HMU_CHECK_TIMER_SUCCESS		= 0,
	HMU_CHECK_TIMER_WARNING		= 1,
	HMU_CHECK_TIMER_ERROR		= 2,
}HMU_CHECK_TIMER_ENUM;

/** 
 * @brief enumeration for HMU Boot method, 
 * Currently, we have
 * (1) HMU_BOOT_NORMAL : this setting is for normal booting with USB,SDIO,CCIF .... 
 *   When you select HMU_BOOT_NORMAL in hmu_init, the HMU configuration file will be loaded from NVRAM_EF_HMU_CONFIG_LID 
 * (2) HMU_BOOT_HD L this setting is for USB Host detection booting
 *   When you select HMU_BOOT_HD in hmu_init, the HMU configuration file will be loaded from NVRAM_EF_HMU_HD_CONFIG_LID  
 */
typedef enum
{
	HMU_BOOT_NORMAL =  0,
	HMU_BOOT_HD ,
}hmuBootType_enum;

typedef enum
{
	HMU_TIMER_SOURCE_DSP =  0,
	HMU_TIMER_SOURCE_SYS ,
}hmuTimerSource_enum;
/** 
 * @name: _HMU_INTERNAL_STRUCT
 * @brief the structure for Init function and hif emu device types registration table
 */
typedef struct _HMU_INTERNAL_STATE_STRUCT {
	kal_bool 	hmuBootInit;
	kal_bool 	hmuInit ;
	kal_eventgrpid		hmuHifEgId ;
} hmu_internal_state_struct ;

/*****************************************************************************
 * FUNCTION
 *  hmu_boot_init
 * DESCRIPTION
 *  HMU 1st boot Init function to init global mutex and gptimer
 * PARAMETERS
 *  
 * RETURNS
 *  success or fail
 *****************************************************************************/
kal_int32 hmu_boot_init(void) ;

/*****************************************************************************
 * FUNCTION
 *  hmu_hifeg_set
 * DESCRIPTION
 *  Set one or more the events to resume the HIF task.
 * PARAMETERS
 *  events - events to set. 
 *           See also HIF_DRV_EG_XXX defined in hmu_conf_data.h for more information.
 * RETURNS
 *  the eg set result, success or fail
 *****************************************************************************/
kal_status hmu_hifeg_set(kal_uint32 events);

/*****************************************************************************
 * FUNCTION
 *  hmu_hifeg_wait
 * DESCRIPTION
 *  Wait and clear the one or more HIF events.
 * PARAMETERS
 *  events - events to wait. 
 *           See also HIF_DRV_EG_XXX defined in hmu_conf_data.h for more information.
 * RETURNS
 *  The event happened.
 *****************************************************************************/
kal_uint32 hmu_hifeg_wait(kal_uint32 events);

/*****************************************************************************
 * FUNCTION
 *  hmu_start_hif_sys_timer
 * DESCRIPTION
 *  start the sys timer for HIF tasking. This API should be called from PWSV module to restart
 *  the timer after wake up from PWSV
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void hmu_start_hif_sys_timer(void) ;

/*****************************************************************************
 * FUNCTION
 *  hmu_stop_hif_sys_timer
 * DESCRIPTION
 *  stop the sys timer to pause HIF tasking. This API should be called at the beginning of 
 *  PWSV procedure
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void hmu_stop_hif_sys_timer(void) ;


/*****************************************************************************
 * FUNCTION
 *  hmu_dsp_timer_kick
 * DESCRIPTION
 *  The dsp periodical timer should kick this API to schedul the HIF tasking when the dsp 
 *  timer exists. 
 * PARAMETERS
 *  void
 * RETURNS
 *  void
 *****************************************************************************/
void hmu_dsp_timer_kick(void) ;

/*****************************************************************************
 * FUNCTION
 *  hmu_switch_hif_timer
 * DESCRIPTION
 *  The dsp periodical timer should kick this API to schedul the HIF tasking when the dsp 
 *  timer exists. 
 * PARAMETERS
 *  source - (1) HMU_TIMER_SOURCE_DSP 
 *			(2) HMU_TIMER_SOURCE_SYS
 * RETURNS
 *  void
 *****************************************************************************/
void hmu_switch_hif_timer(hmuTimerSource_enum source) ;

/*****************************************************************************
 * FUNCTION
 *  hmu_except_init
 *
 * DESCRIPTION
 *  Trigger an upper layer device module to hook with TTYCORE and then proceed 
 *  exception flow if an exception happens before hmu_init() completes.
 *
 * PARAMETERS
 *  N/A
 *
 * RETURNS
 *  KAL_TRUE if caller is allowed to proceed the exception flow; 
 *  KAL_FALSE if there's no proper callback function registered by 
 *            upper layer device modules or something wrong while executing 
 *            the callback function.
 *****************************************************************************/
kal_bool hmu_except_init(void); 

/*****************************************************************************
 * FUNCTION
 *  hif_boot_init
 * DESCRIPTION
 *  HIF boot init function to initial HIF module without task.
 * PARAMETERS
 *  
 * RETURNS
 *  success or fail
 *****************************************************************************/
kal_int32 hif_boot_init(void) ;

/*****************************************************************************
 * FUNCTION
 *  hmu_hifeg_stop
 * DESCRIPTION
 *  stop one or more HIF events.
 * PARAMETERS
 *  events - events to wait. 
 *           See also HIF_DRV_EG_XXX defined in hmu_conf_data.h for more information.
 * RETURNS
 *  The enabled events.
 *****************************************************************************/
kal_uint32 hmu_hifeg_stop(kal_uint32 events);

/*****************************************************************************
 * FUNCTION
 *  hmu_hifeg_start
 * DESCRIPTION
 *  start one or more HIF events.
 * PARAMETERS
 *  events - events to wait. 
 *           See also HIF_DRV_EG_XXX defined in hmu_conf_data.h for more information.
 * RETURNS
 *  The enabled events.
 *****************************************************************************/
kal_uint32 hmu_hifeg_start(kal_uint32 events);

/*****************************************************************************
 * FUNCTION
 * hmu_check_timer
 * DESCRIPTION
 * Check HMU timer source whether is normal 
 * PARAMETERS
 *  
 * RETURNS
 * HMU_CHECK_TIMER_ENUM : return checking result
 *****************************************************************************/
kal_uint32 hmu_check_timer(kal_uint32 events);

/*****************************************************************************
 * FUNCTION
 * hmu_check_timer_start / hmu_check_timer_stop 
 * DESCRIPTION
 * Start / Stop HMU checking timer
 * PARAMETERS
 *  
 * RETURNS
 *****************************************************************************/
void hmu_check_timer_start();
void hmu_check_timer_stop();

/*****************************************************************************
 * FUNCTION
 * hmu_tg_callback
 * DESCRIPTION
 * Callback from task group hisr
 * PARAMETERS
 *  
 * RETURNS
 *****************************************************************************/
#if defined(__LP_SCHEDULE_ENABLE__) && defined(__LP_SCHEDULE_HMU_RESCHEDULE__)
#define __HMU_TG_TIMER_SUPPORT__
#endif
void hmu_tg_timer_callback();

#endif /*__HMU_H__*/
