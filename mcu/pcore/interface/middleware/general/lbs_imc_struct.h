#ifndef _IMC_LBS_STRUCT_H_
#define _IMC_LBS_STRUCT_H_

#include "kal_general_types.h"
#include "kal_public_defs.h"


/******************************************************************************
 * WFC location info
 *****************************************************************************/
#define IMS_MAX_TIME_STAMP_LENGTH 32
typedef struct 
{
    kal_int64  lat; //double lat
    kal_int64  lng; //double lng
    kal_int32  acc;
} lbs_location_struct;
 
typedef struct 
{
    LOCAL_PARA_HDR
    kal_bool location_state;
} imc_lbs_pos_ntf_struct;
/**
 * Description
 *  - recivied AGPS location info by LBS
 *    
 * Direction
 *	- LBS -> IMC
 */
typedef struct 
{
	LOCAL_PARA_HDR
    lbs_location_struct loc_info;
} imc_lbs_pos_ind_struct;

#endif /* _IMC_LBS_STRUCT_H_ */
