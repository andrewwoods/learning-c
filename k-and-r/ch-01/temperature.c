#include <stdio.h>

#define LOWER 0 // The lower limit of the table
#define UPPER 300 // The upper limit of the table
#define STEP 20 // The value to increment

/*
 * Produce a table of temperatures converting Fahrenheit to Celsius
 */
main() {
    int fahr;
    float celsius;

    fahr = LOWER;
    while(fahr <= UPPER) {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3d\t%6.1f\n", fahr, celsius);
        fahr += STEP;
    }
}