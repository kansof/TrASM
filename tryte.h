#ifndef TRYTE_H
#define TRYTE_H
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define TRITES 8
#define MAX_TRYTE 3280

typedef struct {
    int8_t trits[TRITES];
    int8_t used;
} tryte_t;

int set_tryte(tryte_t* t, int value) {
    if (value > MAX_TRYTE || value < -MAX_TRYTE)
        return EXIT_FAILURE;

    int sgn = 1;
    if (value < 0)
        sgn = -1;
    value *= sgn;
    t->used = 0;
    int m;
    while (value > 0) {
        m = value % 3;
        t->trits[t->used] = m;
        t->used++;
        value /= 3;
    }

    for (int i = 0; i < t->used; i++)
        if (t->trits[i] == 2) {
            t->trits[i] = -1;
            t->trits[i+1] += 1;
        }

    if (sgn == -1)
        for (int i = 0; i < t->used; i++)
            t->trits[i] *= -1;

    return EXIT_SUCCESS;
}

int print_tryte(tryte_t* t) {
    for (int i = 7; i > -1; i--) {
        if (t->trits[i] == -1)
            printf("%c",'-');
        else if (t->trits[i] == 0)
            printf("%c", '0');
        else if (t->trits[i] == 2)
            printf("%c", '2');
        else
            printf("%c", '+');
    }

    return EXIT_SUCCESS;
}

#endif //TRYTE_H
