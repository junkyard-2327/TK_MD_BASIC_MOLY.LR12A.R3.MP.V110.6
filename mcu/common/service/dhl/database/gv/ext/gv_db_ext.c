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
 * gv_db_ext.c
 *
 * Project:
 * --------
 * MOLY
 *
 * Description:
 * ------------
 * This file used for pre-processing to build GV DB
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *  How to add a new gv script
 * 1. Put the gv script into the proper folder e.g: \dhl\database\gv\ext
 * 2. #include <xxx.gv>. 
 *    Notably, you should use #include <xxx.gv> rather than "xxx.gv"
 *    If you have two different scripts with the same name in database\gv\ext
 *    and database_modis\gv\ext, please make sure you use #include <xxx.gv>.
 *    If you use #include "xxx.gv", Codegen will process \dhl\database\gv\\extxxx.gv
 *    instead of \dhl\database_modis\gv\ext\xxx.gv. So you are suggested to use
 *    #include <xxx.gv> all the way.
 *******************************************************************************/

#ifdef _MODIS_ON_VC9_
#define __w64
#endif

#ifdef STDC_HEADERS
#undef STDC_HEADERS //it will include stdio.h
#endif

#include <dhl_vars.gv>


#ifdef UNIT_TEST 
//For MODIS Project, please include your header here, e.g: #include <modis.gv>
/*Please put your gv files to \dhl\database_modis\gv\ext\ */
#include <c2k_vars.gv>
#include <c2k.gv>
#include <c2k_l3.gv>
#include <IRAT.gv>
#include <C2K_VzW.gv>
#endif 
