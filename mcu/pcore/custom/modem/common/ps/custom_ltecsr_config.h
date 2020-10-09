#ifndef __CUSTOME_LTECSR_CONFIG_H__
#define __CUSTOME_LTECSR_CONFIG_H__

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "ps_public_enum.h"
#include "sim_ps_api.h"

#include "nvram_editor_data_item.h"
#include "nvram_interface.h"

#define LTECSR_UNDEF_CONFIG_32 0xFFFFFFFF
#define LTECSR_UNDEF_CONFIG_16 0xFFFF
#define LTECSR_UNDEF_CONFIG_8 0xFF


typedef struct
{
    kal_uint16 op_id;
    sim_interface_enum sim_slot_id;
    kal_bool with_imsi_info;
    kal_uint8 imsi_mnc_len;
    kal_uint8 mccmnc[8];
} ltecsr_custom_param_struct;

#ifdef __VOLTE_SUPPORT__
kal_bool ltecsr_nvram_customization(ltecsr_custom_param_struct *custom_param_ptr, nvram_ef_ltecsr_profile_record_struct **profile_ptr, nvram_ef_ltecsr_profile_record_struct **rom_profile_ptr);
#endif

#endif

