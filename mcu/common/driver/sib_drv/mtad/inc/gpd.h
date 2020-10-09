#ifndef __MTAD_GPD_H__
#define __MTAD_GPD_H__

#define HDMA_MAX_XFER_LEN		0xFFFF

#define HDMA_MAX_TX_MEM			5*1024//*1024
#define HDMA_MAX_RX_MEM			5*1024//*1024

#define HDMA_MAX_DUMMY_MEM		10*1024

#define HDMA_MAX_GPD_EXT_LEN		0xFF
#define HDMA_MAX_BD_EXT_LEN		0xFF

#define HDMA_MAX_GPD_UINT		0xFFFF
#define HDMA_MAX_BD_UINT		0xFFFF

#define HDMA_MAX_TGPD_NUM		256	
#define HDMA_MAX_RGPD_NUM		256
#define HDMA_MAX_TBD_NUM		512
#define HDMA_MAX_RBD_NUM		512

#define HDMA_RX_TST_PADDDING		10	//Used in TX test, let the prepared RX buffer larger than the expected size to test the RX data timeout

typedef enum{
	HDMA_BUF0,
	HDMA_BUF1,
	HDMA_BUF_BOTH,
} mtad_hdma_buf_mode_t;

typedef enum{
	HDMA_TST_TX,
	HDMA_TST_RX,
} mtad_hdma_tst_mode_t;

typedef struct mtad_hdma_tgpd_s {
	kal_uint8 hwo:1;
	kal_uint8 bdp:1;
	kal_uint8 bps:1;
	kal_uint8 resv1:4;
	kal_uint8 ioc:1;
	kal_uint8 cksum;
	kal_uint16 resv2;
	kal_uint32 nextPtr;
	kal_uint32 bufPtr;
	kal_uint16 bufLen;
	kal_uint8 extLen;
	kal_uint8 resv3;
	kal_uint8 extBuf[HDMA_MAX_GPD_EXT_LEN + 1];	// Extension field
} mtad_hdma_tgpd_t;

typedef struct mtad_hdma_rgpd_s {
	kal_uint8 hwo:1;
	kal_uint8 bdp:1;
	kal_uint8 bps:1;
	kal_uint8 resv1:4;
	kal_uint8 ioc:1;
	kal_uint8 cksum;
	kal_uint16 allowBufLen;
	kal_uint32 nextPtr;
	kal_uint32 bufPtr;
	kal_uint16 bufLen;
	kal_uint16 resv2;
} mtad_hdma_rgpd_t;

typedef struct mtad_hdma_tbd_s {
	kal_uint8 eol:1;
	kal_uint8 resv1:7;
	kal_uint8 cksum;
	kal_uint16 resv2;
	kal_uint32 nextPtr;
	kal_uint32 bufPtr;
	kal_uint16 bufLen;
	kal_uint8 extLen;
	kal_uint8 resv3;
	kal_uint8 extBuf[HDMA_MAX_BD_EXT_LEN + 1];	// Extension field
} mtad_hdma_tbd_t;

typedef struct mtad_hdma_rbd_s {
	kal_uint8 eol:1;
	kal_uint8 resv1:7;
	kal_uint8 cksum;
	kal_uint16 allowBufLen;
	kal_uint32 nextPtr;
	kal_uint32 bufPtr;
	kal_uint16 bufLen;
	kal_uint16 resv2;
} mtad_hdma_rbd_t;

typedef struct mtad_hdma_tx_queue_s {
	mtad_hdma_tgpd_t *gpdHeadPtr;
	mtad_hdma_tgpd_t *lastLoadedGpdPtr;
	kal_uint32 count;
} mtad_hdma_tx_queue_t;

typedef struct mtad_hdma_rx_queue_s {
	mtad_hdma_rgpd_t *gpdHeadPtr;
	mtad_hdma_rgpd_t *lastLoadedGpdPtr;
	kal_uint32 count;
} mtad_hdma_rx_queue_t;

typedef struct mtad_hdma_tgpd_pool_s{
	kal_uint32 gpdUsed;
	kal_uint32 gpdMax;
	mtad_hdma_tgpd_t *gpd;
} mtad_hdma_tgpd_pool_t;

typedef struct mtad_hdma_rgpd_pool_s{
	kal_uint32 gpdUsed;
	kal_uint32 gpdMax;
	mtad_hdma_rgpd_t *gpd;
} mtad_hdma_rgpd_pool_t;

typedef struct mtad_hdma_tbd_pool_s{
	kal_uint32 bdUsed;
	kal_uint32 bdMax;
	mtad_hdma_tbd_t *bd;
} mtad_hdma_tbd_pool_t;

typedef struct mtad_hdma_rbd_pool_s{
	kal_uint32 bdUsed;
	kal_uint32 bdMax;
	mtad_hdma_rbd_t *bd;
} mtad_hdma_rbd_pool_t;

typedef struct mtad_hdma_gpd_bd_param_s{
	kal_uint32 gpdLenLimit;
	kal_uint32 gpdExtLen;
	kal_uint32 bdLenLimit;
	kal_uint32 bdExtLen;
	kal_uint32 bdNumLimit;
} mtad_hdma_gpd_bd_param_t;

typedef struct mtad_hdma_gpd_config_s{
	kal_uint8 bps:1;
	kal_uint8 ioc:1;
	kal_uint8 resv:6;
} mtad_hdma_gpd_config_t;


#endif
