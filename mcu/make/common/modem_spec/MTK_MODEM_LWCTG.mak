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
#  MediaTek Inc.(C)2015.All rights reserved.
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

# Generated at 2015-09-18 11:55:12
C2K_MODE_SUPPORT = C2K_SRLTE
  # Description:
  #   Specify if CDMA2000 RAT is supported
  # Option Values:
  #   C2K_SRLTE: CDMA2000 RAT is supported, LTE SRLTE is enabled
  #   C2K_ONLY:  CDMA2000 RAT is supported, LTE SRLTE is disabled
  #   NONE:      CDMA2000 RAT is not supported, LTE SRLTE is disabled
  # Switch-ability:
  #   Non-switchable

EUTRAN_MODE_SUPPORT = EUTRAN_MODE
  # Description:
  #   4G modem capability
  # Option Values:
  #   EUTRAN_MODE: Support EUTRAN mode
  #   NONE: NONE
  # Switch-ability:
  #   Non-switchable

FDD_LTE_SUPPORT = TRUE
  # Description:
  #   FDD_LTE support capability
  # Option Values:
  #   TRUE: Support FDD-LTE
  #   FALSE: Do NOT support FDD-LTE
  # Switch-ability:
  #   Non-switchable

GERAN_MODE_SUPPORT = GERAN_EGPRS_MODE
  # Description:
  #   2G modem capability
  # Option Values:
  #   GERAN_GSM_MODE: Support GSM only
  #   GERAN_GPRS_MODE: Support GPRS
  #   GERAN_EGPRS_MODE: Support EGPRS
  #   NONE: NONE
  # Switch-ability:
  #   Non-switchable

L1_EGPRS = TRUE
  # Description:
  #   this compile option is only used for L1 Stand alone to turn on/off EDGE function
  # Option Values:
  #   TRUE: EGPRS enable
  #   FALSE: EGPRS disable
  # Switch-ability:
  #   Non-switchable

L1_GPRS = TRUE
  # Description:
  #   Turn on the GPRS support of Layer 1
  #   This is used for internal test
  # Option Values:
  #   TRUE: GPRS enable
  #   FALSE: GPRS disable
  # Switch-ability:
  #   Non-switchable

L1_TDD128 = TRUE
  # Description:
  #   Modem Capability
  # Option Values:
  #   TRUE: L1 support TDD modem
  #   FALSE: L1 not support TDD modem
  # Switch-ability:
  #   Non-switchable

L1_WCDMA = TRUE
  # Description:
  #   Add an option to enable WCDMA L1 support
  # Option Values:
  #   TRUE: Support UMTS L1
  #   FALSE: Not support UMTS L1
  # Switch-ability:
  #   Non-switchable

LTE_RELEASE_SUPPORT = LTE_RD10_RELEASE
  # Description:
  #   The option is to switch different asn1 version of release for TS36.331
  # Option Values:
  #   LTE_R9_RELEASE: TS 36.331 9.8.0
  #   LTE_R9C0_RELEASE: TS 36.331 9.12.0
  #   LTE_RB70_RELEASE: TS 36.331 11.7.0
  #   LTE_RB90_RELEASE: TS 36.331 11.9.0
  #   LTE_RC50_RELEASE: TS 36.331 12.5.0
  #   NONE: NONE
  # Switch-ability:
  #   Non-switchable

TDD_LTE_SUPPORT = TRUE
  # Description:
  #   TDD_LTE support capability
  # Option Values:
  #   TRUE: Support TDD-LTE
  #   Support TDD-LTE: Support TDD-LTE
  # Switch-ability:
  #   Non-switchable

UMTS_FDD_SUPPORT = UMTS_FDD_MODE_SUPPORT
  # Description:
  #   Feature option for 3G FDD Modem Mode 
  # Option Values:
  #   UMTS_FDD_MODE_SUPPORT: 3G Modem in FDD Mode
  # Switch-ability:
  #   Non-switchable

UMTS_MODE_SUPPORT = UMTS_FDD_TDD_SUPPORT
  # Description:
  #   The option is to switch the FDD or TDD mode for 3G modem
  # Option Values:
  #   UMTS_FDD_MODE_SUPPORT: 3G modem in FDD mode
  #   UMTS_TDD128_MODE_SUPPORT: 3G modem in TDD mode
  #   NONE: None of 3G modem mode is supported.
  # Switch-ability:
  #   Non-switchable

UMTS_RELEASE_SUPPORT = UMTS_R11_SUPPORT
  # Description:
  #   The option is to switch different version of release for 3G modem
  # Option Values:
  #   UMTS_R6_SUPPORT: 3G modem supports Rel6
  #   UMTS_R4_SUPPORT: 3G modem supports Rel4
  #   UMTS_R5_SUPPORT: 3G modem supports Rel5
  # Switch-ability:
  #   Non-switchable

UMTS_TDD_SUPPORT = UMTS_TDD128_MODE_SUPPORT
  # Description:
  #   3G modem in TDD mode
  # Option Values:
  #   UMTS_TDD128_MODE_SUPPORT: 3g modem in TDD mode
  # Switch-ability:
  #   Non-switchable

UTRAN_MODE_SUPPORT = UTRAN_FDD_TDD_SUPPORT
  # Description:
  #   3G modem capability
  # Option Values:
  #   UTRAN_FDD_MODE: Support 3G FDD
  #   UTRAN_TDD128_MODE: Support 3G TDD128
  #   NONE: NONE
  # Switch-ability:
  #   Non-switchable

