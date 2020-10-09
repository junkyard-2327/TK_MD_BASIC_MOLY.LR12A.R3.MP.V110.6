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
 *   mmrf_common_cid.h
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   Multi-Mode RF & BB Chip ID & Compile Option
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef  _MMRF_COMMON_CID_H_
#define  _MMRF_COMMON_CID_H_

/*******************************************************************************
** Define BB chip in use
*******************************************************************************/

/* Divide chips into Series+Number */
#define MML1_CHIP_SER(ID)                        (0xFFFFF000&ID)
#define MML1_CHIP_NUM(ID)                        (0x00000FFF&ID)

/*---------------------------------------------------*/
/* Before MML1 RF Central Control :                  */
/*---------------------------------------------------*/
/* After MML1 RF Central Control :                   */
/*   (1) IS_MML1_CHIP_MT6290     : LTE R9 Modem      */
/*   (2) IS_MML1_CHIP_MT6595     :                   */
/*   (3) IS_MML1_CHIP_MT6752_MD1 :                   */
/*   (4) IS_MML1_CHIP_MT6752_MD2 :                   */
/*   (5) IS_MML1_CHIP_TK6291     : LTE-A R10 Modem   */
/*   (6) IS_MML1_CHIP_MT6755     : LTE-A Smart Phone */
/*   (7) IS_MML1_CHIP_MT6797     : LTE-A Smart Phone */
/*---------------------------------------------------*/

/*---------------------------------------------*/
/* For Dual Mode Project (2G/3G)               */
/*---------------------------------------------*/

/*---------------------------------------------*/
/* For MultiMode MultiRAT Project (2G/3G/LTE)  */
/*---------------------------------------------*/
#define _MML1_CHIP_ID_MT6290                      0x00001001   // MT6290  LTE   Modem
#define _MML1_CHIP_ID_MT6595                      0x00001002   // ROME    LTE   Smart Phone
#define _MML1_CHIP_ID_MT6752_MD1                  0x00001003   // K2 MD1  LTE   Smart Phone
#define _MML1_CHIP_ID_MT6752_MD2                  0x00001004   // K2 MD2  LTE   Smart Phone
#define _MML1_FPGA_ID_TK6291                      0x00002000   // TK6291  LTE-A FPGA
#define _MML1_CHIP_ID_TK6291                      0x00002001   // TK6291  LTE-A Test Chip
#define _MML1_CHIP_ID_MT6755                      0x00002002   // Jade    LTE-A Smart Phone
#define _MML1_CHIP_ID_MT6750                      0x00002003   // Jade-   LTE-A Smart Phone
#define _MML1_CHIP_ID_MT6750S                     0x00002004   // Rosa    LTE-A Smart Phone
#define _MML1_CHIP_ID_MT6797                      0x00002005   // Everest LTE-A Smart Phone
#define _MML1_CHIP_ID_MT6757                      0x00002006   // Olympus LTE-A Smart Phone
#define _MML1_CHIP_ID_MT6757P                     0x00002007   // Kibo+   LTE-A Smart Phone
#define _MML1_FPGA_ID_MT6292                      0x00003000   // Elbrus  LTE-A FPGA
#define _MML1_CHIP_ID_MT6292                      0x00003001   // Elbrus  LTE-A Modem
#define _MML1_CHIP_ID_MT6799                      0x00003002   // Whitney LTE-A Smart
#define _MML1_CHIP_ID_MT6799E2                    0x00003003   // Whitney E2 LTE-A Smart
#define _MML1_CHIP_ID_MT6759                      0x00003004   // Alaska  LTE-A Smart
#define _MML1_CHIP_ID_MT6758                      0x00003005   // Vinson  LTE-A Smart
#define _MML1_FPGA_ID_MT6293                      0x00004000   // Bianco  LTE-A FPGA
#define _MML1_CHIP_ID_MT6293                      0x00004001   // Bianco  LTE-A Modem
#define _MML1_CHIP_ID_MT6739                      0x00004002   // Zion    LTE-A Modem
#define _MML1_CHIP_ID_MT6771                      0x00004003   // Sylvia  LTE-A Modem
#define _MML1_CHIP_ID_MT6765                      0x00004004   // Cervino  LTE-A Modem
#define _MML1_CHIP_ID_MT6761                      0x00004005   // Merlot  LTE-A Modem
#define _MML1_CHIP_ID_MT6768                      0x00004006   // Talbot  LTE-A Modem

/*.......................................................*/

#define IS_MML1_CHIP_SER(ID)                      ( MML1_CHIP_SER(_MML1_CHIP_ID)==MML1_CHIP_SER(ID) )
#define IS_MML1_CHIP_SER_AND_LATTER(ID)           ( MML1_CHIP_NUM(_MML1_CHIP_ID)>=MML1_CHIP_NUM(ID) && IS_MML1_CHIP_SER(ID) )
#define IS_MML1_CHIP_SER_AND_BEFORE(ID)           ( MML1_CHIP_NUM(_MML1_CHIP_ID)<=MML1_CHIP_NUM(ID) && IS_MML1_CHIP_SER(ID) )

/*.......................................................*/

#define IS_MML1_CHIP_MT6290_AND_LATTER_VERSION    ( IS_MML1_CHIP_SER_AND_LATTER(_MML1_CHIP_ID_MT6290)  )
#define IS_MML1_CHIP_TK6291_AND_LATTER_VERSION    ( IS_MML1_CHIP_SER_AND_LATTER(_MML1_FPGA_ID_TK6291)  )
#define IS_MML1_CHIP_MT6755_AND_LATTER_VERSION    ( IS_MML1_CHIP_SER_AND_LATTER(_MML1_CHIP_ID_MT6755)  )
#define IS_MML1_CHIP_MT6797_AND_LATTER_VERSION    ( IS_MML1_CHIP_SER_AND_LATTER(_MML1_CHIP_ID_MT6797)  )
#define IS_MML1_CHIP_MT6750_AND_LATTER_VERSION    ( IS_MML1_CHIP_SER_AND_LATTER(_MML1_CHIP_ID_MT6750)  )
#define IS_MML1_CHIP_MT6750S_AND_LATTER_VERSION   ( IS_MML1_CHIP_SER_AND_LATTER(_MML1_CHIP_ID_MT6750S) )
#define IS_MML1_CHIP_MT6757_AND_LATTER_VERSION    ( IS_MML1_CHIP_SER_AND_LATTER(_MML1_CHIP_ID_MT6757)  )
#define IS_MML1_CHIP_MT6757P_AND_LATTER_VERSION   ( IS_MML1_CHIP_SER_AND_LATTER(_MML1_CHIP_ID_MT6757P) )
#define IS_MML1_CHIP_MT6292_AND_LATTER_VERSION    ( IS_MML1_CHIP_SER_AND_LATTER(_MML1_FPGA_ID_MT6292)  )
#define IS_MML1_CHIP_MT6799_AND_LATTER_VERSION    ( IS_MML1_CHIP_SER_AND_LATTER(_MML1_CHIP_ID_MT6799)  )
#define IS_MML1_CHIP_MT6799E2_AND_LATTER_VERSION  ( IS_MML1_CHIP_SER_AND_LATTER(_MML1_CHIP_ID_MT6799E2))
#define IS_MML1_CHIP_MT6759_AND_LATTER_VERSION    ( IS_MML1_CHIP_SER_AND_LATTER(_MML1_CHIP_ID_MT6759)  )
#define IS_MML1_CHIP_MT6758_AND_LATTER_VERSION    ( IS_MML1_CHIP_SER_AND_LATTER(_MML1_CHIP_ID_MT6758)  )
#define IS_MML1_CHIP_MT6293_AND_LATTER_VERSION    ( IS_MML1_CHIP_SER_AND_LATTER(_MML1_FPGA_ID_MT6293)  )
#define IS_MML1_CHIP_MT6739_AND_LATTER_VERSION    ( IS_MML1_CHIP_SER_AND_LATTER(_MML1_CHIP_ID_MT6739)  )
#define IS_MML1_CHIP_MT6771_AND_LATTER_VERSION    ( IS_MML1_CHIP_SER_AND_LATTER(_MML1_CHIP_ID_MT6771)  )
#define IS_MML1_CHIP_MT6765_AND_LATTER_VERSION    ( IS_MML1_CHIP_SER_AND_LATTER(_MML1_CHIP_ID_MT6765)  )
#define IS_MML1_CHIP_MT6761_AND_LATTER_VERSION    ( IS_MML1_CHIP_SER_AND_LATTER(_MML1_CHIP_ID_MT6761)  )
#define IS_MML1_CHIP_MT6768_AND_LATTER_VERSION    ( IS_MML1_CHIP_SER_AND_LATTER(_MML1_CHIP_ID_MT6768)  )

#define IS_MML1_CHIP_MT6290                       ( _MML1_CHIP_ID==_MML1_CHIP_ID_MT6290     )
#define IS_MML1_CHIP_MT6595                       ( _MML1_CHIP_ID==_MML1_CHIP_ID_MT6595     )
#define IS_MML1_CHIP_MT6752_MD1                   ( _MML1_CHIP_ID==_MML1_CHIP_ID_MT6752_MD1 )
#define IS_MML1_CHIP_MT6752_MD2                   ( _MML1_CHIP_ID==_MML1_CHIP_ID_MT6752_MD2 )
#define IS_MML1_FPGA_TK6291                       ( _MML1_CHIP_ID==_MML1_FPGA_ID_TK6291     )
#define IS_MML1_CHIP_TK6291                     ( ( _MML1_CHIP_ID==_MML1_CHIP_ID_TK6291     )||( _MML1_CHIP_ID==_MML1_FPGA_ID_TK6291     ) )
#define IS_MML1_CHIP_MT6755                       ( _MML1_CHIP_ID==_MML1_CHIP_ID_MT6755     )
#define IS_MML1_CHIP_MT6797                       ( _MML1_CHIP_ID==_MML1_CHIP_ID_MT6797     )
#define IS_MML1_CHIP_MT6750                       ( _MML1_CHIP_ID==_MML1_CHIP_ID_MT6750     )
#define IS_MML1_CHIP_MT6750S                      ( _MML1_CHIP_ID==_MML1_CHIP_ID_MT6750S    )
#define IS_MML1_CHIP_MT6757                       ( _MML1_CHIP_ID==_MML1_CHIP_ID_MT6757     )
#define IS_MML1_CHIP_MT6757P                      ( _MML1_CHIP_ID==_MML1_CHIP_ID_MT6757P    )
#define IS_MML1_FPGA_MT6292                       ( _MML1_CHIP_ID==_MML1_FPGA_ID_MT6292     )
#define IS_MML1_CHIP_MT6292                       ( _MML1_CHIP_ID==_MML1_CHIP_ID_MT6292     )
#define IS_MML1_CHIP_MT6799                     ( ( _MML1_CHIP_ID==_MML1_CHIP_ID_MT6799     )||( _MML1_CHIP_ID==_MML1_CHIP_ID_MT6799E2   ) )
#define IS_MML1_CHIP_MT6799E2                     ( _MML1_CHIP_ID==_MML1_CHIP_ID_MT6799E2   )
#define IS_MML1_CHIP_MT6759                       ( _MML1_CHIP_ID==_MML1_CHIP_ID_MT6759     )
#define IS_MML1_CHIP_MT6758                       ( _MML1_CHIP_ID==_MML1_CHIP_ID_MT6758     )
#define IS_MML1_FPGA_MT6293                       ( _MML1_CHIP_ID==_MML1_FPGA_ID_MT6293     )
#define IS_MML1_CHIP_MT6293                       ( _MML1_CHIP_ID==_MML1_CHIP_ID_MT6293     )
#define IS_MML1_CHIP_MT6739                       ( _MML1_CHIP_ID==_MML1_CHIP_ID_MT6739     )
#define IS_MML1_CHIP_MT6771                       ( _MML1_CHIP_ID==_MML1_CHIP_ID_MT6771     )
#define IS_MML1_CHIP_MT6765                       ( _MML1_CHIP_ID==_MML1_CHIP_ID_MT6765     )
#define IS_MML1_CHIP_MT6761                       ( _MML1_CHIP_ID==_MML1_CHIP_ID_MT6761     )
#define IS_MML1_CHIP_MT6768                       ( _MML1_CHIP_ID==_MML1_CHIP_ID_MT6768     )

/*.......................................................*/

/* real chip use */
#ifndef _MML1_CHIP_ID
   #if   defined(MT6290)
      #if defined(MT6290_S00)
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6290
      #else
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6290
      #endif
   #elif defined(MT6595)
      #if defined(MT6595_S00)
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6595
      #else
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6595
      #endif
   #elif defined(MT6752)
      #if defined(__MD1__)
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6752_MD1
      #elif defined(__MD2__)
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6752_MD2
      #else
         #error "Unexpected BB Chip was defined"
      #endif
   #elif defined(TK6291)
      #if defined(__FPGA__)
#define _MML1_CHIP_ID                             _MML1_FPGA_ID_TK6291
      #elif defined(TK6291_S00)
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_TK6291
      #else
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_TK6291
      #endif
   #elif defined(MT6750)
      #if defined(MT6750_S00)
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6750
      #else
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6750
      #endif  
   #elif defined(MT6750S)
      #if defined(MT6750S_S00)
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6750S
      #else
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6750S
      #endif  
   #elif defined(MT6755)
      #if defined(MT6755_S00)
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6755
      #else
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6755
      #endif
   #elif defined(MT6797)
      #if defined(MT6797_S00)
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6797
      #else
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6797
      #endif
   #elif defined(MT6757P)
      #if defined(MT6757P_S00)
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6757P
      #else
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6757P
      #endif     
   #elif defined(MT6757)
      #if defined(MT6757_S00)
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6757
      #else
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6757
      #endif
   #elif defined(ELBRUS)
      #if defined(__FPGA__)
#define _MML1_CHIP_ID                             _MML1_FPGA_ID_MT6292
      #elif defined(ELBRUS_S00)
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6292
      #else
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6292
      #endif
   #elif defined(MT6799)
      #if defined(MT6799_S00)
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6799
      #elif defined(MT6799_S01)
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6799E2
      #else
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6799
      #endif
   #elif defined(MT6759)
      #if defined(MT6759_S00)
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6759
      #else
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6759
      #endif
   #elif defined(MT6758)
      #if defined(MT6758_S00)
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6758
      #else
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6758
      #endif
   #elif defined(MT6763)
      #if defined(__FPGA__)
#define _MML1_CHIP_ID                             _MML1_FPGA_ID_MT6293
      #elif defined(MT6763_S00)
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6293
      #else
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6293
      #endif
   #elif defined(MT6739)
      #if defined(MT6739_S00)
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6739
      #else
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6739
      #endif
   #elif defined(MT6771)
      #if defined(MT6771_S00)
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6771
      #else
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6771
      #endif
   #elif defined(MT6765)
      #if defined(MT6765_S00)
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6765
      #else
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6765
      #endif
   #elif defined(MT6761)
      #if defined(MT6761_S00)
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6761
      #else
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6761
      #endif
   #elif defined(MT6768)
      #if defined(MT6768_S00)
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6768
      #else
#define _MML1_CHIP_ID                             _MML1_CHIP_ID_MT6768
      #endif
   #else
#define _MML1_CHIP_ID                             0
      //#error "please check chip version"  
   #endif
#else
   #error "Unexpected BB Chip was defined"
#endif
/*.......................................................*/

/*******************************************************************************
** Define RF chip in use
*******************************************************************************/

/*------------------------------------------*/
/* Use in MML1 :                            */
/*   ( 1) MML1_RF_ID_MT6169                 */
/*   ( 2) MML1_RF_ID_MT6176                 */
/*   (FF) MML1_RF_ID_NONE                   */
/*------------------------------------------*/

#define MML1_RF_ID_MT6169                         0x00000001
#define MML1_RF_ID_MT6176                         0x00000002
#define MML1_RF_ID_MT6177                         0x00000003
#define MML1_RF_ID_MT6179                         0x00000004
#define MML1_RF_ID_MT6177L                        0x00000005
#define MML1_RF_ID_MT6177M                        0x00000006
#define MML1_RF_ID_NONE                           0xFFFFFFFF //for non-MM RF

/*.......................................................*/
#define IS_MML1_RF_MT6169                         ( MML1_RF_ID==MML1_RF_ID_MT6169 )
#define IS_MML1_RF_MT6176                         ( MML1_RF_ID==MML1_RF_ID_MT6176 )
#define IS_MML1_RF_MT6177                         ( MML1_RF_ID==MML1_RF_ID_MT6177 )
#define IS_MML1_RF_MT6179                         ( MML1_RF_ID==MML1_RF_ID_MT6179 )
#define IS_MML1_RF_MT6177L                        ( MML1_RF_ID==MML1_RF_ID_MT6177L )
#define IS_MML1_RF_MT6177M                        ( MML1_RF_ID==MML1_RF_ID_MT6177M )
#define IS_MML1_RF_NONE                           ( MML1_RF_ID==MML1_RF_ID_NONE   )

/*.......................................................*/

#ifndef MML1_RF_ID
   #if   defined(MT6177M_RF)
#define MML1_RF_ID                                MML1_RF_ID_MT6177M
   #elif defined(MT6177L_RF)
#define MML1_RF_ID                                MML1_RF_ID_MT6177L
   #elif defined(MT6179_RF)
#define MML1_RF_ID                                MML1_RF_ID_MT6179
   #elif defined(MT6177_RF)
#define MML1_RF_ID                                MML1_RF_ID_MT6177
   #elif defined(MT6176_RF)
#define MML1_RF_ID                                MML1_RF_ID_MT6176
   #elif defined(MT6169_RF)||defined(MT6169_2G_RF)
#define MML1_RF_ID                                MML1_RF_ID_MT6169
   #elif defined(MT6165_2G_RF)
      #if IS_MML1_CHIP_MT6752_MD2   
#define MML1_RF_ID                                MML1_RF_ID_NONE   
      #else
         #error "No Valid RF Chip was defined"
      #endif
   #else
      #if IS_MML1_CHIP_MT6290_AND_LATTER_VERSION   
         #error "No Valid RF Chip was defined"
      #else
#define MML1_RF_ID                                0      
      #endif
   #endif
#else
   #error "Unexpected RF Chip was defined"
#endif //MML1_RF_ID

/*.......................................................*/

/*******************************************************************************
** Define PMIC chip in use
*******************************************************************************/

/*------------------------------------------*/
/* Use in MML1 :                            */
/*   ( 1) MML1_PMIC_ID_MT6325               */
/*   ( 2) MML1_PMIC_ID_MT6351               */
/*   (FF) MML1_PMIC_ID_NONE                 */
/*------------------------------------------*/

#define MML1_PMIC_ID_MT6325                       0x00000001
#define MML1_PMIC_ID_MT6351                       0x00000002
#define MML1_PMIC_ID_MT6353                       0x00000003
#define MML1_PMIC_ID_MT6335                       0x00000004
#define MML1_PMIC_ID_MT6356                       0x00000005
#define MML1_PMIC_ID_MT6357                       0x00000006
#define MML1_PMIC_ID_MT6358                       0x00000007
#define MML1_PMIC_ID_NONE                         0xFFFFFFFF //for non-MM RF

/*.......................................................*/

#define IS_MML1_PMIC_MT6325                       ( MML1_PMIC_ID==MML1_PMIC_ID_MT6325 )
#define IS_MML1_PMIC_MT6351                       ( MML1_PMIC_ID==MML1_PMIC_ID_MT6351 )
#define IS_MML1_PMIC_MT6353                       ( MML1_PMIC_ID==MML1_PMIC_ID_MT6353 )
#define IS_MML1_PMIC_MT6335                       ( MML1_PMIC_ID==MML1_PMIC_ID_MT6335 )
#define IS_MML1_PMIC_MT6356                       ( MML1_PMIC_ID==MML1_PMIC_ID_MT6356 )
#define IS_MML1_PMIC_MT6357                       ( MML1_PMIC_ID==MML1_PMIC_ID_MT6357 )
#define IS_MML1_PMIC_MT6358                       ( MML1_PMIC_ID==MML1_PMIC_ID_MT6358 )
#define IS_MML1_PMIC_NONE                         ( MML1_PMIC_ID==MML1_PMIC_ID_NONE   )

#ifndef MML1_PMIC_ID
   #if   defined(MT6351)
#define MML1_PMIC_ID                              MML1_PMIC_ID_MT6351   
   #elif defined(MT6325)
#define MML1_PMIC_ID                              MML1_PMIC_ID_MT6325
   #elif defined(MT6353)
#define MML1_PMIC_ID                              MML1_PMIC_ID_MT6353
   #elif defined(MT6335)
#define MML1_PMIC_ID                              MML1_PMIC_ID_MT6335
   #elif defined(MT6356)
#define MML1_PMIC_ID                              MML1_PMIC_ID_MT6356
   #elif defined(MT6357)
#define MML1_PMIC_ID                              MML1_PMIC_ID_MT6357
   #elif defined(MT6358)
#define MML1_PMIC_ID                              MML1_PMIC_ID_MT6358
   #else
#define MML1_PMIC_ID                              MML1_PMIC_ID_NONE
   #endif
#else
   #error "Unexpected PMIC Chip was defined"
#endif //MML1_PMIC_ID

#endif /* End of #ifndef _MMRF_COMMON_CID_H_ */

