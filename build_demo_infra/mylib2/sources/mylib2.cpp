#include <stdio.h>

#include "lib2_priv.h"
#include "mylib2.h"

int mylib2_function(int x)
{
    printf("mylib2_function, op: %d\n", LIB2_OP_RECV);
    return x+2;
}
