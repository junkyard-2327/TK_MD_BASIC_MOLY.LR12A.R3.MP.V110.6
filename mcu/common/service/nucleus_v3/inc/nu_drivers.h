/***********************************************************************
*
*            Copyright 2011 Mentor Graphics Corporation
*                         All Rights Reserved.
*
* THIS WORK CONTAINS TRADE SECRET AND PROPRIETARY INFORMATION WHICH IS
* THE PROPERTY OF MENTOR GRAPHICS CORPORATION OR ITS LICENSORS AND IS
* SUBJECT TO LICENSE TERMS.
*
************************************************************************

************************************************************************
*
*  DESCRIPTION
*
*       This file contains public constants common to both the
*       application and Device Drivers.
*
***********************************************************************/

/* Check to see if this file has been included already.  */

#ifndef         NU_DRIVERS
#ifdef          __cplusplus
/* C declarations in C++     */
extern          "C" {
#endif
#define         NU_DRIVERS

/* HC Yang */
//#include        "services/nu_services.h"

/**********************************************************************/
/*            Macros used by generic driver components                */
/**********************************************************************/
/* Size of reference clock array */
#define NU_DRVR_REF_CLOCK_LEN                       20


/**********************************************************************/
/*                Power Interface Header Files                        */
/**********************************************************************/
#if (defined(CFG_NU_OS_SVCS_PWR_ENABLE) && defined(CFG_NU_OS_DRVR_PWR_INTRF_ENABLE))
#include        "drivers/power_interface.h"
#endif /* (defined(CFG_NU_OS_SVCS_PWR_ENABLE) && defined(CFG_NU_OS_DRVR_PWR_INTRF_ENABLE)) */


/**********************************************************************/
/*                  CPU Driver Header Files                           */
/**********************************************************************/
#ifdef CFG_NU_OS_DRVR_CPU_ENABLE
#include        "drivers/cpu_interface.h"
#include        "drivers/cpu_dv_interface.h"
#endif /* CFG_NU_OS_DRVR_CPU_ENABLE */

/**********************************************************************/
/*                  NVM Driver Header Files                           */
/**********************************************************************/
#ifdef CFG_NU_OS_DRVR_NVM_ENABLE
#include        "drivers/nvm_dv_interface.h"
#endif /* CFG_NU_OS_DRVR_NVM_ENABLE */

/**********************************************************************/
/*                  Hibernate Driver Header Files                     */
/**********************************************************************/
#ifdef CFG_NU_OS_DRVR_HIBERNATE_ENABLE
#include        "drivers/hibernate_dv_interface.h"
#endif /* CFG_NU_OS_DRVR_HIBERNATE_ENABLE */

/**********************************************************************/
/*                  Alarm Driver Header Files                         */
/**********************************************************************/
#ifdef CFG_NU_OS_DRVR_ALARM_ENABLE
#include        "drivers/alarm_dv_interface.h"
#endif /* CFG_NU_OS_DRVR_ALARM_ENABLE */

/**********************************************************************/
/*                  DMA Driver Header Files                           */
/**********************************************************************/
#ifdef CFG_NU_OS_DRVR_DMA_ENABLE
#include        "drivers/dma.h"
#endif /* CFG_NU_OS_DRVR_DMA_ENABLE */

/**********************************************************************/
/*                    Display Header Files                            */
/**********************************************************************/
#ifdef CFG_NU_OS_DRVR_DISPLAY_ENABLE
#include        "drivers/display_config.h"
#include        "drivers/display_dv_interface.h"
#include        "drivers/display_constants.h"
#include        "drivers/display.h"

/* UI Grafix RS Header required */
#include        "ui/rs_base.h"

#include        "drivers/globalv.h"
#include        "drivers/blits.h"
#include        "drivers/color_convert.h"
#include        "drivers/colors.h"

#ifdef INCLUDE_1_BIT
#include "drivers/m1b_fil.h"
#include "drivers/m1b_drv.h"
#include "drivers/m1b_lin.h"
#endif
#ifdef INCLUDE_2_4_BIT
#include "drivers/m2b4_fil.h"
#include "drivers/m2b4_drv.h"
#include "drivers/m2b4_lin.h"
#endif
#ifdef INCLUDE_8_BIT
#include "drivers/m8b_fil.h"
#include "drivers/m8b_drv.h"
#include "drivers/m8b_lin.h"
#endif
#ifdef INCLUDE_16_BIT
#include "drivers/m16b_fil.h"
#include "drivers/m16b_drv.h"
#include "drivers/m16b_lin.h"
#endif
#ifdef INCLUDE_24_BIT
#include "drivers/m24b_lin.h"
#include "drivers/m24b_drv.h"
#include "drivers/m24b_fil.h"
#endif
#ifdef INCLUDE_32_BIT
#include "drivers/m32b_lin.h"
#include "drivers/m32b_drv.h"
#include "drivers/m32b_fil.h"
#endif

#include        "drivers/mb_extrn.h"
#include        "drivers/clips.h"
#include        "drivers/copyb.h"
#include        "drivers/screen_i.h"
#include        "drivers/screen_path.h"
#include        "drivers/screen_s.h"

#endif /* CFG_NU_OS_DRVR_DISPLAY_ENABLE */

/**********************************************************************/
/*                Ethernet Driver Header Files                        */
/**********************************************************************/
#ifdef CFG_NU_OS_DRVR_ETH_ENABLE
#include        "drivers/ethernet.h"
#include        "drivers/ethernet_dv_interface.h"
#include        "drivers/ethernet_common.h"
#endif /* CFG_NU_OS_DRVR_ETH_ENABLE */


/**********************************************************************/
/*                  Keypad Driver Header Files                        */
/**********************************************************************/
#ifdef CFG_NU_OS_DRVR_KEYPAD_ENABLE
#include        "drivers/keypad.h"
#include        "drivers/keypad_ge_defs.h"
#include        "drivers/keypad_ge_extr.h"
#include        "drivers/keypad_dv_interface.h"
#endif /* CFG_NU_OS_DRVR_KEYPAD_ENABLE */

/**********************************************************************/
/*                Lighteweight SPI Driver Header Files                */
/**********************************************************************/
#ifdef CFG_NU_OS_DRVR_LWSPI_ENABLE
#include        "drivers/lwspi_dv_interface.h"
#include        "drivers/lwspi_common.h"
#endif /* CFG_NU_OS_DRVR_LWSPI_ENABLE */

/**********************************************************************/
/*                  RAMDISK Driver Header Files                       */
/**********************************************************************/
#ifdef CFG_NU_OS_DRVR_FAT_RD_ENABLE
#include        "drivers/ramdisk.h"
#include        "drivers/ramdisk_dv_interface.h"
#endif /* CFG_NU_OS_DRVR_FAT_RD_ENABLE */


/**********************************************************************/
/*                   SAFE Driver Header Files                         */
/**********************************************************************/
#ifdef CFG_NU_OS_DRVR_SAFE_ENABLE
#include        "drivers/safe_dv_interface.h"
#include        "drivers/safe.h"
#include        "drivers/safe_power.h"
#include        "drivers/nand_fldrv.h"
#include        "drivers/nor_fldrv.h"
#include        "drivers/ram_fldrv.h"
#include        "drivers/data_fldrv.h"
#endif /* CFG_NU_OS_DRVR_SAFE_ENABLE */


/**********************************************************************/
/*                  Serial Driver Header Files                        */
/**********************************************************************/
#ifdef CFG_NU_OS_DRVR_SERIAL_ENABLE
#include        "drivers/serial.h"
#include        "drivers/serial_dv_interface.h"
#include        "drivers/serial_common.h"
#endif /* CFG_NU_OS_DRVR_SERIAL_ENABLE */

/**********************************************************************/
/*                    SPI Driver Header Files                        */
/**********************************************************************/
#ifdef CFG_NU_OS_DRVR_SPI_ENABLE
#include        "connectivity/spi.h"
#include        "connectivity/spic_extr.h"
#include        "connectivity/spi_extern.h"
#include        "drivers/spi_dv_interface.h"
#include        "drivers/spi_common.h"
#endif /* CFG_NU_OS_DRVR_SPI_ENABLE */

/**********************************************************************/
/*                    SDIO Driver Header Files                        */
/**********************************************************************/
#ifdef CFG_NU_OS_DRVR_SDIO_ENABLE
#include        "drivers/sd_cfg.h"
#include        "drivers/sd_disk.h"
#include        "drivers/sd_imp.h"
#include        "drivers/sdio_hcd_dv_interface.h"
#endif /* CFG_NU_OS_DRVR_SDIO_ENABLE */


/**********************************************************************/
/*                  SYSLOG Driver Header Files                        */
/**********************************************************************/
#ifdef CFG_NU_OS_DRVR_SYSLOGGER_ENABLE
#include        "drivers/syslogger_defs.h"
#endif /* CFG_NU_OS_DRVR_SYSLOGGER_ENABLE */


/**********************************************************************/
/*                 Touchpanel Driver Header Files                     */
/**********************************************************************/
#ifdef CFG_NU_OS_DRVR_TOUCHPANEL_ENABLE
#include        "drivers/touchpanel_dv_interface.h"
#include        "drivers/touchpanel.h"
#endif /* CFG_NU_OS_DRVR_TOUCHPANEL_ENABLE */


/**********************************************************************/
/*                     USB Driver Header Files                        */
/**********************************************************************/
#ifdef CFG_NU_OS_DRVR_USB_ENABLE
#include        "connectivity/nu_usb.h"
#ifdef CFG_NU_OS_DRVR_USB_HOST_OHCI_ENABLE
#include        "drivers/ohci_dv_interface.h"
#endif /* CFG_NU_OS_DRVR_USB_HOST_OHCI_ENABLE */
#ifdef CFG_NU_OS_DRVR_USB_FUNC_HWCTRL_ENABLE
#include        "drivers/usbf_dv_interface.h"
#include        "drivers/usbf_common.h"
#endif /* CFG_NU_OS_DRVR_USB_FUNC_HWCTRL_ENABLE */
#ifdef CFG_NU_OS_DRVR_USB_HOST_HWCTRL_ENABLE
#include        "drivers/usbh_hwctrl_dv_interface.h"
#include        "drivers/usbh_hwctrl_common.h"
#endif /* CFG_NU_OS_DRVR_USB_HOST_HWCTRL_ENABLE */
#ifdef CFG_NU_OS_DRVR_USB_OTG_HWCTRL_ENABLE
#include        "drivers/otg_dv_interface.h"
#endif /* CFG_NU_OS_DRVR_USB_OTG_HWCTRL_ENABLE */
#ifdef CFG_NU_OS_DRVR_USB_HOST_EHCI_ENABLE
#include        "drivers/ehci_dv_interface.h"
#endif
#ifdef CFG_NU_OS_DRVR_USB_HOST_XHCI_ENABLE
#include        "drivers/xhci_dv_interface.h"
#endif
#endif /* CFG_NU_OS_DRVR_USB_ENABLE */

/**********************************************************************/
/*                     CAN Driver Header Files                        */
/**********************************************************************/
#ifdef CFG_NU_OS_DRVR_CAN_ENABLE
#include        "drivers/can_dv_interface.h"
#include        "drivers/can_common.h"
#endif /* CFG_NU_OS_CONN_CAN_ENABLE */

/**********************************************************************/
/*                     I2C Driver Header Files                        */
/**********************************************************************/
#ifdef CFG_NU_OS_DRVR_I2C_ENABLE
#include        "drivers/i2c_dv_interface.h"
#endif /* CFG_NU_OS_DRVR_I2C_ENABLE */

/**********************************************************************/
/*                     PPP Driver Header Files                        */
/**********************************************************************/
#ifdef CFG_NU_OS_DRVR_PPP_ENABLE_SERIAL
#include "drivers/nu_ppp.h"
#endif

/**********************************************************************/
/*                     PPPoE Driver Header Files                        */
/**********************************************************************/
#ifdef CFG_NU_OS_DRVR_PPP_ENABLE_ETHERNET
#include "drivers/nu_ppe.h"
#endif

/**********************************************************************/
/*                     RTC Driver Header Files                        */
/**********************************************************************/
#ifdef CFG_NU_OS_DRVR_RTC_ENABLE
#include "drivers/rtc.h"
#include "drivers/rtc_dv_interface.h"
#endif /* CFG_NU_OS_DRVR_RTC_ENABLE */

#ifdef          __cplusplus

/* End of C declarations */
}

#endif  /* __cplusplus */

#endif  /* !NU_DRIVERS */

