#include <stdio.h>
#include "lib/math-extra.h"

/*
Generic main program

Adapt this to pull in different logic. Put your logic into separate files and
include them as needed.
*/
main()
{
    int i;
    char *message;

    for (i = 0; i <= 25; i++) {
        message = ( is_even(i) ) ? "even" : "odd";
        printf("%d is %s\n", i, message);
    }
}
