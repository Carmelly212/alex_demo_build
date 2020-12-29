#include <stdio.h>

#include "mylib1.h"
#include "mylib2.h"

int main()
{
    int failed = 0, ret;

    printf("itest-1: utest calling mylib1\n");
    ret = mylib1_function(1);
    if (ret == 2) {
       printf("test-1: OK\n");
    } else {
       printf("test-1: FAILED\n");
       failed = 1;
    }

    printf("test-2: utest calling mylib2\n");
    ret = mylib2_function(20);
    if (ret == 22) {
       printf("test-2: OK\n");
    } else {
       printf("test-2: FAILED\n");
       failed = 1;
    }

    return failed;
}

