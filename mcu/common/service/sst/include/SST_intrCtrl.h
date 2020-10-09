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
 *   SST_intrCtrl.h 
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   Header file for non-release version of interrupt control.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __SST_INTRCTRL_H__
#define __SST_INTRCTRL_H__

#include "us_timer.h"
#include "reg_base.h"

#if !defined(__FPGA__)
#define __HARD_REAL_TIME_CHECK__   //SW timing check
//#define __MDCIRQ_TIMING_CHECK_EN__ //HW timing check
//#define __DEADLOCK_DETECTION__
//#define __HARD_REAL_TIME_CHECK_LOG_LEVEL__
#else
//#define __HARD_REAL_TIME_CHECK__   //SW timing check
//#define __MDCIRQ_TIMING_CHECK_EN__ //HW timing check
//#define __DEADLOCK_DETECTION__
#endif

#if defined(__DEADLOCK_DETECTION__) && defined(__MDCIRQ_TIMING_CHECK_EN__)
#error "deadlock detection and HW timing check cannot use together"
#endif
#if defined(__MDCIRQ_TIMING_CHECK_EN__) && !defined(__HARD_REAL_TIME_CHECK__)
#error "We also need SW timing check for normal domain calling ITC APIs although HW timing check is enable"
#endif


#if defined(__HARD_REAL_TIME_CHECK_LOG_LEVEL__) && !defined(__HARD_REAL_TIME_CHECK__)
#error "Qbits check is not enable!! Qbits check fail logging cannot enable standalone!!"
#endif


#define SST_HR_DUR_HRT (45)
#define SST_HR_DUR_NON_HRT (1000)
#if defined(__HARD_REAL_TIME_CHECK_LOG_LEVEL__)
#define SST_HR_DUR_HRT_LOG (55)
#endif

#if defined(__FPGA__)
#define SST_HR_DUR_HRT_WD (2000*1000)
#define SST_HR_DUR_NON_HRT_WD (2000*1000)
#else
#define SST_HR_DUR_HRT_WD (2000)
#define SST_HR_DUR_NON_HRT_WD (2000)

#endif 

#define SST_IRQ_MASK (0x00000001)

#if defined(__HW_US_TIMER_SUPPORT__) /* !__CR4__ */

#define GET_AND_SAVED_TIME(v, vpe_num) do{\
                                IRQMaskCounter[vpe_num] = ust_get_current_time();\
                                IRQMaskValue[vpe_num] = v;\
                              }while(0)

#define GET_AND_SAVED_TIME_HRT(vpe_num) do{\
                                HRTQbitCounter[vpe_num] = ust_get_current_time();\
                              }while(0)

#define GET_CURRENT_TIME(v) do{\
                                v = ust_get_current_time();\
                             }while(0)

#define GET_SAVED_TIME(v,vpe_num)  do{\
                                v = IRQMaskCounter[vpe_num];\
                             }while(0)

#define GET_SAVED_TIME_HRT(v,vpe_num)  do{\
                                v = HRTQbitCounter[vpe_num];\
                             }while(0)

#define GET_DURATION(d,t1,t2) do{\
                                 d = ((t2) >= (t1)) ? ((t2) - (t1)) : (USCNT_WRAP - (t1) + (t2));\
                              }while(0)

#define TRANS_TO_QBIT(d,s) do{\
                              d = (((s)*13)/12);\
                              }while(0)

#if defined(__FPGA__)
#define IRQ_DISABLE_MAX_DURATION_HRT    ((SST_HR_DUR_HRT*12)/13*1000)
#define IRQ_DISABLE_MAX_DURATION_NON_HRT    ((SST_HR_DUR_NON_HRT*12)/13*1000)
#else
#define IRQ_DISABLE_MAX_DURATION_HRT    ((SST_HR_DUR_HRT*12)/13)
#define IRQ_DISABLE_MAX_DURATION_NON_HRT    ((SST_HR_DUR_NON_HRT*12)/13)
#endif 

#if defined(__HARD_REAL_TIME_CHECK_LOG_LEVEL__)
#define IRQ_DISABLE_MAX_DURATION_HRT_LOG    ((SST_HR_DUR_HRT_LOG*12)/13)
#endif

#if defined(__HARD_REAL_TIME_CHECK_LOG_LEVEL__)
typedef struct{
    kal_uint32 violationAddress;
    kal_uint32 violationDuration;
} HRTQbitFailLogStruct;
#define HRTQbitFailLogSize 32
#endif

#else /* !__HW_US_TIMER_SUPPORT__ */

#error "No timing check counter support!"

#endif /* __HW_US_TIMER_SUPPORT__ */

kal_uint32 query_Qbits_criteria_nonHRT(void);
kal_uint32 query_Qbits_criteria_nonHRT_us(void);
kal_uint32 query_Qbits_criteria_HRT(void);
kal_uint32 query_Qbits_criteria_HRT_us(void);

#endif /* __SST_INTRCTRL_H__ */
