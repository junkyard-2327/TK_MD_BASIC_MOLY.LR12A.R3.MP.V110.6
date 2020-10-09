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
 *   qbm_config_basic.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *  QBM configure files for basic load.
 *  Since basic load only need little memory.
 *
 * Author:
 * -------
 * -------
 *   
 *
 * ==========================================================================
 * $Log$
 *
 ****************************************************************************/

#define QBM_PD_NUM 10
/*************************BM Pool CFG Begin****************/
/*BM Buffer type*/
bmcfg_type(QBM_TYPE_TGPD) 
/*The buffer number*/
bmcfg_num(QBM_PD_NUM) 
/*The size of one buffer*/
bmcfg_one_size(QBM_SIZE_TGPD) 
/*Config do cache invalid for the data part when do de-q-rx*/
bmcfg_cache_invalid(KAL_FALSE) 
/*Config do cache flush the data part when do en-q-tx*/
/*  Put all non-cache flush buffers on the front.*/
bmcfg_cache_flush(KAL_FALSE) 
/*************************BM Pool CFG END******************/

/*************************BM Pool CFG Begin****************/
/*BM Buffer type*/
bmcfg_type(QBM_TYPE_TBD) 
/*The buffer number*/
bmcfg_num(QBM_PD_NUM) 
/*The size of one buffer*/
bmcfg_one_size(QBM_SIZE_TBD) 
/*Config do cache invalid for the data part when do de-q-rx*/
bmcfg_cache_invalid(KAL_FALSE) 
/*Config do cache flush the data part when do en-q-tx*/
bmcfg_cache_flush(KAL_FALSE) 
/*************************BM Pool CFG END******************/

/*************************BM Pool CFG Begin****************/
/*BM Buffer type*/
bmcfg_type(QBM_TYPE_TGPD_BPS) 
/*The buffer number*/
bmcfg_num(QBM_PD_NUM) 
/*The size of one buffer*/
bmcfg_one_size(QBM_SIZE_TGPD_BPS) 
/*Config do cache invalid for the data part when do de-q-rx*/
bmcfg_cache_invalid(KAL_FALSE) 
/*Config do cache flush the data part when do en-q-tx*/
bmcfg_cache_flush(KAL_FALSE) 
/*************************BM Pool CFG END******************/
