#!/bin/bash
#
# Copyright Statement:
# --------------------
# This software is protected by Copyright and the information contained
# herein is confidential. The software may not be copied and the information
# contained herein may not be used or disclosed except with the written
# permission of MediaTek Inc. (C) 2011
#
# BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
# THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
# RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
# AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
# EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
# MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
# NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
# SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
# SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
# THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
# NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
# SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
#
# BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
# LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
# AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
# OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
# MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
#
# THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
# WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
# LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
# RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
# THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
#
#

#-------------------------------------
#          parsing argument
#-------------------------------------
GEN_CONFIG=$1
source ./gen_config/$GEN_CONFIG
source ./tools/packing/$PACKING_FILE

#-------------------------------------
#               function
#-------------------------------------
get_abi_rel_name () 
{
  if [ "$#" -ne "1" ]; then
    echo "Error: no abi name specified"
    exit 1
  fi

  if [[ $1 =~ ^arm64-v* ]] || [[ $1 =~ ^arm64* ]]; then
    echo "arm64"
  elif [[ $1 =~ ^armeabi-v* ]] || [[ $1 =~ ^arm* ]]; then
    echo "arm"
  elif [[ $1 =~ ^x86_64* ]]; then
    echo "x86_64"
  elif [[ $1 =~ ^x86* ]]; then
    echo "x86"
  elif [[ $1 =~ ^mips64* ]]; then
    echo "mips64"
  elif [[ $1 =~ ^mips* ]]; then
    echo "mips"
  fi
}

#-------------------------------------
#               packing
#-------------------------------------
echo "***************************************************************"
echo "                           Packing                             "
echo "***************************************************************"
rm -rf ./build/$GEN_CONFIG/rel

perl ./tools/time.pl
echo "Packing release package"
TOTAL_PACK_PASS="TRUE"

# copy lib from mtk_rel
mkdir -p ./build/$GEN_CONFIG/rel
cp -rf ./mtk_rel/$GEN_CONFIG/libs ./build/$GEN_CONFIG/rel

for i in ${BUILD_MODULE_LIST[@]}
do
  module=$i
  echo "packing files for $module ..."
  
  # copy lib from build folder
  if [ -e ./module/$module/app.mk ] || [ -d ./mtk_rel/$GEN_CONFIG/module_cmakes/$module/ ]; then
    var=${module}_LIB_RELEASE_FILE_LIST[@]
    for file in ${!var}
    do
      for dir in ./build/$GEN_CONFIG/module/$module/*/
      do
        if [ ! -d $dir ]; then
          echo "Error: folder not found: $dir"
          TOTAL_PACK_PASS="FALSE"
          break
        fi

        abi=$(basename $dir)
        rel_name=`get_abi_rel_name $abi`
        mkdir -p ./build/$GEN_CONFIG/rel/libs/$rel_name
        if [ -e ./build/$GEN_CONFIG/module/$module/$abi/libs/$abi/$file ]; then
          cp -f ./build/$GEN_CONFIG/module/$module/$abi/libs/$abi/$file ./build/$GEN_CONFIG/rel/libs/$rel_name/$file
        else
          echo "Error: file not found: ./build/$GEN_CONFIG/module/$module/$abi/libs/$abi/$file"
          TOTAL_PACK_PASS="FALSE"
        fi
      done
    done
  fi

  var=${module}_SRC_RELEASE_FILE_LIST[@]
  tmpAry=( ${!var} )
  for ((i=0 ; i < ${#tmpAry[@]} ; i+=2))
  do
    cp_from=${tmpAry[i]}
    cp_to=${tmpAry[i+1]}

    if [[ $cp_from != */ ]]; then
      if [ -e $cp_from ]; then
        mkdir -p ./build/$GEN_CONFIG/rel/$cp_to
        if [ -e ./build/$GEN_CONFIG/rel/$cp_to/$(basename $cp_from) ]; then
          echo "Error: duplicate file found: ./build/$GEN_CONFIG/rel/$cp_to/$(basename $cp_from)"
          TOTAL_PACK_PASS="FALSE"
        else
          cp -f $cp_from ./build/$GEN_CONFIG/rel/$cp_to
        fi
      else
        echo "Error: file not found: $cp_from"
        TOTAL_PACK_PASS="FALSE"
      fi
    else
      if [ -d $cp_from ]; then
        mkdir -p ./build/$GEN_CONFIG/rel/$cp_to
        if [ -d ./build/$GEN_CONFIG/rel/$cp_to/$(basename $cp_from) ]; then
          echo "Error: duplicate folder found: ./build/$GEN_CONFIG/rel/$cp_to/$(basename $cp_from)"
          TOTAL_PACK_PASS="FALSE"
        else
          cp -rf $cp_from ./build/$GEN_CONFIG/rel/$cp_to
        fi
      else
        echo "Error: folder not found: $cp_from"
        TOTAL_PACK_PASS="FALSE"
      fi
    fi
  done
  echo ""
done

make -f ./tools/check_rel.mk chk_files -j INST_PATH=./build/$GEN_CONFIG/rel MTK_APP_ABI_32="$MTK_APP_ABI_32" MTK_APP_ABI_64="$MTK_APP_ABI_64" > ./${GEN_CONFIG}_rel_chk.log
if [ $? -eq 0 ]; then
  echo -e "check release file OK.\n"
else
  echo -e "Error: check release file Failed!, please check ./${GEN_CONFIG}_rel_chk.log\n"
  exit 1
fi

if [ "$TOTAL_PACK_PASS" == "TRUE" ]; then
  # compress to *.tar.bz2 file
  echo "create ./${GEN_CONFIG}_rel.tar.bz2 ..."
  rm -f ./${GEN_CONFIG}_rel.tar.bz2
  tar -jcvf ./${GEN_CONFIG}_rel.tar.bz2 -C ./build/$GEN_CONFIG rel > ./${GEN_CONFIG}_rel.log
  echo -e "Done.\n"
else
  echo -e "Error: some error happened during sub rlease packing, stop.\n"
  exit 1
fi