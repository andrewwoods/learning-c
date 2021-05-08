#include <stdio.h>

main() {
    long num_count = 0;

    while (getchar() != EOF){
        ++num_count;
    }

    printf("num_count=%ld\n", num_count);
}
