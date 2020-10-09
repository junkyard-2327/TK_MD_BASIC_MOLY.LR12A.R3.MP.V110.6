/*******************************************************************************
* CCCI SHM BM
*******************************************************************************/
//CCCI_SHM_BM IT option
//#define CCCI_SHM_BM_IT_OPTION

//CCCI_SHM_BM AP IT option
//#define CCCI_SHM_BM_AP_IT_OPTION

#ifndef _CCCI_SHM_BM_IF_H
#define _CCCI_SHM_BM_IF_H

#define CCIF_NOTIFY_CHANNEL 7

typedef enum
{
    CCCI_SHM_BM_USER_DHL1,
	CCCI_SHM_BM_USER_DHL2,
	CCCI_SHM_BM_USER_DHL3,
	CCCI_SHM_BM_USER_DHL4,
	CCCI_SHM_BM_USER_DHL5,
	CCCI_SHM_BM_USER_DHL6,
	CCCI_SHM_BM_USER_DHL7,
	CCCI_SHM_BM_USER_DHL8,
	CCCI_SHM_BM_USER_DHL9,
	CCCI_SHM_BM_USER_DHL10,
	CCCI_SHM_BM_USER_DHL11,
	CCCI_SHM_BM_USER_DHL12,
	CCCI_SHM_BM_USER_DHL13,
	CCCI_SHM_BM_USER_DHL14,
	CCCI_SHM_BM_USER_DHL15,
	CCCI_SHM_BM_USER_DHL16,
	CCCI_SHM_BM_USER_DHL17,
	CCCI_SHM_BM_USER_DHL18,
	CCCI_SHM_BM_USER_DHL19,
	CCCI_SHM_BM_USER_DHL20,
    CCCI_SHM_BM_USER_CNT
}CCCI_SHM_BM_USER_BUFF_ENUM;

typedef enum
{
	CCCI_SHM_BM_BUFF_INVALID,
    CCCI_SHM_BM_BUFF_HW,
	CCCI_SHM_BM_BUFF_SW,
	CCCI_SHM_BM_BUFF_EXP,
	CCCI_SHM_BM_BUFF_HW_STOP_CALLBACK,
	CCCI_SHM_BM_TYPE_CNT
}CCCI_SHM_BM_BUFF_TYPE_ENUM;


// user must configure befure using
typedef enum
{
	MODULE_ID,
	BUFFER_TYPE,
	PAGE_SIZE_DL,
	PAGE_SIZE_UL,
	BUFFER_SIZE_DL,
	BUFFER_SIZE_UL,	
	PAGE_COUNT_DL,
	PAGE_COUNT_UL,
	CONF_ATTRIBUTE_NUM
}CCCI_SHM_BM_USER_CONF_ENUM;

typedef enum
{
    CCCI_SHM_BM_DL_MD2AP,
    CCCI_SHM_BM_UL_AP2MD
}CCCI_SHM_BM_DIRECTION;


typedef struct CCCI_SHM_BM_ILM_LOCAL_PARA_T_STRUCT
{
    LOCAL_PARA_HDR
    kal_uint32  user_id;
} CCCI_SHM_BM_ILM_LOCAL_PARA_T;


#if defined (__MTK_TARGET__)
//user ID -> {Rx module ID, buffer type, DL page size(AP), UL page size(AP), DL buffer size(AP), UL buffer size(AP)}
//buffer and page size need to 8-byte align
extern kal_uint32 ccci_shm_bm_conf_table [CCCI_SHM_BM_USER_CNT][CONF_ATTRIBUTE_NUM];
#endif


void ccci_shmctrl_timer_cb();
//for ut
kal_uint32* ccci_shm_move_ctrl_ptr_one_page(kal_uint32 user_id, kal_uint32* buff_ptr, kal_bool is_dl);
kal_uint32* ccci_shm_page_num_to_addr(kal_uint32 user_id, kal_uint32 cur_page_num, kal_bool is_dl);
kal_uint32 ccci_shm_move_ctrl_ptr_one_page_number(kal_uint32 user_id, kal_uint32 cur_page_num, kal_bool is_dl);


//void ccci_shmctrl_ior_ul_cb(CCCI_CHANNEL_T channel, ccci_io_request_t* ior);
kal_bool ccci_shm_srv_init();
kal_bool ccci_shm_srv_write_notity(kal_uint32 user_id);

typedef void (*CCCI_SHM_BM_TX_CALLBACK)(kal_uint32* address, kal_uint32 size);  //HW Tx call back function

/***********************************User API*********************************************/
#if defined(__CCISMCORE_SUPPORT__) && defined (__MTK_TARGET__)

kal_bool ccci_shm_srv_buf_register(kal_uint32 user_id, CCCI_SHM_BM_TX_CALLBACK funp);
kal_bool ccci_shm_srv_write_alloc(kal_uint32 user_id, kal_uint32** address, kal_uint32* size);
kal_bool ccci_shm_srv_write_done(kal_uint32 user_id, kal_uint32* address, kal_uint32 length);
kal_bool ccci_shm_srv_read_get(kal_uint32 user_id, kal_uint32** address, kal_uint32* size);
kal_bool ccci_shm_srv_read_done(kal_uint32 user_id);
kal_bool ccci_shm_srv_get_hw_buffer_info(kal_uint32 user_id, kal_uint32** address, kal_uint32* size);
kal_bool ccci_shm_srv_query_buff_status(kal_uint32 user_id);
kal_uint32 ccci_shm_srv_query_page_size(kal_uint32 user_id, kal_bool is_dl);
kal_uint32 ccci_shm_srv_query_page_count(kal_uint32 user_id, kal_bool is_dl);
kal_uint32 ccci_shm_srv_query_page_status (kal_uint32 user_id, kal_uint32* address, kal_bool is_dl); //address not include page header
kal_uint32 ccci_shm_srv_query_to_be_read_page_count(kal_uint32 user_id, kal_bool is_dl);//write done but not read done
kal_bool ccci_shm_srv_poll_buff(kal_uint32 user_id, kal_uint32 time_out, kal_bool is_dl);//check if all pages are read with timeout
kal_bool ccci_shm_srv_unlock_read_ilm(kal_uint32 user_id);
void ccci_shm_srv_stop_callback(kal_uint32 user_id);
void ccci_shm_srv_start_callback(kal_uint32 user_id);
kal_bool ccci_shm_srv_write_alloc_single_usr(kal_uint32 user_id, kal_uint32** address, kal_uint32* size);
kal_bool ccci_shm_srv_write_done_single_usr(kal_uint32 user_id, kal_uint32* address, kal_uint32 length);
void ccci_shm_srv_get_data_shm_total_size(kal_uint32 *p_memsize);
void ccci_shm_srv_get_data_shm_user_size(kal_uint32 user_id, CCCI_SHM_BM_DIRECTION dir, kal_uint32 *p_memsize);


//Exception
kal_bool ccci_shm_srv_init_ex();
kal_bool ccci_shm_bm_send_notify_ex(kal_uint32 user_id);
kal_bool ccci_shm_bm_free_dl_pages_ex(kal_uint32 user_id);

kal_bool ccci_shm_srv_write_alloc_ex(kal_uint32 user_id, kal_uint32** address, kal_uint32* size);// : called by user to check and get the write address in SHM buffer
kal_bool ccci_shm_srv_write_done_ex(kal_uint32 user_id, kal_uint32* address, kal_uint32 length);//: called by user for write done notification
kal_bool ccci_shm_srv_read_get_ex(kal_uint32 user_id, kal_uint32** address, kal_uint32* size);//: called by user to get the readable data from SHM buffer
kal_bool ccci_shm_srv_read_done_ex(kal_uint32 user_id);//: called by user for read done notification to free buffer
//kal_uint32 ccci_shm_srv_query_written_page_count_ex(kal_uint32 user_id, kal_bool is_dl);//all wirte done(including read), not including allocated
kal_bool ccci_shm_srv_get_written_page_ex(kal_uint32 user_id, kal_uint32 page_num, kal_uint32** address, kal_uint32* size, kal_bool is_dl);//get written page, not including allocated

//API can both used in exception mode and normal mode
void ccci_shm_srv_reset_read_page_ex(kal_uint32 user_id);
void ccci_shm_srv_reset_write_page_ex(kal_uint32 user_id);
/********************internal**********************/
//void ccci_shm_bm_chk_is_active(kal_uint32 user_id, CCCI_SHM_BM_USER_BUFF_T* user_buff);
kal_bool ccci_shm_bm_send_notify(kal_uint32 user_id);
void ccci_shm_bm_stop_timer();
void ccci_shm_bm_start_timer();
void ccci_shm_bm_restart_timer();
#endif



kal_bool ccci_shm_srv_write_alloc_ul_UT(kal_uint32 user_id, kal_uint32** address, kal_uint32* size);
kal_bool ccci_shm_srv_write_done_ul_UT(kal_uint32 user_id, kal_uint32* address, kal_uint32 length);
kal_bool ccci_shm_srv_read_get_dl_UT(kal_uint32 user_id, kal_uint32** address, kal_uint32* size);
kal_bool ccci_shm_srv_read_done_dl_UT(kal_uint32 user_id);

kal_bool ccci_shm_bm_it_init();
void ccci_shm_bm_it_tx(kal_uint32 user_id);
void ccci_shm_bm_it_rx(kal_uint32 user_id);

void ccci_shm_bm_main(ilm_struct *ilm);
kal_bool ccci_shm_bm_it_reg(kal_uint32 user_id);
kal_bool ccci_shm_srv_ul_cb();


void ccci_shm_bm_dl_test(kal_uint32 user_id);
void ccci_shm_bm_dl_test_write2(kal_uint32 user_id);
void ccci_shm_bm_loop_back_test(kal_uint32 user_id);

#endif


