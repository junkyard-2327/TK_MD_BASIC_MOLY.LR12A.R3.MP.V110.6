/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 * Filename:
 * ---------
 *   ccci_if.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *   Defines the CCCI data structures and APIs
 *   This file has 7 regions, includes:
 *   CCCI header file 		: include header file
 *   CCCI compile option 	: Define CCCI related compile option
 *   CCCI structure define 	: Define CCCI public structure
 *   CCCI Macro			: Define CCCI public Macro
 *   CCCI function pointer	: Define CCCI public function pointer
 *   CCCI public API		: Define CCCI public API
 *   CCCI MISC 			: For test propose or other use
 *   
 *   Each region includes 3 parts, includes:
 *   Common : For common use
 *   PCore  : For PCore use only
 *   L1Core : For L1Core use only
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 06 07 2019 viney.kaushik
 * [MOLY00412389] [ASSERT] file:mcu/common/service/hif/ccci/src/ccci_error_code.c line:114
 * 	
 * 	Disable assert bit for CCCI_SYSTEM_CHANNEL.
 *
 * 01 10 2019 viney.kaushik
 * [MOLY00378182] [MT6293] UDC feature patch back to R3
 * 	
 * 	add UDC feature ID and tty channel / replace ccci spinlock with HWITC.
 *
 * 01 07 2019 viney.kaushik
 * [MOLY00369021] [Talbot SB call for check-in][System Service][MOLY Kernel Internal Request] AMMS POS to port onto Talbot
 * 	
 * 	[ccci] add POS SHM feature id
 *
 * 12 04 2018 viney.kaushik
 * [MOLY00370278] MD early exception dump for P Migration
 * 	
 * 	add API for memdump timeout.
 *
 * 03 26 2018 actory.ou
 * [MOLY00315592] ã€?M-TEEã€‘ã€?release patchã€‘ apply for mt6771 Mtee patch combined codebase - MD_CCCI
 * [R3][ccci] add for MTEE/MD SHM allocation
 *
 * 09 18 2017 chien-hui.lu
 * [MOLY00278321] [CCCI][SCPCCISM] CCCI support MD<->SCP transmission on Gen93
 * [CCCITTY][CCCI] support MD<->SCP transmission.
 *
 * 09 07 2017 chien-hui.lu
 * [MOLY00276510] [CCCI][CCCI_SYS_MSG] modify CCCI system message send ilm 4 bytes
 * [CCCI][CCCI_SYS_MSG] prevent ccci common ilm 4B potential risk.
 *
 * 04 05 2017 chien-hui.lu
 * [MOLY00239611] [CCCI_IPC][CCCI] add CCCI IPC and runtime feature
 * [CCCI][CCCI_IPC] add runtime feature and IPC config for MDT.
 *
 * 01 24 2017 chien-hui.lu
 * [MOLY00226584] [CCCI] add runtime data support feature
 * add runtime data feature ID for Modem PHY Capture and MD<->WiFi direct path.
 *
 * 01 06 2017 chien-hui.lu
 * [MOLY00220000] merge CSCD into trunk
 * [CCCI] add CSCD compile flag for AP MD PEER ID enum.
 *
 * 01 06 2017 chien-hui.lu
 * [MOLY00220000] merge CSCD into trunk
 * [CCCI] add CSCD compile flag for AP MD PEER ID enum.
 *
 * 12 12 2016 chien-hui.lu
 * [MOLY00201881] [CCISM] CCISM support in UMOLYA
 * [CCCI][CCISM] modify feature ID for CCISM SHM support
 *
 * 11 23 2016 ap.wang
 * [MOLY00210820] [HMU] Add exception step
 * .
 *
 * 11 18 2016 chien-hui.lu
 * [MOLY00201881] [CCISM] CCISM support in UMOLYA
 * [CCISM] add CCISM exception mode share memory.
 *
 * 10 06 2016 cs.huang
 * [MOLY00204808] [CCCI] Support multi-mpu setting
 * [CCCI] multi MPU
 *
 * [MOLY00204430] [CCCI] MT6293 change
 * [CCCI] Add 93 change
 *
 * 07 19 2016 cs.huang
 * [MOLY00185754] [CCB] Porting to UMOLY trunk
 * [CCCI] Support CCB
 *
 * 06 29 2016 ap.wang
 * [MOLY00187298] [CCCI] LWA related check in
 * .
 *
 *
 *
 * 06 01 2016 cs.huang
 * [MOLY00182647] [CCCI] Fast CCCI header
 * [CCCI] Fast CCCI header
 *
 * 04 20 2016 cs.huang
 * [MOLY00173829] [CCCI] Add a new CCCI misc info for customer
 * [CCCI] Add customer misc id
 *
 * 03 29 2016 cs.huang
 * [MOLY00171352] [WW FT][MT6755][Jade-M][H3G][UK][VoLTE][SQC Excluded] No "manage conference" menu
 * [CCCI] Add runtime data id for MTU size
 *
 * 01 25 2016 cs.huang
 * [MOLY00162367] [CCISM] add CCISM
 * [CCCI] Add CCISM related code
 *
 * 12 28 2015 cs.huang
 * [MOLY00154045] [MT6797] EPOF code submission - query AP feature id
 * [CCCI] Add runtime data AP_CCCI_RUNTIME_EE_AFTER_EPOF
 *
 * 12 21 2015 cs.huang
 * [MOLY00154045] [MT6797] EPOF code submission - query AP feature id
 * [CCCI] Add runtime data AP_CCCI_RUNTIME_EE_AFTER_EPOF
 *
 *
 * 11 10 2015 cs.huang
 * [MOLY00148746] [HMU] Check timer feature
 * [CCCI] HMU check timer feature
 *
 * 11 03 2015 cs.huang
 * [MOLY00147959] [CCCI] Support error code
 * [CCCI] Support error code
 *
 * 10 27 2015 cs.huang
 * [MOLY00146877] [CLDMA Core] Add Duplicated GPD detection mechanism
 * [CCCI] Add HIF pattern in CCCI IOR structure
 *
 * 10 12 2015 cs.huang
 * [MOLY00143927] [System Software] save MD bootup address from AP for EMI MPU violation debugging
 * [CCCI] Add AP runtime data id : AP_CCCI_RUNTIME_MD_IMG_INFO
 *
 * 09 25 2015 cs.huang
 * [MOLY00143226] [CCCI] Add boot up trace for debugging CCCI HS1
 * [CCCI] Add boot up trace for debugging CCCI HS1
 *
 * 08 06 2015 cs.huang
 * [MOLY00135464] [CCCI] New CCCI handshake flow
 * [CCCI] New CCCI handshake flow
 *
 * 08 06 2015 cs.huang
 * [MOLY00135464] [CCCI] New CCCI handshake flow
 * [CCCI] New CCCI handshake flow
 *
 * 08 05 2015 cs.huang
 * [MOLY00135462] [Jade] CLDMACORE task logging callback function activity
 * [CCCI] Add CLDMA debug exception share memory ID.
 *
 * 08 04 2015 cs.huang
 * [MOLY00122361] [6291 plus][CCCI] Merge PCore/L1Core
 * [CCCI] Merge common header
 *
 *
 * 06 18 2015 cs.huang
 * [MOLY00122361] [6291 plus][CCCI] Merge PCore/L1Core
 * [CCCI] Merge common header
 * 04 13 2015 cs.huang
 * [MOLY00106914] [C2K IRAT][CCCI] Add CCCI misc info id for C2K
 * [CCCI] Add CCCI misc info id for C2K
 *
 * 01 14 2015 cs.huang
 * [MOLY00092037] [CCCI] Fix UMOLY Trunk build error
 * Fix build error.
 *
 * 01 13 2015 cs.huang
 * [MOLY00092037] [CCCI] Fix UMOLY Trunk build error
 * Fix build error
 *
 * 01 12 2015 cs.huang
 * [MOLY00092037] [CCCI] Fix UMOLY Trunk build error
 * Fix CCCI build error
 *
 * 01 12 2015 cs.huang
 * [MOLY00092037] [CCCI] Fix UMOLY Trunk build error
 * Fix CCCI build error
 *
 * 12 25 2014 i-wei.tsai
 * [MOLY00088926] IMS dedicate mux channel support
 * fix error
 *
 * 12 10 2014 cs.huang
 * [MOLY00080351] [MT6291][CCCI] Add L1Core CCCI service (CCCI SYSMSG/RPC/IPC)
 * [CCCI] Add L1Core RPC/IPC debug seq
 *
 ****************************************************************************/
#ifndef _CCCI_IF_H
#define _CCCI_IF_H

#include "kal_public_api.h"
#include "ccci_ch_cfg.h"
#include "hif_ior.h"
#include "qmu_bm.h"

#define __OLD_CCCI_HS_FLOW__
#define __NEW_CCCI_HS_FLOW__
#define __FAST_CCCI_HEADER__
/*!
 *  @brief __CCCI_N_USE_TGPD_EXT__ 
 *           20120925 perfer to use TGPD extension for CCCI_HEADER
 *                    if defined __CCCI_N_USE_GPD_EXT__, use buff part.
 */
//#define __CCCI_N_USE_TGPD_EXT__

/*!
 *  @brief __CCCI_PERF_PROFILING__ 
 *           20120924 compile option for performance profiling
 */
//#define __CCCI_PERF_PROFILING__

/*!
 *  @brief __CCCI_LB_IT__ 
 *           20120805 compile option for Smartphone AP IT
 */
//#define __CCCI_LB_IT__ defined in hif_ccci.mak

/*!
 *  @brief __CCCI_GPD_LEAK_DBG__ debug for gpd leak
 *           20120604 solved the leak in HIF SDIO SIM
 */
//#define __CCCI_GPD_LEAK_DBG__

/*!
 *  @brief __SDIOC_PULL_Q_ENH_DL__ 
 *           20121001 enable this to enhance the hif poll DL queue performance
 *                    Do the poll queue only if the hwo gpd count > 0
 */
#define __SDIOC_PULL_Q_ENH_DL__ 

/*!
 *  @brief FS_CCCI_MAX_BUF_SIZE max buffer size of CCCI_FS
 *         Note: user cannot send/request buffer larger than this size
 *         (CCCI_Header) (FS_OP_ID) (ARGC) (MAX_ARG_NUM* Len) (MAX_ARG_NUM* value_len)(FS_BUFF)
 *         (16)          (4)        (4)    (6*4)              (6*4)                   (16KB)
 *         Tail buffer for 4B aligned: 128
 */
#define FS_CCCI_MAX_USER_BUFF           16384
#define FS_CCCI_REQ_BUFFER_NUM          5 /* support 5 concurrently request*/
#define FS_CCCI_MAX_ARG_NUM	            6 /* parameter number */
#define FS_CCCI_MAX_BUF_SIZE            (16+4+4+FS_CCCI_MAX_ARG_NUM*4*2+FS_CCCI_MAX_USER_BUFF+128)
#define FS_CCCI_POLLING_BUFF_SIZE       QBM_SIZE_CCCI_COMM

/*!
 *  @brief Current MT6280 design only defines 
 *            the max Tx/Rx GPD size as 4KB for non-network user
 *            the max Tx/Rx GPD size as 2KB for network user
 */
#define CCCI_UL_BUF_TYPE  QBM_TYPE_CCCI_COMM   // non-network user RGPD
#define CCCI_DL_BUF_TYPE  QBM_TYPE_CCCI_COMM   // non-network user TGPD, ccci_write won't flush data must bmcfg_cache_invalid(KAL_TRUE)
#define CCCI_DL_SYSMSG_BUF_TYPE QBM_TYPE_TGPD  // for QBM pool shrink, ccci_write should flush data

/*!
 *  @brief CCCI_RETURNVAL_T CCCI API return value enum
 */
typedef enum
{
    CCCI_SUCCESS        = 0,
    CCCI_FAIL           = -1001,
    CCCI_IN_USE         = -1002,
    CCCI_NOT_OWNER      = -1003,
    CCCI_INVALID_PARAM  = -1004,
    CCCI_NO_PHY_CHANNEL = -1005,
    CCCI_IN_LISR        = -1006,
    CCCI_NO_DATA        = -1007
} CCCI_RETURNVAL_T;

/*!
 *  @brief CCCI_BUFF_T CCCI channel buffer structure struct
 */
typedef struct
{
    kal_uint32 data[2]; /* data[1]: length including the CCCI_BUFF_T*/
    kal_uint32 channel:16;
    kal_uint32 seq:15;
    kal_uint32 assert_bit:1;
    kal_uint32 reserved;
} CCCI_BUFF_T;

typedef struct
{
	kal_uint8		ref_count;
	kal_uint16		msg_len;
	kal_uint32		W0;
} CCCI_COMMON_ILM_4B;

typedef struct
{
	kal_uint8		ref_count;
	kal_uint16		msg_len;
	kal_uint16		HW0;
} CCCI_COMMON_ILM_2B;

#undef	X_CCCI_SYSMSGSVC_CONF
#define	X_CCCI_SYSMSGSVC_CONF(mSGNO, mODE, iD)	mSGNO,
/*!
 *  @brief  CONTROL_CHANNEL_MSG
 *             CCCI Message ID Passing Through CONTROL_CHANNEL and SYSTEM_CHANNEL
 *             NOTICE: Negotiations With AP Owner Before Modification
 */
typedef enum
{
    CCMSG_ID_START_BOOT        = 0x00000000,
    CCMSG_ID_NORMAL_BOOT_READY = 0x00000001,
    CCMSG_ID_META_BOOT_READY   = 0x00000002,
    CCMSG_ID_RESET             = 0x00000003,
    CCMSG_ID_EXCEPTION_CHECK   = 0x00000004,
    CCMSG_ID_DRV_VERSION_ERR   = 0x00000005,
    CCMSG_ID_EXCEPTION_REC_OK  = 0x00000006,
    CCMSG_ID_EXCEPTION_PASS    = 0x00000008,
    /* System Channel */
    CCMSG_ID_MD_L4_MOD         = 0x0000000E,//add for RIL (AP task) and L4C (MD task) communication message
    CCMSG_ID_MD_L4_MAX_TX_PWR_RED_REQ = 0x0000000F,

    CCMSG_ID_MD_LEGACY_END     = 0x000000FF,
    CCMSG_ID_SYSMSGSVC_MASK    = 0x00000100,
    CCMSG_ID_SYSMSGSVC_START   = 0x00000100,
    CCMSG_ID_SYSMSGSVC_DUMMY   = 0x000000FF,
    //- section 0x100 ~ 0x1FF : reserved for system message service used
    #include "ccci_sysmsgsvc_conf.h"

    CCMSG_ID_SYSMSGSVC_END,

    CCMSG_ID_MD_WDT_FLAG       = 0x00001000, //- for MT6577/MT6589, AP cannot receive MD WDT interrupt issue. k2 md2 6589, for resolving wdt build error
	
}CONTROL_CHANNEL_MSG;
#undef	X_CCCI_SYSMSGSVC_CONF

/*!
 *  @brief CCCI_MAILBOX_T CCCI mailbox channel structure struct
 */
typedef struct
{
    kal_uint32 magic;   /* 0xFFFFFFFF */
    kal_uint32 id;
} CCCI_MAILBOX_T;

/*!
 *  @brief CCCI_STREAM_T CCCI stream channel structure struct
 */
typedef struct
{
    kal_uint32 addr;
    kal_uint32 len;
} CCCI_STREAM_T;

typedef struct MISC_INFO_ELEMENT_T
{
    kal_uint32   Feature[4];
}MISC_INFO_ELEMENT;

typedef struct MISC_INFO_DATA_T
{
    kal_uint32   MiscPrefix;            // "MISC"
	kal_uint32   SupportMask;
	kal_uint32   Index;
	kal_uint32   Next;
    MISC_INFO_ELEMENT element[16];
	kal_uint32   Reserve[3];
	kal_uint32   MiscPostfix;          // "MISC"
}MISC_INFO_DATA;

/*!
 *  @brief MODEM_RUNTIME_DATA CCCI MD runtime enum
 */
typedef struct MODEM_RUNTIME_DATA_T
{
    kal_uint8    Prefix[4];            // "CCIF" for compatible to 6280
    kal_uint8    Platform[8];          // Hardware Platform String ex: "MT6516E1"
    kal_uint32   DriverVersion;        // 0x00000929 since W09.29
    kal_uint32   BootChannel;          // Channel to ACK AP with boot ready
    kal_uint32   BootingStartID;       // MD is booting. NORMAL_BOOT_ID or META_BOOT_ID or early exception memory dump
    kal_uint32   BootAttributes;       // Attributes passing from AP to MD Booting
    kal_uint32   BootReadyID;          // MD response ID if boot successful and ready ,
                                       // Cannot equal to CCMSG_ID_DRV_VERSION_ERR
    kal_uint32   FileShareMemBase;
    kal_uint32   FileShareMemSize;
    kal_uint32   ExceShareMemBase;
    kal_uint32   ExceShareMemSize;     // 512 Bytes Required 
    kal_uint32   CCIFShareMemBase;     
    kal_uint32   CCIFShareMemSize;     // CCIF share queue size
    kal_uint32   DHLShareMemBase;  // For DHL
    kal_uint32   DHLShareMemSize;
    kal_uint32   MD1MD3ShareMemBase;  // For MD1 MD3 share memory
    kal_uint32   MD1MD3ShareMemSize;
    kal_uint32	 CCISMShareMemBase;
    kal_uint32	 CCISMShareMemSize;
    kal_uint32	 CCISMExptShareMemBase;
    kal_uint32	 CCISMExptShareMemSize;
    kal_uint32   TotalShareMemBase;
    kal_uint32   TotalShareMemSize;
    kal_uint32   CheckSum;
    kal_uint8    Postfix[4];           //"CCIF" for compatible to 6280                       
    MISC_INFO_DATA MiscInfo;
}MODEM_RUNTIME_DATA;

#define CCCI_RUNTIME_FEATURE_MAX 64

typedef struct AP_RUNTIME_DATA_T
{
    kal_uint8    Prefix[4];            // "ICCC"
    kal_uint8    APQueryFeature[CCCI_RUNTIME_FEATURE_MAX];
    kal_uint32   SHMSupport;
    kal_uint32   APRuntimeDataAddr;
    kal_uint32   APRuntimeDataSize;
    kal_uint32   MDRuntimeDataAddr;
    kal_uint32   MDRuntimeDataSize;
    kal_uint32   SetMDMPUStartAddr;
    kal_uint32   SetMDMPUTotalSize;
    kal_uint8    Postfix[4];           //"ICCC"       
}AP_RUNTIME_DATA;

typedef struct AP_RUNTIME_DATA_V2_T
{
    kal_uint8    Prefix[4];            // "ICCC"
    kal_uint8    APQueryFeature[CCCI_RUNTIME_FEATURE_MAX];
    kal_uint32   SHMSupport;
    kal_uint32   APRuntimeDataAddr;
    kal_uint32   APRuntimeDataSize;
    kal_uint32   MDRuntimeDataAddr;
    kal_uint32   MDRuntimeDataSize;
    kal_uint8    MPUSetting[64];
    kal_uint8    Postfix[4];           //"ICCC"       
}AP_RUNTIME_DATA_V2;

typedef struct MD_RUNTIME_DATA_T
{
    kal_uint8    Prefix[4];            // "CCCI"
    kal_uint8    MDQueryFeature[CCCI_RUNTIME_FEATURE_MAX];
    kal_uint8    Postfix[4];           //"CCCI"             
}MD_RUNTIME_DATA;

typedef enum{
    AP_CCCI_RUNTIME_BOOT_INFO =0,               //0- add for BOOT info
    AP_CCCI_RUNTIME_EXCEPTION_SHARE_MEMORY ,    //1- add for MD SS exception
    AP_CCCI_RUNTIME_CCISM_AP_SHARE_MEMORY ,     //2- add for CCCI control path HIF CCISM share memory AP<->MD
    AP_CCCI_RUNTIME_DHL_SHARE_MEMORY ,          //3-
    AP_CCCI_RUNTIME_MD1MD3_SHARE_MEMORY ,       //4-
    // CCCI misc info
    CCMSG_ID_MISCINFO_START, // for misc info back compitable
    CCMSG_ID_MISCINFO_HIF_DMA_REMAP = CCMSG_ID_MISCINFO_START,             //5- add for DMA to query HIF-DMA remap address
    CCMSG_ID_MISCINFO_RTC_32K_LESS,              //6- add for L1 to query 32K-less information in AP
    CCMSG_ID_MISCINFO_RANDOM_SEED_NUM,           //7- add for sram repair function to get random seed number from AP (Owner: SE7/SD3/Cindy)
    CCMSG_ID_MISCINFO_GPS_COCLOCK,               //8- add for L1D to query GPS co-clock information from AP
    CCMSG_ID_MISCINFO_SBP_ID,                    //9- add for SBP to query SBP related profile (Owner: SE3/PS8/Hong)
    CCMSG_ID_MISCINFO_CCCI,                      //10- add for CCCI related feature (Owner: SE7/SD8/CS)
    CCMSG_ID_MISCINFO_CLIB_TIME,                 //11- add for KAL to get andriod time (Owner: SE7/SS/Carl)
    CCMSG_ID_MISCINFO_C2K,                       //12- add for C2K option  (Owner: SE3/PS5/Ralf)
    AP_CCCI_RUNTIME_MD_IMG_INFO,                 //13- add for KAL to get MD image info (Owner: SS/KC.Tsai)
    AP_CCCI_RUNTIME_CCISM_SCP_SHARE_MEMORY,      //14- add for CCCI HIF CCISM share memory MD<->SCP
    AP_CCCI_CCB_SHARE_MEMORY,                    //15- add for CCCI CCB
    AP_CCCI_DHL_RAW_SHARE_MEMORY,                //16- add for DHL RAW
    AP_CCCI_RUNTIME_MDDT_NETD_SHARE_MEMORY,      //17- add for DT NETD
    AP_CCCI_RUNTIME_MDDT_USB_SHARE_MEMORY,       //18- add for DT USB
    AP_CCCI_RUNTIME_EE_AFTER_EPOF,               //19- add for EPOF flow
    AP_CCCI_RUNTIME_NETWORK_MTU_SIZE,            //20- add for querying network MTU size
    CCMSG_ID_MISC_INFO_CUSTOMER_PARM,            //21- add for customer
    AP_CCCI_RUNTIME_CCCI_FAST_HEADER,            //22- add for querying ccci fast header support
    CCMSG_ID_MISCINFO_SLPHISTLOG,                //23- add for sleep history log 
    CCMSG_ID_MISCINFO_C2K_MEID,                  //24- add for misc info aligment, c2k use
    CCMSG_ID_MISCINFO_LWASHM,                    //25- add for LWA share memory
    AP_CCCI_AUDIO_RAW_MEMORY,                    //26- add for Audio share memory
    AP_CCCI_MULTI_MPU_SETTING,                   //27- add for multiple MPU setting to inform AP
    AP_CCCI_RUNTIME_CCISM_AP_EXCEPT_SHARE_MEMORY,//28- add for CCCI control path HIF CCISM share memory AP<->MD for exception usage
    AP_CCCI_RUNTIME_MD_PHY_CAPTURE_SHARE_MEMORY, //29- add for 93 Modem PHY Capture, request 200MB share memory
    AP_CCCI_RUNTIME_MD_CONSYS_SHARE_MEMORY,      //30- add for MD<->WiFi direct path share memory
    AP_CCCI_RUNTIME_MD_USIP_SHARE_MEMORY,        //31- add for uSIP share memory (Owner: WSD/OSS8/ME9 Thomas Chen)
    AP_CCCI_RUNTIME_MD_MTEE_SHARE_MEMORY_ENABLE, //32- add for MD<->MTEE share memory enable flag (Owner: WCS/SE3/PS8 Allen Hsu)
    AP_CCCI_RUNTIME_AMMS_POS_SHARE_MEMORY,       //33- add for AMMS POS share memory (WCS_SSE_SS5: Tee-Yuen Chun)
    AP_CCCI_RUNTIME_MD_UDC_SHARE_MEMORY,         //34- add for UDC share memory (User: Cammie, Chi-Yen)
    AP_CCCI_RUNTIME_FEATURE_ID_MAX,
} AP_CCCI_RUNTIME_FEATURE_ID;

typedef enum{
    // New id add here
#if !defined(__MTK_TARGET__) && defined(ATEST_SYS_ENABLE) // for UT
    MD_CCCI_RUNTIME_UT_TEST,
#endif
    MD_CCCI_RUNTIME_FEATURE_ID_MAX,
} MD_CCCI_RUNTIME_FEATURE_ID;

typedef enum{
    CCCI_RUNTIME_FEATURE_NOT_EXIST               = 0,
    CCCI_RUNTIME_FEATURE_NOT_SUPPORT             = 1,
    CCCI_RUNTIME_FEATURE_MUST_SUPPORT            = 2,
    CCCI_RUNTIME_FEATURE_OPTIONAL_SUPPORT        = 3,
    CCCI_RUNTIME_FEATURE_SUPPORT_BACKWARD_COMPAT = 4, 
}CCCI_RUNTIME_FEATURE_SUPPORT_TYPE;

typedef struct
{
    kal_uint8 support_mask:4;
    kal_uint8 version:4;
} CCCI_RUNTIME_FEATURE_SUPPORT_T;

typedef struct
{
    kal_uint8 feature_id; // for debug only
    CCCI_RUNTIME_FEATURE_SUPPORT_T support_info; //1B
    kal_uint8 reserved[2];
    kal_uint32 data_length;
    kal_uint32 data[0];
} CCCI_RUNTIME_FEATURE_FORMAT_T;

typedef struct
{
    kal_uint32 addr;
    kal_uint32 size;
} CCCI_RUNTIME_SHARE_MEMORY_FORMAT_T;

typedef struct
{
    CCCI_RUNTIME_SHARE_MEMORY_FORMAT_T ctrl_buffr;
    CCCI_RUNTIME_SHARE_MEMORY_FORMAT_T data_buffr;
} CCB_SHARE_MEMORY_FORMAT_T;

typedef struct
{
    CCCI_RUNTIME_SHARE_MEMORY_FORMAT_T udc_buf;
    CCCI_RUNTIME_SHARE_MEMORY_FORMAT_T udc_tbl;
} UDC_SHARE_MEMORY_FORMAT_T;           //runtime data #31- add for UDC share memory (User: Cammie, Chi-Yen)

typedef struct
{
    kal_uint32   BootChannel;          // Channel to ACK AP with boot ready
    kal_uint32   BootingStartID;       // MD is booting. NORMAL_BOOT_ID or META_BOOT_ID or early exception memory dump
    kal_uint32   BootAttributes;       // Attributes passing from AP to MD Booting
    kal_uint32   BootReadyID;          // MD response ID if boot successful and ready ,
} CCCI_RUNTIME_BOOT_INFO_FORMAT_T;

typedef enum{
    CCCI_FA_UNKNOWN_ERROR	= 0x000,
    CCCI_FA_MD_NO_RESPONSE	= 0x100,
    CCCI_FA_HMU_DSP_TIMER_BROKEN= 0x101,
    CCCI_FA_HMU_GPT_TIMER_BROKEN= 0x102,
    CCCI_FA_MD_SEQ_ERROR	= 0x200,
    CCCI_FA_AP_SEQ_ERROR	= 0x201,
    CCCI_FA_QUEUE0_BLOCKED	= 0x300,
    CCCI_FA_USR_TRIGGER		= 0x400,
}CCCI_FORCE_ASSERT_ERROR_CODE;

/*!
 *  @brief ccci_io_req_type_e Type of operation to for requests to submit to HIF.
 *  @param CCCI_IO_TX_NO_FLUSH                  Transmit operation without GPD checksum calcuation and cache flush.
 */
typedef enum _ccci_io_req_type {
     CCCI_IO_TX_NO_FLUSH        = 0x00000010,
     CCCI_IO_TYPE_DUMMY         = 0x7fffffff
} ccci_io_req_type_e;

/*!
 *  @brief ccci_io_ext_info_t Configurations apply to the requests to submit to HIF.
 *  @param type               Type of operation.
 */
typedef struct _ccci_io_ext_info {
     ccci_io_req_type_e   type;
} ccci_io_ext_info_t;

/*!
 *  @brief CCCI_STATE_T CCCI status enum
 */
typedef enum
{
    CCCI_IDLE           = 0x00,
    CCCI_ACTIVE_READ    = 0x01,
    CCCI_ACTIVE_WRITE   = 0x02,
    CCCI_ACTIVE_ISR     = 0x04
} CCCI_STATE_T;

/*!
 *  @brief CCCI peer id enum for multi HIF
 */
typedef enum
{
	CCCI_PEER_ID_MIN	= 0,
// To AP HIF support
#if defined(__HIF_CCISM_SUPPORT__) || defined(ATEST_SYS_CCCI) || defined(__HIF_CSCDCORE_SUPPORT__)
	CCCI_PEER_ID_AP_MD	= CCCI_PEER_ID_MIN,
#endif
// TODO: Need to confirm MD to SCP HIF compile optioon
// MD & SCP HIF support
#if defined(__HIF_CCISM_SCP_SUPPORT__) || defined(ATEST_SYS_CCCI)
    CCCI_PEER_ID_MD_SCP,
#endif
	CCCI_PEER_ID_MAX,
} CCCI_PEER_ID_T;


#ifdef __SDIOC_PULL_Q_ENH_DL__
/*!
 *  @brief ccci_io_request_t is a typedef of struct _ccci_io_request_t
 */
typedef struct _ccci_io_request_t ccci_io_request_t;
/*!
 *  @brief struct _ccci_io_request_t describe io request used to communicate
 *         between ccci_sdio modules
 */
struct _ccci_io_request_t {
    /*!
     *  @brief next io request
     */
    ccci_io_request_t*      next_request;
    /*!
     *  @brief pointer to current gpd of this io request
     */
    qbm_gpd*                first_gpd;
    /*!
     *  @brief pointer to last gpd of this io request
     */
    qbm_gpd*                last_gpd;
    /*!
     *  @brief number of the gpd in this ior
     */
    kal_int16               num_gpd;
    /*!
     *  @brief hif forbidden pattern for duplicated GPD detection
     */
    kal_uint16              hif_forbidden;
};
#else
#define ccci_io_request_t hif_io_request_t
#endif

typedef enum _CCCI_EXPT_STATE
{
    CCCI_EXPT_INVALID_ST,
    CCCI_EXPT_INIT_CCCITTY_DEV_ST,
    CCCI_EXPT_INIT_ST, 
    CCCI_EXPT_CLEAR_CH_ST,
    CCCI_EXPT_HANDSHAKE_START_ST,
    CCCI_EXPT_HANDSHAKE_TX_START_ST,
    CCCI_EXPT_HANDSHAKE_TX_DONE_ST,
    CCCI_EXPT_HANDSHAKE_RX_START_ST,
    CCCI_EXPT_HANDSHAKE_RX_DONE_ST,
    CCCI_EXPT_HANDSHAKE_DONE_ST,
    CCCI_EXPT_INFO_PASS_PRE_START_ST,
    CCCI_EXPT_INFO_PASS_PRE_DONE_ST,
    CCCI_EXPT_INFO_PASSED_START_ST,
    CCCI_EXPT_INFO_PASSED_DONE_ST,
    CCCI_EXPT_STATE_MAX
} CCCI_EXPT_STATE_E;

typedef enum {
    CCCI_EXCEP_DBG_HS_CCCI_FS_WAIT_TIME_POLLING = 0,
    CCCI_EXCEP_DBG_HS_CCCI_FS_WAIT_TIME_NORMAL_CARRY, // wait time is double, H32 is high 32 bit value
    CCCI_EXCEP_DBG_HS_CCCI_FS_WAIT_TIME_NORMAL, // wait time is double, L32 is low 32 bit value
    CCCI_EXCEP_DBG_HS_CCCI_FS_TRACE,
    CCCI_EXCEP_DBG_HS_CCCI_RPC_WAIT_TIME_POLLING,
    CCCI_EXCEP_DBG_HS_CCCI_RPC_WAIT_TIME_NORMAL_CARRY, // wait time is double, H32 is high 32 bit value
    CCCI_EXCEP_DBG_HS_CCCI_RPC_WAIT_TIME_NORMAL, // wait time is double, L32 is low 32 bit value
    CCCI_EXCEP_DBG_HS_CCCI_RPC_TRACE,
    CCCI_EXCEP_DBG_HS_BOOTTRC_WAIT_TIME,
    CCCI_EXCEP_DBG_HS_CCCI_DEBUG_CHANNEL,
    CCCI_EXCEP_DBG_HS_CCCI_DEBUG_CURRENT_SEQ_NUM,
    CCCI_EXCEP_DBG_HS_CCCI_DEBUG_EXPECTED_SEQ_NUM,
    CCCI_EXCEP_DBG_HS_CMUX_GPD_PROFILE_NUM,
    CCCI_EXCEP_DBG_HS_CCCI_FS_ERROR_LINE,
    CCCI_EXCEP_DBG_HS_CCCI_FS_ERROR_PARAM1,
    CCCI_EXCEP_DBG_HS_CCCI_FS_ERROR_PARAM2,
    CCCI_EXCEP_DBG_HS_CCCI_FS_ERROR_PARAM3,
    CCCI_EXCEP_DBG_HS_CCCI_CLDMA_TX_CB,
    CCCI_EXCEP_DBG_HS_CCCI_CLDMA_RX_CB,
    CCCI_EXCEP_DBG_STEP,
    CCCI_EXCEP_DBG_HS_LOG_MAX,
} CCCI_EXCEP_DBG_HS_INDEX;

#undef     X_CCCI_EXCEP_MEMORY_CONF
#define    X_CCCI_EXCEP_MEMORY_CONF(region, length)    region,
typedef enum
{
#include "ccci_excep_memory_region.h"
    CCCI_EXCEP_MEMORY_REGION_MAX
} CCCI_EXCEP_MEMORY_REGION;
#undef    X_CCCI_EXCEP_MEMORY_CONF

typedef enum {
    CCCI_EXCEP_MEMORY_TYPE_SHM,
    CCCI_EXCEP_MEMORY_TYPE_STATIC_BUFFER,
    CCCI_EXCEP_MEMORY_TYPE_MAX
} CCCI_EXCEP_MEMORY_TYPE;

typedef enum
{
    CCCI_DEBUG_GET_STATUS_MODULE_L1TIME = 0x0,
    CCCI_DEBUG_GET_STATUS_MODULE_CCCIFS,
    CCCI_DEBUG_GET_STATUS_MODULE_CCCIRPC,
    CCCI_DEBUG_GET_STATUS_MODULE_CCCIIPC,
    CCCI_DEBUG_GET_STATUS_MODULE_CCMNI,
    CCCI_DEBUG_GET_STATUS_MODULE_CCCITTY,
    CCCI_DEBUG_GET_STATUS_MODULE_CCCIIMS,
    CCCI_DEBUG_GET_STATUS_MODULE_CCCISEQ,
    CCCI_DEBUG_GET_STATUS_MODULE_MAX
} CCCI_DEBUG_GET_STATUS_MODULE;

/* CCCI boot up trace step */
typedef enum
{
    CCCI_BOOT_UP_TRACE_START = 0x200, // need to align with SS
	CCCI_BOOT_UP_TRACE_HW_INIT_ENTER = CCCI_BOOT_UP_TRACE_START,
	CCCI_BOOT_UP_TRACE_HW_INIT_LEAVE,
	CCCI_BOOT_UP_TRACE_HS1_ENTER ,
	CCCI_BOOT_UP_TRACE_HS1_START_TX,
	CCCI_BOOT_UP_TRACE_HS1_TX_TIMEOUT,
	CCCI_BOOT_UP_TRACE_HS1_START_RX,
	CCCI_BOOT_UP_TRACE_HS1_RX_TIMEOUT,
	CCCI_BOOT_UP_TRACE_HS1_TRANSMISSION_DONE,
	CCCI_BOOT_UP_TRACE_HS1_LEAVE,
	CCCI_BOOT_UP_TRACE_HW_INIT2_ENTER,
	CCCI_BOOT_UP_TRACE_HW_INIT2_LEAVE,
	CCCI_BOOT_UP_TRACE_HS2_ENTER,
	CCCI_BOOT_UP_TRACE_HS2_START_TX,
	CCCI_BOOT_UP_TRACE_HS2_TX_TIMEOUT,
	CCCI_BOOT_UP_TRACE_HS2_TRANSMISSION_DONE,
	CCCI_BOOT_UP_TRACE_HS2_LEAVE,
	CCCI_BOOT_UP_TRACE_MAX = 0x2FF, // need to align with SS
} CCCI_BOOT_UP_TRACE_STEP;

typedef enum
{
    AP_CCCI_RUNTIME_DATA_VERSION_UNKNOWN = 0,
    AP_CCCI_RUNTIME_DATA_VERSION_OLD,
    AP_CCCI_RUNTIME_DATA_VERSION_NEW_V1,
    AP_CCCI_RUNTIME_DATA_VERSION_NEW_V2,
    AP_CCCI_RUNTIME_DATA_VERSION_NEW_V2_WITHOUT_SHM,
} AP_CCCI_RUNTIME_DATA_VERSION;
 
/*!
 *  @brief CCCI_INIT_MAILBOX initialize a CCCI mailbox buffer
 */
#define CCCI_INIT_MAILBOX(buff, mailbox_id) \
        do {    \
            ((CCCI_MAILBOX_T *)(buff))->magic = 0xFFFFFFFF; \
            ((CCCI_MAILBOX_T *)(buff))->id = (mailbox_id);  \
            (buff)->channel = 0;  \
            (buff)->reserved = 0;    \
        } while (0)

/*!
 *  @brief CCCI_INIT_STREAM initialize a CCCI stream buffer
 */
#define CCCI_INIT_STREAM(buff, stream_addr, stream_len) \
        do {    \
            ((CCCI_STREAM_T *)(buff))->addr = (stream_addr); \
            ((CCCI_STREAM_T *)(buff))->len = (stream_len);  \
            (buff)->channel = 0;  \
            (buff)->reserved = 0;    \
        } while (0)
/*!
 *  @brief CCCI_IS_MAILBOX check the CCCI buffer type
 */
#define CCCI_IS_MAILBOX(buff)   ((((CCCI_MAILBOX_T *)(buff))->magic == 0xFFFFFFFF)? 1: 0)

/*!
 *  @brief CCCI_MAILBOX_ID get the id of the CCCI mailbox buffer
 */
#define CCCI_MAILBOX_ID(buff)   (((CCCI_MAILBOX_T *)(buff))->id)

/*!
 *  @brief CCCI_STREAM_ADDR get the addr of the CCCI stream buffer
 */
#define CCCI_STREAM_ADDR(buff)   (((CCCI_STREAM_T *)(buff))->addr)
/*!
 *  @brief CCCI_STREAM_LEN get the len of the CCCI stream buffer
 */
#define CCCI_STREAM_LEN(buff)   (((CCCI_STREAM_T *)(buff))->len)
/*!
 *  @brief CCCI_STREAM_SET_LEN get the len of the CCCI stream buffer
 */
#define CCCI_STREAM_SET_LEN(buff, stream_len) \
        do {    \
            ((CCCI_STREAM_T *)(buff))->len = (stream_len);  \
        } while (0)
/*!
 *  @brief CCCI_GET_CH_NO obtain the CCCI channel number
 */
#define CCCI_GET_CH_NO(buff)   (((CCCI_BUFF_T *)(buff))->channel)
/*!
 *  @brief CCCI_SET_CH_NO set the CCCI channel number
 */
#define CCCI_SET_CH_NO(buff, ch_no) \
        do {    \
            ((CCCI_BUFF_T *)(buff))->channel = ch_no;  \
        } while (0)
/*!
 *  @brief CCCI_SET_RESERVED set the CCCI reserved
 */
#define CCCI_SET_RESERVED(buff, reserved_d) \
        do {    \
            ((CCCI_BUFF_T *)(buff))->reserved = reserved_d;  \
        } while (0)
/*!
 *  @brief CCCI_GET_RESERVED get the CCCI reserved
 */
#define CCCI_GET_RESERVED(buff) (((CCCI_BUFF_T *)(buff))->reserved)

#define CCCI_MISC_INFO_NOT_EXIST   0x00000000
#define CCCI_MISC_INFO_NOT_SUPPORT 0x00000001
#define CCCI_MISC_INFO_SUPPORT     0x00000002
#define CCCI_MISC_INFO_PARTIALLY_SUPPORT 0x00000003

#define PEER_ID_MASK 0xF000 // each peer range 0x0~0xFF
#define PEER_CH_MASK 0x0FFF // each channel range is 0x0~0xFF

#define GET_PEER_ID(_ch) ((_ch & PEER_ID_MASK) >> 12 )
#define GET_PEER_CHANNEL(_ch) (_ch & PEER_CH_MASK)
#define GET_VIRTUAL_CHANNEL(_peer_id, _ch) ((_peer_id << 12) | _ch) // peer_id + channel

#define BOOT_ATTR_IS_CLEAN_BOOT   0x00000001

#define CCCI_DEBUG_ASSERT_BIT 1
#define CCCI_DEBUG_NOT_ASSERT_BIT 0

typedef void (*CCCI_SYSMSGSVC_HISR_CALLBACK)(kal_uint32 param);

/*!
 *  @brief function pointer type for HIF CCCI callback function: called by HIF provided by CCCI
 *            The CCCI will registers HIF_CCCI_GPD_CALLBACK/HIF_CCCI_BUFF_CALLBACK depending on the HIG IO mode
 */
typedef void (*HIF_CCCI_CALLBACK)(kal_uint8 queue_no, void* pior_or_pbuff);
/*!
 *  @brief function pointer type for HIF CCCI callback function: called by HIF provided by CCCI for CCCI_CH_HIFIO_GPD
 */
typedef void (*HIF_CCCI_GPD_CALLBACK)(kal_uint8 queue_no, ccci_io_request_t* ior);
/*!
 *  @brief function pointer type for HIF CCCI callback function: called by HIF provided by CCCI for CCCI_CH_HIFIO_BUFF
 */
typedef void (*HIF_CCCI_BUFF_CALLBACK)(kal_uint8 queue_no, CCCI_BUFF_T* pbuff);


/*!
 *  @brief function pointer type for CCCI callback function: called by CCCI,  provided by device/user registered by ccci_init
 */
typedef void (*CCCI_CALLBACK)(CCCI_BUFF_T *buff);

/*!
 *  @brief function pointer type for CCCI IOR callback function: called by CCCI,  provided by GPD device (CCMNI/TTYCORE) registered by ccci_init_gpdior
 */
typedef void (*CCCI_IORCALLBACK )(CCCI_CHANNEL_T channel, ccci_io_request_t* ior);

/*!
 *  @brief function pointer type for CCCI IT reload GPD. 
 */
typedef void (*CCCI_RGPD_RELOAD_CALLBACK)();

/*!
 *  @brief function pointer type for CCCI IT to generate DL traffic
 */
typedef void (*CCCI_DL_PKTGEN_CALLBACK)();

typedef kal_uint32 (*CCCI_DEBUG_GET_STATUS_CALLBACK)(kal_uint32 *write_ptr, kal_uint32 available_size);

/*!
*  @brief CCCI callback user's function to get runtime data and len
*  query_support            - query support mask & version of this id
*  data           	       -    user needs to memcpy to data.
*  data_len          -     the length of users data
 Return value      -     users support mask & version of this id
*/
typedef CCCI_RUNTIME_FEATURE_SUPPORT_T (*CCCI_RUNTIME_DATA_QUERY_REG_CB)(CCCI_RUNTIME_FEATURE_SUPPORT_T query_support, void * data, kal_uint32 * data_len);

/*!
 *  @brief ccci_send_message send a message and reserved by ccci_mailbox_write_with_reserved
 *  @param message:  mailbox_id
 *  @param reserved: ccci_header->reserved 
 *  @return CCCI_RETURNVAL_T
 */
kal_bool ccci_send_message(kal_uint32 message, kal_uint32 reserved);
kal_bool ccci_send_message_by_ilm(kal_uint32 message, kal_uint32 reserved);
kal_int32 ccci_send_ilm(ilm_struct* ilm);
kal_int32 ccci_register_sysmsgsvc_callback(kal_uint32 msgno, CCCI_SYSMSGSVC_HISR_CALLBACK funp);
kal_uint32 ccci_get_current_time();
kal_uint32 ccci_get_duration(kal_uint32 start, kal_uint32 end);

kal_int32 ccci_misc_data_feature_support(kal_uint32 op_id, kal_uint32 len, void *pReturn);
/* API for CCCI device to obtain the share memory */
MODEM_RUNTIME_DATA* ccci_get_share_data(void);
kal_uint8* ccci_get_ap_share_data(void);
CCCI_RUNTIME_FEATURE_SUPPORT_T ccci_runtime_data_query(AP_CCCI_RUNTIME_FEATURE_ID feature_id, void *data, kal_uint32 read_len);
/*!
 *  @brief ccci_check_maxchannel checks the channel exceed the max channel or not
 *  @param channel: ccci channel in CCCI_CHANNEL_T enumeration
 *  @return CCCI_RETURNVAL_T CCCI_SUCCESS means the channel is valid, CCCI_INVALID_PARAM means the channel is invalid
 */
kal_int32 ccci_check_maxchannel(CCCI_CHANNEL_T channel);

#define CCCI_ERROR_CODE_END 0xFFFF
#define CCCI_ERROR_CODE_ASSERT(error_code, ...) _ccci_error_code_assert(error_code, ##__VA_ARGS__, CCCI_ERROR_CODE_END)
void _ccci_error_code_assert(CCCI_FORCE_ASSERT_ERROR_CODE error_code, ...);

/*!
 *  @brief ccci_init: This function initializes the buffer mode logical channel.
 *  @param channel:  logical channel
 *  @param funp:  CCCI callback function provided by user
 *  @return CCCI error code, CCCI_RETURNVAL_T
 */
kal_int32 ccci_init(CCCI_CHANNEL_T channel, CCCI_CALLBACK funp);
/*!
 *  @brief ccci_owner_init: Legacy MT6280 CCCI API, ccci_init the channel with task id set. But we don't check task id in MT6290
 *  @param channel:  logical channel
 *  @param kal_taskid: task id;
 *  @param funp:  CCCI callback function provided by user
 *  @return CCCI error code, CCCI_RETURNVAL_T
 */
kal_int32 ccci_owner_init(CCCI_CHANNEL_T channel, kal_taskid task, CCCI_CALLBACK funp);
/*!
 *  @brief ccci_init_gpdior: This function initializes the GPD mode logical channel.
 *  @param channel:  logical channel
 *  @param funp:  CCCI callback function provided by user
 *  @return CCCI error code, CCCI_RETURNVAL_T
 */
kal_int32 ccci_init_gpdior(CCCI_CHANNEL_T channel, CCCI_IORCALLBACK ior_funp);
/*!
 *  @brief ccci_deinit: This function de-initializes the Buffer and GPD mode logical channel.
 *  @param channel:  logical channel
 *  @return CCCI error code, CCCI_RETURNVAL_T
 */
kal_int32 ccci_deinit(CCCI_CHANNEL_T channel);
/*!
 *  @brief ccci_write provides the api for buffer mode user to send DL buffer to HIF transmission HW.
 *         It allocates ONE TGPD by qbmt_alloc_q_no_tail, if it fails returns CCCI_NO_PHY_CHANNEL
 *         The buff will be memcpy to TGPD->BD and submit the TGPD to HIF HW.
 *  @param channel:  logical channel
 *  @param buff:     pointer to buffer to be sent
 *  @return CCCI_RETURNVAL_T
 */
kal_int32 ccci_write(CCCI_CHANNEL_T channel, CCCI_BUFF_T *buff);
/*!
 *  @brief ccci_write_gpd provides the api for GPD mode user to send DL buffer to HIF transmission HW.
 *            There's no memcpy in this mode but it will traverse the GPD chain to add the CCCI header.
 *  @param channel:  logical channel
 *  @param buff:     pointer to buffer to be sent
 *  @param pextinfo: pointer to the ccci io request extension information, ex.CCCI_IO_TX_NO_FLUSH
 *  @return CCCI_RETURNVAL_T
 */
kal_int32 ccci_write_gpd(CCCI_CHANNEL_T channel, ccci_io_request_t *ccci_DL_ior, ccci_io_ext_info_t* pextinfo);

/*!
 * @function        ccci_polling_write_gpd
 * @brief           Hook up SDIO polling mode API
 *                  Current Usage: NVRAM-->CCCI_FS during mainp()
 *                                 CCCI_Handshake
 * @param channel   [IN] ccci_channel
 * @param p_gpd     [IN] pointer to the gpd
 * @param istx      [IN] KAL_TRUE: Downlink/Tx KAL_FASE: Uplink/Rx
 *
 * @return          KAL_TRUE: PASS
 *                  KAL_FALSE: NG
 */
kal_int32 ccci_polling_io(CCCI_CHANNEL_T channel, qbm_gpd *p_gpd, kal_bool is_tx);

/*!
 *  @brief ccci_ulbuff_cb is the MD side CCCI Rx callback function which registered to the buffer mode HIF driver by HIF_attach
 *                                  e.g. CCCI_CH_HIFIO_BUFF
 *  @param queue_no:  HW queue id, backward compatible with usb core
 *  @param pbuff:         pointer to Rx buffer CCCI header
 *  @return void
 */
void ccci_ulbuff_cb (kal_uint8 queue_no, CCCI_BUFF_T* pbuff);
/*!
 *  @brief ccci_ulior_cb is the MD side CCCI Rx callback function which registered to the GPD mode HIF driver by HIF_attach
 *                                  e.g. CCCI_CH_HIFIO_GPD
 *  @param queue_no:  HW queue id, backward compatible with usb core
 *  @param io_request:         pointer of ior
 *  @return void
 */
void ccci_ulior_cb (kal_uint8 queue_no, ccci_io_request_t* ior);

/*!
 *  @brief ccci_ulior_net_cb is the MD side CCCI CCMNI Rx callback function which registered to the GPD mode HIF driver by HIF_attach
 *                                  e.g. CCCI_CH_HIFIO_GPD
 *  @param queue_no:  HW queue id, backward compatible with usb core
 *  @param io_request:         pointer of ior
 *  @return void
 */
void ccci_ulior_net_cb (kal_uint8 queue_no, ccci_io_request_t* io_request);

#define ccci_dlior_cb ccci_dlior_agg_cb
/*!
 *  @brief ccci_dlior_agg_cb is the MD side CCCI Tx DONE aggregated callback function for deq the TGPD e.g. DHL
 *                               Unlike ccci_ulior_cb, this function does NOT handle the non-CCCI_CH_USER_GPD types
 *  @param queue_no:  HW queue id, backward compatible with usb core
 *  @param io_request:  pointer of ior
 *  @return void
 */
void ccci_dlior_agg_cb(kal_uint8 queue_no, ccci_io_request_t* io_request);
/*!
 *  @brief ccci_dlior_single_cb is the MD side CCCI Tx DONE callback function for deq the TGPD e.g. DHL
 *                               Unlike ccci_ulior_cb, this function does NOT handle the non-CCCI_CH_USER_GPD types
 *  @param queue_no:  HW queue id, backward compatible with usb core
 *  @param io_request:  pointer of ior
 *  @return void
 */
void ccci_dlior_single_cb(kal_uint8 queue_no, ccci_io_request_t* io_request);

/*!
 *  @brief ccci_mailbox_write formats a local buffer to mailbox format and call ccci_write
 *  @param channel:  logical channel
 *  @param id:          mailbox id
 *  @return CCCI_RETURNVAL_T
 */
kal_int32 ccci_mailbox_write(CCCI_CHANNEL_T channel, kal_uint32 id);
/*!
 *  @brief ccci_mailbox_write formats a local buffer to mailbox format and call ccci_write
 *  @param channel:     logical channel
 *  @param id:              mailbox id
 *  @param reserved:    ccci_header->reserved 
 *  @return CCCI_RETURNVAL_T
 */
kal_int32 ccci_mailbox_write_with_reserved(CCCI_CHANNEL_T channel, kal_uint32 id, kal_uint32 reserved);
/*!
 *  @brief ccci_stream_write formats a local buffer to stream format and call ccci_write
 *  @param channel:        logical channel
 *  @param addr:            start address of the user buffer
 *  @param len:              lenght of the user buffer 
 *  @return CCCI_RETURNVAL_T
 */
kal_int32 ccci_stream_write(CCCI_CHANNEL_T channel, kal_uint32 addr, kal_uint32 len);
/*!
 *  @brief ccci_stream_write_with_reserved formats a local buffer to stream format and call ccci_write
 *  @param channel:        logical channel
 *  @param addr:            start address of the user buffer
 *  @param len:              lenght of the user buffer 
 *  @param reserved      an additional parameter
 *  @return CCCI_RETURNVAL_T
 */
kal_int32 ccci_stream_write_with_reserved(CCCI_CHANNEL_T channel, kal_uint32 addr, kal_uint32 len,kal_uint32 reserved);

void ccci_ut_tx_direct_user_dl_ack_dbg(CCCI_BUFF_T *buff);
void lte_ccci_hw_init(void);
void lte_ccci_init_handshake_phase1(void);
void lte_ccci_hal_init(void);
void lte_ccci_init_handshake_phase2(kal_uint16 _boot_mode);
void lte_ccci_hw_init_phase2(void);
/*************************************************************************/
/*                     CCCI exception API                                */
/*************************************************************************
* FUNCTION
*  void ccci_exception_handshake
*
* DESCRIPTION
*  This function .
*
* PARAMETERS
*  channel    -    			logical channel
*  *
* RETURNS
*  The address of the share memory of the input logical channel
*
*************************************************************************/
void ccci_exception_handshake(void);

/*************************************************************************
* FUNCTION
*  void ccci_exception_info_passed
*
* DESCRIPTION
*  This function .
*
* PARAMETERS
*  channel    -    			logical channel
*  *
* RETURNS
*  The address of the share memory of the input logical channel
*
*************************************************************************/
void ccci_exception_info_passed(void);

kal_bool ccci_queryBootAttributes(kal_uint32 mask);

/*====================Exception Mode APIs===========================*/
kal_int32 ccci_except_init_hmu(kal_uint32 dev_mapping, kal_uint32 ext_devinfo_len, kal_char * ext_devinfo);
kal_int32 ccci_except_init(kal_uint32 ch_dhl_dl, kal_uint32 ch_dhl_ul);
kal_int32 ccci_except_clear_ch(kal_uint32 ccci_ch);
kal_int32 ccci_except_set_gpd(kal_uint32 expt_ch, void *p_first_gpd, void *p_last_gpd);
kal_int32 ccci_except_poll_gpd(kal_uint32 expt_ch, void **pp_first_gpd, void **pp_last_gpd, kal_uint32 *gpd_num);
kal_int32 ccci_except_hif_st(kal_uint32 expt_dl_ch);
kal_int32 ccci_except_hif_isr(kal_uint32 expt_dl_ch);

kal_bool cccitty_dev_expt_init(void);
void ccci_fs_svc_expt_init(void);
void ccci_get_ccism_shm_info(void **p_membase,kal_uint32 *p_memsize);
void ccci_get_ccism_expt_shm_info(void **p_membase,kal_uint32 *p_memsize);
void ccci_get_ccism_scp_shm_info(void **p_membase,kal_uint32 *p_memsize);
void ccci_get_ex_shm_info(void **p_membase, kal_uint32 *p_memsize);
void ccci_get_md1md3_shm_info(void **p_membase, kal_uint32 *p_memsize);
void ccci_get_dhl_shm_info(void **p_membase, kal_uint32 *p_memsize);
void ccci_get_dhl_raw_shm_info(void **p_membase, kal_uint32 *p_memsize);
void ccci_get_ccif_shm_info(void **p_membase, kal_uint32 *p_memsize);
void ccci_get_ccb_data_shm_info(void **p_membase, kal_uint32 *p_memsize);
void ccci_get_ccb_ctrl_shm_info(void **p_membase, kal_uint32 *p_memsize);
void ccci_get_dirt_shm_info(void **p_membase, kal_uint32 *p_memsize);
void ccci_get_dirt2_shm_info(void **p_membase, kal_uint32 *p_memsize);


kal_bool ccci_get_ap_runtime_data(void *start_addr, kal_uint32 total_size);
kal_uint32 ccci_runtime_data_registration(MD_CCCI_RUNTIME_FEATURE_ID feature_id, CCCI_RUNTIME_DATA_QUERY_REG_CB cb);

kal_int32 ccci_write_except_share_memory();

/*===================FAKE API=======================================*/
#define ccci_init_handshake_phase1(...)
#define ccci_init_handshake_phase2(...)
#define ccci_hal_init(...)

kal_int32 ccci_excep_dbg_logging_InHS2(kal_uint32 index, void* addr);

//#define __SP_BOOTTRC_ENABLE__
#if defined(__SP_BOOTTRC_ENABLE__)
extern void ccci_boottrc_send_log(kal_uint32 index, kal_uint32 value);
#endif

kal_int32 ccci_excep_query_shm(CCCI_EXCEP_MEMORY_REGION region, kal_uint32 *address, kal_uint32 *size, CCCI_EXCEP_MEMORY_TYPE *mem_type);
kal_int32 ccci_excep_init_shm(CCCI_EXCEP_MEMORY_TYPE mem_type, kal_uint32 addr, kal_uint32 size);
kal_uint32 ccci_excep_shm_get_total_size();

void ccci_CalculateShareMem(kal_uint32 *start_addr, kal_uint32 *end_addr , kal_uint32 *size);

kal_int32 ccci_debug_add_seq(CCCI_BUFF_T *bufp, kal_uint32 assert_bit);
kal_int32 ccci_debug_check_seq(CCCI_BUFF_T *bufp);
void ccci_debug_reset_seq_data();
void ccci_debug_reset_seq_data_peer(kal_uint32 peer_id);
kal_uint32 ccci_debug_get_status_register(CCCI_DEBUG_GET_STATUS_MODULE module_id, CCCI_DEBUG_GET_STATUS_CALLBACK funp);
kal_uint32 ccci_debug_get_status_worker();
void ccci_debug_set_feature();
void ccci_write_boot_up_trace(CCCI_BOOT_UP_TRACE_STEP step);
kal_bool ccci_check_shm_add_and_size(kal_uint32* address, kal_uint32 size);
void ccci_set_shared_mpu(void);
kal_uint32 ccci_get_memdump_timeout();
kal_uint32 ccci_get_debug_assert_bit(kal_uint32 channel);

#if defined (__CCCI_PERF_PROFILING__)
#include "cpu.h"
/*
 * Before you start to collec data , please follow the following step
 * step 1. change HMU_GPTIMER_PRIODIC_INTERVAL to 100000U in HMU. to make sure the process won't be interrupted
 * step 2. enable __CCCI_LB_IT__ in hif_ccci.mak, as we need to user the IT code.
 * step 3. for CCCI_CCMNI_DL_PERF please add monitor upcm_dlvr_dl_sdu 
 * step 4. for CCCI_CCMNI_UL_PERF please add monitor ipc_on_process_ul_queue --> upcm_rcv_ul_sdu 
 */
#define CCCI_PERF_GET_CYCLE cpu_event_counter_get_cycle
#define CCCI_PERF_GET_DURATION cpu_event_get_duration
#define __CCCI_TTY_NEW_TX_DL_PERF__     /* define to profile the ccci_tty new tx dl */
#define __CCCI_TTY_CONV_TX_DL_PERF__    /* define to profile the ccci_tty conventional tx dl */
#define __CCCI_TTY_CONV_RX_UL_PERF__    /* define to profile the ccci_tty conventional rx ul */
#define __CCCI_CCMNI_DL_PERF__          /* define to profile the ccmni dl */
#define __CCCI_CCMNI_UL_PERF__          /* define to profile the ccmni ul */
#define __CCCI_DUSER_DL_PERF__          /* define to profile the direct ccci user dl */
#define __CCCI_DUSER_UL_PERF__          /* define to profile the direct ccci user ul */
#define CCCI_PERF_REC_CNT      256
#define CCCI_PERF_REC_CNT_1    CCCI_PERF_REC_CNT-1

/* UL data structure*/
typedef struct _ccci_profile_ul_t{
    kal_uint32  sdioc_pq_num_gpd; 

    kal_uint32  sdioc_q_process_t; 
    
#ifdef __CCCI_CCMNI_UL_PERF__
    kal_uint32  ccmni_ipc_on_process_ul_s;
    kal_uint32  ccmni_upcm_rcv_ul_sdu_s;
    kal_uint32  ccmni_ipc2upcm_t;
#endif

#ifdef __CCCI_TTY_CONV_RX_UL_PERF__
    kal_uint32  tty_conv_rx_CMD_GB_s;
    kal_uint32  tty_conv_rx_CMD_GB_e;
    kal_uint32  tty_conv_rx_CMD_GB_t;
#endif

#ifdef __CCCI_DUSER_UL_PERF__
#endif

    
} ccci_profile_ul_t;

/* DL data structure*/
typedef struct _ccci_profile_dl_t{
    kal_uint32  sdioc_pq_num_gpd; 

    kal_uint32  sdioc_submit_ior_s;
    kal_uint32  sdioc_submit_ior_e;

//====================global end===========================


#ifdef __CCCI_CCMNI_DL_PERF__
    kal_uint32  ipc_on_process_ul_s;
    kal_uint32  upcm_rcv_ul_sdu_s;
#endif
    
#ifdef __CCCI_TTY_CONV_TX_DL_PERF__
    kal_uint32  tty_conv_tx_s;
    kal_uint32  tty_conv_tx_e;
    kal_uint32  tty_conv_tx_t; 
    kal_uint32  tty_conv_tx_cccih_s;
    kal_uint32  tty_conv_tx_cccih_e;
    kal_uint32  tty_conv_tx_cccih_t; 
    kal_uint32  tty_conv_tx_sdioc_submit_ior_t; 
#endif

#ifdef __CCCI_DUSER_DL_PERF__
    kal_uint32  duser_ccci_write_s;
    kal_uint32  duser_ccci_write_e;
    kal_uint32  duser_ccci_write_t;
    kal_uint32  duser_sdioc_submit_ior_t; 
#endif
    
} ccci_profile_dl_t;

extern ccci_profile_dl_t    dl_prof[CCCI_PERF_REC_CNT];
extern kal_uint32           dl_prof_id;
extern ccci_profile_ul_t    ul_prof[CCCI_PERF_REC_CNT];
extern kal_uint32           ul_prof_id;

#endif //__CCCI_PERF_PROFILING__

#endif //#ifndef _CCCI_IF_H
