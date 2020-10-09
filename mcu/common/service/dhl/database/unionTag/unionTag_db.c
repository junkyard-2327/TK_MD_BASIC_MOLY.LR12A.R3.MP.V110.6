/********************************************************************************************
 *     LEGAL DISCLAIMER 
 *
 *     (Header of MediaTek Software/Firmware Release or Documentation)
 *
 *     BY OPENING OR USING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES 
 *     THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE") RECEIVED 
 *     FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON AN "AS-IS" BASIS 
 *     ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES, EXPRESS OR IMPLIED, 
 *     INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR 
 *     A PARTICULAR PURPOSE OR NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY 
 *     WHATSOEVER WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, 
 *     INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK 
 *     ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
 *     NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S SPECIFICATION 
 *     OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
 *     
 *     BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE LIABILITY WITH 
 *     RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION, 
 *     
 *     TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE 
 *     FEES OR SERVICE CHARGE PAID BY BUYER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
 *     
 *     THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE WITH THE LAWS 
 *     OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF LAWS PRINCIPLES.  
 ************************************************************************************************/


/*******************************************************************************
 *
 * Filename:
 * ---------
 * unionTag_db.c
 *
 * Project:
 * --------
 * MOLY
 *
 * Description:
 * ------------
 * This file used for pre-processing to build unionTag DB
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * $Log$
 *
 * 08 09 2016 aric.chiu
 * [MOLY00196065] [MT6293][folder structure] Move EL1/EL2 files from LTE domain to SWRD domain
 * [fldr_str][el1] add el1 dhl in swrd.
 *
 * 04 20 2015 yh.sung
 * [MOLY00108029] [TK6291] META mode related modifications
 * 	[New Feature]
 * 	1. MMRF runtime update
 * 	2. META MMRF commands
 *
 * 03 26 2014 roland.li
 * [MOLY00058618] [AGNSS] Modem modification on LBS_TASK
 * , add union tag.
 *
 * 01 21 2014 wcpuser_integrator
 * [MOLY00054475] SGLTE option rename
 * .
 *
 * 10 18 2013 danny.kuo
 * [MOLY00041595] [MT6290E1][MMDS_DC] MMDC feature patch back to MOLY trunk
 * Integration change.
 *
 * 10 18 2013 wenxiu.zhao
 * [MOLY00041595] [MT6290E1][MMDS_DC] MMDC feature patch back to MOLY trunk
 * .
 *
 * 10 18 2013 xiaogang.pan
 * [MOLY00041595] [MT6290E1][MMDS_DC] MMDC feature patch back to MOLY trunk
 * 	.
 *
 * 10 11 2013 xiaogang.pan
 * .
 *
 * 09 26 2013 danny.kuo
 * [MOLY00028800] [MMDC] PS Domain Switch Manager (PSDM) development
 * 	.
 *
 * 09 26 2013 xiaogang.pan
 * [MOLY00034698] mmdc duplicate module
 * 	.
 *
 * 09 26 2013 danny.kuo
 * [MOLY00028800] [MMDC] PS Domain Switch Manager (PSDM) development
 * 	.
 * 09 23 2013 xiaogang.pan
 * .
 *
 * 08 06 2013 stanleyhy.chen
 * [MOLY00032633] 4G Nbr Cell Info
 * Move unionTag related setting to lte_sec domain
 *
 * 08 06 2013 stanleyhy.chen
 * [MOLY00032633] 4G Nbr Cell Info
 * 4G Nbr Cell Info in OA Domain
 *
 * 03 18 2013 jerry.chang
 * [MOLY00009186] [SIBE/USIME/DBME] Multi-Mode CBr merge to MOLY
 * .
 *
 * 03 18 2013 yenchih.yang
 * [MOLY00009186] [SIBE/USIME/DBME] Multi-Mode CBr merge to MOLY
 * .
 *
 * 01 29 2013 ken.liu
 * [MOLY00009212] LTE Multimode merge back to MOLY
 * add log header.
 *
 *==============================================================================
 *  How to add a new unionTag script
 * 1. Put the unionTag script into the proper folder e.g: \dhl\database\unionTag
 *                                                  \dhl\database_classb\unionTag
 *                                                  \dhl\database_classb_umts\unionTag
 *                                                  \dhl\database_modis\unionTag
 * 2. #include <xxx.txt>. 
 *    Notably, you should use #include <xxx.txt> rather than "xxx.txt"
 *    If you have two different scripts with the same name in database\unionTag
 *    and database_modis\unionTag, please make sure you use #include <xxx.txt>.
 *    If you use #include "xxx.txt", Codegen will process \dhl\database\unionTag\xxx.txt
 *    instead of \dhl\database_modis\unionTag\xxx.txt. So you are suggested to use
 *    #include <xxx.txt> all the way.
 *******************************************************************************/
#ifdef _MODIS_ON_VC9_
#define __w64
#endif
 
#ifdef STDC_HEADERS
#undef STDC_HEADERS //it will include stdio.h
#endif

#ifdef __UMTS_RAT__
#include <unionTag.txt>
#endif

#if defined __RRLP_SUPPORT__
#include <rrlp_unionTag.txt>
#endif
#ifdef __SGLTE__
#include <mm_emm_context_unionTag.txt>
#endif
#ifdef __UMTS_FDD_MODE__

#if !defined(__MAUI_BASIC__)

#include <GAS_unionTag.txt>

#ifdef __PS_SERVICE__
#include <GAS_PS_unionTag.txt>
#endif

/* for MCDDLL */
#ifdef __PS_SERVICE__
#include <GAS_CS_PS_MCDDLL_unionTag.txt>
#else
#include <GAS_CS_MCDDLL_unionTag.txt>
#endif

#ifdef __EGPRS_MODE__
#include <GAS_EDGE_PS_unionTag.txt>
#endif

#endif

#endif /* FDD */

#ifdef __UMTS_TDD128_MODE__

#if !defined(__MAUI_BASIC__)

#include <GAS_unionTag_tdd.txt>

#ifdef __PS_SERVICE__
#include <GAS_PS_unionTag_tdd.txt>
#endif

/* for MCDDLL */
#ifdef __PS_SERVICE__
#include <GAS_CS_PS_MCDDLL_unionTag_tdd.txt>
#else
#include <GAS_CS_MCDDLL_unionTag_tdd.txt>
#endif

#ifdef __EGPRS_MODE__
#include <GAS_EDGE_PS_unionTag_tdd.txt>
#endif

#endif

#endif  /* TDD 128*/


#ifdef UNIT_TEST
//For MODIS Project, please include your header here, e.g: #include <modis.txt>
//Please put your unionTag files to \dhl\database_modis\unionTag\

#endif //#ifdef UNIT_TEST


#ifdef __UMTS_RAT__
//For 3G Project, please include your header here, e.g: #include <wcdma.txt>
//Please put your unionTag files to \dhl\database_classb_umts\unionTag\

// SUPL
#if defined __SUPL_SUPPORT__
#include <supl_unionTag.txt>
#endif

#endif  //__UMTS_RAT__

#ifndef __MTK_TARGET__
#ifdef __EM_MODE__
#include <em_unionTag.txt>
#endif
#endif
#ifdef __SGLTE__
#include <sim_union_tag.txt>
#endif

#ifdef __SGLTE__
#include <l4_unionTag.txt>
#endif

#ifdef __AGNSS_SUPPORT__
#include <gnss_unionTag.txt> 
#endif

#include <FT_GL1TST_UnionTag.txt>
#include <FT_UL1TST_UnionTag.txt>
#include <FT_EL1TST_UnionTag.txt>
#include <FT_MML1TST_UnionTag.txt>

#ifdef __EL1_ENABLE__
#include <el1_unionTag.txt>
#endif

