#ifndef __DRV_GDMA_H__
#define __DRV_GDMA_H__

/**
 * GDMA channel definition
 */
typedef enum {
    GDMA_CH_00,
    GDMA_CH_01,
    GDMA_CH_MAX,
} gdma_channel_type_e;

/**
 * A structure to describe GPD source and destination address
 */
typedef struct gdma_gpd_addr_s {
    kal_uint32 gdma_src_Gpd;
    kal_uint32 gdma_dst_Gpd;
} gdma_gpd_addr_t;

/**
 * Operation mode of GDMA
 */
typedef enum {
    GDMA_MOD_LINKLIST,
    GDMA_MOD_BASIC,
    GDMA_MOD_DESCRIPTOR,
    GDMA_MOD_MEMSET,
} gdma_mod_e;

/**
 * Bus width definition
 * For best memory bandwidth utilization, use GDMA_BUS_WIDTH_64BITS
 */
typedef enum {
    GDMA_BUS_WIDTH_8BITS,   // reserved, DO NOT USE
    GDMA_BUS_WIDTH_16BITS,  // reserved, DO NOT USE
    GDMA_BUS_WIDTH_32BITS,  // reserved, DO NOT USE
    GDMA_BUS_WIDTH_64BITS,
    GDMA_BUS_WIDTH_MAX,
} gdma_bus_width_e;

/**
 * Burst length definition
 * For best memory bandwidth utilization, use GDMA_BST_SIZE_256B
 */
typedef enum {
    GDMA_BST_SIZE_1B, // reserved, DO NOT USE
    GDMA_BST_SIZE_2B, // reserved, DO NOT USE
    GDMA_BST_SIZE_4B, // reserved, DO NOT USE
    GDMA_BST_SIZE_8B, // reserved, DO NOT USE
    GDMA_BST_SIZE_16B, // reserved, DO NOT USE
    GDMA_BST_SIZE_32B, // reserved, DO NOT USE
    GDMA_BST_SIZE_64B, // reserved, DO NOT USE
    GDMA_BST_SIZE_128B, // reserved, DO NOT USE
    GDMA_BST_SIZE_256B,
} gdma_bst_size_e;

/**
 * A structure to describe bus width of source and destination
 */
typedef struct gdma_bus_width_s {
    gdma_bus_width_e src_bus_width;
    gdma_bus_width_e dst_bus_width;
} gdma_bus_width_t;

/**
 * Channel priority definition
 */
typedef enum {
    GDMA_PRI_HIGH,
    GDMA_PRI_MEDIAN,
    GDMA_PRI_LOW,
} gdma_priority_e;

/**
 * A structure to describe configuration settings
 */
typedef struct gdma_cfg_s {
    gdma_channel_type_e gdma_sel_channel;
    gdma_mod_e          gdma_mod;
    gdma_gpd_addr_t     gdma_gpd_addr;
    kal_uint32          gdma_mod_basic_tx_size;
    kal_uint16          gdma_other_para;
    gdma_bus_width_t    gdma_bus_width;
    gdma_priority_e     gdma_priority;
    kal_bool            gdma_gpd_cs_en;
    kal_bool            gdma_cs_en;
    kal_bool            gdma_bd_dat_cs_en;
    gdma_bst_size_e     gdma_bst_size;
} gdma_cfg_t;

/**
 * Command type of GDMA
 */
typedef enum {
    GDMA_START,
    GDMA_RESUME,
} gdma_start_cmd_type_e;

/**
 * Channel status
 */
typedef enum {
    GDMA_STARTED,
    GDMA_STOP,
} gdma_status_type_e;

/**
 * Interrupt type for callback registration
 */
typedef enum {
    GDMA_SRC_DONE           = 0,
    GDMA_DST_DONE           = 4,
    GDMA_SRC_QUE_EMPTY      = 8,
    GDMA_DST_QUE_EMPTY      = 12,
    GDMA_LEN_ERR            = 16,
    GDMA_ALO_LEN_ERR        = 20,
    GDMA_BD_CS_ERR          = 24,
    GDMA_GPD_CS_ERR         = 28,
    GDMA_REGION_ACCESS_ERR  = 32,
    GDMA_INT_TYPE_MAX       = 36,
} gdma_int_type_e;

/**
 * MDGDMA common queue
 */
#define MDGDMA_CQ_SIZE  50

typedef struct gdma_cq_request_s {
    kal_uint8  handle;    /*user request handle enum */
    kal_uint16 dataSize;
    kal_uint32 srcAddr;
    kal_uint32 dstAddr;
}gdma_cq_rqst_t;

typedef struct gdma_cq_s {
    gdma_cq_rqst_t      gdma_cq[MDGDMA_CQ_SIZE];
    kal_uint8           gdma_cq_write;
    kal_uint8           gdma_cq_read;
    kal_bool            gdma_cq_active;
} gdma_cq_t;

/**
 * MDGDMA common queue request return value
 */
typedef enum {
    GDMA_CQ_SUCCESS = 0,
    GDMA_CQ_FAIL_HANDLE_ERROR,
    GDMA_CQ_FAIL_ADDR_ERROR,
    GDMA_CQ_FAIL_SIZE_ERROR,
    GDMA_CQ_FAIL_CQ_FULL,
} gdma_cq_rqst_rtn_e;

/**
 * MDGDMA common queue APB access request handle
 */
typedef enum {
    GDMA_CQ_HANDLE_START = 0,
    GDMA_CQ_HANDLE_00 = GDMA_CQ_HANDLE_START,
    GDMA_CQ_HANDLE_01,
    GDMA_CQ_HANDLE_02,
    GDMA_CQ_HANDLE_03,
    GDMA_CQ_HANDLE_04,
    GDMA_CQ_HANDLE_05,
    GDMA_CQ_HANDLE_06,
    GDMA_CQ_HANDLE_07,
    GDMA_CQ_HANDLE_08,
    GDMA_CQ_HANDLE_09,
    GDMA_CQ_HANDLE_END,                                       //APB access request handle END
    GDMA_CQ_MEMSET_HANDLE_START = GDMA_CQ_HANDLE_END,         //memset request handle ID START
    GDMA_CQ_MEMSET_HANDLE_00 = GDMA_CQ_MEMSET_HANDLE_START,
    GDMA_CQ_MEMSET_HANDLE_01,
    GDMA_CQ_MEMSET_HANDLE_02,
    GDMA_CQ_MEMSET_HANDLE_03,
    GDMA_CQ_MEMSET_HANDLE_04,
    GDMA_CQ_MEMSET_HANDLE_05,
    GDMA_CQ_MEMSET_HANDLE_06,
    GDMA_CQ_MEMSET_HANDLE_07,
    GDMA_CQ_MEMSET_HANDLE_08,
    GDMA_CQ_MEMSET_HANDLE_09,
    GDMA_CQ_MEMSET_HANDLE_END,
} gdma_cq_rqst_handle_e;

/**
 * MDGDMA common queue request status
 */
typedef enum {
    GDMA_CQ_RQST_STS_UNHANDLE,
    GDMA_CQ_RQST_STS_HANDLED,
    GDMA_CQ_RQST_STS,
} gdma_cq_rqst_sts_e;

/**
 * A structure to describe configuration settings for callback registration
 */
typedef struct gdma_cbType_s {
    gdma_channel_type_e     gdma_channel;
    gdma_int_type_e         gdma_int_type;
} gdma_cbType_t;

/**
 * A structure to describe callback information
 */
typedef struct gdma_cbParameter_s {
    gdma_channel_type_e gdma_channel;
    gdma_int_type_e     gdma_int_type;
    gdma_gpd_addr_t     gpd_info;
} gdma_cbParameter_t;

/**
 * Prototype of callback function
 */
typedef void (*gdma_pcb_f)(gdma_cbParameter_t *gpd_info);

/**
 * System MCU type
 */
typedef enum {
    GDMA_MCU_IA,
    GDMA_MCU_USIP0,
} gdma_irq2mcu_type_e;

/**
 * MDGDMA clock operation command
 */
typedef enum {
    GDMA_CLK_ENABLE,
    GDMA_CLK_DISABLE,
} gdma_clk_type_e;

/**
 * Initial all GDMA driver
 */
kal_bool drv_gdma_init(void);

#define DRV_GDMA_INITIALIZATION() \
    drv_gdma_init();

///////////////////////////////////////////////////////////////////////////////
/// \name MDGDMA
///////////////////////////////////////////////////////////////////////////////
 
///@{

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used to configure the MDGDMA.
/// \param [in] gdma_cfg    Configuration settings
///
/// \return                 KAL_TRUE if configuring is successful.
/// \return                 KAL_FALSE if configuring is failed.
///////////////////////////////////////////////////////////////////////////////
kal_bool drv_gdma_set_config(gdma_cfg_t *gdma_cfg);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used to start a channel of MDGDMA.
/// \param [in] chId        Channel ID
/// \param [in] cmd         Command type
///
/// \return                 KAL_TRUE if start command is issueed.
/// \return                 KAL_FALSE if  failed to issue start command.
///////////////////////////////////////////////////////////////////////////////
kal_bool drv_gdma_start_cmd(gdma_channel_type_e chId, gdma_start_cmd_type_e cmd);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used to stop a channel of MDGDMA.
///
/// \param [in] chId        Channel ID
///////////////////////////////////////////////////////////////////////////////
void drv_gdma_stop_cmd(gdma_channel_type_e chId);

///////////////////////////////////////////////////////////////////////////////
/// \brief                      This function is to get current GPD source and
///                             destination address.
/// \param [in] chId            Channel ID
/// \param [in] cur_gpd_addr    Source and destination address of current GPD
///////////////////////////////////////////////////////////////////////////////
void drv_gdma_get_curGPD(gdma_channel_type_e chId, gdma_gpd_addr_t *cur_gpd_addr);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used to get channel status of MDGDMA.
///
/// \param [in] chId        Channel ID
///
/// \return                 GDMA_STARTED if channel \p chId is started.
/// \return                 GDMA_STOP if channel \p chId is started.
///////////////////////////////////////////////////////////////////////////////
gdma_status_type_e drv_gdma_get_status(gdma_channel_type_e chId);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used to register callback function
///                         of MDGDMA when specified interrupt is triggered.
///
/// \param [in] cbType      Callback type
/// \param [in] callback    User defined callback function
/// \return                 KAL_TRUE if registration is successful.
/// \return                 KAL_FALSE if registration is failed.
///////////////////////////////////////////////////////////////////////////////
kal_bool drv_gdma_register_callback(gdma_cbType_t *cbType, gdma_pcb_f callback);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used to set priority of a channel
///
/// \param [in] chId        Channel ID
/// \param [in] priority    Channel priority
///////////////////////////////////////////////////////////////////////////////
void drv_gdma_set_priority(gdma_channel_type_e chId, gdma_priority_e priority);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used by user to notify GDMA
///                         that channel operation is done.
///
/// \param [in] chId        Channel ID
///////////////////////////////////////////////////////////////////////////////
void drv_gdma_notify_done(gdma_channel_type_e chId);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used by user to request GDMA commnon queue
///                          for APB access.
///
/// \Note                 param [in] dataSize   User data size (MAX data size is 0xFFFFFF) 
///
/// \param [in] handle     User request
/// \param [in] srcAddr    User data source address
/// \param [in] dstAddr    User data destination address
/// \param [in] dataSize   User data size (MAX data size is 0xFFFFFF)
/// \return                     GDMA_CQ_SUCCESS if request is successful.
/// \return                     GDMA_CQ_FAIL_HANDLE_ERROR if request is failed.
/// \return                     GDMA_CQ_FAIL_SIZE_ERROR if request is failed.
/// \return                     GDMA_CQ_FAIL_CQ_FULL if request is failed.
///////////////////////////////////////////////////////////////////////////////
gdma_cq_rqst_rtn_e drv_gdma_cq_request(gdma_cq_rqst_handle_e handle, kal_uint32 srcAddr, kal_uint32 dstAddr, kal_uint32 dataSize);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used by user to polling request status
///                          until the request is done.
///
/// \Note                  Blocking API
///                          
/// \param [in] handle  User request
/// \return                 KAL_TRUE if request is done.
///
///////////////////////////////////////////////////////////////////////////////
kal_bool drv_gdma_cq_rqst_polling(gdma_cq_rqst_handle_e handle);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used by user to polling request current status
///                          
/// \Note                  No-Blocking API
///
/// \param [in] handle  User request
/// \return                 KAL_TRUE if request is done.
/// \return                 KAL_FALSE if request is not done.
///////////////////////////////////////////////////////////////////////////////
kal_bool drv_gdma_cq_rqst_done(gdma_cq_rqst_handle_e handle);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  MDGDMA common queue callback function
///////////////////////////////////////////////////////////////////////////////
void drv_gdma_cq_cb(gdma_cbParameter_t *gpd_info);

kal_bool drv_gdma_register_cq_cb(gdma_cbType_t *cbType, gdma_pcb_f callback);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used by user to request GDMA commnon queue
///                          for memset().
///
/// \Note                 param [in] dataSize   User data size (MAX data size is 0xFFFFFF, 16MB) 
///                          param [in] dstAddr    User data destination address (must be 4 Bytes align)
///
/// \param [in] handle      User request
/// \param [in] value       Memset pattern (This value will be cast to [unsigned char].)
/// \param [in] dstAddr    User data destination address (must be 4 Bytes align)
/// \param [in] dataSize   User data size (MAX data size is 0xFFFFFF, 16MB)
/// \return                     GDMA_CQ_SUCCESS if request is successful.
/// \return                     GDMA_CQ_FAIL_HANDLE_ERROR if request is failed.
/// \return                     GDMA_CQ_FAIL_SIZE_ERROR if request is failed.
/// \return                     GDMA_CQ_FAIL_CQ_FULL if request is failed.
///////////////////////////////////////////////////////////////////////////////
gdma_cq_rqst_rtn_e drv_gdma_cq_memset_request(gdma_cq_rqst_handle_e handle, kal_uint32 value, kal_uint32 dstAddr, kal_uint32 dataSize);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used by user to polling request status
///                          until the request is done.
///
/// \Note                  Blocking API
///                          
/// \param [in] handle  User request
/// \return                 KAL_TRUE if request is done.
///
///////////////////////////////////////////////////////////////////////////////
kal_bool drv_gdma_cq_memset_rqst_polling(gdma_cq_rqst_handle_e handle);

kal_bool drv_gdma_cq_is_full(void);

kal_bool drv_gdma_cq_is_empty(void);

void drv_gdma_encq(gdma_cq_rqst_handle_e handle, kal_uint32 srcAddr, kal_uint32 dstAddr, kal_uint32 dataSize);

gdma_cq_rqst_t * drv_gdma_decq(void);


void drv_gdma_lock_sleep();

void drv_gdma_unlock_sleep();

void HDMA_PDN_SET(kal_uint32 channel);
void HDMA_PDN_CLR(kal_uint32 channel);
kal_bool HDMA_PDN_STS(kal_uint32 channel);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used by user to set GDMA 
///                         FDMA channel 1 irq to IA or uSIP0.
///
/// \param [in] mcuType        mcu type
///////////////////////////////////////////////////////////////////////////////
void drv_gdma_irq2mcu_config(gdma_irq2mcu_type_e mcuType);

///////////////////////////////////////////////////////////////////////////////
/// \brief                  This function is used by user to enable or disable
///                          GDMA clock by channel.
///
/// \param [in] chId    GDMA channel ID
/// \param [in] cmd    Enable/Disable clock command
///////////////////////////////////////////////////////////////////////////////
void drv_gdma_clk_config(gdma_channel_type_e chId, gdma_clk_type_e cmd);


///@}

#endif /* end of __DRV_GDMA_H__ */
