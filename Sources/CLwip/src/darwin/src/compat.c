#include "compat/compat.h"

u16_t tcp_sndbuf_c(struct tcp_pcb *pcb){
    return pcb->snd_buf;
}

void tcp_accepted_c(struct tcp_pcb *pcb){
    tcp_accepted(pcb);
}