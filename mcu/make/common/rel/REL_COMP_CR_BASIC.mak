#
#  Copyright Statement:
#  --------------------
#  This software is protected by Copyright and the information contained
#  herein is confidential. The software may not be copied and the information
#  contained herein may not be used or disclosed except with the written
#  permission of MediaTek Inc. (C) 2005
#
#  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
#  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
#  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
#  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
#  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
#  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
#  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
#  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
#  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
#  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
#  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
#  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
#
#  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
#  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
#  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
#  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
#  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
#
#  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
#  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
#  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
#  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
#  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
#


# Customer MMI release setting for modules
# Applied by all the Customer MMI release packages

# Include common settings
include make/common/rel/REL_COMP_CR_COMMON.mak
CUS_REL_FILES_LIST += make/common/rel/REL_COMP_CR_COMMON.mak

REL_SRC_COMP_CR_BASIC  =
REL_MTK_COMP_CR_BASIC  =
REL_PAR_SRC_COMP_CR_BASIC =

# Common source release modules

# Common library release modules

REL_MTK_COMP_CR_BASIC += abm
REL_MTK_COMP_CR_BASIC += certman
REL_MTK_COMP_CR_BASIC += ccci
REL_MTK_COMP_CR_BASIC += cccidev
REL_MTK_COMP_CR_BASIC += cccisrv
REL_MTK_COMP_CR_BASIC += dhcpd
REL_MTK_COMP_CR_BASIC += ems
REL_MTK_COMP_CR_BASIC += event_info
REL_MTK_COMP_CR_BASIC += kal
REL_MTK_COMP_CR_BASIC += l4
REL_MTK_COMP_CR_BASIC += imsp
REL_MTK_COMP_CR_BASIC += atp
REL_MTK_COMP_CR_BASIC += mbmsal
REL_MTK_COMP_CR_BASIC += obex_stub
REL_MTK_COMP_CR_BASIC += rtsp
REL_MTK_COMP_CR_BASIC += sim
REL_MTK_COMP_CR_BASIC += smslib
REL_MTK_COMP_CR_BASIC += soc
REL_MTK_COMP_CR_BASIC += supl
REL_MTK_COMP_CR_BASIC += tcpip
REL_MTK_COMP_CR_BASIC += tls
REL_MTK_COMP_CR_BASIC += xdm
REL_MTK_COMP_CR_BASIC += cc
REL_MTK_COMP_CR_BASIC += ciss
REL_MTK_COMP_CR_BASIC += nwsel
REL_MTK_COMP_CR_BASIC += data
REL_MTK_COMP_CR_BASIC += flc2_v1
REL_MTK_COMP_CR_BASIC += flc2_v2
REL_MTK_COMP_CR_BASIC += flc2_v2_sec
REL_MTK_COMP_CR_BASIC += llc
REL_MTK_COMP_CR_BASIC += mcd
REL_MTK_COMP_CR_BASIC += mm
REL_MTK_COMP_CR_BASIC += ppp_v1
REL_MTK_COMP_CR_BASIC += ppp_v2
REL_MTK_COMP_CR_BASIC += ratcm
REL_MTK_COMP_CR_BASIC += ratdm
REL_MTK_COMP_CR_BASIC += rrlp
REL_MTK_COMP_CR_BASIC += sm
REL_MTK_COMP_CR_BASIC += pam
REL_MTK_COMP_CR_BASIC += sms
REL_MTK_COMP_CR_BASIC += sndcp
REL_MTK_COMP_CR_BASIC += tst
REL_MTK_COMP_CR_BASIC += cmux
REL_MTK_COMP_CR_BASIC += gmss
REL_MTK_COMP_CR_BASIC += gmss_public
REL_MTK_COMP_CR_BASIC += hlt
REL_MTK_COMP_CR_BASIC += utt
REL_MTK_COMP_CR_BASIC += nas_common_utility

# C2K library modules
REL_MTK_COMP_CR_BASIC += atc
REL_MTK_COMP_CR_BASIC += cust
REL_MTK_COMP_CR_BASIC += val
REL_MTK_COMP_CR_BASIC += rpc
REL_MTK_COMP_CR_BASIC += hlp
REL_MTK_COMP_CR_BASIC += uim
REL_MTK_COMP_CR_BASIC += css

#Modify module release type for L4 
REL_MTK_COMP_CR_BASIC += etcm 
REL_MTK_COMP_CR_BASIC += tftlib
REL_MTK_COMP_CR_BASIC += sim
#Modify module release type for NAS
REL_MTK_COMP_CR_BASIC += pam

#Modify module release type for C2K-NAS
REL_MTK_COMP_CR_BASIC += c2k_sms
REL_MTK_COMP_CR_BASIC += ota
REL_MTK_COMP_CR_BASIC += scc

# 
REL_SRC_COMP  =
REL_MTK_COMP  =

REL_SRC_COMP  += $(REL_SRC_COMP_CR_BASIC) $(REL_SRC_COMP_CR_COMMON) $(REL_SRC_COMP_COMMON)
REL_MTK_COMP  += $(REL_MTK_COMP_CR_BASIC) $(REL_MTK_COMP_CR_COMMON) $(REL_MTK_COMP_COMMON)
