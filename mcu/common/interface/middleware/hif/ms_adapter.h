#ifndef __MS_ADAPTER_H
#define __MS_ADAPTER_H

#include "fs_func.h"

#define MAX_DISK_DRVER              	4
#define	USBMS_INVALID_MAX_LUN			0xFF
#define DEFAULT_MAX_GPD_OF_LUN			64
#define NAND_READ_SZ					(1024*16)
#define NAND_WRITE_SZ					(1024*32)

typedef enum 
{
	USB_STORAGE_DEV_STATUS_OK = 0,
	USB_STORAGE_DEV_STATUS_MEDIA_CHANGE,
	USB_STORAGE_DEV_STATUS_NOMEDIA,
	USB_STORAGE_DEV_STATUS_WP,
	USB_STORAGE_DEV_STATUS_MAX
} USB_STORAGE_DEV_STATUS;


typedef enum
{
	USB_STORAGE_DEV_NOR,
	USB_STORAGE_DEV_NAND,
	USB_STORAGE_DEV_CARD,
	USB_STORAGE_DEV_CDROM,
	USB_STORAGE_DEV_NONE
}USB_STORAGE_DEV_TYPE;

/* read capacity command structure */
typedef struct
{
	kal_uint32 LastBA;	/*depend on the target*/
	kal_uint32 BlkLen;	/*512*/
} Read_Capacity_Info;     

typedef struct
{
	kal_bool (* usbms_read)(void *data, kal_uint32 lba, kal_uint16 lba_num);
	kal_bool (* usbms_write)(void *data, kal_uint32 lba, kal_uint16 lba_num);
	kal_bool (* usbms_read_gpd)(qbm_gpd *head,qbm_gpd *tail, kal_uint32 lba, kal_uint16 lba_num); //read with GPD
	kal_bool (* usbms_write_gpd)(qbm_gpd *head,qbm_gpd *tail, kal_uint32 lba, kal_uint16 lba_num); //write with GPD
	kal_bool (* usbms_query_max_bd_num)(kal_uint16  *max_bd_num); //query the max BD number, the driver can receive
	kal_bool (* usbms_format)(void);
	USB_STORAGE_DEV_STATUS (* usbms_checkmedia_exist)(void);
	kal_bool (* usbms_prevmedia_removal)(kal_bool enable);
	kal_bool (* usbms_read_capacity)(kal_uint32 *max_lba, kal_uint32 *lba_len);
//	kal_bool (* usbms_read_formatcapacity)(kal_uint32 *no_of_blks, kal_uint32 *blk_len);
	USB_STORAGE_DEV_TYPE	(* usbms_dev_type)(void);
}USB_DiskDriver_STRUCT;

typedef enum 
{
	MS_READ = 0,
	MS_WRITE
} MS_DIRECTION;

extern FS_HANDLE			g_cdrom_drive_handle;
/* translate fd type to usb dev type*/
extern USB_STORAGE_DEV_TYPE MS_Trans_Fs_Type(FS_DEVICE_TYPE_ENUM type);
extern kal_uint8 MS_Get_Max_LUN(void);
extern void MS_DeRegister_DiskDriver(kal_uint8 disk_index);
extern void MS_Change_Register_DiskDriver(kal_uint8 disk_index, USB_DiskDriver_STRUCT *disk_api);
extern USB_STORAGE_DEV_STATUS MS_Checkmedia_Exist(kal_uint8 LUN);
extern kal_bool MS_Format(kal_uint8 LUN);
extern kal_bool MS_Read_Capacity(kal_uint8 LUN, kal_uint32 *max_lba, kal_uint32 *lba_len);
//extern kal_bool MS_Read_FormatCapacity(kal_uint8 LUN, kal_uint32 *max_lba, kal_uint32 *sec_len);
extern kal_bool MS_Read_Write(MS_DIRECTION direct, void *dev_t,qbm_gpd *head,qbm_gpd *tail, kal_uint16 lba_num);
extern kal_bool MS_Prevmedia_Removal(kal_uint8 LUN, kal_bool enable);
extern USB_STORAGE_DEV_TYPE MS_Dev_Type(kal_uint8 LUN);
extern kal_uint8 MS_Register_DiskDriver(USB_DiskDriver_STRUCT *disk_api);
extern kal_uint8 MS_Set_Current_Driver(kal_uint32 drv);
extern kal_uint32 MS_Get_Current_Driver(void);
extern void MS_Adapter_Deinit(void);
extern void MS_Init_Normal_Mode(void);
extern void MS_End_Normal_Mode(void);
extern kal_uint16 MS_Query_Max_BD_Num(kal_uint8 LUN);
extern void FAT_Init(void);

#endif


