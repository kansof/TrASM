#include "proc.h"

int init_proc(proc_t* proc) {
    set_tryte(proc->ax, 0);
    set_tryte(proc->bx, 0);
    set_tryte(proc->cx, 0);
    set_tryte(proc->dx, 0);

    return EXIT_SUCCESS;
}