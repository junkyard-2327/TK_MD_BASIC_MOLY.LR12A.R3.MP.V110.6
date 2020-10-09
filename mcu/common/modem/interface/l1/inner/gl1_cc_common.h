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
 *   gl1_cc_common.h
 *
 * Project:
 * --------
 *   U3G
 *
 * Description:
 * ------------
 *   U3G pcore L1 header
 *
 * Author:
 * -------
 *   
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
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _GL1_CC_COMMON_H_
#define _GL1_CC_COMMON_H_

#include "mph_types.h"
#include "l1_types_public.h"

typedef enum
{
   /* GL1C */
   GL1_L2P_CCIRQ_MPAL_SACCH_UPLINK   /* SACCH */
   ,GL1_L2P_CCIRQ_MPAL_SDCCH_UPLINK   /* SDCCH */
   ,GL1_L2P_CCIRQ_MPAL_FACCH_UPLINK   /* FACCH */
   ,GL1_L2P_CCIRQ_MPAL_UPLINK_TRANSFER /* U1 */
   ,GL1_L2P_CCIRQ_MPAL_RTS_REPORT       /* U2 */ 
#if defined(__SM_VERIFICATION_FCS_CSD__)
   ,GL1_L2P_CCIRQ_FCS /* FCS */
#endif
}GL1_L2P_CCIRQ_TYPE_E;

typedef struct
{
   TChMode mode;
   LogChannel log; 
   module_id_enum mod_indx;
   kal_uint32 ul_data_index;
   bool update_status;
} mpal_l1i_ul_struct;


typedef struct
{   
   FrameNumber      frameNumber; 
   kal_uint32       ul_data_index;
   TimeSlotMask timeSlotsUpAll;
   TimingAdvance timingAdvance;
   uint8 upValid;
   module_id_enum mod_indx;
   bool update_status;
} mpal_l1i_ul_ps_struct;


#endif //_GL1_CC_COMMON_H_


