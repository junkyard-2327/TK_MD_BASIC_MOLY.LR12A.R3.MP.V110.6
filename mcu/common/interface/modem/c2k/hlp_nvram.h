/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS (""MEDIATEK SOFTWARE"")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN ""AS-IS"" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
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
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSKAL_TRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

#ifndef _HLP_NVRAM_H_

#define _HLP_NVRAM_H_ 1

/*****************************************************************************
 * Includes
 ****************************************************************************/
#define HLP_DEFAULT_HSPD_LOCKED             KAL_FALSE
#define HLP_DEFAULT_HSPD_NETWORKMODE        KAL_TRUE

#define HLP_DEFAULT_RRP_TIMEOUT             3    /* 1750 ms */
#define HLP_DEFAULT_NUM_REG_RETRIES         2
#define HLP_DEFAULT_NUM_DEREG_RETRIES       2
#define HLP_DEFAULT_RRA                     26
#define HLP_DEFAULT_SPRINT_RRA              1800
#define HLP_DEFAULT_REREG_ONLYIF_TRAFFIC    KAL_FALSE
#define HLP_DEFAULT_IP_ADDR                 0x00000000L

#define HLP_DEFAULT_NAI_ENABLED             KAL_TRUE

#define HLP_DEFAULT_NAI                     "ctnet@mycdma.cn"
#define HLP_DEFAULT_DUN_NAI                 "ctnet@mycdma.cn"
#define HLP_DEFAULT_SIP_PASSWRD             "vnet.mobi"

#define HLP_DEFAULT_AN_PASSWRD              0
#define HLP_DEFAULT_AKA_PASSWRD             0
#define HLP_DEFAULT_MN_HA_PASSWRD           0
#define HLP_DEFAULT_MN_AAA_PASSWRD          0

#define HLP_DEFAULT_DORMANT_HANDOFF_OPTION  KAL_TRUE
#define HLP_DEFAULT_DATA_SCRM_ENABLED       KAL_TRUE
#define HLP_DEFAULT_DATA_THROTTLING_ENABLED KAL_TRUE
#define HLP_DEFAULT_PREFERRED_RC            3  /*PSW_RC_PREF_3 */
#define HLP_DEFAULT_MIP_MODE                IPSERVICE_TYPE_MIP_PREFER
#define HLP_DEFAULT_ACTIVE_PROFILE          0
#define HLP_DEFAULT_NUM_PROFILES            HLP_MAX_HSPD_PROFILES
#define HLP_DEFAULT_MN_HA_SPI_ENABLE        KAL_TRUE
#define HLP_DEFAULT_MN_AAA_SPI_ENABLE       KAL_TRUE
#define HLP_DEFAULT_VJCOMPRESSION_ENABLED   KAL_FALSE
#define HLP_DEFAULT_DOTO1X_FALLBACK_ENABLED KAL_TRUE

#define HLP_DEFAULT_HSPD_T_DORMACNY         30
#define HLP_DEFAULT_HSPD_T_HRPD_SEARCH      300
#define HLP_DEFAULT_HSPD_T_RAPID_DORMACNY   5
#define HLP_DEFAULT_HSPD_T_RES_DEF_DORMACNY 2

#define HLP_DEFAULT_PPP_UM_LCP_REQ_RETRIES  10
#define HLP_DEFAULT_PPP_UM_LCP_NAK_RETRIES  10
#define HLP_DEFAULT_PPP_UM_LCP_RESTART_TMR  3000
#define HLP_DEFAULT_PPP_UM_LCP_TERM_RETRIES 2
#define HLP_DEFAULT_PPP_UM_LCP_TERM_TIMER   3000
#define HLP_DEFAULT_PPP_UM_AUTH_RETRIES     5
#define HLP_DEFAULT_PPP_UM_AUTH_TIMER       3000
#define HLP_DEFAULT_PPP_UM_NCP_REQ_RETRIES  10
#define HLP_DEFAULT_PPP_UM_NCP_NAK_RETRIES  3
#define HLP_DEFAULT_PPP_UM_NCP_RESTART_TMR  3000
#define HLP_DEFAULT_PPP_UM_NCP_TERM_RETRIES 2
#define HLP_DEFAULT_PPP_UM_NCP_TERM_TIMER   3000

#define HLP_DEFAULT_PPP_RM_PPP_KEEP_LIVE    KAL_FALSE
#define HLP_DEFAULT_PPP_RM_PPP_DETECT       KAL_FALSE
#define HLP_DEFAULT_PPP_RM_LCP_REQ_RETRIES  10
#define HLP_DEFAULT_PPP_RM_LCP_NAK_RETRIES  3

#define NET_MTU              1500       /* it was 1500                     */
#define TCPIP_HEADERSIZE     40        /* IP header + TCP header size     */
#define TCP_MAXWINSIZE       65535UL   /* max TCP window size             */

#define HLP_DEFAULT_TCP_MTU                 NET_MTU - TCPIP_HEADERSIZE
#define HLP_DEFAULT_TCP_WIN_1XRTT           TCP_MAXWINSIZE
#define HLP_DEFAULT_TCP_WIN_EVDO            TCP_MAXWINSIZE
#define DO_RETRY_TIMER                    60

#define HLP_DEFAULT_PKOID                   10
#define HLP_DEFAULT_MN_HA_SPI               300
#define HLP_DEFAULT_MN_AAA_SPI              2
#define HLP_DEFAULT_IS801_IP_ADDR           0x00000000L
#define HLP_DEFAULT_IS801_PORT_NUM          0
#define HLP_DEFAULT_MN_HOME_IP_ADDR         0x00000000L
#define HLP_DEFAULT_HA_PRI_IP_ADDR          0xFFFFFFFF
#define HLP_DEFAULT_HA_SEC_IP_ADDR          0xFFFFFFFF
#define HLP_DEFAULT_SPRINT_HA_PRI_IP_ADDR   0x441C0F0C  /* 68.28.15.12 */
#define HLP_DEFAULT_SPRINT_HA_SEC_IP_ADDR   0x441C1F0C  /* 68.28.31.12 */
#define HLP_DEFAULT_MN_REV_TUNNELING        KAL_TRUE
#define HLP_DEFAULT_ACTIVE_RSA_PUBLIC_KEY   DMU_RSA_PUBLICKEY_1
#define HLP_DEFAULT_HA_AUTH                 RFC2002bis
#define HLP_DEFAULT_HA_AUTH_ALGORITHM       MD5_AUTH_ALGO
#define HLP_MTU_SIZE_VZW                    1428
#define HLP_MTU_SIZE_SPRINT                 1422
/* CTCC requires at least 10 min for ppp context maintaince time 600 is in second unit */
#define PPP_EHRPD_MAX_INACT_TIME_LEN_CT           600
/* SPRINT ppp partial context maintenance timer on ehrpd, 3600 in second unit */
#define PPP_EHRPD_MAX_INACT_TIME_LEN_SPRINT       3600
/* VZW UE context maintenance timer, 0, by req on Feb 16 */
#define PPP_EHRPD_MAX_INACT_TIME_LEN_VZW          0

#define HLP_MAX_USRID_LEN                72
#define HLP_MAX_PSWD_LEN                 16
#define HLP_MAX_BWSR_DIG_LEN             33  /* (CP_MAX_CALLING_PARTY_NUMBER_SIZE +1) */
#define HLP_MN_NAI_MAX_SIZE              HLP_MAX_USRID_LEN
#define MN_AUTH_MAX_SIZE                 3

#define HLP_AKA_OP_LEN                   16
#define HLP_AKA_SEQ_ARRAY_SIZE           32
#define HLP_AKA_SQN_LEN                  6  /*48 bits 3G TS 33.105.v.3.0(2000-03)*/

#define HLP_MAX_HSPD_PROFILES            8

#define HLP_HSPD_DB_PAD_SIZE             57
#define HLP_HSPD_PROFILE_PAD_SIZE        128

#ifdef CBP7_EHRPD
#define HLP_HSPD_SECURE_DB_PAD_SIZE      114
#else
#define HLP_HSPD_SECURE_DB_PAD_SIZE      130
#endif

#define HLP_HSPD_SECURE_PROFILE_PAD_SIZE 64
#define HLP_EHRPD_DB_PAD_SIZE            47

#define MN_PASSWD_MAX_SIZE               HLP_MAX_PSWD_LEN

#define RSA_PUBKEY_EXPONENT_MAX_SIZE 128
#define RSA_PUBKEY_MODULUS_MAX_SIZE  128

/*****************************/
/* HlpNam  definitions start */
/*****************************/
typedef struct
{
   kal_uint32  RxBytes;
   kal_uint32  RxPackets;
   kal_uint32  BadRxPackets;
   kal_uint32  TxBytes;
   kal_uint32  TxPackets;
   kal_uint64  TotalRxBytes;
   kal_uint64  TotalRxPackets;
   kal_uint64  TotalBadRxPackets;
   kal_uint64  TotalTxBytes;
   kal_uint64  TotalTxPackets;
   kal_uint8   Flag[4];
   kal_uint8   Unused[10];
} IPCounterStruct;

typedef struct
{
   kal_uint8   lcpReqTries;
   kal_uint8   lcpNakTries;
   kal_uint16  lcpRestartTimer;
   kal_uint8   lcpTermTries;
   kal_uint16  lcpTermTimer;
   kal_uint8   authRetries;
   kal_uint16  authTimer;
   kal_uint8   ncpReqTries;
   kal_uint8   ncpNakTries;
   kal_uint16  ncpReStrTimer;
   kal_uint8   ncpTermTries;
   kal_uint16  ncpTermTimer;
   kal_uint8   unused[8];
} HlpPppUmCfgT;

typedef struct
{
   kal_bool    pppKeepAlive;
   kal_bool    pppDetect;
   kal_uint8   lcpReqTries;
   kal_uint8   lcpNakTries;
   kal_uint16  lcpRestartTimer;
   kal_uint8   lcpTermTries;
   kal_uint16  lcpTermTimer;
   kal_uint8   ncpReqTries;
   kal_uint8   ncpNakTries;
   kal_uint16  ncpReStrTimer;
   kal_uint8   ncpTermTries;
   kal_uint16  ncpTermTimer;
   kal_uint8   unused[3];
} HlpPppRmCfgT;

typedef struct
{
   kal_uint16  tcpMtu;
   kal_uint16  tcpWinSize_1XRTT;
   kal_uint16  tcpWinSize_EVDO;
   kal_uint8   unused[4];
} HlpTcpCfgT;

typedef struct{
   kal_uint8    ProfileId;
   kal_bool     Profile_Valid;
   kal_uint32   MN_HOME_IP_ADDR;
   kal_uint32   HA_PRI_IP_ADDR;
   kal_uint32   HA_SEC_IP_ADDR;
   kal_uint8    MN_NAI[HLP_MN_NAI_MAX_SIZE];
   kal_uint8    MN_DUN_NAI[HLP_MN_NAI_MAX_SIZE];
   kal_uint8    MN_REV_TUNNELING;
   kal_bool     bMN_HA_SPI_Enable;
   kal_uint32   MN_HA_SPI;
   kal_bool     bMN_AAA_SPI_Enable;
   kal_uint32   MN_AAA_SPI;
   kal_uint8    Padding[HLP_HSPD_PROFILE_PAD_SIZE];
} HlpHspdProfileData;


typedef struct {
   kal_uint8    RRPTimeout;      /* RRP MIP Registration timeout        */
   kal_uint8    NumRegRetries;   /* RRP MIP Registration Retry Attempts */
   kal_uint16   RRA;             /* Pre Re-registration backoff */
   kal_uint32   Is801_IpAddr;
   kal_uint16   Is801_PortNum;
   kal_uint8    Is801_UserId[HLP_MAX_USRID_LEN];
   kal_uint8    Is801_Pswd[HLP_MAX_PSWD_LEN];
   kal_uint8    Is801_CalledNumber[HLP_MAX_BWSR_DIG_LEN];

   kal_uint8    MN_HA_AUTH;  /* 0-RFC2002, 1-RFC2002bis, 2-bypassHA */
   kal_uint8    MN_HA_Auth_Algo;
   kal_uint8    MN_AAA_Auth_Algo;

   kal_uint8    MN_Authenticator[MN_AUTH_MAX_SIZE];
   kal_uint8    ActiveDmuRsaPublicKey;   /* 0-TestKey, 1-CommercialKey */
   kal_uint8    nPKOID;

   kal_uint8    SIP_NAI[HLP_MN_NAI_MAX_SIZE];
   kal_uint8    SIP_DUN_NAI[HLP_MN_NAI_MAX_SIZE];
   kal_uint8    AN_NAI[HLP_MN_NAI_MAX_SIZE];

   kal_uint8    DormantHandoffOptSet;  /* 0-Disabled, 1-Enabled */
   kal_uint8    DataScrmEnabled;       /* Supp Chan Supported */
   kal_uint8    DataTrtlEnabled;       /* Slow Down data at high CPU utilization */
   kal_uint8    PrefRc;                /* Preferred Radio Cfg. Default-RC3 */
   kal_uint32   DNS_PRI_IP_ADDR;
   kal_uint32   DNS_SEC_IP_ADDR;
   kal_uint8    MIPMode;

   kal_uint32   ActiveProfile;
   kal_uint8    NumProfiles;
   kal_uint8    VJCompEnabled;
   kal_bool     HspdLocked;
   kal_uint16   LockCode;
   kal_bool     HspdNetworkMode;
   kal_uint16   T_Dormancy;
   kal_uint16   T_HRPD_Search;
   kal_uint16   T_DO_Retry;
   kal_uint16   T_Rapid_Dormancy;
   kal_uint16   T_ResDef_Dormancy;
   kal_uint8    NumDeRegRetries;
   kal_bool     MipReRegOnlyIfTraffic;
   kal_bool     MipNaiEnabled;
   kal_bool     DoTo1X_Enabled;

   HlpPppUmCfgT PppUmCfg;
   HlpPppRmCfgT PppRmCfg;
   HlpTcpCfgT   TcpCfg;
   kal_uint8     Ipv6V4Mode;

   kal_uint8    Padding[HLP_HSPD_DB_PAD_SIZE];
   HlpHspdProfileData ProfileData [HLP_MAX_HSPD_PROFILES];
}HlpHspdSegData;

typedef struct
{
   kal_uint8     ProfileId;
   kal_bool      Profile_Valid;
   kal_uint8     MN_AAA_PASSWORD_LEN;
   kal_uint8     MN_AAA_PASSWORD[MN_PASSWD_MAX_SIZE]; /* MIP AAA Shared Secret*/
   kal_uint8     MN_HA_PASSWORD_LEN;
   kal_uint8     MN_HA_PASSWORD[MN_PASSWD_MAX_SIZE]; /* MIP HA Shared Secret  */
   kal_uint8     Padding[HLP_HSPD_SECURE_PROFILE_PAD_SIZE];
} HlpSecureProfileData;

typedef struct
{
   kal_uint32    checkSum;
   kal_uint8     SIP_PASSWORD_LEN;
   kal_uint8     SIP_PASSWORD[HLP_MAX_PSWD_LEN]; /* Simple IP User Password   */
   kal_uint8     AN_PASSWORD_LEN;
   kal_uint8     AN_PASSWORD[HLP_MAX_PSWD_LEN]; /* AN Shared Secret*/
#ifdef CBP7_EHRPD
   kal_uint8     AKA_PASSWORD[HLP_MAX_PSWD_LEN];
#endif
   kal_uint8     Padding[HLP_HSPD_SECURE_DB_PAD_SIZE];
   HlpSecureProfileData   ProfileData [HLP_MAX_HSPD_PROFILES];
} HlpHspdSecureSegData;

#ifdef CBP7_EHRPD

#if defined MTK_PLT_ON_PC
#pragma pack( push, saved_packing, 1 )
#endif
typedef struct {
   kal_uint8 NAI[HLP_MN_NAI_MAX_SIZE];
   kal_uint8 AcessNetworkId[HLP_MN_NAI_MAX_SIZE];
   kal_uint8 OP[HLP_AKA_OP_LEN];
   kal_uint8 SQN[HLP_AKA_SEQ_ARRAY_SIZE][HLP_AKA_SQN_LEN];
} HlpHspdAkaProfileDataT;
#if defined MTK_PLT_ON_PC
#pragma pack( pop, saved_packing )
#endif

typedef struct
{
   kal_bool SmsOverIpNetworks;
   kal_bool SigComp;
   kal_uint8 ImsDomain[72];
   kal_uint8 ImsAkaPassword[72];
   kal_uint16 SipT1Timer_ims;
   kal_uint16 SipTFTimer_ims;
   kal_uint16 SipT2Timer_ims;
   kal_uint16 SipPcscfPort;
} SmsOverImsT;

typedef struct
{
   HlpHspdAkaProfileDataT AkaProfileData;
   kal_uint32             pcmt_val_ehrpd; /* PPP Partial Context Maintenance timer eHRPD: standalone eHRPD scenario. Unit: second. */
   kal_uint32             pcmt_val_irat;  /* PPP Partial Context Maintenance timer eHRPD: LTE IRAT transition scenario. Unit: second. */
} HlpEHrpdSegDataT;
#endif

typedef enum
{
   InvalidIP=0,
   IPv4=1,
   IPv6,
   IPv4andIPv6,
}IPAddrTypeT;

typedef enum
{
   IPSERVICE_TYPE_SIP_ONLY,
   IPSERVICE_TYPE_MIP_PREFER,
   IPSERVICE_TYPE_MIP_ONLY
} IPServiceTypeT;

typedef enum
{
   DMU_RSA_PUBLICKEY_1 = 0,
   DMU_RSA_PUBLICKEY_2
} DmuRsaPublickKeyNumber;

typedef enum
{
   RFC2002,
   RFC2002bis,
   BypassHA
}HAAuthNumber;

typedef enum
{
   NONE_AUTH_ALGO,
   MD5_AUTH_ALGO
}AuthAlgoNumber;

typedef struct {
    kal_uint8 nPKOID;
    kal_uint8 nPKOI;
    kal_uint8 nPK_Expansion;
    kal_uint8 nATVAndDMUV;
} HlpRSAPublicKeyInfoHdrT;

typedef struct {
    HlpRSAPublicKeyInfoHdrT hdrRSAPublicKeyInfo;
    kal_uint8 RSAPubKeyExponent[RSA_PUBKEY_EXPONENT_MAX_SIZE];
    kal_uint8 RSAPubKeyModulus[RSA_PUBKEY_MODULUS_MAX_SIZE];
} HlpRSAPublicKeyInfoT;


#endif  /* _HLP_NVRAM_H_ */

