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
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/
/*************************************************************************
 *
 * File Name:       valattune.h
 *
 * Description:  Tuning parameters
 *
  *
 ************************************************************************/
#ifndef _AT_TUNE_H 
#define _AT_TUNE_H 1

#include "valatdata.h"
/* ---------------------------------------------------------------------
 * Name: Data Port Present
 *
 * Description:
 *   This switch defines whether or not AppInt supports a Data Port
 *   interface.  Set this switch to KAL_FALSE for Browser-Only applications.
 *
 * Restrictions:
 *   KAL_FALSE, KAL_TRUE
 *
 * Default Value:
 *   KAL_TRUE
 *
 * Notes:
 *   When this switch is set to KAL_FALSE, the following files can be excluded
 *   from the build-set:
 *     - ai_ch.c
 *     - ai_cmd.c
 *     - ai_dh.c
 *     - ai_dr.c
 *     - ai_parse.c
 *     - atparse.c
 *     - atpparse.c
 *     - iqmgr.c
 *     - isolib.c
 */
#define AT_DPD_PRESENT 1

/* ---------------------------------------------------------------------
 * Name: V.42bis Compression Capabilities: <direction>
 *
 * Description:
 *   This switch defines the capabilities of the V.42bis software
 *   provisioned in the MT.  AppInt uses this switch to determine the
 *   valid range for the <direction> parameter in the +CDS command.
 *
 * Restrictions:
 *  0: No V.42bis provisioned.
 *  1: V.42bis available in the reverse direction only.
 *  2: V.42bis available in the forward direction only.
 *  3: V.42bis available in both directions.
 *   
 * Default Value:
 *   0
 */
#define AT_CMP_DIRECTION 0

/* ---------------------------------------------------------------------
 * Name: V.42bis Compression Capabilities: <max_dict>
 *
 * Description:
 *   This switch defines the maximum dictionary size supported the V.42bis
 *   software provisioned in the MT.  AppInt uses this switch to determine
 *   the valid range for the <max_dict> parameter in the +CDS command.
 *
 * Restrictions:
 *   512 - 65535
 *   
 * Default Value:
 *   2048
 */
#define AT_CMP_MAX_DICT 2048


/* ---------------------------------------------------------------------
 * Name: V.42bis Compression Capabilities: <max_string>
 *
 * Description:
 *   This switch defines the maximum string size supported the V.42bis
 *   software provisioned in the MT.  AppInt uses this switch to determine
 *   the valid range for the <max_string> parameter in the +CDS command.
 *
 * Restrictions:
 *   6 - 250
 *   
 * Default Value:
 *   6
 */
#define AT_CMP_MAX_STRING 6


/* ---------------------------------------------------------------------
 * Name: Data Port Driver Capabilities: autobaud rates
 *
 * Description:
 *   This switch defines the bit rates which may be auto-detected by the
 *   Data Port Driver hardware.  These rates are to be used in Command
 *   state and for Async Data calls only.  AppInt uses this switch to
 *   determine the valid range for the <auto-detectable rates> parameter
 *   in the +IPR command.
 *
 * Restrictions:
 *   Any number of entries from the following list:
 *     BR_300
 *     BR_1200
 *     BR_2400
 *     BR_4800
 *     BR_9600
 *     BR_19200
 *     BR_38400
 *     BR_57600
 *     BR_115200
 *   or: BR_NONE.
 *
 *   The same bit rate may not be specified in both AT_DPD_AUTOBAUD_RATES and
 *   AT_DPD_FIXED_RATES.
 *
 * Default Value:
 *    (BR_300 + BR_1200 + BR_2400 + BR_4800 + BR_9600 + 
 *     BR_19200 + BR_38400 + BR_57600 + BR_115200)
 */
/*
#define AT_DPD_AUTOBAUD_RATES (BR_300   + \
                               BR_1200  + \
                               BR_2400  + \
                               BR_4800  + \
                               BR_9600  + \
                               BR_19200 + \
                               BR_38400 + \
                               BR_57600 + \
                               BR_115200)

*/

#define AT_DPD_AUTOBAUD_RATES BR_NONE
/* ---------------------------------------------------------------------
 * Name: Data Port Driver Capabilities: fixed baud rates
 *
 * Description:
 *   This switch defines the bit rates supported by the Data Port Driver
 *   hardware, but which may not be auto-detected.
 *   These rates are to be used in Command state and for Async Data calls only.
 *   AppInt uses this switch to determine the valid range for the
 *   <fixed-only rates> parameter in the +IPR command.
 *
 * Restrictions:
 *   Any number of entries from the following list:
 *     BR_300
 *     BR_1200
 *     BR_2400
 *     BR_4800
 *     BR_9600
 *     BR_19200
 *     BR_38400
 *     BR_57600
 *     BR_115200
 *   or: BR_NONE
 *
 *   The same bit rate may not be specified in both AT_DPD_AUTOBAUD_RATES and
 *   AT_DPD_FIXED_RATES.
 *
 * Default Value:
 *   BR_NONE
 */
#define AT_DPD_FIXED_RATES (BR_19200 + \
                            BR_115200+ \
                            BR_230400 )


/* ---------------------------------------------------------------------
 * Name: Local AT-Parameter Default Value: +IPR
 *
 * Description:
 *   This switch defines the default value to be used for the "Fixed
 *   DTE Rate" parameter.
 *   This value is used to reset the parameter value when a ATZ or AT&F
 *   command is processed and AT_DPD_AUTOBAUD_RATES is BR_NONE.  Otherwise,
 *   a value of zero is used.
 *
 * Restrictions:
 *  Any value from the list defined for AT_DPD_FIXED_RATES.
 *   
 * Default Value:
 *   BR_230400
 */
#define AT_DEFAULT_IPR BR_230400


/* ---------------------------------------------------------------------
 * Name: Data Port Driver Capabilities: Maximum FAX bit rate
 *
 * Description:
 *   This switch defines the maximum bit rate which the Data Port Driver
 *   can use during FAX calls.  AppInt uses this switch to determine the
 *   valid range of values for the +FPR command.
 *
 * Restrictions:
 *   Any one of the following values:
 *     FR_2400
 *     FR_4800
 *     FR_9600
 *     FR_19200
 *     FR_38400
 *     FR_57600
 *     FR_115200
 *
 * Default Value:
 *   FR_19200
 */
#define AT_DPD_MAX_FPR FR_19200


/* ---------------------------------------------------------------------
 * Name: Data Port Driver Capabilities: Fax transmit buffer size.
 *
 * Description:
 *   This switch defines the size of the buffer used by the Data Port Driver
 *   to store data in the reverse direction during FAX calls.  AppInt uses
 *   this switch when reporting information for the <tbs> parameter in the
 *   +FBS? command.
 *
 * Restrictions:
 *   0 - 65535
 *   
 * Default Value:
 *   3600
 */
#define AT_DPD_FBS_TX 3600

/* ---------------------------------------------------------------------
 * Name: Data Port Driver capabilities: Fax receive buffer size.
 *
 * Description:
 *   This switch defines the size of the buffer used by the Data Port Driver
 *   to store data received in the forward direction during FAX calls.
 *   AppInt uses this switch when reporting information for the <rbs>
 *   parameter in the +FBS? command.
 *
 * Restrictions:
 *   3600 - 65535
 *   
 * Default Value:
 *   3600
 */
#define AT_DPD_FBS_RX 3600

/* ---------------------------------------------------------------------
 * Name: Local AT-Parameter Default Value: +CDS.<max_dict>
 *
 * Description:
 *   This switch defines the default value to be used for the V.42bis
 *   data compression: <max_dict> parameter to be used on the Um interface.
 *   This value is used to reset the parameter value when a ATZ or AT&F
 *   command is processed.
 *
 * Restrictions:
 *   512 - AT_CMP_MAX_DICT
 *   
 * Default Value:
 *   AT_CMP_MAX_DICT
 */
#define AT_DEFAULT_CDS_MAX_DICT AT_CMP_MAX_DICT


/* ---------------------------------------------------------------------
 * Name: Local AT-Parameter Default Value: +CPS
 *
 * Description:
 *   This switch defines the default value to be used for the
 *   Packet Data Service Option parameter.
 *   This value is used to reset the parameter value when a ATZ or AT&F
 *   command is processed.
 *
 * Restrictions:
 *    7, 8, 15, 16, 22, 23, 24, 25, 26, 27, 28, 29,
 *    4103, 4104
 *   
 * Default Value:
 *   4103
 */
#define AT_DEFAULT_CPS  59

/* ---------------------------------------------------------------------
 * Name: Local AT-Parameter Default Value: +CMUX
 *
 * Description:
 *   This switch defines the default value to be used for the "Select
 *   Multiplex Option" parameter.
 *   This value is used to reset the parameter value when a ATZ or AT&F
 *   command is processed.
 *
 * Restrictions:
 *   1 - 2
 *   
 * Default Value:
 *   2
 */
#define AT_DEFAULT_CMUX 2

/* ---------------------------------------------------------------------
 * Name: Local AT-Parameter Default Value: +FPR
 *
 * Description:
 *   This switch defines the default value to be used for the "Serial
 *   Port Rate Control" parameter.
 *   This value is used to reset the parameter value when a ATZ or AT&F
 *   command is processed and +FCLASS = 2.0.
 *
 * Restrictions:
 *  Any value from the following list up to the value specified by
 *  AT_DPD_MAX_FPR:
 *   FR_AUTOBAUD,
 *   FR_19200
 *   
 * Default Value:
 *   FR_AUTOBAUD
 */
#define AT_DEFAULT_FPR FR_19200

/* ---------------------------------------------------------------------
 * Name: NSPE Capabilities: Maximum TX Request Size
 *
 * Description:
 *   This switch defines the maximum size (in bytes) which AppInt may
 *   specify in a nspeAiTxReq call.  AppInt requires this parameter to
 *   be at least 98 bytes so that the longest EIA-617 in-band command
 *   may be transmitted in a single TxReq.  The upper bound for this
 *   parameter is determined by the MBUF size and high water mark settings
 *   configured for NSPE.
 *
 * Restrictions:
 *   98 - 65535
 *   
 * Default Value:
 *   1024
 */
#define AT_NSPE_MAX_TXREQ_LEN 1024


/* ---------------------------------------------------------------------
 * Name: Data Transfer Behavior
 *
 * Description:
 *   This switch defines the maximum amount of time (in msec) AppInt will
 *   allow reverse channel User Data to sit in the V.42bis compressor or
 *   the TCP layer of NSPE.  When this timer expires, AppInt will flush the
 *   compressor (if compression is active and if there could be partially
 *   matched User Data strings in the compressor) and push data out of the
 *   TCP layer.
 *
 * Restrictions:
 *   1 - 65535
 *
 * Default Value:
 *   100
 */
#define AT_STALE_DATA_TMO 100


/* ---------------------------------------------------------------------
 * Name: AppInt Capabilities: Maximum AT-command line length
 *
 * Description:
 *   This switch defines the maximum size of an AT-command line in
 *   COMMAND state as well as the largest single AT-command which may be
 *   reflected by the IWF in ONLINE state.
 *
 *   For COMMAND state, this size includes the initial "AT" and trailing
 *   <s3><s4> characters.
 *
 *   The longest single AT-command in the IS-707 repertoire (AT+FNS=) requires
 *   280 characters.  The second longest command (AT+CFG=) requires 258
 *   characters.  AppInt allows the data from repetitive AT+FNS= and AT+CFG=
 *   commands to be appended to the existing parameter data.  Therefore, with
 *   a cooperating TE2, this tuning parameter may be safely reduced to the
 *   maximum length of the third longest single AT-command: AT+MA=
 *   (48 characters).
 *
 * Restrictions:
 *   48 - 65535
 *
 * Default Value:
 *   280
 */
#ifdef  SYS_OPTION_ENHANCEDAT
#define AT_MAX_AT_CMD_LEN       ATC_ENHANCED_AT_CMD_LEN
#else
#define AT_MAX_AT_CMD_LEN 280
#endif


/* ---------------------------------------------------------------------
 * Name: Compression Negotiation Timeout
 *
 * Description:
 *   This switch defines the amount of time (in msec) AppInt will wait for
 *   the Um data compression negotiation procedure to complete.
 *   This timer is activated only if the +CDS.<compressionNegotiation>
 *   parameter is enabled.
 *   If the timer expires and the data compression specified by the other
 *   +CDS parameters has not been obtained, AppInt will disconnect the call.
 *
 * Restrictions:
 *   1 - 65535
 *
 * Default Value:
 *   5000
 */
#define AT_CN_TMO 5000

/* ---------------------------------------------------------------------
 * Name: Allow Invalid Body Characters
 *
 * Description:
 *   Setting this switch to KAL_TRUE disables EIA-617 extended command body
 *   character validation. This overcomes a bug in some IWF implementations.
 *
 * Restrictions:
 *   KAL_FALSE, KAL_TRUE
 *
 * Default Value:
 *   KAL_TRUE
 */
#define AT_ALLOW_INVALID_BODY_CHARS KAL_TRUE

/* ---------------------------------------------------------------------
 * Name: Allow Invalid Body Characters
 *
 * Description:
 *   This switch determines whether or not AppInt will upload an ATM1
 *   (speaker-on-until-connect) command to the IWF.
 *   This switch should only be set to KAL_TRUE if the MT software supports
 *   the multiply connected service option configuration and service
 *   option switching functions described in IS-707-A.4, section 4.1(b)
 *
 * Restrictions:
 *   KAL_FALSE, KAL_TRUE
 *
 * Default Value:
 *   KAL_FALSE
 */
#define AT_UPLOAD_ATM KAL_FALSE

/* ---------------------------------------------------------------------
 * Name: Packet Data Service Options
 *
 * Description:
 *   These switches define the values which AppInt will accept for
 *   the +CPS AT-command.
 *
 * Restrictions:
 *   KAL_FALSE, KAL_TRUE
 *
 * Default Value:
 *   AT_CPS_SO_07:   KAL_TRUE
 *   AT_CPS_SO_08:   KAL_TRUE
 *   AT_CPS_SO_15:   KAL_TRUE
 *   AT_CPS_SO_16:   KAL_TRUE
 *
 *   AT_CPS_SO_22:   KAL_FALSE
 *   AT_CPS_SO_23:   KAL_FALSE
 *   AT_CPS_SO_24:   KAL_FALSE
 *   AT_CPS_SO_25:   KAL_FALSE
 *   AT_CPS_SO_26:   KAL_FALSE
 *   AT_CPS_SO_27:   KAL_FALSE
 *   AT_CPS_SO_28:   KAL_FALSE
 *   AT_CPS_SO_29:   KAL_FALSE
 *
 *   AT_CPS_SO_4103: KAL_TRUE
 *   AT_CPS_SO_4104: KAL_TRUE
 */
#define AT_CPS_SO_07 KAL_TRUE
#define AT_CPS_SO_08 KAL_TRUE
#define AT_CPS_SO_15 KAL_TRUE
#define AT_CPS_SO_16 KAL_TRUE

#define AT_CPS_SO_22 KAL_TRUE
#define AT_CPS_SO_23 KAL_TRUE
#define AT_CPS_SO_24 KAL_TRUE
#define AT_CPS_SO_25 KAL_TRUE

#define AT_CPS_SO_26 KAL_FALSE
#define AT_CPS_SO_27 KAL_FALSE
#define AT_CPS_SO_28 KAL_FALSE
#define AT_CPS_SO_29 KAL_FALSE

#define AT_CPS_SO_33   KAL_TRUE
#define AT_CPS_SO_59   KAL_TRUE
#define AT_CPS_SO_69   KAL_TRUE

#define AT_CPS_SO_4103 KAL_TRUE
#define AT_CPS_SO_4104 KAL_TRUE


/* ---------------------------------------------------------------------
 * Name: Maximum Browser Digits
 *
 * Description:
 *   This switch defines the maximum string length which can be returned by
 *   the cfgAiGetBrowserDigits function, excluding the NULL terminator.
 *
 * Restrictions:
 *   1 - 255
 *
 * Default Value:
 *   20
 */
#define AT_MAX_BROWSER_DIGITS 20

#ifdef MTK_CBP
/* ---------------------------------------------------------------------
 * Name: SYS ACTIVED BAND 
 *
 * Default Value:
 *   VAL_SYS_BAND_CLASS_INVALID_MASK 0XFFFF FFFF
 */

#define AT_DEFAULT_SYS_ACTIVED_BAND_CLASS_MASK 0XFFFFFFFF
#endif

#endif /* _AI_TUNE_H */
