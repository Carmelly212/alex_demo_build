#ifndef _MY_API_INC_
#define _MY_API_INC_

typedef enum my_api_state
{
    MY_API_STATE_READY = 1,
    MY_API_STATE_ACTIVE,
    MY_API_STATE_DONE,
} my_api_state_t;

static inline my_api_state_t
my_api_next_state(my_api_state_t cur_state)
{
    switch(cur_state) {
    case MY_API_STATE_READY:
        return MY_API_STATE_ACTIVE;
    case MY_API_STATE_ACTIVE:
        return MY_API_STATE_DONE;
    case MY_API_STATE_DONE:
    default:
        return MY_API_STATE_READY;
    }
}

#endif
