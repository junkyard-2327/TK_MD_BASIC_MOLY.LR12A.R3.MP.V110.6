/*
 * add by xiang
 */

/**
 * @defgroup child_config_update
 * @{ @ingroup tasks_v2
 */

#ifndef IKE_QUERY_DEVICE_IDENTITY_H
#define IKE_QUERY_DEVICE_IDENTITY_H

typedef struct ike_query_device_identity_t ike_query_device_identity_t;
typedef struct device_identity_payload_t device_identity_payload_t;

#include <library.h>
#include <sa/ike_sa.h>
#include <sa/task.h>
#include <config/peer_cfg.h>


/**
 * Task of type ike_query_device_identity.query device identity
 */
struct ike_query_device_identity_t {

	/**
	 * Implements the task_t interface
	 */
	task_t task;
};

struct device_identity_payload_t {
	u_int16_t length;
	u_int8_t identity_type;
	u_int8_t identity_value[8];
};

/**
 * Create a new ike_query_device_identity_t task.
 *
 * @param ike_sa		IKE_SA this task works for
 * @param initiator		TRUE if we initiate the delete
 * @return				ike_query_device_identity task to handle by the task_manager
 */
ike_query_device_identity_t *ike_query_device_identity_create(ike_sa_t *ike_sa, bool initiator);

#endif

