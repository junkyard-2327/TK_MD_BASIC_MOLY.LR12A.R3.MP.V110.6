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
 * Filename:
 * ---------
 * nvram_enums.h
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is intends for NVRAM.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef NVRAM_ENUMS_H
#define NVRAM_ENUMS_H



#include "kal_general_types.h"
#include "kal_public_defs.h"   /* END_OF_MOD_ID */
#include "stack_buff_pool.h"
#include "ctrl_buff_pool.h"
#include "sysconf_statistics.h"
#include "sysservice_msgid.h"
#include "tst.h"
#include "global_def.h"


#if(defined(ISP_SUPPORT))
#include "drv_sw_features_isp.h"
#include "isp_nvram.h"
#endif

#if defined(__MA_L1__)
#include "stack_common_ma.h"
#endif  /* __MA_L1__ */

#ifdef __GAIN_TABLE_SUPPORT__
#include "gain_table.h"
#endif /* __GAIN_TABLE_SUPPORT__ */

//#include "drv_features.h"
//#include "drv_features_adc.h"
//#include "drv_features_rtc.h"
//#include "drv_features_sim.h"

#include "dcl.h"                        /* port_setting_struct */

#ifdef __MULTI_LEVEL_BACKLIGHT_SUPPORT__
#include "custom_hw_default.h"
#endif

#if defined(__UMTS_RAT__) && defined(__MTK_UL1_FDD__)
#include "ul1cal.h"
#endif

#ifdef __MULTI_LEVEL_BACKLIGHT_SUPPORT__
#include "custom_hw_default.h"
#endif



#include "mml1_rf_global.h"
#include "mml1_mipi_public.h"
#include "mml1_drdi_public.h"

#include "cust_chl_interface.h"


#define NVRAM_DUAL_RECORD                   MAX_SIM_NUM
#define NVRAM_MULTI_RECORD_LTE              MAX_LTE_NUM

//==================================================
//little group (size 64)
#define NVRAM_LID_GRP_UMTS(x)               (0x0000 | (0x003F & x))     //UM
#define NVRAM_LID_GRP_CAMERA(x)             (0x0040 | (0x003F & x))     //CA
#define NVRAM_LID_GRP_AUDIO(x)              (0x0080 | (0x003F & x))     //AU
#define NVRAM_LID_GRP_USERPROFILE(x)        (0x00C0 | (0x003F & x))     //UP
#define NVRAM_LID_GRP_OPERATORHS(x)         (0x0100 | (0x003F & x))     //OP
#define NVRAM_LID_GRP_ECOMPASS(x)           (0x0140 | (0x003F & x))     //EP
#define NVRAM_LID_GRP_MINILOG(x)            (0x0180 | (0x003F & x))     //ML
#define NVRAM_LID_GRP_DRM(x)                (0x01C0 | (0x003F & x))     //DR
#define NVRAM_LID_GRP_RTC(x)                (0x0200 | (0x003F & x))     //RT
#define NVRAM_LID_GRP_BWCS(x)               (0x0240 | (0x003F & x))     //BW
#define NVRAM_LID_GRP_GPS(x)                (0x0280 | (0x003F & x))     //GP
#define NVRAM_LID_GRP_EMPTY(x)              (0x02C0 | (0x003F & x))
#define NVRAM_LID_GRP_VSIM(x)               (0x0300 | (0x003F & x))     //VS
#define NVRAM_LID_GRP_SIM(x)                (0x0340 | (0x003F & x))     //SM
#define NVRAM_LID_GRP_SCSI(x)               (0x0380 | (0x003F & x))     //SS
#define NVRAM_LID_GRP_SBP(x)                (0x03C0 | (0x003F & x))     //SP
#define NVRAM_LID_GRP_RR(x)                 (0x0400 | (0x003F & x))     //RR
#define NVRAM_LID_GRP_NMU(x)                (0x0440 | (0x003F & x))     //NM
#define NVRAM_LID_GRP_NAS(x)                (0x0480 | (0x003F & x))     //NA
#define NVRAM_LID_GRP_MML1(x)               (0x04C0 | (0x003F & x))     //MM
#define NVRAM_LID_GRP_TCM(x)                (0x0500 | (0x003F & x))     //TC
#define NVRAM_LID_GRP_IMS(x)                (0x0540 | (0x003F & x))     //IM
#define NVRAM_LID_GRP_HMU(x)                (0x0580 | (0x003F & x))     //HM
#define NVRAM_LID_GRP_FT(x)                 (0x05C0 | (0x003F & x))     //FT
#define NVRAM_LID_GRP_ERAC(x)               (0x0600 | (0x003F & x))     //EC
#define NVRAM_LID_GRP_EMM(x)                (0x0640 | (0x003F & x))     //EM
#define NVRAM_LID_GRP_DHL(x)                (0x0680 | (0x003F & x))     //DH
#define NVRAM_LID_GRP_CSG(x)                (0x06C0 | (0x003F & x))     //CS
#define NVRAM_LID_GRP_ASBAND(x)             (0x0700 | (0x003F & x))     //AA
#define NVRAM_LID_GRP_ADC(x)                (0x0740 | (0x003F & x))     //AD
#define NVRAM_LID_GRP_BT(x)                 (0x0780 | (0x003F & x))     //BT
#define NVRAM_LID_GRP_WNDRV(x)              (0x07C0 | (0x003F & x))     //WN
#define NVRAM_LID_GRP_EX(x)                 (0x0800 | (0x003F & x))     //EX
#define NVRAM_LID_GRP_IWLAN(x)              (0x0840 | (0x003F & x))     //IW
#define NVRAM_LID_GRP_D2(x)					(0x0880 | (0x003F & x))		//D2
#define NVRAM_LID_GRP_CUSTOMER(x)           (0x08C0 | (0x003F & x))     //For CUSTOMER
#define NVRAM_LID_GRP_SSDS(x)               (0x0900 | (0x003F & x))     //SSDS
#define NVRAM_LID_GRP_MRS(x)                (0x0940 | (0x003F & x))     //MR
#define NVRAM_LID_GRP_NRRC(x)               (0x0980 | (0x003F & x))     //NR
#define NVRAM_LID_GRP_XCAP(x)               (0x09C0 | (0x003F & x))     //XP
#define NVRAM_LID_GRP_MCF(x)                (0x1000 | (0x003F & x))     //MC
#define NVRAM_LID_GRP_MTF(x)                (0x1040 | (0x003F & x))     //MF
#define NVRAM_LID_GRP_VGNAS(x)              (0x1080 | (0x003F & x))     //VG

#define NVRAM_LID_1ST_GRP_END               0x1200
#define NVRAM_LID_2ND_GRP_START             0xE000
//==================================================
//big group end (size 256)
#define NVRAM_LID_GRP_CUEX(x)               (0xE100 | (0x00FF & x))     //more than 64 lids for CUSTOMER
#define NVRAM_LID_GRP_CL1CAL(x)             (0xE200 | (0x00FF & x))     //CC
#define NVRAM_LID_GRP_CL1(x)                (0xE300 | (0x00FF & x))     //CL
#define NVRAM_LID_GRP_C2K(x)                (0xE400 | (0x00FF & x))     //CK 
#define NVRAM_LID_GRP_UL1(x)                (0xE500 | (0x00FF & x))     //UL
#define NVRAM_LID_GRP_UL1_CALIBRATION1(x)   (0xE600 | (0x00FF & x))
#define NVRAM_LID_GRP_UL1_CALIBRATION2(x)   (0xE700 | (0x00FF & x))
#define NVRAM_LID_GRP_UL1_CALIBRATION3(x)   (0xE800 | (0x00FF & x))
#define NVRAM_LID_GRP_L1(x)                 (0xE900 | (0x00FF & x))     //LA
#define NVRAM_LID_GRP_L1_RF(x)              (0xEA00 | (0x00FF & x))
#define NVRAM_LID_GRP_TD(x)                 (0xEB00 | (0x00FF & x))     //TD | TL
#define NVRAM_LID_GRP_EL1(x)                (0xEC00 | (0x00FF & x))     //EL
#define NVRAM_LID_GRP_EL1_CUST(x)           (0xED00 | (0x00FF & x))     //EA
#define NVRAM_LID_GRP_ERRC(x)               (0xEE00 | (0x00FF & x))     //ER | LTE
#define NVRAM_LID_GRP_L4(x)                 (0xEF00 | (0x00FF & x))     //LD
//big group start (size 256)

//==================================================
//system group start (size 256)
#define NVRAM_LID_GRP_INTERNAL(x)           (0xF000 | (0x00FF & x))     //MT | ST
#define NVRAM_LID_GRP_FACTORY(x)            (0xF100 | (0x00FF & x))     //MT
#define NVRAM_LID_GRP_CORE(x)               (0xF200 | (0x00FF & x))     //MT
#define NVRAM_LID_GRP_COMM_APP(x)           (0xF300 | (0x00FF & x))     //MT
#define NVRAM_LID_GRP_CUST(x)               (0xFF00 | (0x00FF & x))     //MT
//system group end (size 256)
#define NVRAM_LID_GRP_MAX                   (1<<16)


typedef enum
{
    NVRAM_POWERON_NORMAL,
    NVRAM_POWERON_CHARGER,
    NVRAM_POWERON_ALARM,
    NVRAM_POWERON_INVALID
} nvram_poweron_mode_enum;

typedef enum
{
    NVRAM_LOCK_DISABLE,
    NVRAM_LOCK_ENABLE,
    NVRAM_LOCK_TEMP_DISABLE,
    NVRAM_LOCK_OTP,
    NVRAM_LOCK_INVALID
} nvram_lock_state_enum;

typedef enum
{
    NVRAM_DEFAULT_VALUE_SUCCESS,
    NVRAM_DEFAULT_VALUE_FAIL,
    NVRAM_DEFAULT_VALUE_FF,
    NVRAM_DEFAULT_VALUE_ZERO,
    NVRAM_DEFAULT_VALUE_POINT,
    NVRAM_DEFAULT_VALUE_APPLICATION,

    NVRAM_DEFAULT_VALUE_MAX
} nvram_default_value_enum;

typedef enum
{
    NVRAM_RESET_ALL,
    NVRAM_RESET_USER,
    NVRAM_RESET_SYSTEM,
    NVRAM_RESET_CERTAIN,
    NVRAM_RESET_FACTORY,
    NVRAM_RESET_CUSTPACK,
    NVRAM_RESET_SECUPACK,
    NVRAM_RESET_BRANCH,
    NVRAM_RESET_PACKAGE,
    NVRAM_RESET_FAT,
    NVRAM_RESET_SDS,
    NVRAM_RESET_INVALID
} nvram_reset_category_enum;


typedef enum
{
    /* NVRAM generic error code */
    NVRAM_ERRNO_SUCCESS,
    NVRAM_IO_ERRNO_OK = NVRAM_ERRNO_SUCCESS,

    NVRAM_ERRNO_FAIL,
    NVRAM_ERRNO_INVALID,
    NVRAM_ERRNO_NOT_READY,

    /* NVRAM driver error code */
    NVRAM_IO_ERRNO_INVALID_LID,
    NVRAM_IO_ERRNO_INVALID_SIZE,
    NVRAM_IO_ERRNO_INVALID_RECORD,
    NVRAM_IO_ERRNO_EMPTY_RECORD,
    NVRAM_IO_ERRNO_STORAGE,
    NVRAM_IO_ERRNO_INIT,
    NVRAM_IO_ERRNO_CHK,
    NVRAM_IO_ERRNO_LOCKED,
    NVRAM_IO_ERRNO_WRONG_RINGLID,
    NVRAM_IO_ERRNO_ACCESS_DENIED,
    NVRAM_IO_ERRNO_DRV_BROKEN,
    NVRAM_IO_ERRNO_CONTENT_BROKEN,
    NVRAM_IO_ERRNO_SDS_FAIL,
    NVRAM_IO_ERRNO_SDS_MODE,

    /* OTP */
    NVRAM_ERRNO_OTP_UNKNOW,    /* FS_FLASH_OTP_UNKNOWERR -123 */
    NVRAM_ERRNO_OTP_OVERSCOPE, /* FS_FLASH_OTP_OVERSCOPE -124 */
    NVRAM_ERRNO_OTP_WRITEFAIL, /* FS_FLASH_OTP_WRITEFAIL -125 */
    NVRAM_ERRNO_OTP_LOCKED,    /* FS_FLASH_OTP_LOCK_ALREADY -125 */
    NVRAM_ERRNO_OTP_INVALID_INPUT,
    NVRAM_ERRNO_OTP_INVALID_RANGE,
    NVRAM_ERRNO_OTP_WRITETWICE,

    NVRAM_ERRNO_IMAGE_BROKEN,
    NVRAM_ERRNO_IMAGE_EMPTY,
    NVRAM_ERRNO_IMAGE_DATA_NOT_SYNC,
    NVRAM_ERRNO_IMAGE_DATA_NOT_EXIST,

    NVRAM_ERRNO_FOLDER_EXIST,

    NVRAM_ERRNO_SDS_READY,
    NVRAM_ERRNO_SDS_EMPTY,
	
    NVRAM_ERRNO_MSP_CHECK_ERROR,
    NVRAM_ERRNO_CONF_CHECK_ERROR,

    NVRAM_ERRNO_WRONG_API_USE,      //use normal API to access RAW data LID
    NVRAM_ERRNO_SIG_CHK_FAIL,
	
    NVRAM_ERRNO_MAX
} nvram_errno_enum;




typedef kal_uint16 nvram_lid_enum;
typedef kal_uint16 nvram_app_id_enum;
typedef kal_uint16 nvram_lid_core_enum;






typedef enum
{
    NVRAM_IMAGE_TYPE_EMPTY = 0x0000,
    NVRAM_IMAGE_TYPE_CALIBRAT = 0x0001,
    NVRAM_IMAGE_TYPE_IMEI = 0x0002
} nvram_image_type_enum;

#define NVRAM_IMAGE_TYPE_DEFAULT NVRAM_IMAGE_TYPE_CALIBRAT

typedef enum
{
    NVRAM_BIN_REGION_BACKUP,
    NVRAM_BIN_REGION_RESTORE,
} nvram_bin_region_access_enum;

typedef enum
{
    NVRAM_SDS_ACCESS_BACKUP,
    NVRAM_SDS_ACCESS_RESTORE,
} nvram_sds_access_enum;

typedef enum
{
    NVRAM_RESTORE_FALSE,
    NVRAM_RESTORE_TRUE
}nvram_restore_flag_enum;

typedef enum
{
    NVRAM_ACCESS_BY_MSG,
    NVRAM_ACCESS_BY_SECURE_API,
    NVRAM_ACCESS_BY_NORMAL_API,
}nvram_access_way_enum;

#endif /* NVRAM_ENUMS_H */
