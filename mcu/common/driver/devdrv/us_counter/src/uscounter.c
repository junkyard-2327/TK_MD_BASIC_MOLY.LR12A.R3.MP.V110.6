/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   uscounter.c
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   This function implements uscounter.
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*******************************************************************************
 * Include header files
 *******************************************************************************/

#include "kal_public_api.h"
#include "reg_base.h"
#include "us_timer.h"
#include "md2g_drv.h"
//#include "kal_general_types.h"
#include "sleepdrv_interface.h"
#include "intrCtrl.h"       /* for SaveAndSetIRQMask */
#include "kal_iram_section_defs.h"      /* for section declaration */
#if !defined(__CENTRALIZED_SLEEP_MANAGER__)
#include "drvpdn.h"
#endif /* __CENTRALIZED_SLEEP_MANAGER__ */
#include "init_comm.h"

#if defined(__HW_US_TIMER_SUPPORT__)

/*************************************************************************
* FUNCTION
*  USC_Start
*
* DESCRIPTION
*  This function starts the uscounter.
*
* PARAMETERS
*  none
*
* RETURNS
*  none
*
*************************************************************************/
void USC_Start()
{

#ifdef ESIM_BUILD_CONFIG
    HW_WRITE(USCNT_CON, 1);
#else /* ESIM_BUILD_CONFIG */
    /* In real target, FRC is inited in "ENABLE_FRC" of bootarm_gcc.S, we don't re-init again here. 
       "ENABLE_FRC" is an assembly macro in MD_TOPSM_private.h */
    //MD_TOPSM_EnableFRC();
#endif

}

/*************************************************************************
* FUNCTION
*  USC_Stop
*
* DESCRIPTION
*  This function stops the uscounter.
*
* PARAMETERS
*  none
*
* RETURNS
*  none
*
*************************************************************************/
void USC_Stop()
{
#ifdef ESIM_BUILD_CONFIG
   HW_WRITE(USCNT_CON, 1);
#else
   kal_uint32 SHOULD_NOT_STOP_US_COUNTER = 0;
   ASSERT(SHOULD_NOT_STOP_US_COUNTER);

#endif   
}

/*************************************************************************
* FUNCTION
*  USC_Get_TimeStamp
*
* DESCRIPTION
*  This function calculate the frame number.
*
* PARAMETERS
*  none
*
* RETURNS
*  Frame number since system power up
*
*************************************************************************/
kal_uint32 __MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE USC_Get_TimeStamp(void)
{
    /* Get OS timer from FMA or OSTD source */
    return ust_get_os_timer();
}

#endif //__HW_US_TIMER_SUPPORT__

