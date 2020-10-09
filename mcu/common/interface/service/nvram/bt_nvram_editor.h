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
 * 
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 * 
 *
 * Author:
 * -------
 * 
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __BT_NVRAM_EDITOR_H__
#define __BT_NVRAM_EDITOR_H__

#ifndef NVRAM_NOT_PRESENT
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "bt_nvram_def.h"

// Data Structure of Each LID

typedef struct
{
   kal_uint8 BluetoothAddress[6];
   kal_uint8 MinEncryptionSize[1];
   kal_uint8 MaxEncryptionSize[1];
   kal_uint8 HCITransportLayerParameters[3];
   kal_uint8 FixedPIN[16];
   kal_uint8 FixedPINLength[1];
   kal_uint8 SleepEnableMask[1];
   kal_uint8 LowPowerClockParameter[8];
   kal_uint8 PowerControlConfiguration[13];
   kal_uint8 SleepControlParameters[12];
   kal_uint8 DebugControl[4];
   kal_uint8 LCandRMOverrideEnable[4];
   kal_uint8 RadioRegisterOverride[6];
   kal_uint8 CodecConfiguration[8];
   kal_uint8 CVSDGainVolumeSettings[6];
   kal_uint8 VoiceSettings[2];
   kal_uint8 UserBaudRate[3];
//   kal_uint8 CoexistenceParameters[4];
   kal_uint8 LowPowerDriftRate[1];
   kal_uint8 MaxTxPowerLevel[1];
   kal_uint8 AdaptiveFrequencyHoppingParameters[29];
   kal_uint8 BufferSize[4];
   kal_uint8 GpioMapping[16];
   kal_uint8 GpioPolarity[4];
}  nvram_ef_btradio_rfmd3500_struct;
#ifndef  __NVRAM_EF_BTRADIO_RFMD3500_STRUCT__
#define  __NVRAM_EF_BTRADIO_RFMD3500_STRUCT__
#endif

typedef struct
{
    unsigned char BDAddr[6];
    unsigned char ClassOfDevice[3];
    unsigned char LinkKeyType[1];
    unsigned char UnitKey[16];
    unsigned char Encryption[3];
    unsigned char PinCodeType[1];
    unsigned char Voice[2];
    unsigned char Codec[1];
    unsigned char Radio[30];
    unsigned char Sleep[6];
    unsigned char MainOscillatorInfo[5];
    unsigned char LPOInfo[4];
    unsigned char AFH[9];
    unsigned char PTA[49];
    unsigned char WDT[2];
    unsigned char Debug[1];
    unsigned char UART[2];
}  nvram_ef_btradio_mt6601_struct;
#ifndef  __NVRAM_EF_BTRADIO_MT6601_STRUCT__
#define  __NVRAM_EF_BTRADIO_MT6601_STRUCT__
#endif

typedef struct
{
    unsigned char BDAddr[6];
    unsigned char CapId[1];
    unsigned char LinkKeyType[1];
    unsigned char UnitKey[16];
    unsigned char Encryption[3];
    unsigned char PinCodeType[1];
    unsigned char Voice[2];
    unsigned char Codec[1];
    unsigned char Radio[6];
    unsigned char Sleep[7];
    unsigned char Reserved[2];
}  nvram_ef_btradio_mt6611_struct;
#ifndef  __NVRAM_EF_BTRADIO_MT6611_STRUCT__
#define  __NVRAM_EF_BTRADIO_MT6611_STRUCT__
#endif

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifndef  __NVRAM_EF_BTRADIO_MT6612_STRUCT__
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifndef  __NVRAM_EF_BTRADIO_MT6616_STRUCT__
/* under construction !*/
#endif
#endif

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifndef  __NVRAM_EF_BTRADIO_MT6236_STRUCT__
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifndef  __NVRAM_EF_BTRADIO_MT6256_STRUCT__
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifndef  __NVRAM_EF_BTRADIO_MT6276_STRUCT__
/* under construction !*/
#endif
#endif

typedef struct
{
    unsigned char BDAddr[6];
    unsigned char CapId[1];
    unsigned char LinkKeyType[1];
    unsigned char UnitKey[16];
    unsigned char Encryption[3];
    unsigned char PinCodeType[1];
    unsigned char Voice[2];
    unsigned char Codec[1];
    unsigned char Radio[6];
    unsigned char Sleep[7];
    unsigned char Reserved[2];
    unsigned char ECLK_SEL;
}  nvram_ef_btradio_mtk_bt_chip_struct;
#ifndef  __NVRAM_EF_BTRADIO_MTK_BT_CHIP_STRUCT__
#define  __NVRAM_EF_BTRADIO_MTK_BT_CHIP_STRUCT__
#endif

#ifdef GEN_FOR_PC
BEGIN_NVRAM_DATA

#ifdef  __BTMODULE_RFMD3500__
     LID_BIT VER_LID(NVRAM_EF_BTRADIO_RFMD3500_LID)
     nvram_ef_btradio_rfmd3500_struct *NVRAM_EF_BTRADIO_RFMD3500_TOTAL
     {
     };
#endif
#ifdef  __BTMODULE_MT6601__
     LID_BIT VER_LID(NVRAM_EF_BTRADIO_MT6601_LID)
     nvram_ef_btradio_mt6601_struct * NVRAM_EF_BTRADIO_MT6601_TOTAL
     {
     };
#endif
#ifdef  __BTMODULE_MT6611__
     LID_BIT VER_LID(NVRAM_EF_BTRADIO_MT6611_LID)
     nvram_ef_btradio_mt6611_struct * NVRAM_EF_BTRADIO_MT6611_TOTAL
     {
     };
#endif
#if 0
#ifdef  __BTMODULE_MT6612__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#ifdef __BTMODULE_MT6616__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#endif

#if 0
#ifdef __BTMODULE_MT6236__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
#ifdef __BTMODULE_MT6256__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
#ifdef __BTMODULE_MT6276__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#endif

#if  defined(__BTMODULE_MT6612__) || defined(__BTMODULE_MT6616__) || defined(__BTMODULE_MT6622__) || defined(__BTMODULE_MT6626__) ||defined(__BTMODULE_MT6236__) || defined(__BTMODULE_MT6256__) || defined(__BTMODULE_MT6276__)
     LID_BIT VER_LID(NVRAM_EF_BTRADIO_MTK_BT_CHIP_LID)
     nvram_ef_btradio_mtk_bt_chip_struct * NVRAM_EF_BTRADIO_MTK_BT_CHIP_TOTAL
     {
     };
#endif

END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 

#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __BT_NVRAM_EDITOR_H__ */
