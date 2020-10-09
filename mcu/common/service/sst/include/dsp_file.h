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
 *   dsp_file.h
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

/*******************************************************************************
 * Include header files.
 *******************************************************************************/
#ifndef DSP_FILE_H
#define DSP_FILE_H
//#include "md32_file.h"
#include "md32_bin_info.h"







#ifndef __DSP_PBP__
#include "kal_general_types.h"

kal_uint32 dsp_fread(kal_uint32 *buf, kal_uint32 off, kal_uint32 len, DSP_TYPE type);
kal_uint32 dsp_fwrite(kal_uint32 *buf, kal_uint32 off, kal_uint32 len, DSP_TYPE type);
kal_uint32 *dsp_get_ptr(kal_uint32 off, DSP_TYPE type);
kal_uint32 dsp_chksum(kal_uint32 off, kal_uint32 len, DSP_TYPE type);
kal_uint32 cal_chksum(kal_uint32 base, kal_uint32 len);
kal_bool dsp_exst();

/* if the following enum changes, we need to sync with DE */
typedef enum{
    BRP_PM,
    BRP_DM,
    DFE_PM,
    DFE_DM,
    RAKE_PM,
    RAKE_DM,
    
    ICC_PM = 0x1000,
    ICC_ICM,
    IMC_PM,
    IMC_ICM,
    MPC_PM,
    MPC_ICM,
} DSP_DEST_MEM;

/* if the following enum changes, we need to change the file name index mapping table file */
typedef enum{
    BRP_PM_DAT,
    BRP_DM_DAT,
    DFE_PM_DAT,
    DFE_DM_DAT,
    RAKE_PM_DAT,
    RAKE_DM_DAT,
    BRP_COM_PM_DAT,
    BRP_COM_DM_DAT,
    BRP_FDD_PM_DAT,
    BRP_FDD_DM_DAT,
    BRP_TDD_PM_DAT,
    BRP_TDD_DM_DAT,
    BRP_LTE_PM_DAT,
    BRP_LTE_DM_DAT,

    ICC_PM_DAT = 0x1000,
    ICC_ICM_DAT,
    IMC_PM_DAT,
    IMC_ICM_DAT,
    MPC_PM_DAT,
    MPC_ICM_DAT,
} DSP_HEX_FILE_IDX;

kal_uint32 dsp_backdoor_download(DSP_DEST_MEM dest, kal_uint32 offset, \
        DSP_HEX_FILE_IDX file_index);


#endif /* DSP_PBP */

#endif /* DSP_FILE_H */