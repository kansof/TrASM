#include <stdio.h>
#include "proc.h"

int main() {
    tryte_t t;
    set_tryte(&t, 100);
//    set_trit(t.tryte, 1, 3);
    printf("%d %d", t.tryte, t.used);
    return EXIT_SUCCESS;
}
