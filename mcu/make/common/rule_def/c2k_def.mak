# 
#  Copyright Statement:
#  ---------------------------
#  This software/firmware and related documentation ("MediaTek Software") are
#  protected under relevant copyright laws. The information contained herein 
#  is confidential and proprietary to MediaTek Inc. and/or its licensors.  
#  Without the prior written permission of MediaTek inc. and/or its licensors,
#  any reproduction,modification, use or disclosure of MediaTek Software, and
#  information contained herein, in whole or in part, shall be strictly prohibited.
#   
#  MediaTek Inc.(C)2011.All rights reserved.
#
#  BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND
#  AGREES THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK 
#  SOFTWARE") RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED 
#  TO RECEIVER ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL 
#  WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED 
#  WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR 
#  NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER 
#  WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, 
#  INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER 
#  AGREES TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING 
#  THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE 
#  RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES 
#  CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR 
#  ANY MEDIATEK SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO 
#  CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND 
#  EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT 
#  TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,AT MEDIATEK'S OPTION, 
#  TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,OR REFUND ANY SOFTWARE 
#  LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO MEDIATEK FOR SUCH MEDIATEK 
#  SOFTWARE AT ISSUE. 
#
# *************************************************************************

# Generated at 2015-05-12 10:55:44


# *************************************************************************
# C2K Defines
# *************************************************************************

################################################################################
#  
#      Configure Options 
#
################################################################################
ifeq ($(strip $(CONFIG_UI)),NONE)
  SUPPORT_UTK=TRUE
endif

################################################################################
#  
#      System definitions 
#
################################################################################

# Platform Options
ifeq ($(strip $(MODIS_CONFIG)),TRUE)
    SYS_ASIC = SA_CBP82
    SYS_BOARD = SB_DATACARD
else
    SYS_ASIC = SA_ELBRUS
    SYS_BOARD = SB_ELBRUS
endif

# RF Module Options
ifeq ($(strip $(MODIS_CONFIG)),TRUE)
    SYS_OPTION_RF_HW = SYS_RF_FCI_7790
else
    SYS_OPTION_RF_HW = SYS_RF_MT6176
endif

#
# Default IMD compiler flag
#
#SYS_OPTION_IMD_MODULE    = $(SYS_IMD_MODULE_NOTUSED)
SYS_OPTION_IMD_MODULE     = $(SYS_IMD_MODULE_ISUSED)
SYS_OPTION_IMD_GAIN_TABLE = $(SYS_IMD_GAIN_TABLE_NOSWITCH)

#
# Setup IMD compiler flag if IMD module is not used
#
ifeq ($(strip $(USE_IMD_MODULE)),FALSE)
  SYS_OPTION_IMD_MODULE     = $(SYS_IMD_MODULE_NOTUSED)
endif

#
# Setup IMD compiler flag if IMD module turns gain table
#
ifeq ($(strip $(TURN_IMD_TABLE)),TRUE)
  SYS_OPTION_IMD_GAIN_TABLE = $(SYS_IMD_GAIN_TABLE_SWITCH)
endif

#
# Default FMP MMSE MRC Switch flag
#
SYS_OPTION_FMP_MMSE_MRC   = $(SYS_FMP_MMSE_MRC_SWITCH)

#
# Setup FMP MMSE MRC compiler flag 
#
ifeq ($(strip $(USE_MMSE_MRC_MODULE)),FALSE)
  SYS_OPTION_FMP_MMSE_MRC   = $(SYS_FMP_MMSE_MRC_NOSWITCH)
endif

#
# Default RPC High Threshold Flag
#
SYS_OPTION_RPC_THRESHOLD  = $(SYS_RPC_HIGH_THRESHOLD_NOTUSED)

#
# Setup RPC High Threshold Flag
#
ifeq ($(strip $(USE_RPC_FIX)),TRUE)
  SYS_OPTION_RPC_THRESHOLD  = $(SYS_RPC_HIGH_THRESHOLD_USED)
endif

#
# Default GPS RF compiler flags to SYS_GPS_RF_NONE
#
SYS_OPTION_GPS_RF_HW      = $(SYS_GPS_RF_NONE)

#
# Setup GPS RF compiler flags if GLONAV 1040 is used
#
ifeq ($(strip $(USE_GLONAV_1040_GPS_RF)),TRUE)
  SYS_OPTION_GPS_RF_HW      = $(SYS_GPS_RF_GLONAV_1040)
endif

#
# Default GPS path feature
#
SYS_OPTION_GPS_HW = $(SYS_GPS_DEFAULT)

#
# Default External GPS compiler flags to NONE
#
SYS_OPTION_EXTERNAL_GPS_HW = $(SYS_EXT_GPS_NONE)

ifeq ($(strip $(USE_GPS_TYPE)),GPS_TYPE_INTERNAL)
  SYS_OPTION_GPS_HW = $(SYS_GPS_LOCAL_INTERNAL)
endif

ifeq ($(strip $(USE_GPS_TYPE)),GPS_TYPE_EXTERNAL_ON_CP)
  C2K_COM_DEFS += SYS_OPTION_GPS_EXTERNAL
endif

ifeq ($(strip $(USE_GPS_TYPE)),GPS_TYPE_EXTERNAL_ON_AP)
  C2K_COM_DEFS += SYS_OPTION_GPS_EXTERNAL
  SYS_OPTION_EXTERNAL_GPS_HW = $(SYS_EXT_GPS_ON_AP)
endif

C2K_COM_DEFS += SYS_OPTION_GPS_AP_CALL

SYS_OPTION_AP_GPS_HW = $(SYS_EXT_GPS_ON_AP_DEV0)

SYS_OPTION_AGPS_ENABLE = $(SYS_AGPS_ENABLE)
ifeq ($(strip $(MODIS_CONFIG)),FALSE)
SYS_OPTION_REFERENCE_FREQ = $(SYS_REFERENCE_FREQ_26_00)
else
SYS_OPTION_REFERENCE_FREQ = $(SYS_REFERENCE_FREQ_19_20)
endif
SYS_OPTION_32K_CLK_SOURCE = $(SYS_OPTION_32K_CLK_INT_OSC)
SYS_OPTION_TCXO_CONFIG    = $(SYS_OPTION_TCXO_SINGLE)

#
# Default Audio path feature
#
SYS_OPTION_AUDIO_PATH_FEATURE = $(SYS_OPTION_AUDIO_PATH_FEATURE_DEFAULT)

#
# Audio patch feature
#
ifeq ($(strip $(AUDIO_PATH_FEATURE)),DEFAULT)
  SYS_OPTION_AUDIO_PATH_FEATURE = $(SYS_OPTION_AUDIO_PATH_FEATURE_DEFAULT)
else
  ifeq ($(strip $(AUDIO_PATH_FEATURE)),ONE)
    SYS_OPTION_AUDIO_PATH_FEATURE = $(SYS_OPTION_AUDIO_PATH_FEATURE_ONE)
  else
    ifeq ($(strip $(AUDIO_PATH_FEATURE)),TWO)
      SYS_OPTION_AUDIO_PATH_FEATURE = $(SYS_OPTION_AUDIO_PATH_FEATURE_TWO)
    endif
  endif
endif



# Default flashless IPC device flags to SYS_IPC_DEV_NONE
#
SYS_OPTION_IPC_DEV      = $(SYS_IPC_DEV_NONE)

SYS_OPTION_HDET_HW       = $(SYS_HDET_DISCRETE)
#
# LMV221 power detector
#
ifeq ($(strip $(HDET_HW)),LMV221)
  SYS_OPTION_HDET_HW       = $(SYS_HDET_LMV221)
endif

#
# ADL550 power detector
#
ifeq ($(strip $(HDET_HW)),ADL550)
  SYS_OPTION_HDET_HW       = $(SYS_HDET_ADL550)
endif


# SYS_TARGET = $(ST_??)
#
# This define is used to select source code for the primary system target. 
#-------------------------------------------------------------------------

ST_HW  = 1
ST_SIM = 2

SYS_DEFS += ST_HW ST_SIM

ifneq ($(strip $(SYS_TARGET)),)
   SYS_DEFS += SYS_TARGET
endif

# SYS_BOARD = $(SB_??)
#
# This define is used to select source code for the board type used. 
#-------------------------------------------------------------------

SB_BB7      = 1
SB_EVB7     = 2
SB_FEATURE_PHONE = 3
SB_DATACARD = 4
SB_EVB8     = 5
SB_DENALI   = 6
SB_JADE     = 7
SB_EVEREST  = 8
SB_ELBRUS   = 10

SYS_DEFS += SB_BB7 SB_EVB7 SB_FEATURE_PHONE SB_DATACARD SB_EVB8 SB_DENALI SB_JADE SB_EVEREST SB_ELBRUS

ifneq ($(strip $(SYS_BOARD)),)
   SYS_DEFS += SYS_BOARD
endif

# SYS_BD_VARIANT = $(SBV_??)
#
# This define is used to select source code for a specific variant
# of the SB_EVB8 board.
# (Other SB_?? boards can have their own variants, too.)
#-------------------------------------------------------------------

SBV_BASE    = 0
SBV_FP      = 1

SYS_DEFS += SBV_BASE SBV_FP

ifneq ($(strip $(SYS_BD_VARIANT)),)
   SYS_DEFS += SYS_BD_VARIANT
endif

# SYS_ASIC = $(SA_??)
#
# This define is used to select source code for the type of process/ASIC used.  
# Since some code is shared between several ASICs, all of the following must be declared.
#-----------------------------------------------------------------------------

SA_FPGA     = 1
SA_CBP70    = 2
SA_CBP71    = 3
SA_CBP63    = 4
SA_CBP80    = 5
SA_CBP82    = 6
SA_MT6735   = 7
SA_MT6755   = 8
SA_MT6797   = 9
SA_ELBRUS   = 11

SYS_DEFS += SA_FPGA SA_CBP70 SA_CBP71 SA_CBP63 SA_CBP80 SA_CBP82 SA_MT6735 SA_MT6755 SA_MT6797 SA_ELBRUS

ifneq ($(strip $(SYS_ASIC)),)
   SYS_DEFS += SYS_ASIC
endif


# SYS_VERSION = $(SV_REV_??)
#
# This define is used to select source code which is specific to a particular 
# revision of the ASIC.  
#----------------------------------------------------------------------------

SV_REV_A0   = 10
SV_REV_A1   = 11
SV_REV_B0   = 20
SV_REV_C0   = 30
SV_REV_D0   = 40

SYS_VERSION    = SV_REV_A0
SYS_DSPM_PATCH = 0
                
SYS_DEFS += SV_REV_A0 SV_REV_A1 SV_REV_B0 SV_REV_C0 SV_REV_D0

ifneq ($(strip $(SYS_VERSION)),)
   SYS_DEFS += SYS_VERSION
endif

ifeq "$(USE_VER)" "SV_REV_A0"
SO_VERSION = $(SV_REV_A0)
else
ifeq "$(USE_VER)" "SV_REV_A1"
SO_VERSION = $(SV_REV_A1)
else
ifeq "$(USE_VER)" "SV_REV_B0"
SO_VERSION = $(SV_REV_B0)
else
ifeq "$(USE_VER)" "SV_REV_C0"
SO_VERSION = $(SV_REV_C0)
else
ifeq "$(USE_VER)" "SV_REV_D0"
SO_VERSION = $(SV_REV_D0)
else
SO_VERSION =
endif
endif
endif
endif
endif

# SYS_DSPM_PATCH = $(SP_??)
# This define is used to select source code for the specific patch revision.  
#-----------------------------------------------------------------------------

SP_ALL  = 0
SP_ONE   = 1
SP_TWO   = 2
SP_THREE = 3
SP_FOUR  = 4

SYS_DEFS += SP_ALL SP_ONE SP_TWO SP_THREE SP_FOUR

ifneq ($(strip $(SYS_DSPM_PATCH)),)
   SYS_DEFS += SYS_DSPM_PATCH
endif

# SYS_OPTION_RF_HW = $(SYS_RF_??)
#
# This define is used to set the Target RF Options
#-----------------------------------------------------------------------------
SYS_RF_GRF_6413     = 13
SYS_RF_FCI_7790     = 14
SYS_RF_MTK_ORIONC   = 15
SYS_RF_MT6176       = 16

SYS_DEFS +=      SYS_RF_GRF_6413 SYS_RF_FCI_7790 SYS_RF_MTK_ORIONC SYS_RF_MT6176

ifneq ($(strip $(SYS_OPTION_RF_HW)),)
   SYS_DEFS += SYS_OPTION_RF_HW
endif


# SYS_CUST_PLT = $(SYS_PLT_??)
#
# This define is used to set the Target custom platform Options
# ---------------------------------
SYS_PLT_SHAMU=0
SYS_PLT_MT6735_EVB=1
SYS_PLT_MT6735_PHONE=2
SYS_PLT_MT6755_EVB=3
SYS_PLT_MT6755_PHONE=4
SYS_PLT_MT6797_EVB=5
SYS_PLT_MT6797_PHONE=6

SYS_DEFS += SYS_PLT_SHAMU SYS_PLT_MT6735_EVB SYS_PLT_MT6735_PHONE SYS_PLT_MT6755_EVB SYS_PLT_MT6755_PHONE SYS_PLT_MT6797_EVB SYS_PLT_MT6797_PHONE

ifneq ($(strip $(SYS_CUST_PLT)),)
   SYS_DEFS += SYS_CUST_PLT
endif

# SYS_OPTION_IMD_MODULE = $(SYS_IMD_MODULE_ISUSED/NOTUSED)
#
# This define is used to set to use IMD module or not.
#-----------------------------------------------------------------------------
# SYS_IMD_MODULE_ISUSED     Value to identify IMD module is complied, can be used if enabled
# SYS_IMD_MODULE_NOTUSED    Value to identify IMD module is not complied, so cann not be used

SYS_IMD_MODULE_ISUSED    = 0
SYS_IMD_MODULE_NOTUSED   = 1

SYS_DEFS += SYS_IMD_MODULE_ISUSED SYS_IMD_MODULE_NOTUSED

ifneq ($(strip $(SYS_OPTION_IMD_MODULE)),)
   SYS_DEFS += SYS_OPTION_IMD_MODULE
endif

# SYS_OPTION_IMD_GAIN_TABLE = $(SYS_IMD_GAIN_TABLE_SWITCH)
#
# This define is used to set to switch IMD table or not 
#-----------------------------------------------------------------------------
# SYS_IMD_GAIN_TABLE_SWITCH      Value to identify IMD module switch gain table based detection result.
# SYS_IMD_GAIN_TABLE_NOSWITCH    Value to identify IMD module does not switch gain table no matter detection result is. 

SYS_IMD_GAIN_TABLE_NOSWITCH   = 0
SYS_IMD_GAIN_TABLE_SWITCH     = 1

SYS_DEFS += SYS_IMD_GAIN_TABLE_NOSWITCH SYS_IMD_GAIN_TABLE_SWITCH

ifneq ($(strip $(SYS_OPTION_IMD_GAIN_TABLE)),)
   SYS_DEFS += SYS_OPTION_IMD_GAIN_TABLE
endif

# SYS_OPTION_FMP_MMSE_MRC = $(SYS_FMP_MMSE_MRC_??)
#
# This define is used to Compile FMP MMSE-MRC Switch Module or not.
#-----------------------------------------------------------------------------
# SYS_FMP_MMSE_MRC_SWITCH   Value to identify Compile FMP MMSE-MRC Switch Module is complied, can be used if enabled
# SYS_FMP_MMSE_MRC_NOSWITCH Value to identify Compile FMP MMSE-MRC Switch Module is not complied

SYS_FMP_MMSE_MRC_NOSWITCH    = 0
SYS_FMP_MMSE_MRC_SWITCH      = 1

SYS_DEFS += SYS_FMP_MMSE_MRC_NOSWITCH SYS_FMP_MMSE_MRC_SWITCH

ifneq ($(strip $(SYS_OPTION_FMP_MMSE_MRC)),)
   SYS_DEFS += SYS_OPTION_FMP_MMSE_MRC
endif

# SYS_OPTION_RPC_THRESHOLD = $(SYS_RPC_HIGH_THRESHOLD_??)
#
# This define is used to Use High value of MBP_MCD_RPC_RTH or not.
#-----------------------------------------------------------------------------
# SYS_RPC_HIGH_THRESHOLD_USED       
# SYS_RPC_HIGH_THRESHOLD_NOTUSED    

SYS_RPC_HIGH_THRESHOLD_USED    = 0
SYS_RPC_HIGH_THRESHOLD_NOTUSED = 1

SYS_DEFS += SYS_RPC_HIGH_THRESHOLD_USED SYS_RPC_HIGH_THRESHOLD_NOTUSED

ifneq ($(strip $(SYS_OPTION_RPC_THRESHOLD)),)
   SYS_DEFS += SYS_OPTION_RPC_THRESHOLD
endif

# SYS_OPTION_GPS_RF_HW = $(SYS_GPS_RF_??)
#
# This define is used to set the Target GPS RF Options
#-----------------------------------------------------------------------------
# SYS_GPS_RF_NONE           Value to NON GPS RF is in use
# SYS_GPS_RF_GLONAV_1040    Value to identify GloNav 1040

SYS_GPS_RF_NONE         = 0
SYS_GPS_RF_GLONAV_1040  = 3

SYS_DEFS += SYS_GPS_RF_NONE SYS_GPS_RF_GLONAV_1040

ifneq ($(strip $(SYS_OPTION_GPS_RF_HW)),)
   SYS_DEFS += SYS_OPTION_GPS_RF_HW
endif

# SYS_OPTION_EXTERNAL_GPS_HW = $(SYS_EXT_GPS_??)
#
# This define is used to set the Target External GPS Options
#-----------------------------------------------------------------------------
# SYS_EXT_GPS_NONE       Value to NON External GPS is in use
# SYS_EXT_GPS_GNS_7560   Value to identify ST GNS7560
# SYS_EXT_GPS_ON_AP      Value to identify GPS Device for GPS on AP (Bypass AA Msg)  

SYS_EXT_GPS_NONE        = 0
SYS_EXT_GPS_ON_AP       = 2
SYS_EXT_GPS_ON_AP_DEV0  = 3

SYS_DEFS += SYS_EXT_GPS_NONE  SYS_EXT_GPS_ON_AP  SYS_EXT_GPS_ON_AP_DEV0

ifneq ($(strip $(SYS_OPTION_EXTERNAL_GPS_HW)),)
   SYS_DEFS += SYS_OPTION_EXTERNAL_GPS_HW
endif

# Agps option

SYS_AGPS_ENABLE = 1

SYS_DEFS += SYS_AGPS_ENABLE

ifneq ($(strip $(SYS_OPTION_AGPS_ENABLE)),)
   SYS_DEFS += SYS_OPTION_AGPS_ENABLE
endif

ifneq ($(strip $(SYS_OPTION_AP_GPS_HW)),)
  SYS_DEFS +=  SYS_OPTION_AP_GPS_HW
endif 


# SYS_OPTION_REFERENCE_FREQ = $(SYS_REFERENCE_??)
#
# This define is used to identify the Target Clock Reference
#-----------------------------------------------------------------------------
# SYS_REFERENCE_FREQ_19_20    Value to identify 19.20 MHz clock reference
# SYS_TEST_REF_FREQ_39_32     Value to identify 39.3216 MHz clock reference (for test only)
# SYS_REFERENCE_FREQ_26_00    Value to identify 26.00 MHz clock reference (for Denali)
#                                    Used for PLL bypass, so never use with option SYS_OPTION_INTERNAL_PLL
#                                    defined!!!

SYS_REFERENCE_FREQ_19_20   = 0
SYS_TEST_REF_FREQ_39_32    = 1
SYS_REFERENCE_FREQ_26_00   = 2

SYS_DEFS += SYS_REFERENCE_FREQ_19_20 SYS_TEST_REF_FREQ_39_32 SYS_REFERENCE_FREQ_26_00

ifneq ($(strip $(SYS_OPTION_REFERENCE_FREQ)),)
   SYS_DEFS += SYS_OPTION_REFERENCE_FREQ
endif

# SYS_OPTION_32K_CLK_SOURCE = $(SYS_OPTION_32K_CLK_??)
#
# This define is used to identify the 32K clock source
#-----------------------------------------------------------------------------
# SYS_OPTION_32K_CLK_INT_OSC    Value to identify internal 32K osc
# SYS_OPTION_32K_CLK_BYPASS     Value to identify external 32K osc
# SYS_OPTION_32K_CLK_DIV_TCXO Value to identify the usage of TCXO/512 instead of 32K osc 

SYS_OPTION_32K_CLK_INT_OSC     = 0
SYS_OPTION_32K_CLK_BYPASS      = 1
SYS_OPTION_32K_CLK_DIV_TCXO    = 2

SYS_DEFS += SYS_OPTION_32K_CLK_INT_OSC SYS_OPTION_32K_CLK_BYPASS SYS_OPTION_32K_CLK_DIV_TCXO

ifneq ($(strip $(SYS_OPTION_32K_CLK_SOURCE)),)
   SYS_DEFS += SYS_OPTION_32K_CLK_SOURCE
endif


# SYS_OPTION_AUDIO_PATH_FEATURE = $(SYS_OPTION_AUDIO_PATH_FEATURE_??)
#
# This define is used to select audio path feature
SYS_OPTION_AUDIO_PATH_FEATURE_DEFAULT     = 0
SYS_OPTION_AUDIO_PATH_FEATURE_ONE      = 1
SYS_OPTION_AUDIO_PATH_FEATURE_TWO      = 2

SYS_DEFS += SYS_OPTION_AUDIO_PATH_FEATURE_DEFAULT  SYS_OPTION_AUDIO_PATH_FEATURE_ONE SYS_OPTION_AUDIO_PATH_FEATURE_TWO

ifneq ($(strip $(SYS_OPTION_AUDIO_PATH_FEATURE)),)
   SYS_DEFS += SYS_OPTION_AUDIO_PATH_FEATURE
endif


#
# This define is used to select gps path feature
SYS_GPS_DEFAULT     = 0
SYS_GPS_LOCAL_INTERNAL      = 1


SYS_DEFS += SYS_GPS_DEFAULT  SYS_GPS_LOCAL_INTERNAL 

ifneq ($(strip $(SYS_OPTION_GPS_HW)),)
   SYS_DEFS += SYS_OPTION_GPS_HW
endif



# SYS_OPTION_USB
#
# Define USB used
# SYS_USB_NONE        USB not included  
# SYS_USB_SYNOPSYS    USB core in cbp7X and older 
# SYS_USB_SYNOPSYS2  - Adds 8 Interface and EP0 stall capability
# SYS_USB_GUC         USB core for cbp8X
SYS_USB_NONE           =  99
SYS_USB_SYNOPSYS       = 0 
SYS_USB_SYNOPSYS2      = 1 
SYS_USB_SYNOPSYS_LAST  = 2 
SYS_USB_GUC            = 3
SYS_USB_GUC_LAST       = 4

SYS_DEFS += SYS_USB_NONE SYS_USB_SYNOPSYS SYS_USB_SYNOPSYS2  SYS_USB_SYNOPSYS_LAST SYS_USB_GUC SYS_USB_GUC_LAST

ifneq ($(strip $(SYS_OPTION_USB)),)
   SYS_DEFS += SYS_OPTION_USB
endif


# SYS_OPTION_IPC_DEV
#
# Define the device type of AP-CBP, use for flashless support
# SYS_IPC_DEV_NONE   No IPC device  
# SYS_IPC_DEV_USB    USB IPC type
# SYS_IPC_DEV_DPRAM  DPRAM IPC type
# SYS_IPC_DEV_SDIO   SDIO IPC type
# SYS_IPC_DEV_SPI    SPI IPC type
# SYS_IPC_DEV_CCIF   CCIF IPC type
SYS_IPC_DEV_NONE     =  99
SYS_IPC_DEV_USB      = 2 
SYS_IPC_DEV_DPRAM    = 3 
SYS_IPC_DEV_SDIO     = 4 
SYS_IPC_DEV_SPI      = 5
SYS_IPC_DEV_CCIF     = 6

SYS_DEFS += SYS_IPC_DEV_NONE SYS_IPC_DEV_USB SYS_IPC_DEV_DPRAM SYS_IPC_DEV_SDIO SYS_IPC_DEV_SPI SYS_IPC_DEV_CCIF

ifneq ($(strip $(SYS_OPTION_IPC_DEV)),)
   SYS_DEFS += SYS_OPTION_IPC_DEV
endif

# SYS_OPTION_TCXO_CONFIG = $(SYS_OPTION_TCXO_??)
#
# This define is used to identify the TCXO configuration definition
#-----------------------------------------------------------------------------
# SYS_OPTION_TCXO_CONFIG                TCXO configuration definition
#
#      SYS_OPTION_TCXO_SINGLE              single TCXO
#      SYS_OPTION_TCXO_DBL_MAIN            double TCXO - main OSC supplies the ARM reference clock
#      SYS_OPTION_TCXO_DBL_AUX             double TCXO - aux OSC supplies the ARM reference clock

SYS_OPTION_TCXO_SINGLE     = 0
SYS_OPTION_TCXO_DBL_MAIN   = 1
SYS_OPTION_TCXO_DBL_AUX    = 2

SYS_DEFS += SYS_OPTION_TCXO_SINGLE SYS_OPTION_TCXO_DBL_MAIN SYS_OPTION_TCXO_DBL_AUX

ifneq ($(strip $(SYS_OPTION_TCXO_CONFIG)),)
   SYS_DEFS += SYS_OPTION_TCXO_CONFIG
endif

# SYS_OPTION_HDET_HW = $(SYS_HDET_??)
#
# This define is used to set the Target power detector option
#-----------------------------------------------------------------------------
SYS_HDET_LMV221       =  0
SYS_HDET_ADL550       =  1
SYS_HDET_DISCRETE     =  2

SYS_DEFS += SYS_HDET_LMV221 SYS_HDET_ADL550 SYS_HDET_DISCRETE

ifneq ($(strip $(SYS_OPTION_HDET_HW)),)
  SYS_DEFS += SYS_OPTION_HDET_HW
endif

C2K_COM_DEFS += $(foreach nm, $(SYS_DEFS),$(nm)=$($(nm)))

################################################################################
#  
#      System Options definitions 
#
################################################################################

C2K_COM_DEFS += SYS_TARGET_HW
C2K_COM_DEFS += SYS_INVERTER_UART1
C2K_COM_DEFS += SYS_OPTION_INTERNAL_PLL
C2K_COM_DEFS += SYS_OPTION_OSCEN_ACTIVE_LOW
C2K_COM_DEFS += SYS_OPTION_SMS_ENGINE
C2K_COM_DEFS += SYS_OPTION_OTASP
C2K_COM_DEFS += SYS_OPTION_RLP
C2K_COM_DEFS += SYS_OPTION_HL
C2K_COM_DEFS += EVL1_RXAGC_HISTORY_REC_EN
 
# SYS_OPTION_TX_TAS_ENABLE :Select the better antenna for TX , for JADE platform
# MTK_DEV_C2K_TAS:Select the better antenna for c2k voice call ,  for Denali paltform
ifeq ($(strip $(MODIS_CONFIG)),FALSE)
  C2K_COM_DEFS += SYS_OPTION_TX_TAS_ENABLE
endif 

ifeq ($(strip $(TAS_OFF_WHEN_NO_SIM)), TRUE)
  C2K_COM_DEFS += __TAS_OFF_WHEN_NO_SIM__
endif

ifeq ($(strip $(TAS_ANTENNA_IDX_ON_TEST_SIM)), TRUE)
  C2K_COM_DEFS += __TAS_ANTENNA_IDX_ON_TEST_SIM__
endif

ifeq ($(strip $(GET_META_MODE_OFF)),TRUE)
  C2K_COM_DEFS += MTK_META_MODE_OFF
endif

ifdef C2K_BC0_SUBCLASS_3_ENABLE
ifeq ($(strip $(C2K_BC0_SUBCLASS_3_ENABLE)), TRUE)
  C2K_COM_DEFS += __C2K_BC0_SUBCLASS_3_ENABLE__
endif
endif

ifndef AGPS_SYNC
  AGPS_SYNC = TRUE         # Default AGPS On
endif

ifeq ($(strip $(AGPS_SYNC)),TRUE)
  C2K_COM_DEFS += MTK_GPS_SYNC_DEV
endif

ifneq "$(USE_DMU)" "FALSE"
  C2K_COM_DEFS += SYS_OPTION_MIP
else 
  ifneq ($(findstring VERIZON_EXTENSIONS,$(SO_EXTRA)),)
    C2K_COM_DEFS += SYS_OPTION_MIP
    C2K_COM_DEFS += SYS_OPTION_MIP_DMU
  else 
    ifneq "$(USE_MOIP)" "FALSE"
      C2K_COM_DEFS +=  SYS_OPTION_MIP
    endif
  endif
endif

ifeq "$(USE_THROTTLING)" "TRUE"
  C2K_COM_DEFS += SYS_OPTION_HSPD_THROTTLING
else
  ifneq ($(findstring VERIZON_EXTENSIONS,$(SO_EXTRA)),)
    C2K_COM_DEFS += SYS_OPTION_HSPD_THROTTLING
  endif
endif

ifeq "$(USE_FALLBACK)" "TRUE"
  C2K_COM_DEFS += SYS_OPTION_HSPD_FALLBACK
else
  ifneq ($(findstring VERIZON_EXTENSIONS,$(SO_EXTRA)),)
    C2K_COM_DEFS += SYS_OPTION_HSPD_FALLBACK
  endif
endif

ifeq "$(USE_IRAT_MMC)" "TRUE"
  C2K_COM_DEFS += SYS_OPTION_IRAT_MMC
endif

C2K_COM_DEFS += SYS_OPTION_DATA_RAM_INUSE

ifneq "$(NO_SCH_RAM)" "TRUE"
  C2K_COM_DEFS += SYS_OPTION_SCH_RAM_INUSE
endif

C2K_COM_DEFS += SYS_OPTION_NTWKRMPKT_RAM_INUSE

ifneq "$(NO_AUTH)" "TRUE"
  C2K_COM_DEFS += SYS_OPTION_AUTHENTICATION
endif

C2K_COM_DEFS += SYS_OPTION_DUAL_NAM

SO_UIM = SYS_OPTION_RUIM
ifeq "$(USE_RUIM)" "TRUE"
  ifeq "$(USE_REMOTE_UICC)" "TRUE"
    SO_UIM += SYS_OPTION_REMOTE_UICC
  endif
  ifeq "$(USE_LOCAL_UICC)" "TRUE"
    SO_UIM += SYS_OPTION_LOCAL_UICC
  endif
  ifeq "$(USE_UTK)" "TRUE"
    SO_UIM += FEATURE_UTK FEATURE_CALL_CONTROL FEATURE_BIP FEATURE_EVENT_DOWNLOAD
  endif
  ifeq "$(USE_BIP)" "TRUE"
    SO_UIM += FEATURE_BIP
  endif

  C2K_COM_DEFS += $(SO_UIM)
endif

C2K_COM_DEFS += SYS_OPTION_ENHANCEDAT

C2K_COM_DEFS += SYS_OPTION_RPC
C2K_COM_DEFS += SYS_OPTION_GPS_RPC
ifeq "$(USE_IRAT_RPC)" "TRUE"
  C2K_COM_DEFS += SYS_OPTION_RPC
  C2K_COM_DEFS += SYS_OPTION_IRAT_RPC
endif

ifneq "$(NO_GPS)" "TRUE"
  C2K_COM_DEFS += SYS_OPTION_GPS_SIMULTANEOUS
endif

C2K_COM_DEFS += SYS_OPTION_DIGITAL_RX_AGC

C2K_COM_DEFS += SYS_OPTION_PA2_CTRL
#
# Setup Default Rx Hysterisis compiler option is used
#
ifneq "$(USE_DEFAULT_RX_HYSTERESIS)" "FALSE"
  C2K_COM_DEFS += DEFAULT_RX_HYSTERESIS
endif

ifeq "$(USE_PC_VOICE)" "TRUE"
  C2K_COM_DEFS += SYS_OPTION_PC_VOICE
endif

C2K_COM_DEFS += SYS_OPTION_ATCMD_CH SYS_OPTION_ATCMD_CH_2 SYS_OPTION_ATCMD_CH_3 SYS_OPTION_ATCMD_CH_4

C2K_COM_DEFS += SYS_OPTION_ERI

#
#EHRPD option
#
C2K_COM_DEFS += CBP7_EHRPD

#
#IPV6 option
#
C2K_COM_DEFS += CBP7_IPV6

C2K_COM_DEFS += SYS_OPTION_NO_IPV6_STACK

#
# Setup the compiler/assembler option SYS_OPTION_EVD0 (for 7.0x targets)
# based on the USE_1X_ONLY command line option
#
ifeq "$(USE_1X_ONLY)" "TRUE"
else
  C2K_COM_DEFS += SYS_OPTION_EVDO
endif


C2K_COM_DEFS += SYS_OPTION_EXT_AUDIO_CODEC

ifeq "$(XCO_TYPE)" "DCXO"
  C2K_COM_DEFS += SYS_OPTION_USE_DCXO
endif

ifeq "$(NO_PPPHA_ENC_ENH)" "TRUE"
else
  C2K_COM_DEFS += SYS_OPTION_PPPHA_ENC_ENH
endif

C2K_COM_DEFS += SYS_OPTION_AUX_ADC_POLL
C2K_COM_DEFS += SYS_OPTION_WAIT_FOR_BOOT_TO_LOADER
C2K_COM_DEFS += SYS_OPTION_HWD_PROFILE
C2K_COM_DEFS += HWD_DBG_TXDAC_DIRECT

C2K_COM_DEFS += HWD_FEATURE_PA_SPDM_CTRL

C2K_COM_DEFS += FEATURE_PS_NOT_TURNON_AUTO

C2K_COM_DEFS += SYS_OPTION_GSM_PROTECTION

C2K_COM_DEFS += $(SO_EXTRA)

C2K_COM_DEFS += SYS_DEBUG_FAULT_FILE_INFO

ifeq ($(strip $(TX_SWTP_ENABLE)),TRUE)
  C2K_COM_DEFS += __TX_POWER_OFFSET_SUPPORT__
endif


################ UI Feature: ################
ifeq "$(CONFIG_UI)" "NONE"
  C2K_COM_DEFS += SYS_OPTION_NO_UI
  C2K_COM_DEFS += FEATURE_LCD_SIZE_320x240
endif

ifeq "$(SUPPORT_RTRE)" "TRUE"
  C2K_COM_DEFS += FEATURE_RTRE
endif

ifeq "$(SUPPORT_UTK)" "TRUE"
  C2K_COM_DEFS += FEATURE_UTK
endif

ifeq "$(SUPPORT_SMS_AUTO_REGISTER)" "TRUE"
  ifeq "$(USE_RUIM)" "TRUE"
    C2K_COM_DEFS += FEATURE_SMS_AUTO_REGISTER
  endif
endif

ifeq "$(SUPPORT_ESN_TRACK)" "TRUE"
  ifeq "$(USE_RUIM)" "TRUE"
    C2K_COM_DEFS += FEATURE_ESN_TRACK
  endif
endif

ifeq "$(SUPPORT_ESN_TRACK_TATA)" "TRUE"
  ifeq "$(USE_RUIM)" "TRUE"
    C2K_COM_DEFS += FEATURE_ESN_TRACK_TATA
  endif
endif

ifeq "$(SUPPORT_LSM)" "TRUE"
  C2K_COM_DEFS += FEATURE_LSM
endif

ifeq "$(SUPPORT_SMARTMSG)" "TRUE"
  ifeq "$(SUPPORT_VCARD)" "TRUE"
    C2K_COM_DEFS += FEATURE_SMARTMSG 
  else
    ifeq "$(SUPPORT_VCALENDAR)" "TRUE"
      C2K_COM_DEFS += FEATURE_SMARTMSG 
    endif
  endif
endif

ifeq "$(SUPPORT_SMS_CHAT)" "TRUE"
  C2K_COM_DEFS += FEATURE_SMS_CHAT
endif

ifeq "$(SUPPORT_VOICE_MAIL)" "TRUE"
  C2K_COM_DEFS += FEATURE_VOICE_MAIL
endif

ifeq "$(SUPPORT_UNITTEST)" "TRUE"
  C2K_COM_DEFS += FEATURE_UNITTEST
endif

ifeq "$(SUPPORT_MMS)" "TRUE"
  C2K_COM_DEFS += FEATURE_MMS 
endif
ifeq "$(SUPPORT_WAP_TYPE)" "VAAWEB"
  C2K_COM_DEFS += FEATURE_VAAWEB  
endif
ifeq "$(SUPPORT_QCLX)" "TRUE"
  C2K_COM_DEFS += FEATURE_APP_QCLX
endif
ifeq "$(SUPPORT_WAP_MMS_TYPE)" "JUPITOR"
  C2K_COM_DEFS += FEATURE_JUPITOR  
endif
ifeq "$(SUPPORT_MMS_TYPE)" "VAAMMS"
  C2K_COM_DEFS += FEATURE_VAAMMS 
endif
ifeq "$(SUPPORT_VOICEMEMO)" "TRUE"
  C2K_COM_DEFS += FEATURE_VOICEMEMO
endif

################ Driver Feature: ################
ifeq "$(RTC_TYPE)" "RTC_NONE"
  C2K_COM_DEFS += RTC_NONE
endif

ifeq "$(SUPPORT_DUMP_FAULT_LOG)" "TRUE"
  C2K_COM_DEFS += SYS_EXE_FAULT_DATA_DUMP
endif

ifeq "$(SUPPORT_GFX)" "TRUE"
  C2K_COM_DEFS += FEATURE_GFX_2D_BITBILT
endif

################################################################################
#  
#      MTK Main Definitions
#
################################################################################

#USE_MTK_CBP
# Description:
#   Enable MTK changes
# Option Values:
#   DEVELOPMENT:  Enable MTK formal and informal changes
#   RELEASE:      Enable MTK formal changes only
#

#**************** FOR DEVELOPMENT VERSION *************************  
USE_MTK_CBP=DEVELOPMENT
ifeq ($(strip $(USE_MTK_CBP)),DEVELOPMENT)
   C2K_COM_DEFS += MTK_CBP
   C2K_COM_DEFS += MTK_DEV_BUG_FIX_OTA
   C2K_COM_DEFS += MTK_DEV_BUG_FIX_XL2
   C2K_COM_DEFS += MTK_DEV_BUG_FIX_PE
   C2K_COM_DEFS += MTK_DEV_BUG_FIX_VAL
   C2K_COM_DEFS += MTK_DEV_BUG_FIX_HLP
   C2K_COM_DEFS += MTK_DEV_BUG_FIX_GPS
   C2K_COM_DEFS += MTK_DEV_BUG_FIX_SMS
   C2K_COM_DEFS += MTK_DEV_BUG_FIX_EVL1
   C2K_COM_DEFS += MTK_DEV_OPTIMIZE_EVL1
   C2K_COM_DEFS += MTK_DEV_HLP_OPTIMIZE_CP
   C2K_COM_DEFS += MTK_DEV_HLP_OPTIMIZE_UP
   C2K_COM_DEFS += MTK_DEV_TRACE_ENHANCEMENT
   C2K_COM_DEFS += MTK_DEV_BUG_FIX_EVL2
   C2K_COM_DEFS += MTK_DEV_OPTIMIZE_EVL2
   C2K_COM_DEFS += MTK_DEV_OPTIMIZE_XL2
   C2K_COM_DEFS += MTK_DEV_BUG_FIX_SLC
   C2K_COM_DEFS += MTK_DEV_BUG_FIX_CLC
   C2K_COM_DEFS += MTK_DEV_BUG_FIX_SS
   C2K_COM_DEFS += MTK_DEV_ETS_ENHANCEMENT
   C2K_COM_DEFS += MTK_DEV_OPTIMIZE_PE
   C2K_COM_DEFS += MTK_DEV_BUG_FIX_RUP
   C2K_COM_DEFS += MTK_DEV_OPTIMIZE_RUP
   C2K_COM_DEFS += MTK_DEV_BUG_FIX_CSS
   C2K_COM_DEFS += MTK_DEV_FIX_KW   
   C2K_COM_DEFS += MTK_DEV_FIX_BUILDWARN
   C2K_COM_DEFS += MTK_DEV_BUG_FIX_EHRPD
   C2K_COM_DEFS += MTK_DEV_BUG_FIX_UIM
   C2K_COM_DEFS += MTK_DEV_ENGINEER_MODE
   C2K_COM_DEFS += MTK_DEV_FACTORY_MODE
   C2K_COM_DEFS += MTK_DEV_HSC_SHDR
   C2K_COM_DEFS += MTK_DEV_META_LOGGING
   C2K_COM_DEFS += MTK_DEV_GPSONE_ON_LTE
   #C2K_COM_DEFS += MTK_DEV_BRING_UP_DISABLE_SLOTTED_DO
   #C2K_COM_DEFS += MTK_DEV_DUMP_REG

   ##Used for workarounds in codes. disabled after all issue resolved.
   C2K_COM_DEFS += MTK_DEV_WORKAROUND

   #C2K Legacy development macro
   C2K_COM_DEFS += MTK_DEV_93M_PREIT

ifeq ($(strip $(USE_LOG_BUFFER_SIZE_96K)),TRUE)
   C2K_COM_DEFS += MTK_DEV_LOG_BUFFER_96K
endif

C2K_COM_DEFS += MTK_DEV_C2K_IRAT
ifeq ($(strip $(PLATFORM)),MT6735)
  C2K_COM_DEFS += MTK_DEV_TX_POWER_RPT_SUPPORT
endif

C2K_COM_DEFS += MTK_DEV_C2K_SRLTE
ifeq ($(strip $(USE_RTB_CHECK)),TRUE)
  C2K_COM_DEFS += MTK_DEV_C2K_SRLTE_RTB_CHECK
endif
C2K_COM_DEFS += MTK_DEV_C2K_SRLTE_L1
C2K_COM_DEFS += MTK_DEV_C2K_SRLTE_BASE
C2K_COM_DEFS += MTK_CBP_SYNC_OPTIMIZE

ifeq ($(strip $(PLATFORM)),MT6735)
  C2K_COM_DEFS += MTK_DEV_DENALI_SRLTE_PRE_IT
endif

##Enable the Function for Modem send TX Power to AP;Only enable MT6755 and follow version
C2K_COM_DEFS += MTK_DEV_TX_RPT_AP

ifeq ($(strip $(USE_ENCRYPT_VOICE)),TRUE)
   COM_DEFS += MTK_CBP_ENCRYPT_VOICE
endif

C2K_COM_DEFS += MTK_DEV_MEMORY_OPT

ifeq ($(strip $(MODIS_CONFIG)),FALSE)
    ifeq ($(strip $(SLT)),TRUE)
       C2K_COM_DEFS += MTK_DEV_SLT
    endif
endif

ifeq ($(strip $(SLT_TX)),TRUE)
   C2K_COM_DEFS += MTK_DEV_SLT_TX
endif

ifeq ($(strip $(SLT_LOGON)),TRUE)
   C2K_COM_DEFS += MTK_DEV_SLT_LOGON
endif

#
# DISABLE_SLEEP option
#
ifeq ($(strip $(DISABLE_SLEEP)),TRUE)
#  C2K_COM_DEFS += SYS_OPTION_DISABLE_SLEEP
endif
endif # end of ifeq ($(strip $(USE_MTK_CBP)),DEVELOPMENT)

C2K_COM_DEFS += MTK_DEV_32K_LESS
C2K_COM_DEFS += SYS_OPTION_MORE_AT_CHANNEL
C2K_COM_DEFS += MTK_DEV_CCCI_FS

#**********get version value from C2K_COM_DEFS******************
NV_VERNO_STRING=$(filter MTK_VERNO_STRING=%,$(C2K_COM_DEFS))
#remove '\' in string
NV_VERNO_STRING:=$(shell echo $(shell echo $(shell echo $(shell echo $(NV_VERNO_STRING)))))
NV_VERNO_STRING:=$(patsubst MTK_VERNO_STRING=%, %, $(NV_VERNO_STRING))
#**********************************************************
ifneq ($(filter MT6761,$(strip $(PLATFORM))),)
  C2K_COM_DEFS += MT6177L_CW_GEN_EN
endif

C2K_COM_DEFS += MTK_DEV_GCC_WARN_FIX

ifeq ($(strip $(PMU_TYPE)),PMU_MT6328)
  C2K_COM_DEFS += PMU_MT6328
else
  C2K_COM_DEFS += PMU_MT6351
endif

# UIM DISABLED
ifeq ($(strip $(UIM_DISABLE)),TRUE)
  C2K_COM_DEFS += MTK_PLT_ON_PC_UIM_DISABLE
endif

# MODIS Compile Options
ifeq ($(strip $(MODIS_CONFIG)),TRUE)
  C2K_COM_DEFS += MTK_PLT_ON_PC
  C2K_COM_DEFS += BOARD_CBP80_FLASH
  C2K_COM_DEFS += MTK_PLT_ON_PC_CODEGEN

  # Default UIM DISABLED in MODIS
  ifndef UIM_DISABLE
    C2K_COM_DEFS += MTK_PLT_ON_PC_UIM_DISABLE
  else
    ifeq ($(strip $(UIM_DISABLE)),TRUE)
      C2K_COM_DEFS += MTK_PLT_ON_PC_UIM_DISABLE
    endif
  endif

  ifeq ($(strip $(UE_SIMULATOR)),TRUE)
    C2K_COM_DEFS += MTK_PLT_ON_PC_IT
    # CL1 HSC UESIM STUB macro
    C2K_COM_DEFS += MTK_DEV_HSC_UT_STUB
  else
    C2K_COM_DEFS += MTK_PLT_ON_PC_UT
    C2K_COM_DEFS += MTK_DEV_RTM_RLSI_OPTIMIZE
    # CT: PSW UT cases only pass on CT carrier
    C2K_COM_DEFS += CHINATELECOM_EXTENSIONS
  endif
else #IF !MODIS_CONFIG
  C2K_COM_DEFS += MTK_DEV_SHARED_AFC_TEST

 # for LWCTG3_MODEM flavor
 ifneq ($(findstring LWCTG3_MODEM,$(ORIGINAL_FLAVOR)),)
   C2K_COM_DEFS += SRLTE_RSVA_STUB
   C2K_COM_DEFS += MTK_C2K_L1_TST
  # C2K_COM_DEFS += MTK_EVL1_FLBSRP_REGDUMP
#   C2K_COM_DEFS += MTK_EVL1_SCH_REGDUMP
#   C2K_COM_DEFS += MTK_EVL1_RLBSRP_REGDUMP
 # C2K_COM_DEFS += MTK_1XL1_FLBSRP_REGDUMP
#  C2K_COM_DEFS += MTK_1XL1_SCH_REGDUMP
#  C2K_COM_DEFS += MTK_1XL1_RLBSRP_REGDUMP  
   C2K_COM_DEFS += C2K_L4_AT_CMD
 endif

 # C2K DDL Workaround
 ifneq ($(findstring LWCTG3,$(ORIGINAL_FLAVOR)),)
   C2K_COM_DEFS += C2K_EVL1_BRINGUP_WORKAROUND
   ifeq ($(strip $(MODIS_CONFIG)),FALSE)
     C2K_COM_DEFS += C2K_FIRST_BOOT_EN
   endif
   
 endif

 ifeq ($(strip $(ORIGINAL_PROJECT_NAME)),MT6763_FPGA)
   ifeq ($(strip $(ORIGINAL_FLAVOR)),CL1S)
     C2K_COM_DEFS += MTK_C2K_L1_TST
  #   C2K_COM_DEFS += MTK_EVL1_FLBSRP_REGDUMP
#     C2K_COM_DEFS += MTK_EVL1_SCH_REGDUMP
#     C2K_COM_DEFS += MTK_EVL1_RLBSRP_REGDUMP
  #  C2K_COM_DEFS += MTK_1XL1_FLBSRP_REGDUMP
#     C2K_COM_DEFS += MTK_1XL1_SCH_REGDUMP
#     C2K_COM_DEFS += MTK_1XL1_RLBSRP_REGDUMP  
   endif
   #Enable LWCTG3 options for project MT6763_FPGA(LWCTG)
   ifeq ($(strip $(ORIGINAL_FLAVOR)),LWCTG)
    C2K_COM_DEFS += SRLTE_RSVA_STUB
    C2K_COM_DEFS += MTK_C2K_L1_TST
 #   C2K_COM_DEFS += MTK_EVL1_FLBSRP_REGDUMP
#    C2K_COM_DEFS += MTK_EVL1_SCH_REGDUMP
#    C2K_COM_DEFS += MTK_EVL1_RLBSRP_REGDUMP
  # C2K_COM_DEFS += MTK_1XL1_FLBSRP_REGDUMP
#    C2K_COM_DEFS += MTK_1XL1_SCH_REGDUMP
#    C2K_COM_DEFS += MTK_1XL1_RLBSRP_REGDUMP  
   endif
 endif #IF MT6763_FPGA

endif #IF MODIS_CONFIG

# if L1SDISABLE flavor
ifneq ($(findstring L1DISABLE,$(ORIGINAL_FLAVOR)),)
  # Use this complie option in modem_2g3g_task_config.h
  # to disabel the task entry.
    C2K_COM_DEFS += __CL1_TASK_DISABLE__
    C2K_COM_DEFS += __C2K_PS_TASK_DISABLE__
endif

# if L1S flavor
ifneq ($(findstring L1S,$(ORIGINAL_FLAVOR)),)
# Use this complie option in modem_2g3g_task_config.h
# to disabel the task entry.
  #C2K_COM_DEFS += __C2K_PS_TASK_DISABLE__
  C2K_COM_DEFS += __C2K_L1S__
# UIM DISABLED in L1S load
  C2K_COM_DEFS += MTK_PLT_ON_PC_UIM_DISABLE
endif

# if SLT flavor
ifneq ($(findstring SLT,$(IC_TEST_TYPE)),)
  C2K_COM_DEFS += MTK_DEV_SLT
  C2K_COM_DEFS += MTK_DEV_SLT_TX
  C2K_COM_DEFS += MTK_PLT_ON_PC_UIM_DISABLE
  C2K_COM_DEFS += MTK_DEV_SLT_ON_RF_GENERATOR
  C2K_COM_DEFS += SRLTE_RSVA_STUB
endif

ifeq ($(strip $(GEMINI)),FALSE)
# GEMINI is set to FASLE in L1S project
  C2K_COM_DEFS += SRLTE_RSVA_STUB
endif
# SCC PE Interface OPTIMIZE
  C2K_COM_DEFS += MTK_CBP_REL_OPTIMIZE
  C2K_COM_DEFS += RCP_RI_HRT_DEV

ifneq ($(filter MT6768,$(strip $(PLATFORM))),)
  C2K_COM_DEFS += MT6177L_CW_GEN_EN
endif

# C2K DHL trace
  COMP_TRACE_DEFS_MODEM += ${C2K_ROOT}/val/val_dhl_trace.h
  COMP_TRACE_DEFS_MODEM += ${C2K_ROOT}/lmd/lmd_dhl_trace.h
  COMP_TRACE_DEFS_MODEM += ${C2K_ROOT}/lec/lec_dhl_trace.h
  COMP_TRACE_DEFS_MODEM += ${C2K_ROOT}/rcp/rcp_dhl_trace.h
  COMP_TRACE_DEFS_MODEM += ${C2K_ROOT}/rlp/isotel/rlpe/xrlp_dhl_trace.h
  COMP_TRACE_DEFS_MODEM += ${C2K_ROOT}/fcp/fcp_dhl_trace.h
  COMP_TRACE_DEFS_MODEM += ${C2K_ROOT}/clc/clc_dhl_trace.h
  COMP_TRACE_DEFS_MODEM += ${C2K_ROOT}/slc/slc_dhl_trace.h
  COMP_TRACE_DEFS_MODEM += ${C2K_ROOT}/sec/sec_dhl_trace.h
  COMP_TRACE_DEFS_MODEM += ${C2K_ROOT}/hlp/inc/hlp_dhl_trace.h
  COMP_TRACE_DEFS_MODEM += ${C2K_ROOT}/ps/isotel/inc/psw_dhl_trace.h
  COMP_TRACE_DEFS_MODEM += ${C2K_ROOT}/ps/isotel/psw/psws_dhl_trace.h
  COMP_TRACE_DEFS_MODEM += ${C2K_ROOT}/hsc/hsc_dhl_trace.h
  COMP_TRACE_DEFS_MODEM += ${C2K_ROOT}/clc/clc_dhl_trace.h
  COMP_TRACE_DEFS_MODEM += ${C2K_ROOT}/slc/slc_dhl_trace.h
  COMP_TRACE_DEFS_MODEM += ${C2K_ROOT}/stub/cstub_dhl_trace.h
  COMP_TRACE_DEFS_MODEM += ${C2K_ROOT}/css/css_dhl_trace.h
  COMP_TRACE_DEFS_MODEM += ${C2K_ROOT}/l1d/c2k_l1d_dhl_trace.h
  COMP_TRACE_DEFS_MODEM += ${C2K_ROOT}/rmc/rmc_dhl_trace.h
  COMP_TRACE_DEFS_MODEM += ${C2K_ROOT}/uim/cuim_dhl_trace.h
  COMP_TRACE_DEFS_MODEM += ${C2K_ROOT}/atpal/xl1/atpal_xl1_dhl_trace.h
  COMP_TRACE_DEFS_MODEM += ${C2K_ROOT}/atpal/evl1/atpal_evl1_dhl_trace.h
  COMP_TRACE_DEFS_MODEM += ${C2K_ROOT}/sys/cpbuf_dhl_trace.h
# C2K BRINGUP WORK AROUND
  C2K_COM_DEFS += C2K_EVL1_BRINGUP_WORKAROUND
#  C2K_COM_DEFS += MTK_EVL1_FLBSRP_REGDUMP
#  C2K_COM_DEFS += MTK_EVL1_RLBSRP_REGDUMP
#  C2K_COM_DEFS += MTK_1XL1_FLBSRP_REGDUMP  
#  C2K_COM_DEFS += MTK_1XL1_RLBSRP_REGDUMP  
COM_DEFS += $(C2K_COM_DEFS)
