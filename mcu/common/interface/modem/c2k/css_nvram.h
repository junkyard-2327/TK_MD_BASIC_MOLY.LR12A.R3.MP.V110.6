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
#ifndef _CSS_NVRAM_H_
#define _CSS_NVRAM_H_ 1

/*****************************************************************************
 * Includes
 ****************************************************************************/
#include "kal_general_types.h"

#include "csscust.h"

/*****************************/
/*  CSS Nvram  definitions start         */
/*****************************/
#define PRL_MAX_SIZE        16384
#define ERI_MAX_SIZE        4096  /* Assuming 30 ERI Table entries */

#define MAX_MANUAL_AVOID_1XSYS          6
#define MAX_ERI_HOME_VALUES             12
#define MAX_ERI_INTERNATIONAL_VALUES    30

#define DBM_CSS_1X_SIZE   256  /* storage for CSS 1X parameters */
#define DBM_CSS_DO_SIZE   256  /* storage for CSS DO parameters */
#define DBM_CSS_MISC_SIZE 128  /* storage for CSS Misc parameters */

#ifdef MTK_DEV_C2K_IRAT
typedef struct
{
    kal_bool    b1xChnlLocked;
    kal_uint16  rttChnl;
    kal_bool    bDoChnlLocked;
    kal_uint16  doChnl;
} cssChannleLockInfo;
#endif

typedef enum {
   CSS_1X_T_MAPE_HOME_AVOIDANCE,
   CSS_1X_T_REDIR_AVOIDANCE,
   CSS_1X_NUM_T_AVOIDANCE,
   CSS_1X_NUM_T_AVOIDANCE_MAX = 6  /* enum shall not exceed this value */
} Css1xAvoidanceTimerTypeT;

typedef enum {
   CSS_1X_T_BSR_1,
   CSS_1X_T_BSR_2,
   CSS_1X_T_BSR_NEWSYS,
   CSS_1X_T_BSR_REDIR,
   CSS_1X_T_BSR_CALL,
#ifdef MTK_CBP
   CSS_1X_T_BSR_HOLD,    /* Old MPSS_ADDITIONAL_TIME timer.*/
                         /* For Sprint,this timer will be started when BSR is expired and reselection is not possible due to HDR activity.*/
                         /*When the timer expires,UE looks for more preferred CDMA systems.*/
#endif
   CSS_1X_NUM_T_BSR,
   CSS_1X_NUM_T_BSR_MAX = 10 /* enum shall not exceed this value */
} Css1xBsrTimerTypeT;

typedef enum {
   CSS_DO_T_BSR_1,
   CSS_DO_T_BSR_2,
   CSS_DO_T_BSR_HYBRID,
   CSS_DO_T_BSR_REDIR,
   CSS_DO_T_BSR_CALL,
   CSS_DO_T_BSR_HOLD,
   CSS_DO_NUM_T_BSR,
   CSS_DO_NUM_T_BSR_MAX = 10 /* enum shall not exceed this value */
} CssDOBsrTimerTypeT;

typedef enum {
   CSS_DO_T_SYS_LOST_AVOIDANCE,
   CSS_DO_T_REDIR_AVOIDANCE,
   CSS_DO_NUM_T_AVOIDANCE,
   CSS_DO_NUM_T_AVOIDANCE_MAX = 12  /* enum shall not exceed this value */
} CssDOAvoidanceTimerTypeT;

typedef struct
{
    kal_bool    valid;
    kal_uint16  sid;
    kal_uint16  nid;
} cssSidNid;

typedef struct
{
    kal_uint16      mpssPilotStrengthThresh;
    kal_uint32      tBsr[CSS_1X_NUM_T_BSR];
    kal_uint32      reservedTBsr[CSS_1X_NUM_T_BSR_MAX-CSS_1X_NUM_T_BSR]; /* reserved for possible expansion of TBsr; delete once max is reached */
    kal_uint32      tAvoidance[CSS_1X_NUM_T_AVOIDANCE];
    kal_uint32      reservedTAvoid[CSS_1X_NUM_T_AVOIDANCE_MAX-CSS_1X_NUM_T_AVOIDANCE]; /* reserved for possible expansion of TAvoidance; delete once max is reached */
    kal_uint16      manualAvoid1XSys[MAX_MANUAL_AVOID_1XSYS];
    kal_uint32      tPsDelay;
    kal_uint32      tEmergencySysLostScan;
    cssSidNid       operSidNid; /* Operator SID/NID of the first MRU entry */
}  css1xDbmParameters;

typedef struct
{
    kal_uint16   mpssPilotStrengthThresh; /* unused for now */
    kal_uint32   tBsr[CSS_DO_NUM_T_BSR];
    kal_uint32   reservedTBsr[CSS_DO_NUM_T_BSR_MAX-CSS_DO_NUM_T_BSR]; /* reserved for possible expansion of TBsr; delete once max is reached */
    kal_uint32   tAvoidance[CSS_DO_NUM_T_AVOIDANCE];     /* unused for now */
    kal_uint32   reservedTAvoid[CSS_DO_NUM_T_AVOIDANCE_MAX-CSS_DO_NUM_T_AVOIDANCE]; /* reserved for possible expansion of TAvoidance; delete once max is reached */
}  cssDODbmParameters;

typedef struct
{
#ifdef MTK_DEV_C2K_IRAT
    cssChannleLockInfo   chnlInfo;
#endif
    kal_uint16      roamIndForNonPrlSysButHomeInNam;
    kal_uint8       homeEriValNum;
    kal_uint16      homeEriVals[MAX_ERI_HOME_VALUES];
    kal_uint8       intlEriValNum;  /* international */
    kal_uint16      intlEriVals[MAX_ERI_INTERNATIONAL_VALUES];
}  cssMiscDbmParameters;

/* do not modify segment definitions below. To add new parameters, use structures above */
typedef struct
{
    css1xDbmParameters data;
    kal_uint16             checksum;  /* checksum will be calculated on the data only. */
    kal_uint8              padding[DBM_CSS_1X_SIZE - sizeof(kal_uint16) - sizeof(css1xDbmParameters)];
}  css1xDbmSegment;

typedef struct
{
    cssDODbmParameters data;
    kal_uint16             checksum;  /* checksum will be calculated on the data only. */
    kal_uint8              padding[DBM_CSS_DO_SIZE - sizeof(kal_uint16) - sizeof(cssDODbmParameters)];
}  cssDODbmSegment;

typedef struct
{
    kal_uint32           sbp_id;
    cssMiscDbmParameters data;
    kal_uint16               checksum;  /* checksum will be calculated on the data only. */
    kal_uint8                padding[DBM_CSS_MISC_SIZE - sizeof(kal_uint16) - sizeof(cssMiscDbmParameters)];
}  cssMiscDbmSegment;

typedef struct
{
    SysCdmaBandT  CdmaBand[MAX_MRU_RECORDS];
    kal_uint16    FreqChan[MAX_MRU_RECORDS];
}  CssDbmDataT;
#endif
