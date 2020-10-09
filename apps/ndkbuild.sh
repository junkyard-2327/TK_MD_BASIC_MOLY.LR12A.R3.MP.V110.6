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
#               function
#-------------------------------------
show_usage () 
{
  echo "==============================================================="
  echo "Build Project"
  echo "==============================================================="
  echo "Usage: $0 <action> [module] [gen_config] <NDK argument>"
  echo ""
  echo "Note: if <action> contains \"build\" or \"clean\", [module] and [gen_config] must specify"
  if [ -e ./tools/of_packing/of_packing.sh ] && [ -e ./tools/cus_packing/cus_packing.sh ]; then
    echo "      if <action> contains \"of\" or \"cus\", [gen_config] must specify"
  else
    echo "      if <action> contains \"pack\", [gen_config] must specify"
  fi
  echo ""
  echo "Example:"
  echo "       $0 build all GEN90_ENG APP_ABI=armeabi-v7a,arm64-v8a APP_PLATFORM=android-24"
  echo "       $0 build epdg,mal GEN90_ENG APP_ABI=armeabi-v7a,arm64-v8a APP_PLATFORM=android-24"
  echo "       $0 clean all GEN90_ENG"
  echo "       $0 clean,build epdg GEN90_ENG"
  if [ -e ./tools/of_packing/of_packing.sh ] && [ -e ./tools/cus_packing/cus_packing.sh ]; then
    echo "       $0 of GEN90_ENG"
    echo "       $0 cus GEN90_ENG"
  fi
  if [ -d ./mtk_rel ]; then
    echo "       $0 pack GEN90_ENG"
  fi

  if [ -e ./tools/of_packing/of_packing.sh ] && [ -e ./tools/cus_packing/cus_packing.sh ]; then
    echo "       $0 clean,build,of all GEN90_ENG"
    echo "       $0 clean,build,cus all GEN90_ENG"
  fi
  if [ -d ./mtk_rel ]; then
    echo "       $0 clean,build,pack all GEN90_ENG"
  fi
  echo ""
}

if [ $# -lt 2 ]; then
  show_usage
  exit 1
fi

#-------------------------------------
#             MTK_OPTION
#-------------------------------------
MTK_BUILD_ROOT=`pwd`
MTK_MODULE_DIR="$MTK_BUILD_ROOT/module"
MTK_BUILD_OPTION=""

#-------------------------------------
#          parsing argument
#-------------------------------------
echo "***************************************************************"
echo "                       Parsing Argument                        "
echo "***************************************************************"
CLEAN="FALSE"
BUILD="FALSE"
OF_PACK="FALSE"
CUS_PACK="FALSE"
PACK="FALSE"
IFS=,
ACTION_LIST=($1)
IFS=" "
GEN_CONFIG_LIST=()
for action in ${ACTION_LIST[@]}
do
  if [ "$action" == "build" ]; then #build module
    BUILD="TRUE"
    if [ "$2" == "all" ];then
      BUILD_MODULE="all"
    else
      IFS=,
      BUILD_MODULE=($2)
      IFS=" "
    fi
  elif [ "$action" == "clean" ]; then # clean build folder
    CLEAN="TRUE"
  elif [ "$action" == "of" ] && [ ! -d ./mtk_rel ]; then # pack official release file (HQ)
    OF_PACK="TRUE"
  elif [ "$action" == "cus" ] && [ ! -d ./mtk_rel ]; then # pack custom release file (HQ)
    CUS_PACK="TRUE"
  elif [ "$action" == "pack" ] && [ -d ./mtk_rel ]; then # pack release file (CUS)
    PACK="TRUE"
  else
    echo -e "Error: unknown action: \033[1;31m$action\033[0m\n"
    show_usage
    exit 1
  fi
done

COMMAND_ABI=""
if [ "$BUILD" == "TRUE" ]; then
  # seperate ABI="XXX XXX" from command
  EXTRA_NDK_BUILD_OPTION=${@:4}
  echo "EXTRA_NDK_BUILD_OPTION = $EXTRA_NDK_BUILD_OPTION"
  COMMAND_ABI=`echo $EXTRA_NDK_BUILD_OPTION | grep "APP_ABI=[^ ]*" -o | cut -d "=" -f 2`
  EXTRA_NDK_BUILD_OPTION=`echo ${@:4} | sed -e "s/APP_ABI=$COMMAND_ABI//g"`
fi

if [ "$BUILD" == "TRUE" ] || [ "$OF_PACK" == "TRUE" ] || [ "$CUS_PACK" == "TRUE" ] || [ "$PACK" == "TRUE" ] || [ "$CLEAN" == "TRUE" ]; then
  # get gen config
  if [ "$BUILD" == "TRUE" ] || [ "$CLEAN" == "TRUE" ]; then
    IFS=","
    GEN_CONFIG_LIST=($3)
    IFS=" "
  else
    if [ "$OF_PACK" == "TRUE" ] || [ "$CUS_PACK" == "TRUE" ] || [ "$PACK" == "TRUE" ]; then
      IFS=","  
      GEN_CONFIG_LIST=($2)
      IFS=" "
    fi
  fi

  # check if gen config file is specified
  if [ ${#GEN_CONFIG_LIST[@]} -eq 0 ]; then
    echo "Error: no gen config file is specified"
    echo ""
    echo "Plaase select as following:"
    ls ./gen_config
    echo ""
    exit 1
  fi

  # check gen config file exist or not
  for GEN_CONFIG in ${GEN_CONFIG_LIST[@]}
  do
    if [ ! -e ./gen_config/$GEN_CONFIG ]; then
      echo "Error: not found gen config file: ./gen_config/$GEN_CONFIG"
      echo ""
      echo "Plaase select as following:"
      ls ./gen_config
      echo ""
      exit 1
    fi
  done  
fi

#-------------------------------------
#    gen NDK symbol link (HQ site)
#-------------------------------------
source ./gen_config/${GEN_CONFIG_LIST[0]}

#remove existing symbol link if link path is wrong
if [ -L $TOOL_CHAIN_ROOT ]; then
  if [ "$(readlink -- "$TOOL_CHAIN_ROOT")" != "$CENTRAL_TOOL_CHAIN" ]; then
    rm -f $TOOL_CHAIN_ROOT
  fi
fi

if [ ! -d $TOOL_CHAIN_ROOT ]; then
  if [ -d $CENTRAL_TOOL_CHAIN ]; then
    ln -s $CENTRAL_TOOL_CHAIN $TOOL_CHAIN_ROOT
  else
    echo "Error: not found central toolchain: $CENTRAL_TOOL_CHAIN"
    exit 1
  fi
fi
echo ""

#-------------------------------------
#         for each GEN_CONFIG
#-------------------------------------
CUS_REL_FOLDER_CLEAN_UP="FALSE"
for GEN_CONFIG in ${GEN_CONFIG_LIST[@]}
do
  source ./gen_config/$GEN_CONFIG
  if [ "$BUILD_MODULE" == "all" ]; then
    BUILD_MODULE=( "${BUILD_MODULE_LIST[@]}" )
  fi

  # extract build option, parsing file to a single line
  MTK_BUILD_OPTION=`cat ./gen_config/$GEN_CONFIG | tr "\r\n" " " | sed "s/#.*//"`
  echo "MTK_BUILD_OPTION = $MTK_BUILD_OPTION"

  #-------------------------------------
  #           clean folder
  #-------------------------------------
  if [ "$CLEAN" == "TRUE" ]; then
    echo "***************************************************************"
    echo "                           Clean Up                            "
    echo "***************************************************************"
    if [ "$2" == "all" ];then
      echo "delete folder ./build/$GEN_CONFIG"
      rm -rf ./build/$GEN_CONFIG
      echo ""
    else
      IFS=,
      CLEAN_MODULE=($2)
      IFS=" "
      for i in ${CLEAN_MODULE[@]}
      do
        module=$i
        echo "delete folder ./build/$GEN_CONFIG/module/$module/"
        rm -rf ./build/$GEN_CONFIG/module/$module
        echo "delete log ./build/$GEN_CONFIG/log/$module.log"
        rm -rf ./build/$GEN_CONFIG/log/$module.log
      done
      echo ""
    fi
  fi
  
  
  #-------------------------------------
  #           build module
  #-------------------------------------
  if [ "$BUILD" == "TRUE" ]; then
    echo "***************************************************************"
    echo "                         Build Module                          "
    echo "***************************************************************"
    echo -n "BUILD_MODULE = "
    printf "%s " "${BUILD_MODULE[@]}"
    echo ""
  
    mkdir -p ./build/$GEN_CONFIG/module
    mkdir -p ./build/$GEN_CONFIG/log
  
    TOTAL_BUILD_PASS="TRUE"
    TOTAL_PACK_FILE_CHECK_PASS="TRUE"
    TOTAL_PUBLIC_HEADER_CHECK_PASS="TRUE"
    build_fail_module_string=""
    for i in ${BUILD_MODULE[@]}
    do
      module=$i
      if [ ! -e ./module/$module/app.mk ]; then
        echo -e "skip build for partial release module: $module\n"
        continue
      fi
  
      perl ./tools/time.pl
      echo "Building $module"
      # get ABI setting
      if [ "$COMMAND_ABI" != "" ]; then
        IFS=","
        BUILD_ABI=( $COMMAND_ABI )
        IFS=" "
      elif [ -e ./module/$module/app_config.mk ]; then
        module_support_app_abi=`grep "^MTK_APP_ABI\ *[?:]\{0,1\}=\ *" ./module/$module/app_config.mk | cut -d '=' -f2 | tr -d ' ' | tail -1`
        if [ $module_support_app_abi ] && [ $module_support_app_abi -eq 32 ]; then
          BUILD_ABI=( "${MTK_APP_ABI_32[@]}" )
        elif [ $module_support_app_abi ] && [ $module_support_app_abi -eq 64 ]; then
          BUILD_ABI=( "${MTK_APP_ABI_64[@]}" )
        else
          BUILD_ABI=( "${MTK_APP_ABI_32[@]}" "${MTK_APP_ABI_64[@]}" )
        fi
      else
        BUILD_ABI=( "${MTK_APP_ABI_32[@]}" "${MTK_APP_ABI_64[@]}" )
      fi
  
      # get Application.mk setting
      if [ -e ./module/$module/app_config.mk ]; then
        module_designate_app_mk=`grep "^MTK_APPLICATION_MK\ *[?:]\{0,1\}=\ *" ./module/$module/app_config.mk | cut -d '=' -f2 | tr -d ' ' | tail -1`
        if [ "$module_designate_app_mk" == "" ]; then
          MTK_APPLICATION_MK=""
        else
          MTK_APPLICATION_MK="NDK_APPLICATION_MK=./module/$module/$module_designate_app_mk"
        fi
      else
        MTK_APPLICATION_MK=""
      fi
  
      # get app allow missing dep setting
      if [ -e ./module/$module/app_config.mk ]; then
        module_designate_all_missing_dep=`grep "^MTK_APP_ALLOW_MISSING_DEPS\ *[?:]\{0,1\}=\ *" ./module/$module/app_config.mk | cut -d '=' -f2 | tr -d ' ' | tail -1`
        if [ "$module_designate_all_missing_dep" == "" ]; then
          MTK_APP_ALLOW_MISSING_DEPS="false"
        else
          MTK_APP_ALLOW_MISSING_DEPS=$module_designate_all_missing_dep
        fi
      else
        MTK_APP_ALLOW_MISSING_DEPS="false"
      fi
  
      # build module for each abi
      BUILD_PASS="TRUE"
      rm -rf ./build/$GEN_CONFIG/log/$module.log
      echo "Building...." >> ./build/$GEN_CONFIG/log/$module.log
      for j in ${BUILD_ABI[@]}
      do
        # build command
        abi=$j
        echo $TOOL_CHAIN_ROOT/ndk-build NDK_PROJECT_PATH="./build/$GEN_CONFIG/module/$module/$abi" APP_BUILD_SCRIPT="./module/$module/app.mk" $MTK_APPLICATION_MK APP_ABI="$abi" APP_ALLOW_MISSING_DEPS="$MTK_APP_ALLOW_MISSING_DEPS" APP_PLATFORM="$MTK_APP_PLATFORM" MTK_BUILD_ROOT="$MTK_BUILD_ROOT" MTK_MODULE_DIR="$MTK_MODULE_DIR" MTK_GEN_CONFIG="$GEN_CONFIG" $MTK_BUILD_OPTION $EXTRA_NDK_BUILD_OPTION -j >> ./build/$GEN_CONFIG/log/$module.log
        $TOOL_CHAIN_ROOT/ndk-build NDK_PROJECT_PATH="./build/$GEN_CONFIG/module/$module/$abi" APP_BUILD_SCRIPT="./module/$module/app.mk" $MTK_APPLICATION_MK APP_ABI=$abi APP_ALLOW_MISSING_DEPS="$MTK_APP_ALLOW_MISSING_DEPS" APP_PLATFORM="$MTK_APP_PLATFORM" MTK_BUILD_ROOT="$MTK_BUILD_ROOT" MTK_MODULE_DIR="$MTK_MODULE_DIR" MTK_GEN_CONFIG="$GEN_CONFIG" $MTK_BUILD_OPTION $EXTRA_NDK_BUILD_OPTION -j >> ./build/$GEN_CONFIG/log/$module.log 2>&1
        if [ $? -eq 0 ]; then
          echo -e "                   \033[1;32m Build Pass [$abi]\033[0m"
        else
          echo -e "                   \033[1;31m Build Fail [$abi]\033[0m"
          BUILD_PASS="FALSE"
          TOTAL_BUILD_PASS="FALSE"
        fi
        echo "" >> ./build/$GEN_CONFIG/log/$module.log
      done
     
      # pack file check
      if [ "$BUILD_PASS" == "TRUE" ]; then
        PACK_FILE_CHECK_PASS="TRUE"
        if [ -e ./tools/of_packing/$OF_PACKING_FILE ]; then
          source ./tools/of_packing/$OF_PACKING_FILE
          echo "Packing file check...." >> ./build/$GEN_CONFIG/log/$module.log
          var=${module}_OF_LIB_RELEASE_FILE_LIST[@]
          for file in ${!var}
          do
            for dir in ./build/$GEN_CONFIG/module/$module/*/
            do
              if [ ! -d $dir ]; then
                echo "Error: folder not found: $dir" >> ./build/$GEN_CONFIG/log/$module.log
                PACK_FILE_CHECK_PASS="FALSE"
                break
              fi
    
              abi=$(basename $dir)
              echo "Check file: ./build/$GEN_CONFIG/module/$module/$abi/libs/$abi/$file" >> ./build/$GEN_CONFIG/log/$module.log
              if [ ! -e ./build/$GEN_CONFIG/module/$module/$abi/libs/$abi/$file ]; then
                echo "            Error: file not found: ./build/$GEN_CONFIG/module/$module/$abi/libs/$abi/$file" >> ./build/$GEN_CONFIG/log/$module.log
                PACK_FILE_CHECK_PASS="FALSE"
              fi
              echo "Check file: ./build/$GEN_CONFIG/module/$module/$abi/obj/local/$abi/$file" >> ./build/$GEN_CONFIG/log/$module.log
              if [ ! -e ./build/$GEN_CONFIG/module/$module/$abi/obj/local/$abi/$file ]; then
                echo "            Error: file not found: ./build/$GEN_CONFIG/module/$module/$abi/obj/local/$abi/$file" >> ./build/$GEN_CONFIG/log/$module.log
                PACK_FILE_CHECK_PASS="FALSE"
              fi
            done
          done
  
          var=${module}_OF_SRC_RELEASE_FILE_LIST[@]
          tmpAry=( ${!var} )
          for ((i=0 ; i < ${#tmpAry[@]} ; i+=2))
          do
            cp_from=${tmpAry[i]}
            if [[ $cp_from != */ ]]; then
              echo "Check file: $cp_from" >> ./build/$GEN_CONFIG/log/$module.log
              if [ ! -e $cp_from ]; then
                echo "            Error: file not found: $cp_from" >> ./build/$GEN_CONFIG/log/$module.log
                PACK_FILE_CHECK_PASS="FALSE"
              fi
            else
              echo "Check folder: $cp_from" >> ./build/$GEN_CONFIG/log/$module.log
              if [ ! -d $cp_from ]; then
                echo "            Error: folder not found: $cp_from" >> ./build/$GEN_CONFIG/log/$module.log
                PACK_FILE_CHECK_PASS="FALSE"
              fi
            fi
          done
          echo "" >> ./build/$GEN_CONFIG/log/$module.log
  
          if [ "$PACK_FILE_CHECK_PASS" == "TRUE" ]; then
            echo -e "                   \033[1;32m Pack Check Pass\033[0m"
          else
            echo -e "                   \033[1;31m Pack Check Fail\033[0m"
            TOTAL_PACK_FILE_CHECK_PASS="FALSE"
          fi
        fi
      else
        echo "Packing file skip....(due to build fail)" >> ./build/$GEN_CONFIG/log/$module.log
        echo -e "                   \033[1;31m Pack Check Skip (due to build fail)\033[0m"
        TOTAL_PACK_FILE_CHECK_PASS="FALSE"
      fi
  
      # public header check
      PUBLIC_HEADER_CHECK_PASS="TRUE"
      if [ -d ./public_header ] && [ -e ./public_header/make/${module}.mk ]; then
        PUBLIC_HEADER_BUILD_PATH=${MTK_BUILD_ROOT}/build/$GEN_CONFIG/module/$module/$abi
        echo "Public header check...." >> ./build/$GEN_CONFIG/log/$module.log
        make -C ./public_header/make/ -f ${module}.mk MTK_BUILD_ROOT="$MTK_BUILD_ROOT" PUBLIC_HEADER_BUILD_PATH="$PUBLIC_HEADER_BUILD_PATH" MTK_MODULE_DIR="$MTK_MODULE_DIR" >> ./build/$GEN_CONFIG/log/$module.log 2>&1
        header_result=$?  
        header_diff=`cat ${PUBLIC_HEADER_BUILD_PATH}/public_header/${module}.diff`
        if [ "$header_diff" == "" ]; then
            echo_header_diff="\033[1;32m[Same]\033[0m"
        else
            echo_header_diff="\033[1;31m[Diff]\033[0m"
        fi
    
  
        if [ $header_result -eq 0 ]; then
          echo -e "                   \033[1;32m Public Header Check Pass\033[0m $echo_header_diff"
          make -C ./public_header/make/ -f ${module}.mk  MTK_BUILD_ROOT="$MTK_BUILD_ROOT" PUBLIC_HEADER_BUILD_PATH="$PUBLIC_HEADER_BUILD_PATH"  MTK_MODULE_DIR="$MTK_MODULE_DIR" clean >> ./build/$GEN_CONFIG/log/$module.log 2>&1
        else
          echo -e "                   \033[1;31m Public Header Check Fail\033[0m $echo_header_diff"
          PUBLIC_HEADER_CHECK_PASS="FALSE"
          TOTAL_PUBLIC_HEADER_CHECK_PASS="FALSE"
        fi
      fi
  
      # warning scan
      echo "                    LOG: ./build/$GEN_CONFIG/log/$module.log"
      perl ./tools/chk_lib_err_warn.pl ./build/$GEN_CONFIG/log/$module.log
  
      echo ""
  
      if [ "$BUILD_PASS" != "TRUE" ] || [ "$PACK_FILE_CHECK_PASS" != "TRUE" ]; then
        build_fail_module_string="$build_fail_module_string $module"
      fi  
    done
   
    if [ "$TOTAL_BUILD_PASS" == "TRUE" ] && [ "$TOTAL_PACK_FILE_CHECK_PASS" == "TRUE" ]; then
      if [ "$TOTAL_PUBLIC_HEADER_CHECK_PASS" == "TRUE" ]; then
        echo -e "Done, all pass (public header check Pass).\n"
      else
        echo -e "Done, all pass (public header check Fail).\n"
      fi
    else
      echo "Some error happened during build, stop."
      echo -e "Build fail module:\033[1;31m$build_fail_module_string\033[0m\n"
      exit 1
    fi
  fi  
    
  
  #-------------------------------------
  #          official packing
  #-------------------------------------
  if [ "$OF_PACK" == "TRUE" ]; then
    ./tools/of_packing/of_packing.sh $GEN_CONFIG
    if [ $? -ne 0 ]; then
      exit 1
    fi
  fi

  #-------------------------------------
  #            cutom packing
  #-------------------------------------
  if [ "$CUS_PACK" == "TRUE" ]; then
    if [ "$CUS_REL_FOLDER_CLEAN_UP" == "FALSE" ]; then
      rm -rf $CUS_PACK_RELEASE_PATH
      mkdir -p $CUS_PACK_RELEASE_PATH
      CUS_REL_FOLDER_CLEAN_UP="TRUE"
    fi
    ./tools/cus_packing/cus_packing.sh $GEN_CONFIG $CUS_PACK_RELEASE_PATH
    if [ $? -ne 0 ]; then
      exit 1
    fi
  fi

  #-------------------------------------
  #               packing
  #-------------------------------------
  if [ "$PACK" == "TRUE" ]; then
    ./tools/packing/packing.sh $GEN_CONFIG
    if [ $? -ne 0 ]; then
      exit 1
    fi
  fi
done

