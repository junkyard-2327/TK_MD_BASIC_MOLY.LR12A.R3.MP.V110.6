/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2014
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
 * rmmi_mbms.h
 *
 * Project:
 * --------
 * UMOLY
 *
 * Description:
 * ------------
 * eMBMS related AT commands handling functions.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *----------------------------------------------------------------------------
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
 *
 * removed!
 * removed!
 * removed!
 *
 *
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/****************************************************************************/
/*! @file rmmi_mbms.h
    @author Stan Chen
    @date 11 Jul 2014

    @brief eMBMS related AT commands handling functions.

    This header defines the prototype of processing functions, including the
    handler of incoming AT commands from TE and outgoing responses to TE.
    AT commands are decoded and encoded in these functions into spec defined
    format.

    eMBMS related AT commands are following:

    AT+EMSEN, AT+EMSRV, AT+EMTSI, AT+EMSLU, AT+EMPRI, AT+EMSAIL, AT+EMSESS,
    AT+EMFRQ, AT+EMBIND

    The handler functions SHOULD be defined in "at_cmd.def".

    @see at_cmd.def
*/
/****************************************************************************/

#ifndef _RMMI_MBMS_H
#define _RMMI_MBMS_H

/****************************************************************************/

#include "rmmi_context.h"
#include "mbmsal_defs.h"

/****************************************************************************/
/*! @brief The defualt handlers for all mbms related at command.

    @param[in] source_string_ptr a pointer to rmmi string struct.
    @since UMOLY
*/
/****************************************************************************/
extern void rmmi_mbms_hdlr( rmmi_string_struct *source_string_ptr );

/****************************************************************************/
/*! @brief AT+EMSEN command handler function.

    Description:        This command is used to enable/disable eMBMS services
                        in the modem. By default eMBMS services are disabled,
                        unless explicitly enabled by this AT command.
                        When eMBMS services are enabled, this will cause the
                        modem to start receiving MBMS SIBs and  MBMS area
                        configuration information via the MCCH channel,
                        if available.
    Execution command:  +EMSEN=<enable>
    Execution command
    response:           OK
    Read command:       +EMSEN?
    Read command
    response:           +EMSEN=<enable>
                        OK
    Test command:       +EMSEN=?
    Test command
    response:           +EMSEN: (0,1)
                        OK
    Parameter:
    <enable>:           Enable/disable eMBMS services in modem
                        0: Disable
                        1: Enable

    @param[in] source_string_ptr a pointer to rmmi string struct.
    @since UMOLY
*/
/****************************************************************************/
INLINE_MODIFIER INLINE void rmmi_mbms_emsen_hdlr( rmmi_string_struct *source_string_ptr )
{
    rmmi_mbms_hdlr( source_string_ptr );
}

/****************************************************************************/
/*! @brief AT+EMSRV command handler function.

    Description:        This command is used to read whether we are currently
                        in an area which supports eMBMS on LTE.
                        It is also used to enable/disable the unsolicited
                        event shown below indicating any changes in eMBMS
                        service coverage status.
    Set command:        +EMSRV=<enable>
    Set command
    response:           OK
    Read command:       +EMSRV?
    Read command
    response:           +EMSRV: <enable>,<srv>[,<num_area_ids>,<area_id1>
                        [,<area_id2>[¡K]]]
                        OK
    Test command:       +EMSRV=?
    Test command
    response:           +EMSRV: (0,1)
                        OK
    Unsolicited result
    code:               +EMSRV: <srv>[,<num_area_ids>,<area_id1>
                        [,<area_id2>[¡K]]]
    Parameter:
    <enable>:           Enable/disable eMBMS services in modem
                        0: Disable
                        1: Enable
    <srv>:              eMBMS service status
                        0:  No LTE service
                        1:  Only Unicast available (LTE coverage)
                        2: 	In eMBMS supporting area (MBSFN)(receiving
                            Mbsfn-SubframeConfigList in SIB-2 and
                            SIB-13)
                        3: 	E911 call is on-going (VzW requirement)
                        4: 	In SRLTE mode (VzW requirement)
                        5: 	In flight mode
    <num_area_ids>:     1-8: Number of MBSFN area IDs available
    <area_id>:          0-255: MBSFN area ID

    @param[in] source_string_ptr a pointer to rmmi string struct.
    @since UMOLY
*/
/****************************************************************************/
INLINE_MODIFIER INLINE void rmmi_mbms_emsrv_hdlr( rmmi_string_struct *source_string_ptr )
{
    rmmi_mbms_hdlr( source_string_ptr );
}

/****************************************************************************/
/*! @brief AT+EMTSI command handler function.

    Description:        This command is used to read the latest timestamp
                        information which is received on SIB-16 on LTE with
                        any current time offset added.
                        As this command can be entered at any time, it must
                        always respond with the current time as calculated in
                        the modem from the last SIB-16 it received.
                        In order to do this, the modem must calculate the
                        current time offset from the point at which the last
                        SIB-16 was received.  The modem can calculate the
                        offset using the system tick.  Therefore the time
                        reported by this command is the last SIB-16 time plus
                        the current time offset within the modem.
    Execution command:  +EMTSI
    Execution command
    response:           +EMTSI: <dst>,<ls>,<lto>,<ut>
                        OK
    Parameter:
    <dst>:              Daylight saving time setting
                        0: No daylight saving
                        1: Daylight saving
    <ls>:               Number of leap seconds represented as integer value
    <lto>:              Local time offset
                        Offset between Universal Time and local time in
                        units of 15 minutes.
    <ut>:               Universal time
                        Current time including current time offset within the
                        modem.  Integer value represented as number 10ms units
                        since 00:00:00 on Gregorian calendar date 1 January
                        1900 (including leap seconds and other additions prior
                        to 1972).

    @param[in] source_string_ptr a pointer to rmmi string struct.
    @since UMOLY
*/
/****************************************************************************/
INLINE_MODIFIER INLINE void rmmi_mbms_emtsi_hdlr( rmmi_string_struct *source_string_ptr )
{
    rmmi_mbms_hdlr( source_string_ptr );
}

/****************************************************************************/
/*! @brief AT+EMSLU command handler function.

    Description:        This command is used to read the latest information
                        regarding the MBMS sessions available in the current
                        MBSFN. The command is also used to enable/disable the
                        generation of the session list update information
                        unsolicited event.
    Set command:        +EMSLU=<enable>
    Set command
    response:           OK
    Read command:       +EMSLU?
    Read command
    response:           +EMSLU: <enable>
                        +EMSLUI: <num_sessions>[,<x>,<tmgix>,[<session_idx>],
                        <statusx>]
                        [¡K]
                        OK
    Test command:       +EMSLU=?
    Test command
    response:           +EMSLU: (0,1)
                        OK
    Unsolicited result
    code:               +EMSLUI: <num_sessions>[,<x>,<tmgix>,[<session_idx>],
                        <statusx>]
                        [¡K]
    Parameter:
    <enable>:           Enable/disable eMBMS Session List update information
                        unsolicited indication (+EMSLU)
                        0: Disable
                        1: Enable
    <num_sessions>:     Number of TMGIs in the list.
    <x>:                Index of TMGIs in the list.
    <tmgix>:            TMGI (Temporary Mobile Group Identity) in position x
                        in the list.  It is represented in the form of a
                        string of 11 or 12 hex digits.
    <session_idx>:      Session ID in position x in the list.
                        It is represented in the form of a string of 2 hex
                        digits. (optional)
    <statusx>:          Status of tmgix represented as an integer
                        0: TMGI available (TMGS present in MCCH)
                        1: TMGI activated (modem receiving MTCH data)

    @param[in] source_string_ptr a pointer to rmmi string struct.
    @since UMOLY
*/
/****************************************************************************/
INLINE_MODIFIER INLINE void rmmi_mbms_emslu_hdlr( rmmi_string_struct *source_string_ptr )
{
    rmmi_mbms_hdlr( source_string_ptr );
}

/****************************************************************************/
/*! @brief AT+EMPRI command handler function.

    Release:            R11
    Description:        This command is used to enable/disable eMBMS services
                        priority in the modem.  It is possible for a UE to
                        prioritize reception of MBMS frequencies above
                        reception of unicast bearers.  Default setting is that
                        MBMS is not prioritized.  The network will use this
                        information to prioritize unicast or eMBMS downlink
                        data resources with the UE.
                        This setting is not saved in NVRAM
    Set command:        +EMPRI=<enable>
    Set command
    response:           OK
    Read command:       +EMPRI?
    Read command
    response:           +EMPRI: <pri>
                        OK
    Test command:       +EMPRI=?
    Test command
    response:           +EMPRI: (0,1)
                        OK
    Parameter:
    <pri>:              MBMS priority setting:
                        0: Unicast
                        1: MBMS

    @param[in] source_string_ptr a pointer to rmmi string struct.
    @since UMOLY
*/
/****************************************************************************/
INLINE_MODIFIER INLINE void rmmi_mbms_empri_hdlr( rmmi_string_struct *source_string_ptr )
{
    rmmi_mbms_hdlr( source_string_ptr );
}

/****************************************************************************/
/*! @brief AT+EMSAIL command handler function.

    Release:            11
    Description:        This command is used to read the latest SAI (Service
                        Area Identifier) lists received by the modem for the
                        current and neighboring frequencies on SIB-15.
                        The command is also used to enable/disable the
                        generation of the SAI list unsolicited events
                        +EMSAILCF:  The intra frequency list and the MBMS SAI
                                    list
                        +EMSAILNF:  List of neighbouring frequencies and their
                                    bands, if any, that provide MBMS services,
                                    with their corresponding MBMS SAI list
    Set command:        +EMSAIL=<enable>
    Set command
    response:           OK
    Read command:       +EMSAIL?
    Read command
    response:           +EMSAIL: <enable>
                        +EMSAILCF: <num_intra_freq>[,<freq_1>[,<freq_2>[¡K]],
                        <num_sais>,<sai_1>[,<sai_2>[¡K]]]
                        +EMSAILNF: <num_nf>[,<x>,<nfx>[,<num_bands_nfx>[,<band
                        1_nfx>[,<band2_nfx>[,<¡K>]]]]][,<num_sais_nfx>[,<sai_1
                        _nfx>[,<sai_2_nfx>[,<¡K>]]]]
                        [¡K]
                        OK
    Test command:       +EMSAIL=?
    Test command
    response:           +EMSAIL: (0,1)
                        OK
    Unsolicited result
    code:               +EMSAILCF: <num_intra_freq>[,<freq_1>[,<freq_2>[¡K]],
                        <num_sais>,<sai_1>[,<sai_2>[¡K]]]
                        +EMSAILNF: <num_nf>[,<x>,<nfx>[,<num_bands_nfx>[,<band
                        1_nfx>[,<band2_nfx>[,<¡K>]]]]][,<num_sais_nfx>[,<sai_1
                        _nfx>[,<sai_2_nfx>[,<¡K>]]]]
                        [¡K]
    Parameter:
    <enable>:           Enable/disable eMBMS SAI List unsolicited indication
                        0: Disable
                        1: Enable
    <num_intra_freq>:   0-2: Number of intra frequencies (P-cell and S-cell).
    <freq_x>:           0-262143: Intra frequency 'x'
    <num_sais>:         1-64: Number of SAIs in the list
    <sai_x>:            0-65535: SAI in position 'x' in the SAI list.
    <num_nf>:           1-8: Number of neighboring frequencies.
    <x>:                1-8: Index of neighboring frequencies.
    <nfx>:              0-262143: Neighboring frequency 'x'
                        In the form of an EARFCN.
    <num_bands_nfx>:    0-8: Number of neighboring frequency band in the list
                        for neighbor frequency 'x'.
    <bandy_nfx>:        0-256: Neighboring frequency band 'x' associated with
                        the neighboring frequency 'x' (nfx). Note that the
                        frequency band may not be present if the frequency is
                        in the same band as the current frequency.
    <num_sais_nfx>:     1-64: Number of SAIs in the list for neighbor
                        frequency 'x'.
    <sai_y_nfx>:        0-65535: SAI in position 'y' in the SAI list for
                        neighbor frequency 'x'.

    @param[in] source_string_ptr a pointer to rmmi string struct.
    @since UMOLY
*/
/****************************************************************************/
INLINE_MODIFIER INLINE void rmmi_mbms_emsail_hdlr( rmmi_string_struct *source_string_ptr )
{
    rmmi_mbms_hdlr( source_string_ptr );
}

/****************************************************************************/
/*! @brief AT+EMSESS command handler function.

    Description:        This command is used to start and stop an eMBMS
                        session.  The TMGI, SAI list and frequency list is
                        passed to the modem in this command when a session
                        start is requested.  The modem must then perform all
                        necessary activities in order to starts the MBMS
                        session and activate the L4 U-plane for reception of
                        the IP multicast data.  When a session activation is
                        initiated, an OK response is generated immediately.
                        Then, during session activation and deactivation the
                        following unsolicited indication shows the status of
                        the session.
    Execution command:  +EMSESS=<act>,<tmgi>,[<session_id>],[<area_id>][,<num_
                        sais>,[sai_1>[,<sai_2>[¡K]]][,<num_freq>[,<freq_1>[,<f
                        req_2>[¡K]]]
    Execution command
    response:           OK
    Read command:       +EMSESS?
    Read command
    response:           +EMSESS: <num_sessions>,<x>,<tmgi>,[<session_id>],
                        <status>
                        [<CR><LF>+EMSESS: <tmgi>,[<session_id>],<status>]
                        [¡K]
                        OK
    Unsolicited result
    code:               +EMSESS: <num_sessions>,<x>,<tmgi>,[<session_id>],
                        <status>[,<cause>[,<sub_cause>]]
    Parameter:
    <num_sessions>:     Number of MBMS sessions
    <x>:                Index of MBMS session
    <act>:              Activate/deactivate session.
                        0: Deactivate session
                        1: Activate session
    <tmgi>:             TMGI (Temporary Mobile Group Identity) of the session
                        activated/deactivated.  It is represented in the form
                        of a string of 11 or 12 hex digits.
    <session_id>:       Session ID of the session activated/deactivated.
                        It is respresented in the form of a string of 2 hex
                        digits.(optional)
    <area_id>:          0-255: MBSFN area ID.
    <num_sais>:         1-64: Number of SAIs in the list.
    <sai_x>:            0-65535: SAI in position 'x' in the SAI list
    <num_freq>:         1-5: Number of frequencies in frequency list
    <freq_x>:           0-262143: Frequency 'x'.  In the form of an EARFCN
                        value of range 0 to 262143.
    <status>:           Status of the current eMBMS session
                        0: Session deactivated/lost/failed
                        1: Session activated
    <cause>:            Cause for session deactivation:
                        0:  Normal deactivation (requested by
                            AT+EMSESS=0)
                        1:  Session activation failed
                        2:  Moved out of MBMS service area that provides
                            the session
                        3:  Session lost due to loss of eMBMS coverage
                        4:  Session lost due to loss of LTE coverage/LTE
                            deactivation (e.g. CSFB triggered, or
                            reception lost)
    <sub_cause>:        Sub-cause for activating session failed (cause=1):
                        0:	Reserved
                        1: 	Unknown error
                        2:	The requested session is already active
                        3:	MBMS service is disabled
                        4:	Missing control info. Some or none of the
                            MCCHs can be acquired
                        5:	Missing TMGI. All MCCHs were read and TMGI
                            of interest cannot be found
                        6:	Out of MBMS coverage
                        7:	Out of service
                        8:	The frequency of requested activated session
                            conflicts to the frequency of the current cell
                        9:	Maximum number of sessions is activated.
                            Now modem supports 8 concurrent sessions

    @param[in] source_string_ptr a pointer to rmmi string struct.
    @since UMOLY
*/
/****************************************************************************/
INLINE_MODIFIER INLINE void rmmi_mbms_emsess_hdlr( rmmi_string_struct *source_string_ptr )
{
    rmmi_mbms_hdlr( source_string_ptr );
}

/****************************************************************************/
/*! @brief AT+EMFRQ command handler function.

    Description:        This command is used to enable/disable the eMBMS
                        unsolicited frequency indication, which indicates the
                        current EARFCN of the eMBMS carrier.
    Set command:        +EMFRQ=<enable>
    Set command
    response:           OK
    Read command:       +EMFRQ?
    Read command
    response:           +EMFRQ: <enable>,<freq>
                        OK
    Test command:       +EMFRQ=?
    Test command
    response:           +EMFRQ: (0,1)
                        OK
    Unsolicited result
    code:               +EMFRQ: <freq>
    Parameter:
    <enable>:           Enable/disable eMBMS EARFCN unsolicited indication
                        0: Disable
                        1: Enable
    <freq>:             Current eMBMS EARFCN represented as integer value

    @param[in] source_string_ptr a pointer to rmmi string struct.
    @since UMOLY
*/
/****************************************************************************/
INLINE_MODIFIER INLINE void rmmi_mbms_emfrq_hdlr( rmmi_string_struct *source_string_ptr )
{
    rmmi_mbms_hdlr( source_string_ptr );
}

/****************************************************************************/
/*! @brief AT+EMBIND command handler function.

    Description:        This command is used to bind/unbind the eMBMS U-Plane
                        with a host interface channel (CCMNI channel).
                        When channel binding is enabled, the modem transfers
                        MBMS packets through the specific host interface
                        channel to the host (Application Processor).
    Execution command:  +EMBIND=<enable>,<L2P>,<channel_id>
    Execution command
    response:           OK
    Read command:       +EMBIND?
    Read command
    response:           +EMBIND: <enable>[,<L2P>,<channel_id>]
                        OK
    Test command:       +EMBIND=?
    Test command
    response:           +EMBIND: (0,1),(list of supported <L2P>s),(1-16)
                        OK
    Parameter:
    <enable>:           Enable/disable eMBMS services in modem
                        0: Disable
                        1: Enable

    @param[in] source_string_ptr a pointer to rmmi string struct.
    @since UMOLY
*/
/****************************************************************************/
INLINE_MODIFIER INLINE void rmmi_mbms_embind_hdlr( rmmi_string_struct *source_string_ptr )
{
    rmmi_mbms_hdlr( source_string_ptr );
}

/****************************************************************************/
/*! @brief AT+EMSCP command handler function.

    Description:        This command is used to set/read service coverage
                        parameters defined by VZW in the document,
                        "Reqs-LTE eMBMS". The service coverage parameters are
                        Out-MBMS-Hysteresis, Out-Session-Hysteresis, and
                        In-MBMS-Hysteresis. MBMSAL handles Out / In MBMS
                        Hysteresis requirements, and ERRC SPV handles Out
                        MBMS Session Hysteresis requirement.

                        CURRENTLY THESE REQUIREMENTS SHALL BE SUPPORTED BY
                        EMBMS MIDDLEWARE, NOT MODEM.

    Execution command:  +EMSCP=<out_mbms_hys>,<out_sess_hys>,<in_mbms_hys>
    Execution command
    response:           OK
    Read command:       +EMSCP?
    Read command
    response:           +EMSCP: <out_mbms_hys>,<out_sess_hys>,<in_mbms_hys>
                        OK
    Test command:       +EMSCP=?
    Test command
    response:           +EMSCP: (0-60),(0-60),(0-60)
                        OK
    Parameter:
    <out_mbms_hys>      The parameter Out-MBMS-Hysteresis
                        0-60: The unit is second
    <out_sess_hys>      The parameter Out-Session-Hysteresis
                        0-60: The unit is second
    <in_mbms_hys>       The parameter In-MBMS-Hysteresis
                        0-60: The unit is second

    @param[in] source_string_ptr a pointer to rmmi string struct.
    @since UMOLY
*/
/****************************************************************************/
INLINE_MODIFIER INLINE void rmmi_mbms_emscp_hdlr( rmmi_string_struct *source_string_ptr )
{
    rmmi_mbms_hdlr( source_string_ptr );
}

/****************************************************************************/
/*! @brief AT+EMEVT command handler function.

    Description:        This command is used to notify MBMSAL the beginning or
                        the end of the specific scenarios, including E911 and
                        hVoLTE. MBMSAL has the responsibility to handle sessions
                        and report status according to the requirements.

    Execution command:  +EMEVT=<scenario>,<status>
    Execution command
    response:           OK

    Test command:       +EMEVT=?
    Test command
    response:           +EMEVT: (1-2),(0-1)
                        OK
    Parameter:
    <scenario>          The parameter for corresponding scenario
                        1: E911
                        2: hVoLTE (modem in SRLTE mode)

    <status>            0: The end of the scenario
                        1: The beginning of the scenario

    @param[in] source_string_ptr a pointer to rmmi string struct.
    @since UMOLY
*/
/****************************************************************************/
INLINE_MODIFIER INLINE void rmmi_mbms_emevt_hdlr( rmmi_string_struct *source_string_ptr )
{
    rmmi_mbms_hdlr( source_string_ptr );
}

/****************************************************************************/
/*! @brief AT+EMSESSCFG command handler function.

    Description:        This command is used to configure the parameters related
                        to eMBMS session.

    Execution command:  +EMSESSCFG=<index>,<para_1>[,<para_2>[...]]
    Execution command
    response:           OK

    Test command:       +EMSESSCFG=?
    Test command
    response:           +EMSESSCFG: (1),(1-255)
                        OK
    Parameter:
    <index>             The parameter for corresponding scenario
                        1: TMGI search time (second)

    <para_x>            Depends on <index>

    @param[in] source_string_ptr a pointer to rmmi string struct.
    @since LR12
*/
/****************************************************************************/
INLINE_MODIFIER INLINE void rmmi_mbms_emsesscfg_hdlr( rmmi_string_struct *source_string_ptr )
{
    rmmi_mbms_hdlr( source_string_ptr );
}

/****************************************************************************/
/*! @brief AT+EMSEN reponsing function.

    @param[in] p_context A pointer to a MBMSAL context.
    @param[in] p_info A pointer to a mbms_config_req_info.
    @since UMOLY
    @see rmmi_mbms_emsen_hdlr
*/
/****************************************************************************/
extern void rmmi_mbms_emsen_rind( mbmsal_context *p_context,
    mbms_config_req_info *p_info );

/****************************************************************************/
/*! @brief AT+EMSRV reponsing function.

    @param[in] p_context A pointer to a MBMSAL context.
    @param[in] p_info A pointer to a mbms_sib13_info.
    @param[in] isURC URC or not.
    @since UMOLY
    @see rmmi_mbms_emsrv_hdlr
*/
/****************************************************************************/
extern void rmmi_mbms_emsrv_rind( mbmsal_context *p_context,
    mbms_sib13_info *p_info, kal_bool isURC );

/****************************************************************************/
/*! @brief AT+EMTSI reponsing function.

    @param[in] p_context A pointer to a MBMSAL context.
    @param[in] p_info A pointer to a mbms_sib16_info.
    @param[in] output_type Output type is SET_OR_EXECUTE_MODE or not.
    @since UMOLY
    @see rmmi_mbms_emtsi_hdlr
*/
/****************************************************************************/
extern void rmmi_mbms_emtsi_rind( mbmsal_context *p_context,
    mbms_sib16_info *p_info, kal_bool output_type );

/****************************************************************************/
/*! @brief AT+EMSLU reponsing function.

    @param[in] p_context A pointer to a MBMSAL context.
    @param[in] p_info A pointer to a mbms_sib13_info.
    @param[in] isURC URC or not.
    @param[in] report_sess Forcibly report sessions or not.
    @since UMOLY
    @see rmmi_mbms_emslu_hdlr
*/
/****************************************************************************/
extern void rmmi_mbms_emslu_rind( mbmsal_context *p_context,
    mbms_sib13_info *p_info, kal_bool is_URC, kal_bool report_sess );

/****************************************************************************/
/*! @brief AT+EMPRI reponsing function.

    @param[in] p_context A pointer to a MBMSAL context.
    @param[in] p_info A pointer to a mbms_config_req_info.
    @since UMOLY
    @see rmmi_mbms_empri_hdlr
*/
/****************************************************************************/
extern void rmmi_mbms_empri_rind( mbmsal_context *p_context,
    mbms_config_req_info *p_info );

/****************************************************************************/
/*! @brief AT+EMSAIL reponsing function.

    @param[in] p_context A pointer to a MBMSAL context.
    @param[in] p_info A pointer to a mbms_sib15_info.
    @param[in] isURC URC or not.
    @since UMOLY
    @see rmmi_mbms_emsail_hdlr
*/
/****************************************************************************/
extern void rmmi_mbms_emsail_rind( mbmsal_context *p_context,
    mbms_sib15_info *p_info, kal_bool isURC );

/****************************************************************************/
/*! @brief AT+EMSESS reponsing function.

    @param[in] p_context A pointer to a MBMSAL context.
    @param[in] p_info A pointer to a mbms_servsess_info.
    @param[in] isURC URC or not.
    @since UMOLY
    @see rmmi_mbms_emsess_hdlr
*/
/****************************************************************************/
extern void rmmi_mbms_emsess_rind( mbmsal_context *p_context,
    mbms_servsess_info *p_info, kal_bool isURC );

/****************************************************************************/
/*! @brief AT+EMFRQ reponsing function.

    @param[in] p_context A pointer to a MBMSAL context.
    @param[in] p_info A pointer to a mbms_sib13_info.
    @param[in] isURC URC or not.
    @since UMOLY
    @see rmmi_mbms_emfrq_hdlr
*/
/****************************************************************************/
extern void rmmi_mbms_emfrq_rind( mbmsal_context *p_context,
    mbms_sib13_info *p_info, kal_bool isURC );

/****************************************************************************/
/*! @brief AT+EMBIND reponsing function.

    @param[in] p_context A pointer to a MBMSAL context.
    @param[in] p_info A pointer to a mbms_binding_info.
    @param[in] isURC URC or not.
    @since UMOLY
    @see rmmi_mbms_embind_hdlr
*/
/****************************************************************************/
extern void rmmi_mbms_embind_rind( mbmsal_context *p_context,
    mbms_binding_info *p_info, kal_bool isURC );

/****************************************************************************/
/*! @brief AT+EMBIND confirmation function.

    @param[in] p_context A pointer to a MBMSAL context.
    @param[in] result Execution result
    @since UMOLY
    @see rmmi_mbms_embind_hdlr
*/
/****************************************************************************/
extern void rmmi_mbms_embind_cnf( mbmsal_context *p_context,
    kal_bool result );

/****************************************************************************/
/*! @brief AT+EMSCP reponsing function.

    @param[in] p_context A pointer to a MBMSAL context.
    @param[in] p_para A pointer to a mbmsal_config_para.
    @since UMOLY
    @see rmmi_mbms_emscp_hdlr
*/
/****************************************************************************/
extern void rmmi_mbms_emscp_rind( mbmsal_context *p_context,
    mbmsal_config_para *p_para );

/****************************************************************************/
/*! @brief AT+EMSESSCFG reponsing function.

    @param[in] p_context A pointer to a MBMSAL context.
    @param[in] p_info A pointer to a mbms_config_req_info.
    @since LR12
    @see rmmi_mbms_emsesscfg_hdlr
*/
/****************************************************************************/
extern void rmmi_mbms_emsesscfg_rind( mbmsal_context *p_context,
    mbms_config_req_info *p_info );

/****************************************************************************/
/*! @brief The handlers to handle AT+EMEVT scenario from other AT command, ex. AT+EMCS

    @param[in] scenario happened scenario/event.
    @param[in] status status of specified scenario.
    @since LR12A.R3
*/
/****************************************************************************/
extern void rmmi_mbms_int_emevt_hdlr(mbmsal_event_scenario_enum scenario, mbmsal_event_status_enum status);


/****************************************************************************/
#endif /* _RMMI_MBMS_H */

