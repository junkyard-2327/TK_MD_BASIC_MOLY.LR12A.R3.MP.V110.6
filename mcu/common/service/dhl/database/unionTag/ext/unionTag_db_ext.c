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
 * unionTag_db_ext.c
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
 *==============================================================================
 *  How to add a new unionTag script
 * 1. Put the unionTag script into the proper folder e.g: \dhl\database\unionTag\ext
 *                                                  \dhl\database_modis\unionTag\ext
 * 2. #include <xxx.txt>. 
 *    Notably, you should use #include <xxx.txt> rather than "xxx.txt"
 *    If you have two different scripts with the same name in database\unionTag\ext
 *    and database_modis\unionTag\ext, please make sure you use #include <xxx.txt>.
 *    If you use #include "xxx.txt", Codegen will process \dhl\database\unionTag\ext\xxx.txt
 *    instead of \dhl\database_modis\unionTag\ext\xxx.txt. So you are suggested to use
 *    #include <xxx.txt> all the way.
 *******************************************************************************/
#ifdef _MODIS_ON_VC9_
#define __w64
#endif
 
#ifdef STDC_HEADERS
#undef STDC_HEADERS //it will include stdio.h
#endif

#ifdef __UMTS_FDD_MODE__
#endif /* FDD */


#ifdef __UMTS_TDD128_MODE__
#if !defined(__MAUI_BASIC__)

/* for MCDDLL */
#ifdef __PS_SERVICE__
#else
#endif

#endif
#endif  /* TDD 128*/


#ifdef UNIT_TEST
//For MODIS Project, please include your header here, e.g: #include <modis.txt>
//Please put your unionTag files to \dhl\database_modis\unionTag\ext\

#endif //#ifdef UNIT_TEST

