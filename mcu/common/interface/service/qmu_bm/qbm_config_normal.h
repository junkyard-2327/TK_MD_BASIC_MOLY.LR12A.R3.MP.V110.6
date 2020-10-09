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
 *   qbm_config_normal.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *  QBM configure files.
 *  NOTE:
 *  For cache flush more efficiency.
 *  Put all non-cache flush buffers on the front.
 *
 * Author:
 * -------
 * -------
 *   
 *
 * ==========================================================================
 * $Log$
 *
 * 08 13 2019 viney.kaushik
 * [MOLY00431323] Reduce memory usage in MT6739
 * 	
 * 	wrap queues in related macros.
 *
 * 05 16 2019 viney.kaushik
 * [MOLY00406745] [Ben190422-045] DUT receiver not working while on MO/MT call (5/5)
 * 	
 * 	enable QBM_TYPE_NET_UL pool & configure it same as QBM_TYPE_NET_UL_SHRD.
 *
 * 05 10 2017 wen-jiunn.liu
 * [MOLY00248479] [QBM] QBM Size Reduction
 * qmu_bm reconfigure memory size for SLIM 
 * 	
 * 	QBM_TYPE_TTY_TYPE1: Wrapped by __TTY_UT__ (Normal Load Not Used Queue)
 * 	QBM_TYPE_TTY_INT : SET NUM to 100
 *
 * 10 19 2016 wen-jiunn.liu
 * [MOLY00208021] [UMOLYA] QMU_BM Code Review
 * remove redundant codes
 *
 * 10 19 2016 wen-jiunn.liu
 * [MOLY00208021] [UMOLYA] QMU_BM Code Review
 * QMU_BM retires obsolete queues and mechanisms of buffers in flcv2 (ut pass)
 *
 * 01 21 2016 eric.hsieh
 * [MOLY00160421] [MT6292] ePDCP CE RAM Optimization
 * 92 EPDCP CE RAM Optimization.
 *
 * 01 04 2016 eric.hsieh
 * [MOLY00152722] [WFC][CLDMA][QBM][volunteer patch] add IMS_UL QBM type and apply in CLDMA(QBM part)
 * QBM IMS_UL check-in to UMOLY trunk.
 *
 * 05 21 2015 stan.chen
 * [MOLY00114732] [6291] MD Support RXSPD and 3KMTU
 * [QBM] Support HIF_UL_SPD.
 *
 * 08 29 2014 stan.chen
 * [MOLY00074154] 6290 FLC RAM slim
 * 	Merge patch from MOLY.
 *
 * 06 23 2014 stan.chen
 * [MOLY00070195] [TK6291] Add Interfaces of SPD handling
 * 	Add new interfaces of QBM: Support SPDs.
 *
 * 06 06 2014 stan.chen
 * [MOLY00068661] [TK6291_DEV] LTE Latest Code Sync from MOLY
 * Merging
 * 	//MOLY/TRUNK/MOLY/mcu/service/qmu_bm/...
 * 	to //UMOLY/DEV/TK6291_DEV/mcu/pcore/service/qmu_bm/...
 * 	//MOLY/TRUNK/MOLY/mcu/interface/service/qmu_bm/...
 * 	to //UMOLY/DEV/TK6291_DEV/mcu/pcore/interface/service/qmu_bm/...
 *
 * 05 14 2014 clark.peng
 * [MOLY00063866] [ROME] data/ack multiple queues IT
 * 1. QBM change data length of HIF_UL_TYPE_S from 64 to 128 for hooking this gpd type on CCMNI2. (wrapped by __CCCICCMNI_SUPPORT__)
 * 	2. Map QBM_FLC_UL_POOL_ID_HIF_UL_02 to new FLC pool FLC2_POOL_ID_HIF_UL_02, which makes HIF_UL_TYPE and HIF_UL_TYPE_02 not sharing FLC pool.
 * 	3. Do not toggle EMPTY TCP ACK in TFT_PF (wrapped by __CCCICCMNI_SUPPORT__)
 * 	4. UPCM check priority by GPD type, instead of EMPTY TCP ACK bit toggled by TFT_PF (wrapped by __CCCICCMNI_SUPPORT__)
 * 	5. Do not config queue for HIF_UL_TYPE_01
 *
 * 01 09 2014 clark.peng
 * [MOLY00052994] TCP ACK packet replacement
 * Add a new QBM type: QBM_TYPE_HIF_UL_TYPE_S for UL TCP ACK for better buffer usage efficiency.
 *
 * 08 29 2013 moja.hsu
 * [MOLY00035765] Add Buffer Type QBM_TYPE_IMS_DL
 * .
 *
 * 08 15 2013 moja.hsu
 * [MOLY00033975] [MT6582LTE][TDD][2G/3G Bringup]
 * prepare HIF_UL_TYPE, HIF_UL_TYPE_01, HIF_UL_TYPE_02.
 *
 * 05 15 2013 moja.hsu
 * [MOLY00007625] Maintain code
 * remoe MSD type from config init.
 * MSD owner will use init_q by themself.
 * Change MSD data len from 2048 to 1024..
 *
 * 02 21 2013 i-wei.tsai
 * [MOLY00010632] add TTYCore new features
 * modify compile flag for ttycore internal buffer
 *
 * 01 14 2013 moja.hsu
 * [MOLY00007625] Maintain code
 * add QBM_TYPE_MSD
 *
 * 01 10 2013 moja.hsu
 * [MOLY00007625] Maintain code
 * multi-mode data path support.
 *
 * 12 21 2012 tj.chang
 * [MOLY00007810] CDCACM dail-up feature support
 * [CDCACM] Add SIO_CMD_DCD command handling
 *
 * 11 08 2012 haoren.kao
 * [MOLY00005322] TATAKA merge to MOLY
 * 
 * MOLY Migration from TATAKA
 ****************************************************************************/
/*
 * =====================================================================================
 *
 *       Filename:  qbm_config.h
 *
 *    Description:  configure qbm pool.
 *
 *        Created:  2011/11/21 09:33:31
 *        Author:  mtk01641 (moja)
 * =====================================================================================
 */

#include "qbm_features.h"
#include "qbm_config_num.h"

/*************************BM Pool CFG Begin****************/
/*BM Buffer type*/
bmcfg_type(QBM_TYPE_TGPD) 
/*The buffer number*/
bmcfg_num(QBM_COMMON_NUM_TGPD) 
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
bmcfg_num(QBM_COMMON_NUM_TBD) 
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
bmcfg_num(QBM_COMMON_NUM_TGPD_BPS) 
/*The size of one buffer*/
bmcfg_one_size(QBM_SIZE_TGPD_BPS) 
/*Config do cache invalid for the data part when do de-q-rx*/
bmcfg_cache_invalid(KAL_FALSE) 
/*Config do cache flush the data part when do en-q-tx*/
bmcfg_cache_flush(KAL_FALSE) 
/*************************BM Pool CFG END******************/

/*************************BM Pool CFG Begin****************/
/*BM Buffer type*/
bmcfg_type(QBM_TYPE_NET_DL) 
/*The buffer number*/
bmcfg_num(QBM_NUM_NET_DL) 
/*The size of one buffer*/
bmcfg_one_size(QBM_SIZE_NET_DL) 
/*Config do cache invalid for the data part when do de-q-rx*/
bmcfg_cache_invalid(KAL_FALSE) 
/*Config do cache flush the data part when do en-q-tx*/
bmcfg_cache_flush(KAL_FALSE) 
/*************************BM Pool CFG END******************/


/*************************BM Pool CFG Begin****************/
/*BM Buffer type*/
bmcfg_type(QBM_TYPE_NET_UL) 
/*The buffer number*/
bmcfg_num(QBM_NUM_NET_UL) 
/*The size of one buffer*/
bmcfg_one_size(QBM_SIZE_NET_UL) 
/*Config do cache invalid for the data part when do de-q-rx*/
bmcfg_cache_invalid(KAL_FALSE) 
/*Config do cache flush the data part when do en-q-tx*/
bmcfg_cache_flush(KAL_FALSE) 
/*************************BM Pool CFG END******************/


/*************************BM Pool CFG Begin****************/
/*BM Buffer type*/
bmcfg_type(QBM_TYPE_NET_UL_SHRD) 
/*The buffer number*/
bmcfg_num(QBM_NUM_NET_UL_SHRD) 
/*The size of one buffer*/
bmcfg_one_size(QBM_SIZE_NET_UL_SHRD) 
/*Config do cache invalid for the data part when do de-q-rx*/
bmcfg_cache_invalid(KAL_FALSE) 
/*Config do cache flush the data part when do en-q-tx*/
bmcfg_cache_flush(KAL_FALSE) 
/*************************BM Pool CFG END******************/


#if __USB_ACM_SUPPORT__
/*************************BM Pool CFG Begin****************/
/*BM Buffer type*/
bmcfg_type(QBM_TYPE_ACM) 
/*The buffer number*/
bmcfg_num(QBM_NUM_ACM)
/*The size of one buffer*/
bmcfg_one_size(QBM_SIZE_ACM)
/*Config do cache invalid for the data part when do de-q-rx*/
bmcfg_cache_invalid(KAL_FALSE) 
/*Config do cache flush the data part when do en-q-tx*/
bmcfg_cache_flush(KAL_FALSE) 
/*************************BM Pool CFG END******************/
#endif

/*-----------------------------------------------------------------------
 |    Start from Cache Operation (need cache_invalid, and cache_flush)
 ------------------------------------------------------------------------*/

#if __HIF_CCCI_SUPPORT__
/*************************BM Pool CFG Begin****************/
/* 20120724 ian: QBM_TYPE_CCCI_COMM*/
/* QBM_NUM_CCCI_COMM includes TTY internal used gpd */
/*BM Buffer type*/
bmcfg_type(QBM_TYPE_CCCI_COMM) 
/*The buffer number*/
bmcfg_num(QBM_NUM_CCCI_COMM) 
/*The size of one buffer*/
bmcfg_one_size(QBM_SIZE_CCCI_COMM) 
/*Config do cache invalid for the data part when do de-q-rx*/
bmcfg_cache_invalid(KAL_TRUE) 
/*Config do cache flush the data part when do en-q-tx*/
bmcfg_cache_flush(KAL_TRUE) 
/*************************BM Pool CFG END******************/
#endif

#if __IMS_SUPPORT__
/*************************BM Pool CFG Begin****************/
/* 20151203 eric: QBM_TYPE_IMS_UL */
/*BM Buffer type*/
bmcfg_type(QBM_TYPE_IMS_UL) 
/*The buffer number*/
bmcfg_num(QBM_NUM_IMS_UL) 
/*The size of one buffer*/
bmcfg_one_size(QBM_SIZE_IMS_UL)  
/*Config do cache invalid for the data part when do de-q-rx*/
bmcfg_cache_invalid(KAL_TRUE) 
/*Config do cache flush the data part when do en-q-tx*/
bmcfg_cache_flush(KAL_TRUE) 
/*************************BM Pool CFG END******************/
#endif

/*************************BM Pool CFG Begin****************/
/*BM Buffer type*/
bmcfg_type(QBM_TYPE_TTY_INT) 
/*The buffer number*/
bmcfg_num(QBM_NUM_TTY_INT) 
/*The size of one buffer*/
bmcfg_one_size(QBM_SIZE_TTY_INT) 
/*Config do cache invalid for the data part when do de-q-rx*/
bmcfg_cache_invalid(KAL_TRUE) 
/*Config do cache flush the data part when do en-q-tx*/
bmcfg_cache_flush(KAL_TRUE) 
/*************************BM Pool CFG END******************/

#if defined(__TTY_UT__) || defined(__QBM_GTEST__)
/*************************BM Pool CFG Begin****************/
/*BM Buffer type*/
bmcfg_type(QBM_TYPE_TTY_TYPE1) 
/*The buffer number*/
bmcfg_num(QBM_NUM_TTY_TYPE1) 
/*The size of one buffer*/
bmcfg_one_size(QBM_SIZE_TTY_TYPE1) 
/*Config do cache invalid for the data part when do de-q-rx*/
bmcfg_cache_invalid(KAL_TRUE) 
/*Config do cache flush the data part when do en-q-tx*/
bmcfg_cache_flush(KAL_TRUE) 
/*************************BM Pool CFG END******************/
#endif

#if __IMS_SUPPORT__
/*************************BM Pool CFG Begin****************/
/*BM Buffer type*/
bmcfg_type(QBM_TYPE_IMS_DL) 
/*The buffer number*/
bmcfg_num(QBM_NUM_IMS_DL)
/*The size of one buffer*/
bmcfg_one_size(QBM_SIZE_IMS_DL)
/*Config do cache invalid for the data part when do de-q-rx*/
bmcfg_cache_invalid(KAL_TRUE) 
/*Config do cache flush the data part when do en-q-tx*/
bmcfg_cache_flush(KAL_TRUE) 
/*************************BM Pool CFG END******************/
#endif
