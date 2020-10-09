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
 *    pmic_wrap.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file is used to configure correspond header files of pmic wrapper.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#include "drv_features.h"

#if defined(DRV_PMIC_WRAP_6595_REG)

#include "mt6595_pmic_wrap_hw.h"
#include "mt6595_pmic_wrap_sw.h"

#elif defined(DRV_PMIC_WRAP_6589_REG)

#include "mt6589_pmic_wrap_hw.h"
#include "mt6589_pmic_wrap_sw.h"
#include "reg_peri_pwrap_bridge.h"

#elif defined(DRV_PMIC_WRAP_6582_REG)

#include "mt6582_pmic_wrap_hw.h"
#include "mt6582_pmic_wrap_sw.h"

#elif defined(DRV_PMIC_WRAP_6572_REG)

#include "mt6572_pmic_wrap_hw.h"
#include "mt6572_pmic_wrap_sw.h"

#elif defined(DRV_PMIC_WRAP_6571_REG)

#include "mt6571_pmic_wrap_hw.h"
#include "mt6571_pmic_wrap_sw.h"

#elif defined(DRV_PMIC_WRAP_6291_REG)

#include "tk6291_pmic_wrap_hw.h"
#include "tk6291_pmic_wrap_sw.h"

#elif defined(DRV_PMIC_WRAP_6755_REG)

#include "mt6755_pmic_wrap_hw.h"
#include "mt6755_pmic_wrap_sw.h"

#elif defined(DRV_PMIC_WRAP_6797_REG)

#include "mt6797_pmic_wrap_hw.h"
#include "mt6797_pmic_wrap_sw.h"

#elif defined(DRV_PMIC_WRAP_6750_REG)

#include "mt6750_pmic_wrap_hw.h"
#include "mt6750_pmic_wrap_sw.h"

#elif defined(DRV_PMIC_WRAP_ELBRUS_REG)

#include "elbrus_pmic_wrap_hw.h"
#include "elbrus_pmic_wrap_sw.h"

#elif defined(DRV_PMIC_WRAP_6799_REG)

#include "mt6799_pmic_wrap_hw.h"
#include "mt6799_pmic_wrap_sw.h"

#elif defined(DRV_PMIC_WRAP_6763_REG)

#include "mt6763_pmic_wrap_hw.h"
#include "mt6763_pmic_wrap_sw.h"

#elif defined(DRV_PMIC_WRAP_6739_REG)

#include "mt6739_pmic_wrap_hw.h"
#include "mt6739_pmic_wrap_sw.h"

#elif defined(DRV_PMIC_WRAP_6771_REG)

#include "mt6771_pmic_wrap_hw.h"
#include "mt6771_pmic_wrap_sw.h"

#elif defined(DRV_PMIC_WRAP_6765_REG)

#include "mt6765_pmic_wrap_hw.h"
#include "mt6765_pmic_wrap_sw.h"

#elif defined(DRV_PMIC_WRAP_6761_REG)

#include "mt6761_pmic_wrap_hw.h"
#include "mt6761_pmic_wrap_sw.h"

#elif defined(DRV_PMIC_WRAP_6768_REG)

#include "mt6768_pmic_wrap_hw.h"
#include "mt6768_pmic_wrap_sw.h"

#endif
