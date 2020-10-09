/* C code produced by gperf version 3.0.4 */
/* Command-line: gperf -m 10 -C -G -D -t  */
/* Computed positions: -k'2-3,6,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif


/*
 * Copyright (C) 2005 Andreas Steffen
 * Hochschule fuer Technik Rapperswil, Switzerland
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#include <string.h>

#include "keywords.h"

struct kw_entry {
    char *name;
    kw_token_t token;
};

#define TOTAL_KEYWORDS 194
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 26
#define MIN_HASH_VALUE 9
#define MAX_HASH_VALUE 404
/* maximum key range = 396, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static const unsigned short asso_values[] =
    {
      405, 405, 405, 405, 405, 405, 405, 405, 405, 405,
      405, 405, 405, 405, 405, 405, 405, 405, 405, 405,
      405, 405, 405, 405, 405, 405, 405, 405, 405, 405,
      405, 405, 405, 405, 405, 405, 405, 405, 405, 405,
      405, 405, 405, 405, 405, 405, 405, 405, 405,  34,
      172, 405,  10, 405,   5, 405, 405, 405, 405, 405,
      405, 405, 405, 405, 405, 405, 405, 405, 405, 405,
      405, 405, 405, 405, 405, 405, 405, 405, 405, 405,
      405, 405, 405, 405, 405, 405, 405, 405, 405, 405,
      405, 405, 405, 405, 405,  75, 405,  22,   2, 141,
       51,   4,   9,   0, 144,   0, 405, 138,  73, 101,
       18,  92,  56,   2,  13,   0,  12, 184,  33, 405,
        0,  50,   0, 405, 405, 405, 405, 405, 405, 405,
      405, 405, 405, 405, 405, 405, 405, 405, 405, 405,
      405, 405, 405, 405, 405, 405, 405, 405, 405, 405,
      405, 405, 405, 405, 405, 405, 405, 405, 405, 405,
      405, 405, 405, 405, 405, 405, 405, 405, 405, 405,
      405, 405, 405, 405, 405, 405, 405, 405, 405, 405,
      405, 405, 405, 405, 405, 405, 405, 405, 405, 405,
      405, 405, 405, 405, 405, 405, 405, 405, 405, 405,
      405, 405, 405, 405, 405, 405, 405, 405, 405, 405,
      405, 405, 405, 405, 405, 405, 405, 405, 405, 405,
      405, 405, 405, 405, 405, 405, 405, 405, 405, 405,
      405, 405, 405, 405, 405, 405, 405, 405, 405, 405,
      405, 405, 405, 405, 405, 405, 405, 405, 405, 405,
      405, 405, 405, 405, 405, 405
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
      case 4:
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      /*FALLTHROUGH*/
      case 2:
        hval += asso_values[(unsigned char)str[1]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

static const struct kw_entry wordlist[] =
  {
    {"rightimei",         KW_RIGHTIMEI},
    {"rightgroups",       KW_RIGHTGROUPS},
    {"pfs",               KW_PFS_DEPRECATED},
    {"aggressive",        KW_AGGRESSIVE},
    {"right",             KW_RIGHT},
    {"lifetime",          KW_KEYLIFE},
    {"rightsourceif",     KW_RIGHTSOURCEIF},
    {"rightsubnet",       KW_RIGHTSUBNET},
    {"rightikeport",      KW_RIGHTIKEPORT},
    {"rightsendcert",     KW_RIGHTSENDCERT},
    {"rightintsubnet",    KW_RIGHTINTSUBNET},
    {"rightimeiformat",   KW_RIGHTIMEIFORMAT},
    {"rightikeportnatt",  KW_RIGHTIKEPORTNATT},
    {"left",              KW_LEFT},
    {"rightidr_apn",      KW_RIGHTIDR_APN},
    {"uniqueids",         KW_UNIQUEIDS},
    {"rightforcetsi64",   KW_RIGHTFORCETSI64},
    {"rightsubnetwithin", KW_RIGHTSUBNET},
    {"leftgroups",        KW_LEFTGROUPS},
    {"leftcert",          KW_LEFTCERT},
    {"leftdns",           KW_LEFTDNS},
    {"max_redirects",   KW_MAX_REDIRECTS },
    {"leftsendcert",      KW_LEFTSENDCERT},
    {"lifepackets",       KW_LIFEPACKETS},
    {"keep_alive",        KW_SETUP_DEPRECATED},
    {"certuribase",       KW_CERTURIBASE},
    {"retrans_tries",     KW_RETRANS_TRIES},
    {"interfaces",        KW_SETUP_DEPRECATED},
    {"retrans_base",      KW_RETRANS_BASE},
    {"leftprotoport",     KW_LEFTPROTOPORT},
    {"interface",         KW_INTERFACE},
    {"virtual_private",   KW_SETUP_DEPRECATED},
    {"server_nocert",     KW_SERVER_NOCERT},
    {"leftintsubnet",     KW_LEFTINTSUBNET},
    {"rightid",           KW_RIGHTID},
    {"rightdns",          KW_RIGHTDNS},
    {"mark_in",           KW_MARK_IN},
    {"rightsigkey",       KW_RIGHTSIGKEY},
    {"reqid",             KW_REQID},
    {"leftca",            KW_LEFTCA},
    {"marginbytes",       KW_MARGINBYTES},
    {"keyingtries",       KW_KEYINGTRIES},
    {"marginpackets",     KW_MARGINPACKETS},
    {"margintime",        KW_REKEYMARGIN},
    {"lifebytes",         KW_LIFEBYTES},
    {"rightsourceip",     KW_RIGHTSOURCEIP},
    {"fragmentation",     KW_FRAGMENTATION},
    {"leftsigkey",        KW_LEFTSIGKEY},
    {"keylife",           KW_KEYLIFE},
    {"rightpcscf",        KW_RIGHTPCSCF},
    {"leftrsasigkey",     KW_LEFTSIGKEY},
    {"rightrsasigkey",    KW_RIGHTSIGKEY},
    {"redirect_enable",   KW_REDIRECT_ENABLE },
    {"use_cfg_vip",       KW_USE_CFG_VIP},
    {"leftcertpolicy",    KW_LEFTCERTPOLICY},
    {"rightprotoport",    KW_RIGHTPROTOPORT},
    {"leftnexthop",       KW_LEFT_DEPRECATED},
    {"rightallowany",     KW_RIGHTALLOWANY},
    {"rightnexthop",      KW_RIGHT_DEPRECATED},
    {"redirect_loop_detect",  KW_REDIRECT_LOOP_DETECT},
    {"crluri",            KW_CRLURI},
    {"leftidr_apn",       KW_LEFTIDR_APN},
    {"mediation",         KW_MEDIATION},
    {"rightfirewall",     KW_RIGHTFIREWALL},
    {"leftupdown",        KW_LEFTUPDOWN},
    {"leftfirewall",      KW_LEFTFIREWALL},
    {"rightforcetsifull", KW_RIGHTFORCETSIFULL},
    {"inactivity",        KW_INACTIVITY},
    {"strictcrlpolicy",   KW_STRICTCRLPOLICY},
    {"device_identity",   KW_DEVICE_IDENTITY},
    {"ldapbase",          KW_CA_DEPRECATED},
    {"mobike",	           KW_MOBIKE},
    {"certreq_critical",  KW_CERTREQ_CRITICAL},
    {"send_del_ike_auth_ntfy_err", KW_SEND_DEL_IKE_AUTH_NTFY_ERR},
    {"type",              KW_TYPE},
    {"esp",               KW_ESP},
    {"lefthostaccess",    KW_LEFTHOSTACCESS},
    {"forceencaps",       KW_FORCEENCAPS},
    {"leftid",            KW_LEFTID},
    {"leftimei",          KW_LEFTIMEI},
    {"hashandurl",        KW_HASHANDURL},
    {"leftsourceif",      KW_LEFTSOURCEIF},
    {"crluri1",           KW_CRLURI},
    {"mediated_by",       KW_MEDIATED_BY},
    {"leftforcetsi64",    KW_LEFTFORCETSI64},
    {"nat_traversal",     KW_SETUP_DEPRECATED},
    {"klipsdebug",        KW_SETUP_DEPRECATED},
    {"retrans_to",        KW_RETRANS_TO},
    {"eap",               KW_CONN_DEPRECATED},
    {"leftimeiformat",    KW_LEFTIMEIFORMAT},
    {"me_peerid",         KW_ME_PEERID},
    {"keepalivedelay",    KW_KEEPALIVEDELAY},
    {"dpdaction",         KW_DPDACTION},
    {"mark_out",          KW_MARK_OUT},
    {"leftallowany",      KW_LEFTALLOWANY},
    {"ike",               KW_IKE},
    {"hidetos",           KW_SETUP_DEPRECATED},
    {"rightintnetmask",   KW_RIGHTINTNETMASK},
    {"installpolicy",     KW_INSTALLPOLICY},
    {"rightcustcpimei",   KW_RIGHTCUSTCPIMEI},
    {"aaa_identity",      KW_AAA_IDENTITY},
    {"righthostaccess",   KW_RIGHTHOSTACCESS},
    {"rekeyfuzz",         KW_REKEYFUZZ},
    {"ocspuri",           KW_OCSPURI},
    {"rightcert",         KW_RIGHTCERT},
    {"rightcustcppcscf6", KW_RIGHTCUSTCPPCSCF6},
    {"pfsgroup",          KW_PFS_DEPRECATED},
    {"ikelifetime",       KW_IKELIFETIME},
    {"rightcustcppcscf4", KW_RIGHTCUSTCPPCSCF4},
    {"also",              KW_ALSO},
    {"rightca",           KW_RIGHTCA},
    {"leftpcscf",         KW_LEFTPCSCF},
    {"leftsourceip",      KW_LEFTSOURCEIP},
    {"leftikeport",       KW_LEFTIKEPORT},
    {"rightauth",         KW_RIGHTAUTH},
    {"mark",              KW_MARK},
    {"leftikeportnatt",   KW_LEFTIKEPORTNATT},
    {"crlcheckinterval",  KW_SETUP_DEPRECATED},
    {"rightid2",          KW_RIGHTID2},
    {"reauth_mbb",        KW_REAUTH_MBB},
    {"leftintnetmask",    KW_LEFTINTNETMASK},
    {"rightgroups2",      KW_RIGHTGROUPS2},
    {"ldaphost",          KW_CA_DEPRECATED},
    {"detach_timeout",    KW_DETACH_TIMEOUT},
    {"no_initct",         KW_NO_INIT_CONTACT},
    {"liveness_check",    KW_LIVENESS_CHECK},
    {"fast_reauth",       KW_FAST_REAUTH},
    {"eap_identity",      KW_EAP_IDENTITY},
    {"cacert",            KW_CACERT},
    {"leftforcetsifull",  KW_LEFTFORCETSIFULL},
    {"charondebug",       KW_CHARONDEBUG},
    {"ocspuri1",          KW_OCSPURI},
    {"rekey",             KW_REKEY},
    {"leftcert2",         KW_LEFTCERT2},
    {"force_keepalive",   KW_SETUP_DEPRECATED},
    {"packetdefault",     KW_SETUP_DEPRECATED},
    {"ocsp",              KW_OCSP},
    {"rightauth2",        KW_RIGHTAUTH2},
    {"compress",          KW_COMPRESS},
    {"rightcertpolicy",   KW_RIGHTCERTPOLICY},
    {"charonstart",       KW_SETUP_DEPRECATED},
    {"leftgroups2",       KW_LEFTGROUPS2},
    {"keyexchange",       KW_KEYEXCHANGE},
    {"leftcustcpimei",    KW_LEFTCUSTCPIMEI},
    {"rightupdown",       KW_RIGHTUPDOWN},
    {"leftca2",           KW_LEFTCA2},
    {"oostimeout",        KW_OOSTIMEOUT},
    {"closeaction",       KW_CLOSEACTION},
    {"leftcustcppcscf6",  KW_LEFTCUSTCPPCSCF6},
    {"leftsubnet",        KW_LEFTSUBNET},
    {"wdrv_keepalive",    KW_WDRV_KEEPALIVE},
    {"leftcustcppcscf4",  KW_LEFTCUSTCPPCSCF4},
    {"encrkeydisplay",    KW_ENCRKEYDISPLAY},
    {"dpdtimeout",        KW_DPDTIMEOUT},
    {"leftsubnetwithin",  KW_LEFTSUBNET},
    {"overridemtu",       KW_SETUP_DEPRECATED},
    {"pcscf_restore",     KW_PCSCF_RESTORE},
    {"dpddelay",          KW_DPDDELAY},
    {"fragicmp",          KW_SETUP_DEPRECATED},
    {"leftid2",           KW_LEFTID2},
    {"modeconfig",        KW_MODECONFIG},
    {"dpd_noreply",       KW_DPD_NOREPLY},
    {"crluri2",           KW_CRLURI2},
    {"postpluto",         KW_SETUP_DEPRECATED},
    {"plutostderrlog",    KW_SETUP_DEPRECATED},
    {"rekeymargin",       KW_REKEYMARGIN},
    {"plutostart",        KW_SETUP_DEPRECATED},
    {"no_eaponly",        KW_NO_EAP_ONLY},
    {"ah",                KW_AH},
    {"auto",              KW_AUTO},
    {"tfc",               KW_TFC},
    {"nocrsend",          KW_SETUP_DEPRECATED},
    {"prepluto",          KW_SETUP_DEPRECATED},
    {"authby",            KW_AUTHBY},
    {"dumpdir",           KW_SETUP_DEPRECATED},
    {"skipcheckcert",     KW_SKIPCHECKCERT},
    {"cachecrls",         KW_CACHECRLS},
    {"plutodebug",        KW_SETUP_DEPRECATED},
    {"reauth",            KW_REAUTH},
    {"rightca2",          KW_RIGHTCA2},
    {"rightcert2",        KW_RIGHTCERT2},
    {"pkcs11initargs",    KW_PKCS11_DEPRECATED},
    {"pkcs11module",      KW_PKCS11_DEPRECATED},
    {"pkcs11keepstate",   KW_PKCS11_DEPRECATED},
    {"ocspuri2",          KW_OCSPURI2},
    {"skipcheckid",       KW_SKIPCHECKID},
    {"xauth_identity",    KW_XAUTH_IDENTITY},
    {"ikedscp",           KW_IKEDSCP,},
    {"leftauth",          KW_LEFTAUTH},
    {"wsharkfiledump",    KW_WSHARKFILEDUMP},
    {"xauth",             KW_XAUTH},
    {"pkcs11proxy",       KW_PKCS11_DEPRECATED},
    {"leftauth2",         KW_LEFTAUTH2},
    {"addrchg_reauth",    KW_ADDRCHG_REAUTH}
  };

static const short lookup[] =
  {
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,   0,
     -1,   1,   2,  -1,   3,  -1,  -1,   4,  -1,  -1,
     -1,   5,   6,   7,   8,   9,  10,  11,  12,  13,
     14,  15,  -1,  -1,  16,  17,  18,  19,  20,  21,
     -1,  22,  23,  -1,  24,  25,  -1,  26,  -1,  27,
     28,  29,  30,  -1,  31,  32,  33,  -1,  34,  35,
     36,  37,  38,  39,  40,  41,  42,  43,  44,  45,
     46,  -1,  -1,  47,  48,  49,  50,  51,  52,  -1,
     53,  54,  55,  -1,  56,  57,  58,  -1,  -1,  -1,
     -1,  59,  60,  61,  62,  63,  -1,  64,  65,  66,
     67,  -1,  68,  -1,  -1,  -1,  69,  70,  71,  -1,
     72,  -1,  73,  -1,  74,  75,  -1,  -1,  -1,  76,
     77,  78,  79,  80,  -1,  -1,  81,  82,  83,  84,
     -1,  -1,  -1,  85,  86,  -1,  87,  88,  -1,  -1,
     89,  -1,  -1,  90,  -1,  91,  92,  93,  94,  95,
     96,  -1,  -1,  97,  98,  -1,  99, 100,  -1, 101,
    102, 103, 104, 105,  -1, 106, 107,  -1, 108, 109,
    110,  -1, 111, 112, 113, 114,  -1, 115, 116, 117,
    118,  -1, 119, 120, 121, 122, 123,  -1, 124, 125,
    126, 127,  -1, 128, 129, 130, 131, 132, 133, 134,
    135, 136,  -1,  -1, 137, 138, 139, 140,  -1, 141,
    142, 143,  -1, 144, 145, 146, 147,  -1, 148, 149,
    150,  -1,  -1, 151,  -1,  -1,  -1, 152,  -1,  -1,
    153, 154, 155, 156,  -1,  -1,  -1,  -1, 157,  -1,
    158,  -1,  -1, 159,  -1, 160,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
    161,  -1,  -1,  -1,  -1, 162, 163,  -1,  -1,  -1,
     -1, 164, 165,  -1,  -1,  -1,  -1,  -1,  -1, 166,
     -1,  -1,  -1, 167,  -1,  -1,  -1,  -1,  -1,  -1,
    168,  -1, 169,  -1, 170,  -1, 171,  -1,  -1,  -1,
     -1, 172, 173,  -1,  -1, 174,  -1, 175,  -1,  -1,
     -1,  -1,  -1, 176,  -1,  -1,  -1,  -1, 177,  -1,
    178, 179,  -1, 180,  -1,  -1,  -1, 181,  -1, 182,
     -1,  -1, 183,  -1, 184,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 185, 186, 187,  -1,  -1, 188,
     -1,  -1, 189,  -1,  -1, 190,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 191,  -1,  -1,  -1, 192,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,  -1,
     -1,  -1,  -1,  -1, 193
  };

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct kw_entry *
in_word_set (str, len)
     register const char *str;
     register unsigned int len;
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = wordlist[index].name;

              if (*str == *s && !strcmp (str + 1, s + 1))
                return &wordlist[index];
            }
        }
    }
  return 0;
}
