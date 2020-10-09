#ifndef __CDIF_PUBLIC_H__
#define __CDIF_PUBLIC_H__

/*****************************************************************************
 * Value Definition                                                          *
 *****************************************************************************/
typedef enum {
    CDIF_CONTROL_CHANNEL_MASTER_TX = 0,
    CDIF_CONTROL_CHANNEL_MASTER_RX,
    CDIF_IPC_MASTER_TX,
    CDIF_IPC_MASTER_RX,
    CDIF_EVG_MASTER_TX,
    CDIF_EVG_MASTER_RX,
    CDIF_MUTEX_MASTER_TX,
    CDIF_MUTEX_MASTER_RX,
    CDIF_EXCEP_MASTER_TX,
    CDIF_EXCEP_MASTER_RX,
#if defined(CDIF_IT)
    CDIF_CCIF_IT_MASTER_TX,
    CDIF_CCIF_IT_MASTER_RX,
#endif    
    CDIF_MAX_CHANNEL,
} CDIF_CHANNEL_T;

typedef enum {
    CDIF_SUCCESS = 0,
    CDIF_NO_PHY_CHANNEL = -1001,
    CDIF_INVALID_PARAM  = -1002,
    CDIF_IN_USE         = -1003,
    CDIF_IN_LISR        = -1004,
    CDIF_NOT_OWNER      = -1005,
} CDIF_RET_VALUE_T;


/*****************************************************************************
 * Data Type Definition                                                      *
 *****************************************************************************/
typedef struct {
    kal_uint32 data[2];
    kal_uint32 channel;
    kal_uint32 reserved;
} CDIF_BUFF_T;

typedef void (*CDIF_CALLBACK)(CDIF_BUFF_T *buff);

typedef struct {
    kal_uint32    state;
    kal_uint32    owner;
    CDIF_CALLBACK funp;
} CDIF_CTRL_T;


/*****************************************************************************
 * public API                                                                *
 *****************************************************************************/
extern void cdif_init();
extern void cdif_init_handshake();
extern kal_int32 cdif_channel_init(kal_uint32 channel, CDIF_CALLBACK funp);
extern kal_int32 cdif_channel_deinit(kal_uint32 channel);
extern kal_int32 cdif_mailbox_write(kal_uint32 channel, kal_uint32 message_id, kal_uint32 reseerved);
extern kal_int32 cdif_mailbox_write_with_polling(kal_uint32 channel, kal_uint32 message_id, kal_uint32 reserved);
extern kal_uint32 cdif_chk_recentry_in_queue(kal_uint32 query_channel, kal_bool ack_if_found);
extern kal_uint32 cdif_init_ready();

#endif    /* __U3G_CCCI_H__ */
