/*************************************************************************
*
*              Copyright 1993 Mentor Graphics Corporation
*                         All Rights Reserved.
*
* THIS WORK CONTAINS TRADE SECRET AND PROPRIETARY INFORMATION WHICH IS
* THE PROPERTY OF MENTOR GRAPHICS CORPORATION OR ITS LICENSORS AND IS
* SUBJECT TO LICENSE TERMS.
*
*************************************************************************/

/************************************************************************
*
*   FILE NAME
*
*       nal_public_apis.h
*
*   COMPONENT
*
*       nal APIs.
*
*   DESCRIPTION
*
*       Release nal interface to users.
*
*   DATA STRUCTURES
*
*
*   DEPENDENCIES
*
*       nal_public_defs.h
*       nal_general_types.h
*
*************************************************************************/

#ifndef nal_PUBLIC_APIS_H
#define nal_PUBLIC_APIS_H

#include "nal_general_types.h"
#include "nal_public_defs.h"


nal_int nal_socket (nal_int16 family, nal_int16 type, nal_int16 protocol);
nal_status nal_bind (nal_int socketd, nal_addr_struct* myaddr, nal_int16 addrlen);
nal_status nal_get_sock_name (nal_int socketd, nal_sockaddr_struct* localaddr, nal_int16* addrlen);
nal_status nal_connect (nal_int socketd, nal_addr_struct* servaddr, nal_int16 addrlen);
nal_status nal_is_connected (nal_int socketd);
nal_int32 nal_send (nal_int socketd, nal_char* buff, nal_uint16 nbytes, nal_int16 flags);
nal_int32 nal_recv (nal_int socketd, nal_char* buff, nal_uint16 nbytes, nal_int16 flags);
nal_int32 nal_send_to (nal_int socketd, nal_char* buff, nal_uint16 nbytes, nal_int16 flags, nal_addr_struct* to, nal_int16 addr_len);
nal_int32 nal_recv_from (nal_int socketd, nal_char* buff, nal_uint16 nbytes, nal_int16 flags, nal_addr_struct* from, nal_int16* addr_len);
nal_int32 nal_sendmsg (nal_int socketd, nal_msghdr* msg, nal_int16 flags);
nal_int32 nal_recvmsg (nal_int socketd, nal_msghdr* msg, nal_int16 flags);
nal_status nal_getsockopt (nal_int socketd, nal_int level, nal_int optname, void* optval, nal_int* optlen);
nal_status nal_setsockopt (nal_int socketd, nal_int level, nal_int optname, void* optval, nal_int optlen);

nal_status nal_listen (nal_int socketd, nal_uint16 backlog);
nal_status nal_accept (nal_int socketd, nal_addr_struct* peer, nal_int16* addrlen);
nal_status nal_shutdown (nal_int socketd, nal_int how);
nal_status nal_close_socket (nal_int socketd);
nal_status nal_close_socket_simple (nal_int socketd);
nal_status nal_fcntl (nal_int socketd, nal_int16 command, nal_int16 argument);
nal_int nal_fd_check (nal_int socketd, nal_fdset* fd);
void nal_fd_init (nal_fdset* fd);
void nal_fd_reset (nal_int socketd, nal_fdset* fd);
void nal_fd_set (nal_int socketd, nal_fdset* fd);
nal_status nal_select (nal_int max_sockets, nal_fdset* readfs, nal_fdset* writefs, nal_fdset* exceptfs, nal_unsigned timeout);

/*NAL Socket Utilities*/
nal_status nal_inet_pton (nal_int family, nal_char* src, void* dst);
nal_status nal_inet_ntop (nal_int family, void* src, nal_char* dst, nal_int size);
nal_uint16 nal_htons (nal_uint16 number);
nal_uint16 nal_ntohs (nal_uint16 number);
nal_uint32 nal_htonl (nal_uint32 number);
nal_uint32 nal_ntohl (nal_uint32 number);

/*NAL 5-tuple Filter*/
nal_status nal_add_filter (nal_int socketd, nal_addr_struct* dest);
nal_status nal_add_gen_filter (nal_int protocol, nal_filter_info_t* info);
nal_status nal_delete_filter (nal_int socketd, nal_int filter_id);
nal_status nal_update_filter (nal_int socketd, nal_int filter_id, nal_addr_struct* dest);

/*NAL Statistic for Filter*/
void nal_fil_dump_all();
void nal_stat_dump_filter_list(nal_int socketd, void *filter_list);

/*NAL tool*/
nal_status nal_tl_ping (nal_int socketd, nal_uint32 timeout, nal_addr_struct* from, nal_addr_struct* to, nal_uint32 stk_id, nal_uint32 stk_id_valid);

nal_status nal_addr_ipv4to6_well_known_prefix(nal_uint8* output_ipv6, const nal_uint8* input_ipv4);

#endif /*nal_PUBLIC_APIS_H*/


