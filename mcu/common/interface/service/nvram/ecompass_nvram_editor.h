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
 * 
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 * 
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __ECOMPASS_NVRAM_EDITOR_H__
#define __ECOMPASS_NVRAM_EDITOR_H__

#ifndef NVRAM_NOT_PRESENT
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "ecompass_nvram_def.h"

// Data Structure of Each LID
#if defined (__E_COMPASS_SENSOR_SUPPORT__)
typedef struct
{
    kal_int16       usr_moffset_x;
    kal_int16       usr_moffset_y;
    kal_int16       usr_moffset_z;
    kal_uint8       cali_result;

    kal_int32       x_axis_sensitivity;		/*x axis data sensitivity*/
    kal_int32       y_axis_sensitivity;		/*y axis data sensitivity*/
    kal_int16       x_max;			/*sample point maximum of x coordinate*/
    kal_int16       x_min;			/*sample point minimum of x coordinate*/
    kal_int16       y_max;			/*sample point maximum of y coordinate*/
    kal_int16       y_min;			/*sample point minimum of y coordinate*/

    kal_int32       ext_para1;
    kal_int32       ext_para2;
    kal_int32       ext_para3;
    kal_int16       ext_para4;
    kal_int16       ext_para5;
    kal_int16       ext_para6;
    kal_int16       ext_para7;
    kal_int16       ext_para8;
    kal_int16       ext_para9;
} nvram_ef_ecompass_calibration;
#endif  /* __E_COMPASS_SENSOR_SUPPORT__ */

#ifdef GEN_FOR_PC
BEGIN_NVRAM_DATA

#if defined (__E_COMPASS_SENSOR_SUPPORT__)
LID_BIT VER_LID(NVRAM_EF_ECOMPASS_DATA_LID) nvram_ef_ecompass_calibration* NVRAM_EF_ECOMPASS_DATA_TOTAL {};
#endif  /* __E_COMPASS_SENSOR_SUPPORT__ */


END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 

#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __ECOMPASS_NVRAM_EDITOR_H__ */
