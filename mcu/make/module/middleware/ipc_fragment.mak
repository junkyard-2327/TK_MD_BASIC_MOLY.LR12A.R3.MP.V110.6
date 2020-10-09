#
# Define source file lists to SRC_LIST
#
SRC_LIST = ${COMMON_ROOT}/middleware/hif/ipcore/src/ipc_fragment/ipc_fragment.cpp                   \
           ${COMMON_ROOT}/middleware/hif/ipcore/src/ipc_fragment/ipc_fragment_defrag.cpp            \
           ${COMMON_ROOT}/middleware/hif/ipcore/src/ipc_fragment/ipc_fragment_reassemble.cpp        \
           ${COMMON_ROOT}/middleware/hif/ipcore/src/ipc_fragment/ipc_fragment_utility.cpp           \
           ${COMMON_ROOT}/middleware/hif/ipcore/src/ipc_fragment/ipc_fragment_export.cpp            \
           ${COMMON_ROOT}/middleware/hif/ipcore/src/ipc_fragment/ipc_fragment_frag.cpp              \
           ${COMMON_ROOT}/middleware/hif/ipcore/src/ipc_fragment/ipc_fragment_ut.cpp

#
#  Define include path lists to INC_DIR
#
INC_DIR = ${COMMON_ROOT}/middleware/hif/interface       \
          ${COMMON_ROOT}/middleware/hif/ipcore/include  \
          ${COMMON_ROOT}/interface/service/hif/hiflibplus

#
# Define the specified compile options to COMP_DEFS
#
COMP_DEFS =

#
# Define the source file search paths to SRC_PATH
#
SRC_PATH = ${COMMON_ROOT}/middleware/hif/ipcore/src/ipc_fragment
