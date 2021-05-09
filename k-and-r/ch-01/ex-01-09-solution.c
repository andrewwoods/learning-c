#include <stdio.h>

/* 
 * Count the number of newlines, blanks, and tabs 
 */
main() {
    int c; 
    int previous; 

    while ((c = getchar()) != EOF) {
        if (c == ' ' && c == previous) {
            continue;
        }
        putchar(c);
        previous = c;
    }

}
