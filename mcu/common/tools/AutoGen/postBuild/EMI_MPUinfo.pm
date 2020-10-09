#!/usr/bin/perl
#
#  Copyright Statement:
#  --------------------
#  This software is protected by Copyright and the information contained
#  herein is confidential. The software may not be copied and the information
#  contained herein may not be used or disclosed except with the written
#  permission of MediaTek Inc. (C) 2006
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
#*****************************************************************************
#*
#* Filename:
#* ---------
#*   EMI_MPIinfo.pm
#*
#* Project:
#* --------
#*
#*
#* Description:
#* ------------
#*   This script is used to get linker symbol for setting EMI RMPU
#* 
#*
#* Author:
#* -------
#*   KC Tsai (mtk06471)
#*
#*------------------------------------------------------------------------------
#* Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
#*============================================================================
#****************************************************************************/

BEGIN { push @INC, './common/tools/MemoryUtility/' }  # add additional library path
use LinkerOutputParser;
use CommonUtility;
use FileInfoParser;

package EMI_MPUinfo;

use constant ATTR__NO_PROTECTION  => 0x0;
use constant ATTR_________SEC_RW  => 0x1;
use constant ATTR__SEC_RW_NSEC_R  => 0x2;
use constant ATTR__SEC_RW_NSEC_W  => 0x3;
use constant ATTR___SEC_R_NSEC_R  => 0x4;
use constant ATTR______FORBIDDEN  => 0x5;
use constant ATTR__SEC_R_NSEC_RW  => 0x6;
use constant ATTR________UNUNSED  => 0xF;



############# user configuration##############

my $nKBalign = 64; # 64KB alignment  
#
# please align this setting with EMI_MPU_REGION in custom_scatstruct.c.template
#
my @aEMI_MPU_config = (
    # Bas of    MCURO   HWRW
    [LinkerSymPrefix::Image, "MCURO_HWRW",LinkerSymPostfix::Base, ATTR________UNUNSED, ATTR________UNUNSED, ATTR________UNUNSED, ATTR________UNUNSED],     # 0
    # Bas of    MCURW   HWRO
    [LinkerSymPrefix::Image,"EXTSRAM"           ,LinkerSymPostfix::Base, ATTR________UNUNSED, ATTR________UNUNSED, ATTR________UNUNSED, ATTR________UNUNSED],     # 1
    # Bas of    MCURW   HWRW
    [LinkerSymPrefix::Image,"EXTSRAM_MCURW_HWRW",LinkerSymPostfix::Base, ATTR________UNUNSED, ATTR________UNUNSED, ATTR________UNUNSED, ATTR________UNUNSED],     # 2
    # Bas of    MD end
    [LinkerSymPrefix::None, "MD_USED_END"       ,LinkerSymPostfix::Limit,ATTR________UNUNSED, ATTR________UNUNSED, ATTR________UNUNSED, ATTR________UNUNSED],     # 3
    [0                     ,""                  ,0                     , ATTR________UNUNSED, ATTR________UNUNSED, ATTR________UNUNSED, ATTR________UNUNSED],     # 4
    [0                     ,""                  ,0                     , ATTR________UNUNSED, ATTR________UNUNSED, ATTR________UNUNSED, ATTR________UNUNSED],     # 5
    [0                     ,""                  ,0                     , ATTR________UNUNSED, ATTR________UNUNSED, ATTR________UNUNSED, ATTR________UNUNSED],     # 6
    [0                     ,""                  ,0                     , ATTR________UNUNSED, ATTR________UNUNSED, ATTR________UNUNSED, ATTR________UNUNSED],     # 7
);

#######################################

my $version = "u0.09_R2";
                         # u0.09_R2,2017/12/04, Carl, refine setting for non-MB aligned end
                         # u0.08,  2016/05/17,  Carl, refine setting for ELBRUS
                         # u0.07,  2016/03/09,  Carl, refine setting for ELBRUS
                         # u0.06,  2015/08/26,  Carl, return directly for ELBRUS
                         # u0.05,  2015/07/06,  Carl, return directly when processing TCM only load
                         # u0.04,  2015/04/15,  Carl, refine setting for (MCU RO, MDHW RW)  DNC+NC, (MCU RW, MDHW RW)  DNC+NC
                         # u0.03,  2015/04/02,  Carl, refine setting 
                         # u0.02,  2015/03/30,  Carl, refine setting 
                         # u0.01,  2015/01/31,  Carl, return EMI RMPU settion
           
sub retrieveEMI_MPU_info()
{
    my ($strFilePath, $themf) = @_;
    my $nAvailableChannel=-1;
    my @aEMI_MPU;
    my @aEMI_Domain;


    &FileInfo::Parse_MAKEFILE($themf, \%g_MAKEFILE_OPTIONS);

    if( &FileInfo::find("TCM_ONLY_LOAD", "TRUE") )
    {
        return (0, undef, undef);
    }


    LinkerOutputParser::FileParse($strFilePath);

    
# offset(base), size
    my $base=0;
    for( my $i=0; $i<scalar(@aEMI_MPU_config); ++$i)
    {
        my $channel_ref = @aEMI_MPU_config[$i];
        if( @{$channel_ref}[1] ne ""  )
        {
            my $end_addr = &getAddr(@{$channel_ref}[0],@{$channel_ref}[1],@{$channel_ref}[2]);
            push @aEMI_MPU, [$base, $end_addr-$base];
            $base = $end_addr;
        }
        else
        {
            $nAvailableChannel = $i if ($nAvailableChannel==-1);
            push @aEMI_MPU, [0,0];
            $base = 0;
        }
    }

# domain, 4 = nNumEmiMuDomain
    for( my $i=0; $i<4; ++$i) 
    {
        my $nChannelAttr = 0;    	
        for( my $j=0; $j<scalar(@aEMI_MPU_config); ++$j)
        {
            my $channel_ref = @aEMI_MPU_config[$j];
            $nChannelAttr |= @{$channel_ref}[3+$i] << ($j*4);
        }
        push @aEMI_Domain, $nChannelAttr;
    }

    return ($nAvailableChannel, \@aEMI_MPU, \@aEMI_Domain);
}

sub getAddr()
{
    my ($nPrefix, $strName, $nPostfix) = @_;

    my $strSymbol = "0x0FFFFFFF & ";
    
    $strSymbol.= "Image\$\$" if( $nPrefix == LinkerSymPrefix::Image );
    $strSymbol.= "Load\$\$" if( $nPrefix == LinkerSymPrefix::Load );
    $strSymbol.= $strName;
    $strSymbol.= "\$\$Base" if( $nPostfix == LinkerSymPostfix::Base );
    $strSymbol.= "\$\$Limit" if( $nPostfix == LinkerSymPostfix::Limit );
    $strSymbol.= "\$\$ZIBase" if( $nPostfix == LinkerSymPostfix::ZIBase );
    $strSymbol.= "\$\$ZILimit" if( $nPostfix == LinkerSymPostfix::ZILimit );

    my $strAddr = &LinkerOutputParser::GetLinkerSymbolAddress( $strName, $nPostfix, $nPrefix );
    &EMP_MPUinfo_die("no linker symbol $strSymbol") if (defined $strAddr == undef);
    
    my $nAddr = hex($strAddr);
    $nAddr &= 0x0FFFFFFF if($strName ne "MD_USED_END");
    $strAddr = CommonUtil::Dec2Hex($nAddr);
    &EMP_MPUinfo_die("symbol $strSymbol address $strAddr is not $nKBalign KB alignment") if ($nAddr != &CommonUtil::GetKBAligned($nAddr, $nKBalign));

    $strSymbol.= " = $strAddr = $nAddr\n";
    print $strSymbol;

    return $nAddr;    
}

sub EMP_MPUinfo_die
{
    my ($error_msg, $file, $line_no) = @_;
    my $pack_name = undef;
    if(!defined $file or !defined $line_no)
    {
        ($pack_name, $file, $line_no) = caller;    
    }
    &CommonUtil::error_handler($error_msg, $file, $line_no, 'EMP_MPUinfo');    
}


