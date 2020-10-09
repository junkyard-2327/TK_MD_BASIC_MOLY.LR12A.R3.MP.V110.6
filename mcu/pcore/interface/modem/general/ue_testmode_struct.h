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

/*******************************************************************************
 * Filename:
 * ---------
 *   ue_testmode_struct.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *  For common strucures used by data plane test mode configurations and test 
 *  loop operations.
 *
 * Author:
 * -------
 * -------
 *   
 *  @date   2016/7/6 08:54:24 PM
 *
 * ==========================================================================
 * $Log$
 *
 *
 ****************************************************************************/

#ifndef  UE_TESTMODE_STRUCT_H
#define  UE_TESTMODE_STRUCT_H

#include "kal_public_api.h"

#define MAX_NUM_MODE_A_LB_RB    8

typedef enum {
   TESTLOOP_CMD_MODE_A_DEACTIVATE, // open test loop for mode A
   TESTLOOP_CMD_MODE_A_ACTIVATE,    // close test loop for mode A
   TESTLOOP_CMD_MODE_B_DEACTIVATE, // open test loop for mode B
   TESTLOOP_CMD_MODE_B_ACTIVATE    // close test loop for mode B
} testloop_cmd_enum;

typedef struct {
    kal_uint8    rb_idx; // i.e., flow_id
    kal_uint8    scaling; // needs scaling or not
    kal_uint16   size; // in bytes
} testloop_rb_cfg_struct;

typedef struct {
    LOCAL_PARA_HDR // IPCORE, UPCM, RATDM and EPDCP share this message structure

    testloop_cmd_enum       cmd;
    kal_uint32              rb_num; // number of RBs configured for Mode A
    testloop_rb_cfg_struct  rb_cfg[MAX_NUM_MODE_A_LB_RB]; // for Test Loop Mode A
    kal_uint8               delay_time; // for Test Loop Mode B; in seconds
} testloop_cfg_struct;

#endif /* #ifndef  UE_TESTMODE_STRUCT_H */

