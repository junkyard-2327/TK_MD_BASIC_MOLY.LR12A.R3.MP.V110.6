#!/usr/bin/env perl
#***********************************************************************
#[Program]             coda2word
#[File]                coda2word.pl
#[Version]             V1.0
#[Revision Date]       2008-10-29
#[Author]              Mike Wu, mike.wu@mediatek.com, 25921
#[Description]         This file translates Coda-compatible XML files to 
#		       Microsoft Word documentation for register maps.
#[Copyright]           Copyright (C) 2008 MediaTek Incorporation. All Rights Reserved.
#-----------------------------------------------------------------------
#[History]
#  1.1   2012-09-21, Yunyang.Song@mediatek.com, 60155
#        >> Add following new option to let user customize the document:
#        >>   -uc_name, -lc_name, -add_field_info, -add_reg_info, -access_translate
#
#  1.2   2013-05-20, Yunyang.Song@mediatek.com, 60155
#        >> Add supporting for multiple default value under different mode : '-mode_value' 
#  1.3   2013-12-05, vend_dt002@mediatek.com, 24232
#        >> Change report format for Linda Chen (WCP/ACS), 24745
#***********************************************************************


BEGIN {
	unshift @INC, '\\\\srdfs01\\HWRD_Utilities\\CODA_Lite\\Perl\\lib';
	unshift @INC, './lib';
}

use Util;
use RegisterXmlParser;
use File::Basename;
use Class::Struct;
#use Data::Dumper;
use warnings;
use strict;
use Data::Dumper;

my $prog = basename($0);
my $command_line;
my $mod_name;
my $base_addr;
my $out_dir = "";
my %tag_hash = ();
my $has_tag        = 0;
my $print_overview = 0;
my $print_offset   = 0;
my $module_prefix  = 0;
my $little_endian  = 0;
my $show_private   = 0;
my $summary_landscape = 0;
my $separated_page = 0;
my $summary_format		 = 0;
my $keep_addr_format = 0;
my $use_uc_name      = 0;
my $use_lc_name      = 0;
my $print_mode_value = 0;
my @extra_field_info = ();
my %curr_extra_field_info = ();
my @extra_reg_info = ();
my %curr_extra_reg_info = ();
my %field_acc_xlate = ();

my $company = "Mediatek Inc.";
my $out_file;
my $s_output;
my $TAG_INDEX = 1;
my $REG_TABLE_NAME = "Mne";

my @xml_files = ();
my $Registers;
my $MemoryMap;
my $History;

my $BITS_PER_ROW  = 16;
my $BITS_PER_BYTE = 8;

my $TITLE_WIDTH = 400;
my $CELL_WIDTH  = (5000 - $TITLE_WIDTH) / $BITS_PER_ROW;

# used for summary table format 0
my $SUM_TOTAL_WIDTH  = 5000;
my $SUM_ADDR_WIDTH   = 600;
my $SUM_NAME_WIDTH   = 1000;
my $SUM_WIDTH_WIDTH  = 400;
my $SUM_DESC_WIDTH   = $SUM_TOTAL_WIDTH - ($SUM_ADDR_WIDTH + $SUM_NAME_WIDTH + $SUM_WIDTH_WIDTH);
# used for summary table format 1
if ($summary_format) {
	$SUM_ADDR_WIDTH   = 400;
	$SUM_NAME_WIDTH   = 2300;
	$SUM_TOTAL_WIDTH  = 14000;
}
my $SUM_TYPE_WIDTH  = 400;
my $SUM_BYTE_WIDTH  = 400;
my $SUM_RESET_WIDTH  = 400;
my $SUM_BIT_WIDTH   = ($SUM_TOTAL_WIDTH - ($SUM_ADDR_WIDTH + $SUM_NAME_WIDTH + $SUM_TYPE_WIDTH + $SUM_BYTE_WIDTH + $SUM_RESET_WIDTH)) / 8;

my $REG_TITLE_WIDTH    = 700;
my $REG_OVERVIEW_WIDTH = $SUM_TOTAL_WIDTH - $REG_TITLE_WIDTH;

my $FLD_BITS_WIDTH = 400;
my $FLD_MNE_WIDTH  = 600;
my $FLD_NAME_WIDTH = 900;
my $FLD_DESC_WIDTH = $SUM_TOTAL_WIDTH - ($FLD_BITS_WIDTH + $FLD_MNE_WIDTH + $FLD_NAME_WIDTH);
my $HISTORY_REVISION_WIDTH = 800;
my $HISTORY_DATE_WIDTH = 800;
my $HISTORY_AUTHOR_WIDTH = 800;
my $HISTORY_LOG_WIDTH = $SUM_TOTAL_WIDTH - ($HISTORY_REVISION_WIDTH + $HISTORY_DATE_WIDTH + $HISTORY_AUTHOR_WIDTH);


struct elm => {
	_name        => '$',
	_mne         => '$',
	_access      => '$',
	_default     => '$',
	_width       => '$',
	_usr_def     => '%',
};

parse_args();

foreach my $xml_file (@xml_files) {

	my ($mod_ref, $mem_map) = RegisterXmlParser::ParseXML ($xml_file);

	$mod_name     = $mod_ref -> {"name"};
	$base_addr    = $mod_ref -> {"address"} -> {"address"};
	$Registers    = $mod_ref -> {"register"};
	$MemoryMap    = $mem_map;
	$History			= $mod_ref -> {"history"};
	if (defined($s_output))
	{
		$out_file  = $s_output;
	} else {
		$out_file = "..//doc//${mod_name}\.doc";
	}

	$out_file =~ s/(_ext)?\.doc$/_ext\.doc/ if (!$show_private);

	open OUTFILE, ">", $out_file or die "Cannot open $out_file: $!\n";

	print_word();

	close OUTFILE;
}

exit 0;


sub print_word {

	print OUTFILE gen_word_header();

  ### !!! Always call 'gen_reg_table' before other sub-routines, as it might change the XML data structure  !!!
  my ($hide_all_reg, $reg_table) = gen_reg_table();

  
	if (defined ($History)) {
		print OUTFILE gen_history_table_sect($History, $mod_name, "TableGrid");
		if ($separated_page) { print OUTFILE gen_page_break(); }
		else                 { print OUTFILE gen_dummy(); }
	}

#	print OUTFILE gen_base_addr();
	my $summary_table = gen_summary_table_sect($MemoryMap, "TableGrid", $summary_format, $summary_landscape);
	print OUTFILE $summary_table   if (!$hide_all_reg);
	if (!$summary_landscape) {
		if ($separated_page) { print OUTFILE gen_page_break(); }
		else                 { print OUTFILE gen_dummy (); print OUTFILE gen_dummy (); }
	}

	print OUTFILE $reg_table       if (!$hide_all_reg);
	print OUTFILE gen_word_tail();
}

sub gen_reg_table {
	my $reg_table;
	my $hide_all_reg = 1;
	my $first_run = 1;

	foreach my $reg (@{$Registers}) {

		my $reg_vis   = $reg->{"visibility"};

		if (!defined $reg_vis) {
			RegisterXmlParser::SetRegisterVisibility ($reg);
		}
		if ($reg_vis eq "PRIVATE" && !$show_private) {
			$reg->{"name"}          = "";
			$reg->{"description"}   = "For $company internal use only";
			$reg->{"documentation"} = "";
		}

		if (($reg -> {"name"} !~ /^RESERVED/i) && ($reg -> {"name"} ne "")) {
			if ($module_prefix && !($reg -> {"name"} =~ /^$mod_name/)) {
				$reg -> {"name"} = ($mod_name . "_" . $reg -> {"name"});
			}
		}

    # change register&field name into upper/lower case if required : BEGIN
    if ($use_lc_name)  { $reg->{"name"} = lc $reg->{"name"}; }
    if ($use_uc_name)  { $reg->{"name"} = uc $reg->{"name"}; }
    # change register&field name into upper/lower case if required : END

		my $addr          = String2Value ($reg->{"address"}->{"address"});
		my $previous_addr = $reg->{"address"}->{"address"};
		my $base_addr_val = String2Value ($base_addr);
		my $reg_addr_type = $reg->{"address"}->{"type"};
		if ($reg_addr_type eq "RELATIVE") {
			$reg->{"address"}     = sprintf "0x%X", ($addr + $base_addr_val);
			$reg->{"rel_address"} = ($keep_addr_format == 1) ? $previous_addr : sprintf "%Xh" , ($addr);
		} else {
			$reg->{"address"}     = sprintf "0x%X", ($addr);
			$reg->{"rel_address"} = sprintf "%Xh" , ($addr - $base_addr_val);
		}

		my @rows;
		my @row;
		my $newelm;
		my $accu_width = 0;

		my $max_len  = length($reg->{"name"});
		my $max_name = $reg->{"name"};

    check_opt_extra_info($reg) if ($first_run eq 1);
    $first_run = 0 ;

		foreach my $field (@{$reg -> {"field"}}) {
			my $len   = length($field->{"name"});
			my $width = $field->{"width"};

			if ($width > 1) {
				$len += (length($width) + 4);					#[N:0] total (len+4) chars
			}
			if ($len > $max_len) {
				$max_len  = $len;
				$max_name = $field->{"name"};
			}
		}
		my $align_width = $max_len*70 + 30;
		
   ## mode_value BEGIN
    my %field_modes = ();
    if ( $print_mode_value ) { %field_modes = &parse_mode_value($reg) ; }
   ## mode_value END

		foreach my $field (@{$reg -> {"field"}}) {

    # change register&field name into upper/lower case if required : BEGIN
      if ($use_lc_name)  { $field->{"name"} = lc $field->{"name"}; }
      if ($use_uc_name)  { $field->{"name"} = uc $field->{"name"}; }
    # change register&field name into upper/lower case if required : END

    # field 'access' translate : BEGIN
      my $orig_acc = uc $field->{"access"};
      if (exists $field_acc_xlate{$orig_acc}) { $field->{"access"} = $field_acc_xlate{$orig_acc}; }
    # field 'access' translate : END

			my $field_name   = $field->{"name"};
			my $field_access = $field->{"access"};
			my $field_width  = $field->{"width"};
			my $field_vis    = $field->{"visibility"};
			my $field_mne    = $field->{"user-defined"}->{"MNE"};
			my $field_tag    = $field->{"user-defined"}->{"TAG"};

      # extra field information : BEGIN
      my %field_extra_bak     = (); 
      foreach my $idx (keys %curr_extra_field_info) {
        if ($curr_extra_field_info{$idx}) { $field_extra_bak{$idx} = $field->{$idx} ; }
        else                              { $field_extra_bak{$idx} = $field->{"user-defined"}->{$idx} ; }
      }
      # extra field information : END

			$REG_TABLE_NAME = "Name" if ($REG_TABLE_NAME eq "Mne" and !defined $field_mne);
			$field_access = "Other"     if ($field_access eq "OTHER");
			$field_mne    = $field_name if (!defined $field_mne);
			$field_mne		= $field_name if ($field_mne eq "");

			my $def_value     = $field->{"default-value"};
			my $field_default = Util::String2Bin ($def_value, $field_width);

			my $hide_field = 0;

			if ($has_tag && defined $field_tag && $field_tag ne "") {
				$hide_field = 1;

				my @field_tags = split (/\n/, $field_tag);
				foreach my $tag (@field_tags) {
					next if ($tag eq "");
					if (exists $tag_hash {$tag}) {
						$hide_field = 0;
						last;
					}
				}
			}

			$hide_field = 1 if ($field_vis eq "PRIVATE" && !$show_private);
			$hide_field = 1 if ($field_name =~ /^RESERVED/i && defined $field -> {"auto-inserted"});

			if ($hide_field) {
				$field_name      = "";
				$field->{"name"} = "";
				$field->{"hide"} = 1;
			}

			$accu_width += $field_width;
			my $curr_width    = $field_width;
			my $curr_position = 0;
			my $remain_value  = $field_default;

   ## mode_value BEGIN
      my %field_mode_value = () ; 
      if ($print_mode_value) {
        foreach my $mode (keys %{$field_modes{$field_name}}) {
          $field_mode_value{$mode}{"remain_value"} = Util::String2Bin($field_modes{$field_name}{$mode}{"value"}, $field_width) ;
        }
      }
   ## mode_value END 

			my $line_changed  = ($accu_width > $BITS_PER_ROW) ? 1 : 0;

			while ($accu_width >= $BITS_PER_ROW) {
				$accu_width    -= $BITS_PER_ROW;
				$curr_width    -= $accu_width;

# need to cut field_default according to curr_width
#add to support x or z in bin or hex
				my $curr_value   = substr($remain_value, -$curr_width);
				$remain_value    = substr($remain_value, 0, length($remain_value) - $curr_width);

				my $curr_name    = $field_name;
				my $curr_mne     = $field_mne;
				if (!defined $field->{"hide"} && $line_changed) {
					$curr_name .= sprintf("[%d:%d]", ($curr_position+$curr_width-1), $curr_position);
					$curr_mne  .= sprintf("[%d:%d]", ($curr_position+$curr_width-1), $curr_position);
				}

   ## mode_value BEGIN
        my %expanded_mode_value = ();
        if ($print_mode_value) {
          foreach my $mode (keys %field_mode_value) {
            $field_mode_value{$mode}{"curr_value"  } = substr( $field_mode_value{$mode}{"remain_value"} , -$curr_width ) ;
            $field_mode_value{$mode}{"remain_value"} = substr( $field_mode_value{$mode}{"remain_value"} , 0, length($field_mode_value{$mode}{"remain_value"}) - $curr_width);

            $expanded_mode_value{$mode}{"defined"} = $field_modes{$field_name}{$mode}{"defined"} ; 
            $expanded_mode_value{$mode}{"value"}   = $field_mode_value{$mode}{"curr_value"} ;
          }
        }

        my %field_extra = %field_extra_bak ;
				$field_extra{"__expanded_mode_value"} = \%expanded_mode_value ; 
   ## mode_value END 

				if (defined $field->{"hide"}) {
					for (my $i=0; $i<$curr_width; $i++) {
						$newelm = elm->new(
							_name    => "",
							_mne     => "",
							_default => "",
							_access  => "",
							_width   => 1,
					    _usr_def => \%field_extra);
						unshift @row, $newelm;
					}
				} else {
					if (! Util::IsValue($def_value)) {
					 $newelm = elm->new(
						 _name        => $curr_name,  
						 _mne         => $curr_mne,   
						 _default     => $def_value,
						 _access      => $field_access,
						 _width       => $curr_width,
					   _usr_def     => \%field_extra);
					} else {
						$newelm = elm->new(
							_name        => $curr_name,
							_mne         => $curr_mne,
							_default     => $curr_value,
							_access      => $field_access,
							_width       => $curr_width,
					    _usr_def     => \%field_extra);
					}
					unshift @row, $newelm;
				}

#create new row
				unshift @rows, [ @row ];
				@row = ();

				$curr_position += $curr_width;
				$curr_width = $accu_width;
			}

			if ($curr_width > 0) {
				my $curr_name = $field_name;
				my $curr_mne  = $field_mne;
				if (!defined $field->{"hide"} && $line_changed) {
					$curr_name .= sprintf("[%d:%d]", ($curr_position+$curr_width-1), $curr_position);
					$curr_mne  .= sprintf("[%d:%d]", ($curr_position+$curr_width-1), $curr_position);
				}

   ## mode_value BEGIN
        my %expanded_mode_value = ();
        if ($print_mode_value) {
          foreach my $mode (keys %field_mode_value) {
            $expanded_mode_value{$mode}{"defined"} = $field_modes{$field_name}{$mode}{"defined"} ; 
            $expanded_mode_value{$mode}{"value"}   = $field_mode_value{$mode}{"remain_value"};
          }
        }

        my %field_extra = %field_extra_bak ;
			  $field_extra{"__expanded_mode_value"} = \%expanded_mode_value ; 
   ## mode_value END 

				if (defined $field->{"hide"}) {
					for (my $i=0; $i<$curr_width; $i++) {
						$newelm = elm->new(
							_name    => "",
							_mne     => "",
							_default => "",
							_access  => "",
							_width   => 1,
					    _usr_def => \%field_extra);
						unshift @row, $newelm;
					}
				} else {
					if (! Util::IsValue($def_value)) {
						$newelm = elm->new(
							_name        => $curr_name,
							_mne         => $curr_mne,
							_default     => $def_value,
							_access      => $field_access,
							_width       => $curr_width,
					    _usr_def     => \%field_extra);
					} else {
						$newelm = elm->new(
							_name        => $curr_name,
							_mne         => $curr_mne,
							_default     => $remain_value,
							_access      => $field_access,
							_width       => $curr_width,
					    _usr_def     => \%field_extra);
					}
					unshift @row, $newelm;
				}
			}
		}
		#add to process register width is not multiple of $BITS_PER_ROW
		my $tmp_reg_width = $reg -> {"width"};
		my $remainder = $tmp_reg_width % $BITS_PER_ROW;
		if ($remainder > 0)
		{ 
			for (my $i=0; $i<$BITS_PER_ROW - $remainder; $i++) {
        my %field_extra = (); 

				$newelm = elm->new(
					_name    => "",
					_mne     => "",
					_default => "",
					_access  => "",
					_width   => 1,
					_usr_def => \%field_extra);
				unshift @row, $newelm;
			}
			$accu_width += $BITS_PER_ROW - $remainder;
		}
		if (@row > 0) {
			unshift @rows, [ @row ];
			@row = ();
		}

		my $hide_all_fld = 1;
		my $reg_count = 1;
		my $block_count = 1;
		foreach my $field (@{$reg -> {"field"}}) {
			if ($field ->{"name"} ne "") {
				$hide_all_fld = 0;
				last;
			}
		}
		$reg -> {"name"} = "" if ($hide_all_fld);
		if ($reg -> {"count"} =~ /^\s*(\d+)\s*/)
		{
			$reg_count = $1;
		}
		
		#modify to support one reg in multiple register groups
		if (exists $reg -> {"in-block" })
		{
			my $reg_grps = $reg -> {"in-block"};
			$block_count = 1;
			foreach my $reg_grp (@{$reg_grps})
			{
#				if ($reg_grp -> {"count"} =~ /^\s*(\d+)\s*/)
#				{
#					$block_count = $1;
#				}
				if (!$hide_all_fld) {
					for (my $blk_index = 0; $blk_index <= $block_count - 1; $blk_index ++)
					{
						$reg_table .= gen_table_sect ($reg, \@rows, "TableGrid", $blk_index,$reg_grp);
						$reg_table .= gen_dummy ();
						if ($print_overview) {
							$reg_table .= gen_overview_sect ($reg, "TableGrid");
							$reg_table .= gen_dummy ();
						}

            # print extra register information if required : BEGIN
            $reg_table .= gen_extra_reg_info_sect($reg, "TableGrid");
            # print extra register information if required : END

						$reg_table .= gen_field_table_sect ($reg, "TableGrid", $little_endian);
						$reg_table .= gen_dummy ();
						$reg_table .= gen_dummy ();

						$hide_all_reg = 0;
					}
				}
			}
		} else {
			  if (!$hide_all_fld) {
						for (my $blk_index = 0; $blk_index <= $block_count - 1; $blk_index ++)
						{
								my $NO_USE = "";
								$reg_table .= gen_table_sect ($reg, \@rows, "TableGrid", $blk_index, $NO_USE);
								$reg_table .= gen_dummy ();
								if ($print_overview) {
									$reg_table .= gen_overview_sect ($reg, "TableGrid");
									$reg_table .= gen_dummy ();
								}

                # print extra register information if required : BEGIN
                $reg_table .= gen_extra_reg_info_sect($reg, "TableGrid");
                # print extra register information if required : END

								$reg_table .= gen_field_table_sect ($reg, "TableGrid", $little_endian);
								$reg_table .= gen_dummy ();
								$reg_table .= gen_dummy ();
						}
				}
				$hide_all_reg = 0;
		}
	}

  return ($hide_all_reg, $reg_table); 
}



sub gen_dummy {
	my $str = 
	"<w:p>" .
	"<w:pPr>" .
	"<w:snapToGrid w:val=\"off\"/>" .
	"<w:rPr>" .
	"<w:sz w:val=\"20\"/>" .
	"</w:rPr>" .
	"</w:pPr>" .
	"</w:p>";

	return $str;
}

sub gen_base_addr {
	my $base_addr_val = String2Value ($base_addr);
	my $module_name = $mod_name;
	return gen_paragraph ((sprintf "Module name: %s Base address: (+%Xh)",$module_name, $base_addr_val), "000000", "left", 1, 20, 0, 120);
}

sub gen_word_header {
	my $header =
	"<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"yes\"?>\n" .
	"<?mso-application progid=\"Word.Document\"?>\n" .
	"<w:wordDocument xmlns:w=\"http://schemas.microsoft.com/office/word/2003/wordml\" xmlns:v=\"urn:schemas-microsoft-com:vml\" xmlns:w10=\"urn:schemas-microsoft-com:office:word\" xmlns:sl=\"http://schemas.microsoft.com/schemaLibrary/2003/core\" xmlns:aml=\"http://schemas.microsoft.com/aml/2001/core\" xmlns:wx=\"http://schemas.microsoft.com/office/word/2003/auxHint\" xmlns:o=\"urn:schemas-microsoft-com:office:office\" xmlns:dt=\"uuid:C2F41010-65B3-11d1-A29F-00AA00C14882\" w:macrosPresent=\"no\" w:embeddedObjPresent=\"no\" w:ocxPresent=\"no\" xml:space=\"preserve\">" .
	"<o:DocumentProperties>" .
	"</o:DocumentProperties>";

	$header .=
	"<w:fonts>" .
	"<w:defaultFonts w:ascii=\"Arial\" w:h-ansi=\"Arial\" w:cs=\"Arial\"/>" .
	"<w:font w:name=\"Arial\"><w:altName w:val=\"Arial\"/>" .
	"<w:panose-1 w:val=\"020B0604020202020204\"/>" .
	"<w:charset w:val=\"00\"/>" .
	"<w:family w:val=\"Roman\"/>" .
	"<w:notTrueType/>" .
	"<w:pitch w:val=\"variable\"/>" .
	"<w:sig w:usb-0=\"00000003\" w:usb-1=\"00000000\" w:usb-2=\"00000000\" w:usb-3=\"00000000\" w:csb-0=\"00000001\" w:csb-1=\"00000000\"/>" .
	"</w:font>" .
	"</w:fonts>";

	$header .=
	"<w:styles>" .
	"<w:versionOfBuiltInStylenames w:val=\"4\"/>" .
	"<w:latentStyles w:defLockedState=\"off\" w:latentStyleCount=\"156\"/>" .
	"<w:style w:type=\"paragraph\" w:default=\"on\" w:styleId=\"Normal\"><w:name w:val=\"Normal\"/>" .
	"<w:pPr>" .
	"<w:spacing w:after=\"200\" w:line=\"240\" w:line-rule=\"auto\"/>" .
	"</w:pPr>" .
	"<w:rPr>" .
	"<wx:font wx:val=\"Arial\"/>" .
	"<w:sz w:val=\"22\"/>" .
	"<w:sz-cs w:val=\"22\"/>" .
	"<w:lang w:val=\"EN-US\" w:fareast=\"ZH-TW\" w:bidi=\"AR-SA\"/>" .
	"</w:rPr>" .
	"</w:style>" .
	"<w:style w:type=\"character\" w:default=\"on\" w:styleId=\"DefaultParagraphFont\"><w:name w:val=\"Default Paragraph Font\"/>" .
	"</w:style>" .
	"<w:style w:type=\"table\" w:default=\"on\" w:styleId=\"TableNormal\"><w:name w:val=\"Normal Table\"/>" .
	"<wx:uiName wx:val=\"Table Normal\"/>" .
	"<w:rPr><wx:font wx:val=\"Arial\"/>" .
	"</w:rPr>" .
	"<w:tblPr><w:tblInd w:w=\"0\" w:type=\"dxa\"/>" .
	"<w:tblCellMar><w:top w:w=\"0\" w:type=\"dxa\"/>" .
	"<w:left w:w=\"0\" w:type=\"dxa\"/>" .
	"<w:bottom w:w=\"0\" w:type=\"dxa\"/>" .
	"<w:right w:w=\"0\" w:type=\"dxa\"/>" .
	"</w:tblCellMar>" .
	"</w:tblPr>" .
	"</w:style>" .
	"<w:style w:type=\"list\" w:default=\"on\" w:styleId=\"NoList\">" .
	"<w:name w:val=\"No List\"/>" .
	"</w:style>" .
	"<w:style w:type=\"table\" w:styleId=\"TableGrid\"><w:name w:val=\"Table Grid\"/>" .
	"<w:basedOn w:val=\"TableNormal\"/>" .
	"<w:rPr><wx:font wx:val=\"Arial\"/>" .
	"</w:rPr>" .
	"<w:tblPr><w:tblInd w:w=\"0\" w:type=\"dxa\"/>" .
	"<w:tblBorders>" .
	"<w:top w:val=\"single\" w:sz=\"12\" wx:bdrwidth=\"0\" w:space=\"0\" w:color=\"000000\"/>" .
	"<w:left w:val=\"single\" w:sz=\"12\" wx:bdrwidth=\"0\" w:space=\"0\" w:color=\"000000\"/>" .
	"<w:bottom w:val=\"single\" w:sz=\"12\" wx:bdrwidth=\"0\" w:space=\"0\" w:color=\"000000\"/>" .
	"<w:right w:val=\"single\" w:sz=\"12\" wx:bdrwidth=\"0\" w:space=\"0\" w:color=\"000000\"/>" .
	"<w:insideH w:val=\"single\" w:sz=\"4\" wx:bdrwidth=\"0\" w:space=\"0\" w:color=\"000000\"/>" .
	"<w:insideV w:val=\"single\" w:sz=\"4\" wx:bdrwidth=\"0\" w:space=\"0\" w:color=\"000000\"/>" .
	"</w:tblBorders>" .
	"<w:tblCellMar>" .
	"<w:top w:w=\"0\" w:type=\"dxa\"/>" .
	"<w:left w:w=\"0\" w:type=\"dxa\"/>" .
	"<w:bottom w:w=\"0\" w:type=\"dxa\"/>" .
	"<w:right w:w=\"0\" w:type=\"dxa\"/>" .
	"</w:tblCellMar>" .
	"</w:tblPr>" .
	"</w:style>" .
	"</w:styles>";

	$header .=
	"<w:docPr><w:view w:val=\"normal\"/>" .
	"<w:zoom w:percent=\"100\"/>" .
	"<w:doNotEmbedSystemFonts/>" .
	"<w:bordersDontSurroundHeader/>" .
	"<w:bordersDontSurroundFooter/>" .
	"<w:attachedTemplate w:val=\"\"/>" .
	"<w:defaultTabStop w:val=\"480\"/>" .
	"<w:drawingGridHorizontalSpacing w:val=\"120\"/>" .
	"<w:displayHorizontalDrawingGridEvery w:val=\"0\"/>" .
	"<w:displayVerticalDrawingGridEvery w:val=\"2\"/>" .
	"<w:punctuationKerning/>" .
	"<w:characterSpacingControl w:val=\"CompressPunctuation\"/>" .
	"<w:optimizeForBrowser/>" .
	"<w:validateAgainstSchema/>" .
	"<w:saveInvalidXML w:val=\"off\"/>" .
	"<w:ignoreMixedContent w:val=\"off\"/>" .
	"<w:alwaysShowPlaceholderText w:val=\"off\"/>" .
	"<w:compat><w:spaceForUL/>" .
	"<w:balanceSingleByteDoubleByteWidth/>" .
	"<w:doNotLeaveBackslashAlone/>" .
	"<w:ulTrailSpace/>" .
	"<w:doNotExpandShiftReturn/>" .
	"<w:adjustLineHeightInTable/>" .
	"<w:breakWrappedTables/>" .
	"<w:snapToGridInCell/>" .
	"<w:wrapTextWithPunct/>" .
	"<w:useAsianBreakRules/>" .
	"<w:dontGrowAutofit/>" .
	"<w:useFELayout/>" .
	"</w:compat>" .
	"</w:docPr>";

	$header .= "<w:body>";

	return $header;
}

sub gen_word_tail {
	my $tail = "</w:body>";
	$tail .= "</w:wordDocument>";

	return $tail;
}

# grid_width       :  width of this grid
# grid_span	       :  num of horizontally spanned grids
# border_DIRECTION : -1 -> no border
#                     1 -> default
#                     2 -> thin
#		      						3 -> double
#                     4 -> border
# fill_gray        :  1 -> fill gray to this grid
# grid_vmerge	     : -1 -> being merged vertically
#		      					  1 -> merging vertically
# v_align          :  [center|left|right] align vertically
sub gen_grid_by_paragraphs {
	my $value         = shift;
	my $grid_width    = shift;
	my $grid_span     = shift || 1;
	my $border_left   = shift || 1;
	my $border_right  = shift || 1;
	my $border_top    = shift || 1;
	my $border_bottom = shift || 1;
	my $fill_gray     = shift || 0;
	my $grid_vmerge   = shift || 0;
	my $v_align       = shift || "";
	my $bkgrd_color   = shift || "";

	my $border = "";

	if ($border_left == -1) {
		$border .= "<w:left w:val=\"nil\"/>";
	} elsif ($border_left == 2) {
		$border .= "<w:left w:val=\"single\" w:sz=\"4\" wx:bdrwidth=\"30\" w:space=\"0\" w:color=\"auto\"/>";
	} elsif ($border_left == 3) {
		$border .= "<w:left w:val=\"double\" w:sz=\"4\" wx:bdrwidth=\"30\" w:space=\"0\" w:color=\"auto\"/>";
	} elsif ($border_left == 4) {
		$border .= "<w:left w:val=\"single\" w:sz=\"12\" wx:bdrwidth=\"30\" w:space=\"0\" w:color=\"auto\"/>";
	}

	if ($border_right == -1) {
		$border .= "<w:right w:val=\"nil\"/>";
	} elsif ($border_right == 2) {
		$border .= "<w:right w:val=\"single\" w:sz=\"4\" wx:bdrwidth=\"30\" w:space=\"0\" w:color=\"auto\"/>";
	} elsif ($border_right == 3) {
		$border .= "<w:right w:val=\"double\" w:sz=\"4\" wx:bdrwidth=\"30\" w:space=\"0\" w:color=\"auto\"/>";
	} elsif ($border_right == 4) {
		$border .= "<w:right w:val=\"single\" w:sz=\"12\" wx:bdrwidth=\"30\" w:space=\"0\" w:color=\"auto\"/>";
	}

	if ($border_top == -1) {
		$border .= "<w:top w:val=\"nil\"/>";
	} elsif ($border_top == 2) {
		$border .= "<w:top w:val=\"single\" w:sz=\"4\" wx:bdrwidth=\"30\" w:space=\"0\" w:color=\"auto\"/>";
	} elsif ($border_top == 3) {
		$border .= "<w:top w:val=\"double\" w:sz=\"4\" wx:bdrwidth=\"30\" w:space=\"0\" w:color=\"auto\"/>";
	} elsif ($border_top == 4) {
		$border .= "<w:top w:val=\"single\" w:sz=\"12\" wx:bdrwidth=\"30\" w:space=\"0\" w:color=\"auto\"/>";
	}

	if ($border_bottom == -1) {
		$border .= "<w:bottom w:val=\"nil\"/>";
	} elsif ($border_bottom == 2) {
		$border .= "<w:bottom w:val=\"single\" w:sz=\"4\" wx:bdrwidth=\"30\" w:space=\"0\" w:color=\"auto\"/>";
	} elsif ($border_bottom == 3) {
		$border .= "<w:bottom w:val=\"double\" w:sz=\"4\" wx:bdrwidth=\"30\" w:space=\"0\" w:color=\"auto\"/>";
	} elsif ($border_bottom == 5) {
		$border .= "<w:bottom w:val=\"single\" w:sz=\"12\" wx:bdrwidth=\"30\" w:space=\"0\" w:color=\"auto\"/>";
	}

	my $vmerge_str = "";
	if ($grid_vmerge == -1) {
		$vmerge_str = "<w:vmerge/>";
	} elsif ($grid_vmerge == 1) {
		$vmerge_str = "<w:vmerge w:val=\"restart\"/>";
	}
	$vmerge_str .= "<w:vAlign w:val=\"center\"/>" if ($vmerge_str ne "");

	my $span_str   = ($grid_span > 1) ? "<w:gridSpan w:val=\"".$grid_span."\"/>" : "";

	my $fill	     = ($bkgrd_color eq "") ?  (($fill_gray == 1) ? "C0C0C0" : "auto" ) : $bkgrd_color ;
	my $border_str = ($border eq "") ? "" : "<w:tcBorders>".$border."</w:tcBorders>";

	my $v_align_str = ($v_align eq "") ? "" : "<w:vAlign w:val=\"".$v_align."\"/>";

	my $str =
	"<w:tc>" .
	"<w:tcPr><w:tcW w:w=\"".$grid_width."\" w:type=\"dxa\"/>" .
	$vmerge_str.
	$span_str.
	$border_str.
	"<w:shd w:val=\"clear\" w:color=\"auto\" w:fill=\"".$fill."\"/>" .
	$v_align_str .
	"</w:tcPr>" .
	$value.
	"</w:tc>";

	return $str;
}

# grid_width       :  width of this grid
# grid_span	       :  num of horizontally spanned grids
# color            :  the color string (ex. 0000FF: BLUE, 000000: BLACK)
# h_align          :  [center|left|right] align horizontally
# border_DIRECTION : -1 -> no border
#                     1 -> default
#                     2 -> thin
#		      						3 -> double
#                     4 -> border
# bold             :  1 -> bold text
# size             :  text size
# spacing_top      :  top spacing
# spacing_bot      :  bottom spacing
# spacing_line     :  line spacing
# fill_gray        :  1 -> fill gray to this grid
# grid_vmerge	     : -1 -> being merged vertically
#		      					  1 -> merging vertically
# v_align          :  [center|left|right] align vertically
sub gen_grid {
	my $value         = shift;
	my $grid_width    = shift;
	my $grid_span     = shift || 1;
	my $color         = shift || "";
	my $h_align       = shift || "";
	my $border_left   = shift || 1;
	my $border_right  = shift || 1;
	my $border_top    = shift || 1;
	my $border_bottom = shift || 1;
	my $bold          = shift || 0;
	my $size          = shift || 0;
	my $spacing_top   = shift || 0;
	my $spacing_bot   = shift || 0;
	my $spacing_line  = shift || 0;
	my $fill_gray     = shift || 0;
	my $grid_vmerge   = shift || 0;
	my $v_align       = shift || "";
	my $bkgrd_color   = shift || "";

	my $value_str  = gen_paragraph ($value, $color, $h_align, $bold, $size, $spacing_top, $spacing_bot, $spacing_line);

	return (gen_grid_by_paragraphs ($value_str, 
			$grid_width,
			$grid_span,
			$border_left,
			$border_right,
			$border_top,
			$border_bottom,
			$fill_gray,
			$grid_vmerge,
			$v_align,
	    $bkgrd_color
      ));
}

# color            : the color string (ex. 0000FF: BLUE, 000000: BLACK)
# align            : [center|left|right] align horizontally
# bold             : 1 -> bold text
# size             : text size
# spacing_top      : top spacing
# spacing_bot      : bottom spacing
# spacing_line     : line spacing
# indent_left      : left indent
# indent_right     : right indent
sub gen_paragraph {
	my $value	       = shift;
	my $color        = shift || "";
	my $align        = shift || "";
	my $bold         = shift || 0;
	my $size         = shift || 0;
	my $spacing_top  = shift || 0;
	my $spacing_bot  = shift || 0;   
	my $spacing_line = shift || 0;
	my $indent_left  = shift || 0;
	my $indent_right = shift || 0;  
	my $is_array     = shift || 0;
	my $has_tag			 = shift || 0;
	my $tag_name		 = shift || "";
	my $has_hlink		 = shift || 0;
	my $link_target	 = shift || "";
	my $underline		 = shift || 0;

	my $bold_str    = ($bold > 0) ? "<w:b/><w:b-cs/>" : "";
	my $size_str    = ($size > 0) ? "<w:sz w:val=\"".$size."\"/><w:sz-cs w:val=\"".$size."\"/>" : "";
	my $color_str   = ($color ne "") ? "<w:color w:val=\"".$color."\"/>" : "";
	my $align_str   = ($align ne "") ? "\n<w:jc w:val=\"".$align."\"/>\n" : "";  
	my $indent_left_str  = ($indent_left  > 0) ? "w:left=\"".$indent_left."\""  : "";
	my $indent_right_str = ($indent_right > 0) ? "w:right=\"".$indent_right."\"" : "";
	my $indent_str       = ($indent_left_str . " " . $indent_right_str);
	$indent_str          = ($indent_str ne " ") ? "<w:ind ". $indent_str ."/>" : "";
	my $underline_str		 = ($underline) ? "<w:rPr><w:u w:val=\"single\" /> </w:rPr>" : "";

	my $sp_line_str      = ($spacing_line > 0) ? "w:line=\"".$spacing_line."\" w:line-rule=\"exact\"" : 
	"w:line=\"240\" w:line-rule=\"auto\"";
	my $spacing_str      = "<w:spacing w:before=\"".$spacing_top."\" w:after=\"".$spacing_bot."\" ".$sp_line_str."/>";

	my $rPr_str = 
	"<w:rPr>" .
	"<w:rFonts w:ascii=\"Arial\" w:h-ansi=\"Arial\" w:cs=\"Arial\"/>" .
	"<wx:font wx:val=\"Arial\"/>" .
	$bold_str .
	$size_str .
	$color_str .
	"</w:rPr>";
	
	my $tag_str = ($has_tag) ? gen_tag ($tag_name) : "";

	my $str = "<w:p>";
	$str .= 
	"<w:pPr>" .
	$spacing_str .
	$indent_str . 
	$align_str .
	$rPr_str .
	"</w:pPr>";
	
	$str .= $tag_str if ($has_tag);

	$link_target =~ s/\n//g;
	$str .= "<w:hlink w:dest=\"\" w:bookmark=\"$link_target\">" if ($has_hlink);

	if ($is_array) {
		my $size = scalar (@{$value});
		for (my $i = 0; $i < $size; $i ++) {
			$str .= ("<w:r>".$rPr_str."<w:br/></w:r>") if ($i > 0);
			$str .= ("<w:r>".$rPr_str. $underline_str ."<w:t>".text2xml (${$value} [$i])."</w:t></w:r>");
		}
	} else {
		$str .= ("<w:r>".$rPr_str. $underline_str ."<w:t>".text2xml ($value)."</w:t></w:r>");
	}
	$str .= "</w:hlink>" if ($has_hlink);
	$str .= "</w:p>";

	return $str;
}

sub gen_tag {
	my $tag_name = shift;
	$tag_name =~ s/\n//g;
	my $str = "";
	$str .= "<aml:annotation aml:id=\"$TAG_INDEX\" w:type=\"Word.Bookmark.Start\" w:name=\"${tag_name}\" />";
	$str .= "<aml:annotation aml:id=\"$TAG_INDEX\" w:type=\"Word.Bookmark.End\" />";
	$TAG_INDEX ++;
	return $str;
}

sub gen_header_row {
	my $reg = shift;
	my $blk_index = shift;
	my $reg_grp = shift;
	my $str;

	my $total_grids = $BITS_PER_ROW + 1;

	my $span_addr   = 2;
	my $span_name   = 3;
	my $span_offset = 2;
	my $span_desc   = $total_grids - ($span_addr + $span_name + $span_offset);

	#my $span_desc = int($BITS_PER_ROW * 0.7);
	#my $span_name = $BITS_PER_ROW - $span_desc;

	my $addr = "";
	my $abs_addr = "";
	my $rel_addr = "";
	my $group_offset = 0;
	my $blk_count = 1;
	my $reg_count = 1;
	my $reg_name = $reg->{"name"};

#	if ($reg_grp ne "" and $reg_grp->{"count"} =~ /^\s*(\d+)\s*$/)
#	{
#		if ($1 > 1)
#		{
#			$blk_count = $1;
#			$reg_name .= "_" . $blk_index;
#		}
#	}
	if ($reg->{"count"} =~ /^\s*(\d+)\s*$/)
	{
		$reg_count = $1;
	}

	if ($reg_grp ne "")
	{
		my $reg_offset;
		foreach my $tmp_reg(@{$reg_grp->{"block-register"}})
		{
			$tmp_reg->{"name"} = $mod_name . "_" . $tmp_reg->{"name"} if ($module_prefix && $tmp_reg->{"name"} ne "RESERVED");
			if ($tmp_reg->{"name"} eq $reg->{"name"})
			{
				$reg_offset = $tmp_reg->{"offset"};
				last;
			}
		}

		my $blk_name = $reg_grp -> {"name"};
		$reg_name = $blk_name . "_${reg_name}" if (! $module_prefix);
		$reg_name =~ s/$mod_name/${mod_name}_${blk_name}/ if ($module_prefix);
		$rel_addr = String2Value($reg_grp->{"address"}->{"address"}) + 
		$blk_index * RegisterXmlParser::GetByteSize($reg_grp) / $blk_count + 
		String2Value($reg_offset);
		$abs_addr = String2Value($base_addr) + $rel_addr;
		if($reg_count > 1)
		{
			$reg_name .= "[n]\n(n=0~" . ($reg_count - 1) . ")";
			my $last_rel_addr = String2Value($reg_grp->{"address"}->{"address"}) + 
			$blk_index * RegisterXmlParser::GetByteSize($reg_grp) / $blk_count + 
			String2Value($reg_offset) + 
			($reg_count - 1) * String2Value($reg -> {"width"}) / 8;				
			my $last_abs_addr = String2Value($base_addr) + $last_rel_addr;
			$rel_addr = Dec2Hex($reg->{"width"},$rel_addr) . "~\n" . Dec2Hex($reg->{"width"},$last_rel_addr);
			$abs_addr = Dec2Hex($reg->{"width"},$abs_addr) . "~\n" . Dec2Hex($reg->{"width"},$last_abs_addr);
		}
		else
		{
			$rel_addr = Dec2Hex($reg->{"width"},$rel_addr);
			$abs_addr = Dec2Hex($reg->{"width"},$abs_addr);
		}		
	}
	else
	{
		if ($reg_count > 1)
		{
			$reg_name .= "[n]\n(n=0~" . ($reg_count - 1) . ")";
			$abs_addr = Dec2Hex ($reg -> {"width"}, String2Value($reg->{"address"}));
			$rel_addr = Dec2Hex ($reg -> {"width"},String2Value($reg->{"rel_address"}));
			my $last_rel_addr = String2Value($reg->{"rel_address"}) + ($reg_count - 1) * String2Value($reg -> {"width"}) / 8;
			$abs_addr .= "~\n" . Dec2Hex ($reg -> {"width"}, String2Value($base_addr) + $last_rel_addr);	
			$rel_addr .= "~\n" . Dec2Hex ($reg -> {"width"}, $last_rel_addr);			
		}
		else
		{
			$rel_addr = ($keep_addr_format == 1) ? $reg->{"rel_address"} : Dec2Hex ($reg -> {"width"}, String2Value($reg->{"rel_address"}));
			$abs_addr = Dec2Hex ($reg -> {"width"}, String2Value($reg->{"address"}));
		}
	}

	if ($print_offset) {
		$addr = $mod_name . " +" . $rel_addr;
	} else {
		$addr = $abs_addr;
	}

	my $addr_str = "";
	my $name_str = "";

	if ($addr ne "")
	{
		my @lines = split (/\n/, $addr);
		$addr_str  = gen_paragraph (\@lines,          "000000", "left",  1, 20, 120, 60, 240,0,0,1);
	}
	if ($reg_name ne "")
	{
		my @lines = split (/\n/, $reg_name);
		$name_str  = gen_paragraph (\@lines,          "000000", "left",  1, 20, 120, 60, 240,0,0,1, 1, "TAG_${reg_name}", 1, "TAG_${reg_name}_SUMMARY", 1);
	}

	my $desc_str  = gen_paragraph ($reg->{"description"},   "000000", "left",  1, 20, 120, 60, 240);
	my $raddr_str = gen_paragraph ($reg->{"default-value"}, "000000", "right", 1, 20, 120, 60, 240);

	$str .= "<w:tr>";
	$str .= gen_grid_by_paragraphs ($addr_str,  $TITLE_WIDTH + $CELL_WIDTH, $span_addr,   -1, -1, -1, 1,"","","center");		
	$str .= gen_grid_by_paragraphs ($name_str,  $CELL_WIDTH * $span_name,   $span_name,   -1, -1, -1, 1,"","","center");		
	$str .= gen_grid_by_paragraphs ($desc_str,  $CELL_WIDTH * $span_desc,   $span_desc,   -1, -1, -1, 1,"","","center");		
	$str .= gen_grid_by_paragraphs ($raddr_str, $CELL_WIDTH * $span_offset, $span_offset, -1, -1, -1, 1,"","","center");		
	$str .= "</w:tr>";

	return $str;
}

sub gen_bit_index_row {
	my $start_bit    = shift;
	my $bits_per_row = shift;
	my $ascending    = shift || 0;
	my $str;

	$str .= "<w:tr>";
	$str .= gen_grid("Bit", $TITLE_WIDTH, 1, "", "center", 4, 4, 4, 4, 1, 18, 0, 0, 180);


	my $end_bit = ($ascending) ? ($start_bit + $bits_per_row) : ($start_bit - $bits_per_row);
	my $incr    = ($ascending) ? 1 : -1;

	for (my $i = $start_bit; $i != $end_bit; $i += $incr) {
		$str .= gen_grid($i, $CELL_WIDTH, 1, "", "center", 1, 1, 4, 4, 0, 18, 0, 0, 180);
	}

	$str .= "</w:tr>";
	return $str;
}

sub gen_field_row {
	my $row     = shift;
	my $reverse = shift || 0;

	my $line1;
	my $line2;
	my $line3;
	my $line_modeVal="";

	$line1 .= "<w:tr>";
	$line1 .= gen_grid($REG_TABLE_NAME,   $TITLE_WIDTH, 1, "", "center", 4, 4, 4, 1, 1, 18, 0, 0, 180,"","","center");

#	$line2 .= "<w:tr>";
#	$line2 .= gen_grid("Type",  $TITLE_WIDTH, 1, "", "center", 4, 4, 1, 1, 1, 18, 0, 0, 180,"","","center");

	$line2 .= "<w:tr>";
	$line2 .= gen_grid("Reset", $TITLE_WIDTH, 1, "", "center", 4, 4, 1, 1, 1, 18, 0, 0, 180,"","","center");
	
  $line3 .= "<w:tr>";
	$line3 .= gen_grid("MCU",  $TITLE_WIDTH, 1, "", "center", 4, 4, 1, 1, 1, 18, 0, 0, 180,"","","center");
	

  ## Extra lines' header for field information : BEGIN
  my %extra_lines;
  if (scalar (%curr_extra_field_info)) { 
    foreach my $info (keys %curr_extra_field_info) {
    	my $tmp_line;
    	$tmp_line .= "<w:tr>";
	    $tmp_line .= gen_grid($info,   $TITLE_WIDTH, 1, "", "center", 4, 4, 1, 1, 1, 18, 0, 0, 180);
		#print("$info\n");

      $extra_lines{$info} = $tmp_line ;
    }
  }
  ## Extra lines' header for field information : END

	my $size = scalar (@{$row});
	my $from = ($reverse) ? $size-1 : 0;
	my $to   = ($reverse) ? ($from - $size) : ($from + $size);
	my $incr = ($reverse) ? -1 : 1;

	for (my $i = $from; $i != $to; $i += $incr) {

		my $elm = ${$row}[$i];

		if ($elm->_name eq "") {
			for (my $i = 0; $i < $elm->_width; $i ++) {
				$line1 .= gen_grid("", $CELL_WIDTH, 1, "", "center", 1, 1, 4, 1, 0, 16, 0, 0, 180, 1);
				$line2 .= gen_grid("", $CELL_WIDTH, 1, "", "center", 1, 1, 1, 1, 0, 16, 0, 0, 180, 1);
				$line3 .= gen_grid("", $CELL_WIDTH, 1, "", "center", 1, 1, 1, 1, 0, 16, 0, 0, 180, 1);

        foreach my $info (keys %extra_lines) {
				  $extra_lines{$info} .= gen_grid("", $CELL_WIDTH, 1, "", "center", 1, 1, 1, 1, 0, 16, 0, 0, 180, 1);
        }
			}
		} else {    
			if ($elm->_mne ne "") {			
					$line1 .= gen_grid($elm->_mne,    $CELL_WIDTH * $elm->_width, $elm->_width, "000000", "center", 1, 1, 4, 1, 1, 16, 0, 0, 180, 0, 0, "center");
			} else {
				$line1 .= gen_grid($elm->_name,    $CELL_WIDTH * $elm->_width, $elm->_width, "000000", "center", 1, 1, 4, 1, 1, 16, 0, 0, 180, 0, 0, "center");
			}						
			$line3 .= gen_grid($elm->_access, $CELL_WIDTH * $elm->_width, $elm->_width, "000000", "center", 1, 1, 1, 1, 0, 16, 0, 0, 180, 0, 0, "center");

			if ($elm -> _default !~ /^[01xz]+$/ or length($elm -> _default) != $elm -> _width) {
				my $bfrom = ($reverse) ? $elm -> _width -1 : 0;       
				my $bto   = ($reverse) ? ($bfrom - $elm -> _width) : ($bfrom + $elm -> _width);  
				for (my $j = $bfrom; $j != $bto; $j += $incr) {
					my $bit = $elm -> _default;
					$line2 .= gen_grid($bit, $CELL_WIDTH, 1, "000000", "center", 1, 1, 1, 1, 0, 16, 0, 0, 180, 0, 0, "center");
				}
			} else {
				my @vals = split (//, $elm -> _default);
				my $bsize = scalar (@vals);
				my $bfrom = ($reverse) ? $bsize-1 : 0;
				my $bto   = ($reverse) ? ($bfrom - $bsize) : ($bfrom + $bsize);
    
				for (my $j = $bfrom; $j != $bto; $j += $incr) {
					my $bit = $vals [$j];
					$line2 .= gen_grid($bit, $CELL_WIDTH, 1, "000000", "center", 1, 1, 1, 1, 0, 16, 0, 0, 180, 0, 0, "center");
				}    
			}

    ## Extra lines for field information : BEGIN
      my $extra_info = $elm -> _usr_def ; 
      foreach my $info (keys %extra_lines) {
        my $info_val = ${ $extra_info } { $info };
        $info_val = "" if (!defined $info_val);
        $extra_lines{$info} .= gen_grid($info_val, $CELL_WIDTH * $elm->_width, $elm->_width, "000000", "center", 1, 1, 1, 1, 0, 18, 0, 0, 180, 0, 0, "center");
		  }
    ## Extra lines for field information : END
		}
	}

	$line1 .= "</w:tr>";
	$line2 .= "</w:tr>";
	$line3 .= "</w:tr>";

  my $line4 ="";
  # cat extra lines: BEGIN
  my $line_n = '';
  foreach my $info (@extra_field_info) {   # print in order
    next if (!exists $extra_lines{$info}) ;

    if($info ne "DSP") {
      $extra_lines{$info} .= "</w:tr>";
      $line_n .= $extra_lines{$info};
    } else {
    	$extra_lines{$info} .= "</w:tr>";
    	$line4 = $extra_lines{$info};
    }
  }
  # cat extra lines: END 

  my $line_modeValue = ""; 
  if ( $print_mode_value ) { $line_modeValue = &gen_field_mode_value_row($row, $reverse); }

	return $line1.$line2.$line3.$line4.$line_modeValue.$line_n;
}

sub gen_table {
	my $reg	        = shift;
	my $rows        = shift;
	my $table_style = shift;
	my $reverse     = shift || 0;
	my $blk_index		= shift;
	my $reg_grp     = shift;
	my $str;

	$str .=
	"<w:tbl>" .
	"<w:tblPr>" .
	"<w:tblStyle w:val=\"".$table_style."\"/>" .
	"<w:tblW w:w=\"5000\" w:type=\"pct\"/>" .
	"<w:tblLayout w:type=\"Fixed\"/>" .
	"<w:tblLook w:val=\"01E0\"/>" .
	"</w:tblPr>" .
	"<w:tblGrid>" .
	"<w:gridCol w:w=\"".$TITLE_WIDTH."\"/>";

	for (my $i=0; $i<$BITS_PER_ROW; $i++) {
		$str .= "<w:gridCol w:w=\"".$CELL_WIDTH."\"/>";
	}
	$str .= "</w:tblGrid>";
	$str .= gen_header_row ($reg, $blk_index,$reg_grp);

	my $start_bit = ($reverse) ? 0 : (((int(($reg->{"width"}-1)/$BITS_PER_ROW) + 1 ) * $BITS_PER_ROW) - 1);
	my $incr_bit  = ($reverse) ? $BITS_PER_ROW : -($BITS_PER_ROW);

	my $size = scalar (@{$rows});
	my $from = ($reverse) ? $size-1 : 0;
	my $to   = ($reverse) ? ($from - $size) : ($from + $size);
	my $incr = ($reverse) ? -1 : 1;

	for (my $i = $from; $i != $to; $i += $incr) {
		my $row = ${$rows} [$i];

		$str .= gen_bit_index_row($start_bit, $BITS_PER_ROW, $reverse);
		$str .= gen_field_row($row, $reverse);

		$start_bit += $incr_bit;
	}
	$str .= "</w:tbl>";

	return $str;
}


sub gen_history_table_sect {
	my $history = shift;
	my $mod_name = shift;
	my $table_style = shift;
	my $str =
	"<wx:sect>" .
	gen_history_table($history, $mod_name, $table_style) .
	"<w:sectPr>" .
	"<w:pgSz w:w=\"11906\" w:h=\"18838\"/>" .
	"<w:pgMar w:top=\"1440\" w:right=\"1080\" w:bottom=\"1440\" w:left=\"1080\" w:header=\"708\" w:footer=\"708\" w:gutter=\"0\"/>" .
	"</w:sectPr>" .
	"</wx:sect>";
	
	$str .= gen_dummy();

	return $str;	
}

sub gen_history_table {
	my $history     = shift;
	my $mod_name    = shift;
	my $table_style = shift;
	my $str = "";

	$str .=
	"<w:tbl>" .
	"<w:tblPr>" .
	"<w:tblStyle w:val=\"".$table_style."\"/>" .
	"<w:tblW w:w=\"5000\" w:type=\"pct\"/>" .
	"<w:tblLayout w:type=\"Fixed\"/>" .
	"<w:tblLook w:val=\"01E0\"/>" .
	"</w:tblPr>" .
	"<w:tblGrid>" .
	"<w:gridCol w:w=\"".$HISTORY_REVISION_WIDTH."\"/>" .
	"<w:gridCol w:w=\"".$HISTORY_DATE_WIDTH."\"/>" .
	"<w:gridCol w:w=\"".$HISTORY_AUTHOR_WIDTH."\"/>" .
	"<w:gridCol w:w=\"".$HISTORY_LOG_WIDTH."\"/>" .
	"</w:tblGrid>";
	my $history_header = gen_history_header($mod_name);
	$str .= "<w:tr>";
	$str .= gen_grid_by_paragraphs ($history_header,  $SUM_TOTAL_WIDTH, 4,   -1, -1, -1, 1);
	$str .= "</w:tr>";
	
	$str .= gen_history_str ($history);
	$str .= "</w:tbl>";

	return $str;	
}

sub gen_history_header {
	my $mod_name = shift;
	return gen_paragraph ((sprintf "%s Changes LOG",$mod_name), "0000FF", "left", 1, 24, 0, 120);
}

sub gen_history_str {
	my $history = shift;
	my $str = "";

	my $str1 = gen_paragraph ("Revision", "", "left", 1, 18, 40, 40, 180);
	my $str2 = gen_paragraph ("Date",   "", "left", 1, 18, 40, 40, 180);
	my $str3 = gen_paragraph ("Author",   "", "left", 1, 18, 40, 40, 180);
	my $str4 = gen_paragraph ("Change Log",   "", "left", 1, 18, 40, 40, 180);

	$str .= "<w:tr>";
	$str .= gen_grid_by_paragraphs ($str1, $HISTORY_REVISION_WIDTH,     1, 1, 1, 1, 3);		
	$str .= gen_grid_by_paragraphs ($str2, $HISTORY_DATE_WIDTH,  1, 1, 1, 1, 3);
	$str .= gen_grid_by_paragraphs ($str3, $HISTORY_AUTHOR_WIDTH,  1, 1, 1, 1, 3);
	$str .= gen_grid_by_paragraphs ($str4, $HISTORY_LOG_WIDTH,  1, 1, 1, 1, 3);	
	$str .= "</w:tr>";
	foreach my $ele(@{$history}) {
		my $revision = $ele -> {"revision"};
		my $date = $ele -> {"date"};
		my $author = $ele -> {"author"};
		my $desc = $ele -> {"description"};
		$str1 = gen_paragraph ($revision, "", "left", 1, 18, 40, 40, 180);
		$str2 = gen_paragraph ($date,   "", "left", 1, 18, 40, 40, 180);
		$str3 = gen_paragraph ($author,   "", "left", 1, 18, 40, 40, 180);
		$str4 = gen_paragraph ($desc,   "", "left", 1, 18, 40, 40, 180);

		$str .= "<w:tr>";
		if ($revision =~ /^\s*$/ and $date =~ /^\s*$/ and $author =~ /^\s*$/ and $desc =~ /^\s*$/) {
			$str .= gen_grid_by_paragraphs ($str1, $SUM_TOTAL_WIDTH,     4, 1, 1, 1, 1, 1);
		} else {
			$str .= gen_grid_by_paragraphs ($str1, $HISTORY_REVISION_WIDTH,     1, 1, 1, 1, 1);		
			$str .= gen_grid_by_paragraphs ($str2, $HISTORY_DATE_WIDTH,  1, 1, 1, 1, 1);
			$str .= gen_grid_by_paragraphs ($str3, $HISTORY_AUTHOR_WIDTH,  1, 1, 1, 1, 1);
			$str .= gen_grid_by_paragraphs ($str4, $HISTORY_LOG_WIDTH,  1, 1, 1, 1, 1);
		}
		$str .= "</w:tr>";
	}

	return $str;
}

sub gen_overview_sect {
	my $reg         = shift;
	my $table_style = shift;
 
  return gen_single_reg_info_sect("Overview", "Documentation", $reg, $table_style); 
}

sub gen_extra_reg_info_sect {
	my $reg         = shift;
	my $table_style = shift;

  my $str = "";

#  foreach my $reg_info (sort keys %curr_extra_reg_info) {
  foreach my $reg_info (@extra_reg_info) {
    next if (!exists $curr_extra_reg_info{$reg_info}) ;

    next if ($print_overview && ($reg_info eq "Documentation")) ;   # avoid duplicated print  

    my $title = ($reg_info eq "Documentation") ? "Overview" : $reg_info;  # backword compatible '-overview' option
  	$str .= gen_single_reg_info_sect ($title, $reg_info, $reg, $table_style);
    #$str .= gen_dummy ();
  }
  $str .= gen_dummy () if ($str ne "");

  return  $str ;
}

sub gen_single_reg_info_sect {
 	my $title       = shift;
 	my $info_name   = shift;
	my $reg         = shift;
	my $table_style = shift;

  my $doc_str = "";

#my $doc_str = $reg -> {"user-defined"} -> {"Documentation"};
  if    ($curr_extra_reg_info{$info_name}) { $doc_str = $reg -> {$info_name};}                      #  defined && eq 1
  else                                     { $doc_str = $reg -> {"user-defined"} -> {$info_name};}  # !defined || eq 0

	return "" if (!defined $doc_str);

	my $str =
	"<wx:sect>" .
	gen_reg_info_table ($title, $doc_str, $table_style).
	"<w:sectPr>" .
	"<w:pgSz w:w=\"11906\" w:h=\"18838\"/>" .
	"<w:pgMar w:top=\"1440\" w:right=\"1080\" w:bottom=\"1440\" w:left=\"1080\" w:header=\"708\" w:footer=\"708\" w:gutter=\"0\"/>" .
	"</w:sectPr>" .
	"</wx:sect>";

	return $str;
}

sub gen_reg_info_table {
	my $title       = shift;
	my $doc_str     = shift;
	my $table_style = shift;
	my $str = "";

	$str .=
	"<w:tbl>" .
	"<w:tblPr>" .
	"<w:tblStyle w:val=\"".$table_style."\"/>" .
	"<w:tblW w:w=\"5000\" w:type=\"pct\"/>" .
	"<w:tblLayout w:type=\"Fixed\"/>" .
	"<w:tblLook w:val=\"01E0\"/>" .
	"</w:tblPr>" .
	"<w:tblGrid>" .
	"<w:gridCol w:w=\"".$REG_TITLE_WIDTH."\"/>" .
	"<w:gridCol w:w=\"".$REG_OVERVIEW_WIDTH."\"/>" .
	"</w:tblGrid>";
	$str .= gen_reg_info_str ($title, $doc_str);
	$str .= "</w:tbl>";

	return $str;
}

sub gen_reg_info_str {
	my $title   = shift;
	my $doc_str = shift;
	my $str = "";

	my $str1 = gen_paragraph ($title  , "", "left", 1, 18, 40, 40, 180);
	my $str2 = gen_paragraph ($doc_str, "", "left", 0, 18, 40, 40, 180);

	$str .= "<w:tr>";
	$str .= gen_grid_by_paragraphs ($str1, $REG_TITLE_WIDTH,     1, -1, -1, -1, -1);		
	$str .= gen_grid_by_paragraphs ($str2, $REG_OVERVIEW_WIDTH,  1, -1, -1, -1, -1);		
	$str .= "</w:tr>";

	return $str;
}

sub gen_field_table_sect {
	my $reg           = shift;
	my $table_style   = shift;
	my $little_endian = shift || 0;

	my $str =
	"<wx:sect>" .
	gen_field_table ($reg, $table_style, $little_endian).
	"<w:sectPr>" .
	"<w:pgSz w:w=\"11906\" w:h=\"18838\"/>" .
	"<w:pgMar w:top=\"1440\" w:right=\"1080\" w:bottom=\"1440\" w:left=\"1080\" w:header=\"708\" w:footer=\"708\" w:gutter=\"0\"/>" .
	"</w:sectPr>" .
	"</wx:sect>";

	return $str;
}

sub gen_field_table {
	my $reg         = shift;
	my $table_style = shift;
	my $ascending   = shift || 0;
	my $str = "";

	$str .=
	"<w:tbl>" .
	"<w:tblPr>" .
	"<w:tblStyle w:val=\"".$table_style."\"/>" .
	"<w:tblW w:w=\"5000\" w:type=\"pct\"/>" .
	"<w:tblLayout w:type=\"Fixed\"/>" .
	"<w:tblLook w:val=\"01E0\"/>" .
	"</w:tblPr>" .
	"<w:tblGrid>" .
	"<w:gridCol w:w=\"".$FLD_BITS_WIDTH."\"/>" .
	"<w:gridCol w:w=\"".$FLD_MNE_WIDTH."\"/>" .
	"<w:gridCol w:w=\"".$FLD_NAME_WIDTH."\"/>" .
	"<w:gridCol w:w=\"".$FLD_DESC_WIDTH."\"/>";
	$str .= "</w:tblGrid>";
	my $exist_mne = 0;

	my @text = ();
	my $size = scalar (@{$reg -> {"field"}});
	my $last  = ($ascending) ? $size-1 : 0;
	my $first = ($ascending) ? ($last - $size) : ($last + $size);
	my $incr  = ($ascending) ? -1 : 1;
	my $last_row = 1;

	for (my $i = $last; $i != $first; $i += $incr) {
		my $field = ${$reg -> {"field"}} [$i];
		next if ($field -> {"name"} =~ /^RESERVED/i || $field -> {"name"} eq "");
		if (exists $field -> {"user-defined"} -> {"MNE"}) { $exist_mne = 1; }
		unshift @text, gen_field_table_row ($field, $last_row);
		$last_row = 0;
	}
	my $table_text = join ("", @text);
	$str .= gen_field_table_header($exist_mne);
	$str .= $table_text;

	$str .= "</w:tbl>";

	return $str;
}

sub gen_field_table_header {
	my ($gen_mne_col) = @_;
	my $str = "";

	my $bit_str  = gen_paragraph ("Bit(s)",      "", "center", 1, 18, 40, 40, 200);
	my $mne_str  = gen_paragraph ("Mnemonic",    "", "left",   1, 18, 40, 40, 200);
	my $name_str = gen_paragraph ("Name",        "", "left",   1, 18, 40, 40, 200);
	my $desc_str = gen_paragraph ("Description", "", "left",   1, 18, 40, 40, 200, 100);

	$str .= "<w:tr>";
	# set Repeat Header Row
	$str .= "<w:trPr><w:tblHeader/></w:trPr>";
	
	$str .= gen_grid_by_paragraphs ($bit_str,  $FLD_BITS_WIDTH, 1, -1, -1, 1, 1);		
	$str .= gen_grid_by_paragraphs ($mne_str,  $FLD_MNE_WIDTH,  1, -1, -1, 1, 1) if ($gen_mne_col);		
	$str .= gen_grid_by_paragraphs ($name_str, $FLD_NAME_WIDTH, 1, -1, -1, 1, 1);		
	$str .= gen_grid_by_paragraphs ($desc_str, $FLD_DESC_WIDTH, 1, -1, -1, 1, 1);		
	$str .= "</w:tr>";

	return $str;
}

sub gen_field_table_row {
	my $field    = shift;
	my $last_row = shift;
	my $str = "";

	my $lsb = $field -> {"position"};
	my $msb = $lsb + $field -> {"width"} - 1;

	my $bits = ($lsb == $msb) ? $lsb : ($msb . ":" . $lsb);
	my $name = $field -> {"name"};
	my $mne  = $field -> {"user-defined"} -> {"MNE"};
	$mne = $name if (!defined $mne);

	my $desc = $field -> {"description"};
	my $doc  = "";

	if ($desc !~ /^\s*$/) {
		my @lines = split (/\n/, $desc);
		$desc = shift (@lines);
		$doc = join ("\n", @lines);
	}

	if ($field -> {"documentation"} ne "") {
		$doc .= "\n" if ($doc ne "");
		$doc .= $field -> {"documentation"};
	}

	my $tmp_str1 = ($desc !~ /^\s*$/) ? gen_paragraph ($desc, "", "left", 1, 18, 40, 40, 200, 100) : "";#add left indent

	my $enum_desc = gen_enum_desc_string ($field);

	if ($enum_desc ne "") {
		$doc .= "\n" if ($doc ne "");
		$doc .= $enum_desc;
	}

	my $tmp_str2 = "";
	if ($doc ne "") {
		my @lines = split (/\n/, $doc);
		$tmp_str2 .= gen_paragraph (\@lines, "", "left", 0, 18, 40, 40, 200, 100, 0, 1); #add left indent
	}

	my $desc_str = ($tmp_str1 . $tmp_str2);
	$desc_str = gen_paragraph ("", "", "", 0, 0, 40, 40, 200, 100) if ($desc_str eq "");

	my $btm_border = ($last_row) ? 2 : -1;

	$str .= "<w:tr>";

	$str .= gen_grid ($bits, $FLD_BITS_WIDTH, 1, "000000", "center", -1, -1, -1, $btm_border, 0, 18, 40, 40, 200);
	$str .= gen_grid ($mne,  $FLD_MNE_WIDTH,  1, "000000", "left",   -1, -1, -1, $btm_border, 1, 18, 40, 40, 200) if (exists $field -> {"user-defined"} -> {"MNE"});
	$str .= gen_grid ($name, $FLD_NAME_WIDTH, 1, "000000", "left",   -1, -1, -1, $btm_border, 0, 18, 40, 40, 200);
	$str .= gen_grid_by_paragraphs ($desc_str, $FLD_DESC_WIDTH, 1, -1, -1, -1, $btm_border);

	$str .= "</w:tr>";

	return $str;
}

sub gen_enum_desc_string {
	my $field = shift;

	my $str = "";

	foreach my $enum (@{$field -> {'enum'}}) {
		my $value = $enum -> {'value'};
		my $desc  = $enum -> {'description'};
		my $doc   = $enum -> {'documentation'};

		next if ($value eq "");

		if ($desc ne "") {
			$value .= (": " . $desc);
		}
		if ($doc ne "") {
			$value .= (" " . $doc);
		}
		$str .= ($value . "\n");
	}

	return $str;
}

sub gen_summary {
	my $all_elms    = shift;
	my $table_style = shift;
	my $str;

	$str .=
	"<w:tbl>" .
	"<w:tblPr>" .
	"<w:tblStyle w:val=\"".$table_style."\"/>" .
	"<w:tblW w:w=\"5000\" w:type=\"pct\"/>" .
	"<w:tblLayout w:type=\"Fixed\"/>" .
	"<w:tblLook w:val=\"01E0\"/>" .
	"</w:tblPr>" .
	"<w:tblGrid>" .
	"<w:gridCol w:w=\"".$SUM_ADDR_WIDTH."\"/>" .
	"<w:gridCol w:w=\"".$SUM_NAME_WIDTH."\"/>" .
	"<w:gridCol w:w=\"".$SUM_WIDTH_WIDTH."\"/>" .
	"<w:gridCol w:w=\"".$SUM_DESC_WIDTH."\"/>";
	$str .= "</w:tblGrid>";
	my $mod_header .= gen_base_addr();
	$str .= "<w:tr>";
	$str .= gen_grid_by_paragraphs ($mod_header,  $SUM_TOTAL_WIDTH, 4,   -1, -1, -1, 1);
	$str .= "</w:tr>";
	$str .= gen_summary_header();

	foreach my $elm (@{$all_elms}) {
		if ($elm -> {"type"} eq "BLOCK") {
			$str .= gen_summary_block ($elm);
			next;
		}
		if ($elm -> {"type"} eq "REGISTER") {
			$str .= gen_summary_register ($elm);
			next;
		}
	}

	$str .= "</w:tbl>";

	return $str;
}
sub gen_summary_header {
	my $str;

	my $addr_str  = gen_paragraph ("Address",           "", "center",   1, 20, 40, 40, 180);
	my $name_str  = gen_paragraph ("Name",              "", "center",   1, 20, 40, 40, 180);
	my $width_str = gen_paragraph ("Width",             "", "center", 	1, 20, 40, 40, 180);
	my $desc_str  = gen_paragraph ("Register Function", "", "center",   1, 20, 40, 40, 180);

	$str .= "<w:tr>";
	$str .= gen_grid_by_paragraphs ($addr_str,  $SUM_ADDR_WIDTH,  1, 1, 1, 4, 1);	
	$str .= gen_grid_by_paragraphs ($name_str,  $SUM_NAME_WIDTH,  1, 1, 1, 4, 1);		
	$str .= gen_grid_by_paragraphs ($width_str, $SUM_WIDTH_WIDTH, 1, 1, 1, 4, 1);		
	$str .= gen_grid_by_paragraphs ($desc_str,  $SUM_DESC_WIDTH,  1, 1, 1, 4, 1);		
	$str .= "</w:tr>";

	return $str;
}

sub gen_summary_block {
	my $block = shift;
	my $str = "";

	return "" if ($block -> {"name"} =~ /^RESERVED/i || $block -> {"name"} eq "");

	my $blk_name = $block -> {"name"};
	my $blk_addr = $block -> {"address"} -> {"address"};

#	my $count = $block -> {"count"};
	my $count = 1;
#	$count = 1 if ($count eq "" || $count < 1);

	for (my $i = 0; $i < $count; $i ++) {
		my $curr_blk_name = $blk_name;
#		if ($count > 1) {
#			$curr_blk_name = $blk_name . "_" . $i;
#		}

		foreach my $blk_reg (@{$block -> {"block-register"}}) {

			next if ($blk_reg -> {"name"} =~ /^RESERVED/i || $blk_reg -> {"name"} eq "");
			my $reg = $blk_reg -> {"reference"};
			my $reg_count = $reg->{"count"};
			$reg_count = 1 if ($reg_count eq "" || $reg_count < 1);
#			for (my $reg_index = 0; $reg_index < $reg_count; $reg_index ++)
#			{

			my $name = $reg -> {"name"};
			$name  = $curr_blk_name . "_" . $reg -> {"name"} if (! $module_prefix);
			$name =~ s/$mod_name/${mod_name}_${curr_blk_name}/ if ($module_prefix);
			if ($count > 1)
			{
				$name .= "_" . $i;
			}

			my $width = $reg -> {"width"};
			my $desc  = $reg -> {"description"};
			my $doc   = $reg -> {"documentation"};
			my $addr  = Dec2Hex ($width,
				String2Value ($blk_reg -> {"offset"}) + 			                     
				String2Value ($blk_addr) + 
				$i * RegisterXmlParser::GetByteSize($block) / $count +
				String2Value ($base_addr));
			if ($reg_count > 1)
			{
				$name .= "[n]\n" . "(n=0~" . ($reg_count - 1) . ")";
				my $last_addr = Dec2Hex ($width,
					String2Value ($blk_reg -> {"offset"}) + 			                     
					String2Value ($blk_addr) + 
					($reg_count - 1) * $reg -> {"width"} / 8 +
					$i * RegisterXmlParser::GetByteSize($block) / $count +
					String2Value ($base_addr));
				$addr .= "~\n${last_addr}";
			}

			if (defined $reg -> {"user-defined"} -> {"Documentation"}) {
				$doc .= " " if ($doc ne "");
				$doc .= $reg -> {"user-defined"} -> {"Documentation"};
			}

			$str .= gen_summary_row ($addr, $name, $width, $desc, $doc);
#			}
		}
	}
	return $str;
}

sub gen_summary_register {
	my $reg = shift;
	my $str = "";

	return "" if ($reg -> {"name"} =~ /^RESERVED/i || $reg -> {"name"} eq "");

	my $count = $reg -> {"count"};
	if ($count eq "" || $count < 1) {
		$count = 1;
	}

#	for(my $reg_index = 0; $reg_index < $count; $reg_index ++)
#	{
	my $incr  = $reg -> {"width"} / 8;

	my $name  = $reg -> {"name"};

	my $width = $reg -> {"width"};
	my $addr  = ($keep_addr_format == 1) ? $reg -> {"address"} : Dec2Hex ($width, String2Value ($reg -> {"address"}));
	my $desc  = $reg -> {"description"};
	my $doc   = "";


	if ($desc ne "") {
		my @lines = split (/\n/, $desc);
		$desc = shift (@lines);
		$doc  = join ("\n", @lines);
	}

	if ($reg -> {"documentation"} ne "") {
		$doc .= "\n" if ($doc ne "");
		$doc .= $reg -> {"documentation"};
	}

	if (defined $reg -> {"user-defined"} -> {"Documentation"}) {
		$doc .= "\n" if ($doc ne "");
		$doc .= $reg -> {"user-defined"} -> {"Documentation"};
	}

	if ($count > 1) {
		$name .= "[n]\n(n=0~" . ($count - 1) . ")";
		my $last_addr = Dec2Hex ($width,
			String2Value ($reg -> {"address"}) + 
			String2Value ($incr) * ($count - 1));
		$addr .= (" ~ \n" . $last_addr);
	}
	$str .= gen_summary_row ($addr, $name, $width, $desc, $doc);
#	}

	return $str;
}

sub gen_summary_row {
	my ($addr, $name, $width, $desc, $doc) = @_;
	my $str;

	
	my $tmp_str1 = ($desc ne "") ? gen_paragraph ($desc, "", "", 1, 18, 40, 40, 180,150) : "";
	my $tmp_str2 = "";
	if ($doc ne "") {
		my @lines = split (/\n/, $doc);
		$tmp_str2 .= gen_paragraph (\@lines, "", "", 0, 18, 40, 40, 180, 140, 0, 1);
	}
	my $desc_str = $tmp_str1 . $tmp_str2;
	$desc_str = gen_paragraph ("", "", "", 0, 0, 40, 40, 180) if ($desc_str eq "");

	$str .= "<w:tr>";
	if ($addr ne "")
	{
		my @lines = split(/\n/, $addr);
		$addr = gen_paragraph(\@lines, "", "center", 0, 18, 40, 40, 180, 0 , 0, 1, 1, "TAG_${name}_SUMMARY");
	}
	else
	{
		$addr = gen_paragraph ("", "", "", 0, 0, 40, 40, 180);
	}

	if ($name ne "")
	{
		my @lines = split(/\n/, $name);
		#my @lines = map {" ".$_} split(/\n/, $name);
		#print Dumper(\@lines);
		$name = gen_paragraph(\@lines, "", "", 1, 18, 40, 40, 180, 150 , 140, 1, 0, "", 1, "TAG_${name}",1);		
	}
	else
	{
		$name = gen_paragraph ("", "", "", 0, 0, 40, 40, 180);
	}


	#$addr_str  = gen_paragraph (\@lines,          "0000FF", "left",  1, 20, 120, 60, 240,0,0,1);
	$str .= gen_grid_by_paragraphs ($addr,  $SUM_ADDR_WIDTH, 1, 1, 1, 1, 1,"","","center");
	$str .= gen_grid_by_paragraphs ($name,  $SUM_NAME_WIDTH,  1, 1, 1, 1, 1,"","","center");
	$str .= gen_grid ($width, $SUM_WIDTH_WIDTH, 1, "", "center", 1, 1, 1, 1, 0, 18, 40, 40, 180,"","","center");
	$str .= gen_grid_by_paragraphs ($desc_str, $SUM_DESC_WIDTH, 1, 1, 1, 1, 1,"","","center");
	$str .= "</w:tr>";

	return $str;
}

#for another summary table format
sub gen_summary_1 {
	my $all_elms    = shift;
	my $table_style = shift;
	my $str;

	$str .=
	"<w:tbl>" .
	"<w:tblPr>" .
	"<w:tblStyle w:val=\"".$table_style."\"/>" .
	"<w:tblW w:w=\"5000\" w:type=\"pct\"/>" .
	"<w:tblLayout w:type=\"Fixed\"/>" .
	"<w:tblLook w:val=\"01E0\"/>" .
	"</w:tblPr>" .
	"<w:tblGrid>" .
	"<w:gridCol w:w=\"".$SUM_NAME_WIDTH."\"/>" .	
	"<w:gridCol w:w=\"".$SUM_ADDR_WIDTH."\"/>" .
	"<w:gridCol w:w=\"".$SUM_BYTE_WIDTH."\"/>" .		
	"<w:gridCol w:w=\"".$SUM_RESET_WIDTH."\"/>" .	
	"<w:gridCol w:w=\"".$SUM_TYPE_WIDTH."\"/>" .
	"<w:gridCol w:w=\"".$SUM_BIT_WIDTH."\"/>" .
	"<w:gridCol w:w=\"".$SUM_BIT_WIDTH."\"/>".
	"<w:gridCol w:w=\"".$SUM_BIT_WIDTH."\"/>".
	"<w:gridCol w:w=\"".$SUM_BIT_WIDTH."\"/>".
	"<w:gridCol w:w=\"".$SUM_BIT_WIDTH."\"/>".
	"<w:gridCol w:w=\"".$SUM_BIT_WIDTH."\"/>".
	"<w:gridCol w:w=\"".$SUM_BIT_WIDTH."\"/>".
	"<w:gridCol w:w=\"".$SUM_BIT_WIDTH."\"/>";
	$str .= "</w:tblGrid>";

	my $mod_header .= gen_base_addr();
	$str .= "<w:tr>";
	$str .= gen_grid_by_paragraphs ($mod_header,  $SUM_TOTAL_WIDTH, 13,   -1, -1, -1, 1);
	$str .= "</w:tr>";
	$str .= gen_summary_header_1();

	foreach my $elm (@{$all_elms}) {
		if ($elm -> {"type"} eq "BLOCK") {
			$str .= gen_summary_block_1 ($elm);
			next;
		}
		if ($elm -> {"type"} eq "REGISTER") {
			$str .= gen_summary_register_1 ($elm);
			next;
		}
	}

	$str .= "</w:tbl>";

	return $str;
}

sub gen_summary_header_1 {
	my $str;
	
	my $name_str  = gen_paragraph ("Name",              "", "center",   1, 20, 40, 40, 180);
	my $addr_str  = gen_paragraph ("Offset",           "", "center",   1, 20, 40, 40, 180);
	my $type_str = gen_paragraph ("Type",             "", "center", 1, 20, 40, 40, 180);
	my $byte_str  = gen_paragraph ("Byte", "", "center",   1, 20, 40, 40, 180);
	my $reset_str  = gen_paragraph ("Reset", "", "center",   1, 20, 40, 40, 180);
	my $bit7_str  = gen_paragraph ("Bit7", "", "center",   1, 20, 40, 40, 180);
	my $bit6_str  = gen_paragraph ("Bit6", "", "center",   1, 20, 40, 40, 180);
	my $bit5_str  = gen_paragraph ("Bit5", "", "center",   1, 20, 40, 40, 180);
	my $bit4_str  = gen_paragraph ("Bit4", "", "center",   1, 20, 40, 40, 180);
	my $bit3_str  = gen_paragraph ("Bit3", "", "center",   1, 20, 40, 40, 180);
	my $bit2_str  = gen_paragraph ("Bit2", "", "center",   1, 20, 40, 40, 180);
	my $bit1_str  = gen_paragraph ("Bit1", "", "center",   1, 20, 40, 40, 180);
	my $bit0_str  = gen_paragraph ("Bit0", "", "center",   1, 20, 40, 40, 180);

	$str .= "<w:tr>";
	$str .= gen_grid_by_paragraphs ($name_str,  $SUM_NAME_WIDTH,  1, 1, 1, 1, 3);			
	$str .= gen_grid_by_paragraphs ($addr_str,  $SUM_ADDR_WIDTH,  1, 1, 1, 1, 3);		
	$str .= gen_grid_by_paragraphs ($byte_str,  $SUM_BYTE_WIDTH,  1, 1, 1, 1, 3);	
	$str .= gen_grid_by_paragraphs ($reset_str,  $SUM_RESET_WIDTH,  1, 1, 1, 1, 3);	
	$str .= gen_grid_by_paragraphs ($type_str, $SUM_TYPE_WIDTH, 1, 1, 1, 1, 3);		
	$str .= gen_grid_by_paragraphs ($bit7_str,  $SUM_BIT_WIDTH,  1, 1, 1, 1, 3);
	$str .= gen_grid_by_paragraphs ($bit6_str,  $SUM_BIT_WIDTH,  1, 1, 1, 1, 3);
	$str .= gen_grid_by_paragraphs ($bit5_str,  $SUM_BIT_WIDTH,  1, 1, 1, 1, 3);
	$str .= gen_grid_by_paragraphs ($bit4_str,  $SUM_BIT_WIDTH,  1, 1, 1, 1, 3);
	$str .= gen_grid_by_paragraphs ($bit3_str,  $SUM_BIT_WIDTH,  1, 1, 1, 1, 3);
	$str .= gen_grid_by_paragraphs ($bit2_str,  $SUM_BIT_WIDTH,  1, 1, 1, 1, 3);
	$str .= gen_grid_by_paragraphs ($bit1_str,  $SUM_BIT_WIDTH,  1, 1, 1, 1, 3);
	$str .= gen_grid_by_paragraphs ($bit0_str,  $SUM_BIT_WIDTH,  1, 1, 1, 1, 3);
	$str .= "</w:tr>";

	return $str;
}

sub gen_summary_block_1 {
	my $block = shift;
	my $str = "";

	return "" if ($block -> {"name"} =~ /^RESERVED/i || $block -> {"name"} eq "");

	my $blk_name = $block -> {"name"};
	my $blk_addr = $block -> {"address"} -> {"address"};

#	my $count = $block -> {"count"};
	my $count = 1;
#	$count = 1 if ($count eq "" || $count < 1);

	for (my $i = 0; $i < $count; $i ++) {
		my $curr_blk_name = $blk_name;
#		if ($count > 1) {
#			$curr_blk_name = $blk_name . "_" . $i;
#		}

		foreach my $blk_reg (@{$block -> {"block-register"}}) {

			next if ($blk_reg -> {"name"} =~ /^RESERVED/i || $blk_reg -> {"name"} eq "");
			my $reg = $blk_reg -> {"reference"};
			my $reg_count = $reg->{"count"};
			$reg_count = 1 if ($reg_count eq "" || $reg_count < 1);
#			for (my $reg_index = 0; $reg_index < $reg_count; $reg_index ++)
#			{

			my $name = $reg -> {"name"};
			$name  = $curr_blk_name . "_" . $reg -> {"name"} if (! $module_prefix);
			$name =~ s/$mod_name/${mod_name}_${curr_blk_name}/ if ($module_prefix);
			if ($count > 1)
			{
				$name .= "_" . $i;
			}

			my $type = "R";
			my $width = $reg -> {"width"};
			my $byte = 0;
			my $addr  = Dec2Hex ($width,
				String2Value ($blk_reg -> {"offset"}) + 			                     
				String2Value ($blk_addr) + 
				$i * RegisterXmlParser::GetByteSize($block) / $count +
				String2Value ($base_addr));
			if ($reg_count > 1)
			{
				$name .= "[n]\n" . "(n=0~" . ($reg_count - 1) . ")";
				my $last_addr = Dec2Hex ($width,
					String2Value ($blk_reg -> {"offset"}) + 			                     
					String2Value ($blk_addr) + 
					($reg_count - 1) * $reg -> {"width"} / 8 +
					$i * RegisterXmlParser::GetByteSize($block) / $count +
					String2Value ($base_addr));
				$addr .= "~\n${last_addr}";
			}

			$str .= gen_summary_row_1 ($name, $addr, $reg);
#			}
		}
	}
	return $str;
}

sub gen_summary_register_1 {
	my $reg = shift;
	my $str = "";

	return "" if ($reg -> {"name"} =~ /^RESERVED/i || $reg -> {"name"} eq "");

	my $count = $reg -> {"count"};
	if ($count eq "" || $count < 1) {
		$count = 1;
	}

#	for(my $reg_index = 0; $reg_index < $count; $reg_index ++)
#	{
	my $incr  = $reg -> {"width"} / 8;

	my $name  = $reg -> {"name"};

	my $width = $reg -> {"width"};
	my $addr  = Dec2Hex ($width, String2Value ($reg -> {"address"}));

	if ($count > 1) {
		$name .= "[n]\n(n=0~" . ($count - 1) . ")";
		my $last_addr = Dec2Hex ($width,
			String2Value ($reg -> {"address"}) + 
			String2Value ($incr) * ($count - 1));
		$addr .= (" ~ \n" . $last_addr);
	}
	$str .= gen_summary_row_1 ($name, $addr, $reg);
#	}

	return $str;
}

sub gen_summary_row_1 {
	my ($name, $addr, $reg) = @_;
	my $str;

	my @rows;
	my @row;
	my $newelm;
	my $accu_width = 0;
	my $SUMMARY_BITS_PER_ROW = 8;

	my $max_len  = length($reg->{"name"});
	my $max_name = $reg->{"name"};
	my $type = "";

	foreach my $field (@{$reg -> {"field"}}) {
		my $len   = length($field->{"name"});
		my $width = $field->{"width"};
		$type = $field->{"access"};

		if ($width > 1) {
			$len += (length($width) + 4);					#[N:0] total (len+4) chars
		}
		if ($len > $max_len) {
			$max_len  = $len;
			$max_name = $field->{"name"};
		}
	}
	my $align_width = $max_len*70 + 30;
	

	foreach my $field (@{$reg -> {"field"}}) {

		my $field_name   = $field->{"name"};
		my $field_access = $field->{"access"};
		my $field_width  = $field->{"width"};
		my $field_vis    = $field->{"visibility"};
		my $field_mne    = $field->{"user-defined"}->{"MNE"};
		my $field_tag    = $field->{"user-defined"}->{"TAG"};

		$field_access = "Other"     if ($field_access eq "OTHER");
		$field_mne    = $field_name if (!defined $field_mne);

		my $def_value     = $field->{"default-value"};
		my $field_default = Util::String2Bin ($def_value, $field_width);

		my $hide_field = 0;

		if ($has_tag && defined $field_tag && $field_tag ne "") {
			$hide_field = 1;

			my @field_tags = split (/\n/, $field_tag);
			foreach my $tag (@field_tags) {
				next if ($tag eq "");
				if (exists $tag_hash {$tag}) {
					$hide_field = 0;
					last;
				}
			}
		}

		$hide_field = 1 if ($field_vis eq "PRIVATE" && !$show_private);
		$hide_field = 1 if ($field_name =~ /^RESERVED/i && defined $field -> {"auto-inserted"});

		if ($hide_field) {
			$field_name      = "";
			$field->{"name"} = "";
			$field->{"hide"} = 1;
		}

		$accu_width += $field_width;
		my $curr_width    = $field_width;
		my $curr_position = 0;
		my $remain_value  = $field_default;

		my $line_changed  = ($accu_width > $SUMMARY_BITS_PER_ROW) ? 1 : 0;

		while ($accu_width >= $SUMMARY_BITS_PER_ROW) {
			$accu_width    -= $SUMMARY_BITS_PER_ROW;
			$curr_width    -= $accu_width;

# need to cut field_default according to curr_width
			my $curr_value   = substr($remain_value, -$curr_width);
			$remain_value    = substr($remain_value, 0, length($remain_value) - $curr_width);

			my $curr_name    = $field_name;
			my $curr_mne     = $field_mne;
			if (!defined $field->{"hide"} && $line_changed) {
				$curr_name .= sprintf("[%d:%d]", ($curr_position+$curr_width-1), $curr_position);
				$curr_mne  .= sprintf("[%d:%d]", ($curr_position+$curr_width-1), $curr_position);
			}

			if (defined $field->{"hide"}) {
				for (my $i=0; $i<$curr_width; $i++) {
					$newelm = elm->new(
						_name    => "",
						_mne     => "",
						_access  => "",
						_default => "",
						_width   => 1);
					unshift @row, $newelm;
				}
			} else {
				if (! Util::IsValue($def_value)) {
				 $newelm = elm->new(
					 _name        => $curr_name,  
					 _mne         => $curr_mne,  
					 _access      => $field_access, 
					 _default     => $def_value,
					 _width       => $curr_width);
				} else {
					$newelm = elm->new(
						_name        => $curr_name,
						_mne         => $curr_mne,
						_access      => $field_access,
						_default     => $curr_value,
						_width       => $curr_width);
				}
				unshift @row, $newelm;
			}

#create new row
			unshift @rows, [ @row ];
			@row = ();

			$curr_position += $curr_width;
			$curr_width = $accu_width;
		}

		if ($curr_width > 0) {
			my $curr_name = $field_name;
			my $curr_mne  = $field_mne;
			if (!defined $field->{"hide"} && $line_changed) {
				$curr_name .= sprintf("[%d:%d]", ($curr_position+$curr_width-1), $curr_position);
				$curr_mne  .= sprintf("[%d:%d]", ($curr_position+$curr_width-1), $curr_position);
			}

			if (defined $field->{"hide"}) {
				for (my $i=0; $i<$curr_width; $i++) {
					$newelm = elm->new(
						_name    => "",
						_mne     => "",
						_access  => "",
						_default => "",
						_width   => 1);
					unshift @row, $newelm;
				}
			} else {
				if (! Util::IsValue($def_value)) {
					$newelm = elm->new(
						_name        => $curr_name,
						_mne         => $curr_mne,
						_access      => $field_access,
						_default     => $def_value,
						_width       => $curr_width);
				} else {
					$newelm = elm->new(
						_name        => $curr_name,
						_mne         => $curr_mne,
						_access      => $field_access,
						_default     => $remain_value,
						_width       => $curr_width);
				}
				unshift @row, $newelm;
			}
		}
	}
	#add to process register width is not multiple of $BITS_PER_ROW
	my $tmp_reg_width = $reg -> {"width"};
	my $remainder = $tmp_reg_width % $SUMMARY_BITS_PER_ROW;
	if ($remainder > 0)
	{ 
		for (my $i=0; $i<$SUMMARY_BITS_PER_ROW - $remainder; $i++) {
			$newelm = elm->new(
				_name    => "",
				_mne     => "",
				_access  => "",
				_default => "",
				_width   => 1);
			unshift @row, $newelm;
		}
		$accu_width += $SUMMARY_BITS_PER_ROW - $remainder;
	}
	if (@row > 0) {
		unshift @rows, [ @row ];
		@row = ();
	}
	
	my $row_count = scalar @rows;

#	$str .= "<w:tr>";
	if ($addr ne "")
	{
		my @lines = split(/\n/, $addr);
		$addr = gen_paragraph(\@lines, "000000", "", 0, 18, 40, 40, 180, 0 , 0, 1, 1, "TAG_${name}_SUMMARY");
	}
	else
	{
		$addr = gen_paragraph ("", "", "", 0, 0, 40, 40, 180);
	}

	if ($name ne "")
	{
		my @lines = split(/\n/, $name);
		$name = gen_paragraph(\@lines, "000000", "", 1, 18, 40, 40, 180, 0 , 0, 1, 0, "", 1, "TAG_${name}", 1);		
	}
	else
	{
		$name = gen_paragraph ("", "", "", 0, 0, 40, 40, 180);
	}
	
	if ($type ne "") {
		$type = gen_paragraph($type, "000000", "", 1, 18, 40, 40, 180);
	} else {
		$type = gen_paragraph ("", "", "", 0, 0, 40, 40, 180);
	}
	


	#$addr_str  = gen_paragraph (\@lines,          "0000FF", "left",  1, 20, 120, 60, 240,0,0,1);
	for (my $i = 0; $i < $row_count; $i ++)
	{
		$str .= "<w:tr>";
		if ($i == 0)
		{
			$str .= gen_grid_by_paragraphs ($name,  $SUM_NAME_WIDTH,  1, 1, 1, 1, 1, 0, 1);	
			$str .= gen_grid_by_paragraphs ($addr,  $SUM_ADDR_WIDTH, 1, 1, 1, 1, 1, 0, 1);
			$str .= gen_grid_by_paragraphs ($type,  $SUM_TYPE_WIDTH, 1, 1, 1, 1, 1, 0, 1);
		} else {
#			$str .= "<w:tc>
#							<w:tcPr>
#							<w:tcW w:w=\"1107\" w:type=\"dxa\"/>
#							<w:vmerge/>
#							</w:tcPr>
#							<w:p wsp:rsidR=\"00853027\" wsp:rsidRDefault=\"00853027\" wsp:rsidP=\"00C40E48\"/>
#							</w:tc>";		
			$str .= gen_grid_by_paragraphs (gen_paragraph ("", "", "", 0, 0, 40, 40, 180),  $SUM_NAME_WIDTH,  1, 1, 1, 1, 1, 0, -1);			
			$str .= gen_grid_by_paragraphs (gen_paragraph ("", "", "", 0, 0, 40, 40, 180),  $SUM_ADDR_WIDTH, 1, 1, 1, 1, 1, 0, -1);
			$str .= gen_grid_by_paragraphs (gen_paragraph ("", "", "", 0, 0, 40, 40, 180),  $SUM_TYPE_WIDTH, 1, 1, 1, 1, 1, 0, -1);
		}
		my $byte = gen_paragraph ($i, "", "center", 0, 18, 40, 40, 180);
		$str .= gen_grid_by_paragraphs ($byte,  $SUM_BYTE_WIDTH, 1, 1, 1, 1, 1, 0, 0, "center");
		my $row_ref = $rows[$i];
		my $def_val = GetDefaultValue($row_ref);
		$str .= gen_grid_by_paragraphs (gen_paragraph ($def_val, "", "center", 0, 18, 40, 40, 180),  $SUM_RESET_WIDTH, 1, 1, 1, 1, 1, 0, 0, "center");
		my $field_count = scalar (@{$row_ref});
		for (my $j = 0; $j < $field_count; $j ++) {
			my $elm = ${$row_ref}[$j];
			if ($elm->_mne eq "") {
				for (my $k = 0; $k < $elm->_width; $k ++) {
					$str .= gen_grid_by_paragraphs (gen_paragraph ("", "", "", 0, 0, 40, 40, 180),  $SUM_BIT_WIDTH, 1, 1, 1, 1, 1, 1);
				}
			} else {
				$str .= gen_grid_by_paragraphs (gen_paragraph ($elm->_mne, "000000", "center", 0, 18, 40, 40, 180),  $SUM_BIT_WIDTH, $elm->_width, 1, 1, 1, 1, 0, 0, "center");
			}
		}
		
		$str .= "</w:tr>";
	}
#	$str .= "</w:tr>";

	return $str;
}

sub gen_table_sect {
	my $reg           = shift;
	my $rows          = shift;
	my $table_style   = shift;
	my $blk_index			= shift;
	my $reg_grp       = shift;  #add to support one reg in multiple register groups
	my $little_endian = shift || 0;

	my $str =
	"<wx:sect>" .
	gen_table($reg, $rows, $table_style, $little_endian, $blk_index, $reg_grp).
	"<w:sectPr>" .
	"<w:pgSz w:w=\"11906\" w:h=\"18838\"/>" .
	"<w:pgMar w:top=\"1440\" w:right=\"1080\" w:bottom=\"1440\" w:left=\"1080\" w:header=\"708\" w:footer=\"708\" w:gutter=\"0\"/>" .
	"</w:sectPr>" .
	"</wx:sect>";

	return $str;
}

sub gen_summary_table_sect {
	my $all_elms    = shift;
	my $table_style = shift;
	my $summary_format = shift;
	my $landscape = shift || 0;

	my $summary = ($summary_format == 1) ? gen_summary_1 ($all_elms, $table_style) : gen_summary ($all_elms, $table_style);
	my $str =
	"<wx:sect>" .
	$summary.
	"<w:sectPr>" .
	"<w:pgSz w:w=\"11906\" w:h=\"18838\"/>" .
	"<w:pgMar w:top=\"1440\" w:right=\"1080\" w:bottom=\"1440\" w:left=\"1080\" w:header=\"708\" w:footer=\"708\" w:gutter=\"0\"/>" .
	"</w:sectPr>" .
	"</wx:sect>";
	
	if ($landscape) {
		my $sub_str =
		"<w:p>" .
		"<w:pPr>" .
		"<w:snapToGrid w:val=\"off\"/>" .
		"<w:rPr>" .
		"<w:sz w:val=\"20\"/>" .
		"</w:rPr>" .
		"<w:sectPr>" .
		"<w:pgSz w:w=\"18840\" w:h=\"11907\" w:orient=\"landscape\"/>" .
		"</w:sectPr>" .
		"</w:pPr>" .
		"</w:p>";
		$str .= $sub_str;
	}

	return $str;
}

sub gen_page_break {
	my $str =
	"<w:p>" .
	"<w:r>" .
	"<w:br w:type=\"page\"/>" .
	"</w:r>" .
	"</w:p>";
}

sub gen_landscape {
	#my $str = "<w:p><w:pPr><w:snapToGrid w:val=\"off\"/><w:rPr><w:sz w:val=\"20\"/></w:rPr></w:pPr><w:r><w:rPr><w:sz w:val=\"20\"/></w:rPr><w:br w:type=\"page\"/></w:r></w:p>";
	my $str =
	"<w:p>" .
	"<w:pPr>" .
	"<w:snapToGrid w:val=\"off\"/>" .
	"<w:rPr>" .
	"<w:sz w:val=\"20\"/>" .
	"</w:rPr>" .
	"<w:sectPr>" .
	"<w:pgSz w:w=\"18840\" w:h=\"11907\" w:orient=\"landscape\"/>" .
	"<w:pgMar w:top=\"1077\" w:right=\"1440\" w:bottom=\"1077\" w:left=\"1440\" w:header=\"709\" w:footer=\"709\" w:gutter=\"0\"/>" .
	"<w:cols w:space=\"720\"/>" .
	"</w:sectPr>" .
	"</w:pPr>" .
	"</w:p>";
	return $str;
}

sub GetDefaultValue {
	my $fields_ref = $_[0];
	
	my @array = ();
	
	my $def_val = "";
	my $isNA = 0;
	
	my $size = scalar (@{$fields_ref});
	for (my $i = 0; $i < $size; $i ++) {
		my $field = ${$fields_ref} [$i];
		my $width = $field -> _width;
		if (! Util::IsValue($field -> _default)) {
			$isNA = 1;
			last;
		}
		
		
		if ($field -> _default !~ /^\s*$/)
		{
			$def_val .= $field -> _default;
		}
		else
		{
			$def_val .= Dec2Bin (String2Value ("0"), $width);
		}
	}
	
	if ($isNA) {
		$def_val = "NA";
	} else {
		$def_val = Dec2Hex (8, Bin2Dec ($def_val));
	}
	return scalar $def_val;
}

sub parse_mode_value {
	my $reg	        = shift;

  my $reg_name = $reg -> {"name"} ;
#  print " Parsing model value for reister: $reg_name \n\n\n\n";

# get all modes, index by mode name 
  my %all_modes = ();
	foreach my $field (@{$reg -> {"field"}}) {
		if (exists $field -> {"user-defined"} -> {"Mode_Value"}) {
      my $mode_value = $field -> {"user-defined"} -> {"Mode_Value"};
      my $field_name = $field -> {"name"};

		  my @modes = split (/\n/, $mode_value);
      foreach my $mode (@modes) {
		    if ( $mode =~ /\[\s*([a-zA-Z0-9_]+)\s*\]\s*(.+)\s*/ ) {
          my $curr_value = Util::String2DefaultValue($2);  # for format checking here
          $all_modes{$1}{$field_name} = $2 ;
          #   print "Found mode [$1] = $2 (Field = ${reg_name}.${field_name})\n";
        } else {
          print "------------------ Error!!!!!!!!!!!! -------------------------\n";
          print "Mode Value string for '${reg_name}.${field_name}' isn't well formatted : $mode !!\n"; 
          exit 0 ;
        }
      }
    }
  }

# map back to fields for printing
# as we need enum mode for fields in one registers
# if one mode not defined for that field explictly, still add that mode while using default value
  my %field_modes = (); 
  if (%all_modes) {
    foreach my $mode (sort keys %all_modes) {
      $field_modes{""}{$mode}{"value"}   = 0;  # for reserved / private fields 
      $field_modes{""}{$mode}{"defined"} = 0;

	    foreach my $field (@{$reg -> {"field"}}) {
        my $field_name = $field -> {"name"};
        if (exists ${all_modes}{$mode}{$field_name}) {
          $field_modes{$field_name}{$mode}{"value"}   = ${all_modes}{$mode}{$field_name} ;
          $field_modes{$field_name}{$mode}{"defined"} = 1 ;  # to choose background color
        } else {
          $field_modes{$field_name}{$mode}{"value"}   = $field -> {"default-value"} ; 
          $field_modes{$field_name}{$mode}{"defined"} = 0 ;
        }

        #     printf "Mode Value: '${reg_name}.${field_name} : [$mode] = %s (defined=%d)\n", 
        #       $field_modes{$field_name}{$mode}{"value"} , $field_modes{$field_name}{$mode}{"defined"};
      }
    }
  }
 
  return %field_modes ;
}

sub gen_field_mode_value_row {
	my $row     = shift;
	my $reverse = shift || 0;

	my %mode_lines = ();

 	my $size = scalar (@{$row});
 	my $from = ($reverse) ? $size-1 : 0;
 	my $to   = ($reverse) ? ($from - $size) : ($from + $size);
 	my $incr = ($reverse) ? -1 : 1;
 
 	for (my $idx = $from; $idx != $to; $idx += $incr) {
 		my $elm   = ${$row}[$idx];
    my $modes = ${$elm->_usr_def}{"__expanded_mode_value"}; 

    foreach my $mode (sort keys %{$modes}) {
      my $mode_value = ${$modes}{$mode}{"value"};
      my $is_defined = ${$modes}{$mode}{"defined"};
      if ($elm->_name eq "") {
   	    for (my $i = 0; $i < $elm->_width; $i ++) {
          $mode_lines{$mode} .= gen_grid("", $CELL_WIDTH, 1, "", "center", 1, 1, 1, 1, 0, 18, 0, 0, 180, 1);
        }
     	} else {
   			my @vals = split (//, $mode_value);
   			my $bsize = scalar (@vals);
   			my $bfrom = ($reverse) ? $bsize-1 : 0;
   			my $bto   = ($reverse) ? ($bfrom - $bsize) : ($bfrom + $bsize);
       
   			for (my $j = $bfrom; $j != $bto; $j += $incr) {
   				my $bit = $vals [$j];
          my $bkgrd = $is_defined ? "ff8000" : "" ;
   				$mode_lines{$mode} .= gen_grid($bit, $CELL_WIDTH, 1, "", "center", 1, 1, 1, 1, 0, 18, 0, 0, 180, 0, 0, "center", $bkgrd);
   			}
   		}
   	}
  }

  my $line = "" ;
  foreach my $mode (sort keys %mode_lines) {
    $line .= "<w:tr>";
    $line .= gen_grid($mode, $TITLE_WIDTH, 1, "", "center", 4, 4, 1, 1, 1, 18, 0, 0, 180);

    $line .= $mode_lines{$mode};

    $line .= "</w:tr>";
  }

	return $line ;
}


sub parse_args {

	use Getopt::Long;

	my $opt_h = 0;
	my $opt_n = 0;
	my $opt_e = 0;
	my $opt_tag = "";
	my $opt_overview = 0;
	my $opt_offset = 0;
	my $opt_prefix = 0;
	my $opt_little_endian = 0;
	my $opt_uc_name = 0;
	my $opt_lc_name = 0;
	my $opt_summary_landscape = 0;
	my $opt_separated_page = 0;
	my $opt_keep_addr_format = 0;
	my $opt_summary_format = "";
	my @opt_field_info = ();
	my @opt_reg_info = ();
	my @opt_acc_xlate = ();
	my $opt_mode_value = 0 ;

	if (!GetOptions (
			'-h'             => \$opt_h,
			'-n=s'           => \$opt_n,
			'-e'             => \$opt_e,
			'-tag=s'         => \$opt_tag,
			'-o=s'				   => \$s_output,
			'-overview'      => \$opt_overview,
			'-offset'        => \$opt_offset,
			'-prefix'        => \$opt_prefix,
			'-landscape'		 => \$opt_summary_landscape,
			'-separated_page' => \$opt_separated_page,
			'-keep_addr_format' => \$opt_keep_addr_format,
			'-format=s'	 		 => \$opt_summary_format,
			'-little_endian' => \$opt_little_endian,
			'-uc_name'       => \$opt_uc_name,
			'-lc_name'       => \$opt_lc_name,
			'-add_field_info=s' => \@opt_field_info,
			'-add_reg_info=s' => \@opt_reg_info,
			'-access_translate=s' => \@opt_acc_xlate,
			'-mode_value'    => \$opt_mode_value ,
		)) {
		print_usage ();
		die "Error: Unsupported command option.\n";
	}

	if ($opt_h || @ARGV == 0) {
		print_usage();
		exit 1;
	}

	my @all_files = ();

	if (-d $ARGV[0]) {
		my $dir_src = $ARGV[0]."/";
		opendir(SOURCE, "$dir_src") || die "Cannot open $dir_src: $!\n";
		@all_files = readdir(SOURCE);
		foreach my $file (@all_files) {
			$file = $ARGV[0]."/".$file;
		}
		closedir(SOURCE);
	} else {
		if (-f $ARGV[0]) {
			push @all_files, $ARGV[0];
		} else {
			print_usage();
			die "Can't find $ARGV[0] \n";
		}
	}
	
	if (defined($s_output))
	{
		$out_dir = dirname($s_output);
		unless (-d "$out_dir") {
			mkdir $out_dir, 0755 or warn "Can't make $out_dir directory: $!\n";
		}
	}	

	if ($opt_n != 0) {
		if (	$opt_n != 8 && $opt_n != 16) {
			die "Error: bits per row should be either 8 or 16 ($opt_n).\n";
		}
		$BITS_PER_ROW = $opt_n;
	}

	$show_private = ($opt_e) ? 0 : 1;	# For external use

	if ($opt_tag ne "") {
		# support "A, B, C" or "A B C"
		my @tags = split (/\s*,*\s+/, $opt_tag);
		foreach my $tag (@tags) {
			$tag_hash {$tag} = 1;
		}
	}


	$has_tag = (scalar keys (%tag_hash) > 0)  ? 1 : 0;

	$print_overview = ($opt_overview      != 0) ? 1 : 0;
	$print_offset   = ($opt_offset        != 0) ? 1 : 0;
	$module_prefix  = ($opt_prefix        != 0) ? 1 : 0;
	$little_endian  = ($opt_little_endian != 0) ? 1 : 0;
	$use_uc_name    = ($opt_uc_name       != 0) ? 1 : 0;
	$use_lc_name    = ($opt_lc_name       != 0) ? 1 : 0;
	$print_mode_value   = ($opt_mode_value   != 0) ? 1 : 0;
	$summary_landscape	= ($opt_summary_landscape != 0) ? 1 : 0;
	$separated_page = ($opt_separated_page != 0) ? 1 : 0;
	$keep_addr_format = ($opt_keep_addr_format != 0) ? 1 : 0;
	#$print_offset   = ($opt_keep_addr_format   != 0) ? 1 : 0;
	$summary_format = ($opt_summary_format =~ /^os$/i) ? 1 : 0;
	if ($summary_format == 1) {
		$summary_landscape = 1;
	}

  @extra_field_info = remove_duplicate(split(/;/, join(';', @opt_field_info)));
  @extra_reg_info   = remove_duplicate(split(/;/, join(';', @opt_reg_info)));

  my @acc_xlate_map    = split(/;/, join(';', @opt_acc_xlate));
  foreach (@acc_xlate_map) {
    next if ($_ eq '');
    if (/\w+=\w+/) {              # permitted format : [A-Za-z0-9_]
      my @map = split(/=/, $_); 
      $field_acc_xlate{uc $map[0]} = uc $map[1];    # upper case
    } else {
      print_usage();
      die "\n\nIncorrect '-access_translate' option format: '$_' \n " ;
    }
  }

	my ($all_opts) = "";

	$all_opts .= "-n $BITS_PER_ROW" if $opt_n;
	$all_opts .= "-e "		          if $opt_e;
	$all_opts .= "-tag $opt_tag "   if $opt_tag;
	$all_opts .= "-overview "       if $opt_overview;
	$all_opts .= "-offset "         if $opt_offset;
	$all_opts .= "-prefix "         if $opt_prefix;
	$all_opts .= "-little_endian "  if $opt_little_endian;
	
	$all_opts .= "-o $s_output "    if (defined($s_output));

	$all_opts .= "-add_field_info @extra_field_info " if (scalar(@extra_field_info)); 
	$all_opts .= "-access_translate @acc_xlate_map " if (scalar(@acc_xlate_map)); 

	$all_opts .= $ARGV[0];
	$command_line = "$prog $all_opts";

	foreach my $file (@all_files) {
		next unless ($file =~ /\.xml$/i);

		$file = get_abs_path ($file);        
		push @xml_files, $file;
	}
}

# remove duplicate items in array, while keep the original ordering
sub remove_duplicate {
  my @new_arr = ();
  my %tmp_h   = ();

  foreach (@_) { 
    next if (exists $tmp_h{$_}) ;
    $tmp_h{$_} = 1 ;
    push @new_arr, $_;
  }
  return @new_arr ;
}


sub check_opt_extra_info {
  my $reg   = shift ;        

  my %field_predef = (
                      "name"            => 1 ,
                      "access"          => 2 ,
                      "default-value"   => 3 ,
                      "width"           => 4 ,  # not printed directly, but already shown in register table
                      "enumeration"     => 5 ,  # shown in field table
                      "MNE"             => 6 ,  # shown in table if defined (Mnemonic)
                      "description"     => 7 ,  # shown in field table
                     );
  my %reg_predef   = (
                      "name"            => 1 , 
                      "offset"          => 2 , 
                      "width"           => 3 , 
                      "count"           => 4 , 
                      "default-value"   => 5 , 
                      "description"     => 6 , 
                     );
                     
## Find the first explict defined field
  my $field ;
  foreach my $fld (@{$reg -> {"field"}}) {
    $field = $fld;
    last if (!($fld->{"name"} =~ /^RESERVED/i)) ; # && defined $field -> {"auto-inserted"}));
  }

## for field
  %curr_extra_field_info = ();
  foreach my $fld_info (@extra_field_info) {
    if (exists $field_predef{$fld_info} ) {  # neglect the predefined ones
      print "\nField information '$fld_info' already in MS-Word document by default\n";
      next ; 
    }

    if    ( exists $field -> { $fld_info })                     { $curr_extra_field_info{$fld_info} = 1 ; } # "built-in" 
    elsif ( exists $field -> {"user-defined"} -> { $fld_info }) { $curr_extra_field_info{$fld_info} = 0 ; } # "user-defined"
    else  { print "\nField information '$fld_info' not define in CODA, won't print it in MS-Word document\n" ; }
  }
  #foreach (keys %curr_extra_field_info) { print "\n   extra_field_info: $_"; }

## for register
  %curr_extra_reg_info = ();
  foreach my $reg_info (@extra_reg_info) {
    if ( exists $reg_predef{$reg_info} ) { # neglect the predefined ones
      print "\nRegister information '$reg_info' already in MS-Word document by default\n";
      next ;
    }

    if    (exists $reg -> { $reg_info })                     { $curr_extra_reg_info{$reg_info} = 1 ; } # "built-in" 
    elsif (exists $reg -> {"user-defined"} -> { $reg_info }) { $curr_extra_reg_info{$reg_info} = 0 ; } # "user-defined"
    else  { print "\nRegister information '$reg_info' not define in CODA, won't print it in MS-Word document\n" ; }
  }
  #foreach (keys %curr_extra_reg_info) { print "\n   extra_reg_info: $_"; }
}


sub print_usage {
	warn <<"EOF";

USAGE
    $prog [options] file

DESCRIPTION
    Extract data from Coda-compatible XML file for generating
    Microsoft Word documentation for register maps.

OPTIONS
    -h                 Print this help message
    -n                 Define number of bits per row in the tables of document
    -e                 Generate document for external use
    -tag               Print registers of these tags only
    -o                 Generate document use specified name, default is in current run directory
    -overview          Print register overview
    -offset            Print (module name + offset) instead of (absolute address) for registers
    -prefix            Prefix module name to registers
    -landscape         Print summary table in landscape
    -separated_page    Print summary table in separated page
    -sum_format        Print specified foramt of summary table  
    -little_endian     Print bit fields by little endian
    -uc_name           Print register & field name in uppercase
    -lc_name           Print register & field name in lowercase
    -add_field_info    Print extra field column, multiple column names can be separated using semicolon(;)
    -add_reg_info      Print extra register column, multiple column names can be separated using semicolon(;)
    -access_translate  Change field 'Access' type in Excel into another one in MS-Word, case insensitive
    -mode_value        Print 'Mode Value' column 

OPERANDS
    file    An XML file containing register maps.

EXAMPLES
    $prog test.xml
    $prog -n 18 -e -tag "A B E" -overview -offset -prefix -little_endian -o myword.doc -uc_name -access_translate USRER=RW;rw=ro -add_field_info abc;def -add_reg_info foo;bar test.xml

EXIT STATUS
    0     Successful completion
    >0    An error occured

EOF
}
