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
 * ubm_fhb.h
 *
 * Project:
 * --------
 * MOLY
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *----------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/****************************************************************************/
/*! @file ubm_fhb.h
    @author Bo-Kai Huang
    @date 2016/06/01

    @brief The header file of USB buffer definition
*/
/****************************************************************************/
 
#ifndef  _UBM_FHB_INC
#define  _UBM_FHB_INC
/****************************************************************************/

#include "ubm.h"
extern "C" 
{
#include "kal_public_api.h"
#include "ubm_type.h"
#include "qmu_bm_util.h"
}
/****************************************************************************
 * Definitions
 ****************************************************************************/
#define UBM_FH_SIZE    256
#define UBM_FH_NUM  7
#define UBM_FH_ALIAS_LEN 11

/****************************************************************************
 * Type definitions
 ****************************************************************************/

/****************************************************************************
 * Global variables
 ****************************************************************************/

/****************************************************************************
 * Function prototypes
 ****************************************************************************/ 
/* fixed header */ 
class ubm_fh {

public:
    kal_uint32 headerSize;
    kal_uint8 fh[UBM_FH_SIZE];
    char alias[UBM_FH_ALIAS_LEN];
    kal_bool isUsed;

};


/* fixed header buffer */
class ubm_fhb {

public:
    ubm_fhb();
    kal_uint8 set_fhb(const void* headerPattern, kal_uint8 size, const char* aliasName);
    kal_bool update_fhb(const void* headerPattern, kal_uint8 size, const char* aliasName); // Request by TJ: UCBCLASS may want to change header contents, but doesn't use clean and set API
    kal_bool clean_fhb(const char* aliasName);
    kal_uint8 get_fh_type(const char* aliasName);

private:
    ubm_fh fhb[UBM_FH_NUM];
};


/* FHB */
ubm_fhb* ubm_get_fhb_instance();

extern "C" kal_uint8 ubm_set_fhb(const void* headerPattern, kal_uint8 headerSize, const char* headerName);
extern "C" kal_bool ubm_update_fhb(const void* headerPattern, kal_uint8 size, const char* headerName);
extern "C" kal_bool ubm_clean_fhb(const char* aliasName);
extern "C" kal_uint8 ubm_get_fhb_type(const char* aliasName);

/****************************************************************************/
#endif /* _UBM_FHB_INC */

