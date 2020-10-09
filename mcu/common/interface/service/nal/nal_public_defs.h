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

/***************************************************************************
*
*   FILENAME
*
*       nal_public_defs.h
*
*   COMPONENTS
*
*       Sockets
*
*   DESCRIPTION
*
*       This include file will define socket type error return codes, socket
*       options, and socket protocol types.
*
*   DATA STRUCTURES
*
*       None
*
*   DEPENDENCIES
*
*       None
*
***************************************************************************/

#ifndef NAL_PUBLIC_SOCKDEFS_H
#define NAL_PUBLIC_SOCKDEFS_H

#ifdef          __cplusplus
extern  "C" {                               /* C declarations in C++     */
#endif /* _cplusplus */

#include "nal_general_types.h"

#define MOD_NAL MOD_NIL

/* Defines for TRUE/ FALSE conditions */
#define NAL_FALSE         0
#define NAL_TRUE          1

/* Do not redefine these macros if using the Nucleus builder to compile the
* code.  If not using the Nucleus builder, all macros must be explicitly
* configured here; otherwise, configure the respective .metadata file.
*/
#ifndef CFG_NAL_OS_NET_STACK_CFG_H

/* Set this to NU_FALSE to exclude UDP. */
#define NAL_INCLUDE_UDP                     NAL_TRUE

/* Set this to NU_FALSE to exclude TCP. */
#define NAL_INCLUDE_TCP                     NAL_TRUE

/* By default raw IP is not included in the Nucleus NET build.  Set this
   to NU_TRUE to include raw IP.
*/
#if defined(KAL_ON_LINUX)
#define NAL_INCLUDE_IP_RAW                  NAL_TRUE
#else
#define NAL_INCLUDE_IP_RAW                  NAL_FALSE
#endif

/* By default IPv4 is included in the Nucleus NET library.  Change this
   definition to NU_FALSE to exclude IPv4. */
#define NAL_INCLUDE_IPV4                    NAL_TRUE

/* By default IPv6 is not included in the Nucleus NET library.  Change this
   definition to NU_TRUE to include IPv6. Note that IPv6 is a separate product
   and must have been purchased and installed for this option to work. */
#define NAL_INCLUDE_IPV6                    NAL_TRUE


#endif

/*Constant used in service parameters*/
#define NAL_NO_SUSPEND   0

/* A generic catch-all for unused parameters. */
#define NAL_NONE         0

/* Address family equates */
#define NAL_FAM_UNSPEC   0               /* unspecified */
#define NAL_FAM_LOCAL    1
#define NAL_FAM_UNIX     NAL_FAM_LOCAL
#define NAL_FAM_IP       2               /* Internet:  UDP, TCP, etc. */
#define NAL_FAM_ROUTE    17              /* Internal routing protocol */
#define NAL_FAM_LINK     18              /* Link layer interface.     */
#define NAL_FAM_IP6      28              /* IPv6 */

/* These equates are for backwards compatibility */
#define NAL_FAMILY_UNIX      NAL_FAM_UNIX        /* Unix */
#define NAL_FAMILY_IP        NAL_FAM_IP          /* Internet       - valid entry */
#define NAL_FAMILY_IP6       NAL_FAM_IP6         /* IPv6 */
#define NAL_FAMILY_UNSPEC    NAL_FAM_UNSPEC

/* TYPE equates */
#define NAL_TYPE_STREAM    0     /* stream Socket             - valid entry */
#define NAL_TYPE_DGRAM     1     /* datagram Socket           - valid entry */
#define NAL_TYPE_RAW       2     /* raw Socket                - valid entry */
#define NAL_TYPE_SEQPACKET 3     /* sequenced packet Socket */
#define NAL_TYPE_RDM       4     /* reliably delivered msg Socket */

/* PROTOCOL equates */
#define NAL_PROTO_INVALID  0
#define NAL_PROTO_TCP      1
#define NAL_PROTO_UDP      2
#define NAL_PROTO_ICMP     3

/* Shutdown options - bit settings */
#define NAL_SHUT_RD           0x00000001    /* Close read-half */
#define NAL_SHUT_WR           0x00000002    /* Close write-half */
#define NAL_SHUT_RDWR         (NAL_SHUT_RD|NAL_SHUT_WR)

/* Bitmap for Nucleus Net initialized modules */
#define NAL_DHCP_CLIENT_MODULE  0x00000001

/* Select index defines */
#define NAL_SEL_READABLE_IDX    0
#define NAL_SEL_WRITABLE_IDX    1
#define NAL_SEL_MAX_FDSET       2

/* Socket multitask flags */
#define NAL_SCK_RES_BUFF        2

#define     NAL_IGNORE_VALUE  -1 /* Null parameter value     */
#define     NAL_NULL_IP        0    /* Used to initialize ip addresses to NULL */

#if (NAL_INCLUDE_IPV6 == NAL_TRUE)
#define NAL_MAX_ADDR_SIZE    16
#else
#define NAL_MAX_ADDR_SIZE    4
#endif

#define NAL_UDP_MAX_PORTS   30                                  /* Maximum number of UDP ports.     */

#define NAL_TCP_MAX_PORTS   30                                  /* Maximum number of TCP ports.     */

#if NAL_INCLUDE_IP_RAW == NAL_TRUE
#define NAL_IPR_MAX_PORTS   30
#else
#define NAL_IPR_MAX_PORTS   1
#endif

/* Total number of socket descriptors. This should be
   TCP_MAX_PORTS + UDP_MAX_PORTS + IPR_MAX_PORTS */
#define NAL_NSOCKETS        (NAL_TCP_MAX_PORTS + NAL_UDP_MAX_PORTS + NAL_IPR_MAX_PORTS)


/*Window size*/
#define NAL_WINDOW_SIZE 			16000

/*
 * Socket state bits.
 */
#define NAL_SS_NOFDREF              0x0001   /* no file table ref any more */
#define NAL_SS_ISCONNECTED          0x0002   /* socket connected to a peer */
#define NAL_SS_ISCONNECTING         0x0004   /* in process of connecting to peer */
#define NAL_SS_ISDISCONNECTING      0x0008   /* in process of disconnecting */
#define NAL_SS_DEVICEDOWN           0x0010   /* Used only by UDP sockets. Indicates
                                                that the device that was being used by
                                                a UDP socket/port has gone down. */
#define NAL_SS_TIMEDOUT             0x0020   /* The connection timed out */
#define NAL_SS_WAITWINDOW           0x0040   /* Used for the waiting window */
#define NAL_SS_CANTRCVMORE          0x0080   /* Indicate that a socket's read-half is
                                                closed. */
#define NAL_SS_CANTWRTMORE          0x0100   /* The socket's write-half is closed. */
/*
 *  Socket Flag bits.
 */
#define NAL_SF_BLOCK                0x0001  /* Indicates blocking or non-blocking */
#define NAL_SF_LISTENER             0x0002  /* Is a TCP server listening */
#define NAL_SF_ZC_MODE              0x0004  /* Set zerocopy mode for this socket */
#define NAL_SF_V4_MAPPED            0x0008
#define NAL_SF_BIND                 0x0010

/* Defines added for the NAL_Select service call. */
#define NAL_FD_BITS                 32
#define NAL_FD_ELEMENTS     ((NAL_NSOCKETS/NAL_FD_BITS)+1)

#define NAL_SCK_EVENT_Q_ELEMENT_SIZE    3                       /* event queue element size
                                                               do not change the size */

/***************************  SOCKET OPTIONS  *****************************/
/* SOCKET OPTION control flags */
#define NAL_SETFLAG        1
#define NAL_BLOCK          1
#define NAL_NO_BLOCK       0

/* {DCP 1-30-02} Added ZeroCopy mode flags */

#define NAL_SET_ZC_MODE    2
#define NAL_ZC_ENABLE      1
#define NAL_ZC_DISABLE     0

#define NAL_DSCP_LOW_MIN     0
#define NAL_DSCP_LOW_MAX     7

#define NAL_DSCP_LOWHI_MIN   8
#define NAL_DSCP_LOWHI_MAX   15

#define NAL_DSCP_NORMAL_MIN  16
#define NAL_DSCP_NORMAL_MAX  23

#define NAL_DSCP_NORMALHI_MIN 24
#define NAL_DSCP_NORMALHI_MAX 31

#define NAL_DSCP_MEDIUM_MIN   32
#define NAL_DSCP_MEDIUM_MAX   39

#define NAL_DSCP_MEDIUMHI_MIN 40
#define NAL_DSCP_MEDIUMHI_MAX 47

#define NAL_DSCP_HIGH_MIN     48
#define NAL_DSCP_HIGH_MAX     55

#define NAL_DSCP_HIGHHI_MIN   56
#define NAL_DSCP_HIGHHI_MAX   63

/* Note when VLAN is enabled the three bit priority field is extracted from  */
/* the IP_TOS field set for the socket by use of the NAL_Setsockopt function. */
/* The name IP_TOS should not cause confusion when using DiffServ.  The DSCP */
/* will be inserted into the IP_TOS field.  The VLAN priority is computed by */
/* shifting the DSCP value 3 positions to the right (dividing by 8).  This   */
/* correctly maps the 64 DSCP values to the 8 available VLAN priorities.     */

#define NAL_MAP_DSCP_VLAN_PRIORITY(x) (NAL_UINT8)((x) >> 3)



/* IP TOS FIELD Bit Layout | 7 | 6 5 4 3 | 2 1 0 | */
/*                           0 |  T O S  | V L P | */

/* TOS PRECEDENCE HAS BEEN REPLACED BY DIFFSERV VALUES PER RFC2474 */

#define NAL_IP_TOS_NORMAL_SERVICE 0x0
#define NAL_IP_TOS_MIN_DELAY      0x8   /* MIN-DELAY       service = 1 << 3 */
#define NAL_IP_TOS_MAX_THRUPUT    0x10  /* MAX-THRUPUT     service = 2 << 3 */
#define NAL_IP_TOS_MAX_REL        0x20  /* MAX-RELIABILITY service = 4 << 3 */
#define NAL_IP_TOS_MIN_DOLLARS    0x40  /* MIN-DOLLAR COST service = 8 << 3 */


/*
 * Options for use with [gs]etsockopt at the TCP level.
*/

#define NAL_TCP_NODELAY                 1
#define NAL_SO_KEEPALIVE                2
#define NAL_TCP_FIRST_PROBE_TIMEOUT     3
#define NAL_TCP_PROBE_TIMEOUT           4
#define NAL_TCP_MAX_PROBES              5
#define NAL_TCP_MSL                     6
#define NAL_TCP_FIRST_RTO               7
#define NAL_TCP_MAX_RTO                 8
#define NAL_TCP_MAX_R2                  9
#define NAL_TCP_MAX_SYN_R2              10
#define NAL_TCP_DELAY_ACK               11
#define NAL_TCP_KEEPALIVE_WAIT          12
#define NAL_TCP_KEEPALIVE_R2            13
#define NAL_TCP_CONGESTION_CTRL         14
#define NAL_TCP_CFG_SACK                15
#define NAL_TCP_CFG_DSACK               16
#define NAL_TCP_WINDOWSCALE             17
#define NAL_TCP_SND_WINDOWSIZE          18
#define NAL_TCP_RCV_WINDOWSIZE          19
#define NAL_TCP_TIMESTAMP               20
#define NAL_TCP_KEEPINTVL               21
#define NAL_TCP_MAXSEG                  22
#define NAL_TCP_MIN_RTO                 23

#define FOREIGN_MAX_SEGMENT_LEN  536

/*
 * Options for use with [gs]etsockopt at the UDP level.
*/
#define NAL_UDP_NOCHECKSUM              38
#define NAL_UDP_MAX_DATAGRAMS           39


/* PROTOCOL LEVELS */
#define NAL_SOCKET_LEVEL   0


/* Levels used in the call to NAL_Setsockopt */
#define NAL_IPPROTO_IP      0
#define NAL_IPPROTO_ICMP    1
#define NAL_IPPROTO_IGMP    2
#define NAL_IPPROTO_GGP     3
#define NAL_IPPROTO_TCP     6
#define NAL_IPPROTO_EGP     8
#define NAL_IPPROTO_PUP     12
#define NAL_IPPROTO_UDP     17
#define NAL_IPPROTO_IPV6    41
#define NAL_SOL_SOCKET      100

/* Protocol used int call to NAL_Socket with a Raw IP socket */
#define NAL_IPPROTO_HELLO   63
#define NAL_IPPROTO_RAW     255
#define NAL_IPPROTO_OSPF    89

#define NAL_IS_RAW_PROTOCOL(next)      \
        (next == NAL_IPPROTO_RAW) || \
        (next == NAL_IPPROTO_HELLO)  || (next == NAL_IPPROTO_OSPF)

/* IPv6 Defines */
#define     NAL_IPPROTO_HOPBYHOP    0       /* Hop-by-Hop Options */
#define     NAL_IPPROTO_ROUTING     43      /* Routing Header */
#define     NAL_IPPROTO_FRAGMENT    44      /* Fragment Header */
#define     NAL_IPPROTO_ESP         50
#define     NAL_IPPROTO_AUTH        51
#define     NAL_IPPROTO_ICMPV6      58
#define     NAL_IPPROTO_NONEXTHDR   59
#define     NAL_IPPROTO_DEST        60      /* Destination Options Header */

/*
 * Options for use with [gs]etsockopt at the socket level.
 * First word of comment is data type; bool is stored in int.
 */
#define NAL_SO_BROADCAST        1  /* permission to transmit broadcast messages? */
#define NAL_SO_LINGER           2  /* linger on socket close */
#define NAL_SO_REUSEADDR        3  /* socket option to bind multiple addresses to
                                      the same port number. */
#define NAL_SO_RCVBUF           4  /* socket option to set the local TCP Window Size
                                      for a socket. */
#define NAL_SO_AUTO_CLEAR       5  /* socket option to clear all errors on a UDP socket. */

#define NAL_SO_BINDTODEVICE	    6  /*socket option to set the socket to be bound to a specified device*/

/*
 * Options for use with [gs]etsockopt at the IP level.
 * First word of comment is data type; bool is stored in int.
 */
#define NAL_IP_OPTIONS          1    /* buf/ip_opts; set/get IP options */
#define NAL_IP_HDRINCL          2    /* int; header is included with data */
#define NAL_IP_TOS              3    /* int; IP type of service and precedence. */
#define NAL_IP_TTL              4    /* int; IP time to live */
#define NAL_IP_RECVOPTS         5    /* bool; receive all IP opts w/dgram */
#define NAL_IP_RECVRETOPTS      6    /* bool; receive IP opts for response */
#define NAL_IP_RECVDSTADDR      7    /* bool; receive IP dst addr w/dgram */
#define NAL_IP_RETOPTS          8    /* ip_opts; set/get IP options */
#define NAL_IP_MULTICAST_IF     9    /* u_char; set/get IP multicast i/f  */
#define NAL_IP_MULTICAST_TTL    10   /* u_char; set/get IP multicast ttl */
#define NAL_IP_MULTICAST_LOOP   11   /* u_char; set/get IP multicast loopback */
#define NAL_IP_ADD_MEMBERSHIP   12   /* ip_mreq; add an IP group membership */
#define NAL_IP_DROP_MEMBERSHIP  13   /* ip_mreq; drop an IP group membership */
#define NAL_IP_BROADCAST_IF     14   /* u_char; set/get IP broadcast IF */
#define NAL_IP_RECVIFADDR       15   /* bool; recv IP of IF of last RX datagram */

/* IPv6 socket options */
#define NAL_IPV6_UNICAST_HOPS   16
#define NAL_IPV6_MULTICAST_IF   17
#define NAL_IPV6_MULTICAST_HOPS 18
#define NAL_IPV6_MULTICAST_LOOP 19
#define NAL_IPV6_JOIN_GROUP     20
#define NAL_IPV6_LEAVE_GROUP    21
#define NAL_IPV6_RECVHOPLIMIT   22
#define NAL_IPV6_RECVRTHDR      23
#define NAL_IPV6_RECVHOPOPTS    24
#define NAL_IPV6_RECVDSTOPTS    25
#define NAL_IPV6_RECVTCLASS     26
#define NAL_IPV6_RECVPKTINFO    27
#define NAL_IPV6_PKTINFO        28
#define NAL_IPV6_HOPLIMIT       29
#define NAL_IPV6_NEXTHOP        30
#define NAL_IPV6_RTHDR          31
#define NAL_IPV6_HOPOPTS        32
#define NAL_IPV6_DSTOPTS        33
#define NAL_IPV6_RTHDRDSTOPTS   34
#define NAL_IPV6_TCLASS         35
#define NAL_IPV6_V6ONLY         36
#define NAL_IPV6_CHECKSUM       37

/* NOTE ...Please note that Options (optname)for use with [gs]etsockopt
 * at the UDP level use 38- 40 and are defined in udp.h.
 */

/* Additional socket options. */
#define NAL_IP_PKTINFO          41


#define NAL_IP_RECVIFADDR_OP    0x001
#define NAL_SO_REUSEADDR_OP     0x002  /* SO_REUSEADDR has been set on the socket */
#define NAL_SO_IPV6_PKTINFO_OP  0x004
#define NAL_SO_IPV6_HOPLIMIT_OP 0x008
#define NAL_SO_IPV6_TCLASS_OP   0x010
#define NAL_SO_IPV6_RTHDR_OP    0x020
#define NAL_SO_IPV6_HOPOPTS     0x040
#define NAL_SO_IPV6_DESTOPTS    0x080
#define NAL_SO_IPV6_V6ONLY      0x100  /* NAL_FAMILY_IP6 socket for IPv6 comm. only */
#define NAL_SO_IPV6_CHECKSUM    0x200

#define NAL_SO_UDP_NOCHECKSUM   0x400
#define NAL_SO_IP_HDRINCL       0x800
#define NAL_SO_BROADCAST_OP     0x1000
#define NAL_SO_IP_PKTINFO_OP    0x2000

#if (INCLUDE_MSG_PEEK == NAL_TRUE)
/* Read operation flags. */
#define NAL_MSG_PEEK         0x001   /* Leave the received data in queue. */
#endif

/* Define NAL service completion status constants*/
#define  NAL_RUNLEVEL_COMP_INITIALIZING       2
#define  NAL_SUCCESS                          0
#define  NAL_RETURN_ERROR                     -1
#define  NAL_INVALID_ENTRY                    -6
#define  NAL_INVALID_OPERATION                -13
#define  NAL_INVALID_POINTER                  -15
#define  NAL_NO_MEMORY                        -32
#define  NAL_NOT_PRESENT                      -35
#define  NAL_QUEUE_FULL                       -45
#define  NAL_TIMEOUT                          -49
#define  NAL_UNAVAILABLE                      -50
#define  NAL_RUNLEVEL_COMP_FAILED             -84

/* Define NAL Filter error codes*/
#define FIL_IS_REPEATED 		 -100
#define FIL_INVALID_PARM 		 -101
#define FIL_INVALID_SOCK 		 -102
#define FIL_INVALID_DEST 		 -103
#define FIL_HAS_DELETED 		 -104
#define FIL_NEED_BIND			 -105
#define FIL_RUN_OUT				 -106
#define FIL_ADD_FAIL			 -107
#define FIL_DEL_FAIL			 -108
#define FIL_INVALID_PROT 		 -109

#define NAL_DEL_ALL				 -888

/*******************  TRANSFER ERROR CODES ***************************
    The range for NAL transfer error codes is -201 to -250
*/

#define NAL_STRUCT_TRANS_ERROR   -201    /* Fail to transfer the struct type*/

/*******************  SOCKET ERROR CODES  ****************************

 The range for Nucleus NET error codes is -251 to -500.

*/

#define NAL_INVALID_PROTOCOL     -251    /*  Invalid network protocol */
#define NAL_NO_DATA_TRANSFER     -252    /*  Data was not written/read
                                            during send/receive function */
#define NAL_NO_PORT_NUMBER       -253    /*  No local port number was stored
                                            in the socket descriptor */
#define NAL_NO_TASK_MATCH        -254    /*  No task/port number combination
                                            existed in the task table */
#define NAL_NO_SOCKET_SPACE      -255    /*  The socket structure list was full
                                            when a new socket descriptor was
                                            requested */
#define NAL_NO_ACTION            -256    /*  No action was processed by
                                            the function */
#define NAL_NOT_CONNECTED        -257    /*  A connection has been closed
                                            by the network.  */
#define NAL_INVALID_SOCKET       -258    /*  The socket ID passed in was
                                            not in a valid range.  */
#define NAL_NO_SOCK_MEMORY       -259    /*  Memory allocation failed for
                                            internal sockets structure.  */
#define NAL_INVALID_ADDRESS      -260    /*  An incomplete address was sent */
#define NAL_NO_HOST_NAME         -261    /*  No host name specified in a  */
#define NAL_RARP_INIT_FAILED     -262    /*  During initialization RARP failed. */
#define NAL_BOOTP_INIT_FAILED    -263    /*  During initialization BOOTP failed. */
#define NAL_INVALID_PORT         -264    /*  The port number passed in was
                                            not in a valid range. */
#define NAL_NO_BUFFERS           -265    /*  There were no buffers to place */
                                        /*  the outgoing packet in. */
#define NAL_NOT_ESTAB            -266    /*  A connection is open but not in
                                            an established state. */
#define NAL_WINDOW_FULL          -267    /*  The foreign host's in window is
                                            full. */
#define NAL_NO_SOCKETS           -268    /*  No sockets were specified. */
#define NAL_NO_DATA              -269    /*  None of the specified sockets were
                                            data ready.  NAL_Select. */



/* The following errors are reported by the NAL_Setsockopt and NAL_Getsockopt
   service calls. */
#define NAL_INVALID_LEVEL        -270    /*  The specified level is invalid. */
#define NAL_INVALID_OPTION       -271    /*  The specified option is invalid. */
#define NAL_INVAL                -272    /*  General purpose error condition. */
#define NAL_ACCESS               -273    /*  The attempted operation is not   */
                                        /*  allowed on the  socket           */
#define NAL_ADDRINUSE            -274

#define NAL_HOST_UNREACHABLE     -275    /*  Host unreachable */
#define NAL_MSGSIZE              -276    /*  Packet is to large for interface. */
#define NAL_NOBUFS               -277    /*  Could not allocate a memory buffer. */
#define NAL_UNRESOLVED_ADDR      -278    /*  The MAC address was not resolved.*/
#define NAL_CLOSING              -279    /*  The other side in a TCP connection*/
                                        /*  has sent a FIN */
#define NAL_MEM_ALLOC            -280    /* Failed to allocate memory. */
#define NAL_RESET                -281
#define NAL_DEVICE_DOWN          -282    /* A device being used by the socket has
                                           gone down. Most likely because a PPP
                                           link has been disconnected or a DHCP
                                           IP address lease has expired. */
/* These error codes are returned by DNS. */
#define NAL_INVALID_LABEL        -283    /* Indicates a domain name with an
                                           invalid label.                   */
#define NAL_FAILED_QUERY         -284    /* No response received for a DNS
                                           Query. */
#define NAL_DNS_ERROR            -285    /* A general DNS error status. */
#define NAL_NOT_A_HOST           -286    /* The host name was not found. */
#define NAL_INVALID_PARM         -287    /*  A parameter has an invalid value. */

#define NAL_NO_DNS_SERVER        -288    /* No DNS server has been registered with
                                            the stack. */

/* Error codes for DHCP */
#define NAL_DHCP_INIT_FAILED     -289    /*  During initialization DHCP failed. */
#define NAL_DHCP_REQUEST_FAILED  -290

/*  Error codes for BOOTP */
#define NAL_BOOTP_SEND_FAILED          -291
#define NAL_BOOTP_RECV_FAILED          -292
#define NAL_BOOTP_ATTACH_IP_FAILED     -293
#define NAL_BOOTP_SELECT_FAILED        -294
#define NAL_BOOTP_FAILED               -295

#define NAL_NO_ROUTE_TO_HOST     -296    /* ICMP Destination Unreachable specific error */
#define NAL_CONNECTION_REFUSED   -297    /* ICMP Destination Unreachable specific error */
#define NAL_MSG_TOO_LONG         -298    /* ICMP Destination Unreachable specific error */

#define NAL_BAD_SOCKETD          -299
#define NAL_BAD_LEVEL            -300
#define NAL_BAD_OPTION           -301

/* IPv6 Errors */
#define NAL_DUP_ADDR_FAILED      -302
#define NAL_DISCARD_PACKET       -303

/* ICMP Error Codes */
#define NAL_DEST_UNREACH_ADMIN   -304
#define NAL_DEST_UNREACH_ADDRESS -305
#define NAL_DEST_UNREACH_PORT    -306
#define NAL_TIME_EXCEED_HOPLIMIT -307
#define NAL_TIME_EXCEED_REASM    -308
#define NAL_PARM_PROB_HEADER     -309
#define NAL_PARM_PROB_NEXT_HDR   -310
#define NAL_PARM_PROB_OPTION     -311
#define NAL_DEST_UNREACH_NET     -312
#define NAL_DEST_UNREACH_HOST    -313
#define NAL_DEST_UNREACH_PROT    -314
#define NAL_DEST_UNREACH_FRAG    -315
#define NAL_DEST_UNREACH_SRCFAIL -316
#define NAL_PARM_PROB            -317
#define NAL_SOURCE_QUENCH        -318

/* This macro will determine whether an error code is an ICMP error message -
 * if any ICMP error messages are added above, be sure to change this macro
 * to reflect the additions/changes.
 */
#define NAL_ICMP_ERROR_CODE(a)  ( (a <= NAL_DEST_UNREACH_ADMIN) && (a >= NAL_SOURCE_QUENCH) ) ? NAL_TRUE : NAL_FALSE

/* Error Code for NON Blocking  */
#define NAL_WOULD_BLOCK          -319

/* Error Code for TCP Keep-Alive */
#define NAL_CONNECTION_TIMED_OUT -320

/* Return status for NON Blocking connect */
#define NAL_IS_CONNECTING        -321

#define NAL_SOCKET_CLOSED        -322    /* The specified socket has been closed */

/* Error codes for event registration functions. */
#define NAL_TABLE_FULL           -323
#define NAL_NOT_FOUND            -324

/* IPv6 error codes for processing incoming extension headers */
#define NAL_INVAL_NEXT_HEADER    -325
#define NAL_SEND_ICMP_ERROR      -326

/* Error Codes for multicasting */
#define NAL_MULTI_TOO_MANY_SRC_ADDRS -327
#define NAL_NOT_A_GROUP_MEMBER       -328
#define NAL_TOO_MANY_GROUP_MEMBERS   -329

#define NAL_ETH_CABLE_UNPLUGGED      -330
#define NAL_ETH_CABLE_PLUGGED_IN     -331
#define NAL_DEVICE_NOT_DOWN          -332

struct nal_sck_sockaddr_ip_struct
{
    nal_uint8           sck_len;
    nal_uint8           sck_family;
    nal_uint16          sck_port;
    nal_uint32          sck_addr;
    nal_int8            sck_unused[8];
};

typedef struct _nal_fdset
{
    nal_uint32 words[NAL_FD_ELEMENTS];
} nal_fdset;

/* Structure for scatter/gather I/O.  */
typedef struct _nal_iovec
{
    void *iov_base; /* Pointer to data.  */
    nal_size_t iov_len; /* Length of data.  */
}nal_iovec;

/* Structure describing messages sent by
   `sendmsg' and received by `recvmsg'.  */
typedef struct _nal_msghdr
{
    void* msg_name;         /* Address to send to/receive from.  */
    nal_socklen_t msg_namelen;  /* Length of address data.  */

    nal_iovec *msg_iov;         /* Vector of data to send/receive into.  */
    nal_size_t  msg_iovlen;     /* Number of elements in the vector.  (size_t = unsigned long = kal_uint32)*/

    void* msg_control;      /* Ancillary data (eg BSD filedesc passing). */
    nal_size_t msg_controllen;  /* Ancillary data buffer length.
                                !! The type should be socklen_t but the
                                definition of the kernel is incompatible
                                with this.  */

    nal_int msg_flags;          /* Flags on received message.  */
}nal_msghdr;

/* 32-bit structure containing 4-digit ip number */
typedef struct _nal_id_struct
{
    nal_uint8 is_ip_addrs[NAL_MAX_ADDR_SIZE];        /* IP address number */
}nal_id_struct;

typedef struct _nal_addr_struct
{
    nal_int16    family;             /* family = INTERNET */
    nal_uint16   port;               /* machine's port number */
    nal_id_struct id;       /* contains the 4-digit ip number for the host machine */
    nal_char     *name;              /* points to machine's name */
}nal_addr_struct;

typedef struct _nal_sockaddr_struct
{
    nal_id_struct ip_num;     /* the address = the ip num */
    nal_uint16  port_num;             /* the process = the port num */
    nal_int16   family;
}nal_sockaddr_struct;

typedef struct _nal_linger_struct
{
	kal_int32 linger_on;
	kal_uint32 linger_ticks;
}nal_linger_struct;

typedef enum _nal_filter_type_t {
	NAL_FIL_UDP = 0x0,
	NAL_FIL_TCP,
	NAL_FIL_ICMP = 0x10,
	NAL_FIL_OTHER = 0x20
}nal_filter_type_t;

typedef struct _nal_filter_info_t {
	kal_int32 socketd;	
	nal_addr_struct* dest;
	kal_uint8 icmpv4_type;
	kal_uint8 icmpv6_type;
}nal_filter_info_t;


#ifdef          __cplusplus
}
#endif /* _cplusplus */

#endif  /* NAL_PUBLIC_SOCKDEFS_H */
