use strict;
use Cwd;
use lib "pcore/tools/perl";
use Spreadsheet::ParseExcel;

my $curdir = getcwd();
my $parser = Spreadsheet::ParseExcel->new();
my $workbook = $parser->parse("$curdir/pcore/custom/modem/common/ps/custom_wwltedb.xls");
my $projdir = $ARGV[2];
##my $logdir = $ARGV[3];

$projdir =~ s/\.//g;

## Redirect STDERR to STDOUT
open(STDERR, ">&STDOUT");

print "current project directory = $projdir\n";

my $newdir = "$curdir$projdir/custom";
mkdir $newdir if(! -e $newdir);
$newdir = "$newdir/eas_caband_tbl";
mkdir $newdir if(! -e $newdir);
##my $logfile = "$curdir$logdir/eas_gen_caband_tbl.log";
##unlink($logfile) if (-e $logfile);
##open(STDERR, ">$logfile");

print "new file directory = $newdir\n";

if (!defined $workbook)
{
    die $parser->error(), ".\n";
}

my $outputfile = "$newdir/eas_caband_tbl.c";
open (CABAND_TBL, "> $outputfile") || die "open file fail: eas_caband_tbl.c";

print CABAND_TBL "#include \"custom_eas_config.h\"\n\n";
print CABAND_TBL "const eas_global_support_band_struct eas_global_support_band_tbl[] = {\n";
print CABAND_TBL "/*  {    PLMN, {";
for my $i (0 .. 255)
{
    my $j = ($i + 1) % 8;
    printf CABAND_TBL "%10s", "B".($i+8)."~"."B".($i+1) if ($j == 1);
    print CABAND_TBL "," if (($i + 1) != 256 && $j == 0);
}
print CABAND_TBL "  }} */\n";

my $worksheet1 = $workbook->worksheet('LTEBand1');
my $worksheet2 = $workbook->worksheet('LTEBand2');

## Get Excel table size 
my ( $row_min1, $row_max1 ) = $worksheet1->row_range();
my ( $col_min1, $col_max1 ) = $worksheet1->col_range();

my ( $row_min2, $row_max2 ) = $worksheet2->row_range();
my ( $col_min2, $col_max2 ) = $worksheet2->col_range();

## Only for debugging
##print "\n";
##print "Sheet 'LTEBand1':\n";
##print "    row_min1 = $row_min1, row_max1 = $row_max1\n";
##print "    col_min1 = $col_min1, col_max1 = $col_max1\n";
##print "\n";
##print "Sheet 'LTEBand2':\n";
##print "    row_min2 = $row_min2, row_max2 = $row_max2\n";
##print "    col_min2 = $col_min2, col_max2 = $col_max2\n";
##print "\n";

## Skip the title row
$row_min1++;

for my $row1 ( $row_min1 .. $row_max1 )
{
    my $cell1 = $worksheet1->get_cell( $row1, $col_min1 );

    ## Level 1: Continents, World Wide or Test Network
    if ($cell1->value() =~ /^-(\w\D+)/)
    {
        print CABAND_TBL "    /* ".$1." */\n";
    }
    ## Level 2: Orientation or subregion of Contienent
    elsif ($cell1->value() =~ /^--(\w\D+)/)
    {
        print CABAND_TBL "    /** ".$1." **/\n";
    }
    ## Level 3: Countries, Nations
    elsif ($cell1->value() =~ /^---(\w\D+)/)
    {
        print CABAND_TBL "    /*** ".$1." ***/\n";

        my $ltebandbitmask = "0x00";

        my $cell1_2 = $worksheet1->get_cell( $row1, $col_min1+1 );
    	  my @mcclist = split(',', $cell1_2->value());

    	  for my $mcc (@mcclist)
    	  {
            my $cell1_3 = $worksheet1->get_cell( $row1, $col_min1+2 );
            my @mnclist = split(',', $cell1_3->value());

            for my $mnc (@mnclist)
            {
                if ($mcc eq "NULL") { $mcc = ""; }
                if ($mnc eq "NULL") { $mnc = ""; }

                print CABAND_TBL "    {\"".$mcc.$mnc."\", {";

                ## Starting from Band1, Band2, Band3, and so on
                for my $col1 ($col_min1+3 .. $col_max1)
                {
                    my $cell1_4 = $worksheet1->get_cell( $row1, $col1 );
                    if ($cell1_4->value() eq "YES")
                    {
                        $ltebandbitmask |= 1 << (($col1 - 3) % 8);
                    }

                    ## Conclude for each 8 bits
                    if ( ($col1 - 3 + 1) % 8 == 0 )
                    {
                        my $hex_string = sprintf("0x%02X", $ltebandbitmask);
                        printf CABAND_TBL "%10s", $hex_string;
                        print CABAND_TBL "," if (($col1 - 3 + 1) != 256);

                        ## Start over again
                        $ltebandbitmask = "0x00";
                    }
                }

                ## Continue on next worksheet (starting from Band254, ...
                for my $col2 ($col_min2+3 .. $col_max2)
                {
                    my $cell2_4 = $worksheet2->get_cell( $row1, $col2 );
                    if ($cell2_4->value() eq "YES")
                    {
                        $ltebandbitmask |= 1 << (((253+$col2) - 3) % 8);
                    }

                    ## Conclude for each 8 bits
                    if ( ((253+$col2) - 3 + 1) % 8 == 0 )
                    {
                        my $hex_string = sprintf("0x%02X", $ltebandbitmask);
                        printf CABAND_TBL "%10s", $hex_string;
                        print CABAND_TBL "," if (((253+$col2) - 3 + 1) != 256);

                        ## Start over again
                        $ltebandbitmask = "0x00";
                    }
                }

                print CABAND_TBL "  }},\n";
            }
    	  }
    }
    ## Level 4: Operators
    elsif ($cell1->value() =~ /^----(\w\D+)/)
    {
        print CABAND_TBL "    /**** ".$1." ****/\n";

        my $ltebandbitmask = "0x00";

        my $cell1_2 = $worksheet1->get_cell( $row1, $col_min1+1 );
    	  my @mcclist = split(',', $cell1_2->value());

    	  for my $mcc (@mcclist)
    	  {
            my $cell1_3 = $worksheet1->get_cell( $row1, $col_min1+2 );
            my @mnclist = split(',', $cell1_3->value());

            for my $mnc (@mnclist)
            {
                if ($mcc eq "NULL") { $mcc = ""; }
                if ($mnc eq "NULL") { $mnc = ""; }

                print CABAND_TBL "    {\"".$mcc.$mnc."\", {";

                ## Starting from Band1, Band2, Band3, and so on
                for my $col1 ($col_min1+3 .. $col_max1)
                {
                    my $cell1_4 = $worksheet1->get_cell( $row1, $col1 );
                    if ($cell1_4->value() eq "YES")
                    {
                        $ltebandbitmask |= 1 << (($col1 - 3) % 8);
                    }

                    ## Conclude for each 8 bits
                    if ( ($col1 - 3 + 1) % 8 == 0 )
                    {
                        my $hex_string = sprintf("0x%02X", $ltebandbitmask);
                        printf CABAND_TBL "%10s", $hex_string;
                        print CABAND_TBL "," if (($col1 - 3 + 1) != 256);

                        ## Start over again
                        $ltebandbitmask = "0x00";
                    }
                }

                ## Continue on next worksheet (starting from Band254, ...
                for my $col2 ($col_min2+3 .. $col_max2)
                {
                    my $cell2_4 = $worksheet2->get_cell( $row1, $col2 );
                    if ($cell2_4->value() eq "YES")
                    {
                        $ltebandbitmask |= 1 << (((253+$col2) - 3) % 8);
                    }

                    ## Conclude for each 8 bits
                    if ( ((253+$col2) - 3 + 1) % 8 == 0 )
                    {
                        my $hex_string = sprintf("0x%02X", $ltebandbitmask);
                        printf CABAND_TBL "%10s", $hex_string;
                        print CABAND_TBL "," if (((253+$col2) - 3 + 1) != 256);

                        ## Start over again
                        $ltebandbitmask = "0x00";
                    }
                }

                print CABAND_TBL "  }},\n";
            }
    	  }
    }
    elsif ($cell1->value() =~ /^\[UNIT_TEST/)
    {
        print CABAND_TBL "#ifdef UNIT_TEST\n";
    }
    elsif ($cell1->value() =~ /^\]UNIT_TEST/)
    {
        print CABAND_TBL "#endif  /* UNIT_TEST */\n";
    }
}

print CABAND_TBL "};\n\n";

print CABAND_TBL "const kal_uint32 eas_global_support_band_num = sizeof(eas_global_support_band_tbl) / sizeof(eas_global_support_band_struct);\n";

## Separation
print CABAND_TBL "\n\n";

print CABAND_TBL "#if !defined(__LTE_CA_TBL_V2_SUPPORT__)\n";
print CABAND_TBL "const eas_special_plmn_exclude_struct eas_special_plmn_exclude_tbl[] = {\n";
print CABAND_TBL "/*  {   PLMN   } */\n";

my $worksheet = $workbook->worksheet('LTEBandExcl');

## Get Excel table size 
my ( $row_min, $row_max ) = $worksheet->row_range();
my ( $col_min, $col_max ) = $worksheet->col_range();

## Only for debugging
##print "Sheet 'LTEBandExcl':\n";
##print "    row_min = $row_min, row_max = $row_max\n";
##print "    col_min = $col_min, col_max = $col_max\n";

## Skip the title row
$row_min++;

for my $row ( $row_min .. $row_max )
{
    my $cell = $worksheet->get_cell( $row, $col_min );

    ## Level 1: Continents, World Wide or Test Network
    if ($cell->value() =~ /^-(\w\D+)/)
    {
        die "Level 1: Continents, World Wide - is not allowed in this sheet!";
    }
    ## Level 2: Orientation or subregion of Contienent
    elsif ($cell->value() =~ /^--(\w\D+)/)
    {
        die "Level 2: Orientation or subregion of Contienent - is not allowed in this sheet!";
    }
    ## Level 3: Countries, Nations
    elsif ($cell->value() =~ /^---(\w\D+)/)
    {
        die "Level 3: Countries, Nations - is not allowed in this sheet!";
    }
    ## Level 4: Operators
    elsif ($cell->value() =~ /^----(\w\D+)/)
    {
        print CABAND_TBL "    /**** ".$1." ****/\n";

        my $cell_2 = $worksheet->get_cell( $row, $col_min+1 );
    	  my @mcclist = split(',', $cell_2->value());

    	  for my $mcc (@mcclist)
    	  {
            my $cell_3 = $worksheet->get_cell( $row, $col_min+2 );
            my @mnclist = split(',', $cell_3->value());

            for my $mnc (@mnclist)
            {
                if ($mcc eq "NULL") { $mcc = ""; }
                if ($mnc eq "NULL") { $mnc = ""; }

                print CABAND_TBL "    { \"".$mcc.$mnc."\" },\n";
            }
    	  }
    }
    elsif ($cell->value() =~ /^\[UNIT_TEST/)
    {
        print CABAND_TBL "#ifdef UNIT_TEST\n";
    }
    elsif ($cell->value() =~ /^\]UNIT_TEST/)
    {
        print CABAND_TBL "#endif  /* UNIT_TEST */\n";
    }
}

print CABAND_TBL "};\n\n";

print CABAND_TBL "const kal_uint32 eas_special_plmn_exclude_num = sizeof(eas_special_plmn_exclude_tbl) / sizeof(eas_special_plmn_exclude_struct);\n";

## Separation
print CABAND_TBL "\n\n";



print CABAND_TBL "#if !defined(MT6739)\n";
print CABAND_TBL "const eas_global_ca_comb_struct eas_global_ca_comb_tbl[] = {\n";
print CABAND_TBL "/*  {    PLMN,";
printf CABAND_TBL "%30s", "Enable List";
print CABAND_TBL ",";
printf CABAND_TBL "%30s", "Disable List";
print CABAND_TBL "  } */\n";

my $worksheet = $workbook->worksheet('CAComb');
## Get Excel table size 
my ( $row_min, $row_max ) = $worksheet->row_range();
my ( $col_min, $col_max ) = $worksheet->col_range();

## Only for debugging
##print "Sheet 'CAComb':\n";
##print "    row_min = $row_min, row_max = $row_max\n";
##print "    col_min = $col_min, col_max = $col_max\n";

## Skip the title row
$row_min++;

for my $row ( $row_min .. $row_max )
{
    my $cell = $worksheet->get_cell( $row, $col_min );

    ## Level 1: Continents, World Wide or Test Network
    if ($cell->value() =~ /^-(\w\D+)/)
    {
        print CABAND_TBL "    /* ".$1." */\n";
    }
    ## Level 2: Orientation or subregion of Contienent
    elsif ($cell->value() =~ /^--(\w\D+)/)
    {
        print CABAND_TBL "    /** ".$1." **/\n";
    }
    ## Level 3: Countries, Nations
    elsif ($cell->value() =~ /^---(\w\D+)/)
    {
        print CABAND_TBL "    /*** ".$1." ***/\n";

        my $cell = $worksheet->get_cell( $row, $col_min+1 );
    	  my @mcclist = split(',', $cell->value());

    	  for my $mcc (@mcclist)
    	  {
            my $cell = $worksheet->get_cell( $row, $col_min+2 );
            my @mnclist = split(',', $cell->value());

            for my $mnc (@mnclist)
            {
                if ($mcc eq "NULL") { $mcc = ""; }
                if ($mnc eq "NULL") { $mnc = ""; }

                print CABAND_TBL "    {\"".$mcc.$mnc."\",";

                ## Starting from Enable List, then Disable List
                for my $col ($col_min+3 .. $col_max)
                {
                    my $cell = $worksheet->get_cell( $row, $col );
                    if ($cell->value() eq "NULL")
                    {
                        printf CABAND_TBL "%30s", "\"\"";
                    }
                    else
                    {
                        my $ca_string = "\"".$cell->value()."\"";
                    	  printf CABAND_TBL "%30s", $ca_string;
                    }

                    print CABAND_TBL "," if ($col != $col_max);

                    print CABAND_TBL "  },\n" if ($col == $col_max);
                }
            }
    	  }
    }
    ## Level 4: Operators
    elsif ($cell->value() =~ /^----(\w\D+)/)
    {
        print CABAND_TBL "    /**** ".$1." ****/\n";

        my $cell = $worksheet->get_cell( $row, $col_min+1 );
    	  my @mcclist = split(',', $cell->value());

    	  for my $mcc (@mcclist)
    	  {
            my $cell = $worksheet->get_cell( $row, $col_min+2 );
            my @mnclist = split(',', $cell->value());

            for my $mnc (@mnclist)
            {
                if ($mcc eq "NULL") { $mcc = ""; }
                if ($mnc eq "NULL") { $mnc = ""; }

                print CABAND_TBL "    {\"".$mcc.$mnc."\",";

                ## Starting from Enable List, then Disable List
                for my $col ($col_min+3 .. $col_max)
                {
                    my $cell = $worksheet->get_cell( $row, $col );
                    if ($cell->value() eq "NULL")
                    {
                        printf CABAND_TBL "%30s", "\"\"";
                    }
                    else
                    {
                        my $ca_string = "\"".$cell->value()."\"";
                    	  printf CABAND_TBL "%30s", $ca_string;
                    }

                    print CABAND_TBL "," if ($col != $col_max);

                    print CABAND_TBL "  },\n" if ($col == $col_max);
                }
            }
    	  }
    }
    elsif ($cell->value() =~ /^\[UNIT_TEST/)
    {
        print CABAND_TBL "#ifdef UNIT_TEST\n";
    }
    elsif ($cell->value() =~ /^\]UNIT_TEST/)
    {
        print CABAND_TBL "#endif  /* UNIT_TEST */\n";
    }
}

print CABAND_TBL "};\n\n";

print CABAND_TBL "const kal_uint32 eas_global_ca_comb_num = sizeof(eas_global_ca_comb_tbl) / sizeof(eas_global_ca_comb_struct);\n";
print CABAND_TBL "#endif\n";
print CABAND_TBL "#endif\n\n";

## Success
print "eas_caband_tbl.c is generated successfully\n";
