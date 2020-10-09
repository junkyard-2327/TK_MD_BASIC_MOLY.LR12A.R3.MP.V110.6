#ifndef _TVT_CALLBACK_H
#define _TVT_CALLBACK_H

//extern vt_csr_Q_struct VT_CSR_output_queue;
extern void vt_csr_get_uplink_data_ind(
        kal_uint16 req_len,
        kal_uint8 **pdu_ptr,
        kal_uint16 *pdu_len,
        kal_uint16 *frame_index,
        kal_uint8 tick_count,
        kal_uint8 sim_index
    );

extern void vt_csr_put_downlink_data_ind(kal_uint8 *pdu_ptr, kal_uint16 pdu_len, kal_uint8 sim_index);

extern void vt_csr_consume_uplink_data_ind(kal_uint16 req_len);

#endif /* _TVT_CALLBACK_H */ 

