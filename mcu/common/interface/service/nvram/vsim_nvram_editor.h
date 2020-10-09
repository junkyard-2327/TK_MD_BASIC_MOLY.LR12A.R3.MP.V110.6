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
 ****************************************************************************/
#ifndef __VSIM_NVRAM_EDITOR_H__
#define __VSIM_NVRAM_EDITOR_H__


#ifndef NVRAM_NOT_PRESENT
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "vsim_nvram_def.h"

#ifdef GEN_FOR_PC
BEGIN_NVRAM_DATA

#ifdef __MDVSIM__
LID_BIT VER_LID(NVRAM_EF_VSIM_CONFIG_LID)
nvram_ef_vsim_config_struct * NVRAM_EF_VSIM_CONFIG_TOTAL
{
};

LID_BIT VER_LID(NVRAM_EF_VSIM_PROFILE_LID)
nvram_ef_vsim_profile_struct * NVRAM_EF_VSIM_PROFILE_TOTAL
{
};

LID_BIT VER_LID(NVRAM_EF_VSIM_SIM_IMSI_LID)
nvram_ef_vsim_sim_imsi_struct * NVRAM_EF_VSIM_SIM_IMSI_TOTAL
{
};

LID_BIT VER_LID(NVRAM_EF_VSIM_U_IMSI_LID)
nvram_ef_vsim_u_imsi_struct * NVRAM_EF_VSIM_U_IMSI_TOTAL
{
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_VSIM_RSA_KEY_LID
* DESCRIPTION
*       RSA KEY for VSIM authentication   
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will be updated only when first power on
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_VSIM_RSA_KEY_LID)
nvram_ef_vsim_rsa_key_struct * NVRAM_EF_VSIM_RSA_KEY_TOTAL
{
    enc_rsa_key:"enc_rsa_key"
    {
    };
};

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_KEYGEN_LID
* DESCRIPTION
*       Number of RSA KEY for VSIM authentication   
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will be updated only when first power on
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_KEYGEN_LID)
nvram_ef_keygen_struct * NVRAM_EF_KEYGEN_TOTAL
{
    num_of_key:"num_of_key"
    {
    };
};

#endif


END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 

#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __VSIM_NVRAM_EDITOR_H__ */
