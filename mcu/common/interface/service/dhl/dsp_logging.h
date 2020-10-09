#ifndef _DSP_LOGGING_H
#define _DSP_LOGGING_H

#if defined(__MAUI_BASIC__)
#define Dsp_Logging_Init()
#else
#if defined(__MTK_TARGET__)
#include "dhl_def.h"
#include "kal_public_defs.h"
#include "kal_public_api.h"
#include "kal_internal_def.h"
#include "dhl_trace.h"

typedef enum
{
    ULSP_DSP_REDUMP_START,
    ULSP_DSP_REDUMP_END
} ULSP_DSP_REDUMP_TYPE;

/*---------------------------------------------------------------------------
    Funtion prototype
---------------------------------------------------------------------------*/
void Dsp_Logging_Init();
void Dsp_Logging_Init_By_Core(kal_uint8 core);
void Dsp_Set_Filter(dhl_cmd_set_dsp_filter_struct *dsp_filter_from_elt);
void Dsp_Set_Filter_Imp();
void Dsp_Set_RAKE_Filter();
void Dsp_Backup_Clear_All_Filter();
void Dsp_Restore_Filter();

kal_uint32 Get_Cxif_Address(kal_uint8 core);
void Save_Filter_To_Cxif(kal_uint8 core);
void Print_Filter_Setting(dhl_cmd_set_dsp_filter_struct *filter_setting);
void Dsp_Test_Filter(kal_uint8 core);
void redump_dsp_log(ULSP_DSP_REDUMP_TYPE redump_type);
kal_uint8 Check_Dsp_Abort_Timeout();

/*---------------------------------------------------------------------------
    Enum definition
---------------------------------------------------------------------------*/
typedef enum
{
    USIP0_INNER,
    USIP0_BRP,
    USIP1_FEC,
    USIP1_SPEECH,
    RAKE,
    SCQ16_0,
    SCQ16_1,
    DSP_CORE_NUMBER,
} dsp_core_enum; //This enum order cannot be changed. (Dsp_Logging_Init also uses this enum)

#endif // __MTK_TARGET__
#endif // __MAUI_BASIC__
#endif // _DSP_LOGGING_H
