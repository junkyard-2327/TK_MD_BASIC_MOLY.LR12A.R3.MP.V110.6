/*****************************************************************************
 *
 * Filename:
 * ---------
 * custom_sml.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *  This is the file for SIM ME Lock customization
 *
 * Author:
 * -------
 * -------
 ****************************************************************************/
#ifndef CUSTOM_SML_H
#define CUSTOM_SML_H

#include "kal_general_types.h"
#include "ps_public_enum.h"
#include "sim_ps_enum.h"

#ifdef __VZW_RSU_SUPPORT__
#define SML_VZW_RSU_TIME_STAMP_LEN    8
#define SML_VZW_RSU_NW_CODE_LEN       6     /* 123-456 */
#define SML_VZW_RSU_NW_LIST_LEN      SML_VZW_RSU_NW_CODE_LEN * 5 /* 5 sets */
#define SML_VZW_RSU_NS_CODE_LEN       8     /* 123-456-78 */
#define SML_VZW_RSU_NS_LIST_LEN      SML_VZW_RSU_NS_CODE_LEN * 5 
#define SML_VZW_RSU_SP_CODE_LEN      7+NUM_GID1     /* 123-456-8-00000000 */
#define SML_VZW_RSU_SP_LIST_LEN      SML_VZW_RSU_SP_CODE_LEN * 4
#define SML_VZW_RSU_EHPLMN_CODE_LEN  13+NUM_GID1  /* 123-456-8-00000000-123-456 */
#define SML_VZW_RSU_EHPLMN_LIST_LEN  SML_VZW_RSU_EHPLMN_CODE_LEN * 5
#define SML_VZW_RSU_SESSION_ID_LEN    8
#define SML_VZW_RSU_SIZE_OF_MCC_MNC   6
#define SML_VZW_RSU_SIZE_OF_GID       9
#define SML_VZW_RSU_SIZE_OF_EHPLMN    6
#define SML_VZW_RSU_MAX_SUPPORT_MAJOR_VER   1
#define SML_VZW_RSU_MAX_SUPPORT_MINOR_VER   0
#ifdef __VZW_RSU_LOCK_CODE_EXTEND_SUPPORT__
/* ALPS04971646: The below New Macros defined for the SP & EHPLMN category lock Code LIST length due to below reasons.
 * 1. The previously defined Macros(SML_VZW_RSU_SP_CODE_LEN & SML_VZW_RSU_EHPLMN_CODE_LEN) format not correct.(Expression without Paranthesis)
 *    As a result SML_VZW_RSU_SP_LIST_LEN & SML_VZW_RSU_EHPLMN_LIST_LEN incorreclty calculated.
 * 2. At this point of time this Macro correction can not be done to increse the length.
 *    Becasue VZW SIM LOCK LID used the FAULT_ASSERT Attribute.
 *    If the Correction done for the Macro's, it causes the increment of NVRAM LID Length,
 *    which causes the ASSERT during OTA Update based on NVRAM Attribute.
 */
#define SML_VZW_RSU_SP_LIST_EXTND_LEN      (SML_VZW_RSU_SP_CODE_LEN) * 4
#define SML_VZW_RSU_EHPLMN_LIST_EXTND_LEN  (SML_VZW_RSU_EHPLMN_CODE_LEN) * 5
#endif

typedef struct {
    kal_uint8   major_version;
    kal_uint8   minor_version;
    kal_uint8   protection_algo;
    kal_uint8   nw_lock_op;
    kal_uint8   timestamp[SML_VZW_RSU_TIME_STAMP_LEN];
    kal_uint8   nw_num;
    kal_uint8   nw_list[SML_VZW_RSU_NW_LIST_LEN];
    kal_uint8   ns_num;
    kal_uint8   ns_list[SML_VZW_RSU_NS_LIST_LEN];
    kal_uint8   sp_num;
    kal_uint8   sp_list[SML_VZW_RSU_SP_LIST_LEN];
    kal_uint8   ehplmn_num;
    kal_uint8   ehplmn_list[SML_VZW_RSU_EHPLMN_LIST_LEN];
    kal_uint8   session_id[SML_VZW_RSU_SESSION_ID_LEN];
} sml_vzw_sim_lock_context_struct;
typedef sml_vzw_sim_lock_context_struct nvram_sml_vzw_sim_lock_context_struct;

typedef struct {
    kal_uint8 device_key[32]; //a unique 32-byte Device Key, which is used to calculate HMAC of a Network Lock Request message
} sml_vzw_sim_lock_device_key_struct;
typedef sml_vzw_sim_lock_device_key_struct nvram_sml_vzw_sim_lock_device_key_struct;

typedef struct {
    kal_uint16 delay_timer; //ranging from 0-10 minutes, default is 2 minutes
} sml_vzw_rsu_delay_timer_struct;

#ifdef __VZW_RSU_LOCK_CODE_EXTEND_SUPPORT__
typedef struct {
    kal_uint8   sp_num;
    kal_uint8   sp_list[SML_VZW_RSU_SP_LIST_EXTND_LEN];
    kal_uint8   ehplmn_num;
    kal_uint8   ehplmn_list[SML_VZW_RSU_EHPLMN_LIST_EXTND_LEN];
} sml_vzw_sim_lock_code_context_struct;
typedef sml_vzw_sim_lock_code_context_struct nvram_sml_vzw_sim_lock_code_context_struct;
#endif

typedef enum {
    SML_VZW_RSU_MSG_TYPE_INVALID        = 0,
    SML_VZW_RSU_MSG_TYPE_REQUEST        = 1,
    SML_VZW_RSU_MSG_TYPE_STATUS         = 2,
} sml_vzw_rsu_msg_type_enum;

typedef enum {
    SML_VZW_LOCK_STATE_LOCK        = 0,
    SML_VZW_LOCK_STATE_UNLOCK      = 1,
    SML_VZW_LOCK_STATE_TEMP_UNLOCK = 2,
} sml_vzw_lock_state_enum;

typedef enum {
    SML_VZW_CAT_NONE,
    SML_VZW_CAT_N,
    SML_VZW_CAT_NS,
    SML_VZW_CAT_SP,
    SML_VZW_CAT_EHPLMN,
    SML_VZW_CAT_SIZE
} sml_vzw_cat_enum;

typedef enum {
    SML_VZW_RSU_STATUS_SUCCESS           = 0,
    SML_VZW_RSU_STATUS_GENERIC_ERROR     = 1,
    SML_VZW_RSU_STATUS_BLOB_TOO_SHORT    = 2,
    SML_VZW_RSU_STATUS_SIGNATURE_FAILED  = 3,
    SML_VZW_RSU_STATUS_RESERVE           = 4,
    SML_VZW_RSU_STATUS_IMEI_FAILED       = 5,
    SML_VZW_RSU_STATUS_BLOB_FRESHNESS_CHECK_FAILED = 6,
} sml_vzw_rsu_status_enum;

typedef struct {
    void    * pObj;
    void    (* give)(void * /* pLidToObj */, kal_uint8);
    void    (* take)(void * /* pObjToLid */, kal_uint8);
    void    (* destory)(kal_uint8);
    void    * (* getItem)(sml_vzw_cat_enum,sml_ctx_enum,kal_uint16 * /* length */, kal_uint8);
    void    (* putItem)(sml_vzw_cat_enum,sml_ctx_enum,void * /* pItem */, kal_uint16 * /* plen */, kal_uint8);
} nvram_ef_sml_vzw_sim_lock_obj_struct;

extern kal_bool custom_sml_vzw_is_test_purpose(void);

extern kal_uint16 sml_vzw_Load( void *pLid, kal_uint8 source );
extern kal_uint16 sml_vzw_Save( void *pLid, kal_uint8 source );
extern kal_bool sml_vzw_Check( sml_vzw_cat_enum cat, 
                        kal_uint8 *imsi, 
                        kal_uint8 *gid1,
                        kal_uint16 ehplmn_num,
                        kal_uint8 *ehplmn,
                        kal_uint8 sim_mnc_len,
                        kal_uint8 source);
extern kal_uint8 sml_vzw_get_major_version(kal_uint8 source);
extern kal_uint8 sml_vzw_get_minor_version(kal_uint8 source);
extern kal_uint8 sml_vzw_get_max_support_major_version();
extern kal_uint8 sml_vzw_get_max_support_minor_version();
extern kal_bool sml_vzw_update_int_data(kal_uint8 source, sml_vzw_cat_enum cat, sml_ctx_enum type, kal_uint8 data);
extern kal_bool sml_vzw_get_int_data(kal_uint8 source, sml_vzw_cat_enum cat, sml_ctx_enum type, kal_uint8* pData);
extern kal_bool sml_vzw_update_array_data(kal_uint8 source, sml_vzw_cat_enum cat, sml_ctx_enum type, kal_uint8* data, kal_uint16 data_len);
extern kal_bool sml_vzw_get_array_data(kal_uint8 source, sml_vzw_cat_enum cat, sml_ctx_enum type, kal_uint8* data, kal_uint16* data_len);
extern kal_bool sml_vzw_reset_rsu_data(kal_uint8 source);

extern void sml_vzw_give( void * pLidToObj, kal_uint8 source );
extern void sml_vzw_take( void * pObjToLid, kal_uint8 source );
extern void sml_vzw_destory( kal_uint8 source );
extern void *sml_vzw_getItem(sml_vzw_cat_enum cat, 
                           sml_ctx_enum item, 
                           kal_uint16 * plength,
                           kal_uint8 source);
extern void sml_vzw_putItem( sml_vzw_cat_enum cat, 
                         sml_ctx_enum item, 
                         void * pItem, 
                         kal_uint16 * plength,
                         kal_uint8 source);

extern nvram_ef_sml_vzw_sim_lock_obj_struct *pSMLVZWg;

#ifdef __VZW_RSU_LOCK_CODE_EXTEND_SUPPORT__

typedef struct {
    void    * pObj;
    void    (* give)(void * /* pLidToObj */, kal_uint8);
    void    (* take)(void * /* pObjToLid */, kal_uint8);
    void    (* destory)(kal_uint8);
    void    * (* getItem)(sml_vzw_cat_enum,sml_ctx_enum,kal_uint16 * /* length */, kal_uint8);
    void    (* putItem)(sml_vzw_cat_enum,sml_ctx_enum,void * /* pItem */, kal_uint16 * /* plen */, kal_uint8);
} nvram_ef_sml_vzw_sim_lock_code_obj_struct;

extern kal_uint16 sml_vzwlc_Load( void *pLid, kal_uint8 source );
extern kal_uint16 sml_vzwlc_Save( void *pLid, kal_uint8 source );

extern void sml_vzwlc_give( void * pLidToObj, kal_uint8 source );
extern void sml_vzwlc_take( void * pObjToLid, kal_uint8 source );
extern void sml_vzwlc_destory( kal_uint8 source );
extern void *sml_vzwlc_getItem(sml_vzw_cat_enum cat, 
                           sml_ctx_enum item, 
                           kal_uint16 * plength,
                           kal_uint8 source);
extern void sml_vzwlc_putItem( sml_vzw_cat_enum cat, 
                         sml_ctx_enum item, 
                         void * pItem, 
                         kal_uint16 * plength,
                         kal_uint8 source);

extern nvram_ef_sml_vzw_sim_lock_code_obj_struct *pSMLVZWLCg;
#endif /* VZW_RSU_LOCK_CODE_EXTEND_SUPPORT */

#endif /* __VZW_RSU_SUPPORT__ */

#endif /* CUSTOM_SML_H */
