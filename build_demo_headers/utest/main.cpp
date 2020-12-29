#include <stdio.h>

#include "my_api.h"

int main()
{
    my_api_state_t cur_s, next_s;

    cur_s = MY_API_STATE_READY;
    printf("utest calling my_api READY:\n");
    next_s = my_api_next_state(cur_s);
    if (next_s != MY_API_STATE_ACTIVE) {
       printf("got state != ACTIVE\n");
       return 1;
    }

    return 0;
}

