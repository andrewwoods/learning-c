#include <stdio.h>

/* 
 * Count the number of newlines, blanks, and tabs 
 */
main() {
    int c; 
    int newline_count = 0;
    int blank_count = 0;
    int tab_count = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++newline_count;
        }
        if (c == '\t') {
            ++tab_count;
        }
        if (c == ' ') {
            ++blank_count;
        }
    }

    printf("newline count: %d\n", newline_count);
    printf("blank count: %d\n", blank_count);
    printf("tab count: %d\n\n", tab_count);
}
