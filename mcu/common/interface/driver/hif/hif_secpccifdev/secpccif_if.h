/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2015
*
*****************************************************************************/

/*****************************************************************************
*
 * Filename:
 * ---------
 *   secpccif_dev.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *   Header file of SECPCCIF.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
*/

#ifndef __SECPCCIF_IF_H__
#define __SECPCCIF_IF_H__
#include "secpccif_def.h"

typedef void (*secpccif_lisr_callback)(kal_uint32 ch_bitmap);


/* interface API */
void secpccif_irq0_mask(void);
void secpccif_irq0_unmask(void);
void secpccif_irq1_mask(void);
void secpccif_irq1_unmask(void);
kal_int32 secpccif_set(kal_uint32 ch);
kal_uint32 secpccif_get_rx_ch(void);
kal_uint32 secpccif_start_state(void);
void secpccif_ack(kal_uint32 ch);
kal_uint32 secpccif_AMMS_ch0_start_state(void);
void secpccif_ack_AP(kal_uint32 ch);
void secpccif_assert(void);
void secpccif_init(void);
void secpccif_irq0_lisr_callback_register(secpccif_lisr_callback cb);
void secpccif_isr_init(void);
void secpccif_read_sram(kal_uint32 dest_buf[], kal_uint32 sram_offset, kal_uint32 length);
void secpccif_write_sram(kal_uint32 sram_offset, kal_uint32 src_buf[], kal_uint32 length);
kal_uint32 secpccif_AMMS_ch0_rx_state(void);
#endif
