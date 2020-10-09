/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   ccci_sysmsgsvc_conf.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   user enum for ccci system message service
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *
 ****************************************************************************/

//- flag bit mask
//- 7 6 5 4 3 2 1 0 LSB
//- 0 0 0 x x x x x
//- [7] ilm needed
//- [6] ilm local param neeeded

#if defined(__CCCIDEV_SUPPORT__)
//                    CCCI_MSG_ID                                       flag     ilm_msg_id
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_L1_DORMANT,                    0,    0)                           //-0x100 add for L1 dormant mode used
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_L1_SLEEPMASKING,               0,    0)                           //-0x101 add for L1 sleep/un-sleep mode used
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_MD_L4_TX_PWR_LEV_REQ,                    0xC0,   MSG_ID_L4C_MEAS_INFO_REQ)    //-0x102 add for L1 TX Power
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_L1_QUERY_RF_TEMPERATURE,       0,    0)                           //-0x103 add for query L1 RF temperature
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_L1_QUERY_3G_RF_TEMPERATURE,    0,    0)                           //-0x104 add for query L1 3G RF temperature
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_L1_QUERY_AP_VOLTAGE,           0,    0)                           //-0x105 add for L1 to query AP volatage. Used for TX and RX.
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_LOCK_AP_26M,                   0,       0)                           //-0x106 add for USB to lock 26M on AP side. Only used in MT6280
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_L4_SIM_INFO,                   0xC0,    MSG_ID_L4C_REGIONAL_PHONE_MODE_REQ)    //-0x107 add to send information to AP. Feature: Regional Animation. MD window: Hong
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_ICUSB_AP_NOTIFY,               0,       0)                           //-0x108 add for ICUSB user to do error handling
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_L1_CRYSTAL_THERMAL_CHANGE,     0,    0)                           //-0x109 add for L1 thermal issue in 6571. MD window: Rick.Wu
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_L4_TX_PWR_REDU_REQ,            0,       0)                           //-0x10A add for L4 for TX power reduction. MD window: Bob.Chiang
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_L1_THERMAL_TX_PWR_REDU_REQ,    0,    0)                           //-0x10B add for L1 Thermal Control. MD window: Chichen.Lee
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_MD_SLEEP_CONTROL,              0,       0)                           //-0x10C add for CPE project for MD Sleep Control. Rounter only 
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_EL1_DISABLE_MD_EMI_REQ,        0,    0)                           //-0x10D add for 6595 DVFS, EL1 DISABLE MD EMI ACCESS. MD window: Lewis Yu
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_MML1_UPDATE_AP_TPO_INFO,       0,       0)                           //-0x10E add for SWTP. MD window: Ryan-HN Chen 
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_MD2_UPDATE_AP_TPO_INFO,        0,       0)                           //-0x10F add for SWTP. MD window: Ryan-HN Chen 
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_MML1_QUERY_AP_TPO_INFO,        0,       0)                           //-0x110 add for SWTP. MD window: Ryan-HN Chen 
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_MD2_QUERY_AP_TPO_INFO,         0,       0)                           //-0x111 add for SWTP. MD window: Ryan-HN Chen 
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_SW_TPUT_THROTTLING,            0,       0)                           //-0x112 add for SW through put throttling. MD window: Peter Hsu
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_UT_ONLY  ,                     0,       0)                           //-0x113 add for UT only
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_TEST_MD_AP,                    0,       0)                           //-0x114 add for IT only 
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_TEST_AP_MD,                    0,       0)                           //-0x115 add for IT only 
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_TEST_MULTITASK_MD_AP,          0,       0)                           //-0x116 add for IT only 
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_TEST_MULTITASK_AP_MD,          0,       0)                           //-0x117 add for IT only
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_MD_UNPROTECT_PART_REQ,         0,       0)                           //-0x118 add for NVRAM. MD window: Quinhua Yu (MD->AP)
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_CCISM_SCP_SHM_INIT,            0,       0)                           //-0x119 add for MD<->SCP CCISM TRM Flow init MSG
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_CCISM_SCP_SHM_INIT_ACK,        0,       0)                           //-0x11A add for MD<->SCP CCISM TRM Flow init ACK MSG
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_CCISM_SCP_SHM_INIT_DONE,       0,       0)                           //-0x11B add for MD<->SCP CCISM TRM Flow init Done MSG
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_PMIC_INTR_MODEM_BUCK_OC,       0,       0)                           //-0x11C add for PMIC over current. MD window:Yuyang Hsiao 
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_EMI_ACCESS_VIOLATION_ACK,      0,       0)                           //-0x11D add for EMI access violation ack. MD window: Woody.Kuo
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_LWA_DATA_PATH_CONTROL,         0,       0)                           //-0x11E add for LWA data patch control. MD window: MingTsung.Sun
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_C2K_PPP_LINE_STATUS,           0,       0)                           //-0x11F add for C2K PPP line status. MD window: Stun Wu
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_DISPLAY_DYNAMIC_MIPI_GSM,      0,       0)                           //-0x120 add for dynamic MIPI GSM, 2G connection 2 packet/s(OPPO). ACS Window: Wiley Li
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_RF_HOPPING_NOTIFY,             0,       0)                           //-0x121 add for OSC frequency jump. Owner: Jianjun Du / Weiwei Pei
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_DUMMY_122,                     0,       0)                           //-0x122
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_DUMMY_123,                     0,       0)                           //-0x123
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_DUMMY_124,                     0,       0)                           //-0x124
X_CCCI_SYSMSGSVC_CONF(CCMSG_ID_SYSMSGSVC_CAMERA_HOPPING_NOTIFY,         0,       0)                           //-0x125 add for camera enable/disable report. Owner: JZ Hou
/* Add new msg id from here*/

#endif


