#include <stdio.h>

#ifndef TRUE
    #define TRUE 1
#endif

#ifndef FALSE
    #define FALSE 0
#endif

int is_even(int value)
{
    if (value % 2 == 0) {
        return TRUE;
    }

    return FALSE;
}

int is_odd(int value)
{
    return ! is_even(value);
}

