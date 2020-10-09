

#ifndef _L4C_PS_FT_H
#define _L4C_PS_FT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "l4_msgid.h"

typedef kal_bool (*L4C_PS_TEST_MODE_FUNC)   (kal_uint32);
typedef kal_bool (*L4C_PS_READ_MODE_FUNC)   (kal_uint32);
typedef kal_bool (*L4C_PS_SET_MODE_FUNC)    (local_para_struct *, kal_uint16 *);
typedef kal_bool (*L4C_PS_ACTIVE_MODE_FUNC) (kal_uint32);

extern L4C_PS_TEST_MODE_FUNC const      l4c_ps_test_mode_ft[MSG_ID_L4BPDN_L4C_MSG_FROM_L4BPDN_END - MSG_ID_L4BPDN_L4C_MSG_FROM_L4BPDN_BEGIN - 1];

extern L4C_PS_READ_MODE_FUNC const      l4c_ps_read_mode_ft[MSG_ID_L4BPDN_L4C_MSG_FROM_L4BPDN_END - MSG_ID_L4BPDN_L4C_MSG_FROM_L4BPDN_BEGIN - 1];

extern L4C_PS_SET_MODE_FUNC const       l4c_ps_set_mode_ft[MSG_ID_L4BPDN_L4C_MSG_FROM_L4BPDN_END - MSG_ID_L4BPDN_L4C_MSG_FROM_L4BPDN_BEGIN - 1];

extern L4C_PS_ACTIVE_MODE_FUNC const    l4c_ps_active_mode_ft[MSG_ID_L4BPDN_L4C_MSG_FROM_L4BPDN_END - MSG_ID_L4BPDN_L4C_MSG_FROM_L4BPDN_BEGIN - 1];

#endif /* _L4C_PS_FT_H */



