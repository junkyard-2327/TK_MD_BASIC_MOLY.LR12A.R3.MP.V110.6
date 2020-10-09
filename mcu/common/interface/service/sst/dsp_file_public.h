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
 *  dsp_boot_public.h 
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This Module defines the HW initialization.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *
 *
 *
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef DSP_FILE_PUBLIC_H
#define DSP_FILE_PUBLIC_H

#include "kal_general_types.h"


/*******************************************************************************
 * Macro definitions 
 *******************************************************************************/
#define DSP_VER_SZ 32
#define DSP_VER_STR_OVHD 512
#define DSP_VER_STR_TTL_SZ (DSP_VER_SZ * 4 * 6 + DSP_VER_STR_OVHD)

#define ERROR_DUMP_CORE_TYPE_UNDEFINED       0xDEADBEEF
#define ERROR_DUMP_CORE_TYPE_NOT_USIP_SCQ16  0xDEAD0000
#define ERROR_DUMP_NO_USIP_SCQ16_MAPPING     0xDEAD0010
#define ERROR_DUMP_CORE_TYPE_NOT_RAKE        0xDEAD0006
#define ERROR_DUMP_NO_RAKE_MAPPING           0xDEAD0016

/*******************************************************************************
 * Function prototypes 
 *******************************************************************************/
kal_uint32 DSP_Init(void);
kal_bool DSP_IsVersionMismatched(void);
const kal_char *DSP_GetVersionString(void);

/* TO DO: refine this to adapt to MIPS */
//#ifdef __L1CORE__

typedef enum {
    DSP_DUMP_USIP0,
    DSP_DUMP_USIP1,
    DSP_DUMP_SCQ16_0,
    DSP_DUMP_SCQ16_1,
    DSP_DUMP_RAKE
} DSP_DUMP_CORE_TYPE;


typedef enum {
    DSP_MD32_BRP,
    DSP_MD32_DFE,
    DSP_MD32_RAKE,
    DSP_CS_ICC,
    DSP_CS_IMC,
    DSP_CS_MPC,
    DSP_CORE_NUM,
} DSP_CORE_TYPE;

void DSP_OutputVersionInfo();
const kal_char *DSP_GetProject(DSP_CORE_TYPE dsp_type);
const kal_char *DSP_GetFlavor(DSP_CORE_TYPE dsp_type);
const kal_char *DSP_GetLabel(DSP_CORE_TYPE dsp_type);
const kal_char *DSP_GetBuildTime(DSP_CORE_TYPE dsp_type);
//#endif /* __L1CORE__ */

#endif /* DSP_FILE_PUBLIC_H */

