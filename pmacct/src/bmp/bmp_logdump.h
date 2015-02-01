/*  
    pmacct (Promiscuous mode IP Accounting package)
    pmacct is Copyright (C) 2003-2015 by Paolo Lucente
*/

/*
    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/

#ifndef _BMP_LOGDUMP_H_
#define _BMP_LOGDUMP_H_

/* prototypes */
#if (!defined __BMP_LOGDUMP_C)
#define EXT extern
#else
#define EXT
#endif
EXT void bmp_daemon_msglog_init_amqp_host();
EXT void bmp_dump_init_amqp_host();

/* global variables */
EXT struct bgp_peer_log *bmp_peers_log;
EXT u_int64_t bmp_log_seq;
EXT struct timeval bmp_log_tstamp;
EXT char bmp_log_tstamp_str[SRVBUFLEN];
#undef EXT
#endif
