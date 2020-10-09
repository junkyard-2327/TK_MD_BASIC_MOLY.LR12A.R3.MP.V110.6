#!/usr/bin/env tclsh8.5  
set file "[lindex $argv 0]"
set fd [open "./[lindex $argv 1]_$file.h" r]
set reg_pool []
set state 0
global duplicate_map length_map idx
set idx 0
set idx_i "-3"
while {![eof $fd]} {
    gets $fd data
    if {[string range $data 0 1] == "//"} {
        set idx_i [expr $idx_i + 1]
    }
    set data [string range $data 8 end]
        if {[string match *uint32* $data]} {
            set tmp [lindex $data 1]
            set tmp [string range $tmp 0 end-1]
            set arr [split $tmp "\[\]"]
            if {[string match *rsv* $tmp]} {
                continue
            }
            if {[llength $arr] > 1} {
                set tmp [string range $tmp 0 end-3]
                set len [llength [split $tmp "_"]]
                set len_map($idx) $len
                set duplicate_map($tmp) [lindex $arr 1]
#                puts "$tmp $len 5"
            } else {
                set duplicate_map($tmp) 1
                set len [llength [split $tmp "_"]]
                set len_map($idx) $len
#                puts "$tmp $len 1"
            }
            set idx [expr $idx+1]
            continue
        }

#    puts "$idx_i"
#    puts "$data"
    if {[string match "P_*" $data]} {
#        set data [string match $data 0 [string first " " $data]]
        set temp_data [string range $data 2 [expr [string first " " $data]-1]]
#        puts $data
        set reg_field [lindex [split $temp_data "_"] 3]
#        puts "$temp_data"
        set temp_str [lrange [split $temp_data "_"] 3 end]
#        puts "$temp_str"
#        puts "idx = $idx_i, $len_map($idx_i)"
        for {set i 0} { $i < [expr $len_map($idx_i)-1]} {incr i} {
            set reg_field [string tolower "$reg_field\_[lindex $temp_str [expr $i+1]]"]        
        }
#        set reg_field [lindex [split $temp_data "_"] 4]
#        set reg_field "$file\_$reg_field"
#        puts "$reg_field"
        set reg_field_lower_case [string tolower $reg_field]
#        puts "lsearch"
#        puts "reg_pool = $reg_pool"
#        puts "reg_field = $reg_field"
#        puts [lsearch $reg_pool $reg_field]

        # frame rate or subframe rate
        if {$duplicate_map([string toupper $reg_field]) > 1} {
 #           puts $reg_field
#            puts $duplicate_map([string toupper $reg_field])
            
            if {[lsearch $reg_pool $reg_field] < 0} {
                lappend reg_pool $reg_field
#                puts "$reg_field"
                puts ""
                for {set i 0} {$i < $duplicate_map([string toupper $reg_field])} {incr i} {
                    puts "kal_uint32 $reg_field_lower_case = p_cuif_cc\[cc_idx\]->[string toupper $reg_field]\[$i\];"
                set temp_str [lrange [split $temp_data "_"] 5 end]
                set dm_field [string tolower [lindex $temp_str 0]]
                    for {set j 1} { $j < [llength $temp_str]} {incr j} {
                        set dm_field [string tolower "$dm_field\_[lindex $temp_str $j]"]        
                    }
                    puts "p_cc\[$i\]-> $dm_field  = GET_FIELD($reg_field_lower_case, $temp_data);"
                }
#                set 
            }
        } else {
 #           puts $reg_field
#            puts $duplicate_map([string toupper $reg_field])
            if {[lsearch $reg_pool $reg_field] < 0} {
                lappend reg_pool $reg_field
#                puts "$reg_field"
                puts ""
                puts "kal_uint32 $reg_field_lower_case = p_cuif_cc\[cc_idx\]->[string toupper $reg_field];"
#            set 
            }
            set temp_str [lrange [split $temp_data "_"] 5 end]
#            puts "$temp_str"
            set dm_field [string tolower [lindex $temp_str 0]]
            for {set i 1} { $i < [llength $temp_str]} {incr i} {
                set dm_field [string tolower "$dm_field\_[lindex $temp_str $i]"]        
            }
#            puts "$dm_field"
            puts "p_cc-> $dm_field  = GET_FIELD($reg_field_lower_case, $temp_data);"
        }
    } 
}
