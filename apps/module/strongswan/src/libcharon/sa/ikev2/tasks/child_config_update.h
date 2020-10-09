/*
 * add by xiang
 */

/**
 * @defgroup child_config_update
 * @{ @ingroup tasks_v2
 */

#ifndef CHILD_CONFIG_UPDATE_H_
#define CHILD_CONFIG_UPDATE_H_

typedef struct child_config_update_t child_config_update_t;

#include <library.h>
#include <sa/ike_sa.h>
#include <sa/task.h>
#include <config/peer_cfg.h>


typedef enum child_update_type_t {
	UPDATE_NONE = 0,
	UPDATE_PCSCFv4 = 1,
	UPDATE_PCSCFv6 = 2,
	UPDATE_PCSCFv4v6 =3,
}child_update_type_t;


/**
 * Task of type child_config_update_t, update IKE_SA/CHILD_SA config
 */
struct child_config_update_t {

	/**
	 * Implements the task_t interface
	 */
	task_t task;
};

/**
 * Create a new child_config_update_t task.
 *
 * @param ike_sa		IKE_SA this task works for
 * @param initiator		TRUE if we initiate the delete
 * @return				child_config_update_t task to handle by the task_manager
 */
child_config_update_t *child_config_update_create(ike_sa_t *ike_sa, bool initiator);

#endif 

