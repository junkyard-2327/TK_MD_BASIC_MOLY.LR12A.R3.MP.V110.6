# Define source file lists to SRC_LIST
SRC_LIST = ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/TS/src/dvt_ts.c \
           ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/Rgu/src/dvt_RGU.c \
           ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/I2c/src/dvt_i2c.c \
           ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/Pwm/src/dvt_PWM.c \
           ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/SIM/src/dvt_sim.c \
           ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/Gpt/src/dvt_gpt.c \
           ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/Comm_Protocol/src/dvt_comm_seq.c \
           ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/Comm_Protocol/src/dvt_common.c \
           ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/Rtc/src/Dvt_Rtc.c \
           ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/Adc/src/Dvt_Adc.c \
           ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/Uart/src/dvt_uart.c \
           ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/Usb/src/dvt_usb.c \
           ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/Usb/src/dvt_usbacm_drv.c \
           ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/Usb/src/dvt_usb_mode.c \
           ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/Usb/src/meut_usb.c \
           ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/Usb/src/meut_testcase.c \
           ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/Pmu/src/dvt_pmu.c \
           ${CORE_ROOT}/middleware/meut/src/meut_main.c         \
           ${CORE_ROOT}/middleware/meut/src/meut_init.c
 
# Define include path lists to INC_DIR
INC_DIR = ${COMMON_ROOT}/driver/drv/include \
          ${COMMON_ROOT}/driver/peripheral/inc \
          ${COMMON_ROOT}/driver/storage/mc/inc \
          ${COMMON_ROOT}/driver/storage/sim/inc \
          ${COMMON_ROOT}/service/kal/common/include \
          ${COMMON_ROOT}/service/kal/mlib/include \
          ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/Comm_Protocol/inc \
          ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/Gpt/inc \
          ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/Pwm/inc \
          ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/Rtc/inc \
          ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/I2c/inc \
          ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/SIM/inc \
          ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/TS/inc \
          ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/Rgu/inc \
          ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/Uart/inc \
          ${COMMON_ROOT}/driver/connectivity/usb_class/include \
          ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/Usb/inc \
          ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/Pmu/inc \
          ${CORE_ROOT}/middleware/meut/UDVT/Dvt_Target_Module/Adc/inc \
          ${CORE_ROOT}/middleware/mtkdebug \
          ${COMMON_ROOT}/driver/drv_def \
          ${COMMON_ROOT}/interface/driver/peripheral \
 
# Define the specified compile options to COMP_DEFS
COMP_DEFS =
 
