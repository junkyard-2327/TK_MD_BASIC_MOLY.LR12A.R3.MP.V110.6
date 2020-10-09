#!/bin/bash

# show usage message
usage () {
    echo "Usage: $0 <template_file> <output_file> <target_build_varient> <label> <gen_config>"
    echo ""
    echo "Example:"
    echo "       $0 init.md_apps.rc.template init.md_apps.rc eng UMOLYA.W17.13.LTE.p19 GEN93_ENG"
}

# set exit immediately if a command exits with a non-zero status.
set -e

# read arguments
template_file=$1
dest_file=$2
build_varient=$3
label=$4
gen_config=$5
date_time=$(date +"%Y/%m/%d %H:%M:%S GMT %:z")

# check arguments
if [ -z "$1" ]; then usage; exit 1; fi
if [ -z "$2" ]; then usage; exit 1; fi
if [ -z "$3" ]; then usage; exit 1; fi

# replace string.
sed  "s|\$TARGET_BUILD_VARIANT|${build_varient}|g; \
      s|\$DATE|${date_time}|g; \
      s|\$LABEL|${label}|g; \
      s|\$GEN_CFG|${gen_config}|g" $template_file > $dest_file
