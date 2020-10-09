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
 *   em_ltecsr_public_struct.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Engineer mode public structures.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *              HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 * removed!
 *
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/


#ifndef _EM_LTECSR_PUBLIC_STRUCT_H
#define _EM_LTECSR_PUBLIC_STRUCT_H

#include "em_public_struct.h"


/********************* begin of LTECSR definition ****************************/
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint32 ssrc;
    kal_uint8 codec_type;
    kal_uint8 codec_rate;

}em_ltecsr_rtp_codec_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint32 ssrc;
    kal_uint16 pkt_loss_count;

}em_ltecsr_rtp_packet_loss_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint32 ssrc;
    kal_uint16 delay;

}em_ltecsr_rtp_one_way_delay_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint32 ssrc;
    kal_uint16 jitter;

}em_ltecsr_rtp_jitter_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint32 ssrc;
    kal_uint16 rtp_sn;
    kal_uint16 jitter_buffer_delay;

}em_ltecsr_rtp_jitter_buffer_delay_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint8 dir;
    kal_uint16 payload_len;     // it is the [IP|UDP|RTP] header len
    kal_uint16 total_len;
    kal_uint32 md_ts;           // unit: 64 us, for AP to sync timestamp (XCAL requirement)

    /* payload is put in peer buff */

}em_ltecsr_rtp_ota_msg_ind_struct;


/* ATT CIQ part */
#define EM_LTECSR_MAX_MEDIA_STAT_NUM 8

typedef struct
{
    kal_uint16  wPort;
    kal_uint8   ucMediaType;
    kal_uint8   ucFormat;
    kal_uint32  dwDuration;
    kal_uint32  dwPacketsRcvd;
    kal_uint32  dwPacketsDrop;
    kal_uint32  dwPacketsLate;

    kal_uint32  dwExSmallMuteGapCnt;
    kal_uint32  dwSmallMuteGapCnt;
    kal_uint32  dwMediumMuteGapCnt;
    kal_uint32  dwLargeMuteGapCnt;
}iq_rtp_stats_t;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint16      wNumMediaTracks;
    iq_rtp_stats_t  tMediaStats[EM_LTECSR_MAX_MEDIA_STAT_NUM]; // MAX media num in a session
}em_ltecsr_session_stat_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint16  wByteCount;
    kal_uint16  wDstPort;
    kal_uint8   ucFlags;
    kal_uint8   ucPayloadType;
    kal_uint16  wSequenceNum;
    kal_uint32  dwTimestamp;
    kal_uint32  dwSourceId;
}em_ltecsr_xmit_pkt_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint16  wByteCount;
    kal_uint16  wDstPort;
    kal_uint8   ucPktStatus;
    kal_uint8   ucFlags;
    kal_uint8   ucPayloadType;
    kal_uint16  wSequenceNum;
    kal_uint32  dwTimestamp;
    kal_uint32  dwSourceId;
}em_ltecsr_recv_pkt_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint32  dwSsrc;
    kal_uint32  dwDuration;
    kal_uint32  dwPktCount;
    kal_uint32  dwByteCount;
    kal_uint16  wDstPort;
    kal_uint16  wMeanJitter;
    kal_uint8   ucMediaType;
    kal_uint8   ucIpVersion;
    kal_uint8   strIpDstAddr[16];   // IPv6
}em_ltecsr_xmit_stat_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint32  dwSsrc;
    kal_uint32  dwDuration;
    kal_uint32  dwPktCount;
    kal_uint32  dwPktLoss;
    kal_uint32  dwByteCount;
    kal_uint16  wDstPort;
    kal_uint16  wMeanJitter;
    kal_uint16  wMaxJitter;
    kal_uint16  wMaxDelta;
    kal_uint16  wCumAvgPktSize;
    kal_uint8   ucMediaType;
    kal_uint8   ucIpVersion;
    kal_uint8   strIpSrcAddr[16];   // IPv6
}em_ltecsr_recv_stat_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint64  sys_time;
    kal_uint8   dir;
    kal_uint8   rat;
    kal_uint8   ip_ver;
    kal_uint8   src_ip[16];
    kal_uint8   dst_ip[16];
    kal_uint16  src_port;
    kal_uint16  dst_port;
    kal_uint8   audio_codec;
    kal_uint16  jitter;
    kal_uint8   cmr;
    kal_uint8   frame_num;

    /* peer buff here to store UDP packet raw data */

}em_ltecsr_rtp_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint64  sys_time;
    kal_uint8   dir;
    kal_uint8   rat;
    kal_uint8   ip_ver;
    kal_uint8   src_ip[16];
    kal_uint8   dst_ip[16];
    kal_uint16  src_port;
    kal_uint16  dst_port;

    /* peer buff here to store UDP packet raw data */

}em_ltecsr_rtcp_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint8   event;     // ltecsr_em_rtp_event_enum
    kal_uint16  rtp_src_port;
    kal_uint16  rtp_dst_port;

}em_ltecsr_rtp_event_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint16  period;             // unit: ms
    kal_uint16  pkt_loss_rate;      // unit: %
    kal_int32   jitter;             // unit: ms
    kal_uint32  round_trip_delay;   // unit:ms

}em_ltecsr_rtp_periodic_rpt_ind_struct;

/********************* end of LTECSR definition ****************************/


#endif /* _EM_LTECSR_PUBLIC_STRUCT_H */

