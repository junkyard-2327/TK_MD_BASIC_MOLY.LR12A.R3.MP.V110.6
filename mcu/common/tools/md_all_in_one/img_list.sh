#! /bin/bash
ARGV=($*)

tools_dir="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

########################################
##        variables initialize        ##
########################################
debug=0
packcmd=0
unpackcmd=0
repackcmd=0
display_usage=0
output_md_file="single_bin_modem.bin"

if [[ -f "$tools_dir/pack_img" ]]; then
  pack_tool="$tools_dir/pack_img"
else
  echo "Error: (un)pack tool \"pack_img\" does not exist, please help to check!"
  exit 1
fi

if [[ -f "$tools_dir/mkimage20" ]]; then
  mkimage="$tools_dir/mkimage20"
else
  echo "Error: mkimage tool \"mkimage20\" does not exist, please help to check!"
  exit 1
fi

if [[ -d "$tools_dir/cfg" ]]; then
  cfg_path="$tools_dir/cfg"
else
  echo "Error: cfg folder does not exist, please help to check!"
  exit 1
fi

########################################
##        get input parameters        ##
########################################
for var in "$@"
do
  if [[ "$var" == *\(*\) ]]; then
    project_makefile=$var
  fi
  if [[ ( "$var" == "--help" ) || ( "$var" == "-h" ) ]]; then
    display_usage=1
  fi
  if [[ "$var" == "pack" ]]; then
    packcmd=1
  fi
  if [[ "$var" == "unpack" ]]; then
    unpackcmd=1
  fi
  if [[ "$var" == "repack" ]]; then
    repackcmd=1
  fi
  if [[ "$var" == *$output_md_file ]]; then
    input_md_file=$var
  fi
done

if [[ $unpackcmd == 1 ]]; then
  if [[ $# != 3 ]]; then
    echo "Error: unpack action can not support your command, please help usage by -h or --help!"
    exit 1
  fi
  unpack_folder=$3
  if [[ ! -d $unpack_folder ]]; then
    mkdir -p "$unpack_folder"
  else
    if [[ "$unpack_folder" == "./" || "$unpack_folder" == "." ]]; then
      echo "Error: please do not use the currect folder as output folder to prevent unexpected problem!!"
      exit 1
    fi
    if [[ -e "$unpack_folder/img_list.sh" ]]; then
      echo "Error: please do not use the tools folder as output folder to prevent unexpected problem!!"
      exit 1
    fi
    rm -rf "$unpack_folder"
    mkdir -p "$unpack_folder"
  fi
  echo "The unpack process will unpack to $unpack_folder ..."
fi

if [[ $packcmd == 1 ]]; then
  if [[ $# != 2 ]]; then
    echo "Error: pack action can not support your command, please help usage by -h or --help!"
    exit 1
  fi
  pack_folder=$2
  if [[ ! -d $pack_folder ]]; then
    echo "Error: can not find the input folder, please help to check!"
    exit 1
  fi
  echo "The pack process will pack the files in $pack_folder ..."
fi

if [[ $repackcmd == 1 ]]; then
  if [[ $# != 4 ]]; then
    echo "Error: Repack action can not support your command, please help usage by -h or --help!"
    exit 1
  fi
  unpack_folder=$3
  if [[ ! -d $unpack_folder ]]; then
    mkdir -p "$unpack_folder"
  else
    if [[ "$unpack_folder" == "./" || "$unpack_folder" == "." ]]; then
      echo "Error: please do not use the currect folder as output folder to prevent unexpected problem!!"
      exit 1
    fi
    if [[ -e "$unpack_folder/img_list.sh" ]]; then
      echo "Error: please do not use the tools folder as output folder to prevent unexpected problem!!"
      exit 1
    fi
    rm -rf "$unpack_folder"
    mkdir -p "$unpack_folder"
  fi

  replace_file=$4

  pack_folder=$unpack_folder
  echo "The repack process is starting ..."
fi

########################################
##              function              ##
########################################
usage() {
  echo -e "Version: v1.2.0.1"
  echo -e "Please CHECK the following usage of img_list.sh script!"
  echo -e "Usage:"
  echo -e "         1. img_list.sh \"project_name\""
  echo -e "         2. img_list.sh pack \"Folder Path\""
  echo -e "         3. img_list.sh unpack \"single_modem_image\" \"specific folder path\""
  echo -e "         4. img_list.sh repack \"single_modem_image\" \"specific folder path\" \"replace files\""
  echo -e 
  echo -e "Example:"
  echo -e "         1. img_list.sh \"MT6763_SP(LWCTG)\""
  echo -e "         2. img_list.sh pack \"Folder Path\""
  echo -e "         3. img_list.sh unpack \"single_modem_image\" \"$output_md_file\""
  echo -e "         4. img_list.sh repack \"single_modem_image\" \"$output_md_file\" \"replace_file=A.bin,B.bin,C.bin\""
  echo -e
  echo -e "Description:"
  echo -e "         Usage1 is for modem(mcu) codebase when modem build is completed."
  echo -e "         \"pack\" action can use to pack specific folder if relevant appending files are all existing in specific folder."
  echo -e "         \"unpack\" action can use to unpack single_modem_image to specific folder."
  echo -e "         \"repack\" action can use to repack specific files of single_modem_image and output to specific folder."
  echo -e ""
}

error_handler () {
  echo "Error: $1 file cannot be found in $2, please help to check!"
  if [[ -f "$outfolder/$output_md_file" ]]; then
    echo Remove $outfolder/$output_md_file
    rm -f $outfolder/$output_md_file
  fi
  exit 1
}

mkimage_func () {
  #usage: mkimage input_file cfg_file output_file
  if [[ $debug == 1 ]]; then
    echo $1
  fi
  echo "$mkimage $1 $2 $3" >> $outfolder/modem_all_in_one.log
  if [ ! -f "$2" ]; then
    error_handler "$2" "$cfg_path"
  else
    
    $mkimage $1 $2 $3
    if [ $? != 0 ]; then
      echo Error: fail to execute $mkimage $1 $2 $3, please check!
      exit 1
    fi
  fi
  echo "$(basename $3 .img)=$(basename $1)" >> $outfolder/md1_file_map.log
  pack_files="$pack_files $3"
}

pack_for_build () {
  project_name=$(echo "$project_makefile" | cut -d '(' -f 1 | tr -d ' ')
  project_flavor=$(echo "$project_makefile" | cut -d '(' -f 2 |cut -d ')' -f 1 | tr -d ' '| tr -d '\n')

  targetfolder="build/$project_name/$project_flavor"
  outfolder="build/$project_name/$project_flavor/bin/md_all_in_one"
  bldPrjMake="build/$project_name/$project_flavor/bin/~${project_name}(${project_flavor}).mak"

  if [[ ! -d "$targetfolder" ]]; then
    echo Error: ./$targetfolder target folder does not exist, please help to chcek!
    exit 1
  fi

  if [[ -d "$outfolder" ]]; then
    #echo Remove and Create $outfolder!
    rm -rf $outfolder
    mkdir -p $outfolder
  else
    #echo Create $outfolder!
    mkdir -p $outfolder
  fi

  MTK_DEBUG_INFO_SUPPORT=TRUE
  MTK_DB_SUPPORT=TRUE
  if [[ -e "make/common/get_makefile_var.mak" ]]; then
    MTK_DEBUG_INFO_SUPPORT=`make --no-print-directory -fmake/common/get_makefile_var.mak -f$bldPrjMake get_mak_var MAK_VAR=MTK_DEBUG_INFO_SUPPORT`
    MTK_DB_SUPPORT=`make --no-print-directory -fmake/common/get_makefile_var.mak -f$bldPrjMake get_mak_var MAK_VAR=MTK_DB_SUPPORT`
  fi

  catcher_filter_files=($(find $targetfolder/dhl/database/ -name "catcher_filter*"))  ; if [ "$catcher_filter_files" == "" ]; then error_handler "catcher_filter_files" "$targetfolder/dhl/database";fi
  if [[ ! ("$MTK_DEBUG_INFO_SUPPORT" == "FALSE") ]]; then
  dbginfo=$(find $targetfolder/bin \( -name "DbgInfo_*" ! -name "DbgInfo_DSP*" \))    ; if [ "$dbginfo" == "" ]; then error_handler "dbginfo" "$targetfolder/bin";fi
  dbginfo_dsp=$(find $targetfolder/bin -name "DbgInfo_DSP_*")                         ; if [ "$dbginfo_dsp" == "" ]; then error_handler "dbginfo_dsp" "$targetfolder/bin";fi
  fi
  mddbmetadb=$(find $targetfolder/dhl/database/ -name "MDDB.META_*")                  ; if [ "$mddbmetadb" == "" ]; then error_handler "mddbmetadb" "$targetfolder/dhl/database";fi
  mddbmetaodb=$(find $targetfolder/dhl/database/ -name "MDDB.META.ODB_*")             ; if [ "$mddbmetaodb" == "" ]; then error_handler "mddbmetaodb" "$targetfolder/dhl/database";fi
  if [[ ! ("$MTK_DB_SUPPORT" == "FALSE") ]]; then
  mddb=$(find $targetfolder/dhl/database/ -name "MDDB_*")                             ; if [ "$mddb" == "" ]; then error_handler "mddb" "$targetfolder/dhl/database";fi
  fi
  md1bin=$(find $targetfolder/bin -name "*MDBIN*.bin")                                ; if [ "$md1bin" == "" ]; then error_handler "md1bin" "$targetfolder/bin";fi
  md1dsp=$(find $targetfolder/bin -name "DSP_*")                                      ; if [ "$md1dsp" == "" ]; then error_handler "md1dsp" "$targetfolder/bin";fi

  pack_files="$md1bin $md1dsp"

  if [[ ! ("$MTK_DEBUG_INFO_SUPPORT" == "FALSE") ]]; then
  #copy and compress
  cp -f $dbginfo $outfolder
  cp -f $dbginfo_dsp $outfolder
  dbginfo=$(find $outfolder \( -name "DbgInfo_*" ! -name "DbgInfo_DSP*" \))  ; if [ "$dbginfo" == "" ]; then error_handler "dbginfo" "$outfolder";fi
  dbginfo_dsp=$(find $outfolder -name "DbgInfo_DSP*")                        ; if [ "$dbginfo_dsp" == "" ]; then error_handler "dbginfo_dsp" "$outfolder";fi
  #xz -z $dbginfo
  ./common/tools/LzmaUtil/LzmaUtil e $dbginfo $dbginfo.xz
  ./common/tools/LzmaUtil/LzmaUtil e $dbginfo_dsp $dbginfo_dsp.xz
  fi

  for catcher_filter in ${catcher_filter_files[*]}
  do
    catcher_filter_filename=$(basename $catcher_filter \.bin)
    if [[ "$catcher_filter_filename" == "catcher_filter" ]]; then
      mkimage_func $catcher_filter $cfg_path/md1_filter_hdr.cfg $outfolder/md1_filter.img
    else
      postfix=$(echo "$catcher_filter_filename" | sed -e "s/catcher_filter_*//"| tr -d '\n')
      if [[ "$postfix" == "Default"  ]]; then
        mkimage_func $catcher_filter $cfg_path/md1_filter__${postfix}_hdr.cfg $outfolder/md1_filter__${postfix}.img
      else
        mkimage_func $catcher_filter $cfg_path/md1_filter_${postfix}_hdr.cfg $outfolder/md1_filter_${postfix}.img
      fi
    fi
  done

  mkimage_func $targetfolder/dhl/database/em_filter.bin $cfg_path/md1_emfilter_hdr.cfg $outfolder/md1_emfilter.img
  if [[ ! ("$MTK_DEBUG_INFO_SUPPORT" == "FALSE") ]]; then
  mkimage_func $dbginfo_dsp.xz $cfg_path/md1_dbginfodsp_hdr.cfg $outfolder/md1_dbginfodsp.img
  mkimage_func $dbginfo.xz $cfg_path/md1_dbginfo_hdr.cfg $outfolder/md1_dbginfo.img
  fi
  mkimage_func $mddbmetadb $cfg_path/md1_mddbmeta_hdr.cfg $outfolder/md1_mddbmeta.img
  mkimage_func $mddbmetaodb $cfg_path/md1_mddbmetaodb_hdr.cfg $outfolder/md1_mddbmetaodb.img
  if [[ ! ("$MTK_DB_SUPPORT" == "FALSE") ]]; then
  mkimage_func $mddb $cfg_path/md1_mddb_hdr.cfg $outfolder/md1_mddb.img
  fi
  mkimage_func $targetfolder/dhl/database/mdm_layout_desc.dat $cfg_path/md1_mdmlayout_hdr.cfg $outfolder/md1_mdmlayout.img
  mkimage_func $outfolder/md1_file_map.log $cfg_path/md1_file_map_hdr.cfg $outfolder/md1_file_map.img

  echo "$pack_tool pack $outfolder/$output_md_file $pack_files" >> $outfolder/modem_all_in_one.log
        $pack_tool pack $outfolder/$output_md_file $pack_files

  echo "Single Modem Binary process is done!"
}

unpack_func () {
  chk_unpack_file=`ls | grep _unpack\.img`
  if [[ "$chk_unpack_file" != "" ]]; then
    echo "Error: Please do not place xxx_unpack file: $chk_unpack_file is/are under the current folder!"
    exit 1
  fi
  if [[ ("$input_md_file" == "") || (! -f "$input_md_file") ]]; then
    echo "Error: can not find the image of modem single binary, please check!"
    exit 1
  fi
  $pack_tool unpack $input_md_file
  mv `ls | grep _unpack\.img` $unpack_folder
  echo -e ""
  echo -e "Unpack single modem is done!"
}

pack_func () {
  outfolder=$pack_folder/md_all_in_one
  if [[ ! -d $outfolder ]]; then
    mkdir -p $outfolder
  else
    rm -rf $outfolder
    mkdir -p $outfolder
  fi

  chk_DbgInfo=FALSE
  chk_MDDB=FALSE

  catcher_filter_postfix=()
  file_map_unpack="$pack_folder/md1_file_map_unpack.img"
  while IFS= read -r var
  do
    if [[ ($var =~ md1_filter.*=catcher_filter.*.bin) && ! ($var =~ md1_filter=catcher_filter.bin) ]] ; then
      catcher_filter_postfix+=($(echo "$var" | sed -e "s/.*md1_filter_//" | sed -e "s/=catcher_filter.*.bin//" | tr -d '\n'))
    fi

    if [[ $var =~ md1_dbginfo.* ]]; then
      chk_DbgInfo=TRUE
    fi
    if [[ $var =~ md1_mddb=.* ]]; then
      chk_MDDB=TRUE
    fi
  done < "$file_map_unpack"

  emfilter=$(find $pack_folder -name "md1_emfilter*")
  if [[ "$emfilter" == "" ]]; then
  emfilter=$(find $pack_folder -name "em_filter.bin")                                       ; if [ "$emfilter" == "" ]; then error_handler "emfilter" "$pack_folder";fi
  fi

  mdmlayout=$(find $pack_folder -name "md1_mdmlayout*")
  if [[ "$mdmlayout" == "" ]]; then
  mdmlayout=$(find $pack_folder -name "mdm_layout_desc.dat")                                ; if [ "$mdmlayout" == "" ]; then error_handler "mdmlayout" "$pack_folder";fi
  fi

  filemap=$(find $pack_folder -name "md1_file_map*")                                        ; if [ "$filemap" == "" ]; then error_handler "md1_file_map" "$pack_folder";fi

  if [[ ! ("$chk_DbgInfo" == "FALSE") ]]; then
  dbginfo=$(find $pack_folder \( -name "md1_dbginfo*" ! -name "md1_dbginfodsp*" \))
  if [[ "$dbginfo" == "" ]]; then
  dbginfo=$(find $pack_folder \( -name "DbgInfo_*.xz" ! -name "DbgInfo_DSP*" \))            ; if [ "$dbginfo" == "" ]; then error_handler "dbginfo" "$pack_folder";fi
  fi

  dbginfo_dsp=$(find $pack_folder -name "md1_dbginfodsp*")
  if [[ "$dbginfo_dsp" == "" ]]; then
  dbginfo_dsp=$(find $pack_folder -name "DbgInfo_DSP*.xz")                                  ; if [ "$dbginfo_dsp" == "" ]; then error_handler "dbginfo_DSP" "$pack_folder";fi
  fi
  fi

  mddbmetadb=$(find $pack_folder \( -name "md1_mddbmeta*" ! -name "md1_mddbmetaodb*" \))
  if [[ "$mddbmetadb" == "" ]]; then
  mddbmetadb=$(find $pack_folder \( -name "MDDB.META_*.EDB" ! -name "MDDB.META.ODB*.GZ" \)) ; if [ "$mddbmetadb" == "" ]; then error_handler "mddbmetadb" "$pack_folder";fi
  fi

  mddbmetaodb=$(find $pack_folder -name "md1_mddbmetaodb_*")
  if [[ "$mddbmetaodb" == "" ]]; then
  mddbmetaodb=$(find $pack_folder -name "MDDB.META.ODB*.GZ")                                ; if [ "$mddbmetaodb" == "" ]; then error_handler "mddbmetaodb" "$pack_folder";fi
  fi

  if [[ ! ("$chk_MDDB" == "FALSE") ]]; then
  mddb=$(find $pack_folder \( -name "md1_mddb*" ! -name "md1_mddbmeta*" \))
  if [[ "$mddb" == "" ]]; then
  mddb=$(find $pack_folder -name "MDDB_*.EDB")                                              ; if [ "$mddb" == "" ]; then error_handler "mddb" "$pack_folder";fi
  fi
  fi

  md1bin=$(find $pack_folder -name "*MDBIN*.bin")
  if [[ "$md1bin" == "" ]]; then
  md1bin=$(find $pack_folder -name "md1rom*")                                               ; if [ "$md1bin" == "" ]; then error_handler "md1rom" "$pack_folder";fi
  fi
  md1dsp=$(find $pack_folder -name "DSP*.bin")
  if [[ "$md1dsp" == "" ]]; then
  md1dsp=$(find $pack_folder -name "dsp*.bin")
    if [[ "$md1dsp" == "" ]]; then
      md1dsp=$(find $pack_folder -name "md1dsp*")                                           ; if [ "$md1dsp" == "" ]; then error_handler "md1dsp" "$pack_folder";fi
    fi
  fi

  md1drdi=$(find $pack_folder -name "md1drdi_*")
  if [[ $(basename $md1bin \.img) == "md1rom_unpack" ]]; then
    if [[ -f "$tools_dir/mkimage" ]]; then
      if [[ -f $outfolder/md1rom.img ]]; then
        rm -f $outfolder/md1rom.img
      fi
      $tools_dir/mkimage $md1bin $cfg_path/md1rom_hdr.cfg > $outfolder/md1rom.img
      md1bin=$outfolder/md1rom.img
    else
      echo "Error: mkimage for md1rom.img.img does not exist, please check!"
      exit 1
    fi
    if [[ "$md1drdi" != "" ]]; then 
      $tools_dir/mkimage $md1drdi $cfg_path/md1drdi_hdr.cfg > $outfolder/md1drdi.img
      md1bin="$md1bin $outfolder/md1drdi.img"
    fi
  elif [[ $(basename $md1bin \.img) =~ MDBIN ]] ; then
    if [[ "$drdibin" != "" ]]; then
      echo -e ""
      echo -e "check \"md1drdi\" exist in $md1bin or not!"
      grep "md1drdi" $md1bin
      if [[ $? == 0 ]];then
        if [[ "$md1drdi" != "" ]]; then
          echo -e "md1drdi is existing in $md1bin, removing $md1drdi!"
          rm -f $pack_folder/md1drdi.img
        fi
      else
        echo "Error: md1drdi does not exist in $md1bin, please check!"
        exit 1
      fi
    fi
  fi
  
  if [[ $(basename $md1dsp \.img) == "md1dsp_unpack" ]]; then
    if [[ -f "$tools_dir/mkimage" ]]; then
      if [[ -f $outfolder/md1dsp.img ]]; then
        rm -f $outfolder/md1dsp.img
      fi
      $tools_dir/mkimage $md1dsp $cfg_path/md1dsp_hdr.cfg > $outfolder/md1dsp.img
      md1dsp=$outfolder/md1dsp.img
    else
      echo "Error: mkimage for md1dsp.img does not exist, please check!"
      exit 1
    fi
  fi

  pack_files="$md1bin $md1dsp"

  md1_filter_file=$(find $pack_folder -name "md1_filter_unpack.img")
  if [[ "$md1_filter_file" == "" ]]; then
  md1_filter_file=$(find $pack_folder -name "catcher_filter.bin") ; if [ "$md1_filter_file" == "" ]; then error_handler "catcher_filter" "$pack_folder";fi
  fi
  mkimage_func $md1_filter_file $cfg_path/md1_filter_hdr.cfg $outfolder/md1_filter.img
  
  for postfix in ${catcher_filter_postfix[*]}
  do
    md1_filter_others=$(find $pack_folder -name "md1_filter_${postfix}_unpack.img")
    if [[ "$md1_filter_others" == "" ]]; then
    md1_filter_others=$(find $pack_folder -name "catcher_filter_${postfix}.bin") ; if [ "$md1_filter_others" == "" ]; then error_handler "catcher_filter_${postfix}" "$pack_folder";fi
    fi
    mkimage_func $md1_filter_others $cfg_path/md1_filter_${postfix}_hdr.cfg $outfolder/md1_filter_${postfix}.img
  done

  mkimage_func $emfilter $cfg_path/md1_emfilter_hdr.cfg $outfolder/md1_emfilter.img
  if [[ ! ("$chk_DbgInfo" == "FALSE") ]]; then
  mkimage_func $dbginfo_dsp $cfg_path/md1_dbginfodsp_hdr.cfg $outfolder/md1_dbginfodsp.img
  mkimage_func $dbginfo $cfg_path/md1_dbginfo_hdr.cfg $outfolder/md1_dbginfo.img
  fi
  mkimage_func $mddbmetadb $cfg_path/md1_mddbmeta_hdr.cfg $outfolder/md1_mddbmeta.img
  mkimage_func $mddbmetaodb $cfg_path/md1_mddbmetaodb_hdr.cfg $outfolder/md1_mddbmetaodb.img
  if [[ ! ("$chk_MDDB" == "FALSE") ]]; then
  mkimage_func $mddb $cfg_path/md1_mddb_hdr.cfg $outfolder/md1_mddb.img
  fi
  mkimage_func $mdmlayout $cfg_path/md1_mdmlayout_hdr.cfg $outfolder/md1_mdmlayout.img
  mkimage_func $filemap $cfg_path/md1_file_map_hdr.cfg $outfolder/md1_file_map.img

  if [[ -f "$outfolder/md1_file_map.log" ]]; then
    rm -f "$outfolder/md1_file_map.log"
  fi

  echo "$pack_tool pack $outfolder/$output_md_file $pack_files" >> $outfolder/modem_all_in_one.log
        $pack_tool pack $outfolder/$output_md_file $pack_files

  echo -e ""
  echo -e "Pack process is done!"
}

remove_copy_func () {
  remove_file=$1
  copy_file=$2
  echo -e ""
  if [ "$copy_file" != "" ];then
    echo -e "Removing $remove_file ..."
    rm -f "$remove_file"
    if [[ $? != 0 ]];then
      echo -e "Error: Removing file $remove_file fail, please check!"
      exit 1
    fi
  else
    echo "Error: Cannot remove file $remove_file, please check!"
    exit 1
  fi

  echo "Copying $copy_file to $unpack_folder ...";
  if [[ -d $unpack_folder ]];then
    if [[ -e $copy_file ]]; then
      cp -f "$copy_file" "$unpack_folder"
      if [[ $? != 0 ]];then
        echo -e "Error: Copying file $copy_file to $unpack_folder fail, please check!"
        exit 1
      fi
    else
      echo -e "Error: The file: $copy_file doese not exist, please check!"
      exit 1
    fi
  else
    echo "Error: Cannot copy file to $unpack_folder, please check!"
    exit 1
  fi
}

repack_func () {
  unpack_func
  echo -e ""
  echo -e "Replace file: $replace_file"
  regexp="replace_file=\S*"
  if [[ ! $replace_file =~ $regexp ]]; then
    echo "Error: The format of replace file command \"$replace_file\" is incorrect, please check!"
    exit 1
  else
    final_rep=(`echo $replace_file | cut -d "=" -f2 `)
    rep_array=(${final_rep//,/ })
    for rep_file in ${rep_array[*]}
    do
      base_rep_file=$(basename $rep_file .img)
      if [[ $base_rep_file =~ md1_filter ]]; then
        if [[ $rep_file =~ md1_filter\.img || $rep_file =~ md1_filter_unpack\.img ]]; then
          remove_copy_func "$unpack_folder/md1_filter_unpack.img" $rep_file
        else
          postfix=$(echo "$base_rep_file" | sed -e "s/md1_filter_//"| sed -e "s/_unpack\.img//")
          filter_file=$(find $unpack_folder -name "md1_filter_${postfix}_unpack*")
          remove_copy_func $filter_file $rep_file
        fi
      elif [[ $base_rep_file =~ md1_emfilter ]]     ; then
        emfilter=$(find $unpack_folder -name "md1_emfilter_*")
        remove_copy_func $emfilter $rep_file
      elif [[ $base_rep_file =~ md1_mdmlayout ]]    ; then
        mdmlayout=$(find $unpack_folder -name "md1_mdmlayout_*")
        remove_copy_func $mdmlayout $rep_file
      elif [[ $base_rep_file =~ md1_file_map ]]     ; then
        filemap=$(find $unpack_folder -name "md1_file_map_*")
        remove_copy_func $filemap $rep_file
      elif [[ $base_rep_file =~ md1_dbginfodsp ]]   ; then
        dbginfo_dsp=$(find $unpack_folder -name "md1_dbginfodsp_*")
        remove_copy_func $dbginfo_dsp $rep_file
      elif [[ $base_rep_file =~ md1_dbginfo ]]      ; then
        dbginfo=$(find $unpack_folder \( -name "md1_dbginfo_*" ! -name "md1_dbginfodsp*" \))
        remove_copy_func $dbginfo $rep_file
      elif [[ $base_rep_file =~ md1_mddbmetaodb ]]  ; then
        mddbmetaodb=$(find $unpack_folder -name "md1_mddbmetaodb_*")
        remove_copy_func $mddbmetaodb $rep_file
      elif [[ $base_rep_file =~ md1_mddbmeta ]]     ; then
        mddbmetadb=$(find $unpack_folder \( -name "md1_mddbmeta_*" ! -name "md1_mddbmetaodb*" \))
        remove_copy_func $mddbmetadb $rep_file
      elif [[ $base_rep_file =~ md1_mddb ]]         ; then
        mddb=$(find $unpack_folder \( -name "md1_mddb_*" ! -name "md1_mddbmeta*" \))
        remove_copy_func $mddb $rep_file
      elif [[ $base_rep_file =~ DSP || $rep_file =~ md1dsp ]]; then
        md1dsp=$(find $unpack_folder -name "md1dsp*")
        remove_copy_func $md1dsp $rep_file
      elif [[ $base_rep_file =~ MDBIN || $rep_file =~ md1rom ]]; then
        md1bin=$(find $unpack_folder -name "md1rom*")
        remove_copy_func $md1bin $rep_file
      fi
    done
  fi
  
  pack_func

  echo -e ""
  echo -e "Repack process is done!"
}

########################################
##                main                ##
########################################

if [[ $display_usage == 1 ]]; then 
  usage
fi

if [[ ($packcmd == 0) && ($unpackcmd == 0) && ($repackcmd == 0)]]; then
  pack_for_build
elif [[ $unpackcmd == 1 ]]; then
  unpack_func
elif [[ $packcmd == 1 ]];   then
  pack_func
elif [[ $repackcmd == 1 ]]; then
  repack_func
fi

exit 0