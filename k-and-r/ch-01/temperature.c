#include <stdio.h>

/*
 * Produce a table of temperatures converting Fahrenheit to Celsius
 */
main() {
    int fahr;
    float celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while(fahr < upper) {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3d\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}