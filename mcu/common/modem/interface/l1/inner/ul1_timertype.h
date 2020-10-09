/*******************************************************************************
*  Modification Notice:
*  --------------------------
*  This software is modified by MediaTek Inc. and the information contained
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
*******************************************************************************/


/*****************************************************************************
 *
 * Filename:
 * ---------
 * ul1_timertype.h
 *
 * Project:
 * --------
 *   MT6276 Project
 *
 * Description:
 * ------------
 *  Define 3G utimertype
 *
 * Author:
 * -------
 * -------
 *
  *============================================================================
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
 * removed!
 * removed!
 *
 *
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
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
UL1_TIMER_TYPE(UTimerNone),
UL1_TIMER_TYPE(UTimerTGPSTick),
UL1_TIMER_TYPE(UTimerStartTGPS),
UL1_TIMER_TYPE(UTimerTGPSControl),
UL1_TIMER_TYPE(UTimerDeleteTGPS), //Also add to trace.tmd
UL1_TIMER_TYPE(UTimerStopCC),
UL1_TIMER_TYPE(UTimerCCTimingAlign),
UL1_TIMER_TYPE(UTimerStartCC),
UL1_TIMER_TYPE(UTimerFACH),
UL1_TIMER_TYPE(UTimerSkipGAP),
UL1_TIMER_TYPE(UTimerResumeGAP),
UL1_TIMER_TYPE(UTimerUnlockFMO),
UL1_TIMER_TYPE(UTimerRACH),
UL1_TIMER_TYPE(UTimerRestartRACH),
UL1_TIMER_TYPE(UTimerSFNMeas),
UL1_TIMER_TYPE(UTimerRxSFNMeas),
UL1_TIMER_TYPE(UTimerStopSFNMeas),
UL1_TIMER_TYPE(UTimerSFNMeas_DDLAbort),
UL1_TIMER_TYPE(UTimerCTCH),
UL1_TIMER_TYPE(UTimerRxCTCH),
UL1_TIMER_TYPE(UTimerCTCH_DDLAbort),
UL1_TIMER_TYPE(UTimerSFN),
UL1_TIMER_TYPE(UTimerRxSFN),
UL1_TIMER_TYPE(UTimerStopSFN),
UL1_TIMER_TYPE(UTimerSFN_DDLAbort),
UL1_TIMER_TYPE(UTimerPCH),
UL1_TIMER_TYPE(UTimerRxPCH),
UL1_TIMER_TYPE(UTimerRestartPCH),
UL1_TIMER_TYPE(UTimerSkipPCH),
UL1_TIMER_TYPE(UTimerResumePCH),
UL1_TIMER_TYPE(UTimerReconfigSmartPaging),
UL1_TIMER_TYPE(UTimerPCHRxDSwitch),
UL1_TIMER_TYPE(UTimerPCHWakeup),
UL1_TIMER_TYPE(UTimerClearForceNormalPCH),
/* __TAS_SUPPORT__ */
UL1_TIMER_TYPE(UTimerTASPCH),
UL1_TIMER_TYPE(UTimerTASDedicated),
UL1_TIMER_TYPE(UTimerTASGuardPeriod),
UL1_TIMER_TYPE(UTimerTASSwitchBackPeriod),
UL1_TIMER_TYPE(UTimerTASRelaxDB),
UL1_TIMER_TYPE(UTimerRASDedicated),
/* END of __TAS_SUPPORT__ */
UL1_TIMER_TYPE(UTimerConfigCTCH),
UL1_TIMER_TYPE(UTimerCTCHL2SCHED),
UL1_TIMER_TYPE(UTimerCTCHAdjustment),
UL1_TIMER_TYPE(UTimerSIB),
UL1_TIMER_TYPE(UTimerRxSIB),
UL1_TIMER_TYPE(UTimerReconfigSIB),
UL1_TIMER_TYPE(UTimerStopSIB),
UL1_TIMER_TYPE(UTimerSIB_DDLAbort),
UL1_TIMER_TYPE(UTimerSIB_RRPriority),
UL1_TIMER_TYPE(UTimerDLDCH),
UL1_TIMER_TYPE(UTimerCRC),
UL1_TIMER_TYPE(UTimerASU),
UL1_TIMER_TYPE(UTimerASUStop),
UL1_TIMER_TYPE(UTimerDLDCHConfig),
UL1_TIMER_TYPE(UTimerDLDCHQuality),
UL1_TIMER_TYPE(UTimerULDCH),
UL1_TIMER_TYPE(UTimerULDCHConfig),
UL1_TIMER_TYPE(UTimerULDCHTFC),
UL1_TIMER_TYPE(UTimerFreqScan),
UL1_TIMER_TYPE(UTimerSCS),
UL1_TIMER_TYPE(UTimerFAChRptPeriod),
UL1_TIMER_TYPE(UTimerDChRptPeriod),
UL1_TIMER_TYPE(UTimerNullRptPeriod),
UL1_TIMER_TYPE(UTimerCMStop),
UL1_TIMER_TYPE(UTimerGAP),
UL1_TIMER_TYPE(UTimerGAPStop),
UL1_TIMER_TYPE(UTimerGAPStopCnf),
UL1_TIMER_TYPE(UTimerLeaveConfig),
UL1_TIMER_TYPE(UTimerStandby),
UL1_TIMER_TYPE(UTimerDM),
UL1_TIMER_TYPE(UTimerTGPSReconfigCheck),
UL1_TIMER_TYPE(UTimerTGPSReconstruct),
UL1_TIMER_TYPE(UTimerDummyTGPSTick),
UL1_TIMER_TYPE(UTimerRssiSnifferStart),
UL1_TIMER_TYPE(UTimerRssiSnifferStop),
UL1_TIMER_TYPE(UTimerRssiSnifferContinue),
UL1_TIMER_TYPE(UTimerTxAccessRACH),
UL1_TIMER_TYPE(UTimerHSDSCHStart),
UL1_TIMER_TYPE(UTimerHSDSCHStop),
UL1_TIMER_TYPE(UTimerHSDSCHModify),
UL1_TIMER_TYPE(UTimerHSDSCHSuspend),
UL1_TIMER_TYPE(UTimerHSDSCH_OCIC),
UL1_TIMER_TYPE(UTimerEDCHStart),
UL1_TIMER_TYPE(UTimerEDCHStop),
UL1_TIMER_TYPE(UTimerEDCHRemove),
UL1_TIMER_TYPE(UTimerEDCHConfig),
/* __UL1_GEMINI__ */
UL1_TIMER_TYPE(UTimerLeaveSuspendConfig),
UL1_TIMER_TYPE(UTimerSuspendConfig),
/* __UL1_GEMINI_2_0__ */
UL1_TIMER_TYPE(UTimerRx),
UL1_TIMER_TYPE(UTimerTx),
UL1_TIMER_TYPE(UTimerFSGap),
UL1_TIMER_TYPE(UTimerCMCSGap),
UL1_TIMER_TYPE(UTimerRxTxDSPStop),
/* __UL1_GEMINI_2_0__ */
/* End of __UL1_GEMINI__ */
UL1_TIMER_TYPE(UTimerTreselectionCM),
UL1_TIMER_TYPE(UTimerCompensateCMCS),
UL1_TIMER_TYPE(UTimerOneShotCMCS),
UL1_TIMER_TYPE(UTimerAdditionalCS),
UL1_TIMER_TYPE(UTimerGPSTimeSync),
UL1_TIMER_TYPE(UTimerTimeSync),
/* 20110110: inter-freq measurement alarm */
UL1_TIMER_TYPE(UTimerInterFreqAlarm),
/* 20110110: End */
/* __UMTS_R7__ */
UL1_TIMER_TYPE(UTimerPCHCycle2),
UL1_TIMER_TYPE(UTimerEFACH),
UL1_TIMER_TYPE(UTimerCPCEnable),
UL1_TIMER_TYPE(UTimerCPCStop),
UL1_TIMER_TYPE(UTimerCPCActivate),
/* __UL1_GEMINI_2_0__ */
UL1_TIMER_TYPE(UTimerCPCTx),
UL1_TIMER_TYPE(UTimerCPCTxRelease),
/* __UL1_GEMINI_2_0__ END */
/* __UMTS_R7__ END */
/* __UMTS_R8__ */
UL1_TIMER_TYPE(UTimerSecHSDSCHSuspend),
UL1_TIMER_TYPE(UTimerHSDSCH_MonitorOrderStart),
UL1_TIMER_TYPE(UTimerHSDSCH_MonitorOrderStop),
UL1_TIMER_TYPE(UTimerCEDCHSuspend),
UL1_TIMER_TYPE(UTimerCEDCHReport),
UL1_TIMER_TYPE(UTimerCEDCHRelease),
/* __UL1_HSPASYS_CONTROL__ */
UL1_TIMER_TYPE(UTimerHSPASYSOn),
UL1_TIMER_TYPE(UTimerHSPASYSOff),
/*__UL1_HSPASYS_CONTROL__*/
UL1_TIMER_TYPE(UTimerDRXInterfCM),
UL1_TIMER_TYPE(UTimerDRXInterratCM),
/* __UMTS_R8__ END */
/* __UMTS_R9__ */
UL1_TIMER_TYPE(UTimerSecDLDCHQuality),
UL1_TIMER_TYPE(UTimerSecASUStop),
UL1_TIMER_TYPE(UTimerSecULDCH),
UL1_TIMER_TYPE(UTimerSecEDCHStart),
UL1_TIMER_TYPE(UTimerSecEDCHStop),
UL1_TIMER_TYPE(UTimerSecEDCHRemove),
UL1_TIMER_TYPE(UTimerSecEDCHConfig),
/* __UMTS_R9__ END */
/* __MULTI_MODE_SUPPORT__ */
UL1_TIMER_TYPE(UTimerActiveAutoGap),
UL1_TIMER_TYPE(UTimerStandbyAutoGap),
UL1_TIMER_TYPE(UTimerStandbyAutoGapSuspendNormal),
UL1_TIMER_TYPE(UTimerStandbyAutoGapStop),
UL1_TIMER_TYPE(UTimerStandbyAutoGapEnd),
UL1_TIMER_TYPE(UTimerFSAutoGap),
UL1_TIMER_TYPE(UTimerFSAutoGapStop),
/* __MULTI_MODE_SUPPORT__ END */
/* __IOT_ECS_SUPPORT__ */
UL1_TIMER_TYPE(UTimerECSStart),
UL1_TIMER_TYPE(UTimerECSStop),
/* __IOT_ECS_SUPPORT__ */
UL1_TIMER_TYPE(UTimerStandbyStopCMCS),
/* Engineering Mode */
UL1_TIMER_TYPE(UTimerEM),
/* Inject String related */
UL1_TIMER_TYPE(UTimerPseudoSuspend),
UL1_TIMER_TYPE(UTimerPICHForceNormal),
/* __LCE_SUPPORT__ */
UL1_TIMER_TYPE(UTimerLCE),
UL1_TIMER_TYPE(UTimerLCEStop),
/* __UL1_GEMINI_WCDMA__ */
UL1_TIMER_TYPE(UTimerSlaveStopCC),
UL1_TIMER_TYPE(UTimerSlaveStopStandbyGap),
UL1_TIMER_TYPE(UTimerSlaveStartCC),
UL1_TIMER_TYPE(UTimerMasterStopCC),
UL1_TIMER_TYPE(UTimerMasterTimingAlign),
UL1_TIMER_TYPE(UTimerMasterStartCC),
UL1_TIMER_TYPE(UTimerPhase2PCH),
UL1_TIMER_TYPE(UTimerPhase2RxPCH),
UL1_TIMER_TYPE(UTimerInternalCMTickIDLE),
UL1_TIMER_TYPE(UTimerTriggerDDL),
/* __UL1_GEMINI_WCDMA__ */
#ifdef __DYNAMIC_ANTENNA_TUNING__
/* RF tuning by AP events - DAT, SAR, ......  */
UL1_TIMER_TYPE(UTimerRFTuning),
/* RF tuning by AP events - DAT, SAR, ......  */
#endif //__DYNAMIC_ANTENNA_TUNING
UL1_TIMER_TYPE(UTimerUARFCNRpt),
UL1_TIMER_TYPE(UTimerEnd),
