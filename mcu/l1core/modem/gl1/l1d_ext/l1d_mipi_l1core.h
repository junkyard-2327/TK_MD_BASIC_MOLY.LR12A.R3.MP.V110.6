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
 *
 * Filename:
 * ---------
 *   l1d_mipi_l1core.h
 *
 * Project:
 * --------
 *   MT6290
 *
 * Description:
 * ------------
 *   MIPI constance defintion
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
 * $Revision:
 * $Modtime:
 * $Log:
 *
 *******************************************************************************/

#ifndef  _L1D_MIPI_H_
#define  _L1D_MIPI_H_
/*============================================================================== */

 #if IS_MIPI_SUPPORT

   #if IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
#define MIPI_BSI_C_CLK_SPD            2
#define MIPI_BSI_D_CLK_SPD            2
   /*  BSI_SPI_CLK  = 62.5  MHz   */
   /*  0 -->BSI_SPI_CLK/ 1  MHz   */
   /*  1 -->BSI_SPI_CLK/ 2  MHz   */
   /*  2 -->BSI_SPI_CLK/ 3  MHz   */
   /*  3 -->BSI_SPI_CLK/ 4  MHz   */
   /*  4 -->BSI_SPI_CLK/ 6  MHz   */
   /*  5 -->BSI_SPI_CLK/ 8  MHz   */
   /*  6 -->BSI_SPI_CLK/12  MHz   */
   /*  7 -->BSI_SPI_CLK/16  MHz   */
   #else
#error
   #endif

   #if IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
#define  MIPI_C_BSI_PORT_SELECT        3  /* MIPI uses port C               */
#define  MIPI_C_BSI_CLK_POL            1  /* Inverted enable pulse polarity */
#define  MIPI_C_BSI_IDLE_CNT           0  /* default setting is 0           */
#define  MIPI_D_BSI_PORT_SELECT        2  /* MIPI uses port D               */
#define  MIPI_D_BSI_CLK_POL            1  /* Inverted enable pulse polarity */
#define  MIPI_D_BSI_IDLE_CNT           0  /* default setting is 0           */
   #else
#error
   #endif

   #if IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
/* Serial Port Control C Setting */
#define  BSI_DEVICE_C_0_CS (BSI_DEVICE_0_CS_POLARITY&0x7)
#define  BSI_C_IDLE_CNT    MIPI_C_BSI_IDLE_CNT
#define  BSI_C_WLEN        21
#define  SCTRL_MAIN_C_SPI  ((BSI_CLK_POL)|((MIPI_BSI_C_CLK_SPD&0x7)<<2)|(BSI_DEVICE_C_0_CS<<5)|((BSI_C_IDLE_CNT&0x1F)<<16)|((BSI_C_WLEN&0x1F)<<24))
/* Serial Port Control D Setting */
#define  BSI_DEVICE_D_0_CS (BSI_DEVICE_0_CS_POLARITY&0x7)
#define  BSI_D_IDLE_CNT    MIPI_D_BSI_IDLE_CNT
#define  BSI_D_WLEN        21
#define  SCTRL_MAIN_D_SPI  ((BSI_CLK_POL)|((MIPI_BSI_D_CLK_SPD&0x7)<<2)|(BSI_DEVICE_D_0_CS<<5)|((BSI_D_IDLE_CNT&0x1F)<<16)|((BSI_D_WLEN&0x1F)<<24))
   #else
#error
   #endif
#if IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
#define MIPI_ENA           1 /* MIPI default port */
#define MIPI_ENB           1 /* MIPI default port */
#define MIPI_ENC           1 /* MIPI default port */
#define MIPI_END           1 /* MIPI default port */
#else
#define MIPI_ENA           0 /* RFIC default port */
#define MIPI_ENB           0 /* PMIC default port */
#define MIPI_ENC           1 /* MIPI default port */
#define MIPI_END           1 /* MIPI default port */
#endif
#define SCTRL_MIPI_MAIN    ((MIPI_END<<3)|(MIPI_ENC<<2)|(MIPI_ENB<<1)|(MIPI_ENA<<0))


   #if ( IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293 )
/* TK6291 2G BB driver does not support MIPI CW read back function itself.                 */
/* If MIPI CW read back function is needed, 2G driver can use MMRF API to get this service.*/
   #else
/*------------------*\
|* MIPI_C_BSI_RDCON *|
\*-----------------------------------------------------------------------------------------------------------------*/
#define MIPI_C_BSI_RDCON_IMMRD_NULL             0  /* 0: not trigger                                               */
#define MIPI_C_BSI_RDCON_IMMRD_IMM              1  /* 1: trigger immediate readback                                */
#define MIPI_C_BSI_RDCON_IMMRD_EVENT            0  /* 0: not trigger                                               */
#define MIPI_C_BSI_RDCON_ENHW_ON                1  /* 1: HW read back function enable                              */
#define MIPI_C_BSI_RDCON_RDATA_LEN              9  /* data length                                                  */
#define MIPI_C_BSI_RDCON_TRANS_CLKON            0  /* 1: with transition                                           */
#define MIPI_C_BSI_RDCON_TRANS_LEN              0  /* transiton state length                                       */
                                                   /* 0: 122.88/ 2 MHz (reserved)                                  */
#define MIPI_C_BSI_RDCON_RD_CLK_SPD             2  /* 1: 122.88/ 4 MHz (default)                                   */
                                                   /* 2: 122.88/ 6 MHz                                             */
                                                   /* 3: 122.88/ 8 MHz                                             */
                                                   /* 4: 122.88/12 MHz                                             */
                                                   /* 5: 122.88/16 MHz                                             */
                                                   /* 6: 122.88/24 MHz                                             */
                                                   /* 7: 122.88/32 MHz                                             */

#define MIPI_C_BSI_RDCON_COMMON_SETTING ((REG_SET(MIPI_C_BSI_RDCON_ENHW_ON     ,15,1))|(REG_SET(MIPI_C_BSI_RDCON_RDATA_LEN-1,8,6))|\
                                         (REG_SET(MIPI_C_BSI_RDCON_TRANS_CLKON , 7,1))|(REG_SET(MIPI_C_BSI_RDCON_TRANS_LEN  ,3,4))|\
                                         (REG_SET(MIPI_C_BSI_RDCON_RD_CLK_SPD  , 0,3)))
#define MIPI_C_BSI_RDCON_START_SETTING  ((REG_SET(MIPI_C_BSI_RDCON_IMMRD_NULL  ,19,1))|MIPI_C_BSI_RDCON_COMMON_SETTING)
#define MIPI_C_BSI_RDCON_IMMRD_SETTING  ((REG_SET(MIPI_C_BSI_RDCON_IMMRD_IMM   ,19,1))|MIPI_C_BSI_RDCON_COMMON_SETTING)
#define MIPI_C_BSI_RDCON_EVENT_SETTING  ((REG_SET(MIPI_C_BSI_RDCON_IMMRD_EVENT ,19,1))|MIPI_C_BSI_RDCON_COMMON_SETTING)
/*-----------------------------------------------------------------------------------------------------------------*/

/*-----------------------*\
|* MIPI_C_BSI_RDADDR_CON *|
\*-----------------------------------------------------------------------------------------------------------------*/
#define MIPI_C_BSI_RDADDR_CON_CS                0  /* CS0 is selected                                              */
#define MIPI_C_BSI_RDADDR_CON_CLK_POL           1  /* Inverted clock polarity                                      */
#define MIPI_C_BSI_RDADDR_CON_LEN              13  /* The actual length is 13                                      */
#define MIPI_C_BSI_RDADDR_CON_WADDR_CLK_SPD     1  /* 0: 122.88/ 2 MHz (reserved)                                  */
                                                   /* 1: 122.88/ 4 MHz (default)                                   */
                                                   /* 2: 122.88/ 6 MHz                                             */
                                                   /* 3: 122.88/ 8 MHz                                             */
                                                   /* 4: 122.88/12 MHz                                             */
                                                   /* 5: 122.88/16 MHz                                             */
                                                   /* 6: 122.88/24 MHz                                             */
                                                   /* 7: 122.88/32 MHz                                             */

#define MIPI_C_BSI_RDADDR_CON_MAIN  ((REG_SET(MIPI_C_BSI_RDADDR_CON_CS     ,15,1))|(REG_SET(MIPI_C_BSI_RDADDR_CON_LEN-1        ,8,5))|\
                                     (REG_SET(MIPI_C_BSI_PORT_SELECT     , 6,2))|(REG_SET(MIPI_C_BSI_RDADDR_CON_WADDR_CLK_SPD,3,3))|\
                                     (REG_SET(MIPI_C_BSI_RDADDR_CON_CLK_POL, 1,2)))
/*-----------------------------------------------------------------------------------------------------------------*/

/*-------------------*\
|* MIPI_C_BSI_RDADDR *|
\*-----------------------------------------------------------------------------------------------------------------*/
#define MIPI_C_BSI_RDADDRn(addr)                (REG_SET(addr,0,MIPI_C_BSI_RDADDR_CON_LEN))
/*-----------------------------------------------------------------------------------------------------------------*/

/*---------------------*\
|* MIPI_C_BSI_RDCS_CON *|
\*-----------------------------------------------------------------------------------------------------------------*/
#define MIPI_C_BSI_RDCS_CON_RDATA_CS_VAL        0  /* 0: CS configure as low in RDATA state                        */
                                                   /* 1: CS configure as high in RDATA state                       */
#define MIPI_C_BSI_RDCS_CON_TRANS_CS_WAVEFORM   0  /* Bitmap of CS waveform; serial output                         */

#define MIPI_C_BSI_RDCS_CON_MAIN    ((REG_SET(MIPI_C_BSI_RDCS_CON_RDATA_CS_VAL,15,1))|(REG_SET(MIPI_C_BSI_RDCS_CON_TRANS_CS_WAVEFORM,0,15)))
/*-----------------------------------------------------------------------------------------------------------------*/

/*--------------------------*\
|* MIPI C BSISPI_IC0_PARAM1 *|
\*----------------------------------------------------------------------------------------------------------*/
#define MIPI_C_BSISPI_RD_CLK_SPD           MIPI_C_BSI_RDCON_RD_CLK_SPD
#define MIPI_C_BSISPI_RD_TRANS_CLKON       MIPI_C_BSI_RDCON_TRANS_CLKON
#define MIPI_C_BSISPI_RD_TRANS_LEN         MIPI_C_BSI_RDCON_TRANS_LEN
#define MIPI_C_BSISPI_IC0_PARAM1_MAIN      (((MIPI_C_BSISPI_RD_TRANS_LEN&0xF)<<12)|((MIPI_C_BSISPI_RD_TRANS_CLKON&0x1)<<11)|((MIPI_C_BSISPI_RD_CLK_SPD&0x7)<<8))
/*----------------------------------------------------------------------------------------------------------*/

/*--------------------------*\
|* MIPI C BSISPI_IC0_PARAM2 *|
\*----------------------------------------------------------------------------------------------------------*/
#define MIPI_C_BSISPI_RD_RLEN              MIPI_C_BSI_RDCON_RDATA_LEN
#define MIPI_C_BSISPI_RD_WLEN              MIPI_C_BSI_RDADDR_CON_LEN
#define MIPI_C_BSISPI_RD_RDATA_CS_POL      MIPI_C_BSI_RDCS_CON_RDATA_CS_VAL
#define MIPI_C_BSISPI_RD_TRANS_CS_WAVEFORM MIPI_C_BSI_RDCS_CON_TRANS_CS_WAVEFORM
#define MIPI_C_BSISPI_IC0_PARAM2_MAIN      ((((MIPI_C_BSISPI_RD_RLEN-1)&0x3F)<<24)|(((MIPI_C_BSISPI_RD_WLEN-1)&0x1F)<<16)|((MIPI_C_BSISPI_RD_RDATA_CS_POL&0x1)<<15)|(MIPI_C_BSISPI_RD_TRANS_CS_WAVEFORM&0x7FFF))
/*----------------------------------------------------------------------------------------------------------*/

/*------------------*\
|* MIPI_D_BSI_RDCON *|
\*-----------------------------------------------------------------------------------------------------------------*/
#define MIPI_D_BSI_RDCON_IMMRD_NULL             0  /* 0: not trigger                                               */
#define MIPI_D_BSI_RDCON_IMMRD_IMM              1  /* 1: trigger immediate readback                                */
#define MIPI_D_BSI_RDCON_IMMRD_EVENT            0  /* 0: not trigger                                               */
#define MIPI_D_BSI_RDCON_ENHW_ON                1  /* 1: HW read back function enable                              */
#define MIPI_D_BSI_RDCON_RDATA_LEN              9  /* data length                                                  */
#define MIPI_D_BSI_RDCON_TRANS_CLKON            0  /* 1: with transition                                           */
#define MIPI_D_BSI_RDCON_TRANS_LEN              0  /* transiton state length                                       */
                                                   /* 0: 122.88/ 2 MHz (reserved)                                  */
#define MIPI_D_BSI_RDCON_RD_CLK_SPD             2  /* 1: 122.88/ 4 MHz (default)                                   */
                                                   /* 2: 122.88/ 6 MHz                                             */
                                                   /* 3: 122.88/ 8 MHz                                             */
                                                   /* 4: 122.88/12 MHz                                             */
                                                   /* 5: 122.88/16 MHz                                             */
                                                   /* 6: 122.88/24 MHz                                             */
                                                   /* 7: 122.88/32 MHz                                             */

#define MIPI_D_BSI_RDCON_COMMON_SETTING ((REG_SET(MIPI_D_BSI_RDCON_ENHW_ON     ,15,1))|(REG_SET(MIPI_D_BSI_RDCON_RDATA_LEN-1,8,6))|\
                                         (REG_SET(MIPI_D_BSI_RDCON_TRANS_CLKON , 7,1))|(REG_SET(MIPI_D_BSI_RDCON_TRANS_LEN  ,3,4))|\
                                         (REG_SET(MIPI_D_BSI_RDCON_RD_CLK_SPD  , 0,3)))
#define MIPI_D_BSI_RDCON_START_SETTING  ((REG_SET(MIPI_D_BSI_RDCON_IMMRD_NULL  ,19,1))|MIPI_D_BSI_RDCON_COMMON_SETTING)
#define MIPI_D_BSI_RDCON_IMMRD_SETTING  ((REG_SET(MIPI_D_BSI_RDCON_IMMRD_IMM   ,19,1))|MIPI_D_BSI_RDCON_COMMON_SETTING)
#define MIPI_D_BSI_RDCON_EVENT_SETTING  ((REG_SET(MIPI_D_BSI_RDCON_IMMRD_EVENT ,19,1))|MIPI_D_BSI_RDCON_COMMON_SETTING)
/*-----------------------------------------------------------------------------------------------------------------*/

/*-----------------------*\
|* MIPI_D_BSI_RDADDR_CON *|
\*-----------------------------------------------------------------------------------------------------------------*/
#define MIPI_D_BSI_RDADDR_CON_CS                0  /* CS0 is selected                                              */
#define MIPI_D_BSI_RDADDR_CON_CLK_POL           1  /* Inverted clock polarity                                      */
#define MIPI_D_BSI_RDADDR_CON_LEN              13  /* The actual length is 13                                      */
#define MIPI_D_BSI_RDADDR_CON_WADDR_CLK_SPD     1  /* 0: 122.88/ 2 MHz (reserved)                                  */
                                                   /* 1: 122.88/ 4 MHz (default)                                   */
                                                   /* 2: 122.88/ 6 MHz                                             */
                                                   /* 3: 122.88/ 8 MHz                                             */
                                                   /* 4: 122.88/12 MHz                                             */
                                                   /* 5: 122.88/16 MHz                                             */
                                                   /* 6: 122.88/24 MHz                                             */
                                                   /* 7: 122.88/32 MHz                                             */

#define MIPI_D_BSI_RDADDR_CON_MAIN  ((REG_SET(MIPI_D_BSI_RDADDR_CON_CS     ,15,1))|(REG_SET(MIPI_D_BSI_RDADDR_CON_LEN-1        ,8,5))|\
                                     (REG_SET(MIPI_D_BSI_PORT_SELECT     , 6,2))|(REG_SET(MIPI_D_BSI_RDADDR_CON_WADDR_CLK_SPD,3,3))|\
                                     (REG_SET(MIPI_D_BSI_RDADDR_CON_CLK_POL, 1,2)))
/*-----------------------------------------------------------------------------------------------------------------*/

/*-------------------*\
|* MIPI_D_BSI_RDADDR *|
\*-----------------------------------------------------------------------------------------------------------------*/
#define MIPI_D_BSI_RDADDRn(addr)                (REG_SET(addr,0,MIPI_D_BSI_RDADDR_CON_LEN))
/*-----------------------------------------------------------------------------------------------------------------*/

/*---------------------*\
|* MIPI_D_BSI_RDCS_CON *|
\*-----------------------------------------------------------------------------------------------------------------*/
#define MIPI_D_BSI_RDCS_CON_RDATA_CS_VAL        0  /* 0: CS configure as low in RDATA state                        */
                                                   /* 1: CS configure as high in RDATA state                       */
#define MIPI_D_BSI_RDCS_CON_TRANS_CS_WAVEFORM   0  /* Bitmap of CS waveform; serial output                         */

#define MIPI_D_BSI_RDCS_CON_MAIN    ((REG_SET(MIPI_D_BSI_RDCS_CON_RDATA_CS_VAL,15,1))|(REG_SET(MIPI_D_BSI_RDCS_CON_TRANS_CS_WAVEFORM,0,15)))
/*-----------------------------------------------------------------------------------------------------------------*/

/*--------------------------*\
|* MIPI D BSISPI_IC0_PARAM1 *|
\*----------------------------------------------------------------------------------------------------------*/
#define MIPI_D_BSISPI_RD_CLK_SPD           MIPI_D_BSI_RDCON_RD_CLK_SPD
#define MIPI_D_BSISPI_RD_TRANS_CLKON       MIPI_D_BSI_RDCON_TRANS_CLKON
#define MIPI_D_BSISPI_RD_TRANS_LEN         MIPI_D_BSI_RDCON_TRANS_LEN
#define MIPI_D_BSISPI_IC0_PARAM1_MAIN      (((MIPI_D_BSISPI_RD_TRANS_LEN&0xF)<<12)|((MIPI_D_BSISPI_RD_TRANS_CLKON&0x1)<<11)|((MIPI_D_BSISPI_RD_CLK_SPD&0x7)<<8))
/*----------------------------------------------------------------------------------------------------------*/

/*--------------------------*\
|* MIPI D BSISPI_IC0_PARAM2 *|
\*----------------------------------------------------------------------------------------------------------*/
#define MIPI_D_BSISPI_RD_RLEN              MIPI_D_BSI_RDCON_RDATA_LEN
#define MIPI_D_BSISPI_RD_WLEN              MIPI_D_BSI_RDADDR_CON_LEN
#define MIPI_D_BSISPI_RD_RDATA_CS_POL      MIPI_D_BSI_RDCS_CON_RDATA_CS_VAL
#define MIPI_D_BSISPI_RD_TRANS_CS_WAVEFORM MIPI_D_BSI_RDCS_CON_TRANS_CS_WAVEFORM
#define MIPI_D_BSISPI_IC0_PARAM2_MAIN      ((((MIPI_D_BSISPI_RD_RLEN-1)&0x3F)<<24)|(((MIPI_D_BSISPI_RD_WLEN-1)&0x1F)<<16)|((MIPI_D_BSISPI_RD_RDATA_CS_POL&0x1)<<15)|(MIPI_D_BSISPI_RD_TRANS_CS_WAVEFORM&0x7FFF))
/*----------------------------------------------------------------------------------------------------------*/
   #endif /* IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293 */

/*============================================================================== */
#endif /* End of IS_MIPI_SUPPORT */

#endif /*End of "#ifndef _L1D_MIPI_H_" */

