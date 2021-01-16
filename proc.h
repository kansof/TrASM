#ifndef PROC_H
#define PROC_H
#include <stdlib.h>
#include <stdint.h>
#define set_trit(t, n, v) t = (((t >> 2*n) << n) + v << 2*n) | (t & (2*n))

typedef struct {
    uint16_t tryte;
    int8_t used;
} tryte_t;

int set_tryte(tryte_t* t, int value) {
    if (value > 3280 || value < -3280)
        return EXIT_FAILURE;

    t->used = 0;
    t->tryte = 0;
    int m;
    while (value > 0) {
        t->tryte <<= 2;
        m = value % 3;
        set_trit(t->tryte, 0, m);
        t->used++;
        value /= 3;
    }

    return EXIT_SUCCESS;
}

typedef struct {
    tryte_t ax[2];
    tryte_t bx[2];
    tryte_t cx[2];
    tryte_t dx[2];
} proc_t;

int init_proc(proc_t* proc);

#endif //PROC_H
