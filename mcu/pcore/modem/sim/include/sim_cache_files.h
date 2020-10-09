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
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2001
 *
 *******************************************************************************/

 /*******************************************************************************
 * Filename:
 * ---------
 *   sim_cache_files.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   SIM EF data ADM cache
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/
#ifndef SIM_CACHE_FILES_H
#define SIM_CACHE_FILES_H
#include "sim_private_enum.h"
#include "sim_private_struct.h"
#include "sim_public_enum.h"


#define SIM_CACHE_ADM_OP_READ (KAL_TRUE)
#define SIM_CACHE_ADM_OP_WRITE (KAL_FALSE)

#define SIM_CACHE_ADM_EF_MAX_REC_NUM (15)


/*
 * EF_IMSI
 */
#define SIM_CACHE_ADM_EF_IMSI_SIZE (9)
#define SIM_CACHE_ADM_EF_IMSI_REC_NUM (0)

/*
 * EF_DIR
 */
#define SIM_CACHE_ADM_EF_DIR_SIZE (54)
#define SIM_CACHE_ADM_EF_DIR_REC_NUM (5)

/*
 * EF_AD
 */
#define SIM_CACHE_ADM_EF_AD_SIZE (4)
#define SIM_CACHE_ADM_EF_AD_REC_NUM (0)

/*
 * EF_GID1
 */
#define SIM_CACHE_ADM_EF_GID1_SIZE (NUM_GID1)
#define SIM_CACHE_ADM_EF_GID1_REC_NUM (0)

/*
 * EF_SPN
 */
#define SIM_CACHE_ADM_EF_SPN_SIZE (LEN_OF_SPN)
#define SIM_CACHE_ADM_EF_SPN_REC_NUM (0)

/*
 * EF_ICCID
 */
#define SIM_CACHE_ADM_EF_ICCID_SIZE (10)
#define SIM_CACHE_ADM_EF_ICCID_REC_NUM (0)

/*
 * EF_SST
 */
#define SIM_CACHE_ADM_EF_SST_SIZE (MAX_SST_LEN)
#define SIM_CACHE_ADM_EF_SST_REC_NUM (0)

/*
 * EF_SMSP
 */
#define SIM_CACHE_ADM_EF_SMSP_SIZE (50)
#define SIM_CACHE_ADM_EF_SMSP_REC_NUM (2)

/*
 * EF_MBI
 */
#define SIM_CACHE_ADM_EF_MBI_SIZE (26)
#define SIM_CACHE_ADM_EF_MBI_REC_NUM (10)

/*
 * EF_GID2
 */
#define SIM_CACHE_ADM_EF_GID2_SIZE (NUM_GID2)
#define SIM_CACHE_ADM_EF_GID2_REC_NUM (0)

/*
 * EF_LI
 */
#define SIM_CACHE_ADM_EF_LI_SIZE (30)
#define SIM_CACHE_ADM_EF_LI_REC_NUM (0)

/*
 * EF_ELP
 */
#define SIM_CACHE_ADM_EF_ELP_SIZE (15)
#define SIM_CACHE_ADM_EF_ELP_REC_NUM (0)

/*
 * EF_MSISDN
 */
#define SIM_CACHE_ADM_EF_MSISDN_SIZE (34)
#define SIM_CACHE_ADM_EF_MSISDN_REC_NUM (2)

/*
 * EF_VM_WAIT
 */
#define SIM_CACHE_ADM_EF_VM_WAIT_SIZE (5)
#define SIM_CACHE_ADM_EF_VM_WAIT_REC_NUM (0)

/*
 * EF_SPDI
 */
#define SIM_CACHE_ADM_EF_SPDI_SIZE (256)
#define SIM_CACHE_ADM_EF_SPDI_REC_NUM (0)

/*
 * EF_CPHS_INFO
 */
#define SIM_CACHE_ADM_EF_CPHS_INFO_SIZE (3)
#define SIM_CACHE_ADM_EF_CPHS_INFO_REC_NUM (0)

/*
 * EF_CSP
 */
#define SIM_CACHE_ADM_EF_CSP_SIZE (22)
#define SIM_CACHE_ADM_EF_CSP_REC_NUM (0)

/*
 * EF_OP_STRING
 */
#define SIM_CACHE_ADM_EF_OP_STRING_SIZE (40)
#define SIM_CACHE_ADM_EF_OP_STRING_REC_NUM (0)

/*
 * EF_OP_SHORTFORM
 */
#define SIM_CACHE_ADM_EF_OP_SHORTFORM_SIZE (10)
#define SIM_CACHE_ADM_EF_OP_SHORTFORM_REC_NUM (0)

/*
 * EF_CFIS
 */
#define SIM_CACHE_ADM_EF_CFIS_SIZE (16)
#define SIM_CACHE_ADM_EF_CFIS_REC_NUM (1)

/*
 * EF_PLMNWACT
 */
#define SIM_CACHE_ADM_EF_PLMNWACT_SIZE (2048)
#define SIM_CACHE_ADM_EF_PLMNWACT_REC_NUM (0)

/*
 * EF_OPLMNWACT
 */
#define SIM_CACHE_ADM_EF_OPLMNWACT_SIZE (2048)
#define SIM_CACHE_ADM_EF_OPLMNWACT_REC_NUM (0)

/*
 * EF_HPLMNWACT
 */
#define SIM_CACHE_ADM_EF_HPLMNWACT_SIZE (2048)
#define SIM_CACHE_ADM_EF_HPLMNWACT_REC_NUM (0)

/*
 * EF_EHPLMN
 */
#define SIM_CACHE_ADM_EF_EHPLMN_SIZE (MAX_EHPLMN_EF_LEN)
#define SIM_CACHE_ADM_EF_EHPLMN_REC_NUM (0)

/*
 * EF_FPLMN
 */
#define SIM_CACHE_ADM_EF_FPLMN_SIZE (800)
#define SIM_CACHE_ADM_EF_FPLMN_REC_NUM (0)


#if 0
/* under construction !*/
#endif
extern void sim_cache_full_reset_cached(sim_context_struct *this_sim);
extern kal_bool sim_cache_check_record_cached(kal_uint8 p1, kal_uint8 p2, kal_uint8 file_id, sim_context_struct *this_sim);
extern void sim_cache_update_record_cached(kal_uint8 p1, kal_uint8 p2, kal_uint8 file_id, sim_context_struct *this_sim);
extern void sim_cache_clean_record_cached(kal_uint8 p1, kal_uint8 p2, kal_uint8 file_id, sim_context_struct *this_sim);
extern kal_bool sim_cache_adm_read(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *data, kal_uint32 data_size, kal_uint16 *status_word, sim_cache_file_idx_enum cache_file_idx, usim_logic_channel_enum channel, sim_context_struct *this_sim);
extern kal_bool sim_cache_adm_write(kal_uint8 p1, kal_uint8 p2, kal_uint8 p3, kal_uint8 *data, kal_uint32 data_size, sim_cache_file_idx_enum cache_file_idx, usim_logic_channel_enum channel, sim_context_struct *this_sim);
extern kal_bool sim_cache_adm_reset(sim_cache_file_idx_enum cache_file_idx, sim_context_struct *this_sim);

#endif /* SIM_CACHE_FILES_H */
