#include <stdio.h>
#include "proc.h"

int main() {
    proc_t proc;
    init_proc(&proc);
    set_tryte(&proc.ax[0], -3278);
//    tryte_t t;
//    set_tryte(&t, -100);
//    set_trit(t.tryte, 1, 3);
    print_tryte(&proc.ax[0]);
    return EXIT_SUCCESS;
}
