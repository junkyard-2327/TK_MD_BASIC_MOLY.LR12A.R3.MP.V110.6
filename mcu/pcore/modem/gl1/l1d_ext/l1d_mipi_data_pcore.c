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

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   l1d_mipi_data_pcore.c
 *
 * Project:
 * --------
 *   TK6291
 *
 * Description:
 * ------------
 *   Definition of global data & tables used in L1D
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
 * $Revision:
 * $Modtime:
 * $Log:
 *
 *******************************************************************************/

#include  "l1d_cid.h"
#include  "l1d_custom_rf.h"
#if IS_MIPI_SUPPORT
#include  "l1d_mipi_data_common.h"
#include  "l1d_custom_mipi.h"
#include  "l1d_mipi_pcore.h"
#endif

/*===============================================================================================*/
#if IS_MIPI_SUPPORT

   #if IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
#define GGE_MIPI_EVNET_TIMING_CHECK_MARGIN 3 /* BSI/MIPI Event duration is 2QB if multi_strobe supported */
   #else
#error "Please define mipi event gap (GGE_MIPI_EVNET_TIMING_CHECK_MARGIN) at l1d_mipi_data.c"
   #endif   

/* General timing check for slot 0 RX window */
   #if TQ_MIPI_RX_ON0>TQ_AFC_READY
#error "TQ_TQ_MIPI_RX_ON0 should not be larger than TQ_AFC_READY"
   #endif

   #if TQ_MIPI_RX_ON1>TQ_AFC_READY
#error "TQ_TQ_MIPI_RX_ON1 should not be larger than TQ_AFC_READY"
   #endif

   #if TQ_MIPI_RX_ON2>TQ_AFC_READY
#error "TQ_TQ_MIPI_RX_ON2 should not be larger than TQ_AFC_READY"
   #endif

   #if TQ_MIPI_RX_ON3>TQ_AFC_READY
#error "TQ_TQ_MIPI_RX_ON3 should not be larger than TQ_AFC_READY"
   #endif

   #if TQ_MIPI_RX_ON4>TQ_AFC_READY
#error "TQ_TQ_MIPI_RX_ON4 should not be larger than TQ_AFC_READY"
   #endif

   #if TQ_MIPI_RX_ON5>TQ_AFC_READY
#error "TQ_TQ_MIPI_RX_ON5 should not be larger than TQ_AFC_READY"
   #endif

   #if TQ_MIPI_RX_ON6>TQ_AFC_READY
#error "TQ_TQ_MIPI_RX_ON6 should not be larger than TQ_AFC_READY"
   #endif

   #if TQ_MIPI_RX_ON7>TQ_AFC_READY
#error "TQ_TQ_MIPI_RX_ON7 should not be larger than TQ_AFC_READY"
   #endif

#if L1D_PM_ENHANCE
   #if ( ( TQ_MIPI_RX_OFF0 >= TQ_PM_WIN_OFF_MARGIN )&&( QB_MIPI_RX_OFF0!= 10000 ) )
//#warning "TQ_MIPI_RX_OFF0 = QB_MIPI_RX_OFF0-QB_FSYNC_2_ROFF suggest smaller than 8"
   #endif
   #if ( ( TQ_MIPI_RX_OFF1 >= TQ_PM_WIN_OFF_MARGIN )&&( QB_MIPI_RX_OFF1!= 10000 ) )
//#warning "TQ_MIPI_RX_OFF1 = QB_MIPI_RX_OFF1-QB_FSYNC_2_ROFF suggest smaller than 8"
   #endif
   #if ( ( TQ_MIPI_RX_OFF2 >= TQ_PM_WIN_OFF_MARGIN )&&( QB_MIPI_RX_OFF2!= 10000 ) )
//#warning "TQ_MIPI_RX_OFF2 = QB_MIPI_RX_OFF2-QB_FSYNC_2_ROFF suggest smaller than 8"
   #endif
   #if ( ( TQ_MIPI_RX_OFF3 >= TQ_PM_WIN_OFF_MARGIN )&&( QB_MIPI_RX_OFF3!= 10000 ) )
//#warning "TQ_MIPI_RX_OFF3 = QB_MIPI_RX_OFF3-QB_FSYNC_2_ROFF suggest smaller than 8"
   #endif
   #if ( ( TQ_MIPI_RX_OFF4 >= TQ_PM_WIN_OFF_MARGIN )&&( QB_MIPI_RX_OFF4!= 10000 ) )
//#warning "TQ_MIPI_RX_OFF4 = QB_MIPI_RX_OFF4-QB_FSYNC_2_ROFF suggest smaller than 8"
   #endif
#endif

//multievent - 5QB  detect RX on
   #if ( QB_MIPI_RX_ON0 != -10000 )
      #if ( ( ( QB_MIPI_RX_ON0 - QB_MIPI_RX_ON1 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON0 - QB_MIPI_RX_ON1 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON0 & QB_MIPI_RX_ON1 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON0 - QB_MIPI_RX_ON2 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON0 - QB_MIPI_RX_ON2 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON0 & QB_MIPI_RX_ON2 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON0 - QB_MIPI_RX_ON3 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON0 - QB_MIPI_RX_ON3 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON0 & QB_MIPI_RX_ON3 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON0 - QB_MIPI_RX_ON4 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON0 - QB_MIPI_RX_ON4 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON0 & QB_MIPI_RX_ON4 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON0 - QB_MIPI_RX_ON5 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON0 - QB_MIPI_RX_ON5 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON0 & QB_MIPI_RX_ON5 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON0 - QB_MIPI_RX_ON6 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON0 - QB_MIPI_RX_ON6 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON0 & QB_MIPI_RX_ON6 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON0 - QB_MIPI_RX_ON7 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON0 - QB_MIPI_RX_ON7 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON0 & QB_MIPI_RX_ON7 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #endif
   #endif

   #if ( QB_MIPI_RX_ON1 != -10000 )
      #if ( ( ( QB_MIPI_RX_ON1 - QB_MIPI_RX_ON0 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON1 - QB_MIPI_RX_ON0 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON1 & QB_MIPI_RX_ON0 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON1 - QB_MIPI_RX_ON2 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON1 - QB_MIPI_RX_ON2 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON1 & QB_MIPI_RX_ON2 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON1 - QB_MIPI_RX_ON3 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON1 - QB_MIPI_RX_ON3 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON1 & QB_MIPI_RX_ON3 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON1 - QB_MIPI_RX_ON4 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON1 - QB_MIPI_RX_ON4 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON1 & QB_MIPI_RX_ON4 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON1 - QB_MIPI_RX_ON5 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON1 - QB_MIPI_RX_ON5 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON1 & QB_MIPI_RX_ON5 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON1 - QB_MIPI_RX_ON6 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON1 - QB_MIPI_RX_ON6 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON1 & QB_MIPI_RX_ON6 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON1 - QB_MIPI_RX_ON7 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON1 - QB_MIPI_RX_ON7 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON1 & QB_MIPI_RX_ON7 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #endif
   #endif

   #if ( QB_MIPI_RX_ON2 != -10000 )
      #if ( ( ( QB_MIPI_RX_ON2 - QB_MIPI_RX_ON0 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON2 - QB_MIPI_RX_ON0 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON2 & QB_MIPI_RX_ON0 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON2 - QB_MIPI_RX_ON1 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON2 - QB_MIPI_RX_ON1 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON2 & QB_MIPI_RX_ON1 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON2 - QB_MIPI_RX_ON3 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON2 - QB_MIPI_RX_ON3 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON2 & QB_MIPI_RX_ON3 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON2 - QB_MIPI_RX_ON4 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON2 - QB_MIPI_RX_ON4 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON2 & QB_MIPI_RX_ON4 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON2 - QB_MIPI_RX_ON5 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON2 - QB_MIPI_RX_ON5 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON2 & QB_MIPI_RX_ON5 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON2 - QB_MIPI_RX_ON6 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON2 - QB_MIPI_RX_ON6 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON2 & QB_MIPI_RX_ON6 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON2 - QB_MIPI_RX_ON7 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON2 - QB_MIPI_RX_ON7 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON2 & QB_MIPI_RX_ON7 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #endif
   #endif


   #if ( QB_MIPI_RX_ON3 != -10000 )
      #if ( ( ( QB_MIPI_RX_ON3 - QB_MIPI_RX_ON0 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON3 - QB_MIPI_RX_ON0 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON3 & QB_MIPI_RX_ON0 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON3 - QB_MIPI_RX_ON1 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON3 - QB_MIPI_RX_ON1 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON3 & QB_MIPI_RX_ON1 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON3 - QB_MIPI_RX_ON2 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON3 - QB_MIPI_RX_ON2 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON3 & QB_MIPI_RX_ON2 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON3 - QB_MIPI_RX_ON4 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON3 - QB_MIPI_RX_ON4 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON3 & QB_MIPI_RX_ON4 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON3 - QB_MIPI_RX_ON5 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON3 - QB_MIPI_RX_ON5 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON3 & QB_MIPI_RX_ON5 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON3 - QB_MIPI_RX_ON6 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON3 - QB_MIPI_RX_ON6 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON3 & QB_MIPI_RX_ON6 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON3 - QB_MIPI_RX_ON7 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON3 - QB_MIPI_RX_ON7 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON3 & QB_MIPI_RX_ON7 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #endif
   #endif

   #if ( QB_MIPI_RX_ON4 != -10000 )
      #if ( ( ( QB_MIPI_RX_ON4 - QB_MIPI_RX_ON0 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON4 - QB_MIPI_RX_ON0 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON4 & QB_MIPI_RX_ON0 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON4 - QB_MIPI_RX_ON1 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON4 - QB_MIPI_RX_ON1 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON4 & QB_MIPI_RX_ON1 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON4 - QB_MIPI_RX_ON2 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON4 - QB_MIPI_RX_ON2 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON4 & QB_MIPI_RX_ON2 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON4 - QB_MIPI_RX_ON3 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON4 - QB_MIPI_RX_ON3 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON4 & QB_MIPI_RX_ON3 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON4 - QB_MIPI_RX_ON5 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON4 - QB_MIPI_RX_ON5 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON4 & QB_MIPI_RX_ON5 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON4 - QB_MIPI_RX_ON6 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON4 - QB_MIPI_RX_ON6 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON4 & QB_MIPI_RX_ON6 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON4 - QB_MIPI_RX_ON7 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON4 - QB_MIPI_RX_ON7 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON4 & QB_MIPI_RX_ON7 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #endif
   #endif


   #if ( QB_MIPI_RX_ON5 != -10000 )
      #if ( ( ( QB_MIPI_RX_ON5 - QB_MIPI_RX_ON0 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON5 - QB_MIPI_RX_ON0 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON5 & QB_MIPI_RX_ON0 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON5 - QB_MIPI_RX_ON1 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON5 - QB_MIPI_RX_ON1 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON5 & QB_MIPI_RX_ON1 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON5 - QB_MIPI_RX_ON2 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON5 - QB_MIPI_RX_ON2 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON5 & QB_MIPI_RX_ON2 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON5 - QB_MIPI_RX_ON3 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON5 - QB_MIPI_RX_ON3 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON5 & QB_MIPI_RX_ON3 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON5 - QB_MIPI_RX_ON4 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON5 - QB_MIPI_RX_ON4 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON5 & QB_MIPI_RX_ON4 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON5 - QB_MIPI_RX_ON6 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON5 - QB_MIPI_RX_ON6 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON5 & QB_MIPI_RX_ON6 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON5 - QB_MIPI_RX_ON7 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON5 - QB_MIPI_RX_ON7 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON5 & QB_MIPI_RX_ON7 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #endif
   #endif


   #if ( QB_MIPI_RX_ON6 != -10000 )
      #if ( ( ( QB_MIPI_RX_ON6 - QB_MIPI_RX_ON0 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON6 - QB_MIPI_RX_ON0 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON6 & QB_MIPI_RX_ON0 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON6 - QB_MIPI_RX_ON1 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON6 - QB_MIPI_RX_ON1 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON6 & QB_MIPI_RX_ON1 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON6 - QB_MIPI_RX_ON2 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON6 - QB_MIPI_RX_ON2 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON6 & QB_MIPI_RX_ON2 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON6 - QB_MIPI_RX_ON3 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON6 - QB_MIPI_RX_ON3 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON6 & QB_MIPI_RX_ON3 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON6 - QB_MIPI_RX_ON4 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON6 - QB_MIPI_RX_ON4 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON6 & QB_MIPI_RX_ON4 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON6 - QB_MIPI_RX_ON5 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON6 - QB_MIPI_RX_ON5 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON6 & QB_MIPI_RX_ON5 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON6 - QB_MIPI_RX_ON7 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON6 - QB_MIPI_RX_ON7 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON6 & QB_MIPI_RX_ON7 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #endif
   #endif


   #if ( QB_MIPI_RX_ON7 != -10000 )
      #if ( ( ( QB_MIPI_RX_ON7 - QB_MIPI_RX_ON0 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON7 - QB_MIPI_RX_ON0 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON7 & QB_MIPI_RX_ON0 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON7 - QB_MIPI_RX_ON1 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON7 - QB_MIPI_RX_ON1 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON7 & QB_MIPI_RX_ON1 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON7 - QB_MIPI_RX_ON2 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON7 - QB_MIPI_RX_ON2 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON7 & QB_MIPI_RX_ON2 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON7 - QB_MIPI_RX_ON3 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON7 - QB_MIPI_RX_ON3 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON7 & QB_MIPI_RX_ON3 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON7 - QB_MIPI_RX_ON4 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON7 - QB_MIPI_RX_ON4 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON7 & QB_MIPI_RX_ON4 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON7 - QB_MIPI_RX_ON5 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON7 - QB_MIPI_RX_ON5 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON7 & QB_MIPI_RX_ON5 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_ON7 - QB_MIPI_RX_ON6 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_ON7 - QB_MIPI_RX_ON6 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_ON7 & QB_MIPI_RX_ON6 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #endif
   #endif

//multievent - 5QB  detect RX off
   #if ( QB_MIPI_RX_OFF0 != 10000 )
      #if   ( ( ( QB_MIPI_RX_OFF0 - QB_MIPI_RX_OFF1) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_OFF0 - QB_MIPI_RX_OFF1 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_OFF0 & QB_MIPI_RX_OFF1 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_OFF0 - QB_MIPI_RX_OFF2) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_OFF0 - QB_MIPI_RX_OFF2 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_OFF0 & QB_MIPI_RX_OFF2 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_OFF0 - QB_MIPI_RX_OFF3) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_OFF0 - QB_MIPI_RX_OFF3 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_OFF0 & QB_MIPI_RX_OFF3 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_OFF0 - QB_MIPI_RX_OFF4) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_OFF0 - QB_MIPI_RX_OFF4 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_OFF0 & QB_MIPI_RX_OFF4 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #endif
   #endif

   #if ( QB_MIPI_RX_OFF1 != 10000 )
      #if   ( ( ( QB_MIPI_RX_OFF1 - QB_MIPI_RX_OFF0) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_OFF1 - QB_MIPI_RX_OFF0 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_OFF1 & QB_MIPI_RX_OFF0 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_OFF1 - QB_MIPI_RX_OFF2) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_OFF1 - QB_MIPI_RX_OFF2 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_OFF1 & QB_MIPI_RX_OFF2 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_OFF1 - QB_MIPI_RX_OFF3) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_OFF1 - QB_MIPI_RX_OFF3 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_OFF1 & QB_MIPI_RX_OFF3 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_OFF1 - QB_MIPI_RX_OFF4) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_OFF1 - QB_MIPI_RX_OFF4 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_OFF1 & QB_MIPI_RX_OFF4 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #endif
   #endif

   #if ( QB_MIPI_RX_OFF2 != 10000 )
      #if   ( ( ( QB_MIPI_RX_OFF2 - QB_MIPI_RX_OFF0) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_OFF2 - QB_MIPI_RX_OFF0 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_OFF2 & QB_MIPI_RX_OFF0 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_OFF2 - QB_MIPI_RX_OFF1) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_OFF2 - QB_MIPI_RX_OFF1 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_OFF2 & QB_MIPI_RX_OFF1 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_OFF2 - QB_MIPI_RX_OFF3) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_OFF2 - QB_MIPI_RX_OFF3 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_OFF2 & QB_MIPI_RX_OFF3 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_OFF2 - QB_MIPI_RX_OFF4) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_OFF2 - QB_MIPI_RX_OFF4 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_OFF2 & QB_MIPI_RX_OFF4 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #endif
   #endif

   #if ( QB_MIPI_RX_OFF3 != 10000 )
      #if   ( ( ( QB_MIPI_RX_OFF3 - QB_MIPI_RX_OFF0) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_OFF3 - QB_MIPI_RX_OFF0 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_OFF3 & QB_MIPI_RX_OFF0 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_OFF3 - QB_MIPI_RX_OFF1) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_OFF3 - QB_MIPI_RX_OFF1 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_OFF3 & QB_MIPI_RX_OFF1 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_OFF3 - QB_MIPI_RX_OFF2) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_OFF3 - QB_MIPI_RX_OFF2 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_OFF3 & QB_MIPI_RX_OFF2 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_OFF3 - QB_MIPI_RX_OFF4) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_OFF3 - QB_MIPI_RX_OFF4 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_OFF3 & QB_MIPI_RX_OFF4 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #endif
   #endif

   #if ( QB_MIPI_RX_OFF4 != 10000 )
      #if   ( ( ( QB_MIPI_RX_OFF4 - QB_MIPI_RX_OFF0) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_OFF4 - QB_MIPI_RX_OFF0 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_OFF4 & QB_MIPI_RX_OFF0 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_OFF4 - QB_MIPI_RX_OFF1) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_OFF4 - QB_MIPI_RX_OFF1 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_OFF4 & QB_MIPI_RX_OFF1 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_OFF4 - QB_MIPI_RX_OFF2) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_OFF4 - QB_MIPI_RX_OFF2 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_OFF4 & QB_MIPI_RX_OFF2 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_RX_OFF4 - QB_MIPI_RX_OFF3) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_RX_OFF4 - QB_MIPI_RX_OFF3 ) >= 0))
#error "The differece between Event Timing QB_MIPI_RX_OFF4 & QB_MIPI_RX_OFF3 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #endif
   #endif

//multievent - 5QB  detect TX on
   #if ( QB_MIPI_TX_ON0 != -10000 )
      #if   ( ( ( QB_MIPI_TX_ON0 - QB_MIPI_TX_ON1 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON0 - QB_MIPI_TX_ON1 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON0 & QB_MIPI_TX_ON1 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON0 - QB_MIPI_TX_ON2 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON0 - QB_MIPI_TX_ON2 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON0 & QB_MIPI_TX_ON2 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON0 - QB_MIPI_TX_ON3 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON0 - QB_MIPI_TX_ON3 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON0 & QB_MIPI_TX_ON3 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON0 - QB_MIPI_TX_ON4 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON0 - QB_MIPI_TX_ON4 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON0 & QB_MIPI_TX_ON4 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON0 - QB_MIPI_TX_ON5 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON0 - QB_MIPI_TX_ON5 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON0 & QB_MIPI_TX_ON5 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON0 - QB_MIPI_TX_ON6 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON0 - QB_MIPI_TX_ON6 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON0 & QB_MIPI_TX_ON6 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON0 - QB_MIPI_TX_ON7 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON0 - QB_MIPI_TX_ON7 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON0 & QB_MIPI_TX_ON7 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #endif
   #endif

   #if ( QB_MIPI_TX_ON1 != -10000 )   
      #if   ( ( ( QB_MIPI_TX_ON1 - QB_MIPI_TX_ON0 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON1 - QB_MIPI_TX_ON0 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON1 & QB_MIPI_TX_ON0 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON1 - QB_MIPI_TX_ON2 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON1 - QB_MIPI_TX_ON2 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON1 & QB_MIPI_TX_ON2 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON1 - QB_MIPI_TX_ON3 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON1 - QB_MIPI_TX_ON3 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON1 & QB_MIPI_TX_ON3 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON1 - QB_MIPI_TX_ON4 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON1 - QB_MIPI_TX_ON4 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON1 & QB_MIPI_TX_ON4 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON1 - QB_MIPI_TX_ON5 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON1 - QB_MIPI_TX_ON5 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON1 & QB_MIPI_TX_ON5 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON1 - QB_MIPI_TX_ON6 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON1 - QB_MIPI_TX_ON6 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON1 & QB_MIPI_TX_ON6 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON1 - QB_MIPI_TX_ON7 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON1 - QB_MIPI_TX_ON7 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON1 & QB_MIPI_TX_ON7 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #endif
   #endif

   #if ( QB_MIPI_TX_ON2 != -10000 )
      #if   ( ( ( QB_MIPI_TX_ON2 - QB_MIPI_TX_ON0 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON2 - QB_MIPI_TX_ON0 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON2 & QB_MIPI_TX_ON0 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON2 - QB_MIPI_TX_ON1 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON2 - QB_MIPI_TX_ON1 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON2 & QB_MIPI_TX_ON1 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON2 - QB_MIPI_TX_ON3 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON2 - QB_MIPI_TX_ON3 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON2 & QB_MIPI_TX_ON3 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON2 - QB_MIPI_TX_ON4 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON2 - QB_MIPI_TX_ON4 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON2 & QB_MIPI_TX_ON4 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON2 - QB_MIPI_TX_ON5 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON2 - QB_MIPI_TX_ON5 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON2 & QB_MIPI_TX_ON5 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON2 - QB_MIPI_TX_ON6 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON2 - QB_MIPI_TX_ON6 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON2 & QB_MIPI_TX_ON6 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON2 - QB_MIPI_TX_ON7 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON2 - QB_MIPI_TX_ON7 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON2 & QB_MIPI_TX_ON7 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #endif
   #endif

   #if ( QB_MIPI_TX_ON3 != -10000 )
      #if   ( ( ( QB_MIPI_TX_ON3 - QB_MIPI_TX_ON0 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON3 - QB_MIPI_TX_ON0 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON3 & QB_MIPI_TX_ON0 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON3 - QB_MIPI_TX_ON1 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON3 - QB_MIPI_TX_ON1 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON3 & QB_MIPI_TX_ON1 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON3 - QB_MIPI_TX_ON2 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON3 - QB_MIPI_TX_ON2 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON3 & QB_MIPI_TX_ON2 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON3 - QB_MIPI_TX_ON4 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON3 - QB_MIPI_TX_ON4 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON3 & QB_MIPI_TX_ON4 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON3 - QB_MIPI_TX_ON5 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON3 - QB_MIPI_TX_ON5 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON3 & QB_MIPI_TX_ON5 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON3 - QB_MIPI_TX_ON6 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON3 - QB_MIPI_TX_ON6 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON3 & QB_MIPI_TX_ON6 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON3 - QB_MIPI_TX_ON7 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON3 - QB_MIPI_TX_ON7 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON3 & QB_MIPI_TX_ON7 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #endif
   #endif

   #if ( QB_MIPI_TX_ON4 != -10000 )
      #if   ( ( ( QB_MIPI_TX_ON4 - QB_MIPI_TX_ON0 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON4 - QB_MIPI_TX_ON0 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON4 & QB_MIPI_TX_ON0 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON4 - QB_MIPI_TX_ON1 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON4 - QB_MIPI_TX_ON1 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON4 & QB_MIPI_TX_ON1 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON4 - QB_MIPI_TX_ON2 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON4 - QB_MIPI_TX_ON2 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON4 & QB_MIPI_TX_ON2 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON4 - QB_MIPI_TX_ON3 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON4 - QB_MIPI_TX_ON3 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON4 & QB_MIPI_TX_ON3 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON4 - QB_MIPI_TX_ON5 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON4 - QB_MIPI_TX_ON5 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON4 & QB_MIPI_TX_ON5 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON4 - QB_MIPI_TX_ON6 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON4 - QB_MIPI_TX_ON6 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON4 & QB_MIPI_TX_ON6 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON4 - QB_MIPI_TX_ON7 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON4 - QB_MIPI_TX_ON7 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON4 & QB_MIPI_TX_ON7 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #endif
   #endif
   
   #if ( QB_MIPI_TX_ON5 != -10000 )
      #if   ( ( ( QB_MIPI_TX_ON5 - QB_MIPI_TX_ON0 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON5 - QB_MIPI_TX_ON0 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON5 & QB_MIPI_TX_ON0 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON5 - QB_MIPI_TX_ON1 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON5 - QB_MIPI_TX_ON1 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON5 & QB_MIPI_TX_ON1 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON5 - QB_MIPI_TX_ON2 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON5 - QB_MIPI_TX_ON2 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON5 & QB_MIPI_TX_ON2 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON5 - QB_MIPI_TX_ON3 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON5 - QB_MIPI_TX_ON3 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON5 & QB_MIPI_TX_ON3 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON5 - QB_MIPI_TX_ON4 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON5 - QB_MIPI_TX_ON4 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON5 & QB_MIPI_TX_ON4 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON5 - QB_MIPI_TX_ON6 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON5 - QB_MIPI_TX_ON6 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON5 & QB_MIPI_TX_ON6 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON5 - QB_MIPI_TX_ON7 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON5 - QB_MIPI_TX_ON7 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON5 & QB_MIPI_TX_ON7 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #endif
   #endif

   #if ( QB_MIPI_TX_ON6 != -10000 )
      #if   ( ( ( QB_MIPI_TX_ON6 - QB_MIPI_TX_ON0 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON6 - QB_MIPI_TX_ON0 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON6 & QB_MIPI_TX_ON0 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON6 - QB_MIPI_TX_ON1 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON6 - QB_MIPI_TX_ON1 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON6 & QB_MIPI_TX_ON1 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON6 - QB_MIPI_TX_ON2 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON6 - QB_MIPI_TX_ON2 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON6 & QB_MIPI_TX_ON2 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON6 - QB_MIPI_TX_ON3 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON6 - QB_MIPI_TX_ON3 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON6 & QB_MIPI_TX_ON3 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON6 - QB_MIPI_TX_ON4 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON6 - QB_MIPI_TX_ON4 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON6 & QB_MIPI_TX_ON4 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON6 - QB_MIPI_TX_ON5 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON6 - QB_MIPI_TX_ON5 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON6 & QB_MIPI_TX_ON5 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON6 - QB_MIPI_TX_ON7 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON6 - QB_MIPI_TX_ON7 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON6 & QB_MIPI_TX_ON7 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #endif
   #endif

   #if ( QB_MIPI_TX_ON7 != -10000 )
      #if   ( ( ( QB_MIPI_TX_ON7 - QB_MIPI_TX_ON0 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON7 - QB_MIPI_TX_ON0 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON7 & QB_MIPI_TX_ON0 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON7 - QB_MIPI_TX_ON1 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON7 - QB_MIPI_TX_ON1 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON7 & QB_MIPI_TX_ON1 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON7 - QB_MIPI_TX_ON2 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON7 - QB_MIPI_TX_ON2 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON7 & QB_MIPI_TX_ON2 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON7 - QB_MIPI_TX_ON3 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON7 - QB_MIPI_TX_ON3 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON7 & QB_MIPI_TX_ON3 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON7 - QB_MIPI_TX_ON4 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON7 - QB_MIPI_TX_ON4 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON7 & QB_MIPI_TX_ON4 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON7 - QB_MIPI_TX_ON5 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON7 - QB_MIPI_TX_ON5 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON7 & QB_MIPI_TX_ON5 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_ON7 - QB_MIPI_TX_ON6 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_ON7 - QB_MIPI_TX_ON6 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_ON7 & QB_MIPI_TX_ON6 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #endif
   #endif
   
//multievent - 5QB  detect TX off
   #if ( QB_MIPI_TX_OFF0 != 10000 )
      #if   ( ( ( QB_MIPI_TX_OFF0 - QB_MIPI_TX_OFF1 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_OFF0 - QB_MIPI_TX_OFF1 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_OFF0 & QB_MIPI_TX_OFF1 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_OFF0 - QB_MIPI_TX_OFF2 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_OFF0 - QB_MIPI_TX_OFF2 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_OFF0 & QB_MIPI_TX_OFF2 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_OFF0 - QB_MIPI_TX_OFF3 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_OFF0 - QB_MIPI_TX_OFF3 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_OFF0 & QB_MIPI_TX_OFF3 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_OFF0 - QB_MIPI_TX_OFF4 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_OFF0 - QB_MIPI_TX_OFF4 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_OFF0 & QB_MIPI_TX_OFF4 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #endif
   #endif   

   #if ( QB_MIPI_TX_OFF1 != 10000 )
      #if   ( ( ( QB_MIPI_TX_OFF1 - QB_MIPI_TX_OFF0 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_OFF1 - QB_MIPI_TX_OFF0 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_OFF1 & QB_MIPI_TX_OFF0 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_OFF1 - QB_MIPI_TX_OFF2 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_OFF1 - QB_MIPI_TX_OFF2 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_OFF1 & QB_MIPI_TX_OFF2 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_OFF1 - QB_MIPI_TX_OFF3 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_OFF1 - QB_MIPI_TX_OFF3 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_OFF1 & QB_MIPI_TX_OFF3 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_OFF1 - QB_MIPI_TX_OFF4 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_OFF1 - QB_MIPI_TX_OFF4 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_OFF1 & QB_MIPI_TX_OFF4 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #endif
   #endif
   
   #if ( QB_MIPI_TX_OFF2 != 10000 )
      #if   ( ( ( QB_MIPI_TX_OFF2 - QB_MIPI_TX_OFF0 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_OFF2 - QB_MIPI_TX_OFF0 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_OFF2 & QB_MIPI_TX_OFF0 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_OFF2 - QB_MIPI_TX_OFF1 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_OFF2 - QB_MIPI_TX_OFF1 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_OFF2 & QB_MIPI_TX_OFF1 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_OFF2 - QB_MIPI_TX_OFF3 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_OFF2 - QB_MIPI_TX_OFF3 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_OFF2 & QB_MIPI_TX_OFF3 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_OFF2 - QB_MIPI_TX_OFF4 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_OFF2 - QB_MIPI_TX_OFF4 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_OFF2 & QB_MIPI_TX_OFF4 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #endif
   #endif
   
   #if ( QB_MIPI_TX_OFF3 != 10000 )
      #if   ( ( ( QB_MIPI_TX_OFF3 - QB_MIPI_TX_OFF0 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_OFF3 - QB_MIPI_TX_OFF0 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_OFF3 & QB_MIPI_TX_OFF0 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_OFF3 - QB_MIPI_TX_OFF1 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_OFF3 - QB_MIPI_TX_OFF1 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_OFF3 & QB_MIPI_TX_OFF1 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_OFF3 - QB_MIPI_TX_OFF2 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_OFF3 - QB_MIPI_TX_OFF2 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_OFF3 & QB_MIPI_TX_OFF2 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_OFF3 - QB_MIPI_TX_OFF4 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_OFF3 - QB_MIPI_TX_OFF4 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_OFF3 & QB_MIPI_TX_OFF4 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #endif
   #endif

   #if ( QB_MIPI_TX_OFF4 != 10000 )
      #if   ( ( ( QB_MIPI_TX_OFF4 - QB_MIPI_TX_OFF0 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_OFF4 - QB_MIPI_TX_OFF0 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_OFF4 & QB_MIPI_TX_OFF0 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_OFF4 - QB_MIPI_TX_OFF1 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_OFF4 - QB_MIPI_TX_OFF1 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_OFF4 & QB_MIPI_TX_OFF1 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_OFF4 - QB_MIPI_TX_OFF2 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_OFF4 - QB_MIPI_TX_OFF2 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_OFF4 & QB_MIPI_TX_OFF2 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #elif ( ( ( QB_MIPI_TX_OFF4 - QB_MIPI_TX_OFF3 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TX_OFF4 - QB_MIPI_TX_OFF3 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TX_OFF4 & QB_MIPI_TX_OFF3 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
      #endif
   #endif

//multievent - 5QB  detect TXMID
   #if   ( ( QB_MIPI_TXMID0 != -10000 ) && ( ( QB_MIPI_TXMID0 - QB_MIPI_TXMID1 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TXMID0 - QB_MIPI_TXMID1 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TXMID0 & QB_MIPI_TXMID1 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
   #elif ( ( QB_MIPI_TXMID1 != -10000 ) && ( ( QB_MIPI_TXMID1 - QB_MIPI_TXMID0 ) <= GGE_MIPI_EVNET_TIMING_CHECK_MARGIN ) && ( ( QB_MIPI_TXMID1 - QB_MIPI_TXMID0 ) >= 0))
#error "The differece between Event Timing QB_MIPI_TXMID1 & QB_MIPI_TXMID0 is less than GGE_MIPI_EVNET_TIMING_CHECK_MARGIN"
   #endif

#endif /* IS_MIPI_SUPPORT */

/*===============================================================================================*/

