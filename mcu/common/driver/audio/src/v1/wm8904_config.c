
#include "kal_public_defs.h"
#include "kal_public_api.h"
#include "stack_config.h"
#include "kal_trace.h"


// #include "l1audio_def.h"
#include "l1sp_trc.h"
#include "l1aud_common_def.h"

#ifdef CONNECT_WM8904

#include "dcl.h"
#include "dcl_i2c.h"

// ------------------------- added for 8904 -----------------------------------

I2C_CONFIG_T wm8904_i2c_ctrl_para;
kal_bool is_dvt_initialized = KAL_FALSE;
DCL_HANDLE wm8904_i2c_handle = 0;

kal_uint8 i2c_write_register_table[NUM_I2C_WRITE_TAB][NUM_WRITE_I2C_SINGLE_REG][LEN_WRITE_I2C_SINGLE_REG] =
{
    { // MIC_8k_LongSync_Analog_Bypass
        {0x00, 0x00, 0x00},
        {0x04, 0x00, 0x19},
        {0x05, 0x00, 0x43},
        {0x06, 0x00, 0x00},
        {0x07, 0x00, 0x00},
        {0x0C, 0x00, 0x03},
        {0x0E, 0x00, 0x03},
        {0x12, 0x00, 0x0F},
        {0x14, 0x8C, 0x5E},
        {0x15, 0x24, 0x00},
        {0x18, 0x00, 0x50},
        {0x19, 0x00, 0x93},
        {0x1A, 0x00, 0xF4},
        {0x1B, 0x00, 0x20},
        {0x1E, 0x00, 0xA5},
        {0x1F, 0x00, 0xA5},
        {0x21, 0x00, 0x00},
        {0x24, 0x00, 0xC0},
        {0x25, 0x00, 0xC0},
        {0x26, 0x00, 0x00},
        {0x2C, 0x00, 0x05},
        {0x2D, 0x00, 0x05},
        {0x2E, 0x00, 0x12},
        {0x2F, 0x00, 0x12},
        {0x39, 0x00, 0x39},
        {0x3A, 0x00, 0xB9},
        {0x3D, 0x00, 0x0F},
        {0x43, 0x00, 0x03},
        {0x4B, 0x00, 0x05},
        {0x4C, 0x00, 0xFD},
        {0x79, 0x00, 0x09},
        {0x5A, 0x00, 0xFF},
        {0x62, 0x00, 0x01},
        {0x68, 0x00, 0x05},
        {0x74, 0x00, 0x06},
        {0x75, 0x07, 0x02},
        {0x76, 0x00, 0x00},
        {0x77, 0x0C, 0x00},
        {0x78, 0x00, 0x05},
        {0x74, 0x00, 0x07},
        {0x16, 0x40, 0x0A},
        {0x16, 0x40, 0x0E},
    },
    { // MIC_8k_LongSync_Digital_Loopback
        {0x00, 0x00, 0x00},
        {0x04, 0x00, 0x19},
        {0x05, 0x00, 0x43},
        {0x06, 0x00, 0x01},
        {0x07, 0x00, 0x00},
        {0x0C, 0x00, 0x03},
        {0x0E, 0x00, 0x03},
        {0x12, 0x00, 0x0F},
        {0x14, 0x8C, 0x5E},
        {0x15, 0x24, 0x00},
        {0x18, 0x01, 0x50},
        {0x19, 0x00, 0x93},
        {0x1A, 0x00, 0xF4},
        {0x1B, 0x00, 0x20},
        {0x1E, 0x00, 0xA5},
        {0x1F, 0x00, 0xA5},
        {0x21, 0x00, 0x00},
        {0x24, 0x00, 0xC0},
        {0x25, 0x00, 0xC0},
        {0x26, 0x00, 0x00},
        {0x2C, 0x00, 0x05},
        {0x2D, 0x00, 0x05},
        {0x2E, 0x00, 0x12},
        {0x2F, 0x00, 0x12},
        {0x39, 0x00, 0x39},
        {0x3A, 0x00, 0xB9},
        {0x3D, 0x00, 0x00},
        {0x43, 0x00, 0x03},
        {0x4B, 0x00, 0x05},
        {0x4C, 0x00, 0xFD},
        {0x79, 0x00, 0x09},
        {0x5A, 0x00, 0xFF},
        {0x62, 0x00, 0x01},
        {0x68, 0x00, 0x05},
        {0x74, 0x00, 0x06},
        {0x75, 0x07, 0x02},
        {0x76, 0x00, 0x00},
        {0x77, 0x0C, 0x00},
        {0x78, 0x00, 0x05},
        {0x74, 0x00, 0x07},
        {0x16, 0x40, 0x0A},
        {0x16, 0x40, 0x0E},
    },
    { // MIC_8k_LongSync_Phone_Call
        {0x00, 0x00, 0x00},
        {0x04, 0x00, 0x19},
        {0x05, 0x00, 0x43},
        {0x06, 0x00, 0x01},
        {0x07, 0x00, 0x00},
        {0x0C, 0x00, 0x03},
        {0x0E, 0x00, 0x03},
        {0x12, 0x00, 0x0F},
        {0x14, 0x8C, 0x5E},
        {0x15, 0x24, 0x00},
        {0x18, 0x00, 0x50},
        {0x19, 0x00, 0x93},
        {0x1A, 0x00, 0xF4},
        {0x1B, 0x00, 0x20},
        {0x1E, 0x00, 0xA5},
        {0x1F, 0x00, 0xA5},
        {0x21, 0x00, 0x00},
        {0x24, 0x00, 0xC0},
        {0x25, 0x00, 0xC0},
        {0x26, 0x00, 0x00},
        {0x2C, 0x00, 0x05},
        {0x2D, 0x00, 0x05},
        {0x2E, 0x00, 0x12},
        {0x2F, 0x00, 0x12},
        {0x39, 0x00, 0x39},
        {0x3A, 0x00, 0xB9},
        {0x3D, 0x00, 0x00},
        {0x43, 0x00, 0x03},
        {0x4B, 0x00, 0x05},
        {0x4C, 0x00, 0xFD},
        {0x79, 0x00, 0x09},
        {0x5A, 0x00, 0xFF},
        {0x62, 0x00, 0x01},
        {0x68, 0x00, 0x05},
        {0x74, 0x00, 0x06},
        {0x75, 0x07, 0x02},
        {0x76, 0x00, 0x00},
        {0x77, 0x0C, 0x00},
        {0x78, 0x00, 0x05},
        {0x74, 0x00, 0x07},
        {0x16, 0x40, 0x0A},
        {0x16, 0x40, 0x0E},
    },
    { // LINEIN_8k_LongSync_Analog_Bypass
        {0x00, 0x00, 0x00},
        {0x04, 0x00, 0x19},
        {0x05, 0x00, 0x43},
        {0x06, 0x00, 0x00},
        {0x07, 0x00, 0x00},
        {0x0C, 0x00, 0x03},
        {0x0E, 0x00, 0x03},
        {0x12, 0x00, 0x0F},
        {0x14, 0x8C, 0x5E},
        {0x15, 0x24, 0x00},
        {0x18, 0x00, 0x50},
        {0x19, 0x00, 0x93},
        {0x1A, 0x00, 0xF4},
        {0x1B, 0x00, 0x20},
        {0x1E, 0x00, 0xA5},
        {0x1F, 0x00, 0xA5},
        {0x21, 0x00, 0x00},
        {0x24, 0x00, 0xC0},
        {0x25, 0x00, 0xC0},
        {0x26, 0x00, 0x00},
        {0x2C, 0x00, 0x05},
        {0x2D, 0x00, 0x05},
        {0x2E, 0x00, 0x00},
        {0x2F, 0x00, 0x00},
        {0x39, 0x00, 0x39},
        {0x3A, 0x00, 0xB9},
        {0x3D, 0x00, 0x0F},
        {0x43, 0x00, 0x03},
        {0x4B, 0x00, 0x05},
        {0x4C, 0x00, 0xFD},
        {0x79, 0x00, 0x09},
        {0x5A, 0x00, 0xFF},
        {0x62, 0x00, 0x01},
        {0x68, 0x00, 0x05},
        {0x74, 0x00, 0x06},
        {0x75, 0x07, 0x02},
        {0x76, 0x00, 0x00},
        {0x77, 0x0C, 0x00},
        {0x78, 0x00, 0x05},
        {0x74, 0x00, 0x07},
        {0x16, 0x40, 0x0A},
        {0x16, 0x40, 0x0E},
    },
    { // LINEIN_8k_LongSync_Digital_Loopback
        {0x00, 0x00, 0x00},
        {0x04, 0x00, 0x19},
        {0x05, 0x00, 0x43},
        {0x06, 0x00, 0x00},
        {0x07, 0x00, 0x00},
        {0x0C, 0x00, 0x03},
        {0x0E, 0x00, 0x03},
        {0x12, 0x00, 0x0F},
        {0x14, 0x8C, 0x5E},
        {0x15, 0x24, 0x00},
        {0x18, 0x01, 0x50},
        {0x19, 0x00, 0x93},
        {0x1A, 0x00, 0xF4},
        {0x1B, 0x00, 0x20},
        {0x1E, 0x00, 0xA5},
        {0x1F, 0x00, 0xA5},
        {0x21, 0x00, 0x00},
        {0x24, 0x00, 0xC0},
        {0x25, 0x00, 0xC0},
        {0x26, 0x00, 0x00},
        {0x2C, 0x00, 0x05},
        {0x2D, 0x00, 0x05},
        {0x2E, 0x00, 0x00},
        {0x2F, 0x00, 0x00},
        {0x39, 0x00, 0x39},
        {0x3A, 0x00, 0xB9},
        {0x3D, 0x00, 0x00},
        {0x43, 0x00, 0x03},
        {0x4B, 0x00, 0x05},
        {0x4C, 0x00, 0xFD},
        {0x79, 0x00, 0x09},
        {0x5A, 0x00, 0xFF},
        {0x62, 0x00, 0x01},
        {0x68, 0x00, 0x05},
        {0x74, 0x00, 0x06},
        {0x75, 0x07, 0x02},
        {0x76, 0x00, 0x00},
        {0x77, 0x0C, 0x00},
        {0x78, 0x00, 0x05},
        {0x74, 0x00, 0x07},
        {0x16, 0x40, 0x0A},
        {0x16, 0x40, 0x0E},
    },
    { // LINEIN_8k_LongSync_Phone_Call
        {0x00, 0x00, 0x00},
        {0x04, 0x00, 0x19},
        {0x05, 0x00, 0x43},
        {0x06, 0x00, 0x00},
        {0x07, 0x00, 0x00},
        {0x0C, 0x00, 0x03},
        {0x0E, 0x00, 0x03},
        {0x12, 0x00, 0x0F},
        {0x14, 0x8C, 0x5E},
        {0x15, 0x24, 0x00},
        {0x18, 0x00, 0x50},
        {0x19, 0x00, 0x93},
        {0x1A, 0x00, 0xF4},
        {0x1B, 0x00, 0x20},
        {0x1E, 0x00, 0xA5},
        {0x1F, 0x00, 0xA5},
        {0x21, 0x00, 0x00},
        {0x24, 0x00, 0xC0},
        {0x25, 0x00, 0xC0},
        {0x26, 0x00, 0x00},
        {0x2C, 0x00, 0x05},
        {0x2D, 0x00, 0x05},
        {0x2E, 0x00, 0x00},
        {0x2F, 0x00, 0x00},
        {0x39, 0x00, 0x39},
        {0x3A, 0x00, 0xB9},
        {0x3D, 0x00, 0x00},
        {0x43, 0x00, 0x03},
        {0x4B, 0x00, 0x05},
        {0x4C, 0x00, 0xFD},
        {0x79, 0x00, 0x09},
        {0x5A, 0x00, 0xFF},
        {0x62, 0x00, 0x01},
        {0x68, 0x00, 0x05},
        {0x74, 0x00, 0x06},
        {0x75, 0x07, 0x02},
        {0x76, 0x00, 0x00},
        {0x77, 0x0C, 0x00},
        {0x78, 0x00, 0x05},
        {0x74, 0x00, 0x07},
        {0x16, 0x40, 0x0A},
        {0x16, 0x40, 0x0E},
    },
    { // MIC_8k_ShortSync_Analog_Bypass
        {0x00, 0x00, 0x00},
        {0x04, 0x00, 0x19},
        {0x05, 0x00, 0x43},
        {0x06, 0x00, 0x00},
        {0x07, 0x00, 0x00},
        {0x0C, 0x00, 0x03},
        {0x0E, 0x00, 0x03},
        {0x12, 0x00, 0x0F},
        {0x14, 0x8C, 0x5E},
        {0x15, 0x24, 0x00},
        {0x18, 0x00, 0x50},
        {0x19, 0x00, 0x83},
        {0x1A, 0x00, 0xF4},
        {0x1B, 0x00, 0x20},
        {0x1E, 0x00, 0xA5},
        {0x1F, 0x00, 0xA5},
        {0x21, 0x00, 0x00},
        {0x24, 0x00, 0xC0},
        {0x25, 0x00, 0xC0},
        {0x26, 0x00, 0x00},
        {0x2C, 0x00, 0x05},
        {0x2D, 0x00, 0x05},
        {0x2E, 0x00, 0x12},
        {0x2F, 0x00, 0x12},
        {0x39, 0x00, 0x39},
        {0x3A, 0x00, 0xB9},
        {0x3D, 0x00, 0x0F},
        {0x43, 0x00, 0x03},
        {0x4B, 0x00, 0x05},
        {0x4C, 0x00, 0xFD},
        {0x79, 0x00, 0x09},
        {0x5A, 0x00, 0xFF},
        {0x62, 0x00, 0x01},
        {0x68, 0x00, 0x05},
        {0x74, 0x00, 0x06},
        {0x75, 0x07, 0x02},
        {0x76, 0x00, 0x00},
        {0x77, 0x0C, 0x00},
        {0x78, 0x00, 0x05},
        {0x74, 0x00, 0x07},
        {0x16, 0x40, 0x0A},
        {0x16, 0x40, 0x0E},
    },
    { // MIC_8k_ShortSync_Digital_Loopback
        {0x00, 0x00, 0x00},
        {0x04, 0x00, 0x19},
        {0x05, 0x00, 0x43},
        {0x06, 0x00, 0x01},
        {0x07, 0x00, 0x00},
        {0x0C, 0x00, 0x03},
        {0x0E, 0x00, 0x03},
        {0x12, 0x00, 0x0F},
        {0x14, 0x8C, 0x5E},
        {0x15, 0x24, 0x00},
        {0x18, 0x01, 0x50},
        {0x19, 0x00, 0x83},
        {0x1A, 0x00, 0xF4},
        {0x1B, 0x00, 0x20},
        {0x1E, 0x00, 0xA5},
        {0x1F, 0x00, 0xA5},
        {0x21, 0x00, 0x00},
        {0x24, 0x00, 0xC0},
        {0x25, 0x00, 0xC0},
        {0x26, 0x00, 0x00},
        {0x2C, 0x00, 0x05},
        {0x2D, 0x00, 0x05},
        {0x2E, 0x00, 0x12},
        {0x2F, 0x00, 0x12},
        {0x39, 0x00, 0x39},
        {0x3A, 0x00, 0xB9},
        {0x3D, 0x00, 0x00},
        {0x43, 0x00, 0x03},
        {0x4B, 0x00, 0x05},
        {0x4C, 0x00, 0xFD},
        {0x79, 0x00, 0x09},
        {0x5A, 0x00, 0xFF},
        {0x62, 0x00, 0x01},
        {0x68, 0x00, 0x05},
        {0x74, 0x00, 0x06},
        {0x75, 0x07, 0x02},
        {0x76, 0x00, 0x00},
        {0x77, 0x0C, 0x00},
        {0x78, 0x00, 0x05},
        {0x74, 0x00, 0x07},
        {0x16, 0x40, 0x0A},
        {0x16, 0x40, 0x0E},
    },
    { // MIC_8k_ShortSync_Phone_Call
        {0x00, 0x00, 0x00},
        {0x04, 0x00, 0x19},
        {0x05, 0x00, 0x43},
        {0x06, 0x00, 0x01},
        {0x07, 0x00, 0x00},
        {0x0C, 0x00, 0x03},
        {0x0E, 0x00, 0x03},
        {0x12, 0x00, 0x0F},
        {0x14, 0x8C, 0x5E},
        {0x15, 0x24, 0x00},
        {0x18, 0x00, 0x50},
        {0x19, 0x00, 0x83},
        {0x1A, 0x00, 0xF4},
        {0x1B, 0x00, 0x20},
        {0x1E, 0x00, 0xA5},
        {0x1F, 0x00, 0xA5},
        {0x21, 0x00, 0x00},
        {0x24, 0x00, 0xC0},
        {0x25, 0x00, 0xC0},
        {0x26, 0x00, 0x00},
        {0x2C, 0x00, 0x05},
        {0x2D, 0x00, 0x05},
        {0x2E, 0x00, 0x12},
        {0x2F, 0x00, 0x12},
        {0x39, 0x00, 0x39},
        {0x3A, 0x00, 0xB9},
        {0x3D, 0x00, 0x00},
        {0x43, 0x00, 0x03},
        {0x4B, 0x00, 0x05},
        {0x4C, 0x00, 0xFD},
        {0x79, 0x00, 0x09},
        {0x5A, 0x00, 0xFF},
        {0x62, 0x00, 0x01},
        {0x68, 0x00, 0x05},
        {0x74, 0x00, 0x06},
        {0x75, 0x07, 0x02},
        {0x76, 0x00, 0x00},
        {0x77, 0x0C, 0x00},
        {0x78, 0x00, 0x05},
        {0x74, 0x00, 0x07},
        {0x16, 0x40, 0x0A},
        {0x16, 0x40, 0x0E},
    },
    { // LINEIN_8k_ShortSync_Analog_Bypass
        {0x00, 0x00, 0x00},
        {0x04, 0x00, 0x19},
        {0x05, 0x00, 0x43},
        {0x06, 0x00, 0x00},
        {0x07, 0x00, 0x00},
        {0x0C, 0x00, 0x03},
        {0x0E, 0x00, 0x03},
        {0x12, 0x00, 0x0F},
        {0x14, 0x8C, 0x5E},
        {0x15, 0x24, 0x00},
        {0x18, 0x00, 0x50},
        {0x19, 0x00, 0x83},
        {0x1A, 0x00, 0xF4},
        {0x1B, 0x00, 0x20},
        {0x1E, 0x00, 0xA5},
        {0x1F, 0x00, 0xA5},
        {0x21, 0x00, 0x00},
        {0x24, 0x00, 0xC0},
        {0x25, 0x00, 0xC0},
        {0x26, 0x00, 0x00},
        {0x2C, 0x00, 0x05},
        {0x2D, 0x00, 0x05},
        {0x2E, 0x00, 0x00},
        {0x2F, 0x00, 0x00},
        {0x39, 0x00, 0x39},
        {0x3A, 0x00, 0xB9},
        {0x3D, 0x00, 0x0F},
        {0x43, 0x00, 0x03},
        {0x4B, 0x00, 0x05},
        {0x4C, 0x00, 0xFD},
        {0x79, 0x00, 0x09},
        {0x5A, 0x00, 0xFF},
        {0x62, 0x00, 0x01},
        {0x68, 0x00, 0x05},
        {0x74, 0x00, 0x06},
        {0x75, 0x07, 0x02},
        {0x76, 0x00, 0x00},
        {0x77, 0x0C, 0x00},
        {0x78, 0x00, 0x05},
        {0x74, 0x00, 0x07},
        {0x16, 0x40, 0x0A},
        {0x16, 0x40, 0x0E},
    },
    { // LINEIN_8k_ShortSync_Digital_Loopback
        {0x00, 0x00, 0x00},
        {0x04, 0x00, 0x19},
        {0x05, 0x00, 0x43},
        {0x06, 0x00, 0x00},
        {0x07, 0x00, 0x00},
        {0x0C, 0x00, 0x03},
        {0x0E, 0x00, 0x03},
        {0x12, 0x00, 0x0F},
        {0x14, 0x8C, 0x5E},
        {0x15, 0x24, 0x00},
        {0x18, 0x01, 0x50},
        {0x19, 0x00, 0x83},
        {0x1A, 0x00, 0xF4},
        {0x1B, 0x00, 0x20},
        {0x1E, 0x00, 0xA5},
        {0x1F, 0x00, 0xA5},
        {0x21, 0x00, 0x00},
        {0x24, 0x00, 0xC0},
        {0x25, 0x00, 0xC0},
        {0x26, 0x00, 0x00},
        {0x2C, 0x00, 0x05},
        {0x2D, 0x00, 0x05},
        {0x2E, 0x00, 0x00},
        {0x2F, 0x00, 0x00},
        {0x39, 0x00, 0x39},
        {0x3A, 0x00, 0xB9},
        {0x3D, 0x00, 0x00},
        {0x43, 0x00, 0x03},
        {0x4B, 0x00, 0x05},
        {0x4C, 0x00, 0xFD},
        {0x79, 0x00, 0x09},
        {0x5A, 0x00, 0xFF},
        {0x62, 0x00, 0x01},
        {0x68, 0x00, 0x05},
        {0x74, 0x00, 0x06},
        {0x75, 0x07, 0x02},
        {0x76, 0x00, 0x00},
        {0x77, 0x0C, 0x00},
        {0x78, 0x00, 0x05},
        {0x74, 0x00, 0x07},
        {0x16, 0x40, 0x0A},
        {0x16, 0x40, 0x0E},
    },
    { // LINEIN_8k_ShortSync_Phone_Call
        {0x00, 0x00, 0x00},
        {0x04, 0x00, 0x19},
        {0x05, 0x00, 0x43},
        {0x06, 0x00, 0x00},
        {0x07, 0x00, 0x00},
        {0x0C, 0x00, 0x03},
        {0x0E, 0x00, 0x03},
        {0x12, 0x00, 0x0F},
        {0x14, 0x8C, 0x5E},
        {0x15, 0x24, 0x00},
        {0x18, 0x00, 0x50},
        {0x19, 0x00, 0x83},
        {0x1A, 0x00, 0xF4},
        {0x1B, 0x00, 0x20},
        {0x1E, 0x00, 0xA5},
        {0x1F, 0x00, 0xA5},
        {0x21, 0x00, 0x00},
        {0x24, 0x00, 0xC0},
        {0x25, 0x00, 0xC0},
        {0x26, 0x00, 0x00},
        {0x2C, 0x00, 0x05},
        {0x2D, 0x00, 0x05},
        {0x2E, 0x00, 0x00},
        {0x2F, 0x00, 0x00},
        {0x39, 0x00, 0x39},
        {0x3A, 0x00, 0xB9},
        {0x3D, 0x00, 0x00},
        {0x43, 0x00, 0x03},
        {0x4B, 0x00, 0x05},
        {0x4C, 0x00, 0xFD},
        {0x79, 0x00, 0x09},
        {0x5A, 0x00, 0xFF},
        {0x62, 0x00, 0x01},
        {0x68, 0x00, 0x05},
        {0x74, 0x00, 0x06},
        {0x75, 0x07, 0x02},
        {0x76, 0x00, 0x00},
        {0x77, 0x0C, 0x00},
        {0x78, 0x00, 0x05},
        {0x74, 0x00, 0x07},
        {0x16, 0x40, 0x0A},
        {0x16, 0x40, 0x0E},
    },
    { // MIC_16k_LongSync_Analog_Bypass
        {0x00, 0x00, 0x00},
        {0x04, 0x00, 0x19},
        {0x05, 0x00, 0x43},
        {0x06, 0x00, 0x00},
        {0x07, 0x00, 0x00},
        {0x0C, 0x00, 0x03},
        {0x0E, 0x00, 0x03},
        {0x12, 0x00, 0x0F},
        {0x14, 0x8C, 0x5E},
        {0x15, 0x18, 0x02},
        {0x18, 0x00, 0x50},
        {0x19, 0x00, 0x93},
        {0x1A, 0x00, 0xF4},
        {0x1B, 0x00, 0x20},
        {0x1E, 0x00, 0xA5},
        {0x1F, 0x00, 0xA5},
        {0x21, 0x00, 0x00},
        {0x24, 0x00, 0xC0},
        {0x25, 0x00, 0xC0},
        {0x26, 0x00, 0x00},
        {0x2C, 0x00, 0x05},
        {0x2D, 0x00, 0x05},
        {0x2E, 0x00, 0x12},
        {0x2F, 0x00, 0x12},
        {0x39, 0x00, 0x39},
        {0x3A, 0x00, 0xB9},
        {0x3D, 0x00, 0x0F},
        {0x43, 0x00, 0x03},
        {0x4B, 0x00, 0x05},
        {0x4C, 0x00, 0xFD},
        {0x79, 0x00, 0x09},
        {0x5A, 0x00, 0xFF},
        {0x62, 0x00, 0x01},
        {0x68, 0x00, 0x05},
        {0x74, 0x00, 0x06},
        {0x75, 0x07, 0x01},
        {0x76, 0x00, 0x00},
        {0x77, 0x0C, 0x00},
        {0x78, 0x00, 0x05},
        {0x74, 0x00, 0x07},
        {0x16, 0x40, 0x0A},
        {0x16, 0x40, 0x0E},
    },
    { // MIC_16k_LongSync_Digital_Loopback
        {0x00, 0x00, 0x00},
        {0x04, 0x00, 0x19},
        {0x05, 0x00, 0x43},
        {0x06, 0x00, 0x01},
        {0x07, 0x00, 0x00},
        {0x0C, 0x00, 0x03},
        {0x0E, 0x00, 0x03},
        {0x12, 0x00, 0x0F},
        {0x14, 0x8C, 0x5E},
        {0x15, 0x18, 0x02},
        {0x18, 0x01, 0x50},
        {0x19, 0x00, 0x93},
        {0x1A, 0x00, 0xF4},
        {0x1B, 0x00, 0x20},
        {0x1E, 0x00, 0xA5},
        {0x1F, 0x00, 0xA5},
        {0x21, 0x00, 0x00},
        {0x24, 0x00, 0xC0},
        {0x25, 0x00, 0xC0},
        {0x26, 0x00, 0x00},
        {0x2C, 0x00, 0x05},
        {0x2D, 0x00, 0x05},
        {0x2E, 0x00, 0x12},
        {0x2F, 0x00, 0x12},
        {0x39, 0x00, 0x39},
        {0x3A, 0x00, 0xB9},
        {0x3D, 0x00, 0x00},
        {0x43, 0x00, 0x03},
        {0x4B, 0x00, 0x05},
        {0x4C, 0x00, 0xFD},
        {0x79, 0x00, 0x09},
        {0x5A, 0x00, 0xFF},
        {0x62, 0x00, 0x01},
        {0x68, 0x00, 0x05},
        {0x74, 0x00, 0x06},
        {0x75, 0x07, 0x01},
        {0x76, 0x00, 0x00},
        {0x77, 0x0C, 0x00},
        {0x78, 0x00, 0x05},
        {0x74, 0x00, 0x07},
        {0x16, 0x40, 0x0A},
        {0x16, 0x40, 0x0E},
    },
    { // MIC_16k_LongSync_Phone_Call
        {0x00, 0x00, 0x00},
        {0x04, 0x00, 0x19},
        {0x05, 0x00, 0x43},
        {0x06, 0x00, 0x01},
        {0x07, 0x00, 0x00},
        {0x0C, 0x00, 0x03},
        {0x0E, 0x00, 0x03},
        {0x12, 0x00, 0x0F},
        {0x14, 0x8C, 0x5E},
        {0x15, 0x18, 0x02},
        {0x18, 0x00, 0x50},
        {0x19, 0x00, 0x93},
        {0x1A, 0x00, 0xF4},
        {0x1B, 0x00, 0x20},
        {0x1E, 0x00, 0xA5},
        {0x1F, 0x00, 0xA5},
        {0x21, 0x00, 0x00},
        {0x24, 0x00, 0xC0},
        {0x25, 0x00, 0xC0},
        {0x26, 0x00, 0x00},
        {0x2C, 0x00, 0x05},
        {0x2D, 0x00, 0x05},
        {0x2E, 0x00, 0x12},
        {0x2F, 0x00, 0x12},
        {0x39, 0x00, 0x39},
        {0x3A, 0x00, 0xB9},
        {0x3D, 0x00, 0x00},
        {0x43, 0x00, 0x03},
        {0x4B, 0x00, 0x05},
        {0x4C, 0x00, 0xFD},
        {0x79, 0x00, 0x09},
        {0x5A, 0x00, 0xFF},
        {0x62, 0x00, 0x01},
        {0x68, 0x00, 0x05},
        {0x74, 0x00, 0x06},
        {0x75, 0x07, 0x01},
        {0x76, 0x00, 0x00},
        {0x77, 0x0C, 0x00},
        {0x78, 0x00, 0x05},
        {0x74, 0x00, 0x07},
        {0x16, 0x40, 0x0A},
        {0x16, 0x40, 0x0E},
    },
    { // LINEIN_16k_LongSync_Analog_Bypass
        {0x00, 0x00, 0x00},
        {0x04, 0x00, 0x19},
        {0x05, 0x00, 0x43},
        {0x06, 0x00, 0x00},
        {0x07, 0x00, 0x00},
        {0x0C, 0x00, 0x03},
        {0x0E, 0x00, 0x03},
        {0x12, 0x00, 0x0F},
        {0x14, 0x8C, 0x5E},
        {0x15, 0x18, 0x02},
        {0x18, 0x00, 0x50},
        {0x19, 0x00, 0x93},
        {0x1A, 0x00, 0xF4},
        {0x1B, 0x00, 0x20},
        {0x1E, 0x00, 0xA5},
        {0x1F, 0x00, 0xA5},
        {0x21, 0x00, 0x00},
        {0x24, 0x00, 0xC0},
        {0x25, 0x00, 0xC0},
        {0x26, 0x00, 0x00},
        {0x2C, 0x00, 0x05},
        {0x2D, 0x00, 0x05},
        {0x2E, 0x00, 0x00},
        {0x2F, 0x00, 0x00},
        {0x39, 0x00, 0x39},
        {0x3A, 0x00, 0xB9},
        {0x3D, 0x00, 0x0F},
        {0x43, 0x00, 0x03},
        {0x4B, 0x00, 0x05},
        {0x4C, 0x00, 0xFD},
        {0x79, 0x00, 0x09},
        {0x5A, 0x00, 0xFF},
        {0x62, 0x00, 0x01},
        {0x68, 0x00, 0x05},
        {0x74, 0x00, 0x06},
        {0x75, 0x07, 0x01},
        {0x76, 0x00, 0x00},
        {0x77, 0x0C, 0x00},
        {0x78, 0x00, 0x05},
        {0x74, 0x00, 0x07},
        {0x16, 0x40, 0x0A},
        {0x16, 0x40, 0x0E},
    },
    { // LINEIN_16k_LongSync_Digital_Loopback
        {0x00, 0x00, 0x00},
        {0x04, 0x00, 0x19},
        {0x05, 0x00, 0x43},
        {0x06, 0x00, 0x00},
        {0x07, 0x00, 0x00},
        {0x0C, 0x00, 0x03},
        {0x0E, 0x00, 0x03},
        {0x12, 0x00, 0x0F},
        {0x14, 0x8C, 0x5E},
        {0x15, 0x18, 0x02},
        {0x18, 0x01, 0x50},
        {0x19, 0x00, 0x93},
        {0x1A, 0x00, 0xF4},
        {0x1B, 0x00, 0x20},
        {0x1E, 0x00, 0xA5},
        {0x1F, 0x00, 0xA5},
        {0x21, 0x00, 0x00},
        {0x24, 0x00, 0xC0},
        {0x25, 0x00, 0xC0},
        {0x26, 0x00, 0x00},
        {0x2C, 0x00, 0x05},
        {0x2D, 0x00, 0x05},
        {0x2E, 0x00, 0x00},
        {0x2F, 0x00, 0x00},
        {0x39, 0x00, 0x39},
        {0x3A, 0x00, 0xB9},
        {0x3D, 0x00, 0x00},
        {0x43, 0x00, 0x03},
        {0x4B, 0x00, 0x05},
        {0x4C, 0x00, 0xFD},
        {0x79, 0x00, 0x09},
        {0x5A, 0x00, 0xFF},
        {0x62, 0x00, 0x01},
        {0x68, 0x00, 0x05},
        {0x74, 0x00, 0x06},
        {0x75, 0x07, 0x01},
        {0x76, 0x00, 0x00},
        {0x77, 0x0C, 0x00},
        {0x78, 0x00, 0x05},
        {0x74, 0x00, 0x07},
        {0x16, 0x40, 0x0A},
        {0x16, 0x40, 0x0E},
    },
    { // LINEIN_16k_LongSync_Phone_Call
        {0x00, 0x00, 0x00},
        {0x04, 0x00, 0x19},
        {0x05, 0x00, 0x43},
        {0x06, 0x00, 0x00},
        {0x07, 0x00, 0x00},
        {0x0C, 0x00, 0x03},
        {0x0E, 0x00, 0x03},
        {0x12, 0x00, 0x0F},
        {0x14, 0x8C, 0x5E},
        {0x15, 0x18, 0x02},
        {0x18, 0x00, 0x50},
        {0x19, 0x00, 0x93},
        {0x1A, 0x00, 0xF4},
        {0x1B, 0x00, 0x20},
        {0x1E, 0x00, 0xA5},
        {0x1F, 0x00, 0xA5},
        {0x21, 0x00, 0x00},
        {0x24, 0x00, 0xC0},
        {0x25, 0x00, 0xC0},
        {0x26, 0x00, 0x00},
        {0x2C, 0x00, 0x05},
        {0x2D, 0x00, 0x05},
        {0x2E, 0x00, 0x00},
        {0x2F, 0x00, 0x00},
        {0x39, 0x00, 0x39},
        {0x3A, 0x00, 0xB9},
        {0x3D, 0x00, 0x00},
        {0x43, 0x00, 0x03},
        {0x4B, 0x00, 0x05},
        {0x4C, 0x00, 0xFD},
        {0x79, 0x00, 0x09},
        {0x5A, 0x00, 0xFF},
        {0x62, 0x00, 0x01},
        {0x68, 0x00, 0x05},
        {0x74, 0x00, 0x06},
        {0x75, 0x07, 0x01},
        {0x76, 0x00, 0x00},
        {0x77, 0x0C, 0x00},
        {0x78, 0x00, 0x05},
        {0x74, 0x00, 0x07},
        {0x16, 0x40, 0x0A},
        {0x16, 0x40, 0x0E},
    },
    { // MIC_16k_ShortSync_Analog_Bypass
        {0x00, 0x00, 0x00},
        {0x04, 0x00, 0x19},
        {0x05, 0x00, 0x43},
        {0x06, 0x00, 0x00},
        {0x07, 0x00, 0x00},
        {0x0C, 0x00, 0x03},
        {0x0E, 0x00, 0x03},
        {0x12, 0x00, 0x0F},
        {0x14, 0x8C, 0x5E},
        {0x15, 0x18, 0x02},
        {0x18, 0x00, 0x50},
        {0x19, 0x00, 0x83},
        {0x1A, 0x00, 0xF4},
        {0x1B, 0x00, 0x20},
        {0x1E, 0x00, 0xA5},
        {0x1F, 0x00, 0xA5},
        {0x21, 0x00, 0x00},
        {0x24, 0x00, 0xC0},
        {0x25, 0x00, 0xC0},
        {0x26, 0x00, 0x00},
        {0x2C, 0x00, 0x05},
        {0x2D, 0x00, 0x05},
        {0x2E, 0x00, 0x12},
        {0x2F, 0x00, 0x12},
        {0x39, 0x00, 0x39},
        {0x3A, 0x00, 0xB9},
        {0x3D, 0x00, 0x0F},
        {0x43, 0x00, 0x03},
        {0x4B, 0x00, 0x05},
        {0x4C, 0x00, 0xFD},
        {0x79, 0x00, 0x09},
        {0x5A, 0x00, 0xFF},
        {0x62, 0x00, 0x01},
        {0x68, 0x00, 0x05},
        {0x74, 0x00, 0x06},
        {0x75, 0x07, 0x01},
        {0x76, 0x00, 0x00},
        {0x77, 0x0C, 0x00},
        {0x78, 0x00, 0x05},
        {0x74, 0x00, 0x07},
        {0x16, 0x40, 0x0A},
        {0x16, 0x40, 0x0E},
    },
    { // MIC_16k_ShortSync_Digital_Loopback
        {0x00, 0x00, 0x00},
        {0x04, 0x00, 0x19},
        {0x05, 0x00, 0x43},
        {0x06, 0x00, 0x01},
        {0x07, 0x00, 0x00},
        {0x0C, 0x00, 0x03},
        {0x0E, 0x00, 0x03},
        {0x12, 0x00, 0x0F},
        {0x14, 0x8C, 0x5E},
        {0x15, 0x18, 0x02},
        {0x18, 0x01, 0x50},
        {0x19, 0x00, 0x83},
        {0x1A, 0x00, 0xF4},
        {0x1B, 0x00, 0x20},
        {0x1E, 0x00, 0xA5},
        {0x1F, 0x00, 0xA5},
        {0x21, 0x00, 0x00},
        {0x24, 0x00, 0xC0},
        {0x25, 0x00, 0xC0},
        {0x26, 0x00, 0x00},
        {0x2C, 0x00, 0x05},
        {0x2D, 0x00, 0x05},
        {0x2E, 0x00, 0x12},
        {0x2F, 0x00, 0x12},
        {0x39, 0x00, 0x39},
        {0x3A, 0x00, 0xB9},
        {0x3D, 0x00, 0x00},
        {0x43, 0x00, 0x03},
        {0x4B, 0x00, 0x05},
        {0x4C, 0x00, 0xFD},
        {0x79, 0x00, 0x09},
        {0x5A, 0x00, 0xFF},
        {0x62, 0x00, 0x01},
        {0x68, 0x00, 0x05},
        {0x74, 0x00, 0x06},
        {0x75, 0x07, 0x01},
        {0x76, 0x00, 0x00},
        {0x77, 0x0C, 0x00},
        {0x78, 0x00, 0x05},
        {0x74, 0x00, 0x07},
        {0x16, 0x40, 0x0A},
        {0x16, 0x40, 0x0E},
    },
    { // MIC_16k_ShortSync_Phone_Call
        {0x00, 0x00, 0x00},
        {0x04, 0x00, 0x19},
        {0x05, 0x00, 0x43},
        {0x06, 0x00, 0x01},
        {0x07, 0x00, 0x00},
        {0x0C, 0x00, 0x03},
        {0x0E, 0x00, 0x03},
        {0x12, 0x00, 0x0F},
        {0x14, 0x8C, 0x5E},
        {0x15, 0x18, 0x02},
        {0x18, 0x00, 0x50},
        {0x19, 0x00, 0x83},
        {0x1A, 0x00, 0xF4},
        {0x1B, 0x00, 0x20},
        {0x1E, 0x00, 0xA5},
        {0x1F, 0x00, 0xA5},
        {0x21, 0x00, 0x00},
        {0x24, 0x00, 0xC0},
        {0x25, 0x00, 0xC0},
        {0x26, 0x00, 0x00},
        {0x2C, 0x00, 0x05},
        {0x2D, 0x00, 0x05},
        {0x2E, 0x00, 0x12},
        {0x2F, 0x00, 0x12},
        {0x39, 0x00, 0x39},
        {0x3A, 0x00, 0xB9},
        {0x3D, 0x00, 0x00},
        {0x43, 0x00, 0x03},
        {0x4B, 0x00, 0x05},
        {0x4C, 0x00, 0xFD},
        {0x79, 0x00, 0x09},
        {0x5A, 0x00, 0xFF},
        {0x62, 0x00, 0x01},
        {0x68, 0x00, 0x05},
        {0x74, 0x00, 0x06},
        {0x75, 0x07, 0x01},
        {0x76, 0x00, 0x00},
        {0x77, 0x0C, 0x00},
        {0x78, 0x00, 0x05},
        {0x74, 0x00, 0x07},
        {0x16, 0x40, 0x0A},
        {0x16, 0x40, 0x0E},
    },
    { // LINEIN_16k_ShortSync_Analog_Bypass
        {0x00, 0x00, 0x00},
        {0x04, 0x00, 0x19},
        {0x05, 0x00, 0x43},
        {0x06, 0x00, 0x00},
        {0x07, 0x00, 0x00},
        {0x0C, 0x00, 0x03},
        {0x0E, 0x00, 0x03},
        {0x12, 0x00, 0x0F},
        {0x14, 0x8C, 0x5E},
        {0x15, 0x18, 0x02},
        {0x18, 0x00, 0x50},
        {0x19, 0x00, 0x83},
        {0x1A, 0x00, 0xF4},
        {0x1B, 0x00, 0x20},
        {0x1E, 0x00, 0xA5},
        {0x1F, 0x00, 0xA5},
        {0x21, 0x00, 0x00},
        {0x24, 0x00, 0xC0},
        {0x25, 0x00, 0xC0},
        {0x26, 0x00, 0x00},
        {0x2C, 0x00, 0x05},
        {0x2D, 0x00, 0x05},
        {0x2E, 0x00, 0x00},
        {0x2F, 0x00, 0x00},
        {0x39, 0x00, 0x39},
        {0x3A, 0x00, 0xB9},
        {0x3D, 0x00, 0x0F},
        {0x43, 0x00, 0x03},
        {0x4B, 0x00, 0x05},
        {0x4C, 0x00, 0xFD},
        {0x79, 0x00, 0x09},
        {0x5A, 0x00, 0xFF},
        {0x62, 0x00, 0x01},
        {0x68, 0x00, 0x05},
        {0x74, 0x00, 0x06},
        {0x75, 0x07, 0x01},
        {0x76, 0x00, 0x00},
        {0x77, 0x0C, 0x00},
        {0x78, 0x00, 0x05},
        {0x74, 0x00, 0x07},
        {0x16, 0x40, 0x0A},
        {0x16, 0x40, 0x0E},
    },
    { // LINEIN_16k_ShortSync_Digital_Loopback
        {0x00, 0x00, 0x00},
        {0x04, 0x00, 0x19},
        {0x05, 0x00, 0x43},
        {0x06, 0x00, 0x00},
        {0x07, 0x00, 0x00},
        {0x0C, 0x00, 0x03},
        {0x0E, 0x00, 0x03},
        {0x12, 0x00, 0x0F},
        {0x14, 0x8C, 0x5E},
        {0x15, 0x18, 0x02},
        {0x18, 0x01, 0x50},
        {0x19, 0x00, 0x83},
        {0x1A, 0x00, 0xF4},
        {0x1B, 0x00, 0x20},
        {0x1E, 0x00, 0xA5},
        {0x1F, 0x00, 0xA5},
        {0x21, 0x00, 0x00},
        {0x24, 0x00, 0xC0},
        {0x25, 0x00, 0xC0},
        {0x26, 0x00, 0x00},
        {0x2C, 0x00, 0x05},
        {0x2D, 0x00, 0x05},
        {0x2E, 0x00, 0x00},
        {0x2F, 0x00, 0x00},
        {0x39, 0x00, 0x39},
        {0x3A, 0x00, 0xB9},
        {0x3D, 0x00, 0x00},
        {0x43, 0x00, 0x03},
        {0x4B, 0x00, 0x05},
        {0x4C, 0x00, 0xFD},
        {0x79, 0x00, 0x09},
        {0x5A, 0x00, 0xFF},
        {0x62, 0x00, 0x01},
        {0x68, 0x00, 0x05},
        {0x74, 0x00, 0x06},
        {0x75, 0x07, 0x01},
        {0x76, 0x00, 0x00},
        {0x77, 0x0C, 0x00},
        {0x78, 0x00, 0x05},
        {0x74, 0x00, 0x07},
        {0x16, 0x40, 0x0A},
        {0x16, 0x40, 0x0E},
    },
    { // LINEIN_16k_ShortSync_Phone_Call
        {0x00, 0x00, 0x00},
        {0x04, 0x00, 0x19},
        {0x05, 0x00, 0x43},
        {0x06, 0x00, 0x00},
        {0x07, 0x00, 0x00},
        {0x0C, 0x00, 0x03},
        {0x0E, 0x00, 0x03},
        {0x12, 0x00, 0x0F},
        {0x14, 0x8C, 0x5E},
        {0x15, 0x18, 0x02},
        {0x18, 0x00, 0x50},
        {0x19, 0x00, 0x83},
        {0x1A, 0x00, 0xF4},
        {0x1B, 0x00, 0x20},
        {0x1E, 0x00, 0xA5},
        {0x1F, 0x00, 0xA5},
        {0x21, 0x00, 0x00},
        {0x24, 0x00, 0xC0},
        {0x25, 0x00, 0xC0},
        {0x26, 0x00, 0x00},
        {0x2C, 0x00, 0x05},
        {0x2D, 0x00, 0x05},
        {0x2E, 0x00, 0x00},
        {0x2F, 0x00, 0x00},
        {0x39, 0x00, 0x39},
        {0x3A, 0x00, 0xB9},
        {0x3D, 0x00, 0x00},
        {0x43, 0x00, 0x03},
        {0x4B, 0x00, 0x05},
        {0x4C, 0x00, 0xFD},
        {0x79, 0x00, 0x09},
        {0x5A, 0x00, 0xFF},
        {0x62, 0x00, 0x01},
        {0x68, 0x00, 0x05},
        {0x74, 0x00, 0x06},
        {0x75, 0x07, 0x01},
        {0x76, 0x00, 0x00},
        {0x77, 0x0C, 0x00},
        {0x78, 0x00, 0x05},
        {0x74, 0x00, 0x07},
        {0x16, 0x40, 0x0A},
        {0x16, 0x40, 0x0E},
    },
};



void Config_WM8904(kal_int32 tab)
{
	if(tab==-1)
		return;

	 kal_prompt_trace (MOD_L1SP,"[Scholar]Config_WM8904 with table : %d", tab);
    kal_prompt_trace (MOD_L1SP,"[Scholar]Base Address : %d", i2c_write_register_table);
	 
    // For I2C control (SCL, SDA)
    // GPIO             70   71
    // SCL
    *(volatile uint16 *)(0xA0070100) |=  0x0040;    // GPIO DIR     : 70
    *(volatile uint16 *)(0xA0070300) |=  0x0040;    // GPIO PULLEN  : 70
    *(volatile uint16 *)(0xA0070500) |=  0x0040;    // GPIO PULLSEL : 70
    *(volatile uint16 *)(0xA0070700) &= ~0x0040;    // GPIO DINV    : 70
    *(volatile uint16 *)(0xA0072100) &= ~0x0F00;    // GPIO MODE    : 70
    *(volatile uint16 *)(0xA0072100) |=  0x0100;    // GPIO MODE    :70
    
    // SDA
    *(volatile uint16 *)(0xA0070100) |=  0x0080;    // GPIO DIR     : 71
    *(volatile uint16 *)(0xA0070300) |=  0x0080;    // GPIO PULLEN  : 71
    *(volatile uint16 *)(0xA0070500) |=  0x0080;    // GPIO PULLSEL : 71
    *(volatile uint16 *)(0xA0070700) &= ~0x0080;    // GPIO DINV    : 71
    *(volatile uint16 *)(0xA0072100) &= ~0xF000;    // GPIO MODE    : 71
    *(volatile uint16 *)(0xA0072100) |=  0x1000;    // GPIO MODE    : 71
    
    if (is_dvt_initialized == KAL_FALSE)
    {
        DclSI2C_Initialize();
        is_dvt_initialized = KAL_TRUE;
    }
    
    if (wm8904_i2c_handle == 0)
    {
        wm8904_i2c_handle = DclSI2C_Open(DCL_I2C, DCL_I2C_OWNER_AUDIO);
        
        ASSERT(wm8904_i2c_handle != DCL_HANDLE_INVALID);
        ASSERT(wm8904_i2c_handle != DCL_HANDLE_OCCUPIED);
    }

    wm8904_i2c_ctrl_para.eOwner           = DCL_I2C_OWNER_AUDIO;
    wm8904_i2c_ctrl_para.fgGetHandleWait  = KAL_TRUE;
    wm8904_i2c_ctrl_para.u1SlaveAddress   = 0x34;
    wm8904_i2c_ctrl_para.u1DelayLen       = 0;
    wm8904_i2c_ctrl_para.eTransactionMode = DCL_I2C_TRANSACTION_FAST_MODE;
    wm8904_i2c_ctrl_para.u4FastModeSpeed  = 300;
    wm8904_i2c_ctrl_para.u4HSModeSpeed    = 0;
    wm8904_i2c_ctrl_para.fgEnableDMA      = KAL_FALSE;
    
    {
        DCL_STATUS_T rt;
        
        rt = DclSI2C_Configure(wm8904_i2c_handle, (DCL_CONFIGURE_T *)&wm8904_i2c_ctrl_para);
        
        if (STATUS_OK != rt)
        {
            kal_prompt_trace (MOD_L1SP,"[Scholar]I2C configuration status not ok: %d", rt);
            // ASSERT(0);
            return;
        }
    }
    
    
    {
        kal_int32 i;
        
        for (i = 0; i < NUM_WRITE_I2C_SINGLE_REG; i++)
        {
            {   // Write I2C
                DCL_STATUS_T rt;
                I2C_CTRL_SINGLE_WRITE_T write_data;
                
                kal_prompt_trace (MOD_L1SP,"[Scholar]I2C single write: %d, %d, %d", i2c_write_register_table[tab][i][0], i2c_write_register_table[tab][i][1], i2c_write_register_table[tab][i][2]);
                
                write_data.pu1Data   = (DCL_UINT8 *)i2c_write_register_table[tab][i];
                write_data.u4DataLen = LEN_WRITE_I2C_SINGLE_REG;
                rt = DclSI2C_Control(wm8904_i2c_handle, I2C_CMD_SINGLE_WRITE, (DCL_CTRL_DATA_T *)&write_data);
                if (STATUS_OK != rt)
                {
                    kal_prompt_trace (MOD_L1SP,"[Scholar]After single write, I2C status not ok: %d", rt);
                    // ASSERT(0);
                }
            }
            
            {   // Write and read I2C
                DCL_STATUS_T rt;
                I2C_CTRL_WRITE_AND_READE_T write_n_read;
                kal_uint8 i2c_register_buffer[2] = {0};
                
                write_n_read.pu1InData    = (DCL_UINT8 *)i2c_register_buffer;
                write_n_read.u4InDataLen  = LEN_READ_I2C_SINGLE_OUT;
                write_n_read.pu1OutData   = (DCL_UINT8 *)i2c_write_register_table[tab][i];
                write_n_read.u4OutDataLen = LEN_READ_I2C_SINGLE_REG;
                rt = DclSI2C_Control(wm8904_i2c_handle, I2C_CMD_WRITE_AND_READ, (DCL_CTRL_DATA_T *)&write_n_read);
                if (STATUS_OK != rt)
                {
                    kal_prompt_trace (MOD_L1SP,"[Scholar]After write and read, I2C status not ok: %d", rt);
                    // ASSERT(0);
                    return;
                }
                
                kal_prompt_trace (MOD_L1SP,"[Scholar]I2C read back : %d, %d", i2c_register_buffer[0], i2c_register_buffer[1]);
            }
        }
    }
}


#endif // CONNECT_WM8904
