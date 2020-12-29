#include <stdio.h>

#include "lib1_priv.h"
#include "mylib1.h"

int mylib1_function(int x) {
    Lib1_op op = LIB1_OP_WRITE;

    printf("mylib1_function, op: %d\n", op);
    return x+1;
}
