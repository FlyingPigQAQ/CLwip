#ifndef __COMPAT_H__
#define __COMPAT_H__

#include "lwip/tcp.h"

u16_t tcp_sndbuf_c(struct tcp_pcb *pcb);
void tcp_accepted_c(struct tcp_pcb *pcb);
#endif