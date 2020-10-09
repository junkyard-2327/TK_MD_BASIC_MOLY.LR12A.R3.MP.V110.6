/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2007
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
 *   rac_mrs_struct.h
 *
 * Project:
 * --------
 *   Multimode
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *
 * ----------------------------------------------------------------------------
 * $Log:$
 *
 * 10 07 2015 titi.wu
 * [MOLY00141786] [MT6755][SRLTE][L+C] Support connectivity of C2K on dual SIM
 * .
 *
 * 05 29 2015 shih-che.chou
 * [MOLY00115617] [6291] Dynamic SIM switch without modem reset
 * RAC part
 *
 * 12 17 2014 shin.chen
 * [MOLY00087882] [Universal Bin] MRS general developement.
 *
 * 01 22 2013 david.niu
 * [MOLY00009205] [MRS] Code checked-in for MOLY branch
 * .
 * 
 ******************************************************************************/
#ifndef _RAC_MRS_STRUCT_H
#define _RAC_MRS_STRUCT_H

/* RAC uses this primitive to initialize MRS */
typedef struct {
    LOCAL_PARA_HDR

    // TBD: capability to initialize 3G InterRAT HO Info and 2G classmark

    hspa_preference_enum fdd_hspa_preference;  // store to MRS context
    hspa_preference_enum tdd_hspa_preference;  
    init_cause_enum init_cause;
} rac_mrs_init_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    emdstatus_md_config_enum md_config;
    emdstatus_sim_config_enum sim_config;
} rac_mrs_md_sim_config_req_struct;

#endif /* _RAC_MRS_STRUCT_H */
