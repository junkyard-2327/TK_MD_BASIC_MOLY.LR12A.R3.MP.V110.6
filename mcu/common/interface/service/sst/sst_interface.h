#ifndef SST_INTERFACE_H
#define SST_INTERFACE_H

#include "nvram_data_items.h"

#define SST_PROTECTED_NVRAM_LID_READ_LIMIT             0x1
#define SST_PROTECTED_NVRAM_LID_WRITE_LIMIT            0x2

typedef struct sst_protected_nvram_lid_struct {
    nvram_lid_enum          m_lid;
    kal_uint16              m_attr;
} SST_PROTECTED_NVRAM_LID;

typedef struct sst_allowed_task_struct {
    module_type             m_mod_id;
} SST_ALLOWED_TASK;

/*****************************************************************************
 * FUNCTION
 *	SST_Get_ChipRID
 *
 * DESCRIPTION
 *	The function returns per-chip random ID to the caller.  
 *
 * PARAMETERS
 *	[INPUT/OUTPUT] pRid  : The buffer that is used to store the per-chip random ID.
 *	[INPUT] buf_len : Length that the caller wants for the per-chip random ID in "bits".
 *
 * RETURNS
 *	KAL_TRUE  : Get random ID Success
 *	KAL_FALSE : Get random ID failed
 *
 * NOTES
 *    N/A
 *
 *****************************************************************************/
extern kal_bool SST_Get_ChipRID(kal_char *pRid, kal_int32 buf_len);


/*****************************************************************************
 * FUNCTION
 *	SST_Get_ChipRK
 *
 * DESCRIPTION
 *	The function returns per-chip random key to the caller.  
 *
 * PARAMETERS
 *	[INPUT/OUTPUT] key  : The buffer that is used to store the per-chip random key.
 *	[INPUT] len : Length that the caller wants for the per-chip random key in bytes.
 *
 * RETURNS
 *	KAL_TRUE  : Get random key Success
 *	KAL_FALSE : Get random key failed
 *
 * NOTES
 *    N/A
 *
 *****************************************************************************/
extern kal_bool SST_Get_ChipRK(kal_char *key, kal_int32 len);

/*************************************************************************
* FUNCTION
*  SST_Get_EFUSE_Data
*
* DESCRIPTION
*  This function get specified length of efuse data and put in the buffer
*
* PARAMETERS
*  data_type -     efuse field
*  buf -    pointer to the buffer to store efuse data
*  len -    efuse data length expected to read
*
* RETURNS
*  KAL_TRUE/KAL_FALSE
*
*************************************************************************/
#if defined(MT6771) || defined(MT6761) || defined(MT6765) || defined(MT6762)
typedef enum{
	AP_SBC_EN = 1,
	C_CTRL0,
	C_CTRL1,
	C_DAT0,
	C_DAT1,
	C_DAT2,
	C_DAT3,
	C_DAT4,
	C_DAT5,
}EFUSE_DATA_TYPE;
#elif defined(MT6739)
typedef enum{
	AP_SBC_EN = 1,
	C_CTRL0,
	C_CTRL1,
	C_CTRL2,
	C_CTRL3,
	C_DAT0,
	C_DAT1,
}EFUSE_DATA_TYPE;
#else
typedef enum{
	AP_SBC_EN = 1,
	C_CTRL0 = 0,
 	C_CTRL1 = 0,
	C_DAT0 = 0,
	C_DAT1 = 0,
	C_DAT2 = 0,
	C_DAT3 = 0,	
	C_DAT4 = 0,
	C_DAT5 = 0,
}EFUSE_DATA_TYPE;
#endif

kal_bool SST_Get_EFUSE_Data(EFUSE_DATA_TYPE data_type, kal_uint8* buf, kal_uint8 len);

/*************************************************************************
* FUNCTION
*  SST_ilm_inject_check
*
* DESCRIPTION
*  This function checks whether input ILM is permitted to access the specified NVRAM LID 
*
* PARAMETERS
*  ilm_ptr -     read/write request ILM
*
* RETURNS
*  KAL_TRUE/KAL_FALSE
*  KAL_TRUE: The access is permitted, i.e. pass checking successfully
*  KAL_FALSE: The access is prohibited, i.e. fails checking
*************************************************************************/

kal_uint32 SST_ilm_inject_check(ilm_struct *ilm_ptr);

#endif

