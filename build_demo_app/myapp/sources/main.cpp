#include <stdio.h>

#include "mylib1.h"
#include "mylib2.h"
#include "my_api.h"

int main()
{
    my_api_state_t state = MY_API_STATE_READY;
    int x, y, n;
    FILE *f;

    n = scanf("ENTER %d %d", &x, &y);
    if (n != 2) {
       printf("failed to read input: x y\n");
       return 1;
    }

    printf("next state: %d\n", my_api_next_state(state));

    printf("myexe calling mylib1_function:\n");
    x = mylib1_function(x);

    printf("myexe calling mylib2_function:\n");
    y = mylib2_function(y);

    f = fopen("myapp.txt", "w");
    if (f == NULL) {
       printf("failed to open out file\n");
       return 1;
    }
    n = fprintf(f, "%d %d\n", x, y);
    fclose(f);
    if (n < 0) {
       printf("failed to write out file\n");
       return 1;
    }

    printf("out: %d %d\n", x, y);

    return 0;
}

