#ifndef PROC_H
#define PROC_H
#include <stdlib.h>
#include <stdint.h>
#include "tryte.h

typedef struct {
    tryte_t ax[2];
    tryte_t bx[2];
    tryte_t cx[2];
    tryte_t dx[2];
} proc_t;

int init_proc(proc_t* proc) {
    set_tryte(&proc->ax[0], 0);
    set_tryte(&proc->ax[1], 0);
    set_tryte(&proc->bx[0], 0);
    set_tryte(&proc->bx[1], 0);
    set_tryte(&proc->cx[0], 0);
    set_tryte(&proc->cx[1], 0);
    set_tryte(&proc->dx[0], 0);
    set_tryte(&proc->dx[1], 0);

    return EXIT_SUCCESS;
}

#endif //PROC_H
