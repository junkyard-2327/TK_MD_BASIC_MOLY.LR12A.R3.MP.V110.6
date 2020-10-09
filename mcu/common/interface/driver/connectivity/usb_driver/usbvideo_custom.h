/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *  usbvideo_custom.h
 *
  * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file intends for webcam customization parameter definition
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef USBVIDEO_CUSTOM_H
#define USBVIDEO_CUSTOM_H

//#include "kal_non_specific_general_types.h"

typedef enum 
{
	USBVIDEO_ATTRIBUTE_SCANNING_MODE = 1,
	USBVIDEO_ATTRIBUTE_AE_MODE,
	USBVIDEO_ATTRIBUTE_AE_PRIORITY,
	USBVIDEO_ATTRIBUTE_EXP_TIME_ABSOLUTE,
	USBVIDEO_ATTRIBUTE_EXP_TIME_RELATIVE,
	USBVIDEO_ATTRIBUTE_FOCUS_ABSOLUTE,
	USBVIDEO_ATTRIBUTE_FOCUS_RELATIVE,
	USBVIDEO_ATTRIBUTE_FOCUS_AUTO,
	USBVIDEO_ATTRIBUTE_IRIS_ABSOLUTE,
	USBVIDEO_ATTRIBUTE_IRIS_RELATIVE,
	USBVIDEO_ATTRIBUTE_ZOOM_ABSOLUTE,
	USBVIDEO_ATTRIBUTE_ZOOM_RELATIVE,
	USBVIDEO_ATTRIBUTE_PANTILT_ABSOLUTE,
	USBVIDEO_ATTRIBUTE_PANTILT_RELATIVE,
	USBVIDEO_ATTRIBUTE_ROLL_ABSOLUTE,
	USBVIDEO_ATTRIBUTE_ROLL_RELATIVE,
	USBVIDEO_ATTRIBUTE_PRIVACY,
	USBVIDEO_ATTRIBUTE_FOCAL_MIN,
	USBVIDEO_ATTRIBUTE_FOCAL_MAX,
	USBVIDEO_ATTRIBUTE_FOCAL_LENGTH,
	USBVIDEO_ATTRIBUTE_CT_MAX,

	USBVIDEO_ATTRIBUTE_BACKLIGHT_COMPENSATION = 0x81,
	USBVIDEO_ATTRIBUTE_BRIGHTNESS,
	USBVIDEO_ATTRIBUTE_CONTRAST,
	USBVIDEO_ATTRIBUTE_GAIN,
	USBVIDEO_ATTRIBUTE_POWER_LINE_FREQUENCY,
	USBVIDEO_ATTRIBUTE_HUE,
	USBVIDEO_ATTRIBUTE_SATURATION,
	USBVIDEO_ATTRIBUTE_SHARPNESS,
	USBVIDEO_ATTRIBUTE_GAMMA,
	USBVIDEO_ATTRIBUTE_WHITE_BALANCE_TMP,
	USBVIDEO_ATTRIBUTE_WHITE_BALANCE_TMP_AUTO,
	USBVIDEO_ATTRIBUTE_WHITE_BALANCE_COMP,
	USBVIDEO_ATTRIBUTE_WHITE_BALANCE_COMP_AUTO,
	USBVIDEO_ATTRIBUTE_DIGITAL_MULTIPLIER,
	USBVIDEO_ATTRIBUTE_DIGITAL_MULTIPLIER_LIMIT,
	USBVIDEO_ATTRIBUTE_HUE_AUTO,
	//USBVIDEO_ATTRIBUTE_ANALOG_VIDEO_STANDARD, /* for 1.1 version */
	//USBVIDEO_ATTRIBUTE_ANALOG_LOCK_STATUS, 
	USBVIDEO_ATTRIBUTE_MAX_MULTIPLIER,
	USBVIDEO_ATTRIBUTE_PU_MAX
} USBVIDEO_ATTRIBUTE_TYPE;

typedef enum
{
	USBVIDEO_ATTR_FOCUS_SET,
	USBVIDEO_ATTR_FOCUS_SPEED
}USBVIDEO_ATTR_FOCUS_SUBTYPE;

typedef enum
{
	USBVIDEO_ATTR_ZOOM_ZOOM,
	USBVIDEO_ATTR_ZOOM_DIGITALZOOM,
	USBVIDEO_ATTR_ZOOM_SPEED
}USBVIDEO_ATTR_ZOOM_SUBTYPE;

typedef enum
{
	USBVIDEO_ATTR_AB_PANTILT_PAN,
	USBVIDEO_ATTR_AB_PANTILT_TILT
}USBVIDEO_ATTR_AB_PANTILT_SUBTYPE;

typedef enum
{
	USBVIDEO_ATTR_RE_PANTILT_PAN,
	USBVIDEO_ATTR_RE_PANTILT_PAN_SPEED,
	USBVIDEO_ATTR_RE_PANTILT_TILT,
	USBVIDEO_ATTR_RE_PANTILT_TILT_SPEED
}USBVIDEO_ATTR_RE_PANTILT_SUBTYPE;

typedef enum
{
	USBVIDEO_ATTR_ROLL_SET,
	USBVIDEO_ATTR_ROLL_SPEED
}USBVIDEO_ATTR_ROLL_SUBTYPE;

typedef enum
{
	USBVIDEO_ATTR_WHITE_BALANCE_BLUE,
	USBVIDEO_ATTR_WHITE_BALANCE_RED
}USBVIDEO_ATTR_WHITE_BALANCE_COMP_SUBTYPE;

typedef enum
{
	USBVIDEO_REQUEST_INIT = 0,
	USBVIDEO_REQUEST_GET_CUR = 0x81,
	USBVIDEO_REQUEST_GET_MIN = 0x82,
	USBVIDEO_REQUEST_GET_MAX = 0x83,
	USBVIDEO_REQUEST_GET_RES = 0x84,
	USBVIDEO_REQUEST_GET_LEN = 0x85,
	USBVIDEO_REQUEST_GET_INFO = 0x86,
	USBVIDEO_REQUEST_GET_DEF = 0x87
}USBVIDEO_ATTR_REQUEST_TYPE;


typedef enum
{
	USBVIDEO_SCAANING_INTERLACED = 0,
	USBVIDEO_SCAANING_PROGRESSIVE = 1
}USBVIDEO_SCANNING_MODE_VALUE;

typedef enum
{
	USBVIDEO_AE_MANUAL_MODE = 1,
	USBVIDEO_AE_AUTO_MODE = 2,
	USBVIDEO_AE_SHUTTER_PRIORITY_MODE = 4,
	USBVIDEO_AE_APERTURE_MODE = 8
}USBVIDEO_AE_MODE_VALUE;

typedef enum
{
	USBVIDEO_AE_PRIORITY_CONSTANT_FRAME_RATE = 0,
	USBVIDEO_AE_PRIORITY_DYNAMIC_FRAME_RATE = 1
}USBVIDEO_AE_PRIORITY_VALUE;

typedef enum
{
	USBVIDEO_EXP_TIME_DEFAULT = 0,
	USBVIDEO_EXP_TIME_INCREMENT = 1,
	USBVIDEO_EXP_TIME_DECREMENT = 0xff	
}USBVIDEO_EXP_TIME_RELATIVE_VALUE;

typedef enum
{
	USBVIDEO_FOCUS_STOP = 0,
	USBVIDEO_FOCUS_NEAR_DIRECTION = 1,
	USBVIDEO_FOCUS_INFINITE_DIRECTION = 0xff	
}USBVIDEO_FOCUS_RELATIVE_VALUE;

typedef enum
{
	USBVIDEO_IRIS_DEFAULT = 0,
	USBVIDEO_IRIS_OPEN = 1,
	USBVIDEO_IRIS_CLOSE = 0xff	
}USBVIDEO_IRIS_RELATIVE_VALUE;


typedef enum
{
	USBVIDEO_ZOOM_STOP = 0,
	USBVIDEO_ZOOM_TELEPHOTO = 1,
	USBVIDEO_ZOOM_WIDE_ANGLE = 0xff	
}USBVIDEO_ZOOM_RELATIVE_VALUE;

typedef enum
{
	USBVIDEO_PAN_STOP = 0,
	USBVIDEO_PAN_CLOCKWISE = 1,
	USBVIDEO_PAN_CONTER_CLOCKWISE = 0xff	
}USBVIDEO_PAN_RELATIVE_VALUE;

typedef enum
{
	USBVIDEO_TILT_STOP = 0,
	USBVIDEO_TILT_UP = 1,
	USBVIDEO_TILT_DOWN = 0xff	
}USBVIDEO_TILT_RELATIVE_VALUE;

typedef enum
{
	USBVIDEO_ROLL_STOP = 0,
	USBVIDEO_ROLL_CLOCKWISE = 1,
	USBVIDEO_ROLL_CONTER_CLOCKWISE = 0xff	
}USBVIDEO_ROLL_RELATIVE_VALUE;

typedef enum
{
	USBVIDEO_POWER_LINE_DISABLED = 0,
	USBVIDEO_POWER_LINE_50HZ = 1,
	USBVIDEO_POWER_LINE_60HZ = 2	
}USBVIDEO_POWER_LINE_FREQUNCY_VALUE;

/*    // for 1.1 version
typedef enum
{
	USBVIDEO_ANALOG_STANDARD_NONE = 0,
	USBVIDEO_ANALOG_STANDARD_NTSC_525_60, 
	USBVIDEO_ANALOG_STANDARD_PAL_625_50,
	USBVIDEO_ANALOG_STANDARD_SECAM_625_50,
	USBVIDEO_ANALOG_STANDARD_NTSC_625_50, 
	USBVIDEO_ANALOG_STANDARD_PAL_525_60
}USBVIDEO_ANALOG_STANDARD_VALUE;

typedef enum
{
	USBVIDEO_ANALOG_DECODER_LOCKED = 0,
	USBVIDEO_ANALOG_DECODER_UNLOCKED = 1
}USBVIDEO_ANALOG_VIDEO_LOCK_STATUS_VALUE;
*/

typedef enum
{
	USBVIDEO_VIDEO_SIZE_1 = 1,
	USBVIDEO_VIDEO_SIZE_2,
	USBVIDEO_VIDEO_SIZE_3,
	USBVIDEO_VIDEO_SIZE_4,
	USBVIDEO_VIDEO_SIZE_5,
	USBVIDEO_VIDEO_SIZE_MAX
}USBVIDEO_VIDEO_SIZE_TYPE;

typedef enum
{
	USBVIDEO_STILL_SIZE_1 = 1,
	USBVIDEO_STILL_SIZE_2,
	USBVIDEO_STILL_SIZE_3,
	USBVIDEO_STILL_SIZE_4,
	USBVIDEO_STILL_SIZE_5,
	USBVIDEO_STILL_SIZE_MAX
}USBVIDEO_STILL_SIZE_TYPE;

typedef enum
{
	USBVIDEO_COMPRESSION_1 = 1,
	USBVIDEO_COMPRESSION_2,
	USBVIDEO_COMPRESSION_3,
	USBVIDEO_COMPRESSION_4,
	USBVIDEO_COMPRESSION_5,
	USBVIDEO_COMPRESSION_MAX
}USBVIDEO_COMPRESSION_TYPE;


typedef enum
{
	USBVIDEO_INCALL_JPEG_SIZE_1 = 1,
	USBVIDEO_INCALL_JPEG_SIZE_2,
	USBVIDEO_INCALL_JPEG_SIZE_3,
	USBVIDEO_INCALL_JPEG_SIZE_4,
	USBVIDEO_INCALL_JPEG_SIZE_5,
	USBVIDEO_INCALL_JPEG_SIZE_MAX
}USBVIDEO_INCALL_JPEG_SIZE_TYPE;


typedef struct
{
	USBVIDEO_ATTRIBUTE_TYPE type;
	kal_bool b_feature;
	kal_bool b_set;
} USBVideo_Attr_Info;

typedef struct
{
	USBVIDEO_VIDEO_SIZE_TYPE type;
	kal_uint16 width;
	kal_uint16 height;
	kal_uint32 max_frame_size;
	kal_uint32 max_bit_rate;
	kal_uint32 min_bit_rate;
	kal_uint32 default_frame_interval;
	kal_uint32 min_frame_interval;
	kal_uint32 max_frame_interval;
	kal_uint32 frame_interval_step;
} USBVideo_Video_Size_Info;

typedef struct
{
	USBVIDEO_STILL_SIZE_TYPE type;
	kal_uint16 width;
	kal_uint16 height;
	kal_uint32 max_frame_size;
} USBVideo_Still_Size_Info;

typedef struct
{
	USBVIDEO_COMPRESSION_TYPE type;
	kal_uint8 compression;
} USBVideo_Compression_Info;


typedef struct
{
	USBVIDEO_ATTRIBUTE_TYPE type;
	kal_uint32 subtype;
	USBVIDEO_ATTR_REQUEST_TYPE req_type;
	kal_uint32 value;
} USBVideo_Attr_Value;


/* get parameter functions*/
typedef struct 
{
	const USBVideo_Attr_Info* (*usbvideo_get_attr_info)(kal_uint8 *p_size);
	const USBVideo_Video_Size_Info* (*usbvideo_get_video_size_info)(kal_uint8 *p_size);
	USBVIDEO_VIDEO_SIZE_TYPE (*usbvideo_get_default_video_index)(void);
	const USBVideo_Still_Size_Info* (*usbvideo_get_still_size_info)(kal_uint8 *p_size);
	USBVIDEO_STILL_SIZE_TYPE (*usbvideo_get_default_still_index)(void);
	const USBVideo_Compression_Info* (*usbvideo_get_compression_info)(kal_uint8 *p_size);
	USBVIDEO_COMPRESSION_TYPE (*usbvideo_get_default_compression_index)(void);
	void (*usbvideo_get_attr_value)(USBVideo_Attr_Value *attr);	
} USBVideo_Camera_Param;

/* usbvideo attribute - USBVIDEO_ATTRIBUTE_TYPE */
#define	ATTR_PU_START			(0x81)
#define	GET_ATTR_CT_IDX(a)	(a-0)
#define	GET_ATTR_PU_IDX(a)	(a-ATTR_PU_START)

typedef struct {
	kal_uint32		min;
	kal_uint32		max;
	kal_uint32		res;
	kal_uint32		def;
} attr_info_struct;

typedef struct {
   attr_info_struct	attr_info[USBVIDEO_ATTRIBUTE_PU_MAX-ATTR_PU_START];
} usbvideo_attr_struct;


extern const USBVideo_Camera_Param* USBVideo_Get_Camera_Param(void);

#endif  /* USBVIDEO_CUSTOM_H */

