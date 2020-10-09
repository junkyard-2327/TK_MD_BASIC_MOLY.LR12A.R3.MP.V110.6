/*****************************************************************************
 *
 * Filename:
 * ---------
 * custom_sml.c
 *
 * Project:
 * --------
 *  UMOLYA
 *
 * Description:
 * ------------
 *  This file is for SIM ME Lock customization
 *
 * Author:
 * -------
 * -------
 ****************************************************************************/

#include "kal_general_types.h"
#include "custom_sml.h"
#include "global_def.h"
#include "smu_trc.h"
#include "ps_public_enum.h"
#include "kal_public_api.h"
#include "sim_ps_enum.h"
#include "custom_nvram_extra.h"

#if defined(__VZW_RSU_SUPPORT__)
/* define the Local variable of VZW SML object */
static sml_vzw_sim_lock_context_struct sml_vzw_cntxt_obj[MAX_SIM_NUM];
static nvram_ef_sml_vzw_sim_lock_obj_struct SMLVZWOBJ[MAX_SIM_NUM];

/* VZW SML global variables */
nvram_ef_sml_vzw_sim_lock_obj_struct* pSMLVZWg = &SMLVZWOBJ[0];

#if defined(__VZW_RSU_LOCK_CODE_EXTEND_SUPPORT__)
/* define the Local variable of VZW SML object */
static sml_vzw_sim_lock_code_context_struct sml_vzwlc_cntxt_obj[MAX_SIM_NUM];
static nvram_ef_sml_vzw_sim_lock_code_obj_struct SMLVZWLCOBJ[MAX_SIM_NUM];

/* VZW SML global variables */
nvram_ef_sml_vzw_sim_lock_code_obj_struct* pSMLVZWLCg = &SMLVZWLCOBJ[0];
#endif /* __VZW_RSU_LOCK_CODE_EXTEND_SUPPORT__ */

/*******************************************************************************
 * FUNCTION  
 *  custom_sml_vzw_is_test_purpose
 * DESCRIPTION
 *  This function is to query if VzW testing functions are enabled
 * PARAMETERS
 *  N/A
 * RETURN
 *  KAL_TRUE: For test purpose, testing function enabled
 *  KAL_FALSE: Normal purpose
 * GLOBALS AFFECTED
 *  N/A
*******************************************************************************/
kal_bool custom_sml_vzw_is_test_purpose(void)
{
#ifdef __VZW_RSU_TEST__
    return KAL_TRUE;
#else
    return KAL_FALSE;
#endif
}


/*******************************************************************************
 * FUNCTION  
 *  sml_vzw_give
 * DESCRIPTION
 *  This method copys the LID files read from NVRAM to the SML obj
 * PARAMETERS
 *  IN          * pLidToObj
 * RETURN
 *  void
 * GLOBALS AFFECTED
 *  SMLOBJ
*******************************************************************************/
void sml_vzw_give(void *pLidToObj, kal_uint8 source)
{
    sml_vzw_sim_lock_context_struct * pObj = NULL;
  
    if(NULL != pSMLVZWg[source].pObj)
    {
        pSMLVZWg[source].pObj = NULL;   
    }
       
    pObj = &(sml_vzw_cntxt_obj[source]);
    
    kal_mem_cpy(pObj,
                pLidToObj,
                sizeof(sml_vzw_sim_lock_context_struct)
                ); 
   
    pSMLVZWg[source].pObj = pObj;
}

/*******************************************************************************
 * FUNCTION  
 *  sml_vzw_take
 * DESCRIPTION
 *  This method copys the contex of the SML object to the provided NVRAM LID.
 * PARAMETERS
 *  OUT         * pObjToLid
 * RETURN
 *  void
 * GLOBALS AFFECTED
 *  SMLOBJ
 *******************************************************************************/
void sml_vzw_take( void *pObjToLid, kal_uint8 source )
{
    sml_vzw_sim_lock_context_struct * pObj = (sml_vzw_sim_lock_context_struct *) pSMLVZWg[source].pObj;

    kal_mem_cpy(pObjToLid,
                pObj,
                sizeof(sml_vzw_sim_lock_context_struct)
                );
}

/*******************************************************************************
 * FUNCTION  
 *  sml_vzw_destory
 * DESCRIPTION
 *  This method free the SML object in memory if it is not used.
 * PARAMETERS
 *  void
 * RETURN
 *  void
 * GLOBALS AFFECTED
 *  SMLOBJ
 *******************************************************************************/    
void sml_vzw_destory(kal_uint8 source)
{
    pSMLVZWg[source].pObj = NULL;
}

/*******************************************************************************
 * FUNCTION  
 *  sml_vzw_Load
 * DESCRIPTION
 *  This function loads the SML obj from NVRAM LID (NVRAM_READ_CNF)
 * PARAMETERS
 *  IN          pLid
 * RETURN
 *  kal_uint16  Obj size
 * GLOBALS AFFECTED
 *  SMLOBJ
 *******************************************************************************/ 
kal_uint16 sml_vzw_Load( void *pLid, kal_uint8 source )
{
    nvram_ef_sml_vzw_sim_lock_obj_struct *p = &pSMLVZWg[source];

    kal_uint16 length = sizeof(sml_vzw_sim_lock_context_struct);

    /* Clean the old ones */
    (*p->destory)(source);

    /* Load the new one */
    (*p->give)(pLid, source);

    return length;
}

/*******************************************************************************
 * FUNCTION  
 *  sml_vzw_Save
 * DESCRIPTION
 *  This function saves the SML obj to NVRAM LID (NVRAM_WRITE_REQ)
 * PARAMETERS
 *  OUT          pLid
 * RETURN
 *  kal_uint16  Obj size
 * GLOBALS AFFECTED
 *  SMLOBJ
 *******************************************************************************/ 
kal_uint16 sml_vzw_Save( void *pLid, kal_uint8 source )
{

    nvram_ef_sml_vzw_sim_lock_obj_struct *p = &pSMLVZWg[source];

    kal_uint16 length = sizeof(sml_vzw_sim_lock_context_struct);

    kal_uint8 lock_state = SML_VZW_LOCK_STATE_LOCK;

    kal_bool ret_val = KAL_FALSE;

    kal_bool temp_unlock_restore_required = KAL_FALSE;

    /* Check if NW lock op is set to Temp unlock in SML VzW OBJ. If yes, then change it to Lock before performing 'take' operation.
           Then restore back to Temp unlock after 'take' operation */

    ret_val = sml_vzw_get_int_data(source, SML_VZW_CAT_NONE, SML_VZW_RSU_NETWORK_LOCK_OPERATION, &lock_state);

    if (KAL_FALSE == ret_val)
    {
        DEBUG_ASSERT(0);
    }
    else
    {
        if (lock_state == SML_VZW_LOCK_STATE_TEMP_UNLOCK)
        {
            ret_val = sml_vzw_update_int_data(source, SML_VZW_CAT_NONE, SML_VZW_RSU_NETWORK_LOCK_OPERATION, SML_VZW_LOCK_STATE_LOCK);
            if (ret_val == KAL_TRUE)
            {
                temp_unlock_restore_required = KAL_TRUE;
            }
        }
    }

    (*p->take)(pLid, source);

    if (KAL_TRUE == temp_unlock_restore_required)
    {
        sml_vzw_update_int_data(source, SML_VZW_CAT_NONE, SML_VZW_RSU_NETWORK_LOCK_OPERATION, SML_VZW_LOCK_STATE_TEMP_UNLOCK);
    }

    return length;  
}

/*******************************************************************************
 * FUNCTION  
 *  sml_vzw_getItem
 * DESCRIPTION
 *  This method returns the structure pointer and length of the structure
 *  of the desired SML object items.
 * PARAMETERS
 *  IN          cat
 *  IN          item
 *  OUT         *length
 * RETURN
 *  void *
 * GLOBALS AFFECTED
 *  SMLOBJ
 *******************************************************************************/
void * sml_vzw_getItem(sml_vzw_cat_enum category, 
                              sml_ctx_enum item, 
                              kal_uint16 *plength,
                              kal_uint8 source)
{
    sml_vzw_sim_lock_context_struct *pObj = (sml_vzw_sim_lock_context_struct *) pSMLVZWg[source].pObj;

    ASSERT(NULL != pObj);

    switch(item)
    {
        case SML_VZW_RSU_MAJOR_VERSION:
            *plength = sizeof(kal_uint8);
            return (kal_uint8 *) &(pObj->major_version);

        case SML_VZW_RSU_MINOR_VERSION:
            *plength = sizeof(kal_uint8);
            return (kal_uint8 *) &(pObj->minor_version);

        case SML_VZW_RSU_PROTECTION_ALGORITHM:
            *plength = sizeof(kal_uint8);
            return (kal_uint8 *) &(pObj->protection_algo);

        case SML_VZW_RSU_NETWORK_LOCK_OPERATION:
            *plength = sizeof(kal_uint8);
            return (kal_uint8 *) &(pObj->nw_lock_op);

        case SML_VZW_RSU_TIME_STAMP:
            *plength = SML_VZW_RSU_TIME_STAMP_LEN;
            return (kal_uint8 *) &(pObj->timestamp[0]);

        case SML_VZW_RSU_SESSION_ID:
            *plength = SML_VZW_RSU_SESSION_ID_LEN;
            return (kal_uint8 *) &(pObj->session_id[0]);

        case SML_VZW_RSU_CAT_CODE:
            switch(category)
            {
                case SML_VZW_CAT_N:
                    *plength = SML_VZW_RSU_NW_LIST_LEN;
                    return (kal_uint8 *) &(pObj->nw_list[0]);
                    break;

                case SML_VZW_CAT_NS:
                    *plength = SML_VZW_RSU_NS_LIST_LEN;
                    return (kal_uint8 *) &(pObj->ns_list[0]);
                    break;

                case SML_VZW_CAT_SP:
                    *plength = SML_VZW_RSU_SP_LIST_LEN;
                    return (kal_uint8 *) &(pObj->sp_list[0]);
                    break;

                case SML_VZW_CAT_EHPLMN:
                    *plength = SML_VZW_RSU_EHPLMN_LIST_LEN;
                    return (kal_uint8 *) &(pObj->ehplmn_list[0]);
                    break;

                default:
                    /* do nothing */
                    break;
            }
            break;
        case SML_VZW_RSU_CAT_NUM:
            switch(category)
            {
                case SML_VZW_CAT_N:
                    *plength = sizeof(kal_uint8);
                    return (kal_uint8 *) &(pObj->nw_num);
                    break;
        
                case SML_VZW_CAT_NS:
                    *plength = sizeof(kal_uint8);
                    return (kal_uint8 *) &(pObj->ns_num);
                    break;
        
                case SML_VZW_CAT_SP:
                    *plength = sizeof(kal_uint8);
                    return (kal_uint8 *) &(pObj->sp_num);
                    break;
        
                case SML_VZW_CAT_EHPLMN:
                    *plength = sizeof(kal_uint8);
                    return (kal_uint8 *) &(pObj->ehplmn_num);
                    break;
        
                default:
                    /* do nothing */
                    break;
            }
            break;
        default:
            break;   
    }

    return NULL;    
}

/*******************************************************************************
 * FUNCTION  
 *  sml_vzw_putItem
 * DESCRIPTION
 *  This method set the desired items of the SML object.
 * PARAMETERS
 *  IN          cat
 *  IN          item
 *  IN          *pItem
 *  IN          *plength
 * RETURN
 *  void
 * GLOBALS AFFECTED
 *  SMLOBJ
 *******************************************************************************/ 
void sml_vzw_putItem(sml_vzw_cat_enum cat,
                     sml_ctx_enum item, 
                     void *pItem, 
                     kal_uint16 *plength,
                     kal_uint8 source)
{
    sml_vzw_sim_lock_context_struct *pObj = (sml_vzw_sim_lock_context_struct *) pSMLVZWg[source].pObj;

    switch (item)
    {
        case SML_VZW_RSU_MAJOR_VERSION:
            kal_mem_cpy(&(pObj->major_version), pItem, *plength);
            break;

        case SML_VZW_RSU_MINOR_VERSION:
            kal_mem_cpy(&(pObj->minor_version), pItem, *plength);
            break;

        case SML_VZW_RSU_PROTECTION_ALGORITHM:
            kal_mem_cpy(&(pObj->protection_algo), pItem, *plength);
            break;
            
        case SML_VZW_RSU_NETWORK_LOCK_OPERATION:
            kal_mem_cpy(&(pObj->nw_lock_op), pItem, *plength);
            break;

        case SML_VZW_RSU_SESSION_ID:
            kal_mem_cpy(pObj->session_id, pItem, *plength);
            break;

        case SML_VZW_RSU_TIME_STAMP:
            kal_mem_cpy(pObj->timestamp, pItem, *plength);
            break;

        case SML_VZW_RSU_CAT_CODE:
            switch(cat)
            {
                case SML_VZW_CAT_N:
                    kal_mem_cpy(pObj->nw_list, pItem, *plength);
                    break;

                case SML_VZW_CAT_NS:
                    kal_mem_cpy(pObj->ns_list, pItem, *plength);
                    break;

                case SML_VZW_CAT_SP:
                    kal_mem_cpy(pObj->sp_list, pItem, *plength);
                    break;

                case SML_VZW_CAT_EHPLMN:
                    kal_mem_cpy(pObj->ehplmn_list, pItem, *plength);
                    break;

                default:
                    /* do nothing */
                    break;
            }
            break;
        case SML_VZW_RSU_CAT_NUM:
            switch(cat)
            {
                case SML_VZW_CAT_N:
                    kal_mem_cpy(&(pObj->nw_num), pItem, *plength);
                    break;
        
                case SML_VZW_CAT_NS:
                    kal_mem_cpy(&(pObj->ns_num), pItem, *plength);
                    break;
        
                case SML_VZW_CAT_SP:
                    kal_mem_cpy(&(pObj->sp_num), pItem, *plength);
                    break;
        
                case SML_VZW_CAT_EHPLMN:
                    kal_mem_cpy(&(pObj->ehplmn_num), pItem, *plength);
                    break;
        
                default:
                    /* do nothing */
                    break;
            }
            break;
        default:
            break;
    }
}

#if defined(__VZW_RSU_LOCK_CODE_EXTEND_SUPPORT__)

/*******************************************************************************
 * FUNCTION  
 *  sml_vzwlc_give
 * DESCRIPTION
 *  This method copys the LID files read from NVRAM to the SML obj
 * PARAMETERS
 *  IN          * pLidToObj
 * RETURN
 *  void
 * GLOBALS AFFECTED
 *  SMLOBJ
*******************************************************************************/
void sml_vzwlc_give(void *pLidToObj, kal_uint8 source)
{
    sml_vzw_sim_lock_code_context_struct * pObj = NULL;
  
    if(NULL != pSMLVZWLCg[source].pObj)
    {
        pSMLVZWLCg[source].pObj = NULL;   
    }
       
    pObj = &(sml_vzwlc_cntxt_obj[source]);
    
    kal_mem_cpy(pObj,
                pLidToObj,
                sizeof(sml_vzw_sim_lock_code_context_struct)
                ); 
   
    pSMLVZWLCg[source].pObj = pObj;
}

/*******************************************************************************
 * FUNCTION  
 *  sml_vzwlc_take
 * DESCRIPTION
 *  This method copys the contex of the SML object to the provided NVRAM LID.
 * PARAMETERS
 *  OUT         * pObjToLid
 * RETURN
 *  void
 * GLOBALS AFFECTED
 *  SMLOBJ
 *******************************************************************************/
void sml_vzwlc_take( void *pObjToLid, kal_uint8 source )
{
    sml_vzw_sim_lock_code_context_struct * pObj = (sml_vzw_sim_lock_code_context_struct *) pSMLVZWLCg[source].pObj;

    kal_mem_cpy(pObjToLid,
                pObj,
                sizeof(sml_vzw_sim_lock_code_context_struct)
                );
}

/*******************************************************************************
 * FUNCTION  
 *  sml_vzwlc_destory
 * DESCRIPTION
 *  This method free the SML object in memory if it is not used.
 * PARAMETERS
 *  void
 * RETURN
 *  void
 * GLOBALS AFFECTED
 *  SMLOBJ
 *******************************************************************************/    
void sml_vzwlc_destory(kal_uint8 source)
{
    pSMLVZWLCg[source].pObj = NULL;
}

/*******************************************************************************
 * FUNCTION  
 *  sml_vzwlc_Load
 * DESCRIPTION
 *  This function loads the SML obj from NVRAM LID (NVRAM_READ_CNF)
 * PARAMETERS
 *  IN          pLid
 * RETURN
 *  kal_uint16  Obj size
 * GLOBALS AFFECTED
 *  SMLOBJ
 *******************************************************************************/ 
kal_uint16 sml_vzwlc_Load( void *pLid, kal_uint8 source )
{
    nvram_ef_sml_vzw_sim_lock_code_obj_struct *p = &pSMLVZWLCg[source];

    kal_uint16 length = sizeof(sml_vzw_sim_lock_code_context_struct);

    /* Clean the old ones */
    (*p->destory)(source);

    /* Load the new one */
    (*p->give)(pLid, source);

    return length;
}

/*******************************************************************************
 * FUNCTION  
 *  sml_vzwlc_Save
 * DESCRIPTION
 *  This function saves the SML obj to NVRAM LID (NVRAM_WRITE_REQ)
 * PARAMETERS
 *  OUT          pLid
 * RETURN
 *  kal_uint16  Obj size
 * GLOBALS AFFECTED
 *  SMLOBJ
 *******************************************************************************/ 
kal_uint16 sml_vzwlc_Save( void *pLid, kal_uint8 source )
{

    nvram_ef_sml_vzw_sim_lock_code_obj_struct *p = &pSMLVZWLCg[source];

    kal_uint16 length = sizeof(sml_vzw_sim_lock_code_context_struct);

    (*p->take)(pLid, source);

    return length;  
}

/*******************************************************************************
 * FUNCTION  
 *  sml_vzwlc_getItem
 * DESCRIPTION
 *  This method returns the structure pointer and length of the structure
 *  of the desired SML object items.
 * PARAMETERS
 *  IN          cat
 *  IN          item
 *  OUT         *length
 * RETURN
 *  void *
 * GLOBALS AFFECTED
 *  SMLOBJ
 *******************************************************************************/
void * sml_vzwlc_getItem(sml_vzw_cat_enum category, 
                              sml_ctx_enum item, 
                              kal_uint16 *plength,
                              kal_uint8 source)
{
    sml_vzw_sim_lock_code_context_struct *pObj = (sml_vzw_sim_lock_code_context_struct *) pSMLVZWLCg[source].pObj;

    ASSERT(NULL != pObj);

    switch(item)
    {
        case SML_VZW_RSU_CAT_CODE:
            switch(category)
            {
                case SML_VZW_CAT_SP:
                    *plength = SML_VZW_RSU_SP_LIST_EXTND_LEN;
                    return (kal_uint8 *) &(pObj->sp_list[0]);
                    break;

                case SML_VZW_CAT_EHPLMN:
                    *plength = SML_VZW_RSU_EHPLMN_LIST_EXTND_LEN;
                    return (kal_uint8 *) &(pObj->ehplmn_list[0]);
                    break;

                default:
                    /* do nothing */
                    break;
            }
            break;
        case SML_VZW_RSU_CAT_NUM:
            switch(category)
            {    
                case SML_VZW_CAT_SP:
                    *plength = sizeof(kal_uint8);
                    return (kal_uint8 *) &(pObj->sp_num);
                    break;
        
                case SML_VZW_CAT_EHPLMN:
                    *plength = sizeof(kal_uint8);
                    return (kal_uint8 *) &(pObj->ehplmn_num);
                    break;
        
                default:
                    /* do nothing */
                    break;
            }
            break;
        default:
            break;   
    }

    return NULL;    
}

/*******************************************************************************
 * FUNCTION  
 *  sml_vzwlc_putItem
 * DESCRIPTION
 *  This method set the desired items of the SML object.
 * PARAMETERS
 *  IN          cat
 *  IN          item
 *  IN          *pItem
 *  IN          *plength
 * RETURN
 *  void
 * GLOBALS AFFECTED
 *  SMLOBJ
 *******************************************************************************/ 
void sml_vzwlc_putItem(sml_vzw_cat_enum cat,
                     sml_ctx_enum item, 
                     void *pItem, 
                     kal_uint16 *plength,
                     kal_uint8 source)
{
    sml_vzw_sim_lock_code_context_struct *pObj = (sml_vzw_sim_lock_code_context_struct *) pSMLVZWLCg[source].pObj;

	ASSERT(NULL != pObj);

    switch (item)
    {
        case SML_VZW_RSU_CAT_CODE:
            switch(cat)
            {
                case SML_VZW_CAT_SP:
                    kal_mem_cpy(pObj->sp_list, pItem, *plength);
                    break;

                case SML_VZW_CAT_EHPLMN:
                    kal_mem_cpy(pObj->ehplmn_list, pItem, *plength);
                    break;

                default:
                    /* do nothing */
                    break;
            }
            break;
        case SML_VZW_RSU_CAT_NUM:
            switch(cat)
            {       
                case SML_VZW_CAT_SP:
                    kal_mem_cpy(&(pObj->sp_num), pItem, *plength);
                    break;
        
                case SML_VZW_CAT_EHPLMN:
                    kal_mem_cpy(&(pObj->ehplmn_num), pItem, *plength);
                    break;
        
                default:
                    /* do nothing */
                    break;
            }
            break;
        default:
            break;
    }
}
#endif /* __VZW_RSU_LOCK_CODE_EXTEND_SUPPORT__ */

/*******************************************************************************
 * FUNCTION  
 *  sml_vzw_Catcode
 * DESCRIPTION
 *  This function is used to compose the code of each category
 * PARAMETERS
 *  IN          cat
 *  IN          *imsi
 *  IN          *vzw_gid1_len
 *  IN          *gid1
 *  IN          *ehplmn
 *  IN          mnc_len
 *  OUT          *code
 * RETURN
 *  kal_uint8   code length
 * GLOBALS AFFECTED
 *  NONE
 *******************************************************************************/ 
kal_uint8 sml_vzw_Catcode( sml_vzw_cat_enum cat,
                           kal_uint8 *imsi,
                           kal_uint8 vzw_gid1_len,
                           kal_uint8 *gid1,
                           kal_uint8 *ehplmn,
                           kal_uint8 mnc_len,
                           kal_uint8 *code )
{
    kal_uint8 i = 0;
    kal_uint8 gid1_start_pos = 7;
    kal_uint8 ehplmn_start_pos = (vzw_gid1_len < NUM_GID1)? (gid1_start_pos + vzw_gid1_len) : (gid1_start_pos + NUM_GID1);

    if (imsi == NULL)
    {
        return 0;
    }

    if(mnc_len == 3)
    {
        /* MCC/MNC */
        code[0] = ((imsi[1]&0xF0)>>4) + '0';
        code[1] = (imsi[2]&0x0F) + '0';
        code[2] = ((imsi[2]&0xF0)>>4) + '0';
        code[3] = (imsi[3]&0x0F) + '0';
        code[4] = ((imsi[3]&0xF0)>>4) + '0';
        code[5] = (imsi[4]&0x0F) + '0';
        code[6] = ((imsi[4]&0xF0)>>4) + '0';
        code[7] = (imsi[5]&0x0F) + '0';
    }
    else
    {
        /* MCC/MNC */
        code[0] = ((imsi[1]&0xF0)>>4) + '0';
        code[1] = (imsi[2]&0x0F) + '0';
        code[2] = ((imsi[2]&0xF0)>>4) + '0';
        code[3] = (imsi[3]&0x0F) + '0';
        code[4] = ((imsi[3]&0xF0)>>4) + '0';
        code[5] = 'F';
        code[6] = (imsi[4]&0x0F) + '0';
        code[7] = ((imsi[4]&0xF0)>>4) + '0';
    }

    switch(cat)
    {        
        case SML_VZW_CAT_N:
            return SML_VZW_RSU_NW_CODE_LEN;                    
        break;
        
        case SML_VZW_CAT_NS:
            return SML_VZW_RSU_NS_CODE_LEN;
        break;
        
        case SML_VZW_CAT_SP:
            if (NULL != gid1)
            {
                code[6] = vzw_gid1_len;
                /* GID */
                for (i = 0; (i < vzw_gid1_len) && (i < NUM_GID1); i++)
                {
                    code[gid1_start_pos+i] = gid1[i];
                }
                return gid1_start_pos + i;
            }
            else
            {
                return 0;
            }
        break;

        case SML_VZW_CAT_EHPLMN:
            if (NULL != gid1)
            {
                code[6] = vzw_gid1_len;
                /* Verizon use 8 bytes of GID1 */
                for (i = 0; (i < vzw_gid1_len) && (i < NUM_GID1); i++)
                {
                    code[gid1_start_pos+i] = gid1[i];
                }
            }
            else
            {
                return 0;
            }

            if (ehplmn != NULL)
            {
                if (*ehplmn == 0xff)
                {
                    return 0;
                }
                else
                {
                    /* EHPLMN format is :
                       MCC2|MCC1 MNC3(opt)|MCC3 MNC2|MNC1
                    */
                    code[ehplmn_start_pos] = (ehplmn[0]&0x0F) + '0';      //MCC1
                    code[ehplmn_start_pos+1] = ((ehplmn[0]&0xF0)>>4) + '0'; //MCC2
                    code[ehplmn_start_pos+2] = (ehplmn[1]&0x0F) + '0';      //MCC3
                    code[ehplmn_start_pos+3] = (ehplmn[2]&0x0F) + '0';      //MNC1
                    code[ehplmn_start_pos+4] = ((ehplmn[2]&0xF0)>>4) + '0'; //MNC2
                    
                    if ((ehplmn[1] & 0xF0) == 0xF0) //this EHPLMN mnc len = 2
                    {
                        code[ehplmn_start_pos+5] = 0xFF;
                    }
                    else
                    {
                        code[ehplmn_start_pos+5] = ((ehplmn[1] & 0xF0)>>4) + '0'; //MNC3
                    }
                    return ehplmn_start_pos + 6;
                }
            }
            else
            {
                return 0;
            }
        break;

        default:
            
        break;
        
    }           

    return 0;
}

/*******************************************************************************
 * FUNCTION
 *  sml_vzw_GetCode
 * DESCRIPTION
 *  This function is used to compose the code of each category  whether 
 *  mnc length is 2 or 3
 * PARAMETERS
 *  cat             [IN]    category of the SIM-ME-Lock
 *  imsi            [IN]    imsi of the code source
 *  vzw_gid1_len    [IN]    gid1 lengh from VZW code
 *  gid1            [IN]    gid1 of the code source
 *  sim_mnc_len     [IN]    the mnc length decided by SIM
 *  pdata           [IN]    the saved code for comparing
 *  pdata_len       [IN]    the length of saved code for comparing
 *  code            [OUT]   the composed code according to all input parameters
 *
 * RETURN
 *  kal_uint16 file size
 * GLOBALS AFFECTED
 *  SMLSLOBJ
 *******************************************************************************/
kal_uint8 sml_vzw_GetCode( sml_vzw_cat_enum cat, 
                           kal_uint8 *imsi,
                           kal_uint8 vzw_gid1_len,
                           kal_uint8 *gid1,
                           kal_uint8 *ehplmn,
                           kal_uint8 sim_mnc_len, 
                           kal_uint8 *pdata,
                           kal_uint8 *pdata_len,
                           kal_uint8 *code)
{
    kal_uint8 mnc_len=0;

    if (SML_MNC_LENGTH_NEST == 1)
    {
        mnc_len = sim_mnc_len;
    }
    else
    {
        if (((*(pdata+5)) == 'F') || ((*(pdata+5)) == 'f'))
        {
            mnc_len = 2;
            *(pdata+5) = 'F';
        }
        else
        {
            mnc_len = 3;
        }
    }

    switch (cat)
    {
        case SML_VZW_CAT_N:
            *pdata_len = SML_VZW_RSU_NW_CODE_LEN;
            break;
        case SML_VZW_CAT_NS:
            *pdata_len = SML_VZW_RSU_NS_CODE_LEN;
            break;
        case SML_VZW_CAT_SP:
            *pdata_len = SML_VZW_RSU_NW_CODE_LEN + 1 + vzw_gid1_len;
            break;
        case SML_VZW_CAT_EHPLMN:
            *pdata_len = (SML_VZW_RSU_NW_CODE_LEN*2) + 1 + vzw_gid1_len;
            break;
        default:
            DEBUG_ASSERT(0);
            *pdata_len = 0;
    }
        
    return sml_vzw_Catcode(cat, imsi, vzw_gid1_len, gid1, ehplmn, mnc_len, code);
}

/*******************************************************************************
 * FUNCTION  
 *  sml_vzw_Check
 * DESCRIPTION
 *  This function is used to check if the code is in the Pass list
 * PARAMETERS
 *  IN          cat
 *  IN          *imsi
 *  IN          *gid1
 *  IN          ehplmn_num
 *  IN          *ehplmn_ptr
 *  IN          len
 *  IN          source
 * RETURN
 *  kal_bool
 * GLOBALS AFFECTED
 *  SMLOBJ
 *******************************************************************************/
kal_bool sml_vzw_Check( sml_vzw_cat_enum cat, 
                        kal_uint8 *imsi, 
                        kal_uint8 *gid1,
                        kal_uint16 ehplmn_num,
                        kal_uint8 *ehplmn_ptr,
                        kal_uint8 sim_mnc_len,
                        kal_uint8 source)
{
    nvram_ef_sml_vzw_sim_lock_obj_struct *p = &pSMLVZWg[source];
#ifdef __VZW_RSU_LOCK_CODE_EXTEND_SUPPORT__
	nvram_ef_sml_vzw_sim_lock_code_obj_struct *p_lc = &pSMLVZWLCg[source];
#endif
    kal_uint8 *num_list = NULL;
    kal_uint8 *list_data = NULL;
    kal_uint8 *vzw_code_ptr = NULL;
    kal_uint8 vzw_code_len = 0;
    kal_uint16 length = 0;
    kal_uint8 code[SML_VZW_RSU_EHPLMN_CODE_LEN] = {0}; //use ehplmn code len as max code len
    kal_uint8 code_len = 0;
    kal_uint8 vzw_gid1_len;
    kal_uint16 i = 0;
    kal_uint8 code_dbg_str[(SML_VZW_RSU_EHPLMN_CODE_LEN)*3 +1];
    kal_uint8 iter = 1; //iteration for EHPLMN Configuration, limited by MD1_MAX_NUM_HPLMN
    
    /* Check the integration of SIM Lock blob first */
    if (p->pObj== NULL)
    {
        SML_TRACE(TRACE_WARNING, WARNING_SML_CHECK_VALIDITY_FAILED);
    }
    else
    {
      #ifdef __VZW_RSU_LOCK_CODE_EXTEND_SUPPORT__
        if ((cat == SML_VZW_CAT_SP) || (cat == SML_VZW_CAT_EHPLMN))
        {
            if (p_lc->pObj== NULL)
	        {
	            SML_TRACE(TRACE_WARNING, WARNING_SML_CHECK_VALIDITY_FAILED);
			    return KAL_FALSE;
	        }
            num_list = (kal_uint8 *)(*p_lc->getItem)(cat, SML_VZW_RSU_CAT_NUM, &length, source);
        }
		else
	  #endif
        num_list = (kal_uint8 *)(*p->getItem)(cat, SML_VZW_RSU_CAT_NUM, &length, source);

        if (*num_list == 0)
        {
            // TODO: list is empty, always pass or blocked? currently is pass
            return KAL_TRUE;
        }
        else
        {
          #ifdef __VZW_RSU_LOCK_CODE_EXTEND_SUPPORT__
            if ((cat == SML_VZW_CAT_SP) || (cat == SML_VZW_CAT_EHPLMN))
            {
                list_data = (kal_uint8 *)(*p_lc->getItem)(cat, SML_VZW_RSU_CAT_CODE, &length, source);
            }
		    else
	      #endif
            list_data = (kal_uint8 *)(*p->getItem)(cat, SML_VZW_RSU_CAT_CODE, &length, source);
            vzw_code_ptr = list_data;
        }

        for (i = 0; i < *num_list; i++)
        {
            kal_uint8 *temp_ehplmn_ptr = ehplmn_ptr;

            if (SML_VZW_CAT_EHPLMN == cat)
            {
                iter = (ehplmn_num < MD1_MAX_NUM_HPLMN)? ehplmn_num : MD1_MAX_NUM_HPLMN;
            }
			else
			{
                iter = 1;
			}
            if ((SML_VZW_CAT_SP == cat) || (SML_VZW_CAT_EHPLMN == cat))
            {
                vzw_gid1_len = vzw_code_ptr[6];
            }
            else
            {
                vzw_gid1_len = 0;
            }

            while (iter > 0)
            {
                kal_uint8 j=0, k=0;
                
                iter--;
                
                code_len = sml_vzw_GetCode(cat, imsi, vzw_gid1_len, gid1, temp_ehplmn_ptr, sim_mnc_len, vzw_code_ptr, &vzw_code_len, code);
                if (iter >= 1)
                {
                    temp_ehplmn_ptr += 3; //for next iteration if more than one EHPLMN from SIM
                }
                while ((j < code_len) && (k < ((SML_VZW_RSU_EHPLMN_CODE_LEN)*3)))
                {
                    kal_uint8 temp_len;
                    
                    temp_len = (kal_uint16)kal_sprintf((char*)code_dbg_str + k, "%02x ", code[j]);
                    k += temp_len;
                    j++;
                }
                code_dbg_str[k] = '\0';
                kal_trace(TRACE_INFO, INFO_SMU_CHECK_LENGTH, code_len, vzw_code_len, sim_mnc_len);
                kal_trace(TRACE_INFO, INFO_SML_VZW_CODE_DEBUG, (kal_char*)code_dbg_str);

                /* we support dynamic comparing code length by using the code_len in stead of fixed length.
                   After that, vzw_code_ptr will shift according to each individual code length.
                   In addition, the VZW SIM Lock NVRAM structure is defined as max size.
                */
                if ((code_len > 0) && (kal_mem_cmp(code, vzw_code_ptr, code_len) == 0))
                {
                    return KAL_TRUE;
                }
                
                kal_mem_set(code, 0, SML_VZW_RSU_EHPLMN_CODE_LEN);
            }
            
            //shift to next code of the compared category
            vzw_code_ptr += vzw_code_len;
        }
    }

    return KAL_FALSE;
}

kal_bool sml_vzw_update_int_data(kal_uint8 source, sml_vzw_cat_enum cat, sml_ctx_enum type, kal_uint8 data)
{
    nvram_ef_sml_vzw_sim_lock_obj_struct *p = &pSMLVZWg[source];
	#ifdef __VZW_RSU_LOCK_CODE_EXTEND_SUPPORT__
	nvram_ef_sml_vzw_sim_lock_code_obj_struct *p_lc = &pSMLVZWLCg[source];
	#endif
    kal_uint16 length = sizeof(kal_uint8);

    /* Check the integration of SIM Lock blob first */
    if (p->pObj == NULL)
    {
        SML_TRACE(TRACE_WARNING, WARNING_SML_CHECK_VALIDITY_FAILED);
        return KAL_FALSE;
    }

#ifdef __VZW_RSU_LOCK_CODE_EXTEND_SUPPORT__
    if((cat == SML_VZW_CAT_SP) || (cat == SML_VZW_CAT_EHPLMN))
    {
        if (p_lc->pObj == NULL)
        {
            SML_TRACE(TRACE_WARNING, WARNING_SML_CHECK_VALIDITY_FAILED);
            return KAL_FALSE;
        }
		else
		{
		   (*p_lc->putItem)(cat, type, &data, &length, source);
		   return KAL_TRUE;
		}
    }
#endif

    (*p->putItem)(cat, type, &data, &length, source);

    return KAL_TRUE;
}

kal_bool sml_vzw_get_int_data(kal_uint8 source, sml_vzw_cat_enum cat, sml_ctx_enum type, kal_uint8* pData)
{
    nvram_ef_sml_vzw_sim_lock_obj_struct *p = &pSMLVZWg[source];
	#ifdef __VZW_RSU_LOCK_CODE_EXTEND_SUPPORT__
	nvram_ef_sml_vzw_sim_lock_code_obj_struct *p_lc = &pSMLVZWLCg[source];
	#endif
    kal_uint16 length;
    kal_bool ret_val = KAL_FALSE;

    /* Check the integration of SIM Lock blob first */
    if (p->pObj == NULL)
    {
        SML_TRACE(TRACE_WARNING, WARNING_SML_CHECK_VALIDITY_FAILED);
    }
    else
    {
      #ifdef __VZW_RSU_LOCK_CODE_EXTEND_SUPPORT__
	    if ((cat == SML_VZW_CAT_SP) || (cat == SML_VZW_CAT_EHPLMN))
        {
            if(p_lc->pObj== NULL)
	        {
	            SML_TRACE(TRACE_WARNING, WARNING_SML_CHECK_VALIDITY_FAILED);
			    return KAL_FALSE;
	        }
            *pData = *((kal_uint8 *)(*p_lc->getItem)(cat, type, &length, source));
        }
		else
	  #endif
        *pData = *((kal_uint8 *)(*p->getItem)(cat, type, &length, source));

        if (length == sizeof(kal_uint8))
        {
            ret_val = KAL_TRUE;
        }
        else
        {
            SML_TRACE(TRACE_WARNING, WARNING_SML_VZW_RSU_GET_INT_DATA_FAILED, cat, type);
        }
    }
    
    return ret_val;
}

kal_bool sml_vzw_update_array_data(kal_uint8 source, sml_vzw_cat_enum cat, sml_ctx_enum type, kal_uint8* data, kal_uint16 data_len)
{
    nvram_ef_sml_vzw_sim_lock_obj_struct *p = &pSMLVZWg[source];
    #ifdef __VZW_RSU_LOCK_CODE_EXTEND_SUPPORT__
	nvram_ef_sml_vzw_sim_lock_code_obj_struct *p_lc = &pSMLVZWLCg[source];
    #endif

    /* Check the integration of SIM Lock blob first */
    if (p->pObj == NULL)
    {
        SML_TRACE(TRACE_WARNING, WARNING_SML_CHECK_VALIDITY_FAILED);
        return KAL_FALSE;
    }

#ifdef __VZW_RSU_LOCK_CODE_EXTEND_SUPPORT__
	if ((cat == SML_VZW_CAT_SP) || (cat == SML_VZW_CAT_EHPLMN))
	{
        if(p_lc->pObj== NULL)
		{
		    SML_TRACE(TRACE_WARNING, WARNING_SML_CHECK_VALIDITY_FAILED);
			return KAL_FALSE;
		}
		(*p_lc->putItem)(cat, type, data, &data_len, source);
	}
	else
#endif
    (*p->putItem)(cat, type, data, &data_len, source);

    return KAL_TRUE;
}

kal_bool sml_vzw_get_array_data(kal_uint8 source, sml_vzw_cat_enum cat, sml_ctx_enum type, kal_uint8* data, kal_uint16* data_len)
{
    nvram_ef_sml_vzw_sim_lock_obj_struct *p = &pSMLVZWg[source];
	#ifdef __VZW_RSU_LOCK_CODE_EXTEND_SUPPORT__
	nvram_ef_sml_vzw_sim_lock_code_obj_struct *p_lc = &pSMLVZWLCg[source];
    #endif
    kal_uint8* pData = NULL;

    /* Check the integration of SIM Lock blob first */
    if (p->pObj == NULL)
    {
        SML_TRACE(TRACE_WARNING, WARNING_SML_CHECK_VALIDITY_FAILED);
        return KAL_FALSE;
    }
	
#ifdef __VZW_RSU_LOCK_CODE_EXTEND_SUPPORT__
	if ((cat == SML_VZW_CAT_SP) || (cat == SML_VZW_CAT_EHPLMN))
	{
		if(p_lc->pObj== NULL)
		{
			SML_TRACE(TRACE_WARNING, WARNING_SML_CHECK_VALIDITY_FAILED);
			return KAL_FALSE;
		}
		pData = (kal_uint8 *)(*p_lc->getItem)(cat, type, data_len, source);
	}
	else
#endif
    pData = (kal_uint8 *)(*p->getItem)(cat, type, data_len, source);

    kal_mem_cpy(data, pData, *data_len);
    
    return KAL_TRUE;
}

kal_uint8 sml_vzw_get_major_version(kal_uint8 source)
{
    nvram_ef_sml_vzw_sim_lock_obj_struct *p = &pSMLVZWg[source];
    kal_uint8 *pMajor_ver = NULL;
    kal_uint16 length = 0;

    /* Check the integration of SIM Lock blob first */
    if (p->pObj == NULL)
    {
        SML_TRACE(TRACE_WARNING, WARNING_SML_CHECK_VALIDITY_FAILED);
        return KAL_FALSE;
    }

    pMajor_ver = (kal_uint8 *)(*p->getItem)(SML_VZW_CAT_NONE, SML_VZW_RSU_MAJOR_VERSION, &length, source);

    return *pMajor_ver;
}

kal_uint8 sml_vzw_get_max_support_major_version()
{
    return SML_VZW_RSU_MAX_SUPPORT_MAJOR_VER;
}

kal_uint8 sml_vzw_get_minor_version(kal_uint8 source)
{
    nvram_ef_sml_vzw_sim_lock_obj_struct *p = &pSMLVZWg[source];
    kal_uint8 *pMinor_ver = NULL;
    kal_uint16 length = 0;

    /* Check the integration of SIM Lock blob first */
    if (p->pObj == NULL)
    {
        SML_TRACE(TRACE_WARNING, WARNING_SML_CHECK_VALIDITY_FAILED);
        return KAL_FALSE;
    }

    pMinor_ver = (kal_uint8 *)(*p->getItem)(SML_VZW_CAT_NONE, SML_VZW_RSU_MINOR_VERSION, &length, source);

    return *pMinor_ver;
}

kal_uint8 sml_vzw_get_max_support_minor_version()
{
    return SML_VZW_RSU_MAX_SUPPORT_MINOR_VER;
}

extern const nvram_sml_vzw_sim_lock_context_struct NVRAM_EF_SML_VZW_SIM_LOCK_DEFAULT;
#ifdef __VZW_RSU_LOCK_CODE_EXTEND_SUPPORT__
extern const nvram_sml_vzw_sim_lock_code_context_struct NVRAM_EF_L4_SML_VZW_SIM_LOCK_CODE_DEFAULT;
#endif
kal_bool sml_vzw_reset_rsu_data(kal_uint8 source)
{
    nvram_ef_sml_vzw_sim_lock_obj_struct* p = &pSMLVZWg[source];
    sml_vzw_sim_lock_context_struct* pDefaultBlob = (sml_vzw_sim_lock_context_struct*)&NVRAM_EF_SML_VZW_SIM_LOCK_DEFAULT;
#ifdef __VZW_RSU_LOCK_CODE_EXTEND_SUPPORT__
	sml_vzw_sim_lock_code_context_struct* pDefaultLockCode = (sml_vzw_sim_lock_code_context_struct*)&NVRAM_EF_L4_SML_VZW_SIM_LOCK_CODE_DEFAULT;
#endif
    /* Check the integration of SIM Lock blob first */
    if (p->pObj == NULL)
    {
        SML_TRACE(TRACE_WARNING, WARNING_SML_CHECK_VALIDITY_FAILED);
        return KAL_FALSE;
    }

    // Set Network Lock
    sml_vzw_update_int_data(source, SML_VZW_CAT_NONE, SML_VZW_RSU_NETWORK_LOCK_OPERATION, SML_VZW_LOCK_STATE_LOCK);

    // Reset NW Configuration
    sml_vzw_update_int_data(source, SML_VZW_CAT_N, SML_VZW_RSU_CAT_NUM, pDefaultBlob->nw_num);
    sml_vzw_update_array_data(source, SML_VZW_CAT_N, SML_VZW_RSU_CAT_CODE, pDefaultBlob->nw_list, SML_VZW_RSU_NW_LIST_LEN);

    // Reset NS Configuration
    sml_vzw_update_int_data(source, SML_VZW_CAT_NS, SML_VZW_RSU_CAT_NUM, pDefaultBlob->ns_num);
    sml_vzw_update_array_data(source, SML_VZW_CAT_NS, SML_VZW_RSU_CAT_CODE, pDefaultBlob->ns_list, SML_VZW_RSU_NS_LIST_LEN);

#ifdef __VZW_RSU_LOCK_CODE_EXTEND_SUPPORT__
    // Reset SP Configuration
    sml_vzw_update_int_data(source, SML_VZW_CAT_SP, SML_VZW_RSU_CAT_NUM, pDefaultLockCode->sp_num);
    sml_vzw_update_array_data(source, SML_VZW_CAT_SP, SML_VZW_RSU_CAT_CODE, pDefaultLockCode->sp_list, SML_VZW_RSU_SP_LIST_EXTND_LEN);

    // Reset EHPLMN Configuration
    sml_vzw_update_int_data(source, SML_VZW_CAT_EHPLMN, SML_VZW_RSU_CAT_NUM, pDefaultLockCode->ehplmn_num);
    sml_vzw_update_array_data(source, SML_VZW_CAT_EHPLMN, SML_VZW_RSU_CAT_CODE, pDefaultLockCode->ehplmn_list, SML_VZW_RSU_EHPLMN_LIST_EXTND_LEN);
#else
    // Reset SP Configuration
    sml_vzw_update_int_data(source, SML_VZW_CAT_SP, SML_VZW_RSU_CAT_NUM, pDefaultBlob->sp_num);
    sml_vzw_update_array_data(source, SML_VZW_CAT_SP, SML_VZW_RSU_CAT_CODE, pDefaultBlob->sp_list, SML_VZW_RSU_SP_LIST_LEN);

    // Reset EHPLMN Configuration
    sml_vzw_update_int_data(source, SML_VZW_CAT_EHPLMN, SML_VZW_RSU_CAT_NUM, pDefaultBlob->ehplmn_num);
    sml_vzw_update_array_data(source, SML_VZW_CAT_EHPLMN, SML_VZW_RSU_CAT_CODE, pDefaultBlob->ehplmn_list, SML_VZW_RSU_EHPLMN_LIST_LEN);
#endif

    return KAL_TRUE;
}

#endif /* __VZW_RSU_SUPPORT__ */
