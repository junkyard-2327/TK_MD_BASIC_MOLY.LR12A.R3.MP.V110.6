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
 *    drv_features_chip_select.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file is merged for all driver features.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by ClearCase. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Log$
 *
 * 12 25 2018 wei-de.chen
 * [MOLY00367362] [MT6768] Add definition of MT6768
 * 	
 * 	Add MT6768 related definition
 *
 * 11 28 2018 wei-de.chen
 * [MOLY00367362] [MT6768] Add definition of MT6768
 * Add MT6768 related definition
 *
 * 01 19 2018 wei-de.chen
 * [MOLY00303275] [Build Error][Merlot call for check-in] Add MT6761 related chip definition
 * Add MT6761 (Merlot) chip definition
 *
 * 10 30 2017 wei-de.chen
 * [MOLY00286038] [MT6765] Add definition of MT6765
 * Add MT6765 (Cervino) Definition
 *
 * 08 24 2017 wei-de.chen
 * [MOLY00273493] [UMOLYA] Add definition of MT6771
 * Add MT6771 (Sylvia) Definition
 *
 * 08 24 2017 wei-de.chen
 * [MOLY00273493] [UMOLYA] Add definition of MT6771
 * Add MT6771 (Sylvia) Definion
 *
 * 06 08 2017 wei-de.chen
 * [MOLY00243802] [MT6739] Add definition of MT6739
 * Add MT6739 related definition
 *
 * 05 26 2017 wei-de.chen
 * [MOLY00253086] [Need Patch](LTE domain) UMOLYA build error for MT6295M_FPGA(L1S_L1DISABLE)
 * Add MT6295M definition
 *
 * 04 20 2017 wei-de.chen
 * [MOLY00243706] [MT6295M] Add MT6295M related definition
 * Add MT6295 related definition
 *
 * 02 07 2017 wei-de.chen
 * [MOLY00227968] [MT6763] Add driver definition file of MT6763
 * Remove wrong setting due to rename
 *
 * 02 06 2017 wei-de.chen
 * [MOLY00227968] [MT6763] Add driver definition file of MT6763
 * Add driver definition file of MT6763
 *
 * 03 29 2016 wei-de.chen
 * [MOLY00171664] [UMOLYA] Add definition of MT6763
 * Add definition of MT6763
 *
 * 03 04 2016 wei-de.chen
 * [MOLY00167512] [Need Patch](LTE domain) UMOLY build error for M17_FPGA(LWTG_HRT)
 * M17 Request is cancelled, so rollback the code
 *
 * 08 13 2015 wei-de.chen
 * [MOLY00137134] [UMOLY] Add driver feature files for Elbrus
 * Add Elbrus define and related file at chip_select
 *
 * 06 03 2015 wei-de.chen
 * [MOLY00118268] [UMOLY] Add driver feature files for Jade(MT6755) and Everest(MT6797)
 * Add driver feature files for MT6755 and MT6797
 *
 * 03 27 2014 chin-chieh.hung
 * [MOLY00061132] TK6291 UMOLY update support: common driver part
 * add driver feature for TK6291
 *
 * 02 13 2014 chin-chieh.hung
 * [MOLY00055984] MT6589 MD2 integrated into MOLY Trunk
 * Add MT6589 MD2 common driver settings: feature selection
 *
 * 12 06 2013 chin-chieh.hung
 * [MOLY00045704] Init MT6595 common driver
 * ROME Porting
 *
 * 11 08 2013 chin-chieh.hung
 * [MOLY00045704] Init MT6595 common driver
 * add for MT6595 common driver
 *
 * 02 04 2013 chin-chieh.hung
 * [MOLY00009725] MT7208 rename to MT6290 - basic platform module
 * chip rename:MT7208 to MT6290
 * 
 * 11 02 2012 chin-chieh.hung
 * [MOLY00005322] TATAKA merge to MOLY
 * Integration change(non-devdrv/non-sys_drv driver part-2)
 *
 * 05 21 2012 zhanguo.ju
 * removed!
 * .
 *
 * 05 07 2012 zhanguo.ju
 * removed!
 * .
 *
 * 01 15 2012 zhanguo.ju
 * removed!
 * .
 *
 * 10 24 2011 robert.chang
 * removed!
 * Merge drv features from MT6255_DVT branch to MAUI
 *
 * 06 10 2011 toy.chen
 * removed!
 * <saved by Perforce>
 *
 * 01 07 2011 sophie.chen
 * removed!
 * .
 *
 * 12 22 2010 simon.shih
 * removed!
 * .
 *
 * 11 23 2010 simon.shih
 * removed!
 * .
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by ClaseCase. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __DRV_FEATURES_CHIP_SELSECT_H__
#define __DRV_FEATURES_CHIP_SELSECT_H__

#if defined(MT6268)
   #include "drv_features_6268.h"
   /*Above is MT6268T*/
#elif defined(MT6268T)
   #include "drv_features_6268t.h"
   /*Above is MT6268T*/
#elif defined(MT6268H)
   #include "drv_features_6268h.h"
   /*Above is MT6268H*/
#elif defined(MT6268A)
   #include "drv_features_6268A.h"
   /*Above is MT6268A*/
#elif defined(MT6235)
   #include "drv_features_6235.h"
   /*Above is MT6235*/   
#elif defined(MT6235B)
   #include "drv_features_6235B.h"
   /*Above is MT6235B*/   
#elif defined(MT6236)
   #include "drv_features_6236.h"
   /*Above is MT6236*/   
#elif defined(MT6236B)
   #include "drv_features_6236B.h"
   /*Above is MT6236B*/   
#elif defined(TK6516)
   #include "drv_features_tk6516.h"
   /*Above is TK6516*/
#elif defined(MT6516)
   #include "drv_features_mt6516.h"
   /*Above is MT6516*/
#elif defined(MT6253T)
   #include "drv_features_6253t.h"
   /* Above is MT6253T */
#elif defined(MT6253)
   #include "drv_features_6253.h"
   /* Above is MT6253 */
#elif defined(MT6253E)
   #include "drv_features_6253E.h"
   /* Above is MT6253E */
#elif defined(MT6253L)
   #include "drv_features_6253L.h"
   /* Above is MT6253L */
#elif defined(MT6255)
   #include "drv_features_6255.h"
   /* Above is MT6255 */   
#elif defined(MT6922)
   #include "drv_features_6922.h"
   /* Above is MT6255 */    
#elif defined(MT6250)
   #include "drv_features_6250.h"
   /* Above is MT6250 */ 
#elif defined(MT6280)
   #include "drv_features_6280.h"
   /* Above is MT6280 */ 
#elif defined(MT6270A)
   #include "drv_features_6270A.h"
   /* Above is MT6270A */
#elif defined(MT6256)
   #include "drv_features_6256.h"
   /* Above is MT6256 */
#elif defined(MT6276)
   #include "drv_features_6276.h"
   /* Above is MT6276 */
#elif defined(MT6251)
   #include "drv_features_6251.h"
   /* Above is MT6251 */
#elif defined(MT6252)
   #include "drv_features_6252.h"
   /* Above is MT6252 */
#elif defined(MT6252H)
   #include "drv_features_6252H.h"
   /* Above is MT6252H */
#elif defined(MT6573)
   #include "drv_features_6573.h"
   /* Above is MT6573 */
#elif defined(MT6575)
   #include "drv_features_6575.h"
   /* Above is MT6575 */
#elif defined(MT6577)
   #include "drv_features_6577.h"
   /* Above is MT6577 */
#elif defined(MT6290)
   #include "drv_features_6290.h"
   /* Above is MT6290 */
#elif defined(MT6595)
   #include "drv_features_6595.h"
   /* Above is MT6595 */
#elif defined(MT6589)
   #include "drv_features_6589.h"
   /* Above is MT6589 */
#elif defined(TK6291)
   #include "drv_features_6291.h"
   /* Above is TK6291 */
#elif defined(MT6755)
   #include "drv_features_6755.h"
   /* Above is MT6755 */
#elif defined(MT6797)
   #include "drv_features_6797.h"
   /* Above is MT6797 */
#elif defined(ELBRUS)
   #include "drv_features_elbrus.h"
   /* Above is ELBRUS */
#elif defined(MT6763)
   #include "drv_features_6763.h"
   /* Above is MT6763 */
#elif defined(MT6739)
   #include "drv_features_6739.h"
   /* Above is MT6739 */
#elif defined(MT6771)
   #include "drv_features_6771.h"
   /* Above is MT6771 */
#elif defined(MT6765)
   #include "drv_features_6765.h"
   /* Above is MT6765 */
#elif defined(MT6295M)
   #include "drv_features_6295M.h"
   /* Above is MT6295M */
#elif defined(MT6761)
   #include "drv_features_6761.h"
   /* Above is MT6761 */
#elif defined(MT6768)
   #include "drv_features_6768.h"
   /* Above is MT6768 */
#else
   #error "The chip type is non-supported"
#endif   /*End of all chips*/


#endif   /*End __DRV_FEATURES_CHIP_SELSECT_H__*/
